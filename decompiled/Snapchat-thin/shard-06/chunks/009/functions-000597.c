/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f6ea0c; end: 104f6ea63; -[SCChatPlaybackFeaturePlugin setPlaylistItemController:] */

void FUN_104f6ea0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f6ea64; end: 104f6eafb; -[SCChatPlaybackFeaturePlugin dependentPlugins] */

void FUN_104f6ea64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2c78;
  _objc_alloc();
  func_0x00010bff0100();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 104f6eafc; end: 104f6eaff; -[SCChatPlaybackFeaturePlugin addEventListenersWithEventAnnouncing:] */

void FUN_104f6eafc(void)

{
  return;
}



/* Entry: 104f6eb00; end: 104f6eb27; -[SCChatPlaybackFeaturePlugin playlistDataSource] */

void FUN_104f6eb00(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f6eb28; end: 104f6eb2f; -[SCChatPlaybackFeaturePlugin type] */

void FUN_104f6eb28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c084c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_itemType_1125fed20);
  return;
}



/* Entry: 104f6eb30; end: 104f6eb77; -[SCChatPlaybackFeaturePlugin .cxx_destruct] */

void FUN_104f6eb30(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f6eb78; end: 104f6ebeb;  */

bool FUN_104f6eb78(double param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_2;
  FUN_104f6ebec();
  if ((int)uVar2 == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = param_2;
    func_0x00010bf8b160(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    bVar1 = 11.0 <= param_1;
    _objc_release(uVar2);
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 104f6ebec; end: 104f6ec4b;  */

uint FUN_104f6ebec(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf8b160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c0c6c20();
    uVar2 = 0;
    if (uVar1 < 0xc) {
      uVar2 = 0x806 >> (ulong)((uint)uVar1 & 0x1f);
    }
  }
  _objc_release(param_1);
  return uVar2 & 1;
}



/* Entry: 104f6ec4c; end: 104f6f3d7;  */

ulong FUN_104f6ec4c(ulong param_1,long param_2,uint param_3,ulong param_4,ulong param_5,
                   ulong param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  _objc_retain(param_1);
  if (param_2 - 0x59U < 0xfffffffffffffffe) {
LAB_104f6ede0:
    _objc_release(param_1);
    uVar1 = param_1;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_104f770c8();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      param_7 = 0;
      goto LAB_104f6ee74;
    }
    uVar1 = param_1;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    FUN_104f76c8c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if ((uVar3 == 0) ||
       ((uVar1 = uVar3, func_0x00010c0c6c20(), uVar1 != 1 &&
        (uVar1 = uVar3, func_0x00010c0c6c20(), uVar1 != 2)))) {
      param_7 = 0;
    }
  }
  else {
    uVar1 = param_1;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_104f770c8();
    if ((int)uVar2 == 0) {
LAB_104f6edd8:
      _objc_release(uVar1);
      goto LAB_104f6ede0;
    }
    uVar2 = uVar1;
    FUN_104f76c8c();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar2 != 0) && (uVar3 = uVar2, func_0x00010c0c6c20(), 2 < uVar3)) goto LAB_104f6edd0;
    uVar3 = param_1;
    func_0x00010c0efbe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = param_1;
    if (uVar5 == 0) {
      uVar4 = param_1;
      FUN_104f6f438();
      if ((uVar4 & 1) == 0) {
        uVar4 = uVar1;
        FUN_104f76ec0();
        if ((uVar2 == 0) || ((uVar4 & 1) != 0)) {
LAB_104f6edd0:
          _objc_release(uVar2);
          goto LAB_104f6edd8;
        }
        uVar4 = uVar2;
        func_0x00010c0c6c20();
        if (uVar4 - 1 < 2) {
          _objc_release(uVar2);
          _objc_release(uVar1);
          param_7 = param_4;
        }
        else {
          if (uVar4 != 0) goto LAB_104f6edd0;
          _objc_release(uVar2);
          _objc_release(uVar1);
          param_7 = (ulong)param_3;
        }
      }
      else {
        _objc_release(uVar2);
        _objc_release(uVar1);
        param_7 = param_6;
      }
    }
    else {
      _objc_release(uVar2);
      _objc_release(uVar1);
      param_7 = param_5;
    }
  }
  _objc_release(uVar3);
LAB_104f6ee74:
  _objc_release(param_1);
  return param_7;
}



/* Entry: 104f6f3d8; end: 104f6f437;  */

bool FUN_104f6f3d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0efbe0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 104f6f438; end: 104f6f58f;  */

uint FUN_104f6f438(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c0efbe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    lVar1 = param_1;
    func_0x00010c0cb340(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    func_0x00010c0bfe80();
    lVar2 = lVar1;
    FUN_104f76c8c(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c083e00();
    uVar4 = (uint)*(byte *)(puStack_48 + 3) | (uint)lVar3;
    _objc_release(lVar2);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(lVar1);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_1);
  return uVar4 & 1;
}



/* Entry: 104f6f590; end: 104f6f6e3;  */

void FUN_104f6f590(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar7 = 0;
  if (lVar3 != 0) {
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        uVar4 = *(ulong *)(lVar8 * 8);
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c2bf020();
        _objc_release(uVar4);
        if ((uVar5 & 1) != 0) {
          uVar7 = 1;
          goto LAB_104f6f68c;
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    uVar7 = 0;
  }
LAB_104f6f68c:
  _objc_release(lVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar7;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 104f6f6e4; end: 104f6f6eb;  */

void FUN_104f6f6e4(void)

{
  return;
}



/* Entry: 104f6f6ec; end: 104f6fbe7; -[SCFriendsFeedOperaPlaylistDataSource initWithConversationId:userId:senderUserId:participants:delegate:feedUpdatesPublisher:friendsFeedGraphene:groupsDataTracker:initialViewableSnaps:messagePreparer:playbackGrapheneLogger:snapchattersObservableRepository:snapCountDownManager:performer:userInfoBitmojiAvatarIdProvider:userInfoBitmojiSelfieIdProvider:messagingExperimentService:] */

undefined8 *
FUN_104f6f6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  _objc_retain();
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_80 = PTR_PTR_1126e5420;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 0xd) = 0;
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_7);
    uVar2 = param_5;
    func_0x00010c0720c0();
    *(char *)(puVar1 + 0x17) = (char)uVar2;
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
    _objc_retain(param_12);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[8];
    puVar1[8] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[10];
    puVar1[10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[9];
    puVar1[9] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_16;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_19;
    _objc_release(uVar2);
    uVar2 = param_19;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c07a3a0();
    *(char *)((long)puVar1 + 0xb9) = (char)uVar4;
    _objc_release(uVar2);
    func_0x00010bec77e0(puVar1);
    _objc_initWeak(auStack_90,puVar1);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_104f6fbe8;
    puStack_a8 = &UNK_11085e6c8;
    _objc_copyWeak(auStack_98,auStack_90);
    _objc_retain(param_5);
    uStack_a0 = param_5;
    _objc_copyWeak(auStack_c8,auStack_90);
    func_0x00010c0bf240(param_6);
    _objc_destroyWeak(auStack_c8);
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
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



/* Entry: 104f6fbe8; end: 104f6fc6f;  */

void FUN_104f6fbe8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bec84e0(lVar1,param_2,uVar3,uVar2,param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f6fc70; end: 104f6fcb7;  */

void FUN_104f6fc70(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec7960();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f6fcb8; end: 104f6fd9f; -[SCFriendsFeedOperaPlaylistDataSource launchCandidates] */

void FUN_104f6fcb8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined **)(param_1 + 0xa8) = puVar1;
  _objc_release(uVar2);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f88c0(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010bfbc3e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104f6fda0; end: 104f6fdcb;  */

void FUN_104f6fda0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be11de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f6fdcc; end: 104f6fdd7; -[SCFriendsFeedOperaPlaylistDataSource itemType] */

undefined ** FUN_104f6fdcc(void)

{
  return &PTR____CFConstantStringClassReference_110dbd7b8;
}



/* Entry: 104f6fdd8; end: 104f6fde3; -[SCFriendsFeedOperaPlaylistDataSource setPlaylistItemController:] */

void FUN_104f6fdd8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 104f6fde4; end: 104f6fe5f; -[SCFriendsFeedOperaPlaylistDataSource dataModelForGroup:] */

void FUN_104f6fde4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x68);
  puVar1 = PTR_PTR_1126b2c60;
  _objc_alloc(PTR_PTR_1126b2c60);
  func_0x00010c02b940();
  _os_unfair_lock_unlock(param_1 + 0x68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f6fe60; end: 104f6ff1b; -[SCFriendsFeedOperaPlaylistDataSource dataModelFor:] */

void FUN_104f6fe60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b2c68;
  _objc_alloc(PTR_PTR_1126b2c68);
  func_0x00010c02b400();
  _objc_release(uVar3);
  _os_unfair_lock_unlock(param_1 + 0x68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f6ff1c; end: 104f7001f; -[SCFriendsFeedOperaPlaylistDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_104f6ff1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  _objc_retain(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x68);
  uVar1 = uVar2;
  func_0x000100504554(uVar2,&PTR___NSConcreteGlobalBlock_11085e718);
  _objc_release(uVar2);
  func_0x00010c13a9c0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f70020; end: 104f70083; -[SCFriendsFeedOperaPlaylistDataSource pageDataForDataModel:completion:] */

void FUN_104f70020(void)

{
  undefined *puVar1;
  long in_x3;
  
  puVar1 = PTR_PTR_1126b23e0;
  _objc_retain(in_x3);
  _objc_alloc(puVar1);
  func_0x00010c033240();
  (**(code **)(in_x3 + 0x10))(in_x3,puVar1);
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f70084; end: 104f70087; -[SCFriendsFeedOperaPlaylistDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_104f70084(void)

{
  return;
}



/* Entry: 104f70088; end: 104f70137; -[SCFriendsFeedOperaPlaylistDataSource _logSnapMediaPrepareWithType:startTime:success:failureReason:] */

void FUN_104f70088(double param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = param_1;
  if ((param_5 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3100();
    _objc_release(uVar1);
  }
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aa180((dVar2 - param_1) * 1000.0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f70138; end: 104f7013b; -[SCFriendsFeedOperaPlaylistDataSource removeMediaForItem:] */

void FUN_104f70138(void)

{
  return;
}



/* Entry: 104f7013c; end: 104f701cf; -[SCFriendsFeedOperaPlaylistDataSource canResolvePlaylistItemGroupDataModel:] */

bool FUN_104f7013c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2c60;
  _objc_opt_class(PTR_PTR_1126b2c60);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar3 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010c0cbb20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf529e0(uVar2);
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar3 != 0;
}



/* Entry: 104f701d0; end: 104f70213; -[SCFriendsFeedOperaPlaylistDataSource playlistItemGroupModelForDataModel:] */

void FUN_104f701d0(void)

{
  _objc_alloc(PTR_PTR_1126b23e8);
  func_0x00010c01ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f70214; end: 104f7021b; -[SCFriendsFeedOperaPlaylistDataSource needToPrepareMediaBeforeDisplay] */

undefined8 FUN_104f70214(void)

{
  return 0;
}



/* Entry: 104f7021c; end: 104f7069f; -[SCFriendsFeedOperaPlaylistDataSource _fetchInitialPlaybackMessages] */

undefined * FUN_104f7021c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  long lStack_190;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar10 = *(long *)(param_1 + 0x90);
  _objc_retain(lVar10);
  lVar4 = lVar10;
  func_0x00010bf52a60();
  if (lVar4 == 0) {
    _objc_release(lVar10);
LAB_104f70580:
    if (*(char *)(param_1 + 0xb9) == '\x01') {
      func_0x00010be0e200(param_1);
      goto LAB_104f70610;
    }
    lStack_190 = 0;
  }
  else {
    lStack_190 = 0;
    lVar11 = *plStack_130;
    do {
      lVar12 = 0;
      do {
        if (*plStack_130 != lVar11) {
          _objc_enumerationMutation(lVar10);
        }
        uVar13 = *(undefined8 *)(lStack_138 + lVar12 * 8);
        puVar5 = puVar2;
        func_0x00010bf529e0();
        if (puVar5 == (undefined *)0xa) goto LAB_104f70564;
        uVar6 = uVar13;
        FUN_104f706a0();
        if (((int)uVar6 != 0) &&
           (uVar6 = uVar13,
           FUN_104f70724(uVar13,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0xb8)),
           (int)uVar6 != 0)) {
          uVar6 = uVar13;
          func_0x00010c0c3fe0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = *(long *)(param_1 + 0x70);
          func_0x00010bf4d700();
          if (lVar7 == 4) {
            lVar7 = *(long *)(param_1 + 0x70);
            func_0x00010c0ffb40();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = *(long *)(param_1 + 0x78);
            func_0x00010bf529e0();
            if (lVar8 == 0) {
              func_0x00010befa120(puVar2);
              lVar8 = lVar7;
              func_0x00010c0cb5a0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar3);
              _objc_release(lVar8);
            }
            else {
              func_0x00010befa120(*(undefined8 *)(param_1 + 0x78));
            }
          }
          else if (lVar7 == 2) {
            lVar7 = *(long *)(param_1 + 0x70);
            func_0x00010c0ffb40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(*(undefined8 *)(param_1 + 0x78));
            _CACurrentMediaTime();
            uVar1 = CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,CONCAT13(uVar17,
                                                  CONCAT12(uVar16,CONCAT11(uVar15,uVar14)))))));
            _objc_initWeak(auStack_148,param_1);
            lVar8 = *(long *)(param_1 + 0x70);
            func_0x00010bf490e0(uVar13);
            _objc_retainAutoreleasedReturnValue();
            _objc_copyWeak(auStack_158,auStack_148);
            uStack_150 = uVar1;
            func_0x00010c104bc0(lVar8);
            _objc_release(uVar13);
            _objc_destroyWeak(auStack_158);
            _objc_destroyWeak(auStack_148);
          }
          else if (lVar7 == 0) {
            lVar7 = *(long *)(param_1 + 0x70);
            func_0x00010c0ffb40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(*(undefined8 *)(param_1 + 0x78));
            func_0x00010bf490e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be4cec0(param_1);
            _objc_release(uVar13);
          }
          else {
            lVar7 = 0;
          }
          lVar8 = *(long *)(param_1 + 0xb0);
          func_0x00010c08fa60();
          if (lVar8 == 0) {
            lVar8 = lVar7;
            func_0x00010c0cb5a0();
            _objc_retainAutoreleasedReturnValue();
            uVar13 = *(undefined8 *)(param_1 + 0xb0);
            *(long *)(param_1 + 0xb0) = lVar8;
            _objc_release(uVar13);
            _objc_retain(lVar7);
            _objc_release(lStack_190);
            lStack_190 = lVar7;
          }
          _objc_release(lVar7);
          _objc_release(uVar6);
        }
        lVar12 = lVar12 + 1;
      } while (lVar4 != lVar12);
      lVar4 = lVar10;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
LAB_104f70564:
    _objc_release(lVar10);
    if (lStack_190 == 0) goto LAB_104f70580;
  }
  _os_unfair_lock_lock(param_1 + 0x68);
  puVar5 = puVar2;
  func_0x00010bf51e00();
  uVar13 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = puVar5;
  _objc_release(uVar13);
  puVar5 = puVar3;
  func_0x00010bf51e00();
  uVar13 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar5;
  _objc_release(uVar13);
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar13);
  _os_unfair_lock_unlock(param_1 + 0x68);
  func_0x00010bde3140(param_1);
  _objc_release(uVar13);
  _objc_release(lStack_190);
LAB_104f70610:
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_158);
    _objc_destroyWeak(auStack_148);
    __Unwind_Resume();
    _objc_retain();
    puVar3 = puVar2;
    func_0x00010c243480();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c100380();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c243480(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bf2c560(puVar3);
    _objc_release(puVar3);
    uVar9 = (uint)puVar2;
    if (puVar5 != (undefined *)0x2) {
      uVar9 = 1;
    }
    return (undefined *)(ulong)uVar9;
  }
  return puVar2;
}



/* Entry: 104f706a0; end: 104f70723;  */

undefined4 FUN_104f706a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c243480();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c100380();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c243480(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar1;
  func_0x00010bf2c560(lVar1);
  _objc_release(lVar1);
  uVar4 = (undefined4)lVar3;
  if (lVar2 != 2) {
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 104f70724; end: 104f70837;  */

undefined4 FUN_104f70724(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c56c0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x000107d644bc(param_1,param_2,param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  uVar3 = 0;
  if (lVar2 != 3) {
    uVar3 = (undefined4)lVar1;
  }
  return uVar3;
}



/* Entry: 104f70838; end: 104f709bf; -[SCFriendsFeedOperaPlaylistDataSource _completePromiseIfPossibleWithInitialPlaybackMessage:viewableSnaps:participants:] */

void FUN_104f70838(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_c8 [8];
  undefined1 uStack_c0;
  undefined1 auStack_b8 [8];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_4;
  uVar8 = param_6;
  _objc_retain(param_5);
  uVar6 = (undefined1)uVar8;
  _objc_retain(param_6);
  puVar1 = param_4;
  func_0x00010bf4d6e0();
  if (puVar1 == (undefined *)0x4) {
    func_0x00010be53be0(param_2);
    puVar1 = PTR_PTR_1126b2c60;
    _objc_alloc();
    func_0x00010c02b940();
    uVar8 = *(undefined8 *)(param_2 + 0xa8);
    puVar2 = PTR_PTR_1126b2c70;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0;
    func_0x00010c01dce0();
    puVar5 = puVar2;
    func_0x00010bf43d60(uVar8);
    _objc_release(puVar2);
    _objc_release(puVar3);
    uVar8 = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_2 + 0xb0) = 0;
    _objc_release(uVar8);
    _objc_release(puVar1);
  }
  else if (param_4 == (undefined *)0x0) {
    puVar5 = *(undefined **)(param_2 + 0xb0);
    lVar4 = param_2;
    func_0x00010be79960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((lVar4 == 0) && (*(char *)(param_2 + 0xb9) == '\x01')) {
      puVar5 = (undefined *)0x4;
      func_0x00010be0e200(param_2);
    }
  }
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  func_0x00010be58bc0(param_1,param_5);
  _objc_initWeak(auStack_b8,param_5);
  uVar8 = *(undefined8 *)(param_5 + 0x60);
  _objc_copyWeak(auStack_c8,auStack_b8);
  _objc_retain(puVar5);
  uStack_c0 = uVar6;
  func_0x00010c0f7fc0(uVar8);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_b8);
  _objc_release(puVar5);
  return;
}



/* Entry: 104f709c0; end: 104f70ad3; -[SCFriendsFeedOperaPlaylistDataSource _didPostProcessNativeMessage:prepareType:success:failureReason:startTime:] */

void FUN_104f709c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  func_0x00010be58bc0(param_1,param_2);
  _objc_initWeak(auStack_58,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  uStack_60 = param_6;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  return;
}



/* Entry: 104f70ad4; end: 104f70b0f;  */

void FUN_104f70ad4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f70b10; end: 104f70c17; -[SCFriendsFeedOperaPlaylistDataSource _loadContentForMessageId:mediaContent:] */

void FUN_104f70b10(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_1;
  func_0x00010c09b1a0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104f70c18; end: 104f70c5f;  */

void FUN_104f70c18(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfe700(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f70c60; end: 104f70d6f; -[SCFriendsFeedOperaPlaylistDataSource _didLoadContentForMessageId:success:startTime:] */

void FUN_104f70c60(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  if ((param_5 & 1) == 0) {
    func_0x00010be58bc0(param_1,param_2);
    if (*(char *)(param_2 + 0xb9) == '\x01') {
      _objc_initWeak(auStack_48,param_2);
      uVar1 = *(undefined8 *)(param_2 + 0x60);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_4);
      func_0x00010c0f7fc0(uVar1);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 104f70d70; end: 104f70dab;  */

void FUN_104f70d70(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f70dac; end: 104f7128f; -[SCFriendsFeedOperaPlaylistDataSource _didProcessMessage:success:unableToPresentReason:] */

void FUN_104f70dac(undefined **param_1,undefined8 param_2,long param_3,uint param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  bool bVar7;
  undefined **unaff_x20;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((param_4 & 1) == 0) {
    func_0x00010befa120(param_1[0x10]);
    unaff_x20 = param_1;
    func_0x00010be79960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(param_1[0xf]);
    puVar2 = param_1[0x16];
    func_0x00010c08fa60();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = param_1[0xf];
      func_0x00010bf529e0();
      if (puVar2 == (undefined *)0x0) {
        func_0x00010be0e200(param_1);
        _objc_release(unaff_x20);
        goto LAB_104f71200;
      }
    }
    if (*(char *)((long)param_1 + 0xb9) == '\x01') {
      iVar1 = (int)param_1[0x16];
      func_0x00010c0720c0();
      if (iVar1 != 0) {
        puVar3 = param_1[0xf];
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c0cb5a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = param_1[0x16];
        param_1[0x16] = puVar2;
        _objc_release(puVar3);
      }
    }
    _objc_release(unaff_x20);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar10 = param_1[0xf];
  _objc_retain(puVar10);
  puVar6 = puVar10;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar8 = *plStack_120;
    bVar7 = true;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(puVar10);
        }
        ppuVar12 = *(undefined ***)(lStack_128 + (long)puVar9 * 8);
        _objc_retain(ppuVar12);
        if (param_4 != 0) {
          ppuVar5 = ppuVar12;
          func_0x00010c0cb5a0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x20 = ppuVar5;
          func_0x00010c0720c0();
          _objc_release(ppuVar5);
          if ((int)unaff_x20 != 0) {
            unaff_x20 = (undefined **)param_1[0xe];
            func_0x00010c121b40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar12);
            ppuVar12 = unaff_x20;
          }
        }
        if ((bVar7) && (ppuVar5 = ppuVar12, func_0x00010bf4d6e0(), ppuVar5 == (undefined **)0x4)) {
          func_0x00010befa120(puVar2);
          ppuVar5 = ppuVar12;
          func_0x00010c0cb5a0(ppuVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(ppuVar5);
          bVar7 = true;
        }
        else {
          func_0x00010befa120(puVar4);
          bVar7 = false;
        }
        _objc_release(ppuVar12);
        puVar9 = puVar9 + 1;
      } while (puVar6 != puVar9);
      puVar6 = puVar10;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar10);
  func_0x00010bf51e00(puVar4);
  _objc_release();
  puVar6 = puVar4;
  func_0x00010c0d3c80();
  puVar10 = param_1[0xf];
  param_1[0xf] = puVar6;
  _objc_release(puVar10);
  puVar6 = puVar2;
  func_0x00010bf529e0();
  if (puVar6 != (undefined *)0x0) {
    _os_unfair_lock_lock(param_1 + 0xd);
    puVar10 = param_1[0x13];
    puVar6 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1[0x13];
    param_1[0x13] = puVar10;
    _objc_release(puVar9);
    _objc_release(puVar6);
    puVar10 = param_1[0x11];
    puVar6 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x0001006decbc(puVar10,puVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = param_1 + 0x11;
    puVar9 = *ppuVar12;
    *ppuVar12 = puVar10;
    _objc_release(puVar9);
    _objc_release(puVar6);
    puVar10 = param_1[0x13];
    _objc_retain(puVar10);
    puVar9 = *ppuVar12;
    _objc_retain(puVar9);
    puVar11 = param_1[3];
    _objc_retain(puVar11);
    _os_unfair_lock_unlock(param_1 + 0xd);
    puVar6 = param_1[0x16];
    func_0x00010c08fa60();
    if (puVar6 == (undefined *)0x0) {
      _objc_initWeak(auStack_138,param_1);
      puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_158 = 0xc2000000;
      pcStack_150 = FUN_104f71290;
      puStack_148 = &UNK_1108434b0;
      param_1 = &puStack_160;
      _objc_copyWeak(auStack_140,auStack_138);
      func_0x0001000d76cc("APPSTORE",&puStack_160);
      _objc_destroyWeak(auStack_140);
      _objc_destroyWeak(auStack_138);
    }
    else {
      puVar6 = puVar9;
      func_0x00010c0e00e0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bde3140(param_1);
      _objc_release(puVar6);
    }
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar10);
    unaff_x20 = param_1;
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_104f71200:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x20 + 4);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010be887a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f71290; end: 104f712bb;  */

void FUN_104f71290(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be887a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f712bc; end: 104f71463; -[SCFriendsFeedOperaPlaylistDataSource _subscribeToFeedUpdateEvents] */

void FUN_104f712bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar6);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa3b80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104f71464;
  puStack_78 = &UNK_11085e798;
  _objc_retain(uVar6);
  uVar2 = uVar1;
  uStack_70 = uVar6;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar6);
  return;
}



/* Entry: 104f71464; end: 104f71633;  */

undefined * FUN_104f71464(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  func_0x00010c28d320();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  do {
    if (lVar1 == 0) {
LAB_104f715d4:
      _objc_release(param_2);
      puVar6 = PTR_PTR_1126ae750;
      func_0x00010c0db140();
      _objc_retainAutoreleasedReturnValue();
LAB_104f715f4:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
        return puVar6;
      }
      ___stack_chk_fail();
      func_0x00010c0ec5e0(lVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      return (undefined *)(ulong)(lVar7 != 0);
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_2);
      }
      lVar9 = *(long *)(lVar10 * 8);
      lVar2 = lVar9;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0720c0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if ((int)lVar4 != 0) {
        func_0x00010c068700();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar9;
        func_0x00010c0cbb20();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar1;
        func_0x00010bf529e0();
        _objc_release(lVar1);
        _objc_release(lVar9);
        if (lVar5 == 0) goto LAB_104f715d4;
        puVar6 = PTR_PTR_1126ae750;
        func_0x00010c2468a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
        goto LAB_104f715f4;
      }
      lVar10 = lVar10 + 1;
    } while (lVar1 != lVar10);
    lVar1 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 104f71634; end: 104f7166b;  */

bool FUN_104f71634(undefined8 param_1,long param_2)

{
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 104f7166c; end: 104f716db;  */

void FUN_104f7166c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bee4800(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f716dc; end: 104f72567; -[SCFriendsFeedOperaPlaylistDataSource _updateWithFeedEntry:] */

void FUN_104f716dc(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  bool bVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3d8;
  uint uStack_3b4;
  undefined **ppuStack_3b0;
  undefined **ppuStack_398;
  undefined *puStack_388;
  undefined8 uStack_380;
  code *pcStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined1 auStack_360 [8];
  undefined1 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined **ppuStack_2a8;
  undefined1 auStack_2a0 [8];
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined *puStack_278;
  undefined **ppuStack_270;
  undefined1 auStack_268 [8];
  undefined8 uStack_260;
  undefined1 auStack_258 [8];
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar2 = param_3;
  func_0x00010c068700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar2;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar6;
  func_0x00010bf529e0();
  _objc_release(ppuVar6);
  _objc_release(ppuVar2);
  if (ppuVar4 == (undefined **)0x0) goto LAB_104f724ac;
  _os_unfair_lock_lock(param_1 + 0xd);
  ppuVar14 = (undefined **)param_1[0x13];
  _objc_retain(ppuVar14);
  puVar3 = param_1[3];
  _objc_retain();
  ppuVar4 = (undefined **)param_1[0x11];
  _objc_retain();
  _os_unfair_lock_unlock(param_1 + 0xd);
  ppuStack_398 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar12 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  if (param_1[0x16] == (undefined *)0x0) {
    ppuVar6 = ppuVar14;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar6 = (undefined **)param_1[0xf];
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_3d8 = ppuVar6;
  func_0x00010c15e3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  uVar24 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  ppuVar6 = param_3;
  func_0x00010c068700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  ppuVar20 = ppuVar7;
  func_0x00010bf529e0();
  ppuVar8 = ppuVar7;
  if (ppuVar20 < (undefined **)0xb) {
    _objc_retain();
  }
  else {
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  ppuVar7 = ppuVar8;
  func_0x00010bf52a60();
  if (ppuVar7 == (undefined **)0x0) {
    uStack_3b4 = 0;
    ppuStack_3b0 = (undefined **)0x0;
    bVar1 = false;
  }
  else {
    uStack_3b4 = 0;
    ppuStack_3b0 = (undefined **)0x0;
    bVar1 = false;
    lVar15 = *plStack_240;
    do {
      ppuVar20 = (undefined **)0x0;
      do {
        if (*plStack_240 != lVar15) {
          _objc_enumerationMutation(ppuVar8);
        }
        ppuVar21 = *(undefined ***)(lStack_248 + (long)ppuVar20 * 8);
        ppuVar9 = ppuVar21;
        FUN_104f706a0();
        if ((int)ppuVar9 != 0) {
          puVar18 = param_1[0x10];
          ppuVar6 = ppuVar21;
          func_0x00010bf490e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4b900();
          _objc_release(ppuVar6);
          if (((ulong)puVar18 & 1) == 0) {
            puVar18 = param_1[0x16];
            func_0x00010c08fa60();
            if (puVar18 != (undefined *)0x0) {
              ppuVar6 = ppuVar21;
              func_0x00010bf490e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar9 = ppuVar6;
              func_0x00010c0720c0();
              _objc_release(ppuVar6);
              uStack_3b4 = (uint)ppuVar9 | uStack_3b4;
            }
            if (ppuStack_3b0 == (undefined **)0x0) {
              ppuStack_3b0 = ppuVar21;
              func_0x00010bf490e0();
              _objc_retainAutoreleasedReturnValue();
            }
            ppuVar6 = ppuVar21;
            func_0x00010bf490e0(ppuVar21);
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = ppuVar4;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar6);
            if (ppuVar9 == (undefined **)0x0) {
              ppuVar6 = ppuVar21;
              func_0x00010bf490e0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar19 = param_1;
              func_0x00010be79960();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar6);
              if (ppuVar19 == (undefined **)0x0) {
                if (ppuStack_3d8 == (undefined **)0x0) {
LAB_104f71b84:
                  ppuVar19 = ppuVar21;
                  FUN_104f70724(ppuVar21,param_1[2],*(undefined1 *)(param_1 + 0x17));
                  if ((int)ppuVar19 != 0) {
                    ppuVar19 = ppuVar21;
                    func_0x00010c0c3fe0(ppuVar21);
                    _objc_retainAutoreleasedReturnValue();
                    puVar18 = param_1[0xe];
                    func_0x00010bf4d700();
                    if (puVar18 == (undefined *)0x4) {
                      ppuStack_3e8 = (undefined **)param_1[0xe];
                      ppuVar6 = ppuVar21;
                      func_0x00010c0c3fe0();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c0ffb40();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(ppuVar6);
                      puVar18 = puVar5;
                      func_0x00010bf529e0();
                      if (puVar18 == (undefined *)0x0) {
                        func_0x00010befa120(ppuStack_398);
                        ppuVar6 = ppuStack_3e8;
                        func_0x00010c0cb5a0();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c1d0640(ppuVar2);
                        _objc_release(ppuVar6);
                        puVar18 = param_1[0x16];
                        func_0x00010c08fa60();
                        if (puVar18 == (undefined *)0x0) {
                          func_0x00010c0cb9a0();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(ppuStack_3d8);
                          bVar1 = true;
                          ppuStack_3d8 = ppuVar21;
                        }
                        else {
                          bVar1 = true;
                          ppuVar21 = ppuVar6;
                        }
                      }
                      else {
                        func_0x00010befa120(puVar5);
                        ppuVar21 = ppuVar6;
                      }
LAB_104f71f98:
                      _objc_release(ppuStack_3e8);
                      ppuVar6 = ppuVar21;
                    }
                    else {
                      if (puVar18 == (undefined *)0x2) {
                        ppuStack_3e8 = (undefined **)param_1[0xe];
                        ppuVar6 = ppuVar21;
                        func_0x00010c0c3fe0(ppuVar21);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c0ffb40();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release(ppuVar6);
                        func_0x00010befa120(puVar5);
                        _CACurrentMediaTime();
                        uVar25 = uVar24;
                        _objc_initWeak(auStack_258,param_1);
                        puVar18 = param_1[0xe];
                        ppuVar6 = ppuVar21;
                        func_0x00010bf490e0();
                        _objc_retainAutoreleasedReturnValue();
                        puStack_2c8 = PTR___NSConcreteStackBlock_11034bd00;
                        uStack_2c0 = 0xc2000000;
                        uStack_2b8 = 0x104f725e8;
                        puStack_2b0 = &UNK_11085e738;
                        _objc_copyWeak(auStack_2a0,auStack_258);
                        ppuStack_2a8 = ppuVar21;
                        uStack_298 = uVar24;
                        func_0x00010c104bc0(puVar18);
                        _objc_release(ppuVar6);
                        _objc_destroyWeak(auStack_2a0);
                        _objc_destroyWeak(auStack_258);
                        ppuVar21 = ppuVar6;
                        uVar24 = uVar25;
                        goto LAB_104f71f98;
                      }
                      if (puVar18 == (undefined *)0x0) {
                        ppuStack_3e8 = (undefined **)param_1[0xe];
                        ppuVar6 = ppuVar21;
                        func_0x00010c0c3fe0(ppuVar21);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c0ffb40();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release(ppuVar6);
                        func_0x00010befa120(puVar5);
                        func_0x00010bf490e0();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010be4cec0(param_1);
                        _objc_release(ppuVar21);
                        goto LAB_104f71f98;
                      }
                    }
                    _objc_release(ppuVar19);
                  }
                }
                else {
                  ppuVar6 = ppuVar21;
                  func_0x00010c0cb9a0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar19 = ppuVar6;
                  func_0x00010bf433a0();
                  _objc_release(ppuVar6);
                  if (ppuVar19 == (undefined **)0x1) goto LAB_104f71b84;
                }
                ppuVar19 = (undefined **)0x0;
              }
              else {
                ppuVar10 = ppuVar19;
                func_0x00010bf4d6e0();
                if (ppuVar10 == (undefined **)0x1) {
                  ppuVar6 = (undefined **)param_1[0xe];
                  ppuVar10 = ppuVar21;
                  func_0x00010c0c3fe0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bf4d700();
                  _objc_release(ppuVar10);
                  if (ppuVar6 == (undefined **)0x4) {
                    ppuVar6 = (undefined **)param_1[0xe];
                    func_0x00010c0c3fe0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0ffb40();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(ppuVar21);
                    func_0x00010befa120(puVar5);
                    _objc_release(ppuVar6);
                  }
                  else if (ppuVar6 == (undefined **)0x2) {
                    puVar18 = param_1[0xe];
                    ppuVar6 = ppuVar21;
                    func_0x00010c0c3fe0(ppuVar21);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0ffb40();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(ppuVar6);
                    func_0x00010befa120(puVar5);
                    _CACurrentMediaTime();
                    uVar25 = uVar24;
                    _objc_initWeak(auStack_258,param_1);
                    puVar23 = param_1[0xe];
                    ppuVar6 = ppuVar21;
                    func_0x00010c0c3fe0();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar10 = ppuVar21;
                    func_0x00010bf490e0();
                    _objc_retainAutoreleasedReturnValue();
                    puStack_290 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_288 = 0xc2000000;
                    pcStack_280 = FUN_104f72568;
                    puStack_278 = &UNK_11085e738;
                    _objc_copyWeak(auStack_268,auStack_258);
                    ppuStack_270 = ppuVar21;
                    uStack_260 = uVar24;
                    func_0x00010c104bc0(puVar23);
                    _objc_release(ppuVar10);
                    _objc_release(ppuVar6);
                    _objc_destroyWeak(auStack_268);
                    _objc_destroyWeak(auStack_258);
                    _objc_release(puVar18);
                    uVar24 = uVar25;
                  }
                  else if (ppuVar6 == (undefined **)0x0) {
                    func_0x00010befa120(puVar5);
                  }
                }
                else {
                  func_0x00010befa120(puVar5);
                }
              }
            }
            else {
              ppuVar19 = (undefined **)param_1[0xe];
              func_0x00010c0c3fe0(ppuVar21);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0ffb60();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar21);
              func_0x00010befa120(ppuStack_398);
              ppuVar6 = ppuVar19;
              func_0x00010c0cb5a0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(ppuVar2);
              _objc_release(ppuVar6);
              if ((ppuVar19 != ppuVar9) &&
                 (ppuVar21 = ppuVar19, func_0x00010c071ae0(), ((ulong)ppuVar21 & 1) == 0)) {
                ppuVar6 = ppuVar19;
                func_0x00010c0cb5a0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar12);
                _objc_release(ppuVar6);
              }
            }
            _objc_release(ppuVar19);
            _objc_release(ppuVar9);
          }
        }
        ppuVar20 = (undefined **)((long)ppuVar20 + 1);
      } while (ppuVar7 != ppuVar20);
      ppuVar7 = ppuVar8;
      func_0x00010bf52a60();
    } while (ppuVar7 != (undefined **)0x0);
  }
  _objc_release(ppuVar8);
  puVar18 = param_1[0x16];
  func_0x00010c08fa60();
  if (puVar18 == (undefined *)0x0 || (uStack_3b4 & 1) != 0) {
LAB_104f72044:
    puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2f8 = 0;
    plStack_300 = (long *)0x0;
    lStack_308 = 0;
    uStack_310 = 0;
    puVar23 = puVar5;
    func_0x00010bf51e00();
    puVar13 = puVar23;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar23);
    puVar23 = puVar13;
    func_0x00010bf52a60();
    if (puVar23 != (undefined *)0x0) {
      lVar15 = *plStack_300;
      bVar17 = true;
      do {
        puVar22 = (undefined *)0x0;
        do {
          if (*plStack_300 != lVar15) {
            _objc_enumerationMutation(puVar13);
          }
          lVar16 = *(long *)(lStack_308 + (long)puVar22 * 8);
          if ((bVar17) && (lVar11 = lVar16, func_0x00010bf4d6e0(), lVar11 == 4)) {
            func_0x00010befa120(ppuStack_398);
            func_0x00010c0cb5a0(lVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppuVar2);
            _objc_release(lVar16);
            bVar1 = true;
            bVar17 = true;
          }
          else {
            func_0x00010befa120(puVar18);
            bVar17 = false;
          }
          puVar22 = puVar22 + 1;
        } while (puVar23 != puVar22);
        puVar23 = puVar13;
        func_0x00010bf52a60();
      } while (puVar23 != (undefined *)0x0);
    }
    _objc_release(puVar13);
    func_0x00010bf51e00(puVar18);
    _objc_release();
    puVar23 = puVar18;
    func_0x00010c0d3c80();
    puVar13 = param_1[0xf];
    param_1[0xf] = puVar23;
    _objc_release(puVar13);
    puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    lStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    plStack_340 = (long *)0x0;
    _objc_retain(ppuVar14);
    ppuVar7 = ppuVar14;
    func_0x00010bf52a60();
    ppuVar6 = ppuVar14;
    if (ppuVar7 != (undefined **)0x0) {
      lVar15 = *plStack_340;
      do {
        ppuVar20 = (undefined **)0x0;
        do {
          if (*plStack_340 != lVar15) {
            _objc_enumerationMutation(ppuVar14);
          }
          ppuVar6 = *(undefined ***)(lStack_348 + (long)ppuVar20 * 8);
          ppuVar8 = ppuVar6;
          func_0x00010c0cb5a0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(ppuVar8);
          if (ppuVar9 == (undefined **)0x0) {
            func_0x00010befa120(ppuStack_398);
            ppuVar8 = ppuVar6;
            func_0x00010c0cb5a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppuVar2);
            _objc_release(ppuVar8);
            func_0x00010c0cb5a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar23);
            _objc_release(ppuVar6);
          }
          ppuVar20 = (undefined **)((long)ppuVar20 + 1);
        } while (ppuVar7 != ppuVar20);
        ppuVar7 = ppuVar14;
        func_0x00010bf52a60();
      } while (ppuVar7 != (undefined **)0x0);
    }
    _objc_release(ppuVar14);
    puVar13 = puVar23;
    func_0x00010bf529e0();
    if (puVar13 != (undefined *)0x0) {
      ppuVar6 = ppuStack_398;
      func_0x00010c246ca0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010c0d3c80();
      _objc_release(ppuStack_398);
      _objc_release(ppuVar6);
      ppuStack_398 = ppuVar7;
    }
    if ((bVar1) || (puVar13 = puVar12, func_0x00010bf529e0(), puVar13 != (undefined *)0x0)) {
      _os_unfair_lock_lock(param_1 + 0xd);
      ppuVar6 = ppuStack_398;
      func_0x00010bf51e00();
      puVar13 = param_1[0x13];
      param_1[0x13] = (undefined *)ppuVar6;
      _objc_release(puVar13);
      ppuVar6 = ppuVar2;
      func_0x00010bf51e00();
      puVar13 = param_1[0x11];
      param_1[0x11] = (undefined *)ppuVar6;
      _objc_release(puVar13);
      _os_unfair_lock_unlock(param_1 + 0xd);
      puVar13 = param_1[0x16];
      func_0x00010c08fa60();
      if (puVar13 == (undefined *)0x0) {
        _objc_initWeak(auStack_258,param_1);
        puStack_388 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_380 = 0xc2000000;
        pcStack_378 = FUN_104f72668;
        puStack_370 = &UNK_1108488f8;
        ppuVar6 = &puStack_388;
        _objc_retain(puVar12);
        puStack_368 = puVar12;
        _objc_copyWeak(auStack_360,auStack_258);
        uStack_358 = bVar1;
        func_0x000100162d98("APPSTORE",&puStack_388);
        _objc_destroyWeak(auStack_360);
        _objc_release(puStack_368);
        _objc_destroyWeak(auStack_258);
      }
      else {
        ppuVar6 = ppuVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bde3140(param_1);
        _objc_release(ppuVar6);
      }
    }
    _objc_release(puVar23);
    _objc_release(puVar18);
  }
  else {
    ppuVar7 = ppuStack_3b0;
    func_0x00010c08fa60();
    if (ppuVar7 != (undefined **)0x0) {
      _objc_retain(ppuStack_3b0);
      puVar18 = param_1[0x16];
      param_1[0x16] = (undefined *)ppuStack_3b0;
      _objc_release(puVar18);
      goto LAB_104f72044;
    }
    func_0x00010be0e200(param_1);
  }
  _objc_release(ppuStack_3d8);
  _objc_release(puVar5);
  _objc_release(ppuVar2);
  _objc_release(ppuStack_3b0);
  _objc_release(puVar12);
  _objc_release(ppuStack_398);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar14);
LAB_104f724ac:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _os_unfair_lock_unlock(ppuVar6 + 0xd);
    __Unwind_Resume();
    ppuVar6 = param_3 + 5;
    _objc_loadWeakRetained(ppuVar6);
    puVar12 = param_3[4];
    func_0x00010bf490e0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfecc0(param_3[6],ppuVar6);
    _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
    return;
  }
  return;
}



/* Entry: 104f72568; end: 104f72667;  */

void FUN_104f72568(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf490e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfecc0(*(undefined8 *)(param_1 + 0x30),lVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f72668; end: 104f726d7;  */

void FUN_104f72668(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bed65c0();
    _objc_release(lVar1);
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be887a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104f726d8; end: 104f728ab; -[SCFriendsFeedOperaPlaylistDataSource _subscribeToSnapchatterWithSenderUserId:replyUserId:isCampaignConversation:] */

void FUN_104f726d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  FUN_104f772b8(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c2445e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar6 = uVar5;
  uStack_70 = param_5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f728ac; end: 104f7294b;  */

void FUN_104f728ac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 = param_2, func_0x00010bf529e0(), lVar2 != 0)) {
    lVar2 = param_2;
    FUN_104f77394(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                  *(undefined8 *)(lVar1 + 0xc0),*(undefined8 *)(lVar1 + 200),
                  *(undefined8 *)(lVar1 + 0x10),*(undefined1 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bedcbe0();
    _objc_release(param_1);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f7294c; end: 104f72ad7; -[SCFriendsFeedOperaPlaylistDataSource _subscribeToGroupUpdates:] */

void FUN_104f7294c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfceb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfcefc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 104f72ad8; end: 104f72b37;  */

void FUN_104f72ad8(long param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126b2ca8;
    func_0x00010bfcf5e0(PTR_PTR_1126b2ca8,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bedcbe0();
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104f72b38; end: 104f72cdb; -[SCFriendsFeedOperaPlaylistDataSource _updateParticipants:] */

void FUN_104f72b38(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x68);
  uVar5 = *(ulong *)(param_1 + 0x18);
  _objc_retain(param_3);
  _objc_retain(uVar5);
  if (param_3 == uVar5) {
    _objc_release(uVar5);
    _objc_release(param_3);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = param_3;
    _objc_release(uVar2);
    _os_unfair_lock_unlock(param_1 + 0x68);
  }
  else {
    if (uVar5 == 0) {
      _objc_release(param_3);
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      *(ulong *)(param_1 + 0x18) = param_3;
      _objc_release(uVar2);
      _os_unfair_lock_unlock(param_1 + 0x68);
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      _objc_release(param_3);
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      *(ulong *)(param_1 + 0x18) = param_3;
      _objc_release(uVar2);
      _os_unfair_lock_unlock(param_1 + 0x68);
      if ((uVar1 & 1) != 0) goto LAB_104f72cac;
    }
    lVar3 = param_1 + 0x58;
    _objc_loadWeakRetained();
    if (lVar3 != 0) {
      lVar4 = *(long *)(param_1 + 0xb0);
      func_0x00010c08fa60();
      _objc_release(lVar3);
      if (lVar4 == 0) {
        _objc_initWeak(auStack_38,param_1);
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0xc2000000;
        pcStack_50 = FUN_104f72cdc;
        puStack_48 = &UNK_1108434b0;
        _objc_copyWeak(auStack_40,auStack_38);
        func_0x000100162d98("APPSTORE",&puStack_60);
        _objc_destroyWeak(auStack_40);
        _objc_destroyWeak(auStack_38);
      }
    }
  }
LAB_104f72cac:
  _objc_release(param_3);
  return;
}



/* Entry: 104f72cdc; end: 104f72d07;  */

void FUN_104f72cdc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed2f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f72d08; end: 104f72def; -[SCFriendsFeedOperaPlaylistDataSource _updateCurrentItemIfNecessary:] */

void FUN_104f72d08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x58;
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
  uVar6 = param_3;
  func_0x00010bf4b900(param_3,param_2,lVar5);
  _objc_release(param_3);
  if ((int)uVar6 != 0) {
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    func_0x00010c101400();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 104f72df0; end: 104f72e8b; -[SCFriendsFeedOperaPlaylistDataSource _refreshOperaPlaylistGroup] */

void FUN_104f72df0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104f72e8c;
  puStack_30 = &UNK_110858d00;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x00010bf0c2a0(param_1,param_2,uVar1,&puStack_48);
  _objc_release(param_1);
  _objc_release(uStack_28);
  _objc_release(uVar1);
  return;
}



/* Entry: 104f72e8c; end: 104f72e8f;  */

void FUN_104f72e8c(void)

{
  return;
}



/* Entry: 104f72e90; end: 104f72fe3; -[SCFriendsFeedOperaPlaylistDataSource _updateAllItems] */

void FUN_104f72e90(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x68);
  lVar7 = *(long *)(param_1 + 0x98);
  _objc_retain(lVar7);
  _os_unfair_lock_unlock(param_1 + 0x68);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(lVar7);
        }
        uVar8 = *(undefined8 *)(lStack_118 + lVar11 * 8);
        lVar2 = param_1 + 0x58;
        _objc_loadWeakRetained();
        func_0x00010c0cb5a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c101400(lVar2,param_2,uVar8);
        _objc_release(uVar8);
        _objc_release(lVar2);
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = lVar7;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lVar7 = *(long *)(lVar7 + 0x78);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60(lVar7,param_2,&uStack_250,auStack_208,0x10);
  if (lVar1 != 0) {
    lVar10 = *plStack_240;
    do {
      lVar11 = 0;
      do {
        if (*plStack_240 != lVar10) {
          _objc_enumerationMutation(lVar7);
        }
        uVar9 = *(ulong *)(lStack_248 + lVar11 * 8);
        uVar3 = uVar9;
        func_0x00010c0cb5a0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((uVar4 & 1) != 0) {
          _objc_retain(uVar9);
          goto LAB_104f730e8;
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = lVar7;
      func_0x00010bf52a60(lVar7,param_2,&uStack_250,auStack_208,0x10);
    } while (lVar1 != 0);
  }
  uVar9 = 0;
LAB_104f730e8:
  _objc_release(lVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126b2cb0;
  func_0x00010bfac040(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)((long)puVar5 + 0x30);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 104f72fe4; end: 104f73137; -[SCFriendsFeedOperaPlaylistDataSource _preparingPlaybackMessageForMessageId:] */

void FUN_104f72fe4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = *(long *)(param_1 + 0x78);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        uVar7 = *(ulong *)(lStack_128 + lVar9 * 8);
        uVar2 = uVar7;
        func_0x00010c0cb5a0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          _objc_retain(uVar7);
          goto LAB_104f730e8;
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  uVar7 = 0;
LAB_104f730e8:
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126b2cb0;
  func_0x00010bfac040(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104f73138; end: 104f73193; -[SCFriendsFeedOperaPlaylistDataSource _logFriendsFeedSnapPresentReady] */

void FUN_104f73138(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2cb0;
  func_0x00010bfac040(PTR_PTR_1126b2cb0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f73194; end: 104f731f3; -[SCFriendsFeedOperaPlaylistDataSource _failToPresentWithReason:] */

void FUN_104f73194(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac700();
  _objc_release(uVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1000a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f731f4; end: 104f731f7; -[SCFriendsFeedOperaPlaylistDataSource operaMediaBundleProvider] */

void FUN_104f731f4(void)

{
  return;
}



/* Entry: 104f731f8; end: 104f7332b; -[SCFriendsFeedOperaPlaylistDataSource canProvideMediaBundleForPlaylistItem:] */

ulong FUN_104f731f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  uVar8 = param_1 + 0x58;
  _objc_loadWeakRetained();
  uVar1 = uVar8;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar8);
  puVar2 = PTR_PTR_1126b2c68;
  _objc_opt_class(PTR_PTR_1126b2c68);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar8 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar8 = 0;
  }
  _objc_retain(uVar8);
  _objc_release(uVar1);
  uVar1 = uVar8;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  if (uVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c07e300();
    uVar6 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c07e320();
    uVar8 = uVar1;
    FUN_104f6ec4c(uVar1,0x58,uVar5,uVar7,1,1,0);
    _objc_release(uVar6);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  return uVar8;
}



/* Entry: 104f7332c; end: 104f7343b; -[SCFriendsFeedOperaPlaylistDataSource mediaBundleFromPlaylistItem:] */

void FUN_104f7332c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar6 = param_1 + 0x58;
  _objc_loadWeakRetained();
  uVar1 = uVar6;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126b2c68;
  _objc_opt_class(PTR_PTR_1126b2c68);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar6 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar1);
  uVar1 = uVar6;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0xd0);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c07e2c0();
    _objc_release(uVar4);
    uVar6 = uVar1;
    func_0x000104f6eea0(uVar1,param_3,uVar5,1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 104f7343c; end: 104f7356b; -[SCFriendsFeedOperaPlaylistDataSource .cxx_destruct] */

void FUN_104f7343c(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f7356c; end: 104f735c3;  */

bool FUN_104f7356c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010c0ecae0(param_2);
  lVar1 = param_3;
  func_0x00010c0ecae0(param_3);
  _objc_release(param_3);
  return lVar1 < param_2;
}



/* Entry: 104f735c4; end: 104f737f3; -[SCFriendsFeedPlaybackFeaturePlugin initWithDataSource:actionEvents:circumstanceEngine:isShortcutFilterApplied:conversationId:userId:conversationDataFetcher:conversationUpdateEventPublisher:performer:] */

undefined8 *
FUN_104f735c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e5428;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) goto LAB_104f73790;
  _objc_retain(param_3);
  uVar2 = puVar1[1];
  puVar1[1] = param_3;
  _objc_release(uVar2);
  _objc_retain(param_4);
  uVar2 = puVar1[2];
  puVar1[2] = param_4;
  _objc_release(uVar2);
  if ((param_6 & 1) == 0) {
    puVar3 = PTR_PTR_1126b2cb8;
    func_0x00010c071980();
    if ((int)puVar3 == 0) goto LAB_104f73720;
    puVar3 = PTR_PTR_1126b2cb8;
    func_0x00010c23f560();
    *(bool *)(puVar1 + 3) = puVar3 != (undefined *)0xffffffffffffffff;
    if (puVar3 != (undefined *)0xffffffffffffffff) {
      puVar3 = PTR_PTR_1126b2cc0;
      _objc_alloc(PTR_PTR_1126b2cc0);
      func_0x00010c005580();
      puVar4 = PTR_PTR_1126b2cc8;
      _objc_alloc();
      func_0x00010c005900();
      uVar2 = puVar1[4];
      puVar1[4] = puVar4;
      _objc_release(uVar2);
      _objc_release(puVar3);
    }
  }
  else {
LAB_104f73720:
    *(undefined1 *)(puVar1 + 3) = 0;
  }
  puVar3 = PTR_PTR_1126ae720;
  _objc_retain(param_5);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = puVar1[7];
  puVar1[7] = puVar3;
  _objc_release(uVar2);
  _objc_release(param_5);
LAB_104f73790:
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f737f4; end: 104f73833;  */

void FUN_104f737f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c067f00(uVar2,param_2,&PTR____CFConstantStringClassReference_110dbd7d8,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,uVar2);
  return;
}



/* Entry: 104f73834; end: 104f7383b; -[SCFriendsFeedPlaybackFeaturePlugin launchCandidates] */

void FUN_104f73834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08b5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_launchCandidates_112600778);
  return;
}



/* Entry: 104f7383c; end: 104f73893; -[SCFriendsFeedPlaybackFeaturePlugin setPlaylistItemController:] */

void FUN_104f7383c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f73894; end: 104f738c3; -[SCFriendsFeedPlaybackFeaturePlugin setOperaControlling:] */

void FUN_104f73894(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f738c4; end: 104f73987; -[SCFriendsFeedPlaybackFeaturePlugin dependentPlugins] */

void FUN_104f738c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  ppuVar3 = &puStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2c78;
  _objc_alloc();
  func_0x00010bff0100();
  if ((*(char *)(param_1 + 0x18) == '\x01') && (*(long *)(param_1 + 0x20) != 0)) {
    ppuVar3 = &puStack_38;
    uVar4 = 2;
    puStack_38 = puVar1;
    lStack_30 = *(long *)(param_1 + 0x20);
  }
  else {
    uVar4 = 1;
    puStack_40 = puVar1;
  }
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,ppuVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar3);
  puVar2 = puVar1;
  func_0x00010be89fa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(ppuVar3,param_2,puVar1,puVar2);
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104f73988; end: 104f739e7; -[SCFriendsFeedPlaybackFeaturePlugin addEventListenersWithEventAnnouncing:] */

void FUN_104f73988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be89fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(param_3,param_2,param_1,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f739e8; end: 104f73a0f; -[SCFriendsFeedPlaybackFeaturePlugin playlistDataSource] */

void FUN_104f739e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f73a10; end: 104f73a17; -[SCFriendsFeedPlaybackFeaturePlugin type] */

void FUN_104f73a10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c084c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_itemType_1125fed20);
  return;
}



/* Entry: 104f73a18; end: 104f73ad3; -[SCFriendsFeedPlaybackFeaturePlugin _registeredEventsForOperaSession] */

void FUN_104f73a18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c13a0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_48 = puVar1;
  func_0x00010bf96a00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &puStack_48;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c13a0c0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar5;
  func_0x00010c0720c0(ppuVar5,param_2,puVar2);
  if ((int)ppuVar4 == 0) {
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010bf96a00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar5;
    func_0x00010c0720c0(ppuVar5,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if ((int)ppuVar4 == 0) goto LAB_104f73b6c;
  }
  else {
    _objc_release(puVar2);
  }
  func_0x00010be02260(puVar1);
LAB_104f73b6c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 104f73ad4; end: 104f73b83; -[SCFriendsFeedPlaybackFeaturePlugin operaViewDidSendEvent:page:params:] */

void FUN_104f73ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c13a0c0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  if ((int)uVar2 == 0) {
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010bf96a00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) goto LAB_104f73b6c;
  }
  else {
    _objc_release(puVar1);
  }
  func_0x00010be02260(param_1);
LAB_104f73b6c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f73b84; end: 104f73bef; -[SCFriendsFeedPlaybackFeaturePlugin _dismiss] */

void FUN_104f73b84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  if (0 < (int)uVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf83ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b2cd0,PTR_s_dismissIfAllowedWithOperaControl_1125be850,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104f73bf0; end: 104f73c4f; -[SCFriendsFeedPlaybackFeaturePlugin .cxx_destruct] */

void FUN_104f73bf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f73c50; end: 104f73dcb; -[SCFriendsFeedSnapBackConversationObserver initWithConversationId:userId:conversationDataFetcher:conversationUpdateEventPublisher:performer:] */

undefined1 *
FUN_104f73c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e5430;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x48) = 0;
    func_0x00010bec87a0(puVar1);
    func_0x00010be9d200(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f73dcc; end: 104f73faf; -[SCFriendsFeedSnapBackConversationObserver hasUnseenIncomingItemsOtherThanMessageId:] */

char FUN_104f73dcc(ulong param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  char cVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x38);
  bVar1 = *(byte *)(param_1 + 0x48);
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x38);
  if ((bVar1 & 1) == 0) {
    cVar6 = '\x01';
  }
  else {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    if (lVar3 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar2);
          }
          uVar7 = *(ulong *)(lStack_128 + lVar9 * 8);
          uVar4 = param_1;
          func_0x00010be5fd80(param_1,param_2,uVar7,*(undefined8 *)(param_1 + 0x10));
          if ((uVar4 & 1) != 0) {
LAB_104f73f38:
            cVar6 = '\x01';
            goto LAB_104f73f3c;
          }
          uVar4 = uVar7;
          func_0x00010bf490e0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c0720c0();
          _objc_release(uVar4);
          if (((((uVar5 & 1) == 0) &&
               (uVar4 = uVar7, func_0x00010c07d940(uVar7,param_2,*(undefined8 *)(param_1 + 0x10)),
               (uVar4 & 1) == 0)) && (uVar4 = uVar7, func_0x00010c07f920(), (uVar4 & 1) == 0)) &&
             (func_0x00010c07bc00(uVar7,param_2,*(undefined8 *)(param_1 + 0x10)), (int)uVar7 == 0))
          goto LAB_104f73f38;
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar3 != 0);
    }
    cVar6 = '\0';
LAB_104f73f3c:
    _objc_release(lVar2);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return cVar6;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(cVar6 + '8');
  __Unwind_Resume();
  _os_unfair_lock_lock(param_3 + 0x38);
  cVar6 = *(char *)(param_3 + 0x49);
  _os_unfair_lock_unlock(param_3 + 0x38);
  return cVar6;
}



/* Entry: 104f73fb0; end: 104f73fe3; -[SCFriendsFeedSnapBackConversationObserver didCurrentUserReplyDuringPlayback] */

undefined1 FUN_104f73fb0(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar1 = *(undefined1 *)(param_1 + 0x49);
  _os_unfair_lock_unlock(param_1 + 0x38);
  return uVar1;
}



/* Entry: 104f73fe4; end: 104f74187; -[SCFriendsFeedSnapBackConversationObserver didCurrentUserReactToAnyOfMessageIds:] */

undefined8 FUN_104f73fe4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x38);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  uVar4 = 0;
  if (lVar1 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x22 = *(long *)(param_1 + 0x40);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x22 != 0) {
          lVar2 = unaff_x22;
          func_0x00010c120ea0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010bf529e0();
          _objc_release(lVar2);
          _objc_release(unaff_x22);
          if (lVar3 != 0) {
            uVar4 = 1;
            goto LAB_104f74108;
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    uVar4 = 0;
  }
LAB_104f74108:
  _objc_release(param_3);
  _os_unfair_lock_unlock(param_1 + 0x38);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar4;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x38);
  lVar1 = param_3;
  __Unwind_Resume();
  pcStack_138 = FUN_104f74188;
  uVar5 = *(undefined8 *)(lVar1 + 0x28);
  lStack_160 = unaff_x22;
  uStack_158 = uVar4;
  lStack_150 = param_3;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(uVar5);
  _objc_initWeak(auStack_168,lVar1);
  uVar4 = *(undefined8 *)(lVar1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar5);
  _objc_copyWeak(auStack_170,auStack_168);
  func_0x00010bfa8a40(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_170);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_168);
  _objc_release(uVar5);
  return uVar5;
}



/* Entry: 104f74188; end: 104f7429b; -[SCFriendsFeedSnapBackConversationObserver _seedRecentMessages] */

void FUN_104f74188(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar2);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfa8a40(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  return;
}



/* Entry: 104f7429c; end: 104f74373;  */

void FUN_104f7429c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104f74374; end: 104f743b3;  */

void FUN_104f74374(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be39340(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f743b4; end: 104f74553; -[SCFriendsFeedSnapBackConversationObserver _subscribeToUpdates] */

void FUN_104f743b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar6);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf509e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104f74554;
  puStack_78 = &UNK_11085e8a8;
  _objc_retain(uVar6);
  uVar3 = uVar2;
  uStack_70 = uVar6;
  func_0x00010bfad7a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar6);
  return;
}



/* Entry: 104f74554; end: 104f7465f;  */

undefined8 FUN_104f74554(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf50280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 104f74660; end: 104f7483b; -[SCFriendsFeedSnapBackConversationObserver _ingestMessages:markSeeded:] */

undefined1 * FUN_104f74660(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long unaff_x23;
  long unaff_x24;
  undefined1 *puVar11;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar12;
  undefined1 *unaff_x27;
  undefined1 *puVar13;
  ulong unaff_x28;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  ulong uStack_190;
  undefined1 *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar2 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x38);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  puVar6 = auStack_f0;
  puVar13 = param_3;
  func_0x00010bf52a60();
  if (puVar13 != (undefined1 *)0x0) {
    unaff_x25 = *plStack_120;
    unaff_x26 = 1;
    do {
      unaff_x27 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x24 = *(long *)(lStack_128 + (long)unaff_x27 * 8);
        unaff_x23 = unaff_x24;
        func_0x00010bf490e0();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = unaff_x23;
        func_0x00010c08fa60();
        if (lVar1 != 0) {
          if ((int)param_4 == 0) {
            lVar1 = unaff_x24;
            func_0x00010c07d940();
            if (((int)lVar1 != 0) && (lVar1 = unaff_x24, func_0x00010c15dfc0(), (int)lVar1 != 0)) {
              *(undefined1 *)(param_1 + 0x49) = 1;
            }
          }
          else {
            lVar1 = *(long *)(param_1 + 0x40);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = (ulong)(lVar1 == 0);
            _objc_release();
            if (lVar1 != 0) goto LAB_104f74784;
          }
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40));
        }
LAB_104f74784:
        _objc_release(unaff_x23);
        unaff_x27 = unaff_x27 + 1;
      } while (puVar13 != unaff_x27);
      puVar6 = auStack_f0;
      puVar13 = param_3;
      puVar2 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar13 != (undefined1 *)0x0);
  }
  _objc_release(param_3);
  if ((int)param_4 != 0) {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  _os_unfair_lock_unlock(param_1 + 0x38);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x38);
  __Unwind_Resume(param_3);
  puVar9 = &uStack_260;
  pcStack_138 = FUN_104f7483c;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_190 = unaff_x28;
  puStack_188 = unaff_x27;
  uStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  lStack_170 = unaff_x24;
  lStack_168 = unaff_x23;
  uStack_160 = 0;
  uStack_158 = param_4;
  puStack_150 = param_3;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  func_0x00010c120dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = (undefined1 *)puVar2;
  func_0x00010bf52a60();
  puVar13 = (undefined1 *)0x0;
  if (puVar12 != (undefined1 *)0x0) {
    lVar1 = *plStack_250;
    do {
      puVar13 = (undefined1 *)0x0;
      do {
        if (*plStack_250 != lVar1) {
          _objc_enumerationMutation(puVar2);
        }
        puVar11 = *(undefined1 **)(lStack_258 + (long)puVar13 * 8);
        puVar3 = puVar11;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar6;
        puVar9 = (undefined8 *)puVar4;
        func_0x00010c0720c0();
        if ((int)puVar5 == 0) {
          func_0x00010c1209e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar11;
          func_0x00010c281e00();
          _objc_release(puVar11);
          _objc_release(puVar4);
          _objc_release(puVar3);
          if (((ulong)puVar5 & 1) != 0) {
            puVar13 = (undefined1 *)0x1;
            goto LAB_104f74990;
          }
        }
        else {
          _objc_release(puVar4);
          _objc_release(puVar3);
        }
        puVar13 = puVar13 + 1;
      } while (puVar12 != puVar13);
      puVar12 = (undefined1 *)puVar2;
      puVar9 = &uStack_260;
      func_0x00010bf52a60();
    } while (puVar12 != (undefined1 *)0x0);
    puVar13 = (undefined1 *)0x0;
  }
LAB_104f74990:
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return puVar13;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar9);
  _os_unfair_lock_lock(puVar6 + 0x38);
  _objc_retain(puVar9);
  puVar13 = (undefined1 *)puVar9;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar13 != (undefined1 *)0x0) {
    puVar12 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar9);
      }
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0cb5a0(*(undefined8 *)((long)puVar12 * 8));
      func_0x00010c0df7c0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      func_0x00010c12d3e0(*(undefined8 *)(puVar6 + 0x40));
      _objc_release(puVar8);
      puVar12 = puVar12 + 1;
    } while (puVar13 != puVar12);
    puVar13 = (undefined1 *)puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  _os_unfair_lock_unlock(puVar6 + 0x38);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return (undefined1 *)puVar9;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(puVar6 + 0x38);
  __Unwind_Resume(puVar9);
  _objc_storeStrong((undefined1 *)((long)puVar9 + 0x40),0);
  _objc_storeStrong((undefined1 *)((long)puVar9 + 0x30),0);
  _objc_storeStrong((undefined1 *)((long)puVar9 + 0x28),0);
  _objc_storeStrong((undefined1 *)((long)puVar9 + 0x20),0);
  _objc_storeStrong((undefined1 *)((long)puVar9 + 0x18),0);
  _objc_storeStrong((undefined1 *)((long)puVar9 + 0x10),0);
  puVar6 = (undefined1 *)((long)puVar9 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar6,0);
  return puVar6;
}



/* Entry: 104f7483c; end: 104f749df; -[SCFriendsFeedSnapBackConversationObserver _message:hasUnreadReactionFromUserOtherThan:] */

undefined1 * FUN_104f7483c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c120dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf52a60();
  puVar7 = (undefined1 *)0x0;
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        puVar8 = *(undefined1 **)(lStack_128 + lVar11 * 8);
        puVar7 = puVar8;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar7;
        func_0x00010c272380();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_4;
        puVar6 = (undefined8 *)puVar10;
        func_0x00010c0720c0();
        if ((int)lVar2 == 0) {
          func_0x00010c1209e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar8;
          func_0x00010c281e00();
          _objc_release(puVar8);
          _objc_release(puVar10);
          _objc_release(puVar7);
          if (((ulong)puVar3 & 1) != 0) {
            puVar7 = (undefined1 *)0x1;
            goto LAB_104f74990;
          }
        }
        else {
          _objc_release(puVar10);
          _objc_release(puVar7);
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    puVar7 = (undefined1 *)0x0;
  }
LAB_104f74990:
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar7;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  _os_unfair_lock_lock(param_4 + 0x38);
  _objc_retain(puVar6);
  puVar7 = (undefined1 *)puVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar7 != (undefined1 *)0x0) {
    puVar10 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar6);
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0cb5a0(*(undefined8 *)((long)puVar10 * 8));
      func_0x00010c0df7c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010c12d3e0(*(undefined8 *)(param_4 + 0x40));
      _objc_release(puVar5);
      puVar10 = puVar10 + 1;
    } while (puVar7 != puVar10);
    puVar7 = (undefined1 *)puVar6;
    func_0x00010bf52a60();
  }
  _objc_release(puVar6);
  _os_unfair_lock_unlock(param_4 + 0x38);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return (undefined1 *)puVar6;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_4 + 0x38);
  __Unwind_Resume(puVar6);
  _objc_storeStrong((undefined1 *)((long)puVar6 + 0x40),0);
  _objc_storeStrong((undefined1 *)((long)puVar6 + 0x30),0);
  _objc_storeStrong((undefined1 *)((long)puVar6 + 0x28),0);
  _objc_storeStrong((undefined1 *)((long)puVar6 + 0x20),0);
  _objc_storeStrong((undefined1 *)((long)puVar6 + 0x18),0);
  _objc_storeStrong((undefined1 *)((long)puVar6 + 0x10),0);
  puVar7 = (undefined1 *)((long)puVar6 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar7,0);
  return puVar7;
}



/* Entry: 104f749e0; end: 104f74b77; -[SCFriendsFeedSnapBackConversationObserver _removeMessages:] */

void FUN_104f749e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x38);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0cb5a0(*(undefined8 *)(lVar6 * 8));
      func_0x00010c0df7c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x40));
      _objc_release(puVar4);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _os_unfair_lock_unlock(param_1 + 0x38);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x38);
  __Unwind_Resume(param_3);
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 104f74b78; end: 104f74be3; -[SCFriendsFeedSnapBackConversationObserver .cxx_destruct] */

void FUN_104f74b78(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 104f74be4; end: 104f74c2f; +[SCFriendsFeedSnapBackPagingGateLayer layerWithPage:] */

void FUN_104f74be4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2cd8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f74c30; end: 104f74d17; -[SCFriendsFeedSnapBackPagingGateLayer initWithPage:] */

undefined1 * FUN_104f74c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e5438;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f74d18; end: 104f74d1f; -[SCFriendsFeedSnapBackPagingGateLayer type] */

undefined8 FUN_104f74d18(void)

{
  return 0x19;
}



/* Entry: 104f74d20; end: 104f74d2b; -[SCFriendsFeedSnapBackPagingGateLayer layerViewControllerClass] */

void FUN_104f74d20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126b2ce0);
  return;
}



/* Entry: 104f74d2c; end: 104f74d37; -[SCFriendsFeedSnapBackPagingGateLayer isEqual:] */

bool FUN_104f74d2c(long param_1,undefined8 param_2,long param_3)

{
  return param_1 == param_3;
}



/* Entry: 104f74d38; end: 104f74d3f; -[SCFriendsFeedSnapBackPagingGateLayer shouldBlockBlock] */

undefined8 FUN_104f74d38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104f74d40; end: 104f74d47; -[SCFriendsFeedSnapBackPagingGateLayer onBlockedBlock] */

undefined8 FUN_104f74d40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


