/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10620ffa0; end: 106210033; -[SCCameraLegacyDataSource managedAudioDataSource:didOutputSampleBuffer:] */

void FUN_10620ffa0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010bf2bcc0();
  if ((int)lVar1 != 0) {
    puVar2 = PTR_PTR_1126c8eb8;
    _objc_alloc(PTR_PTR_1126c8eb8);
    func_0x00010c0413a0();
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf64420();
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106210034; end: 10621010b; -[SCCameraLegacyDataSource .cxx_destruct] */

void FUN_106210034(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10621010c; end: 106210217; -[SCCameraCaptureHandlerImpl initWithCameraCaptureRequestHandler:cameraConfigurationServices:audioSessionServices:userSession:context:circumstanceEngine:] */

undefined1 *
FUN_10621010c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_48 = PTR_PTR_1126f0780;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_8);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106210218; end: 106210317; -[SCCameraCaptureHandlerImpl basicCaptureConfigurationForQualityLevel:] */

void FUN_106210218(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b9e08;
  _objc_opt_new(PTR_PTR_1126b9e08);
  func_0x00010c2b9760();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6fe8;
  func_0x00010c0b7e80(PTR_PTR_1126b6fe8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aa2a0(puVar1,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (param_3 == 2) {
    uVar4 = 1;
  }
  else {
    if (param_3 != 1) {
      if (param_3 == 0) {
        func_0x00010c2b8780(puVar1,param_2,1);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      goto LAB_1062102e8;
    }
    uVar4 = 0;
  }
  func_0x00010c2b88c0(puVar1,param_2,uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_1062102e8:
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106210318; end: 106210367; -[SCCameraCaptureHandlerImpl captureImageWithQualityLevel:] */

void FUN_106210318(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf16540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf30d00(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106210368; end: 106210543; -[SCCameraCaptureHandlerImpl captureImageWithConfiguration:] */

void FUN_106210368(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b9d38;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106210478;
  puStack_40 = &UNK_1109167a8;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bf30d40(puVar3,param_2,param_3,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c25efc0(uVar2,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106210544; end: 10621055b;  */

void FUN_106210544(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_completeWithError__1125ae8d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_completeWithValue__1125ae900,
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10621055c; end: 106210613; -[SCCameraCaptureHandlerImpl startVideoCaptureWithConfiguration:stopRecordingPromise:] */

void FUN_10621055c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bdf9560(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bdf9180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c251840(param_1,param_2,param_3,uVar1,uVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106210614; end: 10621092b; -[SCCameraCaptureHandlerImpl startVideoCaptureWithConfiguration:outputSettings:audioConfiguration:stopRecordingPromise:] */

void FUN_106210614(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  lVar2 = param_1;
  func_0x00010be1c460();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b9d38;
  uVar9 = param_6;
  func_0x00010bfbc3e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5;
  if (param_5 == 0) {
    lVar4 = param_1;
    func_0x00010bdf9180(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar5 = param_4;
  if (param_4 == 0) {
    lVar5 = param_1;
    func_0x00010bdf9560(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10621092c;
  puStack_80 = &UNK_110849810;
  _objc_retain(puVar1);
  puStack_78 = puVar1;
  func_0x00010bf31560(puVar6,param_2,uVar9,param_3,lVar4,lVar5,lVar2,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c25efc0(uVar3,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (param_4 == 0) {
    _objc_release(lVar5);
  }
  if (param_5 == 0) {
    _objc_release(lVar4);
  }
  _objc_release(uVar9);
  _objc_release(uVar3);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar9);
  puVar6 = PTR_PTR_1126b7040;
  func_0x00010c22be80(PTR_PTR_1126b7040);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106210938;
  puStack_c0 = &UNK_11084c4a0;
  uStack_b8 = param_6;
  uStack_b0 = uVar9;
  lStack_a8 = lVar2;
  puStack_a0 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(lVar2);
  _objc_retain(uVar9);
  _objc_retain(param_6);
  puVar8 = puVar6;
  func_0x00010bf1d460(puVar6,param_2,&UNK_10f36fe50,&puStack_d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010bef7d60(puVar8,param_2,uVar7);
  puVar6 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa340();
  _objc_release(puVar6);
  puVar6 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puStack_a0);
  _objc_release(lStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(puStack_78);
  _objc_release(puVar1);
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10621092c; end: 106210937;  */

void FUN_10621092c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0,param_2);
  return;
}



/* Entry: 106210938; end: 106210a1f;  */

void FUN_106210938(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbc3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106210a20;
  puStack_50 = &UNK_110847280;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar3;
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = uVar2;
  uStack_40 = uVar4;
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar1,param_2,&puStack_68,uVar3,1);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  return;
}



/* Entry: 106210a20; end: 106210b67;  */

void FUN_106210a20(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_3 == (undefined *)0x0) && (lVar1 = param_2, func_0x00010c071f40(), (int)lVar1 != 0)) {
    puVar4 = *(undefined **)(param_1 + 0x28);
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x30));
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    if (param_3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf43ca0(uVar6);
      _objc_release(puVar3);
    }
    else {
      puVar4 = param_3;
      func_0x00010bf43ca0(uVar6);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126c7860;
  _objc_retain(puVar4);
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained(param_2);
  func_0x00010c0754c0();
  _objc_release(puVar4);
  func_0x00010bfa5160(puVar2);
  _objc_release(param_2);
  puVar4 = PTR_PTR_1126c7868;
  func_0x00010c0b8140(PTR_PTR_1126c7868);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8bc0((double)(long)puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc640(0x40af400000000000,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106210b68; end: 106210c43; -[SCCameraCaptureHandlerImpl _defaultOutputSettingsForConfiguration:] */

void FUN_106210b68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_PTR_1126c7860;
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar2 = param_3;
  func_0x00010c0754c0();
  _objc_release(param_3);
  uVar1 = 10;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  func_0x00010bfa5160(puVar3,param_2,param_1,uVar1);
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126c7868;
  func_0x00010c0b8140(PTR_PTR_1126c7868);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a8bc0((double)(long)puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bc640(0x40af400000000000,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010bf21f60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106210c44; end: 106210cbf; -[SCCameraCaptureHandlerImpl _defaultAudioConfiguration] */

void FUN_106210c44(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf46680();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf55480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106210cc0; end: 106210d97; -[SCCameraCaptureHandlerImpl _generateVideoFileURL] */

void FUN_106210cc0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _CACurrentMediaTime();
  if (lRam00000001136c3480 != -1) {
    func_0x00010002a2fc(0x1136c3480,&PTR___NSConcreteGlobalBlock_110916788);
  }
  uVar1 = uRam00000001136c3478;
  _objc_retain(uRam00000001136c3478);
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106210d98; end: 106210ddf; -[SCCameraCaptureHandlerImpl .cxx_destruct] */

void FUN_106210d98(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106210de0; end: 106210e83; -[SCCameraPositionSettingHandlerImpl initWithCameraRequestHandler:context:] */

undefined1 *
FUN_106210de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0788;
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



/* Entry: 106210e84; end: 106210f0f; -[SCCameraPositionSettingHandlerImpl setPosition:secondaryDevicePositions:] */

void FUN_106210e84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b00d0;
  func_0x00010beefa60(PTR_PTR_1126b00d0,param_2,param_3,param_4,0,0,*(undefined8 *)(param_1 + 0x10))
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f160(uVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106210f10; end: 106210f3f; -[SCCameraPositionSettingHandlerImpl .cxx_destruct] */

void FUN_106210f10(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106210f40; end: 106210fe3; -[SCCameraZoomingHandlerImpl initWithCameraRequestHandler:context:] */

undefined1 *
FUN_106210f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0790;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106210fe4; end: 106210fef; -[SCCameraZoomingHandlerImpl lock] */

void FUN_106210fe4(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 106210ff0; end: 1062110cb; -[SCCameraZoomingHandlerImpl resetZoomFactor] */

void FUN_106210ff0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126c8ec0;
  func_0x00010bf29660(PTR_PTR_1126c8ec0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2bd200(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b00d0;
  puVar4 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18cc40(puVar1,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f160(uVar3,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1062110cc; end: 1062111b3; -[SCCameraZoomingHandlerImpl setZoomFactor:] */

void FUN_1062110cc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126c8ec0;
  func_0x00010bf29660(PTR_PTR_1126c8ec0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2bd200(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b00d0;
  puVar4 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18cc40(puVar1,param_3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f160(uVar3,param_3,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1062111b4; end: 1062111bb; -[SCCameraZoomingHandlerImpl unlock] */

void FUN_1062111b4(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 1062111bc; end: 1062111eb; -[SCCameraZoomingHandlerImpl .cxx_destruct] */

void FUN_1062111bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062111ec; end: 10621125b; -[SCCameraSampleBufferMetadataProviderImpl orientation] */

long FUN_1062111ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29a740();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 10621125c; end: 1062112a7; -[SCCameraSampleBufferMetadataProviderImpl imageOrientation] */

undefined8 FUN_10621125c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c292ac0();
  uVar1 = 0;
  if (puVar3 != (undefined *)0x1) {
    uVar1 = 3;
  }
  _objc_release(puVar2);
  return uVar1;
}



/* Entry: 1062112a8; end: 1062112af; -[SCCameraSampleBufferMetadataProviderImpl opaqueSampleBuffer] */

undefined8 FUN_1062112a8(void)

{
  return 1;
}



/* Entry: 1062112b0; end: 106211337; -[SCCameraSampleBufferMetadataProviderImpl shouldFlipSavingImage] */

bool FUN_1062112b0(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = param_1;
  func_0x00010c072e40();
  if ((uVar2 & 1) == 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf70d80();
    bVar1 = lVar6 == 0;
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106211338; end: 1062113cb; -[SCCameraSampleBufferMetadataProviderImpl isFileStream] */

byte FUN_106211338(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c076b60();
  if ((uVar3 & 1) == 0) {
    if (lRam00000001136c3490 != -1) {
      func_0x00010002a2fc(0x1136c3490,&PTR___NSConcreteGlobalBlock_110916898);
    }
    bVar4 = bRam00000001136c3488 ^ 1;
  }
  else {
    bVar4 = 0;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return bVar4 & 1;
}



/* Entry: 1062113cc; end: 106211537; -[SCCameraSampleBufferMetadataProviderImpl fieldOfViewObservable] */

void FUN_1062113cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c299c80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bfb26a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (lVar3 != 0) {
    func_0x00010befa120(puVar4,param_2,lVar3);
  }
  lVar5 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c2bf1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfac7c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar5);
  if (lVar2 != 0) {
    func_0x00010befa120(puVar4,param_2,lVar2);
  }
  puVar7 = PTR_PTR_1126ae6b8;
  puVar6 = puVar4;
  func_0x00010bf51e00(puVar4);
  func_0x00010c0cab40(puVar7,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar2);
  _objc_release(puVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106211538; end: 1062115c7;  */

void FUN_106211538(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar2 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a4f60);
  puVar1 = param_2;
  if ((int)puVar2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_2;
    func_0x00010bfac7c0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062115c8; end: 1062115ef; -[SCCameraSampleBufferMetadataProviderImpl captureDevicePositionObservable] */

void FUN_1062115c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062115f0; end: 10621166f; -[SCCameraSampleBufferMetadataProviderImpl bufferDimensionObservable] */

void FUN_1062115f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c299c80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb26a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106211670; end: 106211677;  */

void FUN_106211670(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf21c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_bufferDimensionObservable_1125a60c8);
  return;
}



/* Entry: 106211678; end: 1062116f7; -[SCCameraSampleBufferMetadataProviderImpl cameraRenderRegionObservable] */

void FUN_106211678(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c299c80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb26a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1062116f8; end: 1062116ff;  */

void FUN_1062116f8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2a510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_cameraRenderRegionObservable_1125a82e8);
  return;
}



/* Entry: 106211700; end: 1062117a3; -[SCCameraSampleBufferMetadataProviderImpl .cxx_destruct] */

void FUN_106211700(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1062117a4; end: 106211a17; -[SCCameraDataSource initWithCameraRequestHandler:cameraCaptureRequestHandler:cameraHardwareResource:captureDeviceManager:cameraHardwareOwnershipRequester:primaryDevicePosition:secondaryDevicePositions:cameraConfigurationServices:audioSessionServices:userSession:context:circumstanceEngine:] */

undefined8 *
FUN_1062117a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f07a0;
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
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    puVar1[9] = param_8;
    puVar1[10] = param_9;
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c8e98;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c034bc0();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126c8eb0;
    _objc_alloc();
    func_0x00010bffb440();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xe,param_14);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106211a18; end: 106211b57; -[SCCameraDataSource start] */

void FUN_106211a18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0d9240(uVar4,param_2,&PTR____CFConstantStringClassReference_110e45bb8);
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010c136080();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar9;
    _objc_release(uVar8);
    _objc_release(uVar5);
    puVar6 = PTR_PTR_1126c8ec8;
    _objc_alloc();
    uVar9 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar12 = *(undefined8 *)(param_1 + 0x40);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    uVar10 = *(undefined8 *)(param_1 + 0x80);
    lVar7 = param_1 + 0x70;
    _objc_loadWeakRetained();
    func_0x00010bffb9a0(puVar6,param_2,uVar9,uVar1,uVar8,uVar5,uVar2,uVar3,uVar11,uVar12,uVar10,
                        param_1,lVar7);
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    *(undefined **)(param_1 + 0x60) = puVar6;
    _objc_release(uVar9);
    _objc_release(lVar7);
    func_0x00010c24d960(*(undefined8 *)(param_1 + 0x60));
    param_1 = param_1 + 0x78;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf64520();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106211b58; end: 106211b5f; -[SCCameraDataSource captureHandler] */

void FUN_106211b58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf30cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_captureHandler_1125a9cd8);
  return;
}



/* Entry: 106211b60; end: 106211b67; -[SCCameraDataSource audioHandler] */

undefined8 FUN_106211b60(void)

{
  return 0;
}



/* Entry: 106211b68; end: 106211b6f; -[SCCameraDataSource positionSettingHandler] */

void FUN_106211b68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1043d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_positionSettingHandler_11261eb10);
  return;
}



/* Entry: 106211b70; end: 106211b77; -[SCCameraDataSource zoomingHandler] */

void FUN_106211b70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2bf3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_zoomingHandler_11268d718);
  return;
}



/* Entry: 106211b78; end: 106211b9f; -[SCCameraDataSource sampleBufferMetadataProvider] */

void FUN_106211b78(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106211ba0; end: 106211bf3; -[SCCameraDataSource didInvalidateAllTokens] */

void FUN_106211ba0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c255780(*(undefined8 *)(param_1 + 0x60));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  lVar2 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf64540();
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106211bf4; end: 106211c47; -[SCCameraDataSource didReceiveSampleBuffer:] */

void FUN_106211bf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf64440();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106211c48; end: 106211c5f; -[SCCameraDataSource delegate] */

void FUN_106211c48(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106211c60; end: 106211c6b; -[SCCameraDataSource setDelegate:] */

void FUN_106211c60(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 106211c6c; end: 106211c73; -[SCCameraDataSource context] */

undefined8 FUN_106211c6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106211c74; end: 106211d2b; -[SCCameraDataSource .cxx_destruct] */

void FUN_106211c74(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 106211d2c; end: 106211f83; -[SCCameraViewfinderDevice initWithCameraRequestHandler:cameraCaptureRequestHandler:cameraHardwareResource:primaryDevicePosition:secondaryDevicePositions:cameraConfigurationServices:audioSessionServices:userSession:context:delegate:circumstanceEngine:] */

undefined8 *
FUN_106211d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  puStack_68 = PTR_PTR_1126f07a8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,in_stack_00000018);
    puVar3 = PTR_PTR_1126c8ed0;
    _objc_alloc();
    func_0x00010bffb0a0();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c8ed8;
    _objc_alloc();
    func_0x00010bffb9c0();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c8ee0;
    _objc_alloc();
    func_0x00010bffb9c0();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[1];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b00d0;
    func_0x00010beefa60(PTR_PTR_1126b00d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f160(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106211f84; end: 10621200b; -[SCCameraViewfinderDevice start] */

void FUN_106211f84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b00d0;
  puVar2 = PTR_PTR_1126b5a50;
  func_0x00010bfb5340(PTR_PTR_1126b5a50);
  func_0x00010c251a00(puVar3,param_2,puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f160(uVar1,param_2,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10621200c; end: 106212013; -[SCCameraViewfinderDevice stop] */

void FUN_10621200c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec6750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__submitStopOperationWithStreamin_11258f378,param_1);
  return;
}



/* Entry: 106212014; end: 10621205b; -[SCCameraViewfinderDevice dealloc] */

void FUN_106212014(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bec6740(param_1,param_2,0);
  puStack_28 = PTR_PTR_1126f07a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10621205c; end: 106212117; -[SCCameraViewfinderDevice captureOutput:didOutputSampleBuffer:fromConnection:] */

void FUN_10621205c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c8eb8;
  _objc_alloc(PTR_PTR_1126c8eb8);
  puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0413a0(puVar1,param_2,param_4,0,0,3,puVar3,0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf79440();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106212118; end: 10621211b; -[SCCameraViewfinderDevice captureOutput:didDropSampleBuffer:fromConnection:] */

void FUN_106212118(void)

{
  return;
}



/* Entry: 10621211c; end: 1062121a3; -[SCCameraViewfinderDevice _submitStopOperationWithStreamingDelegate:] */

void FUN_10621211c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b00d0;
  func_0x00010c256f60(PTR_PTR_1126b00d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c25f160(uVar2,param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1062121a4; end: 1062121ab; -[SCCameraViewfinderDevice captureHandler] */

undefined8 FUN_1062121a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1062121ac; end: 1062121b3; -[SCCameraViewfinderDevice zoomingHandler] */

undefined8 FUN_1062121ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1062121b4; end: 1062121bb; -[SCCameraViewfinderDevice positionSettingHandler] */

undefined8 FUN_1062121b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1062121bc; end: 10621220b; -[SCCameraViewfinderDevice .cxx_destruct] */

void FUN_1062121bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10621220c; end: 10621231f; -[SCLensProcessingApplicatorEventsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10621220c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127436cc;
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf054a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126c8ee8;
    _objc_alloc();
    lVar1 = param_1 + _DAT_1127436d0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c08fe60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar6);
    lVar4 = lVar6;
    func_0x00010bf054a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00eec0(puVar3,param_2,lVar2,lVar4);
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127436d4);
    *(undefined **)(param_1 + _DAT_1127436d4) = puVar3;
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar6);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106212320; end: 106212367; -[SCLensProcessingApplicatorEventsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106212320(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127436cc);
  _objc_destroyWeak(param_1 + _DAT_1127436d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127436d4,0);
  return;
}



/* Entry: 106212368; end: 106212387;  */

void FUN_106212368(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106212388; end: 1062124e7;  */

void FUN_106212388(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106212368;
  uStack_60 = 0x106212378;
  uStack_58 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_88,param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0e33e0(uVar2);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_destroyWeak(auStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062124e8; end: 1062125f3;  */

void FUN_1062124e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bef0300();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  uVar2 = uVar1;
  func_0x00010c2656e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c25fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1062125f4; end: 1062126e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062125f4(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x00010bf1f3c0();
  if ((param_2 & 1) == 0) {
    puVar4 = PTR_PTR_1126ae6b8;
    func_0x00010c0d83a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = (undefined *)(param_1 + _DAT_112743700);
      _objc_loadWeakRetained(puVar5);
    }
    puVar1 = puVar5;
    func_0x00010c29f1c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf643e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c1495c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf2a500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1062126e4; end: 1062126fb;  */

void FUN_1062126e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 1062126fc; end: 10621282f; -[SCLensProcessingCameraEventsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062126fc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112743710);
  _objc_destroyWeak(param_1 + _DAT_112743708);
  _objc_destroyWeak(param_1 + _DAT_1127436e4);
  _objc_destroyWeak(param_1 + _DAT_1127436d8);
  _objc_destroyWeak(param_1 + _DAT_112743728);
  _objc_destroyWeak(param_1 + _DAT_112743724);
  _objc_destroyWeak(param_1 + _DAT_112743720);
  _objc_destroyWeak(param_1 + _DAT_11274371c);
  _objc_destroyWeak(param_1 + _DAT_1127436e0);
  _objc_destroyWeak(param_1 + _DAT_112743718);
  _objc_destroyWeak(param_1 + _DAT_1127436fc);
  _objc_destroyWeak(param_1 + _DAT_112743700);
  _objc_destroyWeak(param_1 + _DAT_1127436e8);
  _objc_destroyWeak(param_1 + _DAT_1127436f4);
  _objc_destroyWeak(param_1 + _DAT_1127436dc);
  _objc_storeStrong(param_1 + _DAT_1127436f0,0);
  _objc_storeStrong(param_1 + _DAT_112743704,0);
  _objc_storeStrong(param_1 + _DAT_112743714,0);
  _objc_storeStrong(param_1 + _DAT_11274370c,0);
  _objc_storeStrong(param_1 + _DAT_1127436f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127436ec,0);
  return;
}



/* Entry: 106212830; end: 106212c1b; -[SCLensProcessingPlayGamesViewEventsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106212830(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  
  puVar1 = PTR_PTR_1126c8f20;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11274372c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar16;
  func_0x00010c096180();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112743730;
  lVar5 = param_1 + lVar17;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c096640();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0254c0(puVar1,param_2,lVar4,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar16);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126c8f28;
  _objc_alloc();
  lVar2 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar6 = lVar2;
  func_0x00010c091b60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c08fe60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar9 = lVar5;
  func_0x00010c0964a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar10 = lVar3;
  func_0x00010c091b60();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c0929a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar17;
  _objc_loadWeakRetained(lVar16);
  lVar12 = lVar16;
  func_0x00010c091b60();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf8cd00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112743734;
  _objc_loadWeakRetained(lVar4);
  lVar14 = lVar4;
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ef20(puVar8,param_2,lVar7,lVar9,lVar11,lVar13,puVar1,lVar14,0);
  uVar15 = *(undefined8 *)(param_1 + _DAT_112743738);
  *(undefined **)(param_1 + _DAT_112743738) = puVar8;
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar4);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar16);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126c8f30;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11274373c;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010c23f740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c036b20(puVar8,param_2,lVar3);
  lVar16 = (long)_DAT_112743740;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar8;
  _objc_release(uVar15);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126c8f18;
  _objc_alloc();
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  lVar2 = param_1 + lVar17;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010c091b60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c08fe60();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + lVar17;
  _objc_loadWeakRetained(lVar17);
  lVar16 = lVar17;
  func_0x00010c091b60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar16;
  func_0x00010c0929a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0471e0(puVar8,param_2,uVar15,lVar3,lVar4,6,0);
  uVar15 = *(undefined8 *)(param_1 + _DAT_112743744);
  *(undefined **)(param_1 + _DAT_112743744) = puVar8;
  _objc_release(uVar15);
  _objc_release(lVar4);
  _objc_release(lVar16);
  _objc_release(lVar17);
  _objc_release(lVar3);
  _objc_release(lVar5);
  _objc_release(lVar2);
  func_0x00010beb14c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106212c1c; end: 106213007; -[SCLensProcessingPlayGamesViewEventsEntryPoint _setupViewportWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106212c1c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar15 = (long)_DAT_112743748;
  lVar1 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0968e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar15 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar3 = lVar15;
  func_0x00010c0905e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  lVar14 = (long)_DAT_112743730;
  lVar1 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar1);
  lVar15 = lVar1;
  func_0x00010c0964a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,lVar15);
  _objc_release(lVar15);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126ae6b8;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106213008;
  puStack_90 = &UNK_110858c90;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf54280();
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  puStack_d0 = puVar6;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1062131f0;
  puStack_b8 = &UNK_110855030;
  _objc_retain(lVar2);
  puVar5 = puVar4;
  lStack_b0 = lVar2;
  func_0x00010c2656e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  lVar1 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar1);
  lVar15 = lVar1;
  func_0x00010c0964a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,lVar15);
  _objc_release(lVar15);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010bf54280();
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_80);
  _objc_retain(lVar3);
  puVar4 = puVar6;
  func_0x00010c2656e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126c8f38;
  _objc_alloc();
  lVar1 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010c091b60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c29f660();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11274374c;
  _objc_loadWeakRetained(lVar15);
  lVar9 = lVar15;
  func_0x00010c1302a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar14);
  lVar10 = lVar14;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062460();
  lVar16 = (long)_DAT_112743750;
  uVar13 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar6;
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar14);
  _objc_release(lVar9);
  _objc_release(lVar15);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar1);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar16));
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(puVar5);
  _objc_release(lStack_b0);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 106213008; end: 10621314b;  */

void FUN_106213008(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10621314c;
  uStack_50 = 0x10621315c;
  uStack_48 = 0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_retain(param_2);
  func_0x00010c0e33e0(param_1);
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10621314c; end: 106213163;  */

void FUN_10621314c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106213164; end: 1062131df;  */

void FUN_106213164(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010bef0300();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c25fd20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar2;
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062131e0; end: 1062131ef;  */

void FUN_1062131e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 1062131f0; end: 106213243;  */

void FUN_1062131f0(long param_1,ulong param_2)

{
  undefined *puVar1;
  
  func_0x00010bf1f3c0();
  if ((param_2 & 1) == 0) {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x00010c0d83a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106213244; end: 106213387;  */

void FUN_106213244(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_10621314c;
  uStack_50 = 0x10621315c;
  uStack_48 = 0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  _objc_retain(param_2);
  func_0x00010c0e33e0(param_1);
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106213388; end: 106213403;  */

void FUN_106213388(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010bef0300();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c25fd20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar2;
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106213404; end: 106213413;  */

void FUN_106213404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 106213414; end: 106213467;  */

void FUN_106213414(long param_1,ulong param_2)

{
  undefined *puVar1;
  
  func_0x00010bf1f3c0();
  if ((param_2 & 1) == 0) {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x00010c0d83a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x20);
    _objc_retain(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106213468; end: 10621350f; -[SCLensProcessingPlayGamesViewEventsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106213468(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274373c);
  _objc_destroyWeak(param_1 + _DAT_112743734);
  _objc_destroyWeak(param_1 + _DAT_112743730);
  _objc_destroyWeak(param_1 + _DAT_11274372c);
  _objc_destroyWeak(param_1 + _DAT_11274374c);
  _objc_destroyWeak(param_1 + _DAT_112743748);
  _objc_storeStrong(param_1 + _DAT_112743750,0);
  _objc_storeStrong(param_1 + _DAT_112743740,0);
  _objc_storeStrong(param_1 + _DAT_112743744,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112743738,0);
  return;
}



/* Entry: 106213510; end: 10621362f; -[SCLensProcessingPreviewEventsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106213510(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar1 = param_1 + _DAT_112743754;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0962a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126c8f40;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112743758;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + _DAT_11274375c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c29f540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0255a0(puVar5,param_2,lVar1,lVar3,lVar4);
  lVar7 = (long)_DAT_112743760;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar5;
  _objc_release(uVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar7));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 106213630; end: 10621369b; -[SCLensProcessingPreviewEventsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106213630(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112743768);
  _objc_destroyWeak(param_1 + _DAT_11274375c);
  _objc_destroyWeak(param_1 + _DAT_112743754);
  _objc_destroyWeak(param_1 + _DAT_112743758);
  _objc_destroyWeak(param_1 + _DAT_112743764);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112743760,0);
  return;
}



/* Entry: 10621369c; end: 1062136df; -[SCLensProcessingTalkEventsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10621369c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bdf5ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11274376c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf17a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar3),PTR_s_begin_1125a3840);
  return;
}



/* Entry: 1062136e0; end: 106213963; -[SCLensProcessingTalkEventsEntryPoint _createViewportWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1062136e0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  lVar13 = (long)_DAT_112743770;
  lVar1 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0964a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126ae6b8;
  _objc_retain(lVar2);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf54280();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c8f38;
  _objc_alloc();
  lVar1 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010c091b60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c29f660(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112743774;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c1302a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar13);
  lVar9 = lVar13;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112743778;
  _objc_loadWeakRetained(param_1);
  lVar12 = param_1;
  func_0x00010c0905e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062460(puVar4);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar13);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106213964; end: 106213a77;  */

void FUN_106213964(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef0300();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  uVar3 = uVar2;
  func_0x00010c2656e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010c25fd20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106213a78; end: 106213b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106213a78(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010bf1f3c0();
  if ((param_2 & 1) == 0) {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x00010c0d83a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = (undefined *)(param_1 + _DAT_112743778);
      _objc_loadWeakRetained(puVar2);
    }
    puVar1 = puVar2;
    func_0x00010c0968e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106213b18; end: 106213b77; -[SCLensProcessingTalkEventsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106213b18(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274377c);
  _objc_destroyWeak(param_1 + _DAT_112743770);
  _objc_destroyWeak(param_1 + _DAT_112743778);
  _objc_destroyWeak(param_1 + _DAT_112743774);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274376c,0);
  return;
}



/* Entry: 106213b78; end: 106213bef; -[SCLensProcessingViewfinderEventsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106213b78(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274378c);
  _objc_destroyWeak(param_1 + _DAT_112743788);
  _objc_destroyWeak(param_1 + _DAT_112743784);
  _objc_destroyWeak(param_1 + _DAT_112743780);
  _objc_destroyWeak(param_1 + _DAT_112743798);
  _objc_destroyWeak(param_1 + _DAT_112743794);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112743790,0);
  return;
}



/* Entry: 106213bf0; end: 106213c2f; -[SCLensProcessingCameraCaptureAdapter isInCaptureFlow] */

undefined8 FUN_106213bf0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c075340();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106213c30; end: 106213cd7; -[SCLensProcessingCameraCaptureAdapter startRecordingWithEffects:] */

void FUN_106213c30(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c075340();
  uVar3 = uVar1;
  func_0x00010c07c740();
  if (((uVar2 & 1) == 0) && ((uVar3 & 1) == 0)) {
    func_0x00010c251820(uVar1,param_2,1);
    lVar4 = param_3;
    func_0x00010bfb2040(param_3,param_2,&PTR___NSConcreteGlobalBlock_110916a18);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010c109740(uVar1,param_2,2,lVar4 == 0);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106213cd8; end: 106213cdf;  */

void FUN_106213cd8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f0630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_overridesCaptureButton_112619ba0);
  return;
}



/* Entry: 106213ce0; end: 106213d3b; -[SCLensProcessingCameraCaptureAdapter stopRecording] */

void FUN_106213ce0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c075340();
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c256760();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106213d3c; end: 106213dc3; -[SCLensProcessingCameraCaptureAdapter captureImage] */

void FUN_106213d3c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2687e0();
  if ((((uVar2 & 1) == 0) && (uVar2 = uVar1, func_0x00010c10a560(), (uVar2 & 1) == 0)) &&
     (uVar2 = uVar1, func_0x00010c064e80(), (uVar2 & 1) == 0)) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24ef20(uVar1,param_2,uVar2,1,0,2);
    _objc_release(uVar2);
    func_0x00010bf312c0(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106213dc4; end: 106213dcf; -[SCLensProcessingCameraCaptureAdapter .cxx_destruct] */

void FUN_106213dc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106213dd0; end: 106213e43; -[SCLensProcessingPlayGamesCaptureAdapter initWithPlayGamesCapturing:] */

undefined1 * FUN_106213dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f07b8;
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



/* Entry: 106213e44; end: 106213e4b; -[SCLensProcessingPlayGamesCaptureAdapter isInCaptureFlow] */

void FUN_106213e44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c075350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isInCaptureFlow_1125faee0);
  return;
}



/* Entry: 106213e4c; end: 106213e4f; -[SCLensProcessingPlayGamesCaptureAdapter startRecordingWithEffects:] */

void FUN_106213e4c(void)

{
  return;
}



/* Entry: 106213e50; end: 106213e53; -[SCLensProcessingPlayGamesCaptureAdapter stopRecording] */

void FUN_106213e50(void)

{
  return;
}


