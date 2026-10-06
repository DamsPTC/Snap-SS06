/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1058e6578; end: 1058e6803; -[SCObjcMusicNotificationPresenter submitFavoritesNotification:isFavorited:actionHandler:] */

void FUN_1058e6578(undefined *param_1,undefined8 param_2,undefined *param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bfa1200();
  _objc_release(uVar5);
  if ((int)uVar1 == 0) {
    if ((param_4 & 1) == 0) {
      func_0x000107e481a8();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107e48190();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000107e48220();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107e48208();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = param_3;
  func_0x00010c12a200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = param_3;
  if (puVar2 == (undefined *)0x0) {
    func_0x00010c0fd9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puVar4 = PTR_PTR_1126ae790;
    func_0x00010bfcd0e0(PTR_PTR_1126ae790,param_2,0x19,
                        &PTR____CFConstantStringClassReference_110e0aed8);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x1058e6d38;
    puStack_68 = &UNK_110841f80;
    puStack_60 = puVar3;
    puStack_58 = puVar2;
    _objc_retain(puVar3);
    _objc_retain(puVar2);
    func_0x00010c0f7fc0(puVar4,param_2,&puStack_80);
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_58);
    _objc_release(puStack_60);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c12a200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c0fd9a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010be19ee0(param_1,param_2,puVar3,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar2 = PTR_PTR_1126b0ae0;
  func_0x00010bf57f00(PTR_PTR_1126b0ae0,param_2,puVar4,uVar5,param_5,1,
                      &PTR____CFConstantStringClassReference_110e0aef8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar3 = PTR_PTR_1126bfd70;
  _objc_alloc(PTR_PTR_1126bfd70);
  func_0x00010c038a60();
  func_0x00010bdc7900(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(param_3);
  return;
}



/* Entry: 1058e6804; end: 1058e699f; -[SCObjcMusicNotificationPresenter _futureForResizedImageMedia:placeholderImage:] */

void FUN_1058e6804(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf93ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf93e80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar6 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  _objc_retain(param_4);
  func_0x00010c09ad20(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar7 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1058e69a0; end: 1058e6a2b;  */

void FUN_1058e69a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_2;
  if (param_2 == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
  }
  _objc_retain(lVar2);
  _objc_retain(param_2);
  lVar1 = lVar2;
  func_0x00010bf5c8c0(0x4044000000000000,0x4044000000000000,0x4014000000000000,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058e6a2c; end: 1058e6a63; -[SCObjcMusicNotificationPresenter cancelNotifications] */

void FUN_1058e6a2c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058e6a64; end: 1058e6aaf; -[SCObjcMusicNotificationPresenter _addNotificationToQueueAndPresentIfNeeded:] */

void FUN_1058e6a64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be85810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__queueNextNotification_11257efa0);
  return;
}



/* Entry: 1058e6ab0; end: 1058e6c33; -[SCObjcMusicNotificationPresenter _queueNextNotification] */

void FUN_1058e6ab0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar5 = *(long *)(param_1 + 0x10);
  if ((lVar5 != 0) && (*(long *)(param_1 + 0x28) == 0)) {
    _objc_retain(lVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar2);
    _objc_initWeak(auStack_58,param_1);
    lVar3 = lVar5;
    func_0x00010c0dbc40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1058e6c34;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    lVar4 = lVar3;
    func_0x00010c25ff20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar4;
    _objc_release(uVar2);
    _objc_release(lVar3);
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1058e6c84;
    puStack_98 = &UNK_110841f80;
    lStack_90 = param_1;
    lStack_88 = lVar5;
    _objc_retain(lVar5);
    uVar2 = 0;
    func_0x0001000c5568(0,0x11,0,&puStack_b0);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,uVar2);
    _objc_release(uVar2);
    _objc_release(lStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_release(lVar5);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 1058e6c34; end: 1058e6c83;  */

void FUN_1058e6c34(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x28));
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar1);
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x00010be85800(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058e6c84; end: 1058e6ce3;  */

void FUN_1058e6c84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0dc640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058e6ce4; end: 1058e6d8b; -[SCObjcMusicNotificationPresenter .cxx_destruct] */

void FUN_1058e6ce4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058e6d8c; end: 1058e6e57; -[SCMusicNotificationPresenterFactory initWithNotificationServices:mediaLoader:experiments:] */

undefined1 *
FUN_1058e6d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126eacb8;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058e6e58; end: 1058e6e87; -[SCMusicNotificationPresenterFactory newMusicNotificationPresenter] */

void FUN_1058e6e58(void)

{
  _objc_alloc(PTR_PTR_1126bfd78);
                    /* WARNING: Could not recover jumptable at 0x00010c030210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1058e6e88; end: 1058e6ec3; -[SCMusicNotificationPresenterFactory .cxx_destruct] */

void FUN_1058e6e88(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058e6ec4; end: 1058e6f67; -[SCObjcMusicSelectionLoader initWithMediaLoader:musicGrpcService:] */

undefined1 *
FUN_1058e6ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eacc0;
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



/* Entry: 1058e6f68; end: 1058e70db; -[SCObjcMusicSelectionLoader loadSelectionForTrackId:includeMusicStats:includeArtistLink:completionQueue:completion:] */

void FUN_1058e6f68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1058e70dc;
  puStack_88 = &UNK_1108be298;
  uStack_80 = param_6;
  uStack_78 = param_7;
  _objc_retain(param_6);
  _objc_retain(param_7);
  ppuVar2 = &puStack_a0;
  _objc_retainBlock();
  puVar3 = PTR_PTR_1126b2798;
  _objc_opt_new();
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1058e71f8;
  puStack_c0 = &UNK_1108be2c8;
  _objc_retain();
  puStack_b8 = puVar3;
  uStack_b0 = param_1;
  ppuStack_a8 = ppuVar2;
  _objc_retain(ppuVar2);
  ppuVar4 = &puStack_d8;
  _objc_retainBlock(ppuVar4);
  func_0x00010be20a00(param_1,param_2,param_3,param_4,param_5,ppuVar4);
  _objc_retain(puVar3);
  _objc_release(ppuVar4);
  _objc_release(ppuStack_a8);
  _objc_release(puStack_b8);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_80);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058e70dc; end: 1058e71e3;  */

void FUN_1058e70dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR___dispatch_main_q_11034be20;
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    puVar4 = *(undefined **)(param_1 + 0x20);
    puVar2 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      _objc_retain(PTR___dispatch_main_q_11034be20);
      lVar3 = *(long *)(param_1 + 0x28);
      puVar2 = puVar1;
    }
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1058e71e4;
    puStack_60 = &UNK_11084a9e8;
    _objc_retain(lVar3);
    lStack_48 = lVar3;
    _objc_retain(param_2);
    uStack_58 = param_2;
    _objc_retain(param_3);
    uStack_50 = param_3;
    func_0x00010007380c(puVar2,&puStack_78);
    if (puVar4 == (undefined *)0x0) {
      _objc_release(PTR___dispatch_main_q_11034be20);
    }
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(lStack_48);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1058e71e4; end: 1058e71f7;  */

void FUN_1058e71e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001058e71f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1058e71f8; end: 1058e7dc3;  */

void FUN_1058e71f8(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined **ppuVar13;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) == 0) {
    if (param_3 == 0) {
      uVar1 = param_2;
      func_0x00010bfd95c0();
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
      if ((uVar1 & 1) == 0) {
        lVar12 = *(long *)(param_1 + 0x30);
        ppuVar11 = &PTR____CFConstantStringClassReference_110e0af38;
        func_0x000108091430(&PTR____CFConstantStringClassReference_110e0af38);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar12 + 0x10))(lVar12,0,ppuVar11);
      }
      else {
        uVar1 = param_2;
        func_0x00010c0d3a40(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf939e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf4db80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        if (ppuVar11 == (undefined **)0x0) {
          lVar12 = *(long *)(param_1 + 0x30);
          ppuVar13 = &PTR____CFConstantStringClassReference_110e0af58;
          func_0x000108091430(&PTR____CFConstantStringClassReference_110e0af58);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar12 + 0x10))(lVar12,0,ppuVar13);
        }
        else {
          uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = param_2;
          func_0x00010c0d3a40();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010bf939e0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010bf92c80();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_2;
          func_0x00010c0d3a40();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010bf939e0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010bf92c60();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = 0x15;
          func_0x0001000819a8(0x15,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = *(undefined ***)(param_1 + 0x30);
          _objc_retain(ppuVar13);
          _objc_retain(param_2);
          uVar9 = *(undefined8 *)(param_1 + 0x28);
          _objc_opt_class(uVar9);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar4;
          func_0x00010c09ae80(uVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar3);
          _objc_release(uVar2);
          _objc_release(uVar1);
          _objc_release(uVar4);
          func_0x00010bef7460(*(undefined8 *)(param_1 + 0x20));
          _objc_release(uVar10);
          _objc_release(param_2);
        }
        _objc_release(ppuVar13);
      }
      _objc_release(ppuVar11);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,param_3);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1058e7dc4; end: 1058e7eff; -[SCObjcMusicSelectionLoader fetchAvailabilityForTrackId:completionQueue:completion:] */

void FUN_1058e7dc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1058e7f00;
  puStack_60 = &UNK_1108be2f8;
  uStack_58 = param_4;
  lStack_50 = param_1;
  uStack_48 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuVar1 = &puStack_78;
  _objc_retainBlock(ppuVar1);
  puVar2 = PTR_PTR_1126bfd88;
  _objc_opt_new(PTR_PTR_1126bfd88);
  func_0x00010c218f80();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puVar3 = puVar2;
  func_0x00010bf63640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  func_0x00010c27f2e0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dd5938,puVar3,0,
                      ppuVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 1058e7f00; end: 1058e80e3;  */

void FUN_1058e7f00(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR___dispatch_main_q_11034be20;
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 != 0) {
    if (param_3 == 0) {
      puVar2 = PTR_PTR_1126bfd80;
      _objc_opt_class();
      lStack_88 = 0;
      func_0x00010c0f40e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lStack_88;
      _objc_retain(lStack_88);
      puVar1 = PTR___dispatch_main_q_11034be20;
      puVar6 = *(undefined **)(param_1 + 0x20);
      puVar5 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        _objc_retain(PTR___dispatch_main_q_11034be20);
        puVar5 = puVar1;
      }
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_1058e8148;
      puStack_a8 = &UNK_11084a9e8;
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar3);
      lStack_98 = lVar4;
      puStack_a0 = puVar2;
      uStack_90 = uVar3;
      _objc_retain(lVar4);
      _objc_retain(puVar2);
      func_0x00010007380c(puVar5,&puStack_c0);
      if (puVar6 == (undefined *)0x0) {
        _objc_release(PTR___dispatch_main_q_11034be20);
      }
      _objc_release(lStack_98);
      _objc_release(puStack_a0);
      _objc_release(uStack_90);
      _objc_release(puVar2);
    }
    else {
      puVar5 = *(undefined **)(param_1 + 0x20);
      puVar2 = puVar5;
      if (puVar5 == (undefined *)0x0) {
        _objc_retain(PTR___dispatch_main_q_11034be20);
        lVar4 = *(long *)(param_1 + 0x30);
        puVar2 = puVar1;
      }
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_1058e80e4;
      puStack_68 = &UNK_11084aaa8;
      _objc_retain(lVar4);
      lStack_58 = lVar4;
      _objc_retain(param_3);
      lStack_60 = param_3;
      func_0x00010007380c(puVar2,&puStack_80);
      if (puVar5 == (undefined *)0x0) {
        _objc_release(PTR___dispatch_main_q_11034be20);
      }
      _objc_release(lStack_60);
      lVar4 = lStack_58;
    }
    _objc_release(lVar4);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1058e80e4; end: 1058e8147;  */

void FUN_1058e80e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0cb140(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108091430();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,0,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1058e8148; end: 1058e818b;  */

void FUN_1058e8148(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    func_0x00010c06cd80();
  }
                    /* WARNING: Could not recover jumptable at 0x0001058e8188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,lVar1,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1058e818c; end: 1058e824f; -[SCObjcMusicSelectionLoader fetchContentRestrictionsForTrackId:completionQueue:completion:] */

void FUN_1058e818c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1058e8250;
  puStack_50 = &UNK_1108be2c8;
  uStack_48 = param_4;
  uStack_40 = param_1;
  uStack_38 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be20a00(param_1,param_2,param_3,0,0,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 1058e8250; end: 1058e835b;  */

void FUN_1058e8250(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR___dispatch_main_q_11034be20;
  if (*(long *)(param_1 + 0x30) != 0) {
    puVar4 = *(undefined **)(param_1 + 0x20);
    puVar3 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puVar3 = puVar1;
    }
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1058e835c;
    puStack_68 = &UNK_1108465d0;
    _objc_retain(param_3);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = param_3;
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = param_2;
    _objc_retain(uVar2);
    uStack_48 = uVar2;
    func_0x00010007380c(puVar3,&puStack_80);
    if (puVar4 == (undefined *)0x0) {
      _objc_release(PTR___dispatch_main_q_11034be20);
    }
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_60);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1058e835c; end: 1058e83ff;  */

void FUN_1058e835c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    func_0x00010bfd95c0(*(undefined8 *)(param_1 + 0x30));
  }
  uVar2 = *(ulong *)(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bfd95c0();
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0d3a40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4d360();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,uVar4,*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001058e83fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1058e8400; end: 1058e854b; -[SCObjcMusicSelectionLoader fetchTrackWithIsrc:completionQueue:completion:] */

void FUN_1058e8400(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1058e854c;
  puStack_60 = &UNK_1108be2f8;
  uStack_58 = param_4;
  lStack_50 = param_1;
  uStack_48 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  ppuVar1 = &puStack_78;
  _objc_retainBlock(ppuVar1);
  puVar2 = PTR_PTR_1126bfd98;
  _objc_opt_new(PTR_PTR_1126bfd98);
  func_0x00010c1b5cc0();
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puVar3 = puVar2;
  func_0x00010bf63640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  func_0x00010c27f2e0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e0af18,puVar3,0,
                      ppuVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 1058e854c; end: 1058e8733;  */

void FUN_1058e854c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR___dispatch_main_q_11034be20;
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 != 0) {
    if (param_3 == 0) {
      puVar3 = PTR_PTR_1126bfd90;
      _objc_opt_class();
      lStack_88 = 0;
      func_0x00010c0f40e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lStack_88;
      _objc_retain(lStack_88);
      puVar2 = PTR___dispatch_main_q_11034be20;
      puVar6 = *(undefined **)(param_1 + 0x20);
      puVar5 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        _objc_retain(PTR___dispatch_main_q_11034be20);
        puVar5 = puVar2;
      }
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      uStack_b8 = 0x1058e8798;
      puStack_b0 = &UNK_1108465d0;
      uStack_a0 = *(undefined8 *)(param_1 + 0x28);
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      lStack_a8 = lVar4;
      puStack_98 = puVar3;
      _objc_retain(uVar1);
      uStack_90 = uVar1;
      _objc_retain(puVar3);
      _objc_retain(lVar4);
      func_0x00010007380c(puVar5,&puStack_c8);
      if (puVar6 == (undefined *)0x0) {
        _objc_release(PTR___dispatch_main_q_11034be20);
      }
      _objc_release(uStack_90);
      _objc_release(puStack_98);
      _objc_release(lStack_a8);
      _objc_release(puVar3);
    }
    else {
      puVar5 = *(undefined **)(param_1 + 0x20);
      puVar3 = puVar5;
      if (puVar5 == (undefined *)0x0) {
        _objc_retain(PTR___dispatch_main_q_11034be20);
        lVar4 = *(long *)(param_1 + 0x30);
        puVar3 = puVar2;
      }
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_1058e8734;
      puStack_68 = &UNK_11084aaa8;
      _objc_retain(lVar4);
      lStack_58 = lVar4;
      _objc_retain(param_3);
      lStack_60 = param_3;
      func_0x00010007380c(puVar3,&puStack_80);
      if (puVar5 == (undefined *)0x0) {
        _objc_release(PTR___dispatch_main_q_11034be20);
      }
      _objc_release(lStack_60);
      lVar4 = lStack_58;
    }
    _objc_release(lVar4);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1058e8734; end: 1058e8823;  */

void FUN_1058e8734(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0cb140(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108091430();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,0,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1058e8824; end: 1058e8a8f; -[SCObjcMusicSelectionLoader _getMusicTrackWithId:includeMusicStats:includeArtistLink:completion:] */

void FUN_1058e8824(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
                  long param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  ppuVar1 = &puStack_a0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1058e8a90;
  puStack_88 = &UNK_1108be328;
  _objc_retain(param_6);
  lStack_80 = param_1;
  lStack_78 = param_6;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126bfda8;
  _objc_opt_new();
  func_0x00010c218f80();
  puVar3 = PTR_PTR_1126bfdb0;
  _objc_opt_new();
  puVar4 = PTR_PTR_1126bfdb8;
  _objc_opt_new(PTR_PTR_1126bfdb8);
  func_0x00010c1ca400(puVar3);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d3c80();
  _objc_release(puVar4);
  if (param_4 != 0) {
    puVar4 = PTR_PTR_1126bfdb0;
    _objc_opt_new(PTR_PTR_1126bfdb0);
    puVar6 = PTR_PTR_1126bfdc0;
    _objc_opt_new(PTR_PTR_1126bfdc0);
    func_0x00010c20f680(puVar4);
    _objc_release(puVar6);
    func_0x00010befa120(puVar5);
    _objc_release(puVar4);
  }
  if (param_5 != 0) {
    puVar4 = PTR_PTR_1126bfdb0;
    _objc_opt_new(PTR_PTR_1126bfdb0);
    puVar6 = PTR_PTR_1126bfdc8;
    _objc_opt_new(PTR_PTR_1126bfdc8);
    func_0x00010c16a4e0(puVar4);
    _objc_release(puVar6);
    func_0x00010befa120(puVar5);
    _objc_release(puVar4);
  }
  func_0x00010c1ebec0(puVar2);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = puVar2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  ppuVar9 = &PTR____CFConstantStringClassReference_110dd5838;
  func_0x00010c27f2e0(uVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(0);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(lStack_78);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    _objc_retain(ppuVar9);
    lVar11 = *(long *)(param_6 + 0x28);
    if (lVar11 != 0) {
      if (ppuVar9 == (undefined **)0x0) {
        ppuVar7 = (undefined **)PTR_PTR_1126bfda0;
        _objc_opt_class();
        func_0x00010c0f40e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(0);
        func_0x00010bfd95c0(ppuVar7);
        lVar11 = *(long *)(param_6 + 0x28);
        ppuVar8 = ppuVar7;
        func_0x00010bfd95c0();
        ppuVar1 = ppuVar7;
        if ((int)ppuVar8 == 0) {
          ppuVar1 = (undefined **)0x0;
        }
        (**(code **)(lVar11 + 0x10))(lVar11,ppuVar1,0);
        _objc_release(0);
      }
      else {
        ppuVar7 = ppuVar9;
        func_0x00010c0cb140(ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = ppuVar7;
        func_0x000108091430();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar11 + 0x10))(lVar11,0,ppuVar1);
        _objc_release(ppuVar1);
      }
      _objc_release(ppuVar7);
    }
    _objc_release(ppuVar9);
    _objc_release(param_2);
    return;
  }
  return;
}



/* Entry: 1058e8a90; end: 1058e8bb3;  */

void FUN_1058e8a90(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    if (param_3 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126bfda0;
      _objc_opt_class();
      func_0x00010c0f40e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      func_0x00010bfd95c0(puVar2);
      lVar4 = *(long *)(param_1 + 0x28);
      puVar3 = puVar2;
      func_0x00010bfd95c0();
      puVar1 = puVar2;
      if ((int)puVar3 == 0) {
        puVar1 = (undefined *)0x0;
      }
      (**(code **)(lVar4 + 0x10))(lVar4,puVar1,0);
      _objc_release(0);
    }
    else {
      puVar2 = param_3;
      func_0x00010c0cb140(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x000108091430();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,0,puVar1);
      _objc_release(puVar1);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1058e8bb4; end: 1058e8be3; -[SCObjcMusicSelectionLoader .cxx_destruct] */

void FUN_1058e8bb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058e8be4; end: 1058e8d07; -[SCMusicSelectionRetryHelper retryWithTrackId:startOffsetSeconds:sourcePageType:completion:] */

void FUN_1058e8be4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126ae960;
  uVar3 = *(undefined8 *)(param_2 + 8);
  puVar1 = PTR_PTR_1126bfdd0;
  func_0x00010c2781c0(PTR_PTR_1126bfdd0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d2960(puVar2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcb620(uVar3,param_3,param_4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1058e8d08;
  puStack_78 = &UNK_1108be358;
  uStack_70 = param_6;
  uStack_68 = param_5;
  uStack_60 = param_4;
  uStack_58 = param_1;
  _objc_retain(param_6);
  func_0x00010c297260(uVar3,param_3,&puStack_90,0);
  _objc_release(uStack_70);
  _objc_release(param_6);
  _objc_release(uVar3);
  return;
}



/* Entry: 1058e8d08; end: 1058e907f;  */

void FUN_1058e8d08(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined1 auStack_88 [24];
  
  _objc_retain(param_2);
  lVar15 = param_2;
  func_0x00010bf0ef80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar15;
  func_0x00010c08fa60();
  _objc_release(lVar15);
  if (lVar1 == 0) {
    lVar15 = *(long *)(param_1 + 0x20);
    if (lVar15 != 0) {
      (**(code **)(lVar15 + 0x10))(lVar15,0);
    }
  }
  else {
    puVar2 = PTR_PTR_1126b3028;
    _objc_alloc();
    func_0x00010c04ab80();
    lVar15 = param_2;
    func_0x00010c277900();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar15;
    func_0x00010bf0f2e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c079d80();
    puVar16 = (undefined *)0x0;
    if ((int)lVar3 != 0) {
      puVar16 = PTR_PTR_1126b3020;
      _objc_alloc();
      puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
      lVar3 = param_2;
      func_0x00010c277900();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf0f2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_2;
      func_0x00010c277900();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf0f2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_2;
      func_0x00010c277900(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010bf0f2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c059fe0(puVar16);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(puVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
    _objc_release(lVar15);
    puVar6 = PTR_PTR_1126b3030;
    _objc_alloc(PTR_PTR_1126b3030);
    lVar15 = param_2;
    func_0x00010bf0ef80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf68d00(PTR_PTR_1126bfd68);
    _CMTimeMakeWithSeconds(auStack_88,uVar17);
    lVar1 = param_2;
    func_0x00010c277900(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf93480();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c277900();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf9e560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054ba0(puVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar15);
    lVar15 = *(long *)(param_1 + 0x20);
    if (lVar15 != 0) {
      (**(code **)(lVar15 + 0x10))(lVar15,puVar6);
    }
    _objc_release(puVar6);
    _objc_release(puVar16);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1058e9080; end: 1058e90b7; -[SCMusicSelectionRetryHelper .cxx_destruct] */

void FUN_1058e9080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058e90b8; end: 1058e916b;  */

void FUN_1058e90b8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c08fa60();
  ppuVar1 = (undefined **)0x0;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1058e916c; end: 1058e917f;  */

undefined ** FUN_1058e916c(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 1058e9180; end: 1058e91fb;  */

undefined * FUN_1058e9180(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c0f30 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e0afd8,
                        &UNK_10ddc0320,&UNK_10ddc0358,4,FUN_1058e91fc,0);
    do {
      if (puRam00000001136c0f30 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c0f30;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c0f30,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c0f30 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c0f30;
}



/* Entry: 1058e91fc; end: 1058e9207;  */

bool FUN_1058e91fc(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1058e9208; end: 1058e9283;  */

undefined * FUN_1058e9208(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c0f38 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e0aff8,
                        &UNK_10ddc0368,&UNK_10ddc03b0,5,FUN_1058e9284,0);
    do {
      if (puRam00000001136c0f38 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c0f38;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c0f38,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c0f38 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c0f38;
}



/* Entry: 1058e9284; end: 1058e928f;  */

bool FUN_1058e9284(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1058e9290; end: 1058e930b;  */

undefined * FUN_1058e9290(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c0f40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e0b018,
                        &UNK_10ddc03c4,&UNK_10ddc03d8,3,FUN_1058e930c,0);
    do {
      if (puRam00000001136c0f40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c0f40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c0f40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c0f40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c0f40;
}



/* Entry: 1058e930c; end: 1058e9317;  */

bool FUN_1058e930c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1058e9318; end: 1058e937f; +[SCMusicMusicTrackAvailability descriptor] */

void FUN_1058e9318(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0f48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a76c90,
                        &PTR____CFConstantStringClassReference_110e0b038,&PTR_DAT_113108e00,
                        &PTR_DAT_113109838,3,0x18,0x1c);
    puRam00000001136c0f48 = puVar1;
  }
  return;
}



/* Entry: 1058e9380; end: 1058e93e7; +[SCMusicSpotlightSoundDetails descriptor] */

void FUN_1058e9380(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0f50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a76ce0,
                        &PTR____CFConstantStringClassReference_110e0b058,&PTR_DAT_113108e00,
                        &PTR_s_snapId_1131092f8,2,0x18,0x1c);
    puRam00000001136c0f50 = puVar1;
  }
  return;
}



/* Entry: 1058e93e8; end: 1058e944f; +[SCMusicCustomSoundDetails descriptor] */

void FUN_1058e93e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0f58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a76d30,
                        &PTR____CFConstantStringClassReference_110e0b078,&PTR_DAT_113108e00,
                        &PTR_s_creatorUserId_113108e18,1,0x10,0x1c);
    puRam00000001136c0f58 = puVar1;
  }
  return;
}



/* Entry: 1058e9450; end: 1058e94b7; +[SCMusicGetMusicTrackRequest descriptor] */

void FUN_1058e9450(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0f60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a76d80,
                        &PTR____CFConstantStringClassReference_110e0b098,&PTR_DAT_113108e00,
                        &PTR_s_trackId_113109c58,4,0x28,0x1c);
    puRam00000001136c0f60 = puVar1;
  }
  return;
}



/* Entry: 1058e94b8; end: 1058e9557; +[SCMusicGetMusicTrackRequest_RequestOption descriptor] */

undefined * FUN_1058e94b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0f68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a76dd0,
                        &PTR____CFConstantStringClassReference_110e0b0b8,&PTR_DAT_113108e00,
                        &PTR_DAT_11310a738,0xd,0x70,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112a76d80);
    puRam00000001136c0f68 = puVar1;
  }
  return puRam00000001136c0f68;
}



/* Entry: 1058e9558; end: 1058e95d3; +[SCMusicGetMusicTrackRequest_RequestOption_MusicTrack descriptor] */

undefined * FUN_1058e9558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0f70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a76e20,
                        &PTR____CFConstantStringClassReference_110e0b0d8,&PTR_DAT_113108e00,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c0f70 = puVar1;
  }
  return puRam00000001136c0f70;
}



/* Entry: 1058e95d4; end: 1058e964f; +[SCMusicGetMusicTrackRequest_RequestOption_MusicArtist descriptor] */

undefined * FUN_1058e95d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0f78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a76e70,
                        &PTR____CFConstantStringClassReference_110e0b0f8,&PTR_DAT_113108e00,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c0f78 = puVar1;
  }
  return puRam00000001136c0f78;
}



/* Entry: 1058e9650; end: 1058e96cb; +[SCMusicGetMusicTrackRequest_RequestOption_Availability descriptor] */

undefined * FUN_1058e9650(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0f80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a76ec0,
                        &PTR____CFConstantStringClassReference_110e0b118,&PTR_DAT_113108e00,
                        &PTR_DAT_113108e38,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c0f80 = puVar1;
  }
  return puRam00000001136c0f80;
}



/* Entry: 1058e96cc; end: 1058e9747; +[SCMusicGetMusicTrackRequest_RequestOption_MusicBeatSync descriptor] */

undefined * FUN_1058e96cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0f88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a76f10,
                        &PTR____CFConstantStringClassReference_110e0b138,&PTR_DAT_113108e00,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c0f88 = puVar1;
  }
  return puRam00000001136c0f88;
}



/* Entry: 1058e9748; end: 1058e97c3; +[SCMusicGetMusicTrackRequest_RequestOption_SnapViewingContext descriptor] */

undefined * FUN_1058e9748(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0f90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a76f60,
                        &PTR____CFConstantStringClassReference_110e0b158,&PTR_DAT_113108e00,
                        &PTR_DAT_113108e58,1,8,0x1c);
    func_0x00010c228780();
    puRam00000001136c0f90 = puVar1;
  }
  return puRam00000001136c0f90;
}



/* Entry: 1058e97c4; end: 1058e983f; +[SCMusicGetMusicTrackRequest_RequestOption_SpotlightDetails descriptor] */

undefined * FUN_1058e97c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0f98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a76fb0,
                        &PTR____CFConstantStringClassReference_110e0b178,&PTR_DAT_113108e00,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c0f98 = puVar1;
  }
  return puRam00000001136c0f98;
}



/* Entry: 1058e9840; end: 1058e98bb; +[SCMusicGetMusicTrackRequest_RequestOption_ModerationInfo descriptor] */

undefined * FUN_1058e9840(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0fa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77000,
                        &PTR____CFConstantStringClassReference_110e0b198,&PTR_DAT_113108e00,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c0fa0 = puVar1;
  }
  return puRam00000001136c0fa0;
}



/* Entry: 1058e98bc; end: 1058e9937; +[SCMusicGetMusicTrackRequest_RequestOption_CustomSoundDetails descriptor] */

undefined * FUN_1058e98bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0fa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77050,
                        &PTR____CFConstantStringClassReference_110e0b078,&PTR_DAT_113108e00,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c0fa8 = puVar1;
  }
  return puRam00000001136c0fa8;
}



/* Entry: 1058e9938; end: 1058e99b3; +[SCMusicGetMusicTrackRequest_RequestOption_ReturnPrivateSounds descriptor] */

undefined * FUN_1058e9938(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0fb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a770a0,
                        &PTR____CFConstantStringClassReference_110e0b1b8,&PTR_DAT_113108e00,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c0fb0 = puVar1;
  }
  return puRam00000001136c0fb0;
}



/* Entry: 1058e99b4; end: 1058e9a2f; +[SCMusicGetMusicTrackRequest_RequestOption_ExcludeSubtextInfo descriptor] */

undefined * FUN_1058e99b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0fb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a770f0,
                        &PTR____CFConstantStringClassReference_110e0b1d8,&PTR_DAT_113108e00,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c0fb8 = puVar1;
  }
  return puRam00000001136c0fb8;
}



/* Entry: 1058e9a30; end: 1058e9aab; +[SCMusicGetMusicTrackRequest_RequestOption_TrendingChartEntry descriptor] */

undefined * FUN_1058e9a30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0fc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77140,
                        &PTR____CFConstantStringClassReference_110e0b1f8,&PTR_DAT_113108e00,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c0fc0 = puVar1;
  }
  return puRam00000001136c0fc0;
}



/* Entry: 1058e9aac; end: 1058e9b27; +[SCMusicGetMusicTrackRequest_RequestOption_SubtextInfo descriptor] */

undefined * FUN_1058e9aac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0fc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77190,
                        &PTR____CFConstantStringClassReference_110e0b218,&PTR_DAT_113108e00,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c0fc8 = puVar1;
  }
  return puRam00000001136c0fc8;
}



/* Entry: 1058e9b28; end: 1058e9ba3; +[SCMusicGetMusicTrackRequest_RequestOption_IncludeBlockedTrackMedia descriptor] */

undefined * FUN_1058e9b28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0fd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a771e0,
                        &PTR____CFConstantStringClassReference_110e0b238,&PTR_DAT_113108e00,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c0fd0 = puVar1;
  }
  return puRam00000001136c0fd0;
}



/* Entry: 1058e9ba4; end: 1058e9c0f; +[SCMusicGetMusicTrackResponse descriptor] */

void FUN_1058e9ba4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0fd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77230,
                        &PTR____CFConstantStringClassReference_110e0b258,&PTR_DAT_113108e00,
                        &PTR_DAT_11310a278,8,0x48,0x1c);
    puRam00000001136c0fd8 = puVar1;
  }
  return;
}



/* Entry: 1058e9c10; end: 1058e9c7b; +[SCMusicGetMusicTracksRequest descriptor] */

void FUN_1058e9c10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0fe0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77280,
                        &PTR____CFConstantStringClassReference_110e0b278,&PTR_DAT_113108e00,
                        &PTR_DAT_113109fd8,5,0x28,0x1c);
    puRam00000001136c0fe0 = puVar1;
  }
  return;
}



/* Entry: 1058e9c7c; end: 1058e9ce3; +[SCMusicFindMusicTrackRequest descriptor] */

void FUN_1058e9c7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0fe8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a772d0,
                        &PTR____CFConstantStringClassReference_110e0b298,&PTR_DAT_113108e00,
                        &PTR_s_isrc_113108e78,1,0x10,0x1c);
    puRam00000001136c0fe8 = puVar1;
  }
  return;
}



/* Entry: 1058e9ce4; end: 1058e9d4b; +[SCMusicFindMusicTrackResponse descriptor] */

void FUN_1058e9ce4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0ff0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77320,
                        &PTR____CFConstantStringClassReference_110e0b2b8,&PTR_DAT_113108e00,
                        &PTR_DAT_113108e98,1,0x10,0x1c);
    puRam00000001136c0ff0 = puVar1;
  }
  return;
}



/* Entry: 1058e9d4c; end: 1058e9db3; +[SCMusicGetMusicTracksResponse descriptor] */

void FUN_1058e9d4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0ff8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77370,
                        &PTR____CFConstantStringClassReference_110e0b2d8,&PTR_DAT_113108e00,
                        &PTR_DAT_113108eb8,1,0x10,0x1c);
    puRam00000001136c0ff8 = puVar1;
  }
  return;
}



/* Entry: 1058e9db4; end: 1058e9e1b; +[SCMusicPlaylist descriptor] */

void FUN_1058e9db4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1000 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a773c0,
                        &PTR____CFConstantStringClassReference_110e0b2f8,&PTR_DAT_113108e00,
                        &PTR_DAT_113109cd8,4,0x28,0x1c);
    puRam00000001136c1000 = puVar1;
  }
  return;
}



/* Entry: 1058e9e1c; end: 1058e9e83; +[SCMusicGetPlaylistsRequest descriptor] */

void FUN_1058e9e1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1008 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77410,
                        &PTR____CFConstantStringClassReference_110e0b318,&PTR_DAT_113108e00,0,0,4,
                        0x1c);
    puRam00000001136c1008 = puVar1;
  }
  return;
}



/* Entry: 1058e9e84; end: 1058e9eeb; +[SCMusicGetPlaylistsResponse descriptor] */

void FUN_1058e9e84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1010 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77460,
                        &PTR____CFConstantStringClassReference_110e0b338,&PTR_DAT_113108e00,
                        &PTR_DAT_113108ed8,1,0x10,0x1c);
    puRam00000001136c1010 = puVar1;
  }
  return;
}



/* Entry: 1058e9eec; end: 1058e9f53; +[SCMusicGetPlaylistRequest descriptor] */

void FUN_1058e9eec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1018 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a774b0,
                        &PTR____CFConstantStringClassReference_110e0b358,&PTR_DAT_113108e00,
                        &PTR_DAT_113108ef8,1,0x10,0x1c);
    puRam00000001136c1018 = puVar1;
  }
  return;
}



/* Entry: 1058e9f54; end: 1058e9fbb; +[SCMusicGetPlaylistResponse descriptor] */

void FUN_1058e9f54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1020 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77500,
                        &PTR____CFConstantStringClassReference_110e0b378,&PTR_DAT_113108e00,
                        &PTR_DAT_113108f18,1,0x10,0x1c);
    puRam00000001136c1020 = puVar1;
  }
  return;
}



/* Entry: 1058e9fbc; end: 1058ea023; +[SCMusicGetFeaturedPlaylistRequest descriptor] */

void FUN_1058e9fbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1028 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77550,
                        &PTR____CFConstantStringClassReference_110e0b398,&PTR_DAT_113108e00,
                        &PTR_DAT_113108f38,1,4,0x1c);
    puRam00000001136c1028 = puVar1;
  }
  return;
}



/* Entry: 1058ea024; end: 1058ea08b; +[SCMusicGetFeaturedPlaylistResponse descriptor] */

void FUN_1058ea024(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1030 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a775a0,
                        &PTR____CFConstantStringClassReference_110e0b3b8,&PTR_DAT_113108e00,
                        &PTR_DAT_113108f58,1,0x10,0x1c);
    puRam00000001136c1030 = puVar1;
  }
  return;
}



/* Entry: 1058ea08c; end: 1058ea0f7; +[SCMusicGetTrendingPlaylistRequest descriptor] */

void FUN_1058ea08c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1038 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a775f0,
                        &PTR____CFConstantStringClassReference_110e0b3d8,&PTR_DAT_113108e00,
                        &PTR_DAT_11310a078,5,0x20,0x1c);
    puRam00000001136c1038 = puVar1;
  }
  return;
}



/* Entry: 1058ea0f8; end: 1058ea15f; +[SCMusicGetTrendingPlaylistResponse descriptor] */

void FUN_1058ea0f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1040 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77640,
                        &PTR____CFConstantStringClassReference_110e0b3f8,&PTR_DAT_113108e00,
                        &PTR_DAT_113108f78,1,0x10,0x1c);
    puRam00000001136c1040 = puVar1;
  }
  return;
}



/* Entry: 1058ea160; end: 1058ea1c7; +[SCMusicGetPlaylistAndPageRequest descriptor] */

void FUN_1058ea160(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1048 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77690,
                        &PTR____CFConstantStringClassReference_110e0b418,&PTR_DAT_113108e00,
                        &PTR_DAT_113108f98,1,0x10,0x1c);
    puRam00000001136c1048 = puVar1;
  }
  return;
}



/* Entry: 1058ea1c8; end: 1058ea22f; +[SCMusicGetPlaylistAndPageResponse descriptor] */

void FUN_1058ea1c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1050 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a776e0,
                        &PTR____CFConstantStringClassReference_110e0b438,&PTR_DAT_113108e00,
                        &PTR_s_page_113109338,2,0x18,0x1c);
    puRam00000001136c1050 = puVar1;
  }
  return;
}



/* Entry: 1058ea230; end: 1058ea297; +[SCMusicMusicPickerLayoutRequestContext descriptor] */

void FUN_1058ea230(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1058 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77730,
                        &PTR____CFConstantStringClassReference_110e0b458,&PTR_DAT_113108e00,
                        &PTR_s_lensId_113109898,3,0x18,0x1c);
    puRam00000001136c1058 = puVar1;
  }
  return;
}



/* Entry: 1058ea298; end: 1058ea2ff; +[SCMusicGetPickerLayoutRequest descriptor] */

void FUN_1058ea298(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1060 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77780,
                        &PTR____CFConstantStringClassReference_110e0b478,&PTR_DAT_113108e00,
                        &PTR_DAT_1131098f8,3,0x10,0x1c);
    puRam00000001136c1060 = puVar1;
  }
  return;
}



/* Entry: 1058ea300; end: 1058ea367; +[SCMusicGetPickerLayoutResponse descriptor] */

void FUN_1058ea300(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1068 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a777d0,
                        &PTR____CFConstantStringClassReference_110e0b498,&PTR_DAT_113108e00,
                        &PTR_s_layout_113109958,3,0x20,0x1c);
    puRam00000001136c1068 = puVar1;
  }
  return;
}



/* Entry: 1058ea368; end: 1058ea3cf; +[SCMusicGetPickerLayoutPageRequest descriptor] */

void FUN_1058ea368(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1070 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77820,
                        &PTR____CFConstantStringClassReference_110e0b4b8,&PTR_DAT_113108e00,
                        &PTR_DAT_113109378,2,0x10,0x1c);
    puRam00000001136c1070 = puVar1;
  }
  return;
}



/* Entry: 1058ea3d0; end: 1058ea437; +[SCMusicGetPickerLayoutPageResponse descriptor] */

void FUN_1058ea3d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1078 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77870,
                        &PTR____CFConstantStringClassReference_110e0b4d8,&PTR_DAT_113108e00,
                        &PTR_s_page_1131093b8,2,0x18,0x1c);
    puRam00000001136c1078 = puVar1;
  }
  return;
}



/* Entry: 1058ea438; end: 1058ea49f; +[SCMusicGetMyCustomSoundsPlaylistRequest descriptor] */

void FUN_1058ea438(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1080 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a778c0,
                        &PTR____CFConstantStringClassReference_110e0b4f8,&PTR_DAT_113108e00,0,0,4,
                        0x1c);
    puRam00000001136c1080 = puVar1;
  }
  return;
}



/* Entry: 1058ea4a0; end: 1058ea507; +[SCMusicGetMyCustomSoundsPlaylistResponse descriptor] */

void FUN_1058ea4a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1088 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77910,
                        &PTR____CFConstantStringClassReference_110e0b518,&PTR_DAT_113108e00,
                        &PTR_DAT_113108fb8,1,0x10,0x1c);
    puRam00000001136c1088 = puVar1;
  }
  return;
}



/* Entry: 1058ea508; end: 1058ea56f; +[SCMusicCheckIsAvailableRequest descriptor] */

void FUN_1058ea508(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1090 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77960,
                        &PTR____CFConstantStringClassReference_110e0b538,&PTR_DAT_113108e00,
                        &PTR_s_trackId_113108fd8,1,0x10,0x1c);
    puRam00000001136c1090 = puVar1;
  }
  return;
}



/* Entry: 1058ea570; end: 1058ea5d7; +[SCMusicCheckIsAvailableResponse descriptor] */

void FUN_1058ea570(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1098 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a779b0,
                        &PTR____CFConstantStringClassReference_110e0b558,&PTR_DAT_113108e00,
                        &PTR_DAT_113108ff8,1,4,0x1c);
    puRam00000001136c1098 = puVar1;
  }
  return;
}



/* Entry: 1058ea5d8; end: 1058ea63f; +[SCMusicCreateCustomSoundRequest descriptor] */

void FUN_1058ea5d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c10a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77a00,
                        &PTR____CFConstantStringClassReference_110e0b578,&PTR_DAT_113108e00,
                        &PTR_s_title_113109d58,4,0x20,0x1c);
    puRam00000001136c10a0 = puVar1;
  }
  return;
}



/* Entry: 1058ea640; end: 1058ea6a7; +[SCMusicCreateCustomSoundResponse descriptor] */

void FUN_1058ea640(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c10a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77a50,
                        &PTR____CFConstantStringClassReference_110e0b598,&PTR_DAT_113108e00,
                        &PTR_DAT_1131099b8,3,0x18,0x1c);
    puRam00000001136c10a8 = puVar1;
  }
  return;
}



/* Entry: 1058ea6a8; end: 1058ea713; +[SCMusicUpdateCustomSoundRequest descriptor] */

void FUN_1058ea6a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c10b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77aa0,
                        &PTR____CFConstantStringClassReference_110e0b5b8,&PTR_DAT_113108e00,
                        &PTR_s_trackId_113109dd8,4,0x20,0x1c);
    puRam00000001136c10b0 = puVar1;
  }
  return;
}



/* Entry: 1058ea714; end: 1058ea77b; +[SCMusicUpdateCustomSoundResponse descriptor] */

void FUN_1058ea714(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c10b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77af0,
                        &PTR____CFConstantStringClassReference_110e0b5d8,&PTR_DAT_113108e00,
                        &PTR_DAT_113109a18,3,0x18,0x1c);
    puRam00000001136c10b8 = puVar1;
  }
  return;
}



/* Entry: 1058ea77c; end: 1058ea7e3; +[SCMusicDeleteCustomSoundRequest descriptor] */

void FUN_1058ea77c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c10c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77b40,
                        &PTR____CFConstantStringClassReference_110e0b5f8,&PTR_DAT_113108e00,
                        &PTR_s_trackId_113109018,1,0x10,0x1c);
    puRam00000001136c10c0 = puVar1;
  }
  return;
}



/* Entry: 1058ea7e4; end: 1058ea84b; +[SCMusicDeleteCustomSoundResponse descriptor] */

void FUN_1058ea7e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c10c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77b90,
                        &PTR____CFConstantStringClassReference_110e0b618,&PTR_DAT_113108e00,
                        &PTR_s_error_113109038,1,0x10,0x1c);
    puRam00000001136c10c8 = puVar1;
  }
  return;
}



/* Entry: 1058ea84c; end: 1058ea8b3; +[SCMusicUpdateOriginalSoundRequest descriptor] */

void FUN_1058ea84c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c10d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77be0,
                        &PTR____CFConstantStringClassReference_110e0b638,&PTR_DAT_113108e00,
                        &PTR_s_trackId_1131093f8,2,0x18,0x1c);
    puRam00000001136c10d0 = puVar1;
  }
  return;
}



/* Entry: 1058ea8b4; end: 1058ea91b; +[SCMusicGetArtistPageRequest descriptor] */

void FUN_1058ea8b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c10d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77c30,
                        &PTR____CFConstantStringClassReference_110e0b658,&PTR_DAT_113108e00,
                        &PTR_DAT_113109058,1,0x10,0x1c);
    puRam00000001136c10d8 = puVar1;
  }
  return;
}



/* Entry: 1058ea91c; end: 1058ea983; +[SCMusicGetArtistPageResponse descriptor] */

void FUN_1058ea91c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c10e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77c80,
                        &PTR____CFConstantStringClassReference_110e0b678,&PTR_DAT_113108e00,
                        &PTR_s_page_113109078,1,0x10,0x1c);
    puRam00000001136c10e0 = puVar1;
  }
  return;
}



/* Entry: 1058ea984; end: 1058ea9ef; +[SCMusicGetArtistsWithAvailabilityRequest descriptor] */

void FUN_1058ea984(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c10e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77cd0,
                        &PTR____CFConstantStringClassReference_110e0b698,&PTR_DAT_113108e00,
                        &PTR_DAT_113109e58,4,0x28,0x1c);
    puRam00000001136c10e8 = puVar1;
  }
  return;
}



/* Entry: 1058ea9f0; end: 1058eaa57; +[SCMusicGetArtistsWithAvailabilityResponse descriptor] */

void FUN_1058ea9f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c10f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77d20,
                        &PTR____CFConstantStringClassReference_110e0b6b8,&PTR_DAT_113108e00,
                        &PTR_DAT_113109098,1,0x10,0x1c);
    puRam00000001136c10f0 = puVar1;
  }
  return;
}



/* Entry: 1058eaa58; end: 1058eaabf; +[SCMusicGetArtistAndPageRequest descriptor] */

void FUN_1058eaa58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c10f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77d70,
                        &PTR____CFConstantStringClassReference_110e0b6d8,&PTR_DAT_113108e00,
                        &PTR_DAT_1131090b8,1,0x10,0x1c);
    puRam00000001136c10f8 = puVar1;
  }
  return;
}



/* Entry: 1058eaac0; end: 1058eab27; +[SCMusicGetArtistAndPageResponse descriptor] */

void FUN_1058eaac0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1100 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77dc0,
                        &PTR____CFConstantStringClassReference_110e0b6f8,&PTR_DAT_113108e00,
                        &PTR_s_page_113109438,2,0x18,0x1c);
    puRam00000001136c1100 = puVar1;
  }
  return;
}



/* Entry: 1058eab28; end: 1058eab8f; +[SCMusicUpdateOriginalSoundResponse descriptor] */

void FUN_1058eab28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1108 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77e10,
                        &PTR____CFConstantStringClassReference_110e0b718,&PTR_DAT_113108e00,
                        &PTR_DAT_1131090d8,1,8,0x1c);
    puRam00000001136c1108 = puVar1;
  }
  return;
}



/* Entry: 1058eab90; end: 1058eabf7; +[SCMusicGetMusicTrackLyricsRequest descriptor] */

void FUN_1058eab90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1110 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77e60,
                        &PTR____CFConstantStringClassReference_110e0b738,&PTR_DAT_113108e00,
                        &PTR_s_trackId_1131090f8,1,0x10,0x1c);
    puRam00000001136c1110 = puVar1;
  }
  return;
}



/* Entry: 1058eabf8; end: 1058eac5f; +[SCMusicGetMusicTrackLyricsResponse descriptor] */

void FUN_1058eabf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1118 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a77eb0,
                        &PTR____CFConstantStringClassReference_110e0b758,&PTR_DAT_113108e00,
                        &PTR_DAT_113109118,1,0x10,0x1c);
    puRam00000001136c1118 = puVar1;
  }
  return;
}


