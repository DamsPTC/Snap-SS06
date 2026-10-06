/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054ac81c; end: 1054ac8ff; -[UNISCPbGenAIIdentityService deleteWithRequest:callOptionsBuilder:handler:] */

void FUN_1054ac81c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b9878;
  _objc_opt_class(PTR_PTR_1126b9878);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110de2f58,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054ac900; end: 1054ac9e3; -[UNISCPbGenAIIdentityService deleteAllWithRequest:callOptionsBuilder:handler:] */

void FUN_1054ac900(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b9880;
  _objc_opt_class(PTR_PTR_1126b9880);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110de2f78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054ac9e4; end: 1054ac9ef; -[UNISCPbGenAIIdentityService .cxx_destruct] */

void FUN_1054ac9e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054ac9f0; end: 1054aca57; +[SCPbGenAIIdentityInviteFriendRequest descriptor] */

void FUN_1054ac9f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc240 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3c7c0,
                        &PTR____CFConstantStringClassReference_110de2f98,&PTR_DAT_1130dca70,
                        &PTR_s_friendId_1130dca88,1,0x10,0x1c);
    puRam00000001136bc240 = puVar1;
  }
  return;
}



/* Entry: 1054aca58; end: 1054acabf; +[SCPbGenAIIdentityInviteFriendResponse descriptor] */

void FUN_1054aca58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc248 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3c810,
                        &PTR____CFConstantStringClassReference_110de2fb8,&PTR_DAT_1130dca70,
                        &PTR_DAT_1130dcaa8,1,4,0x1c);
    puRam00000001136bc248 = puVar1;
  }
  return;
}



/* Entry: 1054acac0; end: 1054acb27; +[SCPbGenAIIdentityCanInviteFriendRequest descriptor] */

void FUN_1054acac0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc250 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3c860,
                        &PTR____CFConstantStringClassReference_110de2fd8,&PTR_DAT_1130dca70,
                        &PTR_s_friendId_1130dcac8,1,0x10,0x1c);
    puRam00000001136bc250 = puVar1;
  }
  return;
}



/* Entry: 1054acb28; end: 1054acb8f; +[SCPbGenAIIdentityCanInviteFriendResponse descriptor] */

void FUN_1054acb28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc258 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3c8b0,
                        &PTR____CFConstantStringClassReference_110de2ff8,&PTR_DAT_1130dca70,
                        &PTR_DAT_1130dcae8,1,4,0x1c);
    puRam00000001136bc258 = puVar1;
  }
  return;
}



/* Entry: 1054acb90; end: 1054acbf7; +[SCPbGenAIIdentityGetPrimaryIdentityForLensRequest descriptor] */

void FUN_1054acb90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc260 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3c900,
                        &PTR____CFConstantStringClassReference_110de3018,&PTR_DAT_1130dca70,
                        &PTR_s_userId_1130dcc28,2,0x18,0x1c);
    puRam00000001136bc260 = puVar1;
  }
  return;
}



/* Entry: 1054acbf8; end: 1054acc5f; +[SCPbGenAIIdentityGetPrimaryIdentityForLensResponse descriptor] */

void FUN_1054acbf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc268 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3c950,
                        &PTR____CFConstantStringClassReference_110de3038,&PTR_DAT_1130dca70,
                        &PTR_DAT_1130dce68,5,0x28,0x1c);
    puRam00000001136bc268 = puVar1;
  }
  return;
}



/* Entry: 1054acc60; end: 1054accc7; +[SCPbGenAIIdentitySelfieImageMetadata descriptor] */

void FUN_1054acc60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc270 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3c9a0,
                        &PTR____CFConstantStringClassReference_110de3058,&PTR_DAT_1130dca70,
                        &PTR_DAT_1130dcb08,1,8,0x1c);
    puRam00000001136bc270 = puVar1;
  }
  return;
}



/* Entry: 1054accc8; end: 1054acd2f; +[SCPbGenAIIdentityUpdateMySelfieSettingsRequest descriptor] */

void FUN_1054accc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc278 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3c9f0,
                        &PTR____CFConstantStringClassReference_110de3078,&PTR_DAT_1130dca70,
                        &PTR_DAT_1130dcb28,1,0x10,0x1c);
    puRam00000001136bc278 = puVar1;
  }
  return;
}



/* Entry: 1054acd30; end: 1054acd97; +[SCPbGenAIIdentityUpdateMySelfieSettingsResponse descriptor] */

void FUN_1054acd30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc280 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3ca40,
                        &PTR____CFConstantStringClassReference_110de3098,&PTR_DAT_1130dca70,
                        &PTR_s_status_1130dcb48,1,0x10,0x1c);
    puRam00000001136bc280 = puVar1;
  }
  return;
}



/* Entry: 1054acd98; end: 1054acdff; +[SCPbGenAIIdentityGetMySelfieSettingsRequest descriptor] */

void FUN_1054acd98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc288 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3ca90,
                        &PTR____CFConstantStringClassReference_110de30b8,&PTR_DAT_1130dca70,0,0,4,
                        0x1c);
    puRam00000001136bc288 = puVar1;
  }
  return;
}



/* Entry: 1054ace00; end: 1054ace67; +[SCPbGenAIIdentityGetMySelfieSettingsResponse descriptor] */

void FUN_1054ace00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc290 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3cae0,
                        &PTR____CFConstantStringClassReference_110de30d8,&PTR_DAT_1130dca70,
                        &PTR_s_status_1130dcc68,2,0x18,0x1c);
    puRam00000001136bc290 = puVar1;
  }
  return;
}



/* Entry: 1054ace68; end: 1054acecf; +[SCPbGenAIIdentityUploadRequest descriptor] */

void FUN_1054ace68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc298 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3cb30,
                        &PTR____CFConstantStringClassReference_110de30f8,&PTR_DAT_1130dca70,
                        &PTR_DAT_1130dcb68,1,0x10,0x1c);
    puRam00000001136bc298 = puVar1;
  }
  return;
}



/* Entry: 1054aced0; end: 1054acf37; +[SCPbGenAIIdentityUploadResponse descriptor] */

void FUN_1054aced0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc2a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3cb80,
                        &PTR____CFConstantStringClassReference_110de3118,&PTR_DAT_1130dca70,
                        &PTR_s_status_1130dcca8,2,0x18,0x1c);
    puRam00000001136bc2a0 = puVar1;
  }
  return;
}



/* Entry: 1054acf38; end: 1054acf9f; +[SCPbGenAIIdentityGetAllRequest descriptor] */

void FUN_1054acf38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc2a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3cbd0,
                        &PTR____CFConstantStringClassReference_110de3138,&PTR_DAT_1130dca70,0,0,4,
                        0x1c);
    puRam00000001136bc2a8 = puVar1;
  }
  return;
}



/* Entry: 1054acfa0; end: 1054ad007; +[SCPbGenAIIdentityGetAllResponse descriptor] */

void FUN_1054acfa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc2b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3cc20,
                        &PTR____CFConstantStringClassReference_110de3158,&PTR_DAT_1130dca70,
                        &PTR_s_status_1130dcce8,2,0x18,0x1c);
    puRam00000001136bc2b0 = puVar1;
  }
  return;
}



/* Entry: 1054ad008; end: 1054ad06f; +[SCPbGenAIIdentityGetPrimaryRequest descriptor] */

void FUN_1054ad008(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc2b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3cc70,
                        &PTR____CFConstantStringClassReference_110de3178,&PTR_DAT_1130dca70,0,0,4,
                        0x1c);
    puRam00000001136bc2b8 = puVar1;
  }
  return;
}



/* Entry: 1054ad070; end: 1054ad0d7; +[SCPbGenAIIdentityGetPrimaryResponse descriptor] */

void FUN_1054ad070(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc2c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3ccc0,
                        &PTR____CFConstantStringClassReference_110de3198,&PTR_DAT_1130dca70,
                        &PTR_s_status_1130dcd28,2,0x18,0x1c);
    puRam00000001136bc2c0 = puVar1;
  }
  return;
}



/* Entry: 1054ad0d8; end: 1054ad13f; +[SCPbGenAIIdentityDeleteRequest descriptor] */

void FUN_1054ad0d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc2c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3cd10,
                        &PTR____CFConstantStringClassReference_110de31b8,&PTR_DAT_1130dca70,
                        &PTR_DAT_1130dcb88,1,0x10,0x1c);
    puRam00000001136bc2c8 = puVar1;
  }
  return;
}



/* Entry: 1054ad140; end: 1054ad1a7; +[SCPbGenAIIdentityDeleteResponse descriptor] */

void FUN_1054ad140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc2d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3cd60,
                        &PTR____CFConstantStringClassReference_110de31d8,&PTR_DAT_1130dca70,
                        &PTR_s_status_1130dcba8,1,0x10,0x1c);
    puRam00000001136bc2d0 = puVar1;
  }
  return;
}



/* Entry: 1054ad1a8; end: 1054ad20f; +[SCPbGenAIIdentityDeleteAllRequest descriptor] */

void FUN_1054ad1a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc2d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3cdb0,
                        &PTR____CFConstantStringClassReference_110de31f8,&PTR_DAT_1130dca70,0,0,4,
                        0x1c);
    puRam00000001136bc2d8 = puVar1;
  }
  return;
}



/* Entry: 1054ad210; end: 1054ad277; +[SCPbGenAIIdentityDeleteAllResponse descriptor] */

void FUN_1054ad210(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc2e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3ce00,
                        &PTR____CFConstantStringClassReference_110de3218,&PTR_DAT_1130dca70,
                        &PTR_s_status_1130dcbc8,1,0x10,0x1c);
    puRam00000001136bc2e0 = puVar1;
  }
  return;
}



/* Entry: 1054ad278; end: 1054ad2df; +[SCPbGenAIIdentityDeletePrimaryRequest descriptor] */

void FUN_1054ad278(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc2e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3ce50,
                        &PTR____CFConstantStringClassReference_110de3238,&PTR_DAT_1130dca70,0,0,4,
                        0x1c);
    puRam00000001136bc2e8 = puVar1;
  }
  return;
}



/* Entry: 1054ad2e0; end: 1054ad347; +[SCPbGenAIIdentityDeletePrimaryResponse descriptor] */

void FUN_1054ad2e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc2f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3cea0,
                        &PTR____CFConstantStringClassReference_110de3258,&PTR_DAT_1130dca70,
                        &PTR_s_status_1130dcbe8,1,0x10,0x1c);
    puRam00000001136bc2f0 = puVar1;
  }
  return;
}



/* Entry: 1054ad348; end: 1054ad3c3; +[SCPbGenAIIdentityDeleteMySelfieRequest descriptor] */

undefined * FUN_1054ad348(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc2f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3cef0,
                        &PTR____CFConstantStringClassReference_110de3278,&PTR_DAT_1130dca70,
                        &PTR_s_userId_1130dcda8,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bc2f8 = puVar1;
  }
  return puRam00000001136bc2f8;
}



/* Entry: 1054ad3c4; end: 1054ad42b; +[SCPbGenAIIdentityDeleteMySelfieResponse descriptor] */

void FUN_1054ad3c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc300 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3cf40,
                        &PTR____CFConstantStringClassReference_110de3298,&PTR_DAT_1130dca70,
                        &PTR_DAT_1130dce08,3,0x18,0x1c);
    puRam00000001136bc300 = puVar1;
  }
  return;
}



/* Entry: 1054ad42c; end: 1054ad4a7; +[SCPbGenAIIdentityGetMySelfieCreationTimeRequest descriptor] */

undefined * FUN_1054ad42c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc308 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3cf90,
                        &PTR____CFConstantStringClassReference_110de32b8,&PTR_DAT_1130dca70,
                        &PTR_DAT_1130dcc08,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bc308 = puVar1;
  }
  return puRam00000001136bc308;
}



/* Entry: 1054ad4a8; end: 1054ad50f; +[SCPbGenAIIdentityGetMySelfieCreationTimeResponse descriptor] */

void FUN_1054ad4a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc310 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3cfe0,
                        &PTR____CFConstantStringClassReference_110de32d8,&PTR_DAT_1130dca70,
                        &PTR_DAT_1130dcd68,2,0x18,0x1c);
    puRam00000001136bc310 = puVar1;
  }
  return;
}



/* Entry: 1054ad510; end: 1054ad583; -[SCMinervaGrapheneLogger initWithMetricModel:] */

undefined1 * FUN_1054ad510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e87b0;
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



/* Entry: 1054ad584; end: 1054ad5eb; -[SCMinervaGrapheneLogger logImageUploadResult:feature:durationMs:] */

void FUN_1054ad584(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  _objc_retain(param_4);
  FUN_1054ad8d0(*(undefined8 *)(param_1 + 8),param_4,param_3,1);
  if (0 < param_5) {
    FUN_1054adb00(*(undefined8 *)(param_1 + 8),param_4,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054ad5ec; end: 1054ad653; -[SCMinervaGrapheneLogger logImageProcessingResult:feature:durationMs:] */

void FUN_1054ad5ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  _objc_retain(param_4);
  FUN_1054adc74(*(undefined8 *)(param_1 + 8),param_4,param_3,1);
  if (0 < param_5) {
    FUN_1054adea4(*(undefined8 *)(param_1 + 8),param_4,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054ad654; end: 1054ad6b7; -[SCMinervaGrapheneLogger logImageDownloadWithSuccess:feature:durationMs:] */

void FUN_1054ad654(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  FUN_1054ae018(*(undefined8 *)(param_1 + 8),param_4,param_3,1);
  if ((int)param_3 != 0) {
    FUN_1054ae200(*(undefined8 *)(param_1 + 8),param_4,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054ad6b8; end: 1054ad71b; -[SCMinervaGrapheneLogger logImageProcessingOverallWithSuccess:feature:durationMs:] */

void FUN_1054ad6b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_4);
  FUN_1054ae374(*(undefined8 *)(param_1 + 8),param_4,param_3,1);
  if ((int)param_3 != 0) {
    FUN_1054ae55c(*(undefined8 *)(param_1 + 8),param_4,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054ad71c; end: 1054ad767; -[SCMinervaGrapheneLogger logGenerateCaptionsResult:durationMs:] */

void FUN_1054ad71c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  FUN_1054ae748(*(undefined8 *)(param_1 + 8),param_3,1);
  if (0 < param_4) {
    if (*(long *)(param_1 + 8) != 0) {
      plVar1 = *(long **)(*(long *)(param_1 + 8) + 8);
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11088f268,&uStack_40,param_4);
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x00010007e5dc(&puStack_28);
    }
    return;
  }
  return;
}



/* Entry: 1054ad768; end: 1054ad7bf; -[SCMinervaGrapheneLogger logGenerateCaptionsOverallWithSuccess:durationMs:] */

void FUN_1054ad768(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1054ae934(*(undefined8 *)(param_1 + 8),param_3,1);
  if ((int)param_3 != 0) {
    if (*(long *)(param_1 + 8) != 0) {
      plVar1 = *(long **)(*(long *)(param_1 + 8) + 8);
      uStack_40 = 0;
      uStack_38 = 0;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11088f308,&uStack_40,param_4);
      func_0x00010007e5dc(&stack0xffffffffffffffd8);
    }
    return;
  }
  return;
}



/* Entry: 1054ad7c0; end: 1054ad83f; -[SCMinervaGrapheneLogger logAIStoryReplyGenerationDurationMs:batchSize:guided:] */

void FUN_1054ad7c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_1054aec38(uVar3,puVar2,param_5,param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054ad840; end: 1054ad84f; -[SCMinervaGrapheneLogger logAIStoryReplyGenerationResult:guided:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054ad840(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined1 auStack_118 [24];
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar8 = 1;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_4;
  puVar3 = param_3;
  _objc_retain(param_3);
  iVar6 = (int)puVar3;
  if (lVar1 != 0) {
    plVar9 = *(long **)(lVar1 + 8);
    puVar2 = &UNK_10f2c625d;
    if ((int)param_4 == 0) {
      puVar2 = &UNK_10f2c6262;
    }
    func_0x00010002b838(auStack_78,puVar2);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f2c6235;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = &UNK_11088f3a8;
    puVar7 = &uStack_98;
    uVar8 = 1;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11088f3a8,puVar7,1);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar1 = 0;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      iVar6 = (int)puVar7;
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  puVar3 = param_3;
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
  __Unwind_Resume();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f2c6235;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_118,puVar3);
    puVar3 = &UNK_10f2c625d;
    if (iVar6 == 0) {
      puVar3 = &UNK_10f2c6262;
    }
    func_0x00010002b838(auStack_100,puVar3);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11088f3f8,&uStack_138,uVar8);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar1 = 0;
    do {
      if ((&cStack_e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar3 = puVar3 + _DAT_1127240b0;
  _objc_loadWeakRetained();
  puVar4 = puVar3;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar2 = PTR_PTR_1126ae720;
  _objc_retain(puVar4);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b9898;
  _objc_alloc(PTR_PTR_1126b9898);
  func_0x00010c031960();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1054ad850; end: 1054ad85b; -[SCMinervaGrapheneLogger .cxx_destruct] */

void FUN_1054ad850(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054ad85c; end: 1054ad8cf; -[SCGrapheneMinervaMetric2 init] */

undefined1 * FUN_1054ad85c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e87b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1054ad8d0; end: 1054adaff;  */

void FUN_1054ad8d0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 auStack_3d8 [3];
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  long *plStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 auStack_2b8 [3];
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
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
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
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
  puVar2 = param_2;
  puVar6 = param_3;
  puVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar2);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = (undefined8 *)&UNK_11088efe8;
    unaff_x23 = &uStack_98;
    puVar6 = &uStack_98;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11088efe8,puVar6,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar13 = 0;
    puVar5 = auStack_78;
    puVar10 = param_4;
    do {
      if ((&cStack_49)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
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
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar7 = &uStack_120;
  pcStack_a8 = FUN_1054adb00;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar2;
  puVar8 = puVar6;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  plVar14 = (long *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar4[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar5 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,puVar5);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar11 = (undefined8 *)&UNK_11088f038;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11088f038,&uStack_120,puVar6);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar8 = puVar7;
    puVar10 = puVar6;
    puVar5 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar8 = puVar7;
      puVar10 = puVar6;
      puVar5 = &uStack_120;
    }
  }
  puVar6 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_128 = FUN_1054adc74;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar11;
  puVar4 = puVar8;
  puVar9 = puVar10;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar5;
  plStack_148 = plVar14;
  puStack_140 = puVar6;
  puStack_138 = puVar2;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar11);
  _objc_retain(puVar8);
  puVar2 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar7[1];
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar2 = puVar11;
      _objc_retainAutorelease(puVar11);
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_180,puVar2);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar3 = (undefined8 *)&UNK_11088f088;
    unaff_x23 = &uStack_1b8;
    puVar4 = &uStack_1b8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11088f088,puVar4,puVar10);
    puStack_1a0 = unaff_x23;
    func_0x00010007e5dc(&puStack_1a0);
    lVar13 = 0;
    puVar2 = auStack_198;
    puVar9 = puVar10;
    do {
      if ((&cStack_169)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar8);
  puVar6 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar11);
  puVar7 = puVar6;
  __Unwind_Resume();
  puVar12 = &uStack_240;
  pcStack_1c8 = FUN_1054adea4;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar3;
  puVar10 = puVar4;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar2;
  puStack_1e8 = puVar6;
  puStack_1e0 = puVar8;
  puStack_1d8 = puVar11;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar3);
  plVar14 = (long *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar7[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_220;
    func_0x00010002b838(auStack_220,puVar2);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_208,1);
    puVar5 = (undefined8 *)&UNK_11088f0d8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11088f0d8,&uStack_240,puVar4);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    puVar10 = puVar12;
    puVar9 = puVar4;
    puVar2 = &uStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar10 = puVar12;
      puVar9 = puVar4;
      puVar2 = &uStack_240;
    }
  }
  puVar6 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar8 = puVar6;
  __Unwind_Resume();
  pcStack_248 = FUN_1054ae018;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar5;
  puVar4 = puVar10;
  puVar7 = puVar9;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar2;
  plStack_268 = plVar14;
  puStack_260 = puVar6;
  puStack_258 = puVar3;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(puVar5);
  puVar2 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar8[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      unaff_x23 = puVar5;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_2b8;
    func_0x00010002b838(auStack_2b8,unaff_x23);
    puVar1 = &UNK_10f2c625d;
    if ((int)puVar10 == 0) {
      puVar1 = &UNK_10f2c6262;
    }
    func_0x00010002b838(auStack_2a0,puVar1);
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    func_0x00010007e1e8(&uStack_2d8,auStack_2b8,&lStack_288,2);
    puVar11 = (undefined8 *)&UNK_11088f128;
    puVar10 = &uStack_2d8;
    puVar4 = &uStack_2d8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11088f128,puVar4,puVar9);
    puStack_2c0 = puVar10;
    func_0x00010007e5dc(&puStack_2c0);
    lVar13 = 0;
    puVar2 = auStack_2b8;
    puVar7 = puVar9;
    do {
      if ((&cStack_289)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  puVar6 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar9 = puVar6;
  __Unwind_Resume();
  puVar12 = &uStack_360;
  pcStack_2e8 = FUN_1054ae200;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar11;
  puVar8 = puVar4;
  puStack_320 = unaff_x24;
  puStack_318 = unaff_x23;
  puStack_310 = puVar10;
  puStack_308 = puVar2;
  puStack_300 = puVar6;
  puStack_2f8 = puVar5;
  pppuStack_2f0 = &pppuStack_250;
  _objc_retain(puVar11);
  plVar14 = (long *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar9[1];
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar2 = puVar11;
      _objc_retainAutorelease(puVar11);
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    unaff_x23 = auStack_340;
    func_0x00010002b838(auStack_340,puVar2);
    uStack_360 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    func_0x00010007e1e8(&uStack_360,auStack_340,&lStack_328,1);
    puVar3 = (undefined8 *)&UNK_11088f178;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11088f178,&uStack_360,puVar4);
    puStack_348 = (undefined1 *)&uStack_360;
    func_0x00010007e5dc(&puStack_348);
    puVar8 = puVar12;
    puVar7 = puVar4;
    puVar10 = &uStack_360;
    if (cStack_329 < '\0') {
      __ZdlPv(auStack_340[0]);
      puVar8 = puVar12;
      puVar7 = puVar4;
      puVar10 = &uStack_360;
    }
  }
  puVar2 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar11);
  _objc_release(puVar11);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_368 = FUN_1054ae374;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar3;
  puVar5 = puVar8;
  puStack_3a0 = unaff_x24;
  puStack_398 = unaff_x23;
  puStack_390 = puVar10;
  plStack_388 = plVar14;
  puStack_380 = puVar2;
  puStack_378 = puVar11;
  pppuStack_370 = &pppuStack_2f0;
  _objc_retain(puVar3);
  puVar2 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar4[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      unaff_x23 = puVar3;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_3d8;
    func_0x00010002b838(auStack_3d8,unaff_x23);
    puVar1 = &UNK_10f2c625d;
    if ((int)puVar8 == 0) {
      puVar1 = &UNK_10f2c6262;
    }
    func_0x00010002b838(auStack_3c0,puVar1);
    uStack_3f8 = 0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    func_0x00010007e1e8(&uStack_3f8,auStack_3d8,&lStack_3a8,2);
    puVar6 = (undefined8 *)&UNK_11088f1c8;
    puVar8 = &uStack_3f8;
    puVar5 = &uStack_3f8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11088f1c8,puVar5,puVar7);
    puStack_3e0 = puVar8;
    func_0x00010007e5dc(&puStack_3e0);
    lVar13 = 0;
    puVar2 = auStack_3d8;
    do {
      if ((&cStack_3a9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  puVar10 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar4 = puVar10;
  __Unwind_Resume();
  pcStack_408 = FUN_1054ae55c;
  lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar6;
  puStack_440 = unaff_x24;
  puStack_438 = unaff_x23;
  puStack_430 = puVar8;
  puStack_428 = puVar2;
  puStack_420 = puVar10;
  puStack_418 = puVar3;
  pppuStack_410 = &pppuStack_370;
  _objc_retain(puVar6);
  if (puVar4 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar4[1];
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_460,puVar2);
    uStack_480 = 0;
    uStack_478 = 0;
    uStack_470 = 0;
    func_0x00010007e1e8(&uStack_480,auStack_460,&lStack_448,1);
    puVar11 = (undefined8 *)&UNK_11088f218;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11088f218,&uStack_480,puVar5);
    puStack_468 = (undefined1 *)&uStack_480;
    func_0x00010007e5dc(&puStack_468);
    if (cStack_449 < '\0') {
      __ZdlPv(auStack_460[0]);
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_448) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar2;
  __Unwind_Resume();
  puStack_4a8 = (undefined1 *)&uStack_4c0;
  pcStack_488 = FUN_1054ae6d0;
  if (puVar5 != (undefined8 *)0x0) {
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    puStack_4a0 = puVar2;
    puStack_498 = puVar6;
    pppuStack_490 = &pppuStack_410;
    (**(code **)(*(long *)puVar5[1] + 0x18))((long *)puVar5[1],&UNK_11088f268,&uStack_4c0,puVar11);
    func_0x00010007e5dc(&puStack_4a8);
  }
  return;
}



/* Entry: 1054adb00; end: 1054adc73;  */

void FUN_1054adb00(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [3];
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 auStack_218 [3];
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar8 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = (undefined8 *)&UNK_11088f038;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11088f038,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar8 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar8 = puVar3;
      param_4 = param_3;
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1054adc74;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar5 = puVar8;
  puVar7 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar8);
  puVar12 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar3[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar3);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar3 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar6 = (undefined8 *)&UNK_11088f088;
    unaff_x23 = &uStack_118;
    puVar5 = &uStack_118;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11088f088,puVar5,param_4);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar14 = 0;
    puVar12 = auStack_f8;
    puVar7 = param_4;
    do {
      if ((&cStack_c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar8);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar11 = &uStack_1a0;
  pcStack_128 = FUN_1054adea4;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar6;
  puVar10 = puVar5;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar12;
  puStack_148 = puVar3;
  puStack_140 = puVar8;
  puStack_138 = puVar2;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar6);
  plVar13 = (long *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar4[1];
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_180;
    func_0x00010002b838(auStack_180,puVar2);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar9 = (undefined8 *)&UNK_11088f0d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11088f0d8,&uStack_1a0,puVar5);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar10 = puVar11;
    puVar7 = puVar5;
    puVar12 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar10 = puVar11;
      puVar7 = puVar5;
      puVar12 = &uStack_1a0;
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_1a8 = FUN_1054ae018;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar9;
  puVar3 = puVar10;
  puVar4 = puVar7;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar12;
  plStack_1c8 = plVar13;
  puStack_1c0 = puVar2;
  puStack_1b8 = puVar6;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar9);
  puVar2 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar5[1];
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      unaff_x23 = puVar9;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    unaff_x24 = auStack_218;
    func_0x00010002b838(auStack_218,unaff_x23);
    puVar1 = &UNK_10f2c625d;
    if ((int)puVar10 == 0) {
      puVar1 = &UNK_10f2c6262;
    }
    func_0x00010002b838(auStack_200,puVar1);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1e8,2);
    puVar8 = (undefined8 *)&UNK_11088f128;
    puVar10 = &uStack_238;
    puVar3 = &uStack_238;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11088f128,puVar3,puVar7);
    puStack_220 = puVar10;
    func_0x00010007e5dc(&puStack_220);
    lVar14 = 0;
    puVar2 = auStack_218;
    puVar4 = puVar7;
    do {
      if ((&cStack_1e9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar6 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(puVar9);
  puVar7 = puVar6;
  __Unwind_Resume();
  puVar11 = &uStack_2c0;
  pcStack_248 = FUN_1054ae200;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar8;
  puVar12 = puVar3;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar10;
  puStack_268 = puVar2;
  puStack_260 = puVar6;
  puStack_258 = puVar9;
  pppuStack_250 = &pppuStack_1b0;
  _objc_retain(puVar8);
  plVar13 = (long *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar7[1];
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x23 = auStack_2a0;
    func_0x00010002b838(auStack_2a0,puVar2);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_288,1);
    puVar5 = (undefined8 *)&UNK_11088f178;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11088f178,&uStack_2c0,puVar3);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    puVar12 = puVar11;
    puVar4 = puVar3;
    puVar10 = &uStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar12 = puVar11;
      puVar4 = puVar3;
      puVar10 = &uStack_2c0;
    }
  }
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar7 = puVar2;
  __Unwind_Resume();
  pcStack_2c8 = FUN_1054ae374;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar5;
  puVar6 = puVar12;
  puStack_300 = unaff_x24;
  puStack_2f8 = unaff_x23;
  puStack_2f0 = puVar10;
  plStack_2e8 = plVar13;
  puStack_2e0 = puVar2;
  puStack_2d8 = puVar8;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(puVar5);
  puVar2 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar7[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      unaff_x23 = puVar5;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_338;
    func_0x00010002b838(auStack_338,unaff_x23);
    puVar1 = &UNK_10f2c625d;
    if ((int)puVar12 == 0) {
      puVar1 = &UNK_10f2c6262;
    }
    func_0x00010002b838(auStack_320,puVar1);
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    func_0x00010007e1e8(&uStack_358,auStack_338,&lStack_308,2);
    puVar3 = (undefined8 *)&UNK_11088f1c8;
    puVar12 = &uStack_358;
    puVar6 = &uStack_358;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11088f1c8,puVar6,puVar4);
    puStack_340 = puVar12;
    func_0x00010007e5dc(&puStack_340);
    lVar14 = 0;
    puVar2 = auStack_338;
    do {
      if ((&cStack_309)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  puVar8 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar9 = puVar8;
  __Unwind_Resume();
  pcStack_368 = FUN_1054ae55c;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puStack_3a0 = unaff_x24;
  puStack_398 = unaff_x23;
  puStack_390 = puVar12;
  puStack_388 = puVar2;
  puStack_380 = puVar8;
  puStack_378 = puVar5;
  pppuStack_370 = &pppuStack_2d0;
  _objc_retain(puVar3);
  if (puVar9 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar9[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_3c0,puVar2);
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    func_0x00010007e1e8(&uStack_3e0,auStack_3c0,&lStack_3a8,1);
    puVar7 = (undefined8 *)&UNK_11088f218;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11088f218,&uStack_3e0,puVar6);
    puStack_3c8 = (undefined1 *)&uStack_3e0;
    func_0x00010007e5dc(&puStack_3c8);
    if (cStack_3a9 < '\0') {
      __ZdlPv(auStack_3c0[0]);
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar8 = puVar2;
  __Unwind_Resume();
  puStack_408 = (undefined1 *)&uStack_420;
  pcStack_3e8 = FUN_1054ae6d0;
  if (puVar8 != (undefined8 *)0x0) {
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_410 = 0;
    puStack_400 = puVar2;
    puStack_3f8 = puVar3;
    pppuStack_3f0 = &pppuStack_370;
    (**(code **)(*(long *)puVar8[1] + 0x18))((long *)puVar8[1],&UNK_11088f268,&uStack_420,puVar7);
    func_0x00010007e5dc(&puStack_408);
  }
  return;
}



/* Entry: 1054adc74; end: 1054adea3;  */

void FUN_1054adc74(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 auStack_2b8 [3];
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  long *plStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [3];
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
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
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
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
  puVar2 = param_2;
  puVar6 = param_3;
  puVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar2);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = (undefined8 *)&UNK_11088f088;
    unaff_x23 = &uStack_98;
    puVar6 = &uStack_98;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11088f088,puVar6,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar13 = 0;
    puVar5 = auStack_78;
    puVar10 = param_4;
    do {
      if ((&cStack_49)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
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
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar7 = &uStack_120;
  pcStack_a8 = FUN_1054adea4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar9 = puVar6;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  plVar14 = (long *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar4[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar5 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,puVar5);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar8 = (undefined8 *)&UNK_11088f0d8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11088f0d8,&uStack_120,puVar6);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar9 = puVar7;
    puVar10 = puVar6;
    puVar5 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar9 = puVar7;
      puVar10 = puVar6;
      puVar5 = &uStack_120;
    }
  }
  puVar6 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_128 = FUN_1054ae018;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar8;
  puVar4 = puVar9;
  puVar12 = puVar10;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar5;
  plStack_148 = plVar14;
  puStack_140 = puVar6;
  puStack_138 = puVar2;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar8);
  puVar2 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar7[1];
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      unaff_x23 = puVar8;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,unaff_x23);
    puVar1 = &UNK_10f2c625d;
    if ((int)puVar9 == 0) {
      puVar1 = &UNK_10f2c6262;
    }
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar3 = (undefined8 *)&UNK_11088f128;
    puVar9 = &uStack_1b8;
    puVar4 = &uStack_1b8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11088f128,puVar4,puVar10);
    puStack_1a0 = puVar9;
    func_0x00010007e5dc(&puStack_1a0);
    lVar13 = 0;
    puVar2 = auStack_198;
    puVar12 = puVar10;
    do {
      if ((&cStack_169)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  puVar6 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar7 = puVar6;
  __Unwind_Resume();
  puVar11 = &uStack_240;
  pcStack_1c8 = FUN_1054ae200;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar3;
  puVar10 = puVar4;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar9;
  puStack_1e8 = puVar2;
  puStack_1e0 = puVar6;
  puStack_1d8 = puVar8;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar3);
  plVar14 = (long *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar7[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_220;
    func_0x00010002b838(auStack_220,puVar2);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_208,1);
    puVar5 = (undefined8 *)&UNK_11088f178;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11088f178,&uStack_240,puVar4);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    puVar10 = puVar11;
    puVar12 = puVar4;
    puVar9 = &uStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar10 = puVar11;
      puVar12 = puVar4;
      puVar9 = &uStack_240;
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_248 = FUN_1054ae374;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puVar8 = puVar10;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar9;
  plStack_268 = plVar14;
  puStack_260 = puVar2;
  puStack_258 = puVar3;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(puVar5);
  puVar2 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar4[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      unaff_x23 = puVar5;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_2b8;
    func_0x00010002b838(auStack_2b8,unaff_x23);
    puVar1 = &UNK_10f2c625d;
    if ((int)puVar10 == 0) {
      puVar1 = &UNK_10f2c6262;
    }
    func_0x00010002b838(auStack_2a0,puVar1);
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    func_0x00010007e1e8(&uStack_2d8,auStack_2b8,&lStack_288,2);
    puVar6 = (undefined8 *)&UNK_11088f1c8;
    puVar10 = &uStack_2d8;
    puVar8 = &uStack_2d8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11088f1c8,puVar8,puVar12);
    puStack_2c0 = puVar10;
    func_0x00010007e5dc(&puStack_2c0);
    lVar13 = 0;
    puVar2 = auStack_2b8;
    do {
      if ((&cStack_289)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  puVar3 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_2e8 = FUN_1054ae55c;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar6;
  puStack_320 = unaff_x24;
  puStack_318 = unaff_x23;
  puStack_310 = puVar10;
  puStack_308 = puVar2;
  puStack_300 = puVar3;
  puStack_2f8 = puVar5;
  pppuStack_2f0 = &pppuStack_250;
  _objc_retain(puVar6);
  if (puVar4 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar4[1];
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_340,puVar2);
    uStack_360 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    func_0x00010007e1e8(&uStack_360,auStack_340,&lStack_328,1);
    puVar9 = (undefined8 *)&UNK_11088f218;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_11088f218,&uStack_360,puVar8);
    puStack_348 = (undefined1 *)&uStack_360;
    func_0x00010007e5dc(&puStack_348);
    if (cStack_329 < '\0') {
      __ZdlPv(auStack_340[0]);
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_328) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar2;
  __Unwind_Resume();
  puStack_388 = (undefined1 *)&uStack_3a0;
  pcStack_368 = FUN_1054ae6d0;
  if (puVar5 != (undefined8 *)0x0) {
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    puStack_380 = puVar2;
    puStack_378 = puVar6;
    pppuStack_370 = &pppuStack_2f0;
    (**(code **)(*(long *)puVar5[1] + 0x18))((long *)puVar5[1],&UNK_11088f268,&uStack_3a0,puVar9);
    func_0x00010007e5dc(&puStack_388);
  }
  return;
}



/* Entry: 1054adea4; end: 1054ae017;  */

void FUN_1054adea4(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined1 *puVar14;
  undefined8 *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined1 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined1 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined1 auStack_218 [24];
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined1 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined1 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined1 auStack_f8 [24];
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = (undefined8 *)&UNK_11088f0d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11088f0d8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = puVar3;
      param_4 = param_3;
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1054ae018;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puVar8 = puVar7;
  puVar11 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  puVar14 = (undefined1 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar3[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      unaff_x23 = puVar2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,unaff_x23);
    puVar1 = &UNK_10f2c625d;
    if ((int)puVar7 == 0) {
      puVar1 = &UNK_10f2c6262;
    }
    func_0x00010002b838(auStack_e0,puVar1);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar5 = (undefined8 *)&UNK_11088f128;
    puVar7 = &uStack_118;
    puVar8 = &uStack_118;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11088f128,puVar8,param_4);
    puStack_100 = puVar7;
    func_0x00010007e5dc(&puStack_100);
    lVar12 = 0;
    puVar14 = auStack_f8;
    puVar11 = param_4;
    do {
      if ((&cStack_c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar10 = &uStack_1a0;
  pcStack_128 = FUN_1054ae200;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puVar9 = puVar8;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar7;
  puStack_148 = puVar14;
  puStack_140 = puVar3;
  puStack_138 = puVar2;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar5);
  plVar13 = (long *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar4[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar2 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_180;
    func_0x00010002b838(auStack_180,puVar2);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar6 = (undefined8 *)&UNK_11088f178;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11088f178,&uStack_1a0,puVar8);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    puVar9 = puVar10;
    puVar11 = puVar8;
    puVar7 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar9 = puVar10;
      puVar11 = puVar8;
      puVar7 = &uStack_1a0;
    }
  }
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_1a8 = FUN_1054ae374;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar6;
  puVar8 = puVar9;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar7;
  plStack_1c8 = plVar13;
  puStack_1c0 = puVar2;
  puStack_1b8 = puVar5;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar6);
  puVar14 = (undefined1 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar4[1];
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      unaff_x23 = puVar6;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_218;
    func_0x00010002b838(auStack_218,unaff_x23);
    puVar1 = &UNK_10f2c625d;
    if ((int)puVar9 == 0) {
      puVar1 = &UNK_10f2c6262;
    }
    func_0x00010002b838(auStack_200,puVar1);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    func_0x00010007e1e8(&uStack_238,auStack_218,&lStack_1e8,2);
    puVar3 = (undefined8 *)&UNK_11088f1c8;
    puVar9 = &uStack_238;
    puVar8 = &uStack_238;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11088f1c8,puVar8,puVar11);
    puStack_220 = puVar9;
    func_0x00010007e5dc(&puStack_220);
    lVar12 = 0;
    puVar14 = auStack_218;
    do {
      if ((&cStack_1e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_248 = FUN_1054ae55c;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar3;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar9;
  puStack_268 = puVar14;
  puStack_260 = puVar2;
  puStack_258 = puVar6;
  pppuStack_250 = &pppuStack_1b0;
  _objc_retain(puVar3);
  if (puVar5 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar5[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_2a0,puVar2);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_288,1);
    puVar7 = (undefined8 *)&UNK_11088f218;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11088f218,&uStack_2c0,puVar8);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar5 = puVar2;
  __Unwind_Resume();
  puStack_2e8 = (undefined1 *)&uStack_300;
  pcStack_2c8 = FUN_1054ae6d0;
  if (puVar5 != (undefined8 *)0x0) {
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    puStack_2e0 = puVar2;
    puStack_2d8 = puVar3;
    pppuStack_2d0 = &pppuStack_250;
    (**(code **)(*(long *)puVar5[1] + 0x18))((long *)puVar5[1],&UNK_11088f268,&uStack_300,puVar7);
    func_0x00010007e5dc(&puStack_2e8);
  }
  return;
}



/* Entry: 1054ae018; end: 1054ae1ff;  */

void FUN_1054ae018(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined8 *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined1 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined1 auStack_198 [24];
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined1 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_2;
  puVar5 = param_3;
  puVar4 = param_4;
  _objc_retain(param_2);
  puVar12 = (undefined1 *)0x0;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      unaff_x23 = param_2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,unaff_x23);
    puVar1 = &UNK_10f2c625d;
    if ((int)param_3 == 0) {
      puVar1 = &UNK_10f2c6262;
    }
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar7 = (undefined8 *)&UNK_11088f128;
    param_3 = &uStack_98;
    puVar5 = &uStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11088f128,puVar5,param_4);
    puStack_80 = param_3;
    func_0x00010007e5dc(&puStack_80);
    lVar10 = 0;
    puVar12 = auStack_78;
    puVar4 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puVar6 = &uStack_120;
  pcStack_a8 = FUN_1054ae200;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar7;
  puVar9 = puVar5;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_3;
  puStack_c8 = puVar12;
  puStack_c0 = puVar2;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  plVar11 = (long *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar11 = (long *)puVar3[1];
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar4 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_100;
    func_0x00010002b838(auStack_100,puVar4);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar8 = (undefined8 *)&UNK_11088f178;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11088f178,&uStack_120,puVar5);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    puVar9 = puVar6;
    puVar4 = puVar5;
    param_3 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar9 = puVar6;
      puVar4 = puVar5;
      param_3 = &uStack_120;
    }
  }
  puVar5 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_128 = FUN_1054ae374;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar8;
  puVar3 = puVar9;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = param_3;
  plStack_148 = plVar11;
  puStack_140 = puVar5;
  puStack_138 = puVar7;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar8);
  puVar12 = (undefined1 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar11 = (long *)puVar6[1];
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      unaff_x23 = puVar8;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x24 = auStack_198;
    func_0x00010002b838(auStack_198,unaff_x23);
    puVar1 = &UNK_10f2c625d;
    if ((int)puVar9 == 0) {
      puVar1 = &UNK_10f2c6262;
    }
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar2 = (undefined8 *)&UNK_11088f1c8;
    puVar9 = &uStack_1b8;
    puVar3 = &uStack_1b8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11088f1c8,puVar3,puVar4);
    puStack_1a0 = puVar9;
    func_0x00010007e5dc(&puStack_1a0);
    lVar10 = 0;
    puVar12 = auStack_198;
    do {
      if ((&cStack_169)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  puVar7 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar4 = puVar7;
  __Unwind_Resume();
  pcStack_1c8 = FUN_1054ae55c;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar9;
  puStack_1e8 = puVar12;
  puStack_1e0 = puVar7;
  puStack_1d8 = puVar8;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(puVar2);
  if (puVar4 != (undefined8 *)0x0) {
    plVar11 = (long *)puVar4[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar7 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_220,puVar7);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_208,1);
    puVar5 = (undefined8 *)&UNK_11088f218;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11088f218,&uStack_240,puVar3);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
    }
  }
  puVar7 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar7;
  __Unwind_Resume();
  puStack_268 = (undefined1 *)&uStack_280;
  pcStack_248 = FUN_1054ae6d0;
  if (puVar4 != (undefined8 *)0x0) {
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    puStack_260 = puVar7;
    puStack_258 = puVar2;
    pppuStack_250 = &pppuStack_1d0;
    (**(code **)(*(long *)puVar4[1] + 0x18))((long *)puVar4[1],&UNK_11088f268,&uStack_280,puVar5);
    func_0x00010007e5dc(&puStack_268);
  }
  return;
}



/* Entry: 1054ae200; end: 1054ae373;  */

void FUN_1054ae200(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined8 *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined1 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined1 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined1 auStack_f8 [24];
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = (undefined8 *)&UNK_11088f178;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11088f178,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1054ae374;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar8 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  puVar11 = (undefined1 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar10 = (long *)puVar3[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      unaff_x23 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      unaff_x23 = puVar2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,unaff_x23);
    puVar1 = &UNK_10f2c625d;
    if ((int)puVar5 == 0) {
      puVar1 = &UNK_10f2c6262;
    }
    func_0x00010002b838(auStack_e0,puVar1);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar6 = (undefined8 *)&UNK_11088f1c8;
    puVar5 = &uStack_118;
    puVar8 = &uStack_118;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11088f1c8,puVar8,param_4);
    puStack_100 = puVar5;
    func_0x00010007e5dc(&puStack_100);
    lVar9 = 0;
    puVar11 = auStack_f8;
    do {
      if ((&cStack_c9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_128 = FUN_1054ae55c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar5;
  puStack_148 = puVar11;
  puStack_140 = puVar3;
  puStack_138 = puVar2;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar6);
  if (puVar4 != (undefined8 *)0x0) {
    plVar10 = (long *)puVar4[1];
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2c6235;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_180,puVar2);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar7 = (undefined8 *)&UNK_11088f218;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11088f218,&uStack_1a0,puVar8);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar2;
  __Unwind_Resume();
  puStack_1c8 = (undefined1 *)&uStack_1e0;
  pcStack_1a8 = FUN_1054ae6d0;
  if (puVar5 != (undefined8 *)0x0) {
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    puStack_1c0 = puVar2;
    puStack_1b8 = puVar6;
    pppuStack_1b0 = &ppuStack_130;
    (**(code **)(*(long *)puVar5[1] + 0x18))((long *)puVar5[1],&UNK_11088f268,&uStack_1e0,puVar7);
    func_0x00010007e5dc(&puStack_1c8);
  }
  return;
}



/* Entry: 1054ae374; end: 1054ae55b;  */

void FUN_1054ae374(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  puVar8 = (undefined1 *)0x0;
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      unaff_x23 = &UNK_10f2c6235;
    }
    else {
      unaff_x23 = param_2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,unaff_x23);
    puVar3 = &UNK_10f2c625d;
    if ((int)param_3 == 0) {
      puVar3 = &UNK_10f2c6262;
    }
    func_0x00010002b838(auStack_60,puVar3);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar3 = &UNK_11088f1c8;
    param_3 = &uStack_98;
    puVar5 = &uStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11088f1c8,puVar5,param_4);
    puStack_80 = param_3;
    func_0x00010007e5dc(&puStack_80);
    lVar6 = 0;
    puVar8 = auStack_78;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  __Unwind_Resume();
  pcStack_a8 = FUN_1054ae55c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar3;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_3;
  puStack_c8 = puVar8;
  puStack_c0 = puVar1;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c6235;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_100,puVar1);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar4 = &UNK_11088f218;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11088f218,&uStack_120,puVar5);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar2 = puVar1;
  __Unwind_Resume();
  puStack_148 = (undefined1 *)&uStack_160;
  pcStack_128 = FUN_1054ae6d0;
  if (puVar2 != (undefined *)0x0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    puStack_140 = puVar1;
    puStack_138 = puVar3;
    ppuStack_130 = &puStack_b0;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_11088f268,&uStack_160,puVar4);
    func_0x00010007e5dc(&puStack_148);
  }
  return;
}



/* Entry: 1054ae55c; end: 1054ae6cf;  */

void FUN_1054ae55c(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c6235;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11088f218;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11088f218,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1054ae6d0;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11088f268,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1054ae6d0; end: 1054ae747;  */

void FUN_1054ae6d0(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_11088f268,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1054ae748; end: 1054ae8bb;  */

void FUN_1054ae748(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c6235;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11088f2b8;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11088f2b8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1054ae8bc;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11088f308,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1054ae8bc; end: 1054ae933;  */

void FUN_1054ae8bc(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_11088f308,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1054ae934; end: 1054aea4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054ae934(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined1 **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *unaff_x21;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar7 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  puVar4 = param_3;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    puVar4 = &UNK_10f2c625d;
    if ((int)param_2 == 0) {
      puVar4 = &UNK_10f2c6262;
    }
    func_0x00010002b838(appuStack_50,puVar4);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = &UNK_11088f358;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11088f358,&uStack_70,param_3);
    ppuVar1 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    puVar4 = (undefined *)puVar7;
    param_4 = param_3;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      puVar4 = (undefined *)puVar7;
      param_4 = param_3;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar3 = puVar4;
  puVar5 = param_4;
  _objc_retain(puVar4);
  iVar6 = (int)puVar3;
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar8 = (long *)ppuVar1[1];
    puVar2 = &UNK_10f2c625d;
    if ((int)param_2 == 0) {
      puVar2 = &UNK_10f2c6262;
    }
    func_0x00010002b838(auStack_e8,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar2 = &UNK_10f2c6235;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_d0,puVar2);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    func_0x00010007e1e8(&uStack_108,auStack_e8,&lStack_b8,2);
    puVar2 = &UNK_11088f3a8;
    puVar7 = &uStack_108;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11088f3a8,puVar7,param_4);
    puStack_f0 = &uStack_108;
    func_0x00010007e5dc(&puStack_f0);
    lVar9 = 0;
    puVar5 = param_4;
    do {
      if ((&cStack_b9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_d0 + lVar9));
      }
      iVar6 = (int)puVar7;
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_d1 < '\0') {
    __ZdlPv(auStack_e8[0]);
  }
  _objc_release(puVar4);
  __Unwind_Resume();
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = &UNK_10f2c6235;
    }
    else {
      puVar4 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_188,puVar4);
    puVar4 = &UNK_10f2c625d;
    if (iVar6 == 0) {
      puVar4 = &UNK_10f2c6262;
    }
    func_0x00010002b838(auStack_170,puVar4);
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    func_0x00010007e1e8(&uStack_1a8,auStack_188,&lStack_158,2);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11088f3f8,&uStack_1a8,puVar5);
    puStack_190 = &uStack_1a8;
    func_0x00010007e5dc(&puStack_190);
    lVar9 = 0;
    do {
      if ((&cStack_159)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  puVar4 = puVar4 + _DAT_1127240b0;
  _objc_loadWeakRetained();
  puVar2 = puVar4;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae720;
  _objc_retain(puVar2);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b9898;
  _objc_alloc(PTR_PTR_1126b9898);
  func_0x00010c031960();
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1054aea4c; end: 1054aec37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054aea4c(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined1 auStack_118 [24];
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
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
  puVar1 = param_2;
  puVar2 = param_3;
  uVar7 = param_4;
  _objc_retain(param_3);
  iVar5 = (int)puVar2;
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f2c625d;
    if ((int)param_2 == 0) {
      puVar1 = &UNK_10f2c6262;
    }
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c6235;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_11088f3a8;
    puVar6 = &uStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11088f3a8,puVar6,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar8 = 0;
    uVar7 = param_4;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      iVar5 = (int)puVar6;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  puVar2 = param_3;
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
  __Unwind_Resume();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f2c6235;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_118,puVar2);
    puVar2 = &UNK_10f2c625d;
    if (iVar5 == 0) {
      puVar2 = &UNK_10f2c6262;
    }
    func_0x00010002b838(auStack_100,puVar2);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11088f3f8,&uStack_138,uVar7);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar8 = 0;
    do {
      if ((&cStack_e9)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar2 = puVar2 + _DAT_1127240b0;
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126ae720;
  _objc_retain(puVar3);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b9898;
  _objc_alloc(PTR_PTR_1126b9898);
  func_0x00010c031960();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1054aec38; end: 1054aee1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054aec38(long param_1,undefined *param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2c6235;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    puVar1 = &UNK_10f2c625d;
    if (param_3 == 0) {
      puVar1 = &UNK_10f2c6262;
    }
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_11088f3f8,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar5 = 0;
    do {
      if ((&cStack_49)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != -0x30);
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar1 = puVar1 + _DAT_1127240b0;
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_retain(puVar2);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b9898;
  _objc_alloc(PTR_PTR_1126b9898);
  func_0x00010c031960();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1054aee20; end: 1054aef4b; -[SCBloopsOnboardingAnalyticsServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054aee20(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  param_1 = param_1 + _DAT_1127240b0;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1054aef4c;
  puStack_50 = &UNK_11088f568;
  lStack_48 = lVar1;
  _objc_retain(lVar1);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = puVar3;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x1054aef7c;
  puStack_78 = &UNK_11088f598;
  puVar3 = PTR_PTR_1126ae720;
  puStack_70 = puVar2;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b9898;
  _objc_alloc(PTR_PTR_1126b9898);
  func_0x00010c031960();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lStack_48);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1054aef4c; end: 1054aefab;  */

void FUN_1054aef4c(void)

{
  _objc_alloc(PTR_PTR_1126b9888);
  func_0x00010c05f0c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054aefac; end: 1054aefe3; -[SCBloopsOnboardingAnalyticsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054aefac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127240b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127240b4);
  return;
}



/* Entry: 1054aefe4; end: 1054af057; -[SCBloopsOnboardCardTrackerImpl initWithUserTrackedLogger:] */

undefined1 * FUN_1054aefe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e87c0;
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



/* Entry: 1054af058; end: 1054af13f; -[SCBloopsOnboardCardTrackerImpl trackOnboardingCardEventFrom:withContentId:withDelay:hasCameos:] */

void FUN_1054af058(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b98a0;
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  if (param_4 - 1U < 0x11) {
    uVar2 = *(undefined8 *)(&UNK_10ddb05d0 + (param_4 - 1U) * 8);
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  func_0x00010c172900(puVar1,param_3,uVar2);
  func_0x00010c172260(puVar1,param_3,param_5);
  _objc_release(param_5);
  func_0x00010c1a5b00(puVar1,param_3,param_6);
  func_0x00010c172300(puVar1,param_3,(long)(param_1 * 1000.0));
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054af140; end: 1054af14b; -[SCBloopsOnboardCardTrackerImpl .cxx_destruct] */

void FUN_1054af140(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054af14c; end: 1054af1bf; -[SCBloopsOnboardingListItemAnalyticsImpl initWithOnboardingAnalyticsTracker:] */

undefined1 * FUN_1054af14c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e87c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined8 *)((long)puVar1 + 0x30) = 0x3ff0000000000000;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054af1c0; end: 1054af203; -[SCBloopsOnboardingListItemAnalyticsImpl dealloc] */

void FUN_1054af1c0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010becb200();
  puStack_28 = PTR_PTR_1126e87c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1054af204; end: 1054af33f; -[SCBloopsOnboardingListItemAnalyticsImpl didFinishLoadingContentWithId:forSourceType:hasCameos:] */

void FUN_1054af204(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_4;
  _objc_release(uVar1);
  *(undefined8 *)(param_2 + 0x18) = param_5;
  *(undefined1 *)(param_2 + 0x39) = param_6;
  if ((*(char *)(param_2 + 0x38) == '\x01') && (*(long *)(param_2 + 0x20) != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar2);
    _objc_initWeak(auStack_48,param_2);
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_1;
    func_0x00010beac240(param_2);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0;
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 1054af340; end: 1054af373;  */

void FUN_1054af340(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010becdfe0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054af374; end: 1054af377; -[SCBloopsOnboardingListItemAnalyticsImpl start] */

void FUN_1054af374(void)

{
  return;
}



/* Entry: 1054af378; end: 1054af37b; -[SCBloopsOnboardingListItemAnalyticsImpl stop] */

void FUN_1054af378(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reset_1125821f0);
  return;
}



/* Entry: 1054af37c; end: 1054af46b; -[SCBloopsOnboardingListItemAnalyticsImpl willDisplaySection] */

void FUN_1054af37c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  *(undefined1 *)(param_1 + 0x38) = 1;
  lVar1 = param_1;
  func_0x00010bde7d40();
  if ((int)lVar1 == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  else {
    _objc_initWeak(auStack_28,param_1);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010beac240(param_1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1054af46c; end: 1054af49b;  */

void FUN_1054af46c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becdfe0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054af49c; end: 1054af4a3; -[SCBloopsOnboardingListItemAnalyticsImpl didEndDisplaySection] */

void FUN_1054af49c(long param_1)

{
  *(undefined1 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010becb210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__terminateDisplayTimer_112590628);
  return;
}



/* Entry: 1054af4a4; end: 1054af61b; -[SCBloopsOnboardingListItemAnalyticsImpl _setupDisplayTimerWithBlock:] */

void FUN_1054af4a4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___dispatch_source_type_timer_11034be38;
  _dispatch_source_create(PTR___dispatch_source_type_timer_11034be38,0,0,uVar1);
  if (puVar2 == (undefined *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    uVar3 = 0;
    _dispatch_time(0,(long)(*(double *)(param_1 + 0x30) * 1000000000.0));
    _dispatch_source_set_timer(puVar2,uVar3,0,0);
    _objc_initWeak(auStack_48,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1054af61c;
    puStack_60 = &UNK_110848708;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    ppuVar4 = &puStack_78;
    lStack_58 = param_3;
    _objc_retainBlock(ppuVar4);
    _dispatch_source_set_event_handler(puVar2,ppuVar4);
    _dispatch_resume(puVar2);
    _objc_retain(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar2;
    _objc_release(uVar3);
    _objc_release(ppuVar4);
    _objc_release(lStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1054af61c; end: 1054af65f;  */

void FUN_1054af61c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    func_0x00010becb200(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054af660; end: 1054af69b; -[SCBloopsOnboardingListItemAnalyticsImpl _terminateDisplayTimer] */

void FUN_1054af660(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    _dispatch_source_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1054af69c; end: 1054af6ab; -[SCBloopsOnboardingListItemAnalyticsImpl _reset] */

void FUN_1054af69c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054af6ac; end: 1054af6cb; -[SCBloopsOnboardingListItemAnalyticsImpl _contentIsReady] */

bool FUN_1054af6ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c08fa60(lVar1);
  return lVar1 != 0;
}



/* Entry: 1054af6cc; end: 1054af733; -[SCBloopsOnboardingListItemAnalyticsImpl _trackOnboardingCardShownWithLoadingDuration:] */

void FUN_1054af6cc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  lVar1 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2783c0(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054af734; end: 1054af777; -[SCBloopsOnboardingListItemAnalyticsImpl .cxx_destruct] */

void FUN_1054af734(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1054af778; end: 1054af81b; -[SCBloopsCTPOptionsServiceImpl initWithUserService:withCircumstanceEngine:] */

undefined1 *
FUN_1054af778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e87d0;
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



/* Entry: 1054af81c; end: 1054af847; -[SCBloopsCTPOptionsServiceImpl cameosOptionsForContext:] */

void FUN_1054af81c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 8) {
    func_0x00010bdd9080(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054af848; end: 1054af8ff; -[SCBloopsCTPOptionsServiceImpl _cameosChatOptions] */

void FUN_1054af848(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054af900; end: 1054afa13;  */

void FUN_1054af900(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010be96700(lVar1);
    puVar2 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054afa14; end: 1054afabb;  */

void FUN_1054afa14(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar3 = uVar1;
    if ((param_3 == 0) && (uVar2 = uVar1, func_0x00010bee6f20(), (uVar2 & 1) != 0)) {
      func_0x00010bdd9040(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bdd90a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054afabc; end: 1054afc37; -[SCBloopsCTPOptionsServiceImpl _cameoOptionsForUserDataModel:] */

void FUN_1054afabc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c067f00(uVar7,param_2,&PTR____CFConstantStringClassReference_110eef278,0x3c,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110eef298,10,0);
  puVar2 = PTR_PTR_1126b98a8;
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_3;
  func_0x00010c292180(param_3);
  _objc_release(param_3);
  lVar4 = param_1;
  func_0x00010be5c9a0(param_1,param_2,uVar3);
  func_0x00010c0df840(puVar5,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd9020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017620(puVar2,param_2,puVar6,param_1,uVar7,uVar1,0);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new(PTR_PTR_1126ae820);
    func_0x00010bdd90a0(puVar5,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(puVar2,param_2,puVar5);
    func_0x00010bf436e0(puVar2);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054afc38; end: 1054afc9b; -[SCBloopsCTPOptionsServiceImpl _cameosDefaultOptionsObservable] */

void FUN_1054afc38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new(PTR_PTR_1126ae820);
  func_0x00010bdd90a0(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(puVar1,param_2,param_1);
  func_0x00010bf436e0(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054afc9c; end: 1054afd77; -[SCBloopsCTPOptionsServiceImpl _cameosDefaultOptionsWithOnePersonFriendCameoContext:] */

void FUN_1054afc9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110eef258,10,0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c067f00(uVar2,param_2,&PTR____CFConstantStringClassReference_110eef238,10,0);
  puVar3 = PTR_PTR_1126b98a8;
  _objc_alloc(PTR_PTR_1126b98a8);
  lVar4 = param_1;
  func_0x00010bdf9460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd9020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017620(puVar3,param_2,lVar4,param_1,uVar1,uVar2,param_3);
  _objc_release(param_1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054afd78; end: 1054afeb7; -[SCBloopsCTPOptionsServiceImpl _retrieveGendersWithCompletion:] */

void FUN_1054afd78(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee6e40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x1054afe50;
    puStack_40 = &UNK_11088f5f8;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010bfcbd20(uVar1,param_2,&PTR____CFConstantStringClassReference_110de32f8,param_1,0,
                        &puStack_58);
    _objc_release(param_1);
    _objc_release(uVar1);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1054afeb8; end: 1054afecf; -[SCBloopsCTPOptionsServiceImpl _mapBloopsGenderToCTP:] */

undefined1 FUN_1054afeb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (param_3 != 3) {
    uVar1 = param_3 == 2;
  }
  return uVar1;
}



/* Entry: 1054afed0; end: 1054afffb; -[SCBloopsCTPOptionsServiceImpl _cameoApiVersion] */

void FUN_1054afed0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de32f8;
  func_0x00010bf44740(&PTR____CFConstantStringClassReference_110de32f8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf529e0();
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar2 = ppuVar1;
    func_0x00010c0dfd40(ppuVar1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(ppuVar2);
  }
  ppuVar2 = ppuVar1;
  func_0x00010bf529e0();
  if ((undefined **)0x1 < ppuVar2) {
    ppuVar2 = ppuVar1;
    func_0x00010c0dfd40(ppuVar1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(ppuVar2);
  }
  ppuVar2 = ppuVar1;
  func_0x00010bf529e0();
  if ((undefined **)0x2 < ppuVar2) {
    ppuVar2 = ppuVar1;
    func_0x00010c0dfd40(ppuVar1,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(ppuVar2);
  }
  puVar3 = PTR_PTR_1126b98b0;
  _objc_alloc(PTR_PTR_1126b98b0);
  func_0x00010c028100();
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054afffc; end: 1054b0087; -[SCBloopsCTPOptionsServiceImpl _userLocale] */

void FUN_1054afffc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c106d20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110de3318;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1054b0088; end: 1054b0093; -[SCBloopsCTPOptionsServiceImpl _defaultGenderSet] */

undefined ** FUN_1054b0088(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_11117eb38;
}



/* Entry: 1054b0094; end: 1054b00d7; -[SCBloopsCTPOptionsServiceImpl _userModelIsValidForOptions:] */

bool FUN_1054b0094(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c08fa60();
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 1054b00d8; end: 1054b0137; -[SCBloopsCTPOptionsServiceImpl .cxx_destruct] */

void FUN_1054b00d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054b0138; end: 1054b017b; -[SCBloopsCTPOptionsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b0138(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127240e4);
  _objc_destroyWeak(param_1 + _DAT_1127240e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127240ec);
  return;
}



/* Entry: 1054b017c; end: 1054b01eb; -[SCBloopsFeatureV2 initWithBloopsEnabledByCOF:bloopsEnabledBySUP:bloopsDiscoverEnabledCOF:] */

undefined1 *
FUN_1054b017c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e87d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    func_0x00010bed41e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1054b01ec; end: 1054b01f3; -[SCBloopsFeatureV2 isBloopsFeatureEnabled] */

undefined1 FUN_1054b01ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 1054b01f4; end: 1054b0227; -[SCBloopsFeatureV2 isBloopsDiscoverEnabled] */

byte FUN_1054b01f4(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1;
  func_0x00010c06d640();
  if ((int)lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10);
  }
  return bVar2 & 1;
}



/* Entry: 1054b0228; end: 1054b024f; -[SCBloopsFeatureV2 bloopsFeatureError] */

void FUN_1054b0228(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054b0250; end: 1054b0263; -[SCBloopsFeatureV2 errorDomain] */

void FUN_1054b0250(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 1054b0264; end: 1054b0267; -[SCBloopsFeatureV2 addListener:] */

void FUN_1054b0264(void)

{
  return;
}



/* Entry: 1054b0268; end: 1054b026b; -[SCBloopsFeatureV2 removeListener:] */

void FUN_1054b0268(void)

{
  return;
}


