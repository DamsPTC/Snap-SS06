/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d16b18; end: 105d16b23; -[SCUcoVisualSignalData .cxx_destruct] */

void FUN_105d16b18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d16b24; end: 105d16b9b; -[SCUcoVisualSignalMapping initWithLabelMapping:] */

undefined1 * FUN_105d16b24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eced8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d16b9c; end: 105d16bbf; -[SCUcoVisualSignalMapping copyWithZone:] */

undefined8 FUN_105d16b9c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105d16bc0; end: 105d16bc7; -[SCUcoVisualSignalMapping hash] */

void FUN_105d16bc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 105d16bc8; end: 105d16c57; -[SCUcoVisualSignalMapping isEqual:] */

long FUN_105d16bc8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105d16c3c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_105d16c3c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_105d16c3c;
    }
  }
  lVar3 = 1;
LAB_105d16c3c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105d16c58; end: 105d16c5f; -[SCUcoVisualSignalMapping labelMapping] */

undefined8 FUN_105d16c58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105d16c60; end: 105d16c6b; -[SCUcoVisualSignalMapping .cxx_destruct] */

void FUN_105d16c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d16c6c; end: 105d16da7; +[SCPreviewContentRecognitionProviderImpl sharedCIDetector] */

void FUN_105d16c6c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c2270 != -1) {
    func_0x00010002a2fc(0x1136c2270,&PTR___NSConcreteGlobalBlock_1108e5ec8);
  }
  uVar1 = uRam00000001136c2268;
  _objc_retain(uRam00000001136c2268);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d16da8; end: 105d16e8f; -[SCPreviewContentRecognitionProviderImpl initWithPreviewConfiguration:previewVideoProviderService:contentRecognitionProvider:] */

undefined1 *
FUN_105d16da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ecee0;
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
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d16e90; end: 105d16eeb; -[SCPreviewContentRecognitionProviderImpl snapEditor:didTriggerLifecycle:] */

void FUN_105d16e90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  if (param_4 == 2) {
    *(undefined1 *)(param_1 + 0x40) = 1;
    if (*(char *)(param_1 + 0x41) == '\x01') {
      func_0x00010beae0a0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d16eec; end: 105d16fe3; -[SCPreviewContentRecognitionProviderImpl _setupMediaReadyListener] */

void FUN_105d16eec(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c07e920();
    if (iVar1 != 0) {
      lVar2 = *(long *)(param_1 + 8);
      func_0x00010bfbbbc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be82af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processingPreviewContent_11257e458);
        return;
      }
    }
    _objc_initWeak(auStack_28,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010befa300(uVar3);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 105d16fe4; end: 105d17017;  */

void FUN_105d16fe4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be82ae0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d17018; end: 105d1708b; -[SCPreviewContentRecognitionProviderImpl futureForFaceObjectFromPreviewInputMedia] */

void FUN_105d17018(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    *(undefined1 *)(param_1 + 0x41) = 1;
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar2;
    _objc_release(uVar3);
    if ((*(char *)(param_1 + 0x40) == '\x01') && ((*(byte *)(param_1 + 0x30) & 1) == 0)) {
      func_0x00010beae0a0(param_1);
    }
    lVar1 = *(long *)(param_1 + 0x20);
  }
  func_0x00010bfbc3e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d1708c; end: 105d17093; -[SCPreviewContentRecognitionProviderImpl recognitionMediaSizeFuture] */

void FUN_105d1708c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 105d17094; end: 105d171ab; -[SCPreviewContentRecognitionProviderImpl foregroundInstancesFuture] */

void FUN_105d17094(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c075080();
    if (iVar1 == 0) {
      lVar5 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 8);
      FUN_105d171ac();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_38,param_1);
      _objc_copyWeak(auStack_40,auStack_38);
      uVar3 = uVar2;
      func_0x00010bfb2660();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = uVar3;
      _objc_release(uVar4);
      lVar5 = *(long *)(param_1 + 0x38);
      _objc_retain(lVar5);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
      _objc_release(uVar2);
    }
  }
  else {
    _objc_retain(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105d171ac; end: 105d17253;  */

void FUN_105d171ac(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bfbbbe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126ae558;
  puVar2 = param_1;
  if (puVar1 == (undefined *)0x0) {
    func_0x00010bfbbbc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010bfe9ca0(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = param_1;
    func_0x00010bfbbbe0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105d17254; end: 105d1730f;  */

void FUN_105d17254(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bfe9820(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bfb5420(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105d17310; end: 105d173df; -[SCPreviewContentRecognitionProviderImpl _processingPreviewContent] */

void FUN_105d17310(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c075080();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    FUN_105d171ac(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_28,param_1);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c297260(uVar2);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 105d173e0; end: 105d17427;  */

void FUN_105d173e0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be814a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d17428; end: 105d17677; -[SCPreviewContentRecognitionProviderImpl _processImageContent:] */

void FUN_105d17428(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  double dStack_70;
  double dStack_68;
  
  _objc_retain(param_5);
  if (param_5 == 0) {
    func_0x00010bf43d60(*(undefined8 *)(param_3 + 0x20));
    func_0x00010bf43d60(*(undefined8 *)(param_3 + 0x28));
  }
  else {
    _objc_retain(param_5);
    puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
    func_0x00010c106aa0(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
    _objc_retainAutoreleasedReturnValue();
    dVar6 = 1.0;
    func_0x00010c1f5fe0();
    func_0x00010c23d0a0(param_5);
    func_0x00010c23d0a0(param_5);
    puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x00010c046ac0(dVar6 / 10.0,param_2 / 10.0);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x105d17838;
    puStack_80 = &UNK_110866440;
    lStack_78 = param_5;
    dStack_70 = dVar6 / 10.0;
    dStack_68 = param_2 / 10.0;
    _objc_retain(param_5);
    puVar4 = puVar3;
    func_0x00010bfe91c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_78);
    _objc_release(param_5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uVar5 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c23d0a0(puVar4);
    func_0x00010c2971c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar5);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___CIImage_1126b3128;
    _objc_retainAutorelease(puVar4);
    func_0x00010bdc1020();
    func_0x00010bfe9240();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(&puStack_98,param_3);
    uVar5 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_105d17678;
    puStack_b0 = &UNK_110841fb0;
    _objc_copyWeak(auStack_a0,&puStack_98);
    puStack_a8 = puVar2;
    _objc_retain(puVar2);
    func_0x00010007380c(uVar5,&puStack_c8);
    _objc_release(uVar5);
    _objc_release(puStack_a8);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(&puStack_98);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 105d17678; end: 105d177d7;  */

void FUN_105d17678(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126c4100;
    func_0x00010c22b780(PTR_PTR_1126c4100);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfa3540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010c0b8620(puVar2,param_2,&PTR___NSConcreteGlobalBlock_1108e5f38,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d177d8; end: 105d178bb; -[SCPreviewContentRecognitionProviderImpl .cxx_destruct] */

void FUN_105d177d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d178bc; end: 105d17967; -[SCPreviewContentRecognitionServicePluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d178bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112734a10;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112734a14;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c119b40(lVar2);
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



/* Entry: 105d17968; end: 105d1799f; -[SCPreviewContentRecognitionServicePluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d17968(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734a14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734a10);
  return;
}



/* Entry: 105d179a0; end: 105d17a83; -[SCPreviewContentRecognitionServiceProvider provide] */

void FUN_105d179a0(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126c4108;
  _objc_alloc(PTR_PTR_1126c4108);
  func_0x00010c03ba20();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105d17a84; end: 105d17ac3;  */

void FUN_105d17a84(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105d17ac4; end: 105d17bcb; -[SCPreviewContentRecognitionServiceProvider _createRecognitionServiceProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d17ac4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c4100;
  _objc_alloc(PTR_PTR_1126c4100);
  lVar2 = param_1 + _DAT_112734a18;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112734a20;
    _objc_loadWeakRetained(lVar6);
  }
  param_1 = param_1 + _DAT_112734a1c;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bf4d180();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf4d140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0398e0(puVar1,param_2,lVar3,lVar6,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d17bcc; end: 105d17c0f; -[SCPreviewContentRecognitionServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d17bcc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734a1c);
  _objc_destroyWeak(param_1 + _DAT_112734a20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734a18);
  return;
}



/* Entry: 105d17c10; end: 105d17ce7; -[SCPreviewLocationInfoProviderImpl initWithLocationServicesDataStore:] */

undefined1 * FUN_105d17c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ecee8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d17ce8; end: 105d17d2b; -[SCPreviewLocationInfoProviderImpl updateLocationInfoOnce] */

void FUN_105d17ce8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287620(uVar1,param_2,2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d17d2c; end: 105d17ddb; -[SCPreviewLocationInfoProviderImpl altitude] */

void FUN_105d17d2c(float param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  func_0x00010c0dff20(uVar2,param_3,&PTR____CFConstantStringClassReference_110f2d3b8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar4);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c4110;
    _objc_alloc(PTR_PTR_1126c4110);
    func_0x00010bfb2c80(uVar2);
    func_0x00010c02bc80((double)param_1,puVar4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105d17ddc; end: 105d17de3; -[SCPreviewLocationInfoProviderImpl speed] */

undefined8 FUN_105d17ddc(void)

{
  return 0;
}



/* Entry: 105d17de4; end: 105d17e0b; -[SCPreviewLocationInfoProviderImpl updateObservable] */

void FUN_105d17de4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d17e0c; end: 105d17f17; -[SCPreviewLocationInfoProviderImpl _locationServicesDataStoreDidUpdate:] */

void FUN_105d17e0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  iVar1 = 0x10f2d398;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f2d398,param_2,uVar2);
  if (iVar1 == 0) {
    iVar1 = 0x10f2d3b8;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110f2d3b8,param_2,uVar2);
    if (iVar1 == 0) goto LAB_105d17f04;
    lVar3 = param_1;
    func_0x00010bf01f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) goto LAB_105d17f04;
    puVar4 = PTR_PTR_1126c4118;
    func_0x00010bf7dfc0(PTR_PTR_1126c4118);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = param_1;
    func_0x00010c249ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) goto LAB_105d17f04;
    puVar4 = PTR_PTR_1126c4118;
    func_0x00010bf7e6c0(PTR_PTR_1126c4118);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,puVar4);
  _objc_release(puVar4);
LAB_105d17f04:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d17f18; end: 105d17f47; -[SCPreviewLocationInfoProviderImpl .cxx_destruct] */

void FUN_105d17f18(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d17f48; end: 105d18067; -[SCPreviewLocationInfoServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d17f48(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112734a2c);
  *(undefined **)(param_1 + _DAT_112734a2c) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112734a38);
  _objc_retain(uVar2);
  puVar1 = PTR_PTR_1126c4120;
  _objc_alloc(PTR_PTR_1126c4120);
  func_0x00010c039ac0();
  func_0x00010bf9d660(uVar2);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105d18068; end: 105d180a7;  */

void FUN_105d18068(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4f5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105d180a8; end: 105d1813b; -[SCPreviewLocationInfoServicesEntryPoint _locationInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d180a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126c4128;
  _objc_alloc(PTR_PTR_1126c4128);
  param_1 = param_1 + _DAT_112734a30;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c09f4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c026fa0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d1813c; end: 105d18193; -[SCPreviewLocationInfoServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d1813c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112734a38,0);
  _objc_destroyWeak(param_1 + _DAT_112734a30);
  _objc_destroyWeak(param_1 + _DAT_112734a34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112734a2c,0);
  return;
}



/* Entry: 105d18194; end: 105d182ab; -[SCPreviewFeatureAlignmentEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d18194(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c4138;
  _objc_alloc(PTR_PTR_1126c4138);
  func_0x00010bff2a00();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112734a5c);
  }
  _objc_retain(uVar3);
  func_0x00010bf9d660(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105d182ac; end: 105d184c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d182ac(long param_1,undefined8 param_2)

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
  undefined *puVar11;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_112734a3c;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c08ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_112734a44;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_112734a48;
    _objc_loadWeakRetained();
    lVar4 = lVar1;
    func_0x00010c0b82c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_112734a4c;
    _objc_loadWeakRetained();
    lVar5 = lVar1;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_112734a50;
    _objc_loadWeakRetained();
    lVar6 = lVar1;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_112734a54;
    _objc_loadWeakRetained();
    lVar7 = param_1 + _DAT_112734a40;
    _objc_loadWeakRetained(lVar7);
    lVar8 = lVar7;
    func_0x00010c15ada0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    puVar11 = PTR_PTR_1126c4130;
    _objc_alloc(PTR_PTR_1126c4130);
    lVar7 = param_1 + _DAT_112734a58;
    _objc_loadWeakRetained();
    lVar9 = lVar7;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c112020();
    func_0x00010bff8300(puVar11,param_2,lVar8,lVar3,lVar2,lVar4,lVar5,lVar6,lVar1,lVar10);
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(lVar8);
    _objc_release(lVar1);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105d184c8; end: 105d18557; -[SCPreviewFeatureAlignmentEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d184c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112734a5c,0);
  _objc_destroyWeak(param_1 + _DAT_112734a58);
  _objc_destroyWeak(param_1 + _DAT_112734a54);
  _objc_destroyWeak(param_1 + _DAT_112734a50);
  _objc_destroyWeak(param_1 + _DAT_112734a4c);
  _objc_destroyWeak(param_1 + _DAT_112734a48);
  _objc_destroyWeak(param_1 + _DAT_112734a44);
  _objc_destroyWeak(param_1 + _DAT_112734a40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734a3c);
  return;
}



/* Entry: 105d18558; end: 105d18603; -[SCPreviewFeatureAlignmentServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d18558(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112734a60;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112734a68;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010beffa20(lVar2);
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



/* Entry: 105d18604; end: 105d18647; -[SCPreviewFeatureAlignmentServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d18604(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734a68);
  _objc_destroyWeak(param_1 + _DAT_112734a64);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734a60);
  return;
}



/* Entry: 105d18648; end: 105d186ab; -[SCPreviewAlignmentGuide view] */

void FUN_105d18648(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126c4140;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar3);
    uVar2 = param_1;
    func_0x00010c083820(param_1);
    func_0x00010c1677c0((double)(uVar2 & 0xffffffff),*(undefined8 *)(param_1 + 0x10));
    lVar4 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105d186ac; end: 105d1871b; -[SCPreviewAlignmentGuide showGuideInView:] */

void FUN_105d186ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_3);
    _objc_release(param_3);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c2237d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setVisible__112666818,1);
    return;
  }
  return;
}



/* Entry: 105d1871c; end: 105d1879b; -[SCPreviewAlignmentGuide setVisible:] */

void FUN_105d1871c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x00010c083820();
  if (param_3 != (int)lVar1) {
    *(char *)(param_1 + 8) = (char)param_3;
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105d1879c;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48);
  }
  return;
}



/* Entry: 105d1879c; end: 105d187eb;  */

void FUN_105d1879c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c083820(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0((double)(uVar1 & 0xffffffff));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d187ec; end: 105d187fb; -[SCPreviewAlignmentGuide setGestureGuideState:] */

void FUN_105d187ec(long param_1,undefined8 param_2,long param_3)

{
  *(long *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c2237d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setVisible__112666818,param_3 != 1);
  return;
}



/* Entry: 105d187fc; end: 105d1882b; -[SCPreviewAlignmentGuide setView:] */

void FUN_105d187fc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105d1882c; end: 105d18833; -[SCPreviewAlignmentGuide state] */

undefined8 FUN_105d1882c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105d18834; end: 105d1883b; -[SCPreviewAlignmentGuide isVisible] */

undefined1 FUN_105d18834(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105d1883c; end: 105d18847; -[SCPreviewAlignmentGuide .cxx_destruct] */

void FUN_105d1883c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105d18848; end: 105d18853; +[SCPreviewAlignmentGuideView layerClass] */

void FUN_105d18848(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  return;
}



/* Entry: 105d18854; end: 105d18953; -[SCPreviewAlignmentGuideView init] */

undefined1 * FUN_105d18854(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ecef0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c22a660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c22a660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdd00(0x3ff0000000000000);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105d18954; end: 105d18a57; -[SCPreviewAlignmentGuideView layoutSubviews] */

void FUN_105d18954(undefined8 param_1)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ecef0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_layoutSubviews_112600e60);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  dVar2 = *(double *)PTR__CGPointZero_110347540;
  func_0x00010c0d18c0(dVar2,*(undefined8 *)(PTR__CGPointZero_110347540 + 8));
  func_0x00010bf20c00(param_1);
  _CGRectGetWidth();
  dVar3 = dVar2;
  func_0x00010bf20c00(param_1);
  _CGRectGetHeight();
  func_0x00010bf20c00(param_1);
  if (dVar2 <= dVar3) {
    _CGRectGetHeight();
  }
  else {
    _CGRectGetWidth();
  }
  func_0x00010bef98c0(puVar1);
  _objc_retainAutorelease(puVar1);
  func_0x00010bdc1040();
  func_0x00010c22a660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 105d18a58; end: 105d18aeb; -[SCPreviewAlignmentGuideView tintColorDidChange] */

void FUN_105d18a58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ecef0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_tintColorDidChange_11252d268);
  uVar1 = param_1;
  func_0x00010c270f20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c22a660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 105d18aec; end: 105d18aef; -[SCPreviewAlignmentGuideView shapeLayer] */

void FUN_105d18aec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 105d18af0; end: 105d18b5b; -[SCPreviewAlignmentGuideView setDashed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d18af0(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112734a78) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112734a78) = (char)param_3;
  func_0x00010c0701a0();
  func_0x00010c22a660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d18b5c; end: 105d18b6b; -[SCPreviewAlignmentGuideView isDashed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105d18b5c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112734a78);
}



/* Entry: 105d18b6c; end: 105d18bab; -[SCPreviewAlignmentGuideView setShapeLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d18b6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112734a7c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d18bac; end: 105d18bbf; -[SCPreviewAlignmentGuideView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d18bac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112734a7c,0);
  return;
}



/* Entry: 105d18bc0; end: 105d18c63; -[SCPreviewAlignmentRotationDetector initWithDelegate:] */

undefined1 * FUN_105d18bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ecef8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c18b5e0(puVar1);
    if (lRam00000001136c2280 != -1) {
      func_0x00010002a2fc(0x1136c2280,&PTR___NSConcreteGlobalBlock_1108e5fe8);
    }
    func_0x00010c1ee7e0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d18c64; end: 105d18c6b; -[SCPreviewAlignmentRotationDetector gestureType] */

undefined8 FUN_105d18c64(void)

{
  return 1;
}



/* Entry: 105d18c6c; end: 105d191e7; -[SCPreviewAlignmentRotationDetector adjustView:gesture:objectViews:guideContainerView:] */

void FUN_105d18c6c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,ulong param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  puVar1 = PTR__OBJC_CLASS___UIRotationGestureRecognizer_1126c4148;
  _objc_opt_class(PTR__OBJC_CLASS___UIRotationGestureRecognizer_1126c4148);
  uVar2 = param_8;
  _objc_opt_isKindOfClass(param_8,puVar1);
  if ((uVar2 & 1) != 0) {
    _objc_retain(param_8);
    uVar2 = param_8;
    func_0x00010c252440();
    if (uVar2 == 1) {
      uVar3 = param_7;
      func_0x00010c2321e0();
      if ((int)uVar3 != 0) {
        uVar3 = param_7;
        func_0x00010beff9c0(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2835e0(param_7);
        _objc_release(uVar3);
      }
      uVar3 = param_7;
      func_0x00010beff9c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c141a80();
      func_0x00010c16fd20(param_5);
      _objc_release(uVar3);
      func_0x00010c2007c0(param_5);
      uVar2 = param_5;
      func_0x00010bf6b020(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6fbc0();
      _objc_release(uVar2);
    }
    func_0x00010bf18920(param_5);
    uVar3 = param_7;
    dVar10 = param_1;
    func_0x00010beff9c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c141a80();
    _objc_release(uVar3);
    dVar8 = ABS(param_1 - dVar10);
    dVar10 = 0.06981317007977318;
    if (0.06981317007977318 < dVar8) {
      func_0x00010c2007c0(param_5);
    }
    uVar2 = param_5;
    func_0x00010c141c20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c252440();
    func_0x00010c141a80(param_8);
    uVar3 = param_7;
    dVar11 = dVar8;
    func_0x00010beff9c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c141a80();
    dVar8 = dVar8 + dVar11;
    _objc_release(uVar3);
    uVar5 = param_5;
    func_0x00010c230fc0();
    if ((uVar5 & 1) == 0) {
      dVar11 = dVar8;
      func_0x00010bde93a0(dVar8,param_5);
      dVar10 = dVar11;
      func_0x00010c2979e0(param_8);
      func_0x00010be16960(dVar11,dVar10,param_5);
    }
    dVar9 = dVar11;
    if ((uVar2 != 0) && (uVar4 == 0)) {
      uVar4 = param_5;
      func_0x00010c141c20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c252440();
      _objc_release(uVar4);
      dVar9 = dVar11;
      if (uVar5 == 1) {
        uVar3 = param_7;
        func_0x00010beff9c0(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c141a80();
        _objc_release(uVar3);
        dVar9 = 0.0;
        func_0x00010c1ee7a0(0,param_8);
        dVar8 = dVar11;
      }
    }
    func_0x00010c141a80(param_8);
    uVar4 = param_5;
    dVar11 = dVar9;
    func_0x00010c141c20();
    fVar7 = SUB84(dVar11,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar4 == 0) {
      uVar3 = param_7;
      func_0x00010beff9c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ee7a0(dVar8);
      _objc_release(uVar3);
      func_0x00010c1ee7a0(0,param_8);
    }
    else {
      uVar4 = param_5;
      func_0x00010c141c20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c252440();
      _objc_release(uVar4);
      dVar11 = dVar10;
      dVar10 = dVar8;
      if (uVar5 == 0) {
        uVar4 = param_5;
        func_0x00010c141c20(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf02ae0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        dVar9 = (double)fVar7;
        dVar11 = 0.017453292519943295;
        dVar10 = dVar9 * 0.017453292519943295;
        _objc_release(uVar5);
        _objc_release(uVar4);
        uVar3 = param_7;
        func_0x00010beff9c0(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c141a80();
        dVar9 = dVar10 - dVar9;
        _objc_release(uVar3);
      }
      uVar3 = param_7;
      func_0x00010beff9c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ee7a0(dVar10);
      _objc_release(uVar3);
      func_0x00010beff9a0(param_7);
      uVar3 = param_7;
      func_0x00010beff9c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf513e0(dVar10,dVar11,param_3,param_4,param_10);
      _objc_release(uVar3);
      dVar8 = dVar10;
      _CGRectGetMidX(dVar10,dVar11,param_3,param_4);
      _CGRectGetMidY(dVar10,dVar11,param_3,param_4);
      uVar4 = param_5;
      func_0x00010c141c20(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17a6a0(dVar8,dVar10);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    uVar3 = param_7;
    func_0x00010beff9c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bddc6a0(dVar9,param_5);
    uVar6 = param_7;
    func_0x00010beff9c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b80(dVar9,dVar10);
    _objc_release(uVar6);
    _objc_release(uVar3);
    uVar4 = param_8;
    func_0x00010c252440();
    if ((uVar4 == 3) || (uVar4 = param_8, func_0x00010c252440(), uVar4 == 4)) {
      uVar3 = param_7;
      func_0x00010beff9c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2835e0(param_7);
      _objc_release(uVar3);
      uVar4 = param_5;
      func_0x00010c141c20(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be8c3c0(param_5);
      _objc_release(uVar4);
      func_0x00010bf6b020(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6fb40();
      _objc_release(param_5);
    }
    _objc_release(uVar2);
    _objc_release(param_8);
  }
  _objc_release(param_10);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105d191e8; end: 105d1941f; -[SCPreviewAlignmentRotationDetector processView:gesture:containerView:] */

void FUN_105d191e8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___UIRotationGestureRecognizer_1126c4148;
  _objc_opt_class(PTR__OBJC_CLASS___UIRotationGestureRecognizer_1126c4148);
  uVar2 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar1);
  if ((uVar2 & 1) != 0) {
    _objc_retain(param_6);
    uVar2 = param_6;
    func_0x00010c252440();
    if (uVar2 == 1) {
      uVar3 = param_5;
      func_0x00010c2321e0();
      if ((int)uVar3 != 0) {
        uVar3 = param_5;
        func_0x00010beff9c0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2835e0(param_5);
        _objc_release(uVar3);
      }
      uVar3 = param_3;
      func_0x00010bf6b020(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6fbc0();
      _objc_release(uVar3);
    }
    func_0x00010c141a80(param_6);
    uVar3 = param_5;
    dVar5 = param_1;
    func_0x00010beff9c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c141a80();
    param_1 = param_1 + dVar5;
    _objc_release(uVar3);
    func_0x00010c141a80(param_6);
    uVar3 = param_5;
    func_0x00010beff9c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ee7a0(param_1);
    _objc_release(uVar3);
    func_0x00010c1ee7a0(0,param_6);
    uVar3 = param_5;
    func_0x00010beff9c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bddc6a0(dVar5,param_3);
    uVar4 = param_5;
    func_0x00010beff9c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b80(dVar5,param_2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010c252440();
    if ((uVar2 == 3) || (uVar2 = param_6, func_0x00010c252440(), uVar2 == 4)) {
      uVar3 = param_5;
      func_0x00010beff9c0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2835e0(param_5);
      _objc_release(uVar3);
      func_0x00010bf6b020(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6fb40();
      _objc_release(param_3);
    }
    _objc_release(param_6);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105d19420; end: 105d19453; -[SCPreviewAlignmentRotationDetector _convertRadiansToDegrees:] */

double FUN_105d19420(double param_1)

{
  double dVar1;
  
  param_1 = param_1 * 57.29577951308232;
  dVar1 = 360.0;
  if (0.0 <= param_1) {
    if (param_1 <= 360.0) {
      return param_1;
    }
    dVar1 = -360.0;
  }
  return param_1 + dVar1;
}



/* Entry: 105d19454; end: 105d19517; -[SCPreviewAlignmentRotationDetector _rotationGuideForAngle:] */

void FUN_105d19454(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c141c20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c141c20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf02ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c071ae0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar4 != 0) {
      func_0x00010c141c20(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105d194f8;
    }
  }
  param_1 = 0;
LAB_105d194f8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d19518; end: 105d197e3; -[SCPreviewAlignmentRotationDetector _findGuidesInContainerView:draggingView:angle:velocity:] */

void FUN_105d19518(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [128];
  long lStack_b0;
  
  puVar6 = &uStack_170;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  dVar12 = -param_1;
  dVar13 = 0.0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  dVar15 = dVar12;
  if (0.0 <= param_1) {
    dVar15 = param_1;
  }
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  puVar1 = param_5;
  func_0x00010c141b00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_130;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar9 = *plStack_160;
    do {
      puVar10 = (undefined *)0x0;
      do {
        fVar11 = SUB84(dVar12,0);
        if (*plStack_160 != lVar9) {
          _objc_enumerationMutation(puVar1);
        }
        uVar8 = *(undefined8 *)(lStack_168 + (long)puVar10 * 8);
        puVar3 = param_5;
        func_0x00010be97820(param_5,param_6,uVar8);
        _objc_retainAutoreleasedReturnValue();
        dVar14 = 0.5;
        if (puVar3 != (undefined *)0x0) {
          dVar14 = 3.0;
        }
        func_0x00010bfb2c80(uVar8);
        dVar12 = (double)fVar11 - dVar14;
        if (((dVar15 <= dVar12) || (func_0x00010bfb2c80(uVar8), 2.0 <= ABS(param_2))) ||
           (dVar14 = dVar14 + (double)SUB84(dVar12,0), dVar12 = dVar14, dVar14 <= dVar15)) {
          puVar5 = puVar3;
          func_0x00010c252440();
          if (puVar5 == (undefined *)0x0) {
            func_0x00010c1a2f00(puVar3,param_6,1);
          }
          else {
            func_0x00010be8c3c0(param_5,param_6,puVar3);
          }
        }
        else if (puVar3 == (undefined *)0x0) {
          func_0x00010beff9a0(param_8);
          uVar4 = param_8;
          func_0x00010beff9c0(param_8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf513e0(dVar14,dVar13,param_3,param_4,param_7,param_6,uVar4);
          _objc_release(uVar4);
          puVar3 = PTR_PTR_1126c4150;
          _objc_alloc(PTR_PTR_1126c4150);
          dVar12 = dVar14;
          _CGRectGetMidX(dVar14,dVar13,param_3,param_4);
          _CGRectGetMidY(dVar14,dVar13);
          func_0x00010bff2de0(puVar3,param_6,uVar8);
          func_0x00010bdc7020(param_5,param_6,puVar3,param_7);
          dVar13 = dVar14;
        }
        _objc_release(puVar3);
        puVar10 = puVar10 + 1;
      } while (puVar2 != puVar10);
      puVar7 = auStack_130;
      puVar2 = puVar1;
      puVar6 = &uStack_170;
      func_0x00010bf52a60(puVar1,param_6,&uStack_170,puVar7,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(puVar6);
  uVar8 = param_7;
  func_0x00010c141c20(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c3c0(param_7,param_6,uVar8);
  _objc_release(uVar8);
  func_0x00010c237ac0(puVar6,param_6,puVar7);
  _objc_release(puVar7);
  func_0x00010c1ee840(param_7,param_6,puVar6);
  func_0x00010bf6b020(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6fb20();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105d197e4; end: 105d1988f; -[SCPreviewAlignmentRotationDetector _addGuide:inView:] */

void FUN_105d197e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c141c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c3c0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c237ac0(param_3,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1ee840(param_1,param_2,param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6fb20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d19890; end: 105d19913; -[SCPreviewAlignmentRotationDetector _removeGuide:] */

void FUN_105d19890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  func_0x00010c1ee840(param_1,param_2,0);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6fb80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d19914; end: 105d199f7; -[SCPreviewAlignmentRotationDetector _centerRotationPoint:alignableTouchControlView:diffRotation:] */

undefined1  [16]
FUN_105d19914(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  dVar5 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = param_6;
  func_0x00010c262ca0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5,param_4,uVar1);
  dVar2 = dVar5;
  dVar3 = param_2;
  _objc_release(param_5);
  _objc_release(uVar1);
  func_0x00010bf345e0(param_6);
  dVar5 = dVar5 - dVar2;
  func_0x00010bf345e0(param_6);
  param_2 = param_2 - dVar3;
  ___sincos_stret(param_1);
  dVar2 = param_2 * param_1;
  dVar4 = dVar3 * param_2;
  dVar6 = dVar4 + dVar5 * param_1;
  func_0x00010c27ada0(param_6);
  func_0x00010c27ada0(param_6);
  _objc_release(param_6);
  auVar7._8_8_ = (param_2 + dVar4) - dVar6;
  auVar7._0_8_ = (dVar5 + param_1) - (-dVar2 + dVar5 * dVar3);
  return auVar7;
}



/* Entry: 105d199f8; end: 105d19a0f; -[SCPreviewAlignmentRotationDetector delegate] */

void FUN_105d199f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d19a10; end: 105d19a1b; -[SCPreviewAlignmentRotationDetector setDelegate:] */

void FUN_105d19a10(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 105d19a1c; end: 105d19a23; -[SCPreviewAlignmentRotationDetector rotationAngles] */

undefined8 FUN_105d19a1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105d19a24; end: 105d19a2b; -[SCPreviewAlignmentRotationDetector setRotationAngles:] */

void FUN_105d19a24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105d19a2c; end: 105d19a33; -[SCPreviewAlignmentRotationDetector rotationGuide] */

undefined8 FUN_105d19a2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105d19a34; end: 105d19a63; -[SCPreviewAlignmentRotationDetector setRotationGuide:] */

void FUN_105d19a34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d19a64; end: 105d19a6b; -[SCPreviewAlignmentRotationDetector beginRotationAngle] */

undefined8 FUN_105d19a64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105d19a6c; end: 105d19a73; -[SCPreviewAlignmentRotationDetector setBeginRotationAngle:] */

void FUN_105d19a6c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 105d19a74; end: 105d19a7b; -[SCPreviewAlignmentRotationDetector shouldIgnoreRotationGuide] */

undefined1 FUN_105d19a74(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105d19a7c; end: 105d19a83; -[SCPreviewAlignmentRotationDetector setShouldIgnoreRotationGuide:] */

void FUN_105d19a7c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105d19a84; end: 105d19abb; -[SCPreviewAlignmentRotationDetector .cxx_destruct] */

void FUN_105d19a84(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 105d19abc; end: 105d19ad3;  */

void FUN_105d19abc(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001136c2278;
  ppuRam00000001136c2278 = &PTR__OBJC_CLASS___NSConstantArray_11117f4e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d19ad4; end: 105d19b77; -[SCPreviewAlignmentRotationGuide initWithAngle:center:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105d19ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ecf00;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112734a94;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112734a98) = param_1;
    ((undefined8 *)((long)puVar1 + (long)_DAT_112734a98))[1] = param_2;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 105d19b78; end: 105d19be3; -[SCPreviewAlignmentRotationGuide showGuideInView:] */

void FUN_105d19b78(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ecf00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_showGuideInView__11266b8d8);
  func_0x00010be48bc0(param_1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189460();
  _objc_release(param_1);
  return;
}



/* Entry: 105d19be4; end: 105d19d33; -[SCPreviewAlignmentRotationGuide _layoutAlignmentGuide] */

void FUN_105d19be4(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [48];
  
  uVar1 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  uVar3 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
  uVar6 = 0;
  func_0x00010c1739e0(0,0,0x3ff0000000000000,param_1 * 4.0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf345e0(param_2);
  uVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(uVar5,uVar6);
  fVar4 = (float)uVar5;
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf02ae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _CGAffineTransformMakeRotation
            (auStack_70,(double)fVar4 * 0.017453292519943295 + 1.5707963267948966);
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105d19d34; end: 105d19d43; -[SCPreviewAlignmentRotationGuide angle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105d19d34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112734a94);
}



/* Entry: 105d19d44; end: 105d19d57; -[SCPreviewAlignmentRotationGuide center] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_105d19d44(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112734a98);
}



/* Entry: 105d19d58; end: 105d19d6b; -[SCPreviewAlignmentRotationGuide .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d19d58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112734a94,0);
  return;
}



/* Entry: 105d19d6c; end: 105d19e87; -[SCPreviewAlignmentTranslationDetector initWithDelegate:] */

undefined1 * FUN_105d19d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ecf08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c18b5e0(puVar1);
    func_0x00010c194a80(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4da0(puVar1);
    _objc_release(puVar2);
    if (lRam00000001136c2290 != -1) {
      func_0x00010002a2fc(0x1136c2290,&PTR___NSConcreteGlobalBlock_1108e6008);
    }
    func_0x00010c1739c0(puVar1);
    if (lRam00000001136c22a0 != -1) {
      func_0x00010002a2fc(0x1136c22a0,&PTR___NSConcreteGlobalBlock_1108e6028);
    }
    func_0x00010c1d0800(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d19e88; end: 105d19e8f; -[SCPreviewAlignmentTranslationDetector gestureType] */

undefined8 FUN_105d19e88(void)

{
  return 0;
}



/* Entry: 105d19e90; end: 105d1a32f; -[SCPreviewAlignmentTranslationDetector adjustView:gesture:objectViews:guideContainerView:] */

void FUN_105d19e90(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,ulong param_8,
                  undefined8 param_9,undefined8 param_10)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar3 = param_8;
  _objc_opt_isKindOfClass(param_8,puVar2);
  if ((uVar3 & 1) == 0) goto LAB_105d1a2e4;
  _objc_retain(param_8);
  uVar3 = param_8;
  func_0x00010c252440();
  if (uVar3 == 1) {
    lVar4 = param_7;
    func_0x00010c2321e0();
    if ((int)lVar4 != 0) {
      lVar4 = param_7;
      func_0x00010beff9c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2835e0(param_7);
      _objc_release(lVar4);
    }
    func_0x00010c200800(param_5);
    func_0x00010c200820(param_5);
    func_0x00010c09ef00(param_8);
    func_0x00010c16fcc0(param_5);
    uVar5 = param_5;
    func_0x00010bf6b020(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fbc0();
    _objc_release(uVar5);
  }
  func_0x00010c27adc0(param_8);
  dVar14 = param_1;
  dVar10 = param_2;
  func_0x00010c09ef00(param_8);
  dVar13 = dVar14;
  dVar11 = dVar10;
  func_0x00010bf17fc0(param_5);
  dVar15 = dVar13;
  func_0x00010bf17fc0(param_5);
  dVar16 = dVar11 - dVar14;
  func_0x00010c297a00(param_8);
  dVar12 = dVar11;
  if (4.0 < ABS(dVar13 - dVar14)) {
    func_0x00010c200800(param_5);
  }
  dVar16 = ABS(dVar16);
  if (4.0 < dVar16) {
    func_0x00010c200820(param_5);
  }
  lVar4 = param_7;
  func_0x00010beff9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff9a0(param_7);
  if (lVar4 != 0) {
    lVar6 = param_7;
    func_0x00010beff9c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf513e0(dVar16,dVar12,param_3,param_4,param_10);
    _objc_release(lVar6);
  }
  _objc_release(lVar4);
  dVar13 = dVar16;
  _CGRectGetMidX(dVar16,dVar12,param_3,param_4);
  _CGRectGetMidY(dVar16,dVar12,param_3,param_4);
  uVar5 = param_5;
  func_0x00010be3fa20();
  uVar7 = param_5;
  func_0x00010be3fa20();
  func_0x00010be16940(dVar14,dVar10,param_1,param_2,dVar15,dVar11,param_5);
  uVar8 = param_5;
  func_0x00010be3fa20();
  uVar9 = param_5;
  func_0x00010be3fa20();
  dVar14 = param_1;
  if ((uint)uVar8 == 0) {
    dVar14 = 0.0;
  }
  dVar15 = param_2;
  if ((int)uVar9 == 0) {
    dVar15 = 0.0;
  }
  func_0x00010c219ba0(dVar14,dVar15,param_8);
  lVar4 = param_7;
  func_0x00010beff9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
LAB_105d1a228:
    func_0x00010c0f3600(param_7);
  }
  else {
    if ((int)uVar9 == 0 && (int)uVar7 == 1) {
      param_2 = dVar15;
    }
    if ((((uint)uVar8 | (uint)uVar5 ^ 0xffffffff) & 1) == 0) {
      param_1 = dVar14;
    }
    param_1 = dVar13 + param_1;
    param_2 = dVar16 + param_2;
    func_0x00010bddc600(param_5);
    lVar4 = param_7;
    dVar14 = param_1;
    dVar15 = param_2;
    func_0x00010beff9c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf345e0();
    dVar13 = (param_1 + dVar14) - dVar13;
    lVar6 = param_7;
    func_0x00010beff9c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf345e0();
    dVar16 = (param_2 + dVar15) - dVar16;
    _objc_release(lVar6);
    _objc_release(lVar4);
    bVar1 = true;
    if ((!NAN(dVar13)) && (bVar1 = true, !NAN(dVar16))) {
      bVar1 = false;
    }
    if (bVar1) goto LAB_105d1a228;
    lVar4 = param_7;
    func_0x00010beff9c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar13,dVar16);
    _objc_release(lVar4);
  }
  uVar3 = param_8;
  func_0x00010c252440();
  if ((uVar3 == 3) || (uVar3 = param_8, func_0x00010c252440(), uVar3 == 4)) {
    lVar4 = param_7;
    func_0x00010beff9c0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2835e0(param_7);
    _objc_release(lVar4);
    func_0x00010be8b440(param_5);
    func_0x00010bf6b020(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fb40();
    _objc_release(param_5);
  }
  _objc_release(param_8);
LAB_105d1a2e4:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105d1a330; end: 105d1a4cb; -[SCPreviewAlignmentTranslationDetector processView:gesture:containerView:] */

void FUN_105d1a330(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  if ((uVar2 & 1) != 0) {
    _objc_retain(param_4);
    uVar2 = param_4;
    func_0x00010c252440();
    if (uVar2 == 1) {
      uVar3 = param_3;
      func_0x00010c2321e0();
      if ((int)uVar3 != 0) {
        uVar3 = param_3;
        func_0x00010beff9c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2835e0(param_3);
        _objc_release(uVar3);
      }
      uVar3 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6fbc0();
      _objc_release(uVar3);
    }
    func_0x00010c27adc0(param_4);
    func_0x00010c219ba0(param_4);
    func_0x00010c0f3600(param_3);
    uVar2 = param_4;
    func_0x00010c252440();
    if ((uVar2 == 3) || (uVar2 = param_4, func_0x00010c252440(), uVar2 == 4)) {
      uVar3 = param_3;
      func_0x00010beff9c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2835e0(param_3);
      _objc_release(uVar3);
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6fb40();
      _objc_release(param_1);
    }
    _objc_release(param_4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d1a4cc; end: 105d1a59f; -[SCPreviewAlignmentTranslationDetector _addGuide:inView:] */

void FUN_105d1a4cc(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x00010bfcfc20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf4b900();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010bfcfc20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(uVar1);
      func_0x00010c237ac0(param_3,param_2,param_4);
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6fb20();
      _objc_release(param_1);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d1a5a0; end: 105d1a66b; -[SCPreviewAlignmentTranslationDetector _removeGuide:] */

void FUN_105d1a5a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = param_1;
    func_0x00010bfcfc20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf4b900();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      lVar3 = param_3;
      func_0x00010c29bf00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(lVar3);
      uVar1 = param_1;
      func_0x00010bfcfc20(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360();
      _objc_release(uVar1);
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6fb80();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d1a66c; end: 105d1a7c7; -[SCPreviewAlignmentTranslationDetector _removeAllGuides] */

long FUN_105d1a66c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_1;
  func_0x00010bfcfc20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        uVar5 = *(undefined8 *)(lStack_118 + lVar7 * 8);
        func_0x00010c29bf00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c960();
        _objc_release(uVar5);
        lVar3 = param_1;
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6fb80();
        _objc_release(lVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  func_0x00010bfcfc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((undefined1 *)((long)puVar4 + -1) < (undefined1 *)0x5) {
    return *(long *)(&UNK_10ddd0568 + ((long)puVar4 + -1) * 8);
  }
  return 0;
}



/* Entry: 105d1a7c8; end: 105d1a7eb; -[SCPreviewAlignmentTranslationDetector _translationDirectionForGuideAlignmentType:] */

undefined8 FUN_105d1a7c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 5) {
    return *(undefined8 *)(&UNK_10ddd0568 + (param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 105d1a7ec; end: 105d1a94b; -[SCPreviewAlignmentTranslationDetector _alignmentGuideForEdge:object:] */

undefined1 *
FUN_105d1a7ec(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
             double param_6,double param_7,double param_8,long param_9,undefined8 param_10,
             undefined1 *param_11,undefined1 *param_12)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint extraout_w8;
  uint uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined1 *puVar21;
  long lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dStack_8b0;
  double dStack_840;
  undefined1 auStack_760 [176];
  long lStack_6b0;
  undefined8 uStack_600;
  long lStack_5f8;
  long *plStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined auStack_5c0 [128];
  long lStack_540;
  undefined8 uStack_4a0;
  long lStack_498;
  long *plStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined1 auStack_458 [128];
  long lStack_3d8;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_12);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bfcfc20();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_9;
  func_0x00010bf52a60();
  if (lVar16 != 0) {
    lVar20 = *plStack_120;
    do {
      lVar22 = 0;
      do {
        if (*plStack_120 != lVar20) {
          _objc_enumerationMutation(param_9);
        }
        puVar15 = *(undefined1 **)(lStack_128 + lVar22 * 8);
        puVar14 = puVar15;
        func_0x00010beffae0();
        if (puVar14 == param_11) {
          puVar14 = puVar15;
          func_0x00010c0dfc60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar14 == param_12) {
            _objc_retain(puVar15);
            goto LAB_105d1a8fc;
          }
        }
        lVar22 = lVar22 + 1;
      } while (lVar16 != lVar22);
      lVar16 = param_9;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar16 != 0);
  }
  puVar15 = (undefined1 *)0x0;
LAB_105d1a8fc:
  _objc_release(param_9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
    return puVar15;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_250;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  puVar14 = param_12;
  func_0x00010bfcfc20();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010bf52a60();
  if (puVar15 != (undefined1 *)0x0) {
    lVar16 = *plStack_240;
    do {
      puVar18 = (undefined1 *)0x0;
      do {
        if (*plStack_240 != lVar16) {
          _objc_enumerationMutation(puVar14);
        }
        puVar3 = *(undefined8 **)(lStack_248 + (long)puVar18 * 8);
        func_0x00010beffae0();
        puVar21 = param_12;
        func_0x00010becf600();
        if (puVar6 == (undefined8 *)puVar21) {
          puVar15 = (undefined1 *)0x1;
          goto LAB_105d1aa2c;
        }
        puVar18 = puVar18 + 1;
      } while (puVar15 != puVar18);
      puVar15 = puVar14;
      puVar3 = &uStack_250;
      func_0x00010bf52a60();
    } while (puVar15 != (undefined1 *)0x0);
  }
  puVar15 = (undefined1 *)0x0;
LAB_105d1aa2c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar15;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = puVar14;
  func_0x00010bfcfc20();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar18;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  while (puVar15 != (undefined1 *)0x0) {
    puVar21 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(puVar18);
      }
      lVar17 = *(long *)((long)puVar21 * 8);
      lVar22 = lVar17;
      func_0x00010c252440();
      if (lVar22 == 0) {
        func_0x00010beffae0(lVar17);
        puVar11 = puVar14;
        func_0x00010becf600();
        if ((undefined8 *)puVar11 == puVar3) {
          puVar14 = (undefined1 *)0x1;
          goto LAB_105d1ab60;
        }
      }
      puVar21 = puVar21 + 1;
    } while (puVar15 != puVar21);
    puVar15 = puVar18;
    func_0x00010bf52a60();
  }
  puVar14 = (undefined1 *)0x0;
LAB_105d1ab60:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return puVar14;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_4a0;
  lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar23 = 0.0;
  lStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  plStack_490 = (long *)0x0;
  uStack_478 = 0;
  uStack_480 = 0;
  uStack_468 = 0;
  uStack_470 = 0;
  puVar15 = puVar18;
  func_0x00010bfcfc20();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = auStack_458;
  puVar11 = (undefined1 *)0x10;
  puVar21 = puVar15;
  func_0x00010bf52a60();
  if (puVar21 != (undefined1 *)0x0) {
    lVar16 = *plStack_490;
    do {
      puVar14 = (undefined1 *)0x0;
      do {
        if (*plStack_490 != lVar16) {
          _objc_enumerationMutation(puVar15);
        }
        lVar22 = *(long *)(lStack_498 + (long)puVar14 * 8);
        lVar20 = lVar22;
        func_0x00010c252440();
        if (lVar20 == 0) {
          func_0x00010beffae0(lVar22);
          puVar11 = puVar18;
          func_0x00010becf600();
          if (puVar11 == (undefined1 *)0x1) {
            func_0x00010bf345e0(lVar22);
          }
          else if (puVar11 == (undefined1 *)0x0) {
            func_0x00010bf345e0(lVar22);
          }
        }
        puVar14 = puVar14 + 1;
      } while (puVar21 != puVar14);
      puVar14 = auStack_458;
      puVar11 = (undefined1 *)0x10;
      puVar21 = puVar15;
      puVar6 = &uStack_4a0;
      func_0x00010bf52a60();
    } while (puVar21 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3d8) {
    return puVar15;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_600;
  lStack_540 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  _objc_retain(puVar14);
  _objc_retain(puVar11);
  puVar18 = puVar15;
  func_0x00010bf20b20();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = 0;
  puVar21 = puVar11;
  puVar4 = (undefined *)puVar6;
  puVar12 = puVar18;
  dVar24 = dVar23;
  dVar39 = param_2;
  dVar40 = param_3;
  dVar45 = param_4;
  dVar51 = param_5;
  dVar54 = param_6;
  func_0x00010be16980(puVar15);
  _objc_release(puVar18);
  puVar19 = (undefined *)puVar6;
  func_0x00010beff9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar19 != (undefined *)0x0) {
    dVar24 = 0.0;
    uStack_5d8 = 0;
    uStack_5e0 = 0;
    uStack_5c8 = 0;
    uStack_5d0 = 0;
    lStack_5f8 = 0;
    uStack_600 = 0;
    uStack_5e8 = 0;
    plStack_5f0 = (long *)0x0;
    _objc_retain(puVar14);
    puVar4 = auStack_5c0;
    lVar16 = 0x10;
    puVar18 = puVar14;
    func_0x00010bf52a60();
    if (puVar18 != (undefined1 *)0x0) {
      lVar20 = *plStack_5f0;
      do {
        puVar21 = (undefined1 *)0x0;
        do {
          if (*plStack_5f0 != lVar20) {
            _objc_enumerationMutation(puVar14);
          }
          puVar19 = *(undefined **)(lStack_5f8 + (long)puVar21 * 8);
          func_0x00010beff9c0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = (undefined *)puVar6;
          func_0x00010beff9c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar19);
          if (puVar19 != puVar4) {
            puVar5 = puVar15;
            func_0x00010c0e0380();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar5;
            dVar24 = dVar23;
            dVar39 = param_2;
            dVar40 = param_3;
            dVar45 = param_4;
            dVar51 = param_5;
            dVar54 = param_6;
            func_0x00010be16980(puVar15);
            _objc_release(puVar5);
          }
          puVar21 = puVar21 + 1;
        } while (puVar18 != puVar21);
        puVar4 = auStack_5c0;
        lVar16 = 0x10;
        puVar18 = puVar14;
        puVar3 = &uStack_600;
        func_0x00010bf52a60();
      } while (puVar18 != (undefined1 *)0x0);
    }
    _objc_release(puVar14);
    puVar21 = (undefined1 *)puVar3;
  }
  _objc_release(puVar11);
  _objc_release(puVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_540) {
    return (undefined1 *)puVar6;
  }
  ___stack_chk_fail();
  lStack_6b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar23 = dVar24;
  dVar34 = dVar39;
  dStack_840 = dVar40;
  dVar46 = dVar45;
  dVar57 = dVar54;
  _objc_retain(puVar21);
  _objc_retain(puVar4);
  _objc_retain(lVar16);
  _objc_retain(puVar12);
  puVar19 = puVar4;
  func_0x00010beff9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff9a0(puVar4);
  dVar25 = dVar23;
  dVar35 = dVar34;
  dVar41 = dStack_840;
  dVar47 = dVar46;
  if (puVar19 != (undefined *)0x0) {
    puVar7 = puVar4;
    func_0x00010beff9c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf513e0(puVar21);
    dVar25 = dVar23;
    dVar35 = dVar34;
    dVar41 = dStack_840;
    dVar47 = dVar46;
    _objc_release(puVar7);
  }
  _objc_release(puVar19);
  func_0x00010beff9a0(lVar16);
  lVar20 = lVar16;
  func_0x00010beff9c0(lVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf513e0(puVar21);
  _objc_release(lVar20);
  _CGAffineTransformMakeTranslation(auStack_760,dVar40,dVar45);
  dVar26 = dVar23;
  dVar36 = dVar34;
  dVar42 = dStack_840;
  dVar48 = dVar46;
  _CGRectApplyAffineTransform(auStack_760);
  dVar27 = dVar26;
  dVar37 = dVar36;
  dVar43 = dVar42;
  dVar49 = dVar48;
  func_0x00010bf20c00(puVar21);
  dVar52 = dVar27;
  dVar53 = dVar37;
  dVar38 = dVar43;
  dVar29 = dVar49;
  func_0x00010bf20c00(puVar21);
  dVar28 = dVar52;
  dVar33 = dVar53;
  dVar44 = dVar38;
  dVar50 = dVar29;
  func_0x00010bf8c0c0(puVar6);
  dVar52 = dVar52 + dVar33;
  dVar53 = dVar53 + dVar28;
  dVar38 = dVar38 - (dVar33 + dVar50);
  dVar29 = dVar29 - (dVar28 + dVar44);
  puVar19 = (undefined *)puVar6;
  dVar28 = dVar38;
  dVar33 = dVar53;
  func_0x00010bf8f780();
  if ((lVar16 == 0) && ((int)puVar19 != 0)) {
    puVar19 = (undefined *)puVar6;
    func_0x00010bf6b020(puVar6);
    _objc_retainAutoreleasedReturnValue();
    dVar30 = dVar26;
    _CGRectGetMinY(dVar26,dVar36,dVar42,dVar48);
    dVar31 = dVar52;
    dVar28 = dVar53;
    dVar44 = dVar38;
    dVar50 = dVar29;
    _CGRectGetMinY(dVar52,dVar53);
    if (dVar31 <= dVar30) {
      dVar30 = dVar26;
      _CGRectGetMaxY(dVar26,dVar36,dVar42,dVar48);
      dVar31 = dVar52;
      dVar28 = dVar53;
      dVar44 = dVar38;
      dVar50 = dVar29;
      _CGRectGetMaxY(dVar52,dVar53);
      if (((dVar31 < dVar30) &&
          (dVar30 = dVar52, dVar44 = dVar38, dVar50 = dVar29, _CGRectGetMaxY(dVar52,dVar53),
          dVar28 = dVar39, dVar30 < dVar39)) &&
         (dVar39 = dVar52, dVar44 = dVar38, dVar50 = dVar29, _CGRectGetWidth(dVar52,dVar53),
         dVar28 = dVar24, dVar39 * 0.5 + -50.0 <= dVar24)) {
        dVar44 = dVar38;
        dVar50 = dVar29;
        _CGRectGetWidth(dVar52,dVar53);
      }
    }
    func_0x00010bf6fb60(puVar19);
    _objc_release(puVar19);
  }
  dVar24 = 0.0;
  _objc_retain(puVar12);
  puVar14 = puVar12;
  func_0x00010bf52a60();
  lVar20 = lRam0000000000000000;
  iVar10 = (int)param_10;
  if (puVar14 != (undefined1 *)0x0) {
    dVar39 = *(double *)PTR__CGPointZero_110347540;
    uVar32 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    do {
      puVar15 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar20) {
          _objc_enumerationMutation(puVar12);
        }
        uVar8 = *(ulong *)((long)puVar15 * 8);
        func_0x00010c067fc0();
        dVar50 = dVar49;
        dVar44 = dVar43;
        dVar28 = dVar37;
        dVar24 = dVar27;
        if (1 < uVar8) {
          dVar50 = dVar29;
          dVar44 = dVar38;
          dVar28 = dVar53;
          dVar24 = dVar52;
        }
        dVar55 = dVar47;
        dVar30 = dVar41;
        dVar31 = dVar35;
        dVar56 = dVar25;
        if (lVar16 == 0) {
          dVar55 = dVar50;
          dVar30 = dVar44;
          dVar31 = dVar28;
          dVar56 = dVar24;
        }
        puVar19 = (undefined *)puVar6;
        dVar24 = dVar47;
        dVar33 = dVar35;
        func_0x00010becf600();
        if (puVar19 == (undefined *)0x1) {
          puVar19 = (undefined *)puVar6;
          func_0x00010c231040();
          uVar13 = (uint)(ABS(dVar54) < 200.0);
          if (((ulong)puVar19 & 1) == 0) goto LAB_105d1b3c8;
        }
        else {
          if (puVar19 == (undefined *)0x0) {
            puVar19 = (undefined *)puVar6;
            func_0x00010c231020();
            uVar13 = (uint)(ABS(dVar51) < 200.0);
            if (((ulong)puVar19 & 1) != 0) goto LAB_105d1b7a0;
          }
          else {
            uVar13 = 1;
          }
LAB_105d1b3c8:
          lVar22 = lVar16;
          func_0x00010beff9c0(lVar16);
          _objc_retainAutoreleasedReturnValue();
          puVar19 = (undefined *)puVar6;
          func_0x00010bdc9cc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar22);
          if (puVar19 == (undefined *)0x0) {
            dStack_8b0 = 1.0;
          }
          else {
            puVar7 = puVar19;
            func_0x00010c252440();
            dStack_8b0 = 14.0;
            if (puVar7 != (undefined *)0x0) {
              dStack_8b0 = 1.0;
            }
          }
          puVar7 = (undefined *)puVar6;
          func_0x00010be33b40();
          param_10 = 1;
          uVar9 = uVar8;
          dVar24 = dVar26;
          dVar28 = dVar36;
          dVar44 = dVar42;
          dVar50 = dVar48;
          dVar33 = dVar56;
          dVar57 = dVar31;
          param_7 = dVar30;
          param_8 = dVar55;
          FUN_105d1b840(dVar26,dVar36);
          uVar1 = (uint)uVar9 & uVar13;
          uVar2 = 0;
          if (lVar16 != 0) {
            uVar2 = uVar1 ^ 1;
          }
          if (uVar2 == 1) {
            param_10 = 0;
            uVar9 = uVar8;
            dVar24 = dVar26;
            dVar28 = dVar36;
            dVar44 = dVar42;
            dVar50 = dVar48;
            dVar33 = dVar56;
            dVar57 = dVar31;
            param_7 = dVar30;
            param_8 = dVar55;
            FUN_105d1b840(dVar26,dVar36);
            uVar1 = (uint)uVar9 & uVar13;
          }
          if (puVar19 == (undefined *)0x0) {
            if ((((uint)puVar7 & uVar1 ^ 1) & uVar1) == 1) {
              dVar33 = dVar23;
              _CGRectGetMidX(dVar23,dVar34,dStack_840,dVar46);
              dVar33 = dVar40 + dVar33;
              dStack_8b0 = dVar23;
              _CGRectGetMidY(dVar23,dVar34);
              dVar57 = dVar45 + dStack_8b0;
              func_0x00010beff9c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if ((long)uVar8 < 3) {
                if (uVar8 == 0) {
                  _CGRectGetMidX();
                  dStack_8b0 = dVar56;
                  dVar33 = dVar56;
                }
                else if (uVar8 == 1) {
                  _CGRectGetMidY();
                  dStack_8b0 = dVar56;
                  dVar57 = dVar56;
                }
                else if (uVar8 == 2) {
                  _CGRectGetMinX(dVar56,dVar31,dVar30,dVar55);
                  if (uVar2 == 0) goto LAB_105d1b658;
                  dVar56 = dVar56 + -10.0;
                  goto LAB_105d1b670;
                }
              }
              else if (uVar8 == 3) {
                _CGRectGetMaxX(dVar56,dVar31,dVar30,dVar55);
                if (uVar2 == 0) {
LAB_105d1b670:
                  dStack_8b0 = dVar39;
                  _CGRectGetMidX();
                  dVar33 = dVar56 - dStack_8b0;
                }
                else {
                  dVar56 = dVar56 + 10.0;
LAB_105d1b658:
                  dStack_8b0 = dVar39;
                  _CGRectGetMidX();
                  dVar33 = dVar56 + dStack_8b0;
                }
              }
              else if (uVar8 == 4) {
                _CGRectGetMinY(dVar56,dVar31,dVar30,dVar55);
                dVar24 = dVar39;
                _CGRectGetMidY(dVar39,uVar32);
                dStack_8b0 = -(dVar24 + 10.0);
                if (uVar2 == 0) {
                  dStack_8b0 = dVar24;
                }
                dVar57 = dVar56 + dStack_8b0;
                func_0x00010bf8f780();
              }
              else if (uVar8 == 5) {
                _CGRectGetMaxY(dVar56,dVar31,dVar30,dVar55);
                if (uVar2 == 0) {
                  dStack_8b0 = dVar39;
                  _CGRectGetMidY();
                  dVar57 = dVar56 - dStack_8b0;
                }
                else {
                  dStack_8b0 = dVar39;
                  _CGRectGetMidY();
                  dVar57 = dVar56 + 10.0 + dStack_8b0;
                }
                func_0x00010bf8f780();
              }
              puVar19 = PTR_PTR_1126c4158;
              _objc_alloc(PTR_PTR_1126c4158);
              lVar22 = lVar16;
              func_0x00010beff9c0(lVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf8c0c0(puVar6);
              dVar24 = dVar25;
              dVar28 = dVar35;
              dVar44 = dVar41;
              dVar50 = dVar47;
              func_0x00010c030780(dVar25,dVar35,puVar19);
              _objc_release(lVar22);
              func_0x00010bdc7020(puVar6);
            }
            else {
              puVar19 = (undefined *)0x0;
            }
          }
          else if (uVar1 == 0) {
            puVar7 = puVar19;
            func_0x00010c252440();
            if (puVar7 == (undefined *)0x1) {
              func_0x00010be8c3c0(puVar6);
            }
            else {
              func_0x00010c1a2f00(puVar19);
            }
          }
          _objc_release(puVar19);
        }
LAB_105d1b7a0:
        puVar15 = puVar15 + 1;
      } while (puVar14 != puVar15);
      puVar14 = puVar12;
      func_0x00010bf52a60();
      iVar10 = (int)param_10;
    } while (puVar14 != (undefined1 *)0x0);
  }
  _objc_release(puVar12);
  _objc_release(puVar12);
  _objc_release(lVar16);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6b0) {
    return puVar21;
  }
  ___stack_chk_fail();
  uVar13 = extraout_w8;
  if ((long)puVar21 < 3) {
    if (puVar21 == (undefined1 *)0x0) {
      dVar23 = dVar24;
      _CGRectGetMidX(dVar24,dVar28,dVar44,dVar50);
      dVar39 = dVar33;
      _CGRectGetMidX(dVar33,dVar57,param_7,param_8);
      if (dVar39 - dStack_8b0 < dVar23) {
        _CGRectGetMidX(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMidX(dVar33,dVar57,param_7,param_8);
        dVar33 = dStack_8b0 + dVar33;
LAB_105d1bd4c:
        uVar13 = (uint)(dVar24 < dVar33);
        goto LAB_105d1bde8;
      }
    }
    else if (puVar21 == (undefined1 *)0x1) {
      dVar23 = dVar24;
      _CGRectGetMidY(dVar24,dVar28,dVar44);
      dVar39 = dVar33;
      _CGRectGetMidY(dVar33,dVar57,param_7,param_8);
      if (dVar39 - dStack_8b0 < dVar23) {
        _CGRectGetMidY(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMidY(dVar33,dVar57,param_7,param_8);
        dVar33 = dStack_8b0 + dVar33;
        goto LAB_105d1bd4c;
      }
    }
    else {
      if (puVar21 != (undefined1 *)0x2) goto LAB_105d1bde8;
      if (iVar10 == 0) {
        dVar23 = dVar24;
        _CGRectGetMaxX(dVar24,dVar28,dVar44,dVar50);
        dVar39 = dVar33;
        _CGRectGetMinX(dVar33,dVar57,param_7,param_8);
        if (dVar23 < dStack_8b0 + dVar39 + -10.0) {
          _CGRectGetMaxX(dVar24,dVar28,dVar44,dVar50);
          _CGRectGetMinX(dVar33,dVar57,param_7,param_8);
          goto LAB_105d1bdcc;
        }
      }
      else {
        dVar23 = dVar24;
        _CGRectGetMinX();
        dVar39 = dVar33;
        _CGRectGetMinX(dVar33,dVar57,param_7,param_8);
        if (dVar23 < dStack_8b0 + dVar39) {
          _CGRectGetMinX(dVar24,dVar28,dVar44,dVar50);
          _CGRectGetMinX(dVar33,dVar57,param_7,param_8);
          goto LAB_105d1bdd4;
        }
      }
    }
  }
  else if (puVar21 == (undefined1 *)0x3) {
    if (iVar10 == 0) {
      dVar23 = dVar24;
      _CGRectGetMinX(dVar24,dVar28,dVar44,dVar50);
      dVar39 = dVar33;
      _CGRectGetMaxX(dVar33,dVar57,param_7,param_8);
      if ((dVar39 + 10.0) - dStack_8b0 < dVar23) {
        _CGRectGetMinX(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMaxX(dVar33,dVar57,param_7,param_8);
LAB_105d1bd40:
        dVar33 = dVar33 + 10.0;
        goto LAB_105d1bd48;
      }
    }
    else {
      dVar23 = dVar24;
      _CGRectGetMaxX();
      dVar39 = dVar33;
      _CGRectGetMaxX(dVar33,dVar57,param_7,param_8);
      if (dVar39 - dStack_8b0 < dVar23) {
        _CGRectGetMaxX(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMaxX(dVar33,dVar57,param_7,param_8);
LAB_105d1bd48:
        dVar33 = dStack_8b0 + dVar33;
        goto LAB_105d1bd4c;
      }
    }
  }
  else if (puVar21 == (undefined1 *)0x4) {
    if (iVar10 == 0) {
      dVar23 = dVar24;
      _CGRectGetMaxY(dVar24,dVar28,dVar44,dVar50);
      dVar39 = dVar33;
      _CGRectGetMinY(dVar33,dVar57,param_7,param_8);
      if (dVar23 < dStack_8b0 + dVar39 + -10.0) {
        _CGRectGetMaxY(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMinY(dVar33,dVar57,param_7,param_8);
LAB_105d1bdcc:
        dVar33 = dVar33 + -10.0;
        goto LAB_105d1bdd4;
      }
    }
    else {
      dVar23 = dVar24;
      _CGRectGetMinY();
      dVar39 = dVar33;
      _CGRectGetMinY(dVar33,dVar57,param_7,param_8);
      if (dVar23 < dStack_8b0 + dVar39) {
        _CGRectGetMinY(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMinY(dVar33,dVar57,param_7,param_8);
LAB_105d1bdd4:
        uVar13 = (uint)(dVar33 - dStack_8b0 < dVar24);
        goto LAB_105d1bde8;
      }
    }
  }
  else {
    if (puVar21 != (undefined1 *)0x5) goto LAB_105d1bde8;
    if (iVar10 == 0) {
      dVar23 = dVar24;
      _CGRectGetMinY(dVar24,dVar28,dVar44,dVar50);
      dVar39 = dVar33;
      _CGRectGetMaxY(dVar33,dVar57,param_7,param_8);
      if ((dVar39 + 10.0) - dStack_8b0 < dVar23) {
        _CGRectGetMinY(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMaxY(dVar33,dVar57,param_7,param_8);
        goto LAB_105d1bd40;
      }
    }
    else {
      dVar23 = dVar24;
      _CGRectGetMaxY();
      dVar39 = dVar33;
      _CGRectGetMaxY(dVar33,dVar57,param_7,param_8);
      if (dVar39 - dStack_8b0 < dVar23) {
        _CGRectGetMaxY(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMaxY(dVar33,dVar57,param_7,param_8);
        goto LAB_105d1bd48;
      }
    }
  }
  uVar13 = 0;
LAB_105d1bde8:
  return (undefined1 *)(ulong)(uVar13 & 1);
}



/* Entry: 105d1a94c; end: 105d1aa6f; -[SCPreviewAlignmentTranslationDetector _hasAlignmentForDirection:] */

undefined1 *
FUN_105d1a94c(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
             double param_6,double param_7,double param_8,undefined1 *param_9,undefined8 param_10,
             undefined1 *param_11)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint extraout_w8;
  long lVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 *puVar20;
  undefined *puVar21;
  undefined1 *puVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dStack_780;
  double dStack_710;
  undefined1 auStack_630 [176];
  long lStack_580;
  undefined8 uStack_4d0;
  long lStack_4c8;
  long *plStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined auStack_490 [128];
  long lStack_410;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 auStack_328 [128];
  long lStack_2a8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar16 = param_9;
  func_0x00010bfcfc20();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar16;
  func_0x00010bf52a60();
  if (puVar15 != (undefined1 *)0x0) {
    lVar18 = *plStack_110;
    do {
      puVar20 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar18) {
          _objc_enumerationMutation(puVar16);
        }
        puVar3 = *(undefined8 **)(lStack_118 + (long)puVar20 * 8);
        func_0x00010beffae0();
        puVar22 = param_9;
        func_0x00010becf600();
        if (param_11 == puVar22) {
          puVar15 = (undefined1 *)0x1;
          goto LAB_105d1aa2c;
        }
        puVar20 = puVar20 + 1;
      } while (puVar15 != puVar20);
      puVar15 = puVar16;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar15 != (undefined1 *)0x0);
  }
  puVar15 = (undefined1 *)0x0;
LAB_105d1aa2c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar15;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar20 = puVar16;
  func_0x00010bfcfc20();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar20;
  func_0x00010bf52a60();
  lVar18 = lRam0000000000000000;
  while (puVar15 != (undefined1 *)0x0) {
    puVar22 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar18) {
        _objc_enumerationMutation(puVar20);
      }
      lVar19 = *(long *)((long)puVar22 * 8);
      lVar17 = lVar19;
      func_0x00010c252440();
      if (lVar17 == 0) {
        func_0x00010beffae0(lVar19);
        puVar11 = puVar16;
        func_0x00010becf600();
        if ((undefined8 *)puVar11 == puVar3) {
          puVar16 = (undefined1 *)0x1;
          goto LAB_105d1ab60;
        }
      }
      puVar22 = puVar22 + 1;
    } while (puVar15 != puVar22);
    puVar15 = puVar20;
    func_0x00010bf52a60();
  }
  puVar16 = (undefined1 *)0x0;
LAB_105d1ab60:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return puVar16;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_370;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar23 = 0.0;
  lStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  plStack_360 = (long *)0x0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  puVar15 = puVar20;
  func_0x00010bfcfc20();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = auStack_328;
  puVar11 = (undefined1 *)0x10;
  puVar22 = puVar15;
  func_0x00010bf52a60();
  if (puVar22 != (undefined1 *)0x0) {
    lVar18 = *plStack_360;
    do {
      puVar16 = (undefined1 *)0x0;
      do {
        if (*plStack_360 != lVar18) {
          _objc_enumerationMutation(puVar15);
        }
        lVar17 = *(long *)(lStack_368 + (long)puVar16 * 8);
        lVar13 = lVar17;
        func_0x00010c252440();
        if (lVar13 == 0) {
          func_0x00010beffae0(lVar17);
          puVar11 = puVar20;
          func_0x00010becf600();
          if (puVar11 == (undefined1 *)0x1) {
            func_0x00010bf345e0(lVar17);
          }
          else if (puVar11 == (undefined1 *)0x0) {
            func_0x00010bf345e0(lVar17);
          }
        }
        puVar16 = puVar16 + 1;
      } while (puVar22 != puVar16);
      puVar16 = auStack_328;
      puVar11 = (undefined1 *)0x10;
      puVar22 = puVar15;
      puVar3 = &uStack_370;
      func_0x00010bf52a60();
    } while (puVar22 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return puVar15;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_4d0;
  lStack_410 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  _objc_retain(puVar16);
  _objc_retain(puVar11);
  puVar20 = puVar15;
  func_0x00010bf20b20();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = 0;
  puVar22 = puVar11;
  puVar4 = (undefined *)puVar3;
  puVar12 = puVar20;
  dVar24 = dVar23;
  dVar39 = param_2;
  dVar40 = param_3;
  dVar45 = param_4;
  dVar51 = param_5;
  dVar54 = param_6;
  func_0x00010be16980(puVar15);
  _objc_release(puVar20);
  puVar21 = (undefined *)puVar3;
  func_0x00010beff9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar21 != (undefined *)0x0) {
    dVar24 = 0.0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    uStack_4a0 = 0;
    lStack_4c8 = 0;
    uStack_4d0 = 0;
    uStack_4b8 = 0;
    plStack_4c0 = (long *)0x0;
    _objc_retain(puVar16);
    puVar4 = auStack_490;
    lVar18 = 0x10;
    puVar20 = puVar16;
    func_0x00010bf52a60();
    if (puVar20 != (undefined1 *)0x0) {
      lVar13 = *plStack_4c0;
      do {
        puVar22 = (undefined1 *)0x0;
        do {
          if (*plStack_4c0 != lVar13) {
            _objc_enumerationMutation(puVar16);
          }
          puVar21 = *(undefined **)(lStack_4c8 + (long)puVar22 * 8);
          func_0x00010beff9c0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = (undefined *)puVar3;
          func_0x00010beff9c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar21);
          if (puVar21 != puVar4) {
            puVar5 = puVar15;
            func_0x00010c0e0380();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar5;
            dVar24 = dVar23;
            dVar39 = param_2;
            dVar40 = param_3;
            dVar45 = param_4;
            dVar51 = param_5;
            dVar54 = param_6;
            func_0x00010be16980(puVar15);
            _objc_release(puVar5);
          }
          puVar22 = puVar22 + 1;
        } while (puVar20 != puVar22);
        puVar4 = auStack_490;
        lVar18 = 0x10;
        puVar20 = puVar16;
        puVar10 = &uStack_4d0;
        func_0x00010bf52a60();
      } while (puVar20 != (undefined1 *)0x0);
    }
    _objc_release(puVar16);
    puVar22 = (undefined1 *)puVar10;
  }
  _objc_release(puVar11);
  _objc_release(puVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_410) {
    return (undefined1 *)puVar3;
  }
  ___stack_chk_fail();
  lStack_580 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar23 = dVar24;
  dVar34 = dVar39;
  dStack_710 = dVar40;
  dVar46 = dVar45;
  dVar57 = dVar54;
  _objc_retain(puVar22);
  _objc_retain(puVar4);
  _objc_retain(lVar18);
  _objc_retain(puVar12);
  puVar21 = puVar4;
  func_0x00010beff9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff9a0(puVar4);
  dVar25 = dVar23;
  dVar35 = dVar34;
  dVar41 = dStack_710;
  dVar47 = dVar46;
  if (puVar21 != (undefined *)0x0) {
    puVar6 = puVar4;
    func_0x00010beff9c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf513e0(puVar22);
    dVar25 = dVar23;
    dVar35 = dVar34;
    dVar41 = dStack_710;
    dVar47 = dVar46;
    _objc_release(puVar6);
  }
  _objc_release(puVar21);
  func_0x00010beff9a0(lVar18);
  lVar13 = lVar18;
  func_0x00010beff9c0(lVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf513e0(puVar22);
  _objc_release(lVar13);
  _CGAffineTransformMakeTranslation(auStack_630,dVar40,dVar45);
  dVar26 = dVar23;
  dVar36 = dVar34;
  dVar42 = dStack_710;
  dVar48 = dVar46;
  _CGRectApplyAffineTransform(auStack_630);
  dVar27 = dVar26;
  dVar37 = dVar36;
  dVar43 = dVar42;
  dVar49 = dVar48;
  func_0x00010bf20c00(puVar22);
  dVar52 = dVar27;
  dVar53 = dVar37;
  dVar38 = dVar43;
  dVar29 = dVar49;
  func_0x00010bf20c00(puVar22);
  dVar28 = dVar52;
  dVar33 = dVar53;
  dVar44 = dVar38;
  dVar50 = dVar29;
  func_0x00010bf8c0c0(puVar3);
  dVar52 = dVar52 + dVar33;
  dVar53 = dVar53 + dVar28;
  dVar38 = dVar38 - (dVar33 + dVar50);
  dVar29 = dVar29 - (dVar28 + dVar44);
  puVar21 = (undefined *)puVar3;
  dVar28 = dVar38;
  dVar33 = dVar53;
  func_0x00010bf8f780();
  if ((lVar18 == 0) && ((int)puVar21 != 0)) {
    puVar21 = (undefined *)puVar3;
    func_0x00010bf6b020(puVar3);
    _objc_retainAutoreleasedReturnValue();
    dVar30 = dVar26;
    _CGRectGetMinY(dVar26,dVar36,dVar42,dVar48);
    dVar31 = dVar52;
    dVar28 = dVar53;
    dVar44 = dVar38;
    dVar50 = dVar29;
    _CGRectGetMinY(dVar52,dVar53);
    if (dVar31 <= dVar30) {
      dVar30 = dVar26;
      _CGRectGetMaxY(dVar26,dVar36,dVar42,dVar48);
      dVar31 = dVar52;
      dVar28 = dVar53;
      dVar44 = dVar38;
      dVar50 = dVar29;
      _CGRectGetMaxY(dVar52,dVar53);
      if (((dVar31 < dVar30) &&
          (dVar30 = dVar52, dVar44 = dVar38, dVar50 = dVar29, _CGRectGetMaxY(dVar52,dVar53),
          dVar28 = dVar39, dVar30 < dVar39)) &&
         (dVar39 = dVar52, dVar44 = dVar38, dVar50 = dVar29, _CGRectGetWidth(dVar52,dVar53),
         dVar28 = dVar24, dVar39 * 0.5 + -50.0 <= dVar24)) {
        dVar44 = dVar38;
        dVar50 = dVar29;
        _CGRectGetWidth(dVar52,dVar53);
      }
    }
    func_0x00010bf6fb60(puVar21);
    _objc_release(puVar21);
  }
  dVar24 = 0.0;
  _objc_retain(puVar12);
  puVar16 = puVar12;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  iVar9 = (int)param_10;
  if (puVar16 != (undefined1 *)0x0) {
    dVar39 = *(double *)PTR__CGPointZero_110347540;
    uVar32 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    do {
      puVar15 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(puVar12);
        }
        uVar7 = *(ulong *)((long)puVar15 * 8);
        func_0x00010c067fc0();
        dVar50 = dVar49;
        dVar44 = dVar43;
        dVar28 = dVar37;
        dVar24 = dVar27;
        if (1 < uVar7) {
          dVar50 = dVar29;
          dVar44 = dVar38;
          dVar28 = dVar53;
          dVar24 = dVar52;
        }
        dVar55 = dVar47;
        dVar30 = dVar41;
        dVar31 = dVar35;
        dVar56 = dVar25;
        if (lVar18 == 0) {
          dVar55 = dVar50;
          dVar30 = dVar44;
          dVar31 = dVar28;
          dVar56 = dVar24;
        }
        puVar21 = (undefined *)puVar3;
        dVar24 = dVar47;
        dVar33 = dVar35;
        func_0x00010becf600();
        if (puVar21 == (undefined *)0x1) {
          puVar21 = (undefined *)puVar3;
          func_0x00010c231040();
          uVar14 = (uint)(ABS(dVar54) < 200.0);
          if (((ulong)puVar21 & 1) == 0) goto LAB_105d1b3c8;
        }
        else {
          if (puVar21 == (undefined *)0x0) {
            puVar21 = (undefined *)puVar3;
            func_0x00010c231020();
            uVar14 = (uint)(ABS(dVar51) < 200.0);
            if (((ulong)puVar21 & 1) != 0) goto LAB_105d1b7a0;
          }
          else {
            uVar14 = 1;
          }
LAB_105d1b3c8:
          lVar17 = lVar18;
          func_0x00010beff9c0(lVar18);
          _objc_retainAutoreleasedReturnValue();
          puVar21 = (undefined *)puVar3;
          func_0x00010bdc9cc0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar17);
          if (puVar21 == (undefined *)0x0) {
            dStack_780 = 1.0;
          }
          else {
            puVar6 = puVar21;
            func_0x00010c252440();
            dStack_780 = 14.0;
            if (puVar6 != (undefined *)0x0) {
              dStack_780 = 1.0;
            }
          }
          puVar6 = (undefined *)puVar3;
          func_0x00010be33b40();
          param_10 = 1;
          uVar8 = uVar7;
          dVar24 = dVar26;
          dVar28 = dVar36;
          dVar44 = dVar42;
          dVar50 = dVar48;
          dVar33 = dVar56;
          dVar57 = dVar31;
          param_7 = dVar30;
          param_8 = dVar55;
          FUN_105d1b840(dVar26,dVar36);
          uVar1 = (uint)uVar8 & uVar14;
          uVar2 = 0;
          if (lVar18 != 0) {
            uVar2 = uVar1 ^ 1;
          }
          if (uVar2 == 1) {
            param_10 = 0;
            uVar8 = uVar7;
            dVar24 = dVar26;
            dVar28 = dVar36;
            dVar44 = dVar42;
            dVar50 = dVar48;
            dVar33 = dVar56;
            dVar57 = dVar31;
            param_7 = dVar30;
            param_8 = dVar55;
            FUN_105d1b840(dVar26,dVar36);
            uVar1 = (uint)uVar8 & uVar14;
          }
          if (puVar21 == (undefined *)0x0) {
            if ((((uint)puVar6 & uVar1 ^ 1) & uVar1) == 1) {
              dVar33 = dVar23;
              _CGRectGetMidX(dVar23,dVar34,dStack_710,dVar46);
              dVar33 = dVar40 + dVar33;
              dStack_780 = dVar23;
              _CGRectGetMidY(dVar23,dVar34);
              dVar57 = dVar45 + dStack_780;
              func_0x00010beff9c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if ((long)uVar7 < 3) {
                if (uVar7 == 0) {
                  _CGRectGetMidX();
                  dStack_780 = dVar56;
                  dVar33 = dVar56;
                }
                else if (uVar7 == 1) {
                  _CGRectGetMidY();
                  dStack_780 = dVar56;
                  dVar57 = dVar56;
                }
                else if (uVar7 == 2) {
                  _CGRectGetMinX(dVar56,dVar31,dVar30,dVar55);
                  if (uVar2 == 0) goto LAB_105d1b658;
                  dVar56 = dVar56 + -10.0;
                  goto LAB_105d1b670;
                }
              }
              else if (uVar7 == 3) {
                _CGRectGetMaxX(dVar56,dVar31,dVar30,dVar55);
                if (uVar2 == 0) {
LAB_105d1b670:
                  dStack_780 = dVar39;
                  _CGRectGetMidX();
                  dVar33 = dVar56 - dStack_780;
                }
                else {
                  dVar56 = dVar56 + 10.0;
LAB_105d1b658:
                  dStack_780 = dVar39;
                  _CGRectGetMidX();
                  dVar33 = dVar56 + dStack_780;
                }
              }
              else if (uVar7 == 4) {
                _CGRectGetMinY(dVar56,dVar31,dVar30,dVar55);
                dVar24 = dVar39;
                _CGRectGetMidY(dVar39,uVar32);
                dStack_780 = -(dVar24 + 10.0);
                if (uVar2 == 0) {
                  dStack_780 = dVar24;
                }
                dVar57 = dVar56 + dStack_780;
                func_0x00010bf8f780();
              }
              else if (uVar7 == 5) {
                _CGRectGetMaxY(dVar56,dVar31,dVar30,dVar55);
                if (uVar2 == 0) {
                  dStack_780 = dVar39;
                  _CGRectGetMidY();
                  dVar57 = dVar56 - dStack_780;
                }
                else {
                  dStack_780 = dVar39;
                  _CGRectGetMidY();
                  dVar57 = dVar56 + 10.0 + dStack_780;
                }
                func_0x00010bf8f780();
              }
              puVar21 = PTR_PTR_1126c4158;
              _objc_alloc(PTR_PTR_1126c4158);
              lVar17 = lVar18;
              func_0x00010beff9c0(lVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf8c0c0(puVar3);
              dVar24 = dVar25;
              dVar28 = dVar35;
              dVar44 = dVar41;
              dVar50 = dVar47;
              func_0x00010c030780(dVar25,dVar35,puVar21);
              _objc_release(lVar17);
              func_0x00010bdc7020(puVar3);
            }
            else {
              puVar21 = (undefined *)0x0;
            }
          }
          else if (uVar1 == 0) {
            puVar6 = puVar21;
            func_0x00010c252440();
            if (puVar6 == (undefined *)0x1) {
              func_0x00010be8c3c0(puVar3);
            }
            else {
              func_0x00010c1a2f00(puVar21);
            }
          }
          _objc_release(puVar21);
        }
LAB_105d1b7a0:
        puVar15 = puVar15 + 1;
      } while (puVar16 != puVar15);
      puVar16 = puVar12;
      func_0x00010bf52a60();
      iVar9 = (int)param_10;
    } while (puVar16 != (undefined1 *)0x0);
  }
  _objc_release(puVar12);
  _objc_release(puVar12);
  _objc_release(lVar18);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_580) {
    return puVar22;
  }
  ___stack_chk_fail();
  uVar14 = extraout_w8;
  if ((long)puVar22 < 3) {
    if (puVar22 == (undefined1 *)0x0) {
      dVar23 = dVar24;
      _CGRectGetMidX(dVar24,dVar28,dVar44,dVar50);
      dVar39 = dVar33;
      _CGRectGetMidX(dVar33,dVar57,param_7,param_8);
      if (dVar39 - dStack_780 < dVar23) {
        _CGRectGetMidX(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMidX(dVar33,dVar57,param_7,param_8);
        dVar33 = dStack_780 + dVar33;
LAB_105d1bd4c:
        uVar14 = (uint)(dVar24 < dVar33);
        goto LAB_105d1bde8;
      }
    }
    else if (puVar22 == (undefined1 *)0x1) {
      dVar23 = dVar24;
      _CGRectGetMidY(dVar24,dVar28,dVar44);
      dVar39 = dVar33;
      _CGRectGetMidY(dVar33,dVar57,param_7,param_8);
      if (dVar39 - dStack_780 < dVar23) {
        _CGRectGetMidY(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMidY(dVar33,dVar57,param_7,param_8);
        dVar33 = dStack_780 + dVar33;
        goto LAB_105d1bd4c;
      }
    }
    else {
      if (puVar22 != (undefined1 *)0x2) goto LAB_105d1bde8;
      if (iVar9 == 0) {
        dVar23 = dVar24;
        _CGRectGetMaxX(dVar24,dVar28,dVar44,dVar50);
        dVar39 = dVar33;
        _CGRectGetMinX(dVar33,dVar57,param_7,param_8);
        if (dVar23 < dStack_780 + dVar39 + -10.0) {
          _CGRectGetMaxX(dVar24,dVar28,dVar44,dVar50);
          _CGRectGetMinX(dVar33,dVar57,param_7,param_8);
          goto LAB_105d1bdcc;
        }
      }
      else {
        dVar23 = dVar24;
        _CGRectGetMinX();
        dVar39 = dVar33;
        _CGRectGetMinX(dVar33,dVar57,param_7,param_8);
        if (dVar23 < dStack_780 + dVar39) {
          _CGRectGetMinX(dVar24,dVar28,dVar44,dVar50);
          _CGRectGetMinX(dVar33,dVar57,param_7,param_8);
          goto LAB_105d1bdd4;
        }
      }
    }
  }
  else if (puVar22 == (undefined1 *)0x3) {
    if (iVar9 == 0) {
      dVar23 = dVar24;
      _CGRectGetMinX(dVar24,dVar28,dVar44,dVar50);
      dVar39 = dVar33;
      _CGRectGetMaxX(dVar33,dVar57,param_7,param_8);
      if ((dVar39 + 10.0) - dStack_780 < dVar23) {
        _CGRectGetMinX(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMaxX(dVar33,dVar57,param_7,param_8);
LAB_105d1bd40:
        dVar33 = dVar33 + 10.0;
        goto LAB_105d1bd48;
      }
    }
    else {
      dVar23 = dVar24;
      _CGRectGetMaxX();
      dVar39 = dVar33;
      _CGRectGetMaxX(dVar33,dVar57,param_7,param_8);
      if (dVar39 - dStack_780 < dVar23) {
        _CGRectGetMaxX(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMaxX(dVar33,dVar57,param_7,param_8);
LAB_105d1bd48:
        dVar33 = dStack_780 + dVar33;
        goto LAB_105d1bd4c;
      }
    }
  }
  else if (puVar22 == (undefined1 *)0x4) {
    if (iVar9 == 0) {
      dVar23 = dVar24;
      _CGRectGetMaxY(dVar24,dVar28,dVar44,dVar50);
      dVar39 = dVar33;
      _CGRectGetMinY(dVar33,dVar57,param_7,param_8);
      if (dVar23 < dStack_780 + dVar39 + -10.0) {
        _CGRectGetMaxY(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMinY(dVar33,dVar57,param_7,param_8);
LAB_105d1bdcc:
        dVar33 = dVar33 + -10.0;
        goto LAB_105d1bdd4;
      }
    }
    else {
      dVar23 = dVar24;
      _CGRectGetMinY();
      dVar39 = dVar33;
      _CGRectGetMinY(dVar33,dVar57,param_7,param_8);
      if (dVar23 < dStack_780 + dVar39) {
        _CGRectGetMinY(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMinY(dVar33,dVar57,param_7,param_8);
LAB_105d1bdd4:
        uVar14 = (uint)(dVar33 - dStack_780 < dVar24);
        goto LAB_105d1bde8;
      }
    }
  }
  else {
    if (puVar22 != (undefined1 *)0x5) goto LAB_105d1bde8;
    if (iVar9 == 0) {
      dVar23 = dVar24;
      _CGRectGetMinY(dVar24,dVar28,dVar44,dVar50);
      dVar39 = dVar33;
      _CGRectGetMaxY(dVar33,dVar57,param_7,param_8);
      if ((dVar39 + 10.0) - dStack_780 < dVar23) {
        _CGRectGetMinY(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMaxY(dVar33,dVar57,param_7,param_8);
        goto LAB_105d1bd40;
      }
    }
    else {
      dVar23 = dVar24;
      _CGRectGetMaxY();
      dVar39 = dVar33;
      _CGRectGetMaxY(dVar33,dVar57,param_7,param_8);
      if (dVar39 - dStack_780 < dVar23) {
        _CGRectGetMaxY(dVar24,dVar28,dVar44,dVar50);
        _CGRectGetMaxY(dVar33,dVar57,param_7,param_8);
        goto LAB_105d1bd48;
      }
    }
  }
  uVar14 = 0;
LAB_105d1bde8:
  return (undefined1 *)(ulong)(uVar14 & 1);
}


