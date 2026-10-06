/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6415bc; end: 10b6415f7; -[SCNMessagingSnapchatterRecipient .cxx_destruct] */

void FUN_10b6415bc(long param_1)

{
  func_0x00010b641600(param_1 + 0x20);
  func_0x00010b641600(param_1 + 0x18);
  func_0x00010b641600(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6415f8; end: 10b641607;  */

void FUN_10b6415f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b641608; end: 10b641753; -[SCNMessagingStatelessSessionParameters initWithUserId:deviceEncryptionKey:userAgentPrefix:debug:tweaks:] */

undefined1 *
FUN_10b641608(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1127071e8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b641754; end: 10b641767; -[SCNMessagingStatelessSessionParameters initWithUserId:userAgentPrefix:debug:] */

void FUN_10b641754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c05b050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUserId_deviceEncryptionK_1125f4620,param_3,0,param_4,param_5,0);
  return;
}



/* Entry: 10b641768; end: 10b64176f; -[SCNMessagingStatelessSessionParameters userId] */

undefined8 FUN_10b641768(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b641770; end: 10b64178f; -[SCNMessagingStatelessSessionParameters setUserId:] */

void FUN_10b641770(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b64183c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b641790; end: 10b641797; -[SCNMessagingStatelessSessionParameters deviceEncryptionKey] */

undefined8 FUN_10b641790(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b641798; end: 10b6417b7; -[SCNMessagingStatelessSessionParameters setDeviceEncryptionKey:] */

void FUN_10b641798(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b64183c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6417b8; end: 10b6417bf; -[SCNMessagingStatelessSessionParameters userAgentPrefix] */

undefined8 FUN_10b6417b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6417c0; end: 10b6417c7; -[SCNMessagingStatelessSessionParameters setUserAgentPrefix:] */

void FUN_10b6417c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b6417c8; end: 10b6417cf; -[SCNMessagingStatelessSessionParameters debug] */

undefined1 FUN_10b6417c8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6417d0; end: 10b6417d7; -[SCNMessagingStatelessSessionParameters setDebug:] */

void FUN_10b6417d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b6417d8; end: 10b6417df; -[SCNMessagingStatelessSessionParameters tweaks] */

undefined8 FUN_10b6417d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b6417e0; end: 10b6417ff; -[SCNMessagingStatelessSessionParameters setTweaks:] */

void FUN_10b6417e0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b64183c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b641800; end: 10b64183b; -[SCNMessagingStatelessSessionParameters .cxx_destruct] */

void FUN_10b641800(long param_1)

{
  func_0x00010b64184c(param_1 + 0x28);
  func_0x00010b64184c(param_1 + 0x20);
  func_0x00010b64184c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b64183c; end: 10b64185b;  */

void FUN_10b64183c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b64185c; end: 10b641977; -[SCNMessagingStoryId initWithStoryId:storyData:storyType:mediaId:] */

undefined1 *
FUN_10b64185c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1127071f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b641978; end: 10b64197f; -[SCNMessagingStoryId initWithStoryId:storyData:storyType:] */

void FUN_10b641978(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04dab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithStoryId_storyData_storyT_1125f10b0);
  return;
}



/* Entry: 10b641980; end: 10b641987; -[SCNMessagingStoryId storyId] */

undefined8 FUN_10b641980(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b641988; end: 10b6419b7; -[SCNMessagingStoryId setStoryId:] */

void FUN_10b641988(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6419b8; end: 10b6419bf; -[SCNMessagingStoryId storyData] */

undefined8 FUN_10b6419b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6419c0; end: 10b6419c7; -[SCNMessagingStoryId setStoryData:] */

void FUN_10b6419c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b6419c8; end: 10b6419cf; -[SCNMessagingStoryId storyType] */

undefined8 FUN_10b6419c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6419d0; end: 10b6419d7; -[SCNMessagingStoryId setStoryType:] */

void FUN_10b6419d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b6419d8; end: 10b6419df; -[SCNMessagingStoryId mediaId] */

undefined8 FUN_10b6419d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b6419e0; end: 10b6419e7; -[SCNMessagingStoryId setMediaId:] */

void FUN_10b6419e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b6419e8; end: 10b641a23; -[SCNMessagingStoryId .cxx_destruct] */

void FUN_10b6419e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b641a24; end: 10b641b8b; -[SCNMessagingStoryPostDestinationStatus initWithKey:state:inFlightState:completed:taskQueueId:content:] */

undefined1 *
FUN_10b641a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1127071f8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
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
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b641b8c; end: 10b641b9f; -[SCNMessagingStoryPostDestinationStatus initWithKey:state:] */

void FUN_10b641b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c020d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithKey_state_inFlightState__1125e5d38,param_3,param_4,0,0,0,0);
  return;
}



/* Entry: 10b641ba0; end: 10b641ba7; -[SCNMessagingStoryPostDestinationStatus key] */

undefined8 FUN_10b641ba0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b641ba8; end: 10b641bc7; -[SCNMessagingStoryPostDestinationStatus setKey:] */

void FUN_10b641ba8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b641cbc();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b641bc8; end: 10b641bcf; -[SCNMessagingStoryPostDestinationStatus state] */

undefined8 FUN_10b641bc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b641bd0; end: 10b641bd7; -[SCNMessagingStoryPostDestinationStatus setState:] */

void FUN_10b641bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b641bd8; end: 10b641bdf; -[SCNMessagingStoryPostDestinationStatus inFlightState] */

undefined8 FUN_10b641bd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b641be0; end: 10b641bff; -[SCNMessagingStoryPostDestinationStatus setInFlightState:] */

void FUN_10b641be0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b641cbc();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b641c00; end: 10b641c07; -[SCNMessagingStoryPostDestinationStatus completed] */

undefined8 FUN_10b641c00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b641c08; end: 10b641c27; -[SCNMessagingStoryPostDestinationStatus setCompleted:] */

void FUN_10b641c08(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b641cbc();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b641c28; end: 10b641c2f; -[SCNMessagingStoryPostDestinationStatus taskQueueId] */

undefined8 FUN_10b641c28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b641c30; end: 10b641c4f; -[SCNMessagingStoryPostDestinationStatus setTaskQueueId:] */

void FUN_10b641c30(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b641cbc();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b641c50; end: 10b641c57; -[SCNMessagingStoryPostDestinationStatus content] */

undefined8 FUN_10b641c50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b641c58; end: 10b641c77; -[SCNMessagingStoryPostDestinationStatus setContent:] */

void FUN_10b641c58(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b641cbc();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b641c78; end: 10b641cbb; -[SCNMessagingStoryPostDestinationStatus .cxx_destruct] */

void FUN_10b641c78(long param_1)

{
  func_0x00010b641cd4(param_1 + 0x30);
  func_0x00010b641cd4(param_1 + 0x28);
  func_0x00010b641cd4(param_1 + 0x20);
  func_0x00010b641cd4(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b641cbc; end: 10b641cdb;  */

void FUN_10b641cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b641cdc; end: 10b641d8b; -[SCNMessagingStreakMetadata initWithCount:expirationTimestampMs:expiredStreak:isFrozen:] */

undefined1 *
FUN_10b641cdc(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112707200;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b641d8c; end: 10b641d97; -[SCNMessagingStreakMetadata initWithCount:expirationTimestampMs:isFrozen:] */

void FUN_10b641d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c006150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithCount_expirationTimestam_1125df220,param_3,param_4,0,param_5);
  return;
}



/* Entry: 10b641d98; end: 10b641d9f; -[SCNMessagingStreakMetadata count] */

undefined4 FUN_10b641d98(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b641da0; end: 10b641da7; -[SCNMessagingStreakMetadata setCount:] */

void FUN_10b641da0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10b641da8; end: 10b641daf; -[SCNMessagingStreakMetadata expirationTimestampMs] */

undefined8 FUN_10b641da8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b641db0; end: 10b641db7; -[SCNMessagingStreakMetadata setExpirationTimestampMs:] */

void FUN_10b641db0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b641db8; end: 10b641dbf; -[SCNMessagingStreakMetadata expiredStreak] */

undefined8 FUN_10b641db8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b641dc0; end: 10b641def; -[SCNMessagingStreakMetadata setExpiredStreak:] */

void FUN_10b641dc0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b641df0; end: 10b641df7; -[SCNMessagingStreakMetadata isFrozen] */

undefined1 FUN_10b641df0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b641df8; end: 10b641dff; -[SCNMessagingStreakMetadata setIsFrozen:] */

void FUN_10b641df8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b641e00; end: 10b641e0b; -[SCNMessagingStreakMetadata .cxx_destruct] */

void FUN_10b641e00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b641e0c; end: 10b641eab; -[SCNMessagingStreamingResponseMetadata initWithCompleteResponseSeenInChat:isComplete:completionReason:] */

undefined1 *
FUN_10b641e0c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112707208;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b641eac; end: 10b641eb3; -[SCNMessagingStreamingResponseMetadata initWithCompleteResponseSeenInChat:isComplete:] */

void FUN_10b641eac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0003d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithCompleteResponseSeenInCh_1125ddab8,param_3,param_4,0);
  return;
}



/* Entry: 10b641eb4; end: 10b641ebb; -[SCNMessagingStreamingResponseMetadata completeResponseSeenInChat] */

undefined1 FUN_10b641eb4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b641ebc; end: 10b641ec3; -[SCNMessagingStreamingResponseMetadata setCompleteResponseSeenInChat:] */

void FUN_10b641ebc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b641ec4; end: 10b641ecb; -[SCNMessagingStreamingResponseMetadata isComplete] */

undefined1 FUN_10b641ec4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b641ecc; end: 10b641ed3; -[SCNMessagingStreamingResponseMetadata setIsComplete:] */

void FUN_10b641ecc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b641ed4; end: 10b641edb; -[SCNMessagingStreamingResponseMetadata completionReason] */

undefined8 FUN_10b641ed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b641edc; end: 10b641f0b; -[SCNMessagingStreamingResponseMetadata setCompletionReason:] */

void FUN_10b641edc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b641f0c; end: 10b641f17; -[SCNMessagingStreamingResponseMetadata .cxx_destruct] */

void FUN_10b641f0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b641f18; end: 10b641f93; -[SCNMessagingSuccessfulMassSnapDestinationData initWithMassSnapId:] */

undefined1 * FUN_10b641f18(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffd0;
  func_0x00010b641fcc();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    _objc_retain();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
  }
  _objc_release();
  return puVar1;
}



/* Entry: 10b641f94; end: 10b641f9b; -[SCNMessagingSuccessfulMassSnapDestinationData massSnapId] */

undefined8 FUN_10b641f94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b641f9c; end: 10b641fbf; -[SCNMessagingSuccessfulMassSnapDestinationData setMassSnapId:] */

void FUN_10b641f9c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b641fcc();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b641fc0; end: 10b641fdb; -[SCNMessagingSuccessfulMassSnapDestinationData .cxx_destruct] */

void FUN_10b641fc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b641fdc; end: 10b642073; -[SCNMessagingSuccessfulPhoneNumberDestinationData initWithUserId:isTemporaryUser:] */

undefined1 *
FUN_10b641fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112707218;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b642074; end: 10b64207b; -[SCNMessagingSuccessfulPhoneNumberDestinationData userId] */

undefined8 FUN_10b642074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b64207c; end: 10b6420ab; -[SCNMessagingSuccessfulPhoneNumberDestinationData setUserId:] */

void FUN_10b64207c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b6420ac; end: 10b6420b3; -[SCNMessagingSuccessfulPhoneNumberDestinationData isTemporaryUser] */

undefined1 FUN_10b6420ac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b6420b4; end: 10b6420bb; -[SCNMessagingSuccessfulPhoneNumberDestinationData setIsTemporaryUser:] */

void FUN_10b6420b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b6420bc; end: 10b6420c7; -[SCNMessagingSuccessfulPhoneNumberDestinationData .cxx_destruct] */

void FUN_10b6420bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6420c8; end: 10b64219b; -[SCNMessagingSuccessfulStoryDestinationData initWithServerSnapId:media:] */

undefined1 *
FUN_10b6420c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707220;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b64219c; end: 10b6421a3; -[SCNMessagingSuccessfulStoryDestinationData serverSnapId] */

undefined8 FUN_10b64219c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6421a4; end: 10b6421ab; -[SCNMessagingSuccessfulStoryDestinationData setServerSnapId:] */

void FUN_10b6421a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b6421ac; end: 10b6421b3; -[SCNMessagingSuccessfulStoryDestinationData media] */

undefined8 FUN_10b6421ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6421b4; end: 10b6421e3; -[SCNMessagingSuccessfulStoryDestinationData setMedia:] */

void FUN_10b6421b4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b6421e4; end: 10b642213; -[SCNMessagingSuccessfulStoryDestinationData .cxx_destruct] */

void FUN_10b6421e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b642214; end: 10b64221b; -[SCNMessagingSyncFeedMetadata setMetrics:] */

void FUN_10b642214(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b64221c; end: 10b642223; -[SCNMessagingSyncFeedMetadata setConversationsSyncFailed:] */

void FUN_10b64221c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b642224; end: 10b64222b; -[SCNMessagingSyncFeedMetadata setConversationsSyncSuccess:] */

void FUN_10b642224(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b64222c; end: 10b642233; -[SCNMessagingSyncFeedMetadata paginationWindowIsEmpty] */

undefined1 FUN_10b64222c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b642234; end: 10b64223b; -[SCNMessagingSyncFeedMetadata setPaginationWindowIsEmpty:] */

void FUN_10b642234(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b64223c; end: 10b642243; -[SCNMessagingSyncFeedMetadata paginateFullFeed] */

undefined1 FUN_10b64223c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b642244; end: 10b64224b; -[SCNMessagingSyncFeedMetadata setPaginateFullFeed:] */

void FUN_10b642244(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b64224c; end: 10b64231f; -[SCNMessagingSyncFeedRequestMetadata initWithStringValue:enumValue:] */

undefined1 *
FUN_10b64224c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707230;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b642320; end: 10b64232b; -[SCNMessagingSyncFeedRequestMetadata init] */

void FUN_10b642320(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c04e8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithStringValue_enumValue__1125f1440,0,0)
  ;
  return;
}



/* Entry: 10b64232c; end: 10b642333; -[SCNMessagingSyncFeedRequestMetadata stringValue] */

undefined8 FUN_10b64232c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b642334; end: 10b64233b; -[SCNMessagingSyncFeedRequestMetadata setStringValue:] */

void FUN_10b642334(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b64233c; end: 10b642343; -[SCNMessagingSyncFeedRequestMetadata enumValue] */

undefined8 FUN_10b64233c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b642344; end: 10b642373; -[SCNMessagingSyncFeedRequestMetadata setEnumValue:] */

void FUN_10b642344(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b642374; end: 10b6423a3; -[SCNMessagingSyncFeedRequestMetadata .cxx_destruct] */

void FUN_10b642374(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6423a4; end: 10b6423ab; -[SCNMessagingSyncFeedUpdateMetadata setResetFeed:] */

void FUN_10b6423a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b6423ac; end: 10b6423db; -[SCNMessagingSyncFeedUpdateMetadata setSyncMetadata:] */

void FUN_10b6423ac(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b6423dc; end: 10b6423e3; -[SCNMessagingSyncFeedUpdateMetadata setAnalyticsScenario:] */

void FUN_10b6423dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b6423e4; end: 10b6423eb; -[SCNMessagingSyncFeedUpdateMetadata setQueryTriggered:] */

void FUN_10b6423e4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b6423ec; end: 10b6424b3; -[SCNMessagingTask initWithRequestId:type:content:] */

undefined1 *
FUN_10b6423ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112707240;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6424b4; end: 10b6424bb; -[SCNMessagingTask initWithRequestId:type:] */

void FUN_10b6424b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c03efd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithRequestId_type_content__1125ed5f0,param_3,param_4,0);
  return;
}



/* Entry: 10b6424bc; end: 10b6424c3; -[SCNMessagingTask requestId] */

undefined8 FUN_10b6424bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


