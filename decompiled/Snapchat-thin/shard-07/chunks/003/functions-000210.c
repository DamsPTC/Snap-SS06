/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053c400c; end: 1053c4043;  */

void FUN_1053c400c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1053c4044; end: 1053c4047;  */

void FUN_1053c4044(void)

{
  return;
}



/* Entry: 1053c4048; end: 1053c4127;  */

void FUN_1053c4048(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c1b00e0(uVar3);
  puVar1 = PTR_PTR_1126b8360;
  _objc_opt_new(PTR_PTR_1126b8360);
  func_0x00010c1aa8e0();
  _objc_release(param_2);
  func_0x00010c196ee0(puVar1);
  _objc_release(param_3);
  func_0x00010c06e0c0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1afd60(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f380();
  func_0x00010c1ea960(puVar1);
  _objc_release(puVar2);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053c4128; end: 1053c415f; -[SCCustomojiRenderRequest cancel] */

void FUN_1053c4128(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c06eda0();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1afd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsCanceled__112649980,1);
  return;
}



/* Entry: 1053c4160; end: 1053c416b; -[SCCustomojiRenderRequest isCanceled] */

byte FUN_1053c4160(long param_1)

{
  return *(byte *)(param_1 + 0x10) & 1;
}



/* Entry: 1053c416c; end: 1053c4173; -[SCCustomojiRenderRequest setIsCanceled:] */

void FUN_1053c416c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1053c4174; end: 1053c417f; -[SCCustomojiRenderRequest isComplete] */

byte FUN_1053c4174(long param_1)

{
  return *(byte *)(param_1 + 0x11) & 1;
}



/* Entry: 1053c4180; end: 1053c4187; -[SCCustomojiRenderRequest setIsComplete:] */

void FUN_1053c4180(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 1053c4188; end: 1053c4193; -[SCCustomojiRenderRequest .cxx_destruct] */

void FUN_1053c4188(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053c4194; end: 1053c429b; -[SCCustomojiRequestProxy initWithOriginalRequestFuture:] */

undefined8 * FUN_1053c4194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e7ed8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,puVar1);
    uVar2 = puVar1[3];
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c297260(uVar2);
    *(undefined4 *)(puVar1 + 1) = 0;
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1053c429c; end: 1053c42e3;  */

void FUN_1053c429c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1d6780();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053c42e4; end: 1053c4323; -[SCCustomojiRequestProxy cancel] */

void FUN_1053c42e4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1afd60(param_1,param_2,1);
  func_0x00010c0ed8a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053c4324; end: 1053c439b; -[SCCustomojiRequestProxy setOriginalRequest:] */

void FUN_1053c4324(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 8);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010c06e0c0();
  if ((int)lVar2 != 0) {
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x10));
  }
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053c439c; end: 1053c43d7; -[SCCustomojiRequestProxy originalRequest] */

void FUN_1053c439c(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053c43d8; end: 1053c43e3; -[SCCustomojiRequestProxy isCanceled] */

byte FUN_1053c43d8(long param_1)

{
  return *(byte *)(param_1 + 0x20) & 1;
}



/* Entry: 1053c43e4; end: 1053c43eb; -[SCCustomojiRequestProxy setIsCanceled:] */

void FUN_1053c43e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 1053c43ec; end: 1053c441b; -[SCCustomojiRequestProxy .cxx_destruct] */

void FUN_1053c43ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1053c441c; end: 1053c448f; -[UNIBMCustomojiCompositionService initWithUnifiedGrpcService:] */

undefined1 * FUN_1053c441c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7ee0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053c4490; end: 1053c4573; -[UNIBMCustomojiCompositionService renderCustomojiImageWithRequest:callOptionsBuilder:handler:] */

void FUN_1053c4490(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b8368;
  _objc_opt_class(PTR_PTR_1126b8368);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd6c98,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053c4574; end: 1053c457f; -[UNIBMCustomojiCompositionService .cxx_destruct] */

void FUN_1053c4574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053c4580; end: 1053c45e7; +[BMRenderCustomojiImageRequest descriptor] */

void FUN_1053c4580(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb840 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a30f10,
                        &PTR____CFConstantStringClassReference_110dd6cb8,
                        &PTR_s_snapchat_bitmoji_customoji_1130d3678,&PTR_s_text_1130d3690,5,0x28,
                        0x1c);
    puRam00000001136bb840 = puVar1;
  }
  return;
}



/* Entry: 1053c45e8; end: 1053c4673; +[BMRenderCustomojiImageResponse descriptor] */

undefined * FUN_1053c45e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb848 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a30fb0,
                        &PTR____CFConstantStringClassReference_110dd6cd8,
                        &PTR_s_snapchat_bitmoji_customoji_1130d3738,&PTR_s_imageBytes_1130d3750,2,
                        0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136bb848 = puVar1;
  }
  return puRam00000001136bb848;
}



/* Entry: 1053c4674; end: 1053c46ef;  */

undefined * FUN_1053c4674(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bb850 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dd6cf8,
                        &UNK_10dd9b430,&UNK_10dd9b44c,3,FUN_1053c46f0,0);
    do {
      if (puRam00000001136bb850 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bb850;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bb850,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bb850 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bb850;
}



/* Entry: 1053c46f0; end: 1053c46fb;  */

bool FUN_1053c46f0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1053c46fc; end: 1053c476f; -[SCBitmojiFashionSharingLoggerImpl initWithLogger:] */

undefined1 * FUN_1053c46fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7ee8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053c4770; end: 1053c47af; -[SCBitmojiFashionSharingLoggerImpl logShareOutfitSendWithAvatarOptionIds:totalUniqueUserRecipientCount:source:storySnapId:chatId:profileSessionId:profileType:groupMembersWithBitmojis:bitmojiStyle:] */

void FUN_1053c4770(void)

{
  func_0x00010c0af620();
  return;
}



/* Entry: 1053c47b0; end: 1053c4977; -[SCBitmojiFashionSharingLoggerImpl logShareFriendProfileSendWithAvatarOptionIds:totalUniqueUserRecipientCount:source:friendmojiCategoryName:sceneId:storySnapId:chatId:profileSessionId:groupMembersWithBitmojis:profileType:bitmojiStyle:] */

void FUN_1053c47b0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  undefined8 param_12,long param_13)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126b8370;
  _objc_opt_new(PTR_PTR_1126b8370);
  if (param_3 != 0) {
    func_0x00010c16db00(puVar1,param_2,param_3);
  }
  if (0 < param_4) {
    func_0x00010c218b20(puVar1,param_2,param_4);
  }
  lVar2 = param_6;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1a0580(puVar1,param_2,param_6);
  }
  lVar2 = param_7;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1f6680(puVar1,param_2,param_7);
  }
  lVar2 = param_8;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c20db00(puVar1,param_2,param_8);
  }
  lVar2 = param_9;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c17b600(puVar1,param_2,param_9);
  }
  lVar2 = param_10;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1e44c0(puVar1,param_2,param_10);
  }
  if (0 < param_11) {
    func_0x00010c1a4900(puVar1,param_2,param_11);
  }
  func_0x00010c1e4560(puVar1,param_2,param_12);
  func_0x00010c206c40(puVar1,param_2,param_5);
  func_0x00010c171660(puVar1,param_2,param_13 == 3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053c4978; end: 1053c4a07; -[SCBitmojiFashionSharingLoggerImpl logShareOutfitTapWithAvatarOptionIds:source:bitmojiStyle:] */

void FUN_1053c4978(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8378;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c16db00();
  _objc_release(param_3);
  func_0x00010c206c40(puVar1,param_2,param_4);
  func_0x00010c171660(puVar1,param_2,param_5 == 3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053c4a08; end: 1053c4a97; -[SCBitmojiFashionSharingLoggerImpl logShareOutfitTapWithProfileSessionId:source:bitmojiStyle:] */

void FUN_1053c4a08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8378;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1e44c0();
  _objc_release(param_3);
  func_0x00010c206c40(puVar1,param_2,param_4);
  func_0x00010c171660(puVar1,param_2,param_5 == 3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053c4a98; end: 1053c4af3; -[SCBitmojiFashionSharingLoggerImpl logShareOutfitViewMessageWithSharedOutfitCompatible:hasAvatar:] */

void FUN_1053c4a98(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8380;
  _objc_opt_new(PTR_PTR_1126b8380);
  if (param_4 != 0) {
    func_0x00010c1ff0a0(puVar1,param_2,param_3);
  }
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053c4af4; end: 1053c4aff; -[SCBitmojiFashionSharingLoggerImpl .cxx_destruct] */

void FUN_1053c4af4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053c4b00; end: 1053c4c87; -[SCBitmojiLoggerImpl initWithLogger:grapheneRegistry:loginInfoRepository:registrationFlowUUIDService:authenticationSessionInfoProvider:grapheneLoggerV2:circumstanceEngine:] */

undefined1 *
FUN_1053c4b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e7ef0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf1b900();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053c4c88; end: 1053c4ce7; -[SCBitmojiLoggerImpl logSettingBitmojiView:page:] */

void FUN_1053c4c88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8388;
  _objc_opt_new(PTR_PTR_1126b8388);
  func_0x00010c206c40();
  func_0x00010c1af8e0(puVar1,param_2,param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053c4ce8; end: 1053c4e07; -[SCBitmojiLoggerImpl logSettingBitmojiSelfiePickerSession:imageLoadTimes:] */

void FUN_1053c4ce8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b8390;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1f5b00();
  uVar2 = param_4;
  func_0x00010c296f80(param_4,param_2,&PTR____CFConstantStringClassReference_110dd6d18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1c36a0(puVar1);
  uVar3 = param_4;
  func_0x00010c296f80(param_4,param_2,&PTR____CFConstantStringClassReference_110dd6d38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c19d5a0(puVar1);
  uVar4 = param_4;
  func_0x00010c296f80(param_4,param_2,&PTR____CFConstantStringClassReference_110dd0698);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c16dfa0(puVar1);
  uVar5 = param_4;
  func_0x00010bf529e0(param_4);
  _objc_release(param_4);
  func_0x00010c1fbcc0(puVar1,param_2,uVar5);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053c4e08; end: 1053c4e13; -[SCBitmojiLoggerImpl logUnlinkBitmoji:page:] */

void FUN_1053c4e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b2310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_logUnlinkBitmoji_action_page__11260a2d0,param_3,0,param_4);
  return;
}



/* Entry: 1053c4e14; end: 1053c4eab; -[SCBitmojiLoggerImpl logUnlinkBitmoji:action:page:] */

void FUN_1053c4e14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b8398;
  _objc_opt_new(PTR_PTR_1126b8398);
  func_0x00010c206c40();
  lVar2 = param_1;
  func_0x00010be1d4e0(param_1,param_2,param_3);
  func_0x00010c20a2c0(puVar1,param_2,lVar2);
  lVar2 = param_1;
  func_0x00010be1d4c0(param_1,param_2,param_4);
  if (lVar2 != -1) {
    func_0x00010c161620(puVar1,param_2,lVar2);
  }
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053c4eac; end: 1053c4efb; -[SCBitmojiLoggerImpl logSeeLinkButton:] */

void FUN_1053c4eac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b83a0;
  _objc_opt_new(PTR_PTR_1126b83a0);
  func_0x00010c206c40();
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053c4efc; end: 1053c4f57; -[SCBitmojiLoggerImpl logSelfieView:] */

void FUN_1053c4efc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b83a8;
  _objc_opt_new(PTR_PTR_1126b83a8);
  func_0x00010c206c40();
  func_0x00010c161620(puVar1,param_2,2);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053c4f58; end: 1053c4fe3; -[SCBitmojiLoggerImpl logSelfieTap:page:] */

void FUN_1053c4f58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b83b0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c206c40();
  uVar2 = param_3;
  func_0x00010c0b4ca0(param_3);
  _objc_release(param_3);
  func_0x00010c171480(puVar1,param_2,uVar2);
  func_0x00010c161620(puVar1,param_2,0);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053c4fe4; end: 1053c507b; -[SCBitmojiLoggerImpl logSelfieChange:success:page:] */

void FUN_1053c4fe4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b83b8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c206c40();
  uVar2 = param_3;
  func_0x00010c0b4ca0(param_3);
  _objc_release(param_3);
  func_0x00010c171480(puVar1,param_2,uVar2);
  func_0x00010c20f8a0(puVar1,param_2,param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053c507c; end: 1053c50cb; -[SCBitmojiLoggerImpl logSelfieCancel:] */

void FUN_1053c507c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b83c0;
  _objc_opt_new(PTR_PTR_1126b83c0);
  func_0x00010c206c40();
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053c50cc; end: 1053c50f3; -[SCBitmojiLoggerImpl logSelfiePackFetchWithDeliverySource:success:] */

char * FUN_1053c50cc(long param_1,undefined8 param_2,char *param_3,int param_4)

{
  undefined **ppuVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined **unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_150;
  undefined *puStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined **ppuStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  undefined **ppuStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_1 + 0x30);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db2d38;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db1158;
  }
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = param_3;
  ppuVar7 = ppuVar1;
  _objc_retain(param_3);
  _objc_retain(ppuVar1);
  puVar9 = (undefined8 *)0x0;
  if (lVar2 != 0) {
    plVar8 = *(long **)(lVar2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar3);
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar1);
      pcVar3 = (char *)ppuVar1;
      func_0x00010bdc3520(ppuVar1);
    }
    _objc_release(ppuVar1);
    func_0x00010002b838(auStack_60,pcVar3);
    puStack_98 = (undefined *)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&puStack_98,auStack_78,&lStack_48,2);
    pcVar3 = "";
    unaff_x23 = &puStack_98;
    ppuVar7 = &puStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110882aa8,ppuVar7,1);
    ppuStack_80 = unaff_x23;
    func_0x00010007e5dc(&ppuStack_80);
    lVar2 = 0;
    puVar9 = auStack_78;
    do {
      if ((&cStack_49)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  _objc_release(ppuVar1);
  pcVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar1);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(ppuVar1);
  _objc_release(param_3);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcStack_a8 = FUN_1053c7d04;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = unaff_x24;
  ppuStack_d8 = unaff_x23;
  puStack_d0 = puVar9;
  pcStack_c8 = pcVar4;
  ppuStack_c0 = ppuVar1;
  pcStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar3);
  if (pcVar5 != (char *)0x0) {
    plVar8 = *(long **)(pcVar5 + 8);
    (**(code **)(*plVar8 + 0x28))(plVar8,&UNK_110882af8);
    if ((int)plVar8 != 0) {
      plVar8 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_100,pcVar4);
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110882af8,&uStack_120,(long)ppuVar7 * 10);
      puStack_108 = (undefined1 *)&uStack_120;
      func_0x00010007e5dc(&puStack_108);
      if (cStack_e9 < '\0') {
        __ZdlPv(auStack_100[0]);
      }
    }
  }
  pcVar4 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  ppcVar6 = &pcStack_150;
  pcStack_128 = FUN_1053c7e9c;
  puStack_148 = PTR_PTR_1126e7f28;
  pcStack_150 = pcVar5;
  pcStack_140 = pcVar4;
  pcStack_138 = pcVar3;
  ppuStack_130 = &puStack_b0;
  _objc_msgSendSuper2(&pcStack_150,PTR_s_init_1125d9248);
  if (ppcVar6 != (char **)0x0) {
    pcVar3 = (char *)ppcVar6;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar6 + 8) = pcVar3;
  }
  return (char *)ppcVar6;
}



/* Entry: 1053c50f4; end: 1053c51bf; -[SCBitmojiLoggerImpl logDeepLinkingWithDeepLinkSource:isUniversalLink:page:] */

void FUN_1053c50f4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010bdf8fa0(param_1);
  puVar2 = PTR_PTR_1126b83c8;
  _objc_alloc_init(PTR_PTR_1126b83c8);
  func_0x00010c18aa60();
  func_0x00010c18aa00(puVar2);
  func_0x00010c206c40(puVar2);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8));
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  FUN_1053c67e8(*(undefined8 *)(param_1 + 0x30),param_3,ppuVar1,1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1053c51c0; end: 1053c51cb; -[SCBitmojiLoggerImpl logCheetahDefaultSelfieUsed] */

void FUN_1053c51c0(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x30) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110882878,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1053c51cc; end: 1053c52fb; -[SCBitmojiLoggerImpl _logRegistrationEvent:] */

void FUN_1053c51cc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setRegistrationSessionId__112658078);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfcb960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8f20(param_3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setClientAuthenticationId__11263ccc0);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8f20(param_3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd8b00();
  func_0x00010bea44e0(param_1);
  _objc_release(uVar3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053c52fc; end: 1053c53c7; -[SCBitmojiLoggerImpl _setHasLoggedInBeforeOnEvent:withValue:] */

void FUN_1053c52fc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setHasLoggedInBefore__112647308);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_3;
    func_0x00010c0cca80(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSInvocation_1126b71d0;
    func_0x00010c06abc0(PTR__OBJC_CLASS___NSInvocation_1126b71d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fbb60();
    func_0x00010c2121a0(puVar2);
    func_0x00010c16a2c0(puVar2);
    func_0x00010c06abe0(puVar2);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1053c53c8; end: 1053c5427; -[SCBitmojiLoggerImpl logAvatarStyleChange:] */

void FUN_1053c53c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b83d0;
  _objc_opt_new(PTR_PTR_1126b83d0);
  lVar2 = param_1;
  func_0x00010be1d400(param_1,param_2,param_3);
  func_0x00010c20eaa0(puVar1,param_2,lVar2);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053c5428; end: 1053c5447; -[SCBitmojiLoggerImpl logStickerLoadDuration:isPreScroll:] */

void FUN_1053c5428(double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  long lVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
  }
  lVar2 = *(long *)(param_2 + 0x30);
  _objc_retain(ppuVar1);
  if (lVar2 != 0) {
    FUN_1053c7108(lVar2,ppuVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1053c5448; end: 1053c5457; -[SCBitmojiLoggerImpl logStudyWithFallback:] */

char * FUN_1053c5448(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  char *pcStack_b0;
  undefined *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 0x30);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar2 = *(long **)(lVar1 + 8);
    (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_110882af8);
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(lVar1 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_60,pcVar3);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110882af8,&uStack_80,10);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
      }
    }
  }
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  ppcVar5 = &pcStack_b0;
  pcStack_88 = FUN_1053c7e9c;
  puStack_a8 = PTR_PTR_1126e7f28;
  pcStack_b0 = pcVar4;
  pcStack_a0 = pcVar3;
  pcStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_b0,PTR_s_init_1125d9248);
  if (ppcVar5 != (char **)0x0) {
    pcVar3 = (char *)ppcVar5;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar5 + 8) = pcVar3;
  }
  return (char *)ppcVar5;
}



/* Entry: 1053c5458; end: 1053c550b; -[SCBitmojiLoggerImpl logFashionDropActionType:dropId:dropType:tokenPrice:] */

void FUN_1053c5458(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b83d8;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c192020();
  _objc_release(param_4);
  lVar2 = param_1;
  func_0x00010bdd4c80(param_1,param_2,param_3);
  func_0x00010c170d60(puVar1,param_2,lVar2);
  lVar2 = param_1;
  func_0x00010bdd4ca0(param_1,param_2,param_5);
  func_0x00010c192040(puVar1,param_2,lVar2);
  func_0x00010c216c20(puVar1,param_2,param_6);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053c550c; end: 1053c55ab; -[SCBitmojiLoggerImpl logFetchWithType:feature:status:duration:] */

void FUN_1053c550c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  FUN_1053c6e24(*(undefined8 *)(param_2 + 0x30),param_5,param_6,param_4,1);
  if (0.0 < param_1) {
    FUN_1053c6d70(param_1,*(undefined8 *)(param_2 + 0x30),param_5,param_6,param_4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053c55ac; end: 1053c55bb; -[SCBitmojiLoggerImpl logNetworkRequestWithFeature:] */

/* WARNING: Removing unreachable block (ram,0x0001053c76fc) */

void FUN_1053c55ac(double param_1,long param_2,undefined8 param_3,char *param_4,char *param_5,
                  char *param_6)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long *plVar9;
  char *unaff_x24;
  char acStack_140 [24];
  undefined1 *puStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_2 + 0x30);
  pcVar5 = (char *)0x1;
  pcVar3 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_4;
  _objc_retain(param_4);
  if (lVar1 != 0) {
    plVar9 = *(long **)(lVar1 + 8);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar2 = "";
    param_5 = (char *)0x1;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar5 = pcVar3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar5 = pcVar3;
    }
  }
  pcVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(param_4);
  __Unwind_Resume();
  pcVar7 = acStack_140;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar2;
  pcVar6 = pcVar5;
  pcVar8 = param_5;
  _objc_retain(pcVar2);
  _objc_retain(pcVar5);
  _objc_retain(param_5);
  if (pcVar3 != (char *)0x0) {
    plVar9 = *(long **)(pcVar3 + 8);
    pcVar4 = "\x01";
    (**(code **)(*plVar9 + 0x28))(plVar9,&UNK_110882a08);
    if ((int)plVar9 != 0) {
      plVar9 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_120,pcVar3);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar3 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_108,pcVar3);
      _objc_retain(param_5);
      if (param_5 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(param_5);
        pcVar3 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_f0,pcVar3);
      acStack_140[0] = '\0';
      acStack_140[1] = '\0';
      acStack_140[2] = '\0';
      acStack_140[3] = '\0';
      acStack_140[4] = '\0';
      acStack_140[5] = '\0';
      acStack_140[6] = '\0';
      acStack_140[7] = '\0';
      acStack_140[8] = '\0';
      acStack_140[9] = '\0';
      acStack_140[10] = '\0';
      acStack_140[0xb] = '\0';
      acStack_140[0xc] = '\0';
      acStack_140[0xd] = '\0';
      acStack_140[0xe] = '\0';
      acStack_140[0xf] = '\0';
      acStack_140[0x10] = '\0';
      acStack_140[0x11] = '\0';
      acStack_140[0x12] = '\0';
      acStack_140[0x13] = '\0';
      acStack_140[0x14] = '\0';
      acStack_140[0x15] = '\0';
      acStack_140[0x16] = '\0';
      acStack_140[0x17] = '\0';
      func_0x00010007e1e8(acStack_140,auStack_120,&lStack_d8,3);
      pcVar4 = "\x01";
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110882a08,acStack_140,param_6);
      puStack_128 = acStack_140;
      func_0x00010007e5dc(&puStack_128);
      lVar1 = 0;
      pcVar6 = pcVar7;
      pcVar8 = param_6;
      do {
        if ((&cStack_d9)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
        unaff_x24 = acStack_140;
      } while (lVar1 != -0x48);
    }
  }
  _objc_release(param_5);
  _objc_release(pcVar5);
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != auStack_120);
    _objc_release(param_5);
    _objc_release(pcVar5);
    _objc_release(pcVar2);
    __Unwind_Resume();
    _objc_retain(pcVar4);
    _objc_retain(pcVar6);
    _objc_retain(pcVar8);
    if (pcVar3 != (char *)0x0) {
      FUN_1053c745c(pcVar3,pcVar4,pcVar6,pcVar8,(long)(param_1 * 1000.0));
    }
    _objc_release(pcVar8);
    _objc_release(pcVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar4);
    return;
  }
  return;
}



/* Entry: 1053c55bc; end: 1053c565f; -[SCBitmojiLoggerImpl logRenderRequestWithSource:status:cacheStatus:duration:] */

void FUN_1053c55bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  FUN_1053c77f0(uVar1,param_6,param_4,param_5,1);
  FUN_1053c773c(param_1,*(undefined8 *)(param_2 + 0x30),param_6,param_4,param_5);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053c5660; end: 1053c567f; -[SCBitmojiLoggerImpl _getBitmojiAvatarStyle:] */

undefined8 FUN_1053c5660(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 5) {
    return *(undefined8 *)(&UNK_10dd9b458 + param_3 * 8);
  }
  return 3;
}



/* Entry: 1053c5680; end: 1053c569f; -[SCBitmojiLoggerImpl _getBlizzardUnlinkResultType:] */

undefined8 FUN_1053c5680(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 4) {
    return *(undefined8 *)(&UNK_10dd9b480 + param_3 * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 1053c56a0; end: 1053c56b7; -[SCBitmojiLoggerImpl _getBlizzardUnlinkActionType:] */

undefined8 FUN_1053c56a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xffffffffffffffff;
  if (param_3 == 2) {
    uVar1 = 1;
  }
  uVar2 = 0;
  if (param_3 != 1) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 1053c56b8; end: 1053c5753; -[SCBitmojiLoggerImpl _deepLinkSourceWithSourceString:] */

long FUN_1053c56b8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dd2cf8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc3258);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc22b8);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dd1df8);
        lVar2 = (uVar1 & 0xffffffff) - 1;
      }
      else {
        lVar2 = 2;
      }
    }
    else {
      lVar2 = 1;
    }
  }
  else {
    lVar2 = 3;
  }
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 1053c5754; end: 1053c576b; -[SCBitmojiLoggerImpl _blizzardFashionDropActionTypeWithDropActionType:] */

undefined1 FUN_1053c5754(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = 0xc;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 1053c576c; end: 1053c577f; -[SCBitmojiLoggerImpl _blizzardFashionDropTypeWithDropType:] */

ulong FUN_1053c576c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 != 2) {
    param_3 = (ulong)(param_3 == 1);
  }
  return param_3;
}



/* Entry: 1053c5780; end: 1053c57eb; -[SCBitmojiLoggerImpl .cxx_destruct] */

void FUN_1053c5780(long param_1)

{
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



/* Entry: 1053c57ec; end: 1053c58c3; -[SCBitmojiWebBuilderLoggerImpl initWithGrapheneRegistry:grapheneLoggerV2:circumstanceEngine:] */

undefined1 *
FUN_1053c57ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e7ef8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf1c6c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 1053c58c4; end: 1053c594b; -[SCBitmojiWebBuilderLoggerImpl logAvatarDataRequestError:] */

void FUN_1053c58c4(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    func_0x00010bf3ec40(param_3);
    func_0x00010c0df780(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
  FUN_1053c85d0(*(undefined8 *)(param_1 + 0x10),ppuVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 1053c594c; end: 1053c596b; -[SCBitmojiWebBuilderLoggerImpl logAvatarDataRequestLoadTime:] */

void FUN_1053c594c(double param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  lVar1 = *(long *)(param_2 + 0x10);
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(**(long **)(lVar1 + 8) + 0x18))
                (*(long **)(lVar1 + 8),&UNK_110882db8,&uStack_40,(long)(param_1 * 1000.0));
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x00010007e5dc(&puStack_28);
    }
    return;
  }
  return;
}



/* Entry: 1053c596c; end: 1053c5abb; -[SCBitmojiWebBuilderLoggerImpl logGenderAssetsDownloadLoadTime:avatarBuilderType:contentAvailable:error:] */

void FUN_1053c596c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,int param_5,
                  long param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_6);
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_6 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    func_0x00010bf3ec40(param_6);
    func_0x00010c0df780(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
  }
  if (param_4 < 3) {
    if (param_4 == 1) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110dd6d58;
      goto LAB_1053c5a54;
    }
    if (param_4 == 2) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110dd6d78;
      goto LAB_1053c5a54;
    }
  }
  else {
    if (param_4 == 3) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110dd6d98;
      goto LAB_1053c5a54;
    }
    if (param_4 == 4) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110dd6db8;
      goto LAB_1053c5a54;
    }
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110db8b78;
LAB_1053c5a54:
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  FUN_1053c8ab8(*(undefined8 *)(param_2 + 0x10),ppuVar3,ppuVar1,ppuVar2,1);
  FUN_1053c8a04(param_1,*(undefined8 *)(param_2 + 0x10),ppuVar3,ppuVar1,ppuVar2);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1053c5abc; end: 1053c5b0b; -[SCBitmojiWebBuilderLoggerImpl logMirrorClassificationStatus:fromCreate:] */

void FUN_1053c5abc(double param_1,long param_2,undefined8 param_3,long param_4,int param_5)

{
  long lVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined **unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined **ppuStack_178;
  undefined8 *puStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined **ppuStack_d8;
  undefined8 *puStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_5 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dad398;
  }
  lVar1 = *(long *)(param_2 + 0x10);
  ppuVar6 = &PTR____CFConstantStringClassReference_110dd6dd8;
  if (param_4 != 1) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dae6f8;
  }
  ppuVar8 = &PTR____CFConstantStringClassReference_110dd6df8;
  if (param_4 != 2) {
    ppuVar8 = ppuVar6;
  }
  uVar11 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar8;
  ppuVar9 = ppuVar5;
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar5);
  puVar13 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    plVar12 = *(long **)(lVar1 + 8);
    _objc_retain(ppuVar8);
    if (ppuVar8 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar8;
      _objc_retainAutorelease(ppuVar8);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar8);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(ppuVar5);
    if (ppuVar5 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar5);
      pcVar2 = (char *)ppuVar5;
      func_0x00010bdc3520(ppuVar5);
    }
    _objc_release(ppuVar5);
    func_0x00010002b838(auStack_60,pcVar2);
    puStack_98 = (undefined *)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&puStack_98,auStack_78,&lStack_48,2);
    ppuVar6 = (undefined **)&UNK_110882ef8;
    unaff_x23 = &puStack_98;
    ppuVar9 = &puStack_98;
    uVar11 = 1;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110882ef8,ppuVar9,1);
    ppuStack_80 = unaff_x23;
    func_0x00010007e5dc(&ppuStack_80);
    lVar1 = 0;
    puVar13 = auStack_78;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(ppuVar5);
  ppuVar3 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar5);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(ppuVar5);
  _objc_release(ppuVar8);
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_1053c8fa8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar6;
  ppuVar10 = ppuVar9;
  puStack_e0 = unaff_x24;
  ppuStack_d8 = unaff_x23;
  puStack_d0 = puVar13;
  ppuStack_c8 = ppuVar3;
  ppuStack_c0 = ppuVar5;
  ppuStack_b8 = ppuVar8;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar9);
  puVar13 = (undefined8 *)0x0;
  if (ppuVar4 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar4[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(ppuVar9);
    if (ppuVar9 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar9);
      pcVar2 = (char *)ppuVar9;
      func_0x00010bdc3520(ppuVar9);
    }
    _objc_release(ppuVar9);
    func_0x00010002b838(auStack_100,pcVar2);
    puStack_138 = (undefined *)0x0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&puStack_138,auStack_118,&lStack_e8,2);
    ppuVar7 = (undefined **)&UNK_110882f48;
    unaff_x23 = &puStack_138;
    ppuVar10 = &puStack_138;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110882f48,ppuVar10,uVar11);
    ppuStack_120 = unaff_x23;
    func_0x00010007e5dc(&ppuStack_120);
    lVar1 = 0;
    puVar13 = auStack_118;
    do {
      if ((&cStack_e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(ppuVar9);
  ppuVar5 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar9);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(ppuVar9);
  _objc_release(ppuVar6);
  ppuVar3 = ppuVar5;
  __Unwind_Resume();
  pcStack_148 = FUN_1053c91d8;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = ppuVar7;
  puStack_180 = unaff_x24;
  ppuStack_178 = unaff_x23;
  puStack_170 = puVar13;
  ppuStack_168 = ppuVar5;
  ppuStack_160 = ppuVar9;
  ppuStack_158 = ppuVar6;
  ppuStack_150 = &puStack_b0;
  _objc_retain(ppuVar7);
  if (ppuVar3 != (undefined **)0x0) {
    plVar12 = (long *)ppuVar3[1];
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar7;
      _objc_retainAutorelease(ppuVar7);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar7);
    func_0x00010002b838(auStack_1a0,pcVar2);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    ppuVar8 = (undefined **)&UNK_110882f98;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110882f98,&uStack_1c0,ppuVar10);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
    }
  }
  ppuVar5 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  _objc_release(ppuVar7);
  __Unwind_Resume();
  _objc_retain(ppuVar8);
  if (ppuVar5 != (undefined **)0x0) {
    FUN_1053c91d8(ppuVar5,ppuVar8,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
  return;
}



/* Entry: 1053c5b0c; end: 1053c5bb3; -[SCBitmojiWebBuilderLoggerImpl logMirrorImageCaptureWithError:fromCreate:] */

void FUN_1053c5b0c(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != 0) {
    func_0x00010bf3ec40(param_3);
    func_0x00010c0df780(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  FUN_1053c8fa8(*(undefined8 *)(param_1 + 0x10),ppuVar2,ppuVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 1053c5bb4; end: 1053c5bd3; -[SCBitmojiWebBuilderLoggerImpl logMirrorModelLoadTime:fromCreate:] */

void FUN_1053c5bb4(double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  long lVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  lVar2 = *(long *)(param_2 + 0x10);
  _objc_retain(ppuVar1);
  if (lVar2 != 0) {
    FUN_1053c91d8(lVar2,ppuVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1053c5bd4; end: 1053c5c0f; -[SCBitmojiWebBuilderLoggerImpl .cxx_destruct] */

void FUN_1053c5bd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053c5c10; end: 1053c5ce7; -[SCCustomojiLoggerImpl initWithGrapheneRegistry:grapheneLoggerV2:circumstanceEngine:] */

undefined1 *
FUN_1053c5c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e7f00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf62ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 1053c5ce8; end: 1053c5e07; -[SCCustomojiLoggerImpl logRenderRequestWithLatency:grpcError:rejectReason:isUnused:] */

/* WARNING: Removing unreachable block (ram,0x0001053c83d4) */

undefined **
FUN_1053c5ce8(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
             undefined8 param_5,int param_6)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined ***pppuVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x26;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  ppuVar1 = param_4;
  FUN_1053c5e08(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_5;
  FUN_1053c5e34(param_5);
  _objc_retainAutoreleasedReturnValue();
  FUN_1053c8140(uVar7,ppuVar1,uVar8,1);
  _objc_release(uVar8);
  _objc_release(ppuVar1);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  ppuVar1 = param_4;
  FUN_1053c5e08(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  FUN_1053c5e34(param_5);
  _objc_retainAutoreleasedReturnValue();
  FUN_1053c7f10(uVar8,ppuVar1,param_5,param_3);
  _objc_release(param_5);
  _objc_release(ppuVar1);
  if (param_6 == 0) {
    return ppuVar1;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db2d38;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(&PTR____CFConstantStringClassReference_110db2d38);
  if (lVar2 != 0) {
    plVar6 = *(long **)(lVar2 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110db2d38);
    ppuVar3 = ppuVar1;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110db2d38);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110db2d38);
    func_0x00010002b838(auStack_60,ppuVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&stack0xffffffffffffffb8,1);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110882d18,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (unaff_x26 < 0) {
      __ZdlPv(auStack_60[0]);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _objc_release(&PTR____CFConstantStringClassReference_110db2d38);
    _objc_release(&PTR____CFConstantStringClassReference_110db2d38);
    ppuVar3 = ppuVar1;
    __Unwind_Resume();
    pppuVar4 = &ppuStack_b0;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110db2d38;
    pcStack_88 = FUN_1053c84e4;
    puStack_a8 = PTR_PTR_1126e7f30;
    ppuStack_b0 = ppuVar3;
    ppuStack_a0 = ppuVar1;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&ppuStack_b0,PTR_s_init_1125d9248);
    if (pppuVar4 != (undefined ***)0x0) {
      ppuVar1 = (undefined **)pppuVar4;
      (*(code *)PTR_DAT_113403208)();
      pppuVar4[1] = ppuVar1;
    }
    return (undefined **)pppuVar4;
  }
  return ppuVar1;
}



/* Entry: 1053c5e08; end: 1053c5e33;  */

void FUN_1053c5e08(long param_1)

{
  if (param_1 != 0) {
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c5e34; end: 1053c5e83;  */

void FUN_1053c5e34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053c5e84; end: 1053c5ebf; -[SCCustomojiLoggerImpl .cxx_destruct] */

void FUN_1053c5e84(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053c5ec0; end: 1053c5eeb; +[SCGrapheneBitmojiMetric fetch] */

void FUN_1053c5ec0(void)

{
  _objc_alloc(PTR_PTR_1126b83e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c5eec; end: 1053c5f17; +[SCGrapheneBitmojiMetric networkRequest] */

void FUN_1053c5eec(void)

{
  _objc_alloc(PTR_PTR_1126b83e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c5f18; end: 1053c5f43; +[SCGrapheneBitmojiMetric study] */

void FUN_1053c5f18(void)

{
  _objc_alloc(PTR_PTR_1126b83e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c5f44; end: 1053c5f6f; +[SCGrapheneBitmojiMetric loadTime] */

void FUN_1053c5f44(void)

{
  _objc_alloc(PTR_PTR_1126b83e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c5f70; end: 1053c5f9b; +[SCGrapheneBitmojiMetric deeplink] */

void FUN_1053c5f70(void)

{
  _objc_alloc(PTR_PTR_1126b83e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c5f9c; end: 1053c5fc7; +[SCGrapheneBitmojiMetric selfiePack] */

void FUN_1053c5f9c(void)

{
  _objc_alloc(PTR_PTR_1126b83e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c5fc8; end: 1053c5ff3; +[SCGrapheneBitmojiMetric renderRequest] */

void FUN_1053c5fc8(void)

{
  _objc_alloc(PTR_PTR_1126b83e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c5ff4; end: 1053c601f; +[SCGrapheneBitmojiMetric defaultCheetahSelfie] */

void FUN_1053c5ff4(void)

{
  _objc_alloc(PTR_PTR_1126b83e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c6020; end: 1053c60bf; -[SCGrapheneBitmojiMetric description] */

void FUN_1053c6020(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd6e38;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dd6e38,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e7f08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1053c60c0; end: 1053c6247; -[SCGrapheneRegistry bitmojiGraphene] */

void FUN_1053c60c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1053c6148;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bb860 != -1) {
    func_0x00010002a2fc(0x1136bb860,&puStack_48);
  }
  uVar1 = uRam00000001136bb858;
  _objc_retain(uRam00000001136bb858);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053c6248; end: 1053c6273; +[SCGrapheneBitmojiWebBuilderMetric avatarDataRequestLoadTime] */

void FUN_1053c6248(void)

{
  _objc_alloc(PTR_PTR_1126b83e8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c6274; end: 1053c629f; +[SCGrapheneBitmojiWebBuilderMetric avatarDataRequestError] */

void FUN_1053c6274(void)

{
  _objc_alloc(PTR_PTR_1126b83e8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c62a0; end: 1053c62cb; +[SCGrapheneBitmojiWebBuilderMetric mirrorModelLoadTime] */

void FUN_1053c62a0(void)

{
  _objc_alloc(PTR_PTR_1126b83e8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c62cc; end: 1053c62f7; +[SCGrapheneBitmojiWebBuilderMetric mirrorImageCapture] */

void FUN_1053c62cc(void)

{
  _objc_alloc(PTR_PTR_1126b83e8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c62f8; end: 1053c6323; +[SCGrapheneBitmojiWebBuilderMetric mirrorClassificationStatus] */

void FUN_1053c62f8(void)

{
  _objc_alloc(PTR_PTR_1126b83e8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c6324; end: 1053c634f; +[SCGrapheneBitmojiWebBuilderMetric genderAssetsDownload] */

void FUN_1053c6324(void)

{
  _objc_alloc(PTR_PTR_1126b83e8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c6350; end: 1053c63ef; -[SCGrapheneBitmojiWebBuilderMetric description] */

void FUN_1053c6350(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd6f58;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dd6f58,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e7f10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1053c63f0; end: 1053c6563; -[SCGrapheneRegistry bitmojiWebBuilderGraphene] */

void FUN_1053c63f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1053c6478;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bb870 != -1) {
    func_0x00010002a2fc(0x1136bb870,&puStack_48);
  }
  uVar1 = uRam00000001136bb868;
  _objc_retain(uRam00000001136bb868);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053c6564; end: 1053c658f; +[SCGrapheneCustomojiMetric render] */

void FUN_1053c6564(void)

{
  _objc_alloc(PTR_PTR_1126b83f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053c6590; end: 1053c662f; -[SCGrapheneCustomojiMetric description] */

void FUN_1053c6590(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd7038;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dd7038,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e7f18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1053c6630; end: 1053c6773; -[SCGrapheneRegistry customojiGraphene] */

void FUN_1053c6630(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1053c66b8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bb880 != -1) {
    func_0x00010002a2fc(0x1136bb880,&puStack_48);
  }
  uVar1 = uRam00000001136bb878;
  _objc_retain(uRam00000001136bb878);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053c6774; end: 1053c67e7; -[SCGrapheneBitmojiMetric2 init] */

undefined1 * FUN_1053c6774(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7f20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1053c67e8; end: 1053c6a17;  */

void FUN_1053c67e8(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110882828,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_1053c6a18;
  if (pcVar2 != (char *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    pcStack_c0 = param_3;
    pcStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
              (*(long **)(pcVar2 + 8),&UNK_110882878,&uStack_e0,pcVar1);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 1053c6a18; end: 1053c6a8f;  */

void FUN_1053c6a18(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110882878,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1053c6a90; end: 1053c6d6f;  */

/* WARNING: Removing unreachable block (ram,0x0001053c6d30) */

void FUN_1053c6a90(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  char *unaff_x24;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar3 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  pcVar4 = param_4;
  pcVar5 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    pcVar2 = "\x01";
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108828c8);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_a0,pcVar2);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        pcVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_88,pcVar2);
      _objc_retain(param_5);
      if (param_5 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_5);
        pcVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_70,pcVar2);
      acStack_c0[0] = '\0';
      acStack_c0[1] = '\0';
      acStack_c0[2] = '\0';
      acStack_c0[3] = '\0';
      acStack_c0[4] = '\0';
      acStack_c0[5] = '\0';
      acStack_c0[6] = '\0';
      acStack_c0[7] = '\0';
      acStack_c0[8] = '\0';
      acStack_c0[9] = '\0';
      acStack_c0[10] = '\0';
      acStack_c0[0xb] = '\0';
      acStack_c0[0xc] = '\0';
      acStack_c0[0xd] = '\0';
      acStack_c0[0xe] = '\0';
      acStack_c0[0xf] = '\0';
      acStack_c0[0x10] = '\0';
      acStack_c0[0x11] = '\0';
      acStack_c0[0x12] = '\0';
      acStack_c0[0x13] = '\0';
      acStack_c0[0x14] = '\0';
      acStack_c0[0x15] = '\0';
      acStack_c0[0x16] = '\0';
      acStack_c0[0x17] = '\0';
      func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
      pcVar2 = "\x01";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_1108828c8,acStack_c0,param_6);
      puStack_a8 = acStack_c0;
      func_0x00010007e5dc(&puStack_a8);
      lVar6 = 0;
      pcVar4 = pcVar3;
      pcVar5 = param_6;
      do {
        if ((&cStack_59)[lVar6] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar6));
        }
        lVar6 = lVar6 + -0x18;
        unaff_x24 = acStack_c0;
      } while (lVar6 != -0x48);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != auStack_a0);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    _objc_retain(pcVar2);
    _objc_retain(pcVar4);
    _objc_retain(pcVar5);
    if (pcVar3 != (char *)0x0) {
      FUN_1053c6a90(pcVar3,pcVar2,pcVar4,pcVar5,(long)(param_1 * 1000.0));
    }
    _objc_release(pcVar5);
    _objc_release(pcVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
    return;
  }
  return;
}



/* Entry: 1053c6d70; end: 1053c6e23;  */

void FUN_1053c6d70(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    FUN_1053c6a90(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053c6e24; end: 1053c7107;  */

/* WARNING: Removing unreachable block (ram,0x0001053c70c8) */

void FUN_1053c6e24(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  long param_6)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  char *unaff_x24;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar3 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  pcVar5 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    pcVar2 = "";
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_a0,pcVar2);
      _objc_retain(param_4);
      if (param_4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_4);
        pcVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_88,pcVar2);
      _objc_retain(param_5);
      if (param_5 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(param_5);
        pcVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x00010002b838(auStack_70,pcVar2);
      acStack_c0[0] = '\0';
      acStack_c0[1] = '\0';
      acStack_c0[2] = '\0';
      acStack_c0[3] = '\0';
      acStack_c0[4] = '\0';
      acStack_c0[5] = '\0';
      acStack_c0[6] = '\0';
      acStack_c0[7] = '\0';
      acStack_c0[8] = '\0';
      acStack_c0[9] = '\0';
      acStack_c0[10] = '\0';
      acStack_c0[0xb] = '\0';
      acStack_c0[0xc] = '\0';
      acStack_c0[0xd] = '\0';
      acStack_c0[0xe] = '\0';
      acStack_c0[0xf] = '\0';
      acStack_c0[0x10] = '\0';
      acStack_c0[0x11] = '\0';
      acStack_c0[0x12] = '\0';
      acStack_c0[0x13] = '\0';
      acStack_c0[0x14] = '\0';
      acStack_c0[0x15] = '\0';
      acStack_c0[0x16] = '\0';
      acStack_c0[0x17] = '\0';
      func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
      pcVar2 = "";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110882918,acStack_c0,param_6 * 10);
      puStack_a8 = acStack_c0;
      func_0x00010007e5dc(&puStack_a8);
      lVar7 = 0;
      pcVar5 = pcVar3;
      do {
        if ((&cStack_59)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
        unaff_x24 = acStack_c0;
      } while (lVar7 != -0x48);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    puStack_f8 = auStack_a0;
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != puStack_f8);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    pcVar4 = pcVar3;
    __Unwind_Resume();
    pcStack_c8 = FUN_1053c7108;
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar6 = pcVar2;
    puStack_100 = unaff_x24;
    pcStack_f0 = pcVar3;
    pcStack_e8 = param_5;
    pcStack_e0 = param_4;
    pcStack_d8 = param_3;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar2);
    if (pcVar4 != (char *)0x0) {
      plVar1 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_120,pcVar3);
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_108,1);
      pcVar6 = "\x01";
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110882968,&uStack_140,pcVar5);
      puStack_128 = (undefined1 *)&uStack_140;
      func_0x00010007e5dc(&puStack_128);
      if (cStack_109 < '\0') {
        __ZdlPv(auStack_120[0]);
      }
    }
    pcVar5 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
      ___stack_chk_fail();
      _objc_release(pcVar2);
      _objc_release(pcVar2);
      __Unwind_Resume();
      _objc_retain(pcVar6);
      if (pcVar5 != (char *)0x0) {
        FUN_1053c7108(pcVar5,pcVar6,(long)(param_1 * 1000.0));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(pcVar6);
      return;
    }
    return;
  }
  return;
}


