/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067439b0; end: 1067439ef; -[SCScanThrottledFrameCapturer setTimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067439b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274f440;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067439f0; end: 1067439ff; -[SCScanThrottledFrameCapturer sampleBufferConverter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1067439f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274f444);
}



/* Entry: 106743a00; end: 106743a3f; -[SCScanThrottledFrameCapturer setSampleBufferConverter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106743a00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274f444;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106743a40; end: 106743a4f; -[SCScanThrottledFrameCapturer performer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106743a40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274f43c);
}



/* Entry: 106743a50; end: 106743a8f; -[SCScanThrottledFrameCapturer setPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106743a50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274f43c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106743a90; end: 106743b1f; -[SCScanThrottledFrameCapturer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106743a90(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274f43c,0);
  _objc_storeStrong(param_1 + _DAT_11274f440,0);
  _objc_storeStrong(param_1 + _DAT_11274f444,0);
  _objc_storeStrong(param_1 + _DAT_11274f450,0);
  _objc_storeStrong(param_1 + _DAT_11274f44c,0);
  _objc_storeStrong(param_1 + _DAT_11274f42c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274f428,0);
  return;
}



/* Entry: 106743b20; end: 106743d43;  */

void FUN_106743b20(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                  )

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = param_1;
  dVar2 = param_2;
  _objc_retain();
  if (param_1 == 0.0) {
    func_0x00010c23d0a0(param_3);
    dVar5 = dVar2;
    func_0x00010c14e120(param_3);
    dVar4 = dVar2 * dVar4;
    if (dVar4 <= param_2) {
      if (param_2 != 0.0) goto LAB_106743cf8;
      goto LAB_106743c78;
    }
    func_0x00010c23d0a0(param_3);
    func_0x00010c14e120(param_3);
    dVar5 = dVar5 * dVar4;
    dVar2 = param_2 / dVar5;
    func_0x00010c23d0a0(param_3);
    dVar4 = dVar5;
    func_0x00010c14e120(param_3);
    param_1 = dVar2 * dVar5 * dVar4;
  }
  else {
    dVar5 = dVar2;
    if (param_2 == 0.0) {
LAB_106743c78:
      func_0x00010c23d0a0(param_3);
      dVar2 = dVar4;
      func_0x00010c14e120(param_3);
      dVar4 = dVar4 * dVar2;
      if (dVar4 <= param_1) goto LAB_106743cf8;
      func_0x00010c23d0a0(param_3);
      dVar2 = dVar4;
      func_0x00010c14e120(param_3);
      dVar4 = dVar4 * dVar2;
      param_2 = param_1 / dVar4;
      func_0x00010c23d0a0(param_3);
      func_0x00010c14e120(param_3);
      param_2 = param_2 * dVar5 * dVar4;
    }
    else {
      func_0x00010c23d0a0(param_3);
      dVar5 = dVar2;
      func_0x00010c14e120(param_3);
      dVar2 = dVar2 * dVar4;
      if (dVar2 <= param_2) {
        func_0x00010c23d0a0(param_3);
        dVar4 = dVar2;
        func_0x00010c14e120(param_3);
        dVar2 = dVar2 * dVar4;
        if (dVar2 <= param_1) goto LAB_106743cf8;
      }
      func_0x00010c23d0a0(param_3);
      dVar3 = dVar5;
      func_0x00010c14e120(param_3);
      dVar5 = dVar5 * dVar2;
      func_0x00010c23d0a0(param_3);
      dVar4 = dVar2;
      func_0x00010c14e120(param_3);
      dVar2 = dVar2 * dVar4;
      func_0x00010c23d0a0(param_3);
      func_0x00010c14e120(param_3);
      dVar3 = dVar3 * dVar4;
      if (dVar3 <= param_2) {
        param_2 = dVar5;
      }
      func_0x00010c23d0a0(param_3);
      dVar4 = dVar3;
      func_0x00010c14e120(param_3);
      if (dVar3 * dVar4 <= param_1) {
        param_1 = dVar2;
      }
    }
  }
  uVar1 = param_3;
  func_0x00010c14e280(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  param_3 = uVar1;
LAB_106743cf8:
  uVar1 = param_3;
  _UIImageJPEGRepresentation((double)param_5 / 100.0,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106743d44; end: 106743dab; -[SCScanSampleBufferConverter imageFromSampleBuffer:] */

void FUN_106743d44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _CMSampleBufferGetImageBuffer(param_3);
  func_0x00010bfe96e0(puVar1,param_2,param_3,1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfe8a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106743dac; end: 106743e6f; -[SCScannableData image] */

void FUN_106743dac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106743e70;
  uStack_30 = 0x106743e80;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106743e88;
  puStack_60 = &UNK_110938450;
  puStack_48 = puStack_58;
  func_0x00010c0be460(param_1,param_2,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106743e70; end: 106743e87;  */

void FUN_106743e70(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106743e88; end: 106743ee7;  */

void FUN_106743e88(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106743ee8;
  puStack_20 = &UNK_11084d758;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0be4a0(param_2,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_110938430);
  return;
}



/* Entry: 106743ee8; end: 106743f1f;  */

void FUN_106743ee8(long param_1,undefined8 param_2)

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



/* Entry: 106743f20; end: 106743f23;  */

void FUN_106743f20(void)

{
  return;
}



/* Entry: 106743f24; end: 106743fe7; -[SCScannableData imageId] */

void FUN_106743f24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106743e70;
  uStack_30 = 0x106743e80;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106743fe8;
  puStack_60 = &UNK_110938450;
  puStack_48 = puStack_58;
  func_0x00010c0be460(param_1,param_2,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106743fe8; end: 10674401f;  */

void FUN_106743fe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106744020; end: 1067440e3; -[SCScannableData imageMetadata] */

void FUN_106744020(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106743e70;
  uStack_30 = 0x106743e80;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1067440e4;
  puStack_60 = &UNK_110938450;
  puStack_48 = puStack_58;
  func_0x00010c0be460(param_1,param_2,&puStack_78);
  uVar1 = puStack_48[5];
  func_0x00010bf51e00(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067440e4; end: 10674411b;  */

void FUN_1067440e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10674411c; end: 1067442bf; -[SCScannableData captureOrientation] */

undefined8 * FUN_10674411c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_110 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x2020000000;
  uStack_100 = 0;
  func_0x00010bfe81c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c0bcec0(*(undefined8 *)(lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar5 = (undefined8 *)puStack_110[3];
  puVar3 = &uStack_118;
  uVar4 = 8;
  __Block_object_dispose();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar5;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(*(long *)(puVar3[4] + 8) + 0x18) = uVar4;
  return puVar3;
}



/* Entry: 1067442c0; end: 1067442cf;  */

void FUN_1067442c0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 1067442d0; end: 10674449b; -[SCScannableData snapcodeIdentifiers] */

void FUN_1067442d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x3032000000;
  pcStack_110 = FUN_106743e70;
  uStack_108 = 0x106743e80;
  lStack_100 = 0;
  func_0x00010bfe81c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c0bcec0(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar4 != lVar5);
    lVar4 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  uVar2 = puStack_120[5];
  func_0x00010bf51e00(uVar2);
  __Block_object_dispose(&uStack_128,8);
  lVar4 = lStack_100;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
    return;
  }
  ___stack_chk_fail();
  uVar3 = 8;
  __Block_object_dispose(&uStack_128);
  __Unwind_Resume();
  _objc_retain(uVar3);
  lVar4 = *(long *)(*(long *)(lVar4 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10674449c; end: 1067444d3;  */

void FUN_10674449c(long param_1,undefined8 param_2)

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



/* Entry: 1067444d4; end: 10674469b; -[SCScannableData barcodeResult] */

void FUN_1067444d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x3032000000;
  pcStack_110 = FUN_106743e70;
  uStack_108 = 0x106743e80;
  lStack_100 = 0;
  func_0x00010bfe81c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c0bcec0(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  uVar4 = puStack_120[5];
  _objc_retain(uVar4);
  uVar2 = 8;
  __Block_object_dispose(&uStack_128);
  lVar3 = lStack_100;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  _objc_retain(uVar2);
  lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10674469c; end: 1067446d3;  */

void FUN_10674469c(long param_1,undefined8 param_2)

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



/* Entry: 1067446d4; end: 10674489b; -[SCScannableData relativeTouchPoint] */

void FUN_1067446d4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x3032000000;
  pcStack_110 = FUN_106743e70;
  uStack_108 = 0x106743e80;
  lStack_100 = 0;
  func_0x00010bfe81c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010c0bcec0(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  uVar4 = puStack_120[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_128,8);
  lVar3 = lStack_100;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10674489c; end: 1067448df;  */

void FUN_10674489c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1067448e0; end: 106744abf; -[SCVoiceMLLensAppEventsServiceProvider provide] */

void FUN_1067448e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106744ac0;
  puStack_78 = &UNK_1109384b0;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_b8 = puVar3;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x106744b10;
  puStack_a0 = &UNK_1109384e0;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_c0,auStack_68);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cd5c0;
  _objc_alloc(PTR_PTR_1126cd5c0);
  func_0x00010c009d60();
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106744ac0; end: 106744baf;  */

void FUN_106744ac0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bdeccc0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106744bb0; end: 106744bcb; -[SCVoiceMLLensAppEventsServiceProvider _createDeeplinkSendToScopeAppEventsMediator] */

void FUN_106744bb0(void)

{
  _objc_alloc_init(PTR_PTR_1126cd5c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106744bcc; end: 106744be7; -[SCVoiceMLLensAppEventsServiceProvider _createLensModalAppEventsMediator] */

void FUN_106744bcc(void)

{
  _objc_alloc_init(PTR_PTR_1126cd5d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106744be8; end: 106744c03; -[SCVoiceMLLensAppEventsServiceProvider _createOnboardingAppEventsMediator] */

void FUN_106744be8(void)

{
  _objc_alloc_init(PTR_PTR_1126cd5d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106744c04; end: 106744c4b; -[SCVoiceMLLensAppEventsServiceProvider _circumstanceEngine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106744c04(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11274f454;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106744c4c; end: 106744c83; -[SCVoiceMLLensAppEventsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106744c4c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274f454);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274f458);
  return;
}



/* Entry: 106744c84; end: 106744ce7; -[SCVoiceMLLensDeeplinkSendToScopeAppEventsMediatorImplementation init] */

undefined1 * FUN_106744c84(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2df0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106744ce8; end: 106744d0f; -[SCVoiceMLLensDeeplinkSendToScopeAppEventsMediatorImplementation deeplinkSendToScopeLifecycleObservable] */

void FUN_106744ce8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106744d10; end: 106744d17; -[SCVoiceMLLensDeeplinkSendToScopeAppEventsMediatorImplementation updateOnDeeplinkSendToScopeLifecycleAppEvent:] */

void FUN_106744d10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_next__112614028);
  return;
}



/* Entry: 106744d18; end: 106744d23; -[SCVoiceMLLensDeeplinkSendToScopeAppEventsMediatorImplementation .cxx_destruct] */

void FUN_106744d18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106744d24; end: 106744d87; -[SCVoiceMLLensModalAppEventsMediatorImplementation init] */

undefined1 * FUN_106744d24(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2df8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106744d88; end: 106744daf; -[SCVoiceMLLensModalAppEventsMediatorImplementation lensModalLifecycleObservable] */

void FUN_106744d88(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106744db0; end: 106744db7; -[SCVoiceMLLensModalAppEventsMediatorImplementation updateOnLensModalLifecycleAppEvent:] */

void FUN_106744db0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_next__112614028);
  return;
}



/* Entry: 106744db8; end: 106744dc3; -[SCVoiceMLLensModalAppEventsMediatorImplementation .cxx_destruct] */

void FUN_106744db8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106744dc4; end: 106744e27; -[SCVoiceMLLensOnboardingAppEventsMediatorImplementation init] */

undefined1 * FUN_106744dc4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2e00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106744e28; end: 106744e4f; -[SCVoiceMLLensOnboardingAppEventsMediatorImplementation vmlOnboardingLifecycleObservable] */

void FUN_106744e28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106744e50; end: 106744e57; -[SCVoiceMLLensOnboardingAppEventsMediatorImplementation updateOnVoiceMLLensOnboardingLifecycleAppEvent:] */

void FUN_106744e50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_next__112614028);
  return;
}



/* Entry: 106744e58; end: 106744e63; -[SCVoiceMLLensOnboardingAppEventsMediatorImplementation .cxx_destruct] */

void FUN_106744e58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106744e64; end: 106744f2f; -[SCComposerMapPresenter initWithPageLauncher:venueFavoritesStore:userLocationHelpers:] */

undefined1 *
FUN_106744e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f2e08;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106744f30; end: 106744ffb; -[SCComposerMapPresenter initWithMapDestinationSubject:venueFavoritesStore:userLocationHelpers:] */

undefined1 *
FUN_106744f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f2e08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106744ffc; end: 106745163; -[SCComposerMapPresenter _openMapWithDestination:mapOpenSource:grapheneSource:] */

void FUN_106744ffc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar2 = *(undefined **)(param_1 + 0x10);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b5c50;
    _objc_alloc(PTR_PTR_1126b5c50);
    func_0x00010c031b80();
    puVar1 = PTR_PTR_1126c69f8;
    _objc_alloc();
    func_0x00010c00bb00();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106745170;
    puStack_88 = &UNK_110841f80;
    lStack_80 = param_1;
    puStack_78 = puVar1;
    _objc_retain();
    func_0x000100162d98("APPSTORE",&puStack_a0);
    _objc_release(puStack_78);
  }
  else {
    _objc_retain(puVar2);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106745164;
    puStack_58 = &UNK_110841f80;
    puStack_50 = puVar2;
    _objc_retain(param_3);
    uStack_48 = param_3;
    _objc_retain(puVar2);
    func_0x000100162d98("APPSTORE",&puStack_70);
    _objc_release(uStack_48);
    puVar1 = puStack_50;
  }
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106745164; end: 10674516f;  */

void FUN_106745164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106745170; end: 1067451b3;  */

void FUN_106745170(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067451b4; end: 1067451bf; -[SCComposerMapPresenter pushToValdiMarshaller:] */

undefined * FUN_1067451b4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df438;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b0477d8();
  func_0x00010b0477a8();
  return puVar1;
}



/* Entry: 1067451c0; end: 106745237; -[SCComposerMapPresenter composerVenueFavoritesStoreObservable] */

void FUN_1067451c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126ae6b8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106745238; end: 1067452c3; -[SCComposerMapPresenter openMapToUserWithUserId:openSource:] */

void FUN_106745238(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010c067fc0();
  uVar1 = 2;
  if (param_4 != 0) {
    uVar1 = 0;
  }
  puVar2 = PTR_PTR_1126b5c58;
  func_0x00010bfb92a0(PTR_PTR_1126b5c58,param_2,param_3,0,0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be6d360(param_1,param_2,puVar2,5,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1067452c4; end: 1067454af; -[SCComposerMapPresenter presentPlaceOnSnapMapWithBoundsWithPlaceId:boundingBox:placeType:openSource:] */

void FUN_1067452c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,ulong param_7)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar2 = param_5;
  func_0x00010c0d6e60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  uVar3 = param_5;
  uVar8 = param_1;
  func_0x00010c0d6e60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  _CLLocationCoordinate2DMake(param_1,uVar8);
  uVar9 = param_1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c264480(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  uVar3 = param_5;
  uVar10 = uVar9;
  func_0x00010c264480(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c09abe0(uVar3);
  _CLLocationCoordinate2DMake(uVar9,uVar10);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar4 = param_7;
  func_0x00010c067fc0();
  puVar6 = PTR_PTR_1126b5c58;
  uVar5 = param_7;
  func_0x00010c067fc0();
  _objc_release(param_7);
  if ((uint)uVar5 < 7) {
    ppuVar7 = (undefined **)(&PTR_PTR_110938548)[uVar5 & 7];
  }
  else {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e30ab8;
  }
  uVar1 = 2;
  if (param_6 != 2) {
    uVar1 = param_6 == 1;
  }
  uVar2 = 8;
  if ((int)uVar4 != 6) {
    uVar2 = 5;
  }
  func_0x00010c0fd700(param_1,uVar8,uVar9,uVar10,puVar6,param_3,uVar1,param_4,ppuVar7,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010be6d360(param_2,param_3,puVar6,uVar2,5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1067454b0; end: 1067454b3; -[SCComposerMapPresenter openMapToRecentMovesWithUserId:] */

void FUN_1067454b0(void)

{
  return;
}



/* Entry: 1067454b4; end: 106745513; -[SCComposerMapPresenter getFormattedDistanceToLocationWithLat:lng:] */

void FUN_1067454b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc5c20(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106745514; end: 10674551b; -[SCComposerMapPresenter uiContainer] */

undefined8 FUN_106745514(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10674551c; end: 10674554b; -[SCComposerMapPresenter setUiContainer:] */

void FUN_10674551c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10674554c; end: 10674559f; -[SCComposerMapPresenter .cxx_destruct] */

void FUN_10674554c(long param_1)

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



/* Entry: 1067455a0; end: 10674566b; -[SCComposerMapPresenterFactory initWithPageLauncher:venueFavoritesStore:userLocationHelpers:] */

undefined1 *
FUN_1067455a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f2e10;
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



/* Entry: 10674566c; end: 10674569f; -[SCComposerMapPresenterFactory modalMapPresenter] */

void FUN_10674566c(void)

{
  _objc_alloc(PTR_PTR_1126cd5e0);
  func_0x00010c0330c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067456a0; end: 1067456fb; -[SCComposerMapPresenterFactory mapPresenterWithDestinationSubject:] */

void FUN_1067456a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cd5e0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c028340();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067456fc; end: 106745737; -[SCComposerMapPresenterFactory .cxx_destruct] */

void FUN_1067456fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106745738; end: 10674581b; -[SCComposerMapServiceProvider provide] */

void FUN_106745738(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126cd5f0;
  _objc_alloc(PTR_PTR_1126cd5f0);
  func_0x00010c0284c0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10674581c; end: 10674592f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10674581c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126cd5e8;
    _objc_alloc(PTR_PTR_1126cd5e8);
    lVar1 = param_1 + _DAT_11274f48c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0f14e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11274f490;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c0fd080();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_11274f494;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c292d00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0330c0(puVar7,param_2,lVar2,lVar4,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106745930; end: 10674597f; -[SCComposerMapServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106745930(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274f494);
  _objc_destroyWeak(param_1 + _DAT_11274f490);
  _objc_destroyWeak(param_1 + _DAT_11274f48c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274f488);
  return;
}



/* Entry: 106745980; end: 1067459f7;  */

void FUN_106745980(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109385b0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1067459f8; end: 106745a6f;  */

void FUN_1067459f8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110938600,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106745a70; end: 106745ae7;  */

void FUN_106745a70(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110938650,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106745ae8; end: 106745b5f;  */

void FUN_106745ae8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109386a0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106745b60; end: 106745b7b; +[SCCLocationShareConfirmationLocationShareConfirmationActionHandler valdiMarshallableObjectDescriptor] */

void FUN_106745b60(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109386f0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 106745b7c; end: 106745b87; +[SCCLocationShareConfirmationLocationShareConfirmationComponent componentPath] */

undefined ** FUN_106745b7c(void)

{
  return &PTR____CFConstantStringClassReference_110e5acb8;
}



/* Entry: 106745b88; end: 106745bbb; -[SCCLocationShareConfirmationLocationShareConfirmationComponent initWithViewModel:componentContext:runtime:] */

void FUN_106745b88(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f2e20;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 106745bbc; end: 106745c0b; -[SCCLocationShareConfirmationLocationShareConfirmationComponent setViewModel:] */

void FUN_106745bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106745c0c; end: 106745c4f; -[SCCLocationShareConfirmationLocationShareConfirmationComponent viewModel] */

void FUN_106745c0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106745c50; end: 106745c83; -[SCCLocationShareConfirmationLocationShareConfirmationContext init] */

void FUN_106745c50(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f2e28;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 106745c84; end: 106745c97; +[SCCLocationShareConfirmationLocationShareConfirmationContext valdiMarshallableObjectDescriptor] */

void FUN_106745c84(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110938768;
  param_1[1] = &PTR_DAT_110938798;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106745c98; end: 106745cd7; -[SCCLocationShareConfirmationLocationShareConfirmationViewModel initWithFriend:sharingAllFriends:blocklistFriends:] */

void FUN_106745c98(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f2e30;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 106745cd8; end: 106745ceb; +[SCCLocationShareConfirmationLocationShareConfirmationViewModel valdiMarshallableObjectDescriptor] */

void FUN_106745cd8(undefined8 *param_1)

{
  *param_1 = &PTR_s_friend_1109387a8;
  param_1[1] = &PTR_DAT_110938808;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106745cec; end: 106745d27; -[SCCLocationShareConfirmationUserInfo initWithUserId:displayName:] */

void FUN_106745cec(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f2e38;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 106745d28; end: 106745d4f; +[SCCLocationShareConfirmationUserInfo valdiMarshallableObjectDescriptor] */

void FUN_106745d28(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_userId_110938818;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106745d50; end: 106745dc3; -[SCCStaticMapUrlGenerator initWithConfigProvider:] */

undefined1 * FUN_106745d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2e40;
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



/* Entry: 106745dc4; end: 106745eab; -[SCCStaticMapUrlGenerator generateUrlWithLat:lng:zoom:widthPx:heightPx:customStyle:] */

void FUN_106745dc4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
  _objc_retain(param_5);
  func_0x00010bf60720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cd5f8;
  _CLLocationCoordinate2DMake(param_1,param_2);
  func_0x00010c0b9220(puVar2,param_4,puVar1,*(undefined8 *)(param_3 + 8),param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar3 = puVar2;
  func_0x00010beec820(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106745eac; end: 106745eb3; -[SCCStaticMapUrlGenerator shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_106745eac(void)

{
  return 0;
}



/* Entry: 106745eb4; end: 106745ebf; -[SCCStaticMapUrlGenerator pushToValdiMarshaller:] */

undefined * FUN_106745eb4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df440;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b0477d8();
  func_0x00010b0477a8();
  return puVar1;
}



/* Entry: 106745ec0; end: 106745ecb; -[SCCStaticMapUrlGenerator .cxx_destruct] */

void FUN_106745ec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106745ecc; end: 106745faf; -[SCComposerEmbeddedMapServiceProvider provide] */

void FUN_106745ecc(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126cd600;
  _objc_alloc(PTR_PTR_1126cd600);
  func_0x00010c05a400();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106745fb0; end: 106745fef;  */

void FUN_106745fb0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5d000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106745ff0; end: 10674606b; -[SCComposerEmbeddedMapServiceProvider _mapUrlGenerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106745ff0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126cd608;
  _objc_alloc(PTR_PTR_1126cd608);
  param_1 = param_1 + _DAT_11274f4a0;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001220(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10674606c; end: 1067460a3; -[SCComposerEmbeddedMapServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10674606c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274f4a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274f4a4);
  return;
}



/* Entry: 1067460a4; end: 10674622f; -[SCEmbeddedMapManager initWithBitmojiAvatarGenerator:snapTokenProvider:mapPeopleFriendsProvider:mapPeopleGroupsProvider:mapStatusFetcher:circumstanceEngine:shouldRenderBitmojiShadows:personLocationProvider:] */

undefined1 *
FUN_1067460a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f2e48;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x40) = param_9;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106746230; end: 106746633; -[SCEmbeddedMapManager staticMapViewWithFrame:context:personLocation:personLocationCluster:currentUserId:showLastSeenAndDistance:hideCallout:ghostMode:zoomLevel:bestFriendEmoji:traitCollection:showInferredLocation:completion:] */

void FUN_106746230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined1 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined1 param_17,undefined4 param_18,undefined8 param_19)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_19);
  *(undefined1 *)(param_5 + 0x70) = param_13;
  *(undefined1 *)(param_5 + 0x71) = param_12;
  _objc_retain(param_10);
  uVar3 = *(undefined8 *)(param_5 + 0x88);
  *(undefined8 *)(param_5 + 0x88) = param_10;
  _objc_release(uVar3);
  *(undefined8 *)(param_5 + 0x48) = param_1;
  *(undefined8 *)(param_5 + 0x50) = param_2;
  *(undefined8 *)(param_5 + 0x58) = param_3;
  *(undefined8 *)(param_5 + 0x60) = param_4;
  *(undefined1 *)(param_5 + 0x41) = param_17;
  _objc_initWeak(auStack_a0,param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106746634;
  puStack_b8 = &UNK_110841fb0;
  _objc_copyWeak(auStack_a8,auStack_a0);
  _objc_retain(param_8);
  uStack_b0 = param_8;
  func_0x0001000d76cc("APPSTORE",&puStack_d0);
  func_0x00010bea2420(param_5);
  func_0x00010bf51c80(param_8);
  func_0x00010bdc9600(param_5);
  puVar4 = PTR_PTR_1126cd5f8;
  func_0x00010c0b9220();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___dispatch_main_q_11034be20;
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_130 = puVar1;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_106746668;
  puStack_118 = &UNK_11085c0e8;
  _objc_copyWeak(auStack_e8,auStack_a0);
  _objc_retain(puVar4);
  puStack_110 = puVar4;
  _objc_retain(param_8);
  uStack_108 = param_8;
  _objc_retain(param_9);
  uStack_100 = param_9;
  _objc_retain(param_15);
  uStack_f8 = param_15;
  uStack_e0 = param_7;
  uStack_d8 = param_11;
  _objc_retain(param_19);
  uStack_f0 = param_19;
  _objc_copyWeak(auStack_148,auStack_a0);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_15);
  uStack_140 = param_7;
  uStack_138 = param_11;
  _objc_retain(param_19);
  func_0x00010bfa48e0(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(param_19);
  _objc_release(param_15);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_148);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(puStack_110);
  _objc_destroyWeak(auStack_e8);
  _objc_release(puVar4);
  _objc_release(uStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(param_19);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  return;
}



/* Entry: 106746634; end: 106746667;  */

void FUN_106746634(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed4a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106746668; end: 1067467bf;  */

void FUN_106746668(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_2;
  _objc_retain(param_2);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  func_0x00010be14620();
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar2);
  puVar1 = puVar1 + 0x40;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be2b7a0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067467c0; end: 106746a8f; -[SCEmbeddedMapManager _fetchStaticImageWithURL:additionalHeaders:personLocation:personLocationCluster:bestFriendEmoji:context:showLastSeenAndDistance:completion:] */

void FUN_1067467c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  puVar1 = auStack_80;
  _objc_initWeak(puVar1,param_1);
  puVar4 = PTR_PTR_1126b4960;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b19f8;
  func_0x00010c0b85e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58760(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106746a90;
  puStack_c0 = &UNK_1109388c0;
  _objc_copyWeak(auStack_98,auStack_80);
  _objc_retain(param_5);
  uStack_b8 = param_5;
  _objc_retain(param_6);
  uStack_b0 = param_6;
  _objc_retain(param_7);
  uStack_88 = param_9;
  uStack_a8 = param_7;
  uStack_90 = param_8;
  _objc_retain(param_11);
  uStack_a0 = param_11;
  ppuVar5 = &puStack_d8;
  puVar3 = PTR___dispatch_main_q_11034be20;
  func_0x00010c25f5e0(puVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar2);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_98);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  _objc_retain(ppuVar5);
  _objc_retain(puVar3);
  param_3 = param_3 + 0x40;
  _objc_loadWeakRetained(param_3);
  func_0x00010be2b7a0();
  _objc_release(ppuVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106746a90; end: 106746b17;  */

void FUN_106746a90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b7a0();
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106746b18; end: 106746d83; -[SCEmbeddedMapManager _handleLoadCompleteWithData:error:personLocation:personLocationCluster:bestFriendEmoji:context:showLastSeenAndDistance:completion:] */

void FUN_106746b18(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined1 param_9,
                  undefined4 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
  if (param_4 == 0) {
    lVar3 = param_3;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
      func_0x00010c013de0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                          *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
      func_0x00010c1a9f00();
      func_0x00010c182220(puVar5,param_2,2);
      func_0x00010befbb60(puVar1,param_2,puVar5);
      func_0x00010bdc60c0(param_1,param_2,puVar5,param_5,param_6,param_7,param_9,param_8,param_11);
      goto LAB_106746d28;
    }
  }
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c013de0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
  func_0x00010c182220();
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e33558);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c16d4a0(puVar4,param_2,0x12);
  func_0x00010befbb60(puVar1,param_2,puVar4);
  puVar5 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc(PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0);
  func_0x00010c00ee20();
  func_0x00010befbb60(puVar1,param_2,puVar2);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),puVar2);
  func_0x00010c16d4a0(puVar2,param_2,0x12);
  func_0x00010bdc60c0(param_1,param_2,puVar1,param_5,param_6,param_7,param_9,param_8,param_11);
  _objc_release(puVar2);
LAB_106746d28:
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106746d84; end: 106746dbf; -[SCEmbeddedMapManager _adjustedStaticMapCoordinateFromPersonCoordinate:forZoomLevel:context:] */

void FUN_106746d84(double param_1,double param_2,double param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = 8;
  if (param_6 != 0) {
    lVar1 = 0;
  }
  dVar3 = *(double *)(&UNK_10ddde900 + lVar1);
  dVar4 = *(double *)(param_4 + 0x60);
  dVar5 = *(double *)(param_4 + 0x80);
  param_1 = param_1 * 0.017453292519943295;
  dVar2 = param_1;
  _tan(param_1);
  _cos(param_1);
  dVar2 = dVar2 + 1.0 / param_1;
  _log(dVar2);
  _exp2(param_3);
  param_3 = param_3 * 512.0;
  dVar2 = ((0.0 / param_3 +
           ((1.0 - dVar2 / 3.141592653589793) * 0.5 - ABS(dVar5 + dVar3 * dVar4 * 0.5) / param_3)) *
           -2.0 + 1.0) * 3.141592653589793;
  _sinh(dVar2);
  _atan();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CLLocationCoordinate2DMake_110349b58)
            ((dVar2 * 180.0) / 3.141592653589793,
             (0.0 / param_3 + ((param_2 + 180.0) / 360.0 - 0.0 / param_3)) * 360.0 + -180.0);
  return;
}



/* Entry: 106746dc0; end: 10674711b; -[SCEmbeddedMapManager _addBitmojiAvatarViewToMapView:forPersonLocation:personLocationCluster:bestFriendEmoji:showLastSeenAndDistance:context:completion:] */

void FUN_106746dc0(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  lVar6 = *(long *)(param_1 + 0x10);
  puVar1 = param_4;
  func_0x00010c2923e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b96e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar2 = lVar6;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar5 == 0) {
    lVar2 = param_1;
    func_0x00010be737a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_3);
    lVar5 = *(long *)(param_1 + 0x78);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      func_0x00010bfb68e0(lVar2);
      func_0x00010bdc6280(param_1);
    }
    (**(code **)(param_9 + 0x10))(param_9,param_3);
    _objc_release(lVar2);
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_4;
    func_0x00010c2923e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf61de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar3);
    puVar1 = puVar4;
    func_0x00010c08fa60();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = param_4;
      func_0x00010c253880(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c0dab60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    else {
      _objc_retain(puVar4);
      puVar3 = puVar4;
    }
    puVar1 = puVar3;
    if (*(char *)(param_1 + 0x70) == '\x01') {
      puVar1 = PTR_PTR_1126c58b8;
      func_0x00010bfcc6e0(PTR_PTR_1126c58b8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    uVar7 = *(undefined8 *)(param_1 + 8);
    lVar2 = lVar6;
    func_0x00010bf1acc0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_6);
    _objc_retain(param_3);
    _objc_retain(param_9);
    _objc_retain(param_5);
    func_0x00010bfa5480(uVar7);
    _objc_release(lVar2);
    _objc_release(param_5);
    _objc_release(param_9);
    _objc_release(param_3);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
  _objc_release(lVar6);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10674711c; end: 1067472f3;  */

void FUN_10674711c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  long param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010bdeb540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if ((param_6 == 0) || (param_7 != 0)) {
    puVar6 = *(undefined **)(param_5 + 0x20);
    func_0x00010be737a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(*(undefined8 *)(param_5 + 0x38));
    uVar7 = *(undefined8 *)(param_5 + 0x20);
  }
  else {
    puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    func_0x00010bfb68e0();
    func_0x00010bfb68e0(puVar6);
    func_0x00010bdd45c0(param_3 / param_4,*(undefined8 *)(param_5 + 0x20));
    func_0x00010c19f0e0(puVar6);
    func_0x00010befbb60(*(undefined8 *)(param_5 + 0x38));
    if (*(long *)(param_5 + 0x50) == 1) {
      lVar2 = *(long *)(param_5 + 0x40);
      func_0x00010c0fa5e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf529e0();
      if (lVar3 == 1) {
        lVar4 = *(long *)(param_5 + 0x40);
        func_0x00010c118b00();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar4;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010c08fa60();
        _objc_release(lVar3);
        _objc_release(lVar4);
        _objc_release(lVar2);
        if (lVar5 != 0) {
          func_0x00010be13460(*(undefined8 *)(param_5 + 0x20));
          goto LAB_1067472c4;
        }
      }
      else {
        _objc_release(lVar2);
      }
    }
    uVar7 = *(undefined8 *)(param_5 + 0x20);
  }
  func_0x00010bdc5c20(uVar7);
  (**(code **)(*(long *)(param_5 + 0x48) + 0x10))
            (*(long *)(param_5 + 0x48),*(undefined8 *)(param_5 + 0x38));
LAB_1067472c4:
  _objc_release(puVar6);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1067472f4; end: 1067475c3; -[SCEmbeddedMapManager _fetchPropAndAddAccesoryViewsToMapView:personImageView:labelImageView:personLocationCluster:context:completion:] */

void FUN_1067472f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_initWeak(auStack_78,param_1);
  puVar4 = PTR_PTR_1126b4960;
  uVar1 = param_6;
  func_0x00010c118b00(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b19f8;
  func_0x00010c0b85e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58760(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1067475c4;
  puStack_b0 = &UNK_110938920;
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(param_3);
  lStack_a8 = param_3;
  _objc_retain(param_4);
  uStack_a0 = param_4;
  _objc_retain(param_5);
  uStack_98 = param_5;
  uStack_80 = param_7;
  _objc_retain(param_8);
  ppuVar6 = &puStack_c8;
  puVar3 = PTR___dispatch_main_q_11034be20;
  uStack_90 = param_8;
  func_0x00010c25f5e0(puVar7);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar7);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(lStack_a8);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  if ((puVar3 != (undefined *)0x0) && (ppuVar6 == (undefined **)0x0)) {
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
      func_0x00010c01bf60();
    }
    lVar5 = param_3 + 0x40;
    _objc_loadWeakRetained(lVar5);
    func_0x00010bdc5c20();
    _objc_release(lVar5);
    (**(code **)(*(long *)(param_3 + 0x38) + 0x10))
              (*(long *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20));
    _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  lVar5 = param_3 + 0x40;
  _objc_loadWeakRetained(lVar5);
  func_0x00010bdc5c20();
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010674765c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x38) + 0x10))
            (*(long *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x20));
  return;
}


