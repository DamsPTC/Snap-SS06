/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f6a718; end: 107f6a76b; -[SCMemoriesSnapThumbnailGeneratorBuilderImpl .cxx_destruct] */

void FUN_107f6a718(long param_1)

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



/* Entry: 107f6a76c; end: 107f6a863; -[SCMemoriesStoryThumbnailUpdateTimer initWithCircumstanceEngine:] */

undefined1 * FUN_107f6a76c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fbd88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f6a864; end: 107f6a8db; -[SCMemoriesStoryThumbnailUpdateTimer startUpdatingStoryThumbnails] */

void FUN_107f6a864(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined1 *)(param_1 + 0x10) = 1;
  if (*(long *)(param_1 + 8) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf07b60();
    _objc_release(puVar1);
    if (puVar2 != (undefined *)0x2) {
                    /* WARNING: Could not recover jumptable at 0x00010bec1c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startTimer_11258e0b8);
      return;
    }
  }
  return;
}



/* Entry: 107f6a8dc; end: 107f6a8ef; -[SCMemoriesStoryThumbnailUpdateTimer stopUpdatingStoryThumbnails] */

void FUN_107f6a8dc(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec3a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopTimer_11258e828);
    return;
  }
  return;
}



/* Entry: 107f6a8f0; end: 107f6a8ff; -[SCMemoriesStoryThumbnailUpdateTimer _didEnterBackground:] */

void FUN_107f6a8f0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec3a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopTimer_11258e828);
    return;
  }
  return;
}



/* Entry: 107f6a900; end: 107f6a947; -[SCMemoriesStoryThumbnailUpdateTimer _willEnterForeground:] */

void FUN_107f6a900(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if ((*(char *)(param_1 + 0x10) == '\x01') && (*(long *)(param_1 + 8) == 0)) {
    func_0x00010bec1c40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f6a948; end: 107f6a9d3; -[SCMemoriesStoryThumbnailUpdateTimer _startTimer] */

void FUN_107f6a948(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c270940(0x3ff4cccccccccccd,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,param_1,
                      PTR_s__timerDidFire__112539c00,0,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010bf5fe80(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f6a9d4; end: 107f6a9ff; -[SCMemoriesStoryThumbnailUpdateTimer _stopTimer] */

void FUN_107f6a9d4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f6aa00; end: 107f6aa47; -[SCMemoriesStoryThumbnailUpdateTimer _timerDidFire:] */

void FUN_107f6aa00(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f6aa48; end: 107f6aa77; -[SCMemoriesStoryThumbnailUpdateTimer .cxx_destruct] */

void FUN_107f6aa48(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f6aa78; end: 107f6ab67;  */

void FUN_107f6aa78(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  
  _objc_retain();
  puVar2 = param_1;
  func_0x00010bf529e0();
  if (puVar2 < (undefined *)0xb) {
    _objc_retain(param_1);
    puVar3 = param_1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010bf529e0();
    dVar6 = 0.0;
    lVar5 = 10;
    do {
      puVar4 = param_1;
      func_0x00010bf529e0();
      puVar1 = puVar4 + -1;
      if ((undefined *)(long)dVar6 <= puVar4 + -1) {
        puVar1 = (undefined *)(long)dVar6;
      }
      puVar4 = param_1;
      func_0x00010c0dfd40(param_1,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar4);
      dVar6 = (double)puVar3 / 10.0 + dVar6;
      _objc_release(puVar4);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107f6ab68; end: 107f6abbb;  */

void FUN_107f6ab68(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113728940 != -1) {
    func_0x00010002a2fc(0x113728940,&PTR___NSConcreteGlobalBlock_110a14d68);
  }
  uVar1 = uRam0000000113728948;
  _objc_retain(uRam0000000113728948);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f6abbc; end: 107f6abeb;  */

void FUN_107f6abbc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = &UNK_10f4687b9;
  _dispatch_queue_create(&UNK_10f4687b9,0);
  uVar1 = puRam0000000113728948;
  puRam0000000113728948 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f6abec; end: 107f6ad6f; -[SCGalleryVideoAssetExportSession initWithImageManager:videoAsset:useVideoImportServices:videoImporter:userTrackedLogger:circumstanceEngine:] */

undefined1 *
FUN_107f6abec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126fbd90;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b33c0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x48) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f6ad70; end: 107f6add3; -[SCGalleryVideoAssetExportSession dealloc] */

void FUN_107f6ad70(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    _dispatch_source_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126fbd90;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107f6add4; end: 107f6addf; -[SCGalleryVideoAssetExportSession exportWithCompletionQueue:completionHandler:] */

void FUN_107f6add4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_exportWithCompletionQueue_progre_1125c4e78,param_3,0,param_4);
  return;
}



/* Entry: 107f6ade0; end: 107f6afb3; -[SCGalleryVideoAssetExportSession exportWithCompletionQueue:progress:completionHandler:] */

void FUN_107f6ade0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = param_4;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = param_6;
  _objc_retainBlock();
  _objc_release(param_6);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = uVar3;
  _objc_release(uVar1);
  _CACurrentMediaTime();
  if (*(char *)(param_2 + 0x48) == '\x01') {
    lVar2 = *(long *)(param_2 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      func_0x00010be26e40(param_2);
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_107f6afb4;
      puStack_80 = &UNK_110875f70;
      lStack_78 = param_2;
      _objc_retain(lVar2);
      lStack_70 = lVar2;
      _objc_retain(param_5);
      lStack_60 = param_5;
      _objc_retain(param_4);
      uStack_68 = param_4;
      uStack_58 = param_1;
      func_0x00010c0f7fc0(uVar3,param_3,&puStack_98);
      _objc_release(uStack_68);
      _objc_release(lStack_60);
      _objc_release(lStack_70);
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_107f6b218;
    puStack_c0 = &UNK_110845188;
    lStack_b8 = param_2;
    _objc_retain(param_5);
    lStack_a8 = param_5;
    _objc_retain(param_4);
    uStack_b0 = param_4;
    uStack_a0 = param_1;
    func_0x00010c0f7fc0(uVar3,param_3,&puStack_d8);
    _objc_release(uStack_b0);
    lVar2 = lStack_a8;
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107f6afb4; end: 107f6b1fb;  */

void FUN_107f6afb4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be3eae0();
  if ((int)lVar1 == 0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf165a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bdc0da0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf2f5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50) = uVar5;
    _objc_release(uVar7);
    uVar5 = uVar4;
    func_0x00010bfbc3e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar9);
    _objc_retain(puVar2);
    func_0x00010c297260(uVar5);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(puVar2);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010be26e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s__handleCancellation_112567530);
      return;
    }
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be2abb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x20),
             PTR_s__handleImportedAVAsset_progress__112568488,param_2,*(undefined8 *)(lVar1 + 0x40),
             *(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30),
             *(undefined8 *)(lVar1 + 0x38));
  return;
}



/* Entry: 107f6b1fc; end: 107f6b217;  */

void FUN_107f6b1fc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2abb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x20),
             PTR_s__handleImportedAVAsset_progress__112568488,param_2,
             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 107f6b218; end: 107f6b41f;  */

void FUN_107f6b218(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be3eae0();
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be26e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__handleCancellation_112567530);
    return;
  }
  puVar3 = PTR__OBJC_CLASS___PHVideoRequestOptions_1126d2ae0;
  _objc_alloc_init(PTR__OBJC_CLASS___PHVideoRequestOptions_1126d2ae0);
  func_0x00010c18ba80();
  func_0x00010c1cc000(puVar3);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  func_0x00010c134700(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 107f6b420; end: 107f6b4bf;  */

void FUN_107f6b420(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be3eae0();
  if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be26e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__handleCancellation_112567530);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be2abb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x48),uVar1,
               PTR_s__handleImportedAVAsset_progress__112568488,*(long *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x40),0,*(undefined8 *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x38));
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde3920(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107f6b4c0; end: 107f6b4e7; -[SCGalleryVideoAssetExportSession cancelExport] */

void FUN_107f6b4c0(long param_1)

{
  func_0x00010bfec280(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010be26e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleCancellation_112567530);
  return;
}



/* Entry: 107f6b4e8; end: 107f6bd7b; -[SCGalleryVideoAssetExportSession _handleImportedAVAsset:progress:importServices:importInfo:completionQueue:startTime:] */

void FUN_107f6b4e8(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,long param_6,long param_7,undefined *param_8,undefined8 param_9
                  )

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  double dStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  double dStack_150;
  undefined8 uStack_148;
  double dStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [64];
  
  dVar21 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar2 = param_5;
  func_0x00010c0cc0c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_7;
  func_0x00010c240ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (lVar3 == 0) {
    puVar2 = param_5;
    func_0x00010c0cc0c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_7;
    func_0x00010bf9e3c0();
    uVar17 = (undefined4)lVar16;
    _objc_release(puVar2);
  }
  else {
    uVar17 = 3;
  }
  puVar2 = PTR__OBJC_CLASS___AVComposition_1126cfa20;
  _objc_retain(param_5);
  _objc_opt_class(puVar2);
  puVar4 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  puVar2 = param_5;
  if (((ulong)puVar4 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(param_5);
  if (puVar2 != (undefined *)0x0) {
    uVar1 = (uint)*(undefined8 *)(param_3 + 0x10);
    func_0x00010c0c6ac0();
    if ((uVar1 >> 0x11 & 1) != 0) {
      func_0x00010be305a0(param_1,param_3);
      goto LAB_107f6bd1c;
    }
  }
  puVar4 = param_5;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = param_5;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if ((*(byte *)(param_3 + 0x48) & 1) == 0) {
    FUN_107f6bd7c(puVar5 == (undefined *)0x0,0,*(undefined8 *)(param_3 + 0x68));
    dVar21 = param_1;
  }
  if (puVar5 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde3920(param_3);
    _objc_release(puVar4);
  }
  else {
    uVar7 = *(ulong *)(param_3 + 0x10);
    func_0x00010c0fce40();
    uVar8 = *(ulong *)(param_3 + 0x10);
    func_0x00010c0fcaa0();
    uVar9 = uVar8;
    func_0x00010b6fc1b0();
    func_0x00010c106f40(auStack_c0,puVar5);
    puVar10 = auStack_c0;
    func_0x00010b691288();
    if (((uVar9 & 1) == 0) && (uVar8 < uVar7)) {
      if (puVar10 < (undefined1 *)0x3) {
        puVar19 = *(undefined1 **)(&UNK_10deeb6b8 + (long)puVar10 * 8);
      }
      else {
        puVar19 = (undefined1 *)0x0;
      }
      _CACurrentMediaTime();
      if (puVar19 == puVar10) {
        uVar18 = 3;
        goto LAB_107f6b7e4;
      }
      puVar4 = PTR__OBJC_CLASS___AVMutableComposition_1126beaa8;
      dVar22 = dVar21;
      func_0x00010bf45600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d5d20(puVar5);
      puVar12 = puVar4;
      func_0x00010bef9f20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f620(&uStack_f0,puVar5);
      uVar15 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      dVar23 = *(double *)PTR__kCMTimeZero_110348670;
      uVar18 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      dStack_140 = dVar23;
      uStack_138 = uVar15;
      uStack_130 = uVar18;
      func_0x00010c067160(puVar12);
      func_0x00010b69119c(&uStack_170,dVar22,param_2,puVar19);
      uStack_e8 = uStack_168;
      uStack_f0 = uStack_170;
      uStack_d8 = uStack_158;
      uStack_e0 = uStack_160;
      uStack_c8 = uStack_148;
      dStack_d0 = dStack_150;
      func_0x00010c1e0300(puVar12);
      dVar22 = dStack_150;
      if (puVar6 != (undefined *)0x0) {
        puVar13 = puVar4;
        func_0x00010bef9f20(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f620(&uStack_f0,puVar6);
        dStack_140 = dVar23;
        uStack_138 = uVar15;
        uStack_130 = uVar18;
        func_0x00010c067160(puVar13);
        _objc_release(puVar13);
        dVar22 = dVar23;
      }
      _objc_release(puVar12);
      uVar18 = 3;
LAB_107f6ba6c:
      lVar20 = *(long *)PTR__AVAssetExportPresetHighestQuality_110347eb8;
      _objc_retain(lVar20);
      lVar16 = *(long *)(param_3 + 0x80);
      if (lVar16 != 0) {
        _objc_retain(lVar16);
        _objc_release(lVar20);
        lVar20 = lVar16;
      }
      lVar16 = lVar20;
      if (*(char *)(param_3 + 0x79) == '\x01') {
        if (puVar4 == (undefined *)0x0) {
          uStack_f0 = 0;
          uStack_e8 = 0;
          uStack_e0 = 0;
        }
        else {
          func_0x00010bf8b160(&uStack_f0,puVar4);
        }
        _CMTimeGetSeconds(&uStack_f0);
        dVar23 = dVar22;
        func_0x00010bf8b160(*(undefined8 *)(param_3 + 0x10));
        if (dVar23 < dVar22) {
          lVar16 = *(long *)PTR__AVAssetExportPresetMediumQuality_110347ec0;
          _objc_retain(lVar16);
          _objc_release(lVar20);
        }
      }
      puVar12 = PTR_PTR_1126b24f0;
      func_0x00010bfbde00();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
      _objc_alloc();
      func_0x00010bff4280();
      uVar15 = *(undefined8 *)(param_3 + 0x20);
      *(undefined **)(param_3 + 0x20) = puVar13;
      _objc_release(uVar15);
      func_0x00010c1d7200(*(undefined8 *)(param_3 + 0x20));
      func_0x00010c1d6fc0(*(undefined8 *)(param_3 + 0x20));
      func_0x00010c200aa0(*(undefined8 *)(param_3 + 0x20));
      func_0x00010c19bb00(*(undefined8 *)(param_3 + 0x20));
      lVar20 = *(long *)(param_3 + 0x68);
      _objc_retain(lVar20);
      puVar13 = PTR___NSConcreteStackBlock_11034bd00;
      uVar15 = *(undefined8 *)(param_3 + 0x20);
      puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_1c0 = 0xc2000000;
      pcStack_1b8 = FUN_107f6bf3c;
      puStack_1b0 = &UNK_110925c58;
      lStack_1a8 = param_3;
      lStack_1a0 = lVar20;
      dStack_188 = dVar21;
      _objc_retain(puVar12);
      puStack_198 = puVar12;
      uStack_180 = uVar18;
      _objc_retain(lVar3);
      lStack_190 = lVar3;
      uStack_178 = uVar17;
      func_0x00010bf9cee0(uVar15);
      if (param_6 != 0) {
        puVar14 = PTR___dispatch_source_type_timer_11034be38;
        _dispatch_source_create(PTR___dispatch_source_type_timer_11034be38,0,0,param_9);
        uVar18 = *(undefined8 *)(param_3 + 0x28);
        *(undefined **)(param_3 + 0x28) = puVar14;
        _objc_release(uVar18);
        uVar15 = *(undefined8 *)(param_3 + 0x28);
        uVar18 = 0;
        _dispatch_time(0,0);
        _dispatch_source_set_timer(uVar15,uVar18,330000000,100000000);
        _objc_initWeak(&uStack_f0,param_3);
        uVar18 = *(undefined8 *)(param_3 + 0x28);
        puStack_1f8 = puVar13;
        uStack_1f0 = 0xc2000000;
        uStack_1e8 = 0x107f6c0f4;
        puStack_1e0 = &UNK_110848708;
        _objc_copyWeak(auStack_1d0,&uStack_f0);
        _objc_retain(param_6);
        lStack_1d8 = param_6;
        _dispatch_source_set_event_handler(uVar18,&puStack_1f8);
        _dispatch_resume(*(undefined8 *)(param_3 + 0x28));
        _objc_release(lStack_1d8);
        _objc_destroyWeak(auStack_1d0);
        _objc_destroyWeak(&uStack_f0);
      }
      _objc_release(lStack_190);
      _objc_release(puStack_198);
    }
    else {
      _CACurrentMediaTime();
      uVar18 = 0;
LAB_107f6b7e4:
      dVar22 = dVar21;
      _objc_retain(param_5);
      puVar4 = param_5;
      if ((param_7 == 0) || ((*(byte *)(param_3 + 0x48) & 1) == 0)) goto LAB_107f6ba6c;
      lVar16 = param_7;
      func_0x00010bf165a0(param_7);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = param_8;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      if (puVar12 == (undefined *)0x0) {
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
      }
      uStack_e8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
      uStack_f0 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
      uStack_d8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
      uStack_e0 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
      uStack_c8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
      dStack_d0 = *(double *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
      lVar20 = param_7;
      func_0x00010bf9d400();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar20;
      func_0x00010bf2f5e0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = *(undefined8 *)(param_3 + 0x50);
      *(long *)(param_3 + 0x50) = lVar11;
      _objc_release(uVar18);
      lVar11 = lVar20;
      func_0x00010bfbc3e0(lVar20);
      _objc_retainAutoreleasedReturnValue();
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_107f6be54;
      puStack_110 = &UNK_110a14de8;
      lStack_108 = param_3;
      _objc_retain(lVar3);
      lStack_100 = lVar3;
      uStack_f8 = uVar17;
      func_0x00010c297260(lVar11);
      _objc_release(lVar11);
      _objc_release(lStack_100);
    }
    _objc_release(lVar20);
    _objc_release(puVar12);
    _objc_release(lVar16);
    _objc_release(puVar4);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
LAB_107f6bd1c:
  _objc_release(puVar2);
  _objc_release(lVar3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 107f6bd7c; end: 107f6be53;  */

void FUN_107f6bd7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _CACurrentMediaTime();
  puVar1 = PTR_PTR_1126d87f0;
  _objc_opt_new(PTR_PTR_1126d87f0);
  func_0x00010c182d40();
  func_0x00010c1b92e0(puVar1);
  func_0x00010c1ed9a0(puVar1);
  func_0x00010c209120(puVar1);
  func_0x00010c219740(puVar1);
  uVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0b2e60(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f6be54; end: 107f6bf3b;  */

void FUN_107f6be54(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf9d420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    if (*(long *)(lVar3 + 0x28) != 0) {
      _dispatch_source_cancel();
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
      _objc_release(uVar2);
      lVar3 = *(long *)(param_1 + 0x20);
    }
    func_0x00010bde3920(lVar3);
  }
  else {
    lVar1 = param_2;
    func_0x00010bf9d420(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde3920(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f6bf3c; end: 107f6c07f;  */

void FUN_107f6bf3c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be3eae0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be26e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x20),PTR_s__handleCancellation_112567530);
    return;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c252d60();
  if (lVar2 == 3) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
  }
  FUN_107f6bd7c(*(undefined8 *)(param_1 + 0x40),lVar2 != 3,1,*(undefined8 *)(param_1 + 0x28));
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  _objc_retain(uVar3);
  func_0x00010c0f7fc0(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  return;
}



/* Entry: 107f6c080; end: 107f6c157;  */

void FUN_107f6c080(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x4c) == '\x01') {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    uVar6 = 0;
  }
  else {
    if (*(long *)(lVar2 + 0x28) != 0) {
      _dispatch_source_cancel(*(long *)(lVar2 + 0x28));
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
      _objc_release(uVar3);
      lVar2 = *(long *)(param_1 + 0x20);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = 0;
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde3930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar2,PTR_s__completeWithVideoURL_rotationOr_1125567e8,uVar3,uVar4,uVar5,uVar1,uVar6);
  return;
}



/* Entry: 107f6c158; end: 107f6c507; -[SCGalleryVideoAssetExportSession _handleSloMoImportedAVComposition:metadata:externalMediaSource:progress:importServices:importInfo:completionQueue:startTime:] */

void FUN_107f6c158(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar1 = param_4;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  FUN_107f6bd7c(param_1,lVar2 == 0,0,*(undefined8 *)(param_2 + 0x68));
  if (lVar2 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde3920(param_2);
    _objc_release(puVar5);
  }
  else {
    uVar7 = *(undefined8 *)PTR__AVAssetExportPreset1920x1080_110347e98;
    _objc_retain(uVar7);
    puVar5 = PTR_PTR_1126d87e8;
    func_0x00010c2639c0();
    uVar8 = uVar7;
    if ((int)puVar5 != 0) {
      uVar8 = *(undefined8 *)(param_2 + 0x80);
      _objc_retain(uVar8);
      _objc_release(uVar7);
    }
    puVar3 = PTR_PTR_1126b24f0;
    func_0x00010bfbde00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126d87e8;
    _objc_alloc();
    uStack_a8 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 8);
    uStack_b0 = *(undefined8 *)PTR__kCMTimeRangeZero_110348668;
    uStack_98 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x18);
    uStack_a0 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x10);
    uStack_88 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x28);
    uStack_90 = *(undefined8 *)(PTR__kCMTimeRangeZero_110348668 + 0x20);
    func_0x00010c060b20();
    uVar7 = *(undefined8 *)(param_2 + 0x58);
    *(undefined **)(param_2 + 0x58) = puVar5;
    _objc_release(uVar7);
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    if (param_7 != 0) {
      puVar4 = PTR___dispatch_source_type_timer_11034be38;
      _dispatch_source_create(PTR___dispatch_source_type_timer_11034be38,0,0,param_10);
      uVar7 = *(undefined8 *)(param_2 + 0x28);
      *(undefined **)(param_2 + 0x28) = puVar4;
      _objc_release(uVar7);
      uVar6 = *(undefined8 *)(param_2 + 0x28);
      uVar7 = 0;
      _dispatch_time(0,0);
      _dispatch_source_set_timer(uVar6,uVar7,330000000,100000000);
      _objc_initWeak(&uStack_b0,param_2);
      uVar7 = *(undefined8 *)(param_2 + 0x28);
      puStack_e0 = puVar5;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_107f6c508;
      puStack_c8 = &UNK_110848708;
      _objc_copyWeak(auStack_b8,&uStack_b0);
      _objc_retain(param_7);
      lStack_c0 = param_7;
      _dispatch_source_set_event_handler(uVar7,&puStack_e0);
      _dispatch_resume(*(undefined8 *)(param_2 + 0x28));
      _objc_release(lStack_c0);
      _objc_destroyWeak(auStack_b8);
      _objc_destroyWeak(&uStack_b0);
    }
    uVar7 = *(undefined8 *)(param_2 + 0x68);
    uVar6 = *(undefined8 *)(param_2 + 0x58);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(uVar7);
    func_0x00010bf9d360(uVar6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(uVar7);
    _objc_release(puVar3);
    _objc_release(uVar8);
  }
  _objc_release(lVar2);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107f6c508; end: 107f6c56b;  */

void FUN_107f6c508(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_2 + 0x20);
    func_0x00010c1179c0(*(undefined8 *)(lVar1 + 0x58));
    (**(code **)(lVar2 + 0x10))(lVar2);
    func_0x00010c1179c0(*(undefined8 *)(lVar1 + 0x58));
    if (1.0 <= param_1) {
      _dispatch_source_cancel(*(undefined8 *)(lVar1 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f6c56c; end: 107f6c60b;  */

void FUN_107f6c56c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010be3eae0();
  if ((uVar3 & 1) == 0) {
    FUN_107f6bd7c(*(undefined8 *)(param_1 + 0x40),param_2 == 0 || param_3 != 0,1,
                  *(undefined8 *)(param_1 + 0x28));
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107f72060(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  (**(code **)(lVar2 + 0x10))
            (lVar2,param_2,uVar1,*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x48),
             param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f6c60c; end: 107f6c76b; -[SCGalleryVideoAssetExportSession _completeWithVideoURL:rotationOrientation:metadata:externalMediaSource:error:] */

void FUN_107f6c60c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar2 = *(long *)(param_1 + 0x30);
  if ((lVar2 != 0) && (lVar3 = *(long *)(param_1 + 0x38), lVar3 != 0)) {
    _objc_retain(lVar2);
    _objc_retainBlock();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_107f6c76c;
    puStack_88 = &UNK_110a14e78;
    lStack_68 = lVar3;
    _objc_retain(param_3);
    uStack_80 = param_3;
    uStack_60 = param_4;
    _objc_retain(param_5);
    uStack_78 = param_5;
    uStack_58 = param_6;
    _objc_retain(param_7);
    uStack_70 = param_7;
    _objc_retain(lVar3);
    func_0x00010007380c(lVar2,&puStack_a0);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(lStack_68);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = *(long *)(param_1 + 0x30);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107f6c76c; end: 107f6c787;  */

void FUN_107f6c76c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f6c784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107f6c788; end: 107f6c7a7; -[SCGalleryVideoAssetExportSession _isCancelled] */

bool FUN_107f6c788(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c296d80(uVar1);
  return 0 < (int)uVar1;
}



/* Entry: 107f6c7a8; end: 107f6c8c3; -[SCGalleryVideoAssetExportSession _handleCancellation] */

void FUN_107f6c7a8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x00010be3eae0();
  if ((int)lVar2 != 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      _dispatch_source_cancel();
    }
    func_0x00010bf2e3c0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf2e3c0(*(undefined8 *)(param_1 + 0x58));
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
    if (((*(long *)(param_1 + 0x58) == 0) && (lVar2 = *(long *)(param_1 + 0x30), lVar2 != 0)) &&
       (lVar3 = *(long *)(param_1 + 0x38), lVar3 != 0)) {
      _objc_retain(lVar2);
      _objc_retainBlock();
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_107f6c8c4;
      puStack_40 = &UNK_110849530;
      lStack_38 = lVar3;
      _objc_retain();
      func_0x00010007380c(lVar2,&puStack_58);
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = 0;
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = 0;
      _objc_release(uVar1);
      _objc_release(lStack_38);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x50));
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 107f6c8c4; end: 107f6c8e3;  */

void FUN_107f6c8c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f6c8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0,0,0);
  return;
}



/* Entry: 107f6c8e4; end: 107f6c8eb; -[SCGalleryVideoAssetExportSession optimizesForNetworkUse] */

undefined1 FUN_107f6c8e4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x78);
}



/* Entry: 107f6c8ec; end: 107f6c8f3; -[SCGalleryVideoAssetExportSession setOptimizesForNetworkUse:] */

void FUN_107f6c8ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 107f6c8f4; end: 107f6c8fb; -[SCGalleryVideoAssetExportSession presetName] */

undefined8 FUN_107f6c8f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107f6c8fc; end: 107f6c92b; -[SCGalleryVideoAssetExportSession setPresetName:] */

void FUN_107f6c8fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f6c92c; end: 107f6c933; -[SCGalleryVideoAssetExportSession degradeQualityForSlowMotionVideo] */

undefined1 FUN_107f6c92c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x79);
}



/* Entry: 107f6c934; end: 107f6c93b; -[SCGalleryVideoAssetExportSession setDegradeQualityForSlowMotionVideo:] */

void FUN_107f6c934(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x79) = param_3;
  return;
}



/* Entry: 107f6c93c; end: 107f6c9fb; -[SCGalleryVideoAssetExportSession .cxx_destruct] */

void FUN_107f6c93c(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 107f6c9fc; end: 107f6cb73; -[SCGalleryVideoAssetSegmentedExportSession initWithImageManager:videoAsset:segmentDuration:useVideoImportServices:videoImporter:userTrackedLogger:circumstanceEngine:] */

undefined1 *
FUN_107f6c9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126fbd98;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x88) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined8 *)((long)puVar1 + 0x98) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xa0);
    *(undefined8 *)((long)puVar1 + 0xa0) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107f6cb74; end: 107f6cc7b; -[SCGalleryVideoAssetSegmentedExportSession exportWithCompletionQueue:completionHandler:] */

void FUN_107f6cb74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  _objc_release(uVar1);
  lVar2 = param_1 + 0xb0;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107f6cc7c;
    puStack_50 = &UNK_110842e18;
    lStack_48 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
  }
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x30));
  _objc_release(param_3);
  return;
}



/* Entry: 107f6cc7c; end: 107f6cf47;  */

void FUN_107f6cc7c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x20) + 0xb0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126c3290;
  _objc_alloc();
  func_0x00010bf20c00(lVar2);
  func_0x00010c013de0();
  uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x78) = puVar3;
  _objc_release(uVar16);
  func_0x00010c1781e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78));
  func_0x00010befbb60(lVar2);
  func_0x00010c219b60(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c08de00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010c2793a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar16);
  _objc_release(lVar1);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126d87f8;
  _objc_alloc(PTR_PTR_1126d87f8);
  func_0x00010c01cb00();
  func_0x00010c1d5dc0();
  _objc_initWeak(auStack_108,*(undefined8 *)(lVar2 + 0x20));
  uVar16 = *(undefined8 *)(*(long *)(lVar2 + 0x20) + 0x30);
  func_0x00010c11de00(uVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_110,auStack_108);
  func_0x00010bf9d340(puVar3);
  _objc_release(uVar16);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  _objc_release(puVar3);
  return;
}



/* Entry: 107f6cf48; end: 107f6d093;  */

void FUN_107f6cf48(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126d87f8;
  _objc_alloc(PTR_PTR_1126d87f8);
  func_0x00010c01cb00();
  func_0x00010c1d5dc0();
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf9d340(puVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  return;
}



/* Entry: 107f6d094; end: 107f6d133;  */

void FUN_107f6d094(undefined4 param_1,long param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107f6d134;
  puStack_48 = &UNK_11085ae18;
  _objc_copyWeak(auStack_40,param_2 + 0x20);
  uStack_38 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 107f6d134; end: 107f6d17b;  */

void FUN_107f6d134(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1e46a0(*(float *)(param_1 + 0x28) * 0.5,*(undefined8 *)(lVar1 + 0x78),param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f6d17c; end: 107f6d493;  */

void FUN_107f6d17c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar5 = *(long *)(param_2 + 0x20);
  if (param_3 == 0) {
    uVar1 = 0;
    func_0x00010bde3940(lVar5);
  }
  else {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(lVar5 + 0x48);
    *(long *)(lVar5 + 0x48) = param_3;
    _objc_release(uVar1);
    *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x50) = param_4;
    lVar5 = *(long *)(param_2 + 0x20);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(lVar5 + 0x68);
    *(undefined8 *)(lVar5 + 0x68) = param_5;
    _objc_release(uVar1);
    *(undefined4 *)(*(long *)(param_2 + 0x20) + 0x70) = param_6;
    puVar2 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    func_0x00010bf0b9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18);
    *(undefined **)(*(long *)(param_2 + 0x20) + 0x18) = puVar2;
    _objc_release(uVar1);
    if (*(long *)(*(long *)(param_2 + 0x20) + 0x18) == 0) {
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
    }
    else {
      func_0x00010bf8b160(&uStack_88);
    }
    _CMTimeGetSeconds(&uStack_88);
    *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20) = param_1;
    *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x58) = 1;
    lVar5 = *(long *)(param_2 + 0x20);
    dVar6 = *(double *)(lVar5 + 0x20);
    dVar7 = *(double *)(lVar5 + 0x28);
    if (dVar7 < dVar6) {
      *(long *)(lVar5 + 0x58) = (long)(dVar6 / dVar7);
      lVar5 = *(long *)(param_2 + 0x20);
      if (1.0 <= dVar6 - dVar7 * (double)(long)(dVar6 / dVar7)) {
        *(long *)(lVar5 + 0x58) = *(long *)(lVar5 + 0x58) + 1;
        lVar5 = *(long *)(param_2 + 0x20);
      }
    }
    if ((*(long *)(lVar5 + 0x58) == 1) && ((*(byte *)(lVar5 + 0x88) & 1) == 0)) {
      puVar2 = PTR_PTR_1126b24f0;
      func_0x00010bfbde00();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c099760();
      _objc_retain(0);
      _objc_release(puVar3);
      if ((int)puVar4 == 0) {
        lVar5 = *(long *)(param_2 + 0x20);
        uVar1 = 0;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_70 = puVar2;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0d3c80();
        uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x60);
        *(undefined **)(*(long *)(param_2 + 0x20) + 0x60) = puVar4;
        _objc_release(uVar1);
        _objc_release(puVar3);
        lVar5 = *(long *)(param_2 + 0x20);
        uVar1 = *(undefined8 *)(lVar5 + 0x48);
      }
      func_0x00010bde3940(lVar5);
      _objc_release(0);
      _objc_release(puVar2);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x60);
      *(undefined **)(*(long *)(param_2 + 0x20) + 0x60) = puVar2;
      _objc_release(uVar1);
      uVar1 = 0;
      func_0x00010be0c880(*(undefined8 *)(param_2 + 0x20));
    }
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = param_3;
  func_0x00010be08ea0();
                    /* WARNING: Could not recover jumptable at 0x00010be0c8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s__exportSegmentAtIndex_passthroug_112560bd0,uVar1,lVar5);
  return;
}



/* Entry: 107f6d494; end: 107f6d4c3; -[SCGalleryVideoAssetSegmentedExportSession _exportSegmentAtIndex:] */

void FUN_107f6d494(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be08ea0();
                    /* WARNING: Could not recover jumptable at 0x00010be0c8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__exportSegmentAtIndex_passthroug_112560bd0,param_3,uVar1);
  return;
}



/* Entry: 107f6d4c4; end: 107f6d7db; -[SCGalleryVideoAssetSegmentedExportSession _exportSegmentAtIndex:passthroughExportPresetEnabled:] */

void FUN_107f6d4c4(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  ulong uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (param_3 == *(ulong *)(param_1 + 0x58)) {
                    /* WARNING: Could not recover jumptable at 0x00010bde3950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__completeWithVideoURL_segmentURL_1125567f0,
               *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x60),
               *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x68),
               *(undefined4 *)(param_1 + 0x70),0);
    return;
  }
  dVar11 = *(double *)(param_1 + 0x28);
  dVar10 = dVar11 * (double)param_3;
  if (param_3 == *(ulong *)(param_1 + 0x58) - 1) {
    dVar11 = *(double *)(param_1 + 0x20) - dVar10;
  }
  _CMTimeMakeWithSeconds(&uStack_f0,dVar10,600);
  _CMTimeMakeWithSeconds(auStack_b8,dVar11,600);
  _CMTimeRangeMake(&uStack_a0,&uStack_f0,auStack_b8);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b24f0;
  func_0x00010bfbde00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined8 *)PTR__AVAssetExportPresetPassthrough_110347ec8;
  if (param_4 == 0) {
    puVar1 = (undefined8 *)PTR__AVAssetExportPresetHighestQuality_110347eb8;
  }
  uVar8 = *puVar1;
  _objc_retain(uVar8);
  puVar5 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
  _objc_alloc();
  func_0x00010bff4280();
  func_0x00010c1d7200();
  func_0x00010c1d6fc0(puVar5);
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  func_0x00010c214ec0(puVar5);
  func_0x00010c200aa0(puVar5);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_107f6d7dc;
  puStack_120 = &UNK_110863fc8;
  _objc_retain(puVar5);
  puStack_118 = puVar5;
  lStack_110 = param_1;
  _objc_retain(puVar4);
  puStack_108 = puVar4;
  _objc_retain(uVar8);
  uStack_100 = uVar8;
  uStack_f8 = param_3;
  func_0x00010bf9cee0(puVar5);
  if (*(long *)(param_1 + 0x80) != 0) {
    _dispatch_source_cancel();
  }
  puVar6 = PTR___dispatch_source_type_timer_11034be38;
  _dispatch_source_create
            (PTR___dispatch_source_type_timer_11034be38,0,0,PTR___dispatch_main_q_11034be20);
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  *(undefined **)(param_1 + 0x80) = puVar6;
  _objc_release(uVar7);
  uVar9 = *(undefined8 *)(param_1 + 0x80);
  uVar7 = 0;
  _dispatch_time(0,0);
  _dispatch_source_set_timer(uVar9,uVar7,330000000,100000000);
  _objc_initWeak(&uStack_f0,param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  puStack_170 = puVar2;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_107f6d970;
  puStack_158 = &UNK_110842a68;
  _objc_copyWeak(auStack_148,&uStack_f0);
  puStack_150 = puVar5;
  uStack_140 = param_3;
  _objc_retain(puVar5);
  _dispatch_source_set_event_handler(uVar7,&puStack_170);
  _dispatch_resume(*(undefined8 *)(param_1 + 0x80));
  _objc_release(puStack_150);
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(&uStack_f0);
  _objc_release(uStack_100);
  _objc_release(puStack_108);
  _objc_release(puStack_118);
  _objc_release(puVar5);
  _objc_release(uVar8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 107f6d7dc; end: 107f6d8db;  */

void FUN_107f6d7dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c252d60();
  if (lVar2 == 3) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_107f6d8dc;
  puStack_78 = &UNK_11094eca0;
  lStack_70 = *(long *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(lStack_70 + 0x30);
  uStack_88 = 0xc2000000;
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = uVar1;
  _objc_retain(uVar4);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = uVar4;
  uStack_58 = uVar3;
  uStack_48 = lVar2 == 3;
  _objc_retain(uVar3);
  func_0x00010c0f7fc0(uVar5,param_2,&puStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uVar3);
  return;
}



/* Entry: 107f6d8dc; end: 107f6d96f;  */

void FUN_107f6d8dc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010beb3920(lVar1,param_2,*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be0c8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__exportSegmentAtIndex_passthroug_112560bd0,
               *(undefined8 *)(param_1 + 0x40),1);
    return;
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010be0c890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__exportSegmentAtIndex__112560bc0,
               *(long *)(param_1 + 0x40) + 1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bde3950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__completeWithVideoURL_segmentURL_1125567f0,0,0,0,0,0,
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 107f6d970; end: 107f6d9e3;  */

void FUN_107f6d970(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_2 + 0x30);
    func_0x00010c117720(*(undefined8 *)(param_2 + 0x20));
    func_0x00010c1e46a0(((param_1 + (float)uVar2) / (float)*(long *)(lVar1 + 0x58)) * 0.5 + 0.5,
                        *(undefined8 *)(lVar1 + 0x78),param_3,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107f6d9e4; end: 107f6dd13; -[SCGalleryVideoAssetSegmentedExportSession _completeWithVideoURL:segmentURLs:orientation:metadata:externalMediaSource:error:] */

void FUN_107f6d9e4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  if (*(long *)(param_1 + 0x80) != 0) {
    _dispatch_source_cancel();
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    _objc_release(uVar2);
  }
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_107f6dd14;
  puStack_110 = &UNK_110842e18;
  lStack_108 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_128);
  lVar5 = *(long *)(param_1 + 0x38);
  if ((lVar5 != 0) && (lVar6 = *(long *)(param_1 + 0x40), lVar6 != 0)) {
    _objc_retain(lVar5);
    _objc_retainBlock();
    puStack_180 = puVar3;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_107f6dd48;
    puStack_168 = &UNK_110a14ed8;
    lStack_140 = lVar6;
    _objc_retain(param_3);
    lStack_160 = param_3;
    _objc_retain(param_4);
    lStack_158 = param_4;
    uStack_138 = param_5;
    _objc_retain(param_6);
    uStack_150 = param_6;
    uStack_130 = param_7;
    _objc_retain(param_8);
    uStack_148 = param_8;
    _objc_retain(lVar6);
    func_0x00010007380c(lVar5,&puStack_180);
    _objc_release(uStack_148);
    _objc_release(uStack_150);
    _objc_release(lStack_158);
    _objc_release(lStack_160);
    _objc_release(lStack_140);
    _objc_release(lVar6);
    _objc_release(lVar5);
    lVar5 = *(long *)(param_1 + 0x38);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(lVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar2);
  if ((param_3 == 0) && (*(long *)(param_1 + 0x48) != 0)) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar3);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar2);
  lVar5 = param_4;
  func_0x00010bf529e0();
  if ((lVar5 == 0) && (lVar5 = *(long *)(param_1 + 0x60), lVar5 != 0)) {
    _objc_retain(lVar5);
    lVar6 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar4 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12cc60();
        _objc_release(puVar3);
        lVar4 = lVar4 + 1;
      } while (lVar6 != lVar4);
      lVar6 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_3 + 0x20) + 0x78));
  uVar2 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x78);
  *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x78) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f6dd14; end: 107f6dd47;  */

void FUN_107f6dd14(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12c960(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f6dd48; end: 107f6dd63;  */

void FUN_107f6dd48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f6dd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
            (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x50),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 107f6dd64; end: 107f6dd83; -[SCGalleryVideoAssetSegmentedExportSession _enablePassthroughExportPreset] */

void FUN_107f6dd64(long param_1)

{
  if (*(long *)(param_1 + 0xa0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0xa0),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110ec9518,0,0);
    return;
  }
  return;
}



/* Entry: 107f6dd84; end: 107f6de67; -[SCGalleryVideoAssetSegmentedExportSession _shouldEnabledCameraRollNoAudioFixWithInputAsset:outputURL:currentPreset:] */

undefined8
FUN_107f6dd84(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x000109126a88();
  uVar4 = 0;
  if (((uVar1 & 1) == 0) && (param_5 != *(long *)PTR__AVAssetExportPresetPassthrough_110347ec8)) {
    uVar1 = param_3;
    func_0x000109126d54();
    if ((int)uVar1 == 0) {
      uVar4 = 0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___AVAsset_1126aff38;
      func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x000109126d54();
      if (((ulong)puVar3 & 1) == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0xa0);
        func_0x00010bf1f440(uVar4,param_2,&PTR____CFConstantStringClassReference_110ec9538,0,0);
      }
      else {
        uVar4 = 0;
      }
      _objc_release(puVar2);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 107f6de68; end: 107f6de6f; -[SCGalleryVideoAssetSegmentedExportSession optimizesForNetworkUse] */

undefined1 FUN_107f6de68(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa8);
}



/* Entry: 107f6de70; end: 107f6de77; -[SCGalleryVideoAssetSegmentedExportSession setOptimizesForNetworkUse:] */

void FUN_107f6de70(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 107f6de78; end: 107f6de8f; -[SCGalleryVideoAssetSegmentedExportSession progressContainerViewController] */

void FUN_107f6de78(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f6de90; end: 107f6de9b; -[SCGalleryVideoAssetSegmentedExportSession setProgressContainerViewController:] */

void FUN_107f6de90(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xb0,param_3);
  return;
}



/* Entry: 107f6de9c; end: 107f6df63; -[SCGalleryVideoAssetSegmentedExportSession .cxx_destruct] */

void FUN_107f6de9c(long param_1)

{
  _objc_destroyWeak(param_1 + 0xb0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f6df64; end: 107f6df73; -[SCMemoriesCommonVideoImportStrategy initWithInitialExportSessionPreset:fallbackPreset:] */

void FUN_107f6df64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c01dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithInitialExportSessionPres_1125e50e8,param_3,param_4,3,1,0);
  return;
}



/* Entry: 107f6df74; end: 107f6e037; -[SCMemoriesCommonVideoImportStrategy initWithInitialExportSessionPreset:fallbackPreset:retryMaxAttempts:allowDownloadFromiCloud:requestUnmodifiedOriginal:] */

undefined1 *
FUN_107f6df74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fbda0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
    *(undefined1 *)((long)puVar1 + 0x21) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f6e038; end: 107f6e03f; -[SCMemoriesCommonVideoImportStrategy retryAVAssetImportMaxAttempts] */

undefined8 FUN_107f6e038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f6e040; end: 107f6e067; -[SCMemoriesCommonVideoImportStrategy initialExportSessionPreset] */

void FUN_107f6e040(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f6e068; end: 107f6e08f; -[SCMemoriesCommonVideoImportStrategy exportSessionPresetForFailedExportWithPreset:failureCount:] */

void FUN_107f6e068(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f6e090; end: 107f6e097; -[SCMemoriesCommonVideoImportStrategy outputFilePath] */

undefined8 FUN_107f6e090(void)

{
  return 0;
}



/* Entry: 107f6e098; end: 107f6e09f; -[SCMemoriesCommonVideoImportStrategy rotateLandscapeVideoToPortraitOrientationRight] */

undefined8 FUN_107f6e098(void)

{
  return 0;
}



/* Entry: 107f6e0a0; end: 107f6e0a7; -[SCMemoriesCommonVideoImportStrategy allowDownloadFromiCloud] */

undefined1 FUN_107f6e0a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 107f6e0a8; end: 107f6e0af; -[SCMemoriesCommonVideoImportStrategy requestUnmodifiedOriginal] */

undefined1 FUN_107f6e0a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 107f6e0b0; end: 107f6e0df; -[SCMemoriesCommonVideoImportStrategy .cxx_destruct] */

void FUN_107f6e0b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f6e0e0; end: 107f6e2e7;  */

undefined8
FUN_107f6e0e0(double param_1,double param_2,undefined8 param_3,ulong param_4,int param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
  _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
  func_0x00010c18ba80();
  func_0x00010c1ec960(puVar1);
  func_0x00010c1cc000(puVar1);
  if (param_5 != 0) {
    func_0x00010c210f80(puVar1);
  }
  uVar2 = param_4;
  func_0x00010c0fce40();
  uVar3 = param_4;
  func_0x00010c0fcaa0();
  if (uVar3 < uVar2) {
    uVar2 = param_4;
    func_0x00010c0fcaa0(param_4);
    uVar3 = param_4;
    func_0x00010c0fce40(param_4);
    param_2 = param_1 * ((double)uVar2 / (double)uVar3);
  }
  else {
    uVar2 = param_4;
    func_0x00010c0fce40(param_4);
    uVar3 = param_4;
    func_0x00010c0fcaa0(param_4);
    param_1 = param_2 * ((double)uVar2 / (double)uVar3);
  }
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  dVar6 = 6.81691147847594e-313;
  uStack_60 = 0x2020000000;
  uStack_58 = 1;
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_retain(param_6);
  uVar5 = param_3;
  func_0x00010c1357a0(param_1 * dVar6,param_2 * dVar6,param_3);
  _objc_release(puVar4);
  *(undefined1 *)(puStack_68 + 3) = 0;
  _objc_release(param_6);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 107f6e2e8; end: 107f6e453;  */

void FUN_107f6e2e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c067fc0();
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    if ((*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) == '\x01') &&
       ((*(byte *)(param_1 + 0x30) & 1) == 0)) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_107f6e454;
      puStack_60 = &UNK_110a14f08;
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      uStack_50 = uVar3;
      _objc_retain(param_2);
      uStack_48 = (undefined4)uVar1;
      uStack_44 = (undefined1)uVar2;
      uStack_58 = param_2;
      func_0x000100162d98("APPSTORE",&puStack_78);
      _objc_release(uStack_58);
      _objc_release(uStack_50);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,uVar1,uVar2)
      ;
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107f6e454; end: 107f6e46b;  */

void FUN_107f6e454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f6e468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined4 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x34));
  return;
}



/* Entry: 107f6e46c; end: 107f6e75b;  */

void FUN_107f6e46c(double param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,ulong param_6,int param_7,undefined1 param_8,long param_9,
                  undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  double dVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 auStack_140 [5];
  undefined8 auStack_118 [5];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  func_0x00010c14e120(puVar4);
  uVar5 = param_6;
  func_0x00010c0fce40();
  dVar11 = (double)uVar5;
  uVar6 = param_6;
  func_0x00010c0fcaa0();
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  dVar12 = (double)uVar6;
  uStack_9f = dVar11 <= dVar12;
  dVar10 = param_1 * param_4;
  dVar3 = param_1 * param_3;
  if (dVar12 < dVar11) {
    dVar10 = param_1 * param_3;
    dVar3 = param_1 * param_4;
  }
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_107f6e75c;
  puStack_b0 = &UNK_110a14f68;
  _objc_retain(param_10);
  ppuVar7 = &puStack_c8;
  uStack_a8 = param_10;
  uStack_a0 = param_8;
  _objc_retainBlock();
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_107f6e8f4;
  puStack_d8 = &UNK_110a14f98;
  _objc_retain(param_9);
  ppuVar8 = &puStack_f0;
  lStack_d0 = param_9;
  _objc_retainBlock();
  puVar9 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
  _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
  func_0x00010c1ec960();
  if (param_7 == 0) {
    func_0x00010c18ba80(puVar9);
    func_0x00010c1cc000(puVar9);
    puVar1 = auStack_140;
    uVar2 = 0x107f6e910;
  }
  else {
    func_0x00010c18ba80(puVar9);
    func_0x00010c1cc000(puVar9);
    puVar1 = auStack_118;
    uVar2 = 0x107f6e904;
  }
  if (param_9 != 0) {
    func_0x00010c1e47a0(puVar9);
  }
  if (uVar5 == 0) {
    dVar12 = 0.0;
  }
  else if (uVar6 == 0) {
    dVar10 = 0.0;
    dVar12 = dVar3;
  }
  else {
    dVar11 = dVar11 / dVar12;
    dVar12 = 0.0;
    if (dVar11 != 0.0) {
      if (dVar11 == INFINITY) {
        dVar10 = 0.0;
        dVar12 = dVar3;
      }
      else {
        dVar12 = dVar11 * dVar10;
        if (dVar3 <= dVar11 * dVar10) {
          dVar10 = dVar3 / dVar11;
          dVar12 = dVar3;
        }
      }
    }
  }
  *puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puVar1[1] = 0xc2000000;
  puVar1[2] = uVar2;
  puVar1[3] = &UNK_1108e5788;
  _objc_retain(ppuVar7);
  puVar1[4] = ppuVar7;
  func_0x00010c1357a0((long)dVar12,(long)dVar10,param_5);
  _objc_release(puVar1[4]);
  _objc_release(puVar9);
  _objc_release(ppuVar8);
  _objc_release(lStack_d0);
  _objc_release(ppuVar7);
  _objc_release(uStack_a8);
  _objc_release(puVar4);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 107f6e75c; end: 107f6e8f3;  */

void FUN_107f6e75c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_3 + 0x20);
  if (lVar1 != 0) {
    if (param_4 == 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0,0,0,0);
    }
    else {
      lVar1 = param_4;
      if (*(char *)(param_3 + 0x28) == '\x01') {
        func_0x00010bfe8380(param_4);
      }
      else if ((*(byte *)(param_3 + 0x29) & 1) == 0) {
        func_0x00010c23d0a0(param_4);
        uVar5 = param_1;
        func_0x00010c14e120(param_4);
        uVar2 = 0;
        _UIGraphicsBeginImageContextWithOptions(param_2,param_1,uVar5,0);
        _UIGraphicsGetCurrentContext();
        _CGContextTranslateCTM(0,param_1);
        _CGContextRotateCTM(0xbff921fb54442d18,uVar2);
        func_0x00010c23d0a0(param_4);
        func_0x000100841590();
        func_0x00010bf89920(param_4);
        _UIGraphicsGetImageFromCurrentImageContext();
        _objc_retainAutoreleasedReturnValue();
        _UIGraphicsEndImageContext();
        _objc_release(param_4);
        param_4 = 0;
        if (*(char *)(param_3 + 0x29) == '\0') {
          param_4 = 3;
        }
      }
      else {
        param_4 = 0;
      }
      lVar3 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = lVar3;
        func_0x00010bf1f3c0(lVar3);
      }
      (**(code **)(*(long *)(param_3 + 0x20) + 0x10))
                (*(long *)(param_3 + 0x20),lVar1,0,param_4,lVar4);
      _objc_release(lVar3);
      param_4 = lVar1;
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107f6e8f4; end: 107f6e91b;  */

void FUN_107f6e8f4(double param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000107f6e900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x20) + 0x10))((float)param_1);
  return;
}



/* Entry: 107f6e91c; end: 107f6ea7b;  */

void FUN_107f6e91c(undefined8 param_1,undefined8 param_2,int param_3,long param_4,undefined8 param_5
                  )

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___PHVideoRequestOptions_1126d2ae0;
  _objc_alloc_init(PTR__OBJC_CLASS___PHVideoRequestOptions_1126d2ae0);
  func_0x00010c18ba80();
  func_0x00010c1cc000(puVar1);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(param_4);
    func_0x00010c1e47a0(puVar1);
    _objc_release(param_4);
  }
  _objc_retain(param_2);
  _objc_retain(param_5);
  func_0x00010c136280(param_1);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_1);
  return;
}



/* Entry: 107f6ea7c; end: 107f6eb43;  */

void FUN_107f6ea7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 107f6eb44; end: 107f6eb77;  */

void FUN_107f6eb44(long param_1)

{
  bool bVar1;
  
  if (1.0 <= *(double *)(param_1 + 0x30)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(param_1 + 0x20) == 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000107f6eb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),bVar1);
  return;
}



/* Entry: 107f6eb78; end: 107f6edcb;  */

void FUN_107f6eb78(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010c0fce40();
    func_0x00010c0fcaa0();
    lVar1 = param_2;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    _objc_release();
    if (lVar1 == 0) {
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar6);
      _objc_retain(param_2);
      _objc_retain(param_3);
      func_0x00010c0f7fc0(lVar2);
      _objc_release(lVar2);
      _objc_release(param_3);
      _objc_release(param_2);
    }
    else {
      lVar1 = param_2;
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar6);
      _objc_retain(param_2);
      _objc_retain(param_3);
      func_0x00010c09c640(lVar1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar1);
      _objc_release(param_3);
      _objc_release(param_2);
    }
    _objc_release(uVar6);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = param_2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar8);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar6);
  func_0x00010c0f7fc0(lVar5);
  _objc_release(lVar5);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(uVar7);
  return;
}



/* Entry: 107f6edcc; end: 107f6f07b;  */

void FUN_107f6edcc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x107f6ee98;
  puStack_58 = &UNK_110864938;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  _objc_retain(uVar3);
  uStack_38 = *(undefined1 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar3;
  _objc_retain(uVar2);
  uStack_48 = uVar2;
  func_0x00010c0f7fc0(lVar1,param_2,&puStack_70);
  _objc_release(lVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_40);
  return;
}



/* Entry: 107f6f07c; end: 107f6f08f;  */

void FUN_107f6f07c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6b6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948,PTR_s_deleteAssets__1125b8750,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107f6f090; end: 107f6f133;  */

void FUN_107f6f090(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = param_1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(lVar1);
    _objc_release(lVar1);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 107f6f134; end: 107f6f147;  */

void FUN_107f6f134(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f6f144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 107f6f148; end: 107f6f233;  */

undefined8 FUN_107f6f148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___PHContentEditingInputRequestOptions_1126d8800;
  _objc_alloc_init(PTR__OBJC_CLASS___PHContentEditingInputRequestOptions_1126d8800);
  func_0x00010c177c60();
  func_0x00010c1cc000(puVar1);
  _objc_retain(param_1);
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c135060(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 107f6f234; end: 107f6f23b;  */

undefined8 FUN_107f6f234(void)

{
  return 0;
}



/* Entry: 107f6f23c; end: 107f6f40b;  */

void FUN_107f6f23c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      func_0x00010bf863e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (param_2 != 0) {
        lVar3 = param_2;
        func_0x00010bf863e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 == 0) {
          puVar5 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
          func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = *(undefined1 *)(param_1 + 0x30);
          puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_68 = 0xc2000000;
          pcStack_60 = FUN_107f6f40c;
          puStack_58 = &UNK_110976d38;
          uVar1 = *(undefined8 *)(param_1 + 0x20);
          lVar3 = *(long *)(param_1 + 0x28);
          _objc_retain(lVar3);
          lStack_48 = lVar3;
          _objc_retain(param_2);
          lStack_50 = param_2;
          FUN_107f6e46c(puVar5,uVar1,uVar2,1,0,&puStack_70);
          _objc_release(puVar5);
          _objc_release(lStack_50);
          lVar3 = lStack_48;
        }
        else {
          lVar3 = param_2;
          func_0x00010bf863e0(param_2);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = *(long *)(param_1 + 0x28);
          lVar4 = param_2;
          func_0x00010bfbbc60(param_2);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(lVar6 + 0x10))(lVar6,param_2,lVar3,lVar4,0);
          _objc_release(lVar4);
        }
        _objc_release(lVar3);
        goto LAB_107f6f3e4;
      }
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0,0,0);
  }
LAB_107f6f3e4:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107f6f40c; end: 107f6f553;  */

void FUN_107f6f40c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  _objc_retain(param_2);
  uVar3 = uVar1;
  func_0x00010bfbbc60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1,param_2,uVar3,0);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107f6f554; end: 107f6f55b;  */

undefined8 FUN_107f6f554(void)

{
  return 0;
}



/* Entry: 107f6f55c; end: 107f6f5f7;  */

void FUN_107f6f55c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    if (param_2 == 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0,0);
    }
    else {
      lVar1 = param_2;
      func_0x00010bf10240(param_2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,param_2,lVar1);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107f6f5f8; end: 107f6f7df;  */

void FUN_107f6f5f8(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar2 = param_4;
  puVar1 = param_3;
  if (param_5 - 1U < 3) {
    uVar4 = *(undefined8 *)(&UNK_10deeb6d0 + (param_5 - 1U) * 8);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8a20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8a20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
  }
  puVar3 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  _objc_retain(param_2);
  _objc_retain(puVar2);
  _objc_retain(param_1);
  _objc_retain(puVar1);
  func_0x00010c0f84e0(puVar3);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 107f6f7e0; end: 107f6fa1b;  */

void FUN_107f6f7e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___PHAdjustmentData_1126d8808;
  _objc_alloc(PTR__OBJC_CLASS___PHAdjustmentData_1126d8808);
  puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09780(puVar3,param_2,puVar2,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c013d40(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec9558,
                      &PTR____CFConstantStringClassReference_110dc0598,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    puVar3 = PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948;
    func_0x00010bf5a8a0(PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948,param_2,
                        *(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf5a700(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1855e0(puVar3,param_2,uVar4);
    _objc_release(uVar4);
    puVar2 = puVar3;
    func_0x00010c0fd840();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___PHContentEditingOutput_1126d8810;
      _objc_alloc(PTR__OBJC_CLASS___PHContentEditingOutput_1126d8810);
      func_0x00010c036860();
      func_0x00010c165dc0();
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      _UIImageJPEGRepresentation(0x3ff0000000000000,uVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c1304a0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e060(uVar4,param_2,puVar6,1);
      _objc_release(puVar6);
      _objc_release(uVar4);
      func_0x00010c181e80(puVar3,param_2,puVar5);
      _objc_release(puVar5);
    }
  }
  else {
    puVar3 = PTR__OBJC_CLASS___PHContentEditingOutput_1126d8810;
    _objc_alloc(PTR__OBJC_CLASS___PHContentEditingOutput_1126d8810);
    func_0x00010c003480();
    func_0x00010c165dc0();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _UIImageJPEGRepresentation(0x3ff0000000000000,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c1304a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e060(uVar4,param_2,puVar2,1);
    _objc_release(puVar2);
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948;
    func_0x00010bf35020(PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948,param_2,
                        *(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181e80();
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107f6fa1c; end: 107f6fabf;  */

void FUN_107f6fa1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = param_1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(lVar1);
    _objc_release(lVar1);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 107f6fac0; end: 107f6fad3;  */

void FUN_107f6fac0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f6fad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 107f6fad4; end: 107f6fc87;  */

void FUN_107f6fad4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_3 == 0) {
    if (param_5 == 0) goto LAB_107f6fc48;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107f6fc88;
    puStack_70 = &UNK_110849530;
    _objc_retain(param_5);
    lStack_68 = param_5;
    func_0x0001000d76cc("APPSTORE",&puStack_88);
    lVar2 = lStack_68;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_1);
    _objc_retain(param_2);
    _objc_retain(param_5);
    func_0x00010c0f84e0(puVar1);
    _objc_release(puVar1);
    _objc_release(param_5);
    _objc_release(param_2);
    _objc_release(param_1);
    lVar2 = param_3;
  }
  _objc_release(lVar2);
LAB_107f6fc48:
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107f6fc88; end: 107f6fc97;  */

void FUN_107f6fc88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107f6fc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}


