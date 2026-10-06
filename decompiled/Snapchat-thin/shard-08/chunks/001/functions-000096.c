/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d770e0; end: 105d770e7; -[SCGalleryLogger totalSnapFeedSnapCount] */

undefined8 FUN_105d770e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1e8);
}



/* Entry: 105d770e8; end: 105d770ef; -[SCGalleryLogger setTotalSnapFeedSnapCount:] */

void FUN_105d770e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1e8) = param_3;
  return;
}



/* Entry: 105d770f0; end: 105d770f7; -[SCGalleryLogger totalSnapFeedStoryCount] */

undefined8 FUN_105d770f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f0);
}



/* Entry: 105d770f8; end: 105d770ff; -[SCGalleryLogger setTotalSnapFeedStoryCount:] */

void FUN_105d770f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1f0) = param_3;
  return;
}



/* Entry: 105d77100; end: 105d77107; -[SCGalleryLogger isPaywallDisplayed] */

undefined1 FUN_105d77100(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19b);
}



/* Entry: 105d77108; end: 105d7710f; -[SCGalleryLogger setIsPaywallDisplayed:] */

void FUN_105d77108(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x19b) = param_3;
  return;
}



/* Entry: 105d77110; end: 105d77117; -[SCGalleryLogger memoriesSessionIDSubject] */

undefined8 FUN_105d77110(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f8);
}



/* Entry: 105d77118; end: 105d77147; -[SCGalleryLogger setMemoriesSessionIDSubject:] */

void FUN_105d77118(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d77148; end: 105d7714f; -[SCGalleryLogger currentGalleryTab] */

undefined8 FUN_105d77148(long param_1)

{
  return *(undefined8 *)(param_1 + 0x200);
}



/* Entry: 105d77150; end: 105d77157; -[SCGalleryLogger setCurrentGalleryTab:] */

void FUN_105d77150(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x200) = param_3;
  return;
}



/* Entry: 105d77158; end: 105d7715f; -[SCGalleryLogger memoriesStorageQuotaManager] */

undefined8 FUN_105d77158(long param_1)

{
  return *(undefined8 *)(param_1 + 0x208);
}



/* Entry: 105d77160; end: 105d773db; -[SCGalleryLogger .cxx_destruct] */

void FUN_105d77160(long param_1)

{
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
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
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d773dc; end: 105d773e3; -[SCGalleryLoggerGallerySessionCounter snapLockCount] */

undefined8 FUN_105d773dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105d773e4; end: 105d773eb; -[SCGalleryLoggerGallerySessionCounter setSnapLockCount:] */

void FUN_105d773e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105d773ec; end: 105d773f3; -[SCGalleryLoggerGallerySessionCounter snapUnlockCount] */

undefined8 FUN_105d773ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105d773f4; end: 105d773fb; -[SCGalleryLoggerGallerySessionCounter setSnapUnlockCount:] */

void FUN_105d773f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 105d773fc; end: 105d77403; -[SCGalleryLoggerGallerySessionCounter storyLockCount] */

undefined8 FUN_105d773fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105d77404; end: 105d7740b; -[SCGalleryLoggerGallerySessionCounter setStoryLockCount:] */

void FUN_105d77404(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 105d7740c; end: 105d77413; -[SCGalleryLoggerGallerySessionCounter storyUnlockCount] */

undefined8 FUN_105d7740c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105d77414; end: 105d7741b; -[SCGalleryLoggerGallerySessionCounter setStoryUnlockCount:] */

void FUN_105d77414(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 105d7741c; end: 105d77423; -[SCGalleryLoggerGallerySessionCounter snapSendCount] */

undefined8 FUN_105d7741c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105d77424; end: 105d7742b; -[SCGalleryLoggerGallerySessionCounter setSnapSendCount:] */

void FUN_105d77424(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 105d7742c; end: 105d77433; -[SCGalleryLoggerGallerySessionCounter snapPostCount] */

undefined8 FUN_105d7742c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105d77434; end: 105d7743b; -[SCGalleryLoggerGallerySessionCounter setSnapPostCount:] */

void FUN_105d77434(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 105d7743c; end: 105d77443; -[SCGalleryLoggerGallerySessionCounter storySendCount] */

undefined8 FUN_105d7743c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105d77444; end: 105d7744b; -[SCGalleryLoggerGallerySessionCounter setStorySendCount:] */

void FUN_105d77444(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 105d7744c; end: 105d77453; -[SCGalleryLoggerGallerySessionCounter storyPostCount] */

undefined8 FUN_105d7744c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105d77454; end: 105d7745b; -[SCGalleryLoggerGallerySessionCounter setStoryPostCount:] */

void FUN_105d77454(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 105d7745c; end: 105d77463; -[SCGalleryLoggerGallerySessionCounter snapCreateCount] */

undefined8 FUN_105d7745c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105d77464; end: 105d7746b; -[SCGalleryLoggerGallerySessionCounter setSnapCreateCount:] */

void FUN_105d77464(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 105d7746c; end: 105d77473; -[SCGalleryLoggerGallerySessionCounter snapDeleteCount] */

undefined8 FUN_105d7746c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105d77474; end: 105d7747b; -[SCGalleryLoggerGallerySessionCounter setSnapDeleteCount:] */

void FUN_105d77474(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 105d7747c; end: 105d77483; -[SCGalleryLoggerGallerySessionCounter storyCreateCount] */

undefined8 FUN_105d7747c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105d77484; end: 105d7748b; -[SCGalleryLoggerGallerySessionCounter setStoryCreateCount:] */

void FUN_105d77484(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 105d7748c; end: 105d77493; -[SCGalleryLoggerGallerySessionCounter storyDeleteCount] */

undefined8 FUN_105d7748c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105d77494; end: 105d7749b; -[SCGalleryLoggerGallerySessionCounter setStoryDeleteCount:] */

void FUN_105d77494(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 105d7749c; end: 105d774a3; -[SCGalleryLoggerGallerySessionCounter incompatibleCount] */

undefined8 FUN_105d7749c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105d774a4; end: 105d774ab; -[SCGalleryLoggerGallerySessionCounter setIncompatibleCount:] */

void FUN_105d774a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 105d774ac; end: 105d774b3; -[SCGalleryLoggerGallerySessionCounter searchTapCount] */

undefined8 FUN_105d774ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105d774b4; end: 105d774bb; -[SCGalleryLoggerGallerySessionCounter setSearchTapCount:] */

void FUN_105d774b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 105d774bc; end: 105d774c3; -[SCGalleryLoggerGallerySessionCounter flashbackCount] */

undefined8 FUN_105d774bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105d774c4; end: 105d774cb; -[SCGalleryLoggerGallerySessionCounter setFlashbackCount:] */

void FUN_105d774c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 105d774cc; end: 105d774d3; -[SCGalleryLoggerGallerySessionCounter nearbyCount] */

undefined8 FUN_105d774cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 105d774d4; end: 105d774db; -[SCGalleryLoggerGallerySessionCounter setNearbyCount:] */

void FUN_105d774d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 105d774dc; end: 105d7756f; -[SCGalleryLoggerSessionCounter initWithEnterTime:] */

undefined1 * FUN_105d774dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed068;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    *(undefined1 *)((long)puVar1 + 0x18) = 1;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d77570; end: 105d775bf; -[SCGalleryLoggerSessionCounter init] */

undefined8 FUN_105d77570(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ff80(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 105d775c0; end: 105d77613; -[SCGalleryLoggerSessionCounter pauseTimerAtTime:] */

void FUN_105d775c0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *(undefined1 *)(param_2 + 0x18) = 0;
    func_0x00010c26f380(param_4,param_3,*(undefined8 *)(param_2 + 8));
    *(double *)(param_2 + 0x10) = param_1 + *(double *)(param_2 + 0x10);
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105d77614; end: 105d77663; -[SCGalleryLoggerSessionCounter resumeTimerAtTime:] */

void FUN_105d77614(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d77664; end: 105d776ab; -[SCGalleryLoggerSessionCounter viewTimeInMilliSecondsUntilTime:] */

long FUN_105d77664(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  dVar1 = *(double *)(param_2 + 0x10);
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x00010c26f380(param_4,param_3,*(undefined8 *)(param_2 + 8));
    dVar1 = dVar1 + param_1;
  }
  return (long)dVar1 * 1000;
}



/* Entry: 105d776ac; end: 105d776b3; -[SCGalleryLoggerSessionCounter enterTime] */

undefined8 FUN_105d776ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105d776b4; end: 105d776bb; -[SCGalleryLoggerSessionCounter isRunning] */

undefined1 FUN_105d776b4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 105d776bc; end: 105d776eb; -[SCGalleryLoggerSessionCounter .cxx_destruct] */

void FUN_105d776bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d776ec; end: 105d778c7; -[SCGallerySavingLogger initWithUserTrackedLogger:lazyLensLogger:graphene:galleryLogger:contentDelivery:memoriesStorageQuotaManager:editContentDivergenceServices:] */

undefined1 *
FUN_105d776ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_58 = PTR_PTR_1126ed070;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x40) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c46b0;
    _objc_alloc();
    func_0x00010c05f0c0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c46b8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
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



/* Entry: 105d778c8; end: 105d77a1b; -[SCGallerySavingLogger _logAttemptToSaveSnapEvent:savingSessionId:saveToGallery:saveToCameraRoll:manualSave:] */

void FUN_105d778c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c46c0;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  lVar2 = param_3;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010bf31200(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c240640(param_3);
  func_0x00010c204260(puVar1,param_2,lVar2);
  func_0x00010c1f59c0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c226380(puVar1,param_2,param_5);
  func_0x00010c225ea0(puVar1,param_2,param_6);
  uVar3 = 0;
  if (param_7 == 0) {
    uVar3 = 3;
  }
  func_0x00010c161fe0(puVar1,param_2,uVar3);
  func_0x00010c174980(puVar1,param_2,1);
  lVar2 = param_3;
  func_0x00010bf29de0(param_3);
  func_0x00010c1769e0(puVar1,param_2,lVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d77a1c; end: 105d780b7; -[SCGallerySavingLogger attemptToSaveSnapFromPreview:saveToGallery:saveToCameraRoll:saveToDraft:edited:savingSource:gallerySnapCount:logDirectSnapAction:manualSave:savingSessionId:] */

void FUN_105d77a1c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                  undefined4 param_6,undefined8 param_7,long param_8,undefined8 param_9,
                  undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  ulong uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  
  _objc_retain(param_3);
  _objc_retain(param_12);
  lVar3 = param_8;
  func_0x000108e01da8();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = (uint)param_4;
  uVar13 = (uint)param_5;
  if (((param_5 & 1) == 0) && ((uVar14 ^ 1) == 0)) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dbaad8;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e29e98;
    if ((uVar14 & uVar13) == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110daf6b8;
    }
    ppuVar4 = &PTR____CFConstantStringClassReference_110e29e78;
    if ((uVar13 & (uVar14 ^ 1) & 1) == 0) {
      ppuVar4 = ppuVar2;
    }
  }
  _objc_retain();
  if (uVar14 == 0) goto LAB_105d77c44;
  puVar5 = PTR_PTR_1126c46c8;
  _objc_opt_new(PTR_PTR_1126c46c8);
  func_0x00010c20a620();
  func_0x00010c1d5de0(puVar5,param_2,param_5 & 0xffffffff);
  lVar6 = param_8;
  if (4 < param_8 - 1U) {
    lVar6 = 0;
  }
  func_0x00010c206c40(puVar5,param_2,lVar6);
  lVar6 = param_3;
  func_0x00010bf31200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar5,param_2,lVar6);
  _objc_release(lVar6);
  func_0x00010c1f59c0(puVar5,param_2,param_12);
  lVar6 = param_3;
  func_0x00010c0c6c20();
  uVar1 = lVar6 + 1;
  if (uVar1 < 0x1c) {
    if ((1L << (uVar1 & 0x3f) & 0xd8de0fdU) == 0) {
      if (uVar1 == 8) {
        uVar11 = 5;
      }
      else {
        if (uVar1 != 10) goto LAB_105d780b0;
        uVar11 = 0xe;
      }
    }
    else {
      uVar11 = 1;
      if ((lVar6 + 1U < 0x1c) && ((1L << (lVar6 + 1U & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (lVar6 + 1U < 0x1b) {
          uVar11 = *(undefined8 *)(&UNK_10ddd0888 + (lVar6 + 1U) * 8);
        }
        else {
          uVar11 = 0;
        }
      }
    }
  }
  else {
LAB_105d780b0:
    uVar11 = 2;
  }
  func_0x00010c1c5440(puVar5,param_2,uVar11);
  lVar6 = param_3;
  func_0x00010bf29de0(param_3);
  func_0x00010c1769e0(puVar5,param_2,lVar6);
  lVar6 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226560(puVar5,param_2,lVar6 != 0);
  _objc_release(lVar6);
  uVar11 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar11);
  _objc_release(puVar5);
LAB_105d77c44:
  puVar5 = PTR_PTR_1126c46d0;
  _objc_opt_new(PTR_PTR_1126c46d0);
  func_0x00010c2261e0();
  lVar6 = param_3;
  func_0x00010c0c6c20();
  if (lVar6 + 1U < 0x1c) {
    uVar11 = *(undefined8 *)(&UNK_10ddd07a8 + (lVar6 + 1U) * 8);
  }
  else {
    uVar11 = 0;
  }
  func_0x00010c1c5440(puVar5,param_2,uVar11);
  uVar11 = 1;
  if (uVar13 != 0) {
    uVar11 = 2;
  }
  if (uVar14 == 0) {
    uVar11 = 0;
  }
  func_0x00010c1f5ac0(puVar5,param_2,uVar11);
  lVar6 = param_8;
  if (4 < param_8 - 1U) {
    lVar6 = 0;
  }
  func_0x00010c1f5a00(puVar5,param_2,lVar6);
  lVar6 = param_3;
  func_0x00010bf31200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar5,param_2,lVar6);
  _objc_release(lVar6);
  uVar11 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar11);
  if ((char)param_10 != '\0') {
    func_0x00010be50640(param_1,param_2,param_3,param_12,param_4,param_5,param_10._1_1_);
  }
  puVar7 = PTR_PTR_1126b2438;
  func_0x00010bfbd580();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar8;
  func_0x00010c2ac460(puVar8,param_2,&PTR____CFConstantStringClassReference_110e29d18,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110e29d38,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar8);
  func_0x00010bef9180(*(undefined8 *)(param_1 + 0x10),param_2,puVar9,param_9);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x10),param_2,puVar9);
  puVar7 = PTR_PTR_1126c46d8;
  _objc_opt_new(PTR_PTR_1126c46d8);
  lVar6 = param_3;
  func_0x00010bf31200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar7,param_2,lVar6);
  _objc_release(lVar6);
  uVar11 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release();
  if (uVar14 == 0) {
    uVar12 = 0;
  }
  else {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
  }
  if (uVar13 == 0) {
    uVar11 = 0;
  }
  else {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = PTR_PTR_1126c46e0;
  func_0x00010c0c96c0(PTR_PTR_1126c46e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b78a0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7880(puVar8,param_2,uVar11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7840(puVar8,param_2,param_8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b9220(puVar8,param_2,param_9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c2b7860(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1200(puVar8,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010bf51e00(param_3);
  func_0x00010c2b5de0(puVar8,param_2,lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  func_0x00010c2b7760(puVar8,param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7720(puVar8,param_2,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b7740(puVar8,param_2,param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0e00(puVar8,param_2,param_10._1_1_);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf21f60(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd7d40(param_1,param_2,puVar10,param_12);
  if (param_10._1_1_ != '\0') {
    func_0x00010bf7bde0(*(undefined8 *)(param_1 + 0x58),param_2,param_12,puVar10,param_4,param_5);
  }
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(lVar3);
  _objc_release(uVar11);
  _objc_release(uVar12);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_12);
  return;
}



/* Entry: 105d780b8; end: 105d7817f; -[SCGallerySavingLogger didCancelSavingToGalleryWithSessionId:] */

void FUN_105d780b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdf7020(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbcd20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfbd7c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfbd1c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be53e00(param_1,param_2,param_3,8,uVar2,uVar3,uVar4);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d78180; end: 105d78753; -[SCGallerySavingLogger didCompleteSavingToGalleryFromPreviewWithSessionId:success:error:entryId:galleryType:snapId:captureSessionId:mediaId:mediaType:isSpectacles:snapCount:hasCameos:shouldPersistSaveSessionStatus:savingType:] */

void FUN_105d78180(double param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined4 param_13,
                  undefined4 param_14,undefined4 param_15)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  lVar1 = param_2;
  func_0x00010bdf7020();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    if (param_5 != 0) {
      func_0x00010be53e00(param_2);
    }
    _CACurrentMediaTime();
    dVar12 = param_1;
    func_0x00010c14c040(lVar1);
    dVar12 = (param_1 - dVar12) * 1000.0;
    if (param_6 != 0) {
      lVar2 = param_6;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0720c0();
      if ((int)lVar3 != 0) {
        func_0x00010bf3ec40(param_6);
      }
      _objc_release(lVar2);
    }
    func_0x00010be53e20(dVar12,param_2);
    lVar2 = lVar1;
    FUN_105d78754(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b92e0();
    func_0x00010c179280(lVar2);
    func_0x00010c1f5900(lVar2);
    lVar3 = param_6;
    func_0x00010bf6e340(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1971a0(lVar2);
    _objc_release(lVar3);
    func_0x000108dfcb04(param_8);
    func_0x00010c196b80(lVar2);
    uVar4 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar4);
    if (param_6 != 0) {
      uVar4 = *(undefined8 *)(param_2 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR____CFConstantStringClassReference_110e29d58;
      func_0x000108e00200(&PTR____CFConstantStringClassReference_110e29d58,param_6,
                          &PTR____CFConstantStringClassReference_110e29d78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60(uVar4);
      _objc_release(ppuVar5);
      _objc_release(uVar4);
    }
    if ((param_5 & 1) == 0) {
      func_0x00010bf3ec40(param_6);
    }
    puVar6 = PTR_PTR_1126c46e0;
    func_0x00010c0c96e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b78a0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aec20(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aea80(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aeae0(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aeb00(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2af120(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aec80(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if ((param_5 & 1) == 0) {
      func_0x00010c2af2a0(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2aeb80(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar7 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bdd7d40(param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    dVar11 = dVar12;
    func_0x00010c14c040(puVar7);
    func_0x00010bf7a3c0(dVar12 - dVar11,uVar4);
    _objc_release(uVar4);
    if (param_15._1_1_ == '\0') {
      func_0x00010bedfb40(param_2);
    }
    else {
      lVar1 = param_2;
      func_0x00010bdf7d40();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = &uStack_a8;
      uStack_a8 = 0;
      uStack_98 = 0x3032000000;
      pcStack_90 = FUN_105d78880;
      uStack_88 = 0x105d78890;
      _objc_retain(param_2);
      lStack_80 = param_2;
      if (lVar1 == 0) {
        func_0x00010bedfb40(param_2);
        uVar4 = puStack_a0[5];
        puStack_a0[5] = 0;
      }
      else {
        uVar8 = *(undefined8 *)(param_2 + 0x20);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_4;
        FUN_105d78898(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bf64e40(0x412d010000000000);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_retain(param_4);
        _objc_retain(puVar7);
        func_0x00010c14a860(uVar8);
        _objc_release(puVar10);
        _objc_release(uVar4);
        _objc_release(uVar8);
        _objc_release(puVar7);
        uVar4 = param_4;
      }
      _objc_release(uVar4);
      __Block_object_dispose(&uStack_a8,8);
      _objc_release(lStack_80);
      _objc_release(lVar1);
    }
    _objc_release(puVar6);
    _objc_release(lVar2);
    _objc_release(puVar7);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 105d78754; end: 105d7887f;  */

void FUN_105d78754(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c4748;
  _objc_opt_new(PTR_PTR_1126c4748);
  lVar2 = param_1;
  func_0x00010c23fa00(param_1);
  func_0x00010c2053c0(puVar1,param_2,lVar2);
  lVar2 = param_1;
  func_0x00010c111680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0c6c20();
  if (lVar3 + 1U < 0x1c) {
    uVar4 = *(undefined8 *)(&UNK_10ddd07a8 + (lVar3 + 1U) * 8);
  }
  else {
    uVar4 = 0;
  }
  func_0x00010c1c5440(puVar1,param_2,uVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c14b500();
  if ((int)lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010c14b420();
    uVar4 = 1;
    if ((int)lVar2 != 0) {
      uVar4 = 2;
    }
  }
  func_0x00010c1f5ac0(puVar1,param_2,uVar4);
  lVar2 = param_1;
  func_0x00010c14c020();
  if (4 < lVar2 - 1U) {
    lVar2 = 0;
  }
  func_0x00010c1f5a00(puVar1,param_2,lVar2);
  lVar2 = param_1;
  func_0x00010c111680(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d78880; end: 105d78897;  */

void FUN_105d78880(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105d78898; end: 105d78947;  */

void FUN_105d78898(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e29f38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105d78948; end: 105d78b77; -[SCGallerySavingLogger logCameraRollTranscodingWithPersistedSessionStatus:sessionId:error:latency:] */

void FUN_105d78948(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != (undefined *)0x0) {
    _objc_retain(param_3);
    puVar2 = param_3;
    if (param_5 != 0) {
      puVar1 = PTR_PTR_1126c46e0;
      func_0x00010c0c96e0(PTR_PTR_1126c46e0,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bbba0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf21f60(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      func_0x00010bdd7d40(param_1,param_2,puVar2,param_4);
      _objc_release(puVar1);
    }
    puVar1 = PTR_PTR_1126c46e8;
    _objc_opt_new(PTR_PTR_1126c46e8);
    func_0x00010c1f5da0();
    puVar3 = puVar2;
    func_0x00010c111680(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf31200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(puVar1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c14b500(puVar2);
    func_0x00010c226380(puVar1,param_2,puVar3);
    puVar3 = puVar2;
    func_0x00010c14b420(puVar2);
    func_0x00010c225ea0(puVar1,param_2,puVar3);
    func_0x00010c1b46c0(puVar1,param_2,0);
    puVar3 = puVar2;
    func_0x00010c279f80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f8a0(puVar1,param_2,puVar3 == (undefined *)0x0);
    _objc_release(puVar3);
    func_0x00010c218520(puVar1,param_2,param_6);
    puVar3 = puVar2;
    func_0x00010c279f80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c197020(puVar1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar5);
    func_0x00010be58180(param_1,param_2,puVar2);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d78b78; end: 105d78da7; -[SCGallerySavingLogger didCompleteSavingToCameraRollWithPersistedSessionStatus:sessionId:success:error:latency:] */

void FUN_105d78b78(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126c46e0;
    func_0x00010c0c96e0(PTR_PTR_1126c46e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2af580();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b7880(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ac440(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if ((param_5 & 1) == 0) {
      func_0x00010c2af160(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2a9ea0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar2 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd7d40(param_1);
    puVar3 = puVar2;
    FUN_105d78754(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b92e0();
    func_0x00010c1f5900(puVar3);
    lVar4 = param_6;
    func_0x00010bf6e340(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1971a0(puVar3);
    _objc_release(lVar4);
    func_0x00010bfbdda0(puVar2);
    func_0x000108dfcb04();
    func_0x00010c196b80(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar5);
    if (param_6 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR____CFConstantStringClassReference_110e29d58;
      func_0x000108e00200(&PTR____CFConstantStringClassReference_110e29d58,param_6,
                          &PTR____CFConstantStringClassReference_110e29d98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60(uVar5);
      _objc_release(ppuVar6);
      _objc_release(uVar5);
    }
    func_0x00010bedfb40(param_1);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d78da8; end: 105d78f47; -[SCGallerySavingLogger retrievePersistedSaveSessionStatusForId:completion:] */

void FUN_105d78da8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bdf7020();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = param_3;
    FUN_105d78898(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b1378;
    func_0x00010c0c46a0();
    puVar3 = PTR_PTR_1126b1060;
    _objc_alloc(PTR_PTR_1126b1060);
    func_0x00010c032f60();
    func_0x00010c291580(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c13e4a0(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4,lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d78f48; end: 105d79063;  */

/* WARNING: Removing unreachable block (ram,0x000105d79010) */

void FUN_105d78f48(long param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  if ((param_2 == 0) || (param_4 == 0)) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    _objc_retain(0);
    func_0x00010c1ec620(puVar1);
    puVar2 = puVar1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c46f0;
    _objc_opt_class(PTR_PTR_1126c46f0);
    puVar4 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar3);
    puVar3 = puVar2;
    if (((ulong)puVar4 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar2);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3);
    _objc_release(0);
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 105d79064; end: 105d792db; -[SCGallerySavingLogger didCompleteSavingToCameraRollFromPreviewWithSessionId:galleryType:success:error:hasCameos:] */

void FUN_105d79064(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010bdf7020();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_105d78754();
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010c14c040(lVar1);
    func_0x00010c1b92e0(lVar2);
    func_0x00010c1f5900(lVar2);
    lVar3 = param_6;
    func_0x00010bf6e340(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1971a0(lVar2);
    _objc_release(lVar3);
    func_0x000108dfcb04(param_4);
    func_0x00010c196b80(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar4);
    if (param_6 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR____CFConstantStringClassReference_110e29d58;
      func_0x000108e00200(&PTR____CFConstantStringClassReference_110e29d58,param_6,
                          &PTR____CFConstantStringClassReference_110e29d98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60(uVar4);
      _objc_release(ppuVar5);
      _objc_release(uVar4);
    }
    puVar6 = PTR_PTR_1126c46e0;
    func_0x00010c0c96e0(PTR_PTR_1126c46e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b7880();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ac440(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aec80(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2af120(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if ((param_5 & 1) == 0) {
      func_0x00010c2af160(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2a9ea0(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar7 = puVar6;
    func_0x00010bf21f60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bdd7d40(param_1);
    func_0x00010bedfb40(param_1);
    _objc_release(puVar6);
    _objc_release(lVar2);
    _objc_release(puVar7);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d792dc; end: 105d793fb; -[SCGallerySavingLogger startSaveSnapTranscodeWithSessionId:type:] */

void FUN_105d792dc(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bdf7020(param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c46e0;
      func_0x00010c0c96e0(PTR_PTR_1126c46e0,param_3,lVar1);
      _objc_retainAutoreleasedReturnValue();
      if (param_5 == 2) {
        func_0x00010c2af580(puVar2,param_3,1);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      else if (param_5 == 1) {
        func_0x00010c2af5a0(puVar2,param_3,1);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      func_0x00010c27a0a0(lVar1);
      if (param_1 == 0.0) {
        _CACurrentMediaTime();
        func_0x00010c2bbbc0(puVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      puVar3 = puVar2;
      func_0x00010bf21f60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdd7d40(param_2,param_3,puVar3,param_4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d793fc; end: 105d796af; -[SCGallerySavingLogger didCompleteSaveSnapTranscodeWithSessionId:type:success:error:] */

void FUN_105d793fc(double param_1,ulong param_2,undefined8 param_3,long param_4,ulong param_5,
                  int param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint uVar10;
  double dVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010bdf7020(param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      puVar3 = PTR_PTR_1126c46e0;
      func_0x00010c0c96e0(PTR_PTR_1126c46e0,param_3,uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bfdd920();
      if ((uVar4 & 1) == 0) {
        uVar4 = uVar2;
        func_0x00010bfdd900();
        uVar10 = (uint)uVar4;
      }
      else {
        uVar10 = 1;
      }
      if ((param_5 != 0) && (uVar10 != 0)) {
        _CACurrentMediaTime();
        func_0x00010c2bbb80(puVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      if ((param_5 != 0) && (param_6 == 0)) {
        func_0x00010c2bbba0(puVar3,param_3,param_7);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      puVar5 = puVar3;
      func_0x00010bf21f60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x00010bdd7d40(param_2,param_3,puVar5,param_4);
      if ((param_5 & 0xfffffffffffffffd) == 0) {
        puVar6 = PTR_PTR_1126c46e8;
        _objc_opt_new(PTR_PTR_1126c46e8);
        func_0x00010c1f5da0();
        puVar7 = puVar5;
        func_0x00010c111680(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bf31200();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c179280(puVar6,param_3,puVar8);
        _objc_release(puVar8);
        _objc_release(puVar7);
        puVar7 = puVar5;
        func_0x00010c14b500(puVar5);
        func_0x00010c226380(puVar6,param_3,puVar7);
        puVar7 = puVar5;
        func_0x00010c14b420(puVar5);
        func_0x00010c225ea0(puVar6,param_3,puVar7);
        func_0x00010c1b46c0(puVar6,param_3,uVar10 ^ 1);
        puVar7 = puVar5;
        func_0x00010c279f80(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20f8a0(puVar6,param_3,puVar7 == (undefined *)0x0);
        _objc_release(puVar7);
        func_0x00010c279f60(puVar5);
        dVar11 = param_1;
        func_0x00010c27a0a0(puVar5);
        func_0x00010c218520(puVar6,param_3,(long)((param_1 - dVar11) * 1000.0));
        puVar7 = puVar5;
        func_0x00010c279f80(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bf6e340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c197020(puVar6,param_3,puVar8);
        _objc_release(puVar8);
        _objc_release(puVar7);
        uVar9 = *(undefined8 *)(param_2 + 8);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b2e60();
        _objc_release(uVar9);
        func_0x00010be58180(param_2,param_3,puVar5);
        _objc_release(puVar6);
      }
      _objc_release(puVar3);
      _objc_release(puVar5);
    }
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d796b0; end: 105d797df; -[SCGallerySavingLogger savingSessionParamsFromSessionId:] */

void FUN_105d796b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x40);
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 == 0) {
    _os_unfair_lock_unlock(param_1 + 0x40);
  }
  else {
    func_0x00010bf529e0();
    _os_unfair_lock_unlock(param_1 + 0x40);
    if (lVar1 != 0) {
      func_0x00010bdf7020(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c46f8;
      _objc_alloc(PTR_PTR_1126c46f8);
      lVar1 = param_1;
      func_0x00010c14c0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c111680(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf31200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0451e0(puVar4,param_2,param_3,lVar1,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(param_1);
      goto LAB_105d797c0;
    }
  }
  puVar4 = PTR_PTR_1126c46f8;
  _objc_alloc(PTR_PTR_1126c46f8);
  func_0x00010c0451e0();
LAB_105d797c0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105d797e0; end: 105d79873; -[SCGallerySavingLogger logSavingDuplicateSnapWithSaveSource:] */

void FUN_105d797e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2438;
  _objc_retain(param_3);
  func_0x00010c14bf40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105d79874; end: 105d799c7; -[SCGallerySavingLogger _logGallerySaveToMemories:isSuccessful:saveLatencyMs:isUserCancel:] */

void FUN_105d79874(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bfbd520(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110e29db8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_3,&PTR____CFConstantStringClassReference_110e29dd8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_2 + 0x10),param_3,puVar2);
  func_0x00010befbfe0(*(undefined8 *)(param_2 + 0x10),param_3,puVar2,(long)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105d799c8; end: 105d79a0b; -[SCGallerySavingLogger logGallerySaveToCameraRollStartCameraSaving] */

void FUN_105d799c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bf2abc0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d79a0c; end: 105d79a4f; -[SCGallerySavingLogger logGallerySaveToCameraRollDidFinishTranscoding] */

void FUN_105d79a0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bf2abe0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d79a50; end: 105d79a93; -[SCGallerySavingLogger logGallerySaveToCamerarollDidCompleted] */

void FUN_105d79a50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010bf2aba0(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d79a94; end: 105d79b5b; -[SCGallerySavingLogger logSavingMediaSizeWithSessionId:mediaSize:] */

void FUN_105d79a94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105d79b5c;
    puStack_58 = &UNK_110842a68;
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_3);
    lStack_50 = param_3;
    uStack_40 = param_4;
    func_0x000100162d98("APPSTORE",&puStack_70);
    _objc_release(lStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105d79b5c; end: 105d79d17;  */

void FUN_105d79b5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(lVar1 + 0x40);
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    func_0x00010bf51e00(uVar2);
    _os_unfair_lock_unlock(lVar1 + 0x40);
    uVar3 = uVar2;
    func_0x00010bf00d20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    uStack_68 = 0x105d79c3c;
    puStack_60 = &UNK_1108e78e8;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = uVar4;
    lStack_50 = lVar1;
    func_0x00010bf97e80(uVar3,param_2,&puStack_78);
    _objc_release(uVar3);
    _objc_release(uStack_58);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d79d18; end: 105d79ffb; -[SCGallerySavingLogger _logGallerySaveEventWithSessionId:step:entryId:snapId:mediaId:] */

void FUN_105d79d18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = param_1;
  func_0x00010bdf7020(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) || (lVar3 = lVar2, func_0x00010c07b020(), (int)lVar3 == 0)) goto LAB_105d79f94;
  puVar4 = PTR_PTR_1126c46c8;
  _objc_opt_new(PTR_PTR_1126c46c8);
  func_0x00010c20a620();
  lVar3 = lVar2;
  func_0x00010c14c080(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5de0(puVar4,param_2,lVar3 != 0);
  _objc_release(lVar3);
  lVar3 = lVar2;
  func_0x00010c14c020();
  if (4 < lVar3 - 1U) {
    lVar3 = 0;
  }
  func_0x00010c206c40(puVar4,param_2,lVar3);
  lVar3 = lVar2;
  func_0x00010c111680(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar4,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar3);
  func_0x00010c1f59c0(puVar4,param_2,param_3);
  lVar3 = lVar2;
  func_0x00010c111680();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0c6c20();
  uVar1 = lVar5 + 1;
  if (uVar1 < 0x1c) {
    if ((1L << (uVar1 & 0x3f) & 0xd8de0fdU) == 0) {
      if (uVar1 == 8) {
        uVar6 = 5;
      }
      else {
        if (uVar1 != 10) goto LAB_105d79ff4;
        uVar6 = 0xe;
      }
    }
    else {
      uVar6 = 1;
      if ((lVar5 + 1U < 0x1c) && ((1L << (lVar5 + 1U & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (lVar5 + 1U < 0x1b) {
          uVar6 = *(undefined8 *)(&UNK_10ddd0888 + (lVar5 + 1U) * 8);
        }
        else {
          uVar6 = 0;
        }
      }
    }
  }
  else {
LAB_105d79ff4:
    uVar6 = 2;
  }
  func_0x00010c1c5440(puVar4,param_2,uVar6);
  _objc_release(lVar3);
  lVar3 = lVar2;
  func_0x00010c111680(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf29de0();
  func_0x00010c1769e0(puVar4,param_2,lVar5);
  _objc_release(lVar3);
  lVar3 = lVar2;
  func_0x00010c111680(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226560(puVar4,param_2,lVar5 != 0);
  _objc_release(lVar5);
  _objc_release(lVar3);
  func_0x00010c1968c0(puVar4,param_2,param_5);
  func_0x00010c204680(puVar4,param_2,param_6);
  func_0x00010c1c4880(puVar4,param_2,param_7);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar6);
  _objc_release(puVar4);
LAB_105d79f94:
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d79ffc; end: 105d7a32f; -[SCGallerySavingLogger _updateSessionStatus:sessionId:] */

void FUN_105d79ffc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c14c0c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c14c080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) goto LAB_105d7a080;
    lVar1 = param_3;
    func_0x00010c07b020();
    if ((int)lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010c111680();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010bfbd7c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010bfbd1c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010bfbcd20(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010c276860(param_3);
      lVar6 = param_3;
      func_0x00010bf7a3a0();
      func_0x00010c077540();
      func_0x00010bfd5060();
      func_0x00010c14b4e0();
      func_0x00010be58c00(param_1,param_2,lVar1,lVar2,lVar3,lVar4,param_4,lVar5,(char)lVar6);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010c111680();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (lVar2 != 0) {
        lVar1 = param_3;
        func_0x00010c111680();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010b06f544();
        _objc_release(lVar1);
        lVar1 = param_1;
        func_0x00010c09a440(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_3;
        func_0x00010c111680(param_3);
        _objc_retainAutoreleasedReturnValue();
        if ((int)lVar3 == 0) {
          func_0x00010bf77c80(lVar1,param_2,lVar4);
        }
        else {
          func_0x00010bf77cc0();
        }
        _objc_release(lVar4);
        _objc_release(lVar1);
      }
      _objc_release(lVar2);
    }
    _os_unfair_lock_lock(param_1 + 0x40);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x48),param_2,param_4);
    _os_unfair_lock_unlock(param_1 + 0x40);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_4;
    FUN_105d78898();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105d7a330;
    puStack_80 = &UNK_110842e18;
    _objc_retain(param_4);
    uStack_78 = param_4;
    func_0x00010c12b940(uVar7,param_2,puVar9,&puStack_98);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  _objc_release();
LAB_105d7a080:
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 105d7a330; end: 105d7a333;  */

void FUN_105d7a330(void)

{
  return;
}



/* Entry: 105d7a334; end: 105d7aa73; -[SCGallerySavingLogger _logSnapSaveEvents:snapIdInSnapchatGallery:mediaIdInSnapchatGallery:entryIdInSnapchatGallery:savingSessionId:totalMediaSize:saveToCameraRoll:manualSave:hasCameos:saveToDraft:] */

void FUN_105d7a334(long param_1,undefined8 param_2,undefined *param_3,ulong param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,uint param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined *puVar23;
  long lVar24;
  undefined *puVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  undefined *puVar30;
  undefined *puVar31;
  float fVar32;
  double dVar33;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [128];
  long lStack_250;
  undefined8 uStack_1c0;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar28 = param_4;
  func_0x00010c08fa60();
  puVar23 = (undefined *)(ulong)(param_9 >> 8 & 0xff ^ 1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06fd00();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c079c80();
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = param_3;
  func_0x00010c096b60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bfc81a0(uVar4,param_2,puVar31);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar31);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126c4700;
  _objc_opt_new();
  uVar21 = param_4;
  uVar22 = param_5;
  func_0x00010beac120(param_1,param_2,puVar5,param_3,uVar28 != 0,puVar23);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  puVar6 = param_3;
  func_0x00010c254340();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = param_3;
  func_0x00010bf31200(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_3;
  func_0x00010c243340();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar6;
  func_0x00010c123a00(uVar4,param_2,2,puVar31,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar31);
  _objc_release(uVar4);
  _objc_release(uVar7);
  puVar8 = param_3;
  func_0x00010c158420();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar17 = &uStack_130;
  puVar31 = auStack_f0;
  uVar18 = 0x10;
  puVar30 = puVar8;
  func_0x00010bf52a60();
  uStack_1c0 = uVar3;
  if (puVar30 != (undefined *)0x0) {
    lVar24 = *plStack_120;
    do {
      puVar31 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar24) {
          _objc_enumerationMutation(puVar8);
        }
        lVar29 = *(long *)(lStack_128 + (long)puVar31 * 8);
        puVar9 = PTR_PTR_1126c4708;
        _objc_opt_new(PTR_PTR_1126c4708);
        lVar10 = lVar29;
        func_0x00010bf429e0(lVar29);
        _objc_retainAutoreleasedReturnValue();
        uStack_1c0 = 0;
        puVar19 = puVar23;
        uVar21 = param_4;
        uVar22 = param_5;
        func_0x00010beac120(param_1,param_2,puVar9,lVar10,uVar28 != 0);
        _objc_release(lVar10);
        lVar10 = lVar29;
        func_0x00010c27c8a0(lVar29);
        func_0x00010c21a560(puVar9,param_2,lVar10 != -1);
        lVar10 = lVar29;
        func_0x00010c27c8a0(lVar29);
        func_0x00010c21a5a0(puVar9,param_2,lVar10);
        func_0x00010c27c980(lVar29);
        func_0x00010c21a600(puVar9);
        lVar10 = lVar29;
        func_0x00010bf429e0(lVar29);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010bf89ea0();
        func_0x00010c191960(puVar9,param_2,lVar11);
        _objc_release(lVar10);
        lVar10 = lVar29;
        func_0x00010bf429e0(lVar29);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010bf5c920();
        func_0x00010c226060(puVar9,param_2,lVar11);
        _objc_release(lVar10);
        lVar10 = lVar29;
        func_0x00010bf429e0(lVar29);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010bf5c9e0();
        func_0x00010c226080(puVar9,param_2,lVar11);
        _objc_release(lVar10);
        lVar10 = lVar29;
        func_0x00010bf429e0(lVar29);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010bf30860();
        func_0x00010c178bc0(puVar9,param_2,lVar11);
        _objc_release(lVar10);
        lVar10 = lVar29;
        func_0x00010bf429e0(lVar29);
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010c253c00();
        func_0x00010c20abc0(puVar9,param_2,lVar11);
        _objc_release(lVar10);
        lVar10 = lVar29;
        func_0x00010bf429e0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010c247520();
        _objc_release(lVar10);
        if (lVar11 == 8) {
          uVar4 = 0;
LAB_105d7a800:
          func_0x00010c1faae0(puVar9,param_2,uVar4);
        }
        else {
          if (lVar11 == 0xb) {
            uVar4 = 1;
            goto LAB_105d7a800;
          }
          if (lVar11 == 0xc) {
            uVar4 = 2;
            goto LAB_105d7a800;
          }
        }
        lVar10 = lVar29;
        func_0x00010bf429e0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010c124200();
        func_0x00010c1e9060(puVar9,param_2,lVar11);
        _objc_release(lVar10);
        func_0x00010bf429e0(lVar29);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar29;
        func_0x00010bf4ca00();
        func_0x00010c182160(puVar9,param_2,lVar10);
        _objc_release(lVar29);
        uVar4 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b2e60();
        _objc_release(uVar4);
        _objc_release(puVar9);
        puVar31 = puVar31 + 1;
      } while (puVar30 != puVar31);
      puVar17 = &uStack_130;
      puVar31 = auStack_f0;
      uVar18 = 0x10;
      puVar30 = puVar8;
      func_0x00010bf52a60();
    } while (puVar30 != (undefined *)0x0);
  }
  puVar30 = param_3;
  func_0x00010bfadd80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar30;
  func_0x00010c08fa60();
  if ((puVar9 == (undefined *)0x0) && (puVar9 = param_3, func_0x00010bf1b840(), (long)puVar9 < 1)) {
    puVar9 = param_3;
    func_0x00010c297de0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar9 == (undefined *)0x0) {
      puVar25 = param_3;
      func_0x00010bfc1820();
      _objc_retainAutoreleasedReturnValue();
      if (puVar25 == (undefined *)0x0) {
        puVar13 = param_3;
        func_0x00010c281360();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010bf529e0();
        uVar26 = (uint)(puVar14 == (undefined *)0x0);
        _objc_release(puVar13);
      }
      else {
        uVar26 = 0;
      }
      _objc_release(puVar25);
    }
    else {
      uVar26 = 0;
    }
    _objc_release(puVar9);
  }
  else {
    uVar26 = 0;
  }
  _objc_release(puVar30);
  puVar30 = param_3;
  func_0x00010bfd76a0();
  puVar9 = param_3;
  func_0x00010b06f544();
  if (((int)puVar9 != 0) && (((uint)puVar30 & uVar26) == 0)) {
    uVar18 = (uint)(uVar28 != 0);
    puVar12 = (undefined8 *)PTR_PTR_1126c4710;
    _objc_opt_new();
    uVar21 = (ulong)(byte)param_9;
    uVar22 = (ulong)param_9._3_1_;
    puVar31 = param_3;
    func_0x00010beacc00(param_1,param_2,puVar12);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar12;
    func_0x00010c0b2e60();
    _objc_release(uVar4);
    _objc_release(puVar12);
    puVar19 = puVar23;
  }
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_250 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar17);
  _objc_retain(puVar31);
  _objc_retain(uVar21);
  _objc_retain(uVar22);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(uStack_1c0);
  puVar5 = puVar31;
  func_0x00010c07e5e0(puVar31);
  func_0x00010c1b4700(puVar17,param_2,puVar5);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = puVar31;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar6 != (undefined *)0x0) {
    puVar6 = PTR_PTR_1126c4718;
    _objc_opt_new(PTR_PTR_1126c4718);
    puVar8 = puVar31;
    func_0x00010c094540(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar6,param_2,puVar8);
    _objc_release(puVar8);
    puVar8 = puVar31;
    func_0x00010c095a80(puVar31);
    func_0x00010c1bc4a0(puVar6,param_2,puVar8);
    puVar8 = puVar31;
    func_0x00010c096ca0(puVar31);
    func_0x00010c1bccc0(puVar6,param_2,puVar8);
    puVar8 = puVar31;
    func_0x00010c095800(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc400(puVar6,param_2,puVar8);
    _objc_release(puVar8);
    puVar8 = puVar31;
    func_0x00010c094800(puVar31);
    func_0x00010c1bbec0(puVar6,param_2,puVar8);
    puVar8 = puVar31;
    func_0x00010c11fae0(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e74c0(puVar6,param_2,puVar8);
    _objc_release(puVar8);
    puVar8 = puVar31;
    func_0x00010c11fa40(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e74e0(puVar6,param_2,puVar8);
    _objc_release(puVar8);
    puVar8 = puVar31;
    func_0x00010c092b80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 == (undefined *)0x0) {
      puVar30 = puVar31;
      func_0x00010bf09160(puVar31);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17a100(puVar6,param_2,puVar30);
      _objc_release(puVar30);
    }
    else {
      func_0x00010c17a100(puVar6,param_2,puVar8);
    }
    _objc_release(puVar8);
    puVar8 = puVar31;
    func_0x00010c096520(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4da0(puVar6,param_2,puVar8);
    _objc_release(puVar8);
    puVar8 = puVar31;
    func_0x00010c0922a0(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189040(puVar6,param_2,puVar8);
    _objc_release(puVar8);
    puVar8 = puVar31;
    func_0x00010c0972c0(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcec0(puVar6,param_2,puVar8);
    _objc_release(puVar8);
    func_0x00010c1ce180(puVar6,param_2,uStack_1c0);
    func_0x00010c1bb300(puVar17,param_2,puVar6);
    func_0x00010befa120(puVar5,param_2,puVar6);
    _objc_release(puVar6);
  }
  dVar33 = 0.0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  lStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  plStack_300 = (long *)0x0;
  puVar6 = puVar31;
  func_0x00010c091c60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf52a60();
  if (puVar8 != (undefined *)0x0) {
    lVar24 = *plStack_300;
    do {
      puVar30 = (undefined *)0x0;
      do {
        if (*plStack_300 != lVar24) {
          _objc_enumerationMutation(puVar6);
        }
        uVar27 = *(ulong *)(lStack_308 + (long)puVar30 * 8);
        uVar28 = uVar27;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        puVar23 = puVar31;
        func_0x00010c094540(puVar31);
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar28;
        func_0x00010c0720c0(uVar28,param_2,puVar23);
        _objc_release(puVar23);
        _objc_release(uVar28);
        if ((uVar20 & 1) == 0) {
          puVar23 = PTR_PTR_1126c4718;
          _objc_opt_new(PTR_PTR_1126c4718);
          uVar28 = uVar27;
          func_0x00010c094540(uVar27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bbd60(puVar23,param_2,uVar28);
          _objc_release(uVar28);
          uVar28 = uVar27;
          func_0x00010c096ca0(uVar27);
          func_0x00010c1bccc0(puVar23,param_2,uVar28);
          uVar28 = uVar27;
          func_0x00010c094800(uVar27);
          func_0x00010c1bbec0(puVar23,param_2,uVar28);
          uVar28 = uVar27;
          func_0x00010c095800(uVar27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bc400(puVar23,param_2,uVar28);
          _objc_release(uVar28);
          uVar28 = uVar27;
          func_0x00010c11fae0(uVar27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e74c0(puVar23,param_2,uVar28);
          _objc_release(uVar28);
          uVar28 = uVar27;
          func_0x00010c11fa40(uVar27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e74e0(puVar23,param_2,uVar28);
          _objc_release(uVar28);
          func_0x00010c0972c0(uVar27);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bcec0(puVar23,param_2,uVar27);
          _objc_release(uVar27);
          func_0x00010befa120(puVar5,param_2,puVar23);
          _objc_release(puVar23);
        }
        puVar30 = puVar30 + 1;
      } while (puVar8 != puVar30);
      puVar8 = puVar6;
      func_0x00010bf52a60(puVar6,param_2,&uStack_310,auStack_2d0,0x10);
    } while (puVar8 != (undefined *)0x0);
  }
  _objc_release(puVar6);
  puVar6 = puVar5;
  func_0x00010bf529e0();
  if (puVar6 != (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x00010bf51e00(puVar5);
    func_0x00010c1bb320(puVar17,param_2,puVar6);
    _objc_release(puVar6);
  }
  puVar6 = puVar31;
  func_0x00010c240640(puVar31);
  func_0x00010c204260(puVar17,param_2,puVar6);
  puVar6 = puVar31;
  func_0x00010c2700c0(puVar31);
  func_0x00010c2159a0(puVar17,param_2,puVar6);
  puVar6 = puVar31;
  func_0x00010c270140(puVar31);
  func_0x00010c215a20(puVar17,param_2,(ulong)puVar6 & 0xffffffff);
  puVar6 = puVar31;
  func_0x00010c0d22c0(puVar31);
  func_0x00010c1c9740(puVar17,param_2,puVar6);
  puVar6 = puVar31;
  func_0x00010bf6cf80(puVar31);
  func_0x00010c18b9e0(puVar17,param_2,puVar6);
  puVar6 = puVar31;
  func_0x00010c27c860(puVar31);
  func_0x00010c21a560(puVar17,param_2,puVar6);
  puVar6 = puVar31;
  func_0x00010bfd7ee0(puVar31);
  func_0x00010c1a6100(puVar17,param_2,puVar6);
  puVar6 = puVar31;
  func_0x00010c094540(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c240(puVar17,param_2,puVar6);
  _objc_release(puVar6);
  puVar6 = puVar31;
  func_0x00010c095a20(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc480(puVar17,param_2,puVar6);
  _objc_release(puVar6);
  puVar6 = puVar31;
  func_0x00010c096ca0(puVar31);
  func_0x00010c1bcca0(puVar17,param_2,puVar6);
  puVar6 = puVar31;
  func_0x00010c096b60(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcc00(puVar17,param_2,puVar6);
  _objc_release(puVar6);
  puVar6 = puVar31;
  func_0x00010bf09180(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcf40(puVar17,param_2,puVar6);
  _objc_release(puVar6);
  puVar6 = puVar31;
  func_0x00010c095800(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc3e0(puVar17,param_2,puVar6);
  _objc_release(puVar6);
  puVar6 = puVar31;
  func_0x00010c091c60(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010b06fac4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f6700(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar6 = puVar31;
  func_0x00010c091c60(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010b06ffa4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f6380(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar6 = puVar31;
  func_0x00010c091c60(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010b06fbfc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f6400(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar6 = puVar31;
  func_0x00010c091c60(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010b06fe6c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f63c0(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar6 = puVar31;
  func_0x00010c091c60(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010b06fd34();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f64e0(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar6 = puVar31;
  func_0x00010c091c60(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010b0700dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f62c0(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar6 = puVar31;
  func_0x00010c091c60(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010b070214();
  func_0x00010c1f63e0(puVar17,param_2,puVar8);
  _objc_release(puVar6);
  puVar6 = puVar31;
  func_0x00010c091c60(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010b06f648();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbee0(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar6 = puVar31;
  func_0x00010c26a320(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212740(puVar17,param_2,puVar6);
  _objc_release(puVar6);
  puVar6 = puVar31;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar6 != (undefined *)0x0) {
    puVar6 = puVar31;
    func_0x00010bf9f120(puVar31);
    func_0x00010c199b20(puVar17,param_2,puVar6);
    puVar6 = puVar31;
    func_0x00010bf9f040(puVar31);
    func_0x00010c199a40(puVar17,param_2,puVar6);
    puVar6 = puVar31;
    func_0x00010c0947c0(puVar31);
    func_0x00010c1bbe80(puVar17,param_2,puVar6);
    puVar6 = puVar31;
    func_0x00010c094800(puVar31);
    func_0x00010c1bbea0(puVar17,param_2,puVar6);
    puVar6 = puVar31;
    func_0x00010c090320(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1baba0(puVar17,param_2,puVar6);
    _objc_release(puVar6);
    puVar6 = puVar31;
    func_0x00010c0915a0(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bb200(puVar17,param_2,puVar6);
    _objc_release(puVar6);
    puVar6 = puVar31;
    func_0x00010c08fda0(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c208000(puVar17,param_2,puVar6);
    _objc_release(puVar6);
    puVar6 = puVar31;
    func_0x00010c096da0(puVar31);
    func_0x00010c208420(puVar17,param_2,puVar6);
  }
  puVar6 = puVar31;
  func_0x00010bf5af60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c08fa60();
  _objc_release(puVar6);
  if (puVar8 != (undefined *)0x0) {
    puVar6 = puVar31;
    func_0x00010bf5af60(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185a80(puVar17,param_2,puVar6);
    _objc_release(puVar6);
  }
  puVar6 = puVar31;
  func_0x00010bfb75c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c08fa60();
  _objc_release(puVar6);
  if (puVar8 != (undefined *)0x0) {
    puVar6 = puVar31;
    func_0x00010bfb75c0(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f820(puVar17,param_2,puVar6);
    _objc_release(puVar6);
  }
  puVar6 = puVar31;
  func_0x00010bf30820(puVar31);
  func_0x00010c178b80(puVar17,param_2,puVar6);
  puVar6 = puVar31;
  func_0x00010bf2fe80(puVar31);
  func_0x00010c1785c0(puVar17,param_2,puVar6);
  puVar6 = puVar31;
  func_0x00010bf2fbe0(puVar31);
  func_0x00010c178480(puVar17,param_2,puVar6);
  puVar6 = puVar31;
  func_0x00010bf30860(puVar31);
  func_0x00010c178bc0(puVar17,param_2,puVar6);
  puVar6 = puVar31;
  func_0x00010bf30440(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178920(puVar17,param_2,puVar6);
  _objc_release(puVar6);
  puVar6 = puVar31;
  func_0x00010bf304e0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf30160();
  func_0x00010c178740(puVar17,param_2,puVar8);
  _objc_release(puVar6);
  puVar6 = puVar31;
  func_0x00010bf30660(puVar31);
  func_0x00010c178ae0(puVar17,param_2,puVar6);
  puVar6 = puVar31;
  func_0x00010bf304e0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf30420();
  func_0x00010c178680(puVar17,param_2,puVar8);
  _objc_release(puVar6);
  puVar6 = puVar31;
  func_0x00010bf304e0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf300e0();
  func_0x00010c1786a0(puVar17,param_2,puVar8);
  _objc_release(puVar6);
  puVar6 = puVar31;
  func_0x00010bf304e0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf2fc00();
  func_0x00010c1784a0(puVar17,param_2,puVar8);
  _objc_release(puVar6);
  puVar6 = puVar31;
  func_0x00010bf304e0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c0ca680();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar8;
  func_0x00010c08fa60();
  func_0x00010c226760(puVar17,param_2,puVar30 != (undefined *)0x0);
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar6 = puVar31;
  func_0x00010bf11440(puVar31);
  func_0x00010c16cc40(puVar17,param_2,puVar6);
  puVar6 = puVar31;
  func_0x00010c2a09e0(puVar31);
  func_0x00010c224100(puVar17,param_2,puVar6);
  puVar6 = puVar31;
  func_0x00010c2736c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar8;
  func_0x000108ee0cac();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar6 = puVar30;
  func_0x00010c0976a0(puVar30);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf529e0();
  func_0x00010c2260c0(puVar17,param_2,puVar8 != (undefined *)0x0);
  _objc_release(puVar6);
  puVar6 = puVar30;
  func_0x00010bfd8c80(puVar30);
  func_0x00010c226620(puVar17,param_2,puVar6);
  puVar6 = puVar30;
  func_0x00010c0976a0(puVar30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd0c0(puVar17,param_2,puVar6);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126c4720;
  _objc_opt_new();
  puVar8 = puVar31;
  func_0x00010c282c80(puVar31);
  func_0x00010c1e9680(puVar6,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010c2681e0(puVar31);
  func_0x00010c2117e0(puVar6,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010bf5bb60(puVar31);
  func_0x00010c1e59c0(puVar6,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010bfb92e0(puVar31);
  func_0x00010c170060(puVar6,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010c268220(puVar31);
  func_0x00010c211800(puVar6,param_2,puVar8);
  func_0x00010c21f5a0(puVar17,param_2,puVar6);
  puVar8 = puVar31;
  func_0x00010bf29de0(puVar31);
  func_0x00010c1769e0(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010c158420();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar8;
  func_0x00010bf529e0();
  _objc_release(puVar8);
  puVar8 = puVar31;
  if (puVar23 == (undefined *)0x0) {
    puVar23 = puVar31;
    func_0x00010c24b740(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176a60(puVar17,param_2,puVar23);
    _objc_release(puVar23);
    func_0x00010bf6f7a0(puVar31);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar23 = puVar31;
    func_0x00010b070344();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176a60(puVar17,param_2,puVar23);
    _objc_release(puVar23);
    func_0x00010b0704c8(puVar31);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c18c600(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010bfb2520(puVar31);
  func_0x00010c19db40(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010bf31280(puVar31);
  func_0x00010c1792c0(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010c2bd260(puVar31);
  func_0x00010c2271c0(puVar17,param_2,puVar8);
  puVar23 = puVar31;
  func_0x00010c0c6c20();
  puVar8 = puVar23 + 1;
  if (puVar8 < (undefined *)0x1c) {
    if ((1L << ((ulong)puVar8 & 0x3f) & 0xd8de0fdU) == 0) {
      if (puVar8 == (undefined *)0x8) {
        uVar3 = 5;
      }
      else {
        if (puVar8 != (undefined *)0xa) goto LAB_105d7c5b0;
        uVar3 = 0xe;
      }
    }
    else {
      uVar3 = 1;
      if ((puVar23 + 1 < (undefined *)0x1c) &&
         ((1L << ((ulong)(puVar23 + 1) & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (puVar23 + 1 < (undefined *)0x1b) {
          uVar3 = *(undefined8 *)(&UNK_10ddd0888 + (long)(puVar23 + 1) * 8);
        }
        else {
          uVar3 = 0;
        }
      }
    }
  }
  else {
LAB_105d7c5b0:
    uVar3 = 2;
  }
  func_0x00010c1c5440(puVar17,param_2,uVar3);
  puVar8 = puVar31;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar8 != (undefined *)0x0) {
    puVar8 = puVar31;
    func_0x00010bf31200(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(puVar17,param_2,puVar8);
    _objc_release(puVar8);
  }
  func_0x00010c1f59c0(puVar17,param_2,param_7);
  if (uVar18 != 0) {
    func_0x00010c204680(puVar17,param_2,uVar21);
    func_0x00010c1c4880(puVar17,param_2,uVar22);
    func_0x00010c1968c0(puVar17,param_2,param_6);
  }
  puVar8 = puVar31;
  func_0x00010c243700(puVar31);
  func_0x00010c205840(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010c253de0(puVar31);
  func_0x00010c20adc0(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010c2538c0(puVar31);
  func_0x00010c20a840(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010c243340(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010c255260(puVar31);
  func_0x00010c20bb60(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010c254000(puVar31);
  func_0x00010c20af80(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010c2543a0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar8;
  func_0x00010c253f80();
  func_0x00010c20af60(puVar17,param_2,puVar23);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010c2538c0(puVar31);
  func_0x00010c20a840(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010bfee080(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b1c0(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010bfee060(puVar31);
  func_0x00010c20b1a0(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010bf4f960(puVar31);
  func_0x00010c20ab80(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010bf4f980(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aba0(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010bfedfe0(puVar31);
  func_0x00010c20b1e0(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010c29a680(puVar31);
  func_0x00010c221b20(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010c2b6aa0(puVar31);
  func_0x00010c226ba0(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010c124200(puVar31);
  func_0x00010c1e9060(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010bf4ca00(puVar31);
  func_0x00010c182160(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010bfee080(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b1c0(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010bf61e60(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20ace0(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126b2930;
  func_0x00010bf70ea0(PTR_PTR_1126b2930);
  func_0x00010c18cd80(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010c253980(puVar31);
  func_0x00010c20a940(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010c2539a0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar8;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aa20(puVar17,param_2,puVar23);
  _objc_release(puVar23);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010c2539a0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a960(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010c2543a0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar8;
  func_0x00010c2543e0();
  func_0x00010c20b340(puVar17,param_2,puVar23);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010c2543a0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar8;
  func_0x00010c254c00();
  func_0x00010c20b5a0(puVar17,param_2,puVar23);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010c255140(puVar31);
  func_0x00010c20ba40(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010c2543a0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar8;
  func_0x00010bf2a7c0();
  func_0x00010c20aaa0(puVar17,param_2,puVar23);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010c2543a0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar8;
  func_0x00010bf2a960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aac0(puVar17,param_2,puVar23);
  _objc_release(puVar23);
  _objc_release(puVar8);
  func_0x00010c1a5b00(puVar17,param_2,param_9._2_1_);
  puVar8 = puVar31;
  func_0x00010c0d3a20(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar8;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca440(puVar17,param_2,puVar23);
  _objc_release(puVar23);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010c0d3300(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9fe0(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010c0d3840(puVar31);
  func_0x00010c1ca4e0(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010bf4f080(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010c0c1aa0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar8;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2f20(puVar17,param_2,puVar23);
  _objc_release(puVar23);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010c2543a0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar8;
  func_0x00010c0b5c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9ee0(puVar17,param_2,puVar23);
  _objc_release(puVar23);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010c0d37c0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca220(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010c0b5c60(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c1160(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010c247400(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206b60(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010c247500(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206c00(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010c0b59a0(puVar31);
  func_0x00010c1c1040(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010c1297e0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar8;
  func_0x00010c129a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea120(puVar17,param_2,puVar23);
  _objc_release(puVar23);
  _objc_release(puVar8);
  puVar23 = PTR_PTR_1126c4728;
  _objc_opt_new();
  puVar8 = puVar31;
  func_0x00010c1297e0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c129aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea1a0(puVar23,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010c1e9e60(puVar17,param_2,puVar23);
  puVar8 = puVar31;
  func_0x00010c1343c0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb7e0(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  func_0x00010c1c5240(puVar17,param_2,param_8);
  puVar8 = PTR_PTR_1126c4750;
  _objc_retain(puVar31);
  _objc_alloc_init(puVar8);
  puVar9 = puVar31;
  func_0x00010c140fe0(puVar31);
  func_0x00010c1ee380(puVar8,param_2,puVar9);
  func_0x00010c141100(puVar31);
  _objc_release(puVar31);
  func_0x00010c1ee400(puVar8);
  func_0x00010c1ee3c0(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010c140fc0(puVar31);
  func_0x00010c1ee440(puVar17,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010c140f80(puVar31);
  func_0x00010c1ee340(puVar17,param_2,puVar8);
  puVar9 = puVar31;
  func_0x00010befeb80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar9;
  func_0x00010bf07d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1861a0(puVar17,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126c4730;
  _objc_opt_new();
  puVar8 = puVar31;
  func_0x00010c0d2c80();
  func_0x00010c1c9c60(puVar9,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010c2a0a00();
  func_0x00010c224120(puVar9,param_2,puVar8);
  puVar8 = puVar31;
  func_0x00010c0d30c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1c9f60(puVar9);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010c2a0ba0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c224160(puVar9);
  _objc_release(puVar8);
  puVar8 = puVar31;
  func_0x00010bf160e0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c16f3a0(puVar9);
  _objc_release(puVar8);
  func_0x00010c16bee0(puVar17,param_2,puVar9);
  puVar8 = puVar31;
  func_0x00010c26c920(puVar31);
  func_0x00010c213840(puVar17,param_2,puVar8);
  _objc_retain(puVar31);
  func_0x00010c273560(puVar31);
  puVar8 = puVar31;
  if (dVar33 != -1.0) {
    puVar8 = PTR_PTR_1126c4758;
    _objc_alloc_init();
    func_0x00010c273500(puVar31);
    func_0x00010c216d20(puVar8);
    func_0x00010c273520(puVar31);
    func_0x00010c216d40(puVar8);
    func_0x00010c273560(puVar31);
    func_0x00010c216dc0(puVar8);
    puVar25 = puVar31;
    func_0x00010c273580(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216de0(puVar8,param_2,puVar25);
    _objc_release(puVar25);
    _objc_release(puVar31);
    fVar32 = SUB84(dVar33,0);
    if (puVar8 == (undefined *)0x0) goto LAB_105d7c1bc;
    func_0x00010c216da0(puVar17,param_2,puVar8);
  }
  fVar32 = SUB84(dVar33,0);
  _objc_release(puVar8);
LAB_105d7c1bc:
  puVar8 = PTR_PTR_1126c4760;
  _objc_retain(puVar31);
  _objc_alloc_init();
  func_0x00010c105cc0(puVar31);
  func_0x00010c179400(puVar8);
  puVar25 = puVar31;
  func_0x00010bf316a0(puVar31);
  func_0x00010c179420(puVar8,param_2,puVar25);
  puVar25 = puVar31;
  func_0x00010c2bf140(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227ba0(puVar8,param_2,puVar25);
  _objc_release(puVar25);
  puVar25 = puVar31;
  func_0x00010c2bf240(puVar31);
  _objc_release(puVar31);
  func_0x00010c227c40(puVar8,param_2,puVar25);
  if (puVar8 != (undefined *)0x0) {
    func_0x00010c227b80(puVar17,param_2,puVar8);
  }
  func_0x00010c123e80(puVar31);
  puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c013ce0();
  func_0x00010c1e8fe0(puVar17,param_2,puVar25);
  _objc_release(puVar25);
  _objc_retain(puVar31);
  puVar25 = puVar31;
  func_0x00010c078000();
  if ((int)puVar25 == 0) {
    puVar25 = (undefined *)0x0;
  }
  else {
    puVar25 = PTR_PTR_1126c4768;
    _objc_opt_new(PTR_PTR_1126c4768);
    puVar13 = puVar31;
    func_0x00010bfaf060(puVar31);
    func_0x00010c1c9360(puVar25,param_2,puVar13);
  }
  uVar28 = (ulong)(byte)param_9;
  _objc_release(puVar31);
  func_0x00010c1c9480(puVar17,param_2,puVar25);
  _objc_release(puVar25);
  puVar25 = puVar31;
  func_0x00010c06c6a0(puVar31);
  func_0x00010c1af380(puVar17,param_2,puVar25);
  puVar25 = puVar31;
  func_0x00010bf2ae80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar25 != (undefined *)0x0) {
    puVar25 = puVar31;
    func_0x00010bf2ae80(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ffc60(puVar17,param_2,puVar25);
    _objc_release(puVar25);
  }
  puVar25 = puVar31;
  func_0x00010c14f140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar25 != (undefined *)0x0) {
    puVar25 = puVar31;
    func_0x00010c14f140(puVar31);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f64e0(puVar17,param_2,puVar25);
    _objc_release(puVar25);
  }
  func_0x00010c095f40(puVar31);
  dVar33 = (double)fVar32;
  func_0x00010c1768c0(dVar33,puVar17);
  fVar32 = SUB84(dVar33,0);
  puVar25 = puVar31;
  func_0x00010bf13940(puVar31);
  func_0x00010c16e1e0(puVar17,param_2,puVar25);
  puVar25 = PTR_PTR_1126c4738;
  _objc_opt_new();
  puVar13 = puVar31;
  func_0x00010c070860(puVar31);
  func_0x00010c1b06a0(puVar25,param_2,puVar13);
  func_0x00010c0d1300(puVar31);
  dVar33 = (double)fVar32;
  func_0x00010c1c91e0(dVar33,puVar25);
  fVar32 = SUB84(dVar33,0);
  func_0x00010c1c9180(puVar17,param_2,puVar25);
  puVar13 = puVar31;
  func_0x0001084425f0(puVar31);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c16c0(puVar17,param_2,puVar13);
  _objc_release(puVar13);
  func_0x00010bf212c0(puVar31);
  dVar33 = (double)fVar32;
  func_0x00010c173cc0(dVar33,puVar17);
  fVar32 = SUB84(dVar33,0);
  func_0x00010c1b4f00(puVar17,param_2,(char)uVar2);
  func_0x00010c1d9ea0(puVar17,param_2,(char)uVar1);
  puVar13 = puVar31;
  func_0x00010c26b120(puVar31);
  func_0x00010c212cc0(puVar17,param_2,puVar13);
  uVar20 = (ulong)uVar18;
  uVar27 = (ulong)param_9._3_1_;
  puVar16 = puVar17;
  puVar13 = puVar31;
  func_0x00010beac100(param_3,param_2,puVar17,puVar31,puVar19,uVar20,uVar28,uVar27);
  puVar15 = *(undefined8 **)(param_3 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar15;
  func_0x00010bef1020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  if (puVar12 != (undefined8 *)0x0) {
    puVar16 = puVar12;
    func_0x00010c067fc0(puVar12);
    func_0x00010c206c40(puVar17,param_2,puVar16);
  }
  _objc_release(puVar12);
  _objc_release(puVar25);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar23);
  _objc_release(puVar6);
  _objc_release(puVar30);
  _objc_release(puVar5);
  _objc_release(uStack_1c0);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(puVar31);
  _objc_release(puVar17);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_250) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar16);
  _objc_retain(puVar13);
  puVar31 = puVar13;
  func_0x00010bf93ae0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1955e0(puVar16,param_2,puVar31);
  _objc_release(puVar31);
  puVar31 = puVar13;
  func_0x00010bfadd80(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c040(puVar16,param_2,puVar31);
  _objc_release(puVar31);
  puVar31 = puVar13;
  func_0x00010bfae3c0(puVar13);
  func_0x00010c19c4e0(puVar16,param_2,puVar31);
  puVar31 = puVar13;
  func_0x00010bfadf60(puVar13);
  func_0x00010c19c1a0(puVar16,param_2,puVar31);
  puVar31 = puVar13;
  func_0x00010bfadf40(puVar13);
  func_0x00010c19c180(puVar16,param_2,puVar31);
  puVar31 = puVar13;
  func_0x00010bf1b840(puVar13);
  func_0x00010c20afe0(puVar16,param_2,puVar31);
  puVar31 = puVar13;
  func_0x00010bf1b860(puVar13);
  func_0x00010c20b000(puVar16,param_2,puVar31);
  puVar31 = puVar13;
  func_0x00010bf1b880(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b020(puVar16,param_2,puVar31);
  _objc_release(puVar31);
  puVar31 = PTR_PTR_1126b2930;
  func_0x00010bf70ea0(PTR_PTR_1126b2930);
  func_0x00010c18cd80(puVar16,param_2,puVar31);
  puVar31 = puVar13;
  func_0x00010c243340(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar16,param_2,puVar31);
  _objc_release(puVar31);
  func_0x00010c297b60(puVar13);
  func_0x00010c190a80(puVar16,param_2,(long)fVar32);
  puVar31 = puVar13;
  func_0x00010c297de0(puVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2208c0(puVar16,param_2,puVar31);
  _objc_release(puVar31);
  puVar31 = puVar13;
  func_0x00010bfde3c0();
  if ((int)puVar31 == 0) {
    puVar31 = puVar13;
    func_0x00010bfde3a0();
    if ((int)puVar31 != 0) {
      func_0x00010c17c140(puVar16,param_2,1);
      puVar31 = puVar13;
      func_0x00010c297de0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19c6c0(puVar16,param_2,puVar31);
      _objc_release(puVar31);
    }
  }
  else {
    func_0x00010c17c140(puVar16,param_2,0);
  }
  puVar31 = puVar13;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar31 != (undefined *)0x0) {
    puVar31 = puVar13;
    func_0x00010c08fda0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c208000(puVar16,param_2,puVar31);
    _objc_release(puVar31);
    puVar31 = puVar13;
    func_0x00010c096da0(puVar13);
    func_0x00010c208420(puVar16,param_2,puVar31);
  }
  func_0x00010beac100(puVar17,param_2,puVar16,puVar13,uVar20,puVar19,uVar28,uVar27);
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar16);
  return;
}



/* Entry: 105d7aa74; end: 105d7c5bb; -[SCGallerySavingLogger _setupDirectSnapSaveEvent:snapCommonLoggingParams:saveToSnapchatGallery:saveSource:snapIdInSnapchatGallery:mediaIdInSnapchatGallery:entryIdInSnapchatGallery:savingSessionId:notificationId:totalMediaSize:saveToCameraRoll:hasCameos:saveToDraft:isTemporaryStorage:isPaywallDisplayed:] */

void FUN_105d7aa74(long param_1,undefined8 param_2,long param_3,undefined *param_4,uint param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined4 param_13,
                  undefined1 param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  float fVar16;
  double dVar17;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar1 = param_4;
  func_0x00010c07e5e0(param_4);
  func_0x00010c1b4700(param_3,param_2,puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = param_4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126c4718;
    _objc_opt_new(PTR_PTR_1126c4718);
    puVar3 = param_4;
    func_0x00010c094540(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = param_4;
    func_0x00010c095a80(param_4);
    func_0x00010c1bc4a0(puVar2,param_2,puVar3);
    puVar3 = param_4;
    func_0x00010c096ca0(param_4);
    func_0x00010c1bccc0(puVar2,param_2,puVar3);
    puVar3 = param_4;
    func_0x00010c095800(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc400(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = param_4;
    func_0x00010c094800(param_4);
    func_0x00010c1bbec0(puVar2,param_2,puVar3);
    puVar3 = param_4;
    func_0x00010c11fae0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e74c0(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = param_4;
    func_0x00010c11fa40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e74e0(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = param_4;
    func_0x00010c092b80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar15 = param_4;
      func_0x00010bf09160(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17a100(puVar2,param_2,puVar15);
      _objc_release(puVar15);
    }
    else {
      func_0x00010c17a100(puVar2,param_2,puVar3);
    }
    _objc_release(puVar3);
    puVar3 = param_4;
    func_0x00010c096520(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4da0(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = param_4;
    func_0x00010c0922a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189040(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = param_4;
    func_0x00010c0972c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcec0(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c1ce180(puVar2,param_2,param_11);
    func_0x00010c1bb300(param_3,param_2,puVar2);
    func_0x00010befa120(puVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
  dVar17 = 0.0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  puVar2 = param_4;
  func_0x00010c091c60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar11 = *plStack_130;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar11) {
          _objc_enumerationMutation(puVar2);
        }
        uVar13 = *(ulong *)(lStack_138 + (long)puVar15 * 8);
        uVar14 = uVar13;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_4;
        func_0x00010c094540(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar14;
        func_0x00010c0720c0(uVar14,param_2,puVar4);
        _objc_release(puVar4);
        _objc_release(uVar14);
        if ((uVar10 & 1) == 0) {
          puVar4 = PTR_PTR_1126c4718;
          _objc_opt_new(PTR_PTR_1126c4718);
          uVar14 = uVar13;
          func_0x00010c094540(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bbd60(puVar4,param_2,uVar14);
          _objc_release(uVar14);
          uVar14 = uVar13;
          func_0x00010c096ca0(uVar13);
          func_0x00010c1bccc0(puVar4,param_2,uVar14);
          uVar14 = uVar13;
          func_0x00010c094800(uVar13);
          func_0x00010c1bbec0(puVar4,param_2,uVar14);
          uVar14 = uVar13;
          func_0x00010c095800(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bc400(puVar4,param_2,uVar14);
          _objc_release(uVar14);
          uVar14 = uVar13;
          func_0x00010c11fae0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e74c0(puVar4,param_2,uVar14);
          _objc_release(uVar14);
          uVar14 = uVar13;
          func_0x00010c11fa40(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1e74e0(puVar4,param_2,uVar14);
          _objc_release(uVar14);
          func_0x00010c0972c0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bcec0(puVar4,param_2,uVar13);
          _objc_release(uVar13);
          func_0x00010befa120(puVar1,param_2,puVar4);
          _objc_release(puVar4);
        }
        puVar15 = puVar15 + 1;
      } while (puVar3 != puVar15);
      puVar3 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_140,auStack_100,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010bf51e00(puVar1);
    func_0x00010c1bb320(param_3,param_2,puVar2);
    _objc_release(puVar2);
  }
  puVar2 = param_4;
  func_0x00010c240640(param_4);
  func_0x00010c204260(param_3,param_2,puVar2);
  puVar2 = param_4;
  func_0x00010c2700c0(param_4);
  func_0x00010c2159a0(param_3,param_2,puVar2);
  puVar2 = param_4;
  func_0x00010c270140(param_4);
  func_0x00010c215a20(param_3,param_2,(ulong)puVar2 & 0xffffffff);
  puVar2 = param_4;
  func_0x00010c0d22c0(param_4);
  func_0x00010c1c9740(param_3,param_2,puVar2);
  puVar2 = param_4;
  func_0x00010bf6cf80(param_4);
  func_0x00010c18b9e0(param_3,param_2,puVar2);
  puVar2 = param_4;
  func_0x00010c27c860(param_4);
  func_0x00010c21a560(param_3,param_2,puVar2);
  puVar2 = param_4;
  func_0x00010bfd7ee0(param_4);
  func_0x00010c1a6100(param_3,param_2,puVar2);
  puVar2 = param_4;
  func_0x00010c094540(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c240(param_3,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c095a20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc480(param_3,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c096ca0(param_4);
  func_0x00010c1bcca0(param_3,param_2,puVar2);
  puVar2 = param_4;
  func_0x00010c096b60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcc00(param_3,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010bf09180(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcf40(param_3,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c095800(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bc3e0(param_3,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c091c60(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010b06fac4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f6700(param_3,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c091c60(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010b06ffa4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f6380(param_3,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c091c60(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010b06fbfc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f6400(param_3,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c091c60(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010b06fe6c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f63c0(param_3,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c091c60(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010b06fd34();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f64e0(param_3,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c091c60(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010b0700dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f62c0(param_3,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c091c60(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010b070214();
  func_0x00010c1f63e0(param_3,param_2,puVar3);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c091c60(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010b06f648();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbee0(param_3,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c26a320(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212740(param_3,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_4;
    func_0x00010bf9f120(param_4);
    func_0x00010c199b20(param_3,param_2,puVar2);
    puVar2 = param_4;
    func_0x00010bf9f040(param_4);
    func_0x00010c199a40(param_3,param_2,puVar2);
    puVar2 = param_4;
    func_0x00010c0947c0(param_4);
    func_0x00010c1bbe80(param_3,param_2,puVar2);
    puVar2 = param_4;
    func_0x00010c094800(param_4);
    func_0x00010c1bbea0(param_3,param_2,puVar2);
    puVar2 = param_4;
    func_0x00010c090320(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1baba0(param_3,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = param_4;
    func_0x00010c0915a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bb200(param_3,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = param_4;
    func_0x00010c08fda0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c208000(param_3,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = param_4;
    func_0x00010c096da0(param_4);
    func_0x00010c208420(param_3,param_2,puVar2);
  }
  puVar2 = param_4;
  func_0x00010bf5af60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  _objc_release(puVar2);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = param_4;
    func_0x00010bf5af60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185a80(param_3,param_2,puVar2);
    _objc_release(puVar2);
  }
  puVar2 = param_4;
  func_0x00010bfb75c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  _objc_release(puVar2);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = param_4;
    func_0x00010bfb75c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f820(param_3,param_2,puVar2);
    _objc_release(puVar2);
  }
  puVar2 = param_4;
  func_0x00010bf30820(param_4);
  func_0x00010c178b80(param_3,param_2,puVar2);
  puVar2 = param_4;
  func_0x00010bf2fe80(param_4);
  func_0x00010c1785c0(param_3,param_2,puVar2);
  puVar2 = param_4;
  func_0x00010bf2fbe0(param_4);
  func_0x00010c178480(param_3,param_2,puVar2);
  puVar2 = param_4;
  func_0x00010bf30860(param_4);
  func_0x00010c178bc0(param_3,param_2,puVar2);
  puVar2 = param_4;
  func_0x00010bf30440(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178920(param_3,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010bf304e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf30160();
  func_0x00010c178740(param_3,param_2,puVar3);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010bf30660(param_4);
  func_0x00010c178ae0(param_3,param_2,puVar2);
  puVar2 = param_4;
  func_0x00010bf304e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf30420();
  func_0x00010c178680(param_3,param_2,puVar3);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010bf304e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf300e0();
  func_0x00010c1786a0(param_3,param_2,puVar3);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010bf304e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf2fc00();
  func_0x00010c1784a0(param_3,param_2,puVar3);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010bf304e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0ca680();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar3;
  func_0x00010c08fa60();
  func_0x00010c226760(param_3,param_2,puVar15 != (undefined *)0x0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_4;
  func_0x00010bf11440(param_4);
  func_0x00010c16cc40(param_3,param_2,puVar2);
  puVar2 = param_4;
  func_0x00010c2a09e0(param_4);
  func_0x00010c224100(param_3,param_2,puVar2);
  puVar2 = param_4;
  func_0x00010c2736c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar3;
  func_0x000108ee0cac();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar15;
  func_0x00010c0976a0(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  func_0x00010c2260c0(param_3,param_2,puVar3 != (undefined *)0x0);
  _objc_release(puVar2);
  puVar2 = puVar15;
  func_0x00010bfd8c80(puVar15);
  func_0x00010c226620(param_3,param_2,puVar2);
  puVar2 = puVar15;
  func_0x00010c0976a0(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd0c0(param_3,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c4720;
  _objc_opt_new();
  puVar3 = param_4;
  func_0x00010c282c80(param_4);
  func_0x00010c1e9680(puVar2,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010c2681e0(param_4);
  func_0x00010c2117e0(puVar2,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010bf5bb60(param_4);
  func_0x00010c1e59c0(puVar2,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010bfb92e0(param_4);
  func_0x00010c170060(puVar2,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010c268220(param_4);
  func_0x00010c211800(puVar2,param_2,puVar3);
  func_0x00010c21f5a0(param_3,param_2,puVar2);
  puVar3 = param_4;
  func_0x00010bf29de0(param_4);
  func_0x00010c1769e0(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010c158420();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf529e0();
  _objc_release(puVar3);
  puVar3 = param_4;
  if (puVar4 == (undefined *)0x0) {
    puVar4 = param_4;
    func_0x00010c24b740(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176a60(param_3,param_2,puVar4);
    _objc_release(puVar4);
    func_0x00010bf6f7a0(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = param_4;
    func_0x00010b070344();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176a60(param_3,param_2,puVar4);
    _objc_release(puVar4);
    func_0x00010b0704c8(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c18c600(param_3,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010bfb2520(param_4);
  func_0x00010c19db40(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010bf31280(param_4);
  func_0x00010c1792c0(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010c2bd260(param_4);
  func_0x00010c2271c0(param_3,param_2,puVar3);
  puVar4 = param_4;
  func_0x00010c0c6c20();
  puVar3 = puVar4 + 1;
  if (puVar3 < (undefined *)0x1c) {
    if ((1L << ((ulong)puVar3 & 0x3f) & 0xd8de0fdU) == 0) {
      if (puVar3 == (undefined *)0x8) {
        uVar9 = 5;
      }
      else {
        if (puVar3 != (undefined *)0xa) goto LAB_105d7c5b0;
        uVar9 = 0xe;
      }
    }
    else {
      uVar9 = 1;
      if ((puVar4 + 1 < (undefined *)0x1c) &&
         ((1L << ((ulong)(puVar4 + 1) & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (puVar4 + 1 < (undefined *)0x1b) {
          uVar9 = *(undefined8 *)(&UNK_10ddd0888 + (long)(puVar4 + 1) * 8);
        }
        else {
          uVar9 = 0;
        }
      }
    }
  }
  else {
LAB_105d7c5b0:
    uVar9 = 2;
  }
  func_0x00010c1c5440(param_3,param_2,uVar9);
  puVar3 = param_4;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 != (undefined *)0x0) {
    puVar3 = param_4;
    func_0x00010bf31200(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(param_3,param_2,puVar3);
    _objc_release(puVar3);
  }
  func_0x00010c1f59c0(param_3,param_2,param_10);
  if (param_5 != 0) {
    func_0x00010c204680(param_3,param_2,param_7);
    func_0x00010c1c4880(param_3,param_2,param_8);
    func_0x00010c1968c0(param_3,param_2,param_9);
  }
  puVar3 = param_4;
  func_0x00010c243700(param_4);
  func_0x00010c205840(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010c253de0(param_4);
  func_0x00010c20adc0(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010c2538c0(param_4);
  func_0x00010c20a840(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010c243340(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(param_3,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c255260(param_4);
  func_0x00010c20bb60(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010c254000(param_4);
  func_0x00010c20af80(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010c2543a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c253f80();
  func_0x00010c20af60(param_3,param_2,puVar4);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c2538c0(param_4);
  func_0x00010c20a840(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010bfee080(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b1c0(param_3,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010bfee060(param_4);
  func_0x00010c20b1a0(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010bf4f960(param_4);
  func_0x00010c20ab80(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010bf4f980(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aba0(param_3,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010bfedfe0(param_4);
  func_0x00010c20b1e0(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010c29a680(param_4);
  func_0x00010c221b20(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010c2b6aa0(param_4);
  func_0x00010c226ba0(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010c124200(param_4);
  func_0x00010c1e9060(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010bf4ca00(param_4);
  func_0x00010c182160(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010bfee080(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b1c0(param_3,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010bf61e60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20ace0(param_3,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b2930;
  func_0x00010bf70ea0(PTR_PTR_1126b2930);
  func_0x00010c18cd80(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010c253980(param_4);
  func_0x00010c20a940(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010c2539a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aa20(param_3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c2539a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a960(param_3,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c2543a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2543e0();
  func_0x00010c20b340(param_3,param_2,puVar4);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c2543a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c254c00();
  func_0x00010c20b5a0(param_3,param_2,puVar4);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c255140(param_4);
  func_0x00010c20ba40(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010c2543a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf2a7c0();
  func_0x00010c20aaa0(param_3,param_2,puVar4);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c2543a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf2a960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aac0(param_3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c1a5b00(param_3,param_2,param_13._1_1_);
  puVar3 = param_4;
  func_0x00010c0d3a20(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca440(param_3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c0d3300(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9fe0(param_3,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c0d3840(param_4);
  func_0x00010c1ca4e0(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010bf4f080(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(param_3,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c0c1aa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2f20(param_3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c2543a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0b5c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c9ee0(param_3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c0d37c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca220(param_3,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c0b5c60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c1160(param_3,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c247400(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206b60(param_3,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c247500(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206c00(param_3,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c0b59a0(param_4);
  func_0x00010c1c1040(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010c1297e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c129a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea120(param_3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = PTR_PTR_1126c4728;
  _objc_opt_new();
  puVar3 = param_4;
  func_0x00010c1297e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c129aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea1a0(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  func_0x00010c1e9e60(param_3,param_2,puVar4);
  puVar3 = param_4;
  func_0x00010c1343c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb7e0(param_3,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c1c5240(param_3,param_2,param_12);
  puVar3 = PTR_PTR_1126c4750;
  _objc_retain(param_4);
  _objc_alloc_init();
  puVar5 = param_4;
  func_0x00010c140fe0();
  func_0x00010c1ee380(puVar3,param_2,puVar5);
  func_0x00010c141100(param_4);
  _objc_release(param_4);
  func_0x00010c1ee400(puVar3);
  func_0x00010c1ee3c0(param_3,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c140fc0();
  func_0x00010c1ee440(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010c140f80();
  func_0x00010c1ee340(param_3,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010befeb80(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf07d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1861a0(param_3,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126c4730;
  _objc_opt_new();
  puVar3 = param_4;
  func_0x00010c0d2c80();
  func_0x00010c1c9c60(puVar5,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010c2a0a00();
  func_0x00010c224120(puVar5,param_2,puVar3);
  puVar3 = param_4;
  func_0x00010c0d30c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1c9f60(puVar5);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010c2a0ba0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c224160(puVar5);
  _objc_release(puVar3);
  puVar3 = param_4;
  func_0x00010bf160e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c16f3a0(puVar5);
  _objc_release(puVar3);
  func_0x00010c16bee0(param_3,param_2,puVar5);
  puVar3 = param_4;
  func_0x00010c26c920(param_4);
  func_0x00010c213840(param_3,param_2,puVar3);
  _objc_retain(param_4);
  func_0x00010c273560(param_4);
  puVar3 = param_4;
  if (dVar17 != -1.0) {
    puVar3 = PTR_PTR_1126c4758;
    _objc_alloc_init();
    func_0x00010c273500(param_4);
    func_0x00010c216d20(puVar3);
    func_0x00010c273520(param_4);
    func_0x00010c216d40(puVar3);
    func_0x00010c273560(param_4);
    func_0x00010c216dc0(puVar3);
    puVar12 = param_4;
    func_0x00010c273580(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216de0(puVar3,param_2,puVar12);
    _objc_release(puVar12);
    _objc_release(param_4);
    fVar16 = SUB84(dVar17,0);
    if (puVar3 == (undefined *)0x0) goto LAB_105d7c1bc;
    func_0x00010c216da0(param_3,param_2,puVar3);
  }
  fVar16 = SUB84(dVar17,0);
  _objc_release(puVar3);
LAB_105d7c1bc:
  puVar3 = PTR_PTR_1126c4760;
  _objc_retain(param_4);
  _objc_alloc_init();
  func_0x00010c105cc0(param_4);
  func_0x00010c179400(puVar3);
  puVar12 = param_4;
  func_0x00010bf316a0(param_4);
  func_0x00010c179420(puVar3,param_2,puVar12);
  puVar12 = param_4;
  func_0x00010c2bf140(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227ba0(puVar3,param_2,puVar12);
  _objc_release(puVar12);
  puVar12 = param_4;
  func_0x00010c2bf240(param_4);
  _objc_release(param_4);
  func_0x00010c227c40(puVar3,param_2,puVar12);
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c227b80(param_3,param_2,puVar3);
  }
  func_0x00010c123e80(param_4);
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c013ce0();
  func_0x00010c1e8fe0(param_3,param_2,puVar12);
  _objc_release(puVar12);
  _objc_retain(param_4);
  puVar12 = param_4;
  func_0x00010c078000();
  if ((int)puVar12 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126c4768;
    _objc_opt_new(PTR_PTR_1126c4768);
    puVar6 = param_4;
    func_0x00010bfaf060(param_4);
    func_0x00010c1c9360(puVar12,param_2,puVar6);
  }
  uVar14 = (ulong)(byte)param_13;
  _objc_release(param_4);
  func_0x00010c1c9480(param_3,param_2,puVar12);
  _objc_release(puVar12);
  puVar12 = param_4;
  func_0x00010c06c6a0(param_4);
  func_0x00010c1af380(param_3,param_2,puVar12);
  puVar12 = param_4;
  func_0x00010bf2ae80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar12 != (undefined *)0x0) {
    puVar12 = param_4;
    func_0x00010bf2ae80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ffc60(param_3,param_2,puVar12);
    _objc_release(puVar12);
  }
  puVar12 = param_4;
  func_0x00010c14f140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar12 != (undefined *)0x0) {
    puVar12 = param_4;
    func_0x00010c14f140(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f64e0(param_3,param_2,puVar12);
    _objc_release(puVar12);
  }
  func_0x00010c095f40(param_4);
  dVar17 = (double)fVar16;
  func_0x00010c1768c0(dVar17,param_3);
  fVar16 = SUB84(dVar17,0);
  puVar12 = param_4;
  func_0x00010bf13940(param_4);
  func_0x00010c16e1e0(param_3,param_2,puVar12);
  puVar12 = PTR_PTR_1126c4738;
  _objc_opt_new();
  puVar6 = param_4;
  func_0x00010c070860(param_4);
  func_0x00010c1b06a0(puVar12,param_2,puVar6);
  func_0x00010c0d1300(param_4);
  dVar17 = (double)fVar16;
  func_0x00010c1c91e0(dVar17,puVar12);
  fVar16 = SUB84(dVar17,0);
  func_0x00010c1c9180(param_3,param_2,puVar12);
  puVar6 = param_4;
  func_0x0001084425f0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c16c0(param_3,param_2,puVar6);
  _objc_release(puVar6);
  func_0x00010bf212c0(param_4);
  dVar17 = (double)fVar16;
  func_0x00010c173cc0(dVar17,param_3);
  fVar16 = SUB84(dVar17,0);
  func_0x00010c1b4f00(param_3,param_2,param_13._3_1_);
  func_0x00010c1d9ea0(param_3,param_2,param_14);
  puVar6 = param_4;
  func_0x00010c26b120(param_4);
  func_0x00010c212cc0(param_3,param_2,puVar6);
  uVar10 = (ulong)param_5;
  uVar13 = (ulong)param_13._2_1_;
  lVar8 = param_3;
  puVar6 = param_4;
  func_0x00010beac100(param_1,param_2,param_3,param_4,param_6,uVar10,uVar14,uVar13);
  lVar7 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar7;
  func_0x00010bef1020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  if (lVar11 != 0) {
    lVar8 = lVar11;
    func_0x00010c067fc0(lVar11);
    func_0x00010c206c40(param_3,param_2,lVar8);
  }
  _objc_release(lVar11);
  _objc_release(puVar12);
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar15);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar8);
  _objc_retain(puVar6);
  puVar1 = puVar6;
  func_0x00010bf93ae0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1955e0(lVar8,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = puVar6;
  func_0x00010bfadd80(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c040(lVar8,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = puVar6;
  func_0x00010bfae3c0(puVar6);
  func_0x00010c19c4e0(lVar8,param_2,puVar1);
  puVar1 = puVar6;
  func_0x00010bfadf60(puVar6);
  func_0x00010c19c1a0(lVar8,param_2,puVar1);
  puVar1 = puVar6;
  func_0x00010bfadf40(puVar6);
  func_0x00010c19c180(lVar8,param_2,puVar1);
  puVar1 = puVar6;
  func_0x00010bf1b840(puVar6);
  func_0x00010c20afe0(lVar8,param_2,puVar1);
  puVar1 = puVar6;
  func_0x00010bf1b860(puVar6);
  func_0x00010c20b000(lVar8,param_2,puVar1);
  puVar1 = puVar6;
  func_0x00010bf1b880(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b020(lVar8,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf70ea0(PTR_PTR_1126b2930);
  func_0x00010c18cd80(lVar8,param_2,puVar1);
  puVar1 = puVar6;
  func_0x00010c243340(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(lVar8,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c297b60(puVar6);
  func_0x00010c190a80(lVar8,param_2,(long)fVar16);
  puVar1 = puVar6;
  func_0x00010c297de0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2208c0(lVar8,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = puVar6;
  func_0x00010bfde3c0();
  if ((int)puVar1 == 0) {
    puVar1 = puVar6;
    func_0x00010bfde3a0();
    if ((int)puVar1 != 0) {
      func_0x00010c17c140(lVar8,param_2,1);
      puVar1 = puVar6;
      func_0x00010c297de0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19c6c0(lVar8,param_2,puVar1);
      _objc_release(puVar1);
    }
  }
  else {
    func_0x00010c17c140(lVar8,param_2,0);
  }
  puVar1 = puVar6;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 != (undefined *)0x0) {
    puVar1 = puVar6;
    func_0x00010c08fda0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c208000(lVar8,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = puVar6;
    func_0x00010c096da0(puVar6);
    func_0x00010c208420(lVar8,param_2,puVar1);
  }
  func_0x00010beac100(param_3,param_2,lVar8,puVar6,uVar10,param_6,uVar14,uVar13);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 105d7c5bc; end: 105d7c84f; -[SCGallerySavingLogger _setupGeofilterDirectSnapSaveEvent:snapCommonLoggingParams:saveToSnapchatGallery:saveSource:saveToCameraRoll:saveToDraft:] */

void FUN_105d7c5bc(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010bf93ae0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1955e0(param_4,param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bfadd80(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c040(param_4,param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bfae3c0(param_5);
  func_0x00010c19c4e0(param_4,param_3,lVar1);
  lVar1 = param_5;
  func_0x00010bfadf60(param_5);
  func_0x00010c19c1a0(param_4,param_3,lVar1);
  lVar1 = param_5;
  func_0x00010bfadf40(param_5);
  func_0x00010c19c180(param_4,param_3,lVar1);
  lVar1 = param_5;
  func_0x00010bf1b840(param_5);
  func_0x00010c20afe0(param_4,param_3,lVar1);
  lVar1 = param_5;
  func_0x00010bf1b860(param_5);
  func_0x00010c20b000(param_4,param_3,lVar1);
  lVar1 = param_5;
  func_0x00010bf1b880(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b020(param_4,param_3,lVar1);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126b2930;
  func_0x00010bf70ea0(PTR_PTR_1126b2930);
  func_0x00010c18cd80(param_4,param_3,puVar2);
  lVar1 = param_5;
  func_0x00010c243340(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(param_4,param_3,lVar1);
  _objc_release(lVar1);
  func_0x00010c297b60(param_5);
  func_0x00010c190a80(param_4,param_3,(long)param_1);
  lVar1 = param_5;
  func_0x00010c297de0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2208c0(param_4,param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bfde3c0();
  if ((int)lVar1 == 0) {
    lVar1 = param_5;
    func_0x00010bfde3a0();
    if ((int)lVar1 != 0) {
      func_0x00010c17c140(param_4,param_3,1);
      lVar1 = param_5;
      func_0x00010c297de0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19c6c0(param_4,param_3,lVar1);
      _objc_release(lVar1);
    }
  }
  else {
    func_0x00010c17c140(param_4,param_3,0);
  }
  lVar1 = param_5;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_5;
    func_0x00010c08fda0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c208000(param_4,param_3,lVar1);
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010c096da0(param_5);
    func_0x00010c208420(param_4,param_3,lVar1);
  }
  func_0x00010beac100(param_2,param_3,param_4,param_5,param_7,param_6,param_8,param_9);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d7c850; end: 105d7cf23; -[SCGallerySavingLogger _setupDirectSnapSaveBaseEvent:loggingParameters:saveSource:saveToSnapchatGallery:saveToCameraRoll:saveToDraft:] */

void FUN_105d7c850(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  ulong param_9)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  float fVar5;
  double dVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = param_5;
  func_0x00010bf037a0(param_5);
  func_0x00010c167f20(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bf03500(param_5);
  func_0x00010c167e60(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010c2a8340(param_5);
  func_0x00010c225be0(param_4,param_3,uVar4);
  func_0x00010c1f59e0(param_4,param_3,param_6);
  uVar4 = param_5;
  func_0x00010bf89ea0(param_5);
  func_0x00010c191960(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bf5c920(param_5);
  func_0x00010c226060(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bf5c9e0(param_5);
  func_0x00010c226080(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bfae340(param_5);
  func_0x00010c19c460(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bfb2540(param_5);
  func_0x00010c19daa0(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bfd3440(param_5);
  func_0x00010c1a5460(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bfbb160(param_5);
  func_0x00010c176040(param_4,param_3,uVar4 & 0xffffffff);
  uVar1 = param_5;
  func_0x00010c0c6c20();
  uVar4 = uVar1 + 1;
  if (uVar4 < 0x1c) {
    if ((1L << (uVar4 & 0x3f) & 0xd8de0fdU) != 0) {
      uVar3 = 1;
      if ((uVar1 + 1 < 0x1c) && ((1L << (uVar1 + 1 & 0x3f) & 0xb4b5dbbU) != 0)) {
        if (uVar1 + 1 < 0x1b) {
          uVar3 = *(undefined8 *)(&UNK_10ddd0888 + (uVar1 + 1) * 8);
        }
        else {
          uVar3 = 0;
        }
      }
      goto LAB_105d7c9d4;
    }
    if (uVar4 == 8) {
      uVar3 = 5;
      goto LAB_105d7c9d4;
    }
    if (uVar4 == 10) {
      uVar3 = 0xe;
      goto LAB_105d7c9d4;
    }
  }
  uVar3 = 2;
LAB_105d7c9d4:
  func_0x00010c1c5440(param_4,param_3,uVar3);
  func_0x00010c226380(param_4,param_3,param_7);
  func_0x00010c225ea0(param_4,param_3,param_8);
  func_0x00010c0c4ba0(param_5);
  dVar6 = (double)param_1;
  func_0x00010c205880(dVar6,param_4);
  fVar5 = SUB84(dVar6,0);
  func_0x00010c29e480(param_5);
  func_0x00010c222d20((double)fVar5,param_4);
  uVar4 = param_5;
  func_0x00010bfadfa0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x000108442be8();
  func_0x00010c19c1c0(param_4,param_3,uVar1);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010bfae160(param_5);
  func_0x00010c19c2c0(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bfae8c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x000108442868();
  func_0x00010c19c760(param_4,param_3,uVar1);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010bf2fba0(param_5);
  func_0x00010c178460(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010c253c00(param_5);
  func_0x00010c20abc0(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010c2551a0(param_5);
  func_0x00010c20ba80(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010c264640(param_5);
  func_0x00010c210580(param_4,param_3,uVar4);
  if ((param_9 & 1) == 0) {
    uVar4 = param_5;
    func_0x00010c247520(param_5);
  }
  else {
    uVar4 = 0x5a;
  }
  func_0x00010c206c40(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010c247a00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206f80(param_4,param_3,uVar4);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010bf8e960(param_5);
  func_0x00010c20ae60(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bf1c3a0(param_5);
  func_0x00010c20a860(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010c2441e0(param_5);
  func_0x00010c20b8c0(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bf8e980(param_5);
  func_0x00010c20aea0(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bf1c3c0(param_5);
  func_0x00010c20a8a0(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010c244200(param_5);
  func_0x00010c20b900(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bf8e9a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20aec0(param_4,param_3,uVar4);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010bf1c420(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a8c0(param_4,param_3,uVar4);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010c244220(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b920(param_4,param_3,uVar4);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010bf61f40(param_5);
  func_0x00010c20ac00(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bf61d60(param_5);
  func_0x00010c20ac20(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bf61d80(param_5);
  func_0x00010c20ac60(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bf61f60(param_5);
  func_0x00010c20acc0(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bf61da0(param_5);
  func_0x00010c20ac40(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bf61dc0(param_5);
  func_0x00010c20ac80(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010c281340(param_5);
  func_0x00010c20bb20(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010c281380(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20bb40(param_4,param_3,uVar4);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010bfccb60(param_5);
  func_0x00010c20b040(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bfccbc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b060(param_4,param_3,uVar4);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010c1101a0(param_5);
  func_0x00010c1e1760(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010c1084c0(param_5);
  func_0x00010c1e0780(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bf219a0(param_5);
  func_0x00010c174020(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bf219e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174060(param_4,param_3,uVar4);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010c2a8860(param_5);
  func_0x00010c225c80(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010bf0f140(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c4e0(param_4,param_3,uVar4);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010c2a0400(param_5);
  func_0x00010c223e80(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010c23ef00(param_5);
  func_0x00010c203740(param_4,param_3,uVar4);
  func_0x00010c2263a0(param_4,param_3,param_9);
  uVar4 = param_5;
  func_0x00010c07a080(param_5);
  func_0x00010c1b34a0(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010c27c4a0(param_5);
  func_0x00010c21a480(param_4,param_3,uVar4);
  uVar4 = param_5;
  func_0x00010c102520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    puVar2 = PTR_PTR_1126c4740;
    _objc_opt_new(PTR_PTR_1126c4740);
    uVar4 = param_5;
    func_0x00010c102520(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c0cfda0();
    func_0x00010c1c8cc0(puVar2,param_3,uVar1);
    _objc_release(uVar4);
    uVar4 = param_5;
    func_0x00010c102520();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c29f900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar4);
    if (uVar1 != 0) {
      uVar4 = param_5;
      func_0x00010c102520(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010c29f900();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010c222600(puVar2);
      _objc_release(uVar1);
      _objc_release(uVar4);
    }
    func_0x00010c1de4e0(param_4,param_3,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d7cf24; end: 105d7cfb7; -[SCGallerySavingLogger _currentSavingSessionForId:] */

void FUN_105d7cf24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x40);
  lVar1 = *(long *)(param_1 + 0x48);
  if ((lVar1 == 0) || (func_0x00010bf529e0(), lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _os_unfair_lock_unlock(param_1 + 0x40);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105d7cfb8; end: 105d7d01f; -[SCGallerySavingLogger _cacheSessionStatus:sessionId:] */

void FUN_105d7cfb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x40);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x48),param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x40);
  return;
}



/* Entry: 105d7d020; end: 105d7d29b; -[SCGallerySavingLogger _logSaveSnapTranscodeGrapheneWithStatus:] */

void FUN_105d7d020(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  uint uVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2438;
  func_0x00010c14af60(PTR_PTR_1126b2438);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar2 = param_3;
  func_0x00010c279f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d8c0(puVar3,param_2,ppuVar2 == (undefined **)0x0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar2 = param_3;
  func_0x00010c14b500(param_3);
  func_0x00010c25d8c0(puVar3,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110e29df8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar2 = param_3;
  func_0x00010c14b420(param_3);
  func_0x00010c25d8c0(puVar3,param_2,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e29e18,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar5 = param_3;
  func_0x00010bfdd920();
  if (((ulong)ppuVar5 & 1) == 0) {
    ppuVar5 = param_3;
    func_0x00010bfdd900(param_3);
    uVar7 = (uint)ppuVar5 ^ 1;
  }
  else {
    uVar7 = 0;
  }
  func_0x00010c25d8c0(ppuVar2,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110e29e38,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(ppuVar2);
  ppuVar5 = param_3;
  func_0x00010c279f80();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar2 = param_3;
    func_0x00010c279f80(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar2;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e29e58,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (ppuVar5 != (undefined **)0x0) {
    _objc_release(ppuVar6);
    _objc_release(ppuVar2);
  }
  _objc_release(ppuVar5);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d7d29c; end: 105d7d31f; -[SCGallerySavingLogger _dataFromSessionStatus:] */

void FUN_105d7d29c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08fa60();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar1);
      puVar2 = puVar1;
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105d7d320; end: 105d7d327; -[SCGallerySavingLogger listenerAnnouncer] */

undefined8 FUN_105d7d320(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105d7d328; end: 105d7d32f; -[SCGallerySavingLogger previewVisibleSaveLatencyLogger] */

undefined8 FUN_105d7d328(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105d7d330; end: 105d7d3bf; -[SCGallerySavingLogger .cxx_destruct] */

void FUN_105d7d330(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 105d7d3c0; end: 105d7d483; -[SCPreviewFeatureMagicToolsImpl initWithPreviewConfiguration:previewABServices:] */

undefined1 * FUN_105d7d3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ed078;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c3cc0;
    _objc_alloc(PTR_PTR_1126c3cc0);
    func_0x00010c020360();
    func_0x00010c216fa0(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d7d484; end: 105d7d487; -[SCPreviewFeatureMagicToolsImpl configureWithView:] */

void FUN_105d7d484(void)

{
  return;
}



/* Entry: 105d7d488; end: 105d7d527; -[SCPreviewFeatureMagicToolsImpl setToolbarItemViewModel:] */

void FUN_105d7d488(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puVar3 = PTR_PTR_1126ae750;
    if (param_3 == 0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d7d528; end: 105d7d54f; -[SCPreviewFeatureMagicToolsImpl toolbarItemViewModelObservable] */

void FUN_105d7d528(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d7d550; end: 105d7d557; -[SCPreviewFeatureMagicToolsImpl responderChainPriority] */

undefined8 FUN_105d7d550(void)

{
  return 0x7fffffff;
}



/* Entry: 105d7d558; end: 105d7d55f; -[SCPreviewFeatureMagicToolsImpl toolbarItemViewModel] */

undefined8 FUN_105d7d558(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105d7d560; end: 105d7d59b; -[SCPreviewFeatureMagicToolsImpl .cxx_destruct] */

void FUN_105d7d560(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d7d59c; end: 105d7d763; -[SCPreviewFeatureMagicToolsServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d7d59c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 + _DAT_112735a2c;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar5;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar5 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar1);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_112735a30;
    _objc_loadWeakRetained();
  }
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = 1;
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c4778;
  _objc_alloc(PTR_PTR_1126c4778);
  func_0x00010c027e40();
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112735a34);
  }
  _objc_retain(uVar6);
  func_0x00010bf9d660(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar7);
  _objc_release(uVar5);
  return;
}



/* Entry: 105d7d764; end: 105d7d7c7;  */

void FUN_105d7d764(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (*(char *)(param_1 + 0x38) != '\x01')) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c4770;
    _objc_alloc(PTR_PTR_1126c4770);
    func_0x00010c039840();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105d7d7c8; end: 105d7d80f; -[SCPreviewFeatureMagicToolsServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d7d7c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112735a34,0);
  _objc_destroyWeak(param_1 + _DAT_112735a30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735a2c);
  return;
}



/* Entry: 105d7d810; end: 105d7d8bb; -[SCPreviewFeatureMagicToolsServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d7d810(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112735a38;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112735a40;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c0b6540(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}


