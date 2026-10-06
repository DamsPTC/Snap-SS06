/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105856a84; end: 105856b0f; +[SCVSFriendlinkUpdateRequest descriptor] */

undefined * FUN_105856a84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0df8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a735e0,
                        &PTR____CFConstantStringClassReference_110e088f8,&PTR_DAT_113105bb8,
                        &PTR_DAT_113106390,4,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c0df8 = puVar1;
  }
  return puRam00000001136c0df8;
}



/* Entry: 105856b10; end: 105856b77; +[SCVSFriendlinkUpdateResponse descriptor] */

void FUN_105856b10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0e00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a73630,
                        &PTR____CFConstantStringClassReference_110e08918,&PTR_DAT_113105bb8,0,0,4,
                        0x1c);
    puRam00000001136c0e00 = puVar1;
  }
  return;
}



/* Entry: 105856b78; end: 105856bdf; +[SCVSGetLocationSharingFriendListRequest descriptor] */

void FUN_105856b78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0e08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a73680,
                        &PTR____CFConstantStringClassReference_110e08938,&PTR_DAT_113105bb8,
                        &PTR_s_userId_113105c70,1,0x10,0x1c);
    puRam00000001136c0e08 = puVar1;
  }
  return;
}



/* Entry: 105856be0; end: 105856cc3; +[SCVSGetLocationSharingFriendListResponse descriptor] */

void FUN_105856be0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0e10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a736d0,
                        &PTR____CFConstantStringClassReference_110e08958,&PTR_DAT_113105bb8,
                        &PTR_s_friendIdsArray_113105c90,1,0x10,0x1c);
    puRam00000001136c0e10 = puVar1;
  }
  return;
}



/* Entry: 105856cc4; end: 105856ccf;  */

bool FUN_105856cc4(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 105856cd0; end: 105856d4b; +[SCMEUser descriptor] */

undefined * FUN_105856cd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0e20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a73770,
                        &PTR____CFConstantStringClassReference_110df7698,&PTR_DAT_1131065f0,
                        &PTR_s_userId_113106608,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c0e20 = puVar1;
  }
  return puRam00000001136c0e20;
}



/* Entry: 105856d4c; end: 105856dc7; +[SCMEFriend descriptor] */

undefined * FUN_105856d4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0e28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a737c0,
                        &PTR____CFConstantStringClassReference_110e08998,&PTR_DAT_1131065f0,
                        &PTR_DAT_1131066e8,7,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c0e28 = puVar1;
  }
  return puRam00000001136c0e28;
}



/* Entry: 105856dc8; end: 105856e43; +[SCMEFriendKey descriptor] */

undefined * FUN_105856dc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0e30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a73810,
                        &PTR____CFConstantStringClassReference_110e089b8,&PTR_DAT_1131065f0,
                        &PTR_DAT_113106628,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c0e30 = puVar1;
  }
  return puRam00000001136c0e30;
}



/* Entry: 105856e44; end: 105856ebf; +[SCMEPubsubMessage descriptor] */

undefined * FUN_105856e44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0e38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a73860,
                        &PTR____CFConstantStringClassReference_110e089d8,&PTR_DAT_1131065f0,
                        &PTR_DAT_113106668,4,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c0e38 = puVar1;
  }
  return puRam00000001136c0e38;
}



/* Entry: 105856ec0; end: 105856f33; -[UNISCVSValis initWithUnifiedGrpcService:] */

undefined1 * FUN_105856ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea9d8;
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



/* Entry: 105856f34; end: 105857017; -[UNISCVSValis getPreferencesWithRequest:callOptionsBuilder:handler:] */

void FUN_105856f34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bf3d8;
  _objc_opt_class(PTR_PTR_1126bf3d8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e089f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105857018; end: 1058570fb; -[UNISCVSValis setPreferencesWithRequest:callOptionsBuilder:handler:] */

void FUN_105857018(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bf3e0;
  _objc_opt_class(PTR_PTR_1126bf3e0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e08a18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1058570fc; end: 1058571df; -[UNISCVSValis getLocalityWithRequest:callOptionsBuilder:handler:] */

void FUN_1058570fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bf3e8;
  _objc_opt_class(PTR_PTR_1126bf3e8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e08a38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1058571e0; end: 1058572af; -[UNISCVSValis communicateWithOptionsBuilder:eventHandler:] */

void FUN_1058571e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b8580;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf3f0;
  _objc_opt_class(PTR_PTR_1126bf3f0);
  func_0x00010c0199c0(puVar1,param_2,param_4,puVar2);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf19be0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e08a58,param_3,puVar1)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b8590;
  _objc_alloc(PTR_PTR_1126b8590);
  func_0x00010c0199a0();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058572b0; end: 105857393; -[UNISCVSValis sendClientUpdateWithRequest:callOptionsBuilder:handler:] */

void FUN_1058572b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bf3f8;
  _objc_opt_class(PTR_PTR_1126bf3f8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e08a78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105857394; end: 105857463; -[UNISCVSValis streamClientUpdateWithOptionsBuilder:eventHandler:] */

void FUN_105857394(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b8580;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126bf3f8;
  _objc_opt_class(PTR_PTR_1126bf3f8);
  func_0x00010c0199c0(puVar1,param_2,param_4,puVar2);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf19be0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e08a98,param_3,puVar1)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b8590;
  _objc_alloc(PTR_PTR_1126b8590);
  func_0x00010c0199a0();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105857464; end: 105857547; -[UNISCVSValis getFriendClustersWithRequest:callOptionsBuilder:handler:] */

void FUN_105857464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bf400;
  _objc_opt_class(PTR_PTR_1126bf400);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e08ab8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105857548; end: 10585762b; -[UNISCVSValis deleteLastKnownLocationWithRequest:callOptionsBuilder:handler:] */

void FUN_105857548(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bf408;
  _objc_opt_class(PTR_PTR_1126bf408);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e08ad8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10585762c; end: 10585770f; -[UNISCVSValis sendPushNotificationTestWithRequest:callOptionsBuilder:handler:] */

void FUN_10585762c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bf410;
  _objc_opt_class(PTR_PTR_1126bf410);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e08af8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105857710; end: 10585771b; -[UNISCVSValis .cxx_destruct] */

void FUN_105857710(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10585771c; end: 10585775f; -[SCCustomVolumeController dealloc] */

void FUN_10585771c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bec3000();
  puStack_28 = PTR_PTR_1126ea9e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105857760; end: 105857847; -[SCCustomVolumeController _restoreNativeVolumeIfNecessaryKeepMuteOverride:] */

void FUN_105857760(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010c0f0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    return;
  }
  if ((((*(byte *)(param_1 + 0x29) & 1) != 0) || (*(char *)(param_1 + 0x2a) == '\x01')) &&
     (*(char *)(param_1 + 0x28) == '\x01')) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1624e0();
    _objc_release(uVar4);
  }
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  if ((param_3 & 1) == 0) {
    func_0x00010bec3580(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec3010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopHandlingVolumeButtonEvents_11258e5a8);
  return;
}



/* Entry: 105857848; end: 10585784b;  */

void FUN_105857848(void)

{
  return;
}



/* Entry: 10585784c; end: 105857853; -[SCCustomVolumeController _restoreNativeVolumeIfNecessary] */

void FUN_10585784c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be95730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__restoreNativeVolumeIfNecessaryK_112582f68,0)
  ;
  return;
}



/* Entry: 105857854; end: 10585785b; -[SCCustomVolumeController restoreNativeVolumeForObject:] */

void FUN_105857854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_restoreNativeVolumeForObject_kee_11262cb78,param_3,0);
  return;
}



/* Entry: 10585785c; end: 1058578cb; -[SCCustomVolumeController restoreNativeVolumeForObject:keepMuteOverride:] */

void FUN_10585785c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  
  if ((param_4 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0f0640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be95730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__restoreNativeVolumeIfNecessaryK_112582f68,param_4);
  return;
}



/* Entry: 1058578cc; end: 105857907; -[SCCustomVolumeController restoreNativeVolume] */

void FUN_1058578cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0f0640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be95710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__restoreNativeVolumeIfNecessary_112582f60);
  return;
}



/* Entry: 105857908; end: 10585792f; -[SCCustomVolumeController onAppEnteredBackground] */

void FUN_105857908(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0797e0();
  *(char *)(param_1 + 0x2c) = (char)lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010c13c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_restoreNativeVolume_11262cb68);
  return;
}



/* Entry: 105857930; end: 105857947; -[SCCustomVolumeController onAppDidBecomeActive] */

void FUN_105857930(long param_1)

{
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    *(undefined1 *)(param_1 + 0x2c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be6ed90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__overrideMuteIfNecessary_112579500);
    return;
  }
  return;
}



/* Entry: 105857948; end: 1058579ef; -[SCCustomVolumeController overrideNativeVolumeForObject:shouldOverrideMute:] */

void FUN_105857948(ulong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f0640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(param_3);
  _objc_release(uVar1);
  if ((*(byte *)(param_1 + 0x2b) & 1) == 0) {
    *(byte *)(param_1 + 0x2d) = param_4 ^ 1;
  }
  if ((param_4 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010c0797e0();
    if ((uVar1 & 1) != 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bec0130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startHandlingVolumeButtonEvents_11258d9f0)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec3010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopHandlingVolumeButtonEvents_11258e5a8);
  return;
}



/* Entry: 1058579f0; end: 1058579f7; -[SCCustomVolumeController overrideNativeVolumeForObject:] */

void FUN_1058579f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f02f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_overrideNativeVolumeForObject_sh_112619ad0,param_3,1);
  return;
}



/* Entry: 1058579f8; end: 105857a1b; -[SCCustomVolumeController overrideMuteSwitch] */

void FUN_1058579f8(undefined8 param_1)

{
  func_0x00010be6ed80();
                    /* WARNING: Could not recover jumptable at 0x00010bec3010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopHandlingVolumeButtonEvents_11258e5a8);
  return;
}



/* Entry: 105857a1c; end: 105857a47; -[SCCustomVolumeController overrideMuteSwitchAndPauseMusic] */

void FUN_105857a1c(undefined8 param_1)

{
  func_0x00010be6ed80();
  func_0x00010be70c60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bec3010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopHandlingVolumeButtonEvents_11258e5a8);
  return;
}



/* Entry: 105857a48; end: 105857aff; -[SCCustomVolumeController _shouldUpdateVolume] */

uint FUN_105857a48(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  lVar1 = param_1;
  func_0x00010c0f0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf33240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar5;
    func_0x00010c0720c0(uVar5,param_2,
                        *(undefined8 *)PTR__AVAudioSessionCategoryPlayAndRecord_11034ce30);
    uVar6 = (uint)uVar4 ^ 1;
    _objc_release(uVar5);
  }
  return uVar6;
}



/* Entry: 105857b00; end: 105857c97; -[SCCustomVolumeController _overrideMuteIfNecessary] */

void FUN_105857b00(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if ((*(char *)(param_1 + 0x2d) != '\x01') || (*(char *)(param_1 + 0x2b) == '\x01')) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    lVar1 = param_1;
    func_0x00010bf0eee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      _objc_initWeak(auStack_48,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c0d3ee0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      uVar4 = uVar2;
      func_0x00010bf47660(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16bb00(param_1);
      _objc_release(uVar4);
      _objc_release(lVar3);
      _objc_release(lVar1);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  return;
}



/* Entry: 105857c98; end: 105857ccf;  */

void FUN_105857c98(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be64ca0(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105857cd0; end: 105857d1f; -[SCCustomVolumeController muteButtonPlaybackConfiguration] */

void FUN_105857cd0(void)

{
  _objc_alloc(PTR_PTR_1126b6dd0);
  func_0x00010bffcf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105857d20; end: 105857d8f; -[SCCustomVolumeController _pauseBackgroundMusic] */

void FUN_105857d20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c079600();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      *(undefined1 *)(param_1 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bea65b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__setPlaybackCategoryForBackgroun_112587310);
      return;
    }
  }
  return;
}



/* Entry: 105857d90; end: 105857e73; -[SCCustomVolumeController _setPlaybackCategoryForBackgroundMusicPause] */

void FUN_105857d90(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c17a0c0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105857e74; end: 105857eaf;  */

void FUN_105857e74(long param_1,int param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010bdc48e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105857eb0; end: 105857f7b; -[SCCustomVolumeController _activateAudioSessionForBackgroundMusicPause] */

void FUN_105857eb0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c1624a0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105857f7c; end: 105857fb7;  */

void FUN_105857f7c(long param_1,int param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010bea5ae0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105857fb8; end: 10585809b; -[SCCustomVolumeController _setMixWithOthersCategoryForBackgroundMusicPause] */

void FUN_105857fb8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c17a0c0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10585809c; end: 1058580b3;  */

void FUN_10585809c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1058580b4; end: 10585821f; -[SCCustomVolumeController _stopOverridingMuteIfNecessary] */

void FUN_1058580b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar1 = param_1;
  func_0x00010bf0eee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf0eee0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c1288c0(uVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
    func_0x00010c16bb00(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return;
}



/* Entry: 105858220; end: 105858257;  */

void FUN_105858220(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be64ca0(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105858258; end: 1058582d7; -[SCCustomVolumeController setAudioConfiguration:] */

void FUN_105858258(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = param_1;
  func_0x00010c0797e0(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1b3220(uVar2,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1058582d8; end: 1058582db; -[SCCustomVolumeController volumeButtonPressed] */

void FUN_1058582d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleVolumeButton_11256a6b8);
  return;
}



/* Entry: 1058582dc; end: 1058582eb; -[SCCustomVolumeController _isHandlingVolumeButtonEvents] */

bool FUN_1058582dc(long param_1)

{
  return *(long *)(param_1 + 0x10) != 0;
}



/* Entry: 1058582ec; end: 105858483; -[SCCustomVolumeController _startHandlingVolumeButtonEvents] */

void FUN_1058582ec(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c14cae0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar4;
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = 2;
  func_0x000100029b9c(2,0x11,3,0);
  if (iVar1 == 0) {
    puVar4 = puVar3;
    func_0x00010c14cba0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240(puVar2);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c14cbe0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240(puVar2);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c14cc20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240(puVar4);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105858484; end: 1058585b3; -[SCCustomVolumeController _stopHandlingVolumeButtonEvents] */

void FUN_105858484(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    iVar1 = 2;
    func_0x000100029b9c(2,0x11,3,0);
    puVar5 = puVar3;
    if (iVar1 == 0) {
      puVar4 = puVar3;
      func_0x00010c14cba0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d5c0(puVar2);
      _objc_release(puVar4);
      func_0x00010c14cbe0(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c14cc20(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c12d5c0(puVar2);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14ca60();
    _objc_release(puVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar6);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1058585b4; end: 1058585f7; -[SCCustomVolumeController _handleVolumeButton] */

void FUN_1058585b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010beb7040();
  if ((int)lVar1 != 0) {
    func_0x00010be6ed80(param_1);
    if (*(char *)(param_1 + 0x29) == '\x01') {
      func_0x00010be70c60(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec3010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopHandlingVolumeButtonEvents_11258e5a8);
  return;
}



/* Entry: 1058585f8; end: 1058585fb; -[SCCustomVolumeController _handleVolumeButton:] */

void FUN_1058585f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleVolumeButton_11256a6b8);
  return;
}



/* Entry: 1058585fc; end: 10585860b; -[SCCustomVolumeController addListener:] */

void FUN_1058585fc(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_addObject__11259c1f0);
    return;
  }
  return;
}



/* Entry: 10585860c; end: 10585861b; -[SCCustomVolumeController removeListener:] */

void FUN_10585860c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_removeObject__112628ef8);
    return;
  }
  return;
}



/* Entry: 10585861c; end: 105858727; -[SCCustomVolumeController _notifyListenersOfOverrideChange:] */

long FUN_10585861c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar3 = *plStack_110;
    do {
      lVar4 = 0;
      do {
        if (*plStack_110 != lVar3) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010bf62ba0(*(undefined8 *)(lStack_118 + lVar4 * 8),param_2,param_1,param_3);
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar1;
  }
  ___stack_chk_fail();
  return *(long *)(lVar1 + 0x30);
}



/* Entry: 105858728; end: 10585872f; -[SCCustomVolumeController listeners] */

undefined8 FUN_105858728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105858730; end: 10585875f; -[SCCustomVolumeController setListeners:] */

void FUN_105858730(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105858760; end: 105858767; -[SCCustomVolumeController overridingObjects] */

undefined8 FUN_105858760(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105858768; end: 105858797; -[SCCustomVolumeController setOverridingObjects:] */

void FUN_105858768(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105858798; end: 10585879f; -[SCCustomVolumeController ignoreMuteOverride] */

undefined1 FUN_105858798(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2d);
}



/* Entry: 1058587a0; end: 1058587a7; -[SCCustomVolumeController setIgnoreMuteOverride:] */

void FUN_1058587a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2d) = param_3;
  return;
}



/* Entry: 1058587a8; end: 10585885f; -[SCCustomVolumeController .cxx_destruct] */

void FUN_1058587a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105858860; end: 10585889b; -[SCCustomVolumeEntryPoint _handleDidEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105858860(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272acb8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e27e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10585889c; end: 1058588d7; -[SCCustomVolumeEntryPoint _handleDidBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10585889c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272acb8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e2780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058588d8; end: 105858967; -[SCCustomVolumeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058588d8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272acb0);
  _objc_storeStrong(param_1 + _DAT_11272acc0,0);
  _objc_destroyWeak(param_1 + _DAT_11272acbc);
  _objc_destroyWeak(param_1 + _DAT_11272acb4);
  _objc_destroyWeak(param_1 + _DAT_11272accc);
  _objc_storeStrong(param_1 + _DAT_11272acb8,0);
  _objc_storeStrong(param_1 + _DAT_11272acc8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272acc4,0);
  return;
}



/* Entry: 105858968; end: 1058589eb; -[SCLegacyMediaEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105858968(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf3a660(*(undefined8 *)(param_1 + _DAT_11272acd0));
  puStack_28 = PTR_PTR_1126ea9e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058589ec; end: 1058589fb; -[SCLegacyMediaEntryPoint _didEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058589ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272acd0),PTR_s_removeExpiredMedia_112628ae0);
  return;
}



/* Entry: 1058589fc; end: 105858a6f; -[SCLegacyMediaEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058589fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272ace4,0);
  _objc_destroyWeak(param_1 + _DAT_11272ace0);
  _objc_destroyWeak(param_1 + _DAT_11272acd8);
  _objc_destroyWeak(param_1 + _DAT_11272acdc);
  _objc_storeStrong(param_1 + _DAT_11272acd4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272acd0,0);
  return;
}



/* Entry: 105858a70; end: 105858ac3; -[SCMediaCache runAsynchronouslyOnAFileWriteQueue:] */

void FUN_105858a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bf428;
  _objc_retain(param_3);
  func_0x00010bf04ac0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105858ac4; end: 105858ac7; -[SCMediaCache applicationDidEnterBackground:] */

void FUN_105858ac4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2be150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_writePersistentKeysToDisk_11268d278);
  return;
}



/* Entry: 105858ac8; end: 105858b07; +[SCMediaCache anyWriteFilePerformer] */

void FUN_105858ac8(void)

{
  if (lRam00000001136c0e50 != -1) {
    func_0x00010002a2fc(0x1136c0e50,&PTR___NSConcreteGlobalBlock_1108b83d0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf04a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam00000001136c0e58,PTR_s_anyObject_11259ec30);
  return;
}



/* Entry: 105858b08; end: 105858bd7;  */

void FUN_105858b08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c0e58;
  puRam00000001136c0e58 = puVar2;
  _objc_release(uVar1);
  iVar4 = 5;
  do {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc(PTR_PTR_1126ae790);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f302dba);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520(puVar2,param_2,puVar3,0x11,0,5);
    _objc_release(puVar3);
    func_0x00010befa120(puRam00000001136c0e58,param_2,puVar2);
    _objc_release(puVar2);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}



/* Entry: 105858bd8; end: 105858d17; -[SCMediaCache sc_writeToFile:alreadyEncrypted:key:dictionary:] */

void FUN_105858bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_1;
  func_0x00010c086e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105858d18;
  puStack_70 = &UNK_110878f70;
  uStack_68 = param_1;
  uStack_60 = param_5;
  uStack_58 = param_6;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c1426c0(param_1,param_2,&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105858d18; end: 105859223;  */

void FUN_105858d18(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c296640(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x30) != 0);
  uVar10 = *(ulong *)(param_1 + 0x20);
  if ((uVar1 & 1) == 0) {
    func_0x00010bf0e840();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf26b60();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar10;
    func_0x00010bf93820();
    if ((int)uVar1 == 0) {
LAB_105858fc8:
      uVar1 = uVar10;
      func_0x00010bf93820();
      if ((uVar1 & 1) != 0) {
        puVar7 = *(undefined **)(param_1 + 0x30);
        if (puVar7 == (undefined *)0x0) {
          puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010c156d80();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010c156d80();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = *(undefined **)(param_1 + 0x30);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar11 = (undefined *)0x0;
        goto LAB_105859068;
      }
      puVar11 = (undefined *)0x0;
LAB_1058590a4:
      puVar16 = *(undefined **)(param_1 + 0x38);
      _objc_retain(puVar16);
      puVar7 = (undefined *)0x0;
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = *(undefined **)(param_1 + 0x30);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010bf1f3c0();
      _objc_release();
      if ((int)puVar7 == 0) goto LAB_105858fc8;
      func_0x0001000882bc();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar5;
      func_0x00010bf3cd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      uVar1 = uVar10;
      func_0x00010bf93820();
      if ((uVar1 & 1) == 0) goto LAB_1058590a4;
      puVar7 = puVar11;
      func_0x00010bf93ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar11;
      func_0x00010c0646e0();
      _objc_retainAutoreleasedReturnValue();
LAB_105859068:
      puVar16 = *(undefined **)(param_1 + 0x38);
      if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
        func_0x00010c156ce0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar16);
      }
    }
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar12);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar8);
    _objc_retain(puVar5);
    _objc_retain(puVar7);
    _objc_retain(puVar11);
    _objc_retain(uVar10);
    _objc_retain(uVar4);
    _objc_retain(puVar16);
    func_0x00010c1426e0(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar4);
    _objc_release(puVar16);
    _objc_release(puVar5);
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar4);
  }
  else {
    _objc_retain(uVar10);
    _objc_sync_enter(uVar10);
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf0e840();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfacf40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf26b60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19bb20(lVar2);
      _objc_release(uVar4);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c086e20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
    _objc_release(uVar4);
    puVar5 = *(undefined **)(param_1 + 0x20);
    func_0x00010c2be7a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2be7a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
    _objc_release(uVar4);
    _objc_release(lVar2);
    _objc_sync_exit(uVar10);
    _objc_release(uVar10);
    if (puVar7 == (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      goto LAB_1058591c4;
    }
    _objc_retain(puVar7);
    puVar5 = puVar7;
    func_0x00010bf52a60();
    uVar1 = uRam0000000000000000;
    while (puVar16 = puVar7, puVar5 != (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
      do {
        if (uRam0000000000000000 != uVar1) {
          _objc_enumerationMutation(puVar7);
        }
        (**(code **)(*(long *)((long)puVar11 * 8) + 0x10))(*(long *)((long)puVar11 * 8),1);
        puVar11 = puVar11 + 1;
      } while (puVar5 != puVar11);
      puVar5 = puVar7;
      func_0x00010bf52a60();
      uVar10 = uVar1;
    }
  }
  _objc_release(puVar7);
LAB_1058591c4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(uVar10);
  __Unwind_Resume();
  func_0x00010c14e040();
  _objc_retain(0);
  uVar4 = *(undefined8 *)(puVar16 + 0x28);
  uVar8 = *(undefined8 *)(puVar16 + 0x30);
  _objc_retain(uVar4);
  uVar17 = *(undefined8 *)(puVar16 + 0x38);
  _objc_retain(*(undefined8 *)(puVar16 + 0x38));
  uVar12 = *(undefined8 *)(puVar16 + 0x40);
  _objc_retain(uVar12);
  uVar13 = *(undefined8 *)(puVar16 + 0x48);
  _objc_retain(uVar13);
  uVar14 = *(undefined8 *)(puVar16 + 0x50);
  _objc_retain(uVar14);
  uVar15 = *(undefined8 *)(puVar16 + 0x58);
  _objc_retain(uVar15);
  uVar9 = *(undefined8 *)(puVar16 + 0x60);
  _objc_retain(uVar9);
  _objc_retain(0);
  func_0x00010c1426c0(uVar8);
  _objc_release(0);
  _objc_release(uVar9);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar17);
  _objc_release(uVar4);
  _objc_release(0);
  return;
}



/* Entry: 105859224; end: 105859383;  */

void FUN_105859224(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = 0;
  func_0x00010c14e040(uVar3,param_2,*(undefined8 *)(param_1 + 0x28),1,&uStack_38);
  uVar2 = uStack_38;
  _objc_retain(uStack_38);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105859384;
  puStack_90 = &UNK_1108b83f0;
  uStack_40 = (undefined1)uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_88 = uVar3;
  _objc_retain(*(undefined8 *)(param_1 + 0x38));
  uStack_3f = *(undefined1 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_80 = uVar4;
  uStack_78 = uVar5;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uStack_70 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uStack_68 = uVar4;
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uStack_60 = uVar3;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uStack_58 = uVar4;
  _objc_retain(uVar3);
  uStack_48 = uVar2;
  uStack_50 = uVar3;
  _objc_retain(uVar2);
  func_0x00010c1426c0(uVar1,param_2,&puStack_a8);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_88);
  _objc_release(uVar2);
  return;
}



/* Entry: 105859384; end: 1058596c7;  */

void FUN_105859384(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar1 = *(char *)(param_1 + 0x68);
  if (cVar1 == '\x01') {
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befb520();
    _objc_release(puVar5);
    lVar9 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar9);
    _objc_sync_enter(lVar9);
    func_0x00010c19bb20(*(undefined8 *)(param_1 + 0x30));
    iVar3 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010bf93820();
    if (iVar3 != 0) {
      if (*(char *)(param_1 + 0x69) == '\x01') {
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010bfe5ec0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c17cbc0(*(undefined8 *)(param_1 + 0x30));
        _objc_release(uVar4);
      }
      else if (*(long *)(param_1 + 0x40) == 0) {
        func_0x00010c195ce0(*(undefined8 *)(param_1 + 0x30));
        func_0x00010c1acfc0(*(undefined8 *)(param_1 + 0x30));
      }
    }
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c086e20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
    _objc_release(uVar4);
    lVar7 = *(long *)(param_1 + 0x28);
    func_0x00010c2be7a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2be7a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    if (lRam00000001136c0e68 != -1) {
      func_0x00010002a2fc(0x1136c0e68,&PTR___NSConcreteGlobalBlock_1108b8450);
    }
    func_0x00010bfacbe0(puVar5);
    _objc_release(puVar5);
    lVar9 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar9);
    _objc_sync_enter(lVar9);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c086e20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
    _objc_release(uVar4);
    lVar7 = *(long *)(param_1 + 0x28);
    func_0x00010c2be7a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2be7a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
  }
  _objc_release(uVar4);
  _objc_sync_exit(lVar9);
  _objc_release(lVar9);
  if (lVar6 != 0) {
    _objc_retain(lVar6);
    lVar7 = lVar6;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar7 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar6);
        }
        (**(code **)(*(long *)(lVar9 * 8) + 0x10))(*(long *)(lVar9 * 8),cVar1);
        lVar9 = lVar9 + 1;
      } while (lVar7 != lVar9);
      lVar7 = lVar6;
      func_0x00010bf52a60();
      lVar9 = lVar2;
    }
    _objc_release(lVar6);
  }
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(lVar9);
  __Unwind_Resume(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bf4b510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1058596c8; end: 1058596cf; -[SCMediaCache contains:] */

void FUN_1058596c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_contains_cacheOnly__1125b06e8,param_3,0);
  return;
}



/* Entry: 1058596d0; end: 1058596d7; -[SCMediaCache contains:cacheOnly:] */

void FUN_1058596d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_contains_cacheOnly_quickCheck__1125b06f0,param_3,param_4,0);
  return;
}



/* Entry: 1058596d8; end: 1058597e7; -[SCMediaCache contains:cacheOnly:quickCheck:] */

ulong FUN_1058596d8(ulong param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    puStack_48 = PTR_PTR_1126ea9f0;
    uStack_50 = param_1;
    _objc_msgSendSuper2(&uStack_50,PTR_s_objectForKey__1126159e0,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar3 = (ulong)(puVar1 != (ulong *)0x0);
    if (((param_4 & 1) == 0) && (puVar1 == (ulong *)0x0)) {
      _objc_retain(param_1);
      _objc_sync_enter(param_1);
      uVar2 = param_1;
      func_0x00010bf0e840();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_sync_exit(param_1);
      _objc_release(param_1);
      uVar3 = (ulong)(uVar2 != 0);
      if (((param_5 & 1) == 0) && (uVar2 != 0)) {
        func_0x00010c0dfe20(param_1);
        uVar3 = param_1;
      }
    }
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1058597e8; end: 10585984f; -[SCMediaCache objectExistsOnDiskForKey:] */

undefined * FUN_1058597e8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010bf26b60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfacbe0();
  _objc_release(puVar1);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 105859850; end: 1058598ff; -[SCMediaCache validCacheObjectExistsOnDiskForKey:selfEncrypted:] */

long FUN_105859850(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  if ((param_4 & 1) == 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    lVar1 = param_1;
    func_0x00010bf0e840(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    if (lVar1 == 0) {
      param_1 = 0;
      goto LAB_1058598c8;
    }
  }
  func_0x00010c0dfe20(param_1,param_2,param_3);
LAB_1058598c8:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105859900; end: 1058599f3; -[SCMediaCache prefetchObjectForKey:dictionary:] */

void FUN_105859900(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    puStack_38 = PTR_PTR_1126ea9f0;
    puVar1 = &uStack_40;
    uStack_40 = param_1;
    _objc_msgSendSuper2(puVar1,PTR_s_objectForKey__1126159e0,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined8 *)0x0) {
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c1426c0(param_1);
      _objc_release(param_4);
      _objc_release(param_3);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058599f4; end: 105859a67;  */

void FUN_1058599f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c296640(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x30) != 0);
  if ((int)uVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf63b60(lVar2,param_2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010c1d0520(*(undefined8 *)(param_1 + 0x20),param_2,lVar2,0,
                          *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 105859a68; end: 105859bc3; -[SCMediaCache processObjectForKey:dictionary:completionQueue:block:] */

void FUN_105859a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010bf4b500();
  if ((int)uVar1 == 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010c1426c0(param_1);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    param_1 = param_3;
  }
  else {
    func_0x00010c0dffc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,param_1,1);
  }
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105859bc4; end: 105859d6f;  */

void FUN_105859bc4(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_90;
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105859d70;
  puStack_78 = &UNK_110860440;
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar2;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = uVar3;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = uVar2;
  _objc_retain(uVar3);
  uStack_58 = uVar3;
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  _objc_sync_enter(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c086e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf4b900();
  _objc_release(uVar3);
  if ((int)uVar2 == 0) {
    _objc_sync_exit(uVar4);
    _objc_release(uVar4);
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1,1);
  }
  else {
    func_0x00010bef7440(*(undefined8 *)(param_1 + 0x20));
    _objc_sync_exit(uVar4);
    _objc_release(uVar4);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105859d70; end: 105859e2f;  */

void FUN_105859d70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c0dffc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105859e30;
  puStack_48 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  lStack_40 = lVar4;
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  _objc_retain(lVar4);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(lStack_40);
  _objc_release(lVar4);
  return;
}



/* Entry: 105859e30; end: 105859e4b;  */

void FUN_105859e30(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105859e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(long *)(param_1 + 0x20),1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105859e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,0,0);
  return;
}



/* Entry: 105859e4c; end: 10585a1e7; -[SCMediaCache dataFromDiskForKey:dictionary:] */

void FUN_105859e4c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010bf0e840(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
LAB_10585a198:
    puVar7 = (undefined *)0x0;
    goto LAB_10585a1b4;
  }
  puVar2 = puVar1;
  func_0x00010bf93820();
  puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
  if (((ulong)puVar2 & 1) == 0) {
    func_0x00010bf26b60(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64aa0(puVar7,param_2,param_1,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar7 = puVar1;
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) {
LAB_105859fac:
      puVar7 = puVar1;
      func_0x00010bf3cd60();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar7;
      _objc_release();
      if (puVar7 == (undefined *)0x0) {
        if (param_4 == (undefined *)0x0) goto LAB_10585a198;
        puVar4 = param_4;
        func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110ea22b8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_4;
        func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110dc1778);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf26b60(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf64aa0(puVar7,param_2,param_1,0,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
        puVar6 = puVar4;
        puVar2 = puVar5;
        puVar3 = puVar7;
        if (puVar7 == (undefined *)0x0) {
          _objc_release(puVar5);
          goto LAB_10585a1a8;
        }
        goto LAB_10585a174;
      }
      func_0x0001000882bc();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bf3cd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar7 = puVar4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf3cd60(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar7;
      func_0x00010c0720c0(puVar7,param_2,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar7);
      puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
      if ((int)puVar5 == 0) {
LAB_10585a1a8:
        puVar7 = (undefined *)0x0;
        param_1 = puVar4;
        goto LAB_10585a1ac;
      }
      func_0x00010bf26b60(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64aa0(puVar2,param_2,param_1,0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      if (puVar2 == (undefined *)0x0) goto LAB_10585a1a8;
      puVar3 = puVar4;
      func_0x00010bf93ec0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0646e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010c156c60(puVar2,param_2,puVar3,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    else {
      puVar2 = puVar1;
      func_0x00010c0646e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
      if (puVar2 == (undefined *)0x0) goto LAB_105859fac;
      func_0x00010bf26b60(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64aa0(puVar7,param_2,param_1,0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      if (puVar7 == (undefined *)0x0) goto LAB_10585a198;
      puVar4 = puVar1;
      func_0x00010bf93ec0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010c0646e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar7;
      puVar2 = puVar4;
      puVar3 = puVar5;
LAB_10585a174:
      func_0x00010c156c60(puVar7,param_2,puVar4,puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    param_1 = puVar4;
  }
LAB_10585a1ac:
  _objc_release(param_1);
LAB_10585a1b4:
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10585a1e8; end: 10585a3a7; -[SCMediaCache objectForKey:dictionary:] */

void FUN_10585a1e8(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar1 = &puStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puStack_48 = PTR_PTR_1126ea9f0;
    puStack_50 = param_1;
    _objc_msgSendSuper2(&puStack_50,PTR_s_objectForKey__1126159e0,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar1 == (undefined1 **)0x0) {
      puVar3 = param_1;
      func_0x00010c296640();
      if (((ulong)puVar3 & 1) == 0) {
        _objc_retain(param_1);
        _objc_sync_enter(param_1);
        puVar3 = param_1;
        func_0x00010bf0e700(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0();
        _objc_release(puVar3);
        _objc_sync_exit(param_1);
        _objc_release(param_1);
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = param_1;
        func_0x00010bf63b60();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 == (undefined1 *)0x0) {
          _objc_retain(param_1);
          _objc_sync_enter(param_1);
          puVar2 = param_1;
          func_0x00010bf0e700(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d3e0();
          _objc_release(puVar2);
          _objc_sync_exit(param_1);
          _objc_release(param_1);
        }
        else {
          func_0x00010c1d0520(param_1);
          _objc_retain(puVar3);
        }
        _objc_release(puVar3);
      }
    }
    else {
      _objc_retain(ppuVar1);
      puVar3 = (undefined1 *)ppuVar1;
    }
    _objc_release(ppuVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10585a3a8; end: 10585a3ab; -[SCMediaCache setObject:forKey:] */

void FUN_10585a3a8(void)

{
  return;
}



/* Entry: 10585a3ac; end: 10585a52b; -[SCMediaCache setObject:encryptedObject:forKey:dictionary:] */

void FUN_10585a3ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_3 != 0) && (param_5 != 0)) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    uVar1 = param_1;
    func_0x00010bf0e840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93820();
    func_0x00010c14e000(param_1);
    uVar2 = param_1;
    func_0x00010c0e03c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    puStack_58 = PTR_PTR_1126ea9f0;
    uStack_60 = param_1;
    _objc_msgSendSuper2(&uStack_60,PTR_s_setObject_forKey__112651b80,param_3,param_5);
    puStack_68 = PTR_PTR_1126ea9f0;
    uStack_70 = param_1;
    _objc_msgSendSuper2(&uStack_70,PTR_s_objectForKey__1126159e0,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10585a52c; end: 10585a673; -[SCMediaCache setObject:encryptedObject:forKey:persist:encrypt:dictionary:] */

void FUN_10585a52c(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  if ((param_3 != 0) && (param_5 != 0)) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    puVar1 = param_1;
    func_0x00010bf0e840(param_1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126bf438;
      _objc_alloc(PTR_PTR_1126bf438);
      func_0x00010c020ca0();
      puVar2 = param_1;
      func_0x00010bf0e700(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    func_0x00010c1d0520(param_1,param_2,param_3,param_4,param_5,param_8);
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10585a674; end: 10585a7df; -[SCMediaCache removeObjectForKey:] */

void FUN_10585a674(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ea9f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_removeObjectForKey__112628f18,param_3);
  if ((param_3 != 0) && (lVar1 = param_3, func_0x00010c08fa60(), lVar1 != 0)) {
    uVar2 = param_1;
    func_0x00010bf26b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    uVar3 = param_1;
    func_0x00010bf0e700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar2);
    _objc_retain(puVar4);
    func_0x00010c1426e0(param_1);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10585a7e0; end: 10585a8a7;  */

void FUN_10585a7e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf0e880();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfacae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puVar4 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010c070260(PTR__OBJC_CLASS___NSDate_1126ae770,param_2,puVar4,
                        *(undefined8 *)(param_1 + 0x28));
    if ((int)puVar3 == 0) goto LAB_10585a884;
  }
  uStack_38 = 0;
  func_0x00010c12cc40(puVar2,param_2,*(undefined8 *)(param_1 + 0x20),&uStack_38);
  uVar1 = uStack_38;
  _objc_retain(uStack_38);
  _objc_release(uVar1);
LAB_10585a884:
  _objc_release(puVar4);
  _objc_release(puVar2);
  return;
}



/* Entry: 10585a8a8; end: 10585abff; -[SCMediaCache removeExpiredMedia] */

void FUN_10585a8a8(undefined **param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined **unaff_x24;
  long lVar13;
  undefined **unaff_x25;
  undefined *puVar14;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined *puStack_680;
  undefined8 uStack_678;
  code *pcStack_670;
  undefined *puStack_668;
  undefined8 uStack_660;
  undefined8 *puStack_658;
  undefined **ppuStack_650;
  undefined *puStack_648;
  undefined8 ***pppuStack_640;
  code *pcStack_638;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  long *plStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  long lStack_558;
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  undefined **ppuStack_538;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined1 ***pppuStack_510;
  code *pcStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_428;
  undefined **ppuStack_420;
  undefined8 uStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined1 **ppuStack_3d0;
  undefined8 uStack_3c8;
  undefined *puStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  undefined8 *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined **ppuStack_358;
  long lStack_2d0;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined1 *puStack_298;
  undefined8 uStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined *puStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0xffffffffffff8000;
  func_0x0001000819a8(0xffffffffffff8000,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_10585ac00;
  puStack_190 = &UNK_110842e18;
  _objc_retain(puVar1);
  puStack_188 = puVar1;
  func_0x00010007380c(uVar2,&puStack_1a8);
  _objc_release(uVar2);
  ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  puStack_1e0 = (undefined8 *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  ppuVar3 = param_1;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x28 = (undefined **)*puStack_1e0;
    do {
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_1e0 != unaff_x28) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x24 = *(undefined ***)(lStack_1e8 + (long)unaff_x27 * 8);
        unaff_x25 = param_1;
        func_0x00010c086e20();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = unaff_x25;
        func_0x00010bf4b900();
        _objc_release(unaff_x25);
        if (((ulong)unaff_x26 & 1) == 0) {
          func_0x00010befa120(ppuVar11);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar4 != unaff_x27);
      ppuVar4 = ppuVar3;
      func_0x00010bf52a60();
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  puStack_220 = (undefined8 *)0x0;
  _objc_retain(ppuVar11);
  ppuVar3 = ppuVar11;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_220;
    do {
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_220 != unaff_x25) {
          _objc_enumerationMutation(ppuVar11);
        }
        unaff_x24 = *(undefined ***)(lStack_228 + (long)unaff_x26 * 8);
        ppuVar4 = param_1;
        func_0x00010bf0e700(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0();
        _objc_release(ppuVar4);
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar3 != unaff_x26);
      ppuVar3 = ppuVar11;
      func_0x00010bf52a60();
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar11);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  uVar2 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_258 = 0xc2000000;
  uStack_250 = 0x10585aeb4;
  puStack_248 = &UNK_110841f80;
  ppuStack_240 = ppuVar11;
  ppuStack_238 = param_1;
  _objc_retain(ppuVar11);
  func_0x00010007380c(uVar2,&puStack_260);
  _objc_release(uVar2);
  _objc_release(ppuStack_240);
  _objc_release(ppuVar11);
  _objc_release(puStack_188);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  puVar8 = puVar1;
  __Unwind_Resume();
  pcStack_268 = FUN_10585ac00;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSFileManager_1126aff20;
  puStack_3b8 = puVar8;
  ppuStack_2c0 = unaff_x28;
  ppuStack_2b8 = unaff_x27;
  ppuStack_2b0 = unaff_x26;
  ppuStack_2a8 = unaff_x25;
  ppuStack_2a0 = unaff_x24;
  puStack_298 = (undefined1 *)&puStack_260;
  uStack_290 = uVar2;
  ppuStack_288 = ppuVar11;
  ppuStack_280 = param_1;
  puStack_278 = puVar1;
  puStack_270 = &stack0xfffffffffffffff0;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001136c0e68 != -1) {
    func_0x00010002a2fc(0x1136c0e68,&PTR___NSConcreteGlobalBlock_1108b8450);
  }
  ppuVar11 = ppuRam00000001136c0e60;
  ppuStack_358 = (undefined **)0x0;
  _objc_retain(ppuRam00000001136c0e60);
  ppuVar4 = ppuVar3;
  func_0x00010bf4dfc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuStack_358;
  _objc_retain(ppuStack_358);
  _objc_release(ppuVar11);
  if (ppuVar10 == (undefined **)0x0) {
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    lStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    puStack_390 = (undefined8 *)0x0;
    _objc_retain(ppuVar4);
    ppuVar5 = ppuVar4;
    func_0x00010bf52a60();
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar10 = (undefined **)0x0;
    }
    else {
      ppuVar10 = (undefined **)0x0;
      ppuVar11 = &PTR____CFConstantStringClassReference_110e08b98;
      unaff_x26 = (undefined **)*puStack_390;
      ppuStack_3b0 = ppuVar4;
      do {
        param_1 = (undefined **)0x0;
        ppuVar9 = ppuVar10;
        do {
          if ((undefined **)*puStack_390 != unaff_x26) {
            _objc_enumerationMutation(ppuVar4);
          }
          unaff_x28 = *(undefined ***)(lStack_398 + (long)param_1 * 8);
          ppuVar6 = unaff_x28;
          func_0x00010c0720c0();
          lVar13 = lRam00000001136c0e68;
          ppuVar10 = ppuVar9;
          if (((ulong)ppuVar6 & 1) == 0) {
            _objc_retain(unaff_x28);
            if (lVar13 != -1) {
              func_0x00010002a2fc(0x1136c0e68,&PTR___NSConcreteGlobalBlock_1108b8450);
            }
            ppuVar4 = ppuRam00000001136c0e60;
            func_0x00010c25ce00(ppuRam00000001136c0e60);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x28);
            unaff_x25 = ppuVar3;
            func_0x00010bf0e880();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = unaff_x25;
            func_0x00010bfacae0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x25);
            if ((unaff_x28 == (undefined **)0x0) ||
               (puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770, func_0x00010c070260(), (int)puVar1 != 0
               )) {
              ppuStack_3a8 = ppuVar9;
              func_0x00010c12cc40(ppuVar3);
              ppuVar10 = ppuStack_3a8;
              _objc_retain(ppuStack_3a8);
              _objc_release(ppuVar9);
              unaff_x25 = ppuVar10;
            }
            _objc_release(unaff_x28);
            _objc_release(ppuVar4);
            ppuVar4 = ppuStack_3b0;
          }
          param_1 = (undefined **)((long)param_1 + 1);
          ppuVar9 = ppuVar10;
        } while (ppuVar5 != param_1);
        ppuVar5 = ppuVar4;
        func_0x00010bf52a60();
      } while (ppuVar5 != (undefined **)0x0);
      unaff_x24 = (undefined **)0x0;
    }
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar4);
  _objc_release(ppuVar10);
  ppuVar5 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d0) {
    ___stack_chk_fail();
    uStack_418 = 0x1136c0000;
    uStack_3c8 = 0x10585aeb4;
    lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_4d8 = 0;
    puStack_4e0 = (undefined8 *)0x0;
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    ppuVar9 = (undefined **)ppuVar5[4];
    ppuStack_420 = unaff_x28;
    ppuStack_410 = unaff_x26;
    ppuStack_408 = unaff_x25;
    ppuStack_400 = unaff_x24;
    ppuStack_3f8 = ppuVar11;
    ppuStack_3f0 = ppuVar10;
    ppuStack_3e8 = ppuVar4;
    ppuStack_3e0 = param_1;
    ppuStack_3d8 = ppuVar3;
    ppuStack_3d0 = &puStack_270;
    _objc_retain(ppuVar9);
    ppuVar3 = ppuVar9;
    func_0x00010bf52a60();
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar11 = (undefined **)*puStack_4e0;
      unaff_x24 = &PTR_s_remixExportItem_112628000;
      unaff_x25 = &PTR_PTR_1126ea000;
      do {
        ppuVar10 = (undefined **)PTR_s_removeObjectForKey__112628f18;
        unaff_x26 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_4e0 != ppuVar11) {
            _objc_enumerationMutation(ppuVar9);
          }
          puStack_500 = ppuVar5[5];
          puStack_4f8 = PTR_PTR_1126ea9f0;
          _objc_msgSendSuper2(&puStack_500,ppuVar10,
                              *(undefined8 *)(lStack_4e8 + (long)unaff_x26 * 8));
          unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        } while (ppuVar3 != unaff_x26);
        ppuVar3 = ppuVar9;
        func_0x00010bf52a60();
        ppuVar4 = (undefined **)0x0;
      } while (ppuVar3 != (undefined **)0x0);
    }
    ppuVar3 = ppuVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
      return;
    }
    ___stack_chk_fail();
    pcStack_508 = FUN_10585afd8;
    lStack_558 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_618 = 0;
    uStack_620 = 0;
    uStack_608 = 0;
    plStack_610 = (long *)0x0;
    uStack_5f8 = 0;
    uStack_600 = 0;
    uStack_5e8 = 0;
    uStack_5f0 = 0;
    puVar8 = ppuVar3[4];
    ppuStack_550 = unaff_x26;
    ppuStack_548 = unaff_x25;
    ppuStack_540 = unaff_x24;
    ppuStack_538 = ppuVar11;
    ppuStack_530 = ppuVar10;
    ppuStack_528 = ppuVar4;
    ppuStack_520 = ppuVar9;
    ppuStack_518 = ppuVar5;
    pppuStack_510 = &ppuStack_3d0;
    _objc_retain(puVar8);
    puVar7 = &uStack_620;
    puVar1 = puVar8;
    func_0x00010bf52a60();
    if (puVar1 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      lVar13 = *plStack_610;
      do {
        puVar14 = (undefined *)0x0;
        uVar12 = uVar2;
        do {
          if (*plStack_610 != lVar13) {
            _objc_enumerationMutation(puVar8);
          }
          uStack_628 = uVar12;
          func_0x00010c12cc40(ppuVar3[5]);
          uVar2 = uStack_628;
          _objc_retain(uStack_628);
          _objc_release(uVar12);
          puVar14 = puVar14 + 1;
          uVar12 = uVar2;
        } while (puVar1 != puVar14);
        puVar7 = &uStack_620;
        puVar1 = puVar8;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(puVar8);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_558) {
      ___stack_chk_fail();
      ppuVar11 = &puStack_680;
      pcStack_638 = FUN_10585b110;
      ppuStack_650 = ppuVar3;
      puStack_648 = puVar8;
      pppuStack_640 = &pppuStack_510;
      _objc_retain(puVar7);
      puStack_680 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_678 = 0xc2000000;
      pcStack_670 = FUN_10585b198;
      puStack_668 = &UNK_110848bd8;
      uStack_660 = uVar2;
      puStack_658 = puVar7;
      _objc_retain(puVar7);
      _objc_retainBlock(&puStack_680);
      _objc_release(puStack_658);
      _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10585ac00; end: 10585afd7;  */

void FUN_10585ac00(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined **unaff_x20;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined **unaff_x24;
  long lVar15;
  undefined **unaff_x25;
  long lVar16;
  undefined *unaff_x26;
  undefined **unaff_x28;
  undefined *puStack_420;
  undefined8 uStack_418;
  code *pcStack_410;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined8 *puStack_3f8;
  undefined *puStack_3f0;
  long lStack_3e8;
  undefined1 ***pppuStack_3e0;
  code *pcStack_3d8;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_2f8;
  undefined *puStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined *puStack_2c0;
  undefined **ppuStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_1c8;
  undefined **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSFileManager_1126aff20;
  uStack_158 = param_1;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001136c0e68 != -1) {
    func_0x00010002a2fc(0x1136c0e68,&PTR___NSConcreteGlobalBlock_1108b8450);
  }
  ppuVar13 = ppuRam00000001136c0e60;
  ppuStack_f8 = (undefined **)0x0;
  _objc_retain(ppuRam00000001136c0e60);
  ppuVar2 = ppuVar1;
  func_0x00010bf4dfc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuStack_f8;
  _objc_retain(ppuStack_f8);
  _objc_release(ppuVar13);
  if (ppuVar10 == (undefined **)0x0) {
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(ppuVar2);
    ppuVar3 = ppuVar2;
    func_0x00010bf52a60();
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar10 = (undefined **)0x0;
    }
    else {
      ppuVar10 = (undefined **)0x0;
      ppuVar13 = &PTR____CFConstantStringClassReference_110e08b98;
      unaff_x26 = (undefined *)*plStack_130;
      ppuStack_150 = ppuVar2;
      do {
        unaff_x20 = (undefined **)0x0;
        ppuVar11 = ppuVar10;
        do {
          if ((undefined *)*plStack_130 != unaff_x26) {
            _objc_enumerationMutation(ppuVar2);
          }
          unaff_x28 = *(undefined ***)(lStack_138 + (long)unaff_x20 * 8);
          ppuVar4 = unaff_x28;
          func_0x00010c0720c0();
          lVar6 = lRam00000001136c0e68;
          ppuVar10 = ppuVar11;
          if (((ulong)ppuVar4 & 1) == 0) {
            _objc_retain(unaff_x28);
            if (lVar6 != -1) {
              func_0x00010002a2fc(0x1136c0e68,&PTR___NSConcreteGlobalBlock_1108b8450);
            }
            ppuVar2 = ppuRam00000001136c0e60;
            func_0x00010c25ce00(ppuRam00000001136c0e60);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x28);
            unaff_x25 = ppuVar1;
            func_0x00010bf0e880();
            _objc_retainAutoreleasedReturnValue();
            unaff_x28 = unaff_x25;
            func_0x00010bfacae0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x25);
            if ((unaff_x28 == (undefined **)0x0) ||
               (puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770, func_0x00010c070260(), (int)puVar5 != 0
               )) {
              ppuStack_148 = ppuVar11;
              func_0x00010c12cc40(ppuVar1);
              ppuVar10 = ppuStack_148;
              _objc_retain(ppuStack_148);
              _objc_release(ppuVar11);
              unaff_x25 = ppuVar10;
            }
            _objc_release(unaff_x28);
            _objc_release(ppuVar2);
            ppuVar2 = ppuStack_150;
          }
          unaff_x20 = (undefined **)((long)unaff_x20 + 1);
          ppuVar11 = ppuVar10;
        } while (ppuVar3 != unaff_x20);
        ppuVar3 = ppuVar2;
        func_0x00010bf52a60();
      } while (ppuVar3 != (undefined **)0x0);
      unaff_x24 = (undefined **)0x0;
    }
    _objc_release(ppuVar2);
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar10);
  ppuVar3 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uStack_1b8 = 0x1136c0000;
    uStack_168 = 0x10585aeb4;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    puStack_280 = (undefined8 *)0x0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    puVar9 = ppuVar3[4];
    ppuStack_1c0 = unaff_x28;
    puStack_1b0 = unaff_x26;
    ppuStack_1a8 = unaff_x25;
    ppuStack_1a0 = unaff_x24;
    ppuStack_198 = ppuVar13;
    ppuStack_190 = ppuVar10;
    ppuStack_188 = ppuVar2;
    ppuStack_180 = unaff_x20;
    ppuStack_178 = ppuVar1;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_retain(puVar9);
    puVar5 = puVar9;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      ppuVar13 = (undefined **)*puStack_280;
      unaff_x24 = &PTR_s_remixExportItem_112628000;
      unaff_x25 = &PTR_PTR_1126ea000;
      do {
        ppuVar10 = (undefined **)PTR_s_removeObjectForKey__112628f18;
        unaff_x26 = (undefined *)0x0;
        do {
          if ((undefined **)*puStack_280 != ppuVar13) {
            _objc_enumerationMutation(puVar9);
          }
          puStack_2a0 = ppuVar3[5];
          puStack_298 = PTR_PTR_1126ea9f0;
          _objc_msgSendSuper2(&puStack_2a0,ppuVar10,
                              *(undefined8 *)(lStack_288 + (long)unaff_x26 * 8));
          unaff_x26 = unaff_x26 + 1;
        } while (puVar5 != unaff_x26);
        puVar5 = puVar9;
        func_0x00010bf52a60();
        ppuVar2 = (undefined **)0x0;
      } while (puVar5 != (undefined *)0x0);
    }
    puVar5 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
      ___stack_chk_fail();
      pcStack_2a8 = FUN_10585afd8;
      lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3a8 = 0;
      plStack_3b0 = (long *)0x0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      uStack_388 = 0;
      uStack_390 = 0;
      lVar8 = *(long *)(puVar5 + 0x20);
      puStack_2f0 = unaff_x26;
      ppuStack_2e8 = unaff_x25;
      ppuStack_2e0 = unaff_x24;
      ppuStack_2d8 = ppuVar13;
      ppuStack_2d0 = ppuVar10;
      ppuStack_2c8 = ppuVar2;
      puStack_2c0 = puVar9;
      ppuStack_2b8 = ppuVar3;
      ppuStack_2b0 = &puStack_170;
      _objc_retain(lVar8);
      puVar7 = &uStack_3c0;
      lVar6 = lVar8;
      func_0x00010bf52a60();
      if (lVar6 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        lVar15 = *plStack_3b0;
        do {
          lVar16 = 0;
          uVar14 = uVar12;
          do {
            if (*plStack_3b0 != lVar15) {
              _objc_enumerationMutation(lVar8);
            }
            uStack_3c8 = uVar14;
            func_0x00010c12cc40(*(undefined8 *)(puVar5 + 0x28));
            uVar12 = uStack_3c8;
            _objc_retain(uStack_3c8);
            _objc_release(uVar14);
            lVar16 = lVar16 + 1;
            uVar14 = uVar12;
          } while (lVar6 != lVar16);
          puVar7 = &uStack_3c0;
          lVar6 = lVar8;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
      }
      _objc_release(lVar8);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
        ___stack_chk_fail();
        ppuVar1 = &puStack_420;
        pcStack_3d8 = FUN_10585b110;
        puStack_3f0 = puVar5;
        lStack_3e8 = lVar8;
        pppuStack_3e0 = &ppuStack_2b0;
        _objc_retain(puVar7);
        puStack_420 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_418 = 0xc2000000;
        pcStack_410 = FUN_10585b198;
        puStack_408 = &UNK_110848bd8;
        uStack_400 = uVar12;
        puStack_3f8 = puVar7;
        _objc_retain(puVar7);
        _objc_retainBlock(&puStack_420);
        _objc_release(puStack_3f8);
        _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10585afd8; end: 10585b10f;  */

void FUN_10585afd8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  puVar3 = &uStack_120;
  lVar1 = lVar4;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      uVar6 = uVar5;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar4);
        }
        uStack_128 = uVar6;
        func_0x00010c12cc40(*(undefined8 *)(param_1 + 0x28),param_2,
                            *(undefined8 *)(lStack_118 + lVar8 * 8),&uStack_128);
        uVar5 = uStack_128;
        _objc_retain(uStack_128);
        _objc_release(uVar6);
        lVar8 = lVar8 + 1;
        uVar6 = uVar5;
      } while (lVar1 != lVar8);
      puVar3 = &uStack_120;
      lVar1 = lVar4;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    ppuVar2 = &puStack_180;
    pcStack_138 = FUN_10585b110;
    lStack_150 = param_1;
    lStack_148 = lVar4;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar3);
    puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_10585b198;
    puStack_168 = &UNK_110848bd8;
    uStack_160 = uVar5;
    puStack_158 = puVar3;
    _objc_retain(puVar3);
    _objc_retainBlock(&puStack_180);
    _objc_release(puStack_158);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
    return;
  }
  return;
}



/* Entry: 10585b110; end: 10585b197; -[SCMediaCache evictOnFailureCallbackForKey:] */

void FUN_10585b110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuVar1 = &puStack_50;
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10585b198;
  puStack_38 = &UNK_110848bd8;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10585b198; end: 10585b227;  */

void FUN_10585b198(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_2 & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_sync_enter(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0e700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0();
  _objc_release(uVar1);
  _objc_sync_exit(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}


