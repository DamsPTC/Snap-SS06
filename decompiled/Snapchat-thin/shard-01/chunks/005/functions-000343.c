/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011374f4; end: 1011375db;  */

/* WARNING: Possible PIC construction at 0x00010113756c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101137594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011375bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101137598) */
/* WARNING: Removing unreachable block (ram,0x000101137570) */
/* WARNING: Removing unreachable block (ram,0x0001011375c0) */

void FUN_1011374f4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126dbc50;
  func_0x000107c61168(PTR_PTR_1126dbc50);
  lVar2 = param_1;
  func_0x000107c6148c(param_1,puVar1);
  if (lVar2 != 0) {
    param_1 = 0x69566c6c6f726373;
    func_0x000107c5fadc(0x69566c6c6f726373,0xea00000000007765);
    func_0x000107c5e338();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011375dc; end: 10113768f;  */

undefined * FUN_1011375dc(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    param_1 = PTR_PTR_1126ae568;
    func_0x000107c610f8(PTR_PTR_1126ae568);
    func_0x000107c453e4();
    puVar1 = param_1;
    func_0x000107c5cb24();
    func_0x000107c61180();
  }
  else {
    FUN_101116c08(param_1,param_2);
    puVar1 = param_1;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c615e8(param_3);
  }
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 101137690; end: 101137737;  */

void FUN_101137690(double param_1,long param_2)

{
  code *pcVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101137730);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101137734);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101137738);
      (*pcVar1)();
    }
    FUN_1011157c8((long)param_1);
    func_0x000107c615e8(param_2);
  }
  return;
}



/* Entry: 101137738; end: 10113775f; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController initWithNibName:bundle:] */

void FUN_101137738(void)

{
  undefined8 in_x3;
  
  func_0x000107c61174(in_x3);
  FUN_101137d7c();
  return;
}



/* Entry: 101137760; end: 101137787; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController initWithCoder:] */

void FUN_101137760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000101137e94();
  return;
}



/* Entry: 101137788; end: 101137797; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101137788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_112d5f6e0));
  return;
}



/* Entry: 101137798; end: 1011377a7; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101137798(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d5f720));
  return;
}



/* Entry: 1011377a8; end: 1011377af; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController autoSizingEnabled] */

undefined8 FUN_1011377a8(void)

{
  return 0;
}



/* Entry: 1011377b0; end: 1011377bb; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController trayFeatureName] */

void FUN_1011377b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (&PTR____CFConstantStringClassReference_110da0318);
  return;
}



/* Entry: 1011377bc; end: 10113782f; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController handleArrowTapWithDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011377bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 101137830; end: 101137837; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController handleGroupMessageTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101137830(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 1;
  uStack_40 = param_1;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101137838; end: 10113788b; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController handleUpdateBitmojiTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101137838(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 9;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10113788c; end: 101137893; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController handleLongPressStoryWithUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10113788c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000107c5faec();
  uStack_38 = 5;
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_40 = param_2;
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 101137894; end: 101137957; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController handleShareLocationWithDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101137894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  uStack_48 = 6;
  uStack_60 = param_1;
  uStack_58 = uVar2;
  uStack_50 = param_2;
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(&uStack_60);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 101137958; end: 10113795f; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController handleCloseButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101137958(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 1;
  uStack_28 = 9;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101137960; end: 101137967; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController handleUserMessageTapWithUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101137960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000107c5faec();
  uStack_38 = 7;
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_40 = param_2;
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 101137968; end: 1011379df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101137968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000107c5faec();
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_40 = param_2;
  uStack_38 = param_4;
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 1011379e0; end: 1011379e7; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController handleMapSnapTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011379e0(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 4;
  uStack_28 = 9;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1011379e8; end: 1011379ef; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController handleWalkingTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011379e8(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 2;
  uStack_40 = param_1;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1011379f0; end: 1011379f7; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController handleDrivingTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011379f0(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 3;
  uStack_40 = param_1;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1011379f8; end: 1011379ff; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController handleSeeMoreTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011379f8(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 4;
  uStack_40 = param_1;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101137a00; end: 101137a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101137a00(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = param_1;
  uStack_28 = param_3;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101137a50; end: 101137ac7; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController handleStoryTapWithDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101137a50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 8;
  uStack_50 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 101137ac8; end: 101137acf; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController handleCreateBitmojiTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101137ac8(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 2;
  uStack_28 = 9;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101137ad0; end: 101137b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101137ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 9;
  uStack_40 = param_3;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101137b24; end: 101137b2b; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_101137b24(void)

{
  return 0;
}



/* Entry: 101137b2c; end: 101137b5f;  */

void FUN_101137b2c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101137b60; end: 101137c07; -[_TtC32MapFriendFocusViewImplementation38GroupFocusViewCollectionViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101137b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101137bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101137bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101137bec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101137bd0) */
/* WARNING: Removing unreachable block (ram,0x000101137bb0) */
/* WARNING: Removing unreachable block (ram,0x000101137b80) */
/* WARNING: Removing unreachable block (ram,0x000101137bf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101137b60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d5f6d8));
  return;
}



/* Entry: 101137c08; end: 101137c27;  */

void FUN_101137c08(void)

{
  func_0x000107c61168(&PTR_PTR_1127b0d68);
  return;
}



/* Entry: 101137c28; end: 101137d1f;  */

/* WARNING: Possible PIC construction at 0x000101137c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101137c9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101137c8c) */
/* WARNING: Removing unreachable block (ram,0x000101137ca0) */
/* WARNING: Removing unreachable block (ram,0x000101137ce0) */
/* WARNING: Removing unreachable block (ram,0x000101137cb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101137c28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c48af4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101137d20; end: 101137d23;  */

/* WARNING: Possible PIC construction at 0x000101137c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101137c9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101137c8c) */
/* WARNING: Removing unreachable block (ram,0x000101137ca0) */
/* WARNING: Removing unreachable block (ram,0x000101137ce0) */
/* WARNING: Removing unreachable block (ram,0x000101137cb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101137d20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c48af4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101137d24; end: 101137d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101137d24(void)

{
  char *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d5f708);
  func_0x0001000e2834(0);
  pcVar1 = "";
  func_0x000107c60124("",0,2);
  func_0x000107c4d664(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 101137d7c; end: 101137fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101137d7c(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112d5f6d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d5f6e0) = 0;
  lVar1 = _DAT_112d5f6e8;
  uVar3 = 0x112d5f750;
  func_0x0001000285a8(0x112d5f750,&UNK_10d9262a0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112d5f6f0;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112d5f6f8;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112d5f708;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112d5f720;
  puVar4 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000048,0x800000010ef27040,
                      "MapFriendFocusViewImplementation/GroupFocusViewCollectionViewController.swift"
                      ,0x4d,2,0xa0,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101137e94);
  (*pcVar2)();
}



/* Entry: 101137fac; end: 1011380cb;  */

uint FUN_101137fac(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    param_3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = param_2;
    func_0x000107c5faec(param_3);
  }
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_4);
  uVar3 = param_2;
  (*pcVar1)(param_2,param_3,uVar4,param_4);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_4);
  func_0x000107c6142c(uVar4);
  return (uint)uVar3 & 1;
}



/* Entry: 1011380cc; end: 10113810b;  */

undefined8 FUN_1011380cc(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 10113810c; end: 10113814f;  */

void FUN_10113810c(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010113814c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101138150; end: 1011382eb;  */

undefined8
FUN_101138150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1011382ec(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                param_20,param_21,param_22,param_23,param_24,param_25,param_26,param_27,param_28,
                param_29,param_30,param_31,param_32,param_33,param_34,param_35,param_36,param_37,
                param_38,param_39,param_40,param_41,param_42,param_43,param_44,param_45,param_46,
                param_47,param_48,param_49,param_50);
  return unaff_x20;
}



/* Entry: 1011382ec; end: 10113e393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1011382ec(long *param_1,long param_2,long param_3,long param_4,long param_5,undefined *param_6,
             long param_7,long param_8,long param_9,long param_10,undefined8 *param_11,
             long *param_12,long *param_13,long param_14,undefined *param_15,long param_16,
             long *param_17,long *param_18,long param_19,long param_20,long param_21,
             undefined8 *param_22,undefined *param_23,undefined *param_24,long *param_25,
             long param_26,long param_27,long param_28,long param_29,long param_30,
             undefined *param_31,undefined8 param_32,long *param_33,long param_34,long *param_35,
             undefined8 param_36,long param_37,long param_38,long param_39,undefined8 param_40,
             undefined8 param_41,long param_42,long *param_43,undefined *param_44,long param_45,
             undefined8 param_46,undefined *param_47,undefined *param_48,undefined *param_49,
             undefined *param_50)

{
  long lVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined8 **ppuVar21;
  undefined8 **ppuVar22;
  undefined8 **ppuVar23;
  undefined *puVar24;
  long lVar25;
  undefined8 *puVar26;
  long extraout_x8;
  undefined **ppuVar27;
  long **pplVar28;
  undefined8 *unaff_x20;
  undefined *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 *puVar33;
  long *plVar34;
  long alStack_530 [12];
  undefined1 auStack_4d0 [8];
  long alStack_4c8 [2];
  long alStack_4b8 [5];
  undefined8 uStack_490;
  long lStack_488;
  long alStack_480 [6];
  long alStack_450 [4];
  undefined1 auStack_430 [8];
  long lStack_428;
  undefined8 uStack_420;
  long lStack_418;
  undefined8 uStack_410;
  long *plStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  int iStack_3bc;
  undefined8 *puStack_3b8;
  undefined4 uStack_3ac;
  long *plStack_3a8;
  long *plStack_3a0;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long lStack_380;
  undefined8 **ppuStack_378;
  long *plStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  undefined *puStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  undefined8 *puStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 *puStack_2a0;
  long lStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  long lStack_280;
  long lStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  undefined8 uStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  long *plStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  long *plStack_f8;
  long lStack_f0;
  long lStack_e8;
  long alStack_e0 [3];
  long lStack_c8;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  puStack_2a8 = (undefined *)*unaff_x20;
  lVar5 = 0;
  puStack_1f0 = param_6;
  lStack_100 = param_2;
  func_0x000107c5eea4();
  lVar32 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar32 + 0x40));
  lVar25 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_2a0 = unaff_x20 + 3;
  *puStack_2a0 = 0;
  unaff_x20[6] = 0;
  *(undefined1 *)(unaff_x20 + 7) = 0;
  unaff_x20[8] = 0;
  *(undefined1 *)(unaff_x20 + 0xb) = 0;
  unaff_x20[4] = 0;
  unaff_x20[0xd] = 0;
  unaff_x20[0xc] = 0;
  unaff_x20[0xf] = 0;
  unaff_x20[0xe] = 0;
  unaff_x20[0x10] = 0;
  unaff_x20[0x14] = 0;
  unaff_x20[0x13] = 0;
  unaff_x20[0x16] = 0;
  unaff_x20[0x15] = 0;
  unaff_x20[0x18] = 0;
  unaff_x20[0x17] = 0;
  func_0x0001000285a8(0x112d53b48,&UNK_10d925340);
  func_0x000107c613fc();
  uVar6 = 1;
  func_0x00010008747c();
  unaff_x20[0x19] = uVar6;
  unaff_x20[0x1a] = 0;
  unaff_x20[0x1b] = 0;
  unaff_x20[0x1c] = 2;
  puVar14 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar6 = 0;
  unaff_x20[0x20] = 0;
  unaff_x20[0x1f] = 0;
  unaff_x20[0x1e] = puVar14;
  unaff_x20[0x25] = 0;
  unaff_x20[0x22] = 0;
  unaff_x20[0x21] = 0;
  unaff_x20[0x23] = 0;
  unaff_x20[2] = param_1;
  puVar14 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c61174();
  plStack_1f8 = param_1;
  func_0x000107c453e4();
  unaff_x20[5] = puVar14;
  func_0x000107c5eea0(auStack_430 + lVar25);
  func_0x000107c5ee54();
  (**(code **)(lVar32 + 8))(auStack_430 + lVar25,lVar5);
  unaff_x20[9] = uVar6;
  lStack_1b8 = param_16;
  puStack_2b0 = unaff_x20 + 0x1f;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_16 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10113b7b0);
    (*pcVar2)();
  }
  puStack_208 = param_50;
  puStack_210 = param_48;
  puStack_1e0 = param_47;
  uStack_1c0 = param_46;
  lStack_1d8 = param_45;
  puStack_220 = param_44;
  lStack_1a8 = param_42;
  uStack_228 = param_41;
  uStack_230 = param_40;
  lStack_1d0 = param_39;
  lStack_1c8 = param_38;
  lStack_1e8 = param_37;
  plStack_238 = param_35;
  lStack_1a0 = param_34;
  lStack_110 = param_27;
  plStack_f8 = param_25;
  puStack_200 = param_24;
  unaff_x20[0x11] = param_16;
  plStack_248 = param_33;
  unaff_x20[10] = *(undefined8 *)((long)param_33 + _DAT_112eb8a60);
  lVar5 = _DAT_112fecfb0;
  plStack_240 = param_18;
  plStack_1b0 = param_17;
  puStack_218 = param_15;
  plStack_250 = param_13;
  plStack_258 = param_12;
  uVar6 = *(undefined8 *)(param_29 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  unaff_x20[0x12] = uVar6;
  lStack_298 = lVar5;
  lVar5 = *(long *)(param_29 + lVar5);
  func_0x000107c5c734();
  func_0x000107c61180();
  puStack_108 = param_23;
  if (lVar5 == 0) {
    lVar32 = 0;
  }
  else {
    lVar32 = lVar5;
    func_0x000107c3eca4();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
  }
  uVar6 = unaff_x20[0x1a];
  unaff_x20[0x1a] = lVar32;
  func_0x000107c615e8(uVar6);
  lVar5 = param_28;
  func_0x000107c43e84();
  func_0x000107c61180();
  lVar32 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  uVar6 = unaff_x20[0x1b];
  unaff_x20[0x1b] = lVar32;
  func_0x000107c615e8(uVar6);
  *(undefined1 *)(unaff_x20 + 0x1d) = 1;
  uVar3 = (undefined1)unaff_x20[0x11];
  func_0x000109021ad0();
  plVar11 = plStack_f8;
  *(undefined1 *)((long)unaff_x20 + 0xe9) = uVar3;
  plVar8 = plStack_f8;
  func_0x000107c4c448();
  func_0x000107c61180();
  lVar5 = lStack_100;
  unaff_x20[0x24] = plVar8;
  unaff_x20[0x26] = param_43;
  unaff_x20[0x27] = param_49;
  lStack_2b8 = _DAT_112fcd5d8;
  lVar32 = *(long *)(lStack_100 + _DAT_112fcd5d8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar32 == 0) {
    func_0x000107c61170(plStack_248);
    func_0x000107c61170(param_29);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_19);
    func_0x000107c61170(lStack_1a0);
    func_0x000107c61170(param_11);
    func_0x000107c61170(lStack_1d8);
    func_0x000107c61170(lStack_1d0);
    func_0x000107c61170(lStack_1c8);
    func_0x000107c61170(plStack_1f8);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(puStack_1f0);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(plStack_258);
    func_0x000107c61170(plStack_250);
    func_0x000107c61170(param_14);
    func_0x000107c61170(puStack_218);
    func_0x000107c61170(lStack_1b8);
    func_0x000107c61170(plStack_1b0);
    func_0x000107c61170(plStack_240);
    func_0x000107c61170(param_20);
    func_0x000107c61170(param_21);
    func_0x000107c61170(param_22);
    func_0x000107c61170(puStack_108);
    func_0x000107c61170(puStack_200);
    func_0x000107c61170(plVar11);
    func_0x000107c61170(param_26);
    func_0x000107c61170(lStack_110);
    func_0x000107c61170(param_28);
    func_0x000107c61170(param_30);
    func_0x000107c61170(param_31);
    func_0x000107c61170(param_32);
    func_0x000107c61170(plStack_238);
    func_0x000107c61170(param_36);
    func_0x000107c61170(lStack_1e8);
    func_0x000107c61170(uStack_230);
    func_0x000107c61170(uStack_228);
    func_0x000107c61170(lStack_1a8);
    func_0x000107c61170(param_43);
    func_0x000107c61170(puStack_220);
    func_0x000107c61170(uStack_1c0);
    func_0x000107c61170(puStack_1e0);
    func_0x000107c61170(puStack_210);
LAB_101139e84:
    func_0x000107c61170(param_49);
    lVar25 = -0xf8;
  }
  else {
    puStack_270 = param_11;
    puStack_290 = param_31;
    lStack_278 = param_28;
    uStack_260 = param_36;
    lVar5 = param_3;
    puStack_288 = param_49;
    lStack_280 = lVar32;
    plStack_268 = param_43;
    func_0x000107c4c3ac();
    func_0x000107c61180();
    lVar32 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar32 == 0) {
      func_0x000107c615e8(lStack_280);
      func_0x000107c61170(plStack_248);
      func_0x000107c61170(param_29);
      func_0x000107c61170(lStack_100);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_19);
      func_0x000107c61170(lStack_1a0);
      func_0x000107c61170(puStack_270);
      func_0x000107c61170(lStack_1d8);
      func_0x000107c61170(lStack_1d0);
      func_0x000107c61170(lStack_1c8);
      func_0x000107c61170(plStack_1f8);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_5);
      func_0x000107c61170(puStack_1f0);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_8);
      func_0x000107c61170(plStack_258);
      func_0x000107c61170(plStack_250);
      func_0x000107c61170(param_14);
      func_0x000107c61170(puStack_218);
      func_0x000107c61170(lStack_1b8);
      func_0x000107c61170(plStack_1b0);
      func_0x000107c61170(plStack_240);
      func_0x000107c61170(param_20);
      func_0x000107c61170(param_21);
      func_0x000107c61170(param_22);
      func_0x000107c61170(puStack_108);
      func_0x000107c61170(puStack_200);
      func_0x000107c61170(plStack_f8);
LAB_1011391a8:
      func_0x000107c61170(param_26);
      func_0x000107c61170(lStack_110);
      func_0x000107c61170(lStack_278);
      func_0x000107c61170(param_30);
      func_0x000107c61170(puStack_290);
LAB_101139df4:
      func_0x000107c61170(param_32);
      func_0x000107c61170(plStack_238);
      func_0x000107c61170(uStack_260);
      func_0x000107c61170(lStack_1e8);
      func_0x000107c61170(uStack_230);
      func_0x000107c61170(uStack_228);
      func_0x000107c61170(lStack_1a8);
      plVar11 = plStack_268;
LAB_101139e48:
      func_0x000107c61170(plVar11);
      func_0x000107c61170(puStack_220);
      func_0x000107c61170(uStack_1c0);
      func_0x000107c61170(puStack_1e0);
      func_0x000107c61170(puStack_210);
      param_49 = puStack_288;
      goto LAB_101139e84;
    }
    lVar7 = *(long *)(param_4 + _DAT_112fcd348);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar14 = puStack_108;
    lVar5 = lStack_110;
    if (lVar7 == 0) {
      func_0x000107c615e8(lStack_280);
      func_0x000107c615e8(lVar32);
      func_0x000107c61170(plStack_248);
      func_0x000107c61170(param_29);
      func_0x000107c61170(lStack_100);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_19);
      func_0x000107c61170(lStack_1a0);
      func_0x000107c61170(puStack_270);
      func_0x000107c61170(lStack_1d8);
      func_0x000107c61170(lStack_1d0);
      func_0x000107c61170(lStack_1c8);
      func_0x000107c61170(plStack_1f8);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_5);
      func_0x000107c61170(puStack_1f0);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_8);
      func_0x000107c61170(plStack_258);
      func_0x000107c61170(plStack_250);
      func_0x000107c61170(param_14);
      func_0x000107c61170(puStack_218);
      func_0x000107c61170(lStack_1b8);
      func_0x000107c61170(plStack_1b0);
      func_0x000107c61170(plStack_240);
      func_0x000107c61170(param_20);
      func_0x000107c61170(param_21);
      func_0x000107c61170(param_22);
      func_0x000107c61170(puVar14);
      func_0x000107c61170(puStack_200);
      func_0x000107c61170(plStack_f8);
      func_0x000107c61170(param_26);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lStack_278);
      func_0x000107c61170(param_30);
      func_0x000107c61170(puStack_290);
      goto LAB_101139df4;
    }
    lVar5 = param_5;
    lStack_2c0 = lVar7;
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar7 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar7 != 0) {
      lVar5 = lVar7;
      lStack_2c8 = lVar32;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar7);
      if (lVar5 == 0) {
        func_0x000107c61170(plStack_1f8);
        func_0x000107c61170(plStack_268);
        func_0x000107c61170(puStack_288);
        func_0x000107c61170(puStack_270);
        func_0x000107c615e8(lStack_280);
        func_0x000107c61170(puStack_290);
        func_0x000107c61170(param_32);
        func_0x000107c61170(plStack_238);
        func_0x000107c61170(plStack_258);
        func_0x000107c61170(plStack_250);
        func_0x000107c61170(puStack_218);
        func_0x000107c61170(plStack_240);
        func_0x000107c615e8(lStack_2c0);
        func_0x000107c61170(puStack_210);
        func_0x000107c61170(uStack_230);
        func_0x000107c61170(uStack_228);
        func_0x000107c61170(puStack_220);
        func_0x000107c61170(puStack_208);
        func_0x000107c61170(puStack_1e0);
        func_0x000107c61170(plStack_248);
        func_0x000107c61170(param_29);
        func_0x000107c61170(lStack_100);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_9);
        func_0x000107c61170(param_10);
        func_0x000107c61170(param_19);
        func_0x000107c61170(lStack_1a0);
        func_0x000107c615e8(lStack_2c8);
        func_0x000107c61170(lStack_1d8);
        func_0x000107c61170(lStack_1d0);
        func_0x000107c61170(lStack_1c8);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_5);
        func_0x000107c61170(puStack_1f0);
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_8);
        func_0x000107c61170(param_14);
        func_0x000107c61170(lStack_1b8);
        func_0x000107c61170(plStack_1b0);
        func_0x000107c61170(param_20);
        func_0x000107c61170(param_21);
        func_0x000107c61170(param_22);
        func_0x000107c61170(puStack_108);
        func_0x000107c61170(puStack_200);
        func_0x000107c61170(plStack_f8);
        goto LAB_101139798;
      }
      lVar32 = param_8;
      lStack_2d0 = lVar5;
      func_0x000107c4d604();
      func_0x000107c61180();
      lVar5 = lVar32;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar32);
      uVar6 = uStack_260;
      plVar11 = plStack_268;
      puVar33 = puStack_270;
      if (lVar5 != 0) {
        lVar32 = param_7;
        lStack_2d8 = lVar5;
        func_0x000107c5bf44();
        func_0x000107c61180();
        if (lVar32 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10113e388);
          (*pcVar2)();
        }
        lVar5 = lVar32;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar32);
        lStack_2e0 = lVar5;
        if (lVar5 == 0) {
          func_0x000107c615e8(lStack_280);
          func_0x000107c615e8(lStack_2c8);
          func_0x000107c615e8(lStack_2c0);
          func_0x000107c615e8(lStack_2d0);
          func_0x000107c615e8(lStack_2d8);
          func_0x000107c61170(plStack_248);
          func_0x000107c61170(param_29);
          func_0x000107c61170(lStack_100);
          func_0x000107c61170(param_4);
          func_0x000107c61170(param_9);
          func_0x000107c61170(param_10);
          func_0x000107c61170(param_19);
          func_0x000107c61170(lStack_1a0);
          func_0x000107c61170(puVar33);
          func_0x000107c61170(lStack_1d8);
          func_0x000107c61170(lStack_1d0);
          func_0x000107c61170(lStack_1c8);
          func_0x000107c61170(plStack_1f8);
          func_0x000107c61170(param_3);
          func_0x000107c61170(param_5);
          func_0x000107c61170(puStack_1f0);
          func_0x000107c61170(param_7);
LAB_101139af4:
          func_0x000107c61170(param_8);
          func_0x000107c61170(plStack_258);
          func_0x000107c61170(plStack_250);
LAB_101139b18:
          func_0x000107c61170(param_14);
          func_0x000107c61170(puStack_218);
          func_0x000107c61170(lStack_1b8);
          func_0x000107c61170(plStack_1b0);
          func_0x000107c61170(plStack_240);
          func_0x000107c61170(param_20);
          func_0x000107c61170(param_21);
          func_0x000107c61170(param_22);
          puVar14 = puStack_108;
LAB_101139b74:
          func_0x000107c61170(puVar14);
          func_0x000107c61170(puStack_200);
          plVar11 = plStack_f8;
LAB_101139db8:
          func_0x000107c61170(plVar11);
          func_0x000107c61170(param_26);
          lVar7 = lStack_110;
        }
        else {
          lVar5 = *(long *)(param_9 + _DAT_112fee670);
          func_0x000107c5c734();
          func_0x000107c61180();
          plVar11 = plStack_f8;
          if (lVar5 == 0) {
            func_0x000107c615e8(lStack_280);
            func_0x000107c615e8(lStack_2c8);
            func_0x000107c615e8(lStack_2c0);
            func_0x000107c615e8(lStack_2d0);
            func_0x000107c615e8(lStack_2d8);
            func_0x000107c615e8(lStack_2e0);
            func_0x000107c61170(plStack_248);
            func_0x000107c61170(param_29);
            func_0x000107c61170(lStack_100);
            func_0x000107c61170(param_4);
            func_0x000107c61170(param_9);
LAB_101139ca0:
            func_0x000107c61170(param_10);
            func_0x000107c61170(param_19);
            func_0x000107c61170(lStack_1a0);
            func_0x000107c61170(puVar33);
            func_0x000107c61170(lStack_1d8);
            func_0x000107c61170(lStack_1d0);
            func_0x000107c61170(lStack_1c8);
            func_0x000107c61170(plStack_1f8);
            func_0x000107c61170(param_3);
            func_0x000107c61170(param_5);
            func_0x000107c61170(puStack_1f0);
            func_0x000107c61170(param_7);
LAB_101139d24:
            func_0x000107c61170(param_8);
            func_0x000107c61170(plStack_258);
            func_0x000107c61170(plStack_250);
            func_0x000107c61170(param_14);
            func_0x000107c61170(puStack_218);
            func_0x000107c61170(lStack_1b8);
            func_0x000107c61170(plStack_1b0);
            func_0x000107c61170(plStack_240);
            func_0x000107c61170(param_20);
            func_0x000107c61170(param_21);
            func_0x000107c61170(param_22);
            func_0x000107c61170(puStack_108);
            func_0x000107c61170(puStack_200);
            goto LAB_101139db8;
          }
          plVar8 = *(long **)(param_10 + _DAT_11307edc0);
          if (plVar8 == (long *)0x0) {
            func_0x000107c615e8(lStack_280);
            func_0x000107c615e8(lStack_2c8);
            func_0x000107c615e8(lStack_2c0);
            func_0x000107c615e8(lStack_2d0);
            func_0x000107c615e8(lStack_2d8);
            func_0x000107c615e8(lStack_2e0);
            func_0x000107c615e8(lVar5);
            func_0x000107c61170(plStack_248);
            func_0x000107c61170(param_29);
            func_0x000107c61170(lStack_100);
            func_0x000107c61170(param_4);
            func_0x000107c61170(param_9);
            goto LAB_101139ca0;
          }
          func_0x000107c61174();
          lVar32 = param_14;
          func_0x000107c4d1cc();
          func_0x000107c61180();
          lVar7 = lVar32;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar32);
          lVar32 = _DAT_112fa96f0;
          if (lVar7 == 0) {
            func_0x000107c615e8(lStack_280);
            func_0x000107c615e8(lStack_2c8);
            func_0x000107c615e8(lStack_2c0);
            func_0x000107c615e8(lStack_2d0);
            func_0x000107c615e8(lStack_2d8);
            func_0x000107c615e8(lStack_2e0);
            func_0x000107c615e8(lVar5);
            func_0x000107c61170(plVar8);
            func_0x000107c61170(plStack_248);
            func_0x000107c61170(param_29);
            func_0x000107c61170(lStack_100);
            func_0x000107c61170(param_4);
            func_0x000107c61170(param_9);
            func_0x000107c61170(param_10);
            func_0x000107c61170(param_19);
            func_0x000107c61170(lStack_1a0);
            func_0x000107c61170(puVar33);
            func_0x000107c61170(lStack_1d8);
            func_0x000107c61170(lStack_1d0);
            func_0x000107c61170(lStack_1c8);
            func_0x000107c61170(plStack_1f8);
            func_0x000107c61170(param_3);
            func_0x000107c61170(param_5);
            func_0x000107c61170(puStack_1f0);
            func_0x000107c61170(param_7);
            func_0x000107c61170(param_8);
            func_0x000107c61170(plStack_258);
            func_0x000107c61170(plStack_250);
            goto LAB_101139b18;
          }
          lVar9 = *(long *)(param_19 + _DAT_112fa96f0);
          lStack_2e8 = lVar7;
          func_0x000107c5c734();
          func_0x000107c61180();
          plVar11 = plStack_f8;
          if (lVar9 == 0) {
            func_0x000107c615e8(lStack_280);
            func_0x000107c615e8(lStack_2c8);
            func_0x000107c615e8(lStack_2c0);
            func_0x000107c615e8(lStack_2d0);
            func_0x000107c615e8(lStack_2d8);
            func_0x000107c615e8(lStack_2e0);
            func_0x000107c615e8(lVar5);
            func_0x000107c61170(plVar8);
            func_0x000107c615e8(lStack_2e8);
            func_0x000107c61170(plStack_248);
            func_0x000107c61170(param_29);
            func_0x000107c61170(lStack_100);
            func_0x000107c61170(param_4);
            func_0x000107c61170(param_9);
            func_0x000107c61170(param_10);
            func_0x000107c61170(param_19);
            func_0x000107c61170(lStack_1a0);
            func_0x000107c61170(puStack_270);
            func_0x000107c61170(lStack_1d8);
            func_0x000107c61170(lStack_1d0);
            func_0x000107c61170(lStack_1c8);
            func_0x000107c61170(plStack_1f8);
            func_0x000107c61170(param_3);
            func_0x000107c61170(param_5);
            func_0x000107c61170(puStack_1f0);
            func_0x000107c61170(param_7);
            goto LAB_101139d24;
          }
          lVar7 = param_20;
          lStack_2f0 = lVar9;
          func_0x000107c5b4b0();
          func_0x000107c61180();
          if (lVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10113e38c);
            (*pcVar2)();
          }
          lVar9 = lVar7;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
          puVar14 = puStack_108;
          lStack_2f8 = lVar9;
          if (lVar9 == 0) {
            func_0x000107c615e8(lStack_280);
            func_0x000107c615e8(lStack_2c8);
            func_0x000107c615e8(lStack_2c0);
            func_0x000107c615e8(lStack_2d0);
            func_0x000107c615e8(lStack_2d8);
            func_0x000107c615e8(lStack_2e0);
            func_0x000107c615e8(lVar5);
            func_0x000107c61170(plVar8);
            func_0x000107c615e8(lStack_2e8);
            ppuVar27 = &puStack_1f0;
            goto LAB_10113a19c;
          }
          puVar29 = puStack_108;
          func_0x000107c5d9dc();
          func_0x000107c61180();
          puVar12 = puVar29;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(puVar29);
          if (puVar12 == (undefined *)0x0) {
            func_0x000107c615e8(lStack_280);
            func_0x000107c615e8(lStack_2c8);
            func_0x000107c615e8(lStack_2c0);
            func_0x000107c615e8(lStack_2d0);
            func_0x000107c615e8(lStack_2d8);
            func_0x000107c615e8(lStack_2e0);
            func_0x000107c615e8(lVar5);
            func_0x000107c61170(plVar8);
            func_0x000107c615e8(lStack_2e8);
            func_0x000107c615e8(lStack_2f0);
            func_0x000107c615e8(lStack_2f8);
            func_0x000107c61170(plStack_248);
            func_0x000107c61170(param_29);
            func_0x000107c61170(lStack_100);
            func_0x000107c61170(param_4);
            func_0x000107c61170(param_9);
            func_0x000107c61170(param_10);
            func_0x000107c61170(param_19);
            func_0x000107c61170(lStack_1a0);
            func_0x000107c61170(puStack_270);
            func_0x000107c61170(lStack_1d8);
            func_0x000107c61170(lStack_1d0);
            func_0x000107c61170(lStack_1c8);
            func_0x000107c61170(plStack_1f8);
            func_0x000107c61170(param_3);
            func_0x000107c61170(param_5);
            func_0x000107c61170(puStack_1f0);
            func_0x000107c61170(param_7);
            func_0x000107c61170(param_8);
            func_0x000107c61170(plStack_258);
            func_0x000107c61170(plStack_250);
            func_0x000107c61170(param_14);
            func_0x000107c61170(puStack_218);
            func_0x000107c61170(lStack_1b8);
            func_0x000107c61170(plStack_1b0);
            func_0x000107c61170(plStack_240);
            func_0x000107c61170(param_20);
            func_0x000107c61170(param_21);
            func_0x000107c61170(param_22);
            goto LAB_101139b74;
          }
          lVar7 = param_21;
          func_0x000107c4ec94();
          func_0x000107c61180();
          lVar9 = lVar7;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
          lStack_300 = lVar9;
          if (lVar9 == 0) {
            func_0x000107c615e8(lStack_280);
            func_0x000107c615e8(lStack_2c8);
            func_0x000107c615e8(lStack_2c0);
            func_0x000107c615e8(lStack_2d0);
            func_0x000107c615e8(lStack_2d8);
            func_0x000107c615e8(lStack_2e0);
            func_0x000107c615e8(lVar5);
            func_0x000107c61170(plVar8);
            func_0x000107c615e8(lStack_2e8);
            func_0x000107c615e8(lStack_2f0);
            func_0x000107c615e8(lStack_2f8);
LAB_10113a1a0:
            func_0x000107c615e8(puVar12);
            func_0x000107c61170(plStack_248);
            func_0x000107c61170(param_29);
            func_0x000107c61170(lStack_100);
            func_0x000107c61170(param_4);
            func_0x000107c61170(param_9);
            func_0x000107c61170(param_10);
            func_0x000107c61170(param_19);
            func_0x000107c61170(lStack_1a0);
            func_0x000107c61170(puStack_270);
            func_0x000107c61170(lStack_1d8);
            func_0x000107c61170(lStack_1d0);
            func_0x000107c61170(lStack_1c8);
            func_0x000107c61170(plStack_1f8);
            func_0x000107c61170(param_3);
            func_0x000107c61170(param_5);
            func_0x000107c61170(puStack_1f0);
            func_0x000107c61170(param_7);
            goto LAB_101139af4;
          }
          puVar33 = param_22;
          func_0x000107c4c440();
          func_0x000107c61180();
          puVar15 = puVar33;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(puVar33);
          if (puVar15 == (undefined8 *)0x0) {
            func_0x000107c615e8(lStack_280);
            func_0x000107c615e8(lStack_2c8);
            func_0x000107c615e8(lStack_2c0);
            func_0x000107c615e8(lStack_2d0);
            func_0x000107c615e8(lStack_2d8);
            func_0x000107c615e8(lStack_2e0);
            func_0x000107c615e8(lVar5);
            func_0x000107c61170(plVar8);
            func_0x000107c615e8(lStack_2e8);
            func_0x000107c615e8(lStack_2f0);
            func_0x000107c615e8(lStack_2f8);
            func_0x000107c615e8(puVar12);
            ppuVar27 = &puStack_200;
LAB_10113a19c:
            puVar12 = ppuVar27[-0x20];
            goto LAB_10113a1a0;
          }
          lVar7 = param_21;
          puStack_308 = puVar15;
          func_0x000107c4ec90();
          func_0x000107c61180();
          lVar9 = lVar7;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
          if (lVar9 == 0) {
            func_0x000107c615e8(lStack_280);
            func_0x000107c615e8(lStack_2c8);
            func_0x000107c615e8(lStack_2c0);
            func_0x000107c615e8(lStack_2d0);
            func_0x000107c615e8(lStack_2d8);
            func_0x000107c615e8(lStack_2e0);
            func_0x000107c615e8(lVar5);
            func_0x000107c61170(plVar8);
            func_0x000107c615e8(lStack_2e8);
            func_0x000107c615e8(lStack_2f0);
            func_0x000107c615e8(lStack_2f8);
            func_0x000107c615e8(puVar12);
            func_0x000107c615e8(lStack_300);
            ppuVar27 = &puStack_208;
            goto LAB_10113a19c;
          }
          lVar7 = param_26;
          lStack_310 = lVar9;
          func_0x000107c5b034();
          func_0x000107c61180();
          lVar9 = lVar7;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
          lStack_318 = lVar9;
          if (lVar9 == 0) {
            func_0x000107c615e8(lStack_280);
            func_0x000107c615e8(lStack_2c8);
            func_0x000107c615e8(lStack_2c0);
            func_0x000107c615e8(lStack_2d0);
            func_0x000107c615e8(lStack_2d8);
            func_0x000107c615e8(lStack_2e0);
            func_0x000107c615e8(lVar5);
            func_0x000107c61170(plVar8);
            func_0x000107c615e8(lStack_2e8);
            func_0x000107c615e8(lStack_2f0);
            func_0x000107c615e8(lStack_2f8);
            func_0x000107c615e8(puVar12);
            func_0x000107c615e8(lStack_300);
            func_0x000107c615e8(puStack_308);
            ppuVar27 = &puStack_210;
            goto LAB_10113a19c;
          }
          lVar7 = lStack_110;
          func_0x000107c43a80();
          func_0x000107c61180();
          lVar9 = lVar7;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
          lStack_320 = lVar9;
          if (lVar9 == 0) {
            func_0x000107c615e8(lStack_280);
            func_0x000107c615e8(lStack_2c8);
            func_0x000107c615e8(lStack_2c0);
            func_0x000107c615e8(lStack_2d0);
            func_0x000107c615e8(lStack_2d8);
            func_0x000107c615e8(lStack_2e0);
            func_0x000107c615e8(lVar5);
            func_0x000107c61170(plVar8);
            func_0x000107c615e8(lStack_2e8);
            func_0x000107c615e8(lStack_2f0);
            func_0x000107c615e8(lStack_2f8);
            func_0x000107c615e8(puVar12);
            func_0x000107c615e8(lStack_300);
            func_0x000107c615e8(puStack_308);
            func_0x000107c615e8(lStack_310);
            ppuVar27 = &puStack_218;
            goto LAB_10113a19c;
          }
          lVar7 = lStack_110;
          func_0x000107c43a98();
          func_0x000107c61180();
          lVar9 = lVar7;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
          lVar7 = lStack_110;
          lStack_328 = lVar9;
          if (lVar9 == 0) {
            func_0x000107c615e8(lStack_280);
            func_0x000107c615e8(lStack_2c8);
            func_0x000107c615e8(lStack_2c0);
            func_0x000107c615e8(lStack_2d0);
            func_0x000107c615e8(lStack_2d8);
            func_0x000107c615e8(lStack_2e0);
            func_0x000107c615e8(lVar5);
            func_0x000107c61170(plVar8);
            func_0x000107c615e8(lStack_2e8);
            func_0x000107c615e8(lStack_2f0);
            func_0x000107c615e8(lStack_2f8);
            func_0x000107c615e8(puVar12);
            func_0x000107c615e8(lStack_300);
            func_0x000107c615e8(puStack_308);
            func_0x000107c615e8(lStack_310);
            func_0x000107c615e8(lStack_318);
            ppuVar27 = &puStack_220;
            goto LAB_10113a19c;
          }
          lVar9 = lStack_110;
          func_0x000107c43a6c();
          func_0x000107c61180();
          lVar10 = lVar9;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar9);
          if (lVar10 != 0) {
            lStack_350 = lVar32;
            lVar32 = lStack_278;
            lStack_340 = lVar10;
            puStack_338 = puVar12;
            lStack_330 = lVar5;
            func_0x000107c43e84();
            func_0x000107c61180();
            lVar5 = lVar32;
            func_0x000107c5c734();
            func_0x000107c61180();
            func_0x000107c61170(lVar32);
            lStack_348 = lVar5;
            if (lVar5 == 0) {
              func_0x000107c615e8(lStack_280);
              func_0x000107c615e8(lStack_2c8);
              func_0x000107c615e8(lStack_2c0);
              func_0x000107c615e8(lStack_2d0);
              func_0x000107c615e8(lStack_2d8);
              func_0x000107c615e8(lStack_2e0);
              func_0x000107c615e8(lStack_330);
              func_0x000107c61170(plVar8);
              func_0x000107c615e8(lStack_2e8);
              func_0x000107c615e8(lStack_2f0);
              func_0x000107c615e8(lStack_2f8);
              func_0x000107c615e8(puStack_338);
              func_0x000107c615e8(lStack_300);
              func_0x000107c615e8(puStack_308);
              func_0x000107c615e8(lStack_310);
              func_0x000107c615e8(lStack_318);
              func_0x000107c615e8(lStack_320);
              func_0x000107c615e8(lStack_328);
              pplVar28 = &plStack_240;
LAB_10113ade4:
              func_0x000107c615e8(pplVar28[-0x20]);
            }
            else {
              lVar5 = *(long *)(param_29 + lStack_298);
              func_0x000107c5c734();
              func_0x000107c61180();
              if (lVar5 == 0) {
                func_0x000107c615e8(lStack_280);
                func_0x000107c615e8(lStack_2c8);
                func_0x000107c615e8(lStack_2c0);
                func_0x000107c615e8(lStack_2d0);
                func_0x000107c615e8(lStack_2d8);
                func_0x000107c615e8(lStack_2e0);
                func_0x000107c615e8(lStack_330);
                func_0x000107c61170(plVar8);
                func_0x000107c615e8(lStack_2e8);
                func_0x000107c615e8(lStack_2f0);
                func_0x000107c615e8(lStack_2f8);
                func_0x000107c615e8(puStack_338);
                func_0x000107c615e8(lStack_300);
                func_0x000107c615e8(puStack_308);
                func_0x000107c615e8(lStack_310);
                func_0x000107c615e8(lStack_318);
                func_0x000107c615e8(lStack_320);
                func_0x000107c615e8(lStack_328);
                func_0x000107c615e8(lStack_340);
                pplVar28 = &plStack_248;
                goto LAB_10113ade4;
              }
              lVar32 = lVar5;
              func_0x000107c4c458();
              func_0x000107c61180();
              lStack_298 = lVar32;
              func_0x000107c61170(lVar5);
              lVar5 = param_30;
              func_0x000107c5dc04();
              func_0x000107c61180();
              lVar32 = lVar5;
              func_0x000107c5c734();
              func_0x000107c61180();
              func_0x000107c61170(lVar5);
              lStack_358 = lVar32;
              if (lVar32 == 0) {
                func_0x000107c615e8(lStack_280);
                func_0x000107c615e8(lStack_2c8);
                func_0x000107c615e8(lStack_2c0);
                func_0x000107c615e8(lStack_2d0);
                func_0x000107c615e8(lStack_2d8);
                func_0x000107c615e8(lStack_2e0);
                func_0x000107c615e8(lStack_330);
                func_0x000107c61170(plVar8);
                func_0x000107c615e8(lStack_2e8);
                func_0x000107c615e8(lStack_2f0);
                func_0x000107c615e8(lStack_2f8);
                func_0x000107c615e8(puStack_338);
                func_0x000107c615e8(lStack_300);
                func_0x000107c615e8(puStack_308);
                func_0x000107c615e8(lStack_310);
                func_0x000107c615e8(lStack_318);
                func_0x000107c615e8(lStack_320);
                func_0x000107c615e8(lStack_328);
                func_0x000107c615e8(lStack_340);
                func_0x000107c615e8(lStack_348);
                pplVar28 = (long **)&stack0xfffffffffffffe68;
                goto LAB_10113ade4;
              }
              lStack_360 = *(long *)(lStack_1a0 + _DAT_112eb8a08);
              if ((lStack_360 == 0) ||
                 (puVar33 = (undefined8 *)unaff_x20[0x12], puVar33 == (undefined8 *)0x0)) {
                func_0x000107c615e8(lStack_280);
                func_0x000107c615e8(lStack_2c8);
                func_0x000107c615e8(lStack_2c0);
                func_0x000107c615e8(lStack_2d0);
                func_0x000107c615e8(lStack_2d8);
                func_0x000107c615e8(lStack_2e0);
                func_0x000107c615e8(lStack_330);
                func_0x000107c61170(plVar8);
                func_0x000107c615e8(lStack_2e8);
                func_0x000107c615e8(lStack_2f0);
                func_0x000107c615e8(lStack_2f8);
                func_0x000107c615e8(puStack_338);
                func_0x000107c615e8(lStack_300);
                func_0x000107c615e8(puStack_308);
                func_0x000107c615e8(lStack_310);
                func_0x000107c615e8(lStack_318);
                func_0x000107c615e8(lStack_320);
                func_0x000107c615e8(lStack_328);
                func_0x000107c615e8(lStack_340);
                func_0x000107c615e8(lStack_348);
                func_0x000107c615e8(lStack_298);
                pplVar28 = &plStack_258;
                goto LAB_10113ade4;
              }
              func_0x000107c615f0(lStack_360);
              func_0x000107c51a88();
              func_0x000107c61180();
              lVar5 = lStack_1a8;
              func_0x000107c4b8ac();
              func_0x000107c61180();
              lVar32 = lVar5;
              func_0x000107c5c734();
              func_0x000107c61180();
              func_0x000107c61170(lVar5);
              lStack_368 = lVar32;
              if (lVar32 != 0) {
                plVar11 = plStack_f8;
                func_0x000107c4c370();
                func_0x000107c61180();
                plVar34 = plVar11;
                func_0x000107c5c734();
                func_0x000107c61180();
                func_0x000107c61170(plVar11);
                plStack_370 = plVar34;
                if (plVar34 != (long *)0x0) {
                  lVar5 = unaff_x20[10];
                  func_0x000107c5c734();
                  func_0x000107c61180();
                  if (lVar5 == 0) {
                    lStack_388 = 0;
                    uStack_390 = CONCAT44(uStack_390._4_4_,1);
                  }
                  else {
                    lVar32 = lVar5;
                    func_0x000107c5cfb8();
                    lStack_388 = lVar32;
                    func_0x000107c615e8();
                    uStack_390 = (ulong)uStack_390._4_4_ << 0x20;
                  }
                  iVar4 = (int)lVar5;
                  func_0x000109021904();
                  if (iVar4 != 0) {
                    pcVar13 = 
                    "init(beginIn:mapPeopleServices:mapPersonLocationServices:locationMutingServices:composerServices:systemScope:storiesServices:composerBridgeServices:composerStoriesServices:storiesPlaybackServices:activeUserSessionScope:createChatScopeExposer:chatScopeExposer:multiTrayServices:focusViewScopeExposer:circumstanceEngineServices:notificationServices:friendProfileScopeExposer:mapNavigationServices:snapchatterServices:locationSharingServices:mapUserPreferencesServices:userLocationServices:userBlizzardServices:mapLoggingServices:contentDeliveryServices:friendsFeedServices:mapGestureServices:mapViewServices:valisServices:directionsSheetScopeServices:directionsSheetScopeExposer:loggingServices:bitmojiLayerServices:snapshotScopeExposer:emojiPickerFactoryServices:reactionServices:reactionFeedbackServices:embeddedMapServices:chatCameraScopeExposer:chatCameraScopeServices:mapLocationContextServices:genAISnapFactoryServices:plusGiftingScopeExposer:plusSyncServices:externalMusicTweaksServices:mapExternalMusicServices:plusPetServices:chatScopeServices:customizationTrayFactoryServices:)"
                    ;
                    func_0x0001000c10c0(
                                       "init(beginIn:mapPeopleServices:mapPersonLocationServices:locationMutingServices:composerServices:systemScope:storiesServices:composerBridgeServices:composerStoriesServices:storiesPlaybackServices:activeUserSessionScope:createChatScopeExposer:chatScopeExposer:multiTrayServices:focusViewScopeExposer:circumstanceEngineServices:notificationServices:friendProfileScopeExposer:mapNavigationServices:snapchatterServices:locationSharingServices:mapUserPreferencesServices:userLocationServices:userBlizzardServices:mapLoggingServices:contentDeliveryServices:friendsFeedServices:mapGestureServices:mapViewServices:valisServices:directionsSheetScopeServices:directionsSheetScopeExposer:loggingServices:bitmojiLayerServices:snapshotScopeExposer:emojiPickerFactoryServices:reactionServices:reactionFeedbackServices:embeddedMapServices:chatCameraScopeExposer:chatCameraScopeServices:mapLocationContextServices:genAISnapFactoryServices:plusGiftingScopeExposer:plusSyncServices:externalMusicTweaksServices:mapExternalMusicServices:plusPetServices:chatScopeServices:customizationTrayFactoryServices:)"
                                       );
                    func_0x000107c61180();
                    puVar14 = &UNK_1103877c0;
                    func_0x000107c613fc(&UNK_1103877c0,0x18,7);
                    func_0x000107c61644(puVar14 + 0x10,unaff_x20);
                    ppuStack_98 = (undefined **)0x101141498;
                    puStack_b8 = (undefined8 *)PTR___NSConcreteStackBlock_11034bd00;
                    uStack_b0 = 0x42000000;
                    pcStack_a8 = (code *)&UNK_1000f6b44;
                    puStack_a0 = &UNK_110387a30;
                    ppuVar21 = &puStack_b8;
                    puStack_90 = puVar14;
                    func_0x000107c60bc4(ppuVar21);
                    func_0x000107c61574(puStack_90);
                    func_0x000107c4e524(pcVar13);
                    func_0x000107c61170(plStack_248);
                    func_0x000107c61170(param_29);
                    func_0x000107c61170(lStack_100);
                    func_0x000107c61170(param_4);
                    func_0x000107c61170(param_9);
                    func_0x000107c61170(param_10);
                    func_0x000107c61170(param_19);
                    func_0x000107c61170(lStack_1a0);
                    func_0x000107c61170(puStack_270);
                    func_0x000107c61170(lStack_1d8);
                    func_0x000107c61170(lStack_1d0);
                    func_0x000107c61170(lStack_1c8);
                    func_0x000107c61170(plStack_1f8);
                    func_0x000107c61170(param_3);
                    func_0x000107c61170(param_5);
                    func_0x000107c61170(puStack_1f0);
                    func_0x000107c61170(param_7);
                    func_0x000107c61170(param_8);
                    func_0x000107c61170(plStack_258);
                    func_0x000107c61170(plStack_250);
                    func_0x000107c61170(param_14);
                    func_0x000107c61170(puStack_218);
                    func_0x000107c61170(lStack_1b8);
                    func_0x000107c61170(plStack_1b0);
                    func_0x000107c61170(plStack_240);
                    func_0x000107c61170(param_20);
                    func_0x000107c61170(param_21);
                    func_0x000107c61170(param_22);
                    func_0x000107c61170(puStack_108);
                    func_0x000107c61170(puStack_200);
                    func_0x000107c61170(plStack_f8);
                    func_0x000107c61170(param_26);
                    func_0x000107c61170(lStack_110);
                    func_0x000107c61170(lStack_278);
                    func_0x000107c61170(param_30);
                    func_0x000107c61170(puStack_290);
                    func_0x000107c61170(param_32);
                    func_0x000107c61170(plStack_238);
                    func_0x000107c61170(uStack_260);
                    func_0x000107c61170(lStack_1e8);
                    func_0x000107c61170(uStack_230);
                    func_0x000107c61170(uStack_228);
                    func_0x000107c61170(lStack_1a8);
                    func_0x000107c61170(plStack_268);
                    func_0x000107c61170(puStack_220);
                    func_0x000107c61170(uStack_1c0);
                    func_0x000107c61170(puStack_1e0);
                    func_0x000107c61170(puStack_210);
                    func_0x000107c61170(puStack_288);
                    func_0x000107c61170(puStack_208);
                    func_0x000107c60bd0(ppuVar21);
                    func_0x000107c615e8(lStack_280);
                    func_0x000107c615e8(lStack_2c8);
                    func_0x000107c615e8(lStack_2c0);
                    func_0x000107c615e8(lStack_2d0);
                    func_0x000107c615e8(lStack_2d8);
                    func_0x000107c615e8(lStack_2e0);
                    func_0x000107c615e8(lStack_330);
                    func_0x000107c61170(plVar8);
                    func_0x000107c615e8(lStack_2e8);
                    func_0x000107c615e8(lStack_2f0);
                    func_0x000107c615e8(lStack_2f8);
                    func_0x000107c615e8(puStack_338);
                    func_0x000107c615e8(lStack_300);
                    func_0x000107c615e8(puStack_308);
                    func_0x000107c615e8(lStack_310);
                    func_0x000107c615e8(lStack_318);
                    func_0x000107c615e8(lStack_320);
                    func_0x000107c615e8(lStack_328);
                    func_0x000107c615e8(lStack_340);
                    func_0x000107c615e8(lStack_348);
                    func_0x000107c615e8(lStack_298);
                    func_0x000107c615e8(lStack_358);
                    func_0x000107c615e8(lStack_360);
                    func_0x000107c61170(puVar33);
                    func_0x000107c615e8(lStack_368);
                    func_0x000107c615e8(plStack_370);
                    func_0x000107c615e8(pcVar13);
                    return unaff_x20;
                  }
                  puVar26 = puStack_2b0 + -0xb;
                  uVar6 = unaff_x20[0xc];
                  unaff_x20[0xc] = lStack_300;
                  func_0x000107c615f0();
                  func_0x000107c615e8(uVar6);
                  uVar6 = unaff_x20[0xd];
                  unaff_x20[0xd] = lStack_358;
                  func_0x000107c615f0();
                  func_0x000107c615e8(uVar6);
                  lVar5 = lStack_2c8;
                  lVar32 = lStack_2c8;
                  func_0x000107c614f0();
                  uVar6 = unaff_x20[0xe];
                  unaff_x20[0xe] = lVar5;
                  lStack_380 = lVar32;
                  func_0x000107c615f0(lVar5);
                  func_0x000107c615e8(uVar6);
                  uVar6 = unaff_x20[0x10];
                  unaff_x20[0x10] = puStack_270;
                  puVar15 = puStack_270;
                  func_0x000107c61174();
                  func_0x000107c61170(uVar6);
                  uVar6 = unaff_x20[0xf];
                  unaff_x20[0xf] = lStack_280;
                  func_0x000107c615f0();
                  func_0x000107c615e8(uVar6);
                  puVar14 = (undefined *)0x0;
                  func_0x000102660d54();
                  func_0x000107c613fc();
                  func_0x000107c615f0(lStack_360);
                  func_0x000107c61174();
                  puStack_398 = puVar33;
                  func_0x00010265f438();
                  ppuStack_98 = &PTR_DAT_11052efc0;
                  puStack_b8 = puVar33;
                  puStack_a0 = puVar14;
                  func_0x000107c61428(puVar26,alStack_e0,0x21,0);
                  puStack_3b8 = puVar26;
                  FUN_101130550(&puStack_b8);
                  func_0x000107c614a8(alStack_e0);
                  lStack_428 = _DAT_113083f78;
                  lVar32 = *(long *)((long)puVar15 + _DAT_113083f78);
                  puStack_3d0 = puVar15;
                  func_0x000107c5d984();
                  func_0x000107c61180();
                  lVar5 = lVar32;
                  func_0x000107c5faec();
                  ppuStack_378 = (undefined8 **)lVar5;
                  puStack_270 = puVar26;
                  func_0x000107c61170(lVar32);
                  uVar6 = unaff_x20[0x11];
                  func_0x000109021b20();
                  uStack_3ac = (undefined4)uVar6;
                  func_0x000103a7f854();
                  uStack_3e8 = uVar6;
                  func_0x000107c4c47c();
                  puVar14 = puStack_1e0;
                  iStack_3bc = (int)uVar6;
                  if (iStack_3bc == 0) {
                    puVar14 = (undefined *)0x0;
                  }
                  else {
                    func_0x000107c61174(puStack_1e0);
                  }
                  plVar11 = plStack_1b0;
                  func_0x000107c4d80c();
                  func_0x000107c61180();
                  if (puVar14 == (undefined *)0x0) {
                    puVar29 = (undefined *)0x0;
                  }
                  else {
                    puVar12 = puVar14;
                    func_0x000107c61174();
                    puVar29 = puVar12;
                    func_0x000102702d14();
                    func_0x000107c61170(puVar12);
                  }
                  puVar15 = (undefined8 *)0x0;
                  func_0x000101121fd4();
                  puStack_3c8 = puVar15;
                  func_0x000107c613fc();
                  puVar15[9] = 0;
                  func_0x000107c61614(puVar15 + 8,0);
                  puVar12 = puStack_290;
                  puVar33 = puStack_308;
                  lVar5 = lStack_318;
                  puVar15[2] = plVar11;
                  puVar15[3] = lStack_318;
                  puVar15[4] = puStack_290;
                  puVar15[5] = param_32;
                  puVar15[6] = puVar29;
                  puVar15[7] = puStack_308;
                  uVar6 = unaff_x20[0x1f];
                  unaff_x20[0x1f] = puVar15;
                  func_0x000107c615f0(puStack_308);
                  func_0x000107c61174();
                  puStack_3e0 = puVar12;
                  func_0x000107c61174();
                  uStack_3d8 = param_32;
                  func_0x000107c615f0(lVar5);
                  puStack_2b0 = puVar15;
                  func_0x000107c6157c(puVar15);
                  func_0x000107c61574(uVar6);
                  lVar5 = unaff_x20[2];
                  func_0x000107c5b634();
                  uVar30 = unaff_x20[0x11];
                  func_0x000107c615f0(uVar30);
                  uVar16 = 0xd000000000000022;
                  func_0x000107c5fadc(0xd000000000000022,0x800000010ef27090);
                  uVar6 = uVar30;
                  func_0x000107c3ebd4();
                  func_0x000107c615e8(uVar30);
                  func_0x000107c61170(uVar16);
                  lVar32 = 0;
                  func_0x00010111bd60();
                  FUN_1011414b8(puStack_3b8,&puStack_b8,0x112d5ece0,&UNK_10d925bf0);
                  uVar16 = *(undefined8 *)(lStack_1d8 + _DAT_1130366e8);
                  func_0x000107c615f0(lStack_300);
                  func_0x000107c615f0(lStack_2c8);
                  func_0x000107c615f0(lStack_280);
                  func_0x000107c61174();
                  puVar29 = puVar14;
                  func_0x000107c61174();
                  plStack_3a8 = (long *)puVar29;
                  func_0x000107c615f0(puVar33);
                  func_0x000107c61434(puStack_270);
                  func_0x000107c6157c(uVar16);
                  puVar29 = puStack_210;
                  func_0x000107c61174();
                  puStack_290 = puVar29;
                  func_0x000107c615f0(lStack_368);
                  func_0x000107c615f0(lStack_2f8);
                  func_0x000107c615f0(lStack_2e0);
                  func_0x000107c615f0(lStack_340);
                  func_0x000107c615f0(lStack_328);
                  func_0x000107c615f0(puStack_338);
                  func_0x000107c615f0(lStack_320);
                  func_0x000107c615f0(lStack_2f0);
                  plVar11 = plStack_370;
                  func_0x000107c52060();
                  if ((long)plVar11 < 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x10113e390);
                    (*pcVar2)();
                  }
                  *(long *)((long)alStack_450 + lVar25 + 0x10) = lStack_380;
                  lStack_3f8 = lVar32;
                  *(long *)((long)alStack_450 + lVar25 + 8) = lVar32;
                  *(undefined1 *)((long)alStack_450 + lVar25) = 0;
                  *(long **)((long)alStack_480 + lVar25 + 0x28) = plVar11;
                  *(undefined **)((long)alStack_480 + lVar25 + 0x20) = puStack_290;
                  puStack_3f0 = puVar14;
                  *(undefined8 *)((long)alStack_480 + lVar25 + 0x10) = uVar16;
                  *(undefined **)((long)alStack_480 + lVar25 + 0x18) = puVar14;
                  *(undefined8 **)((long)alStack_480 + lVar25 + 8) = puStack_398;
                  *(char *)((long)alStack_480 + lVar25) = (char)uVar6;
                  *(long *)((long)&lStack_488 + lVar25) = lStack_368;
                  *(long *)((long)alStack_4b8 + lVar25 + 0x20) = lStack_2f8;
                  lVar7 = lStack_2e0;
                  *(undefined8 ***)((long)alStack_4b8 + lVar25 + 0x10) = &puStack_b8;
                  *(long *)((long)alStack_4b8 + lVar25 + 0x18) = lVar7;
                  *(long *)((long)alStack_4b8 + lVar25 + 8) = lStack_340;
                  *(long *)((long)alStack_4b8 + lVar25) = lStack_328;
                  *(undefined **)((long)alStack_4c8 + lVar25 + 8) = puStack_338;
                  *(bool *)((long)&uStack_490 + lVar25) = lVar5 != 2;
                  puVar33 = puStack_270;
                  lVar10 = lStack_280;
                  lVar9 = lStack_2c8;
                  lVar5 = lStack_300;
                  lVar32 = lStack_320;
                  lVar17 = lStack_280;
                  FUN_10111d114(lStack_280,ppuStack_378,puStack_270,lStack_2f0,lStack_320,lStack_2c8
                                ,lStack_300,puStack_308);
                  uVar6 = 0;
                  FUN_101111a0c();
                  uStack_400 = uVar6;
                  func_0x000107c615f0(lVar9);
                  func_0x000107c615f0(lVar10);
                  func_0x000107c61434(puVar33);
                  func_0x000107c6157c(unaff_x20);
                  func_0x000107c615f0(lStack_310);
                  func_0x000107c615f0(lStack_2c0);
                  plVar11 = plStack_1b0;
                  func_0x000107c4d80c();
                  func_0x000107c61180();
                  puVar33 = puStack_2b0;
                  puStack_b8 = puStack_2b0;
                  plVar34 = plStack_268;
                  plStack_408 = plVar11;
                  alStack_e0[0] = lVar17;
                  func_0x000107c61174();
                  puVar14 = puStack_288;
                  plStack_3a0 = plVar34;
                  func_0x000107c61174();
                  puStack_210 = puVar14;
                  func_0x000107c615f0(lVar5);
                  plVar11 = plStack_3a8;
                  func_0x000107c61174();
                  puStack_288 = (undefined *)plVar11;
                  func_0x000107c6157c(puVar33);
                  func_0x000107c615f0(lVar7);
                  func_0x000107c615f0(lVar32);
                  func_0x000107c6157c(lVar17);
                  plVar34 = plStack_238;
                  func_0x000107c61174();
                  plVar18 = plStack_250;
                  plStack_3a8 = plVar34;
                  func_0x000107c61174();
                  plVar19 = plStack_240;
                  plStack_238 = plVar18;
                  func_0x000107c61174();
                  plVar20 = plStack_258;
                  plStack_240 = plVar19;
                  func_0x000107c61174();
                  uVar16 = uStack_230;
                  plStack_250 = plVar20;
                  func_0x000107c61174();
                  uVar30 = uStack_228;
                  uStack_230 = uVar16;
                  func_0x000107c61174();
                  puVar14 = puStack_220;
                  uStack_228 = uVar30;
                  func_0x000107c61174();
                  puVar29 = puStack_208;
                  puStack_220 = puVar14;
                  func_0x000107c61174();
                  puStack_208 = puVar29;
                  *(undefined ***)((long)alStack_450 + lVar25 + 0x10) = &PTR_DAT_110387b80;
                  *(undefined ***)((long)alStack_450 + lVar25 + 0x18) = &PTR_DAT_110386148;
                  *(undefined ***)((long)alStack_450 + lVar25 + 8) = &PTR_DAT_1103866a0;
                  *(long *)((long)alStack_450 + lVar25) = lStack_3f8;
                  *(undefined8 *)((long)alStack_4b8 + lVar25 + 0x18) = 0;
                  *(undefined8 *)((long)alStack_4b8 + lVar25 + 0x20) = 0;
                  *(undefined **)((long)alStack_480 + lVar25 + 0x28) = puStack_2a8;
                  *(undefined8 **)((long)alStack_480 + lVar25 + 0x20) = puStack_3c8;
                  *(long *)((long)alStack_480 + lVar25 + 0x18) = lStack_380;
                  uVar6 = uStack_400;
                  *(undefined8 *)((long)alStack_480 + lVar25 + 8) = 0;
                  *(undefined8 *)((long)alStack_480 + lVar25 + 0x10) = uVar6;
                  *(undefined **)((long)alStack_480 + lVar25) = puVar29;
                  *(undefined1 *)((long)&lStack_488 + lVar25) = 0;
                  *(undefined8 *)((long)&uStack_490 + lVar25) = 0;
                  *(undefined **)((long)alStack_4b8 + lVar25 + 0x10) = puStack_210;
                  *(undefined **)((long)alStack_4b8 + lVar25 + 8) = puStack_3f0;
                  *(char *)((long)alStack_4b8 + lVar25) = (char)uStack_390;
                  lVar5 = lStack_388;
                  *(undefined **)((long)alStack_4c8 + lVar25) = puVar14;
                  *(long *)((long)alStack_4c8 + lVar25 + 8) = lVar5;
                  auStack_4d0[lVar25] = (char)uStack_3ac;
                  plVar11 = plStack_268;
                  *(long *)((long)alStack_530 + lVar25 + 0x50) = lVar32;
                  *(long **)((long)alStack_530 + lVar25 + 0x58) = plVar11;
                  *(undefined8 *)((long)alStack_530 + lVar25 + 0x40) = uVar16;
                  *(undefined8 *)((long)alStack_530 + lVar25 + 0x48) = uVar30;
                  *(long **)((long)alStack_530 + lVar25 + 0x30) = plVar19;
                  *(long **)((long)alStack_530 + lVar25 + 0x38) = plVar20;
                  *(long **)((long)alStack_530 + lVar25 + 0x20) = plVar34;
                  *(long **)((long)alStack_530 + lVar25 + 0x28) = plVar18;
                  *(long **)((long)alStack_530 + lVar25 + 0x18) = alStack_e0;
                  *(undefined8 ***)((long)alStack_530 + lVar25 + 0x10) = &puStack_b8;
                  lVar32 = lStack_300;
                  *(long *)((long)alStack_530 + lVar25) = lVar7;
                  *(long *)((long)alStack_530 + lVar25 + 8) = lVar32;
                  lVar1 = lStack_280;
                  lVar10 = lStack_2c0;
                  lVar9 = lStack_2c8;
                  lVar5 = lStack_310;
                  plVar11 = plStack_408;
                  ppuVar21 = ppuStack_378;
                  FUN_1011145a0(ppuStack_378,puStack_270,unaff_x20,lStack_2c8,lStack_280,lStack_2c0,
                                lStack_310,plStack_408);
                  func_0x000107c61574(unaff_x20);
                  func_0x000107c615e8(lVar9);
                  func_0x000107c615e8(lVar1);
                  func_0x000107c615e8(lVar10);
                  func_0x000107c615e8(lVar5);
                  func_0x000107c61170(plVar11);
                  func_0x000107c615e8(lVar7);
                  func_0x000107c615e8(lVar32);
                  func_0x000107c61170(plStack_3a8);
                  func_0x000107c61170(plStack_238);
                  func_0x000107c61170(plStack_240);
                  func_0x000107c61170(plStack_250);
                  func_0x000107c61170(uStack_230);
                  func_0x000107c61170(uStack_228);
                  func_0x000107c615e8(lStack_320);
                  func_0x000107c61170(plStack_3a0);
                  func_0x000107c61170(puStack_220);
                  func_0x000107c61170(puStack_288);
                  func_0x000107c61170(puStack_210);
                  func_0x000107c61170(puStack_208);
                  puStack_2b0[9] = &PTR_DAT_110385a10;
                  func_0x000107c61604(puStack_2b0 + 8,ppuVar21);
                  uVar6 = unaff_x20[0x20];
                  unaff_x20[0x20] = ppuVar21;
                  func_0x000107c61174();
                  puStack_2a8 = (undefined *)ppuVar21;
                  func_0x000107c61170(uVar6);
                  uVar6 = unaff_x20[0x21];
                  unaff_x20[0x21] = lVar17;
                  func_0x000107c6157c();
                  func_0x000107c61574(uVar6);
                  plVar11 = plStack_1b0;
                  func_0x000107c4d80c();
                  func_0x000107c61180();
                  plStack_268 = *(long **)(lStack_100 + lStack_2b8);
                  uStack_390 = *(undefined8 *)(lStack_1d0 + _DAT_112fcd168);
                  lStack_388 = *(undefined8 *)(lStack_1c8 + _DAT_112eb3c58);
                  puVar33 = param_22;
                  plStack_258 = plVar11;
                  func_0x000107c4c440();
                  func_0x000107c61180();
                  lVar5 = unaff_x20[0x20];
                  if (lVar5 == 0) {
                    func_0x000107c61574(lVar17);
                    func_0x000107c61170(puStack_2a8);
                    func_0x000107c61170(plStack_258);
                    func_0x000107c61170(puVar33);
                    lVar5 = 0;
                  }
                  else {
                    uVar31 = unaff_x20[0x11];
                    uVar6 = 0;
                    func_0x000101142130();
                    puStack_3f0 = (undefined *)uVar6;
                    func_0x000107c613fc();
                    func_0x000107c61174();
                    lStack_418 = lVar5;
                    func_0x000107c615f0(uVar31);
                    func_0x000107c61174();
                    puStack_3c8 = puVar33;
                    FUN_101141cf4(uVar31,puVar33);
                    uVar30 = *(undefined8 *)(lStack_1e8 + _DAT_112fa9600);
                    lStack_2b8 = *(long *)(lStack_1e8 + _DAT_112fa9608);
                    uVar6 = unaff_x20[10];
                    uStack_410 = *(undefined8 *)(lStack_1e8 + _DAT_112fa95f8);
                    plStack_408 = (long *)unaff_x20[0x11];
                    uStack_400 = unaff_x20[0x27];
                    lVar9 = 0;
                    uStack_420 = uVar30;
                    FUN_101109db0();
                    lStack_3f8 = lVar9;
                    func_0x000107c610f8();
                    puVar33 = (undefined8 *)(lVar9 + _DAT_112d5e598);
                    *puVar33 = 0;
                    puVar33[1] = 0;
                    lVar5 = _DAT_112d5e5e0;
                    func_0x000107c61614(lVar9 + _DAT_112d5e5e0,0);
                    puVar15 = (undefined8 *)(lVar9 + _DAT_112d5e610);
                    *puVar15 = 0;
                    puVar15[1] = 0;
                    puVar15 = (undefined8 *)(lVar9 + _DAT_112d5e618);
                    *puVar15 = 0;
                    puVar15[1] = 0;
                    *(undefined8 *)(lVar9 + _DAT_112d5e620) = 0;
                    lVar32 = _DAT_112d5e638;
                    func_0x000107c61614(lVar9 + _DAT_112d5e638,0);
                    func_0x000107c61614(lVar9 + _DAT_112d5e640,0);
                    plVar11 = (long *)(lVar9 + _DAT_112d5e590);
                    *plVar11 = (long)ppuStack_378;
                    plVar11[1] = (long)puStack_270;
                    uVar16 = puVar33[1];
                    *puVar33 = 0;
                    puVar33[1] = 0;
                    func_0x000107c61434();
                    lVar7 = lStack_418;
                    func_0x000107c61174();
                    ppuStack_378 = (undefined8 **)lVar7;
                    func_0x000107c6157c(uVar31);
                    func_0x000107c61174();
                    lStack_418 = uVar6;
                    func_0x000107c6142c(uVar16);
                    plVar34 = plStack_238;
                    *(long **)(lVar9 + _DAT_112d5e5a0) = plStack_258;
                    *(long **)(lVar9 + _DAT_112d5e5a8) = plStack_238;
                    *(long **)(lVar9 + _DAT_112d5e5b0) = plStack_268;
                    *(undefined8 *)(lVar9 + _DAT_112d5e5b8) = uStack_260;
                    puVar33 = (undefined8 *)(lVar9 + _DAT_112d5e5c0);
                    puVar33[3] = puStack_3f0;
                    puVar33[4] = &PTR_DAT_110387fb0;
                    *puVar33 = uVar31;
                    *(undefined8 *)(lVar9 + _DAT_112d5e5c8) = uVar30;
                    *(long *)(lVar9 + _DAT_112d5e5d0) = lStack_2b8;
                    *(undefined8 *)(lVar9 + _DAT_112d5e5d8) = uVar6;
                    *(undefined8 *)(lVar9 + _DAT_112d5e600) = 0;
                    func_0x000107c61604(lVar9 + lVar5,0);
                    ppuVar21 = ppuStack_378;
                    lVar5 = lStack_388;
                    uVar30 = uStack_390;
                    uVar16 = uStack_400;
                    plVar11 = plStack_408;
                    uVar6 = uStack_410;
                    *(undefined8 *)(lVar9 + _DAT_112d5e5e8) = uStack_410;
                    *(long *)(lVar9 + _DAT_112d5e5f0) = uStack_390;
                    *(long **)(lVar9 + _DAT_112d5e5f8) = plStack_408;
                    *(long *)(lVar9 + _DAT_112d5e608) = lStack_388;
                    *(undefined8 *)(lVar9 + _DAT_112d5e628) = uStack_400;
                    *(undefined1 *)(lVar9 + _DAT_112d5e630) = 1;
                    func_0x000107c61604(lVar9 + lVar32,ppuStack_378);
                    lStack_e8 = lStack_3f8;
                    puStack_3f0 = PTR_s_init_1125d9248;
                    lStack_f0 = lVar9;
                    func_0x000107c61174(plVar34);
                    func_0x000107c6157c(uVar31);
                    lVar32 = lStack_418;
                    func_0x000107c61174(lStack_418);
                    func_0x000107c61174();
                    func_0x000107c61174(plStack_268);
                    func_0x000107c61174(uStack_260);
                    func_0x000107c6157c(uStack_420);
                    func_0x000107c6157c(lStack_2b8);
                    func_0x000107c6157c(uVar6);
                    func_0x000107c61174(uVar30);
                    func_0x000107c615f0(plVar11);
                    func_0x000107c61174(lVar5);
                    func_0x000107c61174(uVar16);
                    plVar34 = &lStack_f0;
                    func_0x000107c61154(plVar34,puStack_3f0);
                    func_0x000107c61574(uVar31);
                    func_0x000107c61170(lVar32);
                    func_0x000107c61170(ppuVar21);
                    FUN_10110aec8(0);
                    func_0x000107c610f8();
                    func_0x000107c61174();
                    plVar11 = plVar34;
                    func_0x00010110a638();
                    uVar6 = unaff_x20[0x23];
                    unaff_x20[0x23] = plVar11;
                    func_0x000107c61170(uVar6);
                    puVar14 = &UNK_1103877c0;
                    func_0x000107c613fc(&UNK_1103877c0,0x18,7);
                    func_0x000107c61644(puVar14 + 0x10,unaff_x20);
                    puVar29 = PTR___NSConcreteStackBlock_11034bd00;
                    ppuStack_98 = (undefined **)0x101141488;
                    puStack_b8 = (undefined8 *)PTR___NSConcreteStackBlock_11034bd00;
                    uStack_b0 = 0x42000000;
                    pcStack_a8 = (code *)0x100f11710;
                    puStack_a0 = &UNK_1103879b8;
                    ppuVar22 = &puStack_b8;
                    puStack_90 = puVar14;
                    func_0x000107c60bc4(ppuVar22);
                    func_0x000107c61574(puStack_90);
                    puVar14 = &UNK_1103879f0;
                    func_0x000107c613fc(&UNK_1103879f0,0x18,7);
                    *(long **)(puVar14 + 0x10) = plVar34;
                    ppuStack_98 = (undefined **)0x101141490;
                    puStack_b8 = (undefined8 *)puVar29;
                    uStack_b0 = 0x42000000;
                    pcStack_a8 = FUN_100f10508;
                    puStack_a0 = &UNK_110387a08;
                    ppuVar23 = &puStack_b8;
                    puStack_90 = puVar14;
                    func_0x000107c60bc4(ppuVar23);
                    puVar14 = puStack_90;
                    func_0x000107c61174();
                    func_0x000107c61574(puVar14);
                    FUN_101141a84(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
                    func_0x000107c614e8();
                    lVar5 = lStack_2d0;
                    func_0x000107c4c214();
                    func_0x000107c61180();
                    func_0x000107c61574(lVar17);
                    func_0x000107c61170(puStack_2a8);
                    func_0x000107c61170(plStack_258);
                    func_0x000107c61170(puStack_3c8);
                    func_0x000107c60bd0(ppuVar23);
                    func_0x000107c60bd0(ppuVar22);
                    func_0x000107c61170(ppuVar21);
                    func_0x000107c61574(uVar31);
                    func_0x000107c61170(plVar34);
                  }
                  uVar6 = unaff_x20[0x22];
                  unaff_x20[0x22] = lVar5;
                  func_0x000107c615e8(uVar6);
                  plVar11 = plStack_370;
                  FUN_10113e418();
                  lVar5 = lStack_1b8;
                  plStack_258 = plVar11;
                  func_0x000107c3fa04();
                  func_0x000107c61180();
                  lStack_2b8 = lVar5;
                  if (lVar5 == 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x10113e394);
                    (*pcVar2)();
                  }
                  uVar6 = unaff_x20[0x20];
                  lVar5 = unaff_x20[0x21];
                  plVar34 = (long *)unaff_x20[0x22];
                  uStack_390 = CONCAT44(uStack_390._4_4_,(uint)*(byte *)((long)unaff_x20 + 0xe9));
                  uVar16 = unaff_x20[0x1e];
                  lVar7 = 0;
                  FUN_101137c08();
                  lStack_388 = lVar7;
                  func_0x000107c610f8();
                  *(undefined8 *)(lVar7 + _DAT_112d5f6d8) = 0;
                  *(undefined8 *)(lVar7 + _DAT_112d5f6e0) = 0;
                  lVar32 = _DAT_112d5f6e8;
                  func_0x0001000285a8(0x112d5f750,&UNK_10d9262a0);
                  func_0x000107c613fc();
                  func_0x000107c6157c(lVar5);
                  plVar11 = plStack_1f8;
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  puStack_2a8 = (undefined *)uVar16;
                  func_0x000107c615f0(lStack_2d0);
                  func_0x000107c615f0(lStack_2d8);
                  func_0x000107c615f0(lStack_330);
                  uVar16 = uVar6;
                  func_0x000107c61174();
                  plStack_268 = plVar34;
                  func_0x000107c615f0(plVar34);
                  plVar34 = plStack_258;
                  func_0x000107c61174();
                  plStack_1f8 = plVar34;
                  func_0x0001000c2754();
                  *(long **)(lVar7 + lVar32) = plVar34;
                  lVar32 = _DAT_112d5f6f0;
                  puVar14 = PTR_PTR_1126ae820;
                  func_0x000107c610f8();
                  func_0x000107c453e4();
                  *(undefined **)(lVar7 + lVar32) = puVar14;
                  lVar32 = _DAT_112d5f6f8;
                  puVar14 = PTR_PTR_1126ae820;
                  func_0x000107c610f8();
                  func_0x000107c453e4();
                  *(undefined **)(lVar7 + lVar32) = puVar14;
                  lVar32 = _DAT_112d5f708;
                  puVar14 = PTR_PTR_1126ae820;
                  func_0x000107c610f8();
                  func_0x000107c453e4();
                  *(undefined **)(lVar7 + lVar32) = puVar14;
                  lVar32 = _DAT_112d5f720;
                  puVar14 = PTR__OBJC_CLASS___UIScrollView_1126af098;
                  func_0x000107c610f8();
                  func_0x000107c453e4();
                  *(undefined **)(lVar7 + lVar32) = puVar14;
                  *(undefined1 *)(lVar7 + _DAT_112d5f710) = 1;
                  *(undefined8 *)(lVar7 + _DAT_112d5f718) = uVar6;
                  puVar14 = PTR_PTR_1126b6500;
                  func_0x000107c610f8();
                  func_0x000107c61174();
                  ppuStack_378 = (undefined8 **)uVar16;
                  plStack_258 = plVar8;
                  func_0x000107c48a54();
                  *(undefined **)(lVar7 + _DAT_112d5f700) = puVar14;
                  lStack_80 = lStack_388;
                  plVar8 = &lStack_88;
                  lStack_88 = lVar7;
                  func_0x000107c61154(plVar8,PTR_s_initWithNibName_bundle__1125e9850,0,0);
                  func_0x000107c54394();
                  puVar14 = PTR_PTR_1126a63e0;
                  func_0x000107c610f8();
                  func_0x000107c47aa0();
                  if (lVar5 != 0) {
                    puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    func_0x000107c6157c(lVar5);
                    iVar4 = (int)uStack_390;
                    func_0x000107c45a48(puVar29);
                    func_0x000107c55104(puVar14);
                    func_0x000107c61170(puVar29);
                    func_0x000107c5627c(puVar14);
                    uVar6 = *(undefined8 *)((long)plVar8 + _DAT_112d5f708);
                    func_0x000107c5cb24(uVar6);
                    func_0x000107c61180();
                    func_0x000107c54120(puVar14);
                    func_0x000107c61170(uVar6);
                    plVar34 = plVar11;
                    func_0x000107c4c3a4(plVar11);
                    func_0x000107c61180();
                    plVar18 = plVar34;
                    func_0x000107c5fc54();
                    func_0x000107c61170(plVar34);
                    plVar34 = plVar18;
                    FUN_101115ce4(plVar18);
                    func_0x000107c6142c(plVar18);
                    plVar18 = plVar34;
                    func_0x000107c5cb24(plVar34);
                    func_0x000107c61180();
                    func_0x000107c61170(plVar34);
                    func_0x000107c57af0(puVar14);
                    func_0x000107c61170(plVar18);
                    puVar24 = PTR_PTR_1126a63b8;
                    func_0x000107c610f8();
                    uVar6 = 0;
                    FUN_101141a84(0,0x112d5e950,&PTR_PTR_1126a6390);
                    puVar29 = PTR___swiftEmptyArrayStorage_11034f1c8;
                    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar6);
                    func_0x000107c494ac(0);
                    func_0x000107c61170(puVar29);
                    puVar29 = &UNK_110387810;
                    func_0x000107c613fc(&UNK_110387810,0x18,7);
                    func_0x000107c61644(puVar29 + 0x10,lVar5);
                    puVar12 = &UNK_110387838;
                    func_0x000107c613fc(&UNK_110387838,0x20,7);
                    *(undefined **)(puVar12 + 0x10) = puVar29;
                    *(undefined **)(puVar12 + 0x18) = puVar24;
                    func_0x0001000285a8(0x112d5f0e0,&UNK_10dac58b0);
                    func_0x000107c613fc();
                    func_0x000107c61174(puVar24);
                    uVar6 = 0x101141448;
                    func_0x0001000b64ac(0x101141448,puVar12);
                    uVar16 = uVar6;
                    func_0x0001004575f0();
                    func_0x000107c61170(puVar24);
                    func_0x000107c61574(uVar6);
                    uVar6 = uVar16;
                    func_0x000107c5cb24(uVar16);
                    func_0x000107c61180();
                    func_0x000107c61170(uVar16);
                    func_0x000107c57344(puVar14);
                    func_0x000107c61170(uVar6);
                    func_0x000107c54a98(puVar14);
                    FUN_101116f70();
                    puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    func_0x000107c45a48();
                    func_0x000107c59228(puVar14);
                    func_0x000107c61170(puVar29);
                    puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    func_0x000107c45a48();
                    func_0x000107c544cc(puVar14);
                    func_0x000107c61170(puVar29);
                    puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    func_0x000107c46ecc();
                    func_0x000107c56b60(puVar14);
                    func_0x000107c61170(puVar29);
                    if (iVar4 != 0) {
                      puVar29 = puStack_2a8;
                      func_0x000107c5cb24(puStack_2a8);
                      func_0x000107c61180();
                      func_0x000107c534b4(puVar14);
                      func_0x000107c61170(puVar29);
                    }
                    puVar29 = &UNK_110387860;
                    puVar24 = puVar29;
                    func_0x000107c613fc(&UNK_110387860,0x20,7);
                    *(undefined ***)(puVar24 + 0x18) = &PTR_DAT_1103860f0;
                    func_0x000107c61614(puVar24 + 0x10,lVar5);
                    puVar12 = PTR___NSConcreteStackBlock_11034bd00;
                    ppuStack_98 = (undefined **)0x101141450;
                    puStack_b8 = (undefined8 *)PTR___NSConcreteStackBlock_11034bd00;
                    uStack_b0 = 0x42000000;
                    pcStack_a8 = (code *)0x10113149c;
                    puStack_a0 = &UNK_110387878;
                    ppuVar21 = &puStack_b8;
                    puStack_90 = puVar24;
                    func_0x000107c60bc4(ppuVar21);
                    puVar24 = puStack_90;
                    func_0x000107c6157c(lVar5);
                    func_0x000107c61574(puVar24);
                    func_0x000107c54ea0(puVar14);
                    func_0x000107c60bd0(ppuVar21);
                    puVar24 = puVar29;
                    func_0x000107c613fc(&UNK_110387860,0x20,7);
                    *(undefined ***)(puVar24 + 0x18) = &PTR_DAT_1103860f0;
                    func_0x000107c61614(puVar24 + 0x10,lVar5);
                    ppuStack_98 = (undefined **)0x101141458;
                    puStack_b8 = (undefined8 *)puVar12;
                    uStack_b0 = 0x42000000;
                    pcStack_a8 = (code *)0x1011314a0;
                    puStack_a0 = &UNK_1103878a0;
                    ppuVar21 = &puStack_b8;
                    puStack_90 = puVar24;
                    func_0x000107c60bc4(ppuVar21);
                    func_0x000107c61574(puStack_90);
                    func_0x000107c54ec8(puVar14);
                    func_0x000107c60bd0(ppuVar21);
                    puVar24 = puVar29;
                    func_0x000107c613fc(&UNK_110387860,0x20,7);
                    *(undefined ***)(puVar24 + 0x18) = &PTR_DAT_1103860f0;
                    func_0x000107c61614(puVar24 + 0x10,lVar5);
                    ppuStack_98 = (undefined **)0x101141460;
                    puStack_b8 = (undefined8 *)puVar12;
                    uStack_b0 = 0x42000000;
                    pcStack_a8 = (code *)0x1011314a4;
                    puStack_a0 = &UNK_1103878c8;
                    ppuVar21 = &puStack_b8;
                    puStack_90 = puVar24;
                    func_0x000107c60bc4(ppuVar21);
                    func_0x000107c61574(puStack_90);
                    func_0x000107c54ed8(puVar14);
                    func_0x000107c60bd0(ppuVar21);
                    func_0x000107c613fc(&UNK_110387860,0x20,7);
                    *(undefined ***)(puVar29 + 0x18) = &PTR_DAT_1103860f0;
                    func_0x000107c61614(puVar29 + 0x10,lVar5);
                    ppuStack_98 = (undefined **)0x101141468;
                    puStack_b8 = (undefined8 *)puVar12;
                    uStack_b0 = 0x42000000;
                    pcStack_a8 = (code *)0x1011314a4;
                    puStack_a0 = &UNK_1103878f0;
                    ppuVar21 = &puStack_b8;
                    puStack_90 = puVar29;
                    func_0x000107c60bc4(ppuVar21);
                    func_0x000107c61574(puStack_90);
                    func_0x000107c54eb0(puVar14);
                    func_0x000107c60bd0(ppuVar21);
                    puVar29 = &UNK_110387928;
                    func_0x000107c613fc(&UNK_110387928,0x18,7);
                    func_0x000107c61614(puVar29 + 0x10,plVar8);
                    ppuStack_98 = (undefined **)0x101141470;
                    puStack_b8 = (undefined8 *)puVar12;
                    uStack_b0 = 0x42000000;
                    pcStack_a8 = (code *)0x101126808;
                    puStack_a0 = &UNK_110387940;
                    ppuVar21 = &puStack_b8;
                    puStack_90 = puVar29;
                    func_0x000107c60bc4(ppuVar21);
                    func_0x000107c61574(puStack_90);
                    func_0x000107c58ff4(puVar14);
                    func_0x000107c60bd0(ppuVar21);
                    if (iStack_3bc != 0) {
                      puVar29 = &UNK_110387860;
                      func_0x000107c613fc(&UNK_110387860,0x20,7);
                      *(undefined ***)(puVar29 + 0x18) = &PTR_DAT_1103860f0;
                      func_0x000107c61614(puVar29 + 0x10,lVar5);
                      ppuStack_98 = (undefined **)0x101141480;
                      puStack_b8 = (undefined8 *)PTR___NSConcreteStackBlock_11034bd00;
                      uStack_b0 = 0x42000000;
                      pcStack_a8 = (code *)0x101126850;
                      puStack_a0 = &UNK_110387990;
                      ppuVar21 = &puStack_b8;
                      puStack_90 = puVar29;
                      func_0x000107c60bc4(ppuVar21);
                      func_0x000107c61574(puStack_90);
                      func_0x000107c54ec4(puVar14);
                      func_0x000107c60bd0(ppuVar21);
                    }
                    puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    func_0x000107c46ed0();
                    func_0x000107c54a94(puVar14);
                    func_0x000107c61170(puVar29);
                    puVar29 = &UNK_110387860;
                    func_0x000107c613fc(&UNK_110387860,0x20,7);
                    *(undefined ***)(puVar29 + 0x18) = &PTR_DAT_1103860f0;
                    func_0x000107c61614(puVar29 + 0x10,lVar5);
                    func_0x000107c61574(lVar5);
                    ppuStack_98 = (undefined **)0x101141478;
                    puStack_b8 = (undefined8 *)PTR___NSConcreteStackBlock_11034bd00;
                    uStack_b0 = 0x42000000;
                    pcStack_a8 = FUN_100f7177c;
                    puStack_a0 = &UNK_110387968;
                    ppuVar21 = &puStack_b8;
                    puStack_90 = puVar29;
                    func_0x000107c60bc4(ppuVar21);
                    func_0x000107c61574(puStack_90);
                    func_0x000107c55fd4(puVar14);
                    func_0x000107c60bd0(ppuVar21);
                    func_0x000107c61574(lVar5);
                  }
                  func_0x000107c569b8(puVar14);
                  plVar34 = plVar11;
                  func_0x000107c4df34(plVar11);
                  func_0x000107c61180();
                  lVar32 = lStack_330;
                  func_0x000107c4e9c0(lStack_330);
                  func_0x000107c61180();
                  func_0x000107c61170(plVar34);
                  func_0x000107c5997c(puVar14);
                  func_0x000107c615e8(lVar32);
                  puVar29 = PTR_PTR_1126a63e8;
                  func_0x000107c610f8(PTR_PTR_1126a63e8);
                  func_0x000107c453e4();
                  func_0x000107c54ab0(puVar14);
                  func_0x000107c61170(puVar29);
                  puVar29 = puVar14;
                  func_0x000107c43734();
                  func_0x000107c61180();
                  if (puVar29 == (undefined *)0x0) {
                    func_0x000107c61170(puVar14);
                    func_0x000107c615e8(lStack_330);
                    func_0x000107c615e8(lStack_2d0);
                    func_0x000107c615e8(lStack_2d8);
                    func_0x000107c61170(plVar11);
                    func_0x000107c61170(plStack_258);
                    func_0x000107c615e8(lStack_2b8);
                    func_0x000107c61574(lVar5);
                    func_0x000107c61170(ppuStack_378);
                    func_0x000107c615e8(plStack_268);
                    func_0x000107c61170(puStack_2a8);
                    plVar34 = plStack_1f8;
                  }
                  else {
                    func_0x000107c54f7c();
                    ppuVar21 = ppuStack_378;
                    func_0x000107c569c8(puVar29);
                    func_0x000107c54ab8(puVar29);
                    puVar12 = PTR_PTR_1126a63f0;
                    func_0x000107c610f8();
                    lVar32 = lStack_2d0;
                    func_0x000107c49520();
                    plVar34 = *(long **)((long)plVar8 + _DAT_112d5f6e0);
                    *(undefined **)((long)plVar8 + _DAT_112d5f6e0) = puVar12;
                    func_0x000107c615e8(lStack_330);
                    func_0x000107c615e8(lVar32);
                    func_0x000107c615e8(lStack_2d8);
                    func_0x000107c61170(plVar11);
                    func_0x000107c61170(plStack_258);
                    func_0x000107c615e8(lStack_2b8);
                    func_0x000107c61574(lVar5);
                    func_0x000107c61170(ppuVar21);
                    func_0x000107c615e8(plStack_268);
                    func_0x000107c61170(puStack_2a8);
                    func_0x000107c61170(plStack_1f8);
                    func_0x000107c61170(puVar29);
                    func_0x000107c61170(puVar14);
                  }
                  func_0x000107c61170(plVar34);
                  uVar6 = *puStack_2a0;
                  *puStack_2a0 = plVar8;
                  func_0x000107c61174();
                  func_0x000107c61170(uVar6);
                  puVar33 = *(undefined8 **)((long)plVar8 + _DAT_112d5f6e0);
                  if (puVar33 == (undefined8 *)0x0) {
                    func_0x000107c61170(plVar8);
                    func_0x000107c6142c(puStack_270);
                    func_0x000107c61170(plStack_248);
                    func_0x000107c61170(param_29);
                    func_0x000107c61170(lStack_100);
                    func_0x000107c61170(param_4);
                    func_0x000107c61170(param_9);
                    func_0x000107c61170(param_10);
                    func_0x000107c61170(param_19);
                    func_0x000107c61170(lStack_1a0);
                    func_0x000107c615e8(lStack_2c8);
                    func_0x000107c61170(puStack_3d0);
                    func_0x000107c615e8(uStack_3e8);
                    func_0x000107c61170(lStack_1d8);
                    func_0x000107c615e8(plStack_370);
                    func_0x000107c61574(puStack_2b0);
                    func_0x000107c61170(lStack_1d0);
                    func_0x000107c61170(lStack_1c8);
                    func_0x000107c615e8(lStack_348);
                    func_0x000107c61170(plVar11);
                    func_0x000107c61170(param_3);
                    func_0x000107c61170(param_5);
                    func_0x000107c61170(puStack_1f0);
                    func_0x000107c61170(param_7);
                    func_0x000107c61170(param_8);
                    func_0x000107c61170(plStack_250);
                    func_0x000107c61170(plStack_238);
                    func_0x000107c61170(param_14);
                    func_0x000107c61170(puStack_218);
                    func_0x000107c61170(lStack_1b8);
                    func_0x000107c61170(plStack_1b0);
                    func_0x000107c61170(plStack_240);
                    func_0x000107c61170(param_20);
                    func_0x000107c61170(param_21);
                    func_0x000107c61170(param_22);
                    func_0x000107c61170(puStack_108);
                    func_0x000107c61170(puStack_200);
                    func_0x000107c61170(plStack_f8);
                    func_0x000107c61170(param_26);
                    func_0x000107c61170(lStack_110);
                    func_0x000107c61170(lStack_278);
                    func_0x000107c61170(param_30);
                    func_0x000107c61170(puStack_3e0);
                    func_0x000107c61170(uStack_3d8);
                    func_0x000107c61170(plStack_3a8);
                    func_0x000107c61170(uStack_260);
                    func_0x000107c61170(lStack_1e8);
                    func_0x000107c61170(uStack_230);
                    func_0x000107c61170(uStack_228);
                    func_0x000107c61170(lStack_1a8);
                    func_0x000107c61170(plStack_3a0);
                    func_0x000107c61170(puStack_220);
                    func_0x000107c61170(uStack_1c0);
                    func_0x000107c61170(puStack_1e0);
                    func_0x000107c61170(puStack_290);
                    func_0x000107c61170(puStack_210);
                    func_0x000107c61170(puStack_208);
                    func_0x000107c61170(plStack_1f8);
                    func_0x000107c61170(puStack_288);
                    func_0x000107c615e8(lStack_368);
                    func_0x000107c61170(puStack_398);
                    func_0x000107c615e8(lStack_360);
                    func_0x000107c615e8(lStack_358);
                    func_0x000107c615e8(lStack_298);
                    func_0x000107c615e8(lStack_340);
                    func_0x000107c615e8(lStack_328);
                    func_0x000107c615e8(lStack_320);
                    func_0x000107c615e8(lStack_318);
                    func_0x000107c615e8(lStack_310);
                    func_0x000107c615e8(puStack_308);
                    func_0x000107c615e8(lStack_300);
                    func_0x000107c615e8(puStack_338);
                    func_0x000107c615e8(lStack_2f8);
                    func_0x000107c615e8(lStack_2f0);
                    func_0x000107c615e8(lStack_2e8);
                    func_0x000107c61170(plStack_258);
                    func_0x000107c615e8(lStack_330);
                    func_0x000107c615e8(lStack_2e0);
                    func_0x000107c615e8(lStack_2d8);
                    func_0x000107c615e8(lStack_2d0);
                    func_0x000107c615e8(lStack_2c0);
                    func_0x000107c615e8(lStack_280);
                    return unaff_x20;
                  }
                  puVar14 = PTR_PTR_1126aead8;
                  func_0x000107c610f8();
                  func_0x000107c61174();
                  puStack_2a0 = puVar33;
                  func_0x000107c61174();
                  plStack_268 = plVar8;
                  func_0x000107c4807c();
                  puStack_2a8 = puVar14;
                  func_0x000107c6142c(puStack_270);
                  if (unaff_x20[0x20] != 0) {
                    func_0x000107c61604(unaff_x20[0x20] + _DAT_112d5e6b0,plStack_268);
                  }
                  uVar6 = unaff_x20[4];
                  unaff_x20[4] = lStack_2e8;
                  func_0x000107c615f0();
                  func_0x000107c615e8(uVar6);
                  lVar5 = lStack_348;
                  func_0x000107c4984c(lStack_348);
                  func_0x000107c61180();
                  puVar14 = &UNK_1103877c0;
                  func_0x000107c613fc(&UNK_1103877c0,0x18,7);
                  func_0x000107c61644(puVar14 + 0x10,unaff_x20);
                  ppuStack_98 = (undefined **)FUN_101141424;
                  puStack_b8 = (undefined8 *)PTR___NSConcreteStackBlock_11034bd00;
                  uStack_b0 = 0x42000000;
                  pcStack_a8 = (code *)0x1011314a8;
                  puStack_a0 = &UNK_1103877d8;
                  ppuVar21 = &puStack_b8;
                  puStack_90 = puVar14;
                  func_0x000107c60bc4(ppuVar21);
                  func_0x000107c61574(puStack_90);
                  lVar32 = lVar5;
                  func_0x000107c5c320(lVar5);
                  func_0x000107c61180();
                  func_0x000107c60bd0(ppuVar21);
                  func_0x000107c61170(lVar5);
                  func_0x000107c3e924(lVar32);
                  func_0x000107c61170(lVar32);
                  lVar5 = unaff_x20[8];
                  if (lVar5 != 0) {
                    FUN_1011414b8(puStack_3b8,alStack_e0,0x112d5ece0,&UNK_10d925bf0);
                    if (lStack_c8 != 0) {
                      ppuVar21 = &puStack_b8;
                      FUN_100ca4814(alStack_e0);
                      uVar6 = 0;
                      func_0x0001011320c0();
                      puVar33 = puStack_3d0;
                      uVar16 = *(undefined8 *)((long)puStack_3d0 + lStack_428);
                      puStack_270 = (undefined8 *)uVar6;
                      func_0x000107c61174();
                      func_0x000107c5d984();
                      func_0x000107c61180();
                      uVar6 = uVar16;
                      func_0x000107c5faec();
                      ppuStack_378 = ppuVar21;
                      lStack_2b8 = uVar6;
                      func_0x000107c61170(uVar16);
                      uVar6 = unaff_x20[2];
                      uVar16 = *(undefined8 *)(param_19 + lStack_350);
                      uVar30 = unaff_x20[10];
                      FUN_101141a18(&puStack_b8,alStack_e0);
                      lVar32 = lStack_2c8;
                      uVar31 = unaff_x20[0x19];
                      func_0x000107c615f0(lStack_2c8);
                      func_0x000107c61174();
                      func_0x000107c61174(uVar6);
                      func_0x000107c61174(uVar16);
                      func_0x000107c61174();
                      func_0x000107c6157c(uVar31);
                      *(long *)((long)alStack_450 + lVar25 + 0x18) = lStack_380;
                      puVar15 = puStack_270;
                      *(undefined8 *)((long)alStack_450 + lVar25 + 8) = uVar31;
                      *(undefined8 **)((long)alStack_450 + lVar25 + 0x10) = puVar15;
                      *(undefined8 *)((long)alStack_480 + lVar25 + 0x28) = uVar30;
                      *(long **)((long)alStack_450 + lVar25) = alStack_e0;
                      *(long *)((long)alStack_480 + lVar25 + 0x20) = lVar5;
                      *(undefined8 *)((long)alStack_480 + lVar25 + 0x18) = uStack_3d8;
                      *(undefined **)((long)alStack_480 + lVar25 + 0x10) = puStack_3e0;
                      plVar8 = plStack_268;
                      lVar25 = lStack_2b8;
                      FUN_101132900(lStack_2b8,ppuStack_378,uVar6,plStack_268,lVar32,lStack_280,
                                    uVar16,plStack_3a8);
                      func_0x000107c61170(plVar11);
                      func_0x000107c61170(plStack_3a0);
                      func_0x000107c61170(puStack_210);
                      func_0x000107c615e8(lStack_300);
                      func_0x000107c615e8(lStack_358);
                      func_0x000107c61170(puStack_398);
                      func_0x000107c615e8(lStack_360);
                      func_0x000107c61170(puStack_288);
                      func_0x000107c615e8(puStack_308);
                      func_0x000107c615e8(lStack_318);
                      func_0x000107c61574(puStack_2b0);
                      func_0x000107c61170(plStack_1f8);
                      func_0x000107c61170(plStack_258);
                      func_0x000107c615e8(lStack_330);
                      func_0x000107c615e8(lStack_2d8);
                      func_0x000107c615e8(lStack_2d0);
                      func_0x000107c61170(plVar8);
                      func_0x000107c61170(plStack_250);
                      func_0x000107c61170(plStack_238);
                      func_0x000107c61170(puStack_218);
                      func_0x000107c61170(plStack_240);
                      func_0x000107c61170(puStack_2a8);
                      func_0x000107c61170(puStack_2a0);
                      func_0x000107c615e8(lStack_298);
                      func_0x000107c615e8(lStack_320);
                      func_0x000107c615e8(lStack_310);
                      func_0x000107c615e8(puStack_338);
                      func_0x000107c615e8(lStack_2f8);
                      func_0x000107c615e8(lStack_2f0);
                      func_0x000107c615e8(lStack_2e0);
                      func_0x000107c615e8(lStack_2c0);
                      func_0x000107c615e8(lStack_2e8);
                      func_0x000107c61170(lVar5);
                      func_0x000107c615e8(lStack_328);
                      func_0x000107c615e8(lStack_340);
                      func_0x000107c615e8(lStack_368);
                      func_0x000107c61170(puStack_290);
                      func_0x000107c61170(uStack_230);
                      func_0x000107c61170(uStack_228);
                      func_0x000107c61170(puStack_220);
                      func_0x000107c61170(puStack_208);
                      func_0x000107c61170(uStack_260);
                      func_0x000107c61170(puStack_1e0);
                      func_0x000107c61170(plStack_248);
                      func_0x000107c61170(param_29);
                      func_0x000107c61170(lStack_100);
                      func_0x000107c61170(param_4);
                      func_0x000107c61170(param_9);
                      func_0x000107c61170(param_10);
                      func_0x000107c61170(lStack_1a0);
                      func_0x000107c615e8(uStack_3e8);
                      func_0x000107c61170(lStack_1d8);
                      func_0x000107c615e8(plStack_370);
                      func_0x000107c61170(lStack_1d0);
                      func_0x000107c61170(lStack_1c8);
                      func_0x000107c61170(lStack_1e8);
                      func_0x000107c615e8(lStack_348);
                      func_0x000107c61170(puVar33);
                      func_0x000107c615e8(lVar32);
                      func_0x000107c61170(param_19);
                      func_0x000107c61170(param_3);
                      func_0x000107c61170(param_5);
                      func_0x000107c61170(puStack_1f0);
                      func_0x000107c61170(param_7);
                      func_0x000107c61170(param_8);
                      func_0x000107c61170(param_14);
                      func_0x000107c61170(lStack_1b8);
                      func_0x000107c61170(plStack_1b0);
                      func_0x000107c61170(param_20);
                      func_0x000107c61170(param_21);
                      func_0x000107c61170(param_22);
                      func_0x000107c61170(puStack_108);
                      func_0x000107c61170(puStack_200);
                      func_0x000107c61170(plStack_f8);
                      func_0x000107c61170(param_26);
                      func_0x000107c61170(lStack_110);
                      func_0x000107c61170(lStack_278);
                      func_0x000107c61170(param_30);
                      func_0x000107c61170(lStack_1a8);
                      func_0x000107c61170(uStack_1c0);
                      func_0x0001000834e4(&puStack_b8);
                      uVar6 = unaff_x20[0x13];
                      unaff_x20[0x13] = lVar25;
                      func_0x000107c61574(uVar6);
                      return unaff_x20;
                    }
                    func_0x000107c61170(plStack_248);
                    func_0x000107c61170(param_29);
                    func_0x000107c61170(lStack_100);
                    func_0x000107c61170(param_4);
                    func_0x000107c61170(param_9);
                    func_0x000107c61170(param_10);
                    func_0x000107c61170(param_19);
                    func_0x000107c61170(lStack_1a0);
                    func_0x000107c615e8(lStack_2c8);
                    func_0x000107c61170(puStack_3d0);
                    func_0x000107c615e8(uStack_3e8);
                    func_0x000107c61170(lStack_1d8);
                    func_0x000107c615e8(plStack_370);
                    func_0x000107c61574(puStack_2b0);
                    func_0x000107c61170(lStack_1d0);
                    func_0x000107c61170(lStack_1c8);
                    func_0x000107c615e8(lStack_348);
                    func_0x000107c61170(plVar11);
                    func_0x000107c61170(param_3);
                    func_0x000107c61170(param_5);
                    func_0x000107c61170(puStack_1f0);
                    func_0x000107c61170(param_7);
                    func_0x000107c61170(param_8);
                    func_0x000107c61170(plStack_250);
                    func_0x000107c61170(plStack_238);
                    func_0x000107c61170(param_14);
                    func_0x000107c61170(puStack_218);
                    func_0x000107c61170(lStack_1b8);
                    func_0x000107c61170(plStack_1b0);
                    func_0x000107c61170(plStack_240);
                    func_0x000107c61170(param_20);
                    func_0x000107c61170(param_21);
                    func_0x000107c61170(param_22);
                    func_0x000107c61170(puStack_108);
                    func_0x000107c61170(puStack_200);
                    func_0x000107c61170(plStack_f8);
                    func_0x000107c61170(param_26);
                    func_0x000107c61170(lStack_110);
                    func_0x000107c61170(lStack_278);
                    func_0x000107c61170(param_30);
                    func_0x000107c61170(puStack_3e0);
                    func_0x000107c61170(uStack_3d8);
                    func_0x000107c61170(plStack_3a8);
                    func_0x000107c61170(uStack_260);
                    func_0x000107c61170(lStack_1e8);
                    func_0x000107c61170(uStack_230);
                    func_0x000107c61170(uStack_228);
                    func_0x000107c61170(lStack_1a8);
                    func_0x000107c61170(plStack_3a0);
                    func_0x000107c61170(puStack_220);
                    func_0x000107c61170(uStack_1c0);
                    func_0x000107c61170(puStack_1e0);
                    func_0x000107c61170(puStack_290);
                    func_0x000107c61170(puStack_210);
                    func_0x000107c61170(puStack_208);
                    func_0x000107c61170(puStack_2a8);
                    func_0x000107c61170(puStack_2a0);
                    func_0x000107c61170(plStack_1f8);
                    func_0x000107c61170(puStack_288);
                    func_0x000107c615e8(lStack_368);
                    func_0x000107c61170(puStack_398);
                    func_0x000107c615e8(lStack_360);
                    func_0x000107c615e8(lStack_358);
                    func_0x000107c615e8(lStack_298);
                    func_0x000107c615e8(lStack_340);
                    func_0x000107c615e8(lStack_328);
                    func_0x000107c615e8(lStack_320);
                    func_0x000107c615e8(lStack_318);
                    func_0x000107c615e8(lStack_310);
                    func_0x000107c615e8(puStack_308);
                    func_0x000107c615e8(lStack_300);
                    func_0x000107c615e8(puStack_338);
                    func_0x000107c615e8(lStack_2f8);
                    func_0x000107c615e8(lStack_2f0);
                    func_0x000107c615e8(lStack_2e8);
                    func_0x000107c61170(plStack_258);
                    func_0x000107c615e8(lStack_330);
                    func_0x000107c615e8(lStack_2e0);
                    func_0x000107c615e8(lStack_2d8);
                    func_0x000107c615e8(lStack_2d0);
                    func_0x000107c615e8(lStack_2c0);
                    func_0x000107c615e8(lStack_280);
                    plVar11 = plStack_268;
                    func_0x000107c61170(plStack_268);
                    func_0x000107c61170(plVar11);
                    func_0x000101141500(alStack_e0,0x112d5ece0,&UNK_10d925bf0);
                    return unaff_x20;
                  }
                  func_0x000107c61170(plStack_248);
                  func_0x000107c61170(param_29);
                  func_0x000107c61170(lStack_100);
                  func_0x000107c61170(param_4);
                  func_0x000107c61170(param_9);
                  func_0x000107c61170(param_10);
                  func_0x000107c61170(param_19);
                  func_0x000107c61170(lStack_1a0);
                  func_0x000107c615e8(lStack_2c8);
                  func_0x000107c61170(puStack_3d0);
                  func_0x000107c615e8(uStack_3e8);
                  func_0x000107c61170(lStack_1d8);
                  func_0x000107c615e8(plStack_370);
                  func_0x000107c61574(puStack_2b0);
                  func_0x000107c61170(lStack_1d0);
                  func_0x000107c61170(lStack_1c8);
                  func_0x000107c615e8(lStack_348);
                  func_0x000107c61170(plVar11);
                  func_0x000107c61170(param_3);
                  func_0x000107c61170(param_5);
                  func_0x000107c61170(puStack_1f0);
                  func_0x000107c61170(param_7);
                  func_0x000107c61170(param_8);
                  func_0x000107c61170(plStack_250);
                  func_0x000107c61170(plStack_238);
                  func_0x000107c61170(param_14);
                  func_0x000107c61170(puStack_218);
                  func_0x000107c61170(lStack_1b8);
                  func_0x000107c61170(plStack_1b0);
                  func_0x000107c61170(plStack_240);
                  func_0x000107c61170(param_20);
                  func_0x000107c61170(param_21);
                  func_0x000107c61170(param_22);
                  func_0x000107c61170(puStack_108);
                  func_0x000107c61170(puStack_200);
                  func_0x000107c61170(plStack_f8);
                  func_0x000107c61170(param_26);
                  func_0x000107c61170(lStack_110);
                  func_0x000107c61170(lStack_278);
                  func_0x000107c61170(param_30);
                  func_0x000107c61170(puStack_3e0);
                  func_0x000107c61170(uStack_3d8);
                  func_0x000107c61170(plStack_3a8);
                  func_0x000107c61170(uStack_260);
                  func_0x000107c61170(lStack_1e8);
                  func_0x000107c61170(uStack_230);
                  func_0x000107c61170(uStack_228);
                  func_0x000107c61170(lStack_1a8);
                  func_0x000107c61170(plStack_3a0);
                  func_0x000107c61170(puStack_220);
                  func_0x000107c61170(uStack_1c0);
                  func_0x000107c61170(puStack_1e0);
                  func_0x000107c61170(puStack_290);
                  func_0x000107c61170(puStack_210);
                  func_0x000107c61170(puStack_208);
                  func_0x000107c61170(puStack_2a8);
                  func_0x000107c61170(puStack_2a0);
                  func_0x000107c61170(plStack_1f8);
                  func_0x000107c61170(puStack_288);
                  func_0x000107c615e8(lStack_368);
                  func_0x000107c61170(puStack_398);
                  func_0x000107c615e8(lStack_360);
                  func_0x000107c615e8(lStack_358);
                  func_0x000107c615e8(lStack_298);
                  func_0x000107c615e8(lStack_340);
                  func_0x000107c615e8(lStack_328);
                  func_0x000107c615e8(lStack_320);
                  func_0x000107c615e8(lStack_318);
                  func_0x000107c615e8(lStack_310);
                  func_0x000107c615e8(puStack_308);
                  func_0x000107c615e8(lStack_300);
                  func_0x000107c615e8(puStack_338);
                  func_0x000107c615e8(lStack_2f8);
                  func_0x000107c615e8(lStack_2f0);
                  func_0x000107c615e8(lStack_2e8);
                  func_0x000107c61170(plStack_258);
                  func_0x000107c615e8(lStack_330);
                  func_0x000107c615e8(lStack_2e0);
                  func_0x000107c615e8(lStack_2d8);
                  func_0x000107c615e8(lStack_2d0);
                  func_0x000107c615e8(lStack_2c0);
                  func_0x000107c615e8(lStack_280);
                  plVar11 = plStack_268;
                  func_0x000107c61170(plStack_268);
                  goto LAB_101139e90;
                }
                func_0x000107c615e8(lStack_280);
                func_0x000107c615e8(lStack_2c8);
                func_0x000107c615e8(lStack_2c0);
                func_0x000107c615e8(lStack_2d0);
                func_0x000107c615e8(lStack_2d8);
                func_0x000107c615e8(lStack_2e0);
                func_0x000107c615e8(lStack_330);
                func_0x000107c61170(plVar8);
                func_0x000107c615e8(lStack_2e8);
                func_0x000107c615e8(lStack_2f0);
                func_0x000107c615e8(lStack_2f8);
                func_0x000107c615e8(puStack_338);
                func_0x000107c615e8(lStack_300);
                func_0x000107c615e8(puStack_308);
                func_0x000107c615e8(lStack_310);
                func_0x000107c615e8(lStack_318);
                func_0x000107c615e8(lStack_320);
                func_0x000107c615e8(lStack_328);
                func_0x000107c615e8(lStack_340);
                func_0x000107c615e8(lStack_348);
                func_0x000107c615e8(lStack_298);
                func_0x000107c615e8(lStack_358);
                func_0x000107c615e8(lStack_360);
                func_0x000107c61170(puVar33);
                pplVar28 = &plStack_268;
                goto LAB_10113ade4;
              }
              func_0x000107c615e8(lStack_280);
              func_0x000107c615e8(lStack_2c8);
              func_0x000107c615e8(lStack_2c0);
              func_0x000107c615e8(lStack_2d0);
              func_0x000107c615e8(lStack_2d8);
              func_0x000107c615e8(lStack_2e0);
              func_0x000107c615e8(lStack_330);
              func_0x000107c61170(plVar8);
              func_0x000107c615e8(lStack_2e8);
              func_0x000107c615e8(lStack_2f0);
              func_0x000107c615e8(lStack_2f8);
              func_0x000107c615e8(puStack_338);
              func_0x000107c615e8(lStack_300);
              func_0x000107c615e8(puStack_308);
              func_0x000107c615e8(lStack_310);
              func_0x000107c615e8(lStack_318);
              func_0x000107c615e8(lStack_320);
              func_0x000107c615e8(lStack_328);
              func_0x000107c615e8(lStack_340);
              func_0x000107c615e8(lStack_348);
              func_0x000107c615e8(lStack_298);
              func_0x000107c615e8(lStack_358);
              func_0x000107c615e8(lStack_360);
              func_0x000107c61170(puVar33);
            }
            func_0x000107c61170(plStack_248);
            func_0x000107c61170(param_29);
            func_0x000107c61170(lStack_100);
            func_0x000107c61170(param_4);
            func_0x000107c61170(param_9);
            func_0x000107c61170(param_10);
            func_0x000107c61170(param_19);
            func_0x000107c61170(lStack_1a0);
            func_0x000107c61170(puStack_270);
            func_0x000107c61170(lStack_1d8);
            func_0x000107c61170(lStack_1d0);
            func_0x000107c61170(lStack_1c8);
            func_0x000107c61170(plStack_1f8);
            func_0x000107c61170(param_3);
            func_0x000107c61170(param_5);
            func_0x000107c61170(puStack_1f0);
            func_0x000107c61170(param_7);
            func_0x000107c61170(param_8);
            func_0x000107c61170(plStack_258);
            func_0x000107c61170(plStack_250);
            func_0x000107c61170(param_14);
            func_0x000107c61170(puStack_218);
            func_0x000107c61170(lStack_1b8);
            func_0x000107c61170(plStack_1b0);
            func_0x000107c61170(plStack_240);
            func_0x000107c61170(param_20);
            func_0x000107c61170(param_21);
            func_0x000107c61170(param_22);
            func_0x000107c61170(puStack_108);
            func_0x000107c61170(puStack_200);
            func_0x000107c61170(plStack_f8);
            goto LAB_1011391a8;
          }
          func_0x000107c615e8(lStack_280);
          func_0x000107c615e8(lStack_2c8);
          func_0x000107c615e8(lStack_2c0);
          func_0x000107c615e8(lStack_2d0);
          func_0x000107c615e8(lStack_2d8);
          func_0x000107c615e8(lStack_2e0);
          func_0x000107c615e8(lVar5);
          func_0x000107c61170(plVar8);
          func_0x000107c615e8(lStack_2e8);
          func_0x000107c615e8(lStack_2f0);
          func_0x000107c615e8(lStack_2f8);
          func_0x000107c615e8(puVar12);
          func_0x000107c615e8(lStack_300);
          func_0x000107c615e8(puStack_308);
          func_0x000107c615e8(lStack_310);
          func_0x000107c615e8(lStack_318);
          func_0x000107c615e8(lStack_320);
          func_0x000107c615e8(lStack_328);
          func_0x000107c61170(plStack_248);
          func_0x000107c61170(param_29);
          func_0x000107c61170(lStack_100);
          func_0x000107c61170(param_4);
          func_0x000107c61170(param_9);
          func_0x000107c61170(param_10);
          func_0x000107c61170(param_19);
          func_0x000107c61170(lStack_1a0);
          func_0x000107c61170(puStack_270);
          func_0x000107c61170(lStack_1d8);
          func_0x000107c61170(lStack_1d0);
          func_0x000107c61170(lStack_1c8);
          func_0x000107c61170(plStack_1f8);
          func_0x000107c61170(param_3);
          func_0x000107c61170(param_5);
          func_0x000107c61170(puStack_1f0);
          func_0x000107c61170(param_7);
          func_0x000107c61170(param_8);
          func_0x000107c61170(plStack_258);
          func_0x000107c61170(plStack_250);
          func_0x000107c61170(param_14);
          func_0x000107c61170(puStack_218);
          func_0x000107c61170(lStack_1b8);
          func_0x000107c61170(plStack_1b0);
          func_0x000107c61170(plStack_240);
          func_0x000107c61170(param_20);
          func_0x000107c61170(param_21);
          func_0x000107c61170(param_22);
          func_0x000107c61170(puStack_108);
          func_0x000107c61170(puStack_200);
          func_0x000107c61170(plStack_f8);
          func_0x000107c61170(param_26);
        }
        func_0x000107c61170(lVar7);
        func_0x000107c61170(lStack_278);
        func_0x000107c61170(param_30);
        func_0x000107c61170(puStack_290);
        goto LAB_101139df4;
      }
      func_0x000107c615e8(lStack_280);
      func_0x000107c615e8(lStack_2c8);
      func_0x000107c615e8(lStack_2c0);
      func_0x000107c615e8(lStack_2d0);
      func_0x000107c61170(plStack_248);
      func_0x000107c61170(param_29);
      func_0x000107c61170(lStack_100);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_19);
      func_0x000107c61170(lStack_1a0);
      func_0x000107c61170(puVar33);
      func_0x000107c61170(lStack_1d8);
      func_0x000107c61170(lStack_1d0);
      func_0x000107c61170(lStack_1c8);
      func_0x000107c61170(plStack_1f8);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_5);
      func_0x000107c61170(puStack_1f0);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_8);
      func_0x000107c61170(plStack_258);
      func_0x000107c61170(plStack_250);
      func_0x000107c61170(param_14);
      func_0x000107c61170(puStack_218);
      func_0x000107c61170(lStack_1b8);
      func_0x000107c61170(plStack_1b0);
      func_0x000107c61170(plStack_240);
      func_0x000107c61170(param_20);
      func_0x000107c61170(param_21);
      func_0x000107c61170(param_22);
      func_0x000107c61170(puStack_108);
      func_0x000107c61170(puStack_200);
      func_0x000107c61170(plStack_f8);
      func_0x000107c61170(param_26);
      func_0x000107c61170(lStack_110);
      func_0x000107c61170(lStack_278);
      func_0x000107c61170(param_30);
      func_0x000107c61170(puStack_290);
      func_0x000107c61170(param_32);
      func_0x000107c61170(plStack_238);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(lStack_1e8);
      func_0x000107c61170(uStack_230);
      func_0x000107c61170(uStack_228);
      func_0x000107c61170(lStack_1a8);
      goto LAB_101139e48;
    }
    func_0x000107c61170(plStack_1f8);
    func_0x000107c61170(plStack_268);
    func_0x000107c61170(puStack_288);
    func_0x000107c61170(puStack_270);
    func_0x000107c615e8(lStack_280);
    func_0x000107c61170(puStack_290);
    func_0x000107c61170(param_32);
    func_0x000107c61170(plStack_238);
    func_0x000107c61170(plStack_258);
    func_0x000107c61170(plStack_250);
    func_0x000107c61170(puStack_218);
    func_0x000107c61170(plStack_240);
    func_0x000107c615e8(lStack_2c0);
    func_0x000107c61170(puStack_210);
    func_0x000107c61170(uStack_230);
    func_0x000107c61170(uStack_228);
    func_0x000107c61170(puStack_220);
    func_0x000107c61170(puStack_208);
    func_0x000107c61170(puStack_1e0);
    func_0x000107c61170(plStack_248);
    func_0x000107c61170(param_29);
    func_0x000107c61170(lStack_100);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_19);
    func_0x000107c61170(lStack_1a0);
    func_0x000107c615e8(lVar32);
    func_0x000107c61170(lStack_1d8);
    func_0x000107c61170(lStack_1d0);
    func_0x000107c61170(lStack_1c8);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(puStack_1f0);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_14);
    func_0x000107c61170(lStack_1b8);
    func_0x000107c61170(plStack_1b0);
    func_0x000107c61170(param_20);
    func_0x000107c61170(param_21);
    func_0x000107c61170(param_22);
    func_0x000107c61170(puStack_108);
    func_0x000107c61170(puStack_200);
    func_0x000107c61170(plStack_f8);
LAB_101139798:
    func_0x000107c61170(param_26);
    func_0x000107c61170(lStack_110);
    func_0x000107c61170(lStack_278);
    func_0x000107c61170(param_30);
    func_0x000107c61170(uStack_260);
    func_0x000107c61170(lStack_1e8);
    func_0x000107c61170(lStack_1a8);
    lVar25 = -0xb0;
  }
  plVar11 = *(long **)((long)&lStack_110 + lVar25);
LAB_101139e90:
  func_0x000107c61170(plVar11);
  return unaff_x20;
}



/* Entry: 10113e394; end: 10113e417;  */

void FUN_10113e394(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x000107c4168c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c61574(param_1);
    }
    else {
      func_0x000107c444f4();
      func_0x000107c61574(param_1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 10113e418; end: 10113e6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10113e418(undefined *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  if (*(long *)(unaff_x20 + 0x100) == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x100) + _DAT_112d5e7e8);
    puVar8 = PTR_PTR_1126a6400;
    func_0x000107c610f8(PTR_PTR_1126a6400);
    func_0x000107c61174(uVar7);
    func_0x000107c453e4(puVar8);
    puVar9 = param_1;
    func_0x000107c52060(param_1);
    func_0x000107c56288((double)puVar9,puVar8);
    puVar9 = param_1;
    puVar2 = PTR_s_respondsToSelector__11262c7e0;
    func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_mapViewportSessionIdObservable_11260c528);
    if (((ulong)puVar9 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10113e6fc);
      (*pcVar1)();
    }
    func_0x000107c4c460();
    func_0x000107c61180();
    if (param_1 == (undefined *)0x0) {
      param_1 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar2 = (undefined *)0x0;
      FUN_101141a84(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar3 = 0;
      func_0x000107c60110(0,puVar2);
      func_0x000107c4a8a4(param_1);
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
    }
    puVar9 = param_1;
    func_0x000107c5cb24(param_1);
    func_0x000107c61180();
    func_0x000107c562c4(puVar8);
    func_0x000107c61170(puVar9);
    lVar4 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5b674();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    puVar9 = puVar2;
    if (lVar5 == 0) {
      lVar5 = 0;
      func_0x000107c5faec(0);
      puVar9 = puVar2;
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar2);
    }
    func_0x000107c59584(puVar8);
    func_0x000107c61170(lVar5);
    lVar5 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c5b634();
    FUN_10111eed8();
    FUN_100c6f294();
    func_0x000107c61180();
    if (lVar5 == 0) {
      lVar4 = 0;
      puVar9 = (undefined *)0xe000000000000000;
    }
    else {
      lVar4 = lVar5;
      func_0x000107c5faec();
      func_0x000107c61170(lVar5);
    }
    func_0x000107c5fadc(lVar4,puVar9);
    func_0x000107c6142c(puVar9);
    func_0x000107c56fd0(puVar8);
    func_0x000107c61170(lVar4);
    puVar9 = &UNK_1103877c0;
    func_0x000107c613fc(&UNK_1103877c0,0x18,7);
    func_0x000107c61644(puVar9 + 0x10,unaff_x20);
    uStack_60 = 0x101141ad4;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1011380cc;
    puStack_68 = &UNK_110387f50;
    puStack_58 = puVar9;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c54e7c(puVar8);
    func_0x000107c60bd0(ppuVar6);
    uVar3 = uVar7;
    func_0x000107c5cb24(uVar7);
    func_0x000107c61180();
    func_0x000107c5480c(puVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar3);
  }
  return puVar8;
}



/* Entry: 10113e6fc; end: 10113e74b;  */

void FUN_10113e6fc(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0x58) = 1;
    func_0x000107c61574();
  }
  return;
}



/* Entry: 10113e74c; end: 10113ec2f;  */

/* WARNING: Possible PIC construction at 0x00010113e9c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010113eac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010113ebf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010113ec00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010113ebf4) */
/* WARNING: Removing unreachable block (ram,0x00010113eac8) */
/* WARNING: Removing unreachable block (ram,0x00010113ead0) */
/* WARNING: Removing unreachable block (ram,0x00010113ebac) */
/* WARNING: Removing unreachable block (ram,0x00010113e9c4) */
/* WARNING: Removing unreachable block (ram,0x00010113ec04) */

void FUN_10113e74c(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined **ppuVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar8 = *(long *)(unaff_x20 + 0x18);
  if ((lVar8 == 0) || (lVar6 = *(long *)(unaff_x20 + 0x20), lVar6 == 0)) {
    lVar8 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c4168c();
    func_0x000107c61180();
    if (lVar8 == 0) {
      return;
    }
    func_0x000107c444f4();
  }
  else {
    func_0x000107c61428(unaff_x20 + 0xa0,&puStack_a0,0x21,0);
    lVar7 = *(long *)(unaff_x20 + 0xb8);
    if (lVar7 == 0) {
      func_0x000107c61174(lVar8);
      func_0x000107c615f0(lVar6);
    }
    else {
      lVar9 = *(long *)(unaff_x20 + 0xc0);
      func_0x0001000c6518(unaff_x20 + 0xa0,lVar7);
      pcVar10 = *(code **)(lVar9 + 0x10);
      func_0x000107c61174(lVar8);
      func_0x000107c61174();
      func_0x000107c615f0(lVar6);
      (*pcVar10)(lVar8,&PTR_DAT_110387790,lVar7,lVar9);
    }
    func_0x000107c614a8(&puStack_a0);
    func_0x000107c2ab60();
    func_0x000107c61180();
    cVar1 = *(char *)(unaff_x20 + 0xe9);
    puVar3 = PTR_PTR_1126b1f18;
    func_0x000107c610f8(PTR_PTR_1126b1f18);
    func_0x000107c61174(lVar8);
    func_0x000107c46f24(puVar3);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_10113ec30;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_10112dc70;
    puStack_88 = &UNK_110387a58;
    ppuVar4 = &puStack_a0;
    func_0x000107c60bc4();
    ppuVar11 = (undefined **)0x0;
    if (cVar1 == '\x01') {
      puVar5 = &UNK_1103877c0;
      func_0x000107c613fc(&UNK_1103877c0,0x18,7);
      func_0x000107c61644(puVar5 + 0x10,unaff_x20);
      pcStack_80 = (code *)0x1011414b0;
      puStack_a0 = puVar2;
      uStack_98 = 0x42000000;
      pcStack_90 = (code *)&UNK_1000f6b44;
      puStack_88 = &UNK_110387b20;
      ppuVar11 = &puStack_a0;
      puStack_78 = puVar5;
      func_0x000107c60bc4();
      func_0x000107c61574(puStack_78);
    }
    func_0x000107c40be8(0,0x4073600000000000);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(puVar3);
    lVar8 = *(long *)(unaff_x20 + 0x30);
    *(long *)(unaff_x20 + 0x30) = lVar6;
    func_0x000107c615f0(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar8);
  return;
}



/* Entry: 10113ec30; end: 10113ec37;  */

undefined8 FUN_10113ec30(void)

{
  return 0;
}



/* Entry: 10113ec38; end: 10113eccb;  */

void FUN_10113ec38(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    func_0x000107c61174(uVar2);
    func_0x000107c61574(param_1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 10113eccc; end: 10113eeff;  */

void FUN_10113eccc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar2 = &UNK_110387d08;
    func_0x000107c613fc(&UNK_110387d08,0x20,7);
    *(code **)(puVar2 + 0x10) = FUN_10114189c;
    *(long *)(puVar2 + 0x18) = param_2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x1011418a4;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = (undefined *)0x10114375c;
    puStack_a0 = &UNK_110387d20;
    ppuVar3 = &puStack_b8;
    puStack_90 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_90;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar2);
    puVar2 = &UNK_110387d58;
    func_0x000107c613fc(&UNK_110387d58,0x28,7);
    *(long *)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    *(undefined8 *)(puVar2 + 0x20) = param_4;
    puVar4 = &UNK_110387d80;
    func_0x000107c613fc(&UNK_110387d80,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_1011418e0;
    *(undefined **)(puVar4 + 0x18) = puVar2;
    uStack_98 = 0x101141910;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    puStack_a8 = (undefined *)0x1011437a4;
    puStack_a0 = &UNK_110387d98;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar4 = puStack_90;
    func_0x000107c6157c(param_2);
    func_0x000107c615f0(param_3);
    func_0x000107c615f0(param_4);
    func_0x000107c61574(puVar4);
    puVar4 = &UNK_110387dd0;
    func_0x000107c613fc(&UNK_110387dd0,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x101141918;
    *(long *)(puVar4 + 0x18) = param_2;
    uStack_98 = 0x10114191c;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_10006eb60;
    puStack_a0 = &UNK_110387de8;
    ppuVar6 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar6);
    puVar4 = puStack_90;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar4);
    func_0x000107c4c7c0(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c61578(param_2,3);
  }
  return;
}



/* Entry: 10113ef00; end: 10113efcf;  */

/* WARNING: Possible PIC construction at 0x00010113efb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010113efbc) */

void FUN_10113ef00(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_1 == 2) {
    FUN_10113efd0(param_2);
  }
  else if ((1 < param_1 - 1U) && (*(long *)(param_3 + 0xe0) == 2)) {
    puVar1 = &UNK_110387e20;
    func_0x000107c613fc(&UNK_110387e20,0x20,7);
    *(undefined **)(puVar1 + 0x10) = &UNK_10d926450;
    *(long *)(puVar1 + 0x18) = param_3;
    func_0x000107c6157c(param_3);
    func_0x0001001ca524(0x12,0,0x3c,4,0,0,&UNK_10d926458,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10113efd0; end: 10113f363;  */

/* WARNING: Possible PIC construction at 0x00010113f058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010113f0d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010113f05c) */
/* WARNING: Removing unreachable block (ram,0x00010113f07c) */
/* WARNING: Removing unreachable block (ram,0x00010113f108) */
/* WARNING: Removing unreachable block (ram,0x00010113f110) */
/* WARNING: Removing unreachable block (ram,0x00010113f098) */
/* WARNING: Removing unreachable block (ram,0x00010113f0dc) */

void FUN_10113efd0(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(unaff_x20 + 0x128);
  if (lVar3 == 0) {
    if ((*(byte *)(unaff_x20 + 0x38) & 1) != 0) {
      return;
    }
    if (param_2 < 3) {
      if (param_2 - 1U < 2) {
        lVar3 = *(long *)(unaff_x20 + 0x100);
        if (lVar3 == 0) {
          lVar3 = *(long *)(unaff_x20 + 0x50);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar3 == 0) {
            return;
          }
          func_0x000107c5eea0(puVar4);
          func_0x000107c5ee54();
          (**(code **)(lVar5 + 8))(puVar4,lVar1);
          param_1 = param_1 - *(double *)(unaff_x20 + 0x48);
LAB_10113f354:
          func_0x000107c4bca4(param_1,lVar3);
          func_0x000107c615e8(lVar3);
          return;
        }
        func_0x000107c61174(lVar3);
        uVar2 = 1;
      }
      else {
        if (param_2 != 0) {
          return;
        }
        *(undefined1 *)(unaff_x20 + 0x58) = 1;
        lVar3 = *(long *)(unaff_x20 + 0x100);
        if (lVar3 == 0) {
          lVar3 = *(long *)(unaff_x20 + 0x50);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar3 == 0) {
            return;
          }
          func_0x000107c5eea0(puVar4);
          func_0x000107c5ee54();
          (**(code **)(lVar5 + 8))(puVar4,lVar1);
          param_1 = param_1 - *(double *)(unaff_x20 + 0x48);
          goto LAB_10113f354;
        }
        func_0x000107c61174(lVar3);
        uVar2 = 4;
      }
    }
    else if (param_2 == 3) {
      *(undefined1 *)(unaff_x20 + 0x58) = 1;
      lVar3 = *(long *)(unaff_x20 + 0x100);
      if (lVar3 == 0) {
        lVar3 = *(long *)(unaff_x20 + 0x50);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar3 == 0) {
          return;
        }
        func_0x000107c5eea0(puVar4);
        func_0x000107c5ee54();
        (**(code **)(lVar5 + 8))(puVar4,lVar1);
        param_1 = param_1 - *(double *)(unaff_x20 + 0x48);
        goto LAB_10113f354;
      }
      func_0x000107c61174(lVar3);
      uVar2 = 2;
    }
    else {
      if (param_2 != 4) {
        return;
      }
      lVar3 = *(long *)(unaff_x20 + 0x100);
      if (lVar3 == 0) {
        lVar3 = *(long *)(unaff_x20 + 0x50);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar3 == 0) {
          return;
        }
        func_0x000107c5eea0(puVar4);
        func_0x000107c5ee54();
        (**(code **)(lVar5 + 8))(puVar4,lVar1);
        param_1 = param_1 - *(double *)(unaff_x20 + 0x48);
        goto LAB_10113f354;
      }
      func_0x000107c61174(lVar3);
      uVar2 = 0;
    }
    func_0x00010110baa8(uVar2);
  }
  else {
    func_0x000107c61174(lVar3);
    func_0x000107c439a4();
    func_0x000107c61180();
    func_0x000107c5fc54();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10113f364; end: 10113f44b;  */

void FUN_10113f364(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  if ((*(byte *)(unaff_x20 + 0x58) & 1) == 0) {
    lVar1 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c3f1b4();
    func_0x000107c61180();
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))();
      func_0x000107c60bd0(lVar1);
    }
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  func_0x000107c615e8(uVar2);
  func_0x000107c61428(unaff_x20 + 0xa0,auStack_48,0,0);
  if (*(long *)(unaff_x20 + 0xb8) != 0) {
    FUN_101141a18(unaff_x20 + 0xa0,auStack_70);
    func_0x0001000a8868(auStack_70,uStack_58);
    (**(code **)(lStack_50 + 0x30))(0,uStack_58,lStack_50);
    func_0x0001000834e4(auStack_70);
  }
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c444f4();
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 10113f44c; end: 10113f74f;  */

/* WARNING: Possible PIC construction at 0x00010113f4cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010113f5b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010113f5c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010113f64c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010113f694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010113f714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010113f724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010113f52c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010113f698) */
/* WARNING: Removing unreachable block (ram,0x00010113f718) */
/* WARNING: Removing unreachable block (ram,0x00010113f6c4) */
/* WARNING: Removing unreachable block (ram,0x00010113f650) */
/* WARNING: Removing unreachable block (ram,0x00010113f5cc) */
/* WARNING: Removing unreachable block (ram,0x00010113f530) */
/* WARNING: Removing unreachable block (ram,0x00010113f630) */
/* WARNING: Removing unreachable block (ram,0x00010113f5d8) */
/* WARNING: Removing unreachable block (ram,0x00010113f634) */
/* WARNING: Removing unreachable block (ram,0x00010113f5b4) */
/* WARNING: Removing unreachable block (ram,0x00010113f5b8) */
/* WARNING: Removing unreachable block (ram,0x00010113f4d0) */
/* WARNING: Removing unreachable block (ram,0x00010113f604) */
/* WARNING: Removing unreachable block (ram,0x00010113f4e4) */
/* WARNING: Removing unreachable block (ram,0x00010113f644) */
/* WARNING: Removing unreachable block (ram,0x00010113f648) */
/* WARNING: Removing unreachable block (ram,0x00010113f504) */
/* WARNING: Removing unreachable block (ram,0x00010113f53c) */
/* WARNING: Removing unreachable block (ram,0x00010113f56c) */
/* WARNING: Removing unreachable block (ram,0x00010113f528) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x00010113f574) */
/* WARNING: Removing unreachable block (ram,0x00010113f728) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10113f44c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x60);
  if (lVar1 != 0) {
    func_0x000107c4ec80();
    func_0x000107c61180();
    if (lVar1 != 0) {
      if (*(long *)(unaff_x20 + 0x80) != 0) {
        lVar1 = *(long *)(*(long *)(unaff_x20 + 0x80) + _DAT_113083f78);
        func_0x000107c5d984(lVar1);
        func_0x000107c61180();
        func_0x000107c5faec();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10113f750; end: 10113f99f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10113f750(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  long lStack_60;
  long lStack_58;
  
  lVar3 = _DAT_112d5e7d0;
  lVar4 = *(long *)(unaff_x20 + 0x100);
  if (lVar4 != 0) {
    func_0x000107c61428(lVar4 + _DAT_112d5e7d0,auStack_90,0,0);
    FUN_1011414b8(lVar4 + lVar3,auStack_78,0x112d5e670,&UNK_10d9262b0);
    lVar1 = lStack_58;
    lVar3 = lStack_60;
    if (lStack_60 == 0) {
      func_0x000101141500(auStack_78,0x112d5e670,&UNK_10d9262b0);
    }
    else {
      func_0x0001000a8868(auStack_78,lStack_60);
      lVar5 = *(long *)(lVar3 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
      (**(code **)(lVar5 + 0x10))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c61174(lVar4);
      func_0x000101141500(auStack_78,0x112d5e670,&UNK_10d9262b0);
      lVar2 = lVar3;
      FUN_101141bc8(lVar3,lVar1);
      func_0x000107c61170(lVar4);
      (**(code **)(lVar5 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
      if (lVar2 != 0) {
        lVar4 = lVar2;
        func_0x000107c439a4(lVar2);
        func_0x000107c61180();
        lVar3 = lVar4;
        func_0x000107c5fc54();
        func_0x000107c61170(lVar4);
        FUN_10113f44c(lVar3,1);
        func_0x000107c61170(lVar2);
        goto LAB_10113f900;
      }
    }
  }
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4c3a4(lVar4);
  func_0x000107c61180();
  lVar3 = lVar4;
  func_0x000107c5fc54();
  func_0x000107c61170(lVar4);
  FUN_10113f44c(lVar3,1);
LAB_10113f900:
  func_0x000107c6142c(lVar3);
  func_0x000107c61428(unaff_x20 + 0xa0,auStack_a8,0,0);
  if (*(long *)(unaff_x20 + 0xb8) != 0) {
    FUN_101141a18(unaff_x20 + 0xa0,auStack_78);
    func_0x0001000a8868(auStack_78,lStack_60);
    (**(code **)(lStack_58 + 0x30))(0,lStack_60,lStack_58);
    func_0x0001000834e4(auStack_78);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(undefined1 *)(unaff_x20 + 0x58) = 1;
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      func_0x000107c50044();
    }
  }
  return 0;
}



/* Entry: 10113f9a0; end: 10113fa33;  */

void FUN_10113f9a0(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x118);
    if (lVar1 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c61174(lVar1);
      FUN_10110b3d8();
      func_0x000107c61180();
      func_0x000107c61574(param_1);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 10113fa34; end: 10113fb97;  */

void FUN_10113fa34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  if (param_1 != 0) {
    ppuVar4 = &puStack_80;
    ppuVar6 = &puStack_80;
    uVar2 = 0x696669746e656469;
    func_0x000107c5fadc(0x696669746e656469,0xea00000000007265);
    puVar5 = &UNK_110387ee8;
    puVar3 = puVar5;
    func_0x000107c613fc(&UNK_110387ee8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_60 = FUN_101141ac4;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_101137fac;
    puStack_68 = &UNK_110387f00;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c613fc(&UNK_110387ee8,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,param_2);
    pcStack_60 = (code *)0x101141acc;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    pcStack_70 = (code *)0x101138058;
    puStack_68 = &UNK_110387f28;
    puStack_58 = puVar5;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c3e900(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 10113fb98; end: 10113fc2b;  */

undefined8 FUN_10113fb98(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  uVar2 = 0;
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0x90);
    if (lVar1 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c4c458(lVar1);
      func_0x000107c61180();
      func_0x000107c5ea20();
      func_0x000107c61574(param_2);
      func_0x000107c615e8(lVar1);
      uVar2 = param_1;
    }
  }
  return uVar2;
}



/* Entry: 10113fc2c; end: 10113fcd3;  */

void FUN_10113fc2c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  FUN_10113f44c(param_1,1);
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c4168c();
  func_0x000107c61180();
  if (uVar1 == 0) {
    return;
  }
  uVar2 = uVar1;
  func_0x000107c61150();
  if ((uVar2 & 1) != 0) {
    func_0x000107c615f0(uVar1);
    func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
    func_0x000107c43724(uVar1);
    func_0x000107c615ec(uVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10113fcd4; end: 10113fd3f;  */

void FUN_10113fcd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10113fd40,uVar1,uVar2);
  return;
}



/* Entry: 10113fd40; end: 10113fdf7;  */

void FUN_10113fd40(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  lVar2 = *(long *)(lVar1 + 0x128);
  if (lVar2 != 0) {
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c439a4();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5fc54();
    func_0x000107c61170(lVar3);
    func_0x000107c44fdc(lVar2);
    func_0x000107c61180();
    func_0x000107c61170();
    FUN_101141074(lVar4,0xffffffffffffffff);
    func_0x000107c61170(lVar2);
    func_0x000107c6142c(lVar4);
    uVar5 = *(undefined8 *)(lVar1 + 0x128);
    *(undefined8 *)(lVar1 + 0x128) = 0;
    func_0x000107c61170(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010113fdf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10113fdf8; end: 10113fe7f;  */

void FUN_10113fdf8(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_10113fe80(param_2,param_3 & 1,param_4,param_5);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 10113fe80; end: 1011405d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10113fe80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,byte param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined **ppuVar11;
  char *pcVar12;
  long lVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long lStack_138;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [40];
  long alStack_a0 [3];
  long lStack_88;
  undefined **ppuStack_80;
  
  lVar13 = *(long *)(unaff_x20 + 0x30);
  if ((((lVar13 != 0) && (lVar17 = *(long *)(unaff_x20 + 0x90), lVar17 != 0)) &&
      (lVar14 = *(long *)(unaff_x20 + 0x70), lVar14 != 0)) &&
     (lVar15 = *(long *)(unaff_x20 + 0xd8), lVar15 != 0)) {
    uVar16 = *(undefined8 *)(unaff_x20 + 0x88);
    lVar4 = 0;
    func_0x0001011451a8();
    lVar5 = lVar4;
    func_0x000107c613fc();
    func_0x000107c61614(lVar5 + 0x18,0);
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined8 *)(lVar5 + 0x30) = 0;
    *(undefined1 *)(lVar5 + 0x38) = 1;
    *(long *)(lVar5 + 0x10) = param_5;
    func_0x000107c61604(lVar5 + 0x18,lVar15);
    *(undefined8 *)(lVar5 + 0x20) = 0x4030400000000000;
    uVar18 = 0x4071800000000000;
    *(undefined8 *)(lVar5 + 0x40) = 0x4071800000000000;
    ppuStack_80 = &PTR_DAT_110388388;
    alStack_a0[0] = lVar5;
    lStack_88 = lVar4;
    if (*(long *)(param_5 + 0x10) == 0) {
      func_0x000107c61434(param_5);
    }
    else {
      if (*(long *)(param_5 + 0x10) == 1) {
        puVar7 = *(undefined **)(param_5 + 0x20);
        uVar2 = *(undefined8 *)(param_5 + 0x28);
        puVar6 = (undefined *)0x0;
        func_0x000101144694();
        func_0x000107c613fc();
        func_0x000107c615f4(lVar15,2);
        func_0x000107c615f0(lVar13);
        func_0x000107c61174(lVar17);
        func_0x000107c615f0(lVar14);
        func_0x000107c61434(param_5);
        func_0x000107c615f0(uVar16);
        func_0x000107c61434(uVar2);
        FUN_1011446f8(puVar7,uVar2,uVar16,lVar15);
        func_0x000107c615e8(uVar16);
        func_0x000107c615e8(lVar15);
        ppuStack_e8 = &PTR_DAT_110388370;
        puStack_108 = puVar7;
        puStack_f0 = puVar6;
        func_0x0001000834e4(alStack_a0);
        FUN_100ca4814(&puStack_108,alStack_a0);
      }
      else {
        func_0x000107c615f0(lVar15);
        func_0x000107c615f0(lVar13);
        func_0x000107c61174(lVar17);
        func_0x000107c615f0(lVar14);
        func_0x000107c61434(param_5);
      }
      FUN_101141a18(alStack_a0,auStack_c8);
      if (*(long *)(unaff_x20 + 0x100) == 0) {
        lStack_138 = 0;
      }
      else {
        lStack_138 = *(long *)(*(long *)(unaff_x20 + 0x100) + _DAT_112d5e7e0);
        func_0x000107c61174();
      }
      lVar8 = 0;
      FUN_101144294();
      lVar9 = lVar8;
      func_0x000107c610f8();
      lVar5 = _DAT_112d5fa90;
      func_0x000107c61614(lVar9 + _DAT_112d5fa90,0);
      lVar4 = _DAT_112d5fa98;
      func_0x000107c61614(lVar9 + _DAT_112d5fa98,0);
      lVar3 = _DAT_112d5fac0;
      puVar7 = PTR_PTR_1126ae568;
      func_0x000107c610f8();
      func_0x000107c615f0(lVar13);
      func_0x000107c61174(lVar17);
      func_0x000107c615f0(lVar14);
      func_0x000107c453e4();
      *(undefined **)(lVar9 + lVar3) = puVar7;
      *(undefined8 *)(lVar9 + _DAT_112d5fac8) = 0;
      *(undefined8 *)(lVar9 + _DAT_112d5fad0) = 0;
      *(undefined8 *)(lVar9 + _DAT_112d5fad8) = 0;
      *(undefined8 *)(lVar9 + _DAT_112d5fae0) = 0;
      lVar3 = _DAT_112d5fae8;
      FUN_101141a84(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar16 = 0;
      func_0x000107c60110();
      *(undefined8 *)(lVar9 + lVar3) = uVar16;
      func_0x000107c61604(lVar9 + lVar5,lVar13);
      func_0x000107c61604(lVar9 + lVar4,lVar17);
      *(long *)(lVar9 + _DAT_112d5faa0) = lVar14;
      func_0x000107c615f0(lVar14);
      func_0x000107c3ec60(lVar17);
      puVar1 = (undefined8 *)(lVar9 + _DAT_112d5faa8);
      *puVar1 = param_3;
      puVar1[1] = param_4;
      FUN_101141a18(auStack_c8,lVar9 + _DAT_112d5fab0);
      *(byte *)(lVar9 + _DAT_112d5fab8) = (param_6 ^ 0xff) & 1;
      uVar16 = 0;
      func_0x00010006a340();
      func_0x000107c613fc();
      func_0x00010006a360();
      *(undefined8 *)(lVar9 + _DAT_112d5faf0) = uVar16;
      plVar10 = &lStack_d8;
      lStack_d8 = lVar9;
      lStack_d0 = lVar8;
      func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
      func_0x000107c61180();
      lVar5 = lVar13;
      func_0x000107c4c428();
      func_0x000107c61180();
      puVar7 = &UNK_110387e48;
      func_0x000107c613fc(&UNK_110387e48,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,plVar10);
      func_0x000107c61170(plVar10);
      ppuStack_e8 = (undefined **)FUN_101141a5c;
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0x42000000;
      puStack_f8 = (undefined *)0x1011314ac;
      puStack_f0 = &UNK_110387e60;
      ppuVar11 = &puStack_108;
      puStack_e0 = puVar7;
      func_0x000107c60bc4(ppuVar11);
      func_0x000107c61574(puStack_e0);
      lVar4 = lVar5;
      func_0x000107c5c320();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61170(lVar5);
      uVar16 = *(undefined8 *)((long)plVar10 + _DAT_112d5fac8);
      *(long *)((long)plVar10 + _DAT_112d5fac8) = lVar4;
      func_0x000107c61170(uVar16);
      lVar5 = lVar13;
      func_0x000107c40fb4();
      if (lVar5 != 2) {
        FUN_101143b24();
        func_0x000101143ebc();
      }
      if (lStack_138 == 0) {
        func_0x0001000834e4(auStack_c8);
        func_0x000107c615e8(lVar13);
        func_0x000107c61170(lVar17);
        func_0x000107c615e8(lVar14);
        puVar7 = PTR___NSConcreteStackBlock_11034bd00;
      }
      else {
        lVar5 = lStack_138;
        func_0x000107c421ac();
        func_0x000107c61180();
        pcVar12 = 
        "init(trayLifecycle:mapInstance:personLocationProvider:cameraProvider:isInitialDestination:cardHeightObservable:)"
        ;
        func_0x0001000c10c0(
                           "init(trayLifecycle:mapInstance:personLocationProvider:cameraProvider:isInitialDestination:cardHeightObservable:)"
                           );
        func_0x000107c61180();
        lVar4 = lVar5;
        func_0x000107c4da88();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        func_0x000107c615e8(pcVar12);
        puVar6 = &UNK_110387e48;
        func_0x000107c613fc(&UNK_110387e48,0x18,7);
        func_0x000107c61614(puVar6 + 0x10,plVar10);
        puVar7 = PTR___NSConcreteStackBlock_11034bd00;
        ppuStack_e8 = (undefined **)FUN_101141a7c;
        puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_100 = 0x42000000;
        puStack_f8 = &UNK_100b5fdac;
        puStack_f0 = &UNK_110387eb0;
        ppuVar11 = &puStack_108;
        puStack_e0 = puVar6;
        func_0x000107c60bc4(ppuVar11);
        func_0x000107c61574(puStack_e0);
        lVar5 = lVar4;
        func_0x000107c5c320();
        func_0x000107c61180();
        func_0x000107c61170(lStack_138);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c615e8(lVar13);
        func_0x000107c61170(lVar17);
        func_0x000107c615e8(lVar14);
        func_0x000107c61170(lVar4);
        func_0x0001000834e4(auStack_c8);
        uVar16 = *(undefined8 *)((long)plVar10 + _DAT_112d5fad0);
        *(long *)((long)plVar10 + _DAT_112d5fad0) = lVar5;
        func_0x000107c61170(uVar16);
      }
      lVar5 = lVar17;
      func_0x000107c4c458(lVar17);
      func_0x000107c61180();
      func_0x000107c5ea20();
      func_0x000107c615e8(lVar5);
      FUN_1011406b8(uVar18,param_5,param_7,param_8);
      lVar5 = lVar17;
      func_0x000107c4c458(lVar17);
      func_0x000107c61180();
      func_0x000107c61174(plVar10);
      uVar18 = 0x73696a6f6d746962;
      func_0x000107c5fadc(0x73696a6f6d746962,0xee00726579616c2d);
      uVar16 = uVar18;
      FUN_1011437c8();
      puVar6 = &UNK_1103877c0;
      func_0x000107c613fc(&UNK_1103877c0,0x18,7);
      func_0x000107c61644(puVar6 + 0x10,unaff_x20);
      ppuStack_e8 = (undefined **)FUN_101141a64;
      uStack_100 = 0x42000000;
      puStack_f8 = &UNK_1000f6b44;
      puStack_f0 = &UNK_110387e88;
      ppuVar11 = &puStack_108;
      puStack_108 = puVar7;
      puStack_e0 = puVar6;
      func_0x000107c60bc4(ppuVar11);
      func_0x000107c61574(puStack_e0);
      func_0x000107c59c10(lVar5);
      func_0x000107c615e8(lVar15);
      func_0x000107c615e8(lVar14);
      func_0x000107c615e8(lVar13);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61170(lVar17);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(plVar10);
      func_0x000107c61170(plVar10);
      func_0x000107c61170(uVar18);
      func_0x000107c61170(uVar16);
    }
    func_0x0001000834e4(alStack_a0);
  }
  return;
}



/* Entry: 1011405d8; end: 101140643;  */

void FUN_1011405d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101140644,uVar1,uVar2);
  return;
}



/* Entry: 101140644; end: 1011406b7;  */

void FUN_101140644(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1011416ac(*(undefined8 *)(unaff_x22 + 0x30));
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001011406b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar1 == 0);
  return;
}



/* Entry: 1011406b8; end: 10114084b;  */

/* WARNING: Possible PIC construction at 0x000101140760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011407f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101140764) */
/* WARNING: Removing unreachable block (ram,0x000101140830) */
/* WARNING: Removing unreachable block (ram,0x000101140770) */
/* WARNING: Removing unreachable block (ram,0x000101140788) */
/* WARNING: Removing unreachable block (ram,0x0001011407c4) */
/* WARNING: Removing unreachable block (ram,0x0001011407f4) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1011406b8(long param_1,ulong param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  if (param_3 != '\x01' && (param_2 & 0xfffffffffffffffe) == 2) {
    lVar3 = *(long *)(unaff_x20 + 0x120);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      if ((*(long *)(param_1 + 0x10) != 0) && (lVar3 = *(long *)(unaff_x20 + 0x70), lVar3 != 0)) {
        uVar1 = *(undefined8 *)(param_1 + 0x20);
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        func_0x000107c61434(uVar2);
        func_0x000107c615f0(lVar3);
        func_0x000107c5fadc(uVar1,uVar2);
        func_0x000107c6142c(uVar2);
        func_0x000107c4e67c(lVar3);
        func_0x000107c61180();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
      return;
    }
  }
  return;
}



/* Entry: 10114084c; end: 1011408bf;  */

void FUN_10114084c(long param_1)

{
  undefined8 uVar1;
  undefined1 uStack_39;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 200);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(param_1);
    uStack_39 = 1;
    func_0x000100087c34(&uStack_39);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 1011408c0; end: 1011409eb;  */

void FUN_1011408c0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000101141500(unaff_x20 + 0xa0,0x112d5ece0,&UNK_10d925bf0);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x138));
  return;
}



/* Entry: 1011409ec; end: 101140a2f;  */

void FUN_1011409ec(void)

{
  FUN_10113e74c();
  return;
}



/* Entry: 101140a30; end: 101140ccf;  */

void FUN_101140a30(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_88 [24];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4c3a4();
  func_0x000107c61180();
  uVar11 = uVar2;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar2);
  uVar1 = (undefined1)*(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c49f1c();
  pcVar3 = "focusGroupOnMap(friendIds:isInitialDestination:actionType:)";
  func_0x0001000c10c0("focusGroupOnMap(friendIds:isInitialDestination:actionType:)");
  func_0x000107c61180();
  puVar4 = &UNK_1103877c0;
  func_0x000107c613fc(&UNK_1103877c0,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  puVar5 = &UNK_110387bc8;
  func_0x000107c613fc(&UNK_110387bc8,0x31,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = uVar11;
  puVar5[0x20] = uVar1;
  *(undefined8 *)(puVar5 + 0x28) = 0;
  puVar5[0x30] = 1;
  lStack_50 = 0x101141bbc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110387be0;
  ppuVar6 = &puStack_70;
  puStack_48 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar4 = puStack_48;
  func_0x000107c61434(uVar11);
  func_0x000107c61574(puVar4);
  func_0x000107c4e524(pcVar3);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c6142c(uVar11);
  func_0x000107c615e8(pcVar3);
  lVar10 = *(long *)(unaff_x20 + 0x70);
  if (lVar10 != 0) {
    lVar9 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c615f0(lVar10);
    func_0x000107c4c3a4();
    func_0x000107c61180();
    lVar7 = lVar9;
    func_0x000107c5fc54();
    func_0x000107c61170(lVar9);
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar11 = 0;
      uVar2 = 0xe000000000000000;
    }
    else {
      uVar11 = *(undefined8 *)(lVar7 + 0x20);
      uVar2 = *(undefined8 *)(lVar7 + 0x28);
      func_0x000107c61434(uVar2);
    }
    func_0x000107c6142c(lVar7);
    uVar8 = uVar2;
    func_0x000107c5fadc(uVar11,uVar2);
    func_0x000107c6142c(uVar2);
    lVar7 = lVar10;
    func_0x000107c4e67c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    func_0x000107c61170(uVar11);
    if (lVar7 != 0) {
      lVar10 = lVar7;
      func_0x000107c3fc6c();
      func_0x000107c61180();
      if (lVar10 != 0) {
        lVar9 = lVar10;
        func_0x000107c5faec();
        func_0x000107c61170(lVar10);
        func_0x000107c61428(unaff_x20 + 0xa0,auStack_88,0,0);
        if (*(long *)(unaff_x20 + 0xb8) != 0) {
          FUN_101141a18(unaff_x20 + 0xa0,&puStack_70);
          lVar10 = lStack_50;
          puVar4 = puStack_58;
          func_0x0001000a8868(&puStack_70,puStack_58);
          (**(code **)(lVar10 + 0x38))(lVar9,uVar8,puVar4,lVar10);
          func_0x000107c6142c(uVar8);
          func_0x000107c61170(lVar7);
          func_0x0001000834e4(&puStack_70);
          return;
        }
        func_0x000107c6142c(uVar8);
      }
      func_0x000107c61170(lVar7);
    }
  }
  return;
}



/* Entry: 101140cd0; end: 101140cd3;  */

void FUN_101140cd0(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x30) != 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
      func_0x000107c615f0(lVar1);
      func_0x000107c50048();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 101140cd4; end: 101140e27;  */

void FUN_101140cd4(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "closeFocusCards()";
  func_0x0001000c10c0("closeFocusCards()");
  func_0x000107c61180();
  puVar2 = &UNK_1103877c0;
  func_0x000107c613fc(&UNK_1103877c0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcStack_40 = FUN_101141884;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110387cd0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101140e28; end: 101140e87;  */

void FUN_101140e28(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x38) = 1;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x128);
  *(undefined8 *)(unaff_x20 + 0x128) = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5e0c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 101140e88; end: 10114101f;  */

void FUN_101140e88(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  
  puVar1 = &UNK_1103877c0;
  func_0x000107c613fc(&UNK_1103877c0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_110387c18;
  func_0x000107c613fc(&UNK_110387c18,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(long *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  puVar1 = &UNK_110387c40;
  func_0x000107c613fc(&UNK_110387c40,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10d926428;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c61174();
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 0x12;
  uVar6 = 0;
  func_0x0001001ca524(0x12,0,0x3c,4,0,0,&UNK_10d926438,puVar1,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar4);
  lVar7 = *(long *)(unaff_x20 + 0xd0);
  if (lVar7 != 0) {
    func_0x000107c615f0(lVar7);
    lVar5 = param_2;
    func_0x000107c44fdc();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar6);
    }
    func_0x000107c4ab14(param_2);
    uVar3 = param_1;
    func_0x000107c4c0e4(param_2);
    func_0x000107c54ab4(param_1,uVar3,lVar7);
    func_0x000107c615e8(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return;
  }
  return;
}



/* Entry: 101141020; end: 101141023;  */

void FUN_101141020(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "closeFocusCards()";
  func_0x0001000c10c0("closeFocusCards()");
  func_0x000107c61180();
  puVar2 = &UNK_1103877c0;
  func_0x000107c613fc(&UNK_1103877c0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcStack_40 = FUN_101141884;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110387cd0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101141024; end: 10114105f;  */

void FUN_101141024(void)

{
  char *pcVar1;
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
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c5e0bc();
    func_0x000107c615e8(lVar4);
  }
  ppuVar3 = &puStack_60;
  pcVar1 = "closeFocusCards()";
  func_0x0001000c10c0("closeFocusCards()");
  func_0x000107c61180();
  puVar2 = &UNK_1103877c0;
  func_0x000107c613fc(&UNK_1103877c0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,unaff_x20);
  pcStack_40 = FUN_101141884;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110387cd0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101141060; end: 101141073;  */

void FUN_101141060(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x38) = 1;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x128);
  *(undefined8 *)(unaff_x20 + 0x128) = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5e0c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 101141074; end: 101141423;  */

/* WARNING: Possible PIC construction at 0x0001011412ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011412f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011413dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011412f8) */
/* WARNING: Removing unreachable block (ram,0x0001011413e4) */
/* WARNING: Removing unreachable block (ram,0x000101141300) */
/* WARNING: Removing unreachable block (ram,0x00010114134c) */
/* WARNING: Removing unreachable block (ram,0x000101141360) */
/* WARNING: Removing unreachable block (ram,0x00010114140c) */
/* WARNING: Removing unreachable block (ram,0x00010114136c) */
/* WARNING: Removing unreachable block (ram,0x000101141398) */
/* WARNING: Removing unreachable block (ram,0x0001011412b0) */
/* WARNING: Removing unreachable block (ram,0x0001011413d8) */
/* WARNING: Removing unreachable block (ram,0x0001011412e4) */
/* WARNING: Removing unreachable block (ram,0x0001011413e0) */
/* WARNING: Removing unreachable block (ram,0x0001011413ec) */

void FUN_101141074(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long unaff_x20;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar13 = *(ulong *)(param_1 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar13 != 0) {
    uVar12 = 0;
LAB_1011410bc:
    uVar2 = uVar12;
    if (uVar12 <= uVar13) {
      uVar2 = uVar13;
    }
    puVar11 = (undefined8 *)(param_1 + 0x28 + uVar12 * 0x10);
    uVar12 = uVar12 + 1;
    do {
      if (uVar12 - uVar2 == 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101141424);
        (*pcVar4)();
      }
      lVar10 = *(long *)(unaff_x20 + 0x70);
      if (lVar10 != 0) {
        uVar1 = puVar11[-1];
        uVar3 = *puVar11;
        func_0x000107c61434(uVar3);
        func_0x000107c615f0(lVar10);
        uVar5 = uVar1;
        func_0x000107c5fadc(uVar1,uVar3);
        lVar6 = lVar10;
        func_0x000107c4e680();
        func_0x000107c61180();
        func_0x000107c615e8(lVar10);
        func_0x000107c61170(uVar5);
        if (lVar6 != 0) goto LAB_10114115c;
        func_0x000107c6142c(uVar3);
      }
      uVar12 = uVar12 + 1;
      puVar11 = puVar11 + 2;
      if (uVar12 - uVar13 == 1) goto LAB_1011411e8;
    } while( true );
  }
  lVar10 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
joined_r0x0001011413b0:
  if (lVar10 != 0) {
    func_0x0001000c10c0("focusGroupOnMap(friendIds:isInitialDestination:actionType:)");
    func_0x000107c61180();
    puVar7 = &UNK_1103877c0;
    func_0x000107c613fc(&UNK_1103877c0,0x18,7);
    func_0x000107c61644(puVar7 + 0x10);
    puVar8 = &UNK_110387c90;
    func_0x000107c613fc(&UNK_110387c90,0x31,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(undefined **)(puVar8 + 0x18) = puVar9;
    puVar8[0x20] = 1;
    *(undefined8 *)(puVar8 + 0x28) = param_2;
    puVar8[0x30] = 0;
    uStack_70 = 0x101141bc0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110387ca8;
    puStack_68 = puVar8;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = puStack_68;
    func_0x000107c61434(puVar9);
    puVar9 = puVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar9);
  return;
LAB_10114115c:
  func_0x000107c61170(lVar6);
  puVar7 = puVar9;
  func_0x000107c61558();
  puStack_90 = puVar9;
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000100403514(0,*(long *)(puVar9 + 0x10) + 1,1);
  }
  uVar2 = *(ulong *)(puStack_90 + 0x10);
  if (*(ulong *)(puStack_90 + 0x18) >> 1 <= uVar2) {
    func_0x000100403514(1 < *(ulong *)(puStack_90 + 0x18),uVar2 + 1,1);
  }
  *(ulong *)(puStack_90 + 0x10) = uVar2 + 1;
  *(undefined8 *)(puStack_90 + uVar2 * 0x10 + 0x20) = uVar1;
  *(undefined8 *)(puStack_90 + uVar2 * 0x10 + 0x28) = uVar3;
  puVar9 = puStack_90;
  if (uVar12 == uVar13) goto LAB_1011411e8;
  goto LAB_1011410bc;
LAB_1011411e8:
  lVar10 = *(long *)(puVar9 + 0x10);
  goto joined_r0x0001011413b0;
}



/* Entry: 101141424; end: 1011414b7;  */

void FUN_101141424(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x58) = 1;
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1011414b8; end: 10114153f;  */

undefined8 FUN_1011414b8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101141540; end: 10114155f;  */

void FUN_101141540(void)

{
  func_0x000107c61168(&PTR_PTR_112d5f798);
  return;
}



/* Entry: 101141560; end: 101141597;  */

void FUN_101141560(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101141598; end: 1011415f7;  */

void FUN_101141598(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1011415f8;
  plVar4[5] = lVar3;
  plVar4[6] = lVar1;
  lVar2 = 0;
  func_0x000107c5fcec(0,lVar1,uVar5);
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[7] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101140644,lVar2,lVar3);
  return;
}



/* Entry: 1011415f8; end: 10114163b;  */

void FUN_1011415f8(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101141638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 10114163c; end: 1011416ab;  */

void FUN_10114163c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101141bb4;
  FUN_100ffbb74(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1011416ac; end: 101141843;  */

void FUN_1011416ac(double param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  lVar1 = *(long *)(unaff_x20 + 0x90);
  if (lVar1 != 0) {
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000107c4c458();
    func_0x000107c61180();
    func_0x000107c59c08();
    func_0x000107c615e8(lVar2);
    func_0x000107c4ab14(param_2);
    dVar5 = param_1;
    func_0x000107c4c0e4(param_2);
    lVar2 = lVar1;
    dVar6 = dVar5;
    func_0x000107c4c458(lVar1);
    func_0x000107c61180();
    func_0x000107c5ea20();
    dVar7 = dVar6;
    func_0x000107c615e8(lVar2);
    dVar8 = 16.25;
    if (16.25 < dVar6) {
      lVar2 = lVar1;
      func_0x000107c4c458(lVar1);
      func_0x000107c61180();
      func_0x000107c5ea20();
      func_0x000107c615e8(lVar2);
      dVar8 = dVar7;
    }
    lVar2 = lVar1;
    func_0x000107c4c458(lVar1);
    func_0x000107c61180();
    puVar3 = &UNK_1103877c0;
    func_0x000107c613fc(&UNK_1103877c0,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    uStack_60 = 0x101141bc4;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_110387c58;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    func_0x000107c532c4(param_1,dVar5,dVar8,lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 101141844; end: 10114186f;  */

void FUN_101141844(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101141870; end: 101141883;  */

void FUN_101141870(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  bVar2 = *(byte *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    FUN_10113fe80(uVar1,bVar2 & 1,uVar5,uVar3);
    func_0x000107c61574(lVar4);
  }
  return;
}



/* Entry: 101141884; end: 10114189b;  */

void FUN_101141884(void)

{
  func_0x000101140da0();
  return;
}



/* Entry: 10114189c; end: 1011418ab;  */

/* WARNING: Possible PIC construction at 0x00010113efb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010113efbc) */

void FUN_10114189c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  
  if (param_1 == 2) {
    FUN_10113efd0(param_2);
  }
  else if ((1 < param_1 - 1U) && (*(long *)(unaff_x20 + 0xe0) == 2)) {
    puVar1 = &UNK_110387e20;
    func_0x000107c613fc(&UNK_110387e20,0x20,7);
    *(undefined **)(puVar1 + 0x10) = &UNK_10d926450;
    *(long *)(puVar1 + 0x18) = unaff_x20;
    func_0x000107c6157c();
    func_0x0001001ca524(0x12,0,0x3c,4,0,0,&UNK_10d926458,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1011418ac; end: 1011418df;  */

void FUN_1011418ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1011418e0; end: 101141923;  */

void FUN_1011418e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  *(long *)(lVar1 + 0xe0) = param_1;
  if ((param_1 == 2) && ((*(byte *)(lVar1 + 0x38) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c12ed30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_removeTray_animated__112629568,uVar3,1);
    return;
  }
  *(undefined1 *)(lVar1 + 0x38) = 0;
  return;
}



/* Entry: 101141924; end: 1011419a7;  */

void FUN_101141924(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10114196c;
  plVar3[2] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[3] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10113fd40,lVar1,lVar2);
  return;
}



/* Entry: 1011419a8; end: 101141a17;  */

void FUN_1011419a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101141bb8;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101141a18; end: 101141a5b;  */

long FUN_101141a18(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101141a5c; end: 101141a63;  */

void FUN_101141a5c(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  puVar2 = &UNK_1103882b8;
  func_0x000107c613fc(&UNK_1103882b8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x1011442d8;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_1011442e0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x10114375c;
  puStack_78 = &UNK_1103882d0;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_110388308;
  func_0x000107c613fc(&UNK_110388308,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101144300;
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
  pcStack_70 = FUN_101144308;
  puStack_90 = puVar6;
  uStack_88 = 0x42000000;
  uStack_80 = 0x1011437a4;
  puStack_78 = &UNK_110388320;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c4c7c0(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574();
  puVar6 = puVar2;
  func_0x000107c61544(puVar2,"",0x6e,0x51,0x23,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar2);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101143ac4);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x6e,0x58,0x24,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101143ac8);
  (*pcVar1)();
}



/* Entry: 101141a64; end: 101141a7b;  */

void FUN_101141a64(void)

{
  FUN_10114084c();
  return;
}



/* Entry: 101141a7c; end: 101141a83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101141a7c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d5fae8);
    *(undefined8 *)(lVar1 + _DAT_112d5fae8) = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_101143b24();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101141a84; end: 101141ac3;  */

void FUN_101141a84(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101141ac4; end: 101141bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101141ac4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_3 == 0) {
      func_0x000107c61170();
    }
    else {
      puVar1 = (undefined8 *)(lVar2 + _DAT_112d5e598);
      uVar3 = puVar1[1];
      *puVar1 = param_2;
      puVar1[1] = param_3;
      func_0x000107c61434(param_3);
      func_0x000107c61170(lVar2);
      func_0x000107c6142c(uVar3);
    }
  }
  return;
}



/* Entry: 101141bc8; end: 101141c57;  */

undefined8 FUN_101141bc8(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long extraout_x12;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))(auStack_30 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar1 = 0;
  FUN_101141ca8(0);
  puVar2 = &uStack_28;
  func_0x000107c6147c(puVar2,auStack_30 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,uVar1,6
                     );
  if ((int)puVar2 == 0) {
    uStack_28 = 0;
  }
  return uStack_28;
}



/* Entry: 101141c58; end: 101141ca7;  */

undefined1  [16] FUN_101141c58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = *unaff_x20;
  func_0x000107c44fdc(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 101141ca8; end: 101141ceb;  */

void FUN_101141ca8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5e958 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a6398;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d5e958 = puVar1;
  return;
}



/* Entry: 101141cec; end: 101141cf3;  */

undefined1  [16] FUN_101141cec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = *unaff_x20;
  func_0x000107c44fdc(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 101141cf4; end: 101142103;  */

undefined1 * FUN_101141cf4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  long extraout_x8;
  undefined1 *unaff_x20;
  long lVar17;
  long alStack_140 [2];
  undefined1 auStack_130 [8];
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 auStack_e0 [32];
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [32];
  undefined1 *apuStack_90 [3];
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar17 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_130 + lVar2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  func_0x000107c61174();
  uVar16 = 0x800000010ef27bc0;
  puVar5 = (undefined1 *)0xd00000000000001c;
  func_0x000107c5fadc();
  lVar6 = param_1;
  func_0x000107c4f558();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  if (lVar6 != 0) {
    lVar7 = lVar6;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    if (lVar7 != 0) {
      lVar8 = lVar7;
      uStack_f8 = param_2;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar7);
      puVar9 = (undefined1 *)0x0;
      func_0x000101142150();
      func_0x000107c614e8();
      lVar7 = lVar8;
      func_0x000107c5ee20(lVar8,uVar16);
      apuStack_90[0] = (undefined1 *)0x0;
      func_0x000107c4e380();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      puVar5 = apuStack_90[0];
      if (puVar9 == (undefined1 *)0x0) {
        puVar15 = apuStack_90[0];
        func_0x000107c61174();
        func_0x000107c5ed30();
        func_0x000107c61170(puVar15);
        func_0x000107c61654();
        func_0x00010006c090(lVar8,uVar16);
        func_0x000107c614ac(puVar5);
        param_2 = uStack_f8;
      }
      else {
        lStack_f0 = lVar8;
        func_0x000107c61174();
        puVar5 = puVar9;
        func_0x000107c4159c();
        func_0x000107c61180();
        puVar10 = puVar9;
        if (puVar5 != (undefined1 *)0x0) {
          puVar10 = puVar5;
          func_0x000107c40808();
          if (puVar10 == (undefined1 *)0x4) {
            puStack_128 = puVar5;
            puStack_120 = puVar9;
            uStack_118 = uVar16;
            lStack_110 = lVar17;
            lStack_108 = param_1;
            func_0x000107c600f4(puVar15);
            FUN_100e15a08();
            func_0x000107c601c0(apuStack_90,lVar4,puVar10);
            uVar16 = uStack_f8;
            lVar8 = lVar6;
            puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
            lVar17 = lStack_100;
            lVar7 = lStack_f0;
            while (lStack_100 = lVar8, lStack_78 != 0) {
              func_0x000100102924(apuStack_90,auStack_b0);
              func_0x000100102924(auStack_b0,auStack_e0);
              puVar11 = &uStack_c0;
              func_0x000107c6147c(puVar11,auStack_e0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6
                                 );
              lVar17 = lStack_b8;
              uVar3 = uStack_c0;
              if ((((ulong)puVar11 & 1) != 0) && (lStack_b8 != 0)) {
                puVar12 = puVar13;
                func_0x000107c61558();
                puVar14 = puVar13;
                if (((ulong)puVar12 & 1) == 0) {
                  puVar14 = (undefined *)0x0;
                  func_0x0001000d182c(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
                }
                uVar1 = *(ulong *)(puVar14 + 0x10);
                puVar13 = puVar14;
                if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar1) {
                  puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
                  func_0x0001000d182c(puVar13,uVar1 + 1,1,puVar14);
                }
                *(ulong *)(puVar13 + 0x10) = uVar1 + 1;
                *(undefined8 *)(puVar13 + uVar1 * 0x10 + 0x20) = uVar3;
                *(long *)(puVar13 + uVar1 * 0x10 + 0x28) = lVar17;
                lVar6 = lStack_100;
                lVar7 = lStack_f0;
              }
              func_0x000107c601c0(apuStack_90,lVar4,puVar10);
              lVar8 = lStack_100;
              lVar17 = lStack_100;
            }
            lStack_100 = lVar17;
            func_0x000107c61170(puStack_120);
            func_0x000107c61170(lVar6);
            func_0x00010006c090(lVar7,uStack_118);
            func_0x000107c61170(puStack_128);
            func_0x000107c615e8(lStack_108);
            func_0x000107c61170(uVar16);
            (**(code **)(lStack_110 + 8))(puVar15,lVar4);
            goto LAB_10114205c;
          }
          func_0x000107c61170(puVar9);
          puVar10 = puVar5;
        }
        func_0x000107c61170(puVar10);
        func_0x00010006c090(lStack_f0,uVar16);
        puVar5 = puVar9;
        param_2 = uStack_f8;
      }
    }
  }
  puVar15 = puVar5;
  puVar13 = (undefined *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(lVar6);
LAB_10114205c:
  *(undefined **)(unaff_x20 + 0x18) = puVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  *(undefined1 **)((long)alStack_140 + lVar2) = &stack0xfffffffffffffff0;
  *(undefined8 *)((long)alStack_140 + lVar2 + 8) = 0x101142104;
  func_0x000107c61170(*(undefined8 *)(puVar15 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(puVar15 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(puVar15,0x20,7);
  return puVar15;
}


