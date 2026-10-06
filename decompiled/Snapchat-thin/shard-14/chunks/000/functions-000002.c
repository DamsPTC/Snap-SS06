/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aefbc98; end: 10aefbcc7; -[SCCaptureServiceScope setImageStrategyEvents:] */

void FUN_10aefbc98(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10aefbcc8; end: 10aefbccf; -[SCCaptureServiceScope videoStrategyEvents] */

undefined8 FUN_10aefbcc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aefbcd0; end: 10aefbcff; -[SCCaptureServiceScope setVideoStrategyEvents:] */

void FUN_10aefbcd0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10aefbd00; end: 10aefbd07; -[SCCaptureServiceScope recordingFileURLGenerator] */

undefined8 FUN_10aefbd00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aefbd08; end: 10aefbd37; -[SCCaptureServiceScope setRecordingFileURLGenerator:] */

void FUN_10aefbd08(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10aefbd38; end: 10aefbd7f; -[SCCaptureServiceScope .cxx_destruct] */

void FUN_10aefbd38(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aefbd80; end: 10aefbe77; +[SCCaptureImageStrategyEvent didCaptureImageWithStillImageData:discardRelatedData:configuration:currentCapturerState:] */

void FUN_10aefbd80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c7840;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aefbe78; end: 10aefbf0f; +[SCCaptureImageStrategyEvent didReceiveErrorWithError:configuration:] */

void FUN_10aefbe78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c7840;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aefbf10; end: 10aefbf9f; +[SCCaptureImageStrategyEvent willCaptureImageWithConfiguration:currentCapturerState:] */

void FUN_10aefbf10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c7840;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aefbfa0; end: 10aefbfc3; -[SCCaptureImageStrategyEvent copyWithZone:] */

undefined8 FUN_10aefbfa0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aefbfc4; end: 10aefc083; -[SCCaptureImageStrategyEvent hash] */

void FUN_10aefbfc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_112701db0;
  puStack_a0 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aefc084; end: 10aefc0c7; -[SCCaptureImageStrategyEvent internalInit] */

void FUN_10aefc084(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112701db0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aefc0c8; end: 10aefc20f; -[SCCaptureImageStrategyEvent isEqual:] */

long FUN_10aefc0c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aefc1e8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aefc1f4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if (lVar3 != *(long *)(param_3 + 0x48)) {
                      func_0x00010c071ae0();
                      goto LAB_10aefc1f4;
                    }
                    goto LAB_10aefc1e8;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aefc1f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aefc210; end: 10aefc2c7; -[SCCaptureImageStrategyEvent matchWillCaptureImage:didCaptureImage:didReceiveError:] */

void FUN_10aefc210(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 2) {
    if (param_5 == 0) goto LAB_10aefc2a4;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    pcVar4 = *(code **)(param_5 + 0x10);
    lVar3 = param_5;
  }
  else {
    if (lVar3 == 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                   *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
      }
      goto LAB_10aefc2a4;
    }
    if ((lVar3 != 0) || (param_3 == 0)) goto LAB_10aefc2a4;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    pcVar4 = *(code **)(param_3 + 0x10);
    lVar3 = param_3;
  }
  (*pcVar4)(lVar3,uVar1,uVar2);
LAB_10aefc2a4:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aefc2c8; end: 10aefc33f; -[SCCaptureImageStrategyEvent .cxx_destruct] */

void FUN_10aefc2c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aefc340; end: 10aefc40b; +[SCCaptureVideoStrategyEvent capturerDidBeginRecordingWithConfiguration:currentCapturerState:session:] */

void FUN_10aefc340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c7858;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
  uVar3 = *(undefined8 *)(puVar2 + 0xa0);
  *(undefined8 *)(puVar2 + 0xa0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xa8);
  *(undefined8 *)(puVar2 + 0xa8) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xb0);
  *(undefined8 *)(puVar2 + 0xb0) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aefc40c; end: 10aefc4d7; +[SCCaptureVideoStrategyEvent capturerDidCancelRecordingWithConfiguration:currentCapturerState:session:] */

void FUN_10aefc40c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c7858;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xb;
  uVar3 = *(undefined8 *)(puVar2 + 0x108);
  *(undefined8 *)(puVar2 + 0x108) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x110);
  *(undefined8 *)(puVar2 + 0x110) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x118);
  *(undefined8 *)(puVar2 + 0x118) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aefc4d8; end: 10aefc5a3; +[SCCaptureVideoStrategyEvent capturerDidFinishRecordingWithConfiguration:currentCapturerState:session:] */

void FUN_10aefc4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c7858;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 10;
  uVar3 = *(undefined8 *)(puVar2 + 0xf0);
  *(undefined8 *)(puVar2 + 0xf0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xf8);
  *(undefined8 *)(puVar2 + 0xf8) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x100);
  *(undefined8 *)(puVar2 + 0x100) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aefc5a4; end: 10aefc63b; +[SCCaptureVideoStrategyEvent capturerWillBeginRecordingWithConfiguration:currentCapturerState:] */

void FUN_10aefc5a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c7858;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
  uVar3 = *(undefined8 *)(puVar2 + 0x90);
  *(undefined8 *)(puVar2 + 0x90) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x98);
  *(undefined8 *)(puVar2 + 0x98) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aefc63c; end: 10aefc77b; +[SCCaptureVideoStrategyEvent capturerWillFinishRecordingWithConfiguration:currentCapturerState:session:recordedVideoFuture:videoSize:placeholderImage:] */

void FUN_10aefc63c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126c7858;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 9;
  uVar3 = *(undefined8 *)(puVar2 + 0xb8);
  *(undefined8 *)(puVar2 + 0xb8) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xc0);
  *(undefined8 *)(puVar2 + 0xc0) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 200);
  *(undefined8 *)(puVar2 + 200) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xd0);
  *(undefined8 *)(puVar2 + 0xd0) = param_8;
  _objc_retain(param_8);
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0xd8) = param_1;
  *(undefined8 *)(puVar2 + 0xe0) = param_2;
  uVar3 = *(undefined8 *)(puVar2 + 0xe8);
  *(undefined8 *)(puVar2 + 0xe8) = param_9;
  _objc_release(uVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aefc77c; end: 10aefc813; +[SCCaptureVideoStrategyEvent didCancelRecordRequestWithConfiguration:currentCapturerState:] */

void FUN_10aefc77c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c7858;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aefc814; end: 10aefc8df; +[SCCaptureVideoStrategyEvent didCaptureVideoWithConfiguration:currentCapturerState:video:] */

void FUN_10aefc814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c7858;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xc;
  uVar3 = *(undefined8 *)(puVar2 + 0x120);
  *(undefined8 *)(puVar2 + 0x120) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x128);
  *(undefined8 *)(puVar2 + 0x128) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x130);
  *(undefined8 *)(puVar2 + 0x130) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aefc8e0; end: 10aefc9ab; +[SCCaptureVideoStrategyEvent didReceiveErrorWithConfiguration:currentCapturerState:error:] */

void FUN_10aefc8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c7858;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xd;
  uVar3 = *(undefined8 *)(puVar2 + 0x138);
  *(undefined8 *)(puVar2 + 0x138) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x140);
  *(undefined8 *)(puVar2 + 0x140) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x148);
  *(undefined8 *)(puVar2 + 0x148) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aefc9ac; end: 10aefca7f; +[SCCaptureVideoStrategyEvent didRequestAbortRecordWithConfiguration:didCancelCapturerRecording:cancelReason:callsite:] */

void FUN_10aefc9ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c7858;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  puVar2[0x78] = param_4;
  uVar3 = *(undefined8 *)(puVar2 + 0x80);
  *(undefined8 *)(puVar2 + 0x80) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x88);
  *(undefined8 *)(puVar2 + 0x88) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aefca80; end: 10aefcb17; +[SCCaptureVideoStrategyEvent didRequestStartRecordWithConfiguration:currentCapturerState:] */

void FUN_10aefca80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c7858;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aefcb18; end: 10aefcbaf; +[SCCaptureVideoStrategyEvent didRequestStopRecordWithConfiguration:currentCapturerState:] */

void FUN_10aefcb18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c7858;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x68);
  *(undefined8 *)(puVar2 + 0x68) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aefcbb0; end: 10aefcc3f; +[SCCaptureVideoStrategyEvent didScheduleRecordRequestWithConfiguration:currentCapturerState:] */

void FUN_10aefcbb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c7858;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aefcc40; end: 10aefccd7; +[SCCaptureVideoStrategyEvent willRequestStartRecordWithConfiguration:currentCapturerState:] */

void FUN_10aefcc40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c7858;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aefccd8; end: 10aefcd6f; +[SCCaptureVideoStrategyEvent willRequestStopRecordWithConfiguration:currentCapturerState:] */

void FUN_10aefccd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c7858;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aefcd70; end: 10aefcd93; -[SCCaptureVideoStrategyEvent copyWithZone:] */

undefined8 FUN_10aefcd70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aefcd94; end: 10aefcff7; -[SCCaptureVideoStrategyEvent hash] */

void FUN_10aefcd94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_170;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_170 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_168 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_160 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_158 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_150 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_148 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_140 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_138 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_130 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_128 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_120 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_118 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_110 = uVar1;
  func_0x00010bfde980();
  uStack_100 = (ulong)*(byte *)(param_1 + 0x78);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uStack_108 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uStack_f8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  uStack_f0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uStack_e8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  uStack_e0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uStack_d8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  uStack_d0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  uStack_c8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  uStack_c0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 200);
  uStack_b8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uVar4 = ~*(ulong *)(param_1 + 0xd8) + *(ulong *)(param_1 + 0xd8) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_a0 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_a0 = uStack_a0 ^ uStack_a0 >> 0x16;
  uVar4 = ~*(ulong *)(param_1 + 0xe0) + *(ulong *)(param_1 + 0xe0) * 0x40000;
  uVar4 = (uVar4 ^ uVar4 >> 0x1f) * 0x15;
  uStack_98 = (uVar4 ^ uVar4 >> 0xb) * 0x41;
  uStack_98 = uStack_98 ^ uStack_98 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  uStack_a8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x138);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x148);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_170,0x29);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_198 = PTR_PTR_112701db8;
  puStack_1a0 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_1a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aefcff8; end: 10aefd03b; -[SCCaptureVideoStrategyEvent internalInit] */

void FUN_10aefcff8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112701db8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aefd03c; end: 10aefd46f; -[SCCaptureVideoStrategyEvent isEqual:] */

long FUN_10aefd03c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aefd448:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aefd454;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x78) == *(char *)(param_3 + 0x78))))) {
      lVar3 = 0;
      if ((*(double *)(param_1 + 0xd8) != *(double *)(param_3 + 0xd8)) ||
         (*(double *)(param_1 + 0xe0) != *(double *)(param_3 + 0xe0))) goto LAB_10aefd454;
      lVar3 = *(long *)(param_1 + 0x10);
      if ((((((((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((lVar3 = *(long *)(param_1 + 0x18), lVar3 == *(long *)(param_3 + 0x18) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             ((lVar3 = *(long *)(param_1 + 0x20), lVar3 == *(long *)(param_3 + 0x20) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
            ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
           (((((lVar3 = *(long *)(param_1 + 0x30), lVar3 == *(long *)(param_3 + 0x30) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             (((lVar3 = *(long *)(param_1 + 0x40), lVar3 == *(long *)(param_3 + 0x40) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((lVar3 = *(long *)(param_1 + 0x48), lVar3 == *(long *)(param_3 + 0x48) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
            ((((lVar3 = *(long *)(param_1 + 0x50), lVar3 == *(long *)(param_3 + 0x50) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((lVar3 = *(long *)(param_1 + 0x58), lVar3 == *(long *)(param_3 + 0x58) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             ((lVar3 = *(long *)(param_1 + 0x60), lVar3 == *(long *)(param_3 + 0x60) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) &&
          ((((lVar3 = *(long *)(param_1 + 0x68), lVar3 == *(long *)(param_3 + 0x68) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
            ((((lVar3 = *(long *)(param_1 + 0x70), lVar3 == *(long *)(param_3 + 0x70) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((lVar3 = *(long *)(param_1 + 0x80), lVar3 == *(long *)(param_3 + 0x80) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             ((lVar3 = *(long *)(param_1 + 0x88), lVar3 == *(long *)(param_3 + 0x88) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
           (((((lVar3 = *(long *)(param_1 + 0x90), lVar3 == *(long *)(param_3 + 0x90) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((((lVar3 = *(long *)(param_1 + 0x98), lVar3 == *(long *)(param_3 + 0x98) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                ((lVar3 = *(long *)(param_1 + 0xa0), lVar3 == *(long *)(param_3 + 0xa0) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
               ((lVar3 = *(long *)(param_1 + 0xa8), lVar3 == *(long *)(param_3 + 0xa8) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
             ((lVar3 = *(long *)(param_1 + 0xb0), lVar3 == *(long *)(param_3 + 0xb0) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
            (((lVar3 = *(long *)(param_1 + 0xb8), lVar3 == *(long *)(param_3 + 0xb8) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
             ((lVar3 = *(long *)(param_1 + 0xc0), lVar3 == *(long *)(param_3 + 0xc0) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))))))))) &&
         ((((((lVar3 = *(long *)(param_1 + 200), lVar3 == *(long *)(param_3 + 200) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
             ((lVar3 = *(long *)(param_1 + 0xd0), lVar3 == *(long *)(param_3 + 0xd0) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
            ((((lVar3 = *(long *)(param_1 + 0xe8), lVar3 == *(long *)(param_3 + 0xe8) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((lVar3 = *(long *)(param_1 + 0xf0), lVar3 == *(long *)(param_3 + 0xf0) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             ((lVar3 = *(long *)(param_1 + 0xf8), lVar3 == *(long *)(param_3 + 0xf8) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
           ((lVar3 = *(long *)(param_1 + 0x100), lVar3 == *(long *)(param_3 + 0x100) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
          (((((lVar3 = *(long *)(param_1 + 0x108), lVar3 == *(long *)(param_3 + 0x108) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
             ((lVar3 = *(long *)(param_1 + 0x110), lVar3 == *(long *)(param_3 + 0x110) ||
              (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
            ((((lVar3 = *(long *)(param_1 + 0x118), lVar3 == *(long *)(param_3 + 0x118) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
              ((lVar3 = *(long *)(param_1 + 0x120), lVar3 == *(long *)(param_3 + 0x120) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
             ((((lVar3 = *(long *)(param_1 + 0x128), lVar3 == *(long *)(param_3 + 0x128) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
               ((lVar3 = *(long *)(param_1 + 0x130), lVar3 == *(long *)(param_3 + 0x130) ||
                (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
              ((lVar3 = *(long *)(param_1 + 0x138), lVar3 == *(long *)(param_3 + 0x138) ||
               (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) &&
           ((lVar3 = *(long *)(param_1 + 0x140), lVar3 == *(long *)(param_3 + 0x140) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))))))) {
        lVar3 = *(long *)(param_1 + 0x148);
        if (lVar3 != *(long *)(param_3 + 0x148)) {
          func_0x00010c071ae0();
          goto LAB_10aefd454;
        }
        goto LAB_10aefd448;
      }
    }
    lVar3 = 0;
  }
LAB_10aefd454:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aefd470; end: 10aefd74f; -[SCCaptureVideoStrategyEvent matchDidScheduleRecordRequest:didCancelRecordRequest:willRequestStartRecord:didRequestStartRecord:willRequestStopRecord:didRequestStopRecord:didRequestAbortRecord:capturerWillBeginRecording:capturerDidBeginRecording:capturerWillFinishRecording:capturerDidFinishRecording:capturerDidCancelRecording:didCaptureVideo:didReceiveError:] */

void FUN_10aefd470(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13,long param_14,long param_15,long param_16)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
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
  _objc_retain(param_16);
  switch(*(undefined8 *)(param_1 + 8)) {
  case 0:
    if (param_3 == 0) goto LAB_10aefd6c4;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = param_3;
    goto code_r0x00010aefd638;
  case 1:
    if (param_4 == 0) goto LAB_10aefd6c4;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    lVar1 = param_4;
code_r0x00010aefd638:
    pcVar5 = *(code **)(lVar1 + 0x10);
    break;
  case 2:
    if (param_5 == 0) goto LAB_10aefd6c4;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    pcVar5 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
    break;
  case 3:
    if (param_6 == 0) goto LAB_10aefd6c4;
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    pcVar5 = *(code **)(param_6 + 0x10);
    lVar1 = param_6;
    break;
  case 4:
    if (param_7 == 0) goto LAB_10aefd6c4;
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    pcVar5 = *(code **)(param_7 + 0x10);
    lVar1 = param_7;
    break;
  case 5:
    if (param_8 == 0) goto LAB_10aefd6c4;
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    pcVar5 = *(code **)(param_8 + 0x10);
    lVar1 = param_8;
    break;
  case 6:
    if (param_9 != 0) {
      (**(code **)(param_9 + 0x10))
                (param_9,*(undefined8 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x78),
                 *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88));
    }
    goto LAB_10aefd6c4;
  case 7:
    if (param_10 == 0) goto LAB_10aefd6c4;
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    pcVar5 = *(code **)(param_10 + 0x10);
    lVar1 = param_10;
    break;
  case 8:
    if (param_11 == 0) goto LAB_10aefd6c4;
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    pcVar5 = *(code **)(param_11 + 0x10);
    lVar1 = param_11;
    goto code_r0x00010aefd6c0;
  case 9:
    if (param_12 != 0) {
      (**(code **)(param_12 + 0x10))
                (*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0),param_12,
                 *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                 *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0),
                 *(undefined8 *)(param_1 + 0xe8));
    }
    goto LAB_10aefd6c4;
  case 10:
    if (param_13 == 0) goto LAB_10aefd6c4;
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    uVar3 = *(undefined8 *)(param_1 + 0xf8);
    uVar4 = *(undefined8 *)(param_1 + 0x100);
    pcVar5 = *(code **)(param_13 + 0x10);
    lVar1 = param_13;
    goto code_r0x00010aefd6c0;
  case 0xb:
    if (param_14 == 0) goto LAB_10aefd6c4;
    uVar2 = *(undefined8 *)(param_1 + 0x108);
    uVar3 = *(undefined8 *)(param_1 + 0x110);
    uVar4 = *(undefined8 *)(param_1 + 0x118);
    pcVar5 = *(code **)(param_14 + 0x10);
    lVar1 = param_14;
    goto code_r0x00010aefd6c0;
  case 0xc:
    if (param_15 == 0) goto LAB_10aefd6c4;
    uVar2 = *(undefined8 *)(param_1 + 0x120);
    uVar3 = *(undefined8 *)(param_1 + 0x128);
    uVar4 = *(undefined8 *)(param_1 + 0x130);
    lVar1 = param_15;
    goto code_r0x00010aefd66c;
  case 0xd:
    if (param_16 == 0) goto LAB_10aefd6c4;
    uVar2 = *(undefined8 *)(param_1 + 0x138);
    uVar3 = *(undefined8 *)(param_1 + 0x140);
    uVar4 = *(undefined8 *)(param_1 + 0x148);
    lVar1 = param_16;
code_r0x00010aefd66c:
    pcVar5 = *(code **)(lVar1 + 0x10);
code_r0x00010aefd6c0:
    (*pcVar5)(lVar1,uVar2,uVar3,uVar4);
  default:
    goto LAB_10aefd6c4;
  }
  (*pcVar5)(lVar1,uVar2,uVar3);
LAB_10aefd6c4:
  _objc_release(param_16);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aefd750; end: 10aefd923; -[SCCaptureVideoStrategyEvent .cxx_destruct] */

void FUN_10aefd750(long param_1)

{
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
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aefd924; end: 10aefd9cb; +[SCCaptureServiceAction cancelRecordingWithShouldAbort:cancelReason:callsite:] */

void FUN_10aefd924(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c84d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  puVar2[0x20] = param_3;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aefd9cc; end: 10aefda2f; +[SCCaptureServiceAction captureImageWithConfiguration:] */

void FUN_10aefd9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c84d0;
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



/* Entry: 10aefda30; end: 10aefda7b; +[SCCaptureServiceAction endRecording] */

void FUN_10aefda30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c84d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aefda7c; end: 10aefdae7; +[SCCaptureServiceAction recordVideoWithConfiguration:] */

void FUN_10aefda7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c84d0;
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



/* Entry: 10aefdae8; end: 10aefdb0b; -[SCCaptureServiceAction copyWithZone:] */

undefined8 FUN_10aefdae8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aefdb0c; end: 10aefdb9f; -[SCCaptureServiceAction hash] */

void FUN_10aefdb0c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_112701dc0;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aefdba0; end: 10aefdbe3; -[SCCaptureServiceAction internalInit] */

void FUN_10aefdba0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112701dc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aefdbe4; end: 10aefdcdb; -[SCCaptureServiceAction isEqual:] */

long FUN_10aefdbe4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aefdcb4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aefdcc0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x20) == *(char *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if (lVar3 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_10aefdcc0;
            }
            goto LAB_10aefdcb4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aefdcc0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aefdcdc; end: 10aefddd3; -[SCCaptureServiceAction matchCaptureImage:recordVideo:endRecording:cancelRecording:] */

void FUN_10aefdcdc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
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
      if (param_3 == 0) goto LAB_10aefdda4;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else {
      if ((lVar2 != 1) || (param_4 == 0)) goto LAB_10aefdda4;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
    (*pcVar3)(lVar2,uVar1);
  }
  else if (lVar2 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else if ((lVar2 == 3) && (param_6 != 0)) {
    (**(code **)(param_6 + 0x10))
              (param_6,*(undefined1 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30));
  }
LAB_10aefdda4:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aefddd4; end: 10aefde1b; -[SCCaptureServiceAction .cxx_destruct] */

void FUN_10aefddd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aefde1c; end: 10aefe03f; -[SCCapturedSnapRecoveryData initWithCoder:] */

undefined8 * FUN_10aefde1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_112701dc8;
  puVar1 = &uStack_30;
  uStack_30 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[2];
    puVar1[2] = lVar2;
    _objc_release(uVar3);
    lVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[3];
    puVar1[3] = lVar2;
    _objc_release(uVar3);
    func_0x00010bf66da0(param_4);
    puVar1[4] = param_1;
    lVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)(puVar1 + 1) = (char)lVar2;
    lVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)lVar2;
    lVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[5];
    puVar1[5] = lVar2;
    _objc_release(uVar3);
    if (param_4 == 0) {
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
    }
    else {
      func_0x00010bf66d60(&uStack_48,param_4);
    }
    uVar3 = uStack_48;
    puVar1[0xe] = uStack_40;
    puVar1[0xd] = uVar3;
    puVar1[0xf] = uStack_38;
    lVar2 = param_4;
    func_0x00010bf66f40();
    puVar1[6] = lVar2;
    lVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[7];
    puVar1[7] = lVar2;
    _objc_release(uVar3);
    lVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[8];
    puVar1[8] = lVar2;
    _objc_release(uVar3);
    lVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[9];
    puVar1[9] = lVar2;
    _objc_release(uVar3);
    lVar2 = param_4;
    func_0x00010bf66f40();
    puVar1[10] = lVar2;
    lVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = lVar2;
    _objc_release(uVar3);
    lVar2 = param_4;
    func_0x00010bf66f40();
    puVar1[0xc] = lVar2;
  }
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10aefe040; end: 10aefe243; -[SCCapturedSnapRecoveryData initWithMediaFileURL:captureSessionId:captureTimeStamp:isImage:isRemixingSpotlightVideo:remixMetadata:imageSegmentDuration:attemptedRecoveryCount:lensSessionId:activeLensID:activeLens:segmentIndex:contentKeyMediaId:snapSource:] */

undefined8 *
FUN_10aefe040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_15);
  puStack_78 = PTR_PTR_112701dc8;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_4;
    func_0x00010bf51e00();
    uVar2 = puVar1[2];
    puVar1[2] = uVar3;
    _objc_release(uVar2);
    uVar3 = param_5;
    func_0x00010bf51e00();
    uVar2 = puVar1[3];
    puVar1[3] = uVar3;
    _objc_release(uVar2);
    puVar1[4] = param_1;
    *(undefined1 *)(puVar1 + 1) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    uVar3 = param_8;
    func_0x00010bf51e00();
    uVar2 = puVar1[5];
    puVar1[5] = uVar3;
    _objc_release(uVar2);
    uVar2 = param_9[1];
    uVar3 = *param_9;
    puVar1[0xf] = param_9[2];
    puVar1[0xe] = uVar2;
    puVar1[0xd] = uVar3;
    puVar1[6] = param_10;
    uVar3 = param_11;
    func_0x00010bf51e00();
    uVar2 = puVar1[7];
    puVar1[7] = uVar3;
    _objc_release(uVar2);
    uVar3 = param_12;
    func_0x00010bf51e00();
    uVar2 = puVar1[8];
    puVar1[8] = uVar3;
    _objc_release(uVar2);
    uVar3 = param_13;
    func_0x00010bf51e00();
    uVar2 = puVar1[9];
    puVar1[9] = uVar3;
    _objc_release(uVar2);
    puVar1[10] = param_14;
    uVar3 = param_15;
    func_0x00010bf51e00();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = uVar3;
    _objc_release(uVar2);
    puVar1[0xc] = param_16;
  }
  _objc_release(param_15);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10aefe244; end: 10aefe267; -[SCCapturedSnapRecoveryData copyWithZone:] */

undefined8 FUN_10aefe244(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aefe268; end: 10aefe3d3; -[SCCapturedSnapRecoveryData encodeWithCoder:] */

void FUN_10aefe268(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f314d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110df27d8);
  func_0x00010bf92e80(*(undefined8 *)(param_1 + 0x20),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f314f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f31518);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f31538);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f31558);
  uStack_48 = *(undefined8 *)(param_1 + 0x70);
  uStack_50 = *(undefined8 *)(param_1 + 0x68);
  uStack_40 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf92e40(param_3,param_2,&uStack_50,&PTR____CFConstantStringClassReference_110f31578);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f31598);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f315b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f315d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f315f8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110f31618);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110f31638);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110f1c458);
  _objc_release(param_3);
  return;
}



/* Entry: 10aefe3d4; end: 10aefe4e3; -[SCCapturedSnapRecoveryData hash] */

undefined8 * FUN_10aefe3d4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar4 = &uStack_b0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_b0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_a0 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_a0 = uStack_a0 ^ uStack_a0 >> 0x16;
  uStack_98 = (ulong)*(byte *)(param_1 + 8);
  uStack_90 = (ulong)*(byte *)(param_1 + 9);
  uStack_a8 = uVar3;
  func_0x00010bfde980();
  uStack_80 = *(undefined8 *)(param_1 + 0x68);
  uStack_70 = (ulong)*(uint *)(param_1 + 0x74);
  lStack_78 = (long)*(int *)(param_1 + 0x70);
  uStack_68 = *(undefined8 *)(param_1 + 0x78);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x50);
  uStack_38 = *(undefined8 *)(param_1 + 0x58);
  lStack_40 = -lVar7;
  if (-1 < lVar7) {
    lStack_40 = lVar7;
  }
  uStack_48 = uVar3;
  func_0x00010bfde980();
  lVar7 = *(long *)(param_1 + 0x60);
  lStack_30 = -lVar7;
  if (-1 < lVar7) {
    lStack_30 = lVar7;
  }
  func_0x000107c3191c(&uStack_b0,0x11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10aefe69c:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aefe6a0;
    puVar9 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((((*(char *)((long)puVar4 + 8) == param_3[8] && (*(char *)((long)puVar4 + 9) == param_3[9]))
         && (*(long *)((long)puVar4 + 0x30) == *(long *)(param_3 + 0x30))) &&
        ((*(long *)((long)puVar4 + 0x50) == *(long *)(param_3 + 0x50) &&
         (*(long *)((long)puVar4 + 0x60) == *(long *)(param_3 + 0x60))))))) {
      dVar11 = ABS(*(double *)((long)puVar4 + 0x20) - *(double *)(param_3 + 0x20));
      dVar10 = ABS(*(double *)((long)puVar4 + 0x20) + *(double *)(param_3 + 0x20)) *
               2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar1 = dVar11 < dVar10;
      }
      if (bVar1) {
        uStack_f8 = *(undefined8 *)((long)puVar4 + 0x70);
        uStack_100 = *(undefined8 *)((long)puVar4 + 0x68);
        uStack_f0 = *(undefined8 *)((long)puVar4 + 0x78);
        uStack_118 = *(undefined8 *)(param_3 + 0x70);
        uStack_120 = *(undefined8 *)(param_3 + 0x68);
        uStack_110 = *(undefined8 *)(param_3 + 0x78);
        puVar6 = &uStack_100;
        _CMTimeCompare(puVar6,&uStack_120);
        if ((((((int)puVar6 == 0) &&
              ((lVar7 = *(long *)((long)puVar4 + 0x10), lVar7 == *(long *)(param_3 + 0x10) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
             ((lVar7 = *(long *)((long)puVar4 + 0x18), lVar7 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
            ((((lVar7 = *(long *)((long)puVar4 + 0x28), lVar7 == *(long *)(param_3 + 0x28) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
              ((lVar7 = *(long *)((long)puVar4 + 0x38), lVar7 == *(long *)(param_3 + 0x38) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
             ((lVar7 = *(long *)((long)puVar4 + 0x40), lVar7 == *(long *)(param_3 + 0x40) ||
              (func_0x00010c071ae0(), (int)lVar7 != 0)))))) &&
           ((lVar7 = *(long *)((long)puVar4 + 0x48), lVar7 == *(long *)(param_3 + 0x48) ||
            (func_0x00010c071ae0(), (int)lVar7 != 0)))) {
          puVar9 = *(undefined1 **)((long)puVar4 + 0x58);
          if (puVar9 != *(undefined1 **)(param_3 + 0x58)) {
            func_0x00010c071ae0();
            goto LAB_10aefe6a0;
          }
          goto LAB_10aefe69c;
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_10aefe6a0:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 10aefe4e4; end: 10aefe6bf; -[SCCapturedSnapRecoveryData isEqual:] */

long FUN_10aefe4e4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aefe69c:
    lVar5 = 1;
  }
  else {
    lVar5 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aefe6a0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
        ((*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50) &&
         (*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60))))))) {
      dVar7 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar6 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar6))) {
        bVar1 = dVar7 < dVar6;
      }
      if (bVar1) {
        uStack_48 = *(undefined8 *)(param_1 + 0x70);
        uStack_50 = *(undefined8 *)(param_1 + 0x68);
        uStack_40 = *(undefined8 *)(param_1 + 0x78);
        uStack_68 = *(undefined8 *)(param_3 + 0x70);
        uStack_70 = *(undefined8 *)(param_3 + 0x68);
        uStack_60 = *(undefined8 *)(param_3 + 0x78);
        puVar4 = &uStack_50;
        _CMTimeCompare(puVar4,&uStack_70);
        if ((((((int)puVar4 == 0) &&
              ((lVar5 = *(long *)(param_1 + 0x10), lVar5 == *(long *)(param_3 + 0x10) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
             ((lVar5 = *(long *)(param_1 + 0x18), lVar5 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
            ((((lVar5 = *(long *)(param_1 + 0x28), lVar5 == *(long *)(param_3 + 0x28) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
              ((lVar5 = *(long *)(param_1 + 0x38), lVar5 == *(long *)(param_3 + 0x38) ||
               (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
             ((lVar5 = *(long *)(param_1 + 0x40), lVar5 == *(long *)(param_3 + 0x40) ||
              (func_0x00010c071ae0(), (int)lVar5 != 0)))))) &&
           ((lVar5 = *(long *)(param_1 + 0x48), lVar5 == *(long *)(param_3 + 0x48) ||
            (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
          lVar5 = *(long *)(param_1 + 0x58);
          if (lVar5 != *(long *)(param_3 + 0x58)) {
            func_0x00010c071ae0();
            goto LAB_10aefe6a0;
          }
          goto LAB_10aefe69c;
        }
      }
    }
    lVar5 = 0;
  }
LAB_10aefe6a0:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 10aefe6c0; end: 10aefe6c7; -[SCCapturedSnapRecoveryData mediaFileURL] */

undefined8 FUN_10aefe6c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aefe6c8; end: 10aefe6cf; -[SCCapturedSnapRecoveryData captureSessionId] */

undefined8 FUN_10aefe6c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aefe6d0; end: 10aefe6d7; -[SCCapturedSnapRecoveryData captureTimeStamp] */

undefined8 FUN_10aefe6d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aefe6d8; end: 10aefe6df; -[SCCapturedSnapRecoveryData isImage] */

undefined1 FUN_10aefe6d8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10aefe6e0; end: 10aefe6e7; -[SCCapturedSnapRecoveryData isRemixingSpotlightVideo] */

undefined1 FUN_10aefe6e0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10aefe6e8; end: 10aefe6ef; -[SCCapturedSnapRecoveryData remixMetadata] */

undefined8 FUN_10aefe6e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aefe6f0; end: 10aefe703; -[SCCapturedSnapRecoveryData imageSegmentDuration] */

void FUN_10aefe6f0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  param_1[1] = *(undefined8 *)(param_2 + 0x70);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x78);
  return;
}



/* Entry: 10aefe704; end: 10aefe70b; -[SCCapturedSnapRecoveryData attemptedRecoveryCount] */

undefined8 FUN_10aefe704(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10aefe70c; end: 10aefe713; -[SCCapturedSnapRecoveryData lensSessionId] */

undefined8 FUN_10aefe70c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10aefe714; end: 10aefe71b; -[SCCapturedSnapRecoveryData activeLensID] */

undefined8 FUN_10aefe714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10aefe71c; end: 10aefe723; -[SCCapturedSnapRecoveryData activeLens] */

undefined8 FUN_10aefe71c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10aefe724; end: 10aefe72b; -[SCCapturedSnapRecoveryData segmentIndex] */

undefined8 FUN_10aefe724(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10aefe72c; end: 10aefe733; -[SCCapturedSnapRecoveryData contentKeyMediaId] */

undefined8 FUN_10aefe72c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10aefe734; end: 10aefe73b; -[SCCapturedSnapRecoveryData snapSource] */

undefined8 FUN_10aefe734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10aefe73c; end: 10aefe7a7; -[SCCapturedSnapRecoveryData .cxx_destruct] */

void FUN_10aefe73c(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10aefe7a8; end: 10aefe7c3; +[SCCapturedSnapRecoveryDataBuilder capturedSnapRecoveryData] */

void FUN_10aefe7a8(void)

{
  _objc_alloc_init(PTR_PTR_1126c87e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aefe7c4; end: 10aefeb17; +[SCCapturedSnapRecoveryDataBuilder capturedSnapRecoveryDataFromExistingCapturedSnapRecoveryData:] */

void FUN_10aefe7c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  undefined *puVar23;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c87e8;
  func_0x00010bf317a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0c4f40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b37c0(puVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2aa1c0(puVar3,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf31380(param_3);
  puVar6 = puVar5;
  func_0x00010c2aa220();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010c074fe0(param_3);
  puVar8 = puVar6;
  func_0x00010c2b0b40(puVar6,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010c07c2a0(param_3);
  puVar9 = puVar8;
  func_0x00010c2b1320(puVar8,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010c129840();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c2b6c00(puVar9,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
  }
  else {
    func_0x00010bfe8ac0(&uStack_78,param_3);
  }
  puVar11 = puVar10;
  func_0x00010c2afa60(puVar10,param_2,&uStack_78);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_3;
  func_0x00010bf0dc00(param_3);
  puVar13 = puVar11;
  func_0x00010c2a8a60(puVar11,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_3;
  func_0x00010c096b60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c2b2c80(puVar13,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_3;
  func_0x00010bef0a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010c2a76e0(puVar14,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_3;
  func_0x00010bef0a40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010c2a76c0(puVar16,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_3;
  func_0x00010c158380(param_3);
  puVar20 = puVar18;
  func_0x00010c2b8040(puVar18,param_2,lVar19);
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_3;
  func_0x00010bf4c8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010c2aae40(puVar20,param_2,lVar19);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_3;
  func_0x00010c243400(param_3);
  puVar23 = puVar21;
  func_0x00010c2b9760(puVar21,param_2,lVar22);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar21);
  _objc_release(lVar19);
  _objc_release(puVar20);
  _objc_release(puVar18);
  _objc_release(lVar17);
  _objc_release(puVar16);
  _objc_release(lVar15);
  _objc_release(puVar14);
  _objc_release(lVar12);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(lVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 10aefeb18; end: 10aefeb8f; -[SCCapturedSnapRecoveryDataBuilder build] */

void FUN_10aefeb18(long param_1)

{
  _objc_alloc(PTR_PTR_1126b0038);
  func_0x00010c0294c0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aefeb90; end: 10aefebc7; -[SCCapturedSnapRecoveryDataBuilder withMediaFileURL:] */

long FUN_10aefeb90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aefebc8; end: 10aefebff; -[SCCapturedSnapRecoveryDataBuilder withCaptureSessionId:] */

long FUN_10aefebc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aefec00; end: 10aefec07; -[SCCapturedSnapRecoveryDataBuilder withCaptureTimeStamp:] */

void FUN_10aefec00(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 10aefec08; end: 10aefec0f; -[SCCapturedSnapRecoveryDataBuilder withIsImage:] */

void FUN_10aefec08(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10aefec10; end: 10aefec17; -[SCCapturedSnapRecoveryDataBuilder withIsRemixingSpotlightVideo:] */

void FUN_10aefec10(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x21) = param_3;
  return;
}



/* Entry: 10aefec18; end: 10aefec4f; -[SCCapturedSnapRecoveryDataBuilder withRemixMetadata:] */

long FUN_10aefec18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aefec50; end: 10aefec63; -[SCCapturedSnapRecoveryDataBuilder withImageSegmentDuration:] */

void FUN_10aefec50(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x40) = param_3[2];
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}



/* Entry: 10aefec64; end: 10aefec6b; -[SCCapturedSnapRecoveryDataBuilder withAttemptedRecoveryCount:] */

void FUN_10aefec64(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 10aefec6c; end: 10aefeca3; -[SCCapturedSnapRecoveryDataBuilder withLensSessionId:] */

long FUN_10aefec6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aefeca4; end: 10aefecdb; -[SCCapturedSnapRecoveryDataBuilder withActiveLensID:] */

long FUN_10aefeca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aefecdc; end: 10aefed13; -[SCCapturedSnapRecoveryDataBuilder withActiveLens:] */

long FUN_10aefecdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aefed14; end: 10aefed1b; -[SCCapturedSnapRecoveryDataBuilder withSegmentIndex:] */

void FUN_10aefed14(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 10aefed1c; end: 10aefed53; -[SCCapturedSnapRecoveryDataBuilder withContentKeyMediaId:] */

long FUN_10aefed1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aefed54; end: 10aefed5b; -[SCCapturedSnapRecoveryDataBuilder withSnapSource:] */

void FUN_10aefed54(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 10aefed5c; end: 10aefedc7; -[SCCapturedSnapRecoveryDataBuilder .cxx_destruct] */

void FUN_10aefed5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aefedc8; end: 10aefee77; -[SCCapturedSnapLensRecoveryData initWithCoder:] */

undefined1 * FUN_10aefedc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701dd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aefee78; end: 10aefef23; -[SCCapturedSnapLensRecoveryData initWithLensId:musicTrackMetadata:] */

undefined1 *
FUN_10aefee78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701dd0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aefef24; end: 10aefef47; -[SCCapturedSnapLensRecoveryData copyWithZone:] */

undefined8 FUN_10aefef24(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aefef48; end: 10aefefa7; -[SCCapturedSnapLensRecoveryData encodeWithCoder:] */

void FUN_10aefef48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110eeb138);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f31658);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aefefa8; end: 10aeff01b; -[SCCapturedSnapLensRecoveryData hash] */

undefined8 * FUN_10aefefa8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10aeff09c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aeff0a8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10aeff0a8;
        }
        goto LAB_10aeff09c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aeff0a8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aeff01c; end: 10aeff0c3; -[SCCapturedSnapLensRecoveryData isEqual:] */

long FUN_10aeff01c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aeff09c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aeff0a8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10aeff0a8;
        }
        goto LAB_10aeff09c;
      }
    }
    lVar3 = 0;
  }
LAB_10aeff0a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aeff0c4; end: 10aeff0cb; -[SCCapturedSnapLensRecoveryData lensId] */

undefined8 FUN_10aeff0c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aeff0cc; end: 10aeff0d3; -[SCCapturedSnapLensRecoveryData musicTrackMetadata] */

undefined8 FUN_10aeff0cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aeff0d4; end: 10aeff103; -[SCCapturedSnapLensRecoveryData .cxx_destruct] */

void FUN_10aeff0d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeff104; end: 10aeff11f; +[SCCapturedSnapLensRecoveryDataBuilder capturedSnapLensRecoveryData] */

void FUN_10aeff104(void)

{
  _objc_alloc_init(PTR_PTR_1126de9b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aeff120; end: 10aeff1f3; +[SCCapturedSnapLensRecoveryDataBuilder capturedSnapLensRecoveryDataFromExistingCapturedSnapLensRecoveryData:] */

void FUN_10aeff120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126de9b8;
  _objc_retain(param_3);
  func_0x00010bf31780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b2880(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0d3a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = puVar3;
  func_0x00010c2b43c0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10aeff1f4; end: 10aeff223; -[SCCapturedSnapLensRecoveryDataBuilder build] */

void FUN_10aeff1f4(void)

{
  _objc_alloc(PTR_PTR_1126b0030);
  func_0x00010c024760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aeff224; end: 10aeff25b; -[SCCapturedSnapLensRecoveryDataBuilder withLensId:] */

long FUN_10aeff224(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aeff25c; end: 10aeff293; -[SCCapturedSnapLensRecoveryDataBuilder withMusicTrackMetadata:] */

long FUN_10aeff25c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10aeff294; end: 10aeff2c3; -[SCCapturedSnapLensRecoveryDataBuilder .cxx_destruct] */

void FUN_10aeff294(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aeff2c4; end: 10aeff2cb; -[SCCCameraControlCenterCameraModeSecondaryButtonType__Enum init] */

void FUN_10aeff2c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,9);
  return;
}


