/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053da0e4; end: 1053da14b; +[SCPCNConfigRequest descriptor] */

void FUN_1053da0e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb938 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a32a40,
                        &PTR____CFConstantStringClassReference_110dd8658,
                        &PTR_s_snapchat_perception_asr_1130d4490,&PTR_s_audioConfig_1130d4688,6,0x18
                        ,0x1c);
    puRam00000001136bb938 = puVar1;
  }
  return;
}



/* Entry: 1053da14c; end: 1053da1d7; +[SCPCNTranscribeStreamRequest descriptor] */

undefined * FUN_1053da14c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb940 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a32a90,
                        &PTR____CFConstantStringClassReference_110dd8678,
                        &PTR_s_snapchat_perception_asr_1130d4490,&PTR_s_config_1130d4568,3,0x20,0x1c
                       );
    func_0x00010c229040();
    puRam00000001136bb940 = puVar1;
  }
  return puRam00000001136bb940;
}



/* Entry: 1053da1d8; end: 1053da23f; +[SCPCNTokenLattice descriptor] */

void FUN_1053da1d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb948 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a32ae0,
                        &PTR____CFConstantStringClassReference_110dd8698,
                        &PTR_s_snapchat_perception_asr_1130d4490,&PTR_s_token_1130d45c8,3,0x18,0x1c)
    ;
    puRam00000001136bb948 = puVar1;
  }
  return;
}



/* Entry: 1053da240; end: 1053da2a7; +[SCPCNTranscribePartialResponse descriptor] */

void FUN_1053da240(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb950 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a32b30,
                        &PTR____CFConstantStringClassReference_110dd86b8,
                        &PTR_s_snapchat_perception_asr_1130d4490,&PTR_s_transcription_1130d44a8,1,
                        0x10,0x1c);
    puRam00000001136bb950 = puVar1;
  }
  return;
}



/* Entry: 1053da2a8; end: 1053da30f; +[SCPCNTranscribeFinalResponse descriptor] */

void FUN_1053da2a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb958 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a32b80,
                        &PTR____CFConstantStringClassReference_110dd86d8,
                        &PTR_s_snapchat_perception_asr_1130d4490,&PTR_s_transcription_1130d44c8,2,
                        0x18,0x1c);
    puRam00000001136bb958 = puVar1;
  }
  return;
}



/* Entry: 1053da310; end: 1053da39b; +[SCPCNTranscribeStreamResponse descriptor] */

undefined * FUN_1053da310(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb960 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a32bd0,
                        &PTR____CFConstantStringClassReference_110dd86f8,
                        &PTR_s_snapchat_perception_asr_1130d4490,&PTR_s_transcription_1130d4628,3,
                        0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136bb960 = puVar1;
  }
  return puRam00000001136bb960;
}



/* Entry: 1053da39c; end: 1053da43b; -[SCGrapheneAppAppearanceMetric description] */

void FUN_1053da39c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd8718;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dd8718,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e80d8;
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



/* Entry: 1053da43c; end: 1053da4ff; -[SCPlusPetImageFetchingImpl initWithImageFetchingService:performerProvider:] */

undefined1 *
FUN_1053da43c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e80e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053da500; end: 1053da5d3; -[SCPlusPetImageFetchingImpl fetchImageForPetImageURL:completion:] */

void FUN_1053da500(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010be36fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1053da5d4;
  puStack_40 = &UNK_11084d628;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bfa7900(uVar2,param_2,lVar1,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(lVar1);
  return;
}



/* Entry: 1053da5d4; end: 1053da61f;  */

void FUN_1053da5d4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0b8600(param_2,param_2,&PTR___NSConcreteGlobalBlock_110883b78);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053da620; end: 1053da627;  */

void FUN_1053da620(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_image_1125d7478);
  return;
}



/* Entry: 1053da628; end: 1053da6ff; -[SCPlusPetImageFetchingImpl fetchImageForPetImageURL:] */

void FUN_1053da628(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae6b8;
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1053da700;
  puStack_50 = &UNK_1108683b8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = uVar3;
  _objc_retain(param_3);
  _objc_retain(uVar3);
  func_0x00010bf54280(puVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uStack_40);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053da700; end: 1053da82b;  */

void FUN_1053da700(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class(uVar1);
  func_0x00010be36fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_2);
  func_0x00010bfa7900();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0418;
  _objc_retain();
  func_0x00010bf54280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053da82c; end: 1053da873;  */

void FUN_1053da82c(long param_1,undefined8 param_2)

{
  func_0x00010c0b8600(param_2,param_2,&PTR___NSConcreteGlobalBlock_110883b98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053da874; end: 1053da883;  */

void FUN_1053da874(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_image_1125d7478);
  return;
}



/* Entry: 1053da884; end: 1053daa07; +[SCPlusPetImageFetchingImpl _imageFetchingRequestForPetImageURL:] */

void FUN_1053da884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010beec820(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33760(puVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  puVar4 = PTR_PTR_1126b85a0;
  puVar3 = puVar2;
  func_0x00010bf220e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23c900(puVar4,param_3,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_2);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3,param_3,param_2,0x29);
  _objc_release(param_2);
  puVar5 = PTR_PTR_1126b85a8;
  _objc_alloc(PTR_PTR_1126b85a8);
  puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c01cf00(param_1,*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar5,param_3,puVar4,puVar3);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1053daa08; end: 1053daa37; -[SCPlusPetImageFetchingImpl .cxx_destruct] */

void FUN_1053daa08(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053daa38; end: 1053daaab; -[SCPlusPetPreferencesFetchingImpl initWithComposerServices:] */

undefined1 * FUN_1053daa38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e80e8;
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



/* Entry: 1053daaac; end: 1053dabcb; -[SCPlusPetPreferencesFetchingImpl fetchCurrentPreferredPetWithCompletion:] */

void FUN_1053daaac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010be3dc20(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010bfc69a0(lVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1053dabcc; end: 1053daccb;  */

void FUN_1053dabcc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b85b0;
  func_0x00010bfbc0e0(PTR_PTR_1126b85b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfc45c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010c0e3040(puVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1053daccc; end: 1053dad2f;  */

void FUN_1053daccc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be3dc20(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053dad30; end: 1053dae67; -[SCPlusPetPreferencesFetchingImpl _invokeCompletionOnMain:withResult:] */

void FUN_1053dad30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126aeec0;
  puVar3 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126b85b8;
  func_0x00010c0fa8a0(PTR_PTR_1126b85b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c244160(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae970;
  func_0x00010c292920(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1053dae68;
  puStack_58 = &UNK_110858070;
  uStack_50 = param_4;
  uStack_48 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf0cac0(puVar1,param_2,puVar3,puVar4,0,&puStack_70);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053dae68; end: 1053dae7f;  */

void FUN_1053dae68(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001053dae7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1053dae80; end: 1053dae8b; -[SCPlusPetPreferencesFetchingImpl .cxx_destruct] */

void FUN_1053dae80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053dae8c; end: 1053db083; +[SCCreatorSubscriptionsDatabase schema] */

void FUN_1053dae8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR_PTR_1126b84f8;
  _objc_alloc(PTR_PTR_1126b84f8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      "\nCREATE TABLE IF NOT EXISTS CreatorSubscriptions (\n    id TEXT NOT NULL PRIMARY KEY,  -- The creator id tied to the subscription\n    productId TEXT NOT NULL, -- The product identifier of the subscription\n    isActive INTEGER NOT NULL DEFAULT 0, -- Whether the subscription is active\n    subscribedAtMillis  INTEGER NOT NULL DEFAULT 0, -- Timestamp in millis when the subscription was purchased\n    expirationTimeMillis INTEGER NOT NULL DEFAULT 0, -- Timestamp in millis when the subscription expires\n    originalTransactionId TEXT NOT NULL, -- The original transaction id for the subscription, used for resubscribe\n    status INTEGER NOT NULL DEFAULT 0, -- The subscription status of a given creator\n    displayName TEXT, -- The display name for the creator\n    iconUrl TEXT -- The icon url for the creator\n);\n"
                     );
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8500;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      "\nALTER TABLE CreatorSubscriptions ADD COLUMN status INTEGER");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016840(puVar2,param_2,0,1,puVar3);
  puVar4 = PTR_PTR_1126b8500;
  puStack_68 = puVar2;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      "\nALTER TABLE CreatorSubscriptions ADD COLUMN displayName TEXT;\nALTER TABLE CreatorSubscriptions ADD COLUMN iconUrl TEXT"
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016840(puVar4,param_2,1,2,puVar5);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060a40(puVar8,param_2,2,puVar1,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    __Unwind_Resume();
    puVar8 = *(undefined **)(puVar7 + 8);
    _objc_retain(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1053db084; end: 1053db0ab; -[SCCreatorSubscriptionsDatabase getConn] */

void FUN_1053db084(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053db0ac; end: 1053db133; -[SCCreatorSubscriptionsDatabase initWithSqliteConnection:] */

undefined1 * FUN_1053db0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e80f0;
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



/* Entry: 1053db134; end: 1053db187; -[SCCreatorSubscriptionsDatabase .cxx_destruct] */

void FUN_1053db134(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053db188; end: 1053db18f; -[SCCreatorSubscriptionsDatabase .cxx_construct] */

void FUN_1053db188(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1053db190; end: 1053db29b;  */

void FUN_1053db190(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      func_0x0001005fc990(param_1 + 0x10,*(undefined8 *)(param_1 + 8),&UNK_10dd9c2a4,0x22);
      func_0x0001005fcb64();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053db29c; end: 1053db457;  */

void FUN_1053db29c(long param_1)

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
  
  puVar1 = PTR_PTR_1126b85c0;
  _objc_alloc(PTR_PTR_1126b85c0);
  lVar2 = param_1;
  func_0x0001005fdab8(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x0001005fdab8(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010b5ef268(param_1,2);
  lVar5 = param_1;
  func_0x00010b5ef268(param_1,3);
  lVar6 = param_1;
  func_0x00010b5ef268(param_1,4);
  lVar7 = param_1;
  func_0x0001005fdab8(param_1,5);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010b5ef268(param_1,6);
  lVar9 = param_1;
  func_0x0001005fdab8(param_1,7);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001005fdab8(param_1,8);
  _objc_retainAutoreleasedReturnValue();
  FUN_1053db6b4(puVar1,lVar2,lVar3,lVar4 != 0,lVar5,lVar6,lVar7,lVar8,lVar9,param_1);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053db458; end: 1053db6b3;  */

void FUN_1053db458(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  long lVar2;
  int iStack_64;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x18;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10dd9c2c7,0x12d);
      iStack_64 = 1;
      func_0x0001005fcac0();
      func_0x0001005fcac0(lVar2,&iStack_64,param_3);
      iVar1 = iStack_64;
      func_0x0001005edcd4(lVar2,iStack_64,param_4);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_5);
      iStack_64 = iVar1 + 3;
      func_0x0001005edcd4(lVar2,iVar1 + 2,param_6);
      func_0x0001005fcac0(lVar2,&iStack_64,param_7);
      iVar1 = iStack_64;
      iStack_64 = iStack_64 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_8);
      func_0x0001005fcac0(lVar2,&iStack_64,param_9);
      func_0x0001005fcac0(lVar2,&iStack_64,param_10);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053db6b4; end: 1053db817;  */

undefined1 *
FUN_1053db6b4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_1126e80f8;
    lStack_70 = param_1;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      *(undefined1 *)((long)plVar1 + 8) = param_4;
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      *(undefined8 *)((long)plVar1 + 0x28) = param_6;
      uVar2 = param_7;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x38) = param_8;
      uVar2 = param_9;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x40);
      *(undefined8 *)((long)plVar1 + 0x40) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_10;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x48);
      *(undefined8 *)((long)plVar1 + 0x48) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 1053db818; end: 1053db83b; -[SCCreatorSubscriptions copyWithZone:] */

undefined8 FUN_1053db818(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1053db83c; end: 1053db8ef; -[SCCreatorSubscriptions hash] */

undefined8 * FUN_1053db83c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uStack_60 = (ulong)*(byte *)(param_1 + 8);
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x38);
  uStack_38 = *(undefined8 *)(param_1 + 0x40);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1053db9f8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1053dba04;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(char *)((long)puVar3 + 8) == param_3[8] &&
          (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x30);
          if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x40);
            if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
              if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                func_0x00010c071ae0();
                goto LAB_1053dba04;
              }
              goto LAB_1053db9f8;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1053dba04:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1053db8f0; end: 1053dba1f; -[SCCreatorSubscriptions isEqual:] */

long FUN_1053db8f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1053db9f8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1053dba04;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x40);
            if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x48);
              if (lVar3 != *(long *)(param_3 + 0x48)) {
                func_0x00010c071ae0();
                goto LAB_1053dba04;
              }
              goto LAB_1053db9f8;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1053dba04:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1053dba20; end: 1053dba97;  */

undefined8 FUN_1053dba20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 1053dba98; end: 1053dbaeb; -[SCCreatorSubscriptions .cxx_destruct] */

void FUN_1053dba98(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1053dbaec; end: 1053dbaf7; -[SCFeatureSettingsService isCreatorSubscriptionsLastUpdateTimestamp] */

void FUN_1053dbaec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dd8798);
  return;
}



/* Entry: 1053dbaf8; end: 1053dbb03; -[SCFeatureSettingsService creatorSubscriptionsLastUpdateTimestampServerParam] */

undefined ** FUN_1053dbaf8(void)

{
  return &PTR____CFConstantStringClassReference_110dd8798;
}



/* Entry: 1053dbb04; end: 1053dbb13; -[SCFeatureSettingsService setCreatorSubscriptionsLastUpdateTimestamp:] */

void FUN_1053dbb04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dd8798,param_3);
  return;
}



/* Entry: 1053dbb14; end: 1053dbb1b; -[SCFeatureSettingsService creator_subscriptions_last_update_timestamp_client_value:] */

void FUN_1053dbb14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 1053dbb1c; end: 1053dbb23; -[SCFeatureSettingsService creator_subscriptions_last_update_timestamp_server_value:] */

void FUN_1053dbb1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 1053dbb24; end: 1053dbb33; -[SCFeatureSettingsService creatorSubscriptionsLastUpdateTimestamp] */

void FUN_1053dbb24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dd8798,0);
  return;
}



/* Entry: 1053dbb34; end: 1053dbb97; -[SCPreferences creatorSubscriptionsNextRequestSyncTimestamp] */

void FUN_1053dbb34(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110dd87b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053dbb98; end: 1053dbba3; -[SCPreferences setCreatorSubscriptionsNextRequestSyncTimestamp:] */

void FUN_1053dbb98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110dd87b8);
  return;
}



/* Entry: 1053dbba4; end: 1053dbc07; -[SCPreferences creatorSubscriptionsViewerIsEligible] */

void FUN_1053dbba4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110dd87d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053dbc08; end: 1053dbc13; -[SCPreferences setCreatorSubscriptionsViewerIsEligible:] */

void FUN_1053dbc08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110dd87d8);
  return;
}



/* Entry: 1053dbc14; end: 1053dbd87;  */

/* WARNING: Removing unreachable block (ram,0x0001053dc984) */

char * FUN_1053dbc14(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long *plVar13;
  long lVar14;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_490;
  undefined *puStack_488;
  char *pcStack_480;
  char *pcStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 *puStack_448;
  undefined8 auStack_440 [3];
  undefined1 auStack_428 [24];
  undefined8 auStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  char acStack_3a0 [24];
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  char *pcStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  char *pcStack_340;
  char *pcStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_320 [24];
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  char *pcStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_218 [24];
  char *pcStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
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
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
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
    pcVar1 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar9 = acStack_100;
  pcStack_88 = FUN_1053dbd88;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar8 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar13 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_e0;
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar5 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar8 = pcVar9;
    param_4 = pcVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar8 = pcVar9;
      param_4 = pcVar3;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar9 = acStack_180;
  pcStack_108 = FUN_1053dbefc;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar5;
  pcVar2 = pcVar8;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar5);
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    unaff_x23 = (char *)auStack_160;
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_148,1);
    pcVar1 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    pcVar2 = pcVar9;
    param_4 = pcVar8;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      pcVar2 = pcVar9;
      param_4 = pcVar8;
    }
  }
  pcVar3 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  __Unwind_Resume();
  pcStack_188 = FUN_1053dc070;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar8 = pcVar2;
  pcVar12 = param_4;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  pcVar9 = (char *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = auStack_1f8;
    func_0x00010002b838(auStack_1f8,pcVar3);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar3 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_1e0,pcVar3);
    acStack_218[0] = '\0';
    acStack_218[1] = '\0';
    acStack_218[2] = '\0';
    acStack_218[3] = '\0';
    acStack_218[4] = '\0';
    acStack_218[5] = '\0';
    acStack_218[6] = '\0';
    acStack_218[7] = '\0';
    acStack_218[8] = '\0';
    acStack_218[9] = '\0';
    acStack_218[10] = '\0';
    acStack_218[0xb] = '\0';
    acStack_218[0xc] = '\0';
    acStack_218[0xd] = '\0';
    acStack_218[0xe] = '\0';
    acStack_218[0xf] = '\0';
    acStack_218[0x10] = '\0';
    acStack_218[0x11] = '\0';
    acStack_218[0x12] = '\0';
    acStack_218[0x13] = '\0';
    acStack_218[0x14] = '\0';
    acStack_218[0x15] = '\0';
    acStack_218[0x16] = '\0';
    acStack_218[0x17] = '\0';
    func_0x00010007e1e8(acStack_218,auStack_1f8,&lStack_1c8,2);
    pcVar5 = "";
    unaff_x23 = acStack_218;
    pcVar8 = acStack_218;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pcStack_200 = unaff_x23;
    func_0x00010007e5dc(&pcStack_200);
    lVar14 = 0;
    pcVar9 = (char *)auStack_1f8;
    pcVar12 = param_4;
    do {
      if ((&cStack_1c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar2);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcVar11 = acStack_2a0;
  pcStack_228 = FUN_1053dc2a0;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar5;
  pcVar10 = pcVar8;
  puStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  puStack_250 = (undefined8 *)pcVar9;
  pcStack_248 = pcVar3;
  pcStack_240 = pcVar2;
  pcStack_238 = pcVar1;
  pppuStack_230 = &pppuStack_190;
  _objc_retain(pcVar5);
  plVar13 = (long *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar13 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    unaff_x23 = (char *)auStack_280;
    func_0x00010002b838(auStack_280,pcVar1);
    acStack_2a0[0] = '\0';
    acStack_2a0[1] = '\0';
    acStack_2a0[2] = '\0';
    acStack_2a0[3] = '\0';
    acStack_2a0[4] = '\0';
    acStack_2a0[5] = '\0';
    acStack_2a0[6] = '\0';
    acStack_2a0[7] = '\0';
    acStack_2a0[8] = '\0';
    acStack_2a0[9] = '\0';
    acStack_2a0[10] = '\0';
    acStack_2a0[0xb] = '\0';
    acStack_2a0[0xc] = '\0';
    acStack_2a0[0xd] = '\0';
    acStack_2a0[0xe] = '\0';
    acStack_2a0[0xf] = '\0';
    acStack_2a0[0x10] = '\0';
    acStack_2a0[0x11] = '\0';
    acStack_2a0[0x12] = '\0';
    acStack_2a0[0x13] = '\0';
    acStack_2a0[0x14] = '\0';
    acStack_2a0[0x15] = '\0';
    acStack_2a0[0x16] = '\0';
    acStack_2a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2a0,auStack_280,&lStack_268,1);
    pcVar7 = "\x02";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_288 = acStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    pcVar10 = pcVar11;
    pcVar12 = pcVar8;
    pcVar9 = acStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      pcVar10 = pcVar11;
      pcVar12 = pcVar8;
      pcVar9 = acStack_2a0;
    }
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcVar4 = acStack_320;
  pcStack_2a8 = FUN_1053dc414;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar7;
  pcVar8 = pcVar10;
  puStack_2e0 = unaff_x24;
  pcStack_2d8 = unaff_x23;
  puStack_2d0 = (undefined8 *)pcVar9;
  plStack_2c8 = plVar13;
  pcStack_2c0 = pcVar1;
  pcStack_2b8 = pcVar5;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(pcVar7);
  plVar13 = (long *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar13 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    unaff_x23 = (char *)auStack_300;
    func_0x00010002b838(auStack_300,pcVar1);
    acStack_320[0] = '\0';
    acStack_320[1] = '\0';
    acStack_320[2] = '\0';
    acStack_320[3] = '\0';
    acStack_320[4] = '\0';
    acStack_320[5] = '\0';
    acStack_320[6] = '\0';
    acStack_320[7] = '\0';
    acStack_320[8] = '\0';
    acStack_320[9] = '\0';
    acStack_320[10] = '\0';
    acStack_320[0xb] = '\0';
    acStack_320[0xc] = '\0';
    acStack_320[0xd] = '\0';
    acStack_320[0xe] = '\0';
    acStack_320[0xf] = '\0';
    acStack_320[0x10] = '\0';
    acStack_320[0x11] = '\0';
    acStack_320[0x12] = '\0';
    acStack_320[0x13] = '\0';
    acStack_320[0x14] = '\0';
    acStack_320[0x15] = '\0';
    acStack_320[0x16] = '\0';
    acStack_320[0x17] = '\0';
    func_0x00010007e1e8(acStack_320,auStack_300,&lStack_2e8,1);
    pcVar3 = "\x02";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_308 = acStack_320;
    func_0x00010007e5dc(&puStack_308);
    pcVar8 = pcVar4;
    pcVar12 = pcVar10;
    pcVar9 = acStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      pcVar8 = pcVar4;
      pcVar12 = pcVar10;
      pcVar9 = acStack_320;
    }
  }
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
    ___stack_chk_fail();
    _objc_release(pcVar7);
    _objc_release(pcVar7);
    pcVar5 = pcVar1;
    __Unwind_Resume();
    pcVar10 = acStack_3a0;
    pcStack_328 = FUN_1053dc588;
    lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar3;
    pcVar4 = pcVar8;
    puStack_360 = unaff_x24;
    pcStack_358 = unaff_x23;
    puStack_350 = (undefined8 *)pcVar9;
    plStack_348 = plVar13;
    pcStack_340 = pcVar1;
    pcStack_338 = pcVar7;
    pppuStack_330 = &pppuStack_2b0;
    _objc_retain(pcVar3);
    if (pcVar5 != (char *)0x0) {
      plVar13 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_380,pcVar1);
      acStack_3a0[0] = '\0';
      acStack_3a0[1] = '\0';
      acStack_3a0[2] = '\0';
      acStack_3a0[3] = '\0';
      acStack_3a0[4] = '\0';
      acStack_3a0[5] = '\0';
      acStack_3a0[6] = '\0';
      acStack_3a0[7] = '\0';
      acStack_3a0[8] = '\0';
      acStack_3a0[9] = '\0';
      acStack_3a0[10] = '\0';
      acStack_3a0[0xb] = '\0';
      acStack_3a0[0xc] = '\0';
      acStack_3a0[0xd] = '\0';
      acStack_3a0[0xe] = '\0';
      acStack_3a0[0xf] = '\0';
      acStack_3a0[0x10] = '\0';
      acStack_3a0[0x11] = '\0';
      acStack_3a0[0x12] = '\0';
      acStack_3a0[0x13] = '\0';
      acStack_3a0[0x14] = '\0';
      acStack_3a0[0x15] = '\0';
      acStack_3a0[0x16] = '\0';
      acStack_3a0[0x17] = '\0';
      func_0x00010007e1e8(acStack_3a0,auStack_380,&lStack_368,1);
      pcVar2 = "\x01";
      (**(code **)(*plVar13 + 0x18))(plVar13);
      puStack_388 = acStack_3a0;
      func_0x00010007e5dc(&puStack_388);
      pcVar4 = pcVar10;
      pcVar12 = pcVar8;
      if (cStack_369 < '\0') {
        __ZdlPv(auStack_380[0]);
        pcVar4 = pcVar10;
        pcVar12 = pcVar8;
      }
    }
    pcVar1 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
      return pcVar1;
    }
    ___stack_chk_fail();
    _objc_release(pcVar3);
    _objc_release(pcVar3);
    __Unwind_Resume();
    pcStack_3a8 = FUN_1053dc6fc;
    lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuStack_3b0 = &pppuStack_330;
    _objc_retain(pcVar2);
    _objc_retain(pcVar4);
    _objc_retain(pcVar12);
    if (pcVar1 != (char *)0x0) {
      plVar13 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_440,pcVar1);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar1 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_428,pcVar1);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar12);
        pcVar1 = pcVar12;
        func_0x00010bdc3520(pcVar12);
      }
      _objc_release(pcVar12);
      func_0x00010002b838(auStack_410,pcVar1);
      uStack_460 = 0;
      uStack_458 = 0;
      uStack_450 = 0;
      func_0x00010007e1e8(&uStack_460,auStack_440,&lStack_3f8,3);
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110883e98,&uStack_460,param_5);
      puStack_448 = (undefined1 *)&uStack_460;
      func_0x00010007e5dc(&puStack_448);
      lVar14 = 0;
      do {
        if ((&cStack_3f9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_410 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        unaff_x24 = &uStack_460;
      } while (lVar14 != -0x48);
    }
    _objc_release(pcVar12);
    _objc_release(pcVar4);
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3f8) {
      ___stack_chk_fail();
      _objc_release(pcVar12);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != auStack_440);
      _objc_release(pcVar12);
      _objc_release(pcVar4);
      _objc_release(pcVar2);
      __Unwind_Resume();
      ppcVar6 = &pcStack_490;
      pcStack_468 = FUN_1053dc9bc;
      puStack_488 = PTR_PTR_1126e8108;
      pcStack_490 = pcVar1;
      pcStack_480 = pcVar4;
      pcStack_478 = pcVar2;
      pppuStack_470 = &pppuStack_3b0;
      _objc_msgSendSuper2(&pcStack_490,PTR_s_init_1125d9248);
      if (ppcVar6 != (char **)0x0) {
        pcVar1 = (char *)ppcVar6;
        (*(code *)PTR_DAT_113403208)();
        *(char **)((long)ppcVar6 + 8) = pcVar1;
      }
      return (char *)ppcVar6;
    }
    return pcVar1;
  }
  return pcVar1;
}



/* Entry: 1053dbd88; end: 1053dbefb;  */

/* WARNING: Removing unreachable block (ram,0x0001053dc984) */

char * FUN_1053dbd88(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long *plVar13;
  long lVar14;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_410;
  undefined *puStack_408;
  char *pcStack_400;
  char *pcStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  undefined8 auStack_3c0 [3];
  undefined1 auStack_3a8 [24];
  undefined8 auStack_390 [2];
  char cStack_379;
  long lStack_378;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_320 [24];
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  char *pcStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  char *pcStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_198 [24];
  char *pcStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
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
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
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
    pcVar1 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar9 = acStack_100;
  pcStack_88 = FUN_1053dbefc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar8 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar13 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_e0;
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar5 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar8 = pcVar9;
    param_4 = pcVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar8 = pcVar9;
      param_4 = pcVar3;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_1053dc070;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar5;
  pcVar2 = pcVar8;
  pcVar12 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar5);
  _objc_retain(pcVar8);
  pcVar9 = (char *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    unaff_x24 = auStack_178;
    func_0x00010002b838(auStack_178,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_198[0] = '\0';
    acStack_198[1] = '\0';
    acStack_198[2] = '\0';
    acStack_198[3] = '\0';
    acStack_198[4] = '\0';
    acStack_198[5] = '\0';
    acStack_198[6] = '\0';
    acStack_198[7] = '\0';
    acStack_198[8] = '\0';
    acStack_198[9] = '\0';
    acStack_198[10] = '\0';
    acStack_198[0xb] = '\0';
    acStack_198[0xc] = '\0';
    acStack_198[0xd] = '\0';
    acStack_198[0xe] = '\0';
    acStack_198[0xf] = '\0';
    acStack_198[0x10] = '\0';
    acStack_198[0x11] = '\0';
    acStack_198[0x12] = '\0';
    acStack_198[0x13] = '\0';
    acStack_198[0x14] = '\0';
    acStack_198[0x15] = '\0';
    acStack_198[0x16] = '\0';
    acStack_198[0x17] = '\0';
    func_0x00010007e1e8(acStack_198,auStack_178,&lStack_148,2);
    pcVar1 = "";
    unaff_x23 = acStack_198;
    pcVar2 = acStack_198;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pcStack_180 = unaff_x23;
    func_0x00010007e5dc(&pcStack_180);
    lVar14 = 0;
    pcVar9 = (char *)auStack_178;
    pcVar12 = param_4;
    do {
      if ((&cStack_149)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar3 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar5);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcVar11 = acStack_220;
  pcStack_1a8 = FUN_1053dc2a0;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar10 = pcVar2;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar9;
  pcStack_1c8 = pcVar3;
  pcStack_1c0 = pcVar8;
  pcStack_1b8 = pcVar5;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(pcVar1);
  plVar13 = (long *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar13 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_200;
    func_0x00010002b838(auStack_200,pcVar3);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    func_0x00010007e1e8(acStack_220,auStack_200,&lStack_1e8,1);
    pcVar7 = "\x02";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    pcVar10 = pcVar11;
    pcVar12 = pcVar2;
    pcVar9 = acStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      pcVar10 = pcVar11;
      pcVar12 = pcVar2;
      pcVar9 = acStack_220;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
    ___stack_chk_fail();
    _objc_release(pcVar1);
    _objc_release(pcVar1);
    pcVar5 = pcVar3;
    __Unwind_Resume();
    pcVar4 = acStack_2a0;
    pcStack_228 = FUN_1053dc414;
    lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar7;
    pcVar8 = pcVar10;
    puStack_260 = unaff_x24;
    pcStack_258 = unaff_x23;
    puStack_250 = (undefined8 *)pcVar9;
    plStack_248 = plVar13;
    pcStack_240 = pcVar3;
    pcStack_238 = pcVar1;
    pppuStack_230 = &pppuStack_1b0;
    _objc_retain(pcVar7);
    plVar13 = (long *)0x0;
    if (pcVar5 != (char *)0x0) {
      plVar13 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar7;
        _objc_retainAutorelease(pcVar7);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar7);
      unaff_x23 = (char *)auStack_280;
      func_0x00010002b838(auStack_280,pcVar1);
      acStack_2a0[0] = '\0';
      acStack_2a0[1] = '\0';
      acStack_2a0[2] = '\0';
      acStack_2a0[3] = '\0';
      acStack_2a0[4] = '\0';
      acStack_2a0[5] = '\0';
      acStack_2a0[6] = '\0';
      acStack_2a0[7] = '\0';
      acStack_2a0[8] = '\0';
      acStack_2a0[9] = '\0';
      acStack_2a0[10] = '\0';
      acStack_2a0[0xb] = '\0';
      acStack_2a0[0xc] = '\0';
      acStack_2a0[0xd] = '\0';
      acStack_2a0[0xe] = '\0';
      acStack_2a0[0xf] = '\0';
      acStack_2a0[0x10] = '\0';
      acStack_2a0[0x11] = '\0';
      acStack_2a0[0x12] = '\0';
      acStack_2a0[0x13] = '\0';
      acStack_2a0[0x14] = '\0';
      acStack_2a0[0x15] = '\0';
      acStack_2a0[0x16] = '\0';
      acStack_2a0[0x17] = '\0';
      func_0x00010007e1e8(acStack_2a0,auStack_280,&lStack_268,1);
      pcVar2 = "\x02";
      (**(code **)(*plVar13 + 0x18))(plVar13);
      puStack_288 = acStack_2a0;
      func_0x00010007e5dc(&puStack_288);
      pcVar8 = pcVar4;
      pcVar12 = pcVar10;
      pcVar9 = acStack_2a0;
      if (cStack_269 < '\0') {
        __ZdlPv(auStack_280[0]);
        pcVar8 = pcVar4;
        pcVar12 = pcVar10;
        pcVar9 = acStack_2a0;
      }
    }
    pcVar1 = pcVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
      return pcVar1;
    }
    ___stack_chk_fail();
    _objc_release(pcVar7);
    _objc_release(pcVar7);
    pcVar5 = pcVar1;
    __Unwind_Resume();
    pcVar10 = acStack_320;
    pcStack_2a8 = FUN_1053dc588;
    lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar2;
    pcVar4 = pcVar8;
    puStack_2e0 = unaff_x24;
    pcStack_2d8 = unaff_x23;
    puStack_2d0 = (undefined8 *)pcVar9;
    plStack_2c8 = plVar13;
    pcStack_2c0 = pcVar1;
    pcStack_2b8 = pcVar7;
    pppuStack_2b0 = &pppuStack_230;
    _objc_retain(pcVar2);
    if (pcVar5 != (char *)0x0) {
      plVar13 = *(long **)(pcVar5 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_300,pcVar1);
      acStack_320[0] = '\0';
      acStack_320[1] = '\0';
      acStack_320[2] = '\0';
      acStack_320[3] = '\0';
      acStack_320[4] = '\0';
      acStack_320[5] = '\0';
      acStack_320[6] = '\0';
      acStack_320[7] = '\0';
      acStack_320[8] = '\0';
      acStack_320[9] = '\0';
      acStack_320[10] = '\0';
      acStack_320[0xb] = '\0';
      acStack_320[0xc] = '\0';
      acStack_320[0xd] = '\0';
      acStack_320[0xe] = '\0';
      acStack_320[0xf] = '\0';
      acStack_320[0x10] = '\0';
      acStack_320[0x11] = '\0';
      acStack_320[0x12] = '\0';
      acStack_320[0x13] = '\0';
      acStack_320[0x14] = '\0';
      acStack_320[0x15] = '\0';
      acStack_320[0x16] = '\0';
      acStack_320[0x17] = '\0';
      func_0x00010007e1e8(acStack_320,auStack_300,&lStack_2e8,1);
      pcVar3 = "\x01";
      (**(code **)(*plVar13 + 0x18))(plVar13);
      puStack_308 = acStack_320;
      func_0x00010007e5dc(&puStack_308);
      pcVar4 = pcVar10;
      pcVar12 = pcVar8;
      if (cStack_2e9 < '\0') {
        __ZdlPv(auStack_300[0]);
        pcVar4 = pcVar10;
        pcVar12 = pcVar8;
      }
    }
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
      ___stack_chk_fail();
      _objc_release(pcVar2);
      _objc_release(pcVar2);
      __Unwind_Resume();
      pcStack_328 = FUN_1053dc6fc;
      lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_330 = &pppuStack_2b0;
      _objc_retain(pcVar3);
      _objc_retain(pcVar4);
      _objc_retain(pcVar12);
      if (pcVar1 != (char *)0x0) {
        plVar13 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar3);
        if (pcVar3 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar3;
          _objc_retainAutorelease(pcVar3);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar3);
        func_0x00010002b838(auStack_3c0,pcVar1);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar4);
          pcVar1 = pcVar4;
          func_0x00010bdc3520(pcVar4);
        }
        _objc_release(pcVar4);
        func_0x00010002b838(auStack_3a8,pcVar1);
        _objc_retain(pcVar12);
        if (pcVar12 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar12);
          pcVar1 = pcVar12;
          func_0x00010bdc3520(pcVar12);
        }
        _objc_release(pcVar12);
        func_0x00010002b838(auStack_390,pcVar1);
        uStack_3e0 = 0;
        uStack_3d8 = 0;
        uStack_3d0 = 0;
        func_0x00010007e1e8(&uStack_3e0,auStack_3c0,&lStack_378,3);
        (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110883e98,&uStack_3e0,param_5);
        puStack_3c8 = (undefined1 *)&uStack_3e0;
        func_0x00010007e5dc(&puStack_3c8);
        lVar14 = 0;
        do {
          if ((&cStack_379)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_390 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          unaff_x24 = &uStack_3e0;
        } while (lVar14 != -0x48);
      }
      _objc_release(pcVar12);
      _objc_release(pcVar4);
      pcVar1 = pcVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_378) {
        ___stack_chk_fail();
        _objc_release(pcVar12);
        do {
          unaff_x24 = unaff_x24 + -3;
        } while (unaff_x24 != auStack_3c0);
        _objc_release(pcVar12);
        _objc_release(pcVar4);
        _objc_release(pcVar3);
        __Unwind_Resume();
        ppcVar6 = &pcStack_410;
        pcStack_3e8 = FUN_1053dc9bc;
        puStack_408 = PTR_PTR_1126e8108;
        pcStack_410 = pcVar1;
        pcStack_400 = pcVar4;
        pcStack_3f8 = pcVar3;
        pppuStack_3f0 = &pppuStack_330;
        _objc_msgSendSuper2(&pcStack_410,PTR_s_init_1125d9248);
        if (ppcVar6 != (char **)0x0) {
          pcVar1 = (char *)ppcVar6;
          (*(code *)PTR_DAT_113403208)();
          *(char **)((long)ppcVar6 + 8) = pcVar1;
        }
        return (char *)ppcVar6;
      }
      return pcVar1;
    }
    return pcVar1;
  }
  return pcVar3;
}



/* Entry: 1053dbefc; end: 1053dc06f;  */

/* WARNING: Removing unreachable block (ram,0x0001053dc984) */

char * FUN_1053dbefc(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  long lVar13;
  char *pcVar14;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_390;
  undefined *puStack_388;
  char *pcStack_380;
  char *pcStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined8 auStack_340 [3];
  undefined1 auStack_328 [24];
  undefined8 auStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  char acStack_2a0 [24];
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
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
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
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
    pcVar1 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar7 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar7 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1053dc070;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar8 = pcVar7;
  pcVar11 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  pcVar14 = (char *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    pcVar4 = "";
    unaff_x23 = acStack_118;
    pcVar8 = acStack_118;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    pcStack_100 = unaff_x23;
    func_0x00010007e5dc(&pcStack_100);
    lVar13 = 0;
    pcVar14 = (char *)auStack_f8;
    pcVar11 = param_4;
    do {
      if ((&cStack_c9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar10 = acStack_1a0;
  pcStack_128 = FUN_1053dc2a0;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar4;
  pcVar9 = pcVar8;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar14;
  pcStack_148 = pcVar2;
  pcStack_140 = pcVar7;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(pcVar4);
  plVar12 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    unaff_x23 = (char *)auStack_180;
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1a0,auStack_180,&lStack_168,1);
    pcVar6 = "\x02";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar9 = pcVar10;
    pcVar11 = pcVar8;
    pcVar14 = acStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar9 = pcVar10;
      pcVar11 = pcVar8;
      pcVar14 = acStack_1a0;
    }
  }
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcVar3 = acStack_220;
  pcStack_1a8 = FUN_1053dc414;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar6;
  pcVar8 = pcVar9;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar14;
  plStack_1c8 = plVar12;
  pcStack_1c0 = pcVar1;
  pcStack_1b8 = pcVar4;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(pcVar6);
  plVar12 = (long *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x23 = (char *)auStack_200;
    func_0x00010002b838(auStack_200,pcVar1);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    func_0x00010007e1e8(acStack_220,auStack_200,&lStack_1e8,1);
    pcVar7 = "\x02";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    pcVar8 = pcVar3;
    pcVar11 = pcVar9;
    pcVar14 = acStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      pcVar8 = pcVar3;
      pcVar11 = pcVar9;
      pcVar14 = acStack_220;
    }
  }
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcVar9 = acStack_2a0;
  pcStack_228 = FUN_1053dc588;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar7;
  pcVar3 = pcVar8;
  puStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  puStack_250 = (undefined8 *)pcVar14;
  plStack_248 = plVar12;
  pcStack_240 = pcVar1;
  pcStack_238 = pcVar6;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(pcVar7);
  if (pcVar4 != (char *)0x0) {
    plVar12 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_280,pcVar1);
    acStack_2a0[0] = '\0';
    acStack_2a0[1] = '\0';
    acStack_2a0[2] = '\0';
    acStack_2a0[3] = '\0';
    acStack_2a0[4] = '\0';
    acStack_2a0[5] = '\0';
    acStack_2a0[6] = '\0';
    acStack_2a0[7] = '\0';
    acStack_2a0[8] = '\0';
    acStack_2a0[9] = '\0';
    acStack_2a0[10] = '\0';
    acStack_2a0[0xb] = '\0';
    acStack_2a0[0xc] = '\0';
    acStack_2a0[0xd] = '\0';
    acStack_2a0[0xe] = '\0';
    acStack_2a0[0xf] = '\0';
    acStack_2a0[0x10] = '\0';
    acStack_2a0[0x11] = '\0';
    acStack_2a0[0x12] = '\0';
    acStack_2a0[0x13] = '\0';
    acStack_2a0[0x14] = '\0';
    acStack_2a0[0x15] = '\0';
    acStack_2a0[0x16] = '\0';
    acStack_2a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2a0,auStack_280,&lStack_268,1);
    pcVar2 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_288 = acStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    pcVar3 = pcVar9;
    pcVar11 = pcVar8;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      pcVar3 = pcVar9;
      pcVar11 = pcVar8;
    }
  }
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  _objc_release(pcVar7);
  __Unwind_Resume();
  pcStack_2a8 = FUN_1053dc6fc;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(pcVar2);
  _objc_retain(pcVar3);
  _objc_retain(pcVar11);
  if (pcVar1 != (char *)0x0) {
    plVar12 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_340,pcVar1);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar1 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_328,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520(pcVar11);
    }
    _objc_release(pcVar11);
    func_0x00010002b838(auStack_310,pcVar1);
    uStack_360 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    func_0x00010007e1e8(&uStack_360,auStack_340,&lStack_2f8,3);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110883e98,&uStack_360,param_5);
    puStack_348 = (undefined1 *)&uStack_360;
    func_0x00010007e5dc(&puStack_348);
    lVar13 = 0;
    do {
      if ((&cStack_2f9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_310 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = &uStack_360;
    } while (lVar13 != -0x48);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar3);
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
    ___stack_chk_fail();
    _objc_release(pcVar11);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != auStack_340);
    _objc_release(pcVar11);
    _objc_release(pcVar3);
    _objc_release(pcVar2);
    __Unwind_Resume();
    ppcVar5 = &pcStack_390;
    pcStack_368 = FUN_1053dc9bc;
    puStack_388 = PTR_PTR_1126e8108;
    pcStack_390 = pcVar1;
    pcStack_380 = pcVar3;
    pcStack_378 = pcVar2;
    pppuStack_370 = &pppuStack_2b0;
    _objc_msgSendSuper2(&pcStack_390,PTR_s_init_1125d9248);
    if (ppcVar5 != (char **)0x0) {
      pcVar1 = (char *)ppcVar5;
      (*(code *)PTR_DAT_113403208)();
      *(char **)((long)ppcVar5 + 8) = pcVar1;
    }
    return (char *)ppcVar5;
  }
  return pcVar1;
}



/* Entry: 1053dc070; end: 1053dc29f;  */

/* WARNING: Removing unreachable block (ram,0x0001053dc984) */

char * FUN_1053dc070(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  long *plVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_310;
  undefined *puStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [3];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar11 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  pcVar4 = (char *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
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
    unaff_x24 = auStack_78;
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
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar12 = 0;
    pcVar4 = (char *)auStack_78;
    pcVar11 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar9 = acStack_120;
  pcStack_a8 = FUN_1053dc2a0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar8 = pcVar5;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = (undefined8 *)pcVar4;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  plVar13 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_100;
    func_0x00010002b838(auStack_100,pcVar4);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    pcVar7 = "\x02";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar8 = pcVar9;
    pcVar11 = pcVar5;
    pcVar4 = acStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar8 = pcVar9;
      pcVar11 = pcVar5;
      pcVar4 = acStack_120;
    }
  }
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar5;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar5;
  __Unwind_Resume();
  pcVar10 = acStack_1a0;
  pcStack_128 = FUN_1053dc414;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar7;
  pcVar9 = pcVar8;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar4;
  plStack_148 = plVar13;
  pcStack_140 = pcVar5;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pcVar7);
  plVar13 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    unaff_x23 = (char *)auStack_180;
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1a0,auStack_180,&lStack_168,1);
    pcVar2 = "\x02";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar9 = pcVar10;
    pcVar11 = pcVar8;
    pcVar4 = acStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar9 = pcVar10;
      pcVar11 = pcVar8;
      pcVar4 = acStack_1a0;
    }
  }
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
    ___stack_chk_fail();
    _objc_release(pcVar7);
    _objc_release(pcVar7);
    pcVar3 = pcVar1;
    __Unwind_Resume();
    pcVar10 = acStack_220;
    pcStack_1a8 = FUN_1053dc588;
    lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar5 = pcVar2;
    pcVar8 = pcVar9;
    puStack_1e0 = unaff_x24;
    pcStack_1d8 = unaff_x23;
    puStack_1d0 = (undefined8 *)pcVar4;
    plStack_1c8 = plVar13;
    pcStack_1c0 = pcVar1;
    pcStack_1b8 = pcVar7;
    pppuStack_1b0 = &ppuStack_130;
    _objc_retain(pcVar2);
    if (pcVar3 != (char *)0x0) {
      plVar13 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_200,pcVar1);
      acStack_220[0] = '\0';
      acStack_220[1] = '\0';
      acStack_220[2] = '\0';
      acStack_220[3] = '\0';
      acStack_220[4] = '\0';
      acStack_220[5] = '\0';
      acStack_220[6] = '\0';
      acStack_220[7] = '\0';
      acStack_220[8] = '\0';
      acStack_220[9] = '\0';
      acStack_220[10] = '\0';
      acStack_220[0xb] = '\0';
      acStack_220[0xc] = '\0';
      acStack_220[0xd] = '\0';
      acStack_220[0xe] = '\0';
      acStack_220[0xf] = '\0';
      acStack_220[0x10] = '\0';
      acStack_220[0x11] = '\0';
      acStack_220[0x12] = '\0';
      acStack_220[0x13] = '\0';
      acStack_220[0x14] = '\0';
      acStack_220[0x15] = '\0';
      acStack_220[0x16] = '\0';
      acStack_220[0x17] = '\0';
      func_0x00010007e1e8(acStack_220,auStack_200,&lStack_1e8,1);
      pcVar5 = "\x01";
      (**(code **)(*plVar13 + 0x18))(plVar13);
      puStack_208 = acStack_220;
      func_0x00010007e5dc(&puStack_208);
      pcVar8 = pcVar10;
      pcVar11 = pcVar9;
      if (cStack_1e9 < '\0') {
        __ZdlPv(auStack_200[0]);
        pcVar8 = pcVar10;
        pcVar11 = pcVar9;
      }
    }
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
      return pcVar1;
    }
    ___stack_chk_fail();
    _objc_release(pcVar2);
    _objc_release(pcVar2);
    __Unwind_Resume();
    pcStack_228 = FUN_1053dc6fc;
    lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuStack_230 = &pppuStack_1b0;
    _objc_retain(pcVar5);
    _objc_retain(pcVar8);
    _objc_retain(pcVar11);
    if (pcVar1 != (char *)0x0) {
      plVar13 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_2c0,pcVar1);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar1 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_2a8,pcVar1);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar11);
        pcVar1 = pcVar11;
        func_0x00010bdc3520(pcVar11);
      }
      _objc_release(pcVar11);
      func_0x00010002b838(auStack_290,pcVar1);
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      func_0x00010007e1e8(&uStack_2e0,auStack_2c0,&lStack_278,3);
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110883e98,&uStack_2e0,param_5);
      puStack_2c8 = (undefined1 *)&uStack_2e0;
      func_0x00010007e5dc(&puStack_2c8);
      lVar12 = 0;
      do {
        if ((&cStack_279)[lVar12] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar12));
        }
        lVar12 = lVar12 + -0x18;
        unaff_x24 = &uStack_2e0;
      } while (lVar12 != -0x48);
    }
    _objc_release(pcVar11);
    _objc_release(pcVar8);
    pcVar1 = pcVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
      ___stack_chk_fail();
      _objc_release(pcVar11);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != auStack_2c0);
      _objc_release(pcVar11);
      _objc_release(pcVar8);
      _objc_release(pcVar5);
      __Unwind_Resume();
      ppcVar6 = &pcStack_310;
      pcStack_2e8 = FUN_1053dc9bc;
      puStack_308 = PTR_PTR_1126e8108;
      pcStack_310 = pcVar1;
      pcStack_300 = pcVar8;
      pcStack_2f8 = pcVar5;
      pppuStack_2f0 = &pppuStack_230;
      _objc_msgSendSuper2(&pcStack_310,PTR_s_init_1125d9248);
      if (ppcVar6 != (char **)0x0) {
        pcVar1 = (char *)ppcVar6;
        (*(code *)PTR_DAT_113403208)();
        *(char **)((long)ppcVar6 + 8) = pcVar1;
      }
      return (char *)ppcVar6;
    }
    return pcVar1;
  }
  return pcVar1;
}



/* Entry: 1053dc2a0; end: 1053dc413;  */

/* WARNING: Removing unreachable block (ram,0x0001053dc984) */

char * FUN_1053dc2a0(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  undefined8 *unaff_x24;
  char *pcStack_270;
  undefined *puStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
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
    pcVar1 = "\x02";
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar7 = acStack_100;
  pcStack_88 = FUN_1053dc414;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar5 = "\x02";
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar6 = pcVar7;
    param_4 = pcVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar6 = pcVar7;
      param_4 = pcVar3;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar7 = acStack_180;
  pcStack_108 = FUN_1053dc588;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar5;
  pcVar2 = pcVar6;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar5);
  if (pcVar3 != (char *)0x0) {
    plVar8 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_148,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    pcVar2 = pcVar7;
    param_4 = pcVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      pcVar2 = pcVar7;
      param_4 = pcVar6;
    }
  }
  pcVar3 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  __Unwind_Resume();
  pcStack_188 = FUN_1053dc6fc;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  _objc_retain(param_4);
  if (pcVar3 != (char *)0x0) {
    plVar8 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_220,pcVar3);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar3 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_208,pcVar3);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar3 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_1f0,pcVar3);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110883e98,&uStack_240,param_5);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar9 = 0;
    do {
      if ((&cStack_1d9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
      unaff_x24 = &uStack_240;
    } while (lVar9 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(pcVar2);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_220);
    _objc_release(param_4);
    _objc_release(pcVar2);
    _objc_release(pcVar1);
    __Unwind_Resume();
    ppcVar4 = &pcStack_270;
    pcStack_248 = FUN_1053dc9bc;
    puStack_268 = PTR_PTR_1126e8108;
    pcStack_270 = pcVar3;
    pcStack_260 = pcVar2;
    pcStack_258 = pcVar1;
    pppuStack_250 = &pppuStack_190;
    _objc_msgSendSuper2(&pcStack_270,PTR_s_init_1125d9248);
    if (ppcVar4 != (char **)0x0) {
      pcVar1 = (char *)ppcVar4;
      (*(code *)PTR_DAT_113403208)();
      *(char **)((long)ppcVar4 + 8) = pcVar1;
    }
    return (char *)ppcVar4;
  }
  return pcVar3;
}



/* Entry: 1053dc414; end: 1053dc587;  */

/* WARNING: Removing unreachable block (ram,0x0001053dc984) */

char * FUN_1053dc414(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  undefined8 *unaff_x24;
  char *pcStack_1f0;
  undefined *puStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
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
    pcVar1 = "\x02";
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar7 = acStack_100;
  pcStack_88 = FUN_1053dc588;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar5 = "\x01";
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar6 = pcVar7;
    param_4 = pcVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar6 = pcVar7;
      param_4 = pcVar3;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_1053dc6fc;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar5);
  _objc_retain(pcVar6);
  _objc_retain(param_4);
  if (pcVar3 != (char *)0x0) {
    plVar8 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_1a0,pcVar1);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_188,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_170,pcVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_158,3);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110883e98,&uStack_1c0,param_5);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    lVar9 = 0;
    do {
      if ((&cStack_159)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
      unaff_x24 = &uStack_1c0;
    } while (lVar9 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(pcVar6);
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_1a0);
    _objc_release(param_4);
    _objc_release(pcVar6);
    _objc_release(pcVar5);
    __Unwind_Resume();
    ppcVar4 = &pcStack_1f0;
    pcStack_1c8 = FUN_1053dc9bc;
    puStack_1e8 = PTR_PTR_1126e8108;
    pcStack_1f0 = pcVar1;
    pcStack_1e0 = pcVar6;
    pcStack_1d8 = pcVar5;
    pppuStack_1d0 = &ppuStack_110;
    _objc_msgSendSuper2(&pcStack_1f0,PTR_s_init_1125d9248);
    if (ppcVar4 != (char **)0x0) {
      pcVar1 = (char *)ppcVar4;
      (*(code *)PTR_DAT_113403208)();
      *(char **)((long)ppcVar4 + 8) = pcVar1;
    }
    return (char *)ppcVar4;
  }
  return pcVar1;
}



/* Entry: 1053dc588; end: 1053dc6fb;  */

/* WARNING: Removing unreachable block (ram,0x0001053dc984) */

char * FUN_1053dc588(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 *unaff_x24;
  char *pcStack_170;
  undefined *puStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
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
    pcVar1 = "\x01";
    (**(code **)(*plVar5 + 0x18))(plVar5);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar4 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar4 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_2);
    __Unwind_Resume();
    pcStack_88 = FUN_1053dc6fc;
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar1);
    _objc_retain(pcVar4);
    _objc_retain(param_4);
    if (pcVar2 != (char *)0x0) {
      plVar5 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(auStack_120,pcVar2);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar2 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_108,pcVar2);
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
      func_0x00010002b838(auStack_f0,pcVar2);
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_d8,3);
      (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110883e98,&uStack_140,param_5);
      puStack_128 = (undefined1 *)&uStack_140;
      func_0x00010007e5dc(&puStack_128);
      lVar6 = 0;
      do {
        if ((&cStack_d9)[lVar6] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar6));
        }
        lVar6 = lVar6 + -0x18;
        unaff_x24 = &uStack_140;
      } while (lVar6 != -0x48);
    }
    _objc_release(param_4);
    _objc_release(pcVar4);
    pcVar2 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      _objc_release(param_4);
      do {
        unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
      } while (unaff_x24 != (undefined8 *)auStack_120);
      _objc_release(param_4);
      _objc_release(pcVar4);
      _objc_release(pcVar1);
      __Unwind_Resume();
      ppcVar3 = &pcStack_170;
      pcStack_148 = FUN_1053dc9bc;
      puStack_168 = PTR_PTR_1126e8108;
      pcStack_170 = pcVar2;
      pcStack_160 = pcVar4;
      pcStack_158 = pcVar1;
      ppuStack_150 = &puStack_90;
      _objc_msgSendSuper2(&pcStack_170,PTR_s_init_1125d9248);
      if (ppcVar3 != (char **)0x0) {
        pcVar1 = (char *)ppcVar3;
        (*(code *)PTR_DAT_113403208)();
        *(char **)((long)ppcVar3 + 8) = pcVar1;
      }
      return (char *)ppcVar3;
    }
    return pcVar2;
  }
  return pcVar2;
}



/* Entry: 1053dc6fc; end: 1053dc9bb;  */

/* WARNING: Removing unreachable block (ram,0x0001053dc984) */

char * FUN_1053dc6fc(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x24;
  char *pcStack_f0;
  undefined *puStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
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
    func_0x00010002b838(auStack_a0,pcVar1);
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
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110883e98,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar3 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    ppcVar2 = &pcStack_f0;
    pcStack_c8 = FUN_1053dc9bc;
    puStack_e8 = PTR_PTR_1126e8108;
    pcStack_f0 = pcVar1;
    pcStack_e0 = param_3;
    pcStack_d8 = param_2;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&pcStack_f0,PTR_s_init_1125d9248);
    if (ppcVar2 != (char **)0x0) {
      pcVar1 = (char *)ppcVar2;
      (*(code *)PTR_DAT_113403208)();
      *(char **)((long)ppcVar2 + 8) = pcVar1;
    }
    return (char *)ppcVar2;
  }
  return pcVar1;
}



/* Entry: 1053dc9bc; end: 1053dca2f; -[SCGrapheneComplianceEngineServiceMetric2 init] */

undefined1 * FUN_1053dc9bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8108;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1053dca30; end: 1053dcba3;  */

/* WARNING: Removing unreachable block (ram,0x0001053dd008) */

void FUN_1053dca30(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar9 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
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
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
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
    pcVar1 = "";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110883fa8,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar9 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar9 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1053dcba4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar10 = pcVar9;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar9);
  puVar13 = (undefined8 *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    pcVar8 = "";
    unaff_x23 = acStack_118;
    pcVar10 = acStack_118;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110883ff8,pcVar10,param_4);
    pcStack_100 = unaff_x23;
    func_0x00010007e5dc(&pcStack_100);
    lVar12 = 0;
    puVar13 = auStack_f8;
    do {
      if ((&cStack_c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    _objc_release(pcVar9);
    if (cStack_e1 < '\0') {
      __ZdlPv(auStack_f8[0]);
    }
    _objc_release(pcVar9);
    _objc_release(pcVar1);
    pcVar3 = pcVar2;
    __Unwind_Resume();
    pcStack_128 = FUN_1053dcdd4;
    lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_160 = unaff_x24;
    pcStack_158 = unaff_x23;
    puStack_150 = puVar13;
    pcStack_148 = pcVar2;
    pcStack_140 = pcVar9;
    pcStack_138 = pcVar1;
    ppuStack_130 = &puStack_90;
    _objc_retain(pcVar8);
    if (pcVar3 != (char *)0x0) {
      plVar11 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar8;
        _objc_retainAutorelease(pcVar8);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_180,pcVar1);
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_190 = 0;
      func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110884048,&uStack_1a0,pcVar10);
      puStack_188 = (undefined1 *)&uStack_1a0;
      func_0x00010007e5dc(&puStack_188);
      if (cStack_169 < '\0') {
        __ZdlPv(auStack_180[0]);
      }
    }
    pcVar1 = pcVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      _objc_release(pcVar8);
      __Unwind_Resume(pcVar1);
      puVar4 = PTR_PTR_1126b85c8;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b85d0;
      _objc_opt_class(PTR_PTR_1126b85d0);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b85d0;
      func_0x00010c0f5800(PTR_PTR_1126b85d0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010c09bd60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      if (puVar7 == (undefined *)0x0) {
        puVar7 = PTR_PTR_1126b85d0;
        _objc_alloc_init(PTR_PTR_1126b85d0);
        func_0x00010c14b0c0();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1053dcba4; end: 1053dcdd3;  */

/* WARNING: Removing unreachable block (ram,0x0001053dd008) */

void FUN_1053dcba4(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar11 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
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
    unaff_x24 = auStack_78;
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
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar4 = acStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110883ff8,pcVar4,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_3);
    _objc_release(param_2);
    pcVar3 = pcVar2;
    __Unwind_Resume();
    pcStack_a8 = FUN_1053dcdd4;
    lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_e0 = unaff_x24;
    pcStack_d8 = unaff_x23;
    puStack_d0 = puVar11;
    pcStack_c8 = pcVar2;
    pcStack_c0 = param_3;
    pcStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar1);
    if (pcVar3 != (char *)0x0) {
      plVar10 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(auStack_100,pcVar2);
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110884048,&uStack_120,pcVar4);
      puStack_108 = (undefined1 *)&uStack_120;
      func_0x00010007e5dc(&puStack_108);
      if (cStack_e9 < '\0') {
        __ZdlPv(auStack_100[0]);
      }
    }
    pcVar4 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
      ___stack_chk_fail();
      _objc_release(pcVar1);
      _objc_release(pcVar1);
      __Unwind_Resume(pcVar4);
      puVar5 = PTR_PTR_1126b85c8;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b85d0;
      _objc_opt_class(PTR_PTR_1126b85d0);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126b85d0;
      func_0x00010c0f5800(PTR_PTR_1126b85d0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x00010c09bd60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      if (puVar8 == (undefined *)0x0) {
        puVar8 = PTR_PTR_1126b85d0;
        _objc_alloc_init(PTR_PTR_1126b85d0);
        func_0x00010c14b0c0();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1053dcdd4; end: 1053dcf47;  */

/* WARNING: Removing unreachable block (ram,0x0001053dd008) */

void FUN_1053dcdd4(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110884048,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_2);
    __Unwind_Resume(pcVar1);
    puVar2 = PTR_PTR_1126b85c8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b85d0;
    _objc_opt_class(PTR_PTR_1126b85d0);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b85d0;
    func_0x00010c0f5800(PTR_PTR_1126b85d0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c09bd60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar5 == (undefined *)0x0) {
      puVar5 = PTR_PTR_1126b85d0;
      _objc_alloc_init(PTR_PTR_1126b85d0);
      func_0x00010c14b0c0();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  return;
}



/* Entry: 1053dcf48; end: 1053dd04f; +[SCTwoFAManager SCGetCachedTwoFAManager] */

/* WARNING: Removing unreachable block (ram,0x0001053dd008) */

void FUN_1053dcf48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b85d0;
  _objc_opt_class(PTR_PTR_1126b85d0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b85d0;
  func_0x00010c0f5800(PTR_PTR_1126b85d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c09bd60(puVar1,param_2,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126b85d0;
    _objc_alloc_init(PTR_PTR_1126b85d0);
    func_0x00010c14b0c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1053dd050; end: 1053dd0a3; +[SCTwoFAManager path] */

void FUN_1053dd050(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0(PTR_PTR_1126b85c8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053dd0a4; end: 1053dd15b; -[SCTwoFAManager encodeWithCoder:] */

void FUN_1053dd0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c081b40(param_1);
  func_0x00010c0df6e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110dd8958);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c081b20(param_1);
  func_0x00010c0df6e0(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar2,&PTR____CFConstantStringClassReference_110dd8978);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1053dd15c; end: 1053dd22b; -[SCTwoFAManager initWithCoder:] */

undefined1 * FUN_1053dd15c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8110;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b5320(puVar1);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1b5300(puVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053dd22c; end: 1053dd257; -[SCTwoFAManager setLoginResponseSmsTFAEnabled:otpTFAEnabled:] */

void FUN_1053dd22c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c1b5320();
                    /* WARNING: Could not recover jumptable at 0x00010c1b5310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsTwoFAOtpEnabled__11264aee8,param_4);
  return;
}



/* Entry: 1053dd258; end: 1053dd2d3; -[SCTwoFAManager saveState] */

undefined * FUN_1053dd258(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0(PTR_PTR_1126b85c8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b85d0;
  func_0x00010c0f5800(PTR_PTR_1126b85d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c14aa80(puVar1,param_2,param_1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 1053dd2d4; end: 1053dd2ff; -[SCTwoFAManager clear] */

void FUN_1053dd2d4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1b5320(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c1b5310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsTwoFAOtpEnabled__11264aee8,0);
  return;
}



/* Entry: 1053dd300; end: 1053dd337; -[SCTwoFAManager isTwoFAEnabled] */

ulong FUN_1053dd300(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c081b40();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c081b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isTwoFAOtpEnabled_1125fe0d8);
  return param_1;
}



/* Entry: 1053dd338; end: 1053dd34f; -[SCTwoFAManager isTwoFADisabled] */

uint FUN_1053dd338(uint param_1)

{
  func_0x00010c081b00();
  return param_1 ^ 1;
}



/* Entry: 1053dd350; end: 1053dd403; -[SCTwoFAManager updateUserTwoFAStatus:] */

void FUN_1053dd350(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010c07e5a0();
  if (((param_3 & 1) == 0) && (uVar1 = param_1, func_0x00010c081b40(), (int)uVar1 != 0)) {
    puVar4 = PTR_PTR_1126b85d8;
    _objc_alloc(PTR_PTR_1126b85d8);
    puVar2 = puVar4;
    FUN_1053e1cac();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x0001053e1cc4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055800(puVar4,param_2,puVar2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  func_0x00010c1b5320(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1053dd404; end: 1053dd5f3; -[SCTwoFAManager sendSMSTwoFACodeWithUserNetworkServices:successBlock:failureBlock:] */

void FUN_1053dd404(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  ppuVar1 = &puStack_a0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    _objc_initWeak(auStack_68,param_1);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1053dd5f4;
    puStack_88 = &UNK_1108840d8;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_5);
    lStack_80 = param_5;
    _objc_retain(param_4);
    lStack_78 = param_4;
    _objc_retainBlock(&puStack_a0);
    puVar2 = PTR_PTR_1126b85e8;
    _objc_opt_new(PTR_PTR_1126b85e8);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010af82634();
    func_0x00010c0df7c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dacc0(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c083b00(PTR_PTR_1126afa00);
    func_0x00010c1b5b20(puVar2);
    puVar3 = puVar2;
    func_0x00010bf63640(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd8b00(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
    _objc_release(lStack_78);
    _objc_release(lStack_80);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053dd5f4; end: 1053dd877;  */

void FUN_1053dd5f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 != 0) {
    lVar6 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c252ee0(param_4);
    lVar5 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar5);
    lVar1 = lVar5;
    func_0x00010be0daa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be58740(lVar6);
    _objc_release(lVar1);
    _objc_release(lVar5);
    _objc_release(lVar6);
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x0001053e1cdc();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,lVar6);
    goto LAB_1053dd838;
  }
  puVar2 = PTR_PTR_1126b85e0;
  _objc_alloc();
  func_0x00010c008360();
  lVar6 = 0;
  _objc_retain(0);
  if (puVar2 == (undefined *)0x0) {
    puVar4 = (undefined *)(param_1 + 0x30);
    _objc_loadWeakRetained(puVar4);
    func_0x00010c252ee0(param_4);
    func_0x00010be58740(puVar4);
    _objc_release(puVar4);
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x0001053e1cdc();
    _objc_retainAutoreleasedReturnValue();
LAB_1053dd7e0:
    (**(code **)(lVar5 + 0x10))(lVar5,puVar4);
    _objc_release(puVar4);
  }
  else {
    puVar4 = puVar2;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c08fa60();
    _objc_release(puVar4);
    lVar5 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c252ee0(param_4);
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar2;
      func_0x00010c0ccb60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be58740(lVar5);
      _objc_release(puVar4);
      _objc_release(lVar5);
      lVar5 = *(long *)(param_1 + 0x20);
      puVar4 = puVar2;
      func_0x00010bf987e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1053dd7e0;
    }
    func_0x00010be58740(lVar5);
    _objc_release(lVar5);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  _objc_release(puVar2);
LAB_1053dd838:
  _objc_release(lVar6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1053dd878; end: 1053dda4f; -[SCTwoFAManager forgetAllDevicesWithUserNetworkServices:successBlock:failureBlock:] */

void FUN_1053dd878(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  ppuVar1 = &puStack_a0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    _objc_initWeak(auStack_68,param_1);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1053dda50;
    puStack_88 = &UNK_1108840d8;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_5);
    lStack_80 = param_5;
    _objc_retain(param_4);
    lStack_78 = param_4;
    _objc_retainBlock(&puStack_a0);
    puVar2 = PTR_PTR_1126b85f8;
    _objc_opt_new(PTR_PTR_1126b85f8);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010af82634();
    func_0x00010c0df7c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dacc0(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf63640(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd8b00(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
    _objc_release(lStack_78);
    _objc_release(lStack_80);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053dda50; end: 1053ddceb;  */

void FUN_1053dda50(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_1053ddcac;
  if (param_3 == 0) {
    puVar3 = PTR_PTR_1126b85f0;
    _objc_alloc();
    func_0x00010c008360();
    lVar7 = 0;
    _objc_retain(0);
    if (puVar3 == (undefined *)0x0) {
      puVar5 = (undefined *)(param_1 + 0x30);
      _objc_loadWeakRetained(puVar5);
      func_0x00010c252ee0(param_4);
      func_0x00010be58740(puVar5);
      _objc_release(puVar5);
      lVar6 = *(long *)(param_1 + 0x20);
      func_0x0001053e1cdc();
      _objc_retainAutoreleasedReturnValue();
LAB_1053ddc4c:
      (**(code **)(lVar6 + 0x10))(lVar6,puVar5);
      _objc_release(puVar5);
    }
    else {
      puVar5 = puVar3;
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c08fa60();
      _objc_release(puVar5);
      lVar6 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c252ee0(param_4);
      if (puVar4 != (undefined *)0x0) {
        puVar5 = puVar3;
        func_0x00010c0ccb60(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be58740(lVar6);
        _objc_release(puVar5);
        _objc_release(lVar6);
        lVar6 = *(long *)(param_1 + 0x20);
        puVar5 = puVar3;
        func_0x00010bf987e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1053ddc4c;
      }
      func_0x00010be58740(lVar6);
      _objc_release(lVar6);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    }
    _objc_release(puVar3);
  }
  else {
    lVar7 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar7);
    func_0x00010c252ee0(param_4);
    lVar6 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar6);
    lVar2 = lVar6;
    func_0x00010be0daa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be58740(lVar7);
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(lVar7);
    lVar6 = *(long *)(param_1 + 0x20);
    func_0x0001053e1cdc();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,lVar7);
  }
  _objc_release(lVar7);
LAB_1053ddcac:
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1053ddcec; end: 1053ddedf; -[SCTwoFAManager forgetOneDeviceWithId:userNetworkServices:successBlock:failureBlock:] */

void FUN_1053ddcec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  ppuVar1 = &puStack_a0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_5 != 0) && (param_6 != 0)) {
    _objc_initWeak(auStack_68,param_1);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1053ddee0;
    puStack_88 = &UNK_1108840d8;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_6);
    lStack_80 = param_6;
    _objc_retain(param_5);
    lStack_78 = param_5;
    _objc_retainBlock(&puStack_a0);
    puVar2 = PTR_PTR_1126b8608;
    _objc_opt_new(PTR_PTR_1126b8608);
    func_0x00010c18c9a0();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010af82634();
    func_0x00010c0df7c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dacc0(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf63640(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd8b00(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
    _objc_release(lStack_78);
    _objc_release(lStack_80);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053ddee0; end: 1053de17b;  */

void FUN_1053ddee0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_1053de13c;
  if (param_3 == 0) {
    puVar3 = PTR_PTR_1126b8600;
    _objc_alloc();
    func_0x00010c008360();
    lVar7 = 0;
    _objc_retain(0);
    if (puVar3 == (undefined *)0x0) {
      puVar5 = (undefined *)(param_1 + 0x30);
      _objc_loadWeakRetained(puVar5);
      func_0x00010c252ee0(param_4);
      func_0x00010be58740(puVar5);
      _objc_release(puVar5);
      lVar6 = *(long *)(param_1 + 0x20);
      func_0x0001053e1cdc();
      _objc_retainAutoreleasedReturnValue();
LAB_1053de0dc:
      (**(code **)(lVar6 + 0x10))(lVar6,puVar5);
      _objc_release(puVar5);
    }
    else {
      puVar5 = puVar3;
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c08fa60();
      _objc_release(puVar5);
      lVar6 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c252ee0(param_4);
      if (puVar4 != (undefined *)0x0) {
        puVar5 = puVar3;
        func_0x00010c0ccb60(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be58740(lVar6);
        _objc_release(puVar5);
        _objc_release(lVar6);
        lVar6 = *(long *)(param_1 + 0x20);
        puVar5 = puVar3;
        func_0x00010bf987e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1053de0dc;
      }
      func_0x00010be58740(lVar6);
      _objc_release(lVar6);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    }
    _objc_release(puVar3);
  }
  else {
    lVar7 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar7);
    func_0x00010c252ee0(param_4);
    lVar6 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar6);
    lVar2 = lVar6;
    func_0x00010be0daa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be58740(lVar7);
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(lVar7);
    lVar6 = *(long *)(param_1 + 0x20);
    func_0x0001053e1cdc();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,lVar7);
  }
  _objc_release(lVar7);
LAB_1053de13c:
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1053de17c; end: 1053de353; -[SCTwoFAManager generateRecoveryCodeWithUserNetworkServices:successBlock:failureBlock:] */

void FUN_1053de17c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  ppuVar1 = &puStack_a0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    _objc_initWeak(auStack_68,param_1);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1053de354;
    puStack_88 = &UNK_1108840d8;
    _objc_retain(param_5);
    lStack_80 = param_5;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    lStack_78 = param_4;
    _objc_retainBlock(&puStack_a0);
    puVar2 = PTR_PTR_1126b8618;
    _objc_opt_new(PTR_PTR_1126b8618);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010af82634();
    func_0x00010c0df7c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dacc0(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf63640(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd8b00(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
    _objc_release(lStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_release(lStack_80);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053de354; end: 1053de603;  */

void FUN_1053de354(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar6 = param_4;
  func_0x00010c252ee0();
  if (lVar6 == 0x193) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  else {
    if (param_3 == 0) {
      puVar2 = PTR_PTR_1126b8610;
      _objc_alloc();
      func_0x00010c008360();
      lVar6 = 0;
      _objc_retain(0);
      if (puVar2 == (undefined *)0x0) {
        puVar4 = (undefined *)(param_1 + 0x30);
        _objc_loadWeakRetained(puVar4);
        func_0x00010c252ee0(param_4);
        func_0x00010be58740(puVar4);
        _objc_release(puVar4);
        lVar5 = *(long *)(param_1 + 0x20);
        func_0x0001053e1cdc();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar4 = puVar2;
        func_0x00010bf987e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar4;
        func_0x00010c08fa60();
        _objc_release(puVar4);
        lVar5 = param_1 + 0x30;
        _objc_loadWeakRetained(lVar5);
        func_0x00010c252ee0(param_4);
        puVar4 = puVar2;
        if (puVar3 == (undefined *)0x0) {
          func_0x00010be58740(lVar5);
          _objc_release(lVar5);
          lVar5 = *(long *)(param_1 + 0x28);
          func_0x00010bf3ec40(puVar2);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar3 = puVar2;
          func_0x00010c0ccb60(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be58740(lVar5);
          _objc_release(puVar3);
          _objc_release(lVar5);
          lVar5 = *(long *)(param_1 + 0x20);
          func_0x00010bf987e0(puVar2);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      (**(code **)(lVar5 + 0x10))(lVar5,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    else {
      lVar6 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c252ee0(param_4);
      lVar5 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar5);
      lVar1 = lVar5;
      func_0x00010be0daa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be58740(lVar6);
      _objc_release(lVar1);
      _objc_release(lVar5);
      _objc_release(lVar6);
      lVar5 = *(long *)(param_1 + 0x20);
      func_0x0001053e1cdc();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,lVar6);
    }
    _objc_release(lVar6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1053de604; end: 1053de893; -[SCTwoFAManager enableSMSTFAWithUserNetworkServices:deviceIdManager:smsCode:successBlock:failureBlock:] */

void FUN_1053de604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  uint uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_78,param_2);
  lVar1 = param_6;
  func_0x00010c08fa60();
  _CACurrentMediaTime();
  uVar2 = param_2;
  func_0x00010c294000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5780();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b8620;
  _objc_opt_new(PTR_PTR_1126b8620);
  func_0x00010c203840();
  uVar2 = param_5;
  func_0x00010bf71140(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9a0(puVar3);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010af82634();
  func_0x00010c0df7c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dacc0(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1053de894;
  puStack_a8 = &UNK_110884108;
  _objc_copyWeak(auStack_90,auStack_78);
  uStack_80 = (uint)(lVar1 != 0);
  uStack_88 = param_1;
  _objc_retain(param_8);
  uStack_a0 = param_8;
  _objc_retain(param_7);
  ppuVar6 = &puStack_c0;
  uStack_98 = param_7;
  _objc_retainBlock(ppuVar6);
  puVar4 = puVar3;
  func_0x00010bf63640(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd8b00(param_2);
  _objc_release(puVar4);
  _objc_release(ppuVar6);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1053de894; end: 1053deb57;  */

void FUN_1053de894(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  double dVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = (undefined *)(param_2 + 0x30);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) goto LAB_1053deb14;
  _CACurrentMediaTime();
  dVar7 = (param_1 - *(double *)(param_2 + 0x38)) * 1000.0;
  if (param_4 == 0) {
    puVar2 = PTR_PTR_1126b8628;
    _objc_alloc();
    func_0x00010c008360();
    puVar6 = (undefined *)0x0;
    _objc_retain(0);
    if (puVar2 == (undefined *)0x0) {
      func_0x00010c252ee0(param_5);
      puVar4 = puVar1;
      func_0x00010be529a0(dVar7,puVar1);
      lVar5 = *(long *)(param_2 + 0x20);
      if (lVar5 != 0) {
        func_0x0001053e1cdc();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1053deae8;
      }
    }
    else {
      puVar4 = puVar2;
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010c08fa60();
      _objc_release(puVar4);
      puVar4 = puVar2;
      if (puVar3 == (undefined *)0x0) {
        func_0x00010c1b5320(puVar1);
        func_0x00010c252ee0(param_5);
        func_0x00010be529a0(dVar7,puVar1);
        lVar5 = *(long *)(param_2 + 0x28);
        if (lVar5 != 0) {
          func_0x00010c1242e0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1053deae8;
        }
      }
      else {
        func_0x00010c252ee0(param_5);
        puVar3 = puVar2;
        func_0x00010c0ccb60(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be529a0(dVar7,puVar1);
        _objc_release(puVar3);
        lVar5 = *(long *)(param_2 + 0x20);
        if (lVar5 != 0) {
          func_0x00010bf987e0(puVar2);
          _objc_retainAutoreleasedReturnValue();
LAB_1053deae8:
          (**(code **)(lVar5 + 0x10))(lVar5,puVar4);
          _objc_release(puVar4);
        }
      }
    }
    _objc_release(puVar2);
  }
  else {
    func_0x00010c252ee0(param_5);
    puVar6 = puVar1;
    func_0x00010be0daa0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be529a0(dVar7,puVar1);
    _objc_release(puVar6);
    lVar5 = *(long *)(param_2 + 0x20);
    if (lVar5 == 0) goto LAB_1053deb14;
    func_0x0001053e1cdc();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,puVar6);
  }
  _objc_release(puVar6);
LAB_1053deb14:
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1053deb58; end: 1053dedaf; -[SCTwoFAManager enableOTPTFAWithUserNetworkServices:deviceIdManager:otpSecret:otpCode:successBlock:failureBlock:] */

void FUN_1053deb58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
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
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126b8630;
  _objc_opt_new(PTR_PTR_1126b8630);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010af82634();
  func_0x00010c0df7c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dacc0(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c1d6b60(puVar1);
  func_0x00010c1d6b40(puVar1);
  uVar4 = param_4;
  func_0x00010bf71140(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9a0(puVar1);
  _objc_release(uVar4);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1053dedb0;
  puStack_88 = &UNK_1108840d8;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_8);
  uStack_80 = param_8;
  _objc_retain(param_7);
  ppuVar5 = &puStack_a0;
  uStack_78 = param_7;
  _objc_retainBlock(ppuVar5);
  puVar2 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd8b00(param_1);
  _objc_release(puVar2);
  _objc_release(ppuVar5);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053dedb0; end: 1053df09f;  */

void FUN_1053dedb0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    puVar2 = PTR_PTR_1126b8638;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar3 != 0) {
      if (puVar2 == (undefined *)0x0) {
        puVar5 = (undefined *)(param_1 + 0x30);
        _objc_loadWeakRetained(puVar5);
        func_0x00010c252ee0(param_4);
        func_0x00010be58740(puVar5);
        _objc_release(puVar5);
        lVar6 = *(long *)(param_1 + 0x20);
        if (lVar6 != 0) {
          func_0x0001053e1cdc();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1053df02c;
        }
      }
      else {
        puVar5 = puVar2;
        func_0x00010bf987e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar5;
        func_0x00010c08fa60();
        _objc_release(puVar5);
        puVar5 = puVar2;
        if (puVar4 == (undefined *)0x0) {
          func_0x00010c1b5300(lVar3);
          lVar6 = param_1 + 0x30;
          _objc_loadWeakRetained(lVar6);
          func_0x00010c252ee0(param_4);
          func_0x00010be58740(lVar6);
          _objc_release(lVar6);
          lVar6 = *(long *)(param_1 + 0x28);
          if (lVar6 != 0) {
            func_0x00010c1242e0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1053df02c;
          }
        }
        else {
          lVar6 = param_1 + 0x30;
          _objc_loadWeakRetained(lVar6);
          func_0x00010c252ee0(param_4);
          puVar4 = puVar2;
          func_0x00010c0ccb60(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be58740(lVar6);
          _objc_release(puVar4);
          _objc_release(lVar6);
          lVar6 = *(long *)(param_1 + 0x20);
          if (lVar6 != 0) {
            func_0x00010bf987e0(puVar2);
            _objc_retainAutoreleasedReturnValue();
LAB_1053df02c:
            (**(code **)(lVar6 + 0x10))(lVar6,puVar5);
            _objc_release(puVar5);
          }
        }
      }
      _objc_release(lVar3);
    }
    lVar3 = 0;
    _objc_release(puVar2);
  }
  else {
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c252ee0(param_4);
    lVar6 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar6);
    lVar1 = lVar6;
    func_0x00010be0daa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be58740(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar6);
    _objc_release(lVar3);
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 == 0) goto LAB_1053df060;
    func_0x0001053e1cdc();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,lVar3);
  }
  _objc_release(lVar3);
LAB_1053df060:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 1053df0a0; end: 1053df26f; -[SCTwoFAManager disableSMSTFAWithUserNetworkServices:successBlock:failureBlock:] */

void FUN_1053df0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar4 = &puStack_90;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126b8640;
  _objc_opt_new(PTR_PTR_1126b8640);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010af82634();
  func_0x00010c0df7c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dacc0(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1053df270;
  puStack_78 = &UNK_1108840d8;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_5);
  uStack_70 = param_5;
  _objc_retain(param_4);
  uStack_68 = param_4;
  _objc_retainBlock(&puStack_90);
  puVar2 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd8b00(param_1);
  _objc_release(puVar2);
  _objc_release(ppuVar4);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053df270; end: 1053df54f;  */

void FUN_1053df270(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    puVar1 = PTR_PTR_1126b8648;
    _objc_alloc();
    func_0x00010c008360();
    lVar6 = 0;
    _objc_retain(0);
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar4 != 0) {
      if (puVar1 == (undefined *)0x0) {
        puVar3 = (undefined *)(param_1 + 0x30);
        _objc_loadWeakRetained(puVar3);
        func_0x00010c252ee0(param_4);
        func_0x00010be58740(puVar3);
        _objc_release(puVar3);
        lVar5 = *(long *)(param_1 + 0x20);
        if (lVar5 != 0) {
          func_0x0001053e1cdc();
          _objc_retainAutoreleasedReturnValue();
LAB_1053df484:
          (**(code **)(lVar5 + 0x10))(lVar5,puVar3);
          _objc_release(puVar3);
        }
      }
      else {
        puVar3 = puVar1;
        func_0x00010bf987e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c08fa60();
        _objc_release(puVar3);
        if (puVar2 == (undefined *)0x0) {
          func_0x00010c1b5320(lVar4);
          lVar5 = param_1 + 0x30;
          _objc_loadWeakRetained(lVar5);
          func_0x00010c252ee0(param_4);
          func_0x00010be58740(lVar5);
          _objc_release(lVar5);
          if (*(long *)(param_1 + 0x28) != 0) {
            (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
          }
        }
        else {
          lVar5 = param_1 + 0x30;
          _objc_loadWeakRetained(lVar5);
          func_0x00010c252ee0();
          puVar3 = puVar1;
          func_0x00010c0ccb60(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be58740(lVar5);
          _objc_release(puVar3);
          _objc_release(lVar5);
          lVar5 = *(long *)(param_1 + 0x20);
          if (lVar5 != 0) {
            puVar3 = puVar1;
            func_0x00010bf987e0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1053df484;
          }
        }
      }
      _objc_release(lVar4);
    }
    _objc_release(puVar1);
  }
  else {
    lVar6 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c252ee0(param_4);
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010be0daa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be58740(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) goto LAB_1053df510;
    func_0x0001053e1cdc();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,lVar6);
  }
  _objc_release(lVar6);
LAB_1053df510:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 1053df550; end: 1053df71f; -[SCTwoFAManager disableOTPTFAWithUserNetworkServices:successBlock:failureBlock:] */

void FUN_1053df550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar4 = &puStack_90;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126b8650;
  _objc_opt_new(PTR_PTR_1126b8650);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010af82634();
  func_0x00010c0df7c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dacc0(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1053df720;
  puStack_78 = &UNK_1108840d8;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_5);
  uStack_70 = param_5;
  _objc_retain(param_4);
  uStack_68 = param_4;
  _objc_retainBlock(&puStack_90);
  puVar2 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd8b00(param_1);
  _objc_release(puVar2);
  _objc_release(ppuVar4);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053df720; end: 1053df9ff;  */

void FUN_1053df720(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    puVar1 = PTR_PTR_1126b8658;
    _objc_alloc();
    func_0x00010c008360();
    lVar6 = 0;
    _objc_retain(0);
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar4 != 0) {
      if (puVar1 == (undefined *)0x0) {
        puVar3 = (undefined *)(param_1 + 0x30);
        _objc_loadWeakRetained(puVar3);
        func_0x00010c252ee0(param_4);
        func_0x00010be58740(puVar3);
        _objc_release(puVar3);
        lVar5 = *(long *)(param_1 + 0x20);
        if (lVar5 != 0) {
          func_0x0001053e1cdc();
          _objc_retainAutoreleasedReturnValue();
LAB_1053df934:
          (**(code **)(lVar5 + 0x10))(lVar5,puVar3);
          _objc_release(puVar3);
        }
      }
      else {
        puVar3 = puVar1;
        func_0x00010bf987e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c08fa60();
        _objc_release(puVar3);
        if (puVar2 == (undefined *)0x0) {
          func_0x00010c1b5300(lVar4);
          lVar5 = param_1 + 0x30;
          _objc_loadWeakRetained(lVar5);
          func_0x00010c252ee0(param_4);
          func_0x00010be58740(lVar5);
          _objc_release(lVar5);
          if (*(long *)(param_1 + 0x28) != 0) {
            (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
          }
        }
        else {
          lVar5 = param_1 + 0x30;
          _objc_loadWeakRetained(lVar5);
          func_0x00010c252ee0();
          puVar3 = puVar1;
          func_0x00010c0ccb60(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be58740(lVar5);
          _objc_release(puVar3);
          _objc_release(lVar5);
          lVar5 = *(long *)(param_1 + 0x20);
          if (lVar5 != 0) {
            puVar3 = puVar1;
            func_0x00010bf987e0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1053df934;
          }
        }
      }
      _objc_release(lVar4);
    }
    _objc_release(puVar1);
  }
  else {
    lVar6 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c252ee0(param_4);
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010be0daa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be58740(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) goto LAB_1053df9c0;
    func_0x0001053e1cdc();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,lVar6);
  }
  _objc_release(lVar6);
LAB_1053df9c0:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 1053dfa00; end: 1053dfb7b; -[SCTwoFAManager fetchVerifiedDevicesWithUserNetworkServices:successBlock:failureBlock:] */

void FUN_1053dfa00(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar1 = &puStack_90;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    _objc_initWeak(auStack_58,param_1);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1053dfb7c;
    puStack_78 = &UNK_1108840d8;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_5);
    lStack_70 = param_5;
    _objc_retain(param_4);
    lStack_68 = param_4;
    _objc_retainBlock(&puStack_90);
    puVar2 = PTR_PTR_1126b8668;
    _objc_opt_new(PTR_PTR_1126b8668);
    puVar3 = puVar2;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd8b00(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
    _objc_release(lStack_68);
    _objc_release(lStack_70);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053dfb7c; end: 1053dfdb3;  */

void FUN_1053dfb7c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    puVar1 = PTR_PTR_1126b8660;
    _objc_alloc();
    func_0x00010c008360();
    puVar3 = (undefined *)0x0;
    _objc_retain(0);
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c252ee0(param_4);
    if (puVar1 == (undefined *)0x0) {
      func_0x00010be58740(lVar2);
      _objc_release(lVar2);
      lVar5 = *(long *)(param_1 + 0x20);
      func_0x0001053e1cdc();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,lVar2);
    }
    else {
      func_0x00010be58740(lVar2);
      _objc_release(lVar2);
      lVar4 = *(long *)(param_1 + 0x28);
      lVar2 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar2);
      puVar3 = puVar1;
      func_0x00010c298480(puVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010be70420(lVar2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,lVar5);
      _objc_release(0);
      _objc_release(lVar5);
    }
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  else {
    puVar1 = (undefined *)(param_1 + 0x30);
    _objc_loadWeakRetained(puVar1);
    func_0x00010c252ee0(param_4);
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    lVar5 = lVar2;
    func_0x00010be0daa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be58740(puVar1);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(puVar1);
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x0001053e1cdc();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1053dfdb4; end: 1053dff5f; -[SCTwoFAManager _callAuthServiceAPIWithUserNetworkServices:Endpoint:data:requestCallback:] */

void FUN_1053dfdb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b8670;
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf10920(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc34c0(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = param_3;
  func_0x00010bfe4d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf225e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bfe4c00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f600();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1053dff60; end: 1053dffab;  */

void FUN_1053dff60(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290040(param_2);
  func_0x00010c28fde0(param_2);
  func_0x00010c290a40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053dffac; end: 1053e0033; -[SCTwoFAManager _extractErrorMessage:] */

void FUN_1053dffac(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_3;
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) goto LAB_1053e0018;
  }
  func_0x0001053e1cdc();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
LAB_1053e0018:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1053e0034; end: 1053e00ab; -[SCTwoFAManager _logServiceResponseForEndpoint:httpStatusCode:metadata:] */

void FUN_1053e0034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf10880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7b80();
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053e00ac; end: 1053e0293; -[SCTwoFAManager _parseProtoVerifiedDevices:] */

void FUN_1053e00ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  dVar11 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar6 = auStack_f0;
  uVar7 = 0x10;
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar6,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        lVar8 = *(long *)(lStack_128 + lVar10 * 8);
        lVar3 = lVar8;
        func_0x00010c089480(lVar8);
        dVar11 = (double)(lVar3 / 1000);
        func_0x00010bf655e0(dVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126b8678;
        _objc_alloc();
        lVar3 = lVar8;
        func_0x00010bf70720(lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf70c20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c00c220(puVar5,param_2,lVar3,lVar8,puVar4);
        _objc_release(lVar8);
        _objc_release(lVar3);
        func_0x00010befa120(puVar1,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(puVar4);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      puVar6 = auStack_f0;
      uVar7 = 0x10;
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar6,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar7);
  lVar2 = param_3;
  func_0x00010c294000(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a57a0(dVar11);
  _objc_release(lVar2);
  func_0x00010be58740(param_3,param_2,&PTR____CFConstantStringClassReference_110dd8858,puVar6,uVar7)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 1053e0294; end: 1053e032b; -[SCTwoFAManager _logEnableSMSTwoFAResponse:statusCode:latencyMS:metadata:] */

void FUN_1053e0294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  uVar1 = param_2;
  func_0x00010c294000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a57a0(param_1);
  _objc_release(uVar1);
  func_0x00010be58740(param_2,param_3,&PTR____CFConstantStringClassReference_110dd8858,param_5,
                      param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1053e032c; end: 1053e0333; -[SCTwoFAManager authLogger] */

undefined8 FUN_1053e032c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1053e0334; end: 1053e0363; -[SCTwoFAManager setAuthLogger:] */

void FUN_1053e0334(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1053e0364; end: 1053e036b; -[SCTwoFAManager userTwoFALogger] */

undefined8 FUN_1053e0364(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1053e036c; end: 1053e039b; -[SCTwoFAManager setUserTwoFALogger:] */

void FUN_1053e036c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1053e039c; end: 1053e03a3; -[SCTwoFAManager isTwoFASmsEnabled] */

undefined1 FUN_1053e039c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1053e03a4; end: 1053e03ab; -[SCTwoFAManager setIsTwoFASmsEnabled:] */

void FUN_1053e03a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}


