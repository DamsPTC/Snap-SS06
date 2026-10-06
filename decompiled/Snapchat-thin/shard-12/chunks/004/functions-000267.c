/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10908e2d0; end: 10908e2d7; -[SCUcoCommandMapperServices ucoPhotoCommandMapper] */

undefined8 FUN_10908e2d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10908e2d8; end: 10908e2df; -[SCUcoCommandMapperServices ucoVideoCommandMapper] */

undefined8 FUN_10908e2d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10908e2e0; end: 10908e30f; -[SCUcoCommandMapperServices .cxx_destruct] */

void FUN_10908e2e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10908e310; end: 10908e317; -[SCSampleBufferImpl sampleBuffer] */

undefined8 FUN_10908e310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10908e318; end: 10908e31f; -[SCSampleBufferImpl isFileSource] */

undefined1 FUN_10908e318(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10908e320; end: 10908e353; -[SCDebugPlayer suspend] */

void FUN_10908e320(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127003b0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_suspend_112676a40);
  return;
}



/* Entry: 10908e354; end: 10908e3d3; -[SCPlayer initWithPlayerDomain:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10908e354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127003b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278102c) = param_3;
    puVar2 = PTR_PTR_1126d40b0;
    func_0x00010c22bc20(PTR_PTR_1126d40b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126de0();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10908e3d4; end: 10908e457; -[SCPlayer initWithPlayerDomain:URL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10908e3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127003b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithURL__1125f3820,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278102c) = param_3;
    puVar2 = PTR_PTR_1126d40b0;
    func_0x00010c22bc20(PTR_PTR_1126d40b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126de0();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10908e458; end: 10908e4e3; -[SCPlayer initWithPlayerDomain:playerItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10908e458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127003b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithPlayerItem__1125eb658,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278102c) = param_3;
    puVar2 = PTR_PTR_1126d40b0;
    func_0x00010c22bc20(PTR_PTR_1126d40b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126de0();
    _objc_release(puVar2);
    func_0x00010bdc5e80(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10908e4e4; end: 10908e4eb; -[SCPlayer initWithPlayerDomainString:] */

void FUN_10908e4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c037110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithPlayerDomainString_enabl_1125eb640,param_3,0);
  return;
}



/* Entry: 10908e4ec; end: 10908e5cb; -[SCPlayer initWithPlayerDomainString:enableStateObserving:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10908e4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127003b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112781030;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d40b0;
    func_0x00010c22bc20(PTR_PTR_1126d40b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126de0();
    _objc_release(puVar3);
    if (param_4 != 0) {
      puVar3 = PTR_PTR_1126dd320;
      _objc_alloc();
      func_0x00010c037020();
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112781034);
      *(undefined **)((long)puVar1 + (long)_DAT_112781034) = puVar3;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10908e5cc; end: 10908e67f; -[SCPlayer initWithPlayerDomainString:URL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10908e5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127003b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithURL__1125f3820,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112781030;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d40b0;
    func_0x00010c22bc20(PTR_PTR_1126d40b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126de0();
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10908e680; end: 10908e73b; -[SCPlayer initWithPlayerDomainString:playerItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10908e680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127003b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithPlayerItem__1125eb658,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112781030;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d40b0;
    func_0x00010c22bc20(PTR_PTR_1126d40b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126de0();
    _objc_release(puVar3);
    func_0x00010bdc5e80(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10908e73c; end: 10908e7bf; -[SCPlayer suspend] */

bool FUN_10908e73c(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c11fdc0();
  if (param_1 != 0.0) {
    lVar1 = param_2;
    func_0x00010c100f20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c264060();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      func_0x00010c1e7640(0,param_2);
      func_0x00010c2241a0(0,param_2);
    }
  }
  return param_1 != 0.0;
}



/* Entry: 10908e7c0; end: 10908e7db; -[SCPlayer playerDomainString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10908e7c0(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined **ppuVar4;
  
  ppuVar2 = *(undefined ***)(param_1 + _DAT_112781030);
  lVar1 = *(long *)(param_1 + _DAT_11278102c);
  _objc_retain();
  ppuVar4 = ppuVar2;
  func_0x00010c08fa60();
  if (ppuVar4 == (undefined **)0x0) {
    uVar3 = lVar1 - 1;
    if (uVar3 < 0x2c) {
      ppuVar4 = (undefined **)(&PTR_PTR_110ad7328)[uVar3];
    }
    else {
      ppuVar4 = &PTR____CFConstantStringClassReference_110f1f378;
    }
  }
  else {
    _objc_retain(ppuVar2);
    ppuVar4 = ppuVar2;
  }
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 10908e7dc; end: 10908e853; -[SCPlayer dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10908e7dc(long param_1)

{
  undefined *puVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf6f1e0(*(undefined8 *)(param_1 + _DAT_112781034));
  puVar1 = PTR_PTR_1126d40b0;
  func_0x00010c22bc20(PTR_PTR_1126d40b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12db60();
  _objc_release(puVar1);
  puStack_28 = PTR_PTR_1127003b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10908e854; end: 10908e86f; -[SCPlayer sc_status] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10908e854(long param_1)

{
  if (*(long *)(param_1 + _DAT_112781034) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c14dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112781034),PTR_s_sc_status_112631180);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c252d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_status_112672580);
  return;
}



/* Entry: 10908e870; end: 10908e88b; -[SCPlayer sc_timeControlStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10908e870(long param_1)

{
  if (*(long *)(param_1 + _DAT_112781034) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c14deb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112781034),PTR_s_sc_timeControlStatus_1126311c8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c26f190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_timeControlStatus_112679688);
  return;
}



/* Entry: 10908e88c; end: 10908e8a7; -[SCPlayer sc_rate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10908e88c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112781034) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c14d910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112781034),PTR_s_sc_rate_112631060);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c11fdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_rate_112625990);
  return;
}



/* Entry: 10908e8a8; end: 10908e8b7; -[SCPlayer sc_statusObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10908e8a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112781034),PTR_s_sc_statusObservable_112631190);
  return;
}



/* Entry: 10908e8b8; end: 10908e8c7; -[SCPlayer sc_timeControlStatusObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10908e8b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14ded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112781034),
             PTR_s_sc_timeControlStatusObservable_1126311d0);
  return;
}



/* Entry: 10908e8c8; end: 10908e8d7; -[SCPlayer sc_rateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10908e8c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14d930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112781034),PTR_s_sc_rateObservable_112631068);
  return;
}



/* Entry: 10908e8d8; end: 10908e93f; -[SCPlayer replaceCurrentItemWithPlayerItem:] */

void FUN_10908e8d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  func_0x00010be8b620(param_1);
  puStack_28 = PTR_PTR_1127003b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_replaceCurrentItemWithPlayerItem_112629d78,param_3);
  _objc_release(param_3);
  func_0x00010bdc5e80(param_1);
  return;
}



/* Entry: 10908e940; end: 10908e9df; -[SCPlayer _removeAssetResourceLoaderPlayerDelegate] */

void FUN_10908e940(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bdf7460();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c13b360();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar3 = lVar2;
    func_0x000107c318f8(lVar2,PTR_DAT_1126a5bd0);
    lVar1 = lVar2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar2);
    func_0x00010c1dda40(lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10908e9e0; end: 10908ea83; -[SCPlayer _addAssetResourceLoaderPlayerDelegate] */

void FUN_10908e9e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bdf7460();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c13b360();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar3 = lVar2;
    func_0x000107c318f8(lVar2,PTR_DAT_1126a5bd0);
    lVar1 = lVar2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar2);
    func_0x00010c1dda40(lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10908ea84; end: 10908ebd3; -[SCPlayer _currentURLAsset] */

void FUN_10908ea84(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = param_1;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  uVar3 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  if (uVar1 == 0) {
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar2 = PTR_PTR_1126bcb90;
    _objc_opt_class(PTR_PTR_1126bcb90);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar3 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    if (uVar3 == 0) {
      uVar6 = 0;
    }
    else {
      func_0x00010c0c40e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      uVar5 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar2);
      uVar6 = uVar4;
      if ((uVar5 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
  }
  else {
    _objc_retain(uVar6);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10908ebd4; end: 10908ebe3; -[SCPlayer playerSuspendHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10908ebd4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781038);
}



/* Entry: 10908ebe4; end: 10908ec23; -[SCPlayer setPlayerSuspendHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10908ebe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112781038;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10908ec24; end: 10908ec73; -[SCPlayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10908ec24(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112781038,0);
  _objc_storeStrong(param_1 + _DAT_112781034,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112781030,0);
  return;
}



/* Entry: 10908ec74; end: 10908ecbb; -[SCPlayerManager registerPlayer:] */

void FUN_10908ec74(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x18);
  return;
}



/* Entry: 10908ecbc; end: 10908ed03; -[SCPlayerManager removePlayer:] */

void FUN_10908ecbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x18);
  return;
}



/* Entry: 10908ed04; end: 10908ed4b; -[SCPlayerManager registerNeoPlayer:] */

void FUN_10908ed04(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x18);
  return;
}



/* Entry: 10908ed4c; end: 10908ed93; -[SCPlayerManager removeNeoPlayer:] */

void FUN_10908ed4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x18);
  return;
}



/* Entry: 10908ed94; end: 10908efb7; -[SCPlayerManager snapshot] */

undefined8 * FUN_10908ed94(long param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined8 uStack_4f0;
  long lStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined1 auStack_4b0 [128];
  long lStack_430;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x18);
  puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  _objc_retain(lVar3);
  lVar6 = lVar3;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(lVar3);
      }
      uVar7 = *(undefined8 *)(lVar17 * 8);
      func_0x00010bf660a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(uVar7);
      lVar17 = lVar17 + 1;
    } while (lVar6 != lVar17);
    lVar6 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  _objc_retain(lVar4);
  lVar6 = lVar4;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar15) {
        _objc_enumerationMutation(lVar4);
      }
      uVar7 = *(undefined8 *)(lVar17 * 8);
      func_0x00010bf660a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(uVar7);
      lVar17 = lVar17 + 1;
    } while (lVar6 != lVar17);
    lVar6 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _os_unfair_lock_lock(lVar3 + 0x18);
    lVar14 = *(long *)(lVar3 + 8);
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(lVar3 + 0x10);
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_unlock(lVar3 + 0x18);
    _objc_retain(lVar14);
    lVar15 = lVar14;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    if (lVar15 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      do {
        lVar3 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(lVar14);
          }
          uVar2 = (uint)*(undefined8 *)(lVar3 * 8);
          func_0x00010c264060();
          uVar16 = uVar16 | uVar2;
          lVar3 = lVar3 + 1;
        } while (lVar15 != lVar3);
        lVar15 = lVar14;
        func_0x00010bf52a60();
      } while (lVar15 != 0);
    }
    _objc_release(lVar14);
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    _objc_retain(lVar4);
    lVar6 = lVar4;
    func_0x00010bf52a60();
    lVar15 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar3 = 0;
      do {
        if (lRam0000000000000000 != lVar15) {
          _objc_enumerationMutation(lVar4);
        }
        uVar7 = *(undefined8 *)(lVar3 * 8);
        func_0x00010c11fdc0(uVar7);
        bVar1 = NAN((float)CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18))));
        uVar16 = uVar16 | ((bVar1 || (float)CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18))
                                                    ) != 0.0) &&
                          (!bVar1 &&
                          (float)CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18))) < 0.0) ==
                          bVar1);
        func_0x00010c0f5b20(uVar7);
        lVar3 = lVar3 + 1;
      } while (lVar6 != lVar3);
      lVar6 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    _objc_release(lVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
      return (undefined8 *)(ulong)(uVar16 & 1);
    }
    ___stack_chk_fail();
    lStack_430 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _os_unfair_lock_lock(lVar14 + 0x18);
    puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    lStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_4d8 = 0;
    plStack_4e0 = (long *)0x0;
    lVar15 = *(long *)(lVar14 + 8);
    _objc_retain(lVar15);
    puVar9 = &uStack_4f0;
    puVar13 = auStack_4b0;
    uVar7 = 0x10;
    lVar6 = lVar15;
    func_0x00010bf52a60();
    if (lVar6 != 0) {
      lVar4 = *plStack_4e0;
      do {
        lVar3 = 0;
        do {
          if (*plStack_4e0 != lVar4) {
            _objc_enumerationMutation(lVar15);
          }
          lVar8 = *(long *)(lStack_4e8 + lVar3 * 8);
          func_0x00010c100a20();
          _objc_retainAutoreleasedReturnValue();
          lVar17 = lVar8;
          func_0x00010c08fa60();
          if (lVar17 != 0) {
            puVar9 = puVar5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar9 == (undefined8 *)0x0) {
              func_0x00010c1d0640(puVar5);
            }
            puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            puVar9 = puVar5;
            func_0x00010c0e00e0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067ec0();
            func_0x00010c0df760(puVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar5);
            _objc_release(puVar10);
            _objc_release(puVar9);
          }
          _objc_release(lVar8);
          lVar3 = lVar3 + 1;
        } while (lVar6 != lVar3);
        puVar9 = &uStack_4f0;
        puVar13 = auStack_4b0;
        uVar7 = 0x10;
        lVar6 = lVar15;
        func_0x00010bf52a60();
      } while (lVar6 != 0);
    }
    _objc_release(lVar15);
    lVar6 = lVar14 + 0x18;
    _os_unfair_lock_unlock();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_430) {
      ___stack_chk_fail();
      _os_unfair_lock_unlock(lVar14 + 0x18);
      __Unwind_Resume(lVar6);
      _objc_retain(puVar9);
      _objc_retain(puVar13);
      _objc_retain(uVar7);
      puVar10 = &UNK_10f54cb81;
      func_0x000107c31820(&UNK_10f54cb81);
      puVar11 = PTR__OBJC_CLASS___AVPlayer_1126bf5e8;
      _objc_opt_class(PTR__OBJC_CLASS___AVPlayer_1126bf5e8);
      puVar12 = puVar13;
      _objc_opt_isKindOfClass(puVar13,puVar11);
      if (((ulong)puVar12 & 1) == 0) {
        puVar11 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
        _objc_opt_class(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
        puVar12 = puVar13;
        _objc_opt_isKindOfClass(puVar13,puVar11);
        if (((ulong)puVar12 & 1) != 0) {
          func_0x00010be57fc0(lVar6);
        }
      }
      else {
        func_0x00010c0720c0(puVar9);
        func_0x00010be57fa0(lVar6);
      }
      func_0x000107c31828(puVar10);
      _objc_release(uVar7);
      _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar9);
      return puVar9;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 10908efb8; end: 10908f1b3; -[SCPlayerManager stopAllPlayers] */

undefined8 * FUN_10908efb8(long param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
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
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_retain(lVar3);
  lVar14 = lVar3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  if (lVar14 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    do {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        uVar2 = (uint)*(undefined8 *)(lVar17 * 8);
        func_0x00010c264060();
        uVar16 = uVar16 | uVar2;
        lVar17 = lVar17 + 1;
      } while (lVar14 != lVar17);
      lVar14 = lVar3;
      func_0x00010bf52a60();
    } while (lVar14 != 0);
  }
  _objc_release(lVar3);
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  _objc_retain(lVar4);
  lVar5 = lVar4;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar17 = 0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(lVar4);
      }
      uVar15 = *(undefined8 *)(lVar17 * 8);
      func_0x00010c11fdc0(uVar15);
      bVar1 = NAN((float)CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18))));
      uVar16 = uVar16 | ((bVar1 || (float)CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18)))
                                   != 0.0) &&
                        (!bVar1 &&
                        (float)CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18))) < 0.0) ==
                        bVar1);
      func_0x00010c0f5b20(uVar15);
      lVar17 = lVar17 + 1;
    } while (lVar5 != lVar17);
    lVar5 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return (undefined8 *)(ulong)(uVar16 & 1);
  }
  ___stack_chk_fail();
  lStack_250 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(lVar3 + 0x18);
  puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  lStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  plStack_300 = (long *)0x0;
  lVar14 = *(long *)(lVar3 + 8);
  _objc_retain(lVar14);
  puVar8 = &uStack_310;
  puVar12 = auStack_2d0;
  uVar15 = 0x10;
  lVar5 = lVar14;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar4 = *plStack_300;
    do {
      lVar13 = 0;
      do {
        if (*plStack_300 != lVar4) {
          _objc_enumerationMutation(lVar14);
        }
        lVar7 = *(long *)(lStack_308 + lVar13 * 8);
        func_0x00010c100a20();
        _objc_retainAutoreleasedReturnValue();
        lVar17 = lVar7;
        func_0x00010c08fa60();
        if (lVar17 != 0) {
          puVar8 = puVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar8 == (undefined8 *)0x0) {
            func_0x00010c1d0640(puVar6);
          }
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          puVar8 = puVar6;
          func_0x00010c0e00e0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067ec0();
          func_0x00010c0df760(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar6);
          _objc_release(puVar9);
          _objc_release(puVar8);
        }
        _objc_release(lVar7);
        lVar13 = lVar13 + 1;
      } while (lVar5 != lVar13);
      puVar8 = &uStack_310;
      puVar12 = auStack_2d0;
      uVar15 = 0x10;
      lVar5 = lVar14;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar14);
  lVar5 = lVar3 + 0x18;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_250) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(lVar3 + 0x18);
  __Unwind_Resume(lVar5);
  _objc_retain(puVar8);
  _objc_retain(puVar12);
  _objc_retain(uVar15);
  puVar9 = &UNK_10f54cb81;
  func_0x000107c31820(&UNK_10f54cb81);
  puVar10 = PTR__OBJC_CLASS___AVPlayer_1126bf5e8;
  _objc_opt_class(PTR__OBJC_CLASS___AVPlayer_1126bf5e8);
  puVar11 = puVar12;
  _objc_opt_isKindOfClass(puVar12,puVar10);
  if (((ulong)puVar11 & 1) == 0) {
    puVar10 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
    _objc_opt_class(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
    puVar11 = puVar12;
    _objc_opt_isKindOfClass(puVar12,puVar10);
    if (((ulong)puVar11 & 1) != 0) {
      func_0x00010be57fc0(lVar5);
    }
  }
  else {
    func_0x00010c0720c0(puVar8);
    func_0x00010be57fa0(lVar5);
  }
  func_0x000107c31828(puVar9);
  _objc_release(uVar15);
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return puVar8;
}



/* Entry: 10908f1b4; end: 10908f3c7; -[SCPlayerManager countOfAllocatedPlayersByDomain] */

void FUN_10908f1b4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
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
  _os_unfair_lock_lock(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar12 = *(long *)(param_1 + 8);
  _objc_retain(lVar12);
  puVar8 = &uStack_130;
  puVar9 = auStack_f0;
  uVar10 = 0x10;
  lVar2 = lVar12;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar12);
        }
        lVar3 = *(long *)(lStack_128 + lVar11 * 8);
        func_0x00010c100a20();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08fa60();
        if (lVar4 != 0) {
          puVar5 = puVar1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar5 == (undefined *)0x0) {
            func_0x00010c1d0640(puVar1);
          }
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          puVar6 = puVar1;
          func_0x00010c0e00e0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067ec0();
          func_0x00010c0df760(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(puVar5);
          _objc_release(puVar6);
        }
        _objc_release(lVar3);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      puVar8 = &uStack_130;
      puVar9 = auStack_f0;
      uVar10 = 0x10;
      lVar2 = lVar12;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar12);
  lVar2 = param_1 + 0x18;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x18);
  __Unwind_Resume(lVar2);
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  _objc_retain(uVar10);
  puVar1 = &UNK_10f54cb81;
  func_0x000107c31820(&UNK_10f54cb81);
  puVar5 = PTR__OBJC_CLASS___AVPlayer_1126bf5e8;
  _objc_opt_class(PTR__OBJC_CLASS___AVPlayer_1126bf5e8);
  puVar7 = puVar9;
  _objc_opt_isKindOfClass(puVar9,puVar5);
  if (((ulong)puVar7 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
    _objc_opt_class(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
    puVar7 = puVar9;
    _objc_opt_isKindOfClass(puVar9,puVar5);
    if (((ulong)puVar7 & 1) != 0) {
      func_0x00010be57fc0(lVar2);
    }
  }
  else {
    func_0x00010c0720c0(puVar8);
    func_0x00010be57fa0(lVar2);
  }
  func_0x000107c31828(puVar1);
  _objc_release(uVar10);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 10908f3c8; end: 10908f4ef; -[SCPlayerManager observeValueForKeyPath:ofObject:change:context:] */

void FUN_10908f3c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = &UNK_10f54cb81;
  func_0x000107c31820(&UNK_10f54cb81);
  puVar2 = PTR__OBJC_CLASS___AVPlayer_1126bf5e8;
  _objc_opt_class(PTR__OBJC_CLASS___AVPlayer_1126bf5e8);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
    _objc_opt_class(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    if ((uVar3 & 1) != 0) {
      func_0x00010be57fc0(param_1);
    }
  }
  else {
    func_0x00010c0720c0(param_3);
    func_0x00010be57fa0(param_1);
  }
  func_0x000107c31828(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10908f4f0; end: 10908f587; -[SCPlayerManager provideShakeLog] */

void FUN_10908f4f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010c245de0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b7488;
  _objc_alloc(PTR_PTR_1126b7488);
  func_0x00010c0270a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10908f588; end: 10908f5af; -[SCPlayerManager _startObservingPlayerItem:] */

void FUN_10908f588(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010befa230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_3,PTR_s_addObserver_forKeyPath_options_c_11259c230,param_1,
               &PTR____CFConstantStringClassReference_110daf4d8,3,0);
    return;
  }
  return;
}



/* Entry: 10908f5b0; end: 10908f5b3; -[SCPlayerManager _logS2REventsForKeyPath:playerItem:change:] */

void FUN_10908f5b0(void)

{
  return;
}



/* Entry: 10908f5b4; end: 10908f5b7; -[SCPlayerManager _logS2REventsForKeyPath:player:change:] */

void FUN_10908f5b4(void)

{
  return;
}



/* Entry: 10908f5b8; end: 10908f5e7; -[SCPlayerManager .cxx_destruct] */

void FUN_10908f5b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10908f5e8; end: 10908f76f; -[SCPlayerStateObserver initWithPlayer:] */

undefined1 * FUN_10908f5e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127003c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c252d60(param_3);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c26f180(param_3);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c11fdc0(param_3);
    func_0x00010c0df740();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b44c8;
    _objc_alloc();
    func_0x00010c030ec0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    func_0x00010be89800(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10908f770; end: 10908f777; -[SCPlayerStateObserver detach] */

void FUN_10908f770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_unobserveAll_11267e0f0);
  return;
}



/* Entry: 10908f778; end: 10908f7f3; -[SCPlayerStateObserver sc_status] */

long FUN_10908f778(long param_1)

{
  long lVar1;
  long lVar2;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x18);
  if (lVar1 == 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c252d60();
    _objc_release(param_1);
  }
  else {
    lVar2 = lVar1;
    func_0x00010c067ec0(lVar1);
    lVar2 = (long)(int)lVar2;
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 10908f7f4; end: 10908f86f; -[SCPlayerStateObserver sc_timeControlStatus] */

long FUN_10908f7f4(long param_1)

{
  long lVar1;
  long lVar2;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x18);
  if (lVar1 == 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c26f180();
    _objc_release(param_1);
  }
  else {
    lVar2 = lVar1;
    func_0x00010c067ec0(lVar1);
    lVar2 = (long)(int)lVar2;
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 10908f870; end: 10908f8eb; -[SCPlayerStateObserver sc_rate] */

undefined8 FUN_10908f870(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x30);
  _objc_retain(lVar1);
  _os_unfair_lock_unlock(param_2 + 0x18);
  if (lVar1 == 0) {
    param_2 = param_2 + 8;
    _objc_loadWeakRetained(param_2);
    func_0x00010c11fdc0();
    _objc_release(param_2);
  }
  else {
    func_0x00010bfb2c80(lVar1);
  }
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 10908f8ec; end: 10908f913; -[SCPlayerStateObserver sc_statusObservable] */

void FUN_10908f8ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10908f914; end: 10908f93b; -[SCPlayerStateObserver sc_timeControlStatusObservable] */

void FUN_10908f914(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10908f93c; end: 10908f963; -[SCPlayerStateObserver sc_rateObservable] */

void FUN_10908f93c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10908f964; end: 10908f9b3; -[SCPlayerStateObserver _registerKVOForPlayer:] */

void FUN_10908f964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be66a20(param_1,param_2,param_3);
  func_0x00010be66f40(param_1,param_2,param_3);
  func_0x00010be66b80(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10908f9b4; end: 10908fab3; -[SCPlayerStateObserver _observePlayerStatus:] */

void FUN_10908f9b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0e0780(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10908fab4; end: 10908fce3;  */

void FUN_10908fab4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  ulong uStack_48;
  
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_10908fcbc;
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    _os_unfair_lock_lock(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar3);
    _os_unfair_lock_unlock(param_1 + 0x18);
    goto LAB_10908fcbc;
  }
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  uVar1 = uVar2;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar5 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar2 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar5);
  _os_unfair_lock_lock(param_1 + 0x18);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(ulong *)(param_1 + 0x20) = uVar2;
  _objc_release(uVar3);
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    uVar5 = uVar1;
LAB_10908fca8:
    _objc_release(uVar5);
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
LAB_10908fc58:
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_10908fce4;
      puStack_58 = &UNK_110841f80;
      lStack_50 = param_1;
      _objc_retain(uVar2);
      uStack_48 = uVar2;
      func_0x000107c312cc("APPSTORE",&puStack_70);
      uVar5 = uStack_48;
      goto LAB_10908fca8;
    }
    uVar6 = uVar1;
    func_0x00010c071ae0();
    _objc_release(uVar5);
    _objc_release(uVar1);
    if ((uVar6 & 1) == 0) goto LAB_10908fc58;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_10908fcbc:
  _objc_release(param_1);
  _objc_release(param_4);
  return;
}



/* Entry: 10908fce4; end: 10908fcef;  */

void FUN_10908fce4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),PTR_s_next__112614028,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10908fcf0; end: 10908fdef; -[SCPlayerStateObserver _observeTimeControlStatus:] */

void FUN_10908fcf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0e0780(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10908fdf0; end: 10909001f;  */

void FUN_10908fdf0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  ulong uStack_48;
  
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_10908fff8;
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    _os_unfair_lock_lock(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar3);
    _os_unfair_lock_unlock(param_1 + 0x18);
    goto LAB_10908fff8;
  }
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  uVar1 = uVar2;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar5 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar2 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar5);
  _os_unfair_lock_lock(param_1 + 0x18);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(param_1 + 0x28) = uVar2;
  _objc_release(uVar3);
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    uVar5 = uVar1;
LAB_10908ffe4:
    _objc_release(uVar5);
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
LAB_10908ff94:
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_109090020;
      puStack_58 = &UNK_110841f80;
      lStack_50 = param_1;
      _objc_retain(uVar2);
      uStack_48 = uVar2;
      func_0x000107c312cc("APPSTORE",&puStack_70);
      uVar5 = uStack_48;
      goto LAB_10908ffe4;
    }
    uVar6 = uVar1;
    func_0x00010c071ae0();
    _objc_release(uVar5);
    _objc_release(uVar1);
    if ((uVar6 & 1) == 0) goto LAB_10908ff94;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_10908fff8:
  _objc_release(param_1);
  _objc_release(param_4);
  return;
}



/* Entry: 109090020; end: 10909002b;  */

void FUN_109090020(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40),PTR_s_next__112614028,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10909002c; end: 10909012b; -[SCPlayerStateObserver _observeRate:] */

void FUN_10909002c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0e0780(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10909012c; end: 10909035b;  */

void FUN_10909012c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  ulong uStack_48;
  
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_109090334;
  uVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    _os_unfair_lock_lock(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar3);
    _os_unfair_lock_unlock(param_1 + 0x18);
    goto LAB_109090334;
  }
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  uVar1 = uVar2;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar5 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar2 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar5);
  _os_unfair_lock_lock(param_1 + 0x18);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(ulong *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar3);
  _os_unfair_lock_unlock(param_1 + 0x18);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  if (uVar1 == uVar2) {
    _objc_release(uVar2);
    uVar5 = uVar1;
LAB_109090320:
    _objc_release(uVar5);
  }
  else {
    if (uVar2 == 0) {
      _objc_release();
LAB_1090902d0:
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_10909035c;
      puStack_58 = &UNK_110841f80;
      lStack_50 = param_1;
      _objc_retain(uVar2);
      uStack_48 = uVar2;
      func_0x000107c312cc("APPSTORE",&puStack_70);
      uVar5 = uStack_48;
      goto LAB_109090320;
    }
    uVar6 = uVar1;
    func_0x00010c071ae0();
    _objc_release(uVar5);
    _objc_release(uVar1);
    if ((uVar6 & 1) == 0) goto LAB_1090902d0;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_109090334:
  _objc_release(param_1);
  _objc_release(param_4);
  return;
}



/* Entry: 10909035c; end: 109090367;  */

void FUN_10909035c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),PTR_s_next__112614028,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 109090368; end: 1090903db; -[SCPlayerStateObserver .cxx_destruct] */

void FUN_109090368(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1090903dc; end: 109090447; -[SCPlayerSuspendHandlerNoMute initWithPlayer:] */

undefined1 * FUN_1090903dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127003d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109090448; end: 10909047f; -[SCPlayerSuspendHandlerNoMute suspend] */

undefined8 FUN_109090448(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e7640(0);
  _objc_release(param_1);
  return 1;
}



/* Entry: 109090480; end: 109090487; -[SCPlayerSuspendHandlerNoMute .cxx_destruct] */

void FUN_109090480(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 109090488; end: 1090904f7;  */

void FUN_109090488(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  
  _objc_retain();
  ppuVar1 = param_1;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    if (param_2 - 1U < 0x2c) {
      ppuVar1 = (undefined **)(&PTR_PTR_110ad7328)[param_2 - 1U];
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f1f378;
    }
  }
  else {
    _objc_retain(param_1);
    ppuVar1 = param_1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1090904f8; end: 109090577; -[SCQueuePlayer initWithPlayerDomain:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1090904f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127003d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112781070) = param_3;
    puVar2 = PTR_PTR_1126d40b0;
    func_0x00010c22bc20(PTR_PTR_1126d40b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126de0();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 109090578; end: 109090623; -[SCQueuePlayer initWithPlayerDomainString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_109090578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127003d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112781074;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d40b0;
    func_0x00010c22bc20(PTR_PTR_1126d40b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126de0();
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109090624; end: 109090677; -[SCQueuePlayer suspend] */

bool FUN_109090624(float param_1,undefined8 param_2)

{
  func_0x00010c11fdc0();
  if (param_1 != 0.0) {
    func_0x00010c1e7640(0,param_2);
    func_0x00010c2241a0(0,param_2);
  }
  return param_1 != 0.0;
}



/* Entry: 109090678; end: 109090693; -[SCQueuePlayer playerDomainString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109090678(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  ppuVar3 = *(undefined ***)(param_1 + _DAT_112781074);
  lVar1 = *(long *)(param_1 + _DAT_112781070);
  _objc_retain();
  ppuVar4 = ppuVar3;
  func_0x00010c08fa60();
  if (ppuVar4 == (undefined **)0x0) {
    uVar2 = lVar1 - 1;
    if (uVar2 < 0x2c) {
      ppuVar4 = (undefined **)(&PTR_PTR_110ad7328)[uVar2];
    }
    else {
      ppuVar4 = &PTR____CFConstantStringClassReference_110f1f378;
    }
  }
  else {
    _objc_retain(ppuVar3);
    ppuVar4 = ppuVar3;
  }
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 109090694; end: 1090906fb; -[SCQueuePlayer dealloc] */

void FUN_109090694(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126d40b0;
  func_0x00010c22bc20(PTR_PTR_1126d40b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12db60();
  _objc_release(puVar1);
  puStack_28 = PTR_PTR_1127003d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090906fc; end: 10909070f; -[SCQueuePlayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090906fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112781074,0);
  return;
}



/* Entry: 109090710; end: 109090733; -[SCAVFoundationNeoPlayerOutput initWithRendererCreationThreadMode:enableBackgroundRecoveryRevamp:enableFrozenFrameRecovery:enableSafeVideoRendererTeardown:mediaQueue:delegate:] */

void FUN_109090710(void)

{
  func_0x00010c03e260();
  return;
}



/* Entry: 109090734; end: 109090ab7; -[SCAVFoundationNeoPlayerOutput initWithRendererCreationThreadMode:enableBackgroundRecoveryRevamp:enableFrozenFrameRecovery:enableSafeVideoRendererTeardown:mediaQueue:externalVideoRenderer:delegate:] */

undefined8 *
FUN_109090734(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,long param_8,ulong param_9)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_7);
  func_0x0001090931f0();
  func_0x000109093368();
  puStack_68 = PTR_PTR_1127003e0;
  puVar3 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000109093274();
    uVar4 = puVar3[0x11];
    puVar3[0x11] = param_7;
    _objc_release(uVar4);
    _objc_storeWeak(puVar3 + 1,param_9);
    uVar5 = param_9;
    _objc_opt_respondsToSelector(param_9,PTR_s_playerOutputDidRevealFirstFrame_11261dd90);
    if (((uVar5 & 1) == 0) ||
       (uVar5 = param_9,
       _objc_opt_respondsToSelector(param_9,PTR_s_playerOutputFirstFrameRevealHand_11261dd98),
       (uVar5 & 1) == 0)) {
      uVar1 = 0;
    }
    else {
      func_0x00010c100de0();
      uVar1 = (undefined1)param_9;
    }
    *(undefined1 *)((long)puVar3 + 0x42) = uVar1;
    puVar6 = PTR_PTR_1126dd328;
    _objc_opt_new();
    uVar4 = puVar3[3];
    puVar3[3] = puVar6;
    func_0x00010909331c(uVar4);
    if (*(char *)((long)puVar3 + 0x42) == '\x01') {
      _objc_initWeak(auStack_78,puVar3);
      _objc_copyWeak(auStack_80,auStack_78);
      func_0x00010c1d3120(puVar3[3]);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
    puVar6 = PTR_PTR_1126dd330;
    _objc_opt_new();
    uVar4 = puVar3[4];
    puVar3[4] = puVar6;
    func_0x00010909331c(uVar4);
    *(undefined4 *)(puVar3 + 0xc) = 0x3f800000;
    puVar6 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
    _objc_opt_new();
    uVar4 = puVar3[7];
    puVar3[7] = puVar6;
    func_0x00010909331c(uVar4);
    puVar3[0xd] = param_3;
    *(undefined1 *)(puVar3 + 0x10) = param_6;
    *(undefined4 *)((long)puVar3 + 100) = 0;
    *(undefined1 *)((long)puVar3 + 0x71) = param_5;
    func_0x0001090931f0();
    uVar4 = puVar3[0x12];
    puVar3[0x12] = param_8;
    _objc_release(uVar4);
    if (param_8 == 0) {
      if ((param_4 & 1) == 0) {
        func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
        _objc_retainAutoreleasedReturnValue();
        func_0x000109093464();
        func_0x0001090931e8();
      }
    }
    else {
      func_0x00010c22ba80(PTR_PTR_1126dd338);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0(param_8);
      func_0x0001090931e8();
      func_0x00010c2218a0(param_8);
      lVar7 = param_8;
      func_0x00010c167d20(0x3fe0000000000000,0x3fe0000000000000);
      iVar2 = (int)lVar7;
      func_0x000109093378();
      func_0x00010c077480();
      if (iVar2 == 0) {
        func_0x000109093384(FUN_109090bac);
        _objc_retain(puVar3);
        func_0x0001090931f0();
        func_0x000109093310();
        func_0x000107c27da4();
        func_0x00010909327c();
        func_0x000109093450();
      }
      else {
        func_0x00010bdce2c0(puVar3);
      }
      func_0x00010c09faa0(puVar3[7]);
      func_0x0001090931f0();
      uVar4 = puVar3[6];
      puVar3[6] = param_8;
      _objc_release(uVar4);
      func_0x00010c280b40(puVar3[7]);
      func_0x00010beaa000(puVar3);
    }
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x000109093464();
    func_0x0001090931e8();
  }
  func_0x000109093178();
  func_0x000109093180();
  func_0x000109093170();
  return puVar3;
}



/* Entry: 109090ab8; end: 109090b7b;  */

void FUN_109090ab8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010909341c();
  if (lVar1 != 0) {
    func_0x00010be599e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000109093408();
    func_0x00010bdc3520();
    func_0x000109093178();
    uVar2 = *(undefined8 *)(lVar1 + 0x88);
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    func_0x00010bf850c0(uVar2);
    _objc_destroyWeak(auStack_38);
  }
  func_0x000109093170();
  return;
}



/* Entry: 109090b7c; end: 109090bab;  */

void FUN_109090b7c(undefined8 param_1)

{
  func_0x00010909341c();
  func_0x00010be9ba00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109090bac; end: 109090bb7;  */

void FUN_109090bac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdce2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__applyInitialLayerGeometryAndHid_112551250,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 109090bb8; end: 109090d5b; -[SCAVFoundationNeoPlayerOutput _handleVideoRendererFailedToDecode:] */

void FUN_109090bb8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000109093284();
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000109093140();
  if (unaff_x20 != 0) {
    lVar1 = param_3;
    func_0x00010c0dfc60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x38));
    lVar2 = *(long *)(param_1 + 0x30);
    _objc_retain(lVar2);
    func_0x00010c280b40(*(undefined8 *)(param_1 + 0x38));
    if (lVar1 == lVar2) {
      func_0x00010c09e560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (unaff_x20 != 0) {
        func_0x00010c09e4e0();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010be599e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      func_0x00010909328c();
      _objc_loadWeakRetained(param_1 + 0x10);
      func_0x00010c1003c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec6c0();
      func_0x0001090931bc();
      func_0x00010909328c();
      func_0x0001090931e8();
    }
    func_0x0001090931c4();
    func_0x000109093178();
  }
  func_0x000109093180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109090d5c; end: 109090d93; -[SCAVFoundationNeoPlayerOutput handleAppDidEnterBackground] */

void FUN_109090d5c(void)

{
  func_0x0001090934bc();
  func_0x0001090932bc(0xc2000000);
  func_0x0001090933f0();
  return;
}



/* Entry: 109090d94; end: 109090db3;  */

void FUN_109090d94(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar1 + 0x30) != 0) {
    *(undefined1 *)(lVar1 + 0x70) = 1;
    lVar1 = *(long *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf6f130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_destroyVideoRenderer_1125b95f0);
  return;
}



/* Entry: 109090db4; end: 109090e43; -[SCAVFoundationNeoPlayerOutput destroyVideoRenderer] */

void FUN_109090db4(long param_1)

{
  if ((*(long *)(param_1 + 0x90) == 0) && (*(long *)(param_1 + 0x30) != 0)) {
    func_0x000109093274();
    func_0x00010c256800(*(undefined8 *)(param_1 + 0x30));
    func_0x00010be01fc0(param_1);
    *(undefined1 *)(param_1 + 0x5b) = 0;
    *(undefined1 *)(param_1 + 0x72) = *(undefined1 *)(param_1 + 0x71);
    func_0x00010909325c();
    func_0x000109093384(FUN_109090e44);
    func_0x000109093274();
    func_0x000109093310();
    func_0x000107c27d8c();
    func_0x00010909327c();
    func_0x000109093170();
  }
  return;
}



/* Entry: 109090e44; end: 109090eff;  */

/* WARNING: Possible PIC construction at 0x000109090ec4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109090ec8) */
/* WARNING: Removing unreachable block (ram,0x00010c12f100) */

void FUN_109090e44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x71) == '\x01') {
    func_0x000109093458();
    lVar3 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar3 + 0x78) != 0) {
      func_0x00010c12c940();
      func_0x0001090932ec();
      lVar3 = *(long *)(param_1 + 0x20);
    }
    func_0x00010bf3c580(*(undefined8 *)(lVar3 + 0x18));
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x0001090931f0();
    uVar1 = *(undefined8 *)(lVar3 + 0x78);
    *(undefined8 *)(lVar3 + 0x78) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x80) == '\x01') {
    func_0x00010c12c940(*(undefined8 *)(param_1 + 0x28));
    func_0x000109093220(*(undefined8 *)(param_1 + 0x20));
    func_0x0001090932e0();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    func_0x000109093458();
    func_0x00010c12c940(*(undefined8 *)(param_1 + 0x28));
    func_0x000109093220(*(undefined8 *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfb2f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_flush_1125ca570);
  return;
}



/* Entry: 109090f00; end: 109091017; -[SCAVFoundationNeoPlayerOutput _getOrCreateAudioRenderer] */

void FUN_109090f00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
      func_0x0001090932d8();
      func_0x00010c2778c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090932d0();
      func_0x0001090931c4();
      func_0x000109093180();
      puVar1 = PTR__OBJC_CLASS___AVSampleBufferAudioRenderer_1126dd340;
      _objc_opt_new();
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      *(undefined **)(param_1 + 0x28) = puVar1;
      func_0x00010909331c(uVar2);
      func_0x0001090932d8();
      func_0x00010c2778c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010909322c();
      func_0x0001090931c4();
      func_0x000109093180();
      func_0x00010c2241a0(*(undefined4 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x28));
      func_0x00010c1ca6a0(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined1 *)(param_1 + 0x5c));
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x000109093464();
      func_0x000109093180();
      lVar3 = *(long *)(param_1 + 0x28);
    }
    else {
      lVar3 = 0;
    }
  }
  func_0x0001090931f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 109091018; end: 109091073; -[SCAVFoundationNeoPlayerOutput _logTag] */

void FUN_109091018(undefined **param_1)

{
  undefined **ppuVar1;
  
  func_0x000109093294();
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f1f8d8;
  if (param_1 != (undefined **)0x0) {
    ppuVar1 = param_1;
  }
  func_0x000109093368();
  func_0x000109093180();
  func_0x000109093170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 109091074; end: 10909107b; -[SCAVFoundationNeoPlayerOutput didReceiveAudioSessionActivatedSignal] */

void FUN_109091074(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16c410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAudioSessionWasReset__112638b20,1);
  return;
}



/* Entry: 10909107c; end: 109091167; -[SCAVFoundationNeoPlayerOutput _onVideoRendererReady] */

void FUN_10909107c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x5b) = 1;
    if (*(long *)(param_1 + 0x48) != 0) {
      func_0x00010be599e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x000109093360();
      func_0x00010bdc3520();
      func_0x000109093180();
      func_0x0001090932d8();
      func_0x00010c2778c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090932d0();
      func_0x0001090931c4();
      func_0x000109093180();
      func_0x00010c135d80(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x50),
                          *(undefined8 *)(param_1 + 0x48));
      func_0x0001090932d8();
      func_0x00010c2778c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010909322c();
      func_0x0001090931c4();
      func_0x000109093180();
      uVar1 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0;
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 109091168; end: 10909126b; -[SCAVFoundationNeoPlayerOutput _applyInitialLayerGeometryAndHiddenState:] */

void FUN_109091168(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000109093200();
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5c20();
  func_0x00010c182d20();
  func_0x000109093178();
  puVar1 = *(undefined **)(unaff_x20 + 0x18);
  func_0x00010bf20c00();
  func_0x0001090934a8();
  _CGRectIsEmpty();
  if ((int)puVar1 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x0001090934a8();
    func_0x000109093178();
  }
  func_0x000109093494();
  _CGRectIsEmpty();
  if (((ulong)puVar1 & 1) == 0) {
    func_0x000109093494();
    func_0x00010c19f0e0();
  }
  if (*(char *)(unaff_x20 + 0x42) == '\x01') {
    func_0x00010c1d4bc0(0);
    func_0x00010be599e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000109093408();
    func_0x00010bdc3520();
    func_0x000109093178();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10909126c; end: 109091427; -[SCAVFoundationNeoPlayerOutput _createVideoRenderer] */

void FUN_10909126c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010be01fc0();
  func_0x00010be599e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000109093358();
  func_0x00010bdc3520();
  func_0x000109093170();
  func_0x0001090931f8();
  func_0x00010c2778c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090932d0();
  func_0x0001090931c4();
  func_0x000109093170();
  puVar2 = PTR__OBJC_CLASS___AVSampleBufferDisplayLayer_1126b6c98;
  _objc_opt_new();
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x38));
  func_0x000109093274();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar2;
  _objc_release(uVar3);
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x38));
  func_0x0001090931f8();
  func_0x00010c2778c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  func_0x0001090931bc();
  func_0x0001090931c4();
  func_0x00010c22ba80(PTR_PTR_1126dd338);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x30));
  func_0x000109093178();
  func_0x00010c2218a0(*(undefined8 *)(param_1 + 0x30));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c167d20(0x3fe0000000000000,0x3fe0000000000000);
  func_0x000109093378();
  func_0x00010c077480();
  if (iVar1 == 0) {
    func_0x000109093160();
    func_0x0001090931d4(FUN_109091428,0xc2000000);
    func_0x000109093310();
    func_0x000107c27da4();
  }
  else {
    func_0x00010bdce2c0(param_1);
  }
  if (*(char *)(param_1 + 0x42) == '\x01') {
    *(undefined2 *)(param_1 + 0x40) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 109091428; end: 109091433;  */

void FUN_109091428(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdce2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__applyInitialLayerGeometryAndHid_112551250,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
  return;
}



/* Entry: 109091434; end: 1090914d3; -[SCAVFoundationNeoPlayerOutput _setVideoLayerAndReadyRenderer:] */

void FUN_109091434(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 *puVar3;
  
  puVar2 = auStack_60;
  func_0x000109093200();
  func_0x00010909325c();
  uStack_58 = 0xc2000000;
  func_0x000109093384(FUN_1090914d4);
  func_0x000109093274();
  _objc_retainBlock();
  puVar3 = puVar2;
  func_0x000109093378();
  iVar1 = (int)puVar3;
  func_0x00010c077480();
  if (iVar1 == 0) {
    func_0x000109093310();
    func_0x000107c27d8c();
  }
  else {
    (**(code **)(puVar2 + 0x10))(puVar2);
  }
  func_0x000109093180();
  func_0x00010909327c();
  func_0x000109093170();
  return;
}



/* Entry: 1090914d4; end: 109091533;  */

void FUN_1090914d4(long param_1,undefined8 param_2)

{
  func_0x00010c221960(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  func_0x0001090932bc(0xc2000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88));
  func_0x00010bf850c0();
  return;
}



/* Entry: 109091534; end: 10909153b;  */

void FUN_109091534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6c5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onVideoRendererReady_112578b08);
  return;
}



/* Entry: 10909153c; end: 109091663; -[SCAVFoundationNeoPlayerOutput _getOrCreateVideoRenderer] */

void FUN_10909153c(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long unaff_x19;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar2 = auStack_60;
  func_0x000109093410();
  lVar4 = *(long *)(unaff_x19 + 0x30);
  if (lVar4 != 0) goto LAB_10909162c;
  if ((*(byte *)(unaff_x19 + 0x58) & 1) != 0) {
    lVar4 = 0;
    goto LAB_10909162c;
  }
  _objc_initWeak(auStack_38);
  func_0x00010909325c();
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_109091664;
  puStack_48 = &UNK_110876b10;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock();
  if (*(long *)(unaff_x19 + 0x68) == 1) {
    puVar3 = puVar2;
    func_0x000109093378();
    func_0x00010c077480();
    if (((ulong)puVar3 & 1) != 0) goto LAB_1090915f8;
LAB_109091608:
    func_0x000109093310();
    func_0x000107c27da4();
  }
  else {
    iVar1 = 2;
    func_0x000107c31924(2,0x11,0,0);
    if (iVar1 == 0) {
      func_0x000109093378();
      func_0x00010c077480();
      if (iVar1 == 0) goto LAB_109091608;
    }
LAB_1090915f8:
    (**(code **)(puVar2 + 0x10))(puVar2);
  }
  func_0x000109093180();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  lVar4 = *(long *)(unaff_x19 + 0x30);
LAB_10909162c:
  func_0x0001090931f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 109091664; end: 1090916d7;  */

void FUN_109091664(long param_1,undefined8 param_2)

{
  func_0x00010909341c();
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x58) & 1) == 0)) {
    func_0x00010bdf5740(param_1);
    func_0x00010beaa000(param_1,param_2,*(undefined8 *)(param_1 + 0x30));
    if (*(char *)(param_1 + 0x70) == '\x01') {
      if (*(char *)(param_1 + 0x59) == '\x01') {
        func_0x00010befc980(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x30))
        ;
      }
      *(undefined1 *)(param_1 + 0x70) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090916d8; end: 10909171f; -[SCAVFoundationNeoPlayerOutput shouldResetRenderers] */

bool FUN_1090916d8(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010bf0ff40();
  if ((uVar2 & 1) == 0) {
    if (*(char *)(param_1 + 0x59) == '\x01') {
      bVar1 = *(long *)(param_1 + 0x30) == 0;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 109091720; end: 109091723; -[SCAVFoundationNeoPlayerOutput shouldResetRenderersForAudio] */

void FUN_109091720(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0ff50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_audioSessionWasReset_1125a1978);
  return;
}



/* Entry: 109091724; end: 10909175b; -[SCAVFoundationNeoPlayerOutput teardown] */

void FUN_109091724(void)

{
  func_0x0001090934bc();
  func_0x0001090932bc(0xc2000000);
  func_0x0001090933f0();
  return;
}



/* Entry: 10909175c; end: 10909183f;  */

void FUN_10909175c(long param_1)

{
  func_0x00010becb060(*(undefined8 *)(param_1 + 0x20));
  func_0x0001090931f0();
  func_0x00010909325c();
  func_0x0001090931f0();
  func_0x000109093310();
  func_0x000107c27d8c();
  func_0x00010909327c();
  func_0x000109093180();
  return;
}



/* Entry: 109091840; end: 1090918b3; -[SCAVFoundationNeoPlayerOutput _teardownPrologue] */

void FUN_109091840(long param_1)

{
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (*(long *)(param_1 + 0x90) == 0) {
    func_0x00010c256800(*(undefined8 *)(param_1 + 0x30));
    func_0x00010bfb2fa0(*(undefined8 *)(param_1 + 0x30));
  }
  func_0x00010c256800(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bfb2f20(*(undefined8 *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x80) == '\x01') {
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  else {
    func_0x00010c221600(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c16bc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAudioEnabled__112638928,0);
  return;
}



/* Entry: 1090918b4; end: 109091953; -[SCAVFoundationNeoPlayerOutput _teardownEpilogue] */

void FUN_1090918b4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  func_0x000109093180();
  if (*(char *)(param_1 + 0x71) == '\x01') {
    func_0x000109093160();
    func_0x0001090931d4(FUN_109091954,0xc2000000);
    func_0x000109093310();
    func_0x000107c27d8c();
  }
  func_0x00010be01fc0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 109091954; end: 10909197b;  */

void FUN_109091954(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000109093348();
  func_0x0001090932ec();
  uVar1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x78);
  *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x78) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


