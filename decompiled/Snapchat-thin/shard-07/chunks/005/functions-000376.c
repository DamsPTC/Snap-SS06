/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056d5be4; end: 1056d5c4b; +[SCSharingInviteCreateRequest descriptor] */

void FUN_1056d5be4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf828 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59370,
                        &PTR____CFConstantStringClassReference_110df6b98,&PTR_DAT_1130f43b8,
                        &PTR_DAT_1130f43f0,8,0x38,0x1c);
    puRam00000001136bf828 = puVar1;
  }
  return;
}



/* Entry: 1056d5c4c; end: 1056d5cb3; +[SCSharingInviteCreateResponse descriptor] */

void FUN_1056d5c4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf830 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a593c0,
                        &PTR____CFConstantStringClassReference_110df6bb8,&PTR_DAT_1130f43b8,
                        &PTR_DAT_1130f43d0,1,0x10,0x1c);
    puRam00000001136bf830 = puVar1;
  }
  return;
}



/* Entry: 1056d5cb4; end: 1056d5d2f; +[SCSharingDeeplinkWithInviteRequest descriptor] */

undefined * FUN_1056d5cb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf838 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59460,
                        &PTR____CFConstantStringClassReference_110df6bd8,&PTR_DAT_1130f44f0,
                        &PTR_s_senderUserId_1130f4548,4,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bf838 = puVar1;
  }
  return puRam00000001136bf838;
}



/* Entry: 1056d5d30; end: 1056d5dab; +[SCSharingDeeplinkWithInviteResponse descriptor] */

undefined * FUN_1056d5d30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf840 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a594b0,
                        &PTR____CFConstantStringClassReference_110df6bf8,&PTR_DAT_1130f44f0,
                        &PTR_DAT_1130f4508,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bf840 = puVar1;
  }
  return puRam00000001136bf840;
}



/* Entry: 1056d5dac; end: 1056d5e13; +[SCSharingInviteDeleteForResourceRequest descriptor] */

void FUN_1056d5dac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf848 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59550,
                        &PTR____CFConstantStringClassReference_110df6c18,&PTR_DAT_1130f45c8,
                        &PTR_s_resourceId_1130f4600,2,0x10,0x1c);
    puRam00000001136bf848 = puVar1;
  }
  return;
}



/* Entry: 1056d5e14; end: 1056d5e7b; +[SCSharingInviteDeleteForResourceResponse descriptor] */

void FUN_1056d5e14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf850 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a595a0,
                        &PTR____CFConstantStringClassReference_110df6c38,&PTR_DAT_1130f45c8,
                        &PTR_DAT_1130f45e0,1,0x10,0x1c);
    puRam00000001136bf850 = puVar1;
  }
  return;
}



/* Entry: 1056d5e7c; end: 1056d5ee3; +[SCSharingInviteFetchRequest descriptor] */

void FUN_1056d5e7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf858 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59640,
                        &PTR____CFConstantStringClassReference_110df6c58,&PTR_DAT_1130f4640,
                        &PTR_DAT_1130f4678,3,0x18,0x1c);
    puRam00000001136bf858 = puVar1;
  }
  return;
}



/* Entry: 1056d5ee4; end: 1056d5f4b; +[SCSharingInviteFetchResponse descriptor] */

void FUN_1056d5ee4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf860 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59690,
                        &PTR____CFConstantStringClassReference_110df6c78,&PTR_DAT_1130f4640,
                        &PTR_DAT_1130f4658,1,0x10,0x1c);
    puRam00000001136bf860 = puVar1;
  }
  return;
}



/* Entry: 1056d5f4c; end: 1056d5fb3; +[SCSharingInviteJoinRequest descriptor] */

void FUN_1056d5f4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf868 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59730,
                        &PTR____CFConstantStringClassReference_110df6c98,&PTR_DAT_1130f46e0,
                        &PTR_DAT_1130f46f8,1,0x10,0x1c);
    puRam00000001136bf868 = puVar1;
  }
  return;
}



/* Entry: 1056d5fb4; end: 1056d603f; +[SCSharingInviteJoinResponse descriptor] */

undefined * FUN_1056d5fb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf870 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59780,
                        &PTR____CFConstantStringClassReference_110df6cb8,&PTR_DAT_1130f46e0,
                        &PTR_DAT_1130f4718,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136bf870 = puVar1;
  }
  return puRam00000001136bf870;
}



/* Entry: 1056d6040; end: 1056d60cb; +[SCSharingInviteUpdateRequest descriptor] */

undefined * FUN_1056d6040(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf878 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59898,
                        &PTR____CFConstantStringClassReference_110df6cd8,&PTR_DAT_1130f4768,
                        &PTR_s_longId_1130f4800,6,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001136bf878 = puVar1;
  }
  return puRam00000001136bf878;
}



/* Entry: 1056d60cc; end: 1056d6167; +[SCSharingInviteUpdateRequest_UpdateExpiration descriptor] */

undefined * FUN_1056d60cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf880 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a598c0,
                        &PTR____CFConstantStringClassReference_110df6cf8,&PTR_DAT_1130f4768,
                        &PTR_DAT_1130f4780,2,0x10,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112a59898);
    puRam00000001136bf880 = puVar1;
  }
  return puRam00000001136bf880;
}



/* Entry: 1056d6168; end: 1056d61cf; +[SCSharingInviteUpdateResponse descriptor] */

void FUN_1056d6168(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bf888 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a59870,
                        &PTR____CFConstantStringClassReference_110df6d18,&PTR_DAT_1130f4768,
                        &PTR_DAT_1130f47c0,2,0x18,0x1c);
    puRam00000001136bf888 = puVar1;
  }
  return;
}



/* Entry: 1056d61d0; end: 1056d6373; -[SCOffPlatformLinkGenerationServiceImpl initWithLensInfoCardProvider:performerProvider:inviteService:circumstanceEngine:] */

undefined8 *
FUN_1056d61d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e9b30;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1056d6374; end: 1056d63bb;  */

void FUN_1056d6374(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf12a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1056d63bc; end: 1056d6473; -[SCOffPlatformLinkGenerationServiceImpl generateLinkToPublicSnap:] */

void FUN_1056d63bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110df6d38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c04e820(puVar1,param_2,puVar2);
  func_0x00010be4c520(param_1,param_2,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056d6474; end: 1056d6573; -[SCOffPlatformLinkGenerationServiceImpl generateLinkToPublicUserProfile:] */

void FUN_1056d6474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110df6d58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bdc3100(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c25cda0(puVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,puVar4);
  func_0x00010be4c520(param_1,param_2,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056d6574; end: 1056d6687; -[SCOffPlatformLinkGenerationServiceImpl generateLinkToPublicUserStorySnap:snapId:] */

void FUN_1056d6574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110df6d78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bdc3100(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c25cda0(puVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,puVar4);
  func_0x00010be4c520(param_1,param_2,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056d6688; end: 1056d6787; -[SCOffPlatformLinkGenerationServiceImpl generateLinkToAddFriend:] */

void FUN_1056d6688(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110df6d98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bdc3100(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c25cda0(puVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,puVar4);
  func_0x00010be4c520(param_1,param_2,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056d6788; end: 1056d685b; -[SCOffPlatformLinkGenerationServiceImpl generateLinkToSavedStory:highlightId:] */

void FUN_1056d6788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110df6db8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c04e820(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010be4c520(param_1,param_2,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056d685c; end: 1056d6947; -[SCOffPlatformLinkGenerationServiceImpl generateLinkToSavedStoryFromSnapId:highlightId:username:] */

void FUN_1056d685c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110df6dd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c04e820(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010be4c520(param_1,param_2,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056d6948; end: 1056d6abf; -[SCOffPlatformLinkGenerationServiceImpl generateLinkToLensWithContext:] */

void FUN_1056d6948(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc6f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1056d6ac0; end: 1056d6cc3;  */

void FUN_1056d6ac0(long param_1,undefined *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
LAB_1056d6c38:
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar8);
  }
  else {
    puVar2 = param_2;
    func_0x00010c094fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      if (param_3 != 0) {
        func_0x00010bf43ca0(uVar8);
        goto LAB_1056d6c60;
      }
      goto LAB_1056d6c38;
    }
    puVar3 = param_2;
    func_0x00010c094fa0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    lVar4 = lVar1;
    func_0x00010be4c500(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bd228;
    _objc_alloc(PTR_PTR_1126bd228);
    puVar5 = param_2;
    func_0x00010c094540(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_2;
    func_0x00010c094fa0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c11a5e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0246e0(puVar3);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar3);
    _objc_release(lVar4);
  }
  _objc_release(puVar2);
LAB_1056d6c60:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056d6cc4; end: 1056d6d0f; -[SCOffPlatformLinkGenerationServiceImpl generateLinkToLens:] */

void FUN_1056d6cc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfbf7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056d6d10; end: 1056d6d17;  */

void FUN_1056d6d10(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c097b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensUrl_1126038f0);
  return;
}



/* Entry: 1056d6d18; end: 1056d6d1b; -[SCOffPlatformLinkGenerationServiceImpl generateLinkToLensWithLensDeeplink:] */

void FUN_1056d6d18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4c510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__linkToShareWithShareIdAndLocale_112570ae0);
  return;
}



/* Entry: 1056d6d1c; end: 1056d6dd3; -[SCOffPlatformLinkGenerationServiceImpl generateLinkToPublicSnapOnMap:] */

void FUN_1056d6d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110df6df8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c04e820(puVar1,param_2,puVar2);
  func_0x00010be4c520(param_1,param_2,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056d6dd4; end: 1056d6ddb; -[SCOffPlatformLinkGenerationServiceImpl generateLinkToPlaceOnMap:] */

void FUN_1056d6dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4c530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__linkToShareWithShareIdIfEnabled_112570ae8,param_3,0);
  return;
}



/* Entry: 1056d6ddc; end: 1056d6e93; -[SCOffPlatformLinkGenerationServiceImpl generateLinkToPublisherProfile:] */

void FUN_1056d6ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110df6e18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c04e820(puVar1,param_2,puVar2);
  func_0x00010be4c520(param_1,param_2,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056d6e94; end: 1056d6f7f; -[SCOffPlatformLinkGenerationServiceImpl generateLinkToPublisherProfileEditionSnap:editionId:snapId:] */

void FUN_1056d6e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110df6e38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c04e820(puVar1,param_2,puVar2);
  func_0x00010be4c520(param_1,param_2,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056d6f80; end: 1056d70bb; -[SCOffPlatformLinkGenerationServiceImpl generateLinkToPublisherProfileEditionWithTimestamp:editionId:timestampKey:timestampStartTimeInMs:chapterKey:chapterId:] */

void FUN_1056d6f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110df6e58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c04e820(puVar1,param_2,puVar2);
  func_0x00010be4c520(param_1,param_2,puVar1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056d70bc; end: 1056d7213; -[SCOffPlatformLinkGenerationServiceImpl generateLinkToGroup:inviteId:isCalling:] */

void FUN_1056d70bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf64920(param_4,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = uVar3;
  func_0x00010bf15da0(uVar3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
  ppuVar1 = &PTR____CFConstantStringClassReference_110df6e98;
  if ((int)param_5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110df6e78;
  }
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar5,param_2,puVar6);
  func_0x00010be4c520(param_1,param_2,puVar5,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056d7214; end: 1056d72a3; -[SCOffPlatformLinkGenerationServiceImpl generateLinkToPublicGroup:] */

void FUN_1056d7214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110df6eb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c04e820(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056d72a4; end: 1056d72a7; -[SCOffPlatformLinkGenerationServiceImpl generateShareId] */

void FUN_1056d72a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1bbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__generateShareId_112564898);
  return;
}



/* Entry: 1056d72a8; end: 1056d72cf; -[SCOffPlatformLinkGenerationServiceImpl generateLinkToCommunityOnboarding] */

void FUN_1056d72a8(void)

{
  _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
  func_0x00010c04e820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056d72d0; end: 1056d747f; -[SCOffPlatformLinkGenerationServiceImpl generateLinkToIncentiveCampaignInvite:] */

void FUN_1056d72d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126ba300;
  _objc_alloc(PTR_PTR_1126ba300);
  uVar3 = 0xe2cf55a2420447ce;
  func_0x000100c4a928(0xe2cf55a2420447ce,0x81f59a02709205b4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01eac0(puVar2);
  _objc_release(uVar3);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf56ae0(uVar3);
  _objc_release(uVar3);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1056d7480; end: 1056d75cb;  */

void FUN_1056d7480(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_3 == 0) {
    lVar1 = param_2;
    func_0x00010c06a860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    if (lVar1 != 0) {
      puVar3 = (undefined *)(param_1 + 0x28);
      _objc_loadWeakRetained(puVar3);
      lVar1 = param_2;
      func_0x00010c06a860(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010be37fa0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60(uVar4);
      _objc_release(puVar2);
      _objc_release(lVar1);
      goto LAB_1056d756c;
    }
    func_0x00010bf3ec40(0);
    func_0x00010bf99260(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf3ec40(param_3);
    func_0x00010bf99260(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf43ca0(uVar4);
LAB_1056d756c:
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056d75cc; end: 1056d76cf; -[SCOffPlatformLinkGenerationServiceImpl _linkToShareWithShareIdIfEnabled:linkHasExistingUrlParams:] */

void FUN_1056d75cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  func_0x00010be1bbe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c09e220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
  ppuVar1 = &PTR____CFConstantStringClassReference_110df6f38;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110df6f18;
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c04e820(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056d76d0; end: 1056d78bf; -[SCOffPlatformLinkGenerationServiceImpl _linkToShareWithShareIdAndLocale:] */

void FUN_1056d76d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c057bc0();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (puVar1 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar1;
    func_0x00010c11d4e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010c11d4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x000100504554();
    _objc_release(puVar5);
    puVar5 = puVar3;
    func_0x00010bf4b900();
    if (((ulong)puVar5 & 1) == 0) {
      func_0x00010be1bbe0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
      _objc_alloc(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0);
      func_0x00010c02dc20();
      func_0x00010befa120(puVar2);
      _objc_release(puVar5);
      _objc_release(param_1);
    }
    puVar5 = puVar3;
    func_0x00010bf4b900();
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSLocale_1126af788;
      func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c09e220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
      _objc_alloc(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0);
      func_0x00010c02dc20();
      func_0x00010befa120(puVar2);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    func_0x00010c1e6460(puVar1);
    puVar5 = puVar1;
    func_0x00010bdc2b80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1056d78c0; end: 1056d78c7;  */

void FUN_1056d78c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d4f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_name_112612df0);
  return;
}



/* Entry: 1056d78c8; end: 1056d7a63; -[SCOffPlatformLinkGenerationServiceImpl _generateShareId] */

void FUN_1056d78c8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined2 uStack_43;
  undefined1 uStack_41;
  
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_retain(uVar1);
  uVar2 = uVar1;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  uVar3 = uVar1;
  func_0x00010c08fa60();
  puVar4 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf64a60(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  _objc_retainAutoreleasedReturnValue();
  uStack_41 = 0;
  if (uVar3 != 0) {
    uVar8 = 0;
    do {
      uStack_43 = *(undefined2 *)(uVar2 + uVar8);
      uVar8 = uVar8 + 2;
      _strtoul(&uStack_43,0,0x10);
      func_0x00010bf06a40(puVar4);
    } while (uVar8 < uVar3);
  }
  _objc_release(uVar1);
  puVar5 = puVar4;
  func_0x00010bf15da0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar7;
  func_0x00010c25cfc0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1056d7a64; end: 1056d7abf; -[SCOffPlatformLinkGenerationServiceImpl _createPerformerWithPerformerProvider:] */

void FUN_1056d7a64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056d7ac0; end: 1056d7bef; -[SCOffPlatformLinkGenerationServiceImpl _incentiveInviteURLWithInviteId:] */

void FUN_1056d7ac0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25d780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar6 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c09e220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110df6ef8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar6,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1056d7bf0; end: 1056d7c83; -[SCOffPlatformLinkGenerationServiceImpl .cxx_destruct] */

void FUN_1056d7bf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056d7c84; end: 1056d7d27; -[SCOffPlatformLinkGenerationServicesEntryPoint _offPlatformLinkGenerationServiceWithLensInfoCardProvider:performerProvider:inviteService:circumstanceEngine:] */

void FUN_1056d7c84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd238;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c024be0();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056d7d28; end: 1056d7d9f; -[SCOffPlatformLinkGenerationServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056d7d28(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112727d28,0);
  _objc_destroyWeak(param_1 + _DAT_112727d30);
  _objc_destroyWeak(param_1 + _DAT_112727d24);
  _objc_destroyWeak(param_1 + _DAT_112727d20);
  _objc_destroyWeak(param_1 + _DAT_112727d1c);
  _objc_destroyWeak(param_1 + _DAT_112727d18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727d2c);
  return;
}



/* Entry: 1056d7da0; end: 1056d7f6b; -[SCSocialSmsGrpcSender initWithCurrentUserId:unifiedGRPCClientFactory:performerProvider:logger:] */

undefined1 *
FUN_1056d7da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126e9b38;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010bfcd0c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf56360(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126bd240;
    _objc_alloc();
    func_0x00010c058f80();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar6;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056d7f6c; end: 1056d7f73; -[SCSocialSmsGrpcSender sendSocialSmsRequest:] */

void FUN_1056d7f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15cb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_sendSocialSmsRequest_completion__112634cf0,param_3,0);
  return;
}



/* Entry: 1056d7f74; end: 1056d830f; -[SCSocialSmsGrpcSender sendSocialSmsRequest:completion:] */

void FUN_1056d7f74(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c0fb120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0afb40();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    puVar4 = PTR_PTR_1126bd268;
    _objc_retain(uVar3);
    _objc_opt_new(puVar4);
    func_0x00010c21f740();
    _objc_release(uVar3);
    lVar1 = param_3;
    func_0x00010c0fb120(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100504554();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c0d3c80(lVar2);
    func_0x00010c1db240(puVar4);
    _objc_release(lVar1);
    func_0x00010bfa2fa0();
    func_0x00010c19a840(puVar4);
    lVar1 = param_3;
    func_0x00010c0cc0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c0d3c80();
    func_0x00010c212ce0(puVar4);
    _objc_release(lVar5);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c0c5520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar6 = PTR_PTR_1126bd270;
      _objc_alloc_init(PTR_PTR_1126bd270);
      lVar1 = param_3;
      func_0x00010c0c5520(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010c26da60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213fa0(puVar6);
      _objc_release(lVar5);
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010c0c5520(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010c0c4040();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x0001056d90f8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c40a0(puVar6);
      _objc_release(lVar7);
      _objc_release(lVar5);
      _objc_release(lVar1);
      func_0x00010c1c4a40(puVar4);
      _objc_release(puVar6);
    }
    lVar1 = param_3;
    func_0x00010c1202c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010c1202c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e78c0(puVar4);
      _objc_release(lVar1);
    }
    _objc_release(lVar2);
    _objc_release(param_3);
    _objc_initWeak(auStack_68,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bebdc20(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    func_0x00010c15cb60(uVar3);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056d8310; end: 1056d8377;  */

void FUN_1056d8310(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be2fda0();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056d8378; end: 1056d84df; -[SCSocialSmsGrpcSender updateSocialLinkWithRequest:completion:] */

void FUN_1056d8378(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bd280;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar4 = param_3;
  func_0x00010c099720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdde0(puVar1);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c0c6e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar4;
  func_0x000100504554(uVar4,&PTR___NSConcreteGlobalBlock_1108a98e0);
  uVar3 = uVar2;
  func_0x00010c0d3c80();
  func_0x00010c1c5560(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bebdc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c287460(uVar4);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 1056d84e0; end: 1056d867b;  */

void FUN_1056d84e0(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x22;
  undefined *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined *unaff_x26;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010bfd6cc0(param_2);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = param_2;
    func_0x00010bfd6cc0();
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    unaff_x22 = *(long *)(param_1 + 0x28);
    if ((int)lVar1 == 0) {
      (**(code **)(unaff_x22 + 0x10))(unaff_x22,param_3);
    }
    else {
      param_1 = *(long *)(param_1 + 0x20);
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      unaff_x24 = param_2;
      func_0x00010bf98ea0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = unaff_x24;
      func_0x00010bf98d60();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      lStack_60 = unaff_x25;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      param_4 = 0;
      lVar8 = param_1;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(unaff_x22 + 0x10))(unaff_x22,puVar2);
      _objc_release(puVar2);
      _objc_release(unaff_x26);
      _objc_release(unaff_x25);
      _objc_release(unaff_x24);
      _objc_release(param_1);
      unaff_x23 = puVar2;
    }
  }
  _objc_release(param_3);
  lVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_1056d867c;
  puStack_c0 = unaff_x26;
  lStack_b8 = unaff_x25;
  lStack_b0 = unaff_x24;
  puStack_a8 = unaff_x23;
  lStack_a0 = unaff_x22;
  lStack_98 = param_1;
  lStack_90 = param_3;
  lStack_88 = param_2;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(lVar8);
  _objc_retain(param_4);
  lVar3 = lVar8;
  func_0x00010c099540();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar4 = lVar8;
    func_0x00010c099540();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(lVar1 + 0x18);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a7820();
      _objc_release(uVar6);
      puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
      lVar3 = lVar8;
      func_0x00010c099540(lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010c0899c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(lVar3);
      if ((puVar7 == (undefined *)0x0) ||
         (puVar2 = puVar7, func_0x00010c08fa60(), puVar2 == (undefined *)0x0)) {
        if (param_4 != 0) {
          (**(code **)(param_4 + 0x10))(param_4,0);
        }
      }
      else {
        puVar2 = PTR_PTR_1126bd248;
        _objc_opt_new(PTR_PTR_1126bd248);
        func_0x00010c1bdde0();
        _objc_initWeak(auStack_c8,lVar1);
        uVar6 = *(undefined8 *)(lVar1 + 8);
        func_0x00010bebdc20(lVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_d0,auStack_c8);
        _objc_retain(param_4);
        func_0x00010bfc7120(uVar6);
        _objc_release(lVar1);
        _objc_release(param_4);
        _objc_destroyWeak(auStack_d0);
        _objc_destroyWeak(auStack_c8);
        _objc_release(puVar2);
      }
      _objc_release(puVar7);
      goto LAB_1056d887c;
    }
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
LAB_1056d887c:
  _objc_release(param_4);
  _objc_release(lVar8);
  return;
}



/* Entry: 1056d867c; end: 1056d88cb; -[SCSocialSmsGrpcSender sendGetLinkDataRequest:completion:] */

void FUN_1056d867c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c099540();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010c099540();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a7820();
      _objc_release(uVar4);
      puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
      lVar1 = param_3;
      func_0x00010c099540(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0899c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(lVar1);
      if ((puVar6 == (undefined *)0x0) ||
         (puVar5 = puVar6, func_0x00010c08fa60(), puVar5 == (undefined *)0x0)) {
        if (param_4 != 0) {
          (**(code **)(param_4 + 0x10))(param_4,0);
        }
      }
      else {
        puVar5 = PTR_PTR_1126bd248;
        _objc_opt_new(PTR_PTR_1126bd248);
        func_0x00010c1bdde0();
        _objc_initWeak(auStack_58,param_1);
        uVar4 = *(undefined8 *)(param_1 + 8);
        func_0x00010bebdc20(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(param_4);
        func_0x00010bfc7120(uVar4);
        _objc_release(param_1);
        _objc_release(param_4);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
        _objc_release(puVar5);
      }
      _objc_release(puVar6);
      goto LAB_1056d887c;
    }
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
LAB_1056d887c:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056d88cc; end: 1056d8937;  */

void FUN_1056d88cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a3a0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056d8938; end: 1056d8a23; -[SCSocialSmsGrpcSender deleteSocialLinkWithLinkId:completion:] */

void FUN_1056d8938(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bd250;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1bdde0();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bebdc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1056d8a24;
  puStack_40 = &UNK_1108a9800;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bf6c9c0(uVar2,param_2,puVar1,param_1,&puStack_58);
  _objc_release(param_1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 1056d8a24; end: 1056d8a33;  */

void FUN_1056d8a24(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001056d8a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 1056d8a34; end: 1056d8c3b; -[SCSocialSmsGrpcSender _handleGetLinkDataResponse:error:completion:] */

void FUN_1056d8a34(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 == 0) || (param_4 != 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7800();
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126bd258;
    _objc_alloc(PTR_PTR_1126bd258);
    lVar1 = param_3;
    func_0x00010c0c5520();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c26da60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0c5520(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0c4040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x000100504554();
    func_0x00010c051dc0(puVar8);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7840();
  }
  _objc_release(uVar6);
  puVar7 = PTR_PTR_1126bd260;
  _objc_alloc(PTR_PTR_1126bd260);
  lVar1 = param_3;
  func_0x00010c099720(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf5bbc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0262a0(puVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,puVar7);
  }
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056d8c3c; end: 1056d8ebb; -[SCSocialSmsGrpcSender sendSocialLinkCreateRequest:] */

void FUN_1056d8c3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9940();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126bd298;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  _objc_opt_new(puVar3);
  func_0x00010c21f740();
  _objc_release(uVar2);
  func_0x00010c1bde60(puVar3);
  puVar4 = PTR_PTR_1126bd270;
  _objc_alloc_init(PTR_PTR_1126bd270);
  uVar2 = param_3;
  func_0x00010c0c5520(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c26da60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213fa0(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0c5520(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar2;
  func_0x00010c0c4040(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x0001056d90f8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c40a0(puVar4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  func_0x00010c1c4a40(puVar3);
  _objc_release(puVar4);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bebdc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf59020(uVar2);
  _objc_release(param_1);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1056d8ebc; end: 1056d8fc7;  */

void FUN_1056d8ebc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bd2a0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (param_3 == 0) {
    _objc_retain(0);
    _objc_alloc(puVar1);
    uVar2 = param_2;
    func_0x00010bdc2b80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c099720(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057aa0(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010bf43d60(uVar4);
    _objc_release(puVar1);
  }
  else {
    _objc_retain(param_3);
    func_0x00010bf43ca0(uVar4);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2fda0();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056d8fc8; end: 1056d9043; -[SCSocialSmsGrpcSender _handleSendSocialSmsResponseWithError:isSocialLinkCreation:] */

void FUN_1056d8fc8(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    if ((param_4 & 1) == 0) {
      func_0x00010c0afb20();
    }
    else {
      func_0x00010c0a9960();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x00010c0afb00();
  }
  else {
    func_0x00010c0a9920();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056d9044; end: 1056d904f; -[SCSocialSmsGrpcSender _socialSmsCallOptionBuilder] */

void FUN_1056d9044(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae748,PTR_s_builder_1125a6bb0);
  return;
}



/* Entry: 1056d9050; end: 1056d914b; -[SCSocialSmsGrpcSender .cxx_destruct] */

void FUN_1056d9050(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056d914c; end: 1056d9153;  */

void FUN_1056d914c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bd278;
  _objc_retain();
  _objc_opt_new(puVar1);
  uVar2 = param_2;
  func_0x00010c26e3a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214440(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c0b6b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c1a20(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbd60(puVar1);
  _objc_release(uVar2);
  func_0x00010c074fe0();
  _objc_release(param_2);
  func_0x00010c19ec40(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056d9154; end: 1056d92d7;  */

void FUN_1056d9154(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_PTR_1126bd278;
  _objc_retain();
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  func_0x00010c26e3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214440(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0b6b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c1a20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c094540(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbd60(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c074fe0();
  _objc_release(param_1);
  uVar3 = 1;
  if ((int)uVar2 == 0) {
    uVar3 = 2;
  }
  func_0x00010c19ec40(puVar1,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056d92d8; end: 1056d93ab;  */

void FUN_1056d92d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bd290;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c26e3a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0b6b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5800(param_2);
  _objc_release(param_2);
  func_0x00010c052000(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056d93ac; end: 1056d9423;  */

void FUN_1056d93ac(void)

{
  _objc_alloc(PTR_PTR_1126bd2a8);
  func_0x00010bff8760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056d9424; end: 1056d956f; -[SCSocialSmsServiceProvider _createSocialSmsGrpcSenderWithLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056d9424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126bd2b8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + _DAT_112727d48;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112727d4c;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112727d50;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0079c0(puVar1,param_2,lVar4,lVar6,lVar8,param_3);
  _objc_release(param_3);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(param_1);
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



/* Entry: 1056d9570; end: 1056d95cb; -[SCSocialSmsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056d9570(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727d44);
  _objc_destroyWeak(param_1 + _DAT_112727d40);
  _objc_destroyWeak(param_1 + _DAT_112727d50);
  _objc_destroyWeak(param_1 + _DAT_112727d4c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727d48);
  return;
}



/* Entry: 1056d95cc; end: 1056d966f; -[SCSocialSmsServicesLogger initWithBlizzardLogger:grapheneRegistry:] */

undefined1 *
FUN_1056d95cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9b40;
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



/* Entry: 1056d9670; end: 1056d9a0b; -[SCSocialSmsServicesLogger logSmsSentWithRequest:] */

void FUN_1056d9670(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  _objc_retain(param_4);
  lVar12 = param_4;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar12;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  lVar12 = param_4;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar12;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  lVar12 = param_4;
  func_0x00010c0b3ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar12;
  func_0x00010c1057c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  lVar12 = param_4;
  func_0x00010c0b3ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar12;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  lVar12 = param_4;
  func_0x00010c0b3ba0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar12;
  func_0x00010c15d5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  lVar12 = param_4;
  func_0x00010bfa2fa0();
  if (lVar12 - 8U < 2) {
    lVar6 = param_4;
    func_0x00010c0b3ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar6;
    func_0x00010bf681e0();
    _objc_release(lVar6);
  }
  else if (lVar12 == 7) {
    lVar12 = 0x11;
  }
  else {
    lVar12 = 0xc;
  }
  puVar7 = PTR_PTR_1126b24a8;
  _objc_alloc();
  func_0x00010c024300();
  _CACurrentMediaTime();
  uVar13 = *(undefined8 *)(param_2 + 8);
  lVar6 = param_4;
  func_0x00010bfa2fa0();
  if (lVar6 - 2U < 9) {
    uVar11 = *(undefined8 *)(&UNK_10ddbb668 + (lVar6 - 2U) * 8);
  }
  else {
    uVar11 = 5;
  }
  lVar6 = param_4;
  func_0x00010c1202c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_4;
  func_0x00010c0fb120();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f9516c(param_1,0,10,0,lVar5,0,uVar13,uVar11,lVar6,lVar1,lVar12,4,3,0,puVar7,0);
  _objc_release(lVar8);
  _objc_release(lVar6);
  puVar9 = PTR_PTR_1126bd2c0;
  func_0x00010c23f1a0(PTR_PTR_1126bd2c0);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010c23f140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar13);
  _objc_release(uVar11);
  puVar10 = PTR_PTR_1126bd2c0;
  func_0x00010c23f160(PTR_PTR_1126bd2c0);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010c23f140();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_4;
  func_0x00010c0fb120(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bef9180(uVar13);
  _objc_release(lVar12);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056d9a0c; end: 1056d9aeb; -[SCSocialSmsServicesLogger logLinkCreateSentWithRequest:] */

void FUN_1056d9a0c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bd2c0;
  func_0x00010c23f0a0(PTR_PTR_1126bd2c0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23f140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126bd2c0;
  func_0x00010c23f060(PTR_PTR_1126bd2c0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23f140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056d9aec; end: 1056d9b67; -[SCSocialSmsServicesLogger logGetLinkDataRequest:] */

void FUN_1056d9aec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bd2c0;
  func_0x00010c23f020(PTR_PTR_1126bd2c0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23f140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056d9b68; end: 1056d9be3; -[SCSocialSmsServicesLogger logGetLinkDataSucceeded] */

void FUN_1056d9b68(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bd2c0;
  func_0x00010c23f040(PTR_PTR_1126bd2c0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23f140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056d9be4; end: 1056d9c5f; -[SCSocialSmsServicesLogger logGetLinkDataFailed] */

void FUN_1056d9be4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bd2c0;
  func_0x00010c23f000(PTR_PTR_1126bd2c0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23f140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056d9c60; end: 1056d9cdb; -[SCSocialSmsServicesLogger logLinkCreateSucceeded] */

void FUN_1056d9c60(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bd2c0;
  func_0x00010c23f0c0(PTR_PTR_1126bd2c0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23f140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056d9cdc; end: 1056d9d57; -[SCSocialSmsServicesLogger logLinkCreateFailed] */

void FUN_1056d9cdc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bd2c0;
  func_0x00010c23f080(PTR_PTR_1126bd2c0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23f140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056d9d58; end: 1056d9dd3; -[SCSocialSmsServicesLogger logSmsSentSucceeded] */

void FUN_1056d9d58(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bd2c0;
  func_0x00010c23f1c0(PTR_PTR_1126bd2c0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23f140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056d9dd4; end: 1056d9e4f; -[SCSocialSmsServicesLogger logSmsSentFailed] */

void FUN_1056d9dd4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bd2c0;
  func_0x00010c23f180(PTR_PTR_1126bd2c0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23f140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056d9e50; end: 1056d9e7f; -[SCSocialSmsServicesLogger .cxx_destruct] */

void FUN_1056d9e50(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056d9e80; end: 1056d9ef3; -[UNISocialSms initWithUnifiedGrpcService:] */

undefined1 * FUN_1056d9e80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9b48;
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



/* Entry: 1056d9ef4; end: 1056d9fd7; -[UNISocialSms sendSocialSmsWithRequest:callOptionsBuilder:handler:] */

void FUN_1056d9ef4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bd2c8;
  _objc_opt_class(PTR_PTR_1126bd2c8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df7078,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056d9fd8; end: 1056da0bb; -[UNISocialSms getLinkDataWithRequest:callOptionsBuilder:handler:] */

void FUN_1056d9fd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bd2d0;
  _objc_opt_class(PTR_PTR_1126bd2d0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df7098,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056da0bc; end: 1056da19f; -[UNISocialSms takedownMediaWithRequest:callOptionsBuilder:handler:] */

void FUN_1056da0bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bd2d8;
  _objc_opt_class(PTR_PTR_1126bd2d8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df70b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056da1a0; end: 1056da283; -[UNISocialSms createSocialLinkWithRequest:callOptionsBuilder:handler:] */

void FUN_1056da1a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bd2e0;
  _objc_opt_class(PTR_PTR_1126bd2e0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df70d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056da284; end: 1056da367; -[UNISocialSms activateLinkWithRequest:callOptionsBuilder:handler:] */

void FUN_1056da284(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bd2e8;
  _objc_opt_class(PTR_PTR_1126bd2e8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df70f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056da368; end: 1056da44b; -[UNISocialSms updateLinkWithRequest:callOptionsBuilder:handler:] */

void FUN_1056da368(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bd2f0;
  _objc_opt_class(PTR_PTR_1126bd2f0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df7118,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056da44c; end: 1056da52f; -[UNISocialSms deleteSocialLinkWithRequest:callOptionsBuilder:handler:] */

void FUN_1056da44c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bd2f8;
  _objc_opt_class(PTR_PTR_1126bd2f8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df7138,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056da530; end: 1056da53b; -[UNISocialSms .cxx_destruct] */

void FUN_1056da530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056da53c; end: 1056da567; +[SCGrapheneSmsServiceMetric smsServicesRecipientCount] */

void FUN_1056da53c(void)

{
  _objc_alloc(PTR_PTR_1126bd2c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056da568; end: 1056da593; +[SCGrapheneSmsServiceMetric smsServicesRequestSent] */

void FUN_1056da568(void)

{
  _objc_alloc(PTR_PTR_1126bd2c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056da594; end: 1056da5bf; +[SCGrapheneSmsServiceMetric smsServicesRequestSucceed] */

void FUN_1056da594(void)

{
  _objc_alloc(PTR_PTR_1126bd2c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056da5c0; end: 1056da5eb; +[SCGrapheneSmsServiceMetric smsServicesRequestFailure] */

void FUN_1056da5c0(void)

{
  _objc_alloc(PTR_PTR_1126bd2c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056da5ec; end: 1056da617; +[SCGrapheneSmsServiceMetric smsLinkRecipientCount] */

void FUN_1056da5ec(void)

{
  _objc_alloc(PTR_PTR_1126bd2c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056da618; end: 1056da643; +[SCGrapheneSmsServiceMetric smsLinkRequestSent] */

void FUN_1056da618(void)

{
  _objc_alloc(PTR_PTR_1126bd2c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056da644; end: 1056da66f; +[SCGrapheneSmsServiceMetric smsLinkRequestSucceed] */

void FUN_1056da644(void)

{
  _objc_alloc(PTR_PTR_1126bd2c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056da670; end: 1056da69b; +[SCGrapheneSmsServiceMetric smsLinkRequestFailure] */

void FUN_1056da670(void)

{
  _objc_alloc(PTR_PTR_1126bd2c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056da69c; end: 1056da6c7; +[SCGrapheneSmsServiceMetric smsGetLinkDataSent] */

void FUN_1056da69c(void)

{
  _objc_alloc(PTR_PTR_1126bd2c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056da6c8; end: 1056da6f3; +[SCGrapheneSmsServiceMetric smsGetLinkDataSucceed] */

void FUN_1056da6c8(void)

{
  _objc_alloc(PTR_PTR_1126bd2c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056da6f4; end: 1056da71f; +[SCGrapheneSmsServiceMetric smsGetLinkDataFailure] */

void FUN_1056da6f4(void)

{
  _objc_alloc(PTR_PTR_1126bd2c0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056da720; end: 1056da7bf; -[SCGrapheneSmsServiceMetric description] */

void FUN_1056da720(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110df7158;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110df7158,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e9b50;
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


