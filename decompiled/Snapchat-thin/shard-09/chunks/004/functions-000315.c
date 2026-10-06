/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106dbc370; end: 106dbc4ab; -[SCMemoriesScreenshopDataSource .cxx_destruct] */

void FUN_106dbc370(long param_1)

{
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 106dbc4ac; end: 106dbc56f; -[SCMemoriesScreenshopDataSource initWithScreenshopPersistenceService:screenshopModelService:photoPermissionServices:featureSettingsService:userTrackedLogger:myBitmojiAvatarIdProvider:configProvider:screenshopNetworkService:queuePerformer:fetchLimit:] */

long FUN_106dbc4ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  
  _objc_retain(param_11);
  func_0x00010c0426c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_12);
  if (param_1 != 0) {
    _objc_retain(param_11);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_11;
    _objc_release(uVar1);
  }
  _objc_release(param_11);
  return param_1;
}



/* Entry: 106dbc570; end: 106dbc693; -[SCMemoriesScreenshopGridPaginator init] */

undefined1 * FUN_106dbc570(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f6ea8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)((long)puVar1 + 8));
    *(undefined8 *)((long)puVar1 + 0x20) = 100;
    uVar4 = *(ulong *)((long)puVar1 + 0x18);
    func_0x00010bf529e0();
    *(bool *)((long)puVar1 + 0x30) = uVar4 < 0x65;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar5);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106dbc694; end: 106dbc76b; -[SCMemoriesScreenshopGridPaginator updateAndMarhsallItems:] */

void FUN_106dbc694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106dbc76c; end: 106dbc7c3;  */

void FUN_106dbc76c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(lVar1 + 0x18) = uVar3;
    _objc_release(uVar2);
    func_0x00010bed9120(lVar1);
    func_0x00010be5da40(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106dbc7c4; end: 106dbc84b; -[SCMemoriesScreenshopGridPaginator _marshallUpdatedItems] */

void FUN_106dbc7c4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c6640;
  _objc_alloc(PTR_PTR_1126c6640);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bedb2a0(param_1);
  func_0x00010c25e980(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c055cc0(puVar1);
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106dbc84c; end: 106dbc8f3; -[SCMemoriesScreenshopGridPaginator _loadNextPage] */

void FUN_106dbc84c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106dbc8f4; end: 106dbc98b;  */

void FUN_106dbc8f4(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf529e0();
    if (*(ulong *)(param_1 + 0x20) < uVar1) {
      func_0x00010be63a00(param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c25e980(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 8));
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + param_2;
      func_0x00010bed9120(param_1);
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106dbc98c; end: 106dbc9cb; -[SCMemoriesScreenshopGridPaginator _updateMarshallRange] */

undefined1  [16] FUN_106dbc98c(long param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf529e0();
  uVar3 = *(ulong *)(param_1 + 0x20);
  if (uVar2 <= uVar3) {
    uVar3 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf529e0(uVar3);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  return auVar1 << 0x40;
}



/* Entry: 106dbc9cc; end: 106dbca1b; -[SCMemoriesScreenshopGridPaginator _nextMarshallRange] */

undefined1  [16] FUN_106dbc9cc(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (uVar1 < lVar2 + 100U) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010bf529e0(lVar2);
    lVar3 = *(long *)(param_1 + 0x20);
    lVar2 = lVar2 - lVar3;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    lVar2 = 100;
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = lVar3;
  return auVar4;
}



/* Entry: 106dbca1c; end: 106dbca4b; -[SCMemoriesScreenshopGridPaginator _updateHasReachedLastPageCache] */

void FUN_106dbca1c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0();
  *(bool *)(param_1 + 0x30) = uVar2 <= uVar1;
  return;
}



/* Entry: 106dbca4c; end: 106dbca57; -[SCMemoriesScreenshopGridPaginator _hasReachedLastPage] */

undefined1 FUN_106dbca4c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 106dbca58; end: 106dbca7f; -[SCMemoriesScreenshopGridPaginator _queuePerformer] */

void FUN_106dbca58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106dbca80; end: 106dbca87; -[SCMemoriesScreenshopGridPaginator shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_106dbca80(void)

{
  return 0;
}



/* Entry: 106dbca88; end: 106dbca93; -[SCMemoriesScreenshopGridPaginator pushToValdiMarshaller:] */

void FUN_106dbca88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af954f8(param_3,param_1);
  func_0x00010af954c0();
  func_0x00010af954b8();
  func_0x00010af953dc();
  func_0x00010af953ec();
  return;
}



/* Entry: 106dbca94; end: 106dbcc27; -[SCMemoriesScreenshopGridPaginator createPaginator] */

void FUN_106dbca94(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar3);
  puVar1 = PTR_PTR_1126c6648;
  _objc_alloc(PTR_PTR_1126c6648);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106dbcc28;
  puStack_78 = &UNK_11085af88;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106dbcc30;
  puStack_a0 = &UNK_1108434b0;
  uStack_70 = uVar2;
  _objc_copyWeak(auStack_98,auStack_68);
  _objc_copyWeak(auStack_c0,auStack_68);
  func_0x00010c030cc0(puVar1);
  func_0x00010c1d08e0();
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_98);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106dbcc28; end: 106dbcc2f;  */

void FUN_106dbcc28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 106dbcc30; end: 106dbccab;  */

void FUN_106dbcc30(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be4e200(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106dbccac; end: 106dbccb3;  */

void FUN_106dbccac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_toSCBridgeObservable_11267a270);
  return;
}



/* Entry: 106dbccb4; end: 106dbccbb; -[SCMemoriesScreenshopGridPaginator load] */

undefined8 FUN_106dbccb4(void)

{
  return 0;
}



/* Entry: 106dbccbc; end: 106dbcd03; -[SCMemoriesScreenshopGridPaginator .cxx_destruct] */

void FUN_106dbccbc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106dbcd04; end: 106dbcd5b; -[SCMemoriesScreenshopGridPaginator initWithQueuePerformer:] */

long FUN_106dbcd04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106dbcd5c; end: 106dbcdbf; -[SCMemoriesScreenshopGridThumbnailProvider init] */

undefined1 * FUN_106dbcd5c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6eb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106dbcdc0; end: 106dbcdc7; -[SCMemoriesScreenshopGridThumbnailProvider notifyToTrackThumbnailOnAssetId:] */

void FUN_106dbcdc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_next__112614028);
  return;
}



/* Entry: 106dbcdc8; end: 106dbcddf; -[SCMemoriesScreenshopGridThumbnailProvider retrieveLastestTrackedThumbnailView] */

void FUN_106dbcdc8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106dbcde0; end: 106dbcdeb; -[SCMemoriesScreenshopGridThumbnailProvider updateLastestTrackedThumbnailView:] */

void FUN_106dbcde0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106dbcdec; end: 106dbce63; -[SCMemoriesScreenshopGridThumbnailProvider observe] */

void FUN_106dbcdec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e0e60(uVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106dbce64; end: 106dbcf53; -[SCMemoriesScreenshopGridThumbnailProvider notifyWithThumbnailView:playbackItemId:] */

void FUN_106dbce64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010b9688dc();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106dbcf54;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(lVar1);
    lStack_48 = lVar1;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_release(lStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dbcf54; end: 106dbcf8f;  */

void FUN_106dbcf54(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c286fe0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106dbcf90; end: 106dbcf97; -[SCMemoriesScreenshopGridThumbnailProvider shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_106dbcf90(void)

{
  return 0;
}



/* Entry: 106dbcf98; end: 106dbcfa3; -[SCMemoriesScreenshopGridThumbnailProvider pushToValdiMarshaller:] */

undefined8 FUN_106dbcf98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df040;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x00010af978b0();
  return param_3;
}



/* Entry: 106dbcfa4; end: 106dbcfcf; -[SCMemoriesScreenshopGridThumbnailProvider .cxx_destruct] */

void FUN_106dbcfa4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106dbcfd0; end: 106dbd11f; -[SCMemoriesScreenshopItemScanner initWithDelegate:performer:userTrackedLogger:screenshopPersistenceService:screenshopModelService:screenshopNetworkService:] */

undefined1 *
FUN_106dbcfd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126f6eb8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
    *(undefined8 *)((long)puVar1 + 8) = 4;
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
    *(undefined8 *)((long)puVar1 + 0x48) = 0;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = 0;
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



/* Entry: 106dbd120; end: 106dbd143; -[SCMemoriesScreenshopItemScanner processEvent:] */

void FUN_106dbd120(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 - 1U < 5) {
    uVar1 = *(undefined8 *)(&UNK_10ddee160 + (param_3 - 1U) * 8);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea5e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setNextState__112587138,uVar1);
  return;
}



/* Entry: 106dbd144; end: 106dbd14b; -[SCMemoriesScreenshopItemScanner getSessionTotalItemCount] */

undefined8 FUN_106dbd144(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106dbd14c; end: 106dbd173; -[SCMemoriesScreenshopItemScanner getScanFinishedDate] */

void FUN_106dbd14c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106dbd174; end: 106dbd19b; -[SCMemoriesScreenshopItemScanner getScanStartedDate] */

void FUN_106dbd174(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106dbd19c; end: 106dbd25b; -[SCMemoriesScreenshopItemScanner _setNextState:] */

void FUN_106dbd19c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (param_3 == lVar2) {
    return;
  }
  if (param_3 != 1) {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 < 2) {
    if (lVar2 != 0) {
      if (lVar2 != 1) {
        return;
      }
      if (param_3 != 3) {
        *(long *)(param_1 + 8) = param_3;
        return;
      }
      return;
    }
    if (param_3 == 2) {
      *(undefined8 *)(param_1 + 8) = 2;
      return;
    }
    if (param_3 != 1) {
      return;
    }
  }
  else {
    if (lVar2 != 2) {
      if (lVar2 != 4) {
        return;
      }
      if (param_3 == 5) goto LAB_106dbd238;
    }
    if (param_3 != 3) {
      return;
    }
  }
LAB_106dbd238:
  *(undefined8 *)(param_1 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be81910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processNextItemIfAvailable_11257dfe0);
  return;
}



/* Entry: 106dbd25c; end: 106dbd45b; -[SCMemoriesScreenshopItemScanner _processNextItemIfAvailable] */

/* WARNING: Possible PIC construction at 0x000106dbd418: Changing call to branch */

void FUN_106dbd25c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(long *)(param_2 + 8) == 1) {
    if (*(long *)(param_2 + 0x58) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_2 + 0x58);
      *(undefined **)(param_2 + 0x58) = puVar1;
      _objc_release(uVar7);
    }
    lVar2 = param_2 + 0x10;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bfc8540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      lVar4 = lVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c09da80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2 + 0x30;
      _objc_loadWeakRetained(lVar2);
      lVar6 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf331e0();
      _objc_release(lVar6);
      _objc_release(lVar2);
      _objc_initWeak(auStack_58,param_2);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_106dbd45c;
      puStack_70 = &UNK_110865e48;
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(lVar5);
      lStack_68 = lVar5;
      FUN_106dbdcec(param_1,lVar4,&puStack_88);
      _objc_release(lStack_68);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      return;
    }
    *(undefined8 *)(param_2 + 8) = 0;
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + 0x50);
    *(undefined **)(param_2 + 0x50) = puVar1;
    _objc_release(uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be50290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__logAndResetScanningSessionCount_112571a40);
  return;
}



/* Entry: 106dbd45c; end: 106dbd543;  */

void FUN_106dbd45c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_copyWeak(auStack_48,param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010bddd740(lVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106dbd544; end: 106dbd62f;  */

void FUN_106dbd544(long param_1,undefined1 param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  undefined1 uStack_47;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x18;
    _objc_loadWeakRetained(lVar2);
    _objc_copyWeak(auStack_50,param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = param_2;
    _objc_retain(uVar3);
    uStack_47 = param_3;
    func_0x00010c0f7fc0(lVar2);
    _objc_release(lVar2);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106dbd630; end: 106dbd6a7;  */

void FUN_106dbd630(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be38820(lVar1,param_2,*(undefined1 *)(param_1 + 0x30));
    lVar2 = lVar1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf7a3e0();
    _objc_release(lVar2);
    if (*(char *)(param_1 + 0x31) == '\x01') {
      func_0x00010be81900(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106dbd6a8; end: 106dbd7f7; -[SCMemoriesScreenshopItemScanner _checkFashionPersistingResultFor:assetId:completion:] */

void FUN_106dbd6a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf37f00(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dbd7f8; end: 106dbd93f;  */

void FUN_106dbd7f8(float param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_4 & 1) == 0) {
      (**(code **)(*(long *)(param_2 + 0x28) + 0x10))(*(long *)(param_2 + 0x28),0,0);
    }
    else {
      lVar2 = lVar1 + 0x20;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      _objc_retain(uVar5);
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      _objc_retain(uVar4);
      func_0x00010c2574e0((double)param_1,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(uVar4);
      _objc_release(uVar5);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106dbd940; end: 106dbd957;  */

void FUN_106dbd940(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000106dbd954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),param_2);
  return;
}



/* Entry: 106dbd958; end: 106dbd977; -[SCMemoriesScreenshopItemScanner _incrementScanningSessionCounts:] */

void FUN_106dbd958(long param_1,undefined8 param_2,int param_3)

{
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  if (param_3 != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
  }
  return;
}



/* Entry: 106dbd978; end: 106dbda07; -[SCMemoriesScreenshopItemScanner _logAndResetScanningSessionCounts] */

void FUN_106dbd978(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar1 = PTR_PTR_1126d2950;
    _objc_alloc_init(PTR_PTR_1126d2950);
    func_0x00010c1aad40();
    func_0x00010c1aad60(puVar1,param_2,*(undefined8 *)(param_1 + 0x48));
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
    *(long *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106dbda08; end: 106dbda6b; -[SCMemoriesScreenshopItemScanner .cxx_destruct] */

void FUN_106dbda08(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 106dbda6c; end: 106dbdbdb;  */

void FUN_106dbda6c(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  
  puVar1 = PTR_PTR_1126c6608;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c09da80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0200c0(puVar1,param_4,uVar2,0);
  _objc_release(uVar2);
  func_0x000107fe9894(param_3);
  puVar3 = PTR_PTR_1126c6610;
  dVar8 = param_1;
  _objc_alloc(PTR_PTR_1126c6610);
  uVar2 = param_3;
  func_0x00010c0fce40(param_3);
  uVar4 = param_3;
  func_0x00010c0fcaa0(param_3);
  uVar5 = param_3;
  func_0x00010bf5a700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c26f320(uVar5);
  func_0x00010c0200e0((double)uVar2,(double)uVar4,0,dVar8 * 1000.0,puVar3,param_4,puVar1);
  _objc_release(uVar5);
  puVar7 = PTR_PTR_1126c6618;
  puVar6 = puVar1;
  func_0x00010c0844e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8f40(param_1,param_2,puVar7,param_4,puVar6,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2144a0(puVar3,param_4,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106dbdbdc; end: 106dbdc93;  */

void FUN_106dbdbdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  _objc_opt_new(PTR__OBJC_CLASS___PHFetchOptions_1126cb260);
  puVar3 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  puVar2 = puVar1;
  func_0x000108ebef14();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02a20(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dfc80(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c19b420(puVar1,param_2,param_1);
  puVar3 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  func_0x00010bfa5100(PTR__OBJC_CLASS___PHAsset_1126bd898,param_2,1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106dbdc94; end: 106dbdcd7;  */

bool FUN_106dbdc94(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110e86998,0,0);
  bVar1 = false;
  if ((int)param_1 != 0) {
    puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
    bVar1 = puVar2 == (undefined *)0x3;
  }
  return bVar1;
}



/* Entry: 106dbdcd8; end: 106dbdceb;  */

void FUN_106dbdcd8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e869b8,0,0);
  return;
}



/* Entry: 106dbdcec; end: 106dbdec7;  */

void FUN_106dbdcec(float param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
  _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
  func_0x00010c18ba80();
  func_0x00010c1cc000(puVar1);
  func_0x00010c210f80(puVar1);
  uVar2 = param_2;
  func_0x00010c0fce40(param_2);
  uVar3 = param_2;
  func_0x00010c0fcaa0(param_2);
  uVar4 = param_2;
  func_0x00010c0fce40();
  uVar5 = param_2;
  func_0x00010c0fcaa0();
  if (uVar4 <= uVar5) {
    uVar4 = uVar5;
  }
  if ((float)uVar4 <= param_1) {
    dVar9 = (double)uVar2;
    dVar8 = (double)uVar3;
  }
  else {
    uVar4 = param_2;
    func_0x00010c0fce40();
    uVar2 = param_2;
    func_0x00010c0fcaa0();
    dVar7 = (double)param_1;
    if (uVar2 < uVar4) {
      uVar4 = param_2;
      func_0x00010c0fcaa0(param_2);
      uVar2 = param_2;
      func_0x00010c0fce40(param_2);
      dVar8 = (double)(float)(((double)uVar4 / (double)uVar2) * dVar7);
      dVar9 = dVar7;
    }
    else {
      uVar4 = param_2;
      func_0x00010c0fce40(param_2);
      uVar2 = param_2;
      func_0x00010c0fcaa0(param_2);
      dVar9 = (double)(float)(((double)uVar4 / (double)uVar2) * dVar7);
      dVar8 = dVar7;
    }
  }
  puVar6 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c1357a0(dVar9,dVar8,puVar6);
  _objc_release(puVar6);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106dbdec8; end: 106dbdf33;  */

void FUN_106dbdec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  func_0x00010c0dff20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dbdf34; end: 106dbdf63;  */

void FUN_106dbdf34(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e869d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e869d8,
                      &PTR____CFConstantStringClassReference_110e869f8,0);
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



/* Entry: 106dbdf64; end: 106dbdfd7; -[SCComposerMediaCameraRollAuthorizationHandler initWithPhotoPermissionCoordinator:] */

undefined1 * FUN_106dbdf64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6ec0;
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



/* Entry: 106dbdfd8; end: 106dbe067; -[SCComposerMediaCameraRollAuthorizationHandler getStateWithCallback:] */

void FUN_106dbdfd8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if ((puVar1 == (undefined *)0x2) ||
       (puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30, func_0x00010bf10fa0(),
       puVar1 == (undefined *)0x1)) {
      pcVar3 = *(code **)(param_3 + 0x10);
      puVar1 = PTR____kCFBooleanFalse_11034ab60;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
      func_0x00010bf10fa0();
      pcVar3 = *(code **)(param_3 + 0x10);
      puVar1 = PTR____kCFBooleanTrue_11034ab68;
      if (puVar2 != (undefined *)0x3) {
        puVar1 = (undefined *)0x0;
      }
    }
    (*pcVar3)(param_3,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dbe068; end: 106dbe157; -[SCComposerMediaCameraRollAuthorizationHandler requestAuthorizationWithCallback:] */

void FUN_106dbe068(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if (puVar1 != (undefined *)0x2) {
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar1 != (undefined *)0x1) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_106dbe158;
      puStack_40 = &UNK_110842508;
      _objc_retain(param_3);
      puStack_38 = param_3;
      func_0x00010c134a40(uVar2,param_2,&puStack_58);
      _objc_release(uVar2);
      puVar1 = puStack_38;
      goto LAB_106dbe138;
    }
  }
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
LAB_106dbe138:
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106dbe158; end: 106dbe1b3;  */

void FUN_106dbe158(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106dbe1b4; end: 106dbe1bf; -[SCComposerMediaCameraRollAuthorizationHandler pushToValdiMarshaller:] */

void FUN_106dbe1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b89a740(param_3,param_1);
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 106dbe1c0; end: 106dbe1cb; -[SCComposerMediaCameraRollAuthorizationHandler .cxx_destruct] */

void FUN_106dbe1c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106dbe1cc; end: 106dbe2c7; -[SCComposerMediaCameraRollFactory initWithImageFactory:videoFactory:photoPermissionCoordinator:fetchLimit:] */

undefined1 *
FUN_106dbe1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f6ec8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
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



/* Entry: 106dbe2c8; end: 106dbe327; -[SCComposerMediaCameraRollFactory makeComposerCameraRollLibraryWithConfig:] */

void FUN_106dbe2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2958;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01c8e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106dbe328; end: 106dbe36f; -[SCComposerMediaCameraRollFactory .cxx_destruct] */

void FUN_106dbe328(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106dbe370; end: 106dbe4bf; -[SCComposerMediaCameraRollLibrary initWithImageFactory:videoFactory:photoPermissionCoordinator:config:fetchLimit:] */

undefined1 *
FUN_106dbe370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f6ed0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d2960;
    _objc_alloc();
    func_0x00010c035cc0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126c6618;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106dbe4c0; end: 106dbe4e7; -[SCComposerMediaCameraRollLibrary getAuthorizationHandler] */

void FUN_106dbe4c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106dbe4e8; end: 106dbe5ff; -[SCComposerMediaCameraRollLibrary getImageItemsWithOptions:callback:] */

void FUN_106dbe4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106dbe600;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    lStack_48 = param_4;
    _objc_retain(param_3);
    uStack_50 = param_3;
    func_0x00010007380c(uVar1,&puStack_70);
    _objc_release(uVar1);
    _objc_release(uStack_50);
    _objc_release(lStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dbe600; end: 106dbe69b;  */

void FUN_106dbe600(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2827c0();
    _objc_release(uVar3);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_106dbe69c(0,*(undefined8 *)(param_1 + 0x20),uVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3,0);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106dbe69c; end: 106dbec1b;  */

void FUN_106dbe69c(undefined4 param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  ulong uStack_1f0;
  undefined8 *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined4 uStack_194;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 auStack_128 [16];
  undefined *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_194 = param_1;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_a8 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar14 = param_2;
  func_0x00010c0c6a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar14 != (undefined8 *)0x0) {
    puVar14 = param_2;
    func_0x00010c0c6a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c0 = puVar2;
    func_0x00010c1063c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dfc80(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar14);
  }
  func_0x00010c19b420(puVar1);
  puVar4 = (undefined8 *)PTR__OBJC_CLASS___PHAsset_1126bd898;
  func_0x00010bfa5100();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_2;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar5;
  func_0x00010c2827c0();
  _objc_release(puVar5);
  puVar6 = param_2;
  func_0x00010c099040();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010c2827c0();
  _objc_release(puVar6);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = puVar4;
    func_0x00010bf529e0();
  }
  puVar6 = puVar4;
  func_0x00010bf529e0();
  lVar7 = 0;
  puVar13 = puVar6;
  _NSIntersectionRange();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar13 != (undefined8 *)0x0) {
    puStack_1b0 = puVar1;
    puStack_1a8 = param_2;
    _objc_retain(puVar4);
    puVar8 = puVar4;
    if ((lVar7 != 0) || (puVar13 != puVar6)) {
      puVar2 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
      func_0x00010bfed320(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e0320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_1b8 = puVar4;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    dVar17 = 0.0;
    lStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    _objc_retain(puVar8);
    puVar14 = &uStack_190;
    puVar5 = auStack_128;
    puStack_1a0 = puVar8;
    func_0x00010bf52a60();
    if (puVar8 != (undefined8 *)0x0) {
      lVar7 = *plStack_180;
      do {
        puVar14 = (undefined8 *)0x0;
        do {
          dVar16 = dVar17;
          if (*plStack_180 != lVar7) {
            _objc_enumerationMutation(puStack_1a0);
            dVar16 = dVar17;
          }
          uVar15 = *(ulong *)(lStack_188 + (long)puVar14 * 8);
          _objc_retain(uVar15);
          puVar3 = PTR_PTR_1126c6608;
          _objc_alloc(PTR_PTR_1126c6608);
          uVar9 = uVar15;
          func_0x00010c09da80(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0200c0(puVar3);
          _objc_release(uVar9);
          puVar1 = PTR_PTR_1126c6610;
          _objc_alloc(PTR_PTR_1126c6610);
          uVar9 = uVar15;
          func_0x00010c0fce40(uVar15);
          dVar17 = (double)uVar9;
          uVar9 = uVar15;
          func_0x00010c0fcaa0(uVar15);
          func_0x00010bf8b160(uVar15);
          dVar18 = dVar16 * 1000.0;
          uVar10 = uVar15;
          func_0x00010bf5a700(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          func_0x00010c0200e0(dVar17,(double)uVar9,dVar18,dVar16 * 1000.0,puVar1);
          _objc_release(uVar10);
          uVar9 = uVar15;
          func_0x00010c09ea00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (uVar9 != 0) {
            puVar11 = PTR_PTR_1126c6620;
            _objc_alloc();
            uVar9 = uVar15;
            func_0x00010c09ea00(uVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf51c80();
            param_3 = uVar15;
            func_0x00010c09ea00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf51c80();
            func_0x00010c021a60();
            _objc_release(param_3);
            _objc_release(uVar9);
            puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_148 = 0xc2000000;
            pcStack_140 = FUN_106dbf9cc;
            puStack_138 = &UNK_1108fdb10;
            puStack_130 = puVar11;
            func_0x00010c1a3560(puVar1);
            _objc_release(puVar11);
          }
          _objc_release(puVar3);
          _objc_release(uVar15);
          func_0x00010befa120(puVar2);
          _objc_release(puVar1);
          puVar14 = (undefined8 *)((long)puVar14 + 1);
        } while (puVar8 != puVar14);
        puVar14 = &uStack_190;
        puVar5 = auStack_128;
        puVar8 = puStack_1a0;
        func_0x00010bf52a60();
      } while (puVar8 != (undefined8 *)0x0);
    }
    puVar4 = puStack_1a0;
    _objc_release(puStack_1a0);
    _objc_release(puVar4);
    param_2 = puStack_1a8;
    puVar1 = puStack_1b0;
    puVar4 = puStack_1b8;
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar6 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_106dbec1c;
  uStack_1f0 = param_3;
  puStack_1e8 = puVar4;
  puStack_1e0 = puVar1;
  puStack_1d8 = param_2;
  puStack_1d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar14);
  _objc_retain(puVar5);
  if (puVar5 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_1f8,puVar6);
    uVar12 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_228 = 0xc2000000;
    pcStack_220 = FUN_106dbed34;
    puStack_218 = &UNK_110848378;
    _objc_copyWeak(auStack_200,auStack_1f8);
    _objc_retain(puVar5);
    puStack_208 = puVar5;
    _objc_retain(puVar14);
    puStack_210 = puVar14;
    func_0x00010007380c(uVar12,&puStack_230);
    _objc_release(uVar12);
    _objc_release(puStack_210);
    _objc_release(puStack_208);
    _objc_destroyWeak(auStack_200);
    _objc_destroyWeak(auStack_1f8);
  }
  _objc_release(puVar5);
  _objc_release(puVar14);
  return;
}



/* Entry: 106dbec1c; end: 106dbed33; -[SCComposerMediaCameraRollLibrary getVideoItemsWithOptions:callback:] */

void FUN_106dbec1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106dbed34;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    lStack_48 = param_4;
    _objc_retain(param_3);
    uStack_50 = param_3;
    func_0x00010007380c(uVar1,&puStack_70);
    _objc_release(uVar1);
    _objc_release(uStack_50);
    _objc_release(lStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dbed34; end: 106dbedcf;  */

void FUN_106dbed34(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2827c0();
    _objc_release(uVar3);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  uVar3 = 1;
  FUN_106dbe69c(1,*(undefined8 *)(param_1 + 0x20),uVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3,0);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106dbedd0; end: 106dbeeb7; -[SCComposerMediaCameraRollLibrary getThumbnailUrlsForItemsWithItemIds:preferredWidth:preferredHeight:callback:] */

void FUN_106dbedd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 != 0) {
    uVar1 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106dbeeb8;
    puStack_68 = &UNK_1108bb538;
    _objc_retain(param_5);
    uStack_60 = param_5;
    uStack_50 = param_1;
    uStack_48 = param_2;
    _objc_retain(param_6);
    lStack_58 = param_6;
    func_0x00010007380c(uVar1,&puStack_80);
    _objc_release(uVar1);
    _objc_release(lStack_58);
    _objc_release(uStack_60);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 106dbeeb8; end: 106dbf04f;  */

void FUN_106dbeeb8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 unaff_x22;
  long lVar8;
  long lVar9;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  long lStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar7);
  puVar6 = auStack_e8;
  lVar2 = lVar7;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        puVar4 = PTR_PTR_1126c6618;
        uVar3 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        func_0x00010c0844e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe8f40(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        func_0x00010befa120(puVar1);
        _objc_release(puVar4);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      puVar6 = auStack_e8;
      lVar2 = lVar7;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar7);
  uVar3 = 0;
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1);
  puVar4 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106dbf050;
  uStack_160 = unaff_x22;
  lStack_158 = lVar7;
  puStack_150 = puVar1;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(uVar3);
  _objc_retain(puVar6);
  if (puVar6 != (undefined1 *)0x0) {
    _objc_initWeak(auStack_168,puVar4);
    uVar5 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_106dbf168;
    puStack_188 = &UNK_110848378;
    _objc_copyWeak(auStack_170,auStack_168);
    _objc_retain(uVar3);
    uStack_180 = uVar3;
    _objc_retain(puVar6);
    puStack_178 = puVar6;
    func_0x00010007380c(uVar5,&puStack_1a0);
    _objc_release(uVar5);
    _objc_release(puStack_178);
    _objc_release(uStack_180);
    _objc_destroyWeak(auStack_170);
    _objc_destroyWeak(auStack_168);
  }
  _objc_release(puVar6);
  _objc_release(uVar3);
  return;
}



/* Entry: 106dbf050; end: 106dbf167; -[SCComposerMediaCameraRollLibrary getImageForItemWithItemId:callback:] */

void FUN_106dbf050(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106dbf168;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_50 = param_3;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x00010007380c(uVar1,&puStack_70);
    _objc_release(uVar1);
    _objc_release(lStack_48);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dbf168; end: 106dbf19b;  */

void FUN_106dbf168(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1fa40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106dbf19c; end: 106dbf333; -[SCComposerMediaCameraRollLibrary _getImageForItemWithItemId:callback:] */

void FUN_106dbf19c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c6618;
  func_0x00010c0844e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
    (**(code **)(param_4 + 0x10))(param_4,0,&PTR____CFConstantStringClassReference_110e86a78);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar1);
    func_0x00010c136160(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_4);
    func_0x00010c09b720(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(0);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 106dbf334; end: 106dbf40f;  */

void FUN_106dbf334(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bdc2ae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c2bd620(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(lVar1);
    lVar5 = *(long *)(param_1 + 0x28);
    pcVar4 = *(code **)(lVar5 + 0x10);
    param_3 = 0;
    lVar1 = lVar3;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x28);
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = *(code **)(lVar5 + 0x10);
    lVar3 = 0;
    lVar1 = param_3;
  }
  (*pcVar4)(lVar5,lVar3,param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106dbf410; end: 106dbf527; -[SCComposerMediaCameraRollLibrary getVideoForItemWithItemId:callback:] */

void FUN_106dbf410(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106dbf528;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_50 = param_3;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x00010007380c(uVar1,&puStack_70);
    _objc_release(uVar1);
    _objc_release(lStack_48);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dbf528; end: 106dbf55b;  */

void FUN_106dbf528(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be23d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106dbf55c; end: 106dbf74f; -[SCComposerMediaCameraRollLibrary _getVideoForItemWithItemId:callback:] */

void FUN_106dbf55c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c27dd80();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___PHAsset_1126bd898;
  if ((int)lVar1 != 1) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e86a98;
    param_2 = 0;
    (**(code **)(param_4 + 0x10))(param_4);
    goto LAB_106dbf708;
  }
  lVar1 = param_3;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa50e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  if (ppuVar4 == (undefined **)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(param_4 + 0x10);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e86ab8;
LAB_106dbf6f4:
    param_2 = 0;
    (*UNRECOVERED_JUMPTABLE_00)(param_4);
  }
  else {
    ppuVar3 = ppuVar4;
    func_0x00010c0c6c20();
    if (ppuVar3 != (undefined **)0x2) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(param_4 + 0x10);
      ppuVar3 = &PTR____CFConstantStringClassReference_110e86ad8;
      goto LAB_106dbf6f4;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    ppuVar3 = ppuVar4;
    func_0x00010c2bd6c0(uVar5);
    _objc_release(uVar5);
    _objc_release(param_4);
  }
  _objc_release(ppuVar4);
LAB_106dbf708:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_3 + 0x20) + 0x10);
  if ((param_2 != 0) && (ppuVar3 == (undefined **)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000106dbf760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000106dbf768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(*(long *)(param_3 + 0x20),0);
  return;
}



/* Entry: 106dbf750; end: 106dbf76b;  */

void FUN_106dbf750(long param_1,long param_2,long param_3)

{
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 0x20) + 0x10);
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000106dbf760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000106dbf768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106dbf76c; end: 106dbf883; -[SCComposerMediaCameraRollLibrary getItemUriWithItemId:callback:] */

void FUN_106dbf76c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106dbf884;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_50 = param_3;
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x00010007380c(uVar1,&puStack_70);
    _objc_release(uVar1);
    _objc_release(lStack_48);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dbf884; end: 106dbf8b7;  */

void FUN_106dbf884(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1fd00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106dbf8b8; end: 106dbf95f; -[SCComposerMediaCameraRollLibrary _getItemUriWithItemId:callback:] */

void FUN_106dbf8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c27dd80();
  puVar2 = PTR_PTR_1126c6618;
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0844e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe8f20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    (**(code **)(param_4 + 0x10))(param_4,puVar2,0);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106dbf960; end: 106dbf96b; -[SCComposerMediaCameraRollLibrary pushToValdiMarshaller:] */

void FUN_106dbf960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b89a740(param_3,param_1);
  func_0x00010b89a738();
  func_0x00010b89a730();
  func_0x00010b89a69c();
  func_0x00010b89a6d0();
  return;
}



/* Entry: 106dbf96c; end: 106dbf9cb; -[SCComposerMediaCameraRollLibrary .cxx_destruct] */

void FUN_106dbf96c(long param_1)

{
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



/* Entry: 106dbf9cc; end: 106dbf9df;  */

void FUN_106dbf9cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13b090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b3540,PTR_s_resolvedPromiseWithValue__11262c640,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106dbf9e0; end: 106dbfac3; -[SCComposerMediaCameraRollServiceProvider provide] */

void FUN_106dbf9e0(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126d2968;
  _objc_alloc(PTR_PTR_1126d2968);
  func_0x00010bffbac0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106dbfac4; end: 106dbfb03;  */

void FUN_106dbfac4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5b5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106dbfb04; end: 106dbfc5f; -[SCComposerMediaCameraRollServiceProvider _makeCameraRollProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dbfb04(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11275e564;
    _objc_loadWeakRetained(lVar6);
  }
  lVar7 = lVar6;
  func_0x00010c0c8940(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  puVar2 = PTR_PTR_1126d2970;
  _objc_alloc(PTR_PTR_1126d2970);
  lVar7 = (long)_DAT_11275e558;
  lVar6 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar6);
  lVar3 = lVar6;
  func_0x00010bfe7700();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar7);
  lVar4 = lVar7;
  func_0x00010c299fe0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11275e55c;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c900(puVar2,param_2,lVar3,lVar4,lVar5,lVar1);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106dbfc60; end: 106dbfc8f;  */

void FUN_106dbfc60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0fb7e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 106dbfc90; end: 106dbfcdf; -[SCComposerMediaCameraRollServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106dbfc90(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275e564);
  _objc_destroyWeak(param_1 + _DAT_11275e55c);
  _objc_destroyWeak(param_1 + _DAT_11275e558);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275e560);
  return;
}



/* Entry: 106dbfce0; end: 106dbfd57; -[SCComposerMediaLoadTask initWithRequest:] */

undefined1 * FUN_106dbfce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6ed8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 8) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106dbfd58; end: 106dbfddf; -[SCComposerMediaLoadTask cancel] */

void FUN_106dbfd58(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  *(undefined1 *)(param_1 + 0xc) = 1;
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (iVar1 != 0) {
    puVar3 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 106dbfde0; end: 106dbfe57; -[SCComposerMediaLoadTask setImageRequestId:] */

void FUN_106dbfde0(undefined *param_1,undefined8 param_2,undefined4 param_3)

{
  _objc_retain();
  _objc_sync_enter(param_1);
  if ((param_1[0xc] & 1) == 0) {
    *(undefined4 *)(param_1 + 8) = param_3;
    _objc_sync_exit(param_1);
  }
  else {
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    param_1 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e480();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106dbfe58; end: 106dbfe97; -[SCComposerMediaLoadTask cancelled] */

undefined1 FUN_106dbfe58(long param_1)

{
  undefined1 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106dbfe98; end: 106dbff4f; -[SCComposerMediaLoadTask notifyCompletionWithImage:error:] */

void FUN_106dbfe98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106dbff50;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106dbff50; end: 106dbffff;  */

void FUN_106dbff50(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  _objc_sync_enter(uVar3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf43fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(uVar3);
  _objc_release(uVar3);
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b27a8;
    func_0x00010bfe9800(PTR_PTR_1126b27a8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,puVar2,*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106dc0000; end: 106dc0007; -[SCComposerMediaLoadTask request] */

undefined8 FUN_106dc0000(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106dc0008; end: 106dc000f; -[SCComposerMediaLoadTask setRequest:] */

void FUN_106dc0008(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}


