/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1022b761c; end: 1022b768b; -[MemoriesFriendsTabController shouldDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1022b761c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e7ae50);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c49e08();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(param_1);
  return lVar2;
}



/* Entry: 1022b768c; end: 1022b7693; -[MemoriesFriendsTabController isPrivate] */

undefined8 FUN_1022b768c(void)

{
  return 0;
}



/* Entry: 1022b7694; end: 1022b76ab; -[MemoriesFriendsTabController isViewLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1022b7694(long param_1)

{
  return *(long *)(param_1 + _DAT_112e7ae40) != 0;
}



/* Entry: 1022b76ac; end: 1022b7a0b;  */

/* WARNING: Possible PIC construction at 0x0001022b774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022b77a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022b7870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022b78c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022b7918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022b7940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022b7974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022b79c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022b7978) */
/* WARNING: Removing unreachable block (ram,0x0001022b7944) */
/* WARNING: Removing unreachable block (ram,0x0001022b791c) */
/* WARNING: Removing unreachable block (ram,0x0001022b78c8) */
/* WARNING: Removing unreachable block (ram,0x0001022b7874) */
/* WARNING: Removing unreachable block (ram,0x0001022b77a8) */
/* WARNING: Removing unreachable block (ram,0x0001022b7750) */
/* WARNING: Removing unreachable block (ram,0x0001022b79c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b76ac(long param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  if ((*(long *)(unaff_x20 + _DAT_112e7ae40) == 0) && (FUN_1022b7a0c(), param_1 != 0)) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c3ec60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1022b7a0c; end: 1022b7da7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b7a0c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [40];
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e7ae58);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126aa310;
      func_0x000107c610f8(PTR_PTR_1126aa310);
      func_0x000107c453e4();
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e7ae60);
      lVar8 = *(long *)(unaff_x20 + _DAT_112e7ae50);
      lVar1 = lVar8;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000107c49d44();
        func_0x000107c615e8(lVar1);
      }
      puVar4 = PTR_PTR_1126c3b58;
      func_0x000107c610f8(PTR_PTR_1126c3b58);
      func_0x000107c47784();
      func_0x000107c54838(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c52b44(puVar3);
      if (*(long *)(unaff_x20 + _DAT_112e7ae78) != 0) {
        func_0x000107c5a6a4(puVar3);
      }
      func_0x000107c54844(puVar3);
      if (*(long *)(unaff_x20 + _DAT_112e7aea0) != 0) {
        func_0x0001022ba2b0(auStack_78);
        func_0x0001022b8cb0(auStack_78,&puStack_a8);
        lVar5 = 0;
        FUN_1022b9d70();
        lVar1 = lVar5;
        func_0x000107c610f8();
        FUN_1022b8cc8(&puStack_a8,lVar1 + _DAT_112e7aed8);
        *(undefined8 *)(lVar1 + _DAT_112e7aee0) = uVar9;
        puVar4 = PTR_s_init_1125d9248;
        lStack_b8 = lVar1;
        lStack_b0 = lVar5;
        func_0x000107c61174(uVar9);
        plVar6 = &lStack_b8;
        func_0x000107c61154(plVar6,puVar4);
        func_0x000107c554d4(puVar3);
        func_0x000107c61170(plVar6);
        func_0x0001000834e4(&puStack_a8);
      }
      lVar1 = *(long *)(unaff_x20 + _DAT_112e7ae98);
      if (lVar1 != 0) {
        func_0x000107c61174();
        lVar5 = lVar1;
        func_0x000103a6b94c();
        func_0x000107c52b48(puVar3);
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(lVar5);
      }
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e7ae20);
      func_0x000107c5cb24(uVar9);
      func_0x000107c61180();
      func_0x000107c58dcc(puVar3);
      func_0x000107c61170(uVar9);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar8 != 0) {
        lVar1 = lVar8;
        func_0x000107c49e04();
        func_0x000107c615e8(lVar8);
        if ((int)lVar1 != 0) {
          uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e7adf0);
          func_0x000107c5cb24(uVar9);
          func_0x000107c61180();
          func_0x000107c59b98(puVar3);
          func_0x000107c61170(uVar9);
        }
      }
      puVar4 = &UNK_1104f0558;
      func_0x000107c613fc(&UNK_1104f0558,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,unaff_x20);
      uStack_88 = 0x1022b8c8c;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100f7177c;
      puStack_90 = &UNK_1104f0570;
      ppuVar7 = &puStack_a8;
      puStack_80 = puVar4;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c61574(puStack_80);
      func_0x000107c56d5c(puVar3);
      func_0x000107c60bd0(ppuVar7);
      FUN_1022b7f20(puVar3);
      puVar4 = PTR_PTR_1126aa318;
      func_0x000107c610f8(PTR_PTR_1126aa318);
      func_0x000107c61174(puVar3);
      func_0x000107c49520(puVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1022b7da8; end: 1022b7dcf; -[MemoriesFriendsTabController loadViewIfNeeded] */

void FUN_1022b7da8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1022b76ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022b7dd0; end: 1022b7e33;  */

void FUN_1022b7dd0(undefined8 param_1,long param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1022b7e34(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1022b7e34; end: 1022b7f1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b7e34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [16];
  
  func_0x0001022b8d14();
  puVar1 = PTR___sytN_11034f1b0 + 8;
  func_0x000100087bd4(0x1022b8da0,auStack_50,puVar1);
  puVar2 = &UNK_1104f0558;
  func_0x000107c613fc(&UNK_1104f0558,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1104f05f8;
  func_0x000107c613fc(&UNK_1104f05f8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = &UNK_10da855a8;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  uVar4 = 0x40;
  func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10da855b8,puVar3,puVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 1022b7f20; end: 1022b81df;  */

/* WARNING: Possible PIC construction at 0x0001022b7fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022b8080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022b8094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022b80d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022b81a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022b8098) */
/* WARNING: Removing unreachable block (ram,0x0001022b8084) */
/* WARNING: Removing unreachable block (ram,0x0001022b7fac) */
/* WARNING: Removing unreachable block (ram,0x0001022b7fb0) */
/* WARNING: Removing unreachable block (ram,0x0001022b7fc8) */
/* WARNING: Removing unreachable block (ram,0x0001022b8020) */
/* WARNING: Removing unreachable block (ram,0x0001022b80d8) */
/* WARNING: Removing unreachable block (ram,0x0001022b80dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b7f20(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = unaff_x20 + _DAT_112e7ae10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112e7ae70);
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112e7ae90);
    if (lVar1 == 0) {
      lVar1 = *(long *)(unaff_x20 + _DAT_112e7ae80);
      if (lVar1 != 0) {
        func_0x000107c3cfe0();
        func_0x000107c61180();
        func_0x000107c5c734();
        func_0x000107c61180();
        lVar3 = lVar1;
      }
    }
    else {
      puVar2 = PTR_PTR_1126c3b50;
      func_0x000107c610f8();
      func_0x000107c61174(lVar1);
      func_0x000107c47c74(puVar2,param_2,lVar1,lVar3);
      lVar3 = *(long *)(unaff_x20 + _DAT_112e7ae18);
      *(undefined **)(unaff_x20 + _DAT_112e7ae18) = puVar2;
      func_0x000107c61174();
    }
  }
  else {
    func_0x000107c4141c();
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c41414();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c5c734(lVar3);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1022b81e0; end: 1022b81ef; -[MemoriesFriendsTabController view] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b81e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e7ae40));
  return;
}



/* Entry: 1022b81f0; end: 1022b8217; -[MemoriesFriendsTabController allItems] */

void FUN_1022b81f0(void)

{
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sypN_11034f1a8 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022b8218; end: 1022b821f; -[MemoriesFriendsTabController prefersAllItemsAreNotIterated] */

undefined8 FUN_1022b8218(void)

{
  return 0;
}



/* Entry: 1022b8220; end: 1022b822f; -[MemoriesFriendsTabController allItemsCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1022b8220(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112e7ae28);
}



/* Entry: 1022b8230; end: 1022b82ab; -[MemoriesFriendsTabController handleSelectButtonTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1022b8230(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e7ae20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(param_1);
  func_0x000107c46ecc(puVar1,param_2,0);
  func_0x000107c4d664(uVar2,param_2,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  return 1;
}



/* Entry: 1022b82ac; end: 1022b8317;  */

void FUN_1022b82ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022b8318,uVar1,uVar2);
  return;
}



/* Entry: 1022b8318; end: 1022b83c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b8318(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x28,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112e7ae30);
    *(long *)(unaff_x22 + 0x20) = lVar1;
    func_0x000107c6157c(uVar2);
    func_0x000100087bd4(unaff_x22 + 0x40,FUN_1022b8ea8,unaff_x22 + 0x10,PTR___sSuN_11034e220);
    func_0x000107c61574(uVar2);
    FUN_1022b83c8(*(undefined8 *)(unaff_x22 + 0x40));
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001022b83c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022b83c8; end: 1022b844b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b83c8(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  if (param_1 != *(long *)(unaff_x20 + _DAT_112e7ae28)) {
    *(long *)(unaff_x20 + _DAT_112e7ae28) = param_1;
    lVar1 = _DAT_112e7ae08;
    func_0x000107c61428(unaff_x20 + _DAT_112e7ae08,auStack_48,0,0);
    lVar1 = unaff_x20 + lVar1;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c5c670();
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1022b844c; end: 1022b8487;  */

void FUN_1022b844c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001022b8484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1022b8488; end: 1022b84af; -[MemoriesFriendsTabController itemsInRect:] */

void FUN_1022b8488(void)

{
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sypN_11034f1a8 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022b84b0; end: 1022b84b7; -[MemoriesFriendsTabController indexPathForId:itemLevelIdentifier:] */

void FUN_1022b84b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1022b84b8; end: 1022b84bb; -[MemoriesFriendsTabController didTriggerCreateMashupForStory:] */

void FUN_1022b84b8(void)

{
  return;
}



/* Entry: 1022b84bc; end: 1022b84bf; -[MemoriesFriendsTabController didTriggerRefetchLatestFeaturedStories] */

void FUN_1022b84bc(void)

{
  return;
}



/* Entry: 1022b84c0; end: 1022b84c7; -[MemoriesFriendsTabController contentHeight] */

undefined8 FUN_1022b84c0(void)

{
  return 0;
}



/* Entry: 1022b84c8; end: 1022b8507; -[MemoriesFriendsTabController setScrollContentOffset:animated:completion:] */

void FUN_1022b84c8(void)

{
  long in_x3;
  
  func_0x000107c60bc4();
  if (in_x3 != 0) {
    (**(code **)(in_x3 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)(in_x3);
    return;
  }
  return;
}



/* Entry: 1022b8508; end: 1022b850f; -[MemoriesFriendsTabController scrollContentDistanceToTop] */

undefined8 FUN_1022b8508(void)

{
  return 0;
}



/* Entry: 1022b8510; end: 1022b8513; -[MemoriesFriendsTabController changeSelected:forGalleryItem:] */

void FUN_1022b8510(void)

{
  return;
}



/* Entry: 1022b8514; end: 1022b8533; -[MemoriesFriendsTabController selectedGalleryItems] */

void FUN_1022b8514(void)

{
  func_0x000107c610f8(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
  func_0x000107c453e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022b8534; end: 1022b8537; -[MemoriesFriendsTabController scrollToGalleryItem:animated:] */

void FUN_1022b8534(void)

{
  return;
}



/* Entry: 1022b8538; end: 1022b853f; -[MemoriesFriendsTabController scrollBarTopOffset] */

undefined8 FUN_1022b8538(void)

{
  return 0;
}



/* Entry: 1022b8540; end: 1022b8543; -[MemoriesFriendsTabController scrollToTop] */

void FUN_1022b8540(void)

{
  return;
}



/* Entry: 1022b8544; end: 1022b854b; -[MemoriesFriendsTabController isDragging] */

undefined8 FUN_1022b8544(void)

{
  return 0;
}



/* Entry: 1022b854c; end: 1022b8553; -[MemoriesFriendsTabController isTracking] */

undefined8 FUN_1022b854c(void)

{
  return 0;
}



/* Entry: 1022b8554; end: 1022b855b; -[MemoriesFriendsTabController isEditing] */

undefined8 FUN_1022b8554(void)

{
  return 0;
}



/* Entry: 1022b855c; end: 1022b855f; -[MemoriesFriendsTabController endEditing] */

void FUN_1022b855c(void)

{
  return;
}



/* Entry: 1022b8560; end: 1022b8567; -[MemoriesFriendsTabController isInLineSearchable] */

undefined8 FUN_1022b8560(void)

{
  return 0;
}



/* Entry: 1022b8568; end: 1022b856f; -[MemoriesFriendsTabController shouldAlignInitialScrollContentDistanceToTopOfOtherTabControllerToThisTabController] */

undefined8 FUN_1022b8568(void)

{
  return 1;
}



/* Entry: 1022b8570; end: 1022b8577; -[MemoriesFriendsTabController shouldAlignInitialScrollContentDistanceToTopOfThisTabControllerToOtherTabController] */

undefined8 FUN_1022b8570(void)

{
  return 1;
}



/* Entry: 1022b8578; end: 1022b857b; -[MemoriesFriendsTabController deeplinkToOperaWithDestinationInfo:] */

void FUN_1022b8578(void)

{
  return;
}



/* Entry: 1022b857c; end: 1022b857f; -[MemoriesFriendsTabController galleryViewWillAppear] */

void FUN_1022b857c(void)

{
  return;
}



/* Entry: 1022b8580; end: 1022b861f; -[MemoriesFriendsTabController galleryViewDidAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b8580(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e7adf0);
  func_0x000107c61428(param_1 + _DAT_112e7ade8,auStack_48,0,0);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(param_1);
  func_0x000107c45a48(puVar1);
  func_0x000107c4d664(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1022b8620; end: 1022b8693; -[MemoriesFriendsTabController galleryViewDidDisappear] */

/* WARNING: Possible PIC construction at 0x0001022b867c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022b8680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b8620(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e7adf0);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(param_1);
  func_0x000107c45a48(puVar1,param_2,0);
  func_0x000107c4d664(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022b8694; end: 1022b869b; -[MemoriesFriendsTabController pageViewName] */

undefined8 FUN_1022b8694(void)

{
  return 0x71;
}



/* Entry: 1022b869c; end: 1022b86fb; -[MemoriesFriendsTabController init] */

void FUN_1022b869c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesFriendsTab.MemoriesFriendsTabController",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022b86c8);
  (*pcVar1)();
}



/* Entry: 1022b86fc; end: 1022b8843; -[MemoriesFriendsTabController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1022b86fc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7ae50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7ae58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7ae60));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e7ae68));
  func_0x000107c61610(param_1 + _DAT_112e7ae10);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7ae70));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e7ae78));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7ae80));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e7ae88));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7ae90));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7ae98));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7aea0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7ae18));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7ae20));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7adf0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e7ae30));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7ae40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7ae48));
  param_1 = param_1 + _DAT_112e7ae08;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1022b8844; end: 1022b8867;  */

void FUN_1022b8844(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112e7aed0;
  plVar5 = (long *)&UNK_10da85590;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1022b8c4c(0,0x112d6bdf0,&PTR_PTR_1126c6628);
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



/* Entry: 1022b8868; end: 1022b88df;  */

void FUN_1022b8868(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1022b8c4c(0,param_1,param_2);
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



/* Entry: 1022b88e0; end: 1022b8c07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1022b88e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_88 [24];
  
  func_0x000107c614f0();
  lVar3 = _DAT_112e7ae10;
  func_0x000107c61614(unaff_x20 + _DAT_112e7ae10,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae18) = 0;
  lVar2 = _DAT_112e7ae20;
  puVar4 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112e7adf0;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  puVar5 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae28) = 0;
  lVar2 = _DAT_112e7ae30;
  uVar6 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae48) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e7add0);
  uVar6 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar9 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  uVar8 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  puVar1[1] = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  *puVar1 = uVar6;
  puVar1[3] = uVar9;
  puVar1[2] = uVar8;
  *(undefined8 *)(unaff_x20 + _DAT_112e7add8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e7ade0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e7ade8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e7adf8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e7ae00) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112e7ae08,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae50) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae58) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae60) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae68) = param_5;
  func_0x000107c61604(unaff_x20 + lVar3,param_6);
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae70) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae78) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae80) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae88) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae90) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112e7ae98) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112e7aea0) = param_13;
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  puVar7 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar7,puVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  lVar2 = _DAT_112e7ae08;
  func_0x000107c61428(puVar7 + _DAT_112e7ae08,auStack_88,1,0);
  func_0x000107c61604(puVar7 + lVar2,param_1);
  func_0x000107c615e8(param_1);
  return puVar7;
}



/* Entry: 1022b8c08; end: 1022b8c2b;  */

undefined8 FUN_1022b8c08(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1022b8c2c; end: 1022b8c4b;  */

void FUN_1022b8c2c(void)

{
  func_0x000107c61168(&PTR_PTR_112832a78);
  return;
}



/* Entry: 1022b8c4c; end: 1022b8c8b;  */

void FUN_1022b8c4c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1022b8c8c; end: 1022b8cc7;  */

void FUN_1022b8c8c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1022b7e34(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1022b8cc8; end: 1022b8d0b;  */

long FUN_1022b8cc8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1022b8d0c; end: 1022b8db3;  */

void FUN_1022b8d0c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakLoadStrong_11034f590)(unaff_x20 + 0x10);
  return;
}



/* Entry: 1022b8db4; end: 1022b8e37;  */

void FUN_1022b8db4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1022b8dfc;
  plVar3[9] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[10] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022b8318,lVar1,lVar2);
  return;
}



/* Entry: 1022b8e38; end: 1022b8ea7;  */

void FUN_1022b8e38(undefined8 param_1)

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
  plVar3[1] = 0x1022b8ed8;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1022b8ea8; end: 1022b8ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b8ea8(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e7ae38);
  return;
}



/* Entry: 1022b8ec8; end: 1022b8ecb; -[MemoriesFriendsTabController galleryItemIdToSnapsMap] */

void FUN_1022b8ec8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1022b8ecc; end: 1022b8ecf; -[MemoriesFriendsTabController collectionView] */

void FUN_1022b8ecc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1022b8ed0; end: 1022b8ed3; -[MemoriesFriendsTabController galleryItemIdToPHAssetsMap] */

void FUN_1022b8ed0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1022b8ed4; end: 1022b8edb; -[MemoriesFriendsTabController itemIdsToExclude] */

void FUN_1022b8ed4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1022b8edc; end: 1022b9087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1022b8edc(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  FUN_1022b8cc8(param_1,unaff_x20 + _DAT_112e7aed8);
  *(undefined8 *)(unaff_x20 + _DAT_112e7aee0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 1022b9088; end: 1022b909f;  */

void FUN_1022b9088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022b90a0,0,0);
  return;
}



/* Entry: 1022b90a0; end: 1022b915f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b90a0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x50) = lVar6;
  if (lVar6 != 0) {
    lVar6 = lVar6 + _DAT_112e7aed8;
    uVar2 = *(undefined8 *)(lVar6 + 0x18);
    lVar3 = *(long *)(lVar6 + 0x20);
    func_0x0001000a8868(lVar6,uVar2);
    piVar5 = *(int **)(lVar3 + 8);
    iVar1 = *piVar5;
    plVar4 = (long *)(ulong)(uint)piVar5[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1022b9160;
                    /* WARNING: Could not recover jumptable at 0x0001022b9144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar5))(uVar2,lVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001022b915c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022b9160; end: 1022b91af;  */

void FUN_1022b9160(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x60) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022b91b0,0,0);
  return;
}



/* Entry: 1022b91b0; end: 1022b928b;  */

void FUN_1022b91b0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x28,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x68) = lVar4;
  lVar1 = *(long *)(unaff_x22 + 0x60);
  if (lVar4 == 0) {
    func_0x000107c6142c();
  }
  else {
    if (*(long *)(lVar1 + 0x10) != 0) {
      FUN_1022b94c8();
      *(long *)(unaff_x22 + 0x70) = lVar1;
      uVar2 = 0;
      func_0x000107c5fcec();
      uVar3 = uVar2;
      func_0x000107c5fce8();
      *(undefined8 *)(unaff_x22 + 0x78) = uVar3;
      func_0x000100eea164();
      func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_1022b928c,uVar2,uVar3);
      return;
    }
    func_0x000107c6142c();
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x0001022b9288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022b928c; end: 1022b93a3;  */

void FUN_1022b928c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x22;
  undefined8 *puVar6;
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar3 = *(long *)(lVar3 + 0x10);
  lVar5 = *(long *)(unaff_x22 + 0x70);
  if (lVar3 == 0) {
    func_0x000107c6142c(lVar5);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    FUN_1022ba06c(0,lVar3,0);
    puVar6 = (undefined8 *)(lVar5 + 0x28);
    do {
      uVar2 = puVar6[-1];
      func_0x000105f6127c(uVar2,*puVar6,0);
      func_0x000107c61180();
      uVar1 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_1022ba06c(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      puVar6 = puVar6 + 2;
      *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar4 + uVar1 * 8 + 0x20) = uVar2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x70));
  }
  *(undefined **)(unaff_x22 + 0x80) = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022b93a4,0,0);
  return;
}



/* Entry: 1022b93a4; end: 1022b9427;  */

void FUN_1022b93a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x60));
  uVar2 = 0;
  func_0x0001022ba088(0);
  uVar3 = uVar4;
  func_0x000107c5fc48(uVar4,uVar2);
  func_0x000107c6142c(uVar4);
  func_0x000107c4d664(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001022b9424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022b9428; end: 1022b948b;  */

void FUN_1022b9428(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1022b948c;
  plVar3[8] = lVar1;
  plVar3[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022b90a0,0,0);
  return;
}



/* Entry: 1022b948c; end: 1022b94c7;  */

void FUN_1022b948c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001022b94c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1022b94c8; end: 1022b9c8f;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1022b94c8(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puStack_70;
  
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e7aee0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101bb0f7c();
  lVar20 = param_1;
  func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
  puVar12 = puVar2;
  func_0x000107c430d0();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  puVar17 = (undefined *)0x112d511e8;
  func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
  puVar6 = puVar12;
  puVar7 = puVar17;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar12);
  if ((ulong)puVar6 >> 0x3e == 0) {
    puVar12 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar12 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      puVar12 = puVar6;
    }
    func_0x000107c60480();
  }
  if (puVar12 != (undefined *)0x0) {
    uVar18 = 0;
    do {
      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1022b97a4);
          (*pcVar1)();
        }
        uVar10 = *(ulong *)(puVar6 + uVar18 * 8 + 0x20);
        func_0x000107c615f0(uVar10);
        puVar8 = puVar7;
      }
      else {
        uVar10 = uVar18;
        puVar8 = puVar6;
        FUN_1022b9ec0(uVar18,puVar6,&PTR_DAT_11269d170,0xee007972746e4579);
      }
      if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1022b979c);
        (*pcVar1)();
      }
      puVar16 = (undefined *)(uVar18 + 1);
      uVar13 = uVar10;
      func_0x000107c42950();
      func_0x000107c61180();
      if (uVar13 == 0) {
        func_0x000107c615e8(uVar10);
        puVar7 = puVar8;
      }
      else {
        uVar4 = uVar13;
        func_0x000107c5faec();
        func_0x000107c61170(uVar13);
        func_0x000107c615f0(uVar10);
        puVar5 = puVar3;
        func_0x000107c61558();
        uVar13 = uVar4;
        puVar21 = puVar8;
        func_0x000100029284();
        uVar11 = (ulong)~(uint)puVar21 & 1;
        lVar20 = *(long *)(puVar3 + 0x10) + uVar11;
        if (SCARRY8(*(long *)(puVar3 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1022b97a0);
          (*pcVar1)();
        }
        if (*(long *)(puVar3 + 0x18) < lVar20) {
          FUN_101b9c7c0(lVar20,puVar5);
          uVar13 = uVar4;
          puVar7 = puVar8;
          func_0x000100029284();
          if (((uint)puVar21 & 1) != ((uint)puVar7 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1022b9c90);
            (*pcVar1)();
          }
        }
        else {
          puVar7 = puVar21;
          if (((ulong)puVar5 & 1) == 0) {
            func_0x000101b9c4f0();
          }
        }
        if (((ulong)puVar21 & 1) == 0) {
          *(ulong *)(puVar3 + (uVar13 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar3 + (uVar13 >> 6) * 8 + 0x40) | 1L << (uVar13 & 0x3f);
          puVar19 = (ulong *)(*(long *)(puVar3 + 0x30) + uVar13 * 0x10);
          *puVar19 = uVar4;
          puVar19[1] = (ulong)puVar8;
          *(ulong *)(*(long *)(puVar3 + 0x38) + uVar13 * 8) = uVar10;
          func_0x000107c615e8(uVar10);
          if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1022b97a8);
            (*pcVar1)();
          }
          *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
        }
        else {
          uVar14 = *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar13 * 8);
          *(ulong *)(*(long *)(puVar3 + 0x38) + uVar13 * 8) = uVar10;
          func_0x000107c615e8(uVar10);
          func_0x000107c6142c(puVar8);
          func_0x000107c615e8(uVar14);
        }
      }
      uVar18 = uVar18 + 1;
    } while (puVar16 != puVar12);
  }
  func_0x000107c6142c(puVar6);
  lVar20 = *(long *)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar20 != 0) {
    puVar19 = (ulong *)(param_1 + 0x28);
    do {
      uVar18 = *puVar19;
      if (*(long *)(puVar3 + 0x10) != 0) {
        uVar13 = puVar19[-1];
        func_0x000107c61434(uVar18);
        func_0x000107c61434(puVar3);
        uVar10 = uVar18;
        func_0x000100029284();
        if ((uVar10 & 1) == 0) {
          func_0x000107c6142c(uVar18);
          puVar12 = puVar3;
LAB_1022b995c:
          func_0x000107c6142c(puVar12);
        }
        else {
          uVar14 = *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar13 * 8);
          func_0x000107c615f0(uVar14);
          func_0x000107c6142c(puVar3);
          func_0x000107c6142c(uVar18);
          puVar6 = puVar2;
          func_0x000107c430f8();
          func_0x000107c61180();
          if (puVar6 != (undefined *)0x0) {
            uVar15 = 0x112d508c0;
            func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
            puVar12 = puVar6;
            func_0x000107c5fc54(puVar6,uVar15);
            func_0x000107c61170(puVar6);
            if ((ulong)puVar12 >> 0x3e == 0) {
              puVar6 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar6 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar12) {
                puVar6 = puVar12;
              }
              func_0x000107c60480();
            }
            if (puVar6 == (undefined *)0x0) {
              func_0x000107c615e8(uVar14);
              goto LAB_1022b995c;
            }
            if (((ulong)puVar12 & 0xc000000000000001) == 0) {
              if (*(long *)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1022b9c14);
                (*pcVar1)();
              }
              uVar15 = *(undefined8 *)(puVar12 + 0x20);
              func_0x000107c615f0(uVar15);
            }
            else {
              uVar15 = 0;
              FUN_1022b9ec0(0,puVar12,&PTR_DAT_11269d160,0xed000070616e5379);
            }
            func_0x000107c6142c(puVar12);
            func_0x000107c615f0(uVar15);
            puVar12 = puVar7;
            func_0x000107c61550();
            if ((((int)puVar12 == 0) || ((long)puVar7 < 0)) ||
               (puVar12 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar7 >> 0x3e == 0) {
                puVar6 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar6 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar7) {
                  puVar6 = puVar7;
                }
                func_0x000107c60480(puVar6);
              }
              puVar12 = (undefined *)0x0;
              FUN_1022a8674(0,puVar6 + 1,1,puVar7);
            }
            uVar10 = (ulong)puVar12 & 0xffffffffffffff8;
            uVar18 = *(ulong *)(uVar10 + 0x10);
            puVar7 = puVar12;
            if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar18) {
              puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
              FUN_1022a8674(puVar7,uVar18 + 1,1,puVar12);
              uVar10 = (ulong)puVar7 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar10 + 0x10) = uVar18 + 1;
            *(undefined8 *)(uVar10 + uVar18 * 8 + 0x20) = uVar15;
            func_0x000107c615e8(uVar15);
          }
          func_0x000107c615e8(uVar14);
        }
      }
      lVar20 = lVar20 + -1;
      puVar19 = puVar19 + 2;
    } while (lVar20 != 0);
  }
  uVar14 = 0x112d508c0;
  func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
  puVar12 = puVar7;
  func_0x000107c5fc48(puVar7,uVar14);
  puVar6 = puVar2;
  func_0x000107c42f94();
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  puVar8 = puVar6;
  puVar12 = PTR___sSSN_11034da80;
  func_0x000107c5f9e8(puVar6,PTR___sSSN_11034da80,puVar17,PTR___sSSSHsWP_11034da90);
  func_0x000107c61170(puVar6);
  if ((ulong)puVar7 >> 0x3e == 0) {
    puVar17 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar17 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar17 = puVar7;
    }
    func_0x000107c60480();
  }
  puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar17 != (undefined *)0x0) {
    if ((long)puVar17 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022b9c80);
      (*pcVar1)();
    }
    puVar6 = (undefined *)0x0;
    do {
      if (((ulong)puVar7 & 0xc000000000000001) == 0) {
        puVar16 = *(undefined **)(puVar7 + (long)puVar6 * 8 + 0x20);
        func_0x000107c615f0(puVar16);
        puVar5 = puVar12;
      }
      else {
        puVar16 = puVar6;
        puVar5 = puVar7;
        FUN_1022b9ec0(puVar6,puVar7,&PTR_DAT_11269d160,0xed000070616e5379);
      }
      puVar21 = puVar16;
      func_0x000107c5b2d0();
      func_0x000107c61180();
      puVar12 = puVar5;
      if (puVar21 != (undefined *)0x0) {
        puVar9 = puVar21;
        func_0x000107c5faec();
        puVar12 = puVar5;
        func_0x000107c61170(puVar21);
        if (*(long *)(puVar8 + 0x10) != 0) {
          func_0x000107c61434(puVar8);
          puVar12 = puVar5;
          func_0x000100029284();
          if (((ulong)puVar12 & 1) != 0) {
            puVar21 = *(undefined **)(*(long *)(puVar8 + 0x38) + (long)puVar9 * 8);
            func_0x000107c615f0(puVar21);
            func_0x000107c6142c(puVar8);
            func_0x000107c6142c(puVar5);
            puVar5 = puVar21;
            func_0x000107c4a274();
            if (((ulong)puVar5 & 1) == 0) {
              func_0x000107c615f0(puVar21);
              func_0x000107c615f0(puVar16);
              puVar5 = puStack_70;
              func_0x000107c61558();
              if (((ulong)puVar5 & 1) == 0) {
                puVar12 = (undefined *)(*(long *)(puStack_70 + 0x10) + 1);
                puStack_70 = (undefined *)0x0;
                FUN_1022b9d90(0,puVar12,1);
              }
              uVar18 = *(ulong *)(puStack_70 + 0x10);
              puVar5 = (undefined *)(uVar18 + 1);
              if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar18) {
                puStack_70 = (undefined *)(ulong)(1 < *(ulong *)(puStack_70 + 0x18));
                puVar12 = puVar5;
                FUN_1022b9d90(puStack_70,puVar5,1);
              }
              *(undefined **)(puStack_70 + 0x10) = puVar5;
              *(undefined **)(puStack_70 + uVar18 * 0x10 + 0x20) = puVar21;
              *(undefined **)(puStack_70 + uVar18 * 0x10 + 0x28) = puVar16;
              func_0x000107c615e8(puVar16);
              puVar16 = puVar21;
            }
            else {
              func_0x000107c615e8(puVar21);
            }
            goto LAB_1022b9aa0;
          }
          func_0x000107c6142c(puVar5);
          puVar5 = puVar8;
        }
        func_0x000107c6142c(puVar5);
      }
LAB_1022b9aa0:
      puVar6 = puVar6 + 1;
      func_0x000107c615e8(puVar16);
    } while (puVar17 != puVar6);
  }
  func_0x000107c6142c(puVar8);
  func_0x000107c615e8(puVar2);
  func_0x000107c6142c(puVar3);
  func_0x000107c6142c(puVar7);
  return puStack_70;
}



/* Entry: 1022b9c90; end: 1022b9cc3; -[MemoriesFriendsTabPreviewStore getPreviewMemories] */

void FUN_1022b9c90(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001022b8f5c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1022b9cc4; end: 1022b9ccb; -[MemoriesFriendsTabPreviewStore shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1022b9cc4(void)

{
  return 1;
}



/* Entry: 1022b9ccc; end: 1022b9cd7; -[MemoriesFriendsTabPreviewStore pushToValdiMarshaller:] */

undefined8 FUN_1022b9ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af97398(param_3,param_1);
  func_0x00010af97388();
  func_0x00010af97324();
  func_0x00010af9734c();
  return param_3;
}



/* Entry: 1022b9cd8; end: 1022b9d37; -[MemoriesFriendsTabPreviewStore init] */

void FUN_1022b9cd8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesFriendsTab.MemoriesFriendsTabPreviewStore",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022b9d04);
  (*pcVar1)();
}



/* Entry: 1022b9d38; end: 1022b9d6f; -[MemoriesFriendsTabPreviewStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022b9d38(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112e7aed8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7aee0));
  return;
}



/* Entry: 1022b9d70; end: 1022b9d8f;  */

void FUN_1022b9d70(void)

{
  func_0x000107c61168(&PTR_PTR_112832c08);
  return;
}



/* Entry: 1022b9d90; end: 1022b9ebf;  */

undefined * FUN_1022b9d90(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1022b9ec0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112e7af10;
    func_0x0001000285a8(0x112e7af10,&UNK_10da855f8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e7af18;
    func_0x0001000285a8(0x112e7af18,&UNK_10da85600);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1022b9ec0; end: 1022ba06b;  */

ulong FUN_1022b9ec0(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1022b9fa4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1022b9fa8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar4 = param_1;
    func_0x000107c61494();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x72656c6c61474353,param_4);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1022ba06c);
  (*pcVar2)();
}



/* Entry: 1022ba06c; end: 1022ba0cb;  */

void FUN_1022ba06c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1022ba0cc();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1022ba0cc; end: 1022ba1ef;  */

undefined * FUN_1022ba0cc(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1022ba1f0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_1022b8844();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x0001022ba088(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1022ba1f0; end: 1022ba25b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ba1f0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x0001002aeb08();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e7af28) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1022ba25c; end: 1022ba263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ba25c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x0001002aeb08();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e7af28) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1022ba264; end: 1022ba2d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ba264(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e7af28) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022ba2d8; end: 1022ba337; -[MemoriesFaceTagPreviewServices init] */

void FUN_1022ba2d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesFaceTagPreviewAPI.MemoriesFaceTagPreviewServices",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022ba304);
  (*pcVar1)();
}



/* Entry: 1022ba338; end: 1022ba357; -[MemoriesFaceTagPreviewServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ba338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e7af28));
  return;
}



/* Entry: 1022ba358; end: 1022ba383;  */

void FUN_1022ba358(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022ba384; end: 1022ba483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ba384(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112e7af58;
  puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e7af60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e7af68) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022ba484; end: 1022ba51f; -[_TtC31FaceTaggingBackfillServicesImpl19BackfillTriggerImpl initWithBackupServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ba484(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112e7af58;
  puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  *(undefined8 *)(param_1 + _DAT_112e7af60) = 0;
  *(undefined8 *)(param_1 + _DAT_112e7af68) = param_3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022ba520; end: 1022ba527; -[_TtC31FaceTaggingBackfillServicesImpl19BackfillTriggerImpl shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1022ba520(void)

{
  return 1;
}



/* Entry: 1022ba528; end: 1022ba533; -[_TtC31FaceTaggingBackfillServicesImpl19BackfillTriggerImpl pushToValdiMarshaller:] */

undefined8 FUN_1022ba528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af97398(param_3,param_1);
  func_0x00010af97388();
  func_0x00010af97324();
  func_0x00010af9734c();
  return param_3;
}



/* Entry: 1022ba534; end: 1022ba733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1022ba534(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  puVar3 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e7af58);
  func_0x000107c4b940(uVar10);
  lVar2 = _DAT_112e7af60;
  lVar11 = *(long *)(unaff_x20 + _DAT_112e7af60);
  lVar4 = lVar11;
  if (lVar11 == 0) {
    lVar4 = 0;
    FUN_1022ba734();
    func_0x000107c613fc();
    *(undefined **)(lVar4 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined8 *)(lVar4 + 0x18) = 0;
  }
  *(long *)(unaff_x20 + lVar2) = lVar4;
  func_0x000107c61428(lVar4 + 0x10,&puStack_80,0x21,0);
  func_0x000107c6157c(lVar4);
  func_0x000107c61174();
  FUN_1022bb280();
  uVar8 = *(ulong *)(lVar4 + 0x10);
  uVar9 = uVar8 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar9 + 0x10);
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    FUN_1022bb318(uVar8,uVar1 + 1,1);
    uVar9 = uVar8 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar9 + 0x10) = uVar1 + 1;
  *(undefined **)(uVar9 + uVar1 * 8 + 0x20) = puVar3;
  *(ulong *)(lVar4 + 0x10) = uVar8;
  func_0x000107c614a8(&puStack_80);
  func_0x000107c5d278(uVar10);
  puVar5 = &UNK_1104f07b8;
  func_0x000107c613fc(&UNK_1104f07b8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_1104f07e0;
  func_0x000107c613fc(&UNK_1104f07e0,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined **)(puVar6 + 0x18) = puVar3;
  *(long *)(puVar6 + 0x20) = lVar4;
  pcStack_60 = FUN_1022bb2f0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1104f07f8;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  puVar5 = puStack_58;
  func_0x000107c6157c(lVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c53164(puVar3);
  func_0x000107c60bd0(ppuVar7);
  if (lVar11 == 0) {
    func_0x0001022ba92c(lVar4);
  }
  func_0x000107c61574(lVar4);
  return puVar3;
}



/* Entry: 1022ba734; end: 1022ba753;  */

void FUN_1022ba734(void)

{
  func_0x000107c61168(&PTR_PTR_112e7afd8);
  return;
}



/* Entry: 1022ba754; end: 1022ba7c3;  */

void FUN_1022ba754(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1022ba7c4(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1022ba7c4; end: 1022baad3;  */

/* WARNING: Removing unreachable block (ram,0x0001022ba920) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ba7c4(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e7af58);
  func_0x000107c4b940(uVar6);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0x21,0);
  func_0x000107c61174(param_1);
  lVar2 = param_2 + 0x10;
  FUN_1022bbaf0(lVar2,param_1);
  func_0x000107c61170(param_1);
  uVar5 = *(ulong *)(param_2 + 0x10);
  if (uVar5 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar4 = uVar5;
    }
    func_0x000107c60480();
  }
  if ((long)uVar4 < lVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1022ba8dc);
    (*pcVar1)();
  }
  FUN_1022bbe24(lVar2);
  func_0x000107c614a8(auStack_58);
  lVar2 = _DAT_112e7af60;
  if (*(long *)(unaff_x20 + _DAT_112e7af60) != 0 && param_2 == *(long *)(unaff_x20 + _DAT_112e7af60)
     ) {
    uVar5 = *(ulong *)(param_2 + 0x10);
    if (uVar5 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar4 = uVar5;
      }
      func_0x000107c60480();
    }
    if (uVar4 == 0) {
      uVar7 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 0x18) = 0;
      uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
      *(undefined8 *)(unaff_x20 + lVar2) = 0;
      func_0x000107c61574(uVar3);
      func_0x000107c5d278(uVar6);
      func_0x000107c3f474(uVar7);
      func_0x000107c61170(uVar7);
      return;
    }
  }
  func_0x000107c5d278(uVar6);
  return;
}



/* Entry: 1022baad4; end: 1022bab07; -[_TtC31FaceTaggingBackfillServicesImpl19BackfillTriggerImpl triggerBackFillImmediateJobViewAllFaces] */

void FUN_1022baad4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1022ba534();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1022bab08; end: 1022baca7;  */

/* WARNING: Possible PIC construction at 0x0001022babb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022babb8) */
/* WARNING: Removing unreachable block (ram,0x0001022bac64) */
/* WARNING: Removing unreachable block (ram,0x0001022bac6c) */
/* WARNING: Removing unreachable block (ram,0x0001022babc0) */
/* WARNING: Removing unreachable block (ram,0x0001022babcc) */
/* WARNING: Removing unreachable block (ram,0x0001022babdc) */
/* WARNING: Removing unreachable block (ram,0x0001022bac4c) */
/* WARNING: Removing unreachable block (ram,0x0001022babe0) */
/* WARNING: Removing unreachable block (ram,0x0001022bac60) */
/* WARNING: Removing unreachable block (ram,0x0001022babec) */
/* WARNING: Removing unreachable block (ram,0x0001022babf8) */
/* WARNING: Removing unreachable block (ram,0x0001022bac5c) */
/* WARNING: Removing unreachable block (ram,0x0001022bac04) */
/* WARNING: Removing unreachable block (ram,0x0001022baca4) */
/* WARNING: Removing unreachable block (ram,0x0001022bac1c) */
/* WARNING: Removing unreachable block (ram,0x0001022bac48) */
/* WARNING: Removing unreachable block (ram,0x0001022bac7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bab08(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [24];
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e7af58);
  func_0x000107c4b940(uVar3);
  lVar1 = _DAT_112e7af60;
  if (*(long *)(unaff_x20 + _DAT_112e7af60) != 0 && param_1 == *(long *)(unaff_x20 + _DAT_112e7af60)
     ) {
    func_0x000107c61428(param_1 + 0x10,auStack_78,1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined8 *)(param_1 + 0x18) = 0;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    func_0x000107c61574(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 1022baca8; end: 1022bad27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1022baca8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e7af58);
  func_0x000107c4b940(uVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_112e7af60);
  if (lVar2 != 0 && param_2 == lVar2) {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = param_1;
    func_0x000107c61170(uVar1);
    func_0x000107c61174(param_1);
  }
  func_0x000107c5d278(uVar3);
  return lVar2 != 0 && param_2 == lVar2;
}



/* Entry: 1022bad28; end: 1022bae33;  */

undefined8 FUN_1022bad28(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126a9488;
  func_0x000107c610f8(PTR_PTR_1126a9488);
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0807d0);
  func_0x000107c46acc(puVar1);
  func_0x000107c61170(uVar2);
  uVar2 = 0x312d;
  func_0x000107c5fadc(0x312d,0xe200000000000000);
  func_0x000107c53474(puVar1);
  func_0x000107c61170(uVar2);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c54018(puVar1);
  func_0x000107c61170(puVar3);
  func_0x0001000285a8(0x112e7b050,&UNK_10da85710);
  func_0x000107c3d7dc(param_1);
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000103edf20c();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 1022bae34; end: 1022bae5b;  */

void FUN_1022bae34(undefined8 *param_1)

{
  FUN_1022bad28(*param_1);
  return;
}



/* Entry: 1022bae5c; end: 1022bb093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022bae5c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112e7af58;
  if (param_2 != 0) {
    func_0x000107c4b940(*(undefined8 *)(param_2 + _DAT_112e7af58));
    lVar6 = *(long *)(param_2 + _DAT_112e7af60);
    func_0x000107c5d278(*(undefined8 *)(param_2 + lVar1));
    if (lVar6 == 0 || param_3 != lVar6) {
      func_0x000107c61170(param_2);
    }
    else {
      uVar5 = *(undefined8 *)(*(long *)(param_2 + _DAT_112e7af68) + _DAT_112fd9138);
      func_0x000107c6157c(uVar5);
      func_0x0001000d224c(&uStack_60);
      func_0x000107c61574(uVar5);
      puVar2 = &UNK_1104f0880;
      func_0x000107c613fc(&UNK_1104f0880,0x20,7);
      *(long *)(puVar2 + 0x10) = param_2;
      *(long *)(puVar2 + 0x18) = param_3;
      puVar3 = &UNK_1104f08a8;
      func_0x000107c613fc(&UNK_1104f08a8,0x20,7);
      *(code **)(puVar3 + 0x10) = FUN_1022bb810;
      *(undefined **)(puVar3 + 0x18) = puVar2;
      uVar5 = 0;
      func_0x0001022bb844(0,0x112e28770,&PTR_PTR_1126a9478);
      func_0x000107c61174();
      func_0x000107c6157c(param_3);
      uVar4 = 0;
      func_0x0001048898b8(0,1,0x1022bb818,puVar3,uVar5);
      func_0x000107c61574(uStack_60);
      func_0x000107c61574(puVar3);
      puVar2 = &UNK_1104f08d0;
      func_0x000107c613fc(&UNK_1104f08d0,0x20,7);
      *(long *)(puVar2 + 0x10) = param_2;
      *(long *)(puVar2 + 0x18) = param_3;
      func_0x000107c61174();
      func_0x000107c6157c(param_3);
      uVar5 = 0;
      func_0x00010488a220(0,1,0x1022bb884,puVar2);
      func_0x000107c61574(uVar4);
      func_0x000107c61574(puVar2);
      puVar2 = &UNK_1104f08f8;
      func_0x000107c613fc(&UNK_1104f08f8,0x20,7);
      *(long *)(puVar2 + 0x10) = param_2;
      *(long *)(puVar2 + 0x18) = param_3;
      func_0x000107c61174(param_2);
      func_0x000107c6157c(param_3);
      func_0x000104888fc0(0,1,FUN_1022bb8dc,puVar2);
      func_0x000107c61170(param_2);
      func_0x000107c61574(uVar5);
      func_0x000107c61574(puVar2);
    }
  }
  return;
}


