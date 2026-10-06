/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1071acd90; end: 1071ace37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071acd90(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_112764d14);
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_112764c1c);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c254fc0(param_4);
  uVar2 = param_4;
  func_0x00010c254b60(param_4);
  func_0x00010c27d200(param_4);
  uVar5 = param_1;
  func_0x00010bf13640(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c0a5430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,uVar5,uVar3,PTR_s_logDrawerTabLatencyOnStickerPick_112606f18,uVar4,uVar1,uVar2)
  ;
  return;
}



/* Entry: 1071ace38; end: 1071acf37; -[SCStickerPickerMenuView _updateScissorIconIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ace38(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1 + _DAT_112764d20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c122400(param_1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1071acf38; end: 1071ad033;  */

void FUN_1071acf38(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x1071acfd8;
    puStack_38 = &UNK_110841f80;
    _objc_retain(param_2);
    uStack_30 = param_2;
    lStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_release(uStack_30);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1071ad034; end: 1071ad0af; -[SCStickerPickerMenuView _selectedCategoryhasSubCategories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1071ad034(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112764d1c;
  if (*(long *)(param_1 + lVar4) == 0) {
    bVar3 = false;
  }
  else {
    lVar1 = param_1 + _DAT_112764cd4;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c1554e0(uVar2);
    lVar4 = lVar1;
    func_0x00010c254a40(lVar1,param_2,param_1,uVar2);
    bVar3 = 1 < lVar4;
    _objc_release(lVar1);
  }
  return bVar3;
}



/* Entry: 1071ad0b0; end: 1071ad167; -[SCStickerPickerMenuView pointInside:withEvent:] */

undefined1 *
FUN_1071ad0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uVar2;
  
  puVar3 = &uStack_50;
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010bfb68e0();
  iVar1 = (int)uVar2;
  _CGRectContainsPoint();
  if (iVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c068740(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf78400();
    _objc_release(uVar2);
  }
  puStack_48 = PTR_PTR_1126f8b00;
  uStack_50 = param_3;
  _objc_msgSendSuper2(param_1,param_2,&uStack_50,PTR_s_pointInside_withEvent__11261e4e8,param_5);
  _objc_release(param_5);
  return (undefined1 *)puVar3;
}



/* Entry: 1071ad168; end: 1071ad1ab; -[SCStickerPickerMenuView canPresentPlanCreation] */

uint FUN_1071ad168(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_opt_respondsToSelector();
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1071ad1ac; end: 1071ad31b; -[SCStickerPickerMenuView didTapPlanSticker:categoryCell:index:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ad1ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bf2d1a0();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c239240();
    _objc_release(lVar1);
    uVar2 = param_1 + _DAT_112764cd4;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c254b00();
    _objc_release(uVar2);
    lVar9 = (long)_DAT_112764d14;
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    uVar4 = param_4;
    func_0x00010c247d20(param_4);
    uVar10 = *(undefined8 *)(param_1 + _DAT_112764c20);
    lVar1 = param_1;
    func_0x00010bf60380(param_1);
    lVar5 = param_1;
    func_0x00010c254b80();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112764d18);
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf31200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b0ae0(uVar8,param_2,param_3,uVar4,uVar10,param_5,uVar3 & 0xffffffff,lVar1,lVar5,
                        uVar7,0);
    _objc_release(uVar7);
    _objc_release(uVar6);
    func_0x00010c2547c0(*(undefined8 *)(param_1 + lVar9));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071ad31c; end: 1071ad33b; -[SCStickerPickerMenuView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ad31c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112764d20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071ad33c; end: 1071ad34f; -[SCStickerPickerMenuView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ad33c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112764d20,param_3);
  return;
}



/* Entry: 1071ad350; end: 1071ad36f; -[SCStickerPickerMenuView dataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ad350(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112764cd4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071ad370; end: 1071ad38f; -[SCStickerPickerMenuView venueReloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ad370(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112764d70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071ad390; end: 1071ad3a3; -[SCStickerPickerMenuView setVenueReloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ad390(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112764d70,param_3);
  return;
}



/* Entry: 1071ad3a4; end: 1071ad3c3; -[SCStickerPickerMenuView itemPresentationModelSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ad3a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112764d2c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071ad3c4; end: 1071ad3d7; -[SCStickerPickerMenuView setItemPresentationModelSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ad3c4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112764d2c,param_3);
  return;
}



/* Entry: 1071ad3d8; end: 1071ad3f7; -[SCStickerPickerMenuView interactionLoggingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ad3d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112764d74);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071ad3f8; end: 1071ad40b; -[SCStickerPickerMenuView setInteractionLoggingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ad3f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112764d74,param_3);
  return;
}



/* Entry: 1071ad40c; end: 1071ad41b; -[SCStickerPickerMenuView lastSelectedSubCategory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1071ad40c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112764d78);
}



/* Entry: 1071ad41c; end: 1071ad45b; -[SCStickerPickerMenuView setLastSelectedSubCategory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ad41c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112764d78;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071ad45c; end: 1071ad8c3; -[SCStickerPickerMenuView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ad45c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112764d78,0);
  _objc_destroyWeak(param_1 + _DAT_112764d74);
  _objc_destroyWeak(param_1 + _DAT_112764d2c);
  _objc_destroyWeak(param_1 + _DAT_112764d70);
  _objc_destroyWeak(param_1 + _DAT_112764cd4);
  _objc_destroyWeak(param_1 + _DAT_112764d20);
  _objc_storeStrong(param_1 + _DAT_112764c68,0);
  _objc_storeStrong(param_1 + _DAT_112764d7c,0);
  _objc_storeStrong(param_1 + _DAT_112764c50,0);
  _objc_storeStrong(param_1 + _DAT_112764c4c,0);
  _objc_storeStrong(param_1 + _DAT_112764c48,0);
  _objc_storeStrong(param_1 + _DAT_112764c28,0);
  _objc_storeStrong(param_1 + _DAT_112764c24,0);
  _objc_storeStrong(param_1 + _DAT_112764c88,0);
  _objc_storeStrong(param_1 + _DAT_112764c8c,0);
  _objc_storeStrong(param_1 + _DAT_112764d18,0);
  _objc_storeStrong(param_1 + _DAT_112764d14,0);
  _objc_storeStrong(param_1 + _DAT_112764cb8,0);
  _objc_storeStrong(param_1 + _DAT_112764cf0,0);
  _objc_storeStrong(param_1 + _DAT_112764d50,0);
  _objc_storeStrong(param_1 + _DAT_112764d6c,0);
  _objc_storeStrong(param_1 + _DAT_112764d3c,0);
  _objc_storeStrong(param_1 + _DAT_112764c64,0);
  _objc_storeStrong(param_1 + _DAT_112764c58,0);
  _objc_storeStrong(param_1 + _DAT_112764c7c,0);
  _objc_storeStrong(param_1 + _DAT_112764c78,0);
  _objc_storeStrong(param_1 + _DAT_112764d54,0);
  _objc_storeStrong(param_1 + _DAT_112764d64,0);
  _objc_storeStrong(param_1 + _DAT_112764c84,0);
  _objc_storeStrong(param_1 + _DAT_112764d5c,0);
  _objc_storeStrong(param_1 + _DAT_112764c80,0);
  _objc_storeStrong(param_1 + _DAT_112764d40,0);
  _objc_storeStrong(param_1 + _DAT_112764c74,0);
  _objc_storeStrong(param_1 + _DAT_112764c98,0);
  _objc_storeStrong(param_1 + _DAT_112764c94,0);
  _objc_storeStrong(param_1 + _DAT_112764c90,0);
  _objc_storeStrong(param_1 + _DAT_112764cd0,0);
  _objc_storeStrong(param_1 + _DAT_112764c9c,0);
  _objc_storeStrong(param_1 + _DAT_112764ca8,0);
  _objc_storeStrong(param_1 + _DAT_112764ca0,0);
  _objc_storeStrong(param_1 + _DAT_112764ca4,0);
  _objc_storeStrong(param_1 + _DAT_112764d68,0);
  _objc_storeStrong(param_1 + _DAT_112764cac,0);
  _objc_storeStrong(param_1 + _DAT_112764c20,0);
  _objc_storeStrong(param_1 + _DAT_112764cc4,0);
  _objc_storeStrong(param_1 + _DAT_112764d10,0);
  _objc_storeStrong(param_1 + _DAT_112764d1c,0);
  _objc_storeStrong(param_1 + _DAT_112764c44,0);
  _objc_storeStrong(param_1 + _DAT_112764cb0,0);
  _objc_storeStrong(param_1 + _DAT_112764d08,0);
  _objc_storeStrong(param_1 + _DAT_112764d30,0);
  _objc_storeStrong(param_1 + _DAT_112764cd8,0);
  _objc_storeStrong(param_1 + _DAT_112764ce0,0);
  _objc_storeStrong(param_1 + _DAT_112764cc8,0);
  _objc_storeStrong(param_1 + _DAT_112764cc0,0);
  _objc_storeStrong(param_1 + _DAT_112764cbc,0);
  _objc_storeStrong(param_1 + _DAT_112764d00,0);
  _objc_storeStrong(param_1 + _DAT_112764ccc,0);
  _objc_storeStrong(param_1 + _DAT_112764d04,0);
  _objc_storeStrong(param_1 + _DAT_112764d0c,0);
  _objc_storeStrong(param_1 + _DAT_112764ce4,0);
  _objc_storeStrong(param_1 + _DAT_112764cec,0);
  _objc_storeStrong(param_1 + _DAT_112764ce8,0);
  _objc_storeStrong(param_1 + _DAT_112764cb4,0);
  _objc_storeStrong(param_1 + _DAT_112764c6c,0);
  _objc_destroyWeak(param_1 + _DAT_112764c5c);
  _objc_storeStrong(param_1 + _DAT_112764c60,0);
  _objc_storeStrong(param_1 + _DAT_112764c54,0);
  _objc_storeStrong(param_1 + _DAT_112764c18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112764c14,0);
  return;
}



/* Entry: 1071ad8c4; end: 1071adb27; -[SCStickerQuickReplyViewController initWithBitmojiAvatarProvider:friendmojiUserContainer:itemsRepository:ctpItemViewService:sourceType:userBlizzardLogger:renderStyleProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1071ad8c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f8b08;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112764d80;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112764d84) = param_7;
    lVar6 = (long)_DAT_112764d88;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112764d8c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112764d90) = 0x4018000000000000;
    lVar5 = (long)_DAT_112764d94;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112764d98);
    *(undefined **)((long)puVar1 + (long)_DAT_112764d98) = puVar3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112764d9c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bb1d8;
    _objc_alloc_init();
    lVar5 = (long)_DAT_112764da0;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bfd46e0();
    _objc_release(uVar4);
    if ((int)uVar2 != 0) {
      puVar3 = PTR_PTR_1126ba808;
      _objc_alloc(PTR_PTR_1126ba808);
      func_0x00010bff7e20();
      func_0x00010c1e12a0(*(undefined8 *)((long)puVar1 + lVar5));
      _objc_release(puVar3);
    }
    puVar3 = PTR_PTR_1126bb1e8;
    _objc_alloc(PTR_PTR_1126bb1e8);
    func_0x00010c01ce40();
    func_0x00010c1e12a0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c09b7e0(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1071adb28; end: 1071adb77; -[SCStickerQuickReplyViewController loadView] */

void FUN_1071adb28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_opt_new(PTR__OBJC_CLASS___UIScrollView_1126af098);
  func_0x00010c1738c0();
  func_0x00010c18e220(puVar1,param_2,1);
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071adb78; end: 1071adeeb; -[SCStickerQuickReplyViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071adb78(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_190;
  undefined *puStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f8 = PTR_PTR_1126f8b08;
  lStack_100 = param_1;
  _objc_msgSendSuper2(&lStack_100,PTR_s_viewDidLoad_112684cd8);
  puVar5 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init();
  func_0x00010c1f7ac0();
  func_0x00010c1c82c0(0,puVar5);
  func_0x00010c1c8300(0x4010000000000000,puVar5);
  func_0x00010c106fe0(param_1);
  func_0x00010c1b6260(puVar5);
  puVar1 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  puStack_148 = puVar5;
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar7 = (long)_DAT_112764da4;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar7));
  _objc_release(puVar1);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c167a00(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c18e220(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar7));
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  _objc_opt_class(PTR_PTR_1126d4f28);
  func_0x00010c126000(uVar4);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  puVar2 = *(undefined **)(param_1 + _DAT_112764d80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c127900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar8 = *plStack_130;
    do {
      puVar5 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar8) {
          _objc_enumerationMutation(puVar1);
        }
        uVar4 = *(undefined8 *)(lStack_138 + (long)puVar5 * 8);
        uVar6 = *(undefined8 *)(param_1 + lVar7);
        _objc_opt_class(PTR_PTR_1126d4f28);
        func_0x00010c29e120(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c126000(uVar6);
        _objc_release(uVar4);
        puVar5 = puVar5 + 1;
      } while (puVar2 != puVar5);
      puVar2 = puVar1;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  lVar7 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211780();
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106fe0(param_1);
  lVar3 = lVar8;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162480();
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar7);
  puVar1 = puStack_148;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_1071adeec;
  puStack_188 = PTR_PTR_1126f8b08;
  puStack_190 = puVar1;
  lStack_180 = lVar8;
  lStack_178 = lVar7;
  lStack_170 = lVar3;
  puStack_168 = puVar5;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_190,PTR_s_viewWillLayoutSubviews_112526958);
  puVar5 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar7 = (long)_DAT_112764da4;
  func_0x00010c19f0e0(*(undefined8 *)(puVar1 + lVar7));
  _objc_release(puVar5);
  func_0x00010c181f80(0,0x4018000000000000,0,0x4018000000000000,*(undefined8 *)(puVar1 + lVar7));
  return;
}



/* Entry: 1071adeec; end: 1071adf7b; -[SCStickerQuickReplyViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071adeec(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f8b08;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillLayoutSubviews_112526958);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar2 = (long)_DAT_112764da4;
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + lVar2));
  _objc_release(lVar1);
  func_0x00010c181f80(0,0x4018000000000000,0,0x4018000000000000,*(undefined8 *)(param_1 + lVar2));
  return;
}



/* Entry: 1071adf7c; end: 1071adff3; -[SCStickerQuickReplyViewController preferredViewHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1071adf7c(double param_1,long param_2)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar2 = *(double *)(param_2 + _DAT_112764d90);
  _objc_release(puVar1);
  return (param_1 + -12.0 + 4.0) / dVar2 + -4.0;
}



/* Entry: 1071adff4; end: 1071ae043; -[SCStickerQuickReplyViewController viewWillDisappear:] */

void FUN_1071adff4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f8b08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010be591c0(param_1);
  func_0x00010be93e00(param_1);
  return;
}



/* Entry: 1071ae044; end: 1071ae0ff; -[SCStickerQuickReplyViewController show] */

void FUN_1071ae044(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074c20();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1071ae100;
    puStack_40 = &UNK_110842e18;
    uStack_38 = param_1;
    func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_58);
  }
  return;
}



/* Entry: 1071ae100; end: 1071ae137;  */

void FUN_1071ae100(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071ae138; end: 1071ae1bb; -[SCStickerQuickReplyViewController hide] */

void FUN_1071ae138(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1071ae1bc;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1071ae1f4;
  puStack_48 = &UNK_110841f20;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38,
                      &puStack_60);
  return;
}



/* Entry: 1071ae1bc; end: 1071ae22b;  */

void FUN_1071ae1bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1071ae22c; end: 1071ae23b; -[SCStickerQuickReplyViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ae22c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112764da8),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1071ae23c; end: 1071ae3e7; -[SCStickerQuickReplyViewController _itemCellForItem:atIndexPath:collectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ae23c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar1 = *(undefined ***)(param_1 + _DAT_112764d80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar2 = ppuVar1;
    func_0x00010c29e140(ppuVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar2 = ppuVar1;
      func_0x00010c29e140(ppuVar1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e0c0(param_5,param_2,ppuVar2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
      uVar3 = *(undefined8 *)(param_1 + _DAT_112764da0);
      func_0x00010c10f580(uVar3,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010c084de0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar1;
      func_0x00010c29cde0(ppuVar1,param_2,param_3,uVar4,uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28c8c0(uVar6,param_2,ppuVar5,param_3);
      _objc_release(ppuVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      goto LAB_1071ae3a0;
    }
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ea0ff8;
  func_0x00010bf6e0c0(param_5,param_2,&PTR____CFConstantStringClassReference_110ea0ff8,param_4);
  _objc_retainAutoreleasedReturnValue();
LAB_1071ae3a0:
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1071ae3e8; end: 1071ae48b; -[SCStickerQuickReplyViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ae3e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112764da8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c0840e0(param_4);
  func_0x00010c0dfd40(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be45b80(param_1,param_2,uVar2,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1071ae48c; end: 1071ae547; -[SCStickerQuickReplyViewController collectionView:willDisplayCell:forItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ae48c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d4f28;
  _objc_opt_class(PTR_PTR_1126d4f28);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  uVar3 = param_4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010c0840e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5f80(uVar3);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112764d98);
  uVar3 = uVar2;
  func_0x00010bf9e140(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071ae548; end: 1071ae5cf; -[SCStickerQuickReplyViewController collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

void FUN_1071ae548(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong in_x3;
  
  _objc_retain(in_x3);
  puVar2 = PTR_PTR_1126d4f28;
  _objc_opt_class(PTR_PTR_1126d4f28);
  uVar3 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar2);
  uVar1 = in_x3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c084e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dba0();
  _objc_release(uVar3);
  func_0x00010bf75820(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 1071ae5d0; end: 1071ae74f; -[SCStickerQuickReplyViewController collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ae5d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + _DAT_112764da4);
  _objc_retain(param_4);
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d4f28;
  _objc_opt_class(PTR_PTR_1126d4f28);
  uVar2 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar1);
  uVar3 = uVar5;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010c084de0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c0840e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126ba7a8;
  _objc_alloc(PTR_PTR_1126ba7a8);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112764da0);
  func_0x00010c10f580(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa520(puVar1);
  _objc_release(uVar4);
  param_1 = param_1 + _DAT_112764db0;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0840e0(param_4);
  _objc_release(param_4);
  func_0x00010c254cc0(param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1071ae750; end: 1071ae8bf; -[SCStickerQuickReplyViewController loadItemsForFeed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071ae750(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1;
  func_0x00010be861a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae810;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112764db4);
  *(undefined **)(param_1 + _DAT_112764db4) = puVar2;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112764d8c);
  func_0x00010c0850a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112764db8;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = uVar3;
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar2);
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 1071ae8c0; end: 1071ae993;  */

void FUN_1071ae8c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071ae994; end: 1071aebbb;  */

void FUN_1071ae994(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar1 = param_2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_1a0;
    do {
      lVar7 = 0;
      do {
        if (*plStack_1a0 != lVar6) {
          _objc_enumerationMutation(param_2);
        }
        lVar2 = *(long *)(lStack_1a8 + lVar7 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar8 = *plStack_1e0;
          do {
            lVar9 = 0;
            do {
              if (*plStack_1e0 != lVar8) {
                _objc_enumerationMutation(lVar2);
              }
              lVar5 = *(long *)(lStack_1e8 + lVar9 * 8);
              func_0x00010bf96f00();
              if (lVar5 == 9) {
                uVar4 = *(undefined8 *)(param_1 + 0x20);
                func_0x00010be86160(uVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa140(*(undefined8 *)(param_1 + 0x28));
                _objc_release(uVar4);
              }
              lVar9 = lVar9 + 1;
            } while (lVar3 != lVar9);
            lVar3 = lVar2;
            func_0x00010bf52a60();
          } while (lVar3 != 0);
        }
        _objc_release(lVar2);
        lVar7 = lVar7 + 1;
      } while (lVar7 != lVar1);
      lVar1 = param_2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_218 = 0xc2000000;
  pcStack_210 = FUN_1071aebbc;
  puStack_208 = &UNK_110841f80;
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(*(undefined8 *)(param_1 + 0x28));
  uStack_200 = uVar4;
  uStack_1f8 = uVar10;
  func_0x000100162d98("APPSTORE",&puStack_220);
  _objc_release(uStack_1f8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bee4950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x20),PTR_s__updateWithItems__112596bf8,
             *(undefined8 *)(param_2 + 0x28));
  return;
}



/* Entry: 1071aebbc; end: 1071aebc7;  */

void FUN_1071aebbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee4950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateWithItems__112596bf8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1071aebc8; end: 1071aec23;  */

void FUN_1071aebc8(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1071aec24;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_38);
  return;
}



/* Entry: 1071aec24; end: 1071aec33;  */

void FUN_1071aec24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee4950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateWithItems__112596bf8,
             PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 1071aec34; end: 1071aecd7; -[SCStickerQuickReplyViewController _reactionsFeed] */

void FUN_1071aec34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126be980;
  func_0x00010bf459e0(PTR_PTR_1126be980,param_2,&PTR____CFConstantStringClassReference_110e04718,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0cb0;
  _objc_alloc(PTR_PTR_1126b0cb0);
  func_0x00010c0559c0();
  puVar3 = PTR_PTR_1126be988;
  _objc_alloc(PTR_PTR_1126be988);
  func_0x00010c0124e0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1071aecd8; end: 1071aed93; -[SCStickerQuickReplyViewController _updateWithItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071aecd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112764da8;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c071b60(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112764da4;
    func_0x00010c128b60(*(undefined8 *)(param_1 + lVar5));
    lVar4 = *(long *)(param_1 + lVar4);
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1525a0(uVar2,param_2,puVar3,8,0);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071aed94; end: 1071aef7b; -[SCStickerQuickReplyViewController _resetStickerViewedParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071aed94(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_112764d98;
  func_0x00010c12adc0(*(undefined8 *)(param_1 + lVar10));
  lVar3 = *(long *)(param_1 + _DAT_112764da4);
  func_0x00010c29fc60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (lVar4 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    do {
      lVar11 = 0;
      uVar13 = uVar12;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar3);
        }
        puVar5 = PTR_PTR_1126d4f28;
        uVar14 = *(ulong *)(lVar11 * 8);
        _objc_retain(uVar14);
        _objc_opt_class(puVar5);
        uVar12 = uVar14;
        _objc_opt_isKindOfClass(uVar14,puVar5);
        uVar1 = uVar14;
        if ((uVar12 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar14);
        uVar12 = uVar13;
        if (uVar1 != 0) {
          func_0x00010c084de0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar14;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar14);
          uVar12 = uVar6;
          func_0x00010bf9e140();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar13);
          if (uVar12 != 0) {
            func_0x00010befa120(*(undefined8 *)(param_1 + lVar10));
          }
          _objc_release(uVar6);
        }
        _objc_release(uVar1);
        lVar11 = lVar11 + 1;
        uVar13 = uVar12;
      } while (lVar4 != lVar11);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126d5028;
    _objc_alloc_init(PTR_PTR_1126d5028);
    uVar7 = *(undefined8 *)(uVar12 + (long)_DAT_112764d98);
    func_0x00010bf00560(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfae0(puVar5);
    _objc_release(uVar8);
    func_0x00010bf529e0(uVar7);
    func_0x00010c1df480(puVar5);
    func_0x00010c20baa0(puVar5);
    func_0x00010c206c40(puVar5);
    func_0x00010c179920(puVar5);
    uVar8 = *(undefined8 *)(uVar12 + (long)_DAT_112764d94);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar8);
    _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 1071aef7c; end: 1071af07f; -[SCStickerQuickReplyViewController _logStickerViewedEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071aef7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d5028;
  _objc_alloc_init(PTR_PTR_1126d5028);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112764d98);
  func_0x00010bf00560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfae0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf529e0(uVar2);
  func_0x00010c1df480(puVar1,param_2,uVar3);
  func_0x00010c20baa0(puVar1,param_2,*(long *)(param_1 + _DAT_112764dac) != 2);
  func_0x00010c206c40(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_112764d84));
  func_0x00010c179920(puVar1,param_2,1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112764d94);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1071af080; end: 1071af083; -[SCStickerQuickReplyViewController willDisplayStickerPickerItemCell:] */

void FUN_1071af080(void)

{
  return;
}



/* Entry: 1071af084; end: 1071af087; -[SCStickerQuickReplyViewController stickerPickerItemCell:didDisplayContentInTime:] */

void FUN_1071af084(void)

{
  return;
}



/* Entry: 1071af088; end: 1071af3b3; -[SCStickerQuickReplyViewController _reactionItemFromItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071af088(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf96f00();
  if (uVar1 == 9) {
    uVar2 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bea40;
    _objc_opt_class(PTR_PTR_1126bea40);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010bf96d80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    if (uVar4 == 0) {
      lVar12 = 0;
      lVar8 = 0;
    }
    else {
      do {
        uVar13 = 0;
        do {
          if (lRam0000000000000000 != lVar8) {
            _objc_enumerationMutation(uVar2);
          }
          lVar14 = *(long *)(uVar13 * 8);
          lVar12 = (long)_DAT_112764d88;
          uVar5 = *(ulong *)(param_1 + lVar12);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bfd46e0();
          if ((uVar6 & 1) != 0) {
            lVar7 = lVar14;
            func_0x00010bf1b3a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar5);
            if (lVar7 == 0) goto LAB_1071af1d8;
            func_0x00010bf1b3a0(lVar14);
            _objc_retainAutoreleasedReturnValue();
            _objc_retain();
            lVar7 = lVar14;
            func_0x00010bf41a00(lVar14);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar14;
            func_0x00010c06c000(lVar14);
            _objc_release(lVar14);
            uVar9 = *(undefined8 *)(param_1 + lVar12);
            func_0x00010c269d40(uVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar9;
            func_0x00010bf12ea0();
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar7;
            func_0x00010b0e4c28(lVar7,lVar8,uVar10,0,0xffffffffffffffff);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar10);
            _objc_release(uVar9);
            lVar8 = lVar14;
LAB_1071af318:
            _objc_release(lVar7);
            goto LAB_1071af324;
          }
          _objc_release(uVar5);
LAB_1071af1d8:
          lVar12 = lVar14;
          func_0x00010c245fc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar12 != 0) {
            lVar8 = lVar14;
            func_0x00010c245fc0(lVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c245fc0(lVar14);
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar14;
            func_0x00010c2434e0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar14;
            goto LAB_1071af318;
          }
          uVar13 = uVar13 + 1;
        } while (uVar4 != uVar13);
        uVar4 = uVar2;
        func_0x00010bf52a60();
      } while (uVar4 != 0);
      lVar12 = 0;
      lVar8 = 0;
    }
LAB_1071af324:
    _objc_release(uVar2);
    _objc_alloc(PTR_PTR_1126baa60);
    func_0x00010c01fe20();
    _objc_release(lVar12);
    _objc_release(lVar8);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_loadWeakRetained(param_3 + (long)_DAT_112764db0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071af3b4; end: 1071af3d3; -[SCStickerQuickReplyViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071af3b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112764db0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1071af3d4; end: 1071af3e7; -[SCStickerQuickReplyViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071af3d4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112764db0,param_3);
  return;
}



/* Entry: 1071af3e8; end: 1071af4d3; -[SCStickerQuickReplyViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1071af3e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112764db0);
  _objc_storeStrong(param_1 + _DAT_112764d94,0);
  _objc_storeStrong(param_1 + _DAT_112764da0,0);
  _objc_storeStrong(param_1 + _DAT_112764d80,0);
  _objc_storeStrong(param_1 + _DAT_112764d9c,0);
  _objc_storeStrong(param_1 + _DAT_112764d88,0);
  _objc_storeStrong(param_1 + _DAT_112764db4,0);
  _objc_storeStrong(param_1 + _DAT_112764db8,0);
  _objc_storeStrong(param_1 + _DAT_112764d8c,0);
  _objc_storeStrong(param_1 + _DAT_112764d98,0);
  _objc_storeStrong(param_1 + _DAT_112764dbc,0);
  _objc_storeStrong(param_1 + _DAT_112764da8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112764da4,0);
  return;
}



/* Entry: 1071af4d4; end: 1071af56f; -[SCPublisherStoriesDeepLinkProcessor initWithNavigationDelegate:discoverFeedBaseDeepLinkProcessor:] */

undefined1 *
FUN_1071af4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8b10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071af570; end: 1071af75f; -[SCPublisherStoriesDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:] */

undefined8
FUN_1071af570(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar5 = param_3;
  func_0x0001071b9be8();
  if ((int)uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c0f5820(param_3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,uVar5,&PTR____CFConstantStringClassReference_110ea1718);
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c0f5820(param_3,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,uVar5,&PTR____CFConstantStringClassReference_110ea1738);
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c0f5820(param_3,param_2,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,uVar5,&PTR____CFConstantStringClassReference_110ea1638);
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar5 = param_3;
    func_0x00010c11d6e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071ae0();
    func_0x00010c0df6e0(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110ea1778);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(uVar5);
    func_0x00010be2d5e0(param_1,param_2,param_3,puVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfd1b60(uVar5,param_2,param_3,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1071af760; end: 1071af7d3; -[SCPublisherStoriesDeepLinkProcessor _handleOpenURLForPublisherStory:additionalInfo:] */

undefined8 FUN_1071af760(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10dfe0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return 1;
}



/* Entry: 1071af7d4; end: 1071af7ff; -[SCPublisherStoriesDeepLinkProcessor .cxx_destruct] */

void FUN_1071af7d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1071af800; end: 1071af8c3; -[SCDiscoverDeepLinkProcessor initWithNavigationDelegate:discoverFeedBaseDeepLinkProcessor:storiesConfigProvider:] */

undefined1 *
FUN_1071af800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f8b18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071af8c4; end: 1071af8cb; -[SCDiscoverDeepLinkProcessor canProcessForNewlyRegisteredUser] */

undefined8 FUN_1071af8c4(void)

{
  return 0;
}



/* Entry: 1071af8cc; end: 1071af9f3; -[SCDiscoverDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:] */

undefined8
FUN_1071af8cc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0f5820(param_3,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    func_0x00010be2d580(param_1,param_2,param_5);
  }
  else {
    uVar2 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e60d38);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = uVar1,
       func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e17458),
       (int)uVar2 == 0)) {
      uVar2 = uVar1;
      func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e3cd18);
      if ((int)uVar2 == 0) {
        uVar2 = uVar1;
        func_0x00010c0720c0(uVar1,param_2,&PTR____CFConstantStringClassReference_110dd2018);
        if (((uVar2 & 1) == 0) && (uVar2 = param_3, func_0x00010c074a80(), (int)uVar2 == 0)) {
          param_1 = 0;
        }
        else {
          func_0x00010be2d540(param_1,param_2,param_3,param_5);
        }
      }
      else {
        func_0x00010be2d5c0(param_1,param_2,param_3,param_5);
      }
    }
    else {
      func_0x00010be2d560(param_1,param_2,param_3,param_5);
    }
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1071af9f4; end: 1071afc73; -[SCDiscoverDeepLinkProcessor _handleOpenURLForEditionFeature:additionalInfo:] */

undefined8 FUN_1071af9f4(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **unaff_x24;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = param_3;
  func_0x00010c074a80();
  if ((int)ppuVar1 == 0) {
    ppuVar2 = param_3;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd2038;
    ppuVar7 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    unaff_x24 = param_3;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = unaff_x24;
    func_0x00010c0d3c80();
    _objc_release(unaff_x24);
    if (ppuVar7 == (undefined **)0x0) goto LAB_1071afc18;
  }
  else {
    ppuVar2 = param_3;
    func_0x00010c0f5820(param_3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110db3638;
    ppuVar7 = ppuVar2;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
LAB_1071afc18:
      uVar8 = 0;
      goto LAB_1071afc1c;
    }
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dd2038;
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_70 = ppuVar7;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_70,&ppuStack_78,1
                       );
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c0d3c80();
    _objc_release(ppuVar1);
  }
  uVar8 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110db6d78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar8);
  func_0x00010bef7f60(ppuVar2,param_2,param_4);
  unaff_x24 = ppuVar2;
  func_0x00010bf51e00();
  uVar8 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f83958);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010bf1f3c0();
  _objc_release(uVar8);
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained(lVar4);
  if ((int)uVar3 == 0) {
    func_0x00010c10d420();
  }
  else {
    func_0x00010c10d100();
  }
  _objc_release(lVar4);
  ppuVar1 = param_3;
  func_0x00010bfd1b60(*(undefined8 *)(param_1 + 0x10),param_2,param_3,unaff_x24);
  _objc_release(unaff_x24);
  _objc_release(ppuVar7);
  uVar8 = 1;
LAB_1071afc1c:
  _objc_release(ppuVar2);
  _objc_release(param_4);
  ppuVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar8;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_1071afc74;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c0 = unaff_x24;
  ppuStack_b8 = ppuVar2;
  ppuStack_b0 = ppuVar7;
  uStack_a8 = uVar8;
  uStack_a0 = param_4;
  ppuStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar1);
  ppuVar2 = ppuVar1;
  func_0x00010c0e00e0(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110db6d78);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar2;
  func_0x00010bf1f3c0();
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar5 + 1;
  _objc_loadWeakRetained();
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110f83978;
  puStack_d0 = PTR____kCFBooleanFalse_11034ab60;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_d0,&ppuStack_d8,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10dfe0(ppuVar2,param_2,ppuVar7,0,puVar6);
  _objc_release(puVar6);
  _objc_release(ppuVar2);
  ppuVar7 = (undefined **)0x0;
  ppuVar2 = ppuVar1;
  func_0x00010bfd1b60(ppuVar5[2],param_2,0,ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return 1;
  }
  ___stack_chk_fail();
  puVar9 = ppuVar1[3];
  _objc_retain(ppuVar2);
  _objc_retain(ppuVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar9;
  func_0x00010c12c800();
  _objc_release(puVar9);
  ppuVar5 = ppuVar1 + 1;
  _objc_loadWeakRetained(ppuVar5);
  if ((int)puVar6 == 0) {
    func_0x00010c10dfe0();
    _objc_release(ppuVar5);
    func_0x00010bfd1b60(ppuVar1[2],param_2,ppuVar7,ppuVar2);
  }
  else {
    func_0x00010c10c9e0();
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar7;
    ppuVar7 = ppuVar5;
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar7);
  return 1;
}



/* Entry: 1071afc74; end: 1071afd97; -[SCDiscoverDeepLinkProcessor _handleOpenURLForHomepage:] */

undefined8 FUN_1071afc74(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db6d78);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf1f3c0();
  _objc_release(lVar1);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f83978;
  puStack_50 = PTR____kCFBooleanFalse_11034ab60;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10dfe0(lVar1,param_2,lVar5,0,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar5 = 0;
  lVar1 = param_3;
  func_0x00010bfd1b60(*(undefined8 *)(param_1 + 0x10),param_2,0,param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return 1;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(param_3 + 0x18);
  _objc_retain(lVar1);
  _objc_retain(lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c12c800();
  _objc_release(uVar6);
  lVar4 = param_3 + 8;
  _objc_loadWeakRetained(lVar4);
  if ((int)uVar3 == 0) {
    func_0x00010c10dfe0();
    _objc_release(lVar4);
    func_0x00010bfd1b60(*(undefined8 *)(param_3 + 0x10),param_2,lVar5,lVar1);
  }
  else {
    func_0x00010c10c9e0();
    _objc_release(lVar1);
    lVar1 = lVar5;
    lVar5 = lVar4;
  }
  _objc_release(lVar1);
  _objc_release(lVar5);
  return 1;
}



/* Entry: 1071afd98; end: 1071afe6b; -[SCDiscoverDeepLinkProcessor _handleOpenURLForFriendStoriesFeature:additionalInfo:] */

undefined8 FUN_1071afd98(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c12c800();
  _objc_release(uVar3);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  if ((int)uVar1 == 0) {
    func_0x00010c10dfe0();
    _objc_release(lVar2);
    func_0x00010bfd1b60(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  }
  else {
    func_0x00010c10c9e0();
    _objc_release(param_4);
    param_4 = param_3;
    param_3 = lVar2;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return 1;
}



/* Entry: 1071afe6c; end: 1071afeef; -[SCDiscoverDeepLinkProcessor _handleOpenURLForPublisherStoriesFeature:additionalInfo:] */

undefined8 FUN_1071afe6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10dfe0();
  _objc_release(lVar1);
  func_0x00010bfd1b60(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return 1;
}



/* Entry: 1071afef0; end: 1071aff27; -[SCDiscoverDeepLinkProcessor .cxx_destruct] */

void FUN_1071afef0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1071aff28; end: 1071b026b; -[SCDiscoverStoriesDeepLinkHandler initWithDiscoverFeedDataFetcher:discoverFeedDataMutator:actionHandler:adConfigProvider:circumstanceEngine:snapchattersDataFetcher:adRenderDataParser:networkConnectivityMonitor:locationProvider:networkRequester:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:storiesConfigProvider:discoverBlizzardLogger:] */

undefined8 *
FUN_1071aff28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126f8b20;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c2120;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1071b026c; end: 1071b04af; -[SCDiscoverStoriesDeepLinkHandler handleDeeplink:additionalInfo:] */

void FUN_1071b026c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c08fa60();
  if (uVar2 != 0) {
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17ba0();
    _objc_release(puVar3);
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107fd3b4c();
    _objc_release(uVar2);
    uVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar2 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar4);
    uVar4 = param_3;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    func_0x00010be622c0(param_1);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071b04b0; end: 1071b07c7; -[SCDiscoverStoriesDeepLinkHandler _navigateToDiscoverFeedStoryWithId:isInApp:pushType:notificationId:feedType:] */

void FUN_1071b04b0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  uVar1 = *(ulong *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x000108f51d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25baa0(uVar1,param_3,uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b1118;
  _objc_alloc(PTR_PTR_1126b1118);
  _objc_retain(&PTR____CFConstantStringClassReference_110eb5658);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043160(puVar3,param_3,&PTR____CFConstantStringClassReference_110eb5658,puVar4);
  _objc_release(puVar4);
  _objc_release(&PTR____CFConstantStringClassReference_110eb5658);
  lVar6 = 0x10;
  if (param_5 == 0) {
    lVar6 = 8;
  }
  uVar9 = *(undefined8 *)((long)&PTR_PTR_110a08b80 + lVar6);
  _objc_retain(uVar9);
  lVar5 = *(long *)(param_2 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d5030;
  func_0x00010c0da080(PTR_PTR_1126d5030);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c067e40(lVar5,param_3,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar5);
  lVar7 = *(long *)(param_2 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d5030;
  func_0x00010c0da060(PTR_PTR_1126d5030);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar7;
  func_0x00010c067e40(lVar7,param_3,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar7);
  if (((0 < lVar5 || 0 < lVar6) && (uVar2 != 0)) &&
     (uVar1 = uVar2, func_0x00010c0741a0(), (uVar1 & 1) == 0)) {
    uVar1 = uVar2;
    func_0x00010c13bd00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c25b720();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    if ((uVar8 != 3) &&
       (uVar8 = uVar2, func_0x00010c25b720(), puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770,
       uVar8 != 0xe)) {
      lVar6 = lVar5;
    }
    PTR__OBJC_CLASS___NSDate_1126ae770 = puVar4;
    if (0 < lVar6) {
      func_0x00010bf64de0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      _objc_release(puVar4);
      if (param_1 < (double)lVar6) {
        func_0x00010be31140(param_2,param_3,uVar2,param_8 & 0xffffffff,puVar3,uVar9,param_4,uVar2,
                            param_6,param_7,(char)param_5);
        _objc_release(uVar1);
        goto LAB_1071b0780;
      }
    }
    _objc_release(uVar1);
  }
  func_0x00010be5afa0(param_2,param_3,param_4,param_8 & 0xffffffff,puVar3,uVar9,uVar2,param_6,
                      param_7,(char)param_5);
LAB_1071b0780:
  _objc_release(uVar9);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071b07c8; end: 1071b0a1f; -[SCDiscoverStoriesDeepLinkHandler _lookupStory:feedType:sectionKey:identifier:cheetahStory:pushType:notificationId:isInApp:] */

void FUN_1071b07c8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_initWeak(auStack_70,param_1);
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17ba0();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1071b0a20;
  puStack_b8 = &UNK_110991260;
  _objc_copyWeak(auStack_88,auStack_70);
  uStack_78 = param_4;
  _objc_retain(param_5);
  uStack_b0 = param_5;
  _objc_retain(param_6);
  uStack_a8 = param_6;
  _objc_retain(param_3);
  uStack_a0 = param_3;
  _objc_retain(param_7);
  uStack_98 = param_7;
  uStack_80 = param_8;
  _objc_retain(param_9);
  uStack_90 = param_9;
  uStack_74 = param_10;
  func_0x00010846f16c(uVar4,3,&PTR____CFConstantStringClassReference_110e1c6f8,uVar2,uVar1,param_3,0
                      ,PTR___dispatch_main_q_11034be20,&puStack_d0,*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar4);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1071b0a20; end: 1071b0ac7;  */

void FUN_1071b0a20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_2);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94220();
  _objc_release(puVar1);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31140();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071b0ac8; end: 1071b0da7; -[SCDiscoverStoriesDeepLinkHandler _handleStoryLookupSuccessResponseWithStory:feedType:sectionKey:identifier:compositeStoryId:cheetahStory:pushType:notificationId:isInApp:] */

void FUN_1071b0ac8(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined **param_8,
                  long param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  if (param_3 == (undefined **)0x0) {
    if (param_8 == (undefined **)0x0) {
      func_0x0001008fcbdc(param_9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be56380(param_1);
      _objc_release(param_9);
      puVar6 = PTR_PTR_1126afca8;
      ppuVar5 = &PTR____CFConstantStringClassReference_110e1c718;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c718,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237520(puVar6);
    }
    else {
      _CACurrentMediaTime();
      ppuVar5 = param_8;
      func_0x000107aff660(param_8,(long)(int)param_4,param_5,param_6,param_10,0xffffffffffffffff);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9e720(param_1);
    }
  }
  else {
    ppuVar5 = param_3;
    if (param_9 == 0x73) {
      func_0x000107aff608(param_3,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
    }
    func_0x0001008fcbdc(param_9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be56380(param_1);
    _objc_release(param_9);
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf82760();
    func_0x000107afdc20(ppuVar5,param_4,uVar7,uVar1,uVar3,*(undefined8 *)(param_1 + 0x78));
    _objc_release(uVar2);
    _CACurrentMediaTime();
    ppuVar4 = ppuVar5;
    func_0x000107aff660(ppuVar5,(long)(int)param_4,param_5,param_6,param_10,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9e720(param_1);
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar5);
  puVar6 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94220();
  _objc_release(puVar6);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1071b0da8; end: 1071b0dff; -[SCDiscoverStoriesDeepLinkHandler _sendActionModelToActionHandler:fromSourceView:] */

void FUN_1071b0da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c200640(uVar1,param_2,1);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x10),param_2,param_1,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071b0e00; end: 1071b0f7f; -[SCDiscoverStoriesDeepLinkHandler _logNFSOpenWithNotificationId:story:pushType:isInApp:isSubscribed:error:] */

void FUN_1071b0e00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c25a160(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c084c40();
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c25a160(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar1 = uVar2;
  func_0x00010c084ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (param_8 != -1) {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a52c0();
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a52e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071b0f80; end: 1071b104b; -[SCDiscoverStoriesDeepLinkHandler .cxx_destruct] */

void FUN_1071b0f80(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1071b104c; end: 1071b118b; -[SCFriendStoriesDeepLinkHandler initWithStoriesSyncNetworkRequester:friendStoriesDataCoordinator:actionHandler:discoverBlizzardLogger:storiesConfigProvider:] */

undefined1 *
FUN_1071b104c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f8b28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c2120;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1071b118c; end: 1071b13b3; -[SCFriendStoriesDeepLinkHandler handleDeeplink:additionalInfo:] */

void FUN_1071b118c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be6dfc0(param_1);
  uVar1 = param_3;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c08fa60();
  if (uVar2 != 0) {
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17ba0();
    _objc_release(puVar3);
    uVar4 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    uVar2 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar4);
    uVar5 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar3);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    uVar6 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar7 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar3);
    uVar5 = uVar6;
    if ((uVar7 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar6);
    func_0x00010bf1f3c0(uVar5);
    _objc_release(uVar5);
    func_0x00010be2cb40(param_1);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1071b13b4; end: 1071b163b; -[SCFriendStoriesDeepLinkHandler _handleNavigationToStoryId:notificationId:isInAppNotification:pushType:] */

void FUN_1071b13b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  ppuVar1 = &puStack_c0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_78,param_1);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  dVar7 = 1.60807493534087e-314;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1071b163c;
  puStack_a8 = &UNK_110924380;
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(param_3);
  uStack_a0 = param_3;
  _objc_retain(param_4);
  uStack_98 = param_4;
  uStack_80 = param_5;
  _objc_retain(param_6);
  uStack_90 = param_6;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17ba0();
  _objc_release(puVar2);
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d5030;
  func_0x00010bfbb440(PTR_PTR_1126d5030);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067e40();
  _objc_release(puVar2);
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c088c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (0 < lVar4) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar2);
    if (dVar7 < (double)lVar4) {
      (**(code **)((long)ppuVar1 + 0x10))(ppuVar1,1);
      goto LAB_1071b15a0;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6cc0();
  _objc_release(uVar5);
LAB_1071b15a0:
  _objc_release(uVar6);
  _objc_release(ppuVar1);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071b163c; end: 1071b16a3;  */

void FUN_1071b163c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94220();
  _objc_release(puVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddd4e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071b16a4; end: 1071b185f; -[SCFriendStoriesDeepLinkHandler _checkAvailableFriendStoryAndPlay:notificationId:isInAppNotification:pushType:] */

void FUN_1071b16a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x000107b011a4();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17ba0();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  uStack_60 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_6);
  func_0x00010bfa9a40(uVar3);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071b1860; end: 1071b1b23;  */

ulong FUN_1071b1860(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94220();
  _objc_release(puVar1);
  ppuVar7 = &PTR___NSConcreteGlobalBlock_110991290;
  uVar2 = param_2;
  func_0x0001006372a4(param_2,&PTR___NSConcreteGlobalBlock_110991290);
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  do {
    if (uVar3 == 0) {
      _objc_release(param_2);
LAB_1071b1a5c:
      uVar3 = param_1 + 0x40;
      _objc_loadWeakRetained(uVar3);
      func_0x00010be15240();
LAB_1071b1ad0:
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(param_2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
        ___stack_chk_fail();
        func_0x00010c07fc80(ppuVar7);
        return (ulong)((uint)ppuVar7 ^ 1);
      }
      return param_2;
    }
    uVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_2);
      }
      uVar9 = *(ulong *)(uVar10 * 8);
      uVar4 = uVar9;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0720c0();
      _objc_release(uVar4);
      if ((int)uVar5 != 0) {
        uVar10 = uVar9;
        func_0x00010c07fc80();
        uVar3 = param_2;
        if ((uVar10 & 1) != 0) goto LAB_1071b1ad0;
        _objc_retain(uVar9);
        _objc_release(param_2);
        if (uVar9 == 0) goto LAB_1071b1a5c;
        uVar3 = uVar9;
        func_0x00010bfddf20();
        lVar6 = param_1 + 0x40;
        _objc_loadWeakRetained();
        if ((uVar3 & 1) == 0) {
          if (lVar6 != 0) {
            func_0x00010be6dfc0(lVar6);
            param_1 = param_1 + 0x40;
            _objc_loadWeakRetained(param_1);
            func_0x00010be15240();
            _objc_release(param_1);
          }
        }
        else {
          func_0x00010be52f40(lVar6);
          _objc_release(lVar6);
          lVar6 = param_1 + 0x40;
          _objc_loadWeakRetained(lVar6);
          func_0x00010be746c0();
        }
        _objc_release(lVar6);
        uVar3 = uVar9;
        goto LAB_1071b1ad0;
      }
      uVar10 = uVar10 + 1;
    } while (uVar3 != uVar10);
    uVar3 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1071b1b24; end: 1071b1b3f;  */

uint FUN_1071b1b24(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c07fc80(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 1071b1b40; end: 1071b1ce7; -[SCFriendStoriesDeepLinkHandler _fetchUncachedFriendStoryWithStoryId:itemSource:triggeringSection:notificationId:isInAppNotification:pushType:] */

void FUN_1071b1b40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17ba0();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_copyWeak(auStack_88,auStack_68);
  uStack_70 = param_7;
  _objc_retain(param_8);
  uStack_80 = param_4;
  uStack_78 = param_5;
  func_0x00010bfab120(uVar2);
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_88);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1071b1ce8; end: 1071b1e63;  */

void FUN_1071b1ce8(long param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **in_x6;
  undefined8 in_x7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94220();
  _objc_release(puVar7);
  if (param_2 == 0) {
    lVar4 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar4);
    func_0x00010be6dfc0();
    _objc_release(lVar4);
    uVar2 = *(ulong *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    bVar1 = *(byte *)(param_1 + 0x58);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar9 = 1;
  }
  else {
    uVar2 = param_2;
    func_0x00010bfddf20();
    if ((uVar2 & 1) != 0) {
      lVar4 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar4);
      func_0x00010be52f40();
      _objc_release(lVar4);
      lVar4 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar4);
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_40 = param_2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      in_x6 = &PTR____CFConstantStringClassReference_110eb8b38;
      uVar8 = *(undefined8 *)(param_1 + 0x48);
      in_x7 = *(undefined8 *)(param_1 + 0x50);
      uVar2 = param_2;
      puVar7 = puVar3;
      func_0x00010be746c0(lVar4);
      _objc_release(puVar3);
      _objc_release(lVar4);
      goto LAB_1071b1e2c;
    }
    uVar2 = *(ulong *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    bVar1 = *(byte *)(param_1 + 0x58);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar9 = 2;
  }
  puVar7 = (undefined *)(ulong)bVar1;
  func_0x00010be52f60(uVar5);
LAB_1071b1e2c:
  uVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_1071b1e64;
  lStack_60 = param_1;
  uStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x000108f50588(0,uVar2,puVar7,uVar8,uVar9,in_x6,1,in_x7);
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x1071b1f18;
    puStack_78 = &UNK_110841f80;
    uStack_70 = uVar6;
    _objc_retain(uVar2);
    uStack_68 = uVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    _objc_release(uStack_68);
  }
  _objc_release(uVar2);
  return;
}



/* Entry: 1071b1e64; end: 1071b1f63; -[SCFriendStoriesDeepLinkHandler _playFriendStory:friendStories:itemSource:triggerItemId:actionIdentifier:triggeringSection:] */

void FUN_1071b1e64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000108f50588(0,param_3,param_4,param_5,param_6,param_7,1,param_8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x1071b1f18;
    puStack_38 = &UNK_110841f80;
    uStack_30 = param_1;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1071b1f64; end: 1071b1fbb; -[SCFriendStoriesDeepLinkHandler _sendActionModelToActionHandler:] */

void FUN_1071b1f64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c200640(uVar1,param_2,1);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x18),param_2,param_1,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071b1fbc; end: 1071b1fcb; -[SCFriendStoriesDeepLinkHandler _optInNotificationGrapheneIncrementStoryCorpus:metricType:] */

void FUN_1071b1fbc(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 == 0x10) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd2038;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110ead058;
  if (param_3 != 0x11) {
    ppuVar3 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e10178;
  if (param_3 != 0x1a) {
    ppuVar1 = ppuVar3;
  }
  ppuVar3 = ppuVar1;
  func_0x00010c0720c0();
  iVar2 = (int)ppuVar3;
  switch(param_4) {
  case 0:
    if (iVar2 == 0) {
      func_0x000107b0881c(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b08990(uVar4,1);
    }
    break;
  case 1:
    if (iVar2 == 0) {
      func_0x000107b08a08(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b08b7c(uVar4,1);
    }
    break;
  case 2:
    if (iVar2 == 0) {
      func_0x000107b08bf4(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b08d68(uVar4,1);
    }
    break;
  case 3:
    if (iVar2 == 0) {
      func_0x000107b07094(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b07208(uVar4,1);
    }
    break;
  case 4:
    if (iVar2 == 0) {
      func_0x000107b081e0(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b08354(uVar4,1);
    }
    break;
  case 5:
    if (iVar2 == 0) {
      func_0x000107b0806c(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b07ff4(uVar4,1);
    }
    break;
  case 6:
    if (iVar2 == 0) {
      func_0x000107b06ad0(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b06c44(uVar4,1);
    }
    break;
  case 7:
    if (iVar2 == 0) {
      func_0x000107b06cbc(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b06e30(uVar4,1);
    }
    break;
  case 8:
    if (iVar2 == 0) {
      func_0x000107b07658(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b077cc(uVar4,1);
    }
    break;
  case 9:
    if (iVar2 != 0) {
      func_0x000107b06494(uVar4,1);
      break;
    }
    goto code_r0x000107b01a10;
  case 10:
    if (iVar2 == 0) {
      func_0x000107b07844(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b079b8(uVar4,1);
    }
    break;
  case 0xb:
    if (iVar2 == 0) {
      func_0x000107b0650c(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b06680(uVar4,1);
    }
    break;
  case 0xc:
    if (iVar2 == 0) {
      func_0x000107b07c1c(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b07d90(uVar4,1);
    }
    break;
  case 0xd:
    if (iVar2 == 0) {
      func_0x000107b066f8(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b0686c(uVar4,1);
    }
    break;
  case 0xe:
    if (iVar2 != 0) {
      func_0x000107b062a8(uVar4,1);
      break;
    }
code_r0x000107b01a10:
    func_0x000107b06320(uVar4,ppuVar1,1);
    break;
  case 0xf:
    if (iVar2 == 0) {
      func_0x000107b068e4(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b06a58(uVar4,1);
    }
    break;
  case 0x10:
    if (iVar2 == 0) {
      func_0x000107b07a30(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b07ba4(uVar4,1);
    }
    break;
  case 0x11:
    if (iVar2 == 0) {
      func_0x000107b083cc(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b08540(uVar4,1);
    }
    break;
  case 0x12:
    if (iVar2 == 0) {
      func_0x000107b07e08(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b07f7c(uVar4,1);
    }
    break;
  case 0x13:
    if (iVar2 == 0) {
      func_0x000107b0746c(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b075e0(uVar4,1);
    }
    break;
  case 0x14:
    if (iVar2 == 0) {
      func_0x000107b06ea8(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b0701c(uVar4,1);
    }
    break;
  case 0x15:
    if (iVar2 == 0) {
      func_0x000107b07280(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b073f4(uVar4,1);
    }
    break;
  case 0x16:
    if (iVar2 == 0) {
      func_0x000107b08630(uVar4,ppuVar1,1);
    }
    else {
      func_0x000107b085b8(uVar4,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1071b1fcc; end: 1071b1fd3; -[SCFriendStoriesDeepLinkHandler _logFSOpenWithNotificationId:isInAppNotification:pushType:] */

void FUN_1071b1fcc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be52f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logFSOpenWithNotificationId_isI_112572578);
  return;
}



/* Entry: 1071b1fd4; end: 1071b20c7; -[SCFriendStoriesDeepLinkHandler _logFSOpenWithNotificationId:isInAppNotification:pushType:error:] */

void FUN_1071b1fd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_6 != -1) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a52c0();
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a52e0();
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071b20c8; end: 1071b2127; -[SCFriendStoriesDeepLinkHandler .cxx_destruct] */

void FUN_1071b20c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1071b2128; end: 1071b2807; -[SCOurStoryDeepLinkHandler initWithUserSession:presentingViewController:navigationDelegate:networkRequester:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:storiesMediaCoordinator:startChatDelegate:readReceiptCoordinator:cachedViewStateProvider:adConfigProvider:circumstanceEngine:snapchattersSynchronousDataFetcher:grapheneRegistry:snapchattersDataFetcher:externalLinkSendingService:safetyReportScopeExposer:operaSessionScopeExposer:operaSessionScopeServices:saveFriendStoryOperaPluginProvider:discoverPluginsCreator:deepLinkHandlerScopeDelegate:spotlightRepliesScopeExposer:bloopsReportScopeExposer:networkConnectivityMonitor:locationProvider:notificationOSSettingsRetriever:offPlatformShareServices:storiesConfigProvider:repliesViewCountManager:spotlightDataFetcher:spotlightShareSender:spotlightPlatformAnalyticsCreator:adRenderDataParser:discoverFeedEventsController:countryCodeProvider:pageLauncher:] */

undefined8 *
FUN_1071b2128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined4 param_25,undefined4 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  puStack_70 = PTR_PTR_1126f8b30;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_storeWeak(puVar1 + 3,param_5);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 8,param_10);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_23;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x19,param_24);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_40;
    _objc_release(uVar2);
  }
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1071b2808; end: 1071b29bb; -[SCOurStoryDeepLinkHandler handleDeepLinkURL:additionalInfo:isSingleSpotlightSnap:pageType:commentsDefaultTab:baseViewRef:storyPlayerModerationData:prependedCommentIds:hashtag:musicId:] */

void FUN_1071b2808(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,int param_5,
                  undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,long param_11,long param_12)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar2 = PTR_PTR_1126ae4e8;
  _objc_retain(param_4);
  func_0x00010c22b6a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17ba0();
  _objc_release(puVar2);
  *(char *)(param_1 + 0xc0) = (char)param_5;
  if (param_5 == 0) {
    param_7 = 0;
  }
  *(undefined4 *)(param_1 + 0xd8) = param_7;
  uVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x158) = 0;
    _objc_release(uVar5);
    lVar6 = param_11;
    func_0x00010c08fa60();
    if ((lVar6 != 0) || (lVar6 = param_12, func_0x00010c08fa60(), lVar6 != 0)) {
      func_0x00010be150c0(param_1);
    }
    func_0x00010be14940(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 1071b29bc; end: 1071b2c57; -[SCOurStoryDeepLinkHandler _fetchStoryForCompositeStoryId:pageType:baseViewRef:storyPlayerModerationData:prependedCommentIds:hasExplicitTrendingTopic:] */

void FUN_1071b29bc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar4 = param_3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    func_0x00010beb9440(param_1);
  }
  else {
    _objc_initWeak(auStack_80,param_1);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1071b2c58;
    puStack_b8 = &UNK_1109912e0;
    _objc_copyWeak(auStack_98,auStack_80);
    uStack_90 = param_4;
    _objc_retain(param_5);
    uStack_b0 = param_5;
    _objc_retain(param_6);
    uStack_a8 = param_6;
    _objc_retain(param_7);
    ppuVar5 = &puStack_d0;
    uStack_a0 = param_7;
    uStack_88 = param_8;
    _objc_retainBlock();
    puVar6 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17ba0();
    _objc_release(puVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_100 = puVar3;
    uStack_f8 = 0xc2000000;
    uStack_f0 = 0x1071b2d1c;
    puStack_e8 = &UNK_110991310;
    _objc_copyWeak(auStack_d8,auStack_80);
    _objc_retain(ppuVar5);
    ppuStack_e0 = ppuVar5;
    func_0x00010846f16c(uVar7,4,&PTR____CFConstantStringClassReference_110e68df8,uVar1,uVar2,param_3
                        ,0,PTR___dispatch_main_q_11034be20,&puStack_100,
                        *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x80),
                        *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x60),
                        *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x138));
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar7);
    _objc_release(ppuStack_e0);
    _objc_destroyWeak(auStack_d8);
    _objc_release(ppuVar5);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1071b2c58; end: 1071b2dd7;  */

void FUN_1071b2c58(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010bebb3c0(param_1);
  }
  else {
    func_0x00010be74a20(param_1);
  }
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94220();
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1071b2dd8; end: 1071b2fb7; -[SCOurStoryDeepLinkHandler _fetchTrendingTopicContinuationStoriesWithHashtag:musicId:] */

void FUN_1071b2dd8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_3;
  func_0x00010c08fa60();
  lVar1 = param_4;
  if (lVar3 != 0) {
    lVar1 = param_3;
  }
  _objc_retain(lVar1);
  lVar3 = param_3;
  func_0x00010c08fa60();
  uVar2 = 3;
  if (lVar3 != 0) {
    uVar2 = 1;
  }
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1071b2fb8;
    puStack_88 = &UNK_110991340;
    _objc_retain(uVar4);
    uStack_80 = uVar4;
    _objc_retain(lVar1);
    lStack_78 = lVar1;
    uStack_70 = uVar2;
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_a8,auStack_68);
    func_0x00010bfa7a20(uVar5);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_a8);
    _objc_release(lStack_78);
    _objc_release(uStack_80);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071b2fb8; end: 1071b2fd3;  */

/* WARNING: Removing unreachable block (ram,0x0001071d8c8c) */
/* WARNING: Removing unreachable block (ram,0x0001071d8cac) */

void FUN_1071b2fb8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(0);
  puVar3 = PTR_PTR_1126d50e8;
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  _objc_opt_new(puVar3);
  func_0x00010c2177e0();
  _objc_release(uVar2);
  func_0x00010c217980(puVar3);
  func_0x00010c20fca0(puVar3);
  puVar4 = PTR_PTR_1126c0e20;
  _objc_opt_new(PTR_PTR_1126c0e20);
  func_0x00010c21e620();
  _objc_release(uVar1);
  func_0x00010c184960(puVar4);
  ppuVar5 = &PTR__OBJC_CLASS___NSConstantArray_111181628;
  func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantArray_111181628);
  func_0x00010c1b7520(puVar4);
  _objc_release(ppuVar5);
  func_0x00010c1bf3e0(puVar4);
  func_0x00010c175f00(puVar4);
  puVar6 = PTR_PTR_1126c0f90;
  _objc_opt_new(PTR_PTR_1126c0f90);
  func_0x00010c21a2a0(puVar6);
  puVar7 = puVar6;
  func_0x00010c19b200(puVar6);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar6);
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar6);
  _objc_release(puVar7);
  func_0x00010c217840(puVar6);
  func_0x00010c1ec040(puVar6);
  func_0x00010c17cd40(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1071b2fd4; end: 1071b301b;  */

void FUN_1071b2fd4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be324e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071b301c; end: 1071b3217; -[SCOurStoryDeepLinkHandler _handleTrendingTopicContinuationResponse:] */

void FUN_1071b301c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfd9ca0();
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c0ece40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf32220();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126b0ef8;
      _objc_alloc(PTR_PTR_1126b0ef8);
      lVar1 = param_3;
      func_0x00010c135700(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03ef40(puVar4);
      _objc_release(puVar5);
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010c0ece40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf32220();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      uVar8 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x000108482d58(lVar2,puVar4,uVar7,0,uVar9,0,0,0,0,uVar8,*(undefined8 *)(param_1 + 0x80),
                          *(undefined8 *)(param_1 + 0x138));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010be5fb20(param_1);
      _objc_release(lVar3);
      _objc_release(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1071b3218; end: 1071b34eb; -[SCOurStoryDeepLinkHandler _mergeTrendingNotifTopicContinuationStories:] */

ulong FUN_1071b3218(long param_1,ulong param_2,ulong param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (*(undefined ***)(param_1 + 0x160) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x160);
  }
  _objc_retain(ppuVar1);
  uVar9 = *(undefined8 *)(param_1 + 0x168);
  _objc_retain(uVar9);
  puVar11 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  _objc_retain(ppuVar1);
  _objc_retain(uVar9);
  func_0x00010c1063a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  uVar3 = uVar2;
  func_0x00010bf529e0();
  if (uVar3 != 0) {
    if (*(long *)(param_1 + 0x170) == 0) {
      _objc_retain(uVar2);
      puVar11 = *(undefined **)(param_1 + 0x158);
      *(ulong *)(param_1 + 0x158) = uVar2;
    }
    else {
      puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      _objc_retain(uVar2);
      uVar3 = uVar2;
      func_0x00010bf52a60();
      lVar5 = lRam0000000000000000;
      while (uVar3 != 0) {
        uVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar5) {
            _objc_enumerationMutation(uVar2);
          }
          _objc_retain(puVar11);
          func_0x00010bde9560(param_1);
          _objc_release(puVar11);
          uVar10 = uVar10 + 1;
        } while (uVar3 != uVar10);
        uVar3 = uVar2;
        func_0x00010bf52a60();
      }
      _objc_release(uVar2);
      puVar4 = puVar11;
      func_0x00010bf529e0();
      if (puVar4 != (undefined *)0x0) {
        func_0x00010c066540(*(undefined8 *)(param_1 + 0x170));
        func_0x00010befa160(*(undefined8 *)(param_1 + 0x178));
        lVar5 = param_1 + 0x180;
        _objc_loadWeakRetained(lVar5);
        uVar6 = *(undefined8 *)(param_1 + 0x178);
        func_0x00010bf51e00();
        func_0x00010c2889e0(lVar5);
        _objc_release(uVar6);
        _objc_release(lVar5);
      }
    }
    _objc_release(puVar11);
  }
  _objc_release(uVar2);
  _objc_release(uVar9);
  _objc_release(ppuVar1);
  _objc_release(uVar9);
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010c0720c0();
  if ((uVar10 & 1) == 0) {
    lVar8 = *(long *)(param_3 + 0x28);
    func_0x00010c08fa60();
    if (lVar8 == 0) {
      uVar10 = 1;
    }
    else {
      uVar7 = param_2;
      func_0x0001071b35b4(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar7;
      func_0x00010c0720c0();
      uVar10 = (ulong)((uint)uVar10 ^ 1);
      _objc_release(uVar7);
    }
  }
  else {
    uVar10 = 0;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
  return uVar10;
}



/* Entry: 1071b34ec; end: 1071b364f;  */

uint FUN_1071b34ec(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010c08fa60();
    if (lVar4 == 0) {
      uVar6 = 1;
    }
    else {
      uVar3 = param_2;
      func_0x0001071b35b4(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0720c0();
      uVar6 = (uint)uVar5 ^ 1;
      _objc_release(uVar3);
    }
  }
  else {
    uVar6 = 0;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar6;
}



/* Entry: 1071b3650; end: 1071b3663;  */

void FUN_1071b3650(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
    return;
  }
  return;
}



/* Entry: 1071b3664; end: 1071b36cb; -[SCOurStoryDeepLinkHandler _showGenericError] */

void FUN_1071b3664(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc34d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc34d8,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010beb7ba0(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1071b36cc; end: 1071b373b; -[SCOurStoryDeepLinkHandler _showStoryExpiredError] */

void FUN_1071b36cc(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1c718;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1c718,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010beb7ba0(param_1);
  _objc_release(lVar2);
  func_0x00010bddf1c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}


