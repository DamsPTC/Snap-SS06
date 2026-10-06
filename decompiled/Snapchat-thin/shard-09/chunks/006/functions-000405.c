/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f63750; end: 106f6382f; -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler writeData:forCamera:dataSource:index:] */

undefined8
FUN_106f63750(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be01b80(param_1,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55d80(*(undefined8 *)(param_1 + 0x10),param_2,lVar1,1,0,0);
  func_0x00010bebc2a0(param_1,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25ce00(lVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = param_3;
  func_0x00010c14e020(param_3,param_2,lVar2,1);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 106f63830; end: 106f6383f; -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler _depthProtobufFilePath] */

void FUN_106f63830(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25ce10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stringByAppendingPathComponent__112674da8,
             &PTR____CFConstantStringClassReference_110e8f9b8);
  return;
}



/* Entry: 106f63840; end: 106f6387b; -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler _directoryForCamera:] */

void FUN_106f63840(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e8f278;
  if (param_3 != 2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e8f298;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106f6387c; end: 106f638b7; -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler _directoryForDataSource:] */

void FUN_106f6387c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110df1278;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e8f2f8;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106f638b8; end: 106f6394f; -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler _directoryPathForCamera:dataSource:] */

void FUN_106f638b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010be01b00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be01b20(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c25ce00(uVar3,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106f63950; end: 106f6397f; -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler _singleFrameFileNameWithIndex:] */

void FUN_106f63950(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e8f9d8);
  return;
}



/* Entry: 106f63980; end: 106f639af; -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler .cxx_destruct] */

void FUN_106f63980(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f639b0; end: 106f63b5f; -[SCSpectaclesAuxiliaryContentStoreListenerAnnouncer spectaclesAuxiliaryContentStore:didPrepareDepthForMediaIdentifier:] */

void FUN_106f639b0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    lVar3 = lVar2;
    do {
      if (lRam0000000000000000 != lVar1) {
        lVar3 = param_1;
        _objc_enumerationMutation(param_1);
      }
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c0f7fc0(lVar3);
      _objc_release(lVar3);
      _objc_release(param_4);
      lVar3 = param_3;
      _objc_release();
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2484d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_spectaclesAuxiliaryContentStore__11266fb58,
             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  return;
}



/* Entry: 106f63b60; end: 106f63b6f;  */

void FUN_106f63b60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2484d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_spectaclesAuxiliaryContentStore__11266fb58,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106f63b70; end: 106f63c93; -[SCSpectaclesDepthPreparationJob initWithMediaId:prepareBlock:cancelBlock:] */

undefined1 *
FUN_106f63b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f7f50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f63c94; end: 106f63c9b; -[SCSpectaclesDepthPreparationJob mediaId] */

undefined8 FUN_106f63c94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f63c9c; end: 106f63ca3; -[SCSpectaclesDepthPreparationJob prepareBlock] */

undefined8 FUN_106f63c9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f63ca4; end: 106f63cab; -[SCSpectaclesDepthPreparationJob cancelBlock] */

undefined8 FUN_106f63ca4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106f63cac; end: 106f63cb3; -[SCSpectaclesDepthPreparationJob progressListeners] */

undefined8 FUN_106f63cac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106f63cb4; end: 106f63cbb; -[SCSpectaclesDepthPreparationJob completionListeners] */

undefined8 FUN_106f63cb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106f63cbc; end: 106f63d0f; -[SCSpectaclesDepthPreparationJob .cxx_destruct] */

void FUN_106f63cbc(long param_1)

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



/* Entry: 106f63d10; end: 106f63da7; -[SCSpectaclesDepthPreparationQueue initWithPerformer:] */

undefined1 * FUN_106f63d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7f58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f63da8; end: 106f63f37; -[SCSpectaclesDepthPreparationQueue queueJobForMediaId:prioritized:prepareBlock:cancelBlock:progressListener:completionListener:] */

void FUN_106f63da8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uStack_60 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106f63f38; end: 106f6405b;  */

void FUN_106f63f38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined *)(param_1 + 0x48);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x00010be135c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126d3730;
      _objc_alloc(PTR_PTR_1126d3730);
      func_0x00010c0296a0();
      func_0x00010befa120(*(undefined8 *)(puVar1 + 8),param_2,puVar2);
    }
    puVar3 = puVar2;
    func_0x00010c1178a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retainBlock(uVar4);
    func_0x00010c14c720(puVar3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf44100(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    _objc_retainBlock(uVar4);
    func_0x00010c14c720(puVar3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(puVar3);
    if (*(char *)(param_1 + 0x50) == '\x01') {
      func_0x00010be80280(puVar1,param_2,puVar2);
    }
    func_0x00010be81920(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106f6405c; end: 106f640cb;  */

void FUN_106f6405c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x48,param_2 + 0x48);
  return;
}



/* Entry: 106f640cc; end: 106f641a3; -[SCSpectaclesDepthPreparationQueue prioritizeJobForMediaId:] */

void FUN_106f640cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f641a4; end: 106f64203;  */

void FUN_106f641a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be135c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010be80280(lVar1,param_2,lVar2);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f64204; end: 106f64333; -[SCSpectaclesDepthPreparationQueue awaitJobForMediaId:progressListener:completionListener:] */

void FUN_106f64204(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f64334; end: 106f64467;  */

void FUN_106f64334(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be135c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar2 == 0) {
      lVar6 = *(long *)(param_1 + 0x30);
      lVar5 = lVar1;
      _objc_opt_class(lVar1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar4);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar6 + 0x10))(lVar6,puVar4);
    }
    else {
      lVar5 = lVar2;
      func_0x00010c1178a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      _objc_retainBlock(uVar3);
      func_0x00010c14c720(lVar5);
      _objc_release(uVar3);
      _objc_release(lVar5);
      lVar5 = lVar2;
      func_0x00010bf44100(lVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = *(undefined **)(param_1 + 0x30);
      _objc_retainBlock(puVar4);
      func_0x00010c14c720(lVar5);
    }
    _objc_release(puVar4);
    _objc_release(lVar5);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f64468; end: 106f64543; -[SCSpectaclesDepthPreparationQueue _fetchQueuedJobForMediaId:] */

void FUN_106f64468(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106f64544;
    puStack_40 = &UNK_110985938;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010bfb2040(uVar2,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f64544; end: 106f6458f;  */

undefined8 FUN_106f64544(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5180(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106f64590; end: 106f6462b; -[SCSpectaclesDepthPreparationQueue _prioritizeQueuedJob:] */

void FUN_106f64590(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (param_3 != *(long *)(param_1 + 0x10)) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 8),param_2,param_3);
    func_0x00010c066b00(*(undefined8 *)(param_1 + 8),param_2,param_3,0);
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010bf2dfa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = *(long *)(param_1 + 0x10);
      func_0x00010bf2dfa0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))();
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f6462c; end: 106f6477b; -[SCSpectaclesDepthPreparationQueue _processNextJob] */

void FUN_106f6462c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c103880();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      _objc_release(uVar4);
      _objc_initWeak(auStack_48,param_1);
      lVar2 = *(long *)(param_1 + 0x10);
      func_0x00010c109020();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_106f6477c;
      puStack_58 = &UNK_1108681f8;
      _objc_copyWeak(auStack_50,auStack_48);
      puStack_98 = puVar1;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_106f64958;
      puStack_80 = &UNK_110985968;
      _objc_copyWeak(auStack_78,auStack_48);
      (**(code **)(lVar2 + 0x10))(lVar2,&puStack_70,&puStack_98);
      _objc_release(lVar2);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  return;
}



/* Entry: 106f6477c; end: 106f64837;  */

void FUN_106f6477c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    _objc_copyWeak(auStack_50,param_2 + 0x20);
    uStack_48 = param_1;
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106f64838; end: 106f64957;  */

void FUN_106f64838(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar3;
  long unaff_x23;
  long unaff_x24;
  undefined1 auStack_168 [8];
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
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
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    unaff_x21 = *(long *)(lVar1 + 0x10);
    func_0x00010c1178a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = unaff_x21;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      unaff_x23 = *plStack_110;
      do {
        unaff_x24 = 0;
        do {
          if (*plStack_110 != unaff_x23) {
            _objc_enumerationMutation(unaff_x21);
          }
          (**(code **)(*(long *)(lStack_118 + unaff_x24 * 8) + 0x10))
                    (*(undefined8 *)(param_1 + 0x28));
          unaff_x24 = unaff_x24 + 1;
        } while (lVar2 != unaff_x24);
        lVar2 = unaff_x21;
        func_0x00010bf52a60();
        unaff_x22 = 0;
      } while (lVar2 != 0);
    }
    _objc_release(unaff_x21);
  }
  lVar2 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_106f64958;
  lStack_160 = unaff_x24;
  lStack_158 = unaff_x23;
  uStack_150 = unaff_x22;
  lStack_148 = unaff_x21;
  lStack_140 = param_1;
  lStack_138 = lVar1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  lVar1 = lVar2 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    _objc_copyWeak(auStack_168,lVar2 + 0x20);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_168);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106f64958; end: 106f64a33;  */

void FUN_106f64958(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106f64a34; end: 106f64b3b;  */

void FUN_106f64a34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106f64b3c;
    puStack_50 = &UNK_110849810;
    ppuVar3 = &puStack_68;
    lStack_48 = lVar2;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puStack_90 = puVar1;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106f64c54;
    puStack_78 = &UNK_110842e18;
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x106f64c60;
    puStack_a0 = &UNK_110849530;
    ppuStack_98 = ppuVar3;
    lStack_70 = lVar2;
    _objc_retain();
    func_0x00010c0bce60(uVar4,param_2,&puStack_90,ppuVar3,ppuVar3,&puStack_b8);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)(lVar2 + 0x10) = 0;
    _objc_release(uVar4);
    func_0x00010be81920(lVar2);
    _objc_release(ppuStack_98);
    _objc_release(ppuVar3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 106f64b3c; end: 106f64c53;  */

void FUN_106f64b3c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bf44100();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      (**(code **)(*(long *)(lVar5 * 8) + 0x10))(*(long *)(lVar5 * 8),param_2);
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_2 + 0x20) + 8),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10));
  return;
}



/* Entry: 106f64c54; end: 106f64c6f;  */

void FUN_106f64c54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  return;
}



/* Entry: 106f64c70; end: 106f64cab; -[SCSpectaclesDepthPreparationQueue .cxx_destruct] */

void FUN_106f64c70(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f64cac; end: 106f64da7; -[SCSpectaclesImuDataSet initWithSensorBlob:] */

undefined8 FUN_106f64cac(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  uVar5 = 0;
  if (lVar1 != 0) {
    lVar2 = param_3;
    func_0x00010bf63640(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf649c0(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c15e240();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c067fc0();
    _objc_release(lVar1);
    lVar1 = (lVar4 - 1U) + lVar4 * 2;
    if (2 < lVar4 - 1U) {
      lVar1 = 9999;
    }
    func_0x00010c01d4e0(param_1,param_2,puVar3,lVar1);
    _objc_retain();
    _objc_release(puVar3);
    _objc_release(lVar2);
    uVar5 = param_1;
  }
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 106f64da8; end: 106f64e4b; -[SCSpectaclesImuDataSet initWithImuData:mediaType:] */

ulong FUN_106f64da8(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  if (param_4 - 7U < 2) {
    func_0x00010c02f940(param_1,param_2,param_3);
    uVar1 = param_1;
    func_0x00010c0804a0();
    if ((int)uVar1 != 0) {
LAB_106f64dfc:
      _objc_retain(param_1);
      uVar1 = param_1;
      goto LAB_106f64e28;
    }
  }
  else if (param_4 - 4U < 2) {
    func_0x00010c028180(param_1,param_2,param_3);
    uVar1 = param_1;
    func_0x00010c080480();
    if ((uVar1 & 1) != 0) goto LAB_106f64dfc;
  }
  uVar1 = 0;
LAB_106f64e28:
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f64e4c; end: 106f64f67; -[SCSpectaclesSixDofDataSet initWithData:error:] */

undefined1 * FUN_106f64e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f7f60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) {
LAB_106f64f20:
    _objc_retain(puVar1);
    puVar4 = (undefined1 *)puVar1;
  }
  else {
    puVar2 = PTR_PTR_1126d3090;
    _objc_alloc();
    func_0x00010c008360();
    if ((puVar2 != (undefined *)0x0) && (puVar3 = puVar2, func_0x00010c27dd80(), (int)puVar3 == 5))
    {
      puVar3 = puVar2;
      func_0x00010c23d060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar3 != (undefined *)0x0) {
        puVar3 = puVar2;
        func_0x00010c23d060(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be3aae0(puVar1);
        _objc_release(puVar3);
        _objc_release(puVar2);
        goto LAB_106f64f20;
      }
    }
    _objc_release(puVar2);
    puVar4 = (undefined1 *)0x0;
  }
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 106f64f68; end: 106f6519f; -[SCSpectaclesSixDofDataSet _initWithCheeriosData:error:] */

long FUN_106f64f68(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  
  puVar1 = PTR_PTR_1126d3738;
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_4);
  if (puVar1 == (undefined *)0x0) {
    lVar13 = 0;
  }
  else {
    puVar2 = PTR_PTR_1126d3740;
    _objc_alloc();
    puVar3 = puVar1;
    func_0x00010bf293e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2a5040();
    puVar5 = puVar1;
    func_0x00010bf293e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfe0640();
    puVar7 = puVar1;
    func_0x00010bf293e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb3520();
    puVar8 = puVar1;
    uVar12 = param_1;
    func_0x00010bf293e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c113980();
    puVar9 = puVar1;
    uVar15 = uVar12;
    func_0x00010bf293e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1139a0();
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c063100(param_1,uVar12,uVar15,puVar2,param_3,(long)(int)puVar4,(long)(int)puVar6,
                        puVar10,puVar11);
    uVar14 = (undefined4)param_1;
    uVar12 = *(undefined8 *)(param_2 + 0x18);
    *(undefined **)(param_2 + 0x18) = puVar2;
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar3);
    func_0x00010c29a200(puVar1);
    *(undefined4 *)(param_2 + 8) = uVar14;
    puVar2 = puVar1;
    func_0x00010bf0dda0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_2 + 0x10);
    *(undefined **)(param_2 + 0x10) = puVar3;
    _objc_release(uVar12);
    _objc_release(puVar2);
    _objc_retain(param_2);
    lVar13 = param_2;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  return lVar13;
}



/* Entry: 106f651a0; end: 106f653bf;  */

void FUN_106f651a0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_78 [24];
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c270ac0(param_2);
  dVar7 = (double)lVar1 * 1000.0;
  _CMTimeMakeWithSeconds(auStack_78,dVar7,60000);
  lVar1 = param_2;
  func_0x00010c27ada0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2be880();
  lVar2 = param_2;
  dVar8 = dVar7;
  func_0x00010c27ada0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2beba0();
  lVar3 = param_2;
  dVar9 = dVar8;
  func_0x00010c27ada0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bef20();
  dVar10 = dVar9;
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126d3748;
  _objc_alloc_init(PTR_PTR_1126d3748);
  lVar1 = param_2;
  func_0x00010c11d000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a1240();
  func_0x00010c2244c0(puVar4);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c11d000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2be880();
  func_0x00010c227500(puVar4);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c11d000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2beba0();
  func_0x00010c2276e0(puVar4);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c11d000(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c2bef20(lVar1);
  func_0x00010c227900(puVar4);
  _objc_release(lVar1);
  puVar5 = puVar4;
  func_0x00010bf99900(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c141420();
  dVar11 = dVar10;
  func_0x00010c0fc7c0(puVar5);
  dVar12 = dVar11;
  func_0x00010c2beda0(puVar5);
  puVar6 = PTR_PTR_1126d3750;
  _objc_alloc(PTR_PTR_1126d3750);
  func_0x00010c052940(dVar10,dVar11,dVar12,dVar7,dVar8,dVar9);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106f653c0; end: 106f653ff; -[SCSpectaclesSixDofDataSet cheeriosData] */

void FUN_106f653c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 8);
  uStack_40 = *(undefined8 *)PTR__kCMTimeRangeInvalid_110348660;
  uStack_28 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__kCMTimeRangeInvalid_110348660 + 0x20);
  func_0x00010bf38b60(param_1,param_2,&uStack_40);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f65400; end: 106f657ff; -[SCSpectaclesSixDofDataSet cheeriosDataTrimmedToRange:] */

undefined *
FUN_106f65400(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d3090;
  _objc_alloc_init();
  func_0x00010c21acc0();
  puVar2 = PTR_PTR_1126d3738;
  _objc_alloc_init(PTR_PTR_1126d3738);
  func_0x00010c221760(*(undefined4 *)(param_3 + 8));
  puVar3 = PTR_PTR_1126d3758;
  _objc_alloc_init();
  func_0x00010c2a5040(*(undefined8 *)(param_3 + 0x18));
  func_0x00010c2256c0(puVar3);
  func_0x00010bfe0640(*(undefined8 *)(param_3 + 0x18));
  func_0x00010c1a7d00(puVar3);
  func_0x00010bfb3520(*(undefined8 *)(param_3 + 0x18));
  func_0x00010c19e020(puVar3);
  func_0x00010c113980(*(undefined8 *)(param_3 + 0x18));
  func_0x00010c1e3300(puVar3);
  func_0x00010c1139a0(*(undefined8 *)(param_3 + 0x18));
  func_0x00010c1e3320(puVar3);
  func_0x00010c176400(puVar2);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  lVar11 = *(long *)(param_3 + 0x10);
  _objc_retain(lVar11);
  lVar4 = lVar11;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar12 = *plStack_140;
    do {
      lVar13 = 0;
      do {
        if (*plStack_140 != lVar12) {
          _objc_enumerationMutation(lVar11);
        }
        lVar14 = *(long *)(lStack_148 + lVar13 * 8);
        if (((((*(byte *)((long)param_5 + 0xc) & 1) == 0) ||
             ((*(byte *)((long)param_5 + 0x24) & 1) == 0)) || (param_5[5] != 0)) ||
           ((long)param_5[3] < 0)) {
LAB_106f6556c:
          puVar5 = PTR_PTR_1126d3760;
          _objc_alloc_init(PTR_PTR_1126d3760);
          if (lVar14 == 0) {
            uStack_1a0 = 0;
            uStack_198 = 0;
            uStack_190 = 0;
          }
          else {
            func_0x00010c2709c0(&uStack_1a0,lVar14);
          }
          _CMTimeGetSeconds(&uStack_1a0);
          func_0x00010c215e60(puVar5);
          puVar6 = PTR_PTR_1126d3768;
          _objc_alloc_init(PTR_PTR_1126d3768);
          func_0x00010c27ada0(lVar14);
          func_0x00010c227500(puVar6);
          func_0x00010c27ada0(lVar14);
          func_0x00010c2276e0(param_2,puVar6);
          func_0x00010c27ada0(lVar14);
          func_0x00010c227900(puVar6);
          func_0x00010c219b80(puVar5);
          puVar7 = PTR_PTR_1126d3748;
          _objc_alloc_init(PTR_PTR_1126d3748);
          func_0x00010bf99900(lVar14);
          func_0x00010bf99900(lVar14);
          func_0x00010bf99900(lVar14);
          func_0x00010c1a1000(puVar7);
          puVar8 = PTR_PTR_1126d3770;
          _objc_alloc_init(PTR_PTR_1126d3770);
          func_0x00010c2a1240(puVar7);
          func_0x00010c2244c0(puVar8);
          func_0x00010c2be880(puVar7);
          func_0x00010c227500(puVar8);
          func_0x00010c2beba0(puVar7);
          func_0x00010c2276e0(puVar8);
          func_0x00010c2bef20(puVar7);
          func_0x00010c227900(puVar8);
          func_0x00010c1e6300(puVar5);
          puVar9 = puVar2;
          func_0x00010bf0dda0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
        }
        else {
          if (lVar14 == 0) {
            uStack_168 = 0;
            uStack_160 = 0;
            uStack_158 = 0;
          }
          else {
            func_0x00010c2709c0(&uStack_168,lVar14);
          }
          uStack_198 = param_5[1];
          uStack_1a0 = *param_5;
          uStack_188 = param_5[3];
          param_2 = param_5[2];
          uStack_178 = param_5[5];
          uStack_180 = param_5[4];
          puVar10 = &uStack_1a0;
          uStack_190 = param_2;
          _CMTimeRangeContainsTime(puVar10,&uStack_168);
          if ((int)puVar10 != 0) goto LAB_106f6556c;
        }
        lVar13 = lVar13 + 1;
      } while (lVar4 != lVar13);
      lVar4 = lVar11;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar11);
  puVar5 = puVar2;
  func_0x00010bf63640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c202c60(puVar1);
  _objc_release(puVar5);
  puVar5 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    return *(undefined **)(puVar1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 106f65800; end: 106f65807; -[SCSpectaclesSixDofDataSet sixDofFrames] */

undefined8 FUN_106f65800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f65808; end: 106f65837; -[SCSpectaclesSixDofDataSet setSixDofFrames:] */

void FUN_106f65808(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f65838; end: 106f6583f; -[SCSpectaclesSixDofDataSet cameraData] */

undefined8 FUN_106f65838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106f65840; end: 106f6586f; -[SCSpectaclesSixDofDataSet setCameraData:] */

void FUN_106f65840(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f65870; end: 106f65877; -[SCSpectaclesSixDofDataSet videoFps] */

undefined4 FUN_106f65870(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106f65878; end: 106f6587f; -[SCSpectaclesSixDofDataSet setVideoFps:] */

void FUN_106f65878(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 106f65880; end: 106f658af; -[SCSpectaclesSixDofDataSet .cxx_destruct] */

void FUN_106f65880(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106f658b0; end: 106f658f7; +[SCSpectaclesDepthExtractionResult cancelled] */

void FUN_106f658b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3650;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f658f8; end: 106f65943; +[SCSpectaclesDepthExtractionResult depthExtracted] */

void FUN_106f658f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3650;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f65944; end: 106f659af; +[SCSpectaclesDepthExtractionResult extractionFailedWithError:] */

void FUN_106f65944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d3650;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f659b0; end: 106f65a17; +[SCSpectaclesDepthExtractionResult preparationFailedWithError:] */

void FUN_106f659b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d3650;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f65a18; end: 106f65a3b; -[SCSpectaclesDepthExtractionResult copyWithZone:] */

undefined8 FUN_106f65a18(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106f65a3c; end: 106f65ab3; -[SCSpectaclesDepthExtractionResult hash] */

void FUN_106f65a3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126f7f68;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f65ab4; end: 106f65af7; -[SCSpectaclesDepthExtractionResult internalInit] */

void FUN_106f65ab4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f7f68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f65af8; end: 106f65baf; -[SCSpectaclesDepthExtractionResult isEqual:] */

long FUN_106f65af8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106f65b88:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106f65b94;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106f65b94;
        }
        goto LAB_106f65b88;
      }
    }
    lVar3 = 0;
  }
LAB_106f65b94:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106f65bb0; end: 106f65c9b; -[SCSpectaclesDepthExtractionResult matchCancelled:preparationFailed:extractionFailed:depthExtracted:] */

void FUN_106f65bb0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_106f65c6c;
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
LAB_106f65c50:
      (*pcVar3)(lVar2);
      goto LAB_106f65c6c;
    }
    if ((lVar2 != 1) || (param_4 == 0)) goto LAB_106f65c6c;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar2 = param_4;
  }
  else {
    if (lVar2 != 2) {
      if ((lVar2 != 3) || (param_6 == 0)) goto LAB_106f65c6c;
      pcVar3 = *(code **)(param_6 + 0x10);
      lVar2 = param_6;
      goto LAB_106f65c50;
    }
    if (param_5 == 0) goto LAB_106f65c6c;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_106f65c6c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f65c9c; end: 106f65ccb; -[SCSpectaclesDepthExtractionResult .cxx_destruct] */

void FUN_106f65c9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106f65ccc; end: 106f65d2f; +[SCSpectaclesAssetMetadataExtractableMedia assetWithAsset:] */

void FUN_106f65ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d3538;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f65d30; end: 106f65d9b; +[SCSpectaclesAssetMetadataExtractableMedia imageDataWithImageData:] */

void FUN_106f65d30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d3538;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f65d9c; end: 106f65dbf; -[SCSpectaclesAssetMetadataExtractableMedia copyWithZone:] */

undefined8 FUN_106f65d9c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106f65dc0; end: 106f65e37; -[SCSpectaclesAssetMetadataExtractableMedia hash] */

void FUN_106f65dc0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126f7f70;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f65e38; end: 106f65e7b; -[SCSpectaclesAssetMetadataExtractableMedia internalInit] */

void FUN_106f65e38(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f7f70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f65e7c; end: 106f65f33; -[SCSpectaclesAssetMetadataExtractableMedia isEqual:] */

long FUN_106f65e7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106f65f0c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106f65f18;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106f65f18;
        }
        goto LAB_106f65f0c;
      }
    }
    lVar3 = 0;
  }
LAB_106f65f18:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106f65f34; end: 106f65fb7; -[SCSpectaclesAssetMetadataExtractableMedia matchAsset:imageData:] */

void FUN_106f65f34(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_106f65f9c;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_106f65f9c;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_106f65f9c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f65fb8; end: 106f66077; -[SCSpectaclesAssetMetadataExtractableMedia .cxx_destruct] */

void FUN_106f65fb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106f66078; end: 106f66083;  */

bool FUN_106f66078(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106f66084; end: 106f660eb; +[SCPbSpectaclesAttitudeFrame descriptor] */

void FUN_106f66084(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8668 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ad60,
                        &PTR____CFConstantStringClassReference_110e8fa18,&PTR_DAT_113195bc8,
                        &PTR_s_timestamp_113195ec0,0xc,0x38,0x1c);
    puRam00000001136c8668 = puVar1;
  }
  return;
}



/* Entry: 106f660ec; end: 106f66153; +[SCPbSpectaclesAlignmentFrame descriptor] */

void FUN_106f660ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8670 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4adb0,
                        &PTR____CFConstantStringClassReference_110e8fa38,&PTR_DAT_113195bc8,
                        &PTR_s_timestamp_113195c60,4,0x28,0x1c);
    puRam00000001136c8670 = puVar1;
  }
  return;
}



/* Entry: 106f66154; end: 106f661bb; +[SCPbSpectaclesDepthQualityFrame descriptor] */

void FUN_106f66154(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8678 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ae00,
                        &PTR____CFConstantStringClassReference_110e8fa58,&PTR_DAT_113195bc8,
                        &PTR_s_timestamp_113195be0,2,0x10,0x1c);
    puRam00000001136c8678 = puVar1;
  }
  return;
}



/* Entry: 106f661bc; end: 106f66223; +[SCPbSpectaclesImuAlignmentCompFrame descriptor] */

void FUN_106f661bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8680 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ae50,
                        &PTR____CFConstantStringClassReference_110e8fa78,&PTR_DAT_113195bc8,
                        &PTR_DAT_113195c20,2,0x10,0x1c);
    puRam00000001136c8680 = puVar1;
  }
  return;
}



/* Entry: 106f66224; end: 106f6628b; +[SCPbSpectaclesCameraData descriptor] */

void FUN_106f66224(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8688 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4aea0,
                        &PTR____CFConstantStringClassReference_110e8fa98,&PTR_DAT_113195bc8,
                        &PTR_s_width_113195de0,7,0x30,0x1c);
    puRam00000001136c8688 = puVar1;
  }
  return;
}



/* Entry: 106f6628c; end: 106f662f3; +[SCPbSpectaclesFactoryData descriptor] */

void FUN_106f6628c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8690 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4aef0,
                        &PTR____CFConstantStringClassReference_110e8fab8,&PTR_DAT_113195bc8,
                        &PTR_DAT_113195ce0,4,0x20,0x1c);
    puRam00000001136c8690 = puVar1;
  }
  return;
}



/* Entry: 106f662f4; end: 106f6635b; +[SCPbSpectaclesEulerAnglesData descriptor] */

void FUN_106f662f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8698 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4af40,
                        &PTR____CFConstantStringClassReference_110e8fad8,&PTR_DAT_113195bc8,
                        &PTR_s_timestamp_113195d60,4,0x18,0x1c);
    puRam00000001136c8698 = puVar1;
  }
  return;
}



/* Entry: 106f6635c; end: 106f6643f; +[SCPbSpectaclesDepthMetadata descriptor] */

void FUN_106f6635c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c86a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4af90,
                        &PTR____CFConstantStringClassReference_110e8faf8,&PTR_DAT_113195bc8,
                        &PTR_DAT_113196040,0xc,0x60,0x1c);
    puRam00000001136c86a0 = puVar1;
  }
  return;
}



/* Entry: 106f66440; end: 106f6644b;  */

bool FUN_106f66440(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 106f6644c; end: 106f664b3; +[SCPbSpectaclesSixdofMetadataFile descriptor] */

void FUN_106f6644c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c86b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4b030,
                        &PTR____CFConstantStringClassReference_110e8fb38,&PTR_DAT_1131961c0,
                        &PTR_DAT_1131961d8,2,0x10,0x1c);
    puRam00000001136c86b0 = puVar1;
  }
  return;
}



/* Entry: 106f664b4; end: 106f66537; -[SCAuxiliaryCodableDataType initWithKey:dataClass:] */

undefined1 *
FUN_106f664b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7f78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f66538; end: 106f6655f; -[SCAuxiliaryCodableDataType key] */

void FUN_106f66538(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f66560; end: 106f66587; -[SCAuxiliaryCodableDataType dataClass] */

void FUN_106f66560(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f66588; end: 106f6664b; -[SCAuxiliaryCodableDataType dataWithPath:] */

void FUN_106f66588(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64aa0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    func_0x00010c1ec620();
    puVar3 = puVar2;
    func_0x00010bf67000(puVar2,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      _objc_retain(puVar3);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f6664c; end: 106f66703; -[SCAuxiliaryCodableDataType persistData:toPath:] */

void FUN_106f6664c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uStack_38 = 0;
  puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,param_3,0,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_38;
  _objc_retain(uStack_38);
  uVar3 = uVar1;
  if (puVar2 != (undefined *)0x0) {
    uStack_40 = uVar1;
    func_0x00010c14e040(puVar2,param_2,param_4,0,&uStack_40);
    uVar3 = uStack_40;
    _objc_retain(uStack_40);
    _objc_release(uVar1);
  }
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 106f66704; end: 106f6670f; -[SCAuxiliaryCodableDataType .cxx_destruct] */

void FUN_106f66704(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f66710; end: 106f66783; -[SCAuxiliaryFileBackedRawData initWithPath:] */

undefined1 * FUN_106f66710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7f80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f66784; end: 106f667f7; -[SCAuxiliaryFileBackedRawData initWithRawData:] */

undefined1 * FUN_106f66784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7f80;
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



/* Entry: 106f667f8; end: 106f6687b; -[SCAuxiliaryFileBackedRawData persistToPath:] */

void FUN_106f667f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uStack_38 = 0;
  func_0x00010c2be540(*(undefined8 *)(param_1 + 8),param_2,param_3,0,&uStack_38);
  uVar1 = uStack_38;
  _objc_retain(uStack_38);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106f6687c; end: 106f66913; -[SCAuxiliaryFileBackedRawData data] */

void FUN_106f6687c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    uStack_38 = 0;
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64aa0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,*(undefined8 *)(param_1 + 0x10),0
                        ,&uStack_38);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uStack_38;
    _objc_retain(uStack_38);
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 8);
    _objc_retain(lVar4);
    _objc_release(uVar1);
  }
  else {
    _objc_retain(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106f66914; end: 106f6693b; -[SCAuxiliaryFileBackedRawData path] */

void FUN_106f66914(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f6693c; end: 106f6696b; -[SCAuxiliaryFileBackedRawData .cxx_destruct] */

void FUN_106f6693c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f6696c; end: 106f669df; -[SCAuxiliaryFileBackedRawDataType initWithKey:] */

undefined1 * FUN_106f6696c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7f88;
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



/* Entry: 106f669e0; end: 106f66a07; -[SCAuxiliaryFileBackedRawDataType key] */

void FUN_106f669e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f66a08; end: 106f66a13; -[SCAuxiliaryFileBackedRawDataType dataClass] */

void FUN_106f66a08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d3550);
  return;
}



/* Entry: 106f66a14; end: 106f66a9f; -[SCAuxiliaryFileBackedRawDataType isDataValid:] */

bool FUN_106f66a14(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d3550;
  _objc_opt_class(PTR_PTR_1126d3550);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf63640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
  return uVar3 != 0;
}



/* Entry: 106f66aa0; end: 106f66aeb; -[SCAuxiliaryFileBackedRawDataType dataWithPath:] */

void FUN_106f66aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d3550;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0345e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f66aec; end: 106f66af7; -[SCAuxiliaryFileBackedRawDataType persistData:toPath:] */

void FUN_106f66aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fa270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_persistToPath__11261c2b8,param_4);
  return;
}



/* Entry: 106f66af8; end: 106f66b03; -[SCAuxiliaryFileBackedRawDataType .cxx_destruct] */

void FUN_106f66af8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f66b04; end: 106f66b87; -[SCAuxiliaryLazyProtobufDataType initWithKey:protoClass:] */

undefined1 *
FUN_106f66b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7f90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f66b88; end: 106f66baf; -[SCAuxiliaryLazyProtobufDataType key] */

void FUN_106f66b88(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f66bb0; end: 106f66bbb; -[SCAuxiliaryLazyProtobufDataType dataClass] */

void FUN_106f66bb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126ae720);
  return;
}


