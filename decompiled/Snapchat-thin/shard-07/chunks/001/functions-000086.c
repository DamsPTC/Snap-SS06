/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105197438; end: 1051974c7; -[SCVoiceMLLensSystemCommandsExecutor _showFavoritesNotificationWithStatus:lensId:lensFavoritesNotifications:] */

void FUN_105197438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5930;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c0249a0();
  _objc_release(param_4);
  func_0x00010beb9180(param_1,param_2,puVar1,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051974c8; end: 10519760b; -[SCVoiceMLLensSystemCommandsExecutor _showFavoritesNotificationWithResult:lensFavoritesNotifications:] */

void FUN_1051974c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126ae790;
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10519760c;
  puStack_50 = &UNK_11086dbb8;
  puStack_48 = puVar1;
  _objc_retain();
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0(puVar2,param_2,0x19,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar3,param_2,&puStack_68,puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10c140(param_4,param_2,param_3,puVar2,0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puStack_48);
  _objc_release(puVar1);
  return;
}



/* Entry: 10519760c; end: 1051976d3;  */

void FUN_10519760c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    if (param_4 != 0) {
      func_0x00010bf43ca0(*(undefined8 *)(param_2 + 0x20));
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar1);
    lVar2 = param_3;
    func_0x00010c14e6c0(0x4045000000000000,0x4045000000000000,param_1,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(*(undefined8 *)(param_2 + 0x20));
    _objc_release(lVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051976d4; end: 10519782b; -[SCVoiceMLLensSystemCommandsExecutor _shareLens:] */

void FUN_1051976d4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010c080040();
      if ((int)lVar1 == 0) {
        func_0x00010be4dc80(param_1);
        _objc_initWeak(auStack_38,param_1);
        lVar1 = param_3;
        func_0x00010c094540(param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_40,auStack_38);
        _objc_retain(param_3);
        func_0x00010be20180(param_1);
        _objc_release(lVar1);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_40);
        _objc_destroyWeak(auStack_38);
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10b7c0();
        _objc_release(uVar2);
      }
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10519782c; end: 105197903;  */

void FUN_10519782c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105197904;
    puStack_50 = &UNK_110848218;
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    uStack_48 = uVar1;
    _objc_retain(param_2);
    lStack_40 = param_2;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    _objc_release(lStack_40);
    _objc_release(uStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 105197904; end: 105197987;  */

void FUN_105197904(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010becd7c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b700(uVar2,param_2,lVar3,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar1 + 0x50));
    _objc_release(lVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105197988; end: 105197a37; -[SCVoiceMLLensSystemCommandsExecutor _topViewController] */

void FUN_105197988(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  while (lVar1 != 0) {
    lVar3 = lVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar1 = lVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar2 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105197a38; end: 105197b6b; -[SCVoiceMLLensSystemCommandsExecutor _getLensDeeplinkForLensId:completion:] */

void FUN_105197a38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfbf7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ae790;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105197b6c;
  puStack_50 = &UNK_110857fa0;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0(puVar2,param_2,0x19,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1,param_2,&puStack_68,puVar2);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 105197b6c; end: 105197b77;  */

void FUN_105197b6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105197b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105197b78; end: 105197c07; -[SCVoiceMLLensSystemCommandsExecutor .cxx_destruct] */

void FUN_105197b78(long param_1)

{
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



/* Entry: 105197c08; end: 105197d03; -[SCAvatarImageFetcher initWithBitmojiImageFetcher:bitmojiSelfieFetcher:bitmojiContentFetcher:bitmojiConfigProvider:] */

undefined1 *
FUN_105197c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e6a98;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105197d04; end: 105197f17; -[SCAvatarImageFetcher fetchSelfieForUserId:avatarId:selfieId:type:contexts:feature:scale:canUsePrior:modifier:preferredImageSize:transformation:callbackQueue:] */

void FUN_105197d04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_initWeak(auStack_80,param_3);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_b8,auStack_80);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_b0 = param_8;
  _objc_retain(param_9);
  uStack_84 = param_12;
  uStack_a8 = param_11;
  uStack_a0 = param_14;
  uStack_98 = param_1;
  uStack_90 = param_2;
  uStack_88 = param_10;
  _objc_retain(param_15);
  _objc_retain(param_16);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105197f18; end: 105198017;  */

void FUN_105197f18(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be13d40(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b0418;
  _objc_retain(lVar2);
  func_0x00010bf54280(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105198018; end: 10519801f;  */

void FUN_105198018(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 105198020; end: 1051982d3; -[SCAvatarImageFetcher _fetchSelfieForUserId:avatarId:selfieId:type:contexts:feature:scale:canUsePrior:modifier:preferredImageSize:transformation:callbackQueue:observer:] */

void FUN_105198020(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  puVar1 = PTR_PTR_1126afd38;
  _objc_opt_new(PTR_PTR_1126afd38);
  func_0x00010c2bc360();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8ea0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8160(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b78c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bbd20(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bcea0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b4100(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_3);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_80);
  uStack_90 = param_1;
  uStack_88 = param_2;
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000028);
  uVar4 = uVar3;
  func_0x00010bfa62a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000018);
  _objc_destroyWeak(auStack_98);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1051982d4; end: 10519832b;  */

void FUN_1051982d4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfdf00(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10519832c; end: 10519852f; -[SCAvatarImageFetcher fetchBitmojiWithTemplateId:avatarId:friendAvatarId:scale:imageType:contexts:feature:canUsePrior:preferredImageSize:transformation:callbackQueue:] */

void FUN_10519832c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined1 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_initWeak(auStack_80,param_3);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_b0,auStack_80);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_a8 = param_8;
  uStack_a0 = param_9;
  _objc_retain(param_10);
  uStack_88 = param_11;
  uStack_84 = param_12;
  uStack_98 = param_1;
  uStack_90 = param_2;
  _objc_retain(param_13);
  _objc_retain(param_14);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105198530; end: 10519862b;  */

void FUN_105198530(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be10140(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b0418;
  _objc_retain(lVar2);
  func_0x00010bf54280(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10519862c; end: 105198633;  */

void FUN_10519862c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 105198634; end: 1051988b7; -[SCAvatarImageFetcher _fetchBitmojiWithTemplateId:avatarId:friendAvatarId:scale:imageType:contexts:feature:canUsePrior:preferredImageSize:transformation:callbackQueue:observer:] */

void FUN_105198634(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,char param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puVar1 = PTR_PTR_1126b5938;
  _objc_alloc(PTR_PTR_1126b5938);
  func_0x00010c050fa0();
  _objc_initWeak(auStack_78,param_3);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1051988b8;
  puStack_a8 = &UNK_11086dca8;
  _objc_copyWeak(auStack_90,auStack_78);
  uStack_88 = param_1;
  uStack_80 = param_2;
  _objc_retain(param_13);
  uStack_a0 = param_13;
  _objc_retain(param_15);
  uStack_98 = param_15;
  ppuVar2 = &puStack_c0;
  _objc_retainBlock(ppuVar2);
  uVar3 = *(undefined8 *)(param_3 + 8);
  if (param_12 == '\0') {
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa5460();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfa60c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1051988b8; end: 10519890f;  */

void FUN_1051988b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdfdf00(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105198910; end: 105198bf3; -[SCAvatarImageFetcher _didFetchImageData:preferredImageSize:transformation:observer:] */

void FUN_105198910(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  dVar4 = param_1;
  dVar5 = param_2;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (param_5 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010c14d0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar2 != (undefined *)0x0) {
      _objc_retain(puVar2);
      _objc_retain(param_6);
      if (param_6 == 0) {
        _objc_retain(puVar2);
        puVar3 = puVar2;
      }
      else {
        puStack_88 = &uStack_90;
        uStack_90 = 0;
        dVar4 = 1.02270250269256e-312;
        uStack_80 = 0x3032000000;
        pcStack_78 = FUN_105198c3c;
        uStack_70 = 0x105198c4c;
        uStack_68 = 0;
        _objc_retain(puVar2);
        _objc_retain(puVar2);
        func_0x00010c0bcfc0(param_6);
        puVar3 = (undefined *)puStack_88[5];
        _objc_retain(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar2);
        __Block_object_dispose(&uStack_90,8);
        _objc_release(uStack_68);
      }
      _objc_release(param_6);
      _objc_release(puVar2);
      _objc_release(puVar2);
      func_0x00010c23d0a0(puVar3);
      bVar1 = false;
      if ((dVar4 == param_1) && (bVar1 = false, !NAN(dVar5) && !NAN(param_2))) {
        bVar1 = dVar5 == param_2;
      }
      puVar2 = puVar3;
      if ((!bVar1) &&
         ((*(double *)PTR__CGSizeZero_110347620 != param_1 ||
          (*(double *)(PTR__CGSizeZero_110347620 + 8) != param_2)))) {
        func_0x00010b6918b0(param_1,param_2,0,puVar3,1,0);
        _objc_release(puVar3);
      }
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105198b7c;
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
LAB_105198b7c:
  _objc_release(puVar2);
  func_0x00010c0d9840(param_7);
  func_0x00010bf436e0(param_7);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105198bf4; end: 105198c3b; -[SCAvatarImageFetcher .cxx_destruct] */

void FUN_105198bf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105198c3c; end: 105198c53;  */

void FUN_105198c3c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105198c54; end: 105198dc7;  */

void FUN_105198c54(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar3);
  func_0x00010c23d0a0(uVar3);
  dVar5 = param_1 / 1.266;
  func_0x00010c23d0a0(uVar3);
  dVar4 = dVar5 * 0.5;
  dVar6 = param_1 * 0.5 - dVar4;
  func_0x00010c23d0a0(uVar3);
  uVar1 = uVar3;
  func_0x00010bf5c7a0(dVar6,(dVar4 * 11.0) / 100.0,dVar5,dVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bf5c7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_2 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105198dc8; end: 105198eab; -[SCAvatarImageFetchingServiceProvider provide] */

void FUN_105198dc8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5940;
  _objc_alloc(PTR_PTR_1126b5940);
  func_0x00010bff61a0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105198eac; end: 105198eeb;  */

void FUN_105198eac(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd1d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105198eec; end: 10519901b; -[SCAvatarImageFetchingServiceProvider _avatarImageFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105198eec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126b5948;
  _objc_alloc(PTR_PTR_1126b5948);
  lVar2 = param_1 + _DAT_11271e65c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfe7720();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11271e660;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11271e664;
  lVar6 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf4c500();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar8;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff80e0(puVar1,param_2,lVar3,lVar5,lVar7,lVar8);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10519901c; end: 10519905f; -[SCAvatarImageFetchingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519901c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271e660);
  _objc_destroyWeak(param_1 + _DAT_11271e664);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e65c);
  return;
}



/* Entry: 105199060; end: 105199113; -[SCBitmojiAvatarBackgroundView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105199060(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e6aa0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e668);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e668) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e66c);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e66c) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105199114; end: 10519914b;  */

void FUN_105199114(void)

{
  _objc_opt_new(PTR_PTR_1126b52f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10519914c; end: 1051992d3; -[SCBitmojiAvatarBackgroundView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519914c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126e6aa0;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  lVar6 = (long)_DAT_11271e670;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  lVar2 = param_5;
  uVar5 = param_1;
  uVar4 = param_2;
  uVar7 = param_3;
  uVar8 = param_4;
  func_0x00010bf20c00();
  iVar1 = (int)lVar2;
  _CGRectEqualToRect(param_1,param_2,param_3,param_4,uVar5,uVar4,uVar7,uVar8);
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  if ((iVar1 == 0) || (lVar2 = *(long *)(param_5 + lVar6), lVar2 == 0)) {
    func_0x00010bf20c00(param_5);
    func_0x00010bf199a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + lVar6);
    *(undefined **)(param_5 + lVar6) = puVar3;
    _objc_release(uVar5);
    lVar2 = *(long *)(param_5 + lVar6);
  }
  func_0x00010bdc1040(lVar2);
  uVar4 = *(undefined8 *)(param_5 + _DAT_11271e668);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010bdc1040(*(undefined8 *)(param_5 + lVar6));
  uVar4 = *(undefined8 *)(param_5 + _DAT_11271e66c);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c22a680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 1051992d4; end: 10519938f; -[SCBitmojiAvatarBackgroundView setConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051992d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271e674);
  *(undefined8 *)(param_1 + _DAT_11271e674) = uVar1;
  _objc_release(uVar2);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105199390;
  puStack_30 = &UNK_11086ddb8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105199518;
  puStack_58 = &UNK_110842e18;
  lStack_50 = param_1;
  lStack_28 = param_1;
  func_0x00010c0c01a0(param_3,param_2,&puStack_48,&puStack_70);
  _objc_release(param_3);
  func_0x00010c1cbe20(param_1);
  return;
}



/* Entry: 105199390; end: 105199517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105199390(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bebae20(uVar2);
  _objc_retainAutorelease(param_3);
  func_0x00010bdc0fe0();
  _objc_release(param_3);
  lVar3 = (long)_DAT_11271e668;
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_retainAutorelease(param_4);
  func_0x00010bdc0fe0();
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd00(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11271e66c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105199518; end: 105199567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105199518(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010beb8160(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271e668);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105199568; end: 1051998e7; -[SCBitmojiAvatarBackgroundView _showBlurView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105199568(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  long lVar9;
  long lVar10;
  undefined *unaff_x28;
  long lStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_11271e66c;
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar9));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1);
    _objc_release(uVar2);
    puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    uStack_98 = uVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lStack_a0 = lVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar9);
    uStack_a8 = uVar2;
    uStack_88 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    uStack_b8 = uVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_c0 = lVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + lVar9);
    uStack_d0 = uVar4;
    uStack_80 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lStack_d8 = lVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = param_1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = lVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = *(undefined8 *)(param_1 + lVar9);
    lStack_78 = unaff_x22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = unaff_x23;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = param_1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = unaff_x24;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = unaff_x26;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_c8);
    _objc_release(unaff_x28);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(lVar1);
    _objc_release(lStack_d8);
    _objc_release(uStack_d0);
    _objc_release(lStack_c0);
    _objc_release(uStack_b8);
    _objc_release(uStack_b0);
    _objc_release(uStack_a8);
    _objc_release(lStack_a0);
    _objc_release(uStack_98);
    _objc_release(uStack_90);
  }
  lVar5 = *(long *)(param_1 + lVar9);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  lVar6 = lVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_1051998e8;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = (long)_DAT_11271e668;
  lVar7 = *(long *)(lVar6 + lVar10);
  puStack_140 = unaff_x28;
  lStack_138 = lVar9;
  uStack_130 = unaff_x26;
  lStack_128 = unaff_x25;
  uStack_120 = unaff_x24;
  uStack_118 = unaff_x23;
  lStack_110 = unaff_x22;
  lStack_108 = unaff_x21;
  lStack_100 = lVar1;
  lStack_f8 = lVar5;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    func_0x00010bf57500(*(undefined8 *)(lVar6 + lVar10));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(lVar6 + lVar10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar6);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(lVar6 + lVar10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar2);
    puStack_1a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(lVar6 + lVar10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_170 = uVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    uStack_178 = uVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lStack_180 = lVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar6 + lVar10);
    uStack_188 = uVar2;
    uStack_168 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_190 = uVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    uStack_198 = uVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_1a0 = lVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(lVar6 + lVar10);
    uStack_1b0 = uVar4;
    uStack_160 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lStack_1b8 = lVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010c274200(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar6 + lVar10);
    lStack_158 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010bf1ff80(lVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_150 = uVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1a8);
    _objc_release(puVar8);
    _objc_release(uVar4);
    _objc_release(lVar5);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(lVar9);
    _objc_release(lVar1);
    _objc_release(lVar7);
    _objc_release(lStack_1b8);
    _objc_release(uStack_1b0);
    _objc_release(lStack_1a0);
    _objc_release(uStack_198);
    _objc_release(uStack_190);
    _objc_release(uStack_188);
    _objc_release(lStack_180);
    _objc_release(uStack_178);
    _objc_release(uStack_170);
  }
  lVar9 = *(long *)(lVar6 + lVar10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  lVar1 = lVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_105199c14;
  puStack_1e8 = PTR_PTR_1126e6aa0;
  lStack_1f0 = lVar1;
  lStack_1e0 = lVar7;
  lStack_1d8 = lVar9;
  ppuStack_1d0 = &puStack_f0;
  _objc_msgSendSuper2(&lStack_1f0,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c0c01a0(*(undefined8 *)(lVar1 + _DAT_11271e674));
  return;
}



/* Entry: 1051998e8; end: 105199c13; -[SCBitmojiAvatarBackgroundView _showShapeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051998e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_11271e668;
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar9));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar2);
    puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    uStack_98 = uVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lStack_a0 = lVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar9);
    uStack_a8 = uVar2;
    uStack_88 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    uStack_b8 = uVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_c0 = lVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + lVar9);
    uStack_d0 = uVar3;
    uStack_80 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lStack_d8 = lVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c274200(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    lStack_78 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_c8);
    _objc_release(puVar7);
    _objc_release(uVar3);
    _objc_release(lVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar8);
    _objc_release(lVar1);
    _objc_release(lStack_d8);
    _objc_release(uStack_d0);
    _objc_release(lStack_c0);
    _objc_release(uStack_b8);
    _objc_release(uStack_b0);
    _objc_release(uStack_a8);
    _objc_release(lStack_a0);
    _objc_release(uStack_98);
    _objc_release(uStack_90);
  }
  lVar8 = *(long *)(param_1 + lVar9);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  lVar9 = lVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_105199c14;
  puStack_108 = PTR_PTR_1126e6aa0;
  lStack_110 = lVar9;
  lStack_100 = lVar1;
  lStack_f8 = lVar8;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_110,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c0c01a0(*(undefined8 *)(lVar9 + _DAT_11271e674));
  return;
}



/* Entry: 105199c14; end: 105199c9b; -[SCBitmojiAvatarBackgroundView traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105199c14(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6aa0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c0c01a0(*(undefined8 *)(param_1 + _DAT_11271e674));
  return;
}



/* Entry: 105199c9c; end: 105199d87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105199c9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retainAutorelease(param_2);
  _objc_retain(param_3);
  func_0x00010bdc0fe0(param_2);
  lVar3 = (long)_DAT_11271e668;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_retainAutorelease(param_3);
  func_0x00010bdc0fe0();
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105199d88; end: 105199d97; -[SCBitmojiAvatarBackgroundView configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105199d88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271e674);
}



/* Entry: 105199d98; end: 105199df7; -[SCBitmojiAvatarBackgroundView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105199d98(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e674,0);
  _objc_storeStrong(param_1 + _DAT_11271e670,0);
  _objc_storeStrong(param_1 + _DAT_11271e668,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e66c,0);
  return;
}



/* Entry: 105199df8; end: 105199fff; -[SCBitmojiAvatarEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105199df8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  puVar1 = PTR_PTR_1126b5958;
  _objc_alloc();
  lVar16 = (long)_DAT_11271e678;
  lVar2 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c29dfc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf88ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c0ec160();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11271e67c;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11271e680;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010bf12fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7b00(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,lVar13,lVar15);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar16;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10519a000; end: 10519a043; -[SCBitmojiAvatarEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519a000(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271e680);
  _objc_destroyWeak(param_1 + _DAT_11271e67c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e678);
  return;
}



/* Entry: 10519a044; end: 10519a2cf; -[SCBitmojiAvatarImageViewController initWithBitmojiAvatarConfiguration:bitmojiAvatarViewOptions:bitmojiAvatarDownloadInfo:bitmojiAvatarUIOptimizations:performerProvider:avatarImageFetcher:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10519a044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
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
  puStack_68 = PTR_PTR_1126e6aa8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar6 = (long)_DAT_11271e684;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11271e688;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11271e68c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11271e690;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11271e694;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e698);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e698) = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11271e69c),param_9);
    uVar2 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e6a0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271e6a0) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e6a4);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e6a4) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e6a8);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e6a8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e6ac);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e6ac) = puVar3;
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



/* Entry: 10519a2d0; end: 10519a323;  */

void FUN_10519a2d0(void)

{
  _objc_opt_new(PTR_PTR_1126b0648);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10519a324; end: 10519a543; -[SCBitmojiAvatarImageViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519a324(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271e684);
  func_0x00010bf870a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10519a544;
  puStack_78 = &UNK_11086dea8;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271e688);
  func_0x00010bf870a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 10519a544; end: 10519a5d3;  */

void FUN_10519a544(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee46a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10519a5d4; end: 10519aa93; -[SCBitmojiAvatarImageViewController _updateWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519a5d4(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  ppuVar9 = param_3;
  func_0x00010c0d0400();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar9;
  FUN_10519aa94();
  if (((ulong)ppuVar1 & 1) == 0) {
    _objc_release(ppuVar9);
  }
  else {
    ppuVar1 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_10519bd3c;
    uStack_70 = 0x10519bd4c;
    uStack_68 = 0;
    func_0x00010c0c00a0(ppuVar1);
    lVar10 = puStack_88[5];
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
    _objc_release(ppuVar1);
    _objc_release(ppuVar1);
    _objc_release(ppuVar9);
    if (lVar10 != 0) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_11271e6a4);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar2);
      func_0x00010beb8d60(param_1);
      goto LAB_10519aa54;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271e6a8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  func_0x00010beb7f80(param_1);
  puVar4 = PTR_PTR_1126ae6b8;
  ppuVar11 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  ppuVar1 = param_3;
  func_0x00010c09ce80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = (undefined **)PTR_PTR_1126ae6b8;
  if (ppuVar1 == (undefined **)0x0) {
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar11 = param_3;
    func_0x00010c09ce80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar10 = (long)_DAT_11271e6a4;
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c29c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  if (ppuVar1 != (undefined **)0x0) {
    _objc_release(ppuVar9);
    ppuVar9 = ppuVar11;
  }
  _objc_release(ppuVar9);
  _objc_release(ppuVar1);
  puVar6 = PTR_PTR_1126ae6b8;
  lVar5 = param_1;
  func_0x00010becaae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c29c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a380(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar5);
  puVar7 = PTR_PTR_1126ae6b8;
  lVar5 = param_1;
  func_0x00010be0e4e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c29c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a320(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar5);
  puVar8 = PTR_PTR_1126ae6b8;
  func_0x00010c09d1a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa620();
  _objc_release(uVar2);
  _objc_release(puVar8);
  ppuVar9 = param_3;
  func_0x00010bf13e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar9 == (undefined **)0x0) {
    ppuVar9 = *(undefined ***)(param_1 + _DAT_11271e6ac);
    func_0x00010c269d40(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  else {
    func_0x00010beb7d20(param_1);
    ppuVar9 = param_3;
    func_0x00010bf13e20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271e6ac);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c180a40();
    _objc_release(uVar2);
  }
  _objc_release(ppuVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
LAB_10519aa54:
  _objc_release(param_3);
  return;
}



/* Entry: 10519aa94; end: 10519ab5b;  */

undefined1 FUN_10519aa94(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bcb20(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10519ab5c; end: 10519acab; -[SCBitmojiAvatarImageViewController _updateWithViewOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519ab5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf13d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf13d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271e6a4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf13d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271e6a8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf13d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271e6ac);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10519acac; end: 10519b113; -[SCBitmojiAvatarImageViewController _showBitmojiAvatarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519acac(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  undefined *puVar27;
  undefined *puVar28;
  long lVar29;
  undefined *puStack_3d8;
  undefined **ppuStack_3d0;
  code *pcStack_3c8;
  undefined *puStack_3c0;
  undefined **ppuStack_3b8;
  undefined *puStack_3b0;
  undefined **ppuStack_3a8;
  code *pcStack_3a0;
  code *pcStack_398;
  undefined **ppuStack_390;
  undefined *puStack_388;
  
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar29 = (long)_DAT_11271e6a4;
  lVar2 = *(long *)(param_1 + lVar29);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar29));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar29);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8160();
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + lVar29);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182220();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar29);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar4);
    puVar27 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar4 = *(undefined8 *)(param_1 + lVar29);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(uVar4);
    lVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar29);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar2);
    _objc_release(uVar4);
    _objc_release(lVar2);
    puVar24 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)(param_1 + lVar29);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar29);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + lVar29);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + lVar29);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar18;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar28 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar24);
    _objc_release(puVar28);
    _objc_release(uVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(lVar26);
    _objc_release(lVar2);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(puVar27);
  }
  lVar2 = *(long *)(param_1 + lVar29);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  func_0x00010c1a7f60();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
    return;
  }
  ___stack_chk_fail();
  lVar29 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar26 = (long)_DAT_11271e6a8;
  lVar25 = *(long *)(lVar2 + lVar26);
  _objc_retain(uVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar25 == 0) {
    func_0x00010bf57500(*(undefined8 *)(lVar2 + lVar26));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ad00();
    _objc_release(uVar3);
    puVar24 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(uVar3);
    _objc_release(puVar24);
    uVar3 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar3);
    lVar25 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar25);
    _objc_release(uVar3);
    _objc_release(lVar25);
    puVar24 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar6 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar25;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar11;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar16;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar14;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar21;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar19;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar24);
    _objc_release(puVar27);
    _objc_release(uVar5);
    _objc_release(lVar22);
    _objc_release(lVar19);
    _objc_release(uVar20);
    _objc_release(uVar21);
    _objc_release(uVar17);
    _objc_release(lVar18);
    _objc_release(lVar14);
    _objc_release(uVar15);
    _objc_release(uVar16);
    _objc_release(uVar12);
    _objc_release(lVar13);
    _objc_release(lVar9);
    _objc_release(uVar10);
    _objc_release(uVar11);
    _objc_release(uVar7);
    _objc_release(lVar8);
    _objc_release(lVar25);
    _objc_release(uVar3);
    _objc_release(uVar6);
  }
  uVar3 = *(undefined8 *)(lVar2 + lVar26);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar2 = *(long *)(lVar2 + lVar26);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar29) {
    return;
  }
  ___stack_chk_fail();
  lVar29 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar26 = (long)_DAT_11271e6ac;
  lVar25 = *(long *)(lVar2 + lVar26);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar25 == 0) {
    func_0x00010bf57500(*(undefined8 *)(lVar2 + lVar26));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar25 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar25;
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar4);
    _objc_release(lVar8);
    _objc_release(lVar25);
    uVar4 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar4);
    lVar25 = lVar2;
    func_0x00010c29bf00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fa0(lVar25);
    _objc_release(uVar4);
    _objc_release(lVar25);
    puVar24 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar25;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar14;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(lVar2 + lVar26);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar19;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar24);
    _objc_release(puVar27);
    _objc_release(uVar20);
    _objc_release(lVar22);
    _objc_release(lVar19);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(lVar18);
    _objc_release(lVar14);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(lVar13);
    _objc_release(lVar9);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(lVar8);
    _objc_release(lVar25);
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  uVar4 = *(undefined8 *)(lVar2 + lVar26);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = (undefined *)0x0;
  func_0x00010c1a7f60();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar29) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar24);
  puVar28 = puVar24;
  func_0x00010c269d40(puVar24);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar27 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_3d0 = &puStack_3d8;
  puStack_3d8 = (undefined *)0x0;
  pcStack_3c8 = (code *)0x2020000000;
  puStack_3c0 = (undefined *)((ulong)puStack_3c0 & 0xffffffffffffff00);
  puStack_3b0 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_3a8 = (undefined **)0xc2000000;
  pcStack_3a0 = FUN_10519cd54;
  pcStack_398 = (code *)&UNK_110842b58;
  ppuStack_390 = ppuStack_3d0;
  func_0x00010c0c00a0(puVar28);
  cVar1 = *(char *)(ppuStack_3d0 + 3);
  __Block_object_dispose(&puStack_3d8,8);
  _objc_release(puVar28);
  _objc_release(puVar28);
  if (cVar1 == '\x01') {
    puVar23 = puVar24;
    func_0x00010c269d40(puVar24);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    ppuStack_3b8 = &puStack_3b0;
    puStack_3b0 = (undefined *)0x0;
    pcStack_3a0 = (code *)0x3032000000;
    pcStack_398 = FUN_10519bd3c;
    ppuStack_390 = (undefined **)0x10519bd4c;
    puStack_388 = (undefined *)0x0;
    puStack_3d8 = puVar27;
    ppuStack_3d0 = (undefined **)0xc2000000;
    pcStack_3c8 = FUN_10519cd68;
    puStack_3c0 = &UNK_110842b58;
    ppuStack_3a8 = ppuStack_3b8;
    func_0x00010c0c00a0(puVar23);
    puVar28 = ppuStack_3a8[5];
    _objc_retain(puVar28);
    __Block_object_dispose(&puStack_3b0,8);
    _objc_release(puStack_388);
    _objc_release(puVar23);
    _objc_release(puVar23);
    if (puVar28 == (undefined *)0x0) {
      puVar27 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c14c560(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 0;
      func_0x000108ffef38(0,puVar27,1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar27 = puVar24;
      func_0x00010bfa0480(puVar24);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar24;
      func_0x00010c0d0400(puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be0e520(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar23);
    }
    _objc_release(puVar27);
    puVar23 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    puVar27 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar23);
    _objc_release(uVar4);
  }
  else {
    ppuStack_3a8 = &puStack_3b0;
    puStack_3b0 = (undefined *)0x0;
    pcStack_3a0 = (code *)0x3032000000;
    pcStack_398 = FUN_10519bd3c;
    ppuStack_390 = (undefined **)0x10519bd4c;
    puStack_388 = (undefined *)0x0;
    puVar27 = puVar24;
    func_0x00010c269d40(puVar24);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar24);
    _objc_retain(puVar24);
    func_0x00010c0c00a0(puVar27);
    _objc_release(puVar27);
    puVar27 = ppuStack_3a8[5];
    _objc_retain(puVar27);
    _objc_release(puVar24);
    _objc_release(puVar24);
    __Block_object_dispose(&puStack_3b0,8);
    puVar28 = puStack_388;
  }
  _objc_release(puVar28);
  _objc_release(puVar24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar27);
  return;
}



/* Entry: 10519b114; end: 10519b593; -[SCBitmojiAvatarImageViewController _showEmojiLabelWithEmoji:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519b114(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  undefined *puVar27;
  long lVar28;
  undefined *puStack_2c8;
  undefined **ppuStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined **ppuStack_2a8;
  undefined *puStack_2a0;
  undefined **ppuStack_298;
  code *pcStack_290;
  code *pcStack_288;
  undefined **ppuStack_280;
  undefined *puStack_278;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = (long)_DAT_11271e6a8;
  lVar26 = *(long *)(param_1 + lVar24);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar26 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar24));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ad00();
    _objc_release(uVar2);
    puVar22 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(uVar2);
    _objc_release(puVar22);
    uVar2 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar2);
    lVar26 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar26);
    _objc_release(uVar2);
    _objc_release(lVar26);
    puVar22 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = lVar26;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(param_1 + lVar24);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar22);
    _objc_release(puVar25);
    _objc_release(uVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar28);
    _objc_release(lVar26);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_3);
  _objc_release(uVar2);
  lVar26 = *(long *)(param_1 + lVar24);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return;
  }
  ___stack_chk_fail();
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar28 = (long)_DAT_11271e6ac;
  lVar23 = *(long *)(lVar26 + lVar28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar23 == 0) {
    func_0x00010bf57500(*(undefined8 *)(lVar26 + lVar28));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar23 = lVar26;
    func_0x00010c29bf00(lVar26);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar23;
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(lVar26 + lVar28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar2);
    _objc_release(lVar7);
    _objc_release(lVar23);
    uVar2 = *(undefined8 *)(lVar26 + lVar28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar2);
    lVar23 = lVar26;
    func_0x00010c29bf00(lVar26);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(lVar26 + lVar28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fa0(lVar23);
    _objc_release(uVar2);
    _objc_release(lVar23);
    puVar22 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = *(undefined8 *)(lVar26 + lVar28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = lVar26;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar23;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar26 + lVar28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar26;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar26 + lVar28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar26;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar13;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(lVar26 + lVar28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar26;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar18;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar16;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar22);
    _objc_release(puVar25);
    _objc_release(uVar19);
    _objc_release(lVar20);
    _objc_release(lVar18);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(lVar17);
    _objc_release(lVar13);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar12);
    _objc_release(lVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar7);
    _objc_release(lVar23);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  uVar2 = *(undefined8 *)(lVar26 + lVar28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = (undefined *)0x0;
  func_0x00010c1a7f60();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar22);
  puVar27 = puVar22;
  func_0x00010c269d40(puVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar25 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_2c0 = &puStack_2c8;
  puStack_2c8 = (undefined *)0x0;
  pcStack_2b8 = (code *)0x2020000000;
  puStack_2b0 = (undefined *)((ulong)puStack_2b0 & 0xffffffffffffff00);
  puStack_2a0 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_298 = (undefined **)0xc2000000;
  pcStack_290 = FUN_10519cd54;
  pcStack_288 = (code *)&UNK_110842b58;
  ppuStack_280 = ppuStack_2c0;
  func_0x00010c0c00a0(puVar27);
  cVar1 = *(char *)(ppuStack_2c0 + 3);
  __Block_object_dispose(&puStack_2c8,8);
  _objc_release(puVar27);
  _objc_release(puVar27);
  if (cVar1 == '\x01') {
    puVar21 = puVar22;
    func_0x00010c269d40(puVar22);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    ppuStack_2a8 = &puStack_2a0;
    puStack_2a0 = (undefined *)0x0;
    pcStack_290 = (code *)0x3032000000;
    pcStack_288 = FUN_10519bd3c;
    ppuStack_280 = (undefined **)0x10519bd4c;
    puStack_278 = (undefined *)0x0;
    puStack_2c8 = puVar25;
    ppuStack_2c0 = (undefined **)0xc2000000;
    pcStack_2b8 = FUN_10519cd68;
    puStack_2b0 = &UNK_110842b58;
    ppuStack_298 = ppuStack_2a8;
    func_0x00010c0c00a0(puVar21);
    puVar27 = ppuStack_298[5];
    _objc_retain(puVar27);
    __Block_object_dispose(&puStack_2a0,8);
    _objc_release(puStack_278);
    _objc_release(puVar21);
    _objc_release(puVar21);
    if (puVar27 == (undefined *)0x0) {
      puVar25 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c14c560(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = 0;
      func_0x000108ffef38(0,puVar25,1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar25 = puVar22;
      func_0x00010bfa0480(puVar22);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar22;
      func_0x00010c0d0400(puVar22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be0e520(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar21);
    }
    _objc_release(puVar25);
    puVar21 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar21);
    _objc_release(uVar2);
  }
  else {
    ppuStack_298 = &puStack_2a0;
    puStack_2a0 = (undefined *)0x0;
    pcStack_290 = (code *)0x3032000000;
    pcStack_288 = FUN_10519bd3c;
    ppuStack_280 = (undefined **)0x10519bd4c;
    puStack_278 = (undefined *)0x0;
    puVar25 = puVar22;
    func_0x00010c269d40(puVar22);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar22);
    _objc_retain(puVar22);
    func_0x00010c0c00a0(puVar25);
    _objc_release(puVar25);
    puVar25 = ppuStack_298[5];
    _objc_retain(puVar25);
    _objc_release(puVar22);
    _objc_release(puVar22);
    __Block_object_dispose(&puStack_2a0,8);
    puVar27 = puStack_278;
  }
  _objc_release(puVar27);
  _objc_release(puVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}



/* Entry: 10519b594; end: 10519b99b; -[SCBitmojiAvatarImageViewController _showBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519b594(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  long lVar27;
  undefined *puStack_1b8;
  undefined **ppuStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  code *pcStack_180;
  code *pcStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar27 = (long)_DAT_11271e6ac;
  lVar2 = *(long *)(param_1 + lVar27);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar27));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar27);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(param_1 + lVar27);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar4);
    lVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar27);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fa0(lVar2);
    _objc_release(uVar4);
    _objc_release(lVar2);
    puVar23 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)(param_1 + lVar27);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar27);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar27);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + lVar27);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar19;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar23);
    _objc_release(puVar25);
    _objc_release(uVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  uVar4 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = (undefined *)0x0;
  func_0x00010c1a7f60();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar23);
  puVar26 = puVar23;
  func_0x00010c269d40(puVar23);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar25 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_1b0 = &puStack_1b8;
  puStack_1b8 = (undefined *)0x0;
  pcStack_1a8 = (code *)0x2020000000;
  puStack_1a0 = (undefined *)((ulong)puStack_1a0 & 0xffffffffffffff00);
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_188 = (undefined **)0xc2000000;
  pcStack_180 = FUN_10519cd54;
  pcStack_178 = (code *)&UNK_110842b58;
  ppuStack_170 = ppuStack_1b0;
  func_0x00010c0c00a0(puVar26);
  cVar1 = *(char *)(ppuStack_1b0 + 3);
  __Block_object_dispose(&puStack_1b8,8);
  _objc_release(puVar26);
  _objc_release(puVar26);
  if (cVar1 == '\x01') {
    puVar22 = puVar23;
    func_0x00010c269d40(puVar23);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    ppuStack_198 = &puStack_190;
    puStack_190 = (undefined *)0x0;
    pcStack_180 = (code *)0x3032000000;
    pcStack_178 = FUN_10519bd3c;
    ppuStack_170 = (undefined **)0x10519bd4c;
    puStack_168 = (undefined *)0x0;
    puStack_1b8 = puVar25;
    ppuStack_1b0 = (undefined **)0xc2000000;
    pcStack_1a8 = FUN_10519cd68;
    puStack_1a0 = &UNK_110842b58;
    ppuStack_188 = ppuStack_198;
    func_0x00010c0c00a0(puVar22);
    puVar26 = ppuStack_188[5];
    _objc_retain(puVar26);
    __Block_object_dispose(&puStack_190,8);
    _objc_release(puStack_168);
    _objc_release(puVar22);
    _objc_release(puVar22);
    if (puVar26 == (undefined *)0x0) {
      puVar25 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c14c560(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 0;
      func_0x000108ffef38(0,puVar25,1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar25 = puVar23;
      func_0x00010bfa0480(puVar23);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar23;
      func_0x00010c0d0400(puVar23);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be0e520(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
    }
    _objc_release(puVar25);
    puVar22 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar22);
    _objc_release(uVar4);
  }
  else {
    ppuStack_188 = &puStack_190;
    puStack_190 = (undefined *)0x0;
    pcStack_180 = (code *)0x3032000000;
    pcStack_178 = FUN_10519bd3c;
    ppuStack_170 = (undefined **)0x10519bd4c;
    puStack_168 = (undefined *)0x0;
    puVar25 = puVar23;
    func_0x00010c269d40(puVar23);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar23);
    _objc_retain(puVar23);
    func_0x00010c0c00a0(puVar25);
    _objc_release(puVar25);
    puVar25 = ppuStack_188[5];
    _objc_retain(puVar25);
    _objc_release(puVar23);
    _objc_release(puVar23);
    __Block_object_dispose(&puStack_190,8);
    puVar26 = puStack_168;
  }
  _objc_release(puVar26);
  _objc_release(puVar23);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar25);
  return;
}



/* Entry: 10519b99c; end: 10519bd3b; -[SCBitmojiAvatarImageViewController _targetImageResultForConfiguration:] */

void FUN_10519b99c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puVar4 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_b0 = &puStack_b8;
  puStack_b8 = (undefined *)0x0;
  pcStack_a8 = (code *)0x2020000000;
  puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_88 = (undefined **)0xc2000000;
  pcStack_80 = FUN_10519cd54;
  pcStack_78 = (code *)&UNK_110842b58;
  ppuStack_70 = ppuStack_b0;
  func_0x00010c0c00a0(puVar4);
  cVar1 = *(char *)(ppuStack_b0 + 3);
  __Block_object_dispose(&puStack_b8,8);
  _objc_release(puVar4);
  _objc_release(puVar4);
  if (cVar1 == '\x01') {
    puVar2 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    ppuStack_98 = &puStack_90;
    puStack_90 = (undefined *)0x0;
    pcStack_80 = (code *)0x3032000000;
    pcStack_78 = FUN_10519bd3c;
    ppuStack_70 = (undefined **)0x10519bd4c;
    puStack_68 = (undefined *)0x0;
    puStack_b8 = puVar3;
    ppuStack_b0 = (undefined **)0xc2000000;
    pcStack_a8 = FUN_10519cd68;
    puStack_a0 = &UNK_110842b58;
    ppuStack_88 = ppuStack_98;
    func_0x00010c0c00a0(puVar2);
    puVar4 = ppuStack_88[5];
    _objc_retain(puVar4);
    __Block_object_dispose(&puStack_90,8);
    _objc_release(puStack_68);
    _objc_release(puVar2);
    _objc_release(puVar2);
    if (puVar4 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c14c560(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0;
      func_0x000108ffef38(0,puVar3,1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = param_3;
      func_0x00010bfa0480(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010c0d0400(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be0e520(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_1);
  }
  else {
    ppuStack_88 = &puStack_90;
    puStack_90 = (undefined *)0x0;
    pcStack_80 = (code *)0x3032000000;
    pcStack_78 = FUN_10519bd3c;
    ppuStack_70 = (undefined **)0x10519bd4c;
    puStack_68 = (undefined *)0x0;
    puVar3 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_3);
    func_0x00010c0c00a0(puVar3);
    _objc_release(puVar3);
    puVar3 = ppuStack_88[5];
    _objc_retain(puVar3);
    _objc_release(param_3);
    _objc_release(param_3);
    __Block_object_dispose(&puStack_90,8);
    puVar4 = puStack_68;
  }
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10519bd3c; end: 10519bd53;  */

void FUN_10519bd3c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10519bd54; end: 10519bed3;  */

void FUN_10519bd54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_2);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010901cdb0(param_2,puVar1);
  _objc_release(puVar1);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d0400(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar7 = uVar6;
  func_0x00010bf1c0a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa0480(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becab20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar10 = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = uVar9;
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10519bed4; end: 10519bfd3;  */

void FUN_10519bed4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_5 != 0) {
    func_0x00010c0812e0(PTR__OBJC_CLASS___NSDate_1126ae770);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d0400(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa0480(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becab20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10519bfd4; end: 10519bfd7;  */

void FUN_10519bfd4(void)

{
  return;
}



/* Entry: 10519bfd8; end: 10519c507; -[SCBitmojiAvatarImageViewController _targetImageResultForModifier:userId:bitmojiAvatarId:bitmojiSelfieId:fallbackImage:isBirthdayToday:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519bfd8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_260;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar6 = param_4;
  func_0x00010c0720c0();
  if ((int)uVar6 == 0) {
    lVar1 = param_5;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      puStack_90 = &uStack_98;
      uStack_98 = 0;
      uStack_88 = 0x2020000000;
      uStack_80 = 0;
      puStack_c0 = &uStack_c8;
      uStack_c8 = 0;
      uVar7 = 0x3032000000;
      uStack_b8 = 0x3032000000;
      pcStack_b0 = FUN_10519bd3c;
      uStack_a8 = 0x10519bd4c;
      uStack_a0 = 0;
      puStack_e0 = &uStack_e8;
      uStack_e8 = 0;
      uStack_d8 = 0x2020000000;
      uStack_d0 = 0;
      puStack_100 = &uStack_108;
      uStack_108 = 0;
      uStack_f8 = 0x2020000000;
      uStack_f0 = 0;
      puStack_130 = &uStack_138;
      uStack_138 = 0;
      uStack_128 = 0x3032000000;
      pcStack_120 = FUN_10519bd3c;
      uStack_118 = 0x10519bd4c;
      uStack_110 = 0;
      uVar6 = 0xc2000000;
      func_0x00010c0bcb20(param_3);
      puStack_260 = *(undefined **)(param_1 + _DAT_11271e694);
      if (*(char *)(puStack_90 + 3) == '\x01') {
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_1 + _DAT_11271e68c);
        func_0x00010bf4f6c0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0e960();
        func_0x00010bf2db20();
        func_0x00010c106c00(*(undefined8 *)(param_1 + _DAT_11271e690));
        uVar3 = *(undefined8 *)(param_1 + _DAT_11271e6a0);
        func_0x00010c11de00();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puStack_260;
        func_0x00010bfa55a0(uVar6,uVar7,puStack_260);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_1 + _DAT_11271e68c);
        func_0x00010bf4f6c0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0e960();
        func_0x00010bf2db20();
        func_0x00010c106c00(*(undefined8 *)(param_1 + _DAT_11271e690));
        uVar3 = *(undefined8 *)(param_1 + _DAT_11271e6a0);
        func_0x00010c11de00();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puStack_260;
        func_0x00010bfaa060(uVar6,uVar7,puStack_260);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(puStack_260);
      __Block_object_dispose(&uStack_138,8);
      _objc_release(uStack_110);
      __Block_object_dispose(&uStack_108,8);
      __Block_object_dispose(&uStack_e8,8);
      __Block_object_dispose(&uStack_c8,8);
      _objc_release(uStack_a0);
      __Block_object_dispose(&uStack_98,8);
      goto LAB_10519c470;
    }
    func_0x00010be0e520(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_1);
LAB_10519c470:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10519c508; end: 10519c55f;  */

void FUN_10519c508(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  *(ulong *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (ulong)*(byte *)(param_1 + 0x38);
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10519c560; end: 10519c573;  */

void FUN_10519c560(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10519c574; end: 10519c5bb;  */

void FUN_10519c574(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10519c5bc; end: 10519c5cf;  */

void FUN_10519c5bc(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  return;
}



/* Entry: 10519c5d0; end: 10519c667;  */

void FUN_10519c5d0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(&PTR____CFConstantStringClassReference_110f4b698);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110f4b698;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10519c668; end: 10519c7f7; -[SCBitmojiAvatarImageViewController _fallbackImageForConfiguration:] */

void FUN_10519c668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10519bd3c;
  uStack_60 = 0x10519bd4c;
  uStack_58 = 0;
  uVar1 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0c00a0(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae6b8;
  if (puStack_78[5] == 0) {
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10519c7f8; end: 10519c957;  */

void FUN_10519c7f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfa0480(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d0400(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0e520();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10519c958; end: 10519cae3; -[SCBitmojiAvatarImageViewController _fallbackImageForUser:fallbackImage:modifier:] */

void FUN_10519c958(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10519bd3c;
  uStack_40 = 0x10519bd4c;
  uStack_38 = 0;
  if (param_4 == 0) {
    uVar4 = param_3;
    func_0x000108ffe710(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_5;
    FUN_10519aa94();
    if ((uVar1 & 1) == 0) {
      uVar2 = 1;
      func_0x000108ffef38(1,uVar4,1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puStack_58[5];
      puStack_58[5] = uVar2;
      _objc_release(uVar3);
    }
    _objc_release(uVar4);
  }
  else {
    func_0x00010c0bca00(param_4);
  }
  uVar4 = puStack_58[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10519cae4; end: 10519cb73;  */

void FUN_10519cae4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000108ffef38(param_2,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10519cb74; end: 10519cbe3; -[SCBitmojiAvatarImageViewController handleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519cb74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271e6a4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ffe49c(0x3ff19999a0000000);
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_11271e69c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7ce80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10519cbe4; end: 10519ccaf; -[SCBitmojiAvatarImageViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519cbe4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e698,0);
  _objc_storeStrong(param_1 + _DAT_11271e6ac,0);
  _objc_storeStrong(param_1 + _DAT_11271e6a8,0);
  _objc_storeStrong(param_1 + _DAT_11271e6a4,0);
  _objc_destroyWeak(param_1 + _DAT_11271e69c);
  _objc_storeStrong(param_1 + _DAT_11271e694,0);
  _objc_storeStrong(param_1 + _DAT_11271e6a0,0);
  _objc_storeStrong(param_1 + _DAT_11271e690,0);
  _objc_storeStrong(param_1 + _DAT_11271e68c,0);
  _objc_storeStrong(param_1 + _DAT_11271e688,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e684,0);
  return;
}



/* Entry: 10519ccb0; end: 10519ccc3;  */

void FUN_10519ccb0(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10519ccc4; end: 10519cd53;  */

void FUN_10519ccc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10519cd54; end: 10519cd67;  */

void FUN_10519cd54(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10519cd68; end: 10519cd9f;  */

void FUN_10519cd68(long param_1,undefined8 param_2)

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



/* Entry: 10519cda0; end: 10519ce1b; -[SCGroupAvatarBackgroundView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10519cda0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e6ab0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e6b0);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e6b0) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10519ce1c; end: 10519ce37;  */

void FUN_10519ce1c(void)

{
  _objc_opt_new(PTR_PTR_1126b52f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10519ce38; end: 10519cf67; -[SCGroupAvatarBackgroundView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519ce38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126e6ab0;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  lVar6 = (long)_DAT_11271e6b4;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  lVar2 = param_5;
  uVar5 = param_1;
  uVar4 = param_2;
  uVar7 = param_3;
  uVar8 = param_4;
  func_0x00010bf20c00();
  iVar1 = (int)lVar2;
  _CGRectEqualToRect(param_1,param_2,param_3,param_4,uVar5,uVar4,uVar7,uVar8);
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  if ((iVar1 == 0) || (lVar2 = *(long *)(param_5 + lVar6), lVar2 == 0)) {
    func_0x00010bf20c00(param_5);
    func_0x00010bf199a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_5 + lVar6);
    *(undefined **)(param_5 + lVar6) = puVar3;
    _objc_release(uVar5);
    lVar2 = *(long *)(param_5 + lVar6);
  }
  func_0x00010bdc1040(lVar2);
  uVar4 = *(undefined8 *)(param_5 + _DAT_11271e6b0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar5);
  _objc_release(uVar4);
  return;
}



/* Entry: 10519cf68; end: 10519d03b; -[SCGroupAvatarBackgroundView setConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519cf68(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271e6b8);
  *(long *)(param_1 + _DAT_11271e6b8) = lVar1;
  _objc_release(uVar2);
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271e6b0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10519d03c;
    puStack_40 = &UNK_11086ddb8;
    lStack_38 = param_1;
    func_0x00010c0c0180(param_3,param_2,&puStack_58);
  }
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10519d03c; end: 10519d18b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519d03c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bebae20(uVar2);
  _objc_retainAutorelease(param_3);
  func_0x00010bdc0fe0();
  _objc_release(param_3);
  lVar3 = (long)_DAT_11271e6b0;
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_retainAutorelease(param_4);
  func_0x00010bdc0fe0();
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd00(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10519d18c; end: 10519d4b7; -[SCGroupAvatarBackgroundView _showShapeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519d18c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = (long)_DAT_11271e6b0;
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar9));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar2);
    puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    uStack_98 = uVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lStack_a0 = lVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar9);
    uStack_a8 = uVar2;
    uStack_88 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    uStack_b8 = uVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_c0 = lVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + lVar9);
    uStack_d0 = uVar3;
    uStack_80 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lStack_d8 = lVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c274200(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    lStack_78 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bf1ff80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_c8);
    _objc_release(puVar7);
    _objc_release(uVar3);
    _objc_release(lVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar8);
    _objc_release(lVar1);
    _objc_release(lStack_d8);
    _objc_release(uStack_d0);
    _objc_release(lStack_c0);
    _objc_release(uStack_b8);
    _objc_release(uStack_b0);
    _objc_release(uStack_a8);
    _objc_release(lStack_a0);
    _objc_release(uStack_98);
    _objc_release(uStack_90);
  }
  lVar8 = *(long *)(param_1 + lVar9);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  lVar9 = lVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_10519d4b8;
  puStack_108 = PTR_PTR_1126e6ab0;
  lStack_110 = lVar9;
  lStack_100 = lVar1;
  lStack_f8 = lVar8;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_110,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c0c0180(*(undefined8 *)(lVar9 + _DAT_11271e6b8));
  return;
}



/* Entry: 10519d4b8; end: 10519d53b; -[SCGroupAvatarBackgroundView traitCollectionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519d4b8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6ab0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010c0c0180(*(undefined8 *)(param_1 + _DAT_11271e6b8));
  return;
}



/* Entry: 10519d53c; end: 10519d627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519d53c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retainAutorelease(param_2);
  _objc_retain(param_3);
  func_0x00010bdc0fe0(param_2);
  lVar3 = (long)_DAT_11271e6b0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_retainAutorelease(param_3);
  func_0x00010bdc0fe0();
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10519d628; end: 10519d637; -[SCGroupAvatarBackgroundView configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10519d628(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271e6b8);
}



/* Entry: 10519d638; end: 10519d687; -[SCGroupAvatarBackgroundView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519d638(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e6b8,0);
  _objc_storeStrong(param_1 + _DAT_11271e6b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e6b0,0);
  return;
}



/* Entry: 10519d688; end: 10519d8db; -[SCGroupAvatarEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519d688(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  puVar1 = PTR_PTR_1126b5968;
  _objc_alloc();
  lVar19 = (long)_DAT_11271e6bc;
  lVar2 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c29dfc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf88ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c0ec160();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11271e6c0;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11271e6c4;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf12fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11271e6c8;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018a20(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,lVar13,lVar16,lVar18);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + lVar19;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10519d8dc; end: 10519d95b; -[SCGroupAvatarEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519d8dc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271e6d8);
  _objc_destroyWeak(param_1 + _DAT_11271e6c4);
  _objc_destroyWeak(param_1 + _DAT_11271e6c0);
  _objc_destroyWeak(param_1 + _DAT_11271e6d4);
  _objc_destroyWeak(param_1 + _DAT_11271e6d0);
  _objc_destroyWeak(param_1 + _DAT_11271e6cc);
  _objc_destroyWeak(param_1 + _DAT_11271e6c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271e6bc);
  return;
}



/* Entry: 10519d95c; end: 10519ddcf; -[SCGroupAvatarImageViewController initWithGroupAvatarConfiguration:groupAvatarViewOptions:groupAvatarDownloadInfo:groupAvatarUIOptimizations:performerProvider:avatarImageFetcher:userId:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10519d95c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
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
  puStack_80 = PTR_PTR_1126e6ab8;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar7 = (long)_DAT_11271e6dc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_3;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271e6e0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_4;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271e6e4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_5;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271e6e8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_6;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271e6ec;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_8;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e6f0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271e6f0) = uVar2;
    _objc_release(uVar5);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11271e6f4,param_10);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e6f8);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e6f8) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e6fc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271e6fc) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    puVar4 = PTR_PTR_1126ae720;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10519ddd0;
    puStack_a0 = &UNK_11086e038;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e700);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e700) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x10519de10;
    puStack_c8 = &UNK_11086e068;
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e704);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e704) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    puStack_108 = puVar3;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x10519de50;
    puStack_f0 = &UNK_11086e068;
    _objc_copyWeak(auStack_e8,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e708);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e708) = puVar4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_110,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271e70c);
    *(undefined **)((long)puVar1 + (long)_DAT_11271e70c) = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
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



/* Entry: 10519ddd0; end: 10519decf;  */

void FUN_10519ddd0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd2520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10519ded0; end: 10519e19b; -[SCGroupAvatarImageViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519ded0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126e6ab8;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_viewDidLoad_112684cd8);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar1);
  _objc_initWeak(auStack_88,param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11271e6dc);
  func_0x00010bf870a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0e0ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10519e19c;
  puStack_98 = &UNK_11086e098;
  _objc_copyWeak(auStack_90,auStack_88);
  uVar7 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11271e6e0);
  func_0x00010bf870a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c0e0ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b8,auStack_88);
  uVar7 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar3);
  return;
}



/* Entry: 10519e19c; end: 10519e22b;  */

void FUN_10519e19c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee46a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10519e22c; end: 10519e2e7; -[SCGroupAvatarImageViewController viewDidLayoutSubviews] */

void FUN_10519e22c(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e6ab8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLayoutSubviews_112684cc8);
  uVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(uVar1);
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0((double)(float)(int)(param_1 * 0.5));
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10519e2e8; end: 10519e397; -[SCGroupAvatarImageViewController _rightImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519e2e8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = param_1;
  func_0x00010be377e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11271e708;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c06f880();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (iVar1 == 0) {
    func_0x00010befbb60(lVar3,param_2,lVar2);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fe0(lVar3,param_2,lVar2,uVar4);
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10519e398; end: 10519e3eb; -[SCGroupAvatarImageViewController _middleImageView] */

void FUN_10519e398(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be377e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10519e3ec; end: 10519e49b; -[SCGroupAvatarImageViewController _leftImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519e3ec(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = param_1;
  func_0x00010be377e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11271e70c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
  func_0x00010c06f880();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (iVar1 == 0) {
    func_0x00010befbb60(lVar3,param_2,lVar2);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fe0(lVar3,param_2,lVar2,uVar4);
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10519e49c; end: 10519e513; -[SCGroupAvatarImageViewController _imageView] */

void FUN_10519e49c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0648;
  _objc_opt_new(PTR_PTR_1126b0648);
  puVar2 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8160();
  _objc_release(puVar2);
  func_0x00010c182220(puVar1,param_2,1);
  func_0x00010c219b60(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10519e514; end: 10519e823; -[SCGroupAvatarImageViewController _backgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519e514(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_220 [8];
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1c0 [8];
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [16];
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = PTR_PTR_1126b5970;
  _objc_opt_new();
  uVar20 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar20;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar16);
  _objc_release(uVar17);
  _objc_release(uVar20);
  func_0x00010c219b60(puVar16);
  uVar20 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fa0();
  _objc_release(uVar20);
  puVar15 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar1 = puVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar20;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar14;
  func_0x00010beef8c0(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(param_1);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar17);
  _objc_release(uVar20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar18);
  _objc_initWeak(auStack_150,puVar1);
  uVar20 = *(undefined8 *)(puVar1 + _DAT_11271e6f0);
  _objc_retain(uVar20);
  puVar16 = puVar18;
  func_0x00010c269d40(puVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_180 = 0xc2000000;
  pcStack_178 = FUN_10519eb54;
  puStack_170 = &UNK_11086e108;
  _objc_retain(uVar20);
  uStack_168 = uVar20;
  _objc_copyWeak(auStack_158,auStack_150);
  _objc_retain(puVar18);
  puStack_1b8 = puVar15;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_10519ec90;
  puStack_1a0 = &UNK_11085c6a8;
  puStack_160 = puVar18;
  _objc_copyWeak(auStack_190,auStack_150);
  _objc_retain(puVar18);
  puStack_1e8 = puVar15;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_10519edb0;
  puStack_1d0 = &UNK_11085c6a8;
  puStack_198 = puVar18;
  _objc_copyWeak(auStack_1c0,auStack_150);
  _objc_retain(puVar18);
  puStack_218 = puVar15;
  uStack_210 = 0xc2000000;
  pcStack_208 = FUN_10519ef04;
  puStack_200 = &UNK_11085c6a8;
  puStack_1c8 = puVar18;
  _objc_copyWeak(auStack_1f0,auStack_150);
  _objc_retain(puVar18);
  puStack_1f8 = puVar18;
  _objc_copyWeak(auStack_220,auStack_150);
  _objc_retain(puVar18);
  func_0x00010c0be140(puVar16);
  _objc_release(puVar16);
  puVar15 = puVar18;
  func_0x00010bf13e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar19 = (long)_DAT_11271e700;
  puVar16 = *(undefined **)(puVar1 + lVar19);
  if (puVar15 == (undefined *)0x0) {
    func_0x00010bfe6360(puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar16);
    puVar16 = puVar18;
    func_0x00010bf13e20(puVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(puVar1 + lVar19);
    func_0x00010c269d40(uVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c180a40();
    _objc_release(uVar17);
  }
  _objc_release(puVar16);
  _objc_release(puVar18);
  _objc_destroyWeak(auStack_220);
  _objc_release(puStack_1f8);
  _objc_destroyWeak(auStack_1f0);
  _objc_release(puStack_1c8);
  _objc_destroyWeak(auStack_1c0);
  _objc_release(puStack_198);
  _objc_destroyWeak(auStack_190);
  _objc_release(puStack_160);
  _objc_destroyWeak(auStack_158);
  _objc_release(uStack_168);
  _objc_release(uVar20);
  _objc_destroyWeak(auStack_150);
  _objc_release(puVar18);
  return;
}



/* Entry: 10519e824; end: 10519eb53; -[SCGroupAvatarImageViewController _updateWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10519e824(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_80,param_1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11271e6f0);
  _objc_retain(uVar5);
  lVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10519eb54;
  puStack_a0 = &UNK_11086e108;
  _objc_retain(uVar5);
  uStack_98 = uVar5;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10519ec90;
  puStack_d0 = &UNK_11085c6a8;
  lStack_90 = param_3;
  _objc_copyWeak(auStack_c0,auStack_80);
  _objc_retain(param_3);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_10519edb0;
  puStack_100 = &UNK_11085c6a8;
  lStack_c8 = param_3;
  _objc_copyWeak(auStack_f0,auStack_80);
  _objc_retain(param_3);
  puStack_148 = puVar1;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_10519ef04;
  puStack_130 = &UNK_11085c6a8;
  lStack_f8 = param_3;
  _objc_copyWeak(auStack_120,auStack_80);
  _objc_retain(param_3);
  lStack_128 = param_3;
  _objc_copyWeak(auStack_150,auStack_80);
  _objc_retain(param_3);
  func_0x00010c0be140(lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf13e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar6 = (long)_DAT_11271e700;
  lVar3 = *(long *)(param_1 + lVar6);
  if (lVar2 == 0) {
    func_0x00010bfe6360(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010bf13e20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c180a40();
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_150);
  _objc_release(lStack_128);
  _objc_destroyWeak(auStack_120);
  _objc_release(lStack_f8);
  _objc_destroyWeak(auStack_f0);
  _objc_release(lStack_c8);
  _objc_destroyWeak(auStack_c0);
  _objc_release(lStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_98);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_3);
  return;
}



/* Entry: 10519eb54; end: 10519ebcf;  */

void FUN_10519eb54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000108ef2144(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100504554();
  _objc_release(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4560();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10519ebd0; end: 10519ec8f;  */

void FUN_10519ebd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b5978;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf1acc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf40c40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c05ad80(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10519ec90; end: 10519ecef;  */

void FUN_10519ec90(long param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_11086e138);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4560();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


