/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a8dd30; end: 106a8dd3b; -[SCSpotlightRepliesOperaPlugin setOperaControlling:] */

void FUN_106a8dd30(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106a8dd3c; end: 106a8de73; -[SCSpotlightRepliesOperaPlugin operaViewDidSendEvent:page:params:] */

void FUN_106a8dd3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar5 == 0) {
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)uVar5 != 0) {
      func_0x00010be47720(param_1);
    }
  }
  else {
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010c0c5ec0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
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
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = uVar1;
    _objc_release(uVar5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a8de74; end: 106a8df33; -[SCSpotlightRepliesOperaPlugin registeredEventsForOperaSession] */

void FUN_106a8de74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2338;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_48 = puVar1;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  func_0x00010c072560(uVar4,param_2,*(undefined8 *)(puVar1 + 0x10));
  if ((int)uVar4 != 0) {
    func_0x00010c12e1e0(*(undefined8 *)(puVar1 + 8),param_2,*(undefined8 *)(puVar1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(puVar1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 106a8df34; end: 106a8df83; -[SCSpotlightRepliesOperaPlugin didCompleteSpotlightRepliesScope] */

void FUN_106a8df34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c072560(uVar1,param_2,*(undefined8 *)(param_1 + 0x10));
  if ((int)uVar1 != 0) {
    func_0x00010c12e1e0(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106a8df84; end: 106a8dfc7; -[SCSpotlightRepliesOperaPlugin modalPresentationOnCommentsTrayDidEnd] */

void FUN_106a8df84(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cfb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfba0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a8dfc8; end: 106a8e00b; -[SCSpotlightRepliesOperaPlugin modalDismissalOnCommentsTrayDidEnd] */

void FUN_106a8dfc8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cfb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfa60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a8e00c; end: 106a8e427; -[SCSpotlightRepliesOperaPlugin _launchCommentsTray] */

void FUN_106a8e00c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x38) = 1;
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c25b720();
    _objc_initWeak(auStack_68,param_1);
    puVar2 = PTR_PTR_1126b5bb8;
    _objc_alloc(PTR_PTR_1126b5bb8);
    lVar3 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c038ee0(0x3fe6666666666666,puVar2);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010afef994();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    puVar8 = PTR_PTR_1126b6018;
    _objc_alloc();
    if ((lVar1 == 0xd) && (uVar6 = uVar7, func_0x00010c07dce0(), (int)uVar6 != 0)) {
      func_0x000108f4b800();
    }
    func_0x00010c00a1a0();
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar9;
    func_0x000108f51f98();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010c241660();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar14;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    _objc_release(uVar9);
    _objc_release(uVar10);
    puVar12 = PTR_PTR_1126b5cb0;
    _objc_alloc();
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c259740(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c0df880(puVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c09ab40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e4a0();
    _objc_release(uVar9);
    _objc_release(puVar13);
    *(undefined8 *)(param_1 + 0x48) = 0;
    puVar13 = PTR_PTR_1126b6000;
    _objc_alloc();
    uVar14 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c25a160(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar14;
    func_0x00010c1057a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bdf6040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056860();
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar13;
    _objc_release(uVar10);
    _objc_release(lVar3);
    _objc_release(uVar9);
    _objc_release(uVar14);
    func_0x00010c1c4ee0(*(undefined8 *)(param_1 + 0x10));
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar6);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 106a8e428; end: 106a8e453;  */

void FUN_106a8e428(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a8e454; end: 106a8e58b; -[SCSpotlightRepliesOperaPlugin _creatorProfileIdFromStory:] */

void FUN_106a8e454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106a8e58c;
  uStack_40 = 0x106a8e59c;
  uStack_38 = 0;
  uVar1 = param_3;
  func_0x00010c259560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf680();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a8e58c; end: 106a8e5a3;  */

void FUN_106a8e58c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106a8e5a4; end: 106a8e623;  */

void FUN_106a8e5a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a8e624; end: 106a8e6a3; -[SCSpotlightRepliesOperaPlugin .cxx_destruct] */

void FUN_106a8e624(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a8e6a4; end: 106a8e817; -[SCSpotlight916ShareDataProvider initWithCompositeStoryId:senderUserId:shouldUseSmallThumbnail:spotlightDataFetcher:publicProfileManager:thumbnailCoordinator:mediaCoordinator:layoutDirection:] */

undefined1 *
FUN_106a8e6a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f48a8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x38) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_release(uVar2);
    func_0x00010be3be60(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a8e818; end: 106a8e9a7; -[SCSpotlight916ShareDataProvider fetchDataWithUIUpdateBlock:videoContextUpdateBlock:storyThumbnailUrlUpdateBlock:] */

void FUN_106a8e818(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x28) != 0) {
    _objc_initWeak(auStack_58,param_1);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106a8e9a8;
    puStack_80 = &UNK_1108fff30;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    uStack_78 = param_3;
    _objc_retain(param_5);
    uStack_70 = param_5;
    _objc_retain(param_4);
    ppuVar1 = &puStack_98;
    uStack_68 = param_4;
    _objc_retainBlock();
    if (*(long *)(param_1 + 0x50) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfaa320();
      _objc_release(uVar2);
    }
    else {
      (*(code *)ppuVar1[2])(ppuVar1,*(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x50),1);
    }
    _objc_release(ppuVar1);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a8e9a8; end: 106a8ea17;  */

void FUN_106a8e9a8(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  if (param_4 == 0) {
    func_0x00010be28fc0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010be27da0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a8ea18; end: 106a8eaff; -[SCSpotlight916ShareDataProvider _initiateDataFetch] */

void FUN_106a8ea18(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x28) != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfaa320(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 106a8eb00; end: 106a8eb4f;  */

void FUN_106a8eb00(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
    _objc_retain(param_3);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be77460();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106a8eb50; end: 106a8ec2f; -[SCSpotlight916ShareDataProvider _prefetchMediaWithSpotlightStory:] */

void FUN_106a8eb50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c245680(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000107d22a6c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c11d620(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106a8ec30; end: 106a8ec33;  */

void FUN_106a8ec30(void)

{
  return;
}



/* Entry: 106a8ec34; end: 106a8f20f; -[SCSpotlight916ShareDataProvider _handleDataWithUIUpdateBlock:storyThumbnailUrlUpdateBlock:videoContextUpdateBlock:spotlightStory:] */

void FUN_106a8ec34(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (*(long *)(param_1 + 0x50) == 0) {
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = param_6;
    _objc_release(uVar1);
  }
  puVar2 = PTR_PTR_1126c6870;
  func_0x00010c25b100();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_130 = &PTR____CFConstantStringClassReference_110dc1758;
  puVar3 = *(undefined **)(param_1 + 0x50);
  func_0x00010c26e020();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_128 = &PTR____CFConstantStringClassReference_110dc1778;
  puVar6 = *(undefined **)(param_1 + 0x50);
  puStack_110 = puVar5;
  func_0x00010c26e020();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar6;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar16;
  if (puVar16 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_120 = &PTR____CFConstantStringClassReference_110ddd938;
  puVar8 = *(undefined **)(param_1 + 0x50);
  puStack_108 = puVar7;
  func_0x00010c26e020();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  if (puVar9 == (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_118 = &PTR____CFConstantStringClassReference_110dc1798;
  ppuVar11 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7eb8;
  puStack_100 = puVar10;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  if (ppuVar11 == (undefined **)0x0) {
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_f8 = ppuVar12;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar11 == (undefined **)0x0) {
    _objc_release(ppuVar12);
  }
  _objc_release(ppuVar11);
  if (puVar9 == (undefined *)0x0) {
    _objc_release(puVar10);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  if (puVar16 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  _objc_release(puVar16);
  _objc_release(puVar6);
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_retain(puVar13);
  puVar5 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  _objc_opt_new(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8);
  func_0x00010c1f6900();
  func_0x00010c1a9200(puVar5);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(puVar13);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  _objc_retain(puVar13);
  puVar3 = puVar13;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar15 = *plStack_160;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_160 != lVar15) {
          _objc_enumerationMutation(puVar13);
        }
        puVar7 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
        puVar6 = puVar13;
        func_0x00010c0e00e0(puVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c11d4c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar16 = puVar16 + 1;
      } while (puVar3 != puVar16);
      puVar3 = puVar13;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar13);
  func_0x00010c1e6460(puVar5);
  puVar3 = puVar5;
  func_0x00010bdc2b80(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar13);
  puVar4 = puVar3;
  func_0x00010beec820(puVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,puVar4);
  _objc_release(puVar4);
  func_0x00010bee33e0(param_1);
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    _objc_initWeak(apuStack_f0);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_106a8f210;
    puStack_190 = &UNK_1108fffd0;
    ppuVar11 = &puStack_1a8;
    ppuVar12 = apuStack_f0;
    _objc_copyWeak(auStack_178,ppuVar12);
    _objc_retain(param_3);
    lStack_180 = param_3;
    _objc_retain(puVar2);
    puStack_188 = puVar2;
    func_0x00010c269fc0(uVar1);
    _objc_release(puStack_188);
    _objc_release(lStack_180);
    _objc_destroyWeak(auStack_178);
    _objc_destroyWeak(apuStack_f0);
  }
  else {
    ppuVar14 = (undefined **)PTR_PTR_1126c6870;
    func_0x00010c25b100();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar14;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar11;
    (**(code **)(param_3 + 0x10))(param_3,ppuVar11);
    _objc_release(ppuVar11);
    _objc_release(ppuVar14);
  }
  func_0x00010be14e60();
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar11 + 6);
  _objc_destroyWeak(apuStack_f0);
  __Unwind_Resume();
  _objc_retain(ppuVar12);
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained(param_3);
  func_0x00010be21ca0();
  _objc_release(ppuVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a8f210; end: 106a8f263;  */

void FUN_106a8f210(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be21ca0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a8f264; end: 106a8f317; -[SCSpotlight916ShareDataProvider _updateVideoContextWithBlock:] */

void FUN_106a8f264(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x38) & 1) == 0)) {
    lVar1 = *(long *)(param_1 + 0x50);
    func_0x00010bf82200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if ((lVar2 != 0) &&
       (lVar1 = lVar2, func_0x00010c0c6c20(),
       lVar1 + 1U < 0x1c && (1L << (lVar1 + 1U & 0x3f) & 0xd8de5fdU) != 0)) {
      (**(code **)(param_3 + 0x10))(param_3,lVar2);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a8f318; end: 106a8f3c3; -[SCSpotlight916ShareDataProvider _handleErrorStateWithUIUpdateBlock:] */

void FUN_106a8f318(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c6870;
  _objc_retain(param_3);
  func_0x00010c25b100(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_106a8f984();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad540(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a8f3c4; end: 106a8f623; -[SCSpotlight916ShareDataProvider _getPublicProfileManagerWithManager:uiUpdateBlock:uiConfigBuilder:] */

void FUN_106a8f3c4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 0x50);
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c24b240();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c29c5c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (0 < (long)uVar4) {
    puVar5 = PTR_PTR_1126b10c8;
    func_0x00010c22d8e0((double)uVar4,PTR_PTR_1126b10c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc880(param_5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  uVar9 = param_5;
  func_0x00010bf21f60(param_5);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,uVar9);
  _objc_release(uVar9);
  lVar6 = *(long *)(param_1 + 0x50);
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    lVar7 = *(long *)(param_1 + 0x50);
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08fa60();
    _objc_release(lVar7);
    _objc_release(lVar6);
    if (lVar8 != 0) {
      lVar6 = param_3;
      func_0x00010bfc93a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010bf25140(uVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar6;
      (**(code **)(lVar6 + 0x10))(lVar6,uVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar8;
      func_0x00010c272160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(uVar9);
      _objc_release(lVar6);
      _objc_retain(param_5);
      _objc_retain(param_4);
      func_0x00010c25ff60(lVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(param_4);
      _objc_release(param_5);
      _objc_release(lVar7);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a8f624; end: 106a8f727;  */

void FUN_106a8f624(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c2711a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb3c0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c0b46a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb0a0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e1a60(param_2);
    func_0x00010c2a9180(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf21f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a8f728; end: 106a8f7fb; -[SCSpotlight916ShareDataProvider _fetchThumbnailDataForSpotlightStory:] */

void FUN_106a8f728(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    return;
  }
  func_0x00010c26e020(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000107d227d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11da60(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 106a8f7fc; end: 106a8f80f;  */

void FUN_106a8f7fc(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c213f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setThumbnailData__112662a00,param_2);
    return;
  }
  return;
}



/* Entry: 106a8f810; end: 106a8f81b; -[SCSpotlight916ShareDataProvider storyViewAccessibilityId] */

void FUN_106a8f810(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24c1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c6878,PTR_s_spotlightShareAccessibilityId_112670a90);
  return;
}



/* Entry: 106a8f81c; end: 106a8f823; -[SCSpotlight916ShareDataProvider shouldOverrideMediaSize] */

undefined1 FUN_106a8f81c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 106a8f824; end: 106a8f837; -[SCSpotlight916ShareDataProvider overrideMediaSize] */

undefined1  [16] FUN_106a8f824(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4064000000000000;
  auVar1._0_8_ = 0x4056800000000000;
  return auVar1;
}



/* Entry: 106a8f838; end: 106a8f86f; -[SCSpotlight916ShareDataProvider autoPlayPreviewDurationMs] */

void FUN_106a8f838(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)0x0;
  if (*(char *)(param_1 + 0x38) == '\0') {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7ed0;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106a8f870; end: 106a8f887; -[SCSpotlight916ShareDataProvider storySharePlaybackPresenterDelegate] */

void FUN_106a8f870(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a8f888; end: 106a8f893; -[SCSpotlight916ShareDataProvider setStorySharePlaybackPresenterDelegate:] */

void FUN_106a8f888(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 106a8f894; end: 106a8f89b; -[SCSpotlight916ShareDataProvider spotlightStory] */

undefined8 FUN_106a8f894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106a8f89c; end: 106a8f8cb; -[SCSpotlight916ShareDataProvider setSpotlightStory:] */

void FUN_106a8f89c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a8f8cc; end: 106a8f8d3; -[SCSpotlight916ShareDataProvider thumbnailData] */

undefined8 FUN_106a8f8cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106a8f8d4; end: 106a8f903; -[SCSpotlight916ShareDataProvider setThumbnailData:] */

void FUN_106a8f8d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a8f904; end: 106a8f983; -[SCSpotlight916ShareDataProvider .cxx_destruct] */

void FUN_106a8f904(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a8f984; end: 106a8f99b;  */

void FUN_106a8f984(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e0a338;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e0a338,
                      &PTR____CFConstantStringClassReference_110e693d8,0);
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



/* Entry: 106a8f99c; end: 106a8faff; -[SCOperaDeviceMuteController initWithAudioSession:customVolumeController:delegate:pauseMusicOnOverride:] */

undefined8 *
FUN_106a8f99c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_5);
  puStack_50 = PTR_PTR_1126f48b0;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = auStack_48;
    _objc_loadWeakRetained(puVar2);
    _objc_storeWeak(puVar1 + 1,puVar2);
    _objc_release(puVar2);
    _objc_retain(param_3);
    uVar3 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar3);
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 7) = param_6;
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar3 = puVar1[4];
    puVar1[4] = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar5);
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106a8fb00; end: 106a8fb43; -[SCOperaDeviceMuteController dealloc] */

void FUN_106a8fb00(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c256220();
  puStack_28 = PTR_PTR_1126f48b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106a8fb44; end: 106a8fbfb; -[SCOperaDeviceMuteController startMonitoring] */

void FUN_106a8fb44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x10),param_2,param_1);
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x18));
  func_0x00010bddd480(param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b6df8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c7a0(0x3fe0000000000000);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_start_112671080);
  return;
}



/* Entry: 106a8fbfc; end: 106a8fc5b; -[SCOperaDeviceMuteController stopMonitoring] */

void FUN_106a8fbfc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x10),param_2,param_1);
  func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010c255780();
    func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x28),param_2,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106a8fc5c; end: 106a8fd23; -[SCOperaDeviceMuteController overrideMuteSwitch] */

void FUN_106a8fc5c(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010c0f0280();
  }
  else {
    func_0x00010c0f0260(*(undefined8 *)(param_1 + 0x18));
  }
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106a8fd24;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106a8fd24; end: 106a8fd57;  */

void FUN_106a8fd24(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bddd480(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a8fd58; end: 106a8fd5f; -[SCOperaDeviceMuteController restoreNativeVolume] */

void FUN_106a8fd58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_restoreNativeVolume_11262cb68);
  return;
}



/* Entry: 106a8fd60; end: 106a8fd83; -[SCOperaDeviceMuteController updateAudioState] */

void FUN_106a8fd60(undefined8 param_1)

{
  func_0x00010c256220();
                    /* WARNING: Could not recover jumptable at 0x00010c24f410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startMonitoring_112671728);
  return;
}



/* Entry: 106a8fd84; end: 106a8fe57; -[SCOperaDeviceMuteController _checkAudioSessionStatus] */

void FUN_106a8fd84(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf385a0(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106a8fe58; end: 106a8feb7;  */

void FUN_106a8fe58(long param_1,undefined1 param_2,undefined1 param_3)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x39) = param_2;
    *(undefined1 *)(param_1 + 0x3b) = param_3;
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf70c00();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a8feb8; end: 106a8ff83; -[SCOperaDeviceMuteController audioSession:didChangeVolume:] */

void FUN_106a8feb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106a8ff84;
  puStack_50 = &UNK_110846540;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 106a8ff84; end: 106a8ffe3;  */

void FUN_106a8ff84(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bddd480(lVar1);
    lVar2 = lVar1 + 8;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf70be0(*(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a8ffe4; end: 106a9009f; -[SCOperaDeviceMuteController customVolumeController:didChangeMuteSwitchOverride:] */

void FUN_106a8ffe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106a900a0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106a900a0; end: 106a900d3;  */

void FUN_106a900a0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bddd480(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a900d4; end: 106a900eb; -[SCOperaDeviceMuteController secretFeatureChecker:didCheckSecretFeatureMode:] */

void FUN_106a900d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*(long *)(param_1 + 0x30) == param_4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be9cb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__secretFeatureModeDidChange__112584c70,param_4);
  return;
}



/* Entry: 106a900ec; end: 106a9019b; -[SCOperaDeviceMuteController _secretFeatureModeDidChange:] */

void FUN_106a900ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106a9019c;
  puStack_40 = &UNK_110846540;
  _objc_copyWeak(auStack_38,auStack_28);
  uStack_30 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106a9019c; end: 106a901ef;  */

void FUN_106a9019c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(ulong *)(param_1 + 0x28) < 3) {
      *(char *)(lVar1 + 0x3a) =
           (char)(0x100 >> (ulong)((uint)(*(ulong *)(param_1 + 0x28) << 3) & 0x18));
    }
    func_0x00010bddd480(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a901f0; end: 106a901f7; -[SCOperaDeviceMuteController isMuteOverridden] */

undefined1 FUN_106a901f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x39);
}



/* Entry: 106a901f8; end: 106a901ff; -[SCOperaDeviceMuteController isMuteSwitchOn] */

undefined1 FUN_106a901f8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3a);
}



/* Entry: 106a90200; end: 106a90207; -[SCOperaDeviceMuteController isSoundPlaying] */

undefined1 FUN_106a90200(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3b);
}



/* Entry: 106a90208; end: 106a90257; -[SCOperaDeviceMuteController .cxx_destruct] */

void FUN_106a90208(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a90258; end: 106a90303; -[SCOperaMuteSwitchPlugin initWithMuteIntent:restoreNativeVolumeOnTeardown:performPlaylistUpdates:gradualVolumeRampUpDuration:] */

undefined1 *
FUN_106a90258(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f48b8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    *(undefined1 *)((long)puVar1 + 0x3a) = param_5;
    *(undefined1 *)((long)puVar1 + 0x3b) = param_6;
    if (0.0 < param_1) {
      puVar2 = PTR_PTR_1126d0098;
      _objc_alloc();
      func_0x00010c00eae0(param_1,0x3fb999999999999a);
      uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
      *(undefined **)((long)puVar1 + 0x40) = puVar2;
      _objc_release(uVar3);
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106a90304; end: 106a9030f; -[SCOperaMuteSwitchPlugin setPlaylistItemController:] */

void FUN_106a90304(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 106a90310; end: 106a9031b; -[SCOperaMuteSwitchPlugin setOperaControlling:] */

void FUN_106a90310(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106a9031c; end: 106a9038b; -[SCOperaMuteSwitchPlugin shouldPauseMusicOnOverride] */

long FUN_106a9031c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0ea360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c069200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f5dc0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 106a9038c; end: 106a903b3; -[SCOperaMuteSwitchPlugin updateOperaDependencies:] */

void FUN_106a9038c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106a903b4; end: 106a903db; -[SCOperaMuteSwitchPlugin updateOperaConfiguration:] */

void FUN_106a903b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106a903dc; end: 106a903df; -[SCOperaMuteSwitchPlugin extraPropertiesProvider] */

void FUN_106a903dc(void)

{
  return;
}



/* Entry: 106a903e0; end: 106a90553; -[SCOperaMuteSwitchPlugin registeredEventsForOperaSession] */

void FUN_106a903e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  ppuVar11 = &puStack_90;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010bf17980();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_90 = puVar1;
  func_0x00010c29f080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_88 = puVar2;
  func_0x00010c2a6fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2330;
  puStack_80 = puVar3;
  func_0x00010bf96a00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d00a0;
  puStack_78 = puVar4;
  func_0x00010c0d3e60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126d00a0;
  puStack_70 = puVar5;
  func_0x00010c281880();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2338;
  puStack_68 = puVar6;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar11);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b2338;
  func_0x00010c0c6900(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (undefined1 *)ppuVar11;
  func_0x00010c0720c0(ppuVar11,param_2,puVar2);
  if (((ulong)puVar9 & 1) == 0) {
    _objc_release(puVar2);
  }
  else {
    lVar10 = param_5;
    func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110e693f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    if (lVar10 != 0) {
      func_0x00010bec0600(puVar1);
      goto LAB_106a90664;
    }
  }
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010bf17980(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (undefined1 *)ppuVar11;
  func_0x00010c0720c0(ppuVar11,param_2,puVar2);
  if ((int)puVar9 == 0) {
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010c29f080(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined1 *)ppuVar11;
    func_0x00010c0720c0(ppuVar11,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((int)puVar9 == 0) {
      puVar2 = PTR_PTR_1126b2330;
      func_0x00010c2a6fc0(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = (undefined1 *)ppuVar11;
      func_0x00010c0720c0(ppuVar11,param_2,puVar2);
      _objc_release(puVar2);
      if ((int)puVar9 != 0) {
        func_0x00010bec2f20(puVar1);
        goto LAB_106a90664;
      }
      puVar2 = PTR_PTR_1126b2330;
      func_0x00010bf96a00(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = (undefined1 *)ppuVar11;
      func_0x00010c0720c0(ppuVar11,param_2,puVar2);
      _objc_release(puVar2);
      if ((int)puVar9 == 0) {
        puVar2 = PTR_PTR_1126d00a0;
        func_0x00010c0d3e60(PTR_PTR_1126d00a0);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = (undefined1 *)ppuVar11;
        func_0x00010c0720c0(ppuVar11,param_2,puVar2);
        _objc_release(puVar2);
        if ((int)puVar9 != 0) {
          func_0x00010be61a40(puVar1);
          goto LAB_106a90664;
        }
        puVar2 = PTR_PTR_1126d00a0;
        func_0x00010c281880(PTR_PTR_1126d00a0);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = (undefined1 *)ppuVar11;
        func_0x00010c0720c0(ppuVar11,param_2,puVar2);
        _objc_release(puVar2);
        if ((int)puVar9 == 0) goto LAB_106a90664;
      }
      else if (((puVar1[0x28] & 1) != 0) || (*(long *)(puVar1 + 0x30) != 2)) goto LAB_106a90664;
      func_0x00010bed19a0(puVar1,param_2,0);
      goto LAB_106a90664;
    }
  }
  else {
    _objc_release(puVar2);
  }
  func_0x00010c2838e0(*(undefined8 *)(puVar1 + 0x18));
LAB_106a90664:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar11);
  return;
}



/* Entry: 106a90554; end: 106a9078b; -[SCOperaMuteSwitchPlugin operaViewDidSendEvent:page:params:] */

void FUN_106a90554(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2338;
  func_0x00010c0c6900(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  if ((uVar2 & 1) == 0) {
    _objc_release(puVar1);
  }
  else {
    lVar3 = param_5;
    func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110e693f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (lVar3 != 0) {
      func_0x00010bec0600(param_1);
      goto LAB_106a90664;
    }
  }
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010bf17980(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  if ((int)uVar2 == 0) {
    puVar4 = PTR_PTR_1126b2330;
    func_0x00010c29f080(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) {
      puVar1 = PTR_PTR_1126b2330;
      func_0x00010c2a6fc0(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar1);
      _objc_release(puVar1);
      if ((int)uVar2 != 0) {
        func_0x00010bec2f20(param_1);
        goto LAB_106a90664;
      }
      puVar1 = PTR_PTR_1126b2330;
      func_0x00010bf96a00(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar1);
      _objc_release(puVar1);
      if ((int)uVar2 == 0) {
        puVar1 = PTR_PTR_1126d00a0;
        func_0x00010c0d3e60(PTR_PTR_1126d00a0);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar1);
        _objc_release(puVar1);
        if ((int)uVar2 != 0) {
          func_0x00010be61a40(param_1);
          goto LAB_106a90664;
        }
        puVar1 = PTR_PTR_1126d00a0;
        func_0x00010c281880(PTR_PTR_1126d00a0);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar1);
        _objc_release(puVar1);
        if ((int)uVar2 == 0) goto LAB_106a90664;
      }
      else if (((*(byte *)(param_1 + 0x28) & 1) != 0) || (*(long *)(param_1 + 0x30) != 2))
      goto LAB_106a90664;
      func_0x00010bed19a0(param_1,param_2,0);
      goto LAB_106a90664;
    }
  }
  else {
    _objc_release(puVar1);
  }
  func_0x00010c2838e0(*(undefined8 *)(param_1 + 0x18));
LAB_106a90664:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a9078c; end: 106a907db; -[SCOperaMuteSwitchPlugin _mute] */

void FUN_106a9078c(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x28) = 1;
    func_0x00010bedbe40(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bedd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePlaylistItems_112594f60);
    return;
  }
  *(undefined8 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 106a907dc; end: 106a908d7; -[SCOperaMuteSwitchPlugin _unmute:] */

void FUN_106a907dc(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x30) = 2;
    return;
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c0783e0();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x18);
    func_0x00010c078400();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1 + 0x10;
      _objc_loadWeakRetained();
      uVar3 = uVar1;
      func_0x00010c0ea360();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c069200();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf0ef60();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar1);
      if ((uVar5 & 1) == 0) goto LAB_106a90810;
    }
  }
  else {
LAB_106a90810:
    lVar2 = param_1;
    func_0x00010c231c20();
    if ((int)lVar2 == 0) goto LAB_106a908b4;
  }
  if ((param_3 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    func_0x00010c0f8900(param_1);
  }
  func_0x00010c0f0260(*(undefined8 *)(param_1 + 0x18));
LAB_106a908b4:
  func_0x00010bedbe40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bedd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePlaylistItems_112594f60);
  return;
}



/* Entry: 106a908d8; end: 106a90a4f; -[SCOperaMuteSwitchPlugin performInitialGradualVolumeRampUpIfNeeded] */

void FUN_106a908d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    _objc_release();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      lVar1 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar1);
      lVar3 = lVar1;
      func_0x00010c29e000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2241a0(0);
      _objc_release(lVar3);
      _objc_release(lVar1);
      _objc_initWeak(auStack_48,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_106a90a50;
      puStack_58 = &UNK_1108681f8;
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_copyWeak(auStack_78,auStack_48);
      func_0x00010c251bc0(uVar2);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a90a50; end: 106a90ac3;  */

void FUN_106a90a50(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    lVar1 = param_2 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c29e000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2241a0(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a90ac4; end: 106a90afb;  */

void FUN_106a90ac4(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a90afc; end: 106a90b53; -[SCOperaMuteSwitchPlugin _updatePlaylistItems] */

void FUN_106a90afc(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x3b) == '\x01') {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c069f20();
    _objc_release(lVar1);
    func_0x00010bed65a0(param_1);
    func_0x00010beddd40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beddd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePreviousNextGroupItems_1125950f0);
    return;
  }
  return;
}



/* Entry: 106a90b54; end: 106a90c0b; -[SCOperaMuteSwitchPlugin _updateCurrentItem] */

void FUN_106a90b54(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c101400();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 106a90c0c; end: 106a90e9f; -[SCOperaMuteSwitchPlugin _updatePreviousNextGroupItems] */

void FUN_106a90c0c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfece20();
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 != 0x7fffffffffffffff) {
    uVar6 = param_1 + 8;
    _objc_loadWeakRetained();
    uVar7 = uVar6;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf529e0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    if (lVar5 + 1U < uVar9) {
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c101260();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar10;
      func_0x00010bf5f0a0(lVar10);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c101400(lVar1,param_2,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(lVar10);
    }
    if (lVar5 != 0) {
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c101260();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bfcf800();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      lVar1 = lVar5;
      func_0x00010bf5f0a0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c101400(param_1,param_2,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(param_1);
      _objc_release(lVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106a90ea0; end: 106a9106b; -[SCOperaMuteSwitchPlugin _updatePreviousNextItems] */

void FUN_106a90ea0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c101260();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf5ee40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bfece20(uVar4,param_2,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  if (uVar1 != 0x7fffffffffffffff) {
    uVar2 = uVar4;
    func_0x00010bf529e0();
    if (uVar1 + 1 < uVar2) {
      lVar5 = param_1 + 8;
      _objc_loadWeakRetained(lVar5);
      uVar2 = uVar4;
      func_0x00010c0dfd40(uVar4,param_2,uVar1 + 1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c101400(lVar5,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(lVar5);
    }
    if (uVar1 != 0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      uVar2 = uVar4;
      func_0x00010c0dfd40(uVar4,param_2,uVar1 - 1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c101400(param_1,param_2,uVar1);
      _objc_release(uVar1);
      _objc_release(uVar2);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106a9106c; end: 106a9115f; -[SCOperaMuteSwitchPlugin _startMonitoringDeviceMuteStateIfNeeded] */

void FUN_106a9106c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126d00a8;
  _objc_alloc();
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0ea360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf0fb00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf62bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c231c20(param_1);
  func_0x00010bff5520();
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c24f410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_startMonitoring_112671728);
  return;
}



/* Entry: 106a91160; end: 106a91183; -[SCOperaMuteSwitchPlugin _applyInitialMuteIntentIfNeeded] */

void FUN_106a91160(long param_1)

{
  if (*(long *)(param_1 + 0x30) == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bed19b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__unmute__112592010,1);
    return;
  }
  if (*(long *)(param_1 + 0x30) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be61a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mute_112576030);
    return;
  }
  return;
}



/* Entry: 106a91184; end: 106a911eb; -[SCOperaMuteSwitchPlugin _stopDeviceMuteStateMonitoring] */

void FUN_106a91184(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010c13c520(*(undefined8 *)(param_1 + 0x18));
  }
  if ((*(char *)(param_1 + 0x3a) == '\x01') && ((*(byte *)(param_1 + 0x39) & 1) == 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x00010c0783e0();
    if (iVar1 != 0) {
      func_0x00010c13c520(*(undefined8 *)(param_1 + 0x18));
    }
  }
  func_0x00010c256220(*(undefined8 *)(param_1 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106a911ec; end: 106a9128f; -[SCOperaMuteSwitchPlugin _updateMuteStateWithIsMuted:] */

void FUN_106a911ec(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 1;
  if (param_3 == 0) {
    uVar1 = 2;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d4120();
    _objc_release(lVar2);
  }
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca6a0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 106a91290; end: 106a91497; -[SCOperaMuteSwitchPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_106a91290(long param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long in_x5;
  long lVar14;
  
  puVar4 = PTR_PTR_1126d00b0;
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x5);
  func_0x00010c086300();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126d00b0;
  func_0x00010c0862c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0783e0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126d00b0;
  func_0x00010c0862a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c078400(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126d00b0;
  func_0x00010c0862e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07eee0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR____NSDictionary0__struct_11034ab58;
  (**(code **)(in_x5 + 0x10))(in_x5,puVar12,PTR____NSDictionary0__struct_11034ab58);
  _objc_release(in_x5);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar13);
  bVar1 = puVar4[0x38];
  if ((bVar1 & 1) == 0) {
    uVar2 = (undefined1)*(undefined8 *)(puVar4 + 0x18);
    func_0x00010c0783e0();
    puVar4[0x39] = uVar2;
    if (*(long *)(puVar4 + 0x30) == 0) goto LAB_106a914e8;
    puVar4[0x38] = 1;
    func_0x00010bedd6e0(puVar4);
  }
  else {
LAB_106a914e8:
    iVar3 = (int)*(undefined8 *)(puVar4 + 0x18);
    func_0x00010c078400();
    if (iVar3 == 0) {
LAB_106a91500:
      if ((puVar4[0x28] & 1) == 0) goto LAB_106a91514;
    }
    else {
      iVar3 = (int)*(undefined8 *)(puVar4 + 0x18);
      func_0x00010c0783e0();
      if (iVar3 != 0) goto LAB_106a91500;
LAB_106a91514:
      func_0x00010bedbe40(puVar4);
    }
    puVar4[0x38] = 1;
    func_0x00010bedd6e0(puVar4);
    if ((bVar1 & 1) != 0) goto LAB_106a91538;
  }
  func_0x00010bdce2e0(puVar4);
LAB_106a91538:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar13);
  return;
}



/* Entry: 106a91498; end: 106a9154b; -[SCOperaMuteSwitchPlugin deviceMuteControllerDidUpdateAudioSessionState:] */

void FUN_106a91498(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  bVar1 = *(byte *)(param_1 + 0x38);
  if ((bVar1 & 1) == 0) {
    uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x18);
    func_0x00010c0783e0();
    *(undefined1 *)(param_1 + 0x39) = uVar2;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_106a914e8;
    *(undefined1 *)(param_1 + 0x38) = 1;
    func_0x00010bedd6e0(param_1);
  }
  else {
LAB_106a914e8:
    iVar3 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x00010c078400();
    if (iVar3 == 0) {
LAB_106a91500:
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        uVar4 = 0;
        goto LAB_106a91514;
      }
    }
    else {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x18);
      func_0x00010c0783e0();
      if (iVar3 != 0) goto LAB_106a91500;
      uVar4 = 1;
LAB_106a91514:
      func_0x00010bedbe40(param_1,param_2,uVar4);
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    func_0x00010bedd6e0(param_1);
    if ((bVar1 & 1) != 0) goto LAB_106a91538;
  }
  func_0x00010bdce2e0(param_1);
LAB_106a91538:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a9154c; end: 106a91573; -[SCOperaMuteSwitchPlugin deviceMuteController:didChangeVolume:] */

void FUN_106a9154c(double param_1,long param_2)

{
  if ((1.1920928955078125e-07 <= param_1) && (*(long *)(param_2 + 0x20) != 2)) {
                    /* WARNING: Could not recover jumptable at 0x00010bed19b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__unmute__112592010,0);
    return;
  }
  return;
}



/* Entry: 106a91574; end: 106a9158b; -[SCOperaMuteSwitchPlugin delegate] */

void FUN_106a91574(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a9158c; end: 106a91597; -[SCOperaMuteSwitchPlugin setDelegate:] */

void FUN_106a9158c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 106a91598; end: 106a915df; -[SCOperaMuteSwitchPlugin .cxx_destruct] */

void FUN_106a91598(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106a915e0; end: 106a91643; -[SCOperaVolumeRampUpController initWithDuration:stepDuration:] */

void FUN_106a915e0(undefined8 param_1,double param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  double dVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f48c0;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    dVar2 = 0.001;
    if (0.001 <= param_2) {
      dVar2 = param_2;
    }
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(double *)((long)puVar1 + 0x10) = dVar2;
    *(undefined8 *)((long)puVar1 + 0x18) = 0x7fffffffffffffff;
  }
  return;
}



/* Entry: 106a91644; end: 106a916e7; -[SCOperaVolumeRampUpController startWithProgressBlock:completionBlock:] */

void FUN_106a91644(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_3 != 0) && (param_4 != 0)) && (*(long *)(param_1 + 0x28) == 0)) {
    lVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar1;
    _objc_release(uVar2);
    lVar1 = param_4;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar1;
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + 0x18) = 0;
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(0);
    func_0x00010be9b3c0(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a916e8; end: 106a916f7; -[SCOperaVolumeRampUpController cancel] */

void FUN_106a916e8(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be5d1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__markAsCompleted__112574e08,0);
  return;
}



/* Entry: 106a916f8; end: 106a91797; -[SCOperaVolumeRampUpController _scheduleNextStep] */

void FUN_106a916f8(long param_1)

{
  double dVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  dVar1 = *(double *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106a91798;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x000100c749e0((float)dVar1,"APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106a91798; end: 106a917cb;  */

void FUN_106a91798(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdcee60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a917cc; end: 106a9187b; -[SCOperaVolumeRampUpController _applyVolumeRampUpStep] */

void FUN_106a917cc(long param_1)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  
  dVar4 = (double)(long)(*(double *)(param_1 + 8) / *(double *)(param_1 + 0x10));
  dVar5 = 1.0;
  if (1.0 <= dVar4) {
    dVar5 = dVar4;
  }
  uVar3 = (ulong)dVar5;
  if (*(ulong *)(param_1 + 0x18) < uVar3) {
    if (*(byte *)(param_1 + 0x20) == 0) {
      dVar5 = (1.0 / (double)uVar3) * (double)(*(ulong *)(param_1 + 0x18) + 1);
      uVar6 = NEON_fminnm(dVar5 * dVar5,0x3ff0000000000000);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(uVar6);
      uVar1 = *(long *)(param_1 + 0x18) + 1;
      *(ulong *)(param_1 + 0x18) = uVar1;
      if (uVar1 < uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010be9b3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scheduleNextStep_112584698);
        return;
      }
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x20) ^ 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be5d1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__markAsCompleted__112574e08,bVar2);
  return;
}



/* Entry: 106a9187c; end: 106a918cb; -[SCOperaVolumeRampUpController _markAsCompleted:] */

void FUN_106a9187c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106a918cc; end: 106a918fb; -[SCOperaVolumeRampUpController .cxx_destruct] */

void FUN_106a918cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 106a918fc; end: 106a91af3; -[SCDiscoverFeedUpNextV2StoriesRequestMutator initWithStoriesConfigProvider:streamTokenProvider:pageSessionIdProvider:triggeringStoryIdProvider:triggeringActionProvider:triggeringSourceProvider:defaultPlaylistStoriesProvider:networkConnectivityMonitor:] */

undefined1 *
FUN_106a918fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f48c8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2830e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a91af4; end: 106a91f4f; -[SCDiscoverFeedUpNextV2StoriesRequestMutator modifyRequest:sequence:completionPerformer:completion:mixerEndpointSource:] */

void FUN_106a91af4(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2830e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c071800();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) == 0) {
    _objc_retain(param_3);
    _objc_retain(param_6);
    func_0x00010c0f7fc0(param_5);
    _objc_release(param_3);
    lVar5 = param_6;
  }
  else {
    func_0x00010c1d64a0(param_3);
    lVar5 = *(long *)(param_1 + 0x18);
    (**(code **)(lVar5 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      func_0x00010c17cb60(param_3);
    }
    func_0x00010bf90d20();
    func_0x00010c19b200(param_3);
    puVar6 = PTR_PTR_1126b7828;
    _objc_opt_new(PTR_PTR_1126b7828);
    func_0x00010c19b220(param_3);
    _objc_release(puVar6);
    puVar6 = param_3;
    func_0x00010bfa43c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc800();
    _objc_release(puVar6);
    lVar7 = *(long *)(param_1 + 0x10);
    (**(code **)(lVar7 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8a60(param_3);
    _objc_release(lVar7);
    func_0x00010c1ec040(param_3);
    func_0x00010c21a2a0(param_3);
    func_0x00010c1b55e0(param_3);
    puVar6 = PTR_PTR_1126d00b8;
    _objc_opt_new(PTR_PTR_1126d00b8);
    func_0x00010be6f800(param_1);
    func_0x00010c1d8660(puVar6);
    func_0x00010c0f1c60(puVar6);
    lVar8 = *(long *)(param_1 + 0x20);
    (**(code **)(lVar8 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x000108f52050();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) {
      func_0x00010c187ba0(puVar6);
    }
    lVar9 = *(long *)(param_1 + 0x38);
    (**(code **)(lVar9 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar10 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar9);
        }
        lVar11 = *(long *)(lVar15 * 8);
        func_0x00010bf454e0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        func_0x000108f52050();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar11);
        if (lVar12 != 0) {
          puVar13 = puVar6;
          func_0x00010bf69ec0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar13);
        }
        _objc_release(lVar12);
        lVar15 = lVar15 + 1;
      } while (lVar10 != lVar15);
      lVar10 = lVar9;
      func_0x00010bf52a60();
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    func_0x00010c21a400(puVar6);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    func_0x00010c21a4a0(puVar6);
    func_0x00010c21c2a0(param_3);
    _objc_retain(param_3);
    _objc_retain(param_6);
    func_0x00010c0f7fc0(param_5);
    _objc_release(param_3);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_release(param_6);
    _objc_release(lVar9);
    _objc_release(lVar7);
    param_6 = lVar8;
    param_3 = puVar6;
  }
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000106a91f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_5 + 0x28) + 0x10))
            (*(long *)(param_5 + 0x28),*(undefined8 *)(param_5 + 0x20),0);
  return;
}



/* Entry: 106a91f50; end: 106a91f77;  */

void FUN_106a91f50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106a91f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106a91f78; end: 106a92073; -[SCDiscoverFeedUpNextV2StoriesRequestMutator _pageSizeForRequestSequence:] */

int FUN_106a91f78(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2830e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar4 = uVar3;
    func_0x00010c0f1c80();
    iVar7 = (int)uVar4;
  }
  else {
    uVar4 = uVar3;
    func_0x00010c0f1c60();
    iVar7 = (int)uVar4;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar5 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf48f60();
  _objc_release(lVar5);
  if (lVar6 != 2) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2830e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      uVar4 = uVar3;
      func_0x00010c0f1ca0();
      iVar7 = (int)uVar4;
    }
    else {
      uVar4 = uVar3;
      func_0x00010c0f1cc0();
      iVar7 = (int)uVar4;
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  iVar1 = 6;
  if (0xffffffeb < iVar7 - 0x15U) {
    iVar1 = iVar7;
  }
  return iVar1;
}


