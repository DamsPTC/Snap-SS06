/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1051df6d8; end: 1051df703;  */

void FUN_1051df6d8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becaca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051df704; end: 1051df773; -[SCContextStoragePlanUpsellActionPerformer _tearDown] */

void FUN_1051df704(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051df774; end: 1051df7e3; -[SCContextStoragePlanUpsellActionPerformer plusSubscribeDidDismiss] */

void FUN_1051df774(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051df7e4; end: 1051df81f; -[SCContextStoragePlanUpsellActionPerformer .cxx_destruct] */

void FUN_1051df7e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051df820; end: 1051df827; -[SCContextStoriesSmartReplyActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8 FUN_1051df820(void)

{
  return 0;
}



/* Entry: 1051df828; end: 1051dfb53;  */

void FUN_1051df828(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c06a580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe2ee0();
  lVar5 = lVar3;
  func_0x00010c0b5940(lVar3);
  func_0x000100c4a928(lVar4,lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c06a580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c06a860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe2ee0();
  lVar6 = lVar3;
  func_0x00010c0b5940(lVar3);
  func_0x000100c4a928(lVar4,lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c06a580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25a5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c06a580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = lVar2;
  func_0x00010c25b720();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc7b18;
  if ((int)lVar4 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dcaeb8;
  }
  _objc_retain(ppuVar1);
  _objc_release(lVar2);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c08fa60();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar10 = puVar7;
  if (lVar2 != 0) {
    puVar8 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bdc3100(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c25cda0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ce40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar9);
    _objc_release(lVar2);
    _objc_release(puVar8);
  }
  ppuVar11 = ppuVar1;
  func_0x00010c08fa60();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar7 = puVar10;
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar11 = ppuVar1;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ce40(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(ppuVar11);
  }
  puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(ppuVar1);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1051dfb54; end: 1051dff7b; -[SCContextStoryInviteActionPerformer initWithUserSession:snapchattersDataFetcher:customStoriesDataFetcher:customStoriesDataSyncer:storiesDataCoordinator:scopedStoriesFetcherAccessor:bitmojiAvatarProvider:bitmojiSelfieProvider:bitmojiImageFetcher:imageDownloader:contextStoryPlaybackScopeExposer:composerRuntimeProviding:inviteService:addToStoryCameraScopeExposer:addToStoryCameraScopeBuilder:userLogger:storyInviteRecipientsBuilder:killSwitchProvider:storiesConfigProvider:] */

undefined8 *
FUN_1051dfb54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

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
  puStack_70 = PTR_PTR_1126e6d68;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
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
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_21;
    _objc_release(uVar2);
  }
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



/* Entry: 1051dff7c; end: 1051e021b; -[SCContextStoryInviteActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051dff7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_6;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  _objc_release(uVar7);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_7;
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010c259dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010c14cd80(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1068;
  _objc_alloc();
  func_0x00010c057c40();
  puVar5 = puVar4;
  func_0x00010c0f5820();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_initWeak(auStack_68,param_1);
  puVar5 = PTR___dispatch_main_q_11034be20;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1051e021c;
  puStack_98 = &UNK_11086f478;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_8);
  uStack_78 = param_8;
  _objc_retain(param_6);
  uStack_90 = param_6;
  puStack_88 = puVar4;
  _objc_retain(param_4);
  uStack_80 = param_4;
  func_0x000108e9b8ec(uVar1,uVar7,puVar6,puVar5,&puStack_b0);
  _objc_release(PTR___dispatch_main_q_11034be20);
  puVar5 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  func_0x00010bffae00();
  _objc_release(uStack_80);
  _objc_release(uStack_90);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_8);
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



/* Entry: 1051e021c; end: 1051e0627;  */

void FUN_1051e021c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0);
  }
  else {
    lVar3 = lVar2;
    _dispatch_group_create();
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_1051e0628;
    uStack_88 = 0x1051e0638;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010c131ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar9;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010901e6c8();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar7;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(uVar4);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if ((int)puVar8 != 0) {
      _dispatch_group_enter(lVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c242420(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010c131ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar9;
      func_0x00010c290fa0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      FUN_1051e0640();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar9);
      _objc_release(uVar4);
      uVar9 = *(undefined8 *)(lVar2 + 0x10);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puStack_d8 = puVar1;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_1051e0720;
      puStack_c0 = &UNK_11086f418;
      puStack_b0 = &uStack_a8;
      _objc_retain(lVar3);
      lStack_b8 = lVar3;
      func_0x00010c2448c0(uVar9);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(uVar9);
      _objc_release(lStack_b8);
      _objc_release(uVar7);
    }
    uStack_108 = 0;
    uStack_f8 = 0x3032000000;
    pcStack_f0 = FUN_1051e0628;
    uStack_e8 = 0x1051e0638;
    uStack_e0 = 0;
    puStack_100 = &uStack_108;
    _dispatch_group_enter(lVar3);
    puStack_138 = puVar1;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_1051e0768;
    puStack_120 = &UNK_110853230;
    puStack_110 = &uStack_108;
    _objc_retain(lVar3);
    lStack_118 = lVar3;
    func_0x00010be230a0(lVar2);
    _objc_initWeak(auStack_140,lVar2);
    puStack_1a0 = puVar1;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_1051e07c4;
    puStack_188 = &UNK_11086f448;
    _objc_copyWeak(auStack_148,auStack_140);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar9);
    uStack_160 = uVar9;
    _objc_retain(param_2);
    puStack_158 = &uStack_a8;
    auVar10 = *(undefined1 (*) [16])(param_1 + 0x20);
    uStack_180 = param_2;
    puStack_150 = &uStack_108;
    _objc_retain(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x20));
    auVar10 = NEON_ext(auVar10,auVar10,8,1);
    uStack_170 = auVar10._8_8_;
    uStack_178 = auVar10._0_8_;
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar9);
    uStack_168 = uVar9;
    func_0x000100bc0718(lVar3,PTR___dispatch_main_q_11034be20,&puStack_1a0);
    _objc_release(uStack_168);
    _objc_release(uStack_170);
    _objc_release(uStack_180);
    _objc_release(uStack_160);
    _objc_destroyWeak(auStack_148);
    _objc_destroyWeak(auStack_140);
    _objc_release(lStack_118);
    __Block_object_dispose(&uStack_108,8);
    _objc_release(uStack_e0);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1051e0628; end: 1051e063f;  */

void FUN_1051e0628(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1051e0640; end: 1051e071f;  */

void FUN_1051e0640(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1051e0628;
  uStack_30 = 0x1051e0638;
  uStack_28 = 0;
  func_0x00010c0c12a0(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1051e0720; end: 1051e0767;  */

void FUN_1051e0720(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1051e0768; end: 1051e07c3;  */

void FUN_1051e0768(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051e07c4; end: 1051e09db;  */

void FUN_1051e07c4(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  lVar2 = param_1 + 0x58;
  _objc_loadWeakRetained();
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar2 == 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,0);
  }
  else {
    _objc_retainBlock();
    uVar8 = *(undefined8 *)(lVar2 + 0x78);
    *(long *)(lVar2 + 0x78) = lVar3;
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    uVar8 = uVar4;
    func_0x00010c071ae0();
    ppuVar1 = &PTR_PTR_11329afc8;
    if ((int)uVar8 == 0) {
      ppuVar1 = &PTR_PTR_11329afc0;
    }
    puVar9 = *ppuVar1;
    _objc_retain(puVar9);
    puVar7 = PTR_PTR_1126b6020;
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08bda0();
    uVar6 = *(undefined8 *)(lVar2 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar8);
    func_0x00010c18b5e0(puVar7);
    if (puVar7 != (undefined *)0x0) {
      func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x38));
    }
    _objc_release(puVar7);
    _objc_release(puVar9);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1051e09dc; end: 1051e0aaf; -[SCContextStoryInviteActionPerformer _getStoryParticipantsForParams:completion:] */

void FUN_1051e09dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  func_0x00010c242420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c131ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_1051e0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  func_0x00010c259e60(*(undefined8 *)(param_1 + 0xa0),param_2,uVar4,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1051e0ab0; end: 1051e0c2b; -[SCContextStoryInviteActionPerformer storyInviteReceiverSwipeUpViewControllerJoinButtonTapped:storyType:publicationId:] */

void FUN_1051e0ab0(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcaed8;
  if (param_4 != PTR_PTR_11329afc8) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dcaef8;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(ppuVar1);
  _objc_retain(param_5);
  uVar5 = 0x13;
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  func_0x0001051e0b94(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0480(uVar4,param_2,ppuVar1,puVar2,param_5,uVar3,param_7,param_8,uVar5);
  _objc_release(ppuVar1);
  _objc_release(param_5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1051e0c2c; end: 1051e0eb7; -[SCContextStoryInviteActionPerformer storyInviteReceiverSwipeUpViewControllerAddToStoryButtonTapped:publicationId:storyName:launchSource:] */

void FUN_1051e0c2c(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000108436010(param_6);
  func_0x0001091ef76c();
  puVar2 = PTR_PTR_1126ae6c0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_4 != (undefined **)0x0) {
    ppuVar1 = param_4;
  }
  _objc_retain(ppuVar1);
  func_0x00010c294300();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6c8;
  _objc_alloc(PTR_PTR_1126ae6c8);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar4 = &PTR____CFConstantStringClassReference_110dcaf38;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcaf38,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c03e6c0(puVar3);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  puVar5 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  puVar6 = PTR_PTR_1126b47c8;
  _objc_alloc(PTR_PTR_1126b47c8);
  func_0x00010c01f260();
  puVar7 = PTR_PTR_1126b1bb0;
  func_0x00010bf81d20(PTR_PTR_1126b1bb0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010bf237e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x80));
  uVar11 = *(undefined8 *)(param_1 + 0x68);
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x70);
  func_0x0001051e0b94(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0480(uVar11);
  _objc_release(ppuVar1);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1051e0eb8; end: 1051e0f4f; -[SCContextStoryInviteActionPerformer storyInviteReceiverSwipeUpViewControllerStoryThumbnailTapped:storySummaryInfo:] */

void FUN_1051e0eb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b6028;
  _objc_retain(param_3);
  func_0x00010c25bc40(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6030;
  _objc_alloc(PTR_PTR_1126b6030);
  func_0x00010c0509c0();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x60),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051e0f50; end: 1051e0f93; -[SCContextStoryInviteActionPerformer storyInviteReceiverSwipeUpViewControllerDidDismiss:] */

void FUN_1051e0f50(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051e0f94; end: 1051e0f97; -[SCContextStoryInviteActionPerformer contextStoryPlaybackScopeDidStart:] */

void FUN_1051e0f94(void)

{
  return;
}



/* Entry: 1051e0f98; end: 1051e0fb7; -[SCContextStoryInviteActionPerformer contextStoryPlaybackScopeDidComplete:] */

void FUN_1051e0f98(long param_1)

{
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 0x60));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1051e0fb8; end: 1051e0fff; -[SCContextStoryInviteActionPerformer dismissCameraScope:] */

void FUN_1051e0fb8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x80));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1051e1000; end: 1051e1157; -[SCContextStoryInviteActionPerformer .cxx_destruct] */

void FUN_1051e1000(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
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



/* Entry: 1051e1158; end: 1051e115b;  */

void FUN_1051e1158(void)

{
  return;
}



/* Entry: 1051e115c; end: 1051e1297; -[SCContextStoryPostActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8 FUN_1051e115c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong in_x5;
  long in_x7;
  
  _objc_retain(in_x5);
  _objc_retain(in_x7);
  uVar1 = in_x5;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08bda0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = in_x5;
  func_0x00010c0ea4c0(in_x5);
  _objc_retainAutoreleasedReturnValue();
  if ((uVar3 < 0x23) && ((0x5000001f8U >> (uVar3 & 0x3f) & 1) != 0)) {
    puVar4 = PTR_PTR_1126b5b28;
    func_0x00010c1052e0(PTR_PTR_1126b5b28);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR_PTR_1126b2d30;
    func_0x00010c11e700(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = in_x5;
  func_0x00010c0ea8e0(in_x5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar1);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar1);
  (**(code **)(in_x7 + 0x10))(in_x7,0);
  _objc_release(in_x7);
  _objc_release(in_x5);
  return 0;
}



/* Entry: 1051e1298; end: 1051e135f; -[SCContextStoryReplyActionPerformer initWithUserSession:snapchattersDataFetcher:groupsDataFetcher:userInfoServices:contextExperimentService:chatCameraScopeExposer:chatCameraScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1051e1298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126e6d70;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithUserSession_snapchatters_1125f53d0,param_3,param_4,
                      param_5,param_6,param_7,param_8,param_9);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11271f144;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 1051e1360; end: 1051e177f; -[SCContextStoryReplyActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051e1360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b1010;
  _objc_alloc();
  func_0x00010c02ec80();
  lVar2 = param_6;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c131ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c25ace0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  lVar8 = lVar2;
  func_0x00010c08fa60();
  if (((lVar8 == 0) || (uVar4 = uVar5, func_0x00010bfdb2c0(), (int)uVar4 == 0)) ||
     (uVar4 = uVar5, func_0x00010bfdcc80(), (int)uVar4 == 0)) {
    param_1 = 0;
  }
  else {
    lVar8 = lVar3;
    func_0x00010bfe5ec0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1051e1780;
    puStack_88 = &UNK_1108450c8;
    puStack_80 = puVar1;
    func_0x00010c0c12a0();
    _objc_release(lVar8);
    func_0x00010c1eb300(puVar1);
    lVar8 = lVar3;
    func_0x00010bf85d80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb080(puVar1);
    _objc_release(lVar8);
    func_0x00010c1eb220(puVar1);
    func_0x00010c1b2900(puVar1);
    lVar8 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar8;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08bda0();
    func_0x000108435ff0();
    func_0x00010c1d86a0(puVar1);
    _objc_release(lVar6);
    _objc_release(lVar8);
    func_0x00010c1b13e0(puVar1);
    func_0x00010c1eb2c0(puVar1);
    puStack_c8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    uStack_b8 = 0x1051e178c;
    uStack_b0 = 0x1051e179c;
    uStack_a8 = 0;
    lVar8 = lVar3;
    func_0x00010bfe5ec0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c12a0();
    _objc_release(lVar8);
    lVar8 = puStack_c8[5];
    if (lVar8 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010901cdb0(lVar8,puVar7);
      func_0x00010c1af8a0(puVar1);
      _objc_release(puVar7);
    }
    puVar7 = puVar1;
    func_0x00010c271be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    __Block_object_dispose(&uStack_d0,8);
    _objc_release(uStack_a8);
  }
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1051e1780; end: 1051e17a3;  */

void FUN_1051e1780(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1eb2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setReplyUserId__1126586e0,param_2);
  return;
}



/* Entry: 1051e17a4; end: 1051e197b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051e17a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x23;
  long lVar5;
  
  _objc_retain(param_2);
  lVar5 = (long)_DAT_11271f144;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ee920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  if (lVar2 == 0) {
    unaff_x23 = *(long *)(*(long *)(param_1 + 0x20) + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = unaff_x23;
    func_0x00010bfebfc0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(lVar3);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar3;
  _objc_release(uVar4);
  if (lVar2 == 0) {
    _objc_release(lVar3);
    _objc_release(unaff_x23);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051e197c; end: 1051e198f; -[SCContextStoryReplyActionPerformer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051e197c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271f144,0);
  return;
}



/* Entry: 1051e1990; end: 1051e1a03; -[SCContextTappableLinkActionPerformer initWithDeepLinkHandlerCreator:] */

undefined1 * FUN_1051e1990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6d78;
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



/* Entry: 1051e1a04; end: 1051e1ea7; -[SCContextTappableLinkActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051e1a04(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar2 = param_3;
  func_0x00010c097480();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    puVar24 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c131ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar6;
    func_0x00010c0748c0();
    if ((uVar5 & 1) == 0) {
      uVar5 = uVar6;
      func_0x00010c070a00();
      bVar1 = (uVar5 & 1) == 0;
      uStack_e8 = 0x16;
      if (bVar1) {
        uStack_e8 = 0x17;
      }
      uStack_f0 = 0;
      if (bVar1) {
        uStack_f0 = 5;
      }
      uStack_f8 = 1;
      if (bVar1) {
        uStack_f8 = 2;
      }
    }
    else {
      uStack_f8 = 1;
      uStack_f0 = 0;
      uStack_e8 = 0x16;
    }
    uVar5 = param_6;
    func_0x00010c08f3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar8 = PTR_PTR_1126b5c28;
    _objc_alloc();
    uVar5 = param_6;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c08bda0();
    uVar22 = param_7;
    func_0x00010beef1e0();
    uVar13 = param_6;
    func_0x00010c0b3760(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c247d40();
    uVar15 = param_6;
    func_0x00010c29d360();
    uVar16 = uVar7;
    func_0x00010c25b720();
    uVar17 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar17;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar18;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = param_6;
    func_0x00010c0954a0();
    func_0x00010c0450e0(puVar8,param_2,uVar9,uVar12,uVar22,uStack_f0,uVar14,uStack_e8,uStack_f8,
                        uVar15,uVar16,uVar19,(int)uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar13);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar5);
    puVar21 = PTR_PTR_1126b5c30;
    _objc_alloc(PTR_PTR_1126b5c30);
    func_0x00010c04a7e0();
    uVar22 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf55c20(uVar22,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar22;
    _objc_release(uVar23);
    uVar22 = param_8;
    _objc_retainBlock();
    uVar23 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar22;
    _objc_release(uVar23);
    uVar22 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = param_3;
    func_0x00010bdc2be0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010c1070c0();
    uVar10 = param_6;
    func_0x00010c242420(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_6;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1051e1ea8;
    puStack_78 = &UNK_110842508;
    _objc_retain(param_8);
    uStack_70 = param_8;
    func_0x00010c27cf40(uVar22,param_2,puVar4,uVar9 & 0xffffffff,param_4,puVar21,uVar7,uVar10,uVar11
                        ,param_1,&puStack_90);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar5);
    puVar24 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    func_0x00010bffae00();
    _objc_release(uStack_70);
    _objc_release(puVar21);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar24);
  return;
}



/* Entry: 1051e1ea8; end: 1051e1ec7;  */

void FUN_1051e1ea8(long param_1,ulong param_2)

{
  long lVar1;
  
  if (((param_2 & 1) == 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001051e1ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1051e1ec8; end: 1051e1edb; -[SCContextTappableLinkActionPerformer deepLinkHandler:wantsToDismissContextCardsWithCompletion:] */

void FUN_1051e1ec8(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001051e1ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(in_x3 + 0x10))(in_x3);
    return;
  }
  return;
}



/* Entry: 1051e1edc; end: 1051e1edf; -[SCContextTappableLinkActionPerformer deepLinkHandlerWillPresentModalContent:] */

void FUN_1051e1edc(void)

{
  return;
}



/* Entry: 1051e1ee0; end: 1051e1f37; -[SCContextTappableLinkActionPerformer deepLinkHandlerDidDismissModalContent:error:] */

void FUN_1051e1ee0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1051e1f38; end: 1051e1f3b; -[SCContextTappableLinkActionPerformer deepLinkHandlerWillTryToLeaveApp:] */

void FUN_1051e1f38(void)

{
  return;
}



/* Entry: 1051e1f3c; end: 1051e1f8b; -[SCContextTappableLinkActionPerformer deepLinkHandlerDidLeaveApp:successfully:] */

void FUN_1051e1f3c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,0);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1051e1f8c; end: 1051e1fc7; -[SCContextTappableLinkActionPerformer .cxx_destruct] */

void FUN_1051e1f8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051e1fc8; end: 1051e206b; -[SCContextTemplateActionPerformer initWithUseTemplateFlowScopeExposer:quickCutScopeExposer:] */

undefined1 *
FUN_1051e1fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6d80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051e206c; end: 1051e2347; -[SCContextTemplateActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8
FUN_1051e206c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  func_0x00010c26af20();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    (**(code **)(param_8 + 0x10))(param_8,0);
  }
  else {
    puVar1 = param_3;
    func_0x00010bfdad20();
    puVar6 = PTR_PTR_1126b6050;
    if ((int)puVar1 == 0) {
      puVar1 = param_3;
      func_0x00010c26afc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26b000(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b6058;
      _objc_alloc(PTR_PTR_1126b6058);
      func_0x00010c057180();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
    }
    else {
      puVar6 = param_3;
      func_0x00010c11e4c0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126b6040;
      _objc_alloc(PTR_PTR_1126b6040);
      puVar2 = puVar6;
      func_0x00010c094540(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0d3a20(puVar6);
      func_0x00010c0df880(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0249c0(puVar1);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar3 = puVar6;
      func_0x00010c10aaa0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010bf529e0();
      puVar4 = PTR_PTR_1126b6048;
      _objc_alloc(PTR_PTR_1126b6048);
      uVar8 = param_6;
      func_0x00010c0b3760(param_6);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x00010c15ffa0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        func_0x00010c059660(puVar4);
      }
      else {
        func_0x00010c0387a0(puVar4);
      }
      _objc_release(uVar5);
      _objc_release(uVar8);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10));
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar1);
    _objc_release(puVar6);
    lVar7 = param_8;
    _objc_retainBlock();
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar7;
    _objc_release(uVar8);
  }
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return 0;
}



/* Entry: 1051e2348; end: 1051e234b; -[SCContextTemplateActionPerformer useTemplateFlowDidComplete:] */

void FUN_1051e2348(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be039d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissUseTemplateFlowScope__11255e810);
  return;
}



/* Entry: 1051e234c; end: 1051e234f; -[SCContextTemplateActionPerformer useTemplateFlowDidDismiss:] */

void FUN_1051e234c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be039d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissUseTemplateFlowScope__11255e810);
  return;
}



/* Entry: 1051e2350; end: 1051e23c7; -[SCContextTemplateActionPerformer removeQuickCutScopeWithScope:] */

void FUN_1051e2350(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c072560(uVar1,param_2,param_3);
    if ((int)uVar1 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c12e1e0(uVar1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1051e23a4;
    }
  }
  uVar1 = 0;
LAB_1051e23a4:
  func_0x00010be0ba20(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1051e23c8; end: 1051e241f; -[SCContextTemplateActionPerformer _dismissUseTemplateFlowScope:] */

void FUN_1051e23c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c072560(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010c12e1e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010be0ba20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051e2420; end: 1051e2463; -[SCContextTemplateActionPerformer _executeCompletionIfNecessary] */

void FUN_1051e2420(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051e2464; end: 1051e249f; -[SCContextTemplateActionPerformer .cxx_destruct] */

void FUN_1051e2464(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051e24a0; end: 1051e25f3; -[SCContextTopLevelReactionActionPerformer initWithStoryReplySender:conversationDestinationParser:notificationManager:reactionImageRenderer:currentUserBitmojiAvatarId:reactionHandler:] */

undefined1 *
FUN_1051e24a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e6d88;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051e25f4; end: 1051e274b; -[SCContextTopLevelReactionActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051e25f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar1 = param_6;
  func_0x00010bf4eae0();
  if (uVar1 == 2) {
    func_0x00010c15cba0(param_1,param_2,param_3,param_4,param_6,param_8);
  }
  else {
    uVar1 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08bda0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 < 0x19) && ((1L << (uVar3 & 0x3f) & 0x1118000U) != 0)) {
      func_0x00010c15b860(param_1,param_2,param_3,param_6,param_8);
    }
    else {
      func_0x00010c15cd20(param_1,param_2,param_3,param_4,param_6,param_8);
    }
  }
  puVar4 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  func_0x00010bffae00();
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1051e274c; end: 1051e2947; -[SCContextTopLevelReactionActionPerformer sendStoryReactionWithAction:onViewController:params:completion:] */

void FUN_1051e274c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfbc3e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar5 = param_5;
  _objc_retain(param_5);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c2746a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf8e2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2746a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1bb40();
  func_0x00010bfa9ae0(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar3);
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,0);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1051e2948; end: 1051e296b;  */

void FUN_1051e2948(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf08d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__createNotificationWithAction_pa_112559bd0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2);
  return;
}



/* Entry: 1051e296c; end: 1051e2bb3; -[SCContextTopLevelReactionActionPerformer sendSpotlightReactionWithAction:onViewController:params:completion:] */

void FUN_1051e296c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6060;
  func_0x00010bfeb420(PTR_PTR_1126b6060);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126b6068;
  _objc_opt_class(PTR_PTR_1126b6068);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    uVar4 = uVar3;
    func_0x00010c131c00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf529e0();
    _objc_release(uVar4);
    if (uVar5 == 0) {
      lVar6 = param_1;
      func_0x00010be86100();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 != 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf50280(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c11ecc0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar7);
        func_0x00010c120960(uVar8);
        _objc_release(uVar3);
        _objc_release(uVar4);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar7);
        _objc_release(lVar6);
      }
    }
  }
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,0);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1051e2bb4; end: 1051e2bc7;  */

void FUN_1051e2bb4(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c064cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_initiateChatSendResultNotificati_1125f6d38,
             param_2 == 0,3);
  return;
}



/* Entry: 1051e2bc8; end: 1051e2f0b; -[SCContextTopLevelReactionActionPerformer sendChatReactionWithAction:params:completion:] */

void FUN_1051e2bc8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b2390;
  _objc_opt_class(PTR_PTR_1126b2390);
  uVar2 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1051e2f0c;
  uStack_88 = 0x1051e2f1c;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_1051e2f0c;
  uStack_b8 = 0x1051e2f1c;
  uStack_b0 = 0;
  uVar2 = uVar1;
  func_0x00010bfa29a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bed40();
  _objc_release(uVar2);
  lVar5 = puStack_a0[5];
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    lVar5 = puStack_d0[5];
    func_0x00010c08fa60();
    if (lVar5 != 0) {
      lVar5 = param_1;
      func_0x00010be86100();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        if (param_5 != 0) {
          (**(code **)(param_5 + 0x10))(param_5,0);
        }
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be86180(param_1);
        _objc_retain(uVar6);
        func_0x00010c120960(uVar7);
        _objc_release(uVar7);
        if (param_5 != 0) {
          (**(code **)(param_5 + 0x10))(param_5,0);
        }
        _objc_release(uVar6);
        _objc_release(uVar6);
      }
      _objc_release(lVar5);
      goto LAB_1051e2e74;
    }
  }
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
LAB_1051e2e74:
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051e2f0c; end: 1051e2f23;  */

void FUN_1051e2f0c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1051e2f24; end: 1051e2fc3;  */

void FUN_1051e2f24(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_5);
  lVar1 = param_4;
  if (param_2 != 0) {
    lVar1 = param_2;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(lVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar1;
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051e2fc4; end: 1051e2fd7;  */

void FUN_1051e2fc4(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c064cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_initiateChatSendResultNotificati_1125f6d38,
             param_2 == 0,3);
  return;
}



/* Entry: 1051e2fd8; end: 1051e3127; -[SCContextTopLevelReactionActionPerformer _reactionContentForAction:] */

void FUN_1051e2fd8(double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b6070;
  _objc_opt_new(PTR_PTR_1126b6070);
  puVar4 = param_4;
  func_0x00010c2746a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010bf8e2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar4 = param_4;
  func_0x00010c2746a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    func_0x00010bf1bb40();
    _objc_release(puVar4);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (param_1 <= 0.0) {
      puVar4 = (undefined *)0x0;
      goto LAB_1051e30f4;
    }
    puVar4 = param_4;
    func_0x00010c2746a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1bb40();
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1adf20(puVar1,param_3,puVar2);
  }
  else {
    puVar2 = puVar4;
    func_0x00010bf8e2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c194460(puVar1,param_3,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_retain(puVar1);
  puVar4 = puVar1;
LAB_1051e30f4:
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1051e3128; end: 1051e3167; -[SCContextTopLevelReactionActionPerformer _reactionSendSourceForAction:] */

ulong FUN_1051e3128(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  func_0x00010c2746a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c104260();
  _objc_release(param_3);
  return uVar1 >> 0x3f;
}



/* Entry: 1051e3168; end: 1051e34f3; -[SCContextTopLevelReactionActionPerformer _createNotificationWithAction:params:image:] */

void FUN_1051e3168(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  
  _objc_retain(param_4);
  puVar4 = PTR_PTR_1126b6078;
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar13 = param_3;
  func_0x00010c2746a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar13;
  func_0x00010bf8e2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c2746a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1bb40();
  func_0x00010c0df720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c120d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar13);
  uVar5 = param_4;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar6 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar3);
  uVar5 = uVar7;
  if ((uVar6 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar7);
  uVar6 = param_4;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c131ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = param_4;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c131ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x000108437e88();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  lVar12 = param_1;
  func_0x00010bdf1760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar12);
  _objc_retain(param_4);
  _objc_retain(uVar8);
  _objc_retain(uVar11);
  _objc_retain(uVar5);
  _objc_retain(puVar4);
  func_0x00010c064e40(uVar13);
  _objc_release(param_5);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(param_4);
  _objc_release(uVar8);
  _objc_release(uVar11);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(lVar12);
  _objc_release(param_4);
  _objc_release(uVar8);
  _objc_release(uVar11);
  _objc_release(uVar5);
  _objc_release(puVar4);
  return;
}



/* Entry: 1051e34f4; end: 1051e350b;  */

void FUN_1051e34f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__sendStoryReplyWithStoryReply_st_112585b38,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 1051e350c; end: 1051e37ab; -[SCContextTopLevelReactionActionPerformer _sendStoryReplyWithStoryReply:story:userId:groupConversationID:params:platformAnalytics:] */

void FUN_1051e350c(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined **)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_6 == 0) {
    if (param_5 == 0) goto LAB_1051e3738;
    puVar3 = PTR_PTR_1126b01c0;
    func_0x00010c294260();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c246920(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar1);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_8);
    _objc_retain(puVar2);
    func_0x00010c297260(uVar6);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(param_8);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
  }
  else {
    _objc_retain(puVar2);
    func_0x00010c15cd40(uVar1);
    puVar3 = puVar2;
  }
  _objc_release(puVar3);
LAB_1051e3738:
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c064c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_initiateChatSendResultNotificati_1125f6d30,
             param_2 == 0);
  return;
}



/* Entry: 1051e37ac; end: 1051e37bb;  */

void FUN_1051e37ac(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c064c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_initiateChatSendResultNotificati_1125f6d30,
             param_2 == 0);
  return;
}



/* Entry: 1051e37bc; end: 1051e3893;  */

void FUN_1051e37bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf50b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar2);
  func_0x00010c15cd40(uVar1);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(uVar2);
  return;
}



/* Entry: 1051e3894; end: 1051e38a3;  */

void FUN_1051e3894(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c064c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_initiateChatSendResultNotificati_1125f6d30,
             param_2 == 0);
  return;
}



/* Entry: 1051e38a4; end: 1051e3d1b; -[SCContextTopLevelReactionActionPerformer _createPlatformAnalyticsDataModelWithStory:params:action:groupConversationId:recipientUserId:] */

undefined *
FUN_1051e38a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
             long param_6,long param_7)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar2 = param_4;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c247d40();
  lStack_90 = lVar3;
  _objc_release(lVar2);
  func_0x00010bec50c0(param_1);
  puVar12 = PTR_PTR_1126b6080;
  _objc_alloc();
  uVar4 = param_3;
  func_0x00010c15f2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c04db40();
  puStack_88 = puVar12;
  _objc_release(uVar4);
  uVar5 = param_5;
  func_0x00010c2746a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c104260();
  _objc_release(uVar5);
  puStack_98 = PTR_PTR_1126b6088;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcaf58;
  if (0x7fffffffffffffff < uVar6) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dcaf78;
  }
  _objc_retain(ppuVar1);
  _objc_alloc();
  uVar5 = param_5;
  func_0x00010c2746a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010be860e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032c60();
  _objc_release(ppuVar1);
  _objc_release(param_1);
  _objc_release(uVar5);
  puVar12 = PTR_PTR_1126b6090;
  func_0x00010c254280(PTR_PTR_1126b6090);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b6098;
  _objc_alloc(PTR_PTR_1126b6098);
  func_0x00010c061ca0();
  lVar2 = param_6;
  func_0x00010c08fa60();
  lStack_80 = param_6;
  if (lVar2 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = param_6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = param_7;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = param_7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = PTR_PTR_1126b5be8;
  _objc_alloc(PTR_PTR_1126b5be8);
  uStack_a8 = 0xffffffffffffffff;
  uStack_a0 = 0;
  uStack_b0 = 0xffffffffffffffff;
  func_0x00010bff40a0();
  lVar2 = param_4;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = lVar2;
  func_0x00010bf4f060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar9 = PTR_PTR_1126b1a40;
  _objc_opt_new();
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c2aa660(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = puStack_88;
  func_0x00010c2ba520(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aca20(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ac2e0(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c2ab020(puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(lVar3);
  _objc_release(puVar8);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar7);
  _objc_release(puVar12);
  _objc_release(puStack_98);
  _objc_release(puVar10);
  _objc_release(param_7);
  _objc_release(lStack_80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_1051e3d1c;
  lStack_e0 = lVar3;
  puStack_d8 = puVar9;
  lStack_d0 = param_7;
  puStack_c8 = puVar11;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(lVar2);
  if (lVar2 == 0) {
    puVar12 = (undefined *)0xffffffffffffffff;
  }
  else {
    lVar3 = lVar2;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar12 = (undefined *)0xffffffffffffffff;
    if (lVar3 != 0) {
      puStack_f8 = &uStack_100;
      uStack_100 = 0;
      uStack_f0 = 0x2020000000;
      uStack_e8 = 0xffffffffffffffff;
      lVar3 = lVar2;
      func_0x00010bf0e700(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c1320();
      _objc_release(lVar3);
      puVar12 = (undefined *)puStack_f8[3];
      __Block_object_dispose(&uStack_100,8);
    }
  }
  _objc_release(lVar2);
  return puVar12;
}



/* Entry: 1051e3d1c; end: 1051e3e4f; -[SCContextTopLevelReactionActionPerformer _storyTypeSpecificFromStory:] */

undefined8 FUN_1051e3d1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar2 = 0xffffffffffffffff;
    if (lVar1 != 0) {
      puStack_48 = &uStack_50;
      uStack_50 = 0;
      uStack_40 = 0x2020000000;
      uStack_38 = 0xffffffffffffffff;
      lVar1 = param_3;
      func_0x00010bf0e700(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c1320();
      _objc_release(lVar1);
      uVar2 = puStack_48[3];
      __Block_object_dispose(&uStack_50,8);
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1051e3e50; end: 1051e3e93;  */

void FUN_1051e3e50(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 4) {
    uVar1 = *(undefined8 *)(&UNK_10dd90970 + param_2 * 8);
  }
  else {
    uVar1 = 0;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar1;
  return;
}



/* Entry: 1051e3e94; end: 1051e3f5f; -[SCContextTopLevelReactionActionPerformer _reactionAsString:] */

void FUN_1051e3e94(double param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_4);
  ppuVar1 = param_4;
  func_0x00010bf8e2c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  _objc_release(ppuVar1);
  if (ppuVar2 == (undefined **)0x0) {
    func_0x00010bf1bb40(param_4);
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (param_1 == 0.0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      func_0x00010bf1bb40(param_4);
      func_0x00010c0df720(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar1;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
    }
  }
  else {
    ppuVar2 = param_4;
    func_0x00010bf8e2c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1051e3f60; end: 1051e3fcb; -[SCContextTopLevelReactionActionPerformer .cxx_destruct] */

void FUN_1051e3f60(long param_1)

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



/* Entry: 1051e3fcc; end: 1051e4097; -[SCContextTopLevelReactionTrayActionPerformer initWithReactionActionPerformer:reactionTrayScopeExposer:reactionTrayScopeServices:] */

undefined1 *
FUN_1051e3fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e6d90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051e4098; end: 1051e42c7; -[SCContextTopLevelReactionTrayActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051e4098(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_8;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar4);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  _objc_release(uVar1);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_5;
  _objc_release(uVar1);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_6;
  _objc_release(uVar1);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_7;
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126b5bb8;
  _objc_alloc(PTR_PTR_1126b5bb8);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c038ee0(0x3fe3333333333333,puVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf22d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38));
  puVar3 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  func_0x00010bffae00();
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051e42c8; end: 1051e42f3;  */

void FUN_1051e42c8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfce80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051e42f4; end: 1051e435f; -[SCContextTopLevelReactionTrayActionPerformer _didCompleteReactionTrayScope] */

void FUN_1051e42f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010becacb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__tearDown_1125904d0);
  return;
}



/* Entry: 1051e4360; end: 1051e4423; -[SCContextTopLevelReactionTrayActionPerformer didSelectReaction:] */

void FUN_1051e4360(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b5b00;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf1bf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf8e2c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2746c0(puVar3,param_2,uVar1,uVar2,0xffffffffffffffff);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c0f80c0(*(undefined8 *)(param_1 + 8),param_2,puVar3,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x30),0);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1051e4424; end: 1051e446b; -[SCContextTopLevelReactionTrayActionPerformer _tearDown] */

void FUN_1051e4424(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051e446c; end: 1051e44e3; -[SCContextTopLevelReactionTrayActionPerformer .cxx_destruct] */

void FUN_1051e446c(long param_1)

{
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



/* Entry: 1051e44e4; end: 1051e4587; -[SCContextLensTopicsActionPerformer initWithTopicViewerScopeExposer:topicViewerLensScopeServices:] */

undefined1 *
FUN_1051e44e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6d98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051e4588; end: 1051e4877; -[SCContextLensTopicsActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8
FUN_1051e4588(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c096500();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))(param_8,0);
    }
  }
  else {
    lVar1 = param_3;
    func_0x00010bfe5b40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    puStack_68 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (lVar2 == 0) {
      puStack_68 = (undefined *)0x0;
    }
    else {
      lVar2 = param_3;
      func_0x00010bfe5b40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126b60a0;
    _objc_alloc(PTR_PTR_1126b60a0);
    lVar1 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf5b440(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bf5b580(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010bf5b440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078fa0();
    func_0x00010c06d960();
    func_0x00010c024600(puVar3);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bf4eb20();
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = param_6;
    func_0x00010c0b3760(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23300(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar8);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
    lVar1 = param_8;
    _objc_retainBlock();
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar1;
    _objc_release(uVar8);
    _objc_release(uVar9);
    _objc_release(puVar3);
    _objc_release(puStack_68);
  }
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return 0;
}



/* Entry: 1051e4878; end: 1051e48cb; -[SCContextLensTopicsActionPerformer didCompleteTopicViewerLensScope:] */

void FUN_1051e4878(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051e48cc; end: 1051e4907; -[SCContextLensTopicsActionPerformer .cxx_destruct] */

void FUN_1051e48cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051e4908; end: 1051e497b; -[SCContextRemixesTopicActionPerformer initWithTopicViewerScopeExposer:] */

undefined1 * FUN_1051e4908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6da0;
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



/* Entry: 1051e497c; end: 1051e4c7b; -[SCContextRemixesTopicActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8
FUN_1051e497c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             ulong param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c129b40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_6;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2d20;
  func_0x00010c0ffba0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar2 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar1 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if ((param_3 == 0) || (uVar1 == 0)) {
    if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))(param_8,0);
    }
  }
  else {
    func_0x00010bf4eb20();
    puVar3 = PTR_PTR_1126b60a8;
    _objc_alloc(PTR_PTR_1126b60a8);
    lVar5 = param_3;
    func_0x00010c247b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c047c80(puVar3);
    _objc_release(lVar5);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1051e4c7c;
    puStack_70 = &UNK_110845c10;
    _objc_retain(param_6);
    ppuVar6 = &puStack_88;
    uStack_68 = param_6;
    _objc_retainBlock(ppuVar6);
    puVar7 = PTR_PTR_1126b60b0;
    _objc_alloc(PTR_PTR_1126b60b0);
    uVar2 = param_6;
    func_0x00010c0b3760(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03dea0(puVar7);
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
    lVar5 = param_8;
    _objc_retainBlock();
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar5;
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(ppuVar6);
    _objc_release(uStack_68);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return 0;
}



/* Entry: 1051e4c7c; end: 1051e4d9b;  */

void FUN_1051e4c7c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0ea4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c129540(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0eb7c0(lVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c12e1e0(*(undefined8 *)(lVar5 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = *(long *)(lVar5 + 0x10);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,0);
    uVar2 = *(undefined8 *)(lVar5 + 0x10);
    *(undefined8 *)(lVar5 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051e4d9c; end: 1051e4def; -[SCContextRemixesTopicActionPerformer didCompleteTopicViewerRemixesScope:] */

void FUN_1051e4d9c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051e4df0; end: 1051e4e1f; -[SCContextRemixesTopicActionPerformer .cxx_destruct] */

void FUN_1051e4df0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051e4e20; end: 1051e4e93; -[SCContextThirdPartyTopicsActionPerformer initWithTopicViewerScopeExposer:] */

undefined1 * FUN_1051e4e20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6da8;
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



/* Entry: 1051e4e94; end: 1051e50bb; -[SCContextThirdPartyTopicsActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8
FUN_1051e4e94(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  func_0x00010bf05de0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))(param_8,0);
    }
  }
  else {
    puVar1 = PTR_PTR_1126b60b8;
    _objc_alloc(PTR_PTR_1126b60b8);
    lVar2 = param_3;
    func_0x00010bf05300(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0dfac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c0d4f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c0852e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010bfe5b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3400(puVar1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar7 = PTR_PTR_1126b60c0;
    _objc_alloc(PTR_PTR_1126b60c0);
    uVar9 = param_6;
    func_0x00010c0b3760(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051c20(puVar7);
    _objc_release(uVar8);
    _objc_release(uVar9);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
    lVar2 = param_8;
    _objc_retainBlock();
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar2;
    _objc_release(uVar9);
    _objc_release(puVar7);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  return 0;
}



/* Entry: 1051e50bc; end: 1051e510f; -[SCContextThirdPartyTopicsActionPerformer didCompleteTopicViewerThirdPartyAppScope:] */

void FUN_1051e50bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051e5110; end: 1051e513f; -[SCContextThirdPartyTopicsActionPerformer .cxx_destruct] */

void FUN_1051e5110(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051e5140; end: 1051e51e3; -[SCContextTopicActionPerformer initWithTopicViewerScopeExposer:topicViewerScopeServices:] */

undefined1 *
FUN_1051e5140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6db0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051e51e4; end: 1051e533f; -[SCContextTopicActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8
FUN_1051e51e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  func_0x00010c2751e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    (**(code **)(param_8 + 0x10))(param_8,0);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_3;
    func_0x00010c2751c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_6;
    func_0x00010c0b3760(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf231a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(lVar1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
    lVar1 = param_8;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar1;
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  return 0;
}



/* Entry: 1051e5340; end: 1051e5393; -[SCContextTopicActionPerformer didCompleteTopicViewerScope:] */

void FUN_1051e5340(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051e5394; end: 1051e53cf; -[SCContextTopicActionPerformer .cxx_destruct] */

void FUN_1051e5394(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051e53d0; end: 1051e5443; -[SCContextUserProfileActionPerformer initWithFriendProfileScopeExposer:] */

undefined1 * FUN_1051e53d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6db8;
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



/* Entry: 1051e5444; end: 1051e56b7; -[SCContextUserProfileActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051e5444(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_6);
  if ((param_6 != 0) && (uVar1 = param_6, FUN_1051cb29c(), (uVar1 & 1) == 0)) {
    uVar1 = param_6;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b47a0;
    _objc_opt_class(PTR_PTR_1126b47a0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    func_0x00010c27dd80();
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  puVar4 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  uVar6 = param_3;
  func_0x00010c2932a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    func_0x00010c015a00(puVar4);
  }
  _objc_release(uVar8);
  _objc_release(uVar6);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
  uVar6 = param_8;
  _objc_retainBlock();
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  _objc_release(uVar8);
  puVar7 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  func_0x00010bffae00();
  _objc_release(puVar4);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1051e56b8; end: 1051e56bb;  */

void FUN_1051e56b8(void)

{
  return;
}



/* Entry: 1051e56bc; end: 1051e570f; -[SCContextUserProfileActionPerformer friendProfileDidDismiss:] */

void FUN_1051e56bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c12e1e0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051e5710; end: 1051e573f; -[SCContextUserProfileActionPerformer .cxx_destruct] */

void FUN_1051e5710(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051e5740; end: 1051e5757;  */

void FUN_1051e5740(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcaf98;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dcaf98,
                      &PTR____CFConstantStringClassReference_110dcafb8,0);
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


