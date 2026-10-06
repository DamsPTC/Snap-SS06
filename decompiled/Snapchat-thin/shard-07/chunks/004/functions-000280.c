/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055174d4; end: 105517553;  */

void FUN_1055174d4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010becd4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105517554; end: 10551755b; -[SCTopGroupsDataFetcher observeTopGroups] */

void FUN_105517554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 10551755c; end: 105517563; -[SCTopGroupsDataFetcher observeTopGroupsIds] */

void FUN_10551755c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 105517564; end: 105517633; -[SCTopGroupsDataFetcher _topGroupsObservable] */

void FUN_105517564(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf00180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 105517634; end: 1055176df;  */

void FUN_105517634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1055176e0;
  puStack_40 = &UNK_110854720;
  uStack_38 = param_2;
  _objc_retain(param_2);
  func_0x000100504554(param_3,&puStack_58);
  uVar1 = param_3;
  func_0x0001006372a4();
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055176e0; end: 1055176f7;  */

void FUN_1055176e0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 1055176f8; end: 10551773f; -[SCTopGroupsDataFetcher _publishedTopGroupsIdsObservable] */

void FUN_1055176f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf870a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105517740; end: 105517787; -[SCTopGroupsDataFetcher .cxx_destruct] */

void FUN_105517740(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105517788; end: 10551791f; -[SCTopGroupsFriendmojiDecorator initWithTopGroupsDataFetcher:] */

undefined8 * FUN_105517788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126e8d00;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 4) = 0;
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,puVar1);
    uVar2 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e1160();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105517920; end: 105517967;  */

void FUN_105517920(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c040();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105517968; end: 10551796f; -[SCTopGroupsFriendmojiDecorator friendmojiPosition] */

undefined8 FUN_105517968(void)

{
  return 2;
}



/* Entry: 105517970; end: 1055179e7; -[SCTopGroupsFriendmojiDecorator friendmojiCategoryNameForIdentifier:friendmojiFilterType:] */

void FUN_105517970(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  _objc_retain(param_3);
  if ((param_4 < 7) && ((0x53U >> (ulong)((uint)param_4 & 0x1f) & 1) != 0)) {
    param_1 = 0;
  }
  else {
    func_0x00010be19660(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1055179e8; end: 105517b87; -[SCTopGroupsFriendmojiDecorator observeFriendmojiCategoryNameForIdentifier:friendmojiFilterType:] */

void FUN_1055179e8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae6b8;
  if ((puVar1 == (undefined *)0x0) || ((param_4 < 7 && ((1L << (param_4 & 0x3f) & 0x53U) != 0)))) {
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar6,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = puVar1;
    func_0x00010c0e1160(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105517b88;
    puStack_60 = &UNK_1108947d0;
    _objc_retain(param_3);
    puVar3 = puVar2;
    uStack_58 = param_3;
    func_0x00010c0b8600(puVar2,param_2,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c2519e0(puVar3,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uStack_58);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105517b88; end: 105517bdb;  */

void FUN_105517b88(long param_1,ulong param_2)

{
  func_0x00010bf4b900(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  if ((param_2 & 1) == 0) {
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2468a0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105517bdc; end: 105517c63; -[SCTopGroupsFriendmojiDecorator _friendmojiCategoryNameForIdentifier:friendmojiFilterType:] */

void FUN_105517bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e2cb98;
  if ((int)uVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  _objc_retain(ppuVar2);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105517c64; end: 105517cdb; -[SCTopGroupsFriendmojiDecorator _onTopGroupsUpdated:] */

void FUN_105517c64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105517cdc; end: 105517d57; -[SCTopGroupsFriendmojiDecorator .cxx_destruct] */

void FUN_105517cdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105517d58; end: 105517dbf; -[SCTopGroupsFriendmojiDecoratorEntryPoint _topGroupsFriendmojiDecorator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105517d58(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + _DAT_1127250e0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c274420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ba398;
  _objc_alloc(PTR_PTR_1126ba398);
  func_0x00010c0541e0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105517dc0; end: 105517df7; -[SCTopGroupsFriendmojiDecoratorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105517dc0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127250e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127250dc);
  return;
}



/* Entry: 105517df8; end: 105517e67; -[SCGroup recentCompare:] */

undefined8 FUN_105517df8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0891c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0891c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf433a0(param_3,param_2,param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105517e68; end: 105517ec7; -[SCGroupParticipant nameToDisplay] */

void FUN_105517e68(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c294420(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    param_1 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105517ec8; end: 105517ecf; -[SCUnknownGroupParticipant bitmojiAvatarId] */

undefined8 FUN_105517ec8(void)

{
  return 0;
}



/* Entry: 105517ed0; end: 105517ed7; -[SCUnknownGroupParticipant bitmojiSelfieId] */

undefined8 FUN_105517ed0(void)

{
  return 0;
}



/* Entry: 105517ed8; end: 105517edf; -[SCUnknownGroupParticipant bitmojiSceneId] */

undefined8 FUN_105517ed8(void)

{
  return 0;
}



/* Entry: 105517ee0; end: 105517ee7; -[SCUnknownGroupParticipant bitmojiBackgroundId] */

undefined8 FUN_105517ee0(void)

{
  return 0;
}



/* Entry: 105517ee8; end: 105517eeb; -[SCUnknownGroupParticipant nameToDisplay] */

void FUN_105517ee8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f03bd8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f03bd8,
                      &PTR____CFConstantStringClassReference_110f03bf8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105517eec; end: 105517eef; -[SCUnknownGroupParticipant displayName] */

void FUN_105517eec(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f03bd8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f03bd8,
                      &PTR____CFConstantStringClassReference_110f03bf8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105517ef0; end: 105517ef3; -[SCUnknownGroupParticipant username] */

void FUN_105517ef0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_userId_112682320);
  return;
}



/* Entry: 105517ef4; end: 105517efb; -[SCUnknownGroupParticipant mischiefVersion] */

undefined8 FUN_105517ef4(void)

{
  return 0;
}



/* Entry: 105517efc; end: 105517f03; -[SCUnknownGroupParticipant talkSessionUserId] */

undefined8 FUN_105517efc(void)

{
  return 0;
}



/* Entry: 105517f04; end: 105517f0b; -[SCUnknownGroupParticipant colorOption] */

undefined8 FUN_105517f04(void)

{
  return 0;
}



/* Entry: 105517f0c; end: 105517f13; -[SCUnknownGroupParticipant petImageURL] */

undefined8 FUN_105517f0c(void)

{
  return 0;
}



/* Entry: 105517f14; end: 105517f1b; -[SCUnknownGroupParticipant birthday] */

undefined8 FUN_105517f14(void)

{
  return 0;
}



/* Entry: 105517f1c; end: 105517fcf; -[SCDocObjectGroupSnapchatterRepository initWithSnapchattersSynchronousDataFetcher:groupsDataFetcher:] */

undefined1 *
FUN_105517f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8d08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ba3a0;
    _objc_alloc();
    func_0x00010c019340();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105517fd0; end: 1055180e7; -[SCDocObjectGroupSnapchatterRepository snapchatterWithGroupId:userId:completionQueue:completionHandler:] */

void FUN_105517fd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c2447e0(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055180e8; end: 10551814b;  */

void FUN_1055180e8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bebd660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10551814c; end: 10551824b; -[SCDocObjectGroupSnapchatterRepository snapchattersWithGroupId:completionQueue:completionHandler:] */

void FUN_10551814c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c244e00(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10551824c; end: 1055182af;  */

void FUN_10551824c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bebd660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055182b0; end: 1055183af; -[SCDocObjectGroupSnapchatterRepository currentAndKickedSnapchattersWithGroupId:completionQueue:completionHandler:] */

void FUN_1055182b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf5e020(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055183b0; end: 105518413;  */

void FUN_1055183b0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bebd660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105518414; end: 105518513; -[SCDocObjectGroupSnapchatterRepository snapchattersWithGroupIds:completionQueue:completionHandler:] */

void FUN_105518414(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c244e20(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105518514; end: 105518577;  */

void FUN_105518514(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bebd660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105518578; end: 1055186cb; -[SCDocObjectGroupSnapchatterRepository _snapchatterFromGroupParticipant:] */

void FUN_105518578(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar2 = 0;
  if (uVar1 == 0) goto LAB_1055186ac;
  uVar2 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0ee920(uVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar3);
    if (uVar2 != 0) goto LAB_1055186ac;
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfebfc0(uVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar3);
    if (uVar2 != 0) goto LAB_1055186ac;
  }
  uVar2 = param_3;
  func_0x000108ef5a40(param_3);
  _objc_retainAutoreleasedReturnValue();
LAB_1055186ac:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1055186cc; end: 1055186fb; -[SCDocObjectGroupSnapchatterRepository .cxx_destruct] */

void FUN_1055186cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055186fc; end: 10551888b;  */

undefined1 * FUN_1055186fc(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        lVar8 = *(long *)(lStack_128 + lVar10 * 8);
        lVar3 = lVar8;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          lVar3 = param_2;
          (**(code **)(param_2 + 0x10))(param_2,lVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(lVar3);
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = param_1;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  puVar4 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(param_2);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  plVar5 = &lStack_170;
  pcStack_138 = FUN_10551888c;
  puStack_160 = puVar4;
  puStack_158 = puVar1;
  lStack_150 = param_2;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  puStack_168 = PTR_PTR_1126e8d10;
  lStack_170 = lVar2;
  _objc_msgSendSuper2(&lStack_170,PTR_s_init_1125d9248);
  if (plVar5 != (long *)0x0) {
    _objc_retain(puVar7);
    uVar6 = *(undefined8 *)((long)plVar5 + 8);
    *(undefined8 **)((long)plVar5 + 8) = puVar7;
    _objc_release(uVar6);
    puVar1 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar6 = *(undefined8 *)((long)plVar5 + 0x10);
    *(undefined **)((long)plVar5 + 0x10) = puVar1;
    _objc_release(uVar6);
    _objc_release(puVar4);
  }
  _objc_release(puVar7);
  return (undefined1 *)plVar5;
}



/* Entry: 10551888c; end: 105518967; -[SCGroupSnapchatterRepository initWithGroupsDataFetcher:] */

undefined1 * FUN_10551888c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8d10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105518968; end: 105518b1f; -[SCGroupSnapchatterRepository snapchatterWithGroupId:userId:participantConversionBlock:completionQueue:completionHandler:] */

void FUN_105518968(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc6120(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105518b20; end: 105518b77;  */

void FUN_105518b20(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebd740();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105518b78; end: 105518d07; -[SCGroupSnapchatterRepository snapchattersWithGroupId:participantConversionBlock:completionQueue:completionHandler:] */

void FUN_105518b78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc6120(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105518d08; end: 105518d5f;  */

void FUN_105518d08(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebd840();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105518d60; end: 105518eef; -[SCGroupSnapchatterRepository currentAndKickedSnapchattersWithGroupId:participantConversionBlock:completionQueue:completionHandler:] */

void FUN_105518d60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc6120(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105518ef0; end: 105518f47;  */

void FUN_105518ef0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf66c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105518f48; end: 1055190e7; -[SCGroupSnapchatterRepository snapchattersWithGroupIds:participantConversionBlock:completionQueue:completionHandler:] */

void FUN_105518f48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc2320(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055190e8; end: 1055191bb;  */

void FUN_1055190e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1055191bc;
  puStack_40 = &UNK_110894890;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  func_0x00010bd869d0(param_2,&puStack_58,&PTR___NSConcreteGlobalBlock_1108948c0);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf00d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebd860(param_1);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_38);
  return;
}



/* Entry: 1055191bc; end: 105519233;  */

void FUN_1055191bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf4b900();
  uVar1 = param_2;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105519234; end: 105519307; -[SCGroupSnapchatterRepository _snapchatterWithGroup:userId:participantConversionBlock:completionQueue:completionHandler:] */

void FUN_105519234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0ecc20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000108ef3c74();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bebd5c0(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105519308; end: 105519447; -[SCGroupSnapchatterRepository _snapchatterForParticipant:participantConversionBlock:completionQueue:completionHandler:] */

void FUN_105519308(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  code *pcVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_6);
  if (param_3 == 0) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x10551945c;
    puStack_80 = &UNK_110849530;
    _objc_retain(param_6);
    lStack_78 = param_6;
    _objc_retain(param_5);
    func_0x00010007380c(param_5,&puStack_98);
    _objc_release(param_5);
    param_4 = lStack_78;
  }
  else {
    pcVar1 = *(code **)(param_4 + 0x10);
    _objc_retain(param_5);
    (*pcVar1)(param_4,param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105519448;
    puStack_58 = &UNK_11084aaa8;
    _objc_retain(param_6);
    lStack_50 = param_4;
    lStack_48 = param_6;
    _objc_retain(param_4);
    func_0x00010007380c(param_5,&puStack_70);
    _objc_release(param_5);
    _objc_release(lStack_50);
    _objc_release(lStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_6);
  return;
}



/* Entry: 105519448; end: 10551946f;  */

void FUN_105519448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105519458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105519470; end: 105519573; -[SCGroupSnapchatterRepository _snapchattersWithGroup:participantConversionBlock:completionQueue:completionHandler:] */

void FUN_105519470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_1055186fc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105519574;
  puStack_58 = &UNK_11084aaa8;
  uStack_50 = uVar1;
  uStack_48 = param_6;
  _objc_retain(uVar1);
  _objc_retain(param_6);
  func_0x00010007380c(param_5,&puStack_70);
  _objc_release(param_5);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  _objc_release(param_6);
  return;
}



/* Entry: 105519574; end: 105519587;  */

void FUN_105519574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105519584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105519588; end: 1055196eb; -[SCGroupSnapchatterRepository _currentAndKickedSnapchattersWithGroup:participantConversionBlock:completionQueue:completionHandler:] */

void FUN_105519588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1055186fc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c086fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar1;
  FUN_1055186fc(uVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1055196ec;
  puStack_60 = &UNK_11084a9e8;
  uStack_58 = uVar2;
  uStack_50 = uVar3;
  uStack_48 = param_6;
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  _objc_retain(param_6);
  func_0x00010007380c(param_5,&puStack_78);
  _objc_release(param_5);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_48);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  return;
}



/* Entry: 1055196ec; end: 105519703;  */

void FUN_1055196ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105519700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 105519704; end: 1055198ef; -[SCGroupSnapchatterRepository _snapchattersWithGroups:participantConversionBlock:completionQueue:completionHandler:] */

void FUN_105519704(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar4 = *plStack_120;
    do {
      lVar5 = 0;
      do {
        if (*plStack_120 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = param_1;
        func_0x00010bebd7c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(puVar1);
        _objc_release(uVar3);
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_1055198f0;
  puStack_148 = &UNK_11084aaa8;
  puStack_140 = puVar1;
  uStack_138 = param_6;
  _objc_retain(puVar1);
  _objc_retain(param_6);
  func_0x00010007380c(param_5,&puStack_160);
  _objc_release(puStack_140);
  _objc_release(uStack_138);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  lVar2 = *(long *)(param_3 + 0x28);
  func_0x00010bf51e00(uVar3);
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1055198f0; end: 10551992b;  */

void FUN_1055198f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10551992c; end: 105519ae7; -[SCGroupSnapchatterRepository _snapchattersForGroup:participantConversionBlock:] */

void FUN_10551992c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar3 = param_3;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      lVar8 = *(long *)(lVar9 * 8);
      lVar5 = lVar8;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 != 0) {
        lVar5 = param_4;
        (**(code **)(param_4 + 0x10))(param_4,lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2923e0(lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar2);
        _objc_release(lVar8);
        _objc_release(lVar5);
      }
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar6 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 105519ae8; end: 105519d3f; -[SCGroupSnapchatterRepository .cxx_destruct] */

void FUN_105519ae8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105519d40; end: 105519d5b;  */

void FUN_105519d40(void)

{
  _objc_opt_new(PTR_PTR_1126ba3b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105519d5c; end: 105519dbf; -[SCGroupServicesEntryPoint _groupsCustomColorFetcher] */

void FUN_105519d5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  FUN_105519dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ba3c0;
  _objc_alloc(PTR_PTR_1126ba3c0);
  func_0x00010c02b980();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105519dc0; end: 105519de3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105519dc0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112725138);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105519de4; end: 105519feb; -[SCGroupServicesEntryPoint _groupConstructorWithGroupsCustomColorsFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105519de4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar7 = param_1;
  func_0x00010041adc4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010041ae48(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  puVar3 = PTR_PTR_1126b2980;
  _objc_alloc(PTR_PTR_1126b2980);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112725130;
    _objc_loadWeakRetained(lVar7);
  }
  lVar4 = lVar7;
  func_0x00010bf53fa0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006480(puVar3);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_initWeak(auStack_58,param_1);
  puVar5 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ba3d0;
  _objc_alloc(PTR_PTR_1126ba3d0);
  func_0x00010c05bae0();
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105519fec; end: 10551a093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105519fec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_11272512c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfceac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10551a094; end: 10551a1cb; -[SCGroupServicesEntryPoint _participantDisplayNameFetcher] */

void FUN_10551a094(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  func_0x00010041adc4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010041ae74(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010041ae24(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010041ae24(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar5 = PTR_PTR_1126ba3d8;
  _objc_alloc(PTR_PTR_1126ba3d8);
  func_0x00010c05b1c0();
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10551a1cc; end: 10551a257; -[SCGroupServicesEntryPoint _groupSnapchatterRepositoryWithGroupsDataFetcher:] */

void FUN_10551a1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010041ae24(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ba3e0;
  _objc_alloc(PTR_PTR_1126ba3e0);
  func_0x00010c04a000();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10551a258; end: 10551a337; -[SCGroupServicesEntryPoint _groupsDataCreator] */

void FUN_10551a258(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010041ade8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d5c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  FUN_10551a338(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  FUN_105519dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126ba3e8;
  _objc_alloc(PTR_PTR_1126ba3e8);
  func_0x00010c02e200();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10551a338; end: 10551a35b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10551a338(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112725128);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10551a35c; end: 10551a4ef; -[SCGroupServicesEntryPoint _groupsDataMutatorWithGroupsDataFetcher:] */

void FUN_10551a35c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010041ade8(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d5c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010041adc4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_1;
  FUN_10551a338(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  FUN_10551a4f0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  FUN_105519dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar6 = PTR_PTR_1126ba3f0;
  _objc_alloc(PTR_PTR_1126ba3f0);
  func_0x00010c02e2c0();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10551a4f0; end: 10551a513;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10551a4f0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112725124);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10551a514; end: 10551a6cf; -[SCGroupServicesEntryPoint _groupLinkHandlerWithGroupsDataCreator:groupsDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10551a514(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar6 = param_1;
  func_0x00010041ae24(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112725120;
    _objc_loadWeakRetained(lVar6);
  }
  lVar2 = lVar6;
  func_0x00010c06a980(lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010041f7e4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11272511c;
    _objc_loadWeakRetained(lVar6);
  }
  lVar4 = lVar6;
  func_0x00010c0e1840(lVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  FUN_10551a4f0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar5 = PTR_PTR_1126ba3f8;
  _objc_alloc(PTR_PTR_1126ba3f8);
  func_0x00010c019320();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10551a6d0; end: 10551a75b; -[SCGroupServicesEntryPoint _topGroupsDataFetcherWithGroupsDataTracker:] */

void FUN_10551a6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010041ade8(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c274440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ba400;
  _objc_alloc(PTR_PTR_1126ba400);
  func_0x00010c054200();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10551a75c; end: 10551a85f; -[SCGroupServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10551a75c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112725100,0);
  _objc_destroyWeak(param_1 + _DAT_112725138);
  _objc_destroyWeak(param_1 + _DAT_112725134);
  _objc_destroyWeak(param_1 + _DAT_112725130);
  _objc_destroyWeak(param_1 + _DAT_11272512c);
  _objc_destroyWeak(param_1 + _DAT_112725128);
  _objc_destroyWeak(param_1 + _DAT_112725124);
  _objc_destroyWeak(param_1 + _DAT_112725120);
  _objc_destroyWeak(param_1 + _DAT_11272511c);
  _objc_destroyWeak(param_1 + _DAT_112725118);
  _objc_destroyWeak(param_1 + _DAT_1127250fc);
  _objc_destroyWeak(param_1 + _DAT_112725114);
  _objc_destroyWeak(param_1 + _DAT_112725110);
  _objc_destroyWeak(param_1 + _DAT_11272510c);
  _objc_destroyWeak(param_1 + _DAT_112725108);
  _objc_destroyWeak(param_1 + _DAT_112725104);
  _objc_storeStrong(param_1 + _DAT_1127250f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127250f4,0);
  return;
}



/* Entry: 10551a860; end: 10551a88f;  */

void FUN_10551a860(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de8178;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110de8178,
                      &PTR____CFConstantStringClassReference_110de8198,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10551a890; end: 10551ac23; -[SCGroup initWithGroupId:groupName:orderedParticipants:kickedParticipants:notificationStatus:mentionNotificationStatus:chatNotificationStatus:areCallNotificationsEnabled:chatMuteEndDate:callMuteEndDate:lastInteractionTimestamp:creationTimestamp:blockedParticipantExceptions:nonFriendUserParticipantExceptions:lastSenderTimestampByParticipant:isPartial:isLocked:isCommunity:categoryId:shouldShowRetentionSettings:subtypeMetadata:hasConversationInvitation:conversationSubType:] */

undefined8 *
FUN_10551a890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined4 param_18,undefined4 param_19,undefined8 param_20,
             undefined1 param_21,undefined4 param_22,undefined8 param_23,undefined1 param_24,
             undefined4 param_25,undefined8 param_26)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_20);
  _objc_retain(param_23);
  _objc_retain(param_26);
  puStack_70 = PTR_PTR_1126e8d18;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0xb) = param_9._1_1_;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_18;
    *(undefined1 *)((long)puVar1 + 0xd) = param_18._1_1_;
    *(undefined1 *)((long)puVar1 + 0xe) = param_18._2_1_;
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xf) = param_21;
    uVar2 = param_23;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 2) = param_24;
    uVar2 = param_26;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_26);
  _objc_release(param_23);
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10551ac24; end: 10551ac47; -[SCGroup copyWithZone:] */

undefined8 FUN_10551ac24(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10551ac48; end: 10551ad8b; -[SCGroup hash] */

undefined8 * FUN_10551ac48(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  ulong uVar11;
  
  puVar4 = &uStack_e0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_e0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_d8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_d0 = uVar2;
  func_0x00010bfde980();
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar10 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                           (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar10);
  uVar11 = CONCAT44((int)(uVar10 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar10 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar10 >> 0x30);
  uStack_c0 = (ulong)uVar1 & 0xff;
  uStack_b8 = uVar10 >> 0x10 & 0xff;
  uStack_b0 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  uStack_a8 = (ulong)uVar8;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_c8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_98 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_88 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uStack_68 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_60 = (ulong)*(byte *)(param_1 + 0xd);
  uStack_58 = (ulong)*(byte *)(param_1 + 0xe);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 0xf);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000100505190(&uStack_e0,0x17);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10551afbc:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10551afc8;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((*(char *)((long)puVar4 + 8) == param_3[8] &&
            (*(char *)((long)puVar4 + 9) == param_3[9])) &&
           (*(char *)((long)puVar4 + 10) == param_3[10])) &&
          ((*(char *)((long)puVar4 + 0xb) == param_3[0xb] &&
           (*(char *)((long)puVar4 + 0xc) == param_3[0xc])))))) &&
        (*(char *)((long)puVar4 + 0xd) == param_3[0xd])) &&
       (((*(char *)((long)puVar4 + 0xe) == param_3[0xe] &&
         (*(char *)((long)puVar4 + 0xf) == param_3[0xf])) &&
        (*(char *)((long)puVar4 + 0x10) == param_3[0x10])))) {
      lVar6 = *(long *)((long)puVar4 + 0x18);
      if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = *(long *)((long)puVar4 + 0x20);
        if ((lVar6 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)((long)puVar4 + 0x28);
          if ((lVar6 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = *(long *)((long)puVar4 + 0x30);
            if ((lVar6 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = *(long *)((long)puVar4 + 0x38);
              if ((lVar6 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar6 != 0))
              {
                lVar6 = *(long *)((long)puVar4 + 0x40);
                if ((lVar6 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar6 != 0)
                   ) {
                  lVar6 = *(long *)((long)puVar4 + 0x48);
                  if ((lVar6 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                    lVar6 = *(long *)((long)puVar4 + 0x50);
                    if ((lVar6 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                      lVar6 = *(long *)((long)puVar4 + 0x58);
                      if ((lVar6 == *(long *)(param_3 + 0x58)) ||
                         (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                        lVar6 = *(long *)((long)puVar4 + 0x60);
                        if ((lVar6 == *(long *)(param_3 + 0x60)) ||
                           (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                          lVar6 = *(long *)((long)puVar4 + 0x68);
                          if ((lVar6 == *(long *)(param_3 + 0x68)) ||
                             (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                            lVar6 = *(long *)((long)puVar4 + 0x70);
                            if ((lVar6 == *(long *)(param_3 + 0x70)) ||
                               (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                              lVar6 = *(long *)((long)puVar4 + 0x78);
                              if ((lVar6 == *(long *)(param_3 + 0x78)) ||
                                 (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                                puVar7 = *(undefined1 **)((long)puVar4 + 0x80);
                                if (puVar7 != *(undefined1 **)(param_3 + 0x80)) {
                                  func_0x00010c071ae0();
                                  goto LAB_10551afc8;
                                }
                                goto LAB_10551afbc;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10551afc8:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10551ad8c; end: 10551afe3; -[SCGroup isEqual:] */

long FUN_10551ad8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10551afbc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10551afc8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
           (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
          ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
           (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))))) &&
        (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))) &&
       (((*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe) &&
         (*(char *)(param_1 + 0xf) == *(char *)(param_3 + 0xf))) &&
        (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x50);
                    if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x58);
                      if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x60);
                        if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x68);
                          if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x70);
                            if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x78);
                              if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0x80);
                                if (lVar3 != *(long *)(param_3 + 0x80)) {
                                  func_0x00010c071ae0();
                                  goto LAB_10551afc8;
                                }
                                goto LAB_10551afbc;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10551afc8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10551afe4; end: 10551afeb; -[SCGroup groupId] */

undefined8 FUN_10551afe4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10551afec; end: 10551aff3; -[SCGroup groupName] */

undefined8 FUN_10551afec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10551aff4; end: 10551affb; -[SCGroup orderedParticipants] */

undefined8 FUN_10551aff4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10551affc; end: 10551b003; -[SCGroup kickedParticipants] */

undefined8 FUN_10551affc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10551b004; end: 10551b00b; -[SCGroup notificationStatus] */

undefined1 FUN_10551b004(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10551b00c; end: 10551b013; -[SCGroup mentionNotificationStatus] */

undefined1 FUN_10551b00c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10551b014; end: 10551b01b; -[SCGroup chatNotificationStatus] */

undefined1 FUN_10551b014(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10551b01c; end: 10551b023; -[SCGroup areCallNotificationsEnabled] */

undefined1 FUN_10551b01c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10551b024; end: 10551b02b; -[SCGroup chatMuteEndDate] */

undefined8 FUN_10551b024(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10551b02c; end: 10551b033; -[SCGroup callMuteEndDate] */

undefined8 FUN_10551b02c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10551b034; end: 10551b03b; -[SCGroup lastInteractionTimestamp] */

undefined8 FUN_10551b034(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10551b03c; end: 10551b043; -[SCGroup creationTimestamp] */

undefined8 FUN_10551b03c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10551b044; end: 10551b04b; -[SCGroup blockedParticipantExceptions] */

undefined8 FUN_10551b044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10551b04c; end: 10551b053; -[SCGroup nonFriendUserParticipantExceptions] */

undefined8 FUN_10551b04c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10551b054; end: 10551b05b; -[SCGroup lastSenderTimestampByParticipant] */

undefined8 FUN_10551b054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}


