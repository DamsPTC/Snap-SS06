/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052d02f0; end: 1052d038f; -[SCGrapheneCremaServerMetric description] */

void FUN_1052d02f0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcf858;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dcf858,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e74f0;
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



/* Entry: 1052d0390; end: 1052d04db; -[SCGrapheneRegistry cremaServerGraphene] */

void FUN_1052d0390(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1052d0418;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136ba2c0 != -1) {
    func_0x00010002a2fc(0x1136ba2c0,&puStack_48);
  }
  uVar1 = uRam00000001136ba2b8;
  _objc_retain(uRam00000001136ba2b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1052d04dc; end: 1052d05bf; -[SCBackgroundActivityItem initWithTimestamp:backgroundActivityStatusType:backgroundActivityIdentifier:backgroundActivityAttributionKey:] */

undefined1 *
FUN_1052d04dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e74f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052d05c0; end: 1052d05c7; -[SCBackgroundActivityItem timestamp] */

undefined8 FUN_1052d05c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052d05c8; end: 1052d05f7; -[SCBackgroundActivityItem setTimestamp:] */

void FUN_1052d05c8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1052d05f8; end: 1052d05ff; -[SCBackgroundActivityItem backgroundActivityStatusType] */

undefined8 FUN_1052d05f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052d0600; end: 1052d0607; -[SCBackgroundActivityItem setBackgroundActivityStatusType:] */

void FUN_1052d0600(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1052d0608; end: 1052d060f; -[SCBackgroundActivityItem backgroundActivityIdentifier] */

undefined8 FUN_1052d0608(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1052d0610; end: 1052d0617; -[SCBackgroundActivityItem setBackgroundActivityIdentifier:] */

void FUN_1052d0610(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1052d0618; end: 1052d061f; -[SCBackgroundActivityItem backgroundActivityAttributionKey] */

undefined8 FUN_1052d0618(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1052d0620; end: 1052d0627; -[SCBackgroundActivityItem setBackgroundActivityAttributionKey:] */

void FUN_1052d0620(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1052d0628; end: 1052d0663; -[SCBackgroundActivityItem .cxx_destruct] */

void FUN_1052d0628(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052d0664; end: 1052d0707; -[SCRunningBackgroundTaskItem initWithTaskName:taskStartTime:] */

undefined1 *
FUN_1052d0664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7500;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052d0708; end: 1052d070f; -[SCRunningBackgroundTaskItem taskStartTimestamp] */

undefined8 FUN_1052d0708(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052d0710; end: 1052d073f; -[SCRunningBackgroundTaskItem setTaskStartTimestamp:] */

void FUN_1052d0710(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1052d0740; end: 1052d0747; -[SCRunningBackgroundTaskItem taskName] */

undefined8 FUN_1052d0740(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052d0748; end: 1052d074f; -[SCRunningBackgroundTaskItem setTaskName:] */

void FUN_1052d0748(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1052d0750; end: 1052d077f; -[SCRunningBackgroundTaskItem .cxx_destruct] */

void FUN_1052d0750(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052d0780; end: 1052d083b; -[SCRunningBackgroundTaskSetItem initWithFirstTaskStartTime:firstTask:] */

undefined8 *
FUN_1052d0780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7508;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c226900();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1052d083c; end: 1052d0843; -[SCRunningBackgroundTaskSetItem overallTaskStartTimestamp] */

undefined8 FUN_1052d083c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052d0844; end: 1052d0873; -[SCRunningBackgroundTaskSetItem setOverallTaskStartTimestamp:] */

void FUN_1052d0844(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1052d0874; end: 1052d087b; -[SCRunningBackgroundTaskSetItem runningBackgroundTasks] */

undefined8 FUN_1052d0874(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052d087c; end: 1052d08ab; -[SCRunningBackgroundTaskSetItem setRunningBackgroundTasks:] */

void FUN_1052d087c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1052d08ac; end: 1052d08db; -[SCRunningBackgroundTaskSetItem .cxx_destruct] */

void FUN_1052d08ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052d08dc; end: 1052d0993; -[SCRunningVoipPushNotificationSetItem initWithFirstVoipPushNotificationStartTime:firstPushNotification:] */

undefined1 *
FUN_1052d08dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7510;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c2268e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052d0994; end: 1052d099b; -[SCRunningVoipPushNotificationSetItem overallVoipPushNotificationStartTimestamp] */

undefined8 FUN_1052d0994(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052d099c; end: 1052d09a3; -[SCRunningVoipPushNotificationSetItem setOverallVoipPushNotificationStartTimestamp:] */

void FUN_1052d099c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1052d09a4; end: 1052d09ab; -[SCRunningVoipPushNotificationSetItem runningVoipPushNotifications] */

undefined8 FUN_1052d09a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052d09ac; end: 1052d09db; -[SCRunningVoipPushNotificationSetItem setRunningVoipPushNotifications:] */

void FUN_1052d09ac(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1052d09dc; end: 1052d0a0b; -[SCRunningVoipPushNotificationSetItem .cxx_destruct] */

void FUN_1052d09dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052d0a0c; end: 1052d0b57; -[SCBackgroundTaskTracker initWithBlizzardLogger:batteryLogger:networkMonitor:systemScopedAppGroupUserDefaults:applicationLifecycleEvents:] */

undefined8
FUN_1052d0a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bfef240();
  puVar2 = PTR_PTR_1126aeea8;
  _objc_alloc_init(PTR_PTR_1126aeea8);
  puVar3 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3ae60(param_1,param_2,puVar1,puVar3,param_6,puVar2,1,param_3,param_4,param_5,param_7
                     );
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1052d0b58; end: 1052d1043; -[SCBackgroundTaskTracker _initWithQueuePerformer:userDefaults:systemScopedAppGroupUserDefaults:dateProvider:skipTrackingInvalidTask:blizzardLogger:batteryLogger:networkMonitor:applicationLifecycleEvents:] */

undefined8 *
FUN_1052d0b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_80 = PTR_PTR_1126e7518;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[1];
    puVar1[1] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[2];
    puVar1[2] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[3];
    puVar1[3] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x24];
    puVar1[0x24] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = 0;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    uVar2 = param_11;
    func_0x00010bf75dc0(param_11);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1052d1044;
    puStack_a0 = &UNK_110846510;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_11;
    func_0x00010c2a6420(param_11);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x1052d1078;
    puStack_c8 = &UNK_110846510;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_11;
    func_0x00010c2522c0(param_11);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e8,auStack_90);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x20) = param_7;
    func_0x00010bee1880(puVar1);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1052d1044; end: 1052d10df;  */

void FUN_1052d1044(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdfd8e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052d10e0; end: 1052d10e7; -[SCBackgroundTaskTracker _updateSuspendTime] */

void FUN_1052d10e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee18b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,param_1,PTR_s__updateSuspendTimeAfterTimeInSec_112595fd0);
  return;
}



/* Entry: 1052d10e8; end: 1052d119b; -[SCBackgroundTaskTracker _updateSuspendTimeAfterTimeInSecond:] */

void FUN_1052d10e8(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  double dStack_48;
  
  uVar1 = 0;
  _dispatch_time(0,(long)(param_1 * 1000000000.0));
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1052d119c;
  puStack_58 = &UNK_110848c48;
  lStack_50 = param_2;
  dStack_48 = param_1;
  func_0x00010058c530(uVar1,uVar2,&puStack_70);
  _objc_release(uVar2);
  return;
}



/* Entry: 1052d119c; end: 1052d11a3;  */

void FUN_1052d119c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee18d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateSuspendTimeImmediately_112595fd8);
  return;
}



/* Entry: 1052d11a4; end: 1052d127f; -[SCBackgroundTaskTracker _updateSuspendTimeImmediately] */

void FUN_1052d11a4(double param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar4 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf07b60();
  _objc_release(puVar4);
  if (puVar5 == (undefined *)0x2) {
    _CACurrentMediaTime();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    dVar6 = param_1 - *(double *)(param_2 + 0x118);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (*(double *)(param_2 + 0x118) != 0.0) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar6)) {
        bVar1 = dVar6 < 1.0;
        bVar2 = dVar6 == 1.0;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      dVar6 = param_1 - *(double *)(param_2 + 0x110);
      bVar1 = false;
      if ((*(double *)(param_2 + 0x110) < param_1) && (bVar1 = false, !NAN(dVar6))) {
        bVar1 = dVar6 < 2.0;
      }
      if (!bVar1) {
        *(double *)(param_2 + 0x110) = param_1;
        uStack_50 = 0xc2000000;
        pcStack_48 = FUN_1052d1280;
        puStack_40 = &UNK_110842e18;
        lStack_38 = param_2;
        func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_58);
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x118) = 0;
    }
  }
  return;
}



/* Entry: 1052d1280; end: 1052d138f;  */

void FUN_1052d1280(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf145e0();
  _objc_release(puVar1);
  if (600.0 < param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010bee1890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + 0x20),PTR_s__updateSuspendTime_112595fc8);
    return;
  }
  _CACurrentMediaTime();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20);
  _objc_retain();
  func_0x00010c0f7fc0(uVar2);
  _objc_release(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 1052d1390; end: 1052d140b;  */

void FUN_1052d1390(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x108);
  *(undefined8 *)(lVar1 + 0x108) = uVar2;
  _objc_release(uVar3);
  dVar4 = 0.0;
  if (3.0 < *(double *)(param_1 + 0x38)) {
    dVar4 = *(double *)(param_1 + 0x38) + -2.0;
    func_0x00010bee18a0(dVar4,*(undefined8 *)(param_1 + 0x20));
    dVar4 = dVar4 + *(double *)(param_1 + 0x30);
  }
  *(double *)(*(long *)(param_1 + 0x20) + 0x118) = dVar4;
  return;
}



/* Entry: 1052d140c; end: 1052d1437; -[SCBackgroundTaskTracker _resetSuspendTimeOnAppOpen] */

void FUN_1052d140c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  return;
}



/* Entry: 1052d1438; end: 1052d1733; -[SCBackgroundTaskTracker didBackgroundTaskStartWithName:startTimestamp:taskIdentifier:] */

void FUN_1052d1438(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x1052d14fc;
  puStack_68 = &UNK_11084d788;
  lStack_60 = param_1;
  uStack_58 = param_4;
  uStack_50 = param_3;
  uStack_48 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 1052d1734; end: 1052d17c3;  */

bool FUN_1052d1734(long param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if ((param_1 == 0) && (param_2 != 0)) {
    bVar1 = true;
  }
  else {
    puVar2 = PTR_PTR_1126ae520;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf07b60();
    if (puVar3 == (undefined *)0x2) {
      puVar3 = PTR_PTR_1126ae520;
      func_0x00010c22b6a0(PTR_PTR_1126ae520);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0d9860();
      bVar1 = puVar4 == (undefined *)0x2;
      _objc_release(puVar3);
    }
    else {
      bVar1 = false;
    }
    _objc_release(puVar2);
  }
  return bVar1;
}



/* Entry: 1052d17c4; end: 1052d1887; -[SCBackgroundTaskTracker didBackgroundTaskEndAtTimestamp:taskIdentifier:endBackgroundTaskBlock:] */

void FUN_1052d17c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1052d1888;
  puStack_68 = &UNK_110845188;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_release(param_5);
  return;
}



/* Entry: 1052d1888; end: 1052d1b33;  */

void FUN_1052d1888(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x100) == '\x01' &&
      *(long *)(param_1 + 0x38) == *(long *)PTR__UIBackgroundTaskInvalid_110345af0) {
                    /* WARNING: Could not recover jumptable at 0x0001052d19a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) goto LAB_1052d1b00;
  lVar3 = lVar2;
  func_0x00010c26a8a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    lVar8 = lVar4;
    func_0x00010c142ce0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
    _objc_release(lVar8);
    lVar8 = lVar4;
    func_0x00010c142ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf529e0();
    if (lVar9 == 0) {
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
      FUN_1052d1734(uVar5,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60));
      _objc_release(lVar8);
      if ((int)uVar5 != 0) {
        func_0x00010bdd8800(*(undefined8 *)(param_1 + 0x20));
      }
    }
    else {
      _objc_release(lVar8);
    }
    lVar8 = lVar4;
    func_0x00010c142ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf529e0();
    _objc_release(lVar8);
    if (lVar9 == 0) {
      func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50));
    }
  }
  puVar6 = puVar1;
  func_0x00010c25d700(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b6e40;
  _objc_alloc(PTR_PTR_1126b6e40);
  func_0x00010c052860();
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf8));
  func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40));
  lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010bf529e0();
  if (lVar8 == 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
    FUN_1052d1734(uVar5,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60));
    if ((int)uVar5 != 0) {
      func_0x00010bdd87e0(*(undefined8 *)(param_1 + 0x20));
      lVar9 = *(long *)(param_1 + 0x20);
      lVar8 = *(long *)(lVar9 + 0x90);
      if (lVar8 == 0) {
LAB_1052d1ab0:
        func_0x00010bdd8480(lVar9);
        func_0x00010bde11a0(*(undefined8 *)(param_1 + 0x20));
      }
      else {
        func_0x00010bf433a0();
        if (lVar8 == -1) {
          lVar9 = *(long *)(param_1 + 0x20);
          goto LAB_1052d1ab0;
        }
      }
      func_0x00010be92400(*(undefined8 *)(param_1 + 0x20));
      lVar8 = *(long *)(param_1 + 0x20);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar5);
      uVar10 = *(undefined8 *)(lVar8 + 0x98);
      *(undefined8 *)(lVar8 + 0x98) = uVar5;
      _objc_release(uVar10);
    }
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
LAB_1052d1b00:
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1052d1b34; end: 1052d1b73; -[SCBackgroundTaskTracker _updateBackgroundTasksMetricsWhenAppEnterForeground] */

void FUN_1052d1b34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf5e5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed3c20(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052d1b74; end: 1052d1c03; -[SCBackgroundTaskTracker _updateBackgroundTasksMetricsWhenAppEnterForegroundAtTimestamp:] */

void FUN_1052d1b74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1052d1c04;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1052d1c04; end: 1052d1ebf;  */

void FUN_1052d1c04(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
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
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x108);
  func_0x00010bf433a0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  lVar7 = *(long *)(param_1 + 0x20);
  if ((lVar1 == -1) && (*(long *)(lVar7 + 0x58) != 0)) {
    lVar1 = *(long *)(lVar7 + 0x40);
    func_0x00010bf529e0();
    lVar7 = *(long *)(param_1 + 0x20);
    if (lVar1 != 0) {
      uVar8 = *(undefined8 *)(lVar7 + 0x58);
      *(undefined8 *)(lVar7 + 0x58) = 0;
      _objc_release(uVar8);
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
      *(undefined **)(*(long *)(param_1 + 0x20) + 0x40) = puVar5;
      _objc_release(uVar8);
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
      *(undefined **)(*(long *)(param_1 + 0x20) + 0x50) = puVar5;
      _objc_release(uVar8);
      lVar7 = *(long *)(param_1 + 0x20);
    }
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar7 = *(long *)(lVar7 + 0x50);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
        func_0x00010c0e00e0(lVar2,param_2,uVar8);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c142ce0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf529e0();
        _objc_release(lVar3);
        if (lVar4 != 0) {
          func_0x00010bdd8800(*(undefined8 *)(param_1 + 0x20),param_2,uVar8,
                              *(undefined8 *)(param_1 + 0x28));
        }
        _objc_release(lVar2);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar7;
      func_0x00010bf52a60(lVar7,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar7);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0xe8);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bdd8840(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    func_0x00010bdd8620(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x90);
    func_0x00010bf433a0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    uVar8 = uVar6;
    if (lVar1 == -1) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
      _objc_retain(uVar8);
      _objc_release(uVar6);
    }
    func_0x00010bdd8480(*(undefined8 *)(param_1 + 0x20),param_2,uVar8);
    _objc_release(uVar8);
  }
  else {
    func_0x00010bdd87e0();
    func_0x00010bdd8480(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  }
  func_0x00010bde11a0(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar8);
  uVar6 = *(undefined8 *)(lVar1 + 0x68);
  *(undefined8 *)(lVar1 + 0x68) = uVar8;
  _objc_release(uVar6);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60) = 0;
  _objc_release(uVar8);
  func_0x00010bdfc3e0(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be93f00();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(lVar1 + 0x38);
  func_0x00010bf5e5e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfd920(lVar1,param_2,uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 1052d1ec0; end: 1052d1eff; -[SCBackgroundTaskTracker _didEnterBackground] */

void FUN_1052d1ec0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf5e5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfd920(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052d1f00; end: 1052d1fef; -[SCBackgroundTaskTracker _didEnterBackgroundAtTimestamp:] */

void FUN_1052d1f00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1052d1f90;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1052d1ff0; end: 1052d2027; -[SCBackgroundTaskTracker _willEnterForeground] */

void FUN_1052d1ff0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1052d2028; end: 1052d2063; -[SCBackgroundTaskTracker _startupComplete] */

void FUN_1052d2028(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x00010bed3c20();
    func_0x00010be900e0(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1052d2064; end: 1052d2067; -[SCBackgroundTaskTracker onAppIdle] */

void FUN_1052d2064(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be900f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reportPreviousSavedBackgroundTa_1125819d8);
  return;
}



/* Entry: 1052d2068; end: 1052d2b57; -[SCBackgroundTaskTracker _savedBackgroundTasksRunningMetrics] */

void FUN_1052d2068(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
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
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dff20(uVar1,param_2,&PTR____CFConstantStringClassReference_110dcf8b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067fc0();
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1052d2b58(uVar1,&PTR____CFConstantStringClassReference_110dcf8f8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  FUN_1052d2b58(uVar4,&PTR____CFConstantStringClassReference_110dcf918);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x28);
  FUN_1052d2b58(lVar5,&PTR____CFConstantStringClassReference_110dcf958);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + 0x28);
  FUN_1052d2b58(lVar6,&PTR____CFConstantStringClassReference_110dcf978);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_1 + 0x28);
  FUN_1052d2b58(lVar7,&PTR____CFConstantStringClassReference_110dcf998);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + 0x28);
  FUN_1052d2b58(lVar8,&PTR____CFConstantStringClassReference_110dcf9b8);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_1 + 0x28);
  FUN_1052d2b58(lVar9,&PTR____CFConstantStringClassReference_110dcf938);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(param_1 + 0x28);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar10;
  func_0x00010c067fc0();
  _objc_release(lVar10);
  lVar11 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar11;
  func_0x00010c067f80();
  _objc_release(lVar11);
  lVar12 = *(long *)(param_1 + 0x28);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar12;
  func_0x00010c067fc0();
  _objc_release(lVar12);
  lVar13 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar13;
  func_0x00010c067f80();
  _objc_release(lVar13);
  lVar14 = *(long *)(param_1 + 0x28);
  FUN_1052d2b58(lVar14,&PTR____CFConstantStringClassReference_110dcfa18);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = *(long *)(param_1 + 0x28);
  FUN_1052d2b58(lVar15,&PTR____CFConstantStringClassReference_110dcfa58);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = *(long *)(param_1 + 0x28);
  FUN_1052d2b58(lVar16,&PTR____CFConstantStringClassReference_110dcfa38);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dff20(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4fe0();
  _objc_release(uVar17);
  uVar17 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dff20(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4fe0();
  _objc_release(uVar17);
  uVar17 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dff20(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(uVar17);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28));
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1add40();
  _objc_release(uVar17);
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1add40();
  _objc_release(uVar17);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28));
  puVar18 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar18);
  _objc_release(puVar19);
  puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar18);
  _objc_release(puVar19);
  puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar18);
  _objc_release(puVar19);
  puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar18);
  _objc_release(puVar19);
  func_0x00010bef7f60(puVar18);
  puVar19 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
  lVar13 = lVar14;
  func_0x00010bf529e0();
  if (lVar13 != 0) {
    func_0x00010c1d0640(puVar19);
  }
  lVar13 = lVar16;
  func_0x00010bf529e0();
  if (lVar13 != 0) {
    func_0x00010c1d0640(puVar19);
  }
  if (0 < lVar2) {
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar18);
    _objc_release(puVar20);
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar19);
    _objc_release(puVar20);
  }
  if (0 < lVar10) {
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar18);
    _objc_release(puVar20);
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar19);
    _objc_release(puVar20);
  }
  if (0 < lVar12) {
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar19);
    _objc_release(puVar20);
  }
  if (0 < lVar3) {
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar19);
    _objc_release(puVar20);
  }
  if (0 < lVar11) {
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar19);
    _objc_release(puVar20);
  }
  puVar20 = puVar19;
  func_0x00010bf529e0();
  if (puVar20 != (undefined *)0x0) {
    puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    puVar21 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340();
    _objc_release(puVar21);
    if (puVar20 == (undefined *)0x0) {
      puVar21 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar18);
      _objc_release(puVar21);
    }
    else {
      func_0x00010c1d0640(puVar18);
    }
    _objc_release(puVar20);
  }
  lVar3 = lVar5;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    puVar21 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340();
    _objc_release(puVar21);
    if (puVar20 == (undefined *)0x0) {
      puVar21 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar18);
      _objc_release(puVar21);
    }
    else {
      func_0x00010c1d0640(puVar18);
    }
    _objc_release(puVar20);
  }
  lVar3 = lVar6;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    func_0x00010c1d0640(puVar18);
  }
  lVar3 = lVar7;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    puVar21 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340();
    _objc_release(puVar21);
    if (puVar20 == (undefined *)0x0) {
      puVar21 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar18);
      _objc_release(puVar21);
    }
    else {
      func_0x00010c1d0640(puVar18);
    }
    _objc_release(puVar20);
  }
  lVar3 = lVar8;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    func_0x00010c1d0640(puVar18);
  }
  lVar3 = lVar9;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    func_0x00010c1d0640(puVar18);
  }
  lVar3 = lVar15;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    puVar21 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340();
    _objc_release(puVar21);
    if (puVar20 == (undefined *)0x0) {
      puVar21 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar18);
      _objc_release(puVar21);
    }
    else {
      func_0x00010c1d0640(puVar18);
    }
    _objc_release(puVar20);
  }
  puVar20 = puVar18;
  func_0x00010bf51e00(puVar18);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 1052d2b58; end: 1052d2be3;  */

void FUN_1052d2b58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c0dff20(param_1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar2 = puVar1;
  func_0x00010bf67000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1052d2be4; end: 1052d2d3f; -[SCBackgroundTaskTracker didReceivedPushNotificationWithIdentifier:type:] */

void FUN_1052d2be4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf5e5e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1052d2d40;
    puStack_78 = &UNK_11084c4a0;
    lStack_70 = param_1;
    _objc_retain(param_3);
    lStack_68 = param_3;
    _objc_retain(param_4);
    lStack_60 = param_4;
    uStack_58 = uVar2;
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_90);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1052d2d80;
    puStack_b0 = &UNK_110848ba8;
    lStack_a8 = param_1;
    _objc_retain(param_3);
    lStack_a0 = param_3;
    _objc_retain(param_4);
    lStack_98 = param_4;
    func_0x00010c0f7fe0(0x403e000000000000,uVar3,param_2,&puStack_c8);
    _objc_release(lStack_98);
    _objc_release(lStack_a0);
    _objc_release(uStack_58);
    _objc_release(lStack_60);
    _objc_release(lStack_68);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1052d2d40; end: 1052d2d7f;  */

void FUN_1052d2d40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  FUN_1052d1734(uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60));
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdffc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__didReceivedPushNotificationInBa_11255d8c0,
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x38));
    return;
  }
  return;
}



/* Entry: 1052d2d80; end: 1052d2d93;  */

void FUN_1052d2d80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf73ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didCompletePushNotificationWithI_1125ba958,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 1052d2d94; end: 1052d2eaf; -[SCBackgroundTaskTracker didCompletePushNotificationWithIdentifier:type:withCompletionHandler:] */

void FUN_1052d2d94(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf5e5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1052d2eb0;
    puStack_70 = &UNK_110852488;
    _objc_retain(param_3);
    lStack_68 = param_3;
    lStack_60 = param_1;
    _objc_retain(param_4);
    lStack_58 = param_4;
    uStack_50 = uVar1;
    _objc_retain(param_5);
    uStack_48 = param_5;
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_88);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(lStack_58);
    _objc_release(lStack_68);
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1052d2eb0; end: 1052d2eff;  */

void FUN_1052d2eb0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x68);
  FUN_1052d1734(uVar1,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60));
  if ((int)uVar1 != 0) {
    func_0x00010bdfce40(*(undefined8 *)(param_1 + 0x28));
  }
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001052d2ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1052d2f00; end: 1052d3303; -[SCBackgroundTaskTracker _didReceivedPushNotificationInBackgroundWithIdentifier:type:timestamp:] */

void FUN_1052d2f00(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  code *pcStack_390;
  undefined *puStack_388;
  long lStack_380;
  undefined8 uStack_378;
  long lStack_370;
  undefined *puStack_368;
  long lStack_360;
  undefined *puStack_358;
  undefined1 **ppuStack_350;
  code *pcStack_348;
  undefined *puStack_338;
  long lStack_330;
  long lStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [128];
  long lStack_260;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x90);
  if ((lVar1 == 0) || (func_0x00010bf433a0(lVar1,param_2,param_5), lVar1 == -1)) {
    lVar1 = *(long *)(param_1 + 0x108);
    func_0x00010bf433a0(lVar1,param_2,param_5);
    if (lVar1 == -1) {
      if (*(long *)(param_1 + 0x58) != 0) {
        lVar1 = *(long *)(param_1 + 0x40);
        func_0x00010bf529e0();
        if (lVar1 != 0) {
          _objc_retain(param_5);
          uVar2 = *(undefined8 *)(param_1 + 0x58);
          *(undefined **)(param_1 + 0x58) = param_5;
          _objc_release(uVar2);
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          lStack_1a8 = 0;
          uStack_1b0 = 0;
          uStack_198 = 0;
          plStack_1a0 = (long *)0x0;
          lVar3 = *(long *)(param_1 + 0x40);
          func_0x00010bf00d20();
          _objc_retainAutoreleasedReturnValue();
          lVar1 = lVar3;
          func_0x00010bf52a60();
          if (lVar1 != 0) {
            lVar12 = *plStack_1a0;
            do {
              lVar13 = 0;
              do {
                if (*plStack_1a0 != lVar12) {
                  _objc_enumerationMutation(lVar3);
                }
                func_0x00010c212900(*(undefined8 *)(lStack_1a8 + lVar13 * 8),param_2,param_5);
                lVar13 = lVar13 + 1;
              } while (lVar1 != lVar13);
              lVar1 = lVar3;
              func_0x00010bf52a60(lVar3,param_2,&uStack_1b0,auStack_e8,0x10);
            } while (lVar1 != 0);
          }
          _objc_release(lVar3);
        }
      }
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      lStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      plStack_1e0 = (long *)0x0;
      lVar3 = *(long *)(param_1 + 0x50);
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010bf52a60();
      if (lVar1 != 0) {
        lVar12 = *plStack_1e0;
        do {
          lVar13 = 0;
          do {
            if (*plStack_1e0 != lVar12) {
              _objc_enumerationMutation(lVar3);
            }
            uVar2 = *(undefined8 *)(param_1 + 0x50);
            func_0x00010c0e00e0(uVar2,param_2,*(undefined8 *)(lStack_1e8 + lVar13 * 8));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d7440();
            _objc_release(uVar2);
            lVar13 = lVar13 + 1;
          } while (lVar1 != lVar13);
          lVar1 = lVar3;
          func_0x00010bf52a60(lVar3,param_2,&uStack_1f0,auStack_168,0x10);
        } while (lVar1 != 0);
      }
      _objc_release(lVar3);
      func_0x00010bdfc400(param_1,param_2,param_5);
    }
    func_0x00010bee1880(param_1);
    if (*(long *)(param_1 + 0x58) == 0) {
      lVar1 = *(long *)(param_1 + 0x40);
      func_0x00010bf529e0();
      if (lVar1 == 0) {
        func_0x00010bdd8620(param_1,param_2,param_5);
        lVar1 = *(long *)(param_1 + 0x90);
        if (lVar1 != 0) {
          func_0x00010bf433a0(lVar1,param_2,param_5);
          if (lVar1 != -1) goto LAB_1052d3178;
          func_0x00010bdd8480(param_1,param_2,*(undefined8 *)(param_1 + 0x90));
          func_0x00010bdd8840(param_1,param_2,*(undefined8 *)(param_1 + 0x90));
          func_0x00010bde11a0(param_1);
        }
        func_0x00010bdfc400(param_1,param_2,param_5);
      }
    }
LAB_1052d3178:
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = param_5;
    _objc_release(uVar2);
  }
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  *(long *)(param_1 + 0xa8) = param_3;
  _objc_release(uVar2);
  puVar4 = param_5;
  func_0x00010bf64e40(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xd8),param_2,puVar4,param_3);
  _objc_retain(puVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar4;
  _objc_release(uVar2);
  lVar1 = *(long *)(param_1 + 0xe8);
  func_0x00010c0e00e0(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar5 = PTR_PTR_1126b6e48;
    _objc_alloc(PTR_PTR_1126b6e48);
    func_0x00010c0136a0();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xe8),param_2,puVar5,param_4);
  }
  else {
    puVar5 = *(undefined **)(param_1 + 0xe8);
    func_0x00010c0e00e0(puVar5,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c142de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b6e40;
  _objc_alloc();
  lVar3 = param_3;
  func_0x00010c052860();
  puVar6 = puVar5;
  lVar1 = param_3;
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xf0));
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1f8 = FUN_1052d3304;
  lStack_260 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_200 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(lVar1);
  _objc_retain(lVar3);
  lVar12 = *(long *)(param_3 + 0xd8);
  func_0x00010c0e00e0(lVar12,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar12 == 0) goto LAB_1052d35e8;
  func_0x00010c12d3e0(*(undefined8 *)(param_3 + 0xd8),param_2,puVar6);
  lVar12 = *(long *)(param_3 + 0xe8);
  func_0x00010c0e00e0(lVar12,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar12 != 0) {
    lVar13 = lVar12;
    func_0x00010c142de0(lVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
    _objc_release(lVar13);
    lVar13 = lVar12;
    func_0x00010c142de0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar13;
    func_0x00010bf529e0();
    _objc_release(lVar13);
    if (lVar10 == 0) {
      func_0x00010bdd8820(param_3,param_2,lVar1,lVar3);
      func_0x00010c12d3e0(*(undefined8 *)(param_3 + 0xe8),param_2,lVar1);
    }
  }
  lVar13 = *(long *)(param_3 + 0xe8);
  func_0x00010bf529e0();
  if (lVar13 == 0) {
    uVar2 = *(undefined8 *)(param_3 + 0xe0);
    func_0x00010bf51e00(uVar2);
    func_0x00010be99dc0(param_3,param_2,uVar2);
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_3 + 0xe0);
    *(undefined **)(param_3 + 0xe0) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_3 + 0xe8);
    *(undefined **)(param_3 + 0xe8) = puVar4;
    _objc_release(uVar2);
  }
  param_5 = PTR_PTR_1126b6e40;
  _objc_alloc();
  func_0x00010c052860();
  func_0x00010c1d0640(*(undefined8 *)(param_3 + 0xf8),param_2,param_5,puVar6);
  lVar13 = *(long *)(param_3 + 0xd8);
  func_0x00010bf529e0();
  if ((lVar13 == 0) && (*(long *)(param_3 + 0x58) == 0)) {
    lVar13 = *(long *)(param_3 + 0x40);
    func_0x00010bf529e0();
    if (lVar13 != 0) goto LAB_1052d34d0;
    func_0x00010bdd8620(param_3,param_2,lVar3);
    func_0x00010bdd8480(param_3,param_2,lVar3);
    func_0x00010bde11a0(param_3);
  }
  else {
LAB_1052d34d0:
    lVar13 = *(long *)(param_3 + 0xd8);
    puStack_338 = param_5;
    lStack_330 = lVar12;
    lStack_328 = lVar3;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar13;
    func_0x00010bf51e00();
    _objc_retain();
    lStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    plStack_310 = (long *)0x0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    lVar12 = lVar3;
    func_0x00010bf52a60(lVar3,param_2,&uStack_320,auStack_2e0,0x10);
    if (lVar12 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      lVar11 = *plStack_310;
      do {
        lVar8 = 0;
        do {
          if (*plStack_310 != lVar11) {
            _objc_enumerationMutation(lVar3);
          }
          lVar14 = *(long *)(lStack_318 + lVar8 * 8);
          if ((lVar10 == 0) ||
             (lVar7 = lVar10, func_0x00010bf433a0(lVar10,param_2,lVar14), lVar7 == -1)) {
            _objc_retain(lVar14);
            _objc_release(lVar10);
            lVar10 = lVar14;
          }
          lVar8 = lVar8 + 1;
        } while (lVar12 != lVar8);
        lVar12 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_320,auStack_2e0,0x10);
      } while (lVar12 != 0);
    }
    _objc_release(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar13);
    uVar2 = *(undefined8 *)(param_3 + 0x90);
    *(long *)(param_3 + 0x90) = lVar10;
    _objc_release(uVar2);
    param_5 = puStack_338;
    lVar3 = lStack_328;
    lVar12 = lStack_330;
  }
  _objc_release(param_5);
  _objc_release(lVar12);
LAB_1052d35e8:
  _objc_release(lVar3);
  lVar3 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_260) {
    ___stack_chk_fail();
    pcStack_348 = FUN_1052d365c;
    uVar2 = *(undefined8 *)(lVar3 + 0x38);
    lStack_370 = param_3;
    puStack_368 = param_5;
    lStack_360 = lVar1;
    puStack_358 = puVar6;
    ppuStack_350 = &puStack_200;
    func_0x00010bf5e5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar3 + 0x20);
    puStack_3a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_398 = 0xc2000000;
    pcStack_390 = FUN_1052d36f0;
    puStack_388 = &UNK_110841f80;
    lStack_380 = lVar3;
    uStack_378 = uVar2;
    _objc_retain();
    func_0x00010c0f7fc0(uVar9,param_2,&puStack_3a0);
    _objc_release(uStack_378);
    _objc_release(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1052d3304; end: 1052d365b; -[SCBackgroundTaskTracker _didCompletePushNotificationInBackgroundWithIdentifier:type:timestamp:] */

void FUN_1052d3304(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *unaff_x21;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0xd8);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) goto LAB_1052d35e8;
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0xd8),param_2,param_3);
  lVar1 = *(long *)(param_1 + 0xe8);
  func_0x00010c0e00e0(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c142de0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c142de0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar5 == 0) {
      func_0x00010bdd8820(param_1,param_2,param_4,param_5);
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0xe8),param_2,param_4);
    }
  }
  lVar2 = *(long *)(param_1 + 0xe8);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xe0);
    func_0x00010bf51e00(uVar3);
    func_0x00010be99dc0(param_1,param_2,uVar3);
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined **)(param_1 + 0xe0) = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined **)(param_1 + 0xe8) = puVar4;
    _objc_release(uVar3);
  }
  unaff_x21 = PTR_PTR_1126b6e40;
  _objc_alloc();
  func_0x00010c052860();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xf8),param_2,unaff_x21,param_3);
  lVar2 = *(long *)(param_1 + 0xd8);
  func_0x00010bf529e0();
  if ((lVar2 == 0) && (*(long *)(param_1 + 0x58) == 0)) {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010bf529e0();
    if (lVar2 != 0) goto LAB_1052d34d0;
    func_0x00010bdd8620(param_1,param_2,param_5);
    func_0x00010bdd8480(param_1,param_2,param_5);
    func_0x00010bde11a0(param_1);
  }
  else {
LAB_1052d34d0:
    lVar5 = *(long *)(param_1 + 0xd8);
    puStack_148 = unaff_x21;
    lStack_140 = lVar1;
    uStack_138 = param_5;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010bf51e00();
    _objc_retain();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar2 = lVar1;
    func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
    if (lVar2 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      lVar10 = *plStack_120;
      do {
        lVar7 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(lVar1);
          }
          lVar11 = *(long *)(lStack_128 + lVar7 * 8);
          if ((lVar9 == 0) ||
             (lVar6 = lVar9, func_0x00010bf433a0(lVar9,param_2,lVar11), lVar6 == -1)) {
            _objc_retain(lVar11);
            _objc_release(lVar9);
            lVar9 = lVar11;
          }
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        lVar2 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar2 != 0);
    }
    _objc_release(lVar1);
    _objc_release(lVar1);
    _objc_release(lVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    *(long *)(param_1 + 0x90) = lVar9;
    _objc_release(uVar3);
    unaff_x21 = puStack_148;
    param_5 = uStack_138;
    lVar1 = lStack_140;
  }
  _objc_release(unaff_x21);
  _objc_release(lVar1);
LAB_1052d35e8:
  _objc_release(param_5);
  lVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_158 = FUN_1052d365c;
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    lStack_180 = param_1;
    puStack_178 = unaff_x21;
    lStack_170 = param_4;
    uStack_168 = param_3;
    puStack_160 = &stack0xfffffffffffffff0;
    func_0x00010bf5e5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar1 + 0x20);
    puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_1052d36f0;
    puStack_198 = &UNK_110841f80;
    lStack_190 = lVar1;
    uStack_188 = uVar3;
    _objc_retain();
    func_0x00010c0f7fc0(uVar8,param_2,&puStack_1b0);
    _objc_release(uStack_188);
    _objc_release(uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052d365c; end: 1052d36ef; -[SCBackgroundTaskTracker didAppWakeupInBackgroundForSystemBackgroundPrefetch] */

void FUN_1052d365c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1052d36f0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = uVar1;
  _objc_retain();
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 1052d36f0; end: 1052d372b;  */

void FUN_1052d36f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  FUN_1052d1734(uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60));
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdfc2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__didAppWakeupInBackgroundForSyst_11255ca58,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 1052d372c; end: 1052d394b; -[SCBackgroundTaskTracker _didAppWakeupInBackgroundForSystemBackgroundPrefetchAtTime:] */

void FUN_1052d372c(double param_1,long param_2,undefined8 param_3,long param_4,undefined1 *param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_158 [256];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar2 = *(long *)(param_2 + 0x108);
  lVar3 = param_4;
  func_0x00010bf433a0();
  if (lVar2 == -1) {
    if (*(long *)(param_2 + 0x58) != 0) {
      lVar3 = *(long *)(param_2 + 0x40);
      func_0x00010bf529e0();
      if (lVar3 != 0) {
        _objc_retain(param_4);
        uVar4 = *(undefined8 *)(param_2 + 0x58);
        *(long *)(param_2 + 0x58) = param_4;
        _objc_release(uVar4);
        lVar5 = *(long *)(param_2 + 0x40);
        func_0x00010bf00d20();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar5;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar3 != 0) {
          lVar9 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar5);
            }
            func_0x00010c212900(*(undefined8 *)(lVar9 * 8));
            lVar9 = lVar9 + 1;
          } while (lVar3 != lVar9);
          lVar3 = lVar5;
          func_0x00010bf52a60();
        }
        _objc_release(lVar5);
      }
    }
    param_1 = 0.0;
    lVar5 = *(long *)(param_2 + 0x50);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    param_5 = auStack_158;
    lVar3 = lVar5;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar5);
        }
        uVar4 = *(undefined8 *)(param_2 + 0x50);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d7440();
        _objc_release(uVar4);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      param_5 = auStack_158;
      lVar3 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    lVar3 = param_4;
    func_0x00010bdfc400(param_2);
  }
  func_0x00010bee1880(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar3);
  uVar8 = *(undefined8 *)(param_4 + 0x50);
  _objc_retain(param_5);
  func_0x00010c0e00e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar8;
  func_0x00010c0ef360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = uVar4;
  FUN_1052d3af0(uVar4,*(undefined8 *)(param_4 + 0x60));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(param_5);
  _objc_release(param_5);
  bVar1 = true;
  if ((param_1 <= 180000.0) && (bVar1 = false, !NAN(param_1))) {
    bVar1 = param_1 < 0.0;
  }
  lVar2 = 0;
  if (!bVar1) {
    lVar2 = (long)(param_1 * 1000.0);
  }
  if (0 < lVar2) {
    lVar2 = *(long *)(param_4 + 0x48);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar2 == 0) {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_4 + 0x48));
    }
    else {
      puVar6 = *(undefined **)(param_4 + 0x48);
      func_0x00010c0e00e0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010c0df780(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_4 + 0x48));
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
  }
  _objc_release(uVar8);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1052d394c; end: 1052d3aef; -[SCBackgroundTaskTracker _calculateOverallBackgroundTasksRunningDurationForTaskName:endTime:] */

void FUN_1052d394c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  _objc_retain(param_5);
  func_0x00010c0e00e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c0ef360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar2;
  FUN_1052d3af0(uVar2,*(undefined8 *)(param_2 + 0x60));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(param_5);
  _objc_release(param_5);
  bVar1 = true;
  if ((param_1 <= 180000.0) && (bVar1 = false, !NAN(param_1))) {
    bVar1 = param_1 < 0.0;
  }
  lVar3 = 0;
  if (!bVar1) {
    lVar3 = (long)(param_1 * 1000.0);
  }
  if (0 < lVar3) {
    lVar3 = *(long *)(param_2 + 0x48);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar3 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x48));
    }
    else {
      puVar4 = *(undefined **)(param_2 + 0x48);
      func_0x00010c0e00e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010c0df780(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x48));
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
  }
  _objc_release(uVar6);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1052d3af0; end: 1052d3b73;  */

void FUN_1052d3af0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_1);
  lVar2 = param_1;
  if ((param_2 != 0) && (lVar1 = param_1, func_0x00010bf433a0(), lVar1 == -1)) {
    _objc_retain(param_2);
    _objc_release(param_1);
    lVar2 = param_2;
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1052d3b74; end: 1052d3c67; -[SCBackgroundTaskTracker _calculateOverallBackgroundTaskRunningDurationWithEndTime:] */

void FUN_1052d3b74(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  _objc_retain(param_4);
  FUN_1052d3af0(uVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(param_4);
  _objc_release(param_4);
  bVar1 = true;
  if ((param_1 <= 180000.0) && (bVar1 = false, !NAN(param_1))) {
    bVar1 = param_1 < 0.0;
  }
  lVar3 = 0;
  if (!bVar1) {
    lVar3 = (long)(param_1 * 1000.0);
  }
  if (0 < lVar3) {
    lVar3 = *(long *)(param_2 + 0x48);
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x48);
      func_0x00010bf51e00(uVar4);
      func_0x00010be99d00(param_2);
      _objc_release(uVar4);
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  *(undefined **)(param_2 + 0x48) = puVar5;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1052d3c68; end: 1052d3ccf; -[SCBackgroundTaskTracker _resetBackgroundTaskLogging] */

void FUN_1052d3c68(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052d3cd0; end: 1052d4007; -[SCBackgroundTaskTracker _saveStateWithBackgroundRunningDuration:attributionMap:] */

void FUN_1052d3cd0(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dff20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar2);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dff20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar2);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  FUN_1052d2b58(uVar2,&PTR____CFConstantStringClassReference_110dcf8f8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_4;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar5);
      }
      puVar6 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar6 == (undefined *)0x0) {
        puVar6 = param_4;
        func_0x00010c0e00e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
      }
      else {
        puVar6 = puVar4;
        func_0x00010c0e00e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        puVar7 = param_4;
        func_0x00010c0e00e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
        _objc_release(puVar8);
        puVar8 = puVar7;
      }
      _objc_release(puVar8);
      _objc_release(puVar6);
      puVar11 = puVar11 + 1;
    } while (puVar3 != puVar11);
    puVar3 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  ppuVar9 = &PTR____CFConstantStringClassReference_110dcf8f8;
  FUN_1052d4008(*(undefined8 *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110dcf8f8,
                puVar4);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  _objc_retain(ppuVar9);
  _objc_retain(param_4);
  func_0x00010bf09780(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_4);
  _objc_release(ppuVar9);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1052d4008; end: 1052d408f;  */

void FUN_1052d4008(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf09780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1052d4090; end: 1052d4427; -[SCBackgroundTaskTracker _calculateBatteryResouceUsageAndBackgroundActivityAttributionWithEndTime:] */

void FUN_1052d4090(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    FUN_1052d3af0(lVar1,*(undefined8 *)(param_1 + 0x60));
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf48f60();
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf13ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
    uVar7 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(puVar6);
    func_0x00010c12d3e0(puVar6);
    func_0x00010c12d3e0(puVar6);
    func_0x00010c12d3e0(puVar6);
    func_0x00010be99da0(param_1);
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf13fe0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be99d80(param_1);
    puVar10 = PTR_PTR_1126ae4f0;
    func_0x00010bf53b60();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0xd0) != -1) {
      puVar11 = puVar10;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar11 != (undefined *)0x0) {
        puVar11 = puVar10;
        func_0x00010c0e00e0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b4fe0();
        _objc_release(puVar11);
      }
    }
    if (*(long *)(param_1 + 200) != -1) {
      puVar11 = puVar10;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar11 != (undefined *)0x0) {
        puVar11 = puVar10;
        func_0x00010c0e00e0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b4fe0();
        _objc_release(puVar11);
      }
    }
    uVar12 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010bf51e00(uVar12);
    func_0x00010be99d20(param_1);
    _objc_release(uVar12);
    lVar13 = param_1;
    func_0x00010bdd8640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be99d60(param_1);
    func_0x00010bdfc3e0(param_1);
    _objc_release(lVar13);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052d4428; end: 1052d4503; -[SCBackgroundTaskTracker _saveStateWithGPSUsageDict:] */

void FUN_1052d4428(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dcfe38);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c067fc0();
  _objc_release(param_3);
  if (0 < lVar1) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c0dff20(lVar2,param_2,&PTR____CFConstantStringClassReference_110dcfab8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4fe0();
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar3 + lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar5,param_2,puVar4,&PTR____CFConstantStringClassReference_110dcfab8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 1052d4504; end: 1052d4847; -[SCBackgroundTaskTracker _saveStateWithCpuUsageDict:sysCpuTime:userCpuTime:] */

void FUN_1052d4504(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined *param_7,undefined *param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  long lVar23;
  undefined *puVar24;
  undefined **ppuVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  FUN_1052d2b58(uVar2,&PTR____CFConstantStringClassReference_110dcfa58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = (undefined *)0x10;
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar22 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      puVar24 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar24 == (undefined *)0x0) {
        puVar24 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
      }
      else {
        puVar24 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        puVar26 = param_3;
        func_0x00010c0e00e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar6);
        puVar6 = puVar26;
      }
      _objc_release(puVar6);
      _objc_release(puVar24);
      puVar22 = puVar22 + 1;
    } while (puVar5 != puVar22);
    puVar22 = (undefined *)0x10;
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  FUN_1052d4008(*(undefined8 *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110dcfa58,
                puVar3);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dff20(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4fe0();
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar7);
  _objc_release(puVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  ppuVar21 = &PTR____CFConstantStringClassReference_110dcfa98;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4fe0();
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c1d0560(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return;
  }
  ___stack_chk_fail();
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(ppuVar21);
  _objc_retain(puVar22);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  FUN_1052d2b58(uVar2,&PTR____CFConstantStringClassReference_110dcf918);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar24 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar6);
      }
      puVar28 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar28 == (undefined *)0x0) {
        puVar28 = puVar4;
        func_0x00010c0e00e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar26);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
      }
      else {
        puVar28 = puVar3;
        func_0x00010c0e00e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        puVar29 = puVar4;
        func_0x00010c0e00e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar26);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar26);
        puVar26 = puVar29;
      }
      _objc_release(puVar26);
      _objc_release(puVar28);
      puVar24 = puVar24 + 1;
    } while (puVar5 != puVar24);
    puVar5 = puVar6;
    func_0x00010bf52a60();
  }
  _objc_release(puVar6);
  FUN_1052d4008(*(undefined8 *)(param_3 + 0x28),&PTR____CFConstantStringClassReference_110dcf918,
                puVar3);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  FUN_1052d2b58(uVar7,&PTR____CFConstantStringClassReference_110dcf958);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar21;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar9;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (ppuVar10 != (undefined **)0x0) {
    ppuVar25 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(ppuVar9);
      }
      ppuVar11 = ppuVar8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (ppuVar11 == (undefined **)0x0) {
        ppuVar11 = ppuVar21;
        func_0x00010c0e00e0(ppuVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar8);
      }
      else {
        ppuVar11 = ppuVar8;
        func_0x00010c0e00e0(ppuVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        ppuVar12 = ppuVar21;
        func_0x00010c0e00e0(ppuVar21);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar8);
        _objc_release(ppuVar13);
        ppuVar13 = ppuVar12;
      }
      _objc_release(ppuVar13);
      _objc_release(ppuVar11);
      ppuVar25 = (undefined **)((long)ppuVar25 + 1);
    } while (ppuVar10 != ppuVar25);
    ppuVar10 = ppuVar9;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar9);
  FUN_1052d4008(*(undefined8 *)(param_3 + 0x28),&PTR____CFConstantStringClassReference_110dcf958,
                ppuVar8);
  uVar14 = *(undefined8 *)(param_3 + 0x28);
  FUN_1052d2b58(uVar14,&PTR____CFConstantStringClassReference_110dcf978);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar24;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar26 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar24);
      }
      puVar29 = puVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar28 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar29 == (undefined *)0x0) {
        puVar29 = puVar22;
        func_0x00010c0e00e0(puVar22);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6);
      }
      else {
        puVar29 = puVar6;
        func_0x00010c0e00e0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        puVar27 = puVar22;
        func_0x00010c0e00e0(puVar22);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6);
        _objc_release(puVar28);
        puVar28 = puVar27;
      }
      _objc_release(puVar28);
      _objc_release(puVar29);
      puVar26 = puVar26 + 1;
    } while (puVar5 != puVar26);
    puVar5 = puVar24;
    func_0x00010bf52a60();
  }
  _objc_release(puVar24);
  FUN_1052d4008(*(undefined8 *)(param_3 + 0x28),&PTR____CFConstantStringClassReference_110dcf978,
                puVar6);
  uVar15 = *(undefined8 *)(param_3 + 0x28);
  FUN_1052d2b58(uVar15,&PTR____CFConstantStringClassReference_110dcf998);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = param_6;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar26;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar28 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar26);
      }
      puVar27 = puVar24;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar29 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar27 == (undefined *)0x0) {
        puVar27 = param_6;
        func_0x00010c0e00e0(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar29);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar24);
      }
      else {
        puVar27 = puVar24;
        func_0x00010c0e00e0(puVar24);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        puVar16 = param_6;
        func_0x00010c0e00e0(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar29);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar24);
        _objc_release(puVar29);
        puVar29 = puVar16;
      }
      _objc_release(puVar29);
      _objc_release(puVar27);
      puVar28 = puVar28 + 1;
    } while (puVar5 != puVar28);
    puVar5 = puVar26;
    func_0x00010bf52a60();
  }
  _objc_release(puVar26);
  FUN_1052d4008(*(undefined8 *)(param_3 + 0x28),&PTR____CFConstantStringClassReference_110dcf998,
                puVar24);
  uVar17 = *(undefined8 *)(param_3 + 0x28);
  FUN_1052d2b58(uVar17,&PTR____CFConstantStringClassReference_110dcf9b8);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = param_7;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar28;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar29 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar28);
      }
      puVar16 = puVar26;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar27 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar16 == (undefined *)0x0) {
        puVar16 = param_7;
        func_0x00010c0e00e0(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar27);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar26);
      }
      else {
        puVar16 = puVar26;
        func_0x00010c0e00e0(puVar26);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        puVar18 = param_7;
        func_0x00010c0e00e0(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar27);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar26);
        _objc_release(puVar27);
        puVar27 = puVar18;
      }
      _objc_release(puVar27);
      _objc_release(puVar16);
      puVar29 = puVar29 + 1;
    } while (puVar5 != puVar29);
    puVar5 = puVar28;
    func_0x00010bf52a60();
  }
  _objc_release(puVar28);
  FUN_1052d4008(*(undefined8 *)(param_3 + 0x28),&PTR____CFConstantStringClassReference_110dcf9b8,
                puVar26);
  uVar19 = *(undefined8 *)(param_3 + 0x28);
  FUN_1052d2b58(uVar19,&PTR____CFConstantStringClassReference_110dcf938);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = param_8;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar29;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar27 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar29);
      }
      puVar18 = puVar28;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar18 == (undefined *)0x0) {
        puVar18 = param_8;
        func_0x00010c0e00e0(param_8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar28);
      }
      else {
        puVar18 = puVar28;
        func_0x00010c0e00e0(puVar28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        puVar20 = param_8;
        func_0x00010c0e00e0(param_8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar28);
        _objc_release(puVar16);
        puVar16 = puVar20;
      }
      _objc_release(puVar16);
      _objc_release(puVar18);
      puVar27 = puVar27 + 1;
    } while (puVar5 != puVar27);
    puVar5 = puVar29;
    func_0x00010bf52a60();
  }
  _objc_release(puVar29);
  FUN_1052d4008(*(undefined8 *)(param_3 + 0x28),&PTR____CFConstantStringClassReference_110dcf938,
                puVar28);
  _objc_release(puVar28);
  _objc_release(uVar19);
  _objc_release(puVar26);
  _objc_release(uVar17);
  _objc_release(puVar24);
  _objc_release(uVar15);
  _objc_release(puVar6);
  _objc_release(uVar14);
  _objc_release(ppuVar8);
  _objc_release(uVar7);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar22);
  _objc_release(ppuVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(puVar4 + 0x88);
  *(undefined8 *)(puVar4 + 0x88) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(puVar4 + 0x90);
  *(undefined8 *)(puVar4 + 0x90) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(puVar4 + 0x98);
  *(undefined8 *)(puVar4 + 0x98) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(puVar4 + 0xa8);
  *(undefined8 *)(puVar4 + 0xa8) = 0;
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(puVar4 + 0xd8);
  *(undefined **)(puVar4 + 0xd8) = puVar5;
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(puVar4 + 0xe8);
  *(undefined **)(puVar4 + 0xe8) = puVar5;
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(puVar4 + 0xe0);
  *(undefined **)(puVar4 + 0xe0) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1052d4848; end: 1052d54bb; -[SCBackgroundTaskTracker _saveStateWithNetworkUsageDict:networkUsageAttributionDict:networkUsageAttributionV2Dict:networkRadioOverheadAttributionDict:networkRadioOverheadAttributionV2Dict:networkActivityCountAttributionDict:] */

void FUN_1052d4848(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7,undefined *param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  FUN_1052d2b58(uVar2,&PTR____CFConstantStringClassReference_110dcf918);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      puVar17 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar17 == (undefined *)0x0) {
        puVar17 = param_3;
        func_0x00010c0e00e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
      }
      else {
        puVar17 = puVar3;
        func_0x00010c0e00e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        puVar19 = param_3;
        func_0x00010c0e00e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar16);
        puVar16 = puVar19;
      }
      _objc_release(puVar16);
      _objc_release(puVar17);
      puVar15 = puVar15 + 1;
    } while (puVar5 != puVar15);
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  FUN_1052d4008(*(undefined8 *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110dcf918,
                puVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  FUN_1052d2b58(uVar6,&PTR____CFConstantStringClassReference_110dcf958);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = param_4;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar15;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar16 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar15);
      }
      puVar19 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar19 == (undefined *)0x0) {
        puVar19 = param_4;
        func_0x00010c0e00e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
      }
      else {
        puVar19 = puVar4;
        func_0x00010c0e00e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        puVar20 = param_4;
        func_0x00010c0e00e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
        _objc_release(puVar17);
        puVar17 = puVar20;
      }
      _objc_release(puVar17);
      _objc_release(puVar19);
      puVar16 = puVar16 + 1;
    } while (puVar5 != puVar16);
    puVar5 = puVar15;
    func_0x00010bf52a60();
  }
  _objc_release(puVar15);
  FUN_1052d4008(*(undefined8 *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110dcf958,
                puVar4);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  FUN_1052d2b58(uVar7,&PTR____CFConstantStringClassReference_110dcf978);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = param_5;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar16;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar16);
      }
      puVar20 = puVar15;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar20 == (undefined *)0x0) {
        puVar20 = param_5;
        func_0x00010c0e00e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar15);
      }
      else {
        puVar20 = puVar15;
        func_0x00010c0e00e0(puVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        puVar18 = param_5;
        func_0x00010c0e00e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar15);
        _objc_release(puVar19);
        puVar19 = puVar18;
      }
      _objc_release(puVar19);
      _objc_release(puVar20);
      puVar17 = puVar17 + 1;
    } while (puVar5 != puVar17);
    puVar5 = puVar16;
    func_0x00010bf52a60();
  }
  _objc_release(puVar16);
  FUN_1052d4008(*(undefined8 *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110dcf978,
                puVar15);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  FUN_1052d2b58(uVar8,&PTR____CFConstantStringClassReference_110dcf998);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = param_6;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar17;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar17);
      }
      puVar18 = puVar16;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar18 == (undefined *)0x0) {
        puVar18 = param_6;
        func_0x00010c0e00e0(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar16);
      }
      else {
        puVar18 = puVar16;
        func_0x00010c0e00e0(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        puVar9 = param_6;
        func_0x00010c0e00e0(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar16);
        _objc_release(puVar20);
        puVar20 = puVar9;
      }
      _objc_release(puVar20);
      _objc_release(puVar18);
      puVar19 = puVar19 + 1;
    } while (puVar5 != puVar19);
    puVar5 = puVar17;
    func_0x00010bf52a60();
  }
  _objc_release(puVar17);
  FUN_1052d4008(*(undefined8 *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110dcf998,
                puVar16);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  FUN_1052d2b58(uVar10,&PTR____CFConstantStringClassReference_110dcf9b8);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = param_7;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar19;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar19);
      }
      puVar9 = puVar17;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar9 == (undefined *)0x0) {
        puVar9 = param_7;
        func_0x00010c0e00e0(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar17);
      }
      else {
        puVar9 = puVar17;
        func_0x00010c0e00e0(puVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        puVar11 = param_7;
        func_0x00010c0e00e0(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar17);
        _objc_release(puVar18);
        puVar18 = puVar11;
      }
      _objc_release(puVar18);
      _objc_release(puVar9);
      puVar20 = puVar20 + 1;
    } while (puVar5 != puVar20);
    puVar5 = puVar19;
    func_0x00010bf52a60();
  }
  _objc_release(puVar19);
  FUN_1052d4008(*(undefined8 *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110dcf9b8,
                puVar17);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  FUN_1052d2b58(uVar12,&PTR____CFConstantStringClassReference_110dcf938);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = param_8;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar20;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar20);
      }
      puVar11 = puVar19;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar11 == (undefined *)0x0) {
        puVar11 = param_8;
        func_0x00010c0e00e0(param_8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar19);
      }
      else {
        puVar11 = puVar19;
        func_0x00010c0e00e0(puVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        puVar13 = param_8;
        func_0x00010c0e00e0(param_8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar19);
        _objc_release(puVar9);
        puVar9 = puVar13;
      }
      _objc_release(puVar9);
      _objc_release(puVar11);
      puVar18 = puVar18 + 1;
    } while (puVar5 != puVar18);
    puVar5 = puVar20;
    func_0x00010bf52a60();
  }
  _objc_release(puVar20);
  FUN_1052d4008(*(undefined8 *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110dcf938,
                puVar19);
  _objc_release(puVar19);
  _objc_release(uVar12);
  _objc_release(puVar17);
  _objc_release(uVar10);
  _objc_release(puVar16);
  _objc_release(uVar8);
  _objc_release(puVar15);
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(param_3 + 0x88);
  *(undefined8 *)(param_3 + 0x88) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_3 + 0x90);
  *(undefined8 *)(param_3 + 0x90) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_3 + 0x98);
  *(undefined8 *)(param_3 + 0x98) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_3 + 0xa8);
  *(undefined8 *)(param_3 + 0xa8) = 0;
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + 0xd8);
  *(undefined **)(param_3 + 0xd8) = puVar5;
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + 0xe8);
  *(undefined **)(param_3 + 0xe8) = puVar5;
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + 0xe0);
  *(undefined **)(param_3 + 0xe0) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1052d54bc; end: 1052d5567; -[SCBackgroundTaskTracker _clearTimestampsForExtraRunningTimeFromPushNotif] */

void FUN_1052d54bc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined **)(param_1 + 0xd8) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined **)(param_1 + 0xe8) = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined **)(param_1 + 0xe0) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052d5568; end: 1052d56e3; -[SCBackgroundTaskTracker _calculateExtraBackgroudPushNotifRunningTimeSincePreviousBgTaskGroupCompleteUntilTime:] */

void FUN_1052d5568(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  lVar1 = *(long *)(param_2 + 0x90);
  lVar2 = *(long *)(param_2 + 0x98);
  lVar3 = *(long *)(param_2 + 0x88);
  _objc_retain(lVar2);
  _objc_retain(lVar3);
  _objc_retain(lVar1);
  _objc_retain(param_4);
  lVar5 = 0;
  if (((param_4 != 0) && (lVar3 != 0)) && (lVar1 != 0)) {
    lVar5 = lVar1;
    func_0x00010bf433a0();
    if (lVar5 == -1) {
      lVar5 = 0;
    }
    else {
      _objc_retain(lVar1);
      lVar5 = param_4;
      func_0x00010bf433a0();
      lVar4 = lVar1;
      if (lVar5 == -1) {
        _objc_retain(param_4);
        _objc_release(lVar1);
        lVar4 = param_4;
      }
      _objc_retain(lVar3);
      lVar6 = lVar3;
      if ((lVar2 != 0) && (lVar5 = lVar3, func_0x00010bf433a0(), lVar5 == -1)) {
        _objc_retain(lVar2);
        _objc_release(lVar3);
        lVar6 = lVar2;
      }
      func_0x00010c26f380(lVar4);
      dVar7 = 30.0;
      if (param_1 <= 30.0) {
        dVar7 = param_1;
      }
      lVar5 = (long)(dVar7 * 1000.0);
      _objc_release(lVar6);
      _objc_release(lVar4);
    }
  }
  _objc_release(param_4);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (0 < lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010be99d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s__saveStateWithExtraBackgroundPus_1125840f0,lVar5);
    return;
  }
  return;
}



/* Entry: 1052d56e4; end: 1052d57db; -[SCBackgroundTaskTracker _saveStateWithExtraBackgroundPushNotifRunningDuration:] */

void FUN_1052d56e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0dff20(lVar1,param_2,&PTR____CFConstantStringClassReference_110dcf9d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2 + param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar4,param_2,puVar3,&PTR____CFConstantStringClassReference_110dcf9d8);
  _objc_release(puVar3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0dff20(lVar1,param_2,&PTR____CFConstantStringClassReference_110dcf9f8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c067fc0();
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2 + 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar4,param_2,puVar3,&PTR____CFConstantStringClassReference_110dcf9f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1052d57dc; end: 1052d59ab; -[SCBackgroundTaskTracker _calculateOverallVoipPushNotificationRunningDurationWithEndTime:] */

void FUN_1052d57dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  double dVar15;
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
  dVar15 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = *(long *)(param_1 + 0xe8);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = auStack_f0;
  lVar7 = lVar1;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar1);
        }
        uVar12 = *(undefined8 *)(lStack_128 + lVar14 * 8);
        lVar2 = *(long *)(param_1 + 0xe8);
        func_0x00010c0e00e0(lVar2,param_2,uVar12);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c142de0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf529e0();
        _objc_release(lVar3);
        if (lVar4 != 0) {
          func_0x00010bdd8820(param_1,param_2,uVar12,param_3);
        }
        _objc_release(lVar2);
        lVar14 = lVar14 + 1;
      } while (lVar7 != lVar14);
      puVar10 = auStack_f0;
      lVar7 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,puVar10,0x10);
    } while (lVar7 != 0);
  }
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010bf51e00(uVar5);
  uVar12 = uVar5;
  func_0x00010be99dc0(param_1,param_2,uVar5);
  _objc_release(uVar5);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined **)(param_1 + 0xe0) = puVar6;
  _objc_release(uVar5);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined **)(param_1 + 0xe8) = puVar6;
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar12);
  uVar11 = *(undefined8 *)(param_3 + 0xe8);
  _objc_retain(puVar10);
  func_0x00010c0e00e0(uVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010c0ef3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  func_0x00010c26f380(puVar10,param_2,uVar5);
  _objc_release(puVar10);
  lVar7 = *(long *)(param_3 + 0xe0);
  func_0x00010c0e00e0(lVar7,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar7 == 0) {
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)(dVar15 * 1000.0));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0xe0),param_2,puVar8,uVar12);
  }
  else {
    puVar8 = *(undefined **)(param_3 + 0xe0);
    func_0x00010c0e00e0(puVar8,param_2,uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c067fc0();
    func_0x00010c0df780(puVar6,param_2,puVar9 + (long)(dVar15 * 1000.0));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0xe0),param_2,puVar6,uVar12);
    _objc_release(puVar6);
  }
  _objc_release(puVar8);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar12);
  return;
}



/* Entry: 1052d59ac; end: 1052d5b07; -[SCBackgroundTaskTracker _calculateOverallVoipPushNotificationRunningDurationForNotificationType:endTime:] */

void FUN_1052d59ac(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  uVar6 = *(undefined8 *)(param_2 + 0xe8);
  _objc_retain(param_5);
  func_0x00010c0e00e0(uVar6,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c0ef3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  func_0x00010c26f380(param_5,param_3,uVar1);
  _objc_release(param_5);
  lVar2 = *(long *)(param_2 + 0xe0);
  func_0x00010c0e00e0(lVar2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,(long)(param_1 * 1000.0));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0xe0),param_3,puVar3,param_4);
  }
  else {
    puVar3 = *(undefined **)(param_2 + 0xe0);
    func_0x00010c0e00e0(puVar3,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c067fc0();
    func_0x00010c0df780(puVar5,param_3,puVar4 + (long)(param_1 * 1000.0));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_2 + 0xe0),param_3,puVar5,param_4);
    _objc_release(puVar5);
  }
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1052d5b08; end: 1052d5d6f; -[SCBackgroundTaskTracker _saveStateWithVoipPushNotificationBackgroundRunningTimeAttribution:] */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001052d5bc0 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_1052d5b08(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined *puVar25;
  undefined *puVar26;
  double dVar27;
  undefined *puStack_510;
  undefined8 uStack_508;
  long *plStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_1d0;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1052d2b58(uVar1,&PTR____CFConstantStringClassReference_110dcfa18);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar23 = apuStack_f0;
  ppuVar4 = ppuVar3;
  func_0x00010bf52a60();
  lVar20 = lRam0000000000000000;
  while (ppuVar4 != (undefined **)0x0) {
    ppuVar23 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar20) {
        _objc_enumerationMutation(ppuVar3);
      }
      ppuVar5 = ppuVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      ppuVar24 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (ppuVar5 == (undefined **)0x0) {
        ppuVar5 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar2);
      }
      else {
        ppuVar5 = ppuVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        ppuVar22 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar2);
        _objc_release(ppuVar24);
        ppuVar24 = ppuVar22;
      }
      _objc_release(ppuVar24);
      _objc_release(ppuVar5);
      ppuVar23 = (undefined **)((long)ppuVar23 + 1);
    } while (ppuVar4 != ppuVar23);
    ppuVar23 = apuStack_f0;
    ppuVar4 = ppuVar3;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar3);
  ppuVar4 = ppuVar2;
  FUN_1052d4008(*(undefined8 *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110dcfa18);
  _objc_release(ppuVar2);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = param_3[0x1e];
  ppuVar2 = ppuVar4;
  _objc_retain(ppuVar23);
  _objc_retain(ppuVar4);
  func_0x00010bf51e00();
  puVar6 = param_3[0x1f];
  func_0x00010bf51e00();
  _objc_retain(ppuVar4);
  _objc_retain(ppuVar23);
  _objc_retain(puVar17);
  _objc_retain(puVar6);
  puVar15 = PTR____NSDictionary0__struct_11034ab58;
  if (((ppuVar4 != (undefined **)0x0) && (ppuVar23 != (undefined **)0x0)) &&
     (ppuVar3 = ppuVar4, ppuVar2 = ppuVar23, func_0x00010bf433a0(),
     ppuVar3 == (undefined **)0xffffffffffffffff)) {
    func_0x00010c26f380(ppuVar23);
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar17;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar7;
    func_0x00010bf52a60();
    lVar20 = lRam0000000000000000;
    while (puVar15 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar20) {
          _objc_enumerationMutation(puVar7);
        }
        puVar26 = puVar17;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar26;
        func_0x00010c2709c0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar19;
        func_0x00010bf433a0();
        _objc_release(puVar19);
        if (puVar8 == (undefined *)0x1) {
          func_0x00010c215dc0(puVar26);
        }
        puVar19 = puVar26;
        func_0x00010c2709c0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar19;
        func_0x00010bf433a0();
        _objc_release(puVar19);
        if (puVar8 == (undefined *)0xffffffffffffffff) {
          func_0x00010c215dc0(puVar26);
        }
        _objc_release(puVar26);
        puVar18 = puVar18 + 1;
      } while (puVar15 != puVar18);
      puVar15 = puVar7;
      func_0x00010bf52a60();
    }
    _objc_release(puVar7);
    puVar7 = puVar6;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar7;
    func_0x00010bf52a60();
    lVar20 = lRam0000000000000000;
    while (puVar15 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar20) {
          _objc_enumerationMutation(puVar7);
        }
        puVar26 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar26;
        func_0x00010c2709c0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar19;
        func_0x00010bf433a0();
        _objc_release(puVar19);
        if (puVar8 == (undefined *)0xffffffffffffffff) {
          func_0x00010c215dc0(puVar26);
        }
        puVar19 = puVar26;
        func_0x00010c2709c0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar19;
        func_0x00010bf433a0();
        _objc_release(puVar19);
        if (puVar8 == (undefined *)0x1) {
          func_0x00010c215dc0(puVar26);
        }
        _objc_release(puVar26);
        puVar18 = puVar18 + 1;
      } while (puVar15 != puVar18);
      puVar15 = puVar7;
      func_0x00010bf52a60();
    }
    _objc_release(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar6;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar18;
    func_0x00010bf52a60();
    lVar20 = lRam0000000000000000;
    while (puVar15 != (undefined *)0x0) {
      puVar26 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar20) {
          _objc_enumerationMutation(puVar18);
        }
        puVar19 = puVar7;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar19 == (undefined *)0x0) {
          puVar8 = puVar6;
          func_0x00010c0e00e0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar25 = PTR_PTR_1126b6e40;
          _objc_alloc(PTR_PTR_1126b6e40);
          puVar9 = puVar8;
          func_0x00010bf13c60(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c052860(puVar25);
          _objc_release(puVar9);
          func_0x00010c1d0640(puVar7);
          _objc_release(puVar25);
          _objc_release(puVar8);
        }
        puVar8 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar25 = puVar8;
        func_0x00010c2709c0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar19;
        func_0x00010c2709c0(puVar19);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar25;
        func_0x00010bf433a0();
        _objc_release(puVar9);
        _objc_release(puVar25);
        if (puVar10 == (undefined *)0xffffffffffffffff) {
          puVar25 = puVar19;
          func_0x00010c2709c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c215dc0(puVar8);
          _objc_release(puVar25);
        }
        _objc_release(puVar8);
        _objc_release(puVar19);
        puVar26 = puVar26 + 1;
      } while (puVar15 != puVar26);
      puVar15 = puVar18;
      func_0x00010bf52a60();
    }
    _objc_release(puVar18);
    puVar18 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar17;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar26;
    func_0x00010bf52a60();
    lVar20 = lRam0000000000000000;
    while (puVar15 != (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar20) {
          _objc_enumerationMutation(puVar26);
        }
        puVar8 = puVar18;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 == (undefined *)0x0) {
          puVar25 = puVar17;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR_PTR_1126b6e40;
          _objc_alloc(PTR_PTR_1126b6e40);
          puVar10 = puVar25;
          func_0x00010bf13c60(puVar25);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c052860(puVar9);
          _objc_release(puVar10);
          func_0x00010c1d0640(puVar18);
          _objc_release(puVar9);
          _objc_release(puVar25);
        }
        _objc_release(puVar8);
        puVar19 = puVar19 + 1;
      } while (puVar15 != puVar19);
      puVar15 = puVar26;
      func_0x00010bf52a60();
    }
    _objc_release(puVar26);
    dVar27 = 0.0;
    puVar26 = puVar7;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar26;
    func_0x00010bf52a60();
    lVar20 = lRam0000000000000000;
    while (puVar15 != (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar20) {
          _objc_enumerationMutation(puVar26);
        }
        uVar21 = *(undefined8 *)((long)puVar19 * 8);
        uVar1 = uVar21;
        func_0x00010bf13c80(uVar21);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar18;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        puVar25 = puVar8;
        func_0x00010c2709c0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar21;
        func_0x00010c2709c0(uVar21);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar25;
        func_0x00010bf433a0();
        _objc_release(uVar1);
        _objc_release(puVar25);
        if (puVar9 == (undefined *)0xffffffffffffffff) {
          func_0x00010c2709c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c215dc0(puVar8);
          _objc_release(uVar21);
        }
        _objc_release(puVar8);
        puVar19 = puVar19 + 1;
      } while (puVar15 != puVar19);
      puVar15 = puVar26;
      func_0x00010bf52a60();
    }
    _objc_release(puVar26);
    puVar15 = puVar7;
    func_0x00010bf00d20(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(ppuVar3);
    _objc_release(puVar15);
    puVar15 = puVar18;
    func_0x00010bf00d20(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(ppuVar3);
    _objc_release(puVar15);
    ppuVar2 = &PTR___NSConcreteGlobalBlock_110876020;
    ppuVar24 = ppuVar3;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar24;
    func_0x00010bf51e00();
    _objc_retain();
    puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar5;
    func_0x00010bf529e0();
    if (ppuVar22 != (undefined **)0x0) {
      ppuVar22 = (undefined **)0x0;
      ppuVar14 = (undefined **)0x0;
      do {
        ppuVar11 = ppuVar5;
        ppuVar2 = ppuVar22;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar14 != (undefined **)0x0) {
          ppuVar12 = ppuVar11;
          func_0x00010c2709c0(ppuVar11);
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = ppuVar14;
          func_0x00010c26f380();
          _objc_release(ppuVar12);
          dVar27 = dVar27 * 1000.0;
          if (((long)dVar27 != 0) &&
             (puVar19 = puVar26, func_0x00010bf529e0(), puVar19 != (undefined *)0x0)) {
            func_0x00010bf529e0();
            dVar27 = 0.0;
            uStack_508 = 0;
            puStack_510 = (undefined *)0x0;
            uStack_4f8 = 0;
            plStack_500 = (long *)0x0;
            uStack_4e8 = 0;
            uStack_4f0 = 0;
            uStack_4d8 = 0;
            uStack_4e0 = 0;
            puVar19 = puVar26;
            func_0x00010bf00d20();
            _objc_retainAutoreleasedReturnValue();
            ppuVar2 = &puStack_510;
            puVar8 = puVar19;
            func_0x00010bf52a60();
            if (puVar8 != (undefined *)0x0) {
              lVar20 = *plStack_500;
              do {
                puVar25 = (undefined *)0x0;
                do {
                  if (*plStack_500 != lVar20) {
                    _objc_enumerationMutation(puVar19);
                  }
                  puVar10 = puVar15;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  if (puVar10 == (undefined *)0x0) {
                    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640(puVar15);
                  }
                  else {
                    puVar10 = puVar15;
                    func_0x00010c0e00e0(puVar15);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c067fc0();
                    func_0x00010c0df840(puVar9);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640(puVar15);
                    _objc_release(puVar9);
                  }
                  _objc_release(puVar10);
                  puVar25 = puVar25 + 1;
                } while (puVar8 != puVar25);
                ppuVar2 = &puStack_510;
                puVar8 = puVar19;
                func_0x00010bf52a60();
              } while (puVar8 != (undefined *)0x0);
            }
            _objc_release(puVar19);
          }
        }
        ppuVar12 = ppuVar11;
        func_0x00010bf13ca0();
        ppuVar13 = ppuVar11;
        if (ppuVar12 == (undefined **)0x0) {
          func_0x00010bf13c60();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar11;
          func_0x00010bf13c80(ppuVar11);
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = ppuVar13;
          func_0x00010c1d0640(puVar26);
          _objc_release(ppuVar12);
LAB_1052d6868:
          _objc_release(ppuVar13);
        }
        else {
          ppuVar12 = ppuVar11;
          func_0x00010bf13ca0();
          if (ppuVar12 == (undefined **)((long)&lRam0000000000000000 + 1)) {
            func_0x00010bf13c80();
            _objc_retainAutoreleasedReturnValue();
            ppuVar2 = ppuVar13;
            func_0x00010c12d3e0(puVar26);
            goto LAB_1052d6868;
          }
        }
        ppuVar12 = ppuVar11;
        func_0x00010c2709c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar14);
        _objc_release(ppuVar11);
        ppuVar22 = (undefined **)((long)ppuVar22 + 1);
        ppuVar11 = ppuVar5;
        func_0x00010bf529e0();
        ppuVar14 = ppuVar12;
      } while (ppuVar22 < ppuVar11);
      _objc_release(ppuVar12);
    }
    _objc_release(puVar26);
    _objc_release(ppuVar5);
    _objc_release(ppuVar5);
    _objc_release(ppuVar24);
    _objc_release(puVar18);
    _objc_release(puVar7);
    _objc_release(ppuVar3);
  }
  _objc_release(puVar6);
  _objc_release(puVar17);
  _objc_release(ppuVar23);
  _objc_release(ppuVar4);
  _objc_release(ppuVar23);
  _objc_release(ppuVar4);
  _objc_release(puVar6);
  _objc_release(puVar17);
  puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_3[0x1e];
  param_3[0x1e] = puVar17;
  _objc_release(puVar6);
  puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_3[0x1f];
  param_3[0x1f] = puVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    return;
  }
  ___stack_chk_fail();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar2);
  uVar1 = *(undefined8 *)(puVar6 + 0x28);
  FUN_1052d2b58(uVar1,&PTR____CFConstantStringClassReference_110dcfa38);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar23 = ppuVar3;
  func_0x00010bf52a60();
  lVar20 = lRam0000000000000000;
  while (ppuVar23 != (undefined **)0x0) {
    ppuVar24 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar20) {
        _objc_enumerationMutation(ppuVar3);
      }
      ppuVar22 = ppuVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (ppuVar22 == (undefined **)0x0) {
        ppuVar22 = ppuVar2;
        func_0x00010c0e00e0(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar4);
      }
      else {
        ppuVar22 = ppuVar4;
        func_0x00010c0e00e0(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        ppuVar14 = ppuVar2;
        func_0x00010c0e00e0(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar4);
        _objc_release(ppuVar5);
        ppuVar5 = ppuVar14;
      }
      _objc_release(ppuVar5);
      _objc_release(ppuVar22);
      ppuVar24 = (undefined **)((long)ppuVar24 + 1);
    } while (ppuVar23 != ppuVar24);
    ppuVar23 = ppuVar3;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar3);
  ppuVar23 = ppuVar4;
  FUN_1052d4008(*(undefined8 *)(puVar6 + 0x28),&PTR____CFConstantStringClassReference_110dcfa38);
  _objc_release(ppuVar4);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar23);
  _objc_retain(ppuVar23);
  puVar15 = ppuVar2[0x16];
  ppuVar2[0x16] = (undefined *)ppuVar23;
  _objc_release(puVar15);
  puVar15 = ppuVar2[3];
  func_0x00010bf48f60();
  ppuVar2[0xf] = puVar15;
  puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = ppuVar2[0x18];
  ppuVar2[0x18] = puVar15;
  _objc_release(puVar17);
  func_0x00010bea90e0(ppuVar2);
  puVar15 = PTR_PTR_1126ae4f0;
  func_0x00010bf53b60();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar17 == (undefined *)0x0) {
    ppuVar2[0x1a] = (undefined *)0xffffffffffffffff;
  }
  else {
    puVar6 = puVar15;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0b4fe0();
    ppuVar2[0x1a] = puVar7;
    _objc_release(puVar6);
  }
  _objc_release(puVar17);
  puVar17 = puVar15;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar17 == (undefined *)0x0) {
    ppuVar2[0x19] = (undefined *)0xffffffffffffffff;
  }
  else {
    puVar6 = puVar15;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0b4fe0();
    ppuVar2[0x19] = puVar7;
    _objc_release(puVar6);
  }
  _objc_release(puVar17);
  _objc_release(puVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar23);
  return;
}



/* Entry: 1052d5d70; end: 1052d69cb; -[SCBackgroundTaskTracker _calculateFineGrainedBackgroundActivityAttributionWithStartTime:EndTime:] */

void FUN_1052d5d70(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  undefined8 uVar27;
  undefined **ppuVar28;
  undefined *puVar29;
  double dVar30;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = *(long *)(param_1 + 0xf0);
  ppuVar19 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf51e00();
  lVar2 = *(long *)(param_1 + 0xf8);
  func_0x00010bf51e00();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(lVar23);
  _objc_retain(lVar2);
  puVar20 = PTR____NSDictionary0__struct_11034ab58;
  if (((param_3 != (undefined **)0x0) && (param_4 != (undefined **)0x0)) &&
     (ppuVar3 = param_3, ppuVar19 = param_4, func_0x00010bf433a0(),
     ppuVar3 == (undefined **)0xffffffffffffffff)) {
    func_0x00010c26f380(param_4);
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar23;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar26 != 0) {
      lVar24 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        lVar5 = lVar23;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c2709c0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf433a0();
        _objc_release(lVar6);
        if (lVar7 == 1) {
          func_0x00010c215dc0(lVar5);
        }
        lVar6 = lVar5;
        func_0x00010c2709c0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf433a0();
        _objc_release(lVar6);
        if (lVar7 == -1) {
          func_0x00010c215dc0(lVar5);
        }
        _objc_release(lVar5);
        lVar24 = lVar24 + 1;
      } while (lVar26 != lVar24);
      lVar26 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    lVar4 = lVar2;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar26 != 0) {
      lVar24 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        lVar5 = lVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c2709c0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf433a0();
        _objc_release(lVar6);
        if (lVar7 == -1) {
          func_0x00010c215dc0(lVar5);
        }
        lVar6 = lVar5;
        func_0x00010c2709c0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf433a0();
        _objc_release(lVar6);
        if (lVar7 == 1) {
          func_0x00010c215dc0(lVar5);
        }
        _objc_release(lVar5);
        lVar24 = lVar24 + 1;
      } while (lVar26 != lVar24);
      lVar26 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    puVar22 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar26 != 0) {
      lVar24 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        puVar20 = puVar22;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar20 == (undefined *)0x0) {
          lVar5 = lVar2;
          func_0x00010c0e00e0(lVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126b6e40;
          _objc_alloc(PTR_PTR_1126b6e40);
          lVar6 = lVar5;
          func_0x00010bf13c60(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c052860(puVar8);
          _objc_release(lVar6);
          func_0x00010c1d0640(puVar22);
          _objc_release(puVar8);
          _objc_release(lVar5);
        }
        lVar5 = lVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c2709c0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar20;
        func_0x00010c2709c0(puVar20);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf433a0();
        _objc_release(puVar8);
        _objc_release(lVar6);
        if (lVar7 == -1) {
          puVar8 = puVar20;
          func_0x00010c2709c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c215dc0(lVar5);
          _objc_release(puVar8);
        }
        _objc_release(lVar5);
        _objc_release(puVar20);
        lVar24 = lVar24 + 1;
      } while (lVar26 != lVar24);
      lVar26 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar23;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar26 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar26 != 0) {
      lVar24 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        puVar20 = puVar8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar20 == (undefined *)0x0) {
          lVar5 = lVar23;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR_PTR_1126b6e40;
          _objc_alloc(PTR_PTR_1126b6e40);
          lVar6 = lVar5;
          func_0x00010bf13c60(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c052860(puVar9);
          _objc_release(lVar6);
          func_0x00010c1d0640(puVar8);
          _objc_release(puVar9);
          _objc_release(lVar5);
        }
        _objc_release(puVar20);
        lVar24 = lVar24 + 1;
      } while (lVar26 != lVar24);
      lVar26 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    dVar30 = 0.0;
    puVar9 = puVar22;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar9;
    func_0x00010bf52a60();
    lVar26 = lRam0000000000000000;
    while (puVar20 != (undefined *)0x0) {
      puVar25 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar26) {
          _objc_enumerationMutation(puVar9);
        }
        uVar27 = *(undefined8 *)((long)puVar25 * 8);
        uVar21 = uVar27;
        func_0x00010bf13c80(uVar27);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar8;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar21);
        puVar29 = puVar10;
        func_0x00010c2709c0();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar27;
        func_0x00010c2709c0(uVar27);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar29;
        func_0x00010bf433a0();
        _objc_release(uVar21);
        _objc_release(puVar29);
        if (puVar11 == (undefined *)0xffffffffffffffff) {
          func_0x00010c2709c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c215dc0(puVar10);
          _objc_release(uVar27);
        }
        _objc_release(puVar10);
        puVar25 = puVar25 + 1;
      } while (puVar20 != puVar25);
      puVar20 = puVar9;
      func_0x00010bf52a60();
    }
    _objc_release(puVar9);
    puVar20 = puVar22;
    func_0x00010bf00d20(puVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(ppuVar3);
    _objc_release(puVar20);
    puVar20 = puVar8;
    func_0x00010bf00d20(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(ppuVar3);
    _objc_release(puVar20);
    ppuVar19 = &PTR___NSConcreteGlobalBlock_110876020;
    ppuVar12 = ppuVar3;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar12;
    func_0x00010bf51e00();
    _objc_retain();
    puVar20 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar28 = ppuVar13;
    func_0x00010bf529e0();
    if (ppuVar28 != (undefined **)0x0) {
      ppuVar28 = (undefined **)0x0;
      ppuVar18 = (undefined **)0x0;
      do {
        ppuVar14 = ppuVar13;
        ppuVar19 = ppuVar28;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar18 != (undefined **)0x0) {
          ppuVar15 = ppuVar14;
          func_0x00010c2709c0(ppuVar14);
          _objc_retainAutoreleasedReturnValue();
          ppuVar19 = ppuVar18;
          func_0x00010c26f380();
          _objc_release(ppuVar15);
          dVar30 = dVar30 * 1000.0;
          if (((long)dVar30 != 0) &&
             (puVar25 = puVar9, func_0x00010bf529e0(), puVar25 != (undefined *)0x0)) {
            func_0x00010bf529e0();
            dVar30 = 0.0;
            uStack_3b8 = 0;
            puStack_3c0 = (undefined *)0x0;
            uStack_3a8 = 0;
            plStack_3b0 = (long *)0x0;
            uStack_398 = 0;
            uStack_3a0 = 0;
            uStack_388 = 0;
            uStack_390 = 0;
            puVar25 = puVar9;
            func_0x00010bf00d20();
            _objc_retainAutoreleasedReturnValue();
            ppuVar19 = &puStack_3c0;
            puVar10 = puVar25;
            func_0x00010bf52a60();
            if (puVar10 != (undefined *)0x0) {
              lVar26 = *plStack_3b0;
              do {
                puVar29 = (undefined *)0x0;
                do {
                  if (*plStack_3b0 != lVar26) {
                    _objc_enumerationMutation(puVar25);
                  }
                  puVar16 = puVar20;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  if (puVar16 == (undefined *)0x0) {
                    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640(puVar20);
                  }
                  else {
                    puVar16 = puVar20;
                    func_0x00010c0e00e0(puVar20);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c067fc0();
                    func_0x00010c0df840(puVar11);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640(puVar20);
                    _objc_release(puVar11);
                  }
                  _objc_release(puVar16);
                  puVar29 = puVar29 + 1;
                } while (puVar10 != puVar29);
                ppuVar19 = &puStack_3c0;
                puVar10 = puVar25;
                func_0x00010bf52a60();
              } while (puVar10 != (undefined *)0x0);
            }
            _objc_release(puVar25);
          }
        }
        ppuVar15 = ppuVar14;
        func_0x00010bf13ca0();
        ppuVar17 = ppuVar14;
        if (ppuVar15 == (undefined **)0x0) {
          func_0x00010bf13c60();
          _objc_retainAutoreleasedReturnValue();
          ppuVar15 = ppuVar14;
          func_0x00010bf13c80(ppuVar14);
          _objc_retainAutoreleasedReturnValue();
          ppuVar19 = ppuVar17;
          func_0x00010c1d0640(puVar9);
          _objc_release(ppuVar15);
LAB_1052d6868:
          _objc_release(ppuVar17);
        }
        else {
          ppuVar15 = ppuVar14;
          func_0x00010bf13ca0();
          if (ppuVar15 == (undefined **)0x1) {
            func_0x00010bf13c80();
            _objc_retainAutoreleasedReturnValue();
            ppuVar19 = ppuVar17;
            func_0x00010c12d3e0(puVar9);
            goto LAB_1052d6868;
          }
        }
        ppuVar15 = ppuVar14;
        func_0x00010c2709c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar18);
        _objc_release(ppuVar14);
        ppuVar28 = (undefined **)((long)ppuVar28 + 1);
        ppuVar14 = ppuVar13;
        func_0x00010bf529e0();
        ppuVar18 = ppuVar15;
      } while (ppuVar28 < ppuVar14);
      _objc_release(ppuVar15);
    }
    _objc_release(puVar9);
    _objc_release(ppuVar13);
    _objc_release(ppuVar13);
    _objc_release(ppuVar12);
    _objc_release(puVar8);
    _objc_release(puVar22);
    _objc_release(ppuVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar23);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar23);
  puVar22 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined **)(param_1 + 0xf0) = puVar22;
  _objc_release(uVar21);
  puVar22 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = *(long *)(param_1 + 0xf8);
  *(undefined **)(param_1 + 0xf8) = puVar22;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
    return;
  }
  ___stack_chk_fail();
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar19);
  uVar21 = *(undefined8 *)(lVar23 + 0x28);
  FUN_1052d2b58(uVar21,&PTR____CFConstantStringClassReference_110dcfa38);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar19;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar13;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (ppuVar3 != (undefined **)0x0) {
    ppuVar28 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(ppuVar13);
      }
      ppuVar14 = ppuVar12;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      ppuVar18 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (ppuVar14 == (undefined **)0x0) {
        ppuVar14 = ppuVar19;
        func_0x00010c0e00e0(ppuVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(ppuVar18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar12);
      }
      else {
        ppuVar14 = ppuVar12;
        func_0x00010c0e00e0(ppuVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        ppuVar15 = ppuVar19;
        func_0x00010c0e00e0(ppuVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar12);
        _objc_release(ppuVar18);
        ppuVar18 = ppuVar15;
      }
      _objc_release(ppuVar18);
      _objc_release(ppuVar14);
      ppuVar28 = (undefined **)((long)ppuVar28 + 1);
    } while (ppuVar3 != ppuVar28);
    ppuVar3 = ppuVar13;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar13);
  ppuVar3 = ppuVar12;
  FUN_1052d4008(*(undefined8 *)(lVar23 + 0x28),&PTR____CFConstantStringClassReference_110dcfa38);
  _objc_release(ppuVar12);
  _objc_release(uVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar3);
  _objc_retain(ppuVar3);
  puVar20 = ppuVar19[0x16];
  ppuVar19[0x16] = (undefined *)ppuVar3;
  _objc_release(puVar20);
  puVar20 = ppuVar19[3];
  func_0x00010bf48f60();
  ppuVar19[0xf] = puVar20;
  puVar20 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = ppuVar19[0x18];
  ppuVar19[0x18] = puVar20;
  _objc_release(puVar22);
  func_0x00010bea90e0(ppuVar19);
  puVar20 = PTR_PTR_1126ae4f0;
  func_0x00010bf53b60();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar20;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar22 == (undefined *)0x0) {
    ppuVar19[0x1a] = (undefined *)0xffffffffffffffff;
  }
  else {
    puVar8 = puVar20;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0b4fe0();
    ppuVar19[0x1a] = puVar9;
    _objc_release(puVar8);
  }
  _objc_release(puVar22);
  puVar22 = puVar20;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar22 == (undefined *)0x0) {
    ppuVar19[0x19] = (undefined *)0xffffffffffffffff;
  }
  else {
    puVar8 = puVar20;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0b4fe0();
    ppuVar19[0x19] = puVar9;
    _objc_release(puVar8);
  }
  _objc_release(puVar22);
  _objc_release(puVar20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
  return;
}



/* Entry: 1052d69cc; end: 1052d6c33; -[SCBackgroundTaskTracker _saveStateWithFineGrainedBackgroundActivityAttribution:] */

void FUN_1052d69cc(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  FUN_1052d2b58(uVar2,&PTR____CFConstantStringClassReference_110dcfa38);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      puVar6 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar6 == (undefined *)0x0) {
        puVar6 = param_3;
        func_0x00010c0e00e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
      }
      else {
        puVar6 = puVar3;
        func_0x00010c0e00e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        puVar7 = param_3;
        func_0x00010c0e00e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar8);
        puVar8 = puVar7;
      }
      _objc_release(puVar8);
      _objc_release(puVar6);
      puVar10 = puVar10 + 1;
    } while (puVar5 != puVar10);
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  puVar5 = puVar3;
  FUN_1052d4008(*(undefined8 *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110dcfa38);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(puVar5);
  uVar2 = *(undefined8 *)(param_3 + 0xb0);
  *(undefined **)(param_3 + 0xb0) = puVar5;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010bf48f60();
  *(undefined8 *)(param_3 + 0x78) = uVar2;
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + 0xc0);
  *(undefined **)(param_3 + 0xc0) = puVar3;
  _objc_release(uVar2);
  func_0x00010bea90e0(param_3);
  puVar3 = PTR_PTR_1126ae4f0;
  func_0x00010bf53b60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    *(undefined8 *)(param_3 + 0xd0) = 0xffffffffffffffff;
  }
  else {
    puVar10 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar10;
    func_0x00010c0b4fe0();
    *(undefined **)(param_3 + 0xd0) = puVar8;
    _objc_release(puVar10);
  }
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    *(undefined8 *)(param_3 + 200) = 0xffffffffffffffff;
  }
  else {
    puVar10 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar10;
    func_0x00010c0b4fe0();
    *(undefined **)(param_3 + 200) = puVar8;
    _objc_release(puVar10);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1052d6c34; end: 1052d6d9f; -[SCBackgroundTaskTracker _didBackgroundRunningStartAt:] */

void FUN_1052d6c34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf48f60();
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined **)(param_1 + 0xc0) = puVar2;
  _objc_release(uVar1);
  func_0x00010bea90e0(param_1);
  puVar2 = PTR_PTR_1126ae4f0;
  func_0x00010bf53b60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    *(undefined8 *)(param_1 + 0xd0) = 0xffffffffffffffff;
  }
  else {
    puVar4 = puVar2;
    func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f3ed18);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0b4fe0();
    *(undefined **)(param_1 + 0xd0) = puVar5;
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f3ecf8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    *(undefined8 *)(param_1 + 200) = 0xffffffffffffffff;
  }
  else {
    puVar4 = puVar2;
    func_0x00010c0e00e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f3ecf8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0b4fe0();
    *(undefined **)(param_1 + 200) = puVar5;
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052d6da0; end: 1052d6dfb; -[SCBackgroundTaskTracker _didBackgroundRunningFinish] */

void FUN_1052d6da0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  _objc_release(uVar1);
  func_0x00010becace0(param_1);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined **)(param_1 + 0xc0) = puVar2;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 200) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xd0) = 0xffffffffffffffff;
  return;
}



/* Entry: 1052d6dfc; end: 1052d6e3b; -[SCBackgroundTaskTracker _setUpCpuObservation] */

void FUN_1052d6dfc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0xb8) != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010bdec880();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  *(long *)(param_1 + 0xb8) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1052d6e3c; end: 1052d6e77; -[SCBackgroundTaskTracker _tearDownCpuObservation] */

void FUN_1052d6e3c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xb8) != 0) {
    _dispatch_source_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1052d6e78; end: 1052d6f5f; -[SCBackgroundTaskTracker _createCpuMonitorTimer] */

void FUN_1052d6e78(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___dispatch_source_type_timer_11034be38;
  _dispatch_source_create(PTR___dispatch_source_type_timer_11034be38,0,0,uVar1);
  _objc_release(uVar1);
  if (puVar2 != (undefined *)0x0) {
    uVar1 = 0;
    _dispatch_time(0,4000000000);
    _dispatch_source_set_timer(puVar2,uVar1,4000000000,0);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1052d6f60;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    _dispatch_source_set_event_handler(puVar2,&puStack_58);
    _dispatch_resume(puVar2);
    _objc_retain(puVar2);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1052d6f60; end: 1052d6fa7;  */

void FUN_1052d6f60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
  FUN_1052d1734(uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60));
  if ((int)uVar1 != 0) {
    func_0x00010bf53ba0(PTR_PTR_1126ae4f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdff090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__didPullCpuUsage__11255d5c0);
    return;
  }
  return;
}



/* Entry: 1052d6fa8; end: 1052d70bf; -[SCBackgroundTaskTracker _didPullCpuUsage:] */

void FUN_1052d6fa8(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  if (param_1 != -1.0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c013ce0();
    lVar2 = *(long *)(param_2 + 0xc0);
    func_0x00010c0e00e0(lVar2,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar2 == 0) {
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0xc0),param_3,
                          &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf0e0,puVar1);
    }
    else {
      lVar3 = *(long *)(param_2 + 0xc0);
      func_0x00010c0e00e0(lVar3,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c067fc0();
      func_0x00010c0df780(puVar5,param_3,lVar4 + 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_2 + 0xc0),param_3,puVar5,puVar1);
      _objc_release(puVar5);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1052d70c0; end: 1052d7117; -[SCBackgroundTaskTracker _reportPreviousSavedBackgroundTasksRunningMetrics] */

void FUN_1052d70c0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1052d7118;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 1052d7118; end: 1052d7c1b;  */

undefined ** FUN_1052d7118(long param_1,undefined **param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = *(undefined ***)(param_1 + 0x20);
  func_0x00010be9a4e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c0b4ca0();
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010c0b4ca0();
  _objc_release(ppuVar3);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dcfb58;
  ppuVar6 = ppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (0 < (long)ppuVar4 || 0 < (long)ppuVar5) {
    ppuVar4 = (undefined **)PTR_PTR_1126b6e50;
    _objc_opt_new();
    puVar7 = PTR_PTR_1126b6e58;
    _objc_opt_new();
    func_0x00010c170000();
    func_0x00010c16ffe0(puVar7);
    func_0x00010c1ef000(ppuVar4);
    puVar8 = PTR_PTR_1126b6e60;
    _objc_opt_new();
    ppuVar3 = ppuVar2;
    func_0x00010c0e00e0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1cc0e0(puVar8);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
    func_0x00010c0e00e0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1cc8e0(puVar8);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
    func_0x00010c0e00e0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1cc920(puVar8);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
    func_0x00010c0e00e0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1cc460(puVar8);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
    func_0x00010c0e00e0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1cc900(puVar8);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
    func_0x00010c0e00e0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1cc940(puVar8);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
    func_0x00010c0e00e0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1cc060(puVar8);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
    func_0x00010c0e00e0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cc040(puVar8);
    _objc_release(ppuVar3);
    ppuVar5 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar5;
    func_0x00010bf529e0();
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar9 = ppuVar2;
      func_0x00010c0e00e0(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar5;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar11;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (ppuVar3 != (undefined **)0x0) {
        ppuVar19 = (undefined **)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(ppuVar11);
          }
          puVar12 = PTR_PTR_1126b6e68;
          func_0x00010bf9ebc0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar12 != (undefined *)0x0) {
            puVar13 = PTR_PTR_1126b6e70;
            _objc_opt_new(PTR_PTR_1126b6e70);
            func_0x00010c0d7820(puVar12);
            func_0x00010c1cc080(puVar13);
            func_0x00010c0d81c0(puVar12);
            func_0x00010c1cc800(puVar13);
            puVar14 = puVar12;
            func_0x00010bfe4420(puVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a9200(puVar13);
            _objc_release(puVar14);
            puVar14 = puVar12;
            func_0x00010bfb60c0(puVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d9820(puVar13);
            _objc_release(puVar14);
            puVar14 = puVar12;
            func_0x00010c0c46a0(puVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1c43a0(puVar13);
            _objc_release(puVar14);
            puVar14 = puVar12;
            func_0x00010bf1f240();
            if (puVar14 != (undefined *)0x0) {
              func_0x00010bf1f240(puVar12);
              func_0x00010c172f80(puVar13);
            }
            puVar14 = puVar12;
            func_0x00010bfcfa20(puVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a4cc0(puVar13);
            _objc_release(puVar14);
            ppuVar18 = ppuVar5;
            func_0x00010c0e00e0(ppuVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b4ca0();
            func_0x00010c192e60(puVar13);
            _objc_release(ppuVar18);
            ppuVar18 = ppuVar9;
            func_0x00010c0e00e0(ppuVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b4ca0();
            func_0x00010c1ebba0(puVar13);
            _objc_release(ppuVar18);
            func_0x00010befa120(puVar10);
            _objc_release(puVar13);
          }
          _objc_release(puVar12);
          ppuVar19 = (undefined **)((long)ppuVar19 + 1);
        } while (ppuVar3 != ppuVar19);
        ppuVar3 = ppuVar11;
        func_0x00010bf52a60();
      }
      _objc_release(ppuVar11);
      func_0x00010c1cc0c0(puVar8);
      _objc_release(puVar10);
      _objc_release(ppuVar9);
    }
    ppuVar9 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar9;
    func_0x00010bf529e0();
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar11 = ppuVar2;
      func_0x00010c0e00e0(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = ppuVar9;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar19;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (ppuVar3 != (undefined **)0x0) {
        ppuVar18 = (undefined **)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(ppuVar19);
          }
          puVar12 = PTR_PTR_1126b6e68;
          func_0x00010bf9ebc0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar12 != (undefined *)0x0) {
            puVar13 = PTR_PTR_1126b6e70;
            _objc_opt_new(PTR_PTR_1126b6e70);
            func_0x00010c0d7820(puVar12);
            func_0x00010c1cc080(puVar13);
            func_0x00010c0d81c0(puVar12);
            func_0x00010c1cc800(puVar13);
            puVar14 = puVar12;
            func_0x00010bfe4420(puVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a9200(puVar13);
            _objc_release(puVar14);
            puVar14 = puVar12;
            func_0x00010bfb60c0(puVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d9820(puVar13);
            _objc_release(puVar14);
            puVar14 = puVar12;
            func_0x00010c0c46a0(puVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1c43a0(puVar13);
            _objc_release(puVar14);
            puVar14 = puVar12;
            func_0x00010bf1f240();
            if (puVar14 != (undefined *)0x0) {
              func_0x00010bf1f240(puVar12);
              func_0x00010c172f80(puVar13);
            }
            puVar14 = puVar12;
            func_0x00010bfcfa20(puVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a4cc0(puVar13);
            _objc_release(puVar14);
            ppuVar15 = ppuVar9;
            func_0x00010c0e00e0(ppuVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b4ca0();
            func_0x00010c192e60(puVar13);
            _objc_release(ppuVar15);
            ppuVar15 = ppuVar11;
            func_0x00010c0e00e0(ppuVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b4ca0();
            func_0x00010c1ebba0(puVar13);
            _objc_release(ppuVar15);
            func_0x00010befa120(puVar10);
            _objc_release(puVar13);
          }
          _objc_release(puVar12);
          ppuVar18 = (undefined **)((long)ppuVar18 + 1);
        } while (ppuVar3 != ppuVar18);
        ppuVar3 = ppuVar19;
        func_0x00010bf52a60();
      }
      _objc_release(ppuVar19);
      func_0x00010c1cc3a0(puVar8);
      _objc_release(puVar10);
      _objc_release(ppuVar11);
    }
    func_0x00010c1cc440(ppuVar4);
    ppuVar3 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar3 != (undefined **)0x0) {
      puVar10 = PTR_PTR_1126b6e78;
      _objc_opt_new(PTR_PTR_1126b6e78);
      ppuVar3 = ppuVar2;
      func_0x00010c0e00e0(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cc8c0(puVar10);
      _objc_release(ppuVar3);
      func_0x00010c1cc4a0(ppuVar4);
      _objc_release(puVar10);
    }
    func_0x00010c1691e0(ppuVar4);
    puVar10 = PTR_PTR_1126b6e80;
    _objc_opt_new();
    ppuVar3 = ppuVar2;
    func_0x00010c0e00e0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c184ce0(puVar10);
    _objc_release(ppuVar3);
    func_0x00010c19f880(ppuVar4);
    puVar12 = PTR_PTR_1126b6e88;
    _objc_opt_new();
    ppuVar3 = ppuVar2;
    func_0x00010c0e00e0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4fe0();
    func_0x00010c210fa0(puVar12);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar2;
    func_0x00010c0e00e0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4fe0();
    func_0x00010c21fba0(puVar12);
    _objc_release(ppuVar3);
    func_0x00010c1b6640(ppuVar4);
    puVar13 = PTR_PTR_1126b6e90;
    _objc_opt_new();
    puVar14 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c115b20();
    func_0x00010c1e3a40(puVar13);
    _objc_release(puVar14);
    puVar14 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef0f00();
    func_0x00010c16d7c0(puVar13);
    _objc_release(puVar14);
    func_0x00010c184cc0(ppuVar4);
    puVar14 = PTR_PTR_1126b6e98;
    _objc_opt_new(PTR_PTR_1126b6e98);
    ppuVar3 = ppuVar2;
    func_0x00010c0e00e0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1bfee0(puVar14);
    _objc_release(ppuVar3);
    func_0x00010c1bf6c0(ppuVar4);
    uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar4;
    func_0x00010c0b29e0();
    _objc_release(uVar16);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(ppuVar9);
    _objc_release(ppuVar5);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar6);
  _objc_release(ppuVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar3);
  _objc_retain(param_2);
  ppuVar4 = param_2;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010c2709c0(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar4;
  func_0x00010c071ae0();
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  if (((ulong)ppuVar6 & 1) == 0) {
    ppuVar5 = param_2;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    ppuVar6 = ppuVar3;
    func_0x00010c2709c0(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar5;
    func_0x00010bf433a0(ppuVar5);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
  }
  else {
    ppuVar5 = param_2;
    func_0x00010bf13ca0();
    _objc_release(param_2);
    ppuVar6 = ppuVar3;
    func_0x00010bf13ca0();
    ppuVar4 = (undefined **)0x1;
    if (ppuVar5 < ppuVar6) {
      ppuVar4 = (undefined **)0xffffffffffffffff;
    }
  }
  _objc_release(ppuVar3);
  return ppuVar4;
}



/* Entry: 1052d7c1c; end: 1052d7d2b;  */

ulong FUN_1052d7c1c(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2709c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar2 = param_2;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    uVar3 = param_3;
    func_0x00010c2709c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf433a0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar2 = param_2;
    func_0x00010bf13ca0();
    _objc_release(param_2);
    uVar3 = param_3;
    func_0x00010bf13ca0();
    uVar1 = 1;
    if (uVar2 < uVar3) {
      uVar1 = 0xffffffffffffffff;
    }
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1052d7d2c; end: 1052d7ebf; -[SCBackgroundTaskTracker .cxx_destruct] */

void FUN_1052d7d2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
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



/* Entry: 1052d7ec0; end: 1052d7f5f;  */

void FUN_1052d7ec0(double param_1,long param_2)

{
  undefined *puVar1;
  double dVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  double dStack_38;
  
  _CACurrentMediaTime();
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  dVar2 = param_1;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf145e0();
  _objc_release(puVar1);
  lStack_40 = *(long *)(param_2 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1052d7f60;
  puStack_48 = &UNK_110848c48;
  dStack_38 = param_1 + dVar2;
  func_0x00010006eaa4(*(undefined8 *)(lStack_40 + 0x38),&puStack_60);
  return;
}



/* Entry: 1052d7f60; end: 1052d7f6f;  */

void FUN_1052d7f60(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 1052d7f70; end: 1052d7f97; -[SCBackgroundTaskWrapper didReceivedPushNotificationWithIdentifier:type:] */

void FUN_1052d7f70(long param_1)

{
  func_0x00010bf79700(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bee1890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSuspendTime_112595fc8);
  return;
}



/* Entry: 1052d7f98; end: 1052d7f9f; -[SCBackgroundTaskWrapper didCompletePushNotificationWithIdentifier:type:withCompletionHandler:] */

void FUN_1052d7f98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf73ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_didCompletePushNotificationWithI_1125ba958);
  return;
}



/* Entry: 1052d7fa0; end: 1052d7fa7; -[SCBackgroundTaskWrapper didAppWakeupInBackgroundForSystemBackgroundPrefetch] */

void FUN_1052d7fa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf72450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_didAppWakeupInBackgroundForSyste_1125ba2b8);
  return;
}



/* Entry: 1052d7fa8; end: 1052d800f;  */

void FUN_1052d7fa8(long param_1,ulong param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_2 & 1) == 0) && (param_1 != 0)) {
    func_0x00010c0e2820(*(undefined8 *)(param_1 + 0x40));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052d8010; end: 1052d8183; -[SCBackgroundTaskWrapper _taskExpiredWhenGroupBackgroundTaskEnabled] */

void FUN_1052d8010(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a0 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1052d8184;
  uStack_50 = 0x1052d8194;
  uStack_48 = 0;
  puStack_98 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  lVar2 = *(long *)PTR__UIBackgroundTaskInvalid_110345af0;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1052d819c;
  puStack_b0 = &UNK_110876070;
  lStack_a8 = param_1;
  puStack_88 = puStack_98;
  lStack_78 = lVar2;
  puStack_68 = puStack_a0;
  func_0x00010006eaa4(*(undefined8 *)(param_1 + 0x38),&puStack_c8);
  if (puStack_88[3] != lVar2) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94260();
    _objc_release(puVar1);
  }
  func_0x00010bf97ce0(puStack_68[5]);
  __Block_object_dispose(&uStack_90,8);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  return;
}


