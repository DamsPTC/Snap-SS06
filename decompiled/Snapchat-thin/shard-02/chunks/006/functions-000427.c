/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101fa94fc; end: 101fa958f;  */

void FUN_101fa94fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100343a28();
  func_0x000107c613fc();
  FUN_101fa95e4(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 101fa9590; end: 101fa95e3;  */

undefined8 FUN_101fa9590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101fa95e4(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101fa95e4; end: 101fa97bf;  */

void FUN_101fa95e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a9ca8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2dce0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f03f180);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 101fa97c0; end: 101fa97fb;  */

void FUN_101fa97c0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101fa97fc; end: 101fa984f;  */

void FUN_101fa97fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fa9850; end: 101fa989f;  */

undefined8 FUN_101fa9850(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101fa98a0; end: 101fa98e3;  */

undefined1  [16] FUN_101fa98a0(void)

{
  return ZEXT816(0x1104b0658);
}



/* Entry: 101fa98e4; end: 101fa990b;  */

void FUN_101fa98e4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101fa990c; end: 101fa9913;  */

undefined8 FUN_101fa990c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101fa9914; end: 101fa99bb;  */

long FUN_101fa9914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x000100943724(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000100943744(param_1,param_2,param_3,param_4);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 101fa99bc; end: 101fa99f7;  */

void FUN_101fa99bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101fa99f8; end: 101fa9a3f;  */

undefined8 FUN_101fa99f8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x00010335b710();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 101fa9a40; end: 101fa9a7b;  */

undefined1  [16] FUN_101fa9a40(void)

{
  return ZEXT816(0x1104b06f8);
}



/* Entry: 101fa9a7c; end: 101fa9b0f;  */

void FUN_101fa9a7c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010034aab0();
  func_0x000107c613fc();
  FUN_101fa9b64(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 101fa9b10; end: 101fa9b63;  */

undefined8 FUN_101fa9b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101fa9b64(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101fa9b64; end: 101fa9c3f;  */

void FUN_101fa9b64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x00010313f9d0(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010313f814();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x00010313f848();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 101fa9c40; end: 101fa9c7b;  */

void FUN_101fa9c40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101fa9c7c; end: 101fa9ccf;  */

void FUN_101fa9c7c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fa9cd0; end: 101fa9d13;  */

undefined1  [16] FUN_101fa9cd0(void)

{
  return ZEXT816(0x1104b0778);
}



/* Entry: 101fa9d14; end: 101fa9d67;  */

void FUN_101fa9d14(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101fa9d68; end: 101fa9dbb;  */

undefined8 FUN_101fa9d68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100754018(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101fa9dbc; end: 101fa9df7;  */

void FUN_101fa9dbc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101fa9df8; end: 101fa9e3b;  */

undefined1  [16] FUN_101fa9df8(void)

{
  return ZEXT816(0x1104b0818);
}



/* Entry: 101fa9e3c; end: 101fa9e8f;  */

void FUN_101fa9e3c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101fa9e90; end: 101fa9efb;  */

void FUN_101fa9e90(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e4a968,&UNK_10da42ab8);
  func_0x000107c613fc();
  pcVar1 = FUN_101fa9efc;
  func_0x0001000841fc(FUN_101fa9efc,0);
  func_0x000100084214("InspectorPluginRegistryServiceProvider",0x26,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 101fa9efc; end: 101fa9f03;  */

void FUN_101fa9efc(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 101fa9f04; end: 101fa9fff;  */

void FUN_101fa9f04(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000102926ccc();
  func_0x000100082720("CreatorSubscriptionOnboardingDevelopmentNavigationPluginPluginProvider",0x46,
                      2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101faa000; end: 101faa5af;  */

void FUN_101faa000(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11053e3a8;
  ppuVar4 = &PTR_DAT_112eb9bc0;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  uVar2 = 0x112e4a980;
  func_0x0001000285a8(0x112e4a980,&UNK_10da42ad0);
  func_0x0001000a6ee8(&UNK_110537a58,"BatteryInfoPluginKey",0x14,2,FUN_101faa5b0,0,uVar2,
                      &UNK_110537a58,&PTR_DAT_112eb5058);
  func_0x000107c6157c(param_2);
  func_0x0001000a6ee8(&UNK_110537af8,"BestFriendEmojiPluginKey",0x18,2,0x101faa5ec,param_2,uVar2,
                      &UNK_110537af8,&PTR_DAT_112eb5170);
  func_0x000107c61574(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110537b70,"BitmojiAvatarPluginKey",0x16,2,0x101faa62c,param_3,uVar2,
                      &UNK_110537b70,&PTR_DAT_112eb5280);
  func_0x000107c61574(param_3);
  puVar3 = &UNK_1104b08a8;
  func_0x000107c613fc(&UNK_1104b08a8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_110537c88,"BitmojiPoseOverridePluginKey",0x1c,2,FUN_101faa66c,puVar3,
                      uVar2,&UNK_110537c88,&PTR_DAT_112eb5378);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_110537da0,"FeatureSettingsPluginKey",0x18,2,FUN_101faa684,param_6,uVar2,
                      &UNK_110537da0,&PTR_DAT_112eb5588);
  func_0x000107c61574(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000a6ee8(&UNK_110537e90,"FriendFeedPluginKey",0x13,2,0x101faa6c4,param_7,uVar2,
                      &UNK_110537e90,&PTR_DAT_112eb5668);
  func_0x000107c61574(param_7);
  puVar3 = &UNK_1104b08d0;
  func_0x000107c613fc(&UNK_1104b08d0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_8;
  *(undefined8 *)(puVar3 + 0x18) = param_9;
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000a6ee8(&UNK_110538020,"FriendLocationPluginKey",0x17,2,FUN_101faa730,puVar3,uVar2,
                      &UNK_110538020,&PTR_DAT_112eb5760);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_1105381b0,"HeadingDataPluginKey",0x14,2,FUN_101faa798,param_5,uVar2,
                      &UNK_1105381b0,&PTR_DAT_112eb5878);
  func_0x000107c61574(param_5);
  func_0x000107c6157c(param_10);
  func_0x0001000a6ee8(&UNK_110538340,"MutedFriendsPluginKey",0x15,2,0x101faa7d8,param_10,uVar2,
                      &UNK_110538340,&PTR_DAT_112eb5a50);
  func_0x000107c61574(param_10);
  func_0x000107c6157c(param_11);
  func_0x0001000a6ee8(&UNK_1105385c0,"SharingPreferencesPluginKey",0x1b,2,0x101faa818,param_11,uVar2
                      ,&UNK_1105385c0,&PTR_DAT_112eb5d50);
  func_0x000107c61574(param_11);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110538660,"TravelStatusPluginKey",0x15,2,0x101faa858,param_4,uVar2,
                      &UNK_110538660,&PTR_DAT_112eb5e40);
  func_0x000107c61574(param_4);
  func_0x000107c6157c(param_12);
  func_0x0001000a6ee8(&UNK_1105386d8,"UserIDPluginKey",0xf,2,0x101faa898,param_12,uVar2,
                      &UNK_1105386d8,&PTR_DAT_112eb5f28);
  func_0x000107c61574(param_12);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_110538890,"UserLocationPermissionsPluginKey",0x20,2,0x101faa8d8,param_5,
                      uVar2,&UNK_110538890,&PTR_DAT_112eb60f0);
  func_0x000107c61574(param_5);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_110538778,"UserLocationPluginKey",0x15,2,0x101faa918,param_5,uVar2,
                      &UNK_110538778,&PTR_DAT_112eb6008);
  func_0x000107c61574(param_5);
  uVar2 = 0x112e4a988;
  func_0x0001000285a8(0x112e4a988,&UNK_10da42ad8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("MapSDKDataBridgeCorePluginRegistryServiceProvider",0x31,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 101faa5b0; end: 101faa66b;  */

void FUN_101faa5b0(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001026badd4();
  func_0x000100082720("BatteryInfoPluginPluginProvider",0x1f,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101faa66c; end: 101faa683;  */

void FUN_101faa66c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  (*(code *)&UNK_1026bc4d0)(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("BitmojiPoseOverridePluginPluginProvider",0x27,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101faa684; end: 101faa703;  */

void FUN_101faa684(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001026bd8fc();
  func_0x000100082720("FeatureSettingsPluginPluginProvider",0x23,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101faa704; end: 101faa72f;  */

void FUN_101faa704(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101faa730; end: 101faa747;  */

void FUN_101faa730(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  (*(code *)&UNK_1026bf76c)(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("FriendLocationPluginPluginProvider",0x22,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101faa748; end: 101faa797;  */

void FUN_101faa748(undefined8 *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  (*param_3)(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720(param_4,param_5,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101faa798; end: 101faa993;  */

void FUN_101faa798(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x0001026c1dcc();
  func_0x000100082720("HeadingDataPluginPluginProvider",0x1f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101faa994; end: 101faabb3;  */

void FUN_101faa994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_1105f5ea0;
  ppuVar3 = &PTR_DAT_112f2d890;
  uVar4 = param_3;
  func_0x0001000a3aa4();
  uVar2 = 0x112e4a990;
  func_0x0001000285a8(0x112e4a990,&UNK_10da42ae0);
  func_0x0001000a6ee8(&UNK_11051c9f8,"DropShareReportingPluginKey",0x1b,2,FUN_101faabb4,0,uVar2,
                      &UNK_11051c9f8,&PTR_DAT_112ea3bd8);
  func_0x000107c6157c(param_1);
  func_0x0001000a6ee8(&UNK_110516ed8,"FriendStoryShareReportingPluginKey",0x22,2,0x101faabf0,param_1
                      ,uVar2,&UNK_110516ed8,&PTR_DAT_112ea1348);
  func_0x000107c61574(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000a6ee8(&UNK_11051a398,"PromptLensResponseReportingPluginKey",0x24,2,0x101faac30,
                      param_2,uVar2,&UNK_11051a398,&PTR_DAT_112ea2ed0);
  func_0x000107c61574(param_2);
  func_0x0001000a6ee8(&UNK_110566ef0,"SoundShareReportingPluginKey",0x1c,2,0x101faac70,0,uVar2,
                      &UNK_110566ef0,&PTR_DAT_112eca818);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110516468,"SpotlightStoryShareReportingPluginKey",0x25,2,0x101faacac,
                      param_3,uVar2,&UNK_110516468,&PTR_DAT_112ea0e30);
  func_0x000107c61574(param_3);
  uVar2 = 0x112e4a998;
  func_0x0001000285a8(0x112e4a998,&UNK_10da42ae8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar3,uVar4,uVar2);
  return;
}



/* Entry: 101faabb4; end: 101faaceb;  */

void FUN_101faabb4(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010252361c();
  func_0x000100082720("MapDropShareReportingPluginPluginProvider",0x29,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101faacec; end: 101faae97;  */

/* WARNING: Possible PIC construction at 0x000101faae00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101faae10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101faae20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101faae30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101faae40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101faae50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101faae60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101faae70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101faae64) */
/* WARNING: Removing unreachable block (ram,0x000101faae54) */
/* WARNING: Removing unreachable block (ram,0x000101faae44) */
/* WARNING: Removing unreachable block (ram,0x000101faae34) */
/* WARNING: Removing unreachable block (ram,0x000101faae24) */
/* WARNING: Removing unreachable block (ram,0x000101faae14) */
/* WARNING: Removing unreachable block (ram,0x000101faae04) */
/* WARNING: Removing unreachable block (ram,0x000101faae74) */

void FUN_101faacec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104b08f8;
  func_0x000107c613fc(&UNK_1104b08f8,0x90,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  uVar2 = 0x112e4a9a0;
  func_0x0001000285a8(0x112e4a9a0,&UNK_10da42af0);
  func_0x000107c613fc();
  pcVar3 = FUN_101faaf98;
  func_0x0001000841fc(FUN_101faaf98,puVar1,uVar2);
  func_0x000100084214("NotificationCenterCustomCellServicesPluginRegistryServiceProvider",0x41,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101faae98; end: 101faaf97;  */

void FUN_101faae98(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  bVar1 = *param_2;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x0001024fbb30(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                          param_12);
      pcVar2 = "NotificationCenterStoryReplyServicesPluginProvider";
      uVar3 = 0x32;
    }
    else {
      func_0x0001024fadbc(param_3,param_13,param_14,param_15,param_10,param_11);
      pcVar2 = "NotificationCenterSpotlightReplyServicesPluginProvider";
      uVar3 = 0x36;
    }
  }
  else if (bVar1 == 2) {
    func_0x0001024f470c(param_16,param_17,param_15,param_18);
    pcVar2 = "NotificationCenterModerationServicesPluginProvider";
    uVar3 = 0x32;
    param_3 = param_16;
  }
  else {
    func_0x0001024f60f8();
    pcVar2 = "NotificationCenterPostMentionsServicesPluginProvider";
    uVar3 = 0x34;
    param_3 = param_17;
  }
  func_0x000100082720(pcVar2,uVar3,2);
  *param_1 = param_3;
  return;
}



/* Entry: 101faaf98; end: 101faafe3;  */

void FUN_101faaf98(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101faae98(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 101faafe4; end: 101faba27;  */

/* WARNING: Possible PIC construction at 0x000101fab320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab3b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab3c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab3d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab3e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab3f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab4a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab4c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab4e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab4f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fab530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fab524) */
/* WARNING: Removing unreachable block (ram,0x000101fab514) */
/* WARNING: Removing unreachable block (ram,0x000101fab504) */
/* WARNING: Removing unreachable block (ram,0x000101fab4f4) */
/* WARNING: Removing unreachable block (ram,0x000101fab4e4) */
/* WARNING: Removing unreachable block (ram,0x000101fab4d4) */
/* WARNING: Removing unreachable block (ram,0x000101fab4c4) */
/* WARNING: Removing unreachable block (ram,0x000101fab4b4) */
/* WARNING: Removing unreachable block (ram,0x000101fab4a4) */
/* WARNING: Removing unreachable block (ram,0x000101fab494) */
/* WARNING: Removing unreachable block (ram,0x000101fab484) */
/* WARNING: Removing unreachable block (ram,0x000101fab474) */
/* WARNING: Removing unreachable block (ram,0x000101fab464) */
/* WARNING: Removing unreachable block (ram,0x000101fab454) */
/* WARNING: Removing unreachable block (ram,0x000101fab444) */
/* WARNING: Removing unreachable block (ram,0x000101fab434) */
/* WARNING: Removing unreachable block (ram,0x000101fab424) */
/* WARNING: Removing unreachable block (ram,0x000101fab414) */
/* WARNING: Removing unreachable block (ram,0x000101fab404) */
/* WARNING: Removing unreachable block (ram,0x000101fab3f4) */
/* WARNING: Removing unreachable block (ram,0x000101fab3e4) */
/* WARNING: Removing unreachable block (ram,0x000101fab3d4) */
/* WARNING: Removing unreachable block (ram,0x000101fab3c4) */
/* WARNING: Removing unreachable block (ram,0x000101fab3b4) */
/* WARNING: Removing unreachable block (ram,0x000101fab3a4) */
/* WARNING: Removing unreachable block (ram,0x000101fab394) */
/* WARNING: Removing unreachable block (ram,0x000101fab384) */
/* WARNING: Removing unreachable block (ram,0x000101fab374) */
/* WARNING: Removing unreachable block (ram,0x000101fab364) */
/* WARNING: Removing unreachable block (ram,0x000101fab354) */
/* WARNING: Removing unreachable block (ram,0x000101fab344) */
/* WARNING: Removing unreachable block (ram,0x000101fab334) */
/* WARNING: Removing unreachable block (ram,0x000101fab324) */
/* WARNING: Removing unreachable block (ram,0x000101fab534) */

void FUN_101faafe4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104b0920;
  func_0x000107c613fc(&UNK_1104b0920,0x230,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  *(undefined8 *)(puVar1 + 0x1d8) = param_59;
  *(undefined8 *)(puVar1 + 0x1e0) = param_60;
  *(undefined8 *)(puVar1 + 0x1e8) = param_61;
  *(undefined8 *)(puVar1 + 0x1f0) = param_62;
  *(undefined8 *)(puVar1 + 0x1f8) = param_63;
  *(undefined8 *)(puVar1 + 0x200) = param_64;
  *(undefined8 *)(puVar1 + 0x208) = param_65;
  *(undefined8 *)(puVar1 + 0x210) = param_66;
  *(undefined8 *)(puVar1 + 0x218) = param_67;
  *(undefined8 *)(puVar1 + 0x220) = param_68;
  *(undefined8 *)(puVar1 + 0x228) = param_69;
  uVar2 = 0x112e4a9a8;
  func_0x0001000285a8(0x112e4a9a8,&UNK_10da42b10);
  func_0x000107c613fc();
  pcVar3 = FUN_101faba28;
  func_0x0001000841fc(FUN_101faba28,puVar1,uVar2);
  func_0x000100084214("SCDiscoverFeedActionHandlingPluginRegistryServiceProvider",0x39,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101faba28; end: 101fabb77;  */

void FUN_101faba28(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000101fab558(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                      *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                      *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                      *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                      *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                      *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                      *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                      *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                      *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                      *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                      *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                      *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                      *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                      *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                      *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                      *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                      *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                      *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                      *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                      *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                      *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                      *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228));
  return;
}



/* Entry: 101fabb78; end: 101fabc0b;  */

void FUN_101fabb78(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*param_2 == '\x01') {
    func_0x00010396f790(param_12,param_13);
    pcVar1 = "SCTalkInAppNotificationProviderPluginProvider";
    uVar2 = 0x2d;
  }
  else {
    func_0x0001024dd108(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
    pcVar1 = "FriendingInAppNotificationProviderPluginProvider";
    uVar2 = 0x30;
    param_12 = param_3;
  }
  func_0x000100082720(pcVar1,uVar2,2);
  *param_1 = param_12;
  return;
}



/* Entry: 101fabc0c; end: 101fabc47;  */

void FUN_101fabc0c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101fabb78(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101fabc48; end: 101fabd53;  */

void FUN_101fabc48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  puVar1 = &UNK_1106543b0;
  ppuVar3 = &PTR_DAT_112f68300;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112e4a9b8;
  func_0x0001000285a8(0x112e4a9b8,&UNK_10da42b20);
  func_0x0001000a6ee8(&UNK_110654018,"LACLensExplorerButtonPluginKey",0x1e,2,FUN_101fabd54,param_2,
                      uVar2,&UNK_110654018,&PTR_DAT_112f67df8);
  func_0x000107c61574(param_2);
  uVar2 = 0x112e4a9c0;
  func_0x0001000285a8(0x112e4a9c0,&UNK_10da42b28);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar3,param_4,uVar2);
  func_0x0001000a7f38("SCLensExplorerBannerProviderPluginRegistryServiceProvider",0x39,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 101fabd54; end: 101fabd93;  */

void FUN_101fabd54(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000103429600();
  func_0x000100082720("LACLensExplorerButtonPluginProvider",0x23,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101fabd94; end: 101fac20b;  */

void FUN_101fabd94(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8,long param_9,undefined1 *param_10,long *param_11,
                  long *param_12,long *param_13,long *param_14,long *param_15,long *param_16,
                  long *param_17,char *param_18,long *param_19,long *param_20,long *param_21,
                  long *param_22,long *param_23,long *param_24,long *param_25,long *param_26,
                  long *param_27,long *param_28,long *param_29,long *param_30,long *param_31,
                  long param_32,long *param_33,long *param_34,long *param_35,long *param_36,
                  long *param_37,long *param_38,long *param_39,long *param_40,undefined8 param_41,
                  long *param_42,long *param_43,undefined8 param_44,undefined8 param_45,
                  long *param_46,long *param_47,long *param_48,undefined8 param_49,long *param_50,
                  long *param_51,long *param_52,long *param_53)

{
  long *plVar1;
  long *plVar2;
  char *pcVar3;
  long in_register_00005008;
  long in_register_00005028;
  long in_register_00005048;
  long in_register_00005068;
  long in_register_00005088;
  long in_register_000050a8;
  long in_register_000050c8;
  long in_register_000050e8;
  long in_d16;
  long in_register_00005208;
  long in_d17;
  long in_register_00005228;
  long in_d18;
  long in_register_00005248;
  long in_d19;
  long in_register_00005268;
  long in_d20;
  long in_register_00005288;
  long in_d21;
  long in_register_000052a8;
  long in_d22;
  long in_register_000052c8;
  
  pcVar3 = param_18;
  plVar2 = (long *)param_18;
  plVar1 = param_31;
  param_1 = param_1;
  switch(*param_10) {
  default:
    param_18 = (char *)param_11;
  case 0x53:
  case 0x55:
  case 0x57:
  case 0x59:
  case 0x5b:
  case 0x5d:
  case 0x5f:
  case 99:
  case 0x69:
  case 0x6b:
  case 0x6f:
  case 0x73:
  case 0x75:
  case 0x79:
  case 0x7b:
  case 0x81:
  case 0x83:
  case 0x8f:
  case 0xa1:
  case 0xa3:
  case 0xb3:
  case 0xc9:
  case 0xcb:
  case 0xcd:
  case 0xcf:
  case 0xd1:
  case 0xd3:
  case 0xe9:
  case 0xf3:
    param_20 = param_12;
  case 0x61:
  case 0x65:
  case 0x77:
  case 0x7d:
  case 0x7f:
  case 0x85:
  case 0x89:
  case 0x8b:
  case 0x8d:
  case 0x91:
  case 0x9d:
  case 0x9f:
  case 0xa5:
  case 0xab:
  case 0xad:
  case 0xb7:
  case 0xb9:
  case 0xbd:
  case 0xbf:
  case 0xc3:
  case 199:
  case 0xe1:
  case 0xe3:
  case 0xe5:
  case 0xed:
  case 0xfb:
  case 0xfd:
  case 0xff:
    param_23 = param_13;
  case 0xd9:
    FUN_1021fbaac(param_18,param_20,param_23);
    param_31 = (long *)param_18;
  case 0xf2:
    param_18 = "SCDiscoverFeedBadgePluginProvider";
  case 0xd8:
    pcVar3 = (char *)((long)param_18 + 0x550);
  case 0xf8:
    param_20 = (long *)0x23;
    param_18 = (char *)param_31;
    break;
  case 1:
    param_18 = (char *)param_14;
  case 0xae:
    param_20 = param_15;
  case 0xa4:
  case 0xce:
    func_0x0001024705fc(param_18,param_20);
    pcVar3 = "CaaSCameraPageLaunchPluginProvider";
    param_20 = (long *)0x22;
    break;
  case 2:
    FUN_101fcab60(param_16,param_17);
    param_31 = param_16;
  case 0x9e:
  case 0xde:
    pcVar3 = "SCCameraPageLauncherPluginProvider";
    param_20 = (long *)0x22;
    param_18 = (char *)param_31;
    break;
  case 3:
    param_20 = param_14;
  case 0x28:
    func_0x000102471104(param_18,param_20);
  case 0x54:
    pcVar3 = "ChatCameraPageLaunchPluginProvider";
    param_20 = (long *)0x22;
    break;
  case 4:
    func_0x000103b4e5cc();
    param_31 = param_19;
  case 0x90:
    param_18 = "SCDiscoverFeedBadgePluginProvider";
  case 0xdc:
    pcVar3 = (char *)((long)param_18 + 0x480);
  case 200:
    param_20 = (long *)0x30;
    param_18 = (char *)param_31;
    break;
  case 5:
    param_18 = (char *)param_12;
    param_20 = param_21;
  case 0x52:
    func_0x000102926660(param_18,param_20);
  case 0x88:
    pcVar3 = "SCDiscoverFeedBadgePluginProvider";
    plVar1 = (long *)param_18;
  case 0x96:
    param_18 = (char *)plVar1;
    pcVar3 = (char *)((long)pcVar3 + 0x440);
    param_20 = (long *)0x34;
    break;
  case 6:
    param_18 = (char *)param_12;
  case 0x48:
    func_0x000102497008();
  case 0x86:
    pcVar3 = "DiscoverFeedPageLauncherPluginProvider";
    param_20 = (long *)0x26;
    plVar1 = (long *)param_18;
  case 0x84:
    param_18 = (char *)plVar1;
    break;
  case 7:
  case 0x30:
  case 0xba:
  case 0xc2:
    param_18 = (char *)param_12;
    param_20 = param_22;
  case 0x6e:
    func_0x000102994880(param_18,param_20);
    pcVar3 = "FamilyCenterPageLauncherPluginProvider";
    param_31 = (long *)param_18;
  case 0x38:
    param_20 = (long *)0x26;
    param_18 = (char *)param_31;
    break;
  case 8:
  case 0xe0:
    param_18 = (char *)param_12;
    param_20 = param_24;
  case 0x78:
    func_0x00010293897c(param_18,param_20);
    param_31 = (long *)param_18;
  case 0xd6:
    pcVar3 = "FanPassSubscriptionPageLauncherPluginProvider";
    param_20 = (long *)0x2d;
    param_18 = (char *)param_31;
    break;
  case 9:
    param_18 = (char *)param_12;
  case 0xb4:
    param_20 = param_25;
  case 0x20:
  case 0xd0:
    func_0x000102937f2c(param_18,param_20);
    param_31 = (long *)param_18;
  case 0xfa:
    pcVar3 = "FanPassSubscriptionManagementPageLauncherPluginProvider";
    param_20 = (long *)0x37;
    param_18 = (char *)param_31;
    break;
  case 10:
  case 0xbc:
    func_0x00010250e528(param_26,param_27);
    param_18 = (char *)param_26;
  case 0xe8:
    param_31 = (long *)param_18;
  case 0x70:
    pcVar3 = "FullMapPageLauncherPluginPluginProvider";
    param_20 = (long *)0x27;
    param_18 = (char *)param_31;
    break;
  case 0xb:
  case 0xa0:
    param_18 = (char *)param_28;
  case 0x8c:
    func_0x0001024fcc60();
  case 0xee:
    pcVar3 = "GamesExplorerPageLaunchPluginPluginProvider";
code_r0x000101fac1d8:
    param_20 = (long *)0x2b;
    break;
  case 0xc:
    plVar2 = param_14;
    param_20 = param_15;
    param_23 = param_29;
    param_27 = param_30;
    param_29 = param_31;
  case 0xaa:
  case 0xea:
    func_0x0001036c9cb0(plVar2,param_20,param_23,param_27,param_29);
    param_18 = "SCDiscoverFeedBadgePluginProvider";
    param_31 = plVar2;
  case 0x24:
    pcVar3 = (char *)((long)param_18 + 0x2e0);
  case 0x3c:
    param_20 = (long *)0x29;
    param_18 = (char *)param_31;
    break;
  case 0xd:
    param_18 = (char *)param_33;
    param_20 = param_14;
  case 0x72:
  case 0x9c:
  case 0xda:
    func_0x000102471aa8(param_18,param_20);
  case 0x40:
    pcVar3 = "LegacyLiveLensPreviewPageLauncherPluginProvider";
    param_20 = (long *)0x2f;
    break;
  case 0xe:
    param_18 = (char *)param_17;
    param_20 = param_26;
  case 0x58:
    param_23 = param_34;
  case 0x60:
    FUN_10215f8cc(param_18,param_20,param_23);
    pcVar3 = "SCMapPageLauncherPluginProvider";
    param_20 = (long *)0x1f;
    break;
  case 0xf:
    param_18 = (char *)param_35;
  case 0x80:
    func_0x0001024d3c40();
    param_31 = (long *)param_18;
  case 0x76:
    param_18 = "SCDiscoverFeedBadgePluginProvider";
  case 0x9a:
    pcVar3 = (char *)((long)param_18 + 0x250);
    param_20 = (long *)0x32;
    param_18 = (char *)param_31;
    break;
  case 0x10:
    param_18 = (char *)param_36;
    param_20 = param_12;
    param_23 = param_37;
  case 0x2c:
  case 0x34:
  case 0x44:
  case 0x4c:
    param_27 = param_38;
  case 0xb2:
    func_0x0001029a819c(param_18,param_20,param_23,param_27);
  case 100:
    pcVar3 = "MyReportsPageLauncherPluginProvider";
    param_31 = (long *)param_18;
  case 0xf6:
    param_20 = (long *)0x23;
    param_18 = (char *)param_31;
    break;
  case 0x11:
  case 0xc0:
    param_18 = (char *)param_39;
  case 0x56:
  case 0xc6:
    func_0x00010255342c();
    pcVar3 = "PlaceAlertsPageLauncherPluginPluginProvider";
    goto code_r0x000101fac1d8;
  case 0x12:
  case 0xa2:
    func_0x000102557d00(param_40,param_41);
    param_18 = "SCDiscoverFeedBadgePluginProvider";
    param_31 = param_40;
  case 0x94:
    pcVar3 = (char *)((long)param_18 + 0x1c0);
    param_20 = (long *)0x28;
    param_18 = (char *)param_31;
    break;
  case 0x13:
    param_18 = (char *)param_42;
  case 0xa8:
    param_20 = param_12;
  case 0xb8:
    func_0x0001024fd5d0(param_18,param_20);
  case 0xca:
    pcVar3 = "PlayGamesViewPageLaunchPluginPluginProvider";
    plVar1 = (long *)param_18;
  case 0x21:
  case 0x29:
  case 0x31:
  case 0x39:
  case 0x41:
  case 0x49:
    param_18 = (char *)plVar1;
    goto code_r0x000101fac1d8;
  case 0x14:
    func_0x00010295f698();
    param_18 = (char *)param_43;
  case 0x5e:
    param_31 = (long *)param_18;
  case 0x7e:
  case 0xe6:
    pcVar3 = "PreviewPageLaunchPluginProvider";
    param_20 = (long *)0x1f;
    param_18 = (char *)param_31;
    break;
  case 0x15:
    param_18 = (char *)param_36;
  case 0x8e:
    func_0x00010248d2c4(param_18,param_12,param_44,param_45);
  case 0x8a:
  case 0x98:
    pcVar3 = "SCPublicProfileManagementPageLauncherPluginProvider";
    param_20 = (long *)0x33;
    break;
  case 0x16:
  case 0xbe:
    func_0x0001024d5570();
    pcVar3 = "SharedStoryProfilePageLaunchPluginProvider";
    param_20 = (long *)0x2a;
    break;
  case 0x17:
    func_0x0001024d4994();
    param_31 = param_35;
  case 0xac:
    param_18 = "SCDiscoverFeedBadgePluginProvider";
  case 0x5a:
  case 0x6c:
    pcVar3 = (char *)((long)param_18 + 0xc0);
    param_20 = (long *)0x35;
    param_18 = (char *)param_31;
    break;
  case 0x18:
    plVar2 = param_46;
    param_20 = param_47;
    param_23 = param_48;
    param_27 = param_12;
  case 0xfc:
    func_0x0001024b2054(plVar2,param_20,param_23,param_27,param_49);
    param_18 = "SCDiscoverFeedBadgePluginProvider";
    param_31 = plVar2;
  case 0xf0:
    pcVar3 = (char *)((long)param_18 + 0x80);
  case 0x82:
    param_20 = (long *)0x34;
    param_18 = (char *)param_31;
    break;
  case 0x19:
  case 0xa6:
    plVar2 = param_50;
  case 0x68:
    func_0x0001029b20b0(plVar2,param_12,param_48);
    param_18 = "SCDiscoverFeedBadgePluginProvider";
    param_31 = plVar2;
  case 0x7c:
    param_18 = (char *)((long)param_18 + 0x60);
  case 0xd4:
    param_20 = (long *)0x1f;
    pcVar3 = param_18;
  case 0x62:
    param_18 = (char *)param_31;
    break;
  case 0x1a:
    param_18 = (char *)param_12;
    param_20 = param_51;
    param_23 = param_31;
    param_27 = param_52;
  case 0xe2:
    param_29 = param_53;
  case 0xd2:
    func_0x000102589c00(param_18,param_20,param_23,param_27,param_29);
    param_31 = (long *)param_18;
  case 0x92:
    pcVar3 = "VenueEditorPageLauncherPluginPluginProvider";
    param_18 = (char *)param_31;
    goto code_r0x000101fac1d8;
  case 0x22:
  case 0x2a:
  case 0x32:
  case 0x3a:
  case 0x42:
  case 0x4a:
  case 0xc4:
  case 0x6a:
    param_20 = (long *)param_31[2];
    param_23 = (long *)param_31[3];
    param_27 = (long *)param_31[4];
    param_29 = (long *)param_31[5];
    param_32 = param_31[6];
    param_28 = (long *)param_31[7];
    param_30 = (long *)param_31[8];
    in_register_00005008 = param_31[10];
    param_2 = param_31[9];
  case 0xe4:
    in_register_00005028 = param_31[0xc];
    param_3 = param_31[0xb];
    in_register_00005048 = param_31[0xe];
    param_4 = param_31[0xd];
    in_register_00005068 = param_31[0x10];
    param_5 = param_31[0xf];
    in_register_00005088 = param_31[0x12];
    param_6 = param_31[0x11];
  case 0xf4:
    in_register_000050a8 = param_31[0x14];
    param_7 = param_31[0x13];
    in_register_000050c8 = param_31[0x16];
    param_8 = param_31[0x15];
    in_register_000050e8 = param_31[0x18];
    param_9 = param_31[0x17];
  case 0x5c:
    in_register_00005208 = param_31[0x1a];
    in_d16 = param_31[0x19];
  case 0xb6:
    in_register_00005228 = param_31[0x1c];
    in_d17 = param_31[0x1b];
    in_register_00005248 = param_31[0x1e];
    in_d18 = param_31[0x1d];
    in_register_00005268 = param_31[0x20];
    in_d19 = param_31[0x1f];
    in_register_00005288 = param_31[0x22];
    in_d20 = param_31[0x21];
    param_26 = param_31 + 0x23;
  case 0x74:
    in_register_000052a8 = param_26[1];
    in_d21 = *param_26;
  case 0x66:
    in_register_000052c8 = param_31[0x26];
    in_d22 = param_31[0x25];
  case 0xec:
    FUN_101fabd94(param_18,param_20,param_23,param_27,param_29,param_32,param_28,param_30,param_2,
                  in_register_00005008,param_3,in_register_00005028,param_4,in_register_00005048,
                  param_5,in_register_00005068,param_6,in_register_00005088,param_7,
                  in_register_000050a8,param_8,in_register_000050c8,param_9,in_register_000050e8,
                  in_d16,in_register_00005208,in_d17,in_register_00005228,in_d18,
                  in_register_00005248,in_d19,in_register_00005268,in_d20,in_register_00005288,
                  in_d21,in_register_000052a8,in_d22,in_register_000052c8,param_31[0x27],
                  param_31[0x28]);
    return;
  case 0x7a:
    return;
  case 0xb0:
    return;
  case 0xcc:
    goto code_r0x000101fac1e4;
  case 0xfe:
code_r0x000101fac1e8:
    *param_33 = (long)param_31;
    return;
  }
  func_0x000100082720(pcVar3,param_20,2);
  param_31 = (long *)param_18;
code_r0x000101fac1e4:
  param_33 = param_1;
  goto code_r0x000101fac1e8;
}



/* Entry: 101fac20c; end: 101fac2c3;  */

void FUN_101fac20c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101fabd94(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160));
  return;
}



/* Entry: 101fac2c4; end: 101fac4cb;  */

void FUN_101fac2c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11056a088;
  ppuVar4 = &PTR_DAT_112ecc758;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104b09c0;
  func_0x000107c613fc(&UNK_1104b09c0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  uVar3 = 0x112e4a9d8;
  func_0x0001000285a8(0x112e4a9d8,&UNK_10da42b60);
  func_0x0001000a6ee8(&UNK_110519ec8,"SCLensStudioPairSnapcodePluginKey",0x21,2,FUN_101fac4cc,puVar2
                      ,uVar3,&UNK_110519ec8,&PTR_DAT_112ea2c90);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_1105685e0,"SCScanResultsMessagePluginKey",0x1d,2,0x101fac510,param_6,
                      uVar3,&UNK_1105685e0,&PTR_DAT_112ecb518);
  func_0x000107c61574(param_6);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_1105686b8,"SCScanResultsQRCodeTextPluginKey",0x20,2,0x101fac550,param_6,
                      uVar3,&UNK_1105686b8,&PTR_DAT_112ecb540);
  func_0x000107c61574(param_6);
  uVar3 = 0x112e4a9e0;
  func_0x0001000285a8(0x112e4a9e0,&UNK_10da42b68);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  func_0x0001000a7f38("SCScanResultsViewModelProviderPluginRegistryServiceProvider",0x3b,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 101fac4cc; end: 101fac58f;  */

void FUN_101fac4cc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000102501e78(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100082720("SCLensStudioPairSnapcodeViewModelPluginProvider",0x2f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fac590; end: 101fac6fb;  */

/* WARNING: Possible PIC construction at 0x000101fac67c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fac68c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fac69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fac6ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fac6bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fac6cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fac6c0) */
/* WARNING: Removing unreachable block (ram,0x000101fac6b0) */
/* WARNING: Removing unreachable block (ram,0x000101fac6a0) */
/* WARNING: Removing unreachable block (ram,0x000101fac690) */
/* WARNING: Removing unreachable block (ram,0x000101fac680) */
/* WARNING: Removing unreachable block (ram,0x000101fac6d0) */

void FUN_101fac590(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104b09e8;
  func_0x000107c613fc(&UNK_1104b09e8,0x78,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  uVar2 = 0x112e4a9e8;
  func_0x0001000285a8(0x112e4a9e8,&UNK_10da42b70);
  func_0x000107c613fc();
  pcVar3 = FUN_101fac834;
  func_0x0001000841fc(FUN_101fac834,puVar1,uVar2);
  func_0x000100084214("SCShortcutsDataPluginRegistryServiceProvider",0x2c,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101fac6fc; end: 101fac833;  */

void FUN_101fac6fc(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  bVar1 = *param_2;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      func_0x0001021fb5d8(param_3,param_4);
      pcVar2 = "SCShortcutsDataBirthdayPluginProvider";
      uVar3 = 0x25;
    }
    else if (bVar1 == 1) {
      FUN_10220d0e4(param_5,param_6);
      pcVar2 = "ShortcutsDataCallLogPluginProvider";
      uVar3 = 0x22;
      param_3 = param_5;
    }
    else {
      FUN_1021fb72c();
      pcVar2 = "SCShortcutsDataContactBookPluginProvider";
      uVar3 = 0x28;
      param_3 = param_7;
    }
  }
  else if (bVar1 < 5) {
    if (bVar1 == 3) {
      FUN_10212df7c(param_8,param_9,param_10);
      pcVar2 = "GamesFriendsFeedShortcutsDataPluginProvider";
      uVar3 = 0x2b;
      param_3 = param_8;
    }
    else {
      func_0x00010250d564();
      pcVar2 = "NearMeShortcutsDataPluginProvider";
      uVar3 = 0x21;
      param_3 = param_11;
    }
  }
  else if (bVar1 == 5) {
    FUN_1021fb2f4(param_3,param_4);
    pcVar2 = "NewFriendsShortcutPluginProvider";
    uVar3 = 0x20;
  }
  else {
    FUN_1021fb898(param_14,param_15,param_16,param_4);
    pcVar2 = "SCShortcutsDataUnrepliedConversationsPluginProvider";
    uVar3 = 0x33;
    param_3 = param_14;
  }
  func_0x000100082720(pcVar2,uVar3,2);
  *param_1 = param_3;
  return;
}



/* Entry: 101fac834; end: 101fac873;  */

void FUN_101fac834(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101fac6fc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 101fac874; end: 101faca13;  */

void FUN_101fac874(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_110779048;
  ppuVar4 = &PTR_DAT_11307e328;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104b0a10;
  func_0x000107c613fc(&UNK_1104b0a10,0x50,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  *(undefined8 *)(puVar2 + 0x40) = param_8;
  *(undefined8 *)(puVar2 + 0x48) = param_9;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  uVar3 = 0x112e4a9f0;
  func_0x0001000285a8(0x112e4a9f0,&UNK_10da42b78);
  func_0x0001000a6ee8(&UNK_1104d6d50,"OnDeviceMLModelsPreloaderJobPluginKey",0x25,2,FUN_101faca14,
                      puVar2,uVar3,&UNK_1104d6d50,&PTR_DAT_112e5e0d0);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e4a9f8;
  func_0x0001000285a8(0x112e4a9f8,&UNK_10da42b80);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  func_0x0001000a7f38("SCUserJobProviderIterablePluginRegistryServiceProvider",0x36,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 101faca14; end: 101faca5f;  */

void FUN_101faca14(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1021841e8(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  func_0x000100082720("OnDeviceMLModelsPreloaderJobPluginProvider",0x2a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101faca60; end: 101fae4c7;  */

/* WARNING: Possible PIC construction at 0x000101fad140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad1a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad1b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad1c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad1d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad1e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad2a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad2b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad2c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad2d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad2e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad2f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad3b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad3c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad3d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad3e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad3f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad480: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad4a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad4c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad4e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad4f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fad520: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fad514) */
/* WARNING: Removing unreachable block (ram,0x000101fad504) */
/* WARNING: Removing unreachable block (ram,0x000101fad4f4) */
/* WARNING: Removing unreachable block (ram,0x000101fad4e4) */
/* WARNING: Removing unreachable block (ram,0x000101fad4d4) */
/* WARNING: Removing unreachable block (ram,0x000101fad4c4) */
/* WARNING: Removing unreachable block (ram,0x000101fad4b4) */
/* WARNING: Removing unreachable block (ram,0x000101fad4a4) */
/* WARNING: Removing unreachable block (ram,0x000101fad494) */
/* WARNING: Removing unreachable block (ram,0x000101fad484) */
/* WARNING: Removing unreachable block (ram,0x000101fad474) */
/* WARNING: Removing unreachable block (ram,0x000101fad464) */
/* WARNING: Removing unreachable block (ram,0x000101fad454) */
/* WARNING: Removing unreachable block (ram,0x000101fad444) */
/* WARNING: Removing unreachable block (ram,0x000101fad434) */
/* WARNING: Removing unreachable block (ram,0x000101fad424) */
/* WARNING: Removing unreachable block (ram,0x000101fad414) */
/* WARNING: Removing unreachable block (ram,0x000101fad404) */
/* WARNING: Removing unreachable block (ram,0x000101fad3f4) */
/* WARNING: Removing unreachable block (ram,0x000101fad3e4) */
/* WARNING: Removing unreachable block (ram,0x000101fad3d4) */
/* WARNING: Removing unreachable block (ram,0x000101fad3c4) */
/* WARNING: Removing unreachable block (ram,0x000101fad3b4) */
/* WARNING: Removing unreachable block (ram,0x000101fad3a4) */
/* WARNING: Removing unreachable block (ram,0x000101fad394) */
/* WARNING: Removing unreachable block (ram,0x000101fad384) */
/* WARNING: Removing unreachable block (ram,0x000101fad374) */
/* WARNING: Removing unreachable block (ram,0x000101fad364) */
/* WARNING: Removing unreachable block (ram,0x000101fad354) */
/* WARNING: Removing unreachable block (ram,0x000101fad344) */
/* WARNING: Removing unreachable block (ram,0x000101fad334) */
/* WARNING: Removing unreachable block (ram,0x000101fad324) */
/* WARNING: Removing unreachable block (ram,0x000101fad314) */
/* WARNING: Removing unreachable block (ram,0x000101fad304) */
/* WARNING: Removing unreachable block (ram,0x000101fad2f4) */
/* WARNING: Removing unreachable block (ram,0x000101fad2e4) */
/* WARNING: Removing unreachable block (ram,0x000101fad2d4) */
/* WARNING: Removing unreachable block (ram,0x000101fad2c4) */
/* WARNING: Removing unreachable block (ram,0x000101fad2b4) */
/* WARNING: Removing unreachable block (ram,0x000101fad2a4) */
/* WARNING: Removing unreachable block (ram,0x000101fad294) */
/* WARNING: Removing unreachable block (ram,0x000101fad284) */
/* WARNING: Removing unreachable block (ram,0x000101fad274) */
/* WARNING: Removing unreachable block (ram,0x000101fad264) */
/* WARNING: Removing unreachable block (ram,0x000101fad254) */
/* WARNING: Removing unreachable block (ram,0x000101fad244) */
/* WARNING: Removing unreachable block (ram,0x000101fad234) */
/* WARNING: Removing unreachable block (ram,0x000101fad224) */
/* WARNING: Removing unreachable block (ram,0x000101fad214) */
/* WARNING: Removing unreachable block (ram,0x000101fad204) */
/* WARNING: Removing unreachable block (ram,0x000101fad1f4) */
/* WARNING: Removing unreachable block (ram,0x000101fad1e4) */
/* WARNING: Removing unreachable block (ram,0x000101fad1d4) */
/* WARNING: Removing unreachable block (ram,0x000101fad1c4) */
/* WARNING: Removing unreachable block (ram,0x000101fad1b4) */
/* WARNING: Removing unreachable block (ram,0x000101fad1a4) */
/* WARNING: Removing unreachable block (ram,0x000101fad194) */
/* WARNING: Removing unreachable block (ram,0x000101fad184) */
/* WARNING: Removing unreachable block (ram,0x000101fad174) */
/* WARNING: Removing unreachable block (ram,0x000101fad164) */
/* WARNING: Removing unreachable block (ram,0x000101fad154) */
/* WARNING: Removing unreachable block (ram,0x000101fad144) */
/* WARNING: Removing unreachable block (ram,0x000101fad524) */

void FUN_101faca60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  
  puVar1 = &UNK_1104b0a38;
  func_0x000107c613fc(&UNK_1104b0a38,0x400,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  *(undefined8 *)(puVar1 + 0x1d8) = param_59;
  *(undefined8 *)(puVar1 + 0x1e0) = param_60;
  *(undefined8 *)(puVar1 + 0x1e8) = param_61;
  *(undefined8 *)(puVar1 + 0x1f0) = param_62;
  *(undefined8 *)(puVar1 + 0x1f8) = param_63;
  *(undefined8 *)(puVar1 + 0x200) = param_64;
  *(undefined8 *)(puVar1 + 0x208) = param_65;
  *(undefined8 *)(puVar1 + 0x210) = param_66;
  *(undefined8 *)(puVar1 + 0x218) = param_67;
  *(undefined8 *)(puVar1 + 0x220) = param_68;
  *(undefined8 *)(puVar1 + 0x228) = param_69;
  *(undefined8 *)(puVar1 + 0x230) = param_70;
  *(undefined8 *)(puVar1 + 0x238) = param_71;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_000001f8;
  *(undefined8 *)(puVar1 + 0x250) = in_stack_00000200;
  *(undefined8 *)(puVar1 + 600) = in_stack_00000208;
  *(undefined8 *)(puVar1 + 0x260) = in_stack_00000210;
  *(undefined8 *)(puVar1 + 0x268) = in_stack_00000218;
  *(undefined8 *)(puVar1 + 0x270) = in_stack_00000220;
  *(undefined8 *)(puVar1 + 0x278) = in_stack_00000228;
  *(undefined8 *)(puVar1 + 0x280) = in_stack_00000230;
  *(undefined8 *)(puVar1 + 0x288) = in_stack_00000238;
  *(undefined8 *)(puVar1 + 0x290) = in_stack_00000240;
  *(undefined8 *)(puVar1 + 0x298) = in_stack_00000248;
  *(undefined8 *)(puVar1 + 0x2a0) = in_stack_00000250;
  *(undefined8 *)(puVar1 + 0x2a8) = in_stack_00000258;
  *(undefined8 *)(puVar1 + 0x2b0) = in_stack_00000260;
  *(undefined8 *)(puVar1 + 0x2b8) = in_stack_00000268;
  *(undefined8 *)(puVar1 + 0x2c0) = in_stack_00000270;
  *(undefined8 *)(puVar1 + 0x2c8) = in_stack_00000278;
  *(undefined8 *)(puVar1 + 0x2d0) = in_stack_00000280;
  *(undefined8 *)(puVar1 + 0x2d8) = in_stack_00000288;
  *(undefined8 *)(puVar1 + 0x2e0) = in_stack_00000290;
  *(undefined8 *)(puVar1 + 0x2e8) = in_stack_00000298;
  *(undefined8 *)(puVar1 + 0x2f0) = in_stack_000002a0;
  *(undefined8 *)(puVar1 + 0x2f8) = in_stack_000002a8;
  *(undefined8 *)(puVar1 + 0x300) = in_stack_000002b0;
  *(undefined8 *)(puVar1 + 0x308) = in_stack_000002b8;
  *(undefined8 *)(puVar1 + 0x310) = in_stack_000002c0;
  *(undefined8 *)(puVar1 + 0x318) = in_stack_000002c8;
  *(undefined8 *)(puVar1 + 800) = in_stack_000002d0;
  *(undefined8 *)(puVar1 + 0x328) = in_stack_000002d8;
  *(undefined8 *)(puVar1 + 0x330) = in_stack_000002e0;
  *(undefined8 *)(puVar1 + 0x338) = in_stack_000002e8;
  *(undefined8 *)(puVar1 + 0x340) = in_stack_000002f0;
  *(undefined8 *)(puVar1 + 0x348) = in_stack_000002f8;
  *(undefined8 *)(puVar1 + 0x350) = in_stack_00000300;
  *(undefined8 *)(puVar1 + 0x358) = in_stack_00000308;
  *(undefined8 *)(puVar1 + 0x360) = in_stack_00000310;
  *(undefined8 *)(puVar1 + 0x368) = in_stack_00000318;
  *(undefined8 *)(puVar1 + 0x370) = in_stack_00000320;
  *(undefined8 *)(puVar1 + 0x378) = in_stack_00000328;
  *(undefined8 *)(puVar1 + 0x380) = in_stack_00000330;
  *(undefined8 *)(puVar1 + 0x388) = in_stack_00000338;
  *(undefined8 *)(puVar1 + 0x390) = in_stack_00000340;
  *(undefined8 *)(puVar1 + 0x398) = in_stack_00000348;
  *(undefined8 *)(puVar1 + 0x3a0) = in_stack_00000350;
  *(undefined8 *)(puVar1 + 0x3a8) = in_stack_00000358;
  *(undefined8 *)(puVar1 + 0x3b0) = in_stack_00000360;
  *(undefined8 *)(puVar1 + 0x3b8) = in_stack_00000368;
  *(undefined8 *)(puVar1 + 0x3c0) = in_stack_00000370;
  *(undefined8 *)(puVar1 + 0x3c8) = in_stack_00000378;
  *(undefined8 *)(puVar1 + 0x3d0) = in_stack_00000380;
  *(undefined8 *)(puVar1 + 0x3d8) = in_stack_00000388;
  *(undefined8 *)(puVar1 + 0x3e0) = in_stack_00000390;
  *(undefined8 *)(puVar1 + 1000) = in_stack_00000398;
  *(undefined8 *)(puVar1 + 0x3f0) = in_stack_000003a0;
  *(undefined8 *)(puVar1 + 0x3f8) = in_stack_000003a8;
  uVar2 = 0x112e4aa00;
  func_0x0001000285a8(0x112e4aa00,&UNK_10da42c38);
  func_0x000107c613fc();
  pcVar3 = FUN_101fae4c8;
  func_0x0001000841fc(FUN_101fae4c8,puVar1,uVar2);
  func_0x000100084214("SCUserJobProviderPluginRegistryServiceProvider",0x2e,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101fae4c8; end: 101fae853;  */

void FUN_101fae4c8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000101fad548(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                      *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                      *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                      *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                      *(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                      *(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0),
                      *(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0),
                      *(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                      *(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100),
                      *(undefined8 *)(unaff_x20 + 0x108),*(undefined8 *)(unaff_x20 + 0x110),
                      *(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120),
                      *(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                      *(undefined8 *)(unaff_x20 + 0x138),*(undefined8 *)(unaff_x20 + 0x140),
                      *(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150),
                      *(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160),
                      *(undefined8 *)(unaff_x20 + 0x168),*(undefined8 *)(unaff_x20 + 0x170),
                      *(undefined8 *)(unaff_x20 + 0x178),*(undefined8 *)(unaff_x20 + 0x180),
                      *(undefined8 *)(unaff_x20 + 0x188),*(undefined8 *)(unaff_x20 + 400),
                      *(undefined8 *)(unaff_x20 + 0x198),*(undefined8 *)(unaff_x20 + 0x1a0),
                      *(undefined8 *)(unaff_x20 + 0x1a8),*(undefined8 *)(unaff_x20 + 0x1b0),
                      *(undefined8 *)(unaff_x20 + 0x1b8),*(undefined8 *)(unaff_x20 + 0x1c0),
                      *(undefined8 *)(unaff_x20 + 0x1c8),*(undefined8 *)(unaff_x20 + 0x1d0),
                      *(undefined8 *)(unaff_x20 + 0x1d8),*(undefined8 *)(unaff_x20 + 0x1e0),
                      *(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0),
                      *(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200),
                      *(undefined8 *)(unaff_x20 + 0x208),*(undefined8 *)(unaff_x20 + 0x210),
                      *(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                      *(undefined8 *)(unaff_x20 + 0x228),*(undefined8 *)(unaff_x20 + 0x230));
  return;
}



/* Entry: 101fae854; end: 101fae857;  */

void FUN_101fae854(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fae858);
  (*pcVar1)();
}



/* Entry: 101fae858; end: 101faeab7;  */

void FUN_101fae858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104b12d8;
  func_0x000107c613fc(&UNK_1104b12d8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(0x101fae938,puVar1);
  return;
}



/* Entry: 101faeab8; end: 101faeac7;  */

undefined1  [16] FUN_101faeab8(void)

{
  return ZEXT816(0x1104b1300);
}



/* Entry: 101faeac8; end: 101faf187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101faeac8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined *in_x5;
  undefined8 in_x6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  int iVar12;
  long lVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined8 auStack_f0 [2];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puStack_c0 = (undefined *)in_x3;
  uStack_b8 = in_x4;
  puStack_b0 = in_x5;
  lStack_a8 = in_x6;
  func_0x0001000295c4(0);
  lVar1 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar16 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f808(puVar16);
  lVar2 = 0;
  func_0x000107c5ffc4();
  lVar1 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar17 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100029608();
  uVar4 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar3 = uVar4;
  func_0x00010002964c();
  func_0x000107c60264(lVar17,&puStack_90,uVar4,uVar3,lVar2,lVar1);
  lVar1 = 0;
  func_0x000107c5ffd8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar13 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x68))
            (lVar13,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
            );
  uVar4 = 0xd00000000000002d;
  func_0x000107c5ffec(0xd00000000000002d,0x800000010f04e430,puVar16,lVar17,lVar13,0);
  func_0x000100083b20(&puStack_90);
  puVar10 = puStack_90;
  lVar2 = *(long *)(puStack_90 + _DAT_11307e678);
  func_0x000107c61174();
  func_0x000107c61170(puVar10);
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar1 != 0) {
    ppuVar14 = &PTR____CFConstantStringClassReference_110e78698;
    pcStack_70 = (code *)0x101faf1f0;
    puStack_68 = (undefined *)0x0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100ff4e14;
    puStack_78 = &UNK_1104b13b0;
    ppuVar5 = &puStack_90;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110e78698);
    uVar3 = uVar4;
    func_0x000107c61174(uVar4);
    func_0x000107c3f4ac(lVar1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(ppuVar14);
    func_0x000107c61170(uVar3);
  }
  func_0x000100083b20(&puStack_90);
  puVar7 = puStack_90;
  lVar2 = *(long *)(puStack_90 + _DAT_113093a98);
  func_0x000107c61174();
  func_0x000107c61170(puVar7);
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    func_0x000100083b20(&puStack_90);
    puVar7 = puStack_90;
    puVar6 = puStack_90;
    func_0x000107c44494();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    puVar7 = puVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    if (puVar7 != (undefined *)0x0) {
      lVar17 = lVar1;
      uStack_c8 = uVar4;
      func_0x000107c4e60c();
      func_0x000107c61180();
      func_0x000100083b20(&puStack_90);
      puVar6 = puStack_90;
      puVar8 = puStack_90;
      func_0x000107c44580();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      puVar9 = PTR_PTR_1126ae720;
      func_0x000107c61168();
      puVar6 = &UNK_1104b1370;
      func_0x000107c613fc(&UNK_1104b1370,0x20,7);
      *(long *)(puVar6 + 0x10) = lVar17;
      *(undefined **)(puVar6 + 0x18) = puVar8;
      pcStack_70 = FUN_101faf210;
      puStack_90 = puVar10;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_101444448;
      puStack_78 = &UNK_1104b1388;
      ppuVar5 = &puStack_90;
      puStack_68 = puVar6;
      func_0x000107c60bc4(ppuVar5);
      puVar10 = puStack_68;
      func_0x000107c615f0(lVar17);
      func_0x000107c61174();
      puStack_c0 = puVar8;
      func_0x000107c61574(puVar10);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      iVar12 = 2;
      func_0x000100029b9c(2,0x10,1,0);
      func_0x000100083b20(&puStack_90);
      puVar10 = puStack_90;
      puVar6 = puStack_90;
      func_0x000107c3fa04(puStack_90);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      puVar10 = PTR_PTR_1126d1488;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000100083b20(&lStack_98);
      uVar4 = *(undefined8 *)(lStack_98 + _DAT_113083800);
      func_0x000107c61174();
      func_0x000107c61170(lStack_98);
      func_0x000100083b20(&lStack_a0);
      lVar15 = lStack_a0;
      func_0x000107c4362c();
      func_0x000107c61180();
      func_0x000107c61170(lStack_a0);
      lVar2 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      lStack_a8 = lVar13;
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar13 = lVar13 - extraout_x8_02;
      if (lVar15 == 0) {
        lVar2 = 0;
        func_0x000107c5eea4();
        (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar13,1,1,lVar2);
        func_0x000107c615f0(lVar17);
        func_0x000107c615f0(puVar7);
        func_0x000107c61174(puVar9);
        puVar8 = (undefined *)0x0;
      }
      else {
        func_0x000107c5ee94(lVar13,lVar15);
        func_0x000107c61170(lVar15);
        lVar2 = 0;
        func_0x000107c5eea4();
        uStack_b8 = CONCAT44(uStack_b8._4_4_,iVar12);
        lVar15 = *(long *)(lVar2 + -8);
        puStack_b0 = puVar10;
        (**(code **)(lVar15 + 0x38))(lVar13,0,1,lVar2);
        func_0x000107c615f0(lVar17);
        func_0x000107c615f0(puVar7);
        puVar8 = puVar9;
        func_0x000107c61174();
        func_0x000107c5ee70();
        puVar10 = puStack_b0;
        iVar12 = (int)uStack_b8;
        (**(code **)(lVar15 + 8))(lVar13,lVar2);
      }
      puVar11 = PTR_PTR_1126a6e40;
      func_0x000107c610f8(PTR_PTR_1126a6e40);
      *(bool *)(lVar13 + -0x10) = iVar12 != 0;
      *(undefined8 *)(lVar13 + -0x20) = uVar4;
      *(undefined **)(lVar13 + -0x18) = puVar8;
      func_0x000107c47e08();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(puStack_c0);
      func_0x000107c61170(uStack_c8);
      func_0x000107c615ec(lVar17,2);
      func_0x000107c615e8(puVar6);
      func_0x000107c61170(puVar10);
      func_0x000107c615ec(puVar7,2);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar8);
      return puVar11;
    }
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(uVar4);
  return (undefined *)0x0;
}



/* Entry: 101faf188; end: 101faf1db;  */

void FUN_101faf188(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101faf1dc; end: 101faf20f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101faf1dc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  int iVar12;
  long lVar13;
  long unaff_x20;
  undefined **ppuVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined8 auStack_f0 [2];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puStack_c0 = *(undefined **)(unaff_x20 + 0x28);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x30);
  puStack_b0 = *(undefined **)(unaff_x20 + 0x38);
  lStack_a8 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x0001000295c4(0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar16 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f808(puVar16);
  lVar2 = 0;
  func_0x000107c5ffc4();
  lVar1 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar17 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100029608();
  uVar4 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar3 = uVar4;
  func_0x00010002964c();
  func_0x000107c60264(lVar17,&puStack_90,uVar4,uVar3,lVar2,lVar1);
  lVar1 = 0;
  func_0x000107c5ffd8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar13 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x68))
            (lVar13,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
            );
  uVar4 = 0xd00000000000002d;
  func_0x000107c5ffec(0xd00000000000002d,0x800000010f04e430,puVar16,lVar17,lVar13,0);
  func_0x000100083b20(&puStack_90);
  puVar10 = puStack_90;
  lVar2 = *(long *)(puStack_90 + _DAT_11307e678);
  func_0x000107c61174();
  func_0x000107c61170(puVar10);
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar1 != 0) {
    ppuVar14 = &PTR____CFConstantStringClassReference_110e78698;
    pcStack_70 = (code *)0x101faf1f0;
    puStack_68 = (undefined *)0x0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100ff4e14;
    puStack_78 = &UNK_1104b13b0;
    ppuVar5 = &puStack_90;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110e78698);
    uVar3 = uVar4;
    func_0x000107c61174(uVar4);
    func_0x000107c3f4ac(lVar1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(ppuVar14);
    func_0x000107c61170(uVar3);
  }
  func_0x000100083b20(&puStack_90);
  puVar7 = puStack_90;
  lVar2 = *(long *)(puStack_90 + _DAT_113093a98);
  func_0x000107c61174();
  func_0x000107c61170(puVar7);
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    func_0x000100083b20(&puStack_90);
    puVar7 = puStack_90;
    puVar6 = puStack_90;
    func_0x000107c44494();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    puVar7 = puVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    if (puVar7 != (undefined *)0x0) {
      lVar17 = lVar1;
      uStack_c8 = uVar4;
      func_0x000107c4e60c();
      func_0x000107c61180();
      func_0x000100083b20(&puStack_90);
      puVar6 = puStack_90;
      puVar8 = puStack_90;
      func_0x000107c44580();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      puVar9 = PTR_PTR_1126ae720;
      func_0x000107c61168();
      puVar6 = &UNK_1104b1370;
      func_0x000107c613fc(&UNK_1104b1370,0x20,7);
      *(long *)(puVar6 + 0x10) = lVar17;
      *(undefined **)(puVar6 + 0x18) = puVar8;
      pcStack_70 = FUN_101faf210;
      puStack_90 = puVar10;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_101444448;
      puStack_78 = &UNK_1104b1388;
      ppuVar5 = &puStack_90;
      puStack_68 = puVar6;
      func_0x000107c60bc4(ppuVar5);
      puVar10 = puStack_68;
      func_0x000107c615f0(lVar17);
      func_0x000107c61174();
      puStack_c0 = puVar8;
      func_0x000107c61574(puVar10);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      iVar12 = 2;
      func_0x000100029b9c(2,0x10,1,0);
      func_0x000100083b20(&puStack_90);
      puVar10 = puStack_90;
      puVar6 = puStack_90;
      func_0x000107c3fa04(puStack_90);
      func_0x000107c61180();
      func_0x000107c61170(puVar10);
      puVar10 = PTR_PTR_1126d1488;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000100083b20(&lStack_98);
      uVar4 = *(undefined8 *)(lStack_98 + _DAT_113083800);
      func_0x000107c61174();
      func_0x000107c61170(lStack_98);
      func_0x000100083b20(&lStack_a0);
      lVar15 = lStack_a0;
      func_0x000107c4362c();
      func_0x000107c61180();
      func_0x000107c61170(lStack_a0);
      lVar2 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      lStack_a8 = lVar13;
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar13 = lVar13 - extraout_x8_02;
      if (lVar15 == 0) {
        lVar2 = 0;
        func_0x000107c5eea4();
        (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar13,1,1,lVar2);
        func_0x000107c615f0(lVar17);
        func_0x000107c615f0(puVar7);
        func_0x000107c61174(puVar9);
        puVar8 = (undefined *)0x0;
      }
      else {
        func_0x000107c5ee94(lVar13,lVar15);
        func_0x000107c61170(lVar15);
        lVar2 = 0;
        func_0x000107c5eea4();
        uStack_b8 = CONCAT44(uStack_b8._4_4_,iVar12);
        lVar15 = *(long *)(lVar2 + -8);
        puStack_b0 = puVar10;
        (**(code **)(lVar15 + 0x38))(lVar13,0,1,lVar2);
        func_0x000107c615f0(lVar17);
        func_0x000107c615f0(puVar7);
        puVar8 = puVar9;
        func_0x000107c61174();
        func_0x000107c5ee70();
        puVar10 = puStack_b0;
        iVar12 = (int)uStack_b8;
        (**(code **)(lVar15 + 8))(lVar13,lVar2);
      }
      puVar11 = PTR_PTR_1126a6e40;
      func_0x000107c610f8(PTR_PTR_1126a6e40);
      *(bool *)(lVar13 + -0x10) = iVar12 != 0;
      *(undefined8 *)(lVar13 + -0x20) = uVar4;
      *(undefined **)(lVar13 + -0x18) = puVar8;
      func_0x000107c47e08();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(puStack_c0);
      func_0x000107c61170(uStack_c8);
      func_0x000107c615ec(lVar17,2);
      func_0x000107c615e8(puVar6);
      func_0x000107c61170(puVar10);
      func_0x000107c615ec(puVar7,2);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar8);
      return puVar11;
    }
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61170(uVar4);
  return (undefined *)0x0;
}



/* Entry: 101faf210; end: 101faf23f;  */

void FUN_101faf210(void)

{
  func_0x000107c610f8(PTR_PTR_1126a6e48);
                    /* WARNING: Could not recover jumptable at 0x00010c0351f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101faf240; end: 101faf24f;  */

void FUN_101faf240(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101faf250; end: 101faf2e7;  */

void FUN_101faf250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104b1468;
  func_0x000107c613fc(&UNK_1104b1468,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_101faf2e8,puVar1);
  return;
}



/* Entry: 101faf2e8; end: 101faf48b;  */

void FUN_101faf2e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lStack_60;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar3 = lStack_58;
  lVar2 = lStack_58;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101faf488);
    (*pcVar1)();
  }
  func_0x000103db6510(0);
  lVar3 = lVar2;
  func_0x000103db56c0(lVar2);
  func_0x000107c615e8(lVar2);
  func_0x000100083b20(&lStack_58);
  lVar2 = lStack_58;
  func_0x000107c444a4(lStack_58);
  func_0x000107c61180();
  func_0x000107c61170(lStack_58);
  func_0x000100083b20(&lStack_60);
  lVar4 = lStack_60;
  func_0x000107c5c1a8();
  func_0x000107c61180();
  func_0x000107c61170(lStack_60);
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar5 != 0) {
    puVar6 = PTR_PTR_1126daeb0;
    func_0x000107c610f8();
    func_0x000107c5fadc(lVar3,param_3);
    func_0x000107c6142c(param_3);
    func_0x000107c46bd4();
    func_0x000107c61170(lVar3);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(lVar2);
    func_0x0001000a0a8c(0);
    func_0x000107c61174();
    puVar7 = puVar6;
    func_0x000104494b00();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar6);
    *param_1 = puVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101faf48c);
  (*pcVar1)();
}



/* Entry: 101faf48c; end: 101faf49b;  */

undefined1  [16] FUN_101faf48c(void)

{
  return ZEXT816(0x1104b1490);
}



/* Entry: 101faf49c; end: 101faf4e7;  */

void FUN_101faf49c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101faf4e8,param_1);
  return;
}



/* Entry: 101faf4e8; end: 101faf5f3;  */

void FUN_101faf4e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  
  ppuVar2 = &puStack_70;
  func_0x0001000a0a8c(0);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_101faf604;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_1104b1540;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e788d8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e788d8);
  puVar3 = puVar1;
  func_0x000100a0dc54(puVar1,ppuVar2,param_3);
  func_0x000107c6142c(param_3);
  func_0x000107c61170(puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 101faf5f4; end: 101faf603;  */

undefined1  [16] FUN_101faf5f4(void)

{
  return ZEXT816(0x1104b1530);
}



/* Entry: 101faf604; end: 101faf66f;  */

undefined * FUN_101faf604(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c42374(uStack_28);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  puVar2 = PTR_PTR_1126a9cb0;
  func_0x000107c610f8(PTR_PTR_1126a9cb0);
  func_0x000107c46704();
  func_0x000107c61170(uVar1);
  return puVar2;
}



/* Entry: 101faf670; end: 101faf68b;  */

void FUN_101faf670(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101faf68c; end: 101faf777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101faf68c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = 0;
  FUN_101fb0320();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112e4aa40;
  puVar5 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c6157c(param_2);
  func_0x000107c453e4();
  *(undefined **)(lVar4 + lVar2) = puVar5;
  lVar2 = _DAT_112e4aa48;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101faf8fc();
  *(undefined **)(lVar4 + lVar2) = puVar6;
  *(undefined **)(lVar4 + _DAT_112e4aa50) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar2 = _DAT_112e4aa58;
  func_0x0001003d21d8();
  *(undefined **)(lVar4 + lVar2) = puVar5;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e4aa38);
  *puVar1 = 0x101faf8f4;
  puVar1[1] = param_2;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar7;
  return;
}



/* Entry: 101faf778; end: 101faf77f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101faf778(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = 0;
  FUN_101fb0320();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112e4aa40;
  puVar5 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + lVar2) = puVar5;
  lVar2 = _DAT_112e4aa48;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101faf8fc();
  *(undefined **)(lVar4 + lVar2) = puVar6;
  *(undefined **)(lVar4 + _DAT_112e4aa50) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar2 = _DAT_112e4aa58;
  func_0x0001003d21d8();
  *(undefined **)(lVar4 + lVar2) = puVar5;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112e4aa38);
  *puVar1 = 0x101faf8f4;
  puVar1[1] = unaff_x20;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar7;
  return;
}



/* Entry: 101faf780; end: 101faf883;  */

void FUN_101faf780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000107c5fadc(param_1,param_2);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f04e460);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  pcStack_68 = FUN_101faf884;
  puStack_60 = &UNK_1104b1628;
  ppuVar3 = &puStack_78;
  uStack_58 = param_3;
  uStack_50 = param_4;
  func_0x000107c60bc4(ppuVar3);
  uVar1 = uStack_50;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(uVar1);
  func_0x000107c43088(uStack_48);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101faf884; end: 101faf8d3;  */

void FUN_101faf884(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101faf8d4; end: 101faf8fb;  */

undefined1  [16] FUN_101faf8d4(void)

{
  return ZEXT816(0x1104b15f8);
}



/* Entry: 101faf8fc; end: 101faf9fb;  */

undefined * FUN_101faf8fc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e4aa30,&UNK_10da42da0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101faf9f8);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101faf9fc);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101faf9fc; end: 101fafa17;  */

void FUN_101faf9fc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101fafa18; end: 101fafa8f;  */

undefined8 FUN_101fafa18(long param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(*(long *)(param_3 + 0x38) + param_1 * 8);
      func_0x000107c61174(uVar1);
    }
    func_0x000107c6142c(param_3);
  }
  return uVar1;
}



/* Entry: 101fafa90; end: 101fafc17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fafa90(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_68;
  undefined *puStack_60;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e4aa40);
    func_0x000107c4b940(uVar7);
    FUN_101fafce4(&puStack_68);
    func_0x000107c5d278(uVar7);
    if ((char)puStack_68 == '\x01') {
      puVar5 = PTR___ss5Int32VN_11034ee20;
      puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
      func_0x000107c6057c();
      puStack_68 = puVar5;
      puStack_60 = puVar6;
      func_0x000107c5fb78(0x3a3a,0xe200000000000000);
      func_0x000107c5fb78(param_1,param_2);
      func_0x000107c5fb78(0x303a3a,0xe300000000000000);
      puVar4 = puStack_60;
      puVar3 = puStack_68;
      pcVar2 = *(code **)(unaff_x20 + _DAT_112e4aa38);
      puVar5 = &UNK_1104b1660;
      func_0x000107c613fc(&UNK_1104b1660,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar6 = &UNK_1104b1688;
      func_0x000107c613fc(&UNK_1104b1688,0x28,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(ulong *)(puVar6 + 0x18) = param_1;
      *(ulong *)(puVar6 + 0x20) = param_2;
      func_0x000107c6157c(puVar5);
      func_0x000107c61434(param_2);
      (*pcVar2)(puVar3,puVar4,FUN_101fb0340,puVar6);
      func_0x000107c61574(puVar5);
      func_0x000107c6142c(puVar4);
      func_0x000107c61574(puVar6);
    }
  }
  return;
}



/* Entry: 101fafc18; end: 101fafce3; -[_TtC34AdOrganicEngagementServiceProvider24AdOrganicEngagementStore cachedEngagementMetadataForOrganicSnapId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fafc18(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c5faec();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112e4aa40);
  func_0x000107c61174();
  func_0x000107c4b940(uVar3);
  lVar1 = _DAT_112e4aa48;
  func_0x000107c61428(param_1 + _DAT_112e4aa48,auStack_58,0x20,0);
  lVar2 = param_3;
  FUN_101fafa18(param_3,param_2,*(undefined8 *)(param_1 + lVar1));
  func_0x000107c614a8(auStack_58);
  func_0x000107c5d278(uVar3);
  if (lVar2 == 0) {
    FUN_101fafa90(param_3,param_2);
  }
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 101fafce4; end: 101fafebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fafce4(undefined1 *param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar5 = _DAT_112e4aa48;
  func_0x000107c61428(param_2 + _DAT_112e4aa48,auStack_68,0x20,0);
  lVar5 = *(long *)(param_2 + lVar5);
  if (*(long *)(lVar5 + 0x10) != 0) {
    func_0x000107c61434(lVar5);
    uVar1 = param_3;
    uVar3 = param_4;
    func_0x000100029284();
    if ((uVar3 & 1) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar1 * 8);
      func_0x000107c61174(uVar2);
      func_0x000107c614a8(auStack_68);
      func_0x000107c61170(uVar2);
      func_0x000107c6142c(lVar5);
      uVar4 = 0;
      goto LAB_101fafe9c;
    }
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c614a8(auStack_68);
  lVar5 = _DAT_112e4aa50;
  func_0x000107c61428(param_2 + _DAT_112e4aa50,auStack_68,0,0);
  uVar2 = *(undefined8 *)(param_2 + lVar5);
  func_0x000107c61434(uVar2);
  uVar1 = param_3;
  func_0x0001000f66f0(param_3,param_4,uVar2);
  func_0x000107c6142c(uVar2);
  lVar6 = _DAT_112e4aa58;
  if ((uVar1 & 1) != 0) {
LAB_101fafddc:
    uVar4 = 0;
    goto LAB_101fafe9c;
  }
  func_0x000107c61428(param_2 + _DAT_112e4aa58,auStack_80,0x20,0);
  lVar6 = *(long *)(param_2 + lVar6);
  if (*(long *)(lVar6 + 0x10) == 0) {
LAB_101fafe50:
    func_0x000107c614a8(auStack_80);
  }
  else {
    func_0x000107c61434(lVar6);
    uVar1 = param_3;
    uVar3 = param_4;
    func_0x000100029284();
    if ((uVar3 & 1) == 0) {
      func_0x000107c6142c(lVar6);
      goto LAB_101fafe50;
    }
    lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + uVar1 * 8);
    func_0x000107c614a8(auStack_80);
    func_0x000107c6142c(lVar6);
    if (2 < lVar7) goto LAB_101fafddc;
  }
  func_0x000107c61428(param_2 + lVar5,auStack_80,0x21,0);
  func_0x000107c61434(param_4);
  func_0x000100403b00(auStack_90,param_3,param_4);
  func_0x000107c614a8(auStack_80);
  func_0x000107c6142c(uStack_88);
  uVar4 = 1;
LAB_101fafe9c:
  *param_1 = uVar4;
  return;
}



/* Entry: 101fafec0; end: 101faff6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fafec0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112e4aa40);
    func_0x000107c61174(uVar1);
    func_0x000107c4b940();
    FUN_101faff70(param_2,param_3,param_4,param_1);
    func_0x000107c5d278(uVar1);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101faff70; end: 101fb01f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101faff70(long param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + _DAT_112e4aa50,auStack_68,0x21,0);
  uVar6 = param_3;
  func_0x0001010af1e4(param_2,param_3);
  func_0x000107c614a8(auStack_68);
  func_0x000107c6142c(uVar6);
  lVar2 = _DAT_112e4aa58;
  lVar10 = _DAT_112e4aa48;
  if (param_4 != 0) {
    func_0x000107c61428(param_1 + _DAT_112e4aa48,auStack_68,0x21,0);
    func_0x000107c61434(param_3);
    func_0x000107c61174(param_4);
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    func_0x000107c61558(uVar4);
    uVar8 = *(undefined8 *)(param_1 + lVar10);
    *(undefined8 *)(param_1 + lVar10) = 0x8000000000000000;
    FUN_101fb0410(param_4,param_2,param_3,uVar4);
    func_0x000107c6142c(param_3);
    *(undefined8 *)(param_1 + lVar10) = uVar8;
    func_0x000107c614a8(auStack_68);
    func_0x000107c61428(param_1 + _DAT_112e4aa58,auStack_68,0x21,0);
    FUN_101fb034c(param_2,param_3);
    goto LAB_101fb01a4;
  }
  func_0x000107c61428(param_1 + _DAT_112e4aa58,auStack_68,0x21,0);
  uVar5 = *(ulong *)(param_1 + lVar2);
  func_0x000107c61558();
  lVar11 = *(long *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0x8000000000000000;
  uVar6 = param_2;
  uVar7 = param_3;
  func_0x000100029284();
  uVar9 = (ulong)~(uint)uVar7 & 1;
  lVar10 = *(long *)(lVar11 + 0x10) + uVar9;
  if (SCARRY8(*(long *)(lVar11 + 0x10),uVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101fb01d0);
    (*pcVar3)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar10) {
    func_0x00010113678c(lVar10,uVar5);
    uVar6 = param_2;
    uVar5 = param_3;
    func_0x000100029284();
    if (((uint)uVar7 & 1) != ((uint)uVar5 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101fb0134);
      (*pcVar3)();
    }
LAB_101fb0138:
    *(long *)(param_1 + lVar2) = lVar11;
  }
  else {
    if ((uVar5 & 1) != 0) goto LAB_101fb0138;
    func_0x000101136368();
    *(long *)(param_1 + lVar2) = lVar11;
  }
  if ((uVar7 & 1) == 0) {
    lVar10 = lVar11 + (uVar6 >> 6) * 8;
    *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar6 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar11 + 0x30) + uVar6 * 0x10);
    *puVar1 = param_2;
    puVar1[1] = param_3;
    *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 8) = 0;
    if (SCARRY8(*(long *)(lVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101fb01f8);
      (*pcVar3)();
    }
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
    func_0x000107c61434(param_3);
  }
  lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + uVar6 * 8);
  if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101fb01d4);
    (*pcVar3)();
  }
  *(long *)(*(long *)(lVar11 + 0x38) + uVar6 * 8) = lVar10 + 1;
LAB_101fb01a4:
  func_0x000107c614a8(auStack_68);
  return;
}



/* Entry: 101fb01f8; end: 101fb0253; -[_TtC34AdOrganicEngagementServiceProvider24AdOrganicEngagementStore prefetchEngagementMetadataForOrganicSnapId:] */

void FUN_101fb01f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101fafa90(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101fb0254; end: 101fb02b3; -[_TtC34AdOrganicEngagementServiceProvider24AdOrganicEngagementStore init] */

void FUN_101fb0254(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdOrganicEngagementServiceProvider.AdOrganicEngagementStore",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fb0280);
  (*pcVar1)();
}



/* Entry: 101fb02b4; end: 101fb031f; -[_TtC34AdOrganicEngagementServiceProvider24AdOrganicEngagementStore .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fb02f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fb02f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb02b4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e4aa38 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e4aa40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e4aa48));
  return;
}



/* Entry: 101fb0320; end: 101fb033f;  */

void FUN_101fb0320(void)

{
  func_0x000107c61168(&PTR_PTR_112810eb0);
  return;
}



/* Entry: 101fb0340; end: 101fb034b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb0340(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + _DAT_112e4aa40);
    func_0x000107c61174(uVar4);
    func_0x000107c4b940();
    FUN_101faff70(lVar2,uVar1,uVar3,param_1);
    func_0x000107c5d278(uVar4);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101fb034c; end: 101fb040f;  */

undefined1  [16] FUN_101fb034c(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar3 = *unaff_x20;
  func_0x000107c61434(lVar3);
  func_0x000100029284();
  func_0x000107c6142c(lVar3);
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000101136368();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 8);
    FUN_101d9283c(param_1,lVar3);
    uVar2 = 0;
    *unaff_x20 = lVar3;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 101fb0410; end: 101fb06cf;  */

void FUN_101fb0410(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101fb04e8);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_101fb06d0(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101fb04b0);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000101fb0560();
    lVar6 = *unaff_x20;
    goto joined_r0x000101fb04fc;
  }
  lVar6 = *unaff_x20;
joined_r0x000101fb04fc:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101fb0560);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 101fb06d0; end: 101fb096b;  */

void FUN_101fb06d0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e4aa30;
  func_0x0001000285a8(0x112e4aa30,&UNK_10da42da0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101fb0938:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101fb0968);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_101fb0938;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101fb096c);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 101fb096c; end: 101fb0977;  */

void FUN_101fb096c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101fb0978,param_1);
  return;
}



/* Entry: 101fb0978; end: 101fb0a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb0978(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000a0a8c(0);
  func_0x000100083b20(&lStack_48);
  uVar1 = *(undefined8 *)(lStack_48 + _DAT_113043cc8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  pcStack_58 = FUN_101fb0a8c;
  uStack_50 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  uStack_68 = 0x101fb0fc0;
  puStack_60 = &UNK_1104b1820;
  ppuVar2 = &puStack_78;
  func_0x000107c60bc4(ppuVar2);
  uVar3 = uVar1;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar1);
  uVar1 = uVar3;
  func_0x000100a0dc54(uVar3,0x62616b636f6c6e75,0xee0031765f73656c);
  func_0x000107c61170(uVar3);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fb0a8c; end: 101fb0aab;  */

void FUN_101fb0a8c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112e4aa90;
  func_0x0001000285a8(0x112e4aa90,&UNK_10da42e50);
  func_0x000107c60184();
  uVar2 = uVar1;
  func_0x000107c614f0();
  param_1[3] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 101fb0aac; end: 101fb0b03;  */

void FUN_101fb0aac(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 101fb0b04; end: 101fb0c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb0b04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000a0a8c(0);
  func_0x000100083b20(&lStack_48);
  uVar1 = *(undefined8 *)(lStack_48 + _DAT_113043cd0);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  uStack_58 = 0x101fb0fb8;
  uStack_50 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  uStack_68 = 0x101fb0fc0;
  puStack_60 = &UNK_1104b17f8;
  ppuVar2 = &puStack_78;
  func_0x000107c60bc4(ppuVar2);
  uVar3 = uVar1;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar1);
  uVar1 = uVar3;
  func_0x000100a0dc54(uVar3,0x5f6b636172746461,0xea00000000003176);
  func_0x000107c61170(uVar3);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fb0c10; end: 101fb0c8f;  */

void FUN_101fb0c10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104b1758;
  func_0x000107c613fc(&UNK_1104b1758,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101fb0c90,puVar1);
  return;
}


