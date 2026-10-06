/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f3bfbc; end: 106f3c077;  */

void FUN_106f3bfbc(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b0010;
  _objc_retain(param_2);
  func_0x00010c266c80(puVar1);
  _objc_retain(0);
  lVar2 = param_2;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = lVar2;
  func_0x00010bf529e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar3 != 0;
  _objc_release(0);
  _objc_release(lVar2);
  return;
}



/* Entry: 106f3c078; end: 106f3c3b3; -[SCPluginEffectSnapRendererQueue initWithSnapDocManager:circumstanceEngine:timeProvider:snapDocEditorFactory:lazyVideoTranscoder:snapDocOverlayImageGenerationServices:overlayFormatServices:musicMediaLoader:musicTrackAudioDataLoader:temporaryFileWriterServices:performer:imageCache:videoUrlCache:] */

undefined8 *
FUN_106f3c078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126f7dc0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0xe) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d3438;
    _objc_alloc_init();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106f3c3b4; end: 106f3c463; -[SCPluginEffectSnapRendererQueue taskWithSnapRendererLogger:] */

void FUN_106f3c3b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3478;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0477a0();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126d34b8;
  _objc_alloc(PTR_PTR_1126d34b8);
  func_0x00010c01d320();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f3c464; end: 106f3c4df; -[SCPluginEffectSnapRendererQueue enqueueTask:] */

void FUN_106f3c464(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x70);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x78));
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010bf529e0();
  _os_unfair_lock_unlock(param_1 + 0x70);
  FUN_106f448c4(*(undefined8 *)(param_1 + 0x80),lVar1);
  if (lVar1 == 1) {
    func_0x00010be0b780(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f3c4e0; end: 106f3c5fb; -[SCPluginEffectSnapRendererQueue _execTask:] */

void FUN_106f3c4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010bf9ae60(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010c13b720(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c13cb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c297260(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f3c5fc; end: 106f3c62f;  */

void FUN_106f3c5fc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010becac00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f3c630; end: 106f3c6a3; -[SCPluginEffectSnapRendererQueue _taskDidComplete:] */

void FUN_106f3c630(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x70);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x78),param_2,param_3);
  _objc_release(param_3);
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x70);
  if (lVar1 != 0) {
    func_0x00010be0b780(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f3c6a4; end: 106f3c76f; -[SCPluginEffectSnapRendererQueue .cxx_destruct] */

void FUN_106f3c6a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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



/* Entry: 106f3c770; end: 106f3c82f; -[SCPluginEffectSnapRendererTaskImpl initWithImpl:queue:] */

undefined1 *
FUN_106f3c770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7dc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_4);
    puVar3 = PTR_PTR_1126d33c8;
    _objc_alloc();
    func_0x00010c055280();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f3c830; end: 106f3c837; -[SCPluginEffectSnapRendererTaskImpl requiresRenderPlugins] */

undefined8 FUN_106f3c830(void)

{
  return 1;
}



/* Entry: 106f3c838; end: 106f3c92b; -[SCPluginEffectSnapRendererTaskImpl renderSnapDoc:watermarkProfile:toResponse:toDestination:snapSource:withPlugins:] */

void FUN_106f3c838(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x28) = param_6;
  *(undefined8 *)(param_1 + 0x30) = param_7;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_8;
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf96460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f3c92c; end: 106f3cabb; -[SCPluginEffectSnapRendererTaskImpl exec] */

void FUN_106f3c92c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar3);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c1178e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106f3cabc;
    puStack_50 = &UNK_1108544b0;
    _objc_retain(uVar3);
    uStack_48 = uVar3;
    func_0x00010c25ff60(uVar1,param_2,&puStack_68);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c13cb40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = puVar2;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106f3cae4;
    puStack_78 = &UNK_1108bc678;
    uStack_70 = uVar3;
    _objc_retain(uVar3);
    func_0x00010c297260(uVar1,param_2,&puStack_90,0);
    _objc_release(uVar1);
    func_0x00010c1300c0(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38));
    _objc_release(uStack_70);
    _objc_release(uStack_48);
    _objc_release(uVar3);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e877f8,
                      &PTR____CFConstantStringClassReference_110e8e978,0xe);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106f3cabc; end: 106f3cae3;  */

void FUN_106f3cabc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb2c80(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c288d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_updateProgress__11267fd70);
  return;
}



/* Entry: 106f3cae4; end: 106f3cafb;  */

void FUN_106f3cae4(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithSnapDocEditor__1125ae8e8,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
  return;
}



/* Entry: 106f3cafc; end: 106f3cb03; -[SCPluginEffectSnapRendererTaskImpl response] */

undefined8 FUN_106f3cafc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106f3cb04; end: 106f3cb6b; -[SCPluginEffectSnapRendererTaskImpl .cxx_destruct] */

void FUN_106f3cb04(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f3cb6c; end: 106f3cc8f; -[SCSnapRendererBackupTranscodingImpl initWithSnapRendererLogger:snapDocEditorFactory:memoriesBackupTranscoder:circumstanceEngine:performer:] */

undefined1 *
FUN_106f3cb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f7dd0;
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
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f3cc90; end: 106f3cca7; -[SCSnapRendererBackupTranscodingImpl _shouldSkipRawMediaTranscode] */

void FUN_106f3cc90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e8e998,1,0);
  return;
}



/* Entry: 106f3cca8; end: 106f3ccaf; -[SCSnapRendererBackupTranscodingImpl requiresRenderPlugins] */

undefined8 FUN_106f3cca8(void)

{
  return 0;
}



/* Entry: 106f3ccb0; end: 106f3cf77; -[SCSnapRendererBackupTranscodingImpl renderSnapDoc:watermarkProfile:toResponse:toDestination:snapSource:withPlugins:] */

void FUN_106f3ccb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf8cb40(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bece9e0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e877f8,10,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(param_5,param_2,puVar4);
  }
  else {
    puVar4 = PTR_PTR_1126ae558;
    func_0x00010beffb40(PTR_PTR_1126ae558,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x106f3ce08;
    puStack_58 = &UNK_1108599d8;
    _objc_retain(param_5);
    puStack_50 = param_5;
    _objc_retain(uVar1);
    uStack_48 = uVar1;
    func_0x00010c297260(puVar4,param_2,&puStack_70,*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar4);
    _objc_release(uStack_48);
    puVar4 = puStack_50;
  }
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 106f3cf78; end: 106f3d357; -[SCSnapRendererBackupTranscodingImpl _transcodeWithHardTrimForEditor:] */

undefined *
FUN_106f3cf78(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5,undefined *param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *unaff_x26;
  undefined8 uVar16;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *puVar17;
  undefined *puStack_4d8;
  undefined8 uStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined8 uStack_4a0;
  code *pcStack_498;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined8 uStack_480;
  undefined1 *puStack_478;
  undefined8 uStack_3e0;
  long lStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [128];
  long lStack_320;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined1 **ppuStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_198;
  undefined *puStack_190;
  int iStack_184;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_178 = param_1;
  func_0x00010beb69e0();
  iStack_184 = (int)param_1;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar15 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puStack_190 = puVar1;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar2 = param_3;
  puStack_198 = puVar15;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar2;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar15;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar2);
  puVar14 = puVar1;
  puStack_180 = puVar1;
  func_0x00010bf52a60(puVar1,param_2,&uStack_140,auStack_f0,0x10);
  if (puVar14 != (undefined *)0x0) {
    lVar13 = *plStack_130;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar13) {
          _objc_enumerationMutation(puStack_180);
        }
        puVar17 = *(undefined **)(lStack_138 + (long)puVar15 * 8);
        puVar12 = puVar17;
        func_0x00010c08c3a0();
        unaff_x28 = puVar17;
        if ((int)puVar12 == 1) {
          unaff_x26 = puVar17;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = unaff_x26;
          func_0x00010c0c5180();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = param_3;
          func_0x00010c0c6240(param_3,param_2,puVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          puVar2 = puStack_178;
          func_0x00010becbfa0(puStack_178,param_2,puVar17);
          _objc_retainAutoreleasedReturnValue();
          if (((iStack_184 == 0) || (puVar12 = unaff_x26, func_0x00010bf0b760(), (int)puVar12 != 3))
             && (puVar12 = unaff_x27, func_0x00010c0c6c20(), (int)puVar12 == 3)) {
            puVar1 = unaff_x27;
            func_0x00010c09d7e0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar1;
            func_0x00010c08fa60();
            _objc_release(puVar1);
            puVar1 = (undefined *)0x0;
            if (puVar12 != (undefined *)0x0) {
              puVar1 = unaff_x26;
              func_0x00010c0c5180();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puStack_198,param_2,puVar1);
              puVar12 = unaff_x27;
              func_0x00010c09d7e0(unaff_x27);
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = puStack_178;
              param_6 = puVar2;
              param_7 = param_3;
              func_0x00010bece4c0(puStack_178,param_2,unaff_x26,puVar17,puVar12,puVar2,param_3,
                                  *(undefined8 *)(puStack_178 + 0x18));
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar12);
              func_0x00010befa120(puStack_190,param_2,unaff_x28);
              _objc_release(unaff_x28);
              _objc_release(puVar1);
            }
          }
          _objc_release(puVar2);
          _objc_release(unaff_x27);
          _objc_release(unaff_x26);
        }
        puVar15 = puVar15 + 1;
      } while (puVar14 != puVar15);
      puVar14 = puStack_180;
      func_0x00010bf52a60(puStack_180,param_2,&uStack_140,auStack_f0,0x10);
      puVar15 = (undefined *)0x0;
    } while (puVar14 != (undefined *)0x0);
  }
  _objc_release(puStack_180);
  puVar14 = puStack_190;
  puVar17 = puStack_190;
  func_0x00010bf529e0();
  puVar11 = PTR____NSArray0__struct_11034ab48;
  puVar12 = puStack_198;
  if (puVar17 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae558;
    func_0x00010beffb40(PTR_PTR_1126ae558,param_2,puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puStack_198;
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_106f3d358;
    puStack_158 = &UNK_110984198;
    _objc_retain(puStack_198);
    puStack_150 = puVar12;
    _objc_retain(param_3);
    puVar1 = puVar2;
    puStack_148 = param_3;
    func_0x00010c0b8600(puVar2,param_2,&puStack_170);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_f8 = puVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f8,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puStack_148);
    _objc_release(puStack_150);
    _objc_release(puVar2);
  }
  _objc_release(puVar12);
  _objc_release(puVar14);
  puVar17 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar6 = &uStack_2b0;
    puStack_1d8 = puVar14;
    pcStack_1a8 = FUN_106f3d358;
    lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    puStack_2a0 = (undefined8 *)0x0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    puVar10 = *(undefined **)(puVar17 + 0x20);
    puStack_1e0 = puVar12;
    puStack_1d0 = puVar11;
    puStack_1c8 = param_3;
    puStack_1c0 = puVar2;
    puStack_1b8 = puVar1;
    puStack_1b0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar10);
    puVar1 = puVar10;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      puVar11 = (undefined *)*puStack_2a0;
      do {
        puVar14 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_2a0 != puVar11) {
            _objc_enumerationMutation(puVar10);
          }
          func_0x00010bf6c3a0(*(undefined8 *)(puVar17 + 0x28),param_2,
                              *(undefined8 *)(lStack_2a8 + (long)puVar14 * 8));
          _objc_unsafeClaimAutoreleasedReturnValue();
          puVar14 = puVar14 + 1;
        } while (puVar1 != puVar14);
        puVar1 = puVar10;
        puVar6 = &uStack_2b0;
        func_0x00010bf52a60();
        param_3 = (undefined *)0x0;
      } while (puVar1 != (undefined *)0x0);
    }
    puVar1 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
      return PTR____kCFBooleanTrue_11034ab68;
    }
    ___stack_chk_fail();
    pcStack_2b8 = FUN_106f3d460;
    lStack_320 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_310 = unaff_x28;
    puStack_308 = unaff_x27;
    puStack_300 = unaff_x26;
    puStack_2f8 = puVar15;
    puStack_2f0 = puVar12;
    puStack_2e8 = puVar14;
    puStack_2e0 = puVar11;
    puStack_2d8 = param_3;
    puStack_2d0 = puVar10;
    puStack_2c8 = puVar17;
    ppuStack_2c0 = &puStack_1b0;
    _objc_retain(puVar6);
    puVar15 = puVar1;
    func_0x00010beb69e0();
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    plStack_3d0 = (long *)0x0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    puVar14 = (undefined *)puVar6;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar14;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar12;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(puVar14);
    puVar7 = &uStack_3e0;
    puVar8 = auStack_3a0;
    uVar9 = 0x10;
    puVar14 = puVar17;
    func_0x00010bf52a60();
    if (puVar14 != (undefined *)0x0) {
      lVar13 = *plStack_3d0;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_3d0 != lVar13) {
            _objc_enumerationMutation(puVar17);
          }
          uVar16 = *(undefined8 *)(lStack_3d8 + (long)puVar12 * 8);
          uVar9 = uVar16;
          func_0x00010c08c3a0();
          if ((int)uVar9 == 1) {
            func_0x00010c0c3fe0();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar16;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = (undefined *)puVar6;
            func_0x00010c0c6240(puVar6,param_2,uVar9);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar9);
            if ((((int)puVar15 == 0) || (uVar9 = uVar16, func_0x00010bf0b760(), (int)uVar9 != 3)) &&
               (puVar3 = puVar10, func_0x00010c0c6c20(), (int)puVar3 == 3)) {
              puVar3 = puVar10;
              func_0x00010c09d7e0();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar3;
              func_0x00010c08fa60();
              if (puVar4 != (undefined *)0x0) {
                puVar4 = puVar10;
                func_0x00010c09d7e0(puVar10);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar2;
                func_0x00010bf4b900(puVar2,param_2,puVar4);
                _objc_release(puVar4);
                _objc_release(puVar3);
                if (((ulong)puVar5 & 1) != 0) goto LAB_106f3d6c8;
                puVar3 = puVar10;
                func_0x00010c09d7e0(puVar10);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar2,param_2,puVar3);
                _objc_release(puVar3);
                puVar4 = puVar10;
                func_0x00010c09d7e0(puVar10);
                _objc_retainAutoreleasedReturnValue();
                param_7 = *(undefined **)(puVar1 + 0x18);
                puVar3 = puVar1;
                param_6 = (undefined *)puVar6;
                func_0x00010bece500(puVar1,param_2,uVar16,puVar4,0);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar4);
                func_0x00010befa120(puVar11,param_2,puVar3);
              }
              _objc_release(puVar3);
            }
LAB_106f3d6c8:
            _objc_release(puVar10);
            _objc_release(uVar16);
          }
          puVar12 = puVar12 + 1;
        } while (puVar14 != puVar12);
        puVar7 = &uStack_3e0;
        puVar8 = auStack_3a0;
        uVar9 = 0x10;
        puVar14 = puVar17;
        func_0x00010bf52a60();
      } while (puVar14 != (undefined *)0x0);
    }
    _objc_release(puVar17);
    _objc_release(puVar2);
    _objc_release(puVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_320) {
      ___stack_chk_fail();
      _objc_retain(puVar7);
      _objc_retain(puVar8);
      _objc_retain(uVar9);
      _objc_retain(param_6);
      _objc_retain(param_7);
      puVar6 = puVar7;
      func_0x00010c0c5180(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = param_6;
      func_0x00010c0c6f80(param_6,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_4a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_4a0 = 0xc2000000;
      pcStack_498 = FUN_106f3d920;
      puStack_490 = &UNK_1109841c8;
      puStack_488 = param_7;
      uStack_480 = uVar9;
      puStack_478 = puVar8;
      _objc_retain(puVar8);
      _objc_retain(uVar9);
      _objc_retain(param_7);
      puVar2 = puVar15;
      func_0x00010bfb2660(puVar15,param_2,&puStack_4a8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      _objc_release(puVar6);
      puStack_4d8 = puVar1;
      uStack_4d0 = 0xc2000000;
      pcStack_4c8 = FUN_106f3d9a0;
      puStack_4c0 = &UNK_110984238;
      puStack_4b8 = puVar7;
      puStack_4b0 = param_6;
      _objc_retain(param_6);
      _objc_retain(puVar7);
      puVar11 = puVar2;
      func_0x00010bfb2660(puVar2,param_2,&puStack_4d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_4b0);
      _objc_release(puStack_4b8);
      _objc_release(puVar2);
      _objc_release(puStack_478);
      _objc_release(uStack_480);
      _objc_release(puStack_488);
      _objc_release(param_6);
      _objc_release(puVar7);
      _objc_release(puVar8);
      _objc_release(uVar9);
      _objc_release(param_7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return puVar11;
}



/* Entry: 106f3d358; end: 106f3d45f;  */

undefined * FUN_106f3d358(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined *in_x5;
  undefined8 in_x6;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  undefined8 *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 *puStack_2d8;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [128];
  long lStack_180;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar9 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar13 = *(undefined **)(param_1 + 0x20);
  _objc_retain(puVar13);
  puVar1 = puVar13;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    lVar14 = *plStack_100;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_100 != lVar14) {
          _objc_enumerationMutation(puVar13);
        }
        func_0x00010bf6c3a0(*(undefined8 *)(param_1 + 0x28),param_2,
                            *(undefined8 *)(lStack_108 + (long)puVar16 * 8));
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar16 = puVar16 + 1;
      } while (puVar1 != puVar16);
      puVar1 = puVar13;
      puVar9 = &uStack_110;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return PTR____kCFBooleanTrue_11034ab68;
  }
  ___stack_chk_fail();
  lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar9);
  puVar1 = puVar13;
  func_0x00010beb69e0();
  puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  puVar3 = (undefined *)puVar9;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar15;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar3);
  puVar10 = &uStack_240;
  puVar11 = auStack_200;
  uVar12 = 0x10;
  puVar3 = puVar4;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar14 = *plStack_230;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_230 != lVar14) {
          _objc_enumerationMutation(puVar4);
        }
        uVar17 = *(undefined8 *)(lStack_238 + (long)puVar15 * 8);
        uVar12 = uVar17;
        func_0x00010c08c3a0();
        if ((int)uVar12 == 1) {
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar17;
          func_0x00010c0c5180();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = (undefined *)puVar9;
          func_0x00010c0c6240(puVar9,param_2,uVar12);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          if ((((int)puVar1 == 0) || (uVar12 = uVar17, func_0x00010bf0b760(), (int)uVar12 != 3)) &&
             (puVar6 = puVar5, func_0x00010c0c6c20(), (int)puVar6 == 3)) {
            puVar6 = puVar5;
            func_0x00010c09d7e0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010c08fa60();
            if (puVar7 != (undefined *)0x0) {
              puVar7 = puVar5;
              func_0x00010c09d7e0(puVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar2;
              func_0x00010bf4b900(puVar2,param_2,puVar7);
              _objc_release(puVar7);
              _objc_release(puVar6);
              if (((ulong)puVar8 & 1) != 0) goto LAB_106f3d6c8;
              puVar6 = puVar5;
              func_0x00010c09d7e0(puVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar2,param_2,puVar6);
              _objc_release(puVar6);
              puVar7 = puVar5;
              func_0x00010c09d7e0(puVar5);
              _objc_retainAutoreleasedReturnValue();
              in_x6 = *(undefined8 *)(puVar13 + 0x18);
              puVar6 = puVar13;
              in_x5 = (undefined *)puVar9;
              func_0x00010bece500(puVar13,param_2,uVar17,puVar7,0);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar7);
              func_0x00010befa120(puVar16,param_2,puVar6);
            }
            _objc_release(puVar6);
          }
LAB_106f3d6c8:
          _objc_release(puVar5);
          _objc_release(uVar17);
        }
        puVar15 = puVar15 + 1;
      } while (puVar3 != puVar15);
      puVar10 = &uStack_240;
      puVar11 = auStack_200;
      uVar12 = 0x10;
      puVar3 = puVar4;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_180) {
    ___stack_chk_fail();
    _objc_retain(puVar10);
    _objc_retain(puVar11);
    _objc_retain(uVar12);
    _objc_retain(in_x5);
    _objc_retain(in_x6);
    puVar9 = puVar10;
    func_0x00010c0c5180(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = in_x5;
    func_0x00010c0c6f80(in_x5,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_308 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_300 = 0xc2000000;
    pcStack_2f8 = FUN_106f3d920;
    puStack_2f0 = &UNK_1109841c8;
    uStack_2e8 = in_x6;
    uStack_2e0 = uVar12;
    puStack_2d8 = puVar11;
    _objc_retain(puVar11);
    _objc_retain(uVar12);
    _objc_retain(in_x6);
    puVar2 = puVar13;
    func_0x00010bfb2660(puVar13,param_2,&puStack_308);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puVar9);
    puStack_338 = puVar1;
    uStack_330 = 0xc2000000;
    pcStack_328 = FUN_106f3d9a0;
    puStack_320 = &UNK_110984238;
    puStack_318 = puVar10;
    puStack_310 = in_x5;
    _objc_retain(in_x5);
    _objc_retain(puVar10);
    puVar16 = puVar2;
    func_0x00010bfb2660(puVar2,param_2,&puStack_338);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_310);
    _objc_release(puStack_318);
    _objc_release(puVar2);
    _objc_release(puStack_2d8);
    _objc_release(uStack_2e0);
    _objc_release(uStack_2e8);
    _objc_release(in_x5);
    _objc_release(puVar10);
    _objc_release(puVar11);
    _objc_release(uVar12);
    _objc_release(in_x6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return puVar16;
}



/* Entry: 106f3d460; end: 106f3d757; -[SCSnapRendererBackupTranscodingImpl _transcodeWithSoftTrimForEditor:] */

void FUN_106f3d460(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7)

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
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined8 *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
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
  puVar1 = param_1;
  func_0x00010beb69e0();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar4 = param_3;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar4;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar14;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar4);
  puVar11 = &uStack_130;
  puVar12 = auStack_f0;
  uVar13 = 0x10;
  puVar4 = puVar5;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar15 = *plStack_120;
    do {
      puVar14 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(puVar5);
        }
        uVar16 = *(undefined8 *)(lStack_128 + (long)puVar14 * 8);
        uVar13 = uVar16;
        func_0x00010c08c3a0();
        if ((int)uVar13 == 1) {
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar16;
          func_0x00010c0c5180();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = param_3;
          func_0x00010c0c6240(param_3,param_2,uVar13);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar13);
          if ((((int)puVar1 == 0) || (uVar13 = uVar16, func_0x00010bf0b760(), (int)uVar13 != 3)) &&
             (puVar7 = puVar6, func_0x00010c0c6c20(), (int)puVar7 == 3)) {
            puVar7 = puVar6;
            func_0x00010c09d7e0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010c08fa60();
            if (puVar8 != (undefined *)0x0) {
              puVar8 = puVar6;
              func_0x00010c09d7e0(puVar6);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar3;
              func_0x00010bf4b900(puVar3,param_2,puVar8);
              _objc_release(puVar8);
              _objc_release(puVar7);
              if (((ulong)puVar9 & 1) != 0) goto LAB_106f3d6c8;
              puVar7 = puVar6;
              func_0x00010c09d7e0(puVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar3,param_2,puVar7);
              _objc_release(puVar7);
              puVar8 = puVar6;
              func_0x00010c09d7e0(puVar6);
              _objc_retainAutoreleasedReturnValue();
              param_7 = *(undefined8 *)(param_1 + 0x18);
              puVar7 = param_1;
              param_6 = param_3;
              func_0x00010bece500(param_1,param_2,uVar16,puVar8,0);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar8);
              func_0x00010befa120(puVar2,param_2,puVar7);
            }
            _objc_release(puVar7);
          }
LAB_106f3d6c8:
          _objc_release(puVar6);
          _objc_release(uVar16);
        }
        puVar14 = puVar14 + 1;
      } while (puVar4 != puVar14);
      puVar11 = &uStack_130;
      puVar12 = auStack_f0;
      uVar13 = 0x10;
      puVar4 = puVar5;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar11);
    _objc_retain(puVar12);
    _objc_retain(uVar13);
    _objc_retain(param_6);
    _objc_retain(param_7);
    puVar10 = puVar11;
    func_0x00010c0c5180(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_6;
    func_0x00010c0c6f80(param_6,param_2,puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1f0 = 0xc2000000;
    pcStack_1e8 = FUN_106f3d920;
    puStack_1e0 = &UNK_1109841c8;
    uStack_1d8 = param_7;
    uStack_1d0 = uVar13;
    puStack_1c8 = puVar12;
    _objc_retain(puVar12);
    _objc_retain(uVar13);
    _objc_retain(param_7);
    puVar3 = puVar2;
    func_0x00010bfb2660(puVar2,param_2,&puStack_1f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar10);
    puStack_228 = puVar1;
    uStack_220 = 0xc2000000;
    pcStack_218 = FUN_106f3d9a0;
    puStack_210 = &UNK_110984238;
    puStack_208 = puVar11;
    puStack_200 = param_6;
    _objc_retain(param_6);
    _objc_retain(puVar11);
    puVar2 = puVar3;
    func_0x00010bfb2660(puVar3,param_2,&puStack_228);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_200);
    _objc_release(puStack_208);
    _objc_release(puVar3);
    _objc_release(puStack_1c8);
    _objc_release(uStack_1d0);
    _objc_release(uStack_1d8);
    _objc_release(param_6);
    _objc_release(puVar11);
    _objc_release(puVar12);
    _objc_release(uVar13);
    _objc_release(param_7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f3d758; end: 106f3d91f; -[SCSnapRendererBackupTranscodingImpl _transcodeAndUpdateMediaReferenceWithMetadata:localCacheKey:timeRange:editor:memoriesBackupTranscoder:] */

void FUN_106f3d758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010c0c6f80(param_6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106f3d920;
  puStack_90 = &UNK_1109841c8;
  uStack_88 = param_7;
  uStack_80 = param_5;
  uStack_78 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar4 = uVar3;
  func_0x00010bfb2660(uVar3,param_2,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106f3d9a0;
  puStack_c0 = &UNK_110984238;
  uStack_b8 = param_3;
  uStack_b0 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar2 = uVar4;
  func_0x00010bfb2660(uVar4,param_2,&puStack_d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uVar4);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f3d920; end: 106f3d99f;  */

void FUN_106f3d920(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c279dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f3d9a0; end: 106f3dbeb;  */

void FUN_106f3d9a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  puVar11 = PTR_PTR_1126ae558;
  if (lVar1 == 0) {
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_106f3dbc0;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf93e60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    _objc_release(lVar1);
    _objc_release(lVar2);
LAB_106f3db4c:
    puVar10 = PTR_PTR_1126b3080;
    func_0x00010bf64b00(PTR_PTR_1126b3080);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010bf93e60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar2);
    if (lVar5 == 0) goto LAB_106f3db4c;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf93e60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf93e60(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c156ce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    puVar10 = PTR_PTR_1126b3080;
    func_0x00010bf64b00(PTR_PTR_1126b3080);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  puVar12 = *(undefined **)(param_1 + 0x28);
  func_0x00010c0c5180(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2879a0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar12;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(uVar7);
LAB_106f3dbc0:
  _objc_release(puVar10);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106f3dbec; end: 106f3dbfb;  */

void FUN_106f3dbec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithBool__1126157d0,1);
  return;
}



/* Entry: 106f3dbfc; end: 106f3de4f; -[SCSnapRendererBackupTranscodingImpl _transcodeAndInsertMediaReferenceWithMetadata:playbackLayer:localCacheKey:timeRange:toEditor:memoriesBackupTranscoder:] */

void FUN_106f3dbfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_7;
  func_0x00010c0c6f80(param_7,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106f3de50;
  puStack_98 = &UNK_1109841c8;
  uStack_90 = param_8;
  _objc_retain(param_6);
  uStack_88 = param_6;
  uStack_80 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_8);
  uVar4 = uVar3;
  func_0x00010bfb2660(uVar3,param_2,&puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106f3ded0;
  puStack_c8 = &UNK_110984238;
  uStack_c0 = param_3;
  _objc_retain(param_7);
  uStack_b8 = param_7;
  _objc_retain(param_3);
  uVar2 = uVar4;
  func_0x00010bfb2660(uVar4,param_2,&puStack_e0);
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_106f3e0dc;
  puStack_100 = &UNK_1109842a8;
  uStack_f8 = param_7;
  uStack_f0 = param_4;
  uStack_e8 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_7);
  uVar3 = uVar2;
  func_0x00010bfb2660(uVar2,param_2,&puStack_118);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uVar2);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uVar4);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f3de50; end: 106f3decf;  */

void FUN_106f3de50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c279dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f3ded0; end: 106f3e0db;  */

void FUN_106f3ded0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fa60();
  puVar11 = PTR_PTR_1126ae558;
  if (lVar1 == 0) {
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_106f3e0ac;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf93e60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    _objc_release(lVar1);
    _objc_release(lVar2);
LAB_106f3e078:
    puVar10 = PTR_PTR_1126b3080;
    func_0x00010bf64b00(PTR_PTR_1126b3080);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010bf93e60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar2);
    if (lVar5 == 0) goto LAB_106f3e078;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf93e60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf93e60(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c156ce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    puVar10 = PTR_PTR_1126b3080;
    func_0x00010bf64b00(PTR_PTR_1126b3080);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  puVar11 = *(undefined **)(param_1 + 0x28);
  func_0x00010bef9c20(puVar11);
  _objc_retainAutoreleasedReturnValue();
LAB_106f3e0ac:
  _objc_release(puVar10);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106f3e0dc; end: 106f3e277;  */

void FUN_106f3e0dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ff5c0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c0df820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  _objc_retain(param_2);
  func_0x00010c288840(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0ff5c0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c0df820(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158480(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c28b3e0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  puVar1 = PTR_PTR_1126ae558;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f3e278; end: 106f3e40f;  */

void FUN_106f3e278(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = param_2;
    func_0x00010c118b40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21a520();
    _objc_release(uVar1);
    uVar1 = param_2;
    func_0x00010c118b40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfcd1a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b160();
    uVar3 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c45e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_2;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd8060();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar1 = param_2;
      func_0x00010c118b40(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfcd1a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf8b160();
      uVar3 = param_2;
      func_0x00010c118b40(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0699e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220160();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
  uVar1 = param_2;
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4880();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f3e410; end: 106f3e41b;  */

void FUN_106f3e410(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21a4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setTrim__112664360,0);
  return;
}



/* Entry: 106f3e41c; end: 106f3e54b; -[SCSnapRendererBackupTranscodingImpl _timeRangeForPlaybackLayer:] */

void FUN_106f3e41c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [48];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd7800();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c118b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfcd1a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8b160();
    _CMTimeMake(&uStack_48);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c118b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27c6c0();
    _CMTimeMake(&uStack_60);
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uStack_a8 = uStack_58;
    uStack_b0 = uStack_60;
    uStack_a0 = uStack_50;
    uStack_c8 = uStack_40;
    uStack_d0 = uStack_48;
    uStack_c0 = uStack_38;
    _CMTimeRangeMake(auStack_90,&uStack_b0,&uStack_d0);
    func_0x00010c297240(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f3e54c; end: 106f3e59f; -[SCSnapRendererBackupTranscodingImpl .cxx_destruct] */

void FUN_106f3e54c(long param_1)

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



/* Entry: 106f3e5a0; end: 106f3e64b;  */

bool FUN_106f3e5a0(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c08c3a0();
  if ((int)uVar2 == 4) {
    uVar2 = param_1;
    func_0x00010bf5cc00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf96ee0();
    bVar1 = (int)uVar5 == 7;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 106f3e64c; end: 106f3e9a3;  */

void FUN_106f3e64c(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uStack_b0;
  ulong uStack_90;
  undefined1 auStack_88 [24];
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  FUN_106f3e5a0();
  if (((int)uVar1 == 0) || (lVar2 = param_2, func_0x00010c08fa60(), lVar2 == 0)) {
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0d3a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar1 = uVar5;
    func_0x00010bf939e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
    uVar3 = uVar1;
    func_0x00010bf4db80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c079da0();
    puVar9 = (undefined *)0x0;
    if (((int)uVar3 != 0) && (puVar6 != (undefined *)0x0)) {
      puVar9 = PTR_PTR_1126b3020;
      _objc_alloc(PTR_PTR_1126b3020);
      uVar3 = uVar1;
      func_0x00010bf92c80(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bf92c60(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c059fe0(puVar9);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    puVar10 = PTR_PTR_1126b3030;
    _objc_alloc(PTR_PTR_1126b3030);
    func_0x00010c277e80();
    uVar3 = uVar5;
    func_0x00010c24fb60(uVar5);
    func_0x00010bf68d00(PTR_PTR_1126bfd68);
    _CMTimeMakeWithSeconds(auStack_88,(double)(uVar3 & 0xffffffff) / 1000.0);
    uVar3 = uVar5;
    func_0x00010bfd5ba0();
    if ((int)uVar3 == 0) {
      uStack_90 = 0;
    }
    else {
      uStack_b0 = uVar5;
      func_0x00010bf4d360();
      _objc_retainAutoreleasedReturnValue();
      uStack_90 = uStack_b0;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = uVar5;
    func_0x00010bf9e560();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010c08fa60();
    if (uVar7 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar5;
      func_0x00010bf9e560();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar8 = param_1;
    func_0x00010bfd6860();
    if ((uVar8 & 1) == 0) {
      func_0x00010c054ba0(puVar10);
    }
    else {
      uVar8 = param_1;
      func_0x00010bf8c1c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c054ba0(puVar10);
      _objc_release(uVar8);
    }
    if (uVar7 != 0) {
      _objc_release(uVar11);
    }
    _objc_release(uVar4);
    if ((int)uVar3 != 0) {
      _objc_release(uStack_90);
      _objc_release(uStack_b0);
    }
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106f3e9a4; end: 106f3eae3; -[SCSnapRendererOverlayOnlyTranscoder initWithOverlayImageGenerator:snapDocEditorFactory:snapRendererLogger:ctpItemViewService:performer:] */

undefined1 *
FUN_106f3e9a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f7dd8;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f3eae4; end: 106f3eaeb; -[SCSnapRendererOverlayOnlyTranscoder requiresRenderPlugins] */

undefined8 FUN_106f3eae4(void)

{
  return 0;
}



/* Entry: 106f3eaec; end: 106f3ecab; -[SCSnapRendererOverlayOnlyTranscoder renderSnapDoc:watermarkProfile:toResponse:toDestination:snapSource:withPlugins:] */

void FUN_106f3eaec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_initWeak(auStack_78,param_1);
  func_0x00010bedbdc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106f3ecac;
  puStack_88 = &UNK_1109842d8;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar1 = param_1;
  func_0x00010bfb2660(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  _objc_retain(param_5);
  func_0x00010c297260(uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f3ecac; end: 106f3ed33;  */

void FUN_106f3ecac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = puVar1;
    func_0x00010be1b820(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f3ed34; end: 106f3edef;  */

void FUN_106f3ed34(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      func_0x00010bf43d00(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x18);
      lVar2 = param_3;
      func_0x00010bf6e340(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1972e0(uVar3);
      _objc_release(lVar2);
      func_0x00010c23c1a0(*(undefined8 *)(lVar1 + 0x18));
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f3edf0; end: 106f3eeeb; -[SCSnapRendererOverlayOnlyTranscoder _generateOverlayImage:] */

void FUN_106f3edf0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126d33e0;
  uVar1 = param_5;
  func_0x00010c23fe00(param_5);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = (undefined *)0x0;
  func_0x00010c0c67a0(puVar2,param_4,uVar1,&puStack_48);
  puVar2 = puStack_48;
  _objc_retain(puStack_48);
  _objc_release(uVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = *(undefined **)(param_3 + 8);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(0);
    puVar3 = puVar2;
    func_0x00010bfbfde0(param_1,param_2,puVar2,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR_PTR_1126ae558;
    func_0x00010bfe9c80(PTR_PTR_1126ae558,param_4,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f3eeec; end: 106f3f007; -[SCSnapRendererOverlayOnlyTranscoder _updateMusicStickerAspectRatioIfNecessary:] */

void FUN_106f3eeec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106f3f008;
  puStack_58 = &UNK_110848218;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(puVar1);
  puStack_48 = puVar1;
  func_0x000100162d98("APPSTORE",&puStack_70);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f3f008; end: 106f3f383;  */

void FUN_106f3f008(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined1 auStack_70 [8];
  ulong uStack_68;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010bf8cb40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar5 != 0) {
      uVar16 = 0;
      do {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c0ff660();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(uVar6);
        uVar7 = uVar8;
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar6;
        func_0x00010bfedf20();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar10;
        func_0x00010bfedf40();
        _objc_release(uVar10);
        _objc_release(uVar6);
        _objc_release(uVar7);
        if ((int)uVar9 == 0xb) {
          uVar10 = *(undefined8 *)(lVar1 + 0x28);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar8;
          func_0x00010bf5cc00(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar10;
          func_0x00010bf2d360();
          _objc_release(uVar7);
          _objc_release(uVar10);
          if ((int)uVar6 != 0) {
            uVar10 = *(undefined8 *)(lVar1 + 0x28);
            func_0x00010c269d40(uVar10);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar8;
            func_0x00010bf5cc00(uVar8);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar10;
            func_0x00010c29ce00(uVar10);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar7);
            _objc_release(uVar10);
            uVar7 = uVar6;
            func_0x00010c0e0460(uVar6);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar7;
            func_0x000100078e94();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar7;
            func_0x00010c0e0ea0(uVar7);
            _objc_retainAutoreleasedReturnValue();
            _objc_copyWeak(auStack_70,param_1 + 0x30);
            uVar15 = *(undefined8 *)(param_1 + 0x28);
            _objc_retain(uVar15);
            uStack_68 = uVar16;
            _objc_retain(uVar2);
            uVar14 = uVar9;
            func_0x00010c25ff60(uVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf1a3e0();
            _objc_release(uVar14);
            _objc_release(uVar9);
            _objc_release(uVar10);
            _objc_release(uVar7);
            _objc_release(uVar2);
            _objc_release(uVar15);
            _objc_destroyWeak(auStack_70);
            _objc_release(uVar6);
            _objc_release(uVar8);
            goto LAB_106f3f340;
          }
        }
        _objc_release(uVar8);
        uVar16 = uVar16 + 1;
        uVar11 = *(ulong *)(param_1 + 0x20);
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c0ff660();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x00010bf529e0();
        _objc_release(uVar12);
        _objc_release(uVar11);
      } while (uVar16 < uVar13);
    }
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
LAB_106f3f340:
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106f3f384; end: 106f3f48f;  */

void FUN_106f3f384(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f3f490; end: 106f3f567;  */

void FUN_106f3f490(double param_1,double param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if (((lVar1 == 0) || (func_0x00010c23d0a0(lVar1), param_1 == 0.0)) ||
     (func_0x00010c23d0a0(lVar1), param_2 == 0.0)) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(*(undefined8 *)(param_3 + 0x20));
    _objc_release(puVar2);
  }
  else {
    uVar3 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c23d0a0(lVar1);
    func_0x00010bdc9440(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f3f568; end: 106f3f573;  */

void FUN_106f3f568(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0,param_2);
  return;
}



/* Entry: 106f3f574; end: 106f3f607; -[SCSnapRendererOverlayOnlyTranscoder _adjustMusicStickerPropertiesProportionsBasedOnSize:stickerPlaybackIndex:snapDocEditor:completionPromise:] */

void FUN_106f3f574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  pcStack_48 = FUN_106f3f608;
  puStack_40 = &UNK_110984368;
  uStack_38 = param_5;
  uStack_30 = param_1;
  uStack_28 = param_2;
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c28a040(param_6,param_4,&puStack_58);
  func_0x00010bf43d60(param_7,param_4,param_6);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 106f3f608; end: 106f3f6bb;  */

void FUN_106f3f608(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0fee00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
  uVar1 = uVar2;
  func_0x00010c118b40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0640();
  func_0x00010c2256c0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106f3f6bc; end: 106f3f71b; -[SCSnapRendererOverlayOnlyTranscoder .cxx_destruct] */

void FUN_106f3f6bc(long param_1)

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



/* Entry: 106f3f71c; end: 106f3f897; -[SCSnapRendererPreviewRewriteTranscoder initWithSnapImageTranscoder:snapVideoTranscoder:memoriesTranscoder:snapDocEditorFactory:snapRendererLogger:circumstanceEngine:backgroundTaskWrapper:] */

undefined1 *
FUN_106f3f71c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f7de0;
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
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
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



/* Entry: 106f3f898; end: 106f3f89f; -[SCSnapRendererPreviewRewriteTranscoder requiresRenderPlugins] */

undefined8 FUN_106f3f898(void)

{
  return 0;
}



/* Entry: 106f3f8a0; end: 106f4020f; -[SCSnapRendererPreviewRewriteTranscoder renderSnapDoc:watermarkProfile:toResponse:toDestination:fromSource:snapSource:retryContext:withPlugins:] */

void FUN_106f3f8a0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  double dVar12;
  undefined *puStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined8 uStack_220;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_10);
  func_0x00010c23c1c0(*(undefined8 *)(param_1 + 0x28));
  lVar2 = param_1;
  func_0x00010becea00();
  if (lVar2 == 3) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf8cb40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d00(param_5);
    _objc_release(uVar3);
    goto LAB_106f40118;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010bf1f440();
  if (iVar1 == 0) {
    uStack_220 = 0;
  }
  else {
    uStack_220 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17d00();
    _objc_release(lVar4);
  }
  if (lVar2 == 2) {
    func_0x00010c1de000(*(undefined8 *)(param_1 + 0x28));
    param_7 = PTR_PTR_1126ae560;
    _objc_alloc();
    func_0x00010c01bf20();
    _objc_initWeak(auStack_90,param_5);
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_140,auStack_90);
    uVar3 = uVar10;
    func_0x00010bf2f560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_retain(uVar3);
    _objc_retain(param_7);
    func_0x00010c178000(param_5);
    _objc_retain(param_7);
    func_0x00010c0e3040(uVar3);
    puVar11 = param_7;
    func_0x00010bfbc3e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    _objc_release(param_7);
    _objc_release(uVar3);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_90);
    _objc_release(param_7);
  }
  else {
    if (lVar2 == 1) {
      func_0x00010c1de000(*(undefined8 *)(param_1 + 0x28));
      lStack_238 = param_1;
      func_0x00010bdfb2a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_240 = PTR_PTR_1126ae560;
      _objc_alloc();
      func_0x00010c01bf20();
      func_0x00010bee90e0();
      func_0x00010beceb40();
      uVar6 = param_3;
      func_0x00010bf4dcc0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c08fa60();
      if (uVar7 == 0) {
        puStack_230 = (undefined *)0x0;
      }
      else {
        puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc();
        func_0x00010c008340();
        puVar5 = puVar11;
        func_0x00010c08fa60();
        puVar8 = puVar11;
        if ((puVar5 < (undefined *)0x11) && (uVar7 = uVar6, func_0x00010c08fa60(), uVar7 == 0x10)) {
          func_0x00010bfc3320(uVar6);
          puVar5 = PTR__OBJC_CLASS___NSUUID_1126b0270;
          _objc_alloc();
          func_0x00010c057e80();
          puVar8 = puVar5;
          func_0x00010bdc3580();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          _objc_release(puVar5);
        }
        puVar11 = puVar8;
        func_0x00010c08fa60();
        if (puVar11 == (undefined *)0x0) {
          puStack_230 = (undefined *)0x0;
        }
        else {
          _objc_retain(puVar8);
          puStack_230 = puVar8;
        }
        _objc_release(puVar8);
      }
      _objc_release(uVar6);
      uVar6 = param_3;
      func_0x00010c08f220();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0eebe0();
      _objc_release(uVar6);
      uVar6 = param_3;
      func_0x00010c08f220();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      func_0x00010c0eede0();
      _objc_release(uVar6);
      param_7 = PTR_PTR_1126bf7b0;
      func_0x00010af20be0();
      _objc_retainAutoreleasedReturnValue();
      if (param_7 == (undefined *)0x0) goto LAB_106f40178;
      dVar12 = (double)(uVar9 & 0xffffffff) * 10.0;
      if ((uint)uVar7 < 2) {
        dVar12 = 0.0;
      }
      *(undefined8 *)(param_7 + 8) = param_8;
      _objc_retain(param_7);
      _objc_release(param_7);
      *(ulong *)(param_7 + 0x28) = uVar7 & 0xffffffff;
      _objc_retain(param_7);
      _objc_release(param_7);
      *(ulong *)(param_7 + 0x30) = uVar9 & 0xffffffff;
      _objc_retain(param_7);
      _objc_release(param_7);
      *(double *)(param_7 + 0x38) = dVar12;
      _objc_retain(param_7);
      goto LAB_106f3fdc0;
    }
    if (lVar2 == 0) {
      func_0x00010c1de000(*(undefined8 *)(param_1 + 0x28));
      puVar5 = *(undefined **)(param_1 + 8);
      func_0x00010c269d40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar5;
      func_0x00010c279b00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    else {
      puVar11 = (undefined *)0x0;
    }
  }
  while( true ) {
    param_1 = *(long *)(param_1 + 0x28);
    _objc_retain(param_1);
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_retain();
    _objc_retain(param_1);
    func_0x00010c297260(puVar11);
    _objc_release(uStack_220);
    _objc_release(param_3);
    _objc_release(param_1);
    _objc_release(param_5);
    _objc_release(param_1);
    _objc_release(uStack_220);
    _objc_release(puVar11);
LAB_106f40118:
    _objc_release(param_10);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) break;
    ___stack_chk_fail();
LAB_106f40178:
    _objc_release(0);
    _objc_release(0);
    _objc_release(0);
LAB_106f3fdc0:
    _objc_release(param_7);
    if (param_9 != -1) {
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010af20ca4(param_7,puVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar11);
    }
    puVar5 = PTR_PTR_1126d34c0;
    _objc_alloc();
    uVar6 = param_3;
    func_0x00010bf31200(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be09200();
    puVar11 = param_7;
    func_0x00010af20ce8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00bba0();
    _objc_release(puVar11);
    _objc_release(uVar6);
    _objc_initWeak(auStack_90,param_5);
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_106f40210;
    puStack_a0 = &UNK_1108dd2b8;
    _objc_copyWeak(auStack_98,auStack_90);
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_106f4024c;
    puStack_c8 = &UNK_110984388;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar3 = uVar10;
    func_0x00010c279ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    uStack_100 = 0x106f40294;
    puStack_f8 = &UNK_110841f80;
    _objc_retain(uVar3);
    uStack_f0 = uVar3;
    _objc_retain(puStack_240);
    puStack_e8 = puStack_240;
    func_0x00010c178000(param_5);
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_106f402f8;
    puStack_120 = &UNK_1108bc678;
    _objc_retain(puStack_240);
    puStack_118 = puStack_240;
    func_0x00010c0e3040(uVar3);
    puVar11 = puStack_240;
    func_0x00010bfbc3e0(puStack_240);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_118);
    _objc_release(puStack_e8);
    _objc_release(uStack_f0);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_release(puVar5);
    _objc_release(param_7);
    _objc_release(puStack_230);
    _objc_release(puStack_240);
    _objc_release(lStack_238);
  }
  return;
}



/* Entry: 106f40210; end: 106f4024b;  */

void FUN_106f40210(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010c288d20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f4024c; end: 106f402f7;  */

void FUN_106f4024c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c28b4a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f402f8; end: 106f4030b;  */

void FUN_106f402f8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106f4030c; end: 106f40347;  */

void FUN_106f4030c(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010c288d20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f40348; end: 106f403ab;  */

void FUN_106f40348(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e877f8,
                      &PTR____CFConstantStringClassReference_110e8ea58,0x10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106f403ac; end: 106f403bf;  */

void FUN_106f403ac(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 106f403c0; end: 106f40aab;  */

ulong FUN_106f403c0(long param_1,ulong param_2,ulong param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  undefined **ppuStack_1f8;
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 0x20);
  if ((param_2 != 0) && (param_3 == 0)) {
    uVar17 = param_2;
    func_0x00010bf43d00();
    goto LAB_106f40a48;
  }
  func_0x00010c06e0e0();
  uVar17 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar3 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar4 = param_3;
      func_0x00010bf3ec40();
      _objc_release(uVar3);
      if (uVar4 == 0x10) goto LAB_106f4042c;
    }
    lVar18 = *(long *)(param_1 + 0x30);
    _objc_retain(lVar18);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar18;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar6;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_retain(lVar13);
    lVar6 = lVar13;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar22 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar13);
        }
        lVar20 = *(long *)(lVar22 * 8);
        lVar7 = lVar20;
        func_0x00010c08c3a0();
        if ((int)lVar7 == 1) {
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar20 != 0) {
            lVar7 = lVar20;
            func_0x00010bf0b760();
            ppuStack_1f8 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            iVar2 = (int)lVar7;
            if (iVar2 == 6) {
              ppuStack_1f8 = &PTR____CFConstantStringClassReference_110df3378;
            }
            else if (iVar2 == 5) {
              ppuStack_1f8 = &PTR____CFConstantStringClassReference_110e8eb18;
            }
            else if (iVar2 == 3) {
              ppuStack_1f8 = &PTR____CFConstantStringClassReference_110e8eb38;
            }
            else {
              func_0x00010bf0b760();
              func_0x00010c14de00();
              _objc_retainAutoreleasedReturnValue();
            }
            lVar7 = lVar20;
            func_0x00010bfd6a00();
            if ((int)lVar7 != 0) {
              lVar7 = lVar20;
              func_0x00010bf93e40();
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              func_0x00010c086560();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c08fa60();
              _objc_release(lVar8);
              _objc_release(lVar7);
            }
            lVar7 = lVar20;
            func_0x00010bfd6a20();
            if ((int)lVar7 != 0) {
              lVar7 = lVar20;
              func_0x00010bf93e60();
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              func_0x00010c086560();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c08fa60();
              _objc_release(lVar8);
              _objc_release(lVar7);
            }
            lVar7 = lVar20;
            func_0x00010bfd8e20();
            if ((int)lVar7 != 0) {
              lVar7 = lVar20;
              func_0x00010c0bc4a0();
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              func_0x00010c086560();
              _objc_retainAutoreleasedReturnValue();
              lVar9 = lVar8;
              func_0x00010c08fa60();
              if (lVar9 != 0) {
                lVar9 = lVar20;
                func_0x00010c0bc4a0();
                _objc_retainAutoreleasedReturnValue();
                lVar10 = lVar9;
                func_0x00010c085300();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c08fa60();
                _objc_release(lVar10);
                _objc_release(lVar9);
              }
              _objc_release(lVar8);
              _objc_release(lVar7);
            }
            puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c0ff5c0();
            lVar7 = lVar20;
            func_0x00010c0c5180();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0c55e0();
            func_0x00010c14de00(puVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar5);
            _objc_release(puVar11);
            _objc_release(lVar7);
            _objc_release(ppuStack_1f8);
            _objc_release(lVar20);
          }
        }
        lVar22 = lVar22 + 1;
      } while (lVar6 != lVar22);
      lVar6 = lVar13;
      func_0x00010bf52a60();
    }
    _objc_release(lVar13);
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf529e0();
    puVar12 = puVar5;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(lVar13);
    _objc_release(puVar5);
    _objc_release(lVar18);
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = *(long *)(param_1 + 0x30);
    func_0x00010c0c6280();
    _objc_retainAutoreleasedReturnValue();
    param_4 = auStack_170;
    lVar6 = lVar13;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar13);
        }
        puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puVar21 = *(undefined **)(lVar18 * 8);
        func_0x00010c0c55e0();
        puVar14 = puVar21;
        func_0x00010c09d7e0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar14;
        func_0x00010c08fa60();
        if (puVar15 != (undefined *)0x0) {
          func_0x00010c09d7e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar21;
        }
        func_0x00010c14de00(puVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar12);
        _objc_release(puVar16);
        if (puVar15 != (undefined *)0x0) {
          _objc_release(puVar5);
        }
        _objc_release(puVar14);
        lVar18 = lVar18 + 1;
      } while (lVar6 != lVar18);
      param_4 = auStack_170;
      lVar6 = lVar13;
      func_0x00010bf52a60();
    }
    _objc_release(lVar13);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar19 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = param_3;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1972e0(uVar19);
    _objc_release(puVar5);
    _objc_release(uVar3);
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar12);
    _objc_release(puVar11);
  }
  else {
LAB_106f4042c:
    func_0x00010c178260(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
LAB_106f40a48:
  func_0x00010c23c1a0(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar17 = *(ulong *)(param_1 + 0x48);
    func_0x00010bf94260();
  }
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_2;
  }
  ___stack_chk_fail();
  _objc_retain(uVar17);
  if (param_4 == (undefined1 *)0x20) {
    uVar3 = 2;
  }
  else {
    puVar5 = PTR_PTR_1126bf670;
    func_0x00010c081720();
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = PTR_PTR_1126bf670;
      func_0x00010c075000(PTR_PTR_1126bf670);
      uVar3 = (ulong)((uint)puVar5 ^ 1);
    }
    else {
      uVar3 = 3;
    }
  }
  _objc_release(uVar17);
  return uVar3;
}



/* Entry: 106f40aac; end: 106f40b1b; -[SCSnapRendererPreviewRewriteTranscoder _transcoderTypeForSnapDoc:destination:] */

uint FUN_106f40aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  if (param_4 == 0x20) {
    uVar2 = 2;
  }
  else {
    puVar1 = PTR_PTR_1126bf670;
    func_0x00010c081720(PTR_PTR_1126bf670,param_2,param_3);
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR_PTR_1126bf670;
      func_0x00010c075000(PTR_PTR_1126bf670,param_2,param_3);
      uVar2 = (uint)puVar1 ^ 1;
    }
    else {
      uVar2 = 3;
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106f40b1c; end: 106f40c1b; -[SCSnapRendererPreviewRewriteTranscoder _destinationInfoFromSnapRendererDestination:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_106f40b1c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c4288;
  _objc_alloc_init();
  if ((param_3 >> 1 & 1) != 0) {
    if (puVar1 != (undefined *)0x0) {
      puVar1[0x12] = 1;
      _objc_retain(puVar1);
    }
    _objc_release(puVar1);
  }
  if ((param_3 >> 2 & 1) != 0) {
    if (puVar1 != (undefined *)0x0) {
      puVar1[0x13] = 1;
      _objc_retain(puVar1);
    }
    _objc_release(puVar1);
  }
  if ((param_3 >> 3 & 1) != 0) {
    if (puVar1 != (undefined *)0x0) {
      puVar1[0x16] = 1;
      _objc_retain(puVar1);
    }
    _objc_release(puVar1);
  }
  if ((param_3 >> 4 & 1) != 0) {
    if (puVar1 != (undefined *)0x0) {
      puVar1[0x1b] = 1;
      _objc_retain(puVar1);
    }
    _objc_release(puVar1);
  }
  if ((param_3 >> 6 & 1) != 0) {
    if (puVar1 != (undefined *)0x0) {
      puVar1[0x17] = 1;
      _objc_retain(puVar1);
    }
    _objc_release(puVar1);
  }
  puVar2 = puVar1;
  func_0x00010b68f1bc(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f40c1c; end: 106f40cd3; -[SCSnapRendererPreviewRewriteTranscoder _videoTranscodingQualityForSnapDoc:destinationInfo:] */

undefined * FUN_106f40c1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e8ead8,1,0);
  if ((int)uVar1 == 0) {
    puVar4 = (undefined *)0x2bc;
  }
  else {
    lVar2 = param_1;
    func_0x00010bee90c0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d34c8;
    func_0x00010c11cf00(PTR_PTR_1126d34c8,param_2,param_4,lVar2,*(undefined8 *)(param_1 + 0x30));
    puVar4 = (undefined *)0x12c;
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar3;
    }
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 106f40cd4; end: 106f40ddf; -[SCSnapRendererPreviewRewriteTranscoder _videoTranscodingFeatureProvidedSignalsForSnapDoc:] */

void FUN_106f40cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae780;
  _objc_alloc_init(PTR_PTR_1126ae780);
  func_0x00010c2056c0();
  puVar2 = PTR_PTR_1126d34d0;
  _objc_alloc_init(PTR_PTR_1126d34d0);
  uVar3 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf30e80();
  _objc_release(uVar3);
  uVar7 = 1;
  if ((int)uVar4 == 2) {
    uVar7 = 2;
  }
  func_0x00010c179060(puVar2,param_2,uVar7);
  puVar5 = PTR_PTR_1126d34d8;
  _objc_alloc_init(PTR_PTR_1126d34d8);
  puVar6 = PTR_PTR_1126bf670;
  func_0x00010bfdd5e0(PTR_PTR_1126bf670,param_2,param_3);
  func_0x00010c227040(puVar5,param_2,puVar6);
  puVar6 = PTR_PTR_1126bf670;
  func_0x00010bfd4180(PTR_PTR_1126bf670,param_2,param_3);
  func_0x00010c225c00(puVar5,param_2,puVar6);
  func_0x00010c185ac0(puVar1,param_2,puVar5);
  func_0x00010c177100(puVar1,param_2,puVar2);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f40de0; end: 106f40df7; -[SCSnapRendererPreviewRewriteTranscoder _enableVideoSkipTranscoding] */

void FUN_106f40de0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e8eaf8,0,0);
  return;
}



/* Entry: 106f40df8; end: 106f40e07; -[SCSnapRendererPreviewRewriteTranscoder _transcodingSourceFromRendererSource:] */

undefined8 FUN_106f40df8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_3 != 1) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 106f40e08; end: 106f40e73; -[SCSnapRendererPreviewRewriteTranscoder .cxx_destruct] */

void FUN_106f40e08(long param_1)

{
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



/* Entry: 106f40e74; end: 106f40f17; -[SCSnapRendererRemoveEditsKeepOverlayTranscoder initWithSnapDocEditorFactory:performer:] */

undefined1 *
FUN_106f40e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7de8;
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



/* Entry: 106f40f18; end: 106f40f1f; -[SCSnapRendererRemoveEditsKeepOverlayTranscoder requiresRenderPlugins] */

undefined8 FUN_106f40f18(void)

{
  return 0;
}



/* Entry: 106f40f20; end: 106f4172b; -[SCSnapRendererRemoveEditsKeepOverlayTranscoder renderSnapDoc:watermarkProfile:toResponse:toDestination:snapSource:withPlugins:] */

ulong FUN_106f40f20(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010bf8cb40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0ff5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    func_0x00010bf43d00(param_5);
    goto LAB_106f416b8;
  }
  lVar6 = lVar3;
  func_0x00010c0ff640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd680();
  lVar7 = lVar3;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar8;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar29;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar24;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar24);
  _objc_release(lVar29);
  _objc_release(lVar8);
  _objc_release(lVar7);
  lVar8 = lVar28;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  if (lVar8 == 0) {
    _objc_release(lVar28);
    lVar29 = 0;
LAB_106f4138c:
    bVar1 = true;
  }
  else {
    lVar29 = 0;
    do {
      lVar24 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(lVar28);
        }
        lVar21 = *(long *)(lVar24 * 8);
        lVar9 = lVar21;
        func_0x00010c074780();
        if ((int)lVar9 != 0) {
          func_0x00010c2787a0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar21;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (lVar9 != 0) {
            lVar22 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar21);
              }
              uVar25 = *(ulong *)(lVar22 * 8);
              uVar26 = uVar25;
              func_0x00010c0ff680();
              if (uVar26 == 0) {
                if (lVar29 != 0) goto LAB_106f41314;
              }
              else {
                uVar26 = 0;
                do {
                  uVar10 = uVar25;
                  func_0x00010c0ff660();
                  _objc_retainAutoreleasedReturnValue();
                  uVar11 = uVar10;
                  func_0x00010c296de0();
                  _objc_release(uVar10);
                  lVar12 = lVar3;
                  func_0x00010c23fe00();
                  _objc_retainAutoreleasedReturnValue();
                  lVar13 = lVar12;
                  func_0x00010c0fee00();
                  _objc_retainAutoreleasedReturnValue();
                  lVar14 = lVar13;
                  func_0x00010c0ff660();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar13);
                  _objc_release(lVar12);
                  lVar12 = lVar14;
                  func_0x00010bf52a60();
                  lVar13 = lRam0000000000000000;
                  while (lVar30 = lVar29, lVar12 != 0) {
                    lVar27 = 0;
                    do {
                      if (lRam0000000000000000 != lVar13) {
                        _objc_enumerationMutation(lVar14);
                      }
                      lVar30 = *(long *)(lVar27 * 8);
                      lVar15 = lVar30;
                      func_0x00010c0ff5c0();
                      if ((int)lVar15 == (int)uVar11) {
                        lVar15 = lVar30;
                        func_0x00010c0c3fe0();
                        _objc_retainAutoreleasedReturnValue();
                        lVar16 = lVar15;
                        func_0x00010bf0b760();
                        _objc_release(lVar15);
                        if ((int)lVar16 == 6) {
                          _objc_retain(lVar30);
                          _objc_release(lVar29);
                          goto LAB_106f412b0;
                        }
                      }
                      lVar27 = lVar27 + 1;
                    } while (lVar12 != lVar27);
                    lVar12 = lVar14;
                    func_0x00010bf52a60();
                  }
LAB_106f412b0:
                  _objc_release(lVar14);
                  lVar29 = lVar30;
                  if (lVar30 != 0) goto LAB_106f41314;
                  uVar26 = uVar26 + 1;
                  uVar10 = uVar25;
                  func_0x00010c0ff680();
                  lVar29 = 0;
                } while (uVar26 < uVar10);
              }
              lVar29 = 0;
              lVar22 = lVar22 + 1;
            } while (lVar22 != lVar9);
            lVar9 = lVar21;
            func_0x00010bf52a60();
            lVar29 = 0;
          }
LAB_106f41314:
          _objc_release(lVar21);
        }
        lVar24 = lVar24 + 1;
      } while (lVar24 != lVar8);
      lVar8 = lVar28;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
    _objc_release(lVar28);
    if (lVar29 == 0) goto LAB_106f4138c;
    func_0x00010c1dd680(lVar29);
    bVar1 = false;
  }
  puVar17 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar7 = lVar6;
  func_0x00010c0c3fe0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c55e0();
  func_0x00010c0df7c0(puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar17);
  _objc_release(puVar18);
  _objc_release(lVar8);
  _objc_release(lVar7);
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (!bVar1) {
    lVar7 = lVar29;
    func_0x00010c0c3fe0(lVar29);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c55e0();
    func_0x00010c0df7c0(puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar17);
    _objc_release(puVar18);
    _objc_release(lVar8);
    _objc_release(lVar7);
  }
  func_0x00010c28a040(lVar3);
  lVar7 = lVar3;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar7;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_retain(lVar24);
  lVar7 = lVar24;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar28 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(lVar24);
      }
      puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar23 = *(undefined8 *)(lVar28 * 8);
      func_0x00010c0c55e0(uVar23);
      func_0x00010c0df7c0(puVar18);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar17;
      func_0x00010bf4b900();
      _objc_release(puVar18);
      if (((ulong)puVar19 & 1) == 0) {
        puVar18 = PTR_PTR_1126bcf20;
        _objc_opt_new(PTR_PTR_1126bcf20);
        func_0x00010c0c55e0(uVar23);
        func_0x00010c1c4aa0(puVar18);
        func_0x00010bf6c3a0(lVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar18);
      }
      lVar28 = lVar28 + 1;
    } while (lVar7 != lVar28);
    lVar7 = lVar24;
    func_0x00010bf52a60();
  }
  _objc_release(lVar24);
  lVar7 = lVar3;
  func_0x00010c23fe00(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139ee0(lVar3);
  _objc_release(lVar7);
  puVar18 = PTR_PTR_1126affe8;
  func_0x00010c09e180(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa9a0(lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar18);
  if (!bVar1) {
    puVar18 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa9a0(lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar18);
  }
  func_0x00010bf43d00(param_5);
  _objc_release(lVar24);
  _objc_release(puVar17);
  _objc_release(lVar29);
  _objc_release(lVar6);
LAB_106f416b8:
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
    ___stack_chk_fail();
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = param_2;
    func_0x00010bf0b760();
    _objc_release(param_2);
    return (ulong)((int)uVar23 == 5);
  }
  return param_3;
}



/* Entry: 106f4172c; end: 106f4176f;  */

bool FUN_106f4172c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 5;
}



/* Entry: 106f41770; end: 106f41877;  */

void FUN_106f41770(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0fee00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0fee00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b98c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0fee00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea760();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0fee00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1dd6a0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f41878; end: 106f418a7; -[SCSnapRendererRemoveEditsKeepOverlayTranscoder .cxx_destruct] */

void FUN_106f41878(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f418a8; end: 106f4194b; -[SCSnapRendererRemoveEditsTranscoder initWithSnapDocEditorFactory:performer:] */

undefined1 *
FUN_106f418a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7df0;
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



/* Entry: 106f4194c; end: 106f41953; -[SCSnapRendererRemoveEditsTranscoder requiresRenderPlugins] */

undefined8 FUN_106f4194c(void)

{
  return 0;
}



/* Entry: 106f41954; end: 106f41c3f; -[SCSnapRendererRemoveEditsTranscoder renderSnapDoc:watermarkProfile:toResponse:toDestination:snapSource:withPlugins:] */

ulong FUN_106f41954(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf8cb40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ff5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c0ff640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd680();
  func_0x00010c28a040(lVar2);
  lVar6 = lVar2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_retain(lVar7);
  lVar6 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar6 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      lVar16 = *(long *)(lVar15 * 8);
      lVar8 = lVar16;
      func_0x00010c0c55e0();
      lVar9 = lVar5;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c0c55e0();
      _objc_release(lVar10);
      _objc_release(lVar9);
      if (lVar8 != lVar11) {
        puVar12 = PTR_PTR_1126bcf20;
        _objc_opt_new(PTR_PTR_1126bcf20);
        func_0x00010c0c55e0(lVar16);
        func_0x00010c1c4aa0(puVar12);
        func_0x00010bf6c3a0(lVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar12);
      }
      lVar15 = lVar15 + 1;
    } while (lVar6 != lVar15);
    lVar6 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  lVar6 = lVar2;
  func_0x00010c23fe00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139ee0(lVar2);
  _objc_release(lVar6);
  puVar12 = PTR_PTR_1126affe8;
  func_0x00010c09e180(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa9a0(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar12);
  func_0x00010bf43d00(param_5);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return param_5;
  }
  ___stack_chk_fail();
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (ulong)((int)uVar13 == 5);
}



/* Entry: 106f41c40; end: 106f41c83;  */

bool FUN_106f41c40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 5;
}



/* Entry: 106f41c84; end: 106f41d8b;  */

void FUN_106f41c84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0fee00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0fee00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b98c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0fee00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea760();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0fee00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1dd6a0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f41d8c; end: 106f41dbb; -[SCSnapRendererRemoveEditsTranscoder .cxx_destruct] */

void FUN_106f41d8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f41dbc; end: 106f41eb7; -[SCSnapRendererSnapDocImageTranscoder initWithSnapRendererLogger:ngsmeSnapDocResolver:snapDocEditorFactory:performer:] */

undefined1 *
FUN_106f41dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f7df8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f41eb8; end: 106f41ebf; -[SCSnapRendererSnapDocImageTranscoder requiresRenderPlugins] */

undefined8 FUN_106f41eb8(void)

{
  return 0;
}



/* Entry: 106f41ec0; end: 106f41fd7; -[SCSnapRendererSnapDocImageTranscoder renderSnapDoc:watermarkProfile:toResponse:toDestination:snapSource:withPlugins:] */

void FUN_106f41ec0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c0f40c0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar3;
  func_0x00010bf51e00();
  _objc_release(uVar3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106f41fd8;
  puStack_60 = &UNK_1109844a8;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uStack_58 = param_5;
  lStack_50 = param_1;
  uStack_48 = uVar1;
  _objc_retain(uVar1);
  _objc_retain(param_5);
  func_0x00010c297260(uVar2,param_2,&puStack_78,uVar3);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(uVar2);
  return;
}



/* Entry: 106f41fd8; end: 106f42417;  */

void FUN_106f41fd8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    func_0x00010bf43ca0(*(undefined8 *)(param_3 + 0x20));
    goto LAB_106f42388;
  }
  if (param_4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(param_4 + 8);
  }
  _objc_retain(lVar5);
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uVar12 = 0x3032000000;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_106f42418;
  uStack_98 = 0x106f42428;
  uStack_90 = 0;
  if (lVar5 == 0) {
    _objc_retain(0);
    lVar7 = 0;
LAB_106f423d4:
    lVar8 = 0;
  }
  else {
    lVar7 = *(long *)(lVar5 + 8);
    _objc_retain(lVar7);
    if (lVar7 == 0) goto LAB_106f423d4;
    lVar8 = *(long *)(lVar7 + 8);
  }
  _objc_retain(lVar8);
  lVar1 = lVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(lVar1 + 0x20);
  }
  _objc_retain(lVar10);
  lVar2 = lVar10;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar2 + 8);
  }
  _objc_retain(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar10);
  _objc_release(lVar1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  func_0x00010c0bc940(uVar6);
  if (puStack_b0[5] == 0) {
    uVar12 = *(undefined8 *)(param_3 + 0x20);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar12);
  }
  else {
    if (lVar5 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = *(undefined **)(lVar5 + 0x10);
    }
    _objc_retain(puVar9);
    puVar4 = puVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    if (puVar4 == (undefined *)0x0) {
      puVar9 = *(undefined **)(param_3 + 0x28);
      func_0x00010bebcb00(puVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_3 + 0x20);
      _objc_retain(uVar12);
      func_0x00010c297260(puVar9);
    }
    else {
      puVar9 = PTR_PTR_1126bf508;
      _objc_alloc(PTR_PTR_1126bf508);
      puVar3 = PTR_PTR_1126bf4d0;
      func_0x00010c22bec0(PTR_PTR_1126bf4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0(puStack_b0[5]);
      uVar11 = *(undefined8 *)(puVar4 + 0x18);
      _objc_retain(uVar11);
      func_0x00010c03c680(uVar12,param_2,puVar9);
      _objc_release(uVar11);
      _objc_release(puVar3);
      uVar12 = *(undefined8 *)(param_3 + 0x30);
      _objc_retain(*(undefined8 *)(param_3 + 0x30));
      uVar11 = *(undefined8 *)(param_3 + 0x20);
      _objc_retain(uVar11);
      func_0x00010c2505e0(puVar9);
      _objc_release(uVar11);
    }
    _objc_release(uVar12);
    _objc_release(puVar9);
  }
  _objc_release(puVar4);
  _objc_release(uVar6);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(lVar5);
LAB_106f42388:
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106f42418; end: 106f42437;  */

void FUN_106f42418(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106f42438; end: 106f4246f;  */

void FUN_106f42438(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f42470; end: 106f42517;  */

void FUN_106f42470(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bebcb00(uVar1,param_2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010c297260(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 106f42518; end: 106f4253f;  */

void FUN_106f42518(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithSnapDocEditor__1125ae8e8,param_2);
  return;
}



/* Entry: 106f42540; end: 106f4261f; -[SCSnapRendererSnapDocImageTranscoder _snapDocWithOutputImage:attachments:] */

void FUN_106f42540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x000108eb5cc8(param_5,0x5a);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3080;
  func_0x00010bf64b00(PTR_PTR_1126b3080);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0(param_5);
  _objc_release(param_5);
  func_0x00010bebcaa0(param_1,param_2,0,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106f42620; end: 106f4263f; -[SCSnapRendererSnapDocImageTranscoder _snapDocWithMediaInput:attachments:mediaType:dimensions:durationMs:] */

void FUN_106f42620(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 8);
  _objc_retain();
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(uVar7);
  _objc_retain(uVar6);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126b25c0;
  _objc_opt_new(PTR_PTR_1126b25c0);
  if (param_4 != 0) {
    lVar3 = param_4;
    func_0x00010bf51e00(param_4);
    func_0x00010c16b420(puVar2);
    _objc_release(lVar3);
  }
  puVar4 = puVar2;
  func_0x00010c0fee00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179060();
  _objc_release(puVar4);
  uVar5 = uVar6;
  func_0x00010bf8cb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar5;
  func_0x00010bef9c20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar5);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c297260(uVar6);
  _objc_release(uVar7);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f42640; end: 106f42687; -[SCSnapRendererSnapDocImageTranscoder .cxx_destruct] */

void FUN_106f42640(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f42688; end: 106f42a3b; -[SCSnapRendererSnapDocTranscodingImpl initWithSnapRendererLogger:userSession:previewAssetVideoProviderFactory:audioProcessingSessionFactory:musicMediaLoader:voiceoverMediaLoader:activeVideoPaths:imageCommandProvider:previewCameraSourceOverlayService:targetTrajectoryFactory:captionDataProvider:creativeToolsMemoriesResources:directorModeVideoOptimizationConfig:snapVideoFilterServices:snapDocEditorFactory:snapDocConverterServices:watermarkServices:performer:] */

undefined8 *
FUN_106f42688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126f7e00;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[1];
    puVar1[1] = param_21;
    _objc_release(uVar2);
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106f42a3c; end: 106f42a43; -[SCSnapRendererSnapDocTranscodingImpl requiresRenderPlugins] */

undefined8 FUN_106f42a3c(void)

{
  return 0;
}



/* Entry: 106f42a44; end: 106f42f5f; -[SCSnapRendererSnapDocTranscodingImpl renderSnapDoc:watermarkProfile:toResponse:toDestination:snapSource:withPlugins:] */

void FUN_106f42a44(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined1 auStack_110 [8];
  undefined1 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [32];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x000107e623f0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    bVar12 = false;
  }
  else {
    func_0x00010bdc1140(auStack_90,lVar1);
    uVar6 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uVar7 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uVar13 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    puVar2 = auStack_90;
    uStack_b0 = uVar7;
    uStack_a8 = uVar6;
    uStack_a0 = uVar13;
    _CMTimeCompare(puVar2,&uStack_b0);
    if ((int)puVar2 == 0) {
      puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(param_5);
      goto LAB_106f42ecc;
    }
    func_0x00010bdc1140(auStack_90,lVar1);
    puVar2 = auStack_90;
    uStack_b0 = uVar7;
    uStack_a8 = uVar6;
    uStack_a0 = uVar13;
    _CMTimeCompare(puVar2,&uStack_b0);
    bVar12 = 0 < (int)puVar2;
  }
  puVar10 = param_1;
  func_0x00010bebd4e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar10 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(param_5);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x70);
    func_0x00010c243b20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c4a00(puVar10);
    uVar5 = uVar4;
    func_0x00010bf58fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar9 = PTR_PTR_1126b26c0;
    _objc_opt_class(PTR_PTR_1126b26c0);
    uVar3 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar9);
    uVar4 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    uVar13 = *(undefined8 *)(param_1 + 0x80);
    *(ulong *)(param_1 + 0x80) = uVar4;
    _objc_release(uVar13);
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_106f42f60;
    puStack_c0 = &UNK_11097e310;
    _objc_retain(param_5);
    puStack_b8 = param_5;
    func_0x00010c1e4740(*(undefined8 *)(param_1 + 0x80));
    _objc_initWeak(auStack_90,param_1);
    puStack_100 = puVar9;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_106f42f68;
    puStack_e8 = &UNK_1108434b0;
    _objc_copyWeak(auStack_e0,auStack_90);
    func_0x00010c178000(param_5);
    uVar6 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010bf8cb40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010bf51700(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befb7e0();
    _objc_release(uVar13);
    _objc_release(uVar7);
    uVar7 = uVar6;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c13b600();
    func_0x00010c072540();
    uVar13 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_110,auStack_90);
    _objc_retain(param_5);
    uStack_108 = bVar12;
    func_0x00010bfae780(uVar11);
    _objc_release(uVar13);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_110);
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_90);
    puVar9 = puStack_b8;
  }
  _objc_release(puVar9);
LAB_106f42ecc:
  _objc_release(puVar10);
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f42f60; end: 106f42f67;  */

void FUN_106f42f60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c288d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_updateProgress__11267fd70);
  return;
}



/* Entry: 106f42f68; end: 106f42f9b;  */

void FUN_106f42f68(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf2ebc0(*(undefined8 *)(param_1 + 0x80));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f42f9c; end: 106f4307b;  */

void FUN_106f42f9c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    if ((param_3 == 0) && (lVar2 != 0)) {
      uVar3 = *(undefined8 *)(lVar1 + 0x80);
      func_0x00010c0efa40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bde3260(lVar1);
      _objc_release(uVar3);
    }
    else {
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106f4307c; end: 106f43153; -[SCSnapRendererSnapDocTranscodingImpl _completeResponse:snapDocWithVideoURL:overlayImage:attachments:isAnimatedImage:] */

void FUN_106f4307c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bebcb40(param_1,param_2,param_4,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106f43154;
  puStack_50 = &UNK_1108bc678;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c297260(lVar1,param_2,&puStack_68,uVar2);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(lVar1);
  return;
}



/* Entry: 106f43154; end: 106f4316b;  */

void FUN_106f43154(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithSnapDocEditor__1125ae8e8,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
  return;
}



/* Entry: 106f4316c; end: 106f431e7; -[SCSnapRendererSnapDocTranscodingImpl _snapVideoFilterParamsForDestination:] */

void FUN_106f4316c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 4) {
    _objc_alloc(PTR_PTR_1126d34e0);
  }
  else if (param_3 == 3) {
    _objc_alloc(PTR_PTR_1126d34e0);
  }
  else {
    if (param_3 != 1) goto LAB_106f431e0;
    _objc_alloc(PTR_PTR_1126d34e0);
  }
  func_0x00010c0292e0();
LAB_106f431e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


