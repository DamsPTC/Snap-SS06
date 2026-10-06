/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109224458; end: 109224487; -[SCCaptureScope setStartRunningConfig:] */

void FUN_109224458(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109224488; end: 10922448f; -[SCCaptureScope lensDataProvider] */

undefined8 FUN_109224488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 109224490; end: 1092244bf; -[SCCaptureScope setLensDataProvider:] */

void FUN_109224490(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1092244c0; end: 10922453f; -[SCCaptureScope .cxx_destruct] */

void FUN_1092244c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109224540; end: 1092245b3; -[SCAlwaysOnMediaPickerCameraServices initWithCameraSourceController:] */

undefined1 * FUN_109224540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127011c0;
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



/* Entry: 1092245b4; end: 1092245bb; -[SCAlwaysOnMediaPickerCameraServices cameraSourceController] */

undefined8 FUN_1092245b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1092245bc; end: 1092245c7; -[SCAlwaysOnMediaPickerCameraServices .cxx_destruct] */

void FUN_1092245bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1092245c8; end: 109224633; +[SCAlwaysOnMediaPickerCameraMediaSource fileURLWithFileURL:isVideo:] */

void FUN_1092245c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dda70;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  puVar2[0x18] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109224634; end: 10922469f; +[SCAlwaysOnMediaPickerCameraMediaSource imageWithImage:] */

void FUN_109224634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dda70;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1092246a0; end: 1092246c3; -[SCAlwaysOnMediaPickerCameraMediaSource copyWithZone:] */

undefined8 FUN_1092246a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1092246c4; end: 10922473f; -[SCAlwaysOnMediaPickerCameraMediaSource hash] */

void FUN_1092246c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1127011c8;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109224740; end: 109224783; -[SCAlwaysOnMediaPickerCameraMediaSource internalInit] */

void FUN_109224740(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127011c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109224784; end: 10922484b; -[SCAlwaysOnMediaPickerCameraMediaSource isEqual:] */

long FUN_109224784(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109224824:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109224830;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_109224830;
        }
        goto LAB_109224824;
      }
    }
    lVar3 = 0;
  }
LAB_109224830:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10922484c; end: 1092248d7; -[SCAlwaysOnMediaPickerCameraMediaSource matchFileURL:image:] */

void FUN_10922484c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1092248d8; end: 109224907; -[SCAlwaysOnMediaPickerCameraMediaSource .cxx_destruct] */

void FUN_1092248d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 109224908; end: 10922497b; -[SCCameraUIScopedLensProcessingLegacyServices initWithLensProcessingLegacyServices:] */

undefined1 * FUN_109224908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127011d0;
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



/* Entry: 10922497c; end: 109224983; -[SCCameraUIScopedLensProcessingLegacyServices lensProcessingLegacyServices] */

undefined8 FUN_10922497c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109224984; end: 10922498f; -[SCCameraUIScopedLensProcessingLegacyServices .cxx_destruct] */

void FUN_109224984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109224990; end: 109224997; -[SCLensProcessingLegacyServices uriServiceComponent] */

undefined8 FUN_109224990(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109224998; end: 10922499f; -[SCLensProcessingLegacyServices trackingComponent] */

undefined8 FUN_109224998(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1092249a0; end: 1092249a7; -[SCLensProcessingLegacyServices trackingSerializationComponent] */

undefined8 FUN_1092249a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1092249a8; end: 1092249af; -[SCLensProcessingLegacyServices externalImageComponent] */

undefined8 FUN_1092249a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1092249b0; end: 1092249b7; -[SCLensProcessingLegacyServices lensComponent] */

undefined8 FUN_1092249b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1092249b8; end: 1092249bf; -[SCLensProcessingLegacyServices connectedLensComponent] */

undefined8 FUN_1092249b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1092249c0; end: 109224a1f; -[SCLensProcessingLegacyServices .cxx_destruct] */

void FUN_1092249c0(long param_1)

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



/* Entry: 109224a20; end: 109224d7b; +[LCVHelper convert:toLcvDepthFrameData:] */

void FUN_109224a20(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf6de40(param_1,param_2,*(undefined1 *)((long)param_3 + 0x11));
  func_0x00010c18bf20(param_4,param_2,uVar1);
  func_0x00010c19f380(param_4,param_2,*param_3);
  func_0x00010c215200(*(undefined8 *)(param_3 + 2),param_4);
  uVar1 = param_1;
  func_0x00010c112d60(param_1,param_2,*(undefined1 *)(param_3 + 4));
  func_0x00010c1e29c0(param_4,param_2,uVar1);
  uVar1 = param_4;
  func_0x00010bfeac60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar1);
  lVar3 = 0;
  do {
    uVar1 = param_4;
    func_0x00010bfeac60(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740((float)*(double *)((long)param_3 + lVar3 + 0x388),
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar1);
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x18);
  dVar4 = *(double *)(param_3 + 0xe8);
  uVar1 = param_4;
  func_0x00010bf99900(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee5c0((float)dVar4);
  _objc_release(uVar1);
  dVar4 = *(double *)(param_3 + 0xea);
  uVar1 = param_4;
  func_0x00010bf99900(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dbe20((float)dVar4);
  _objc_release(uVar1);
  dVar4 = *(double *)(param_3 + 0xec);
  uVar1 = param_4;
  func_0x00010bf99900(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227880((float)dVar4);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf6dc00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf50d40(param_1,param_2,param_3 + 6,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c140760(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf50d40(param_1,param_2,param_3 + 0x2c,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c140720(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51e20(param_1,param_2,param_3 + 0x52,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c1407a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51e20(param_1,param_2,param_3 + 0x6a,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf6dba0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51e20(param_1,param_2,param_3 + 0x82,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf85080(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51e20(param_1,param_2,param_3 + 0x9a,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf45da0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51e20(param_1,param_2,param_3 + 0xb2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010beffa40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf50cc0(param_1,param_2,param_3 + 0xca,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109224d7c; end: 109224f8f; +[LCVHelper convert:toCameraData:] */

void FUN_109224d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  int iVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar10 = (undefined4)((ulong)param_1 >> 0x20);
  uVar9 = (undefined4)param_1;
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010c2a5040();
  *param_5 = (int)uVar3;
  uVar3 = param_4;
  func_0x00010bfe0640();
  param_5[1] = (int)uVar3;
  func_0x00010bfb3520(param_4);
  *(ulong *)(param_5 + 2) = CONCAT44(uVar10,uVar9);
  func_0x00010c113980(param_4);
  param_5[4] = uVar9;
  func_0x00010c1139a0(param_4);
  lVar5 = 0;
  param_5[5] = uVar9;
  do {
    lVar8 = 0;
    puVar1 = param_5 + lVar5 * 4 + 6;
    puVar2 = param_5 + lVar5 * 4 + 0x16;
    do {
      uVar3 = param_4;
      func_0x00010c08e5a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      iVar7 = (int)lVar8;
      puVar6 = puVar1 + 3;
      if (((iVar7 != 3) && (puVar6 = puVar1 + 2, iVar7 != 2)) && (puVar6 = puVar1, iVar7 == 1)) {
        puVar6 = puVar1 + 1;
      }
      *puVar6 = uVar9;
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar3 = param_4;
      func_0x00010c1409e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      puVar6 = puVar2 + 3;
      if (((iVar7 != 3) && (puVar6 = puVar2 + 2, iVar7 != 2)) && (puVar6 = puVar2, iVar7 == 1)) {
        puVar6 = puVar2 + 1;
      }
      *puVar6 = uVar9;
      _objc_release(uVar4);
      _objc_release(uVar3);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 4);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109224f90; end: 1092251af; +[LCVHelper convert:toLcvCameraData:] */

void FUN_109224f90(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 *puVar6;
  int iVar7;
  
  _objc_retain(param_4);
  func_0x00010c2256c0(param_4,param_2,*param_3);
  func_0x00010c1a7d00(param_4,param_2,param_3[1]);
  func_0x00010c19e020(*(undefined8 *)(param_3 + 2),param_4);
  func_0x00010c1e3300(param_3[4],param_4);
  func_0x00010c1e3320(param_3[5],param_4);
  lVar5 = 0;
  do {
    iVar7 = 0;
    puVar1 = param_3 + lVar5 * 4 + 6;
    puVar2 = param_3 + lVar5 * 4 + 0x16;
    do {
      uVar3 = param_4;
      func_0x00010c08e5a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1 + 3;
      if (((iVar7 != 3) && (puVar6 = puVar1 + 2, iVar7 != 2)) && (puVar6 = puVar1, iVar7 == 1)) {
        puVar6 = puVar1 + 1;
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740(*puVar6,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(uVar3);
      uVar3 = param_4;
      func_0x00010c1409e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2 + 3;
      if (((iVar7 != 3) && (puVar6 = puVar2 + 2, iVar7 != 2)) && (puVar6 = puVar2, iVar7 == 1)) {
        puVar6 = puVar2 + 1;
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740(*puVar6,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(uVar3);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 4);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1092251b0; end: 10922557f; +[LCVHelper convert:toImuDataRaw:] */

void FUN_1092251b0(undefined8 param_1,undefined8 *param_2,long *param_3,long *param_4)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 auStack_170 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  plVar13 = param_4 + 9;
  param_4[10] = *plVar13;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  plVar2 = param_3;
  func_0x00010c299c20();
  _objc_retainAutoreleasedReturnValue();
  plVar3 = plVar2;
  func_0x00010bf52a60();
  if (plVar3 != (long *)0x0) {
    lVar12 = *plStack_1a0;
    do {
      plVar15 = (long *)0x0;
      do {
        if (*plStack_1a0 != lVar12) {
          _objc_enumerationMutation(plVar2);
        }
        func_0x00010bf50e40(param_1);
        puVar5 = (undefined8 *)param_4[10];
        if (puVar5 < (undefined8 *)param_4[0xb]) {
          puVar5[1] = uStack_200;
          *puVar5 = uStack_208;
          puVar5 = puVar5 + 2;
        }
        else {
          lVar9 = (long)puVar5 - *plVar13;
          uVar10 = (lVar9 >> 4) + 1;
          if (uVar10 >> 0x3c != 0) {
            FUN_109226f64();
            goto LAB_109225518;
          }
          uVar7 = param_4[0xb] - *plVar13;
          uVar11 = (long)uVar7 >> 3;
          if (uVar11 <= uVar10) {
            uVar11 = uVar10;
          }
          if (0x7fffffffffffffef < uVar7) {
            uVar11 = 0xfffffffffffffff;
          }
          plVar4 = plVar13;
          FUN_109226f78();
          puVar6 = (undefined8 *)((long)plVar4 + lVar9);
          puVar6[1] = uStack_200;
          *puVar6 = uStack_208;
          puVar5 = puVar6 + 2;
          param_2 = (undefined8 *)param_4[9];
          lVar8 = (long)puVar6 - (param_4[10] - (long)param_2);
          _memcpy(lVar8);
          lVar9 = param_4[9];
          param_4[9] = lVar8;
          param_4[10] = (long)puVar5;
          param_4[0xb] = (long)(plVar4 + uVar11 * 2);
          if (lVar9 != 0) {
            __ZdlPv();
          }
        }
        param_4[10] = (long)puVar5;
        plVar15 = (long *)((long)plVar15 + 1);
      } while (plVar3 != plVar15);
      plVar3 = plVar2;
      func_0x00010bf52a60();
    } while (plVar3 != (long *)0x0);
  }
  _objc_release(plVar2);
  uVar16 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  plVar2 = param_3;
  func_0x00010bfeace0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = &uStack_1f0;
  puVar6 = auStack_170;
  plVar3 = plVar2;
  func_0x00010bf52a60();
  if (plVar3 != (long *)0x0) {
    lVar12 = *plStack_1e0;
    do {
      plVar13 = (long *)0x0;
      do {
        if (*plStack_1e0 != lVar12) {
          _objc_enumerationMutation(plVar2);
        }
        func_0x00010bf50ca0(param_1);
        puVar5 = (undefined8 *)param_4[1];
        uVar16 = uStack_220;
        if (puVar5 < (undefined8 *)param_4[2]) {
          puVar5[2] = uStack_210;
          puVar5[1] = uStack_218;
          *puVar5 = uStack_220;
          puVar5 = puVar5 + 3;
        }
        else {
          lVar9 = (long)puVar5 - *param_4;
          uVar10 = (lVar9 >> 3) * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar10) {
            FUN_109226fac();
LAB_109225518:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10922551c);
            (*pcVar1)();
          }
          lVar8 = param_4[2] - *param_4 >> 3;
          uVar11 = lVar8 * 0x5555555555555556;
          if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
            uVar11 = uVar10;
          }
          if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
            uVar11 = 0xaaaaaaaaaaaaaaa;
          }
          plVar15 = param_4;
          FUN_109226fc0();
          puVar6 = (undefined8 *)((long)plVar15 + lVar9);
          puVar6[2] = uStack_210;
          puVar6[1] = uStack_218;
          *puVar6 = uStack_220;
          puVar5 = puVar6 + 3;
          lVar8 = (long)puVar6 - (param_4[1] - *param_4);
          _memcpy(lVar8);
          lVar9 = *param_4;
          *param_4 = lVar8;
          param_4[1] = (long)puVar5;
          param_4[2] = (long)(plVar15 + uVar11 * 3);
          if (lVar9 != 0) {
            __ZdlPv();
          }
        }
        param_4[1] = (long)puVar5;
        param_2 = &uStack_208;
        FUN_109225580(param_4 + 3);
        plVar13 = (long *)((long)plVar13 + 1);
      } while (plVar3 != plVar13);
      puVar5 = &uStack_1f0;
      puVar6 = auStack_170;
      plVar3 = plVar2;
      func_0x00010bf52a60();
    } while (plVar3 != (long *)0x0);
  }
  _objc_release(plVar2);
  plVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar2);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar14 = (undefined8 *)plVar3[1];
  if (puVar14 < (undefined8 *)plVar3[2]) {
    uVar17 = param_2[1];
    uVar16 = *param_2;
    puVar14[2] = param_2[2];
    puVar14[1] = uVar17;
    *puVar14 = uVar16;
    puVar14 = puVar14 + 3;
  }
  else {
    lVar12 = (long)puVar14 - *plVar3;
    uVar10 = (lVar12 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar10) {
      FUN_109227004();
      _objc_retain(puVar5);
      func_0x00010c270ba0(puVar5);
      *puVar6 = uVar16;
      func_0x00010c270a20(puVar5);
      puVar6[1] = uVar16;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar5);
      return;
    }
    lVar9 = plVar3[2] - *plVar3 >> 3;
    uVar11 = lVar9 * 0x5555555555555556;
    if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
      uVar11 = uVar10;
    }
    if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar11 = 0xaaaaaaaaaaaaaaa;
    }
    plVar2 = plVar3;
    FUN_109227018();
    puVar5 = (undefined8 *)((long)plVar2 + lVar12);
    uVar17 = param_2[1];
    uVar16 = *param_2;
    puVar5[2] = param_2[2];
    puVar5[1] = uVar17;
    *puVar5 = uVar16;
    puVar14 = puVar5 + 3;
    lVar9 = (long)puVar5 - (plVar3[1] - *plVar3);
    _memcpy(lVar9);
    lVar12 = *plVar3;
    *plVar3 = lVar9;
    plVar3[1] = (long)puVar14;
    plVar3[2] = (long)(plVar2 + uVar11 * 3);
    if (lVar12 != 0) {
      __ZdlPv();
    }
  }
  plVar3[1] = (long)puVar14;
  return;
}



/* Entry: 109225580; end: 109225677;  */

void FUN_109225580(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar7 = (undefined8 *)param_2[1];
  if (puVar7 < (undefined8 *)param_2[2]) {
    uVar9 = param_3[1];
    uVar8 = *param_3;
    puVar7[2] = param_3[2];
    puVar7[1] = uVar9;
    *puVar7 = uVar8;
    puVar7 = puVar7 + 3;
  }
  else {
    lVar6 = (long)puVar7 - *param_2;
    uVar4 = (lVar6 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar4) {
      FUN_109227004();
      _objc_retain(param_4);
      func_0x00010c270ba0(param_4);
      *param_5 = param_1;
      func_0x00010c270a20(param_4);
      param_5[1] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_4);
      return;
    }
    lVar3 = param_2[2] - *param_2 >> 3;
    uVar5 = lVar3 * 0x5555555555555556;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar5 = 0xaaaaaaaaaaaaaaa;
    }
    plVar2 = param_2;
    FUN_109227018();
    puVar1 = (undefined8 *)((long)plVar2 + lVar6);
    uVar9 = param_3[1];
    uVar8 = *param_3;
    puVar1[2] = param_3[2];
    puVar1[1] = uVar9;
    *puVar1 = uVar8;
    puVar7 = puVar1 + 3;
    lVar3 = (long)puVar1 - (param_2[1] - *param_2);
    _memcpy(lVar3);
    lVar6 = *param_2;
    *param_2 = lVar3;
    param_2[1] = (long)puVar7;
    param_2[2] = (long)(plVar2 + uVar5 * 3);
    if (lVar6 != 0) {
      __ZdlPv();
    }
  }
  param_2[1] = (long)puVar7;
  return;
}



/* Entry: 109225678; end: 1092256cf; +[LCVHelper convert:toVideoTimestampsDataRaw:] */

void FUN_109225678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  _objc_retain(param_4);
  func_0x00010c270ba0(param_4);
  *param_5 = param_1;
  func_0x00010c270a20(param_4);
  param_5[1] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1092256d0; end: 10922582f; +[LCVHelper convert:toAccelDataRaw:gyroDataRaw:] */

void FUN_1092256d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  _objc_retain(param_4);
  func_0x00010c2709c0(param_4);
  *param_6 = CONCAT44(uVar3,uVar2);
  *param_5 = CONCAT44(uVar3,uVar2);
  uVar1 = param_4;
  func_0x00010c141cc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2be880();
  *(undefined4 *)(param_6 + 1) = uVar2;
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c141cc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2beba0();
  *(undefined4 *)((long)param_6 + 0xc) = uVar2;
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c141cc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bef20();
  *(undefined4 *)(param_6 + 2) = uVar2;
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010beec920(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2be880();
  *(undefined4 *)(param_5 + 1) = uVar2;
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010beec920(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2beba0();
  *(undefined4 *)((long)param_5 + 0xc) = uVar2;
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010beec920(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bef20();
  *(undefined4 *)(param_5 + 2) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109225830; end: 1092259ab; +[LCVHelper convertAccelDataRaw:gyroDataRaw:toLcvImuFrameDataRaw:] */

void FUN_109225830(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  _objc_retain(param_5);
  func_0x00010c215dc0(*param_3,param_5);
  uVar2 = *(undefined4 *)(param_4 + 8);
  uVar1 = param_5;
  func_0x00010c141cc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227500(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined4 *)(param_4 + 0xc);
  uVar1 = param_5;
  func_0x00010c141cc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2276e0(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined4 *)(param_4 + 0x10);
  uVar1 = param_5;
  func_0x00010c141cc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227900(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined4 *)(param_3 + 1);
  uVar1 = param_5;
  func_0x00010beec920(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227500(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined4 *)((long)param_3 + 0xc);
  uVar1 = param_5;
  func_0x00010beec920(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2276e0(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined4 *)(param_3 + 2);
  uVar1 = param_5;
  func_0x00010beec920(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227900(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1092259ac; end: 109225c2b; +[LCVHelper convert:toLcvPoseFrameData:] */

void FUN_1092259ac(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  _objc_retain(param_4);
  func_0x00010c215dc0(*param_3,param_4);
  uVar8 = *(undefined4 *)(param_3 + 1);
  uVar7 = *(undefined4 *)((long)param_3 + 0xc);
  uVar6 = *(undefined4 *)(param_3 + 2);
  uVar9 = *(undefined4 *)((long)param_3 + 0x14);
  uVar5 = *(undefined4 *)(param_3 + 3);
  uVar4 = *(undefined4 *)((long)param_3 + 0x1c);
  uVar3 = *(undefined4 *)(param_3 + 4);
  uVar1 = param_4;
  func_0x00010c153180(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11d000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2244c0(uVar9);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c153180(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11d000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227500(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c153180(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11d000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2276e0(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c153180(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11d000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227900(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c153180(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ada0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227500(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c153180(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ada0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2276e0(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c153180(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ada0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227900(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109225c2c; end: 109225d5f; +[LCVHelper convert:toLcvAlignmentData:] */

void FUN_109225c2c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010beffa80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar1);
  lVar3 = *param_3;
  if (param_3[1] != lVar3) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      puVar2 = PTR_PTR_1126ddf48;
      _objc_alloc_init(PTR_PTR_1126ddf48);
      func_0x00010bf50d00(param_1,param_2,lVar4 + lVar3,puVar2);
      uVar1 = param_4;
      func_0x00010beffa80(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(uVar1);
      _objc_release(puVar2);
      uVar5 = uVar5 + 1;
      lVar3 = *param_3;
      lVar4 = lVar4 + 0x50;
    } while (uVar5 < (ulong)((param_3[1] - lVar3 >> 4) * -0x3333333333333333));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109225d60; end: 109225f7f; +[LCVHelper convert:toLcvAlignmentFrameData:] */

void FUN_109225d60(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 *puVar6;
  int iVar7;
  
  _objc_retain(param_4);
  func_0x00010c215dc0(*param_3,param_4);
  uVar3 = param_4;
  func_0x00010c08e3c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c140860(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar3);
  lVar5 = 0;
  do {
    iVar7 = 0;
    puVar1 = (undefined4 *)((long)param_3 + lVar5 * 0xc + 8);
    puVar2 = (undefined4 *)((long)param_3 + lVar5 * 0xc + 0x2c);
    do {
      uVar3 = param_4;
      func_0x00010c08e3c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1 + 2;
      if ((iVar7 != 2) && (puVar6 = puVar1, iVar7 == 1)) {
        puVar6 = puVar1 + 1;
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740(*puVar6,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(uVar3);
      uVar3 = param_4;
      func_0x00010c140860(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2 + 2;
      if ((iVar7 != 2) && (puVar6 = puVar2, iVar7 == 1)) {
        puVar6 = puVar2 + 1;
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df740(*puVar6,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(uVar3);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 3);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109225f80; end: 1092260b3; +[LCVHelper convert:toLcvPoseData:] */

void FUN_109225f80(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c1041a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar1);
  lVar3 = *param_3;
  if (param_3[1] != lVar3) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      puVar2 = PTR_PTR_1126ddf50;
      _objc_alloc_init(PTR_PTR_1126ddf50);
      func_0x00010bf50da0(param_1,param_2,lVar4 + lVar3,puVar2);
      uVar1 = param_4;
      func_0x00010c1041a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(uVar1);
      _objc_release(puVar2);
      uVar5 = uVar5 + 1;
      lVar3 = *param_3;
      lVar4 = lVar4 + 0x28;
    } while (uVar5 < (ulong)((param_3[1] - lVar3 >> 3) * -0x3333333333333333));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1092260b4; end: 10922636b; +[LCVHelper convert:toPoseData:] */

void FUN_1092260b4(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  undefined8 uStack_158;
  uint uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  param_4[1] = *param_4;
  plVar2 = param_3;
  func_0x00010c1041a0();
  _objc_retainAutoreleasedReturnValue();
  plVar3 = plVar2;
  func_0x00010bf529e0();
  FUN_10922636c(param_4);
  _objc_release(plVar2);
  uStack_158 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  plVar2 = param_3;
  func_0x00010c1041a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = &uStack_130;
  puVar9 = auStack_f0;
  plVar4 = plVar2;
  func_0x00010bf52a60();
  if (plVar4 != (long *)0x0) {
    lVar15 = *plStack_120;
    do {
      plVar13 = (long *)0x0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(plVar2);
        }
        uStack_158 = 0;
        func_0x00010bf50e20(param_1);
        puVar8 = (undefined8 *)param_4[1];
        if (puVar8 < (undefined8 *)param_4[2]) {
          puVar8[4] = (ulong)uStack_134 << 0x20;
          puVar8[1] = 0;
          *puVar8 = 0;
          puVar8[3] = 0;
          puVar8[2] = 0x3f80000000000000;
          puVar8 = puVar8 + 5;
        }
        else {
          lVar11 = (long)puVar8 - *param_4;
          uVar10 = (lVar11 >> 3) * -0x3333333333333333 + 1;
          if (0x666666666666666 < uVar10) {
            FUN_10922705c();
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x109226318);
            (*pcVar1)();
          }
          lVar14 = param_4[2] - *param_4 >> 3;
          uVar12 = lVar14 * -0x6666666666666666;
          if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
            uVar12 = uVar10;
          }
          if (0x333333333333332 < (ulong)(lVar14 * -0x3333333333333333)) {
            uVar12 = 0x666666666666666;
          }
          plVar5 = param_4;
          FUN_109227070();
          puVar9 = (undefined8 *)((long)plVar5 + lVar11);
          puVar9[4] = (ulong)uStack_134 << 0x20;
          puVar9[1] = 0;
          *puVar9 = 0;
          puVar9[3] = 0;
          puVar9[2] = 0x3f80000000000000;
          puVar8 = puVar9 + 5;
          plVar3 = (long *)*param_4;
          lVar14 = (long)puVar9 - (param_4[1] - (long)plVar3);
          _memcpy(lVar14);
          lVar11 = *param_4;
          *param_4 = lVar14;
          param_4[1] = (long)puVar8;
          param_4[2] = (long)(plVar5 + uVar12 * 5);
          if (lVar11 != 0) {
            __ZdlPv();
          }
        }
        param_4[1] = (long)puVar8;
        plVar13 = (long *)((long)plVar13 + 1);
      } while (plVar4 != plVar13);
      puVar8 = &uStack_130;
      puVar9 = auStack_f0;
      plVar4 = plVar2;
      func_0x00010bf52a60();
    } while (plVar4 != (long *)0x0);
  }
  _objc_release(plVar2);
  plVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar2);
  _objc_release(param_3);
  __Unwind_Resume();
  lVar15 = *plVar4;
  if ((long *)((plVar4[2] - lVar15 >> 3) * -0x3333333333333333) < plVar3) {
    if ((long *)0x666666666666666 < plVar3) {
      FUN_10922705c();
      _objc_retain(puVar8);
      func_0x00010c2709c0(puVar8);
      *puVar9 = uStack_158;
      puVar6 = puVar8;
      func_0x00010c153180(puVar8);
      uVar16 = (undefined4)uStack_158;
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c11d000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a1240();
      *(undefined4 *)((long)puVar9 + 0x14) = uVar16;
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar6 = puVar8;
      func_0x00010c153180(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c11d000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2be880();
      *(undefined4 *)(puVar9 + 1) = uVar16;
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar6 = puVar8;
      func_0x00010c153180(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c11d000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2beba0();
      *(undefined4 *)((long)puVar9 + 0xc) = uVar16;
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar6 = puVar8;
      func_0x00010c153180(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c11d000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bef20();
      *(undefined4 *)(puVar9 + 2) = uVar16;
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar6 = puVar8;
      func_0x00010c153180(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c27ada0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2be880();
      *(undefined4 *)(puVar9 + 3) = uVar16;
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar6 = puVar8;
      func_0x00010c153180(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c27ada0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2beba0();
      *(undefined4 *)((long)puVar9 + 0x1c) = uVar16;
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar6 = puVar8;
      func_0x00010c153180(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c27ada0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bef20();
      *(undefined4 *)(puVar9 + 4) = uVar16;
      _objc_release(puVar7);
      _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar8);
      return;
    }
    lVar11 = plVar4[1];
    plVar2 = plVar4;
    FUN_109227070();
    lVar15 = (long)plVar2 + (lVar11 - lVar15);
    lVar14 = lVar15 - (plVar4[1] - *plVar4);
    _memcpy(lVar14);
    lVar11 = *plVar4;
    *plVar4 = lVar14;
    plVar4[1] = lVar15;
    plVar4[2] = (long)(plVar2 + (long)plVar3 * 5);
    if (lVar11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10922636c; end: 109226417;  */

void FUN_10922636c(undefined8 param_1,long *param_2,ulong param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulong)param_1 >> 0x20);
  uVar7 = (undefined4)param_1;
  lVar4 = *param_2;
  if ((ulong)((param_2[2] - lVar4 >> 3) * -0x3333333333333333) < param_3) {
    if (0x666666666666666 < param_3) {
      FUN_10922705c();
      _objc_retain(param_4);
      func_0x00010c2709c0(param_4);
      *param_5 = CONCAT44(uVar8,uVar7);
      uVar2 = param_4;
      func_0x00010c153180(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c11d000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a1240();
      *(undefined4 *)((long)param_5 + 0x14) = uVar7;
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = param_4;
      func_0x00010c153180(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c11d000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2be880();
      *(undefined4 *)(param_5 + 1) = uVar7;
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = param_4;
      func_0x00010c153180(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c11d000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2beba0();
      *(undefined4 *)((long)param_5 + 0xc) = uVar7;
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = param_4;
      func_0x00010c153180(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c11d000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bef20();
      *(undefined4 *)(param_5 + 2) = uVar7;
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = param_4;
      func_0x00010c153180(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c27ada0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2be880();
      *(undefined4 *)(param_5 + 3) = uVar7;
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = param_4;
      func_0x00010c153180(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c27ada0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2beba0();
      *(undefined4 *)((long)param_5 + 0x1c) = uVar7;
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = param_4;
      func_0x00010c153180(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c27ada0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bef20();
      *(undefined4 *)(param_5 + 4) = uVar7;
      _objc_release(uVar3);
      _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_4);
      return;
    }
    lVar5 = param_2[1];
    plVar1 = param_2;
    FUN_109227070();
    lVar4 = (long)plVar1 + (lVar5 - lVar4);
    lVar6 = lVar4 - (param_2[1] - *param_2);
    _memcpy(lVar6);
    lVar5 = *param_2;
    *param_2 = lVar6;
    param_2[1] = lVar4;
    param_2[2] = (long)(plVar1 + param_3 * 5);
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 109226418; end: 10922665f; +[LCVHelper convert:toPoseFrameData:] */

void FUN_109226418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = (undefined4)param_1;
  _objc_retain(param_4);
  func_0x00010c2709c0(param_4);
  *param_5 = CONCAT44(uVar4,uVar3);
  uVar1 = param_4;
  func_0x00010c153180(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11d000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a1240();
  *(undefined4 *)((long)param_5 + 0x14) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c153180(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11d000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2be880();
  *(undefined4 *)(param_5 + 1) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c153180(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11d000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2beba0();
  *(undefined4 *)((long)param_5 + 0xc) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c153180(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11d000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bef20();
  *(undefined4 *)(param_5 + 2) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c153180(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ada0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2be880();
  *(undefined4 *)(param_5 + 3) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c153180(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ada0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2beba0();
  *(undefined4 *)((long)param_5 + 0x1c) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c153180(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ada0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bef20();
  *(undefined4 *)(param_5 + 4) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109226660; end: 109226737; +[LCVHelper convert:toLcvTimestampData:] */

void FUN_109226660(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  func_0x00010c12adc0(param_4);
  if (param_3[1] != *param_3) {
    uVar2 = 0;
    do {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110f2d498);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(param_4,param_2,puVar1);
      _objc_release(puVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulong)(param_3[1] - *param_3 >> 3));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109226738; end: 109226873; +[LCVHelper convert:toLcvCalibrationData:] */

void FUN_109226738(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c220e20(*param_3,param_4);
  func_0x00010c1a9160(param_3[1],param_4);
  func_0x00010c221040(param_3[2],param_4);
  uVar1 = param_4;
  func_0x00010c08e860(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51e20(param_1,param_2,param_3 + 0x16,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c140ca0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51e20(param_1,param_2,param_3 + 0x2e,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c08e3c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf50cc0(param_1,param_2,param_3 + 0x76,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c140860(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf50cc0(param_1,param_2,param_3 + 0x8e,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109226874; end: 1092269c3; +[LCVHelper convert:toLcvStabilizerFrameData:] */

void FUN_109226874(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  float *pfVar7;
  
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010c24d080(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar3);
  func_0x00010c215dc0(*param_3,param_4);
  lVar5 = 0;
  do {
    iVar6 = 0;
    pfVar7 = (float *)((long)param_3 + lVar5 * 0xc + 8);
    do {
      uVar3 = param_4;
      func_0x00010c24d080(param_4);
      _objc_retainAutoreleasedReturnValue();
      pfVar1 = pfVar7;
      if (iVar6 == 1) {
        pfVar1 = pfVar7 + 1;
      }
      pfVar2 = pfVar7 + 2;
      if (iVar6 != 2) {
        pfVar2 = pfVar1;
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720((double)*pfVar2,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar3,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(uVar3);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 3);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1092269c4; end: 109226aeb; +[LCVHelper convert:toLcvStabilizerData:] */

void FUN_1092269c4(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c24d0a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar1);
  puVar3 = (undefined8 *)*param_3;
  if (puVar3 != (undefined8 *)param_3[1]) {
    do {
      uStack_78 = puVar3[1];
      uStack_80 = *puVar3;
      uStack_68 = puVar3[3];
      uStack_70 = puVar3[2];
      uStack_58 = puVar3[5];
      uStack_60 = puVar3[4];
      puVar2 = PTR_PTR_1126ddf58;
      _objc_alloc_init(PTR_PTR_1126ddf58);
      func_0x00010bf50de0(param_1,param_2,&uStack_80,puVar2);
      uVar1 = param_4;
      func_0x00010c24d0a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(uVar1);
      puVar3 = puVar3 + 6;
      _objc_release(puVar2);
    } while (puVar3 != (undefined8 *)param_3[1]);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 109226aec; end: 109226c6f; +[LCVHelper copy:toCvMat:] */

void FUN_109226aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  uint uStack_50;
  uint uStack_4c;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfe0640();
  uVar3 = param_3;
  func_0x00010c2a5040();
  uVar4 = param_3;
  func_0x00010c27dd80();
  uVar1 = (uint)uVar4 & 0xfff;
  uVar6 = (ulong)uVar1;
  if ((((2 < (int)param_4[1]) || (param_4[2] != (uint)uVar2)) || (param_4[3] != (uint)uVar3)) ||
     (((*param_4 & 0xfff) != uVar1 || (lVar7 = *(long *)(param_4 + 4), lVar7 == 0)))) {
    uStack_50 = (uint)uVar2;
    uStack_4c = (uint)uVar3;
    FUN_109a83fd0(param_4,2,&uStack_50);
    lVar7 = *(long *)(param_4 + 4);
  }
  uVar2 = param_3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  uVar3 = uVar2;
  func_0x00010bf25f00(uVar2);
  uVar4 = param_3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _memcpy(lVar7,uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_3);
  __Unwind_Resume(uVar3);
  _objc_retain(uVar6);
  func_0x00010c2256c0(uVar6);
  func_0x00010c1a7d00(uVar6);
  func_0x00010c20a620(uVar6);
  func_0x00010c21acc0(uVar6);
  puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189480(uVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 109226c70; end: 109226d37; +[LCVHelper copy:toLcvImage:] */

void FUN_109226c70(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  func_0x00010c2256c0(param_4,param_2,param_3[3]);
  func_0x00010c1a7d00(param_4,param_2,param_3[2]);
  func_0x00010c20a620(param_4,param_2,param_3[0x14]);
  func_0x00010c21acc0(param_4,param_2,*param_3 & 0xfff);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778,param_2,*(undefined8 *)(param_3 + 4),
                      *(long *)(param_3 + 0x14) * (long)(int)param_3[2]);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189480(param_4,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109226d38; end: 109226e03; +[LCVHelper wrap:withLcvImage:] */

void FUN_109226d38(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  func_0x00010c2256c0(param_4,param_2,param_3[3]);
  func_0x00010c1a7d00(param_4,param_2,param_3[2]);
  func_0x00010c20a620(param_4,param_2,param_3[0x14]);
  func_0x00010c21acc0(param_4,param_2,*param_3 & 0xfff);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778,param_2,*(undefined8 *)(param_3 + 4),
                      *(long *)(param_3 + 0x14) * (long)(int)param_3[2],0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189480(param_4,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109226e04; end: 109226eef; +[LCVHelper convert:toArray:] */

void FUN_109226e04(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  func_0x00010c12adc0(param_4);
  iVar3 = *(int *)(param_3 + 0xc);
  if (0 < iVar3) {
    lVar4 = 0;
    uVar2 = (ulong)*(uint *)(param_3 + 8);
    do {
      if (0 < (int)uVar2) {
        lVar5 = 0;
        do {
          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df740(*(undefined4 *)
                               (*(long *)(param_3 + 0x10) + lVar4 * **(long **)(param_3 + 0x48) +
                               lVar5 * 4),PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(param_4,param_2,puVar1);
          _objc_release(puVar1);
          lVar5 = lVar5 + 1;
          uVar2 = (ulong)*(int *)(param_3 + 8);
        } while (lVar5 < (long)uVar2);
        iVar3 = *(int *)(param_3 + 0xc);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 109226ef0; end: 109226f57; +[LCVHelper primaryCameraFromNativePrimaryCamera:] */

uint FUN_109226ef0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_3 < 3) {
    return param_3;
  }
  uVar1 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt13runtime_errorC1EPKc();
  uVar2 = uVar1;
  puVar4 = PTR___ZNSt13runtime_errorD1Ev_1103461d8;
  ___cxa_throw(uVar1,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
  iVar3 = (int)puVar4;
  ___cxa_free_exception(uVar1);
  __Unwind_Resume(uVar2);
  return (uint)(iVar3 == 1);
}



/* Entry: 109226f58; end: 109226f63; +[LCVHelper depthQualityFromNativeDepthQuality:] */

bool FUN_109226f58(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 == 1;
}



/* Entry: 109226f64; end: 109226f77;  */

/* WARNING: Removing unreachable block (ram,0x0001092271e4) */

undefined1  [16]
FUN_109226f64(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  undefined8 auStack_148 [2];
  char cStack_131;
  undefined8 auStack_130 [2];
  char cStack_119;
  undefined1 auStack_118 [24];
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar1;
    return auVar8;
  }
  func_0x000104c4f740();
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar1;
    return auVar9;
  }
  func_0x000104c4f740();
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar1;
    return auVar10;
  }
  func_0x000104c4f740();
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (0x666666666666666 < param_2) {
    func_0x000104c4f740();
    _objc_retain(param_5);
    puStack_168 = PTR_PTR_1127011e0;
    ppuVar3 = &puStack_170;
    puVar7 = PTR_s_init_1125d9248;
    puStack_170 = puVar2;
    _objc_msgSendSuper2(ppuVar3,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar4 = ppuVar3;
      func_0x00010c0d59e0(ppuVar3);
      ppuVar5 = ppuVar3;
      func_0x00010c0d5a00(ppuVar3);
      uVar6 = param_5;
      _objc_retainAutorelease(param_5);
      func_0x00010bdc3520();
      puVar7 = (undefined *)0x8;
      __Znwm(8);
      func_0x000107c31940(auStack_118,uVar6);
      func_0x000107c31940(auStack_130,"");
      func_0x000107c31940(auStack_148,"");
      func_0x000107c31940(auStack_160,"");
      FUN_1095c8c98(puVar7,ppuVar4,ppuVar5,auStack_118,auStack_130,auStack_148,auStack_160,0,0x203);
      if (cStack_149 < '\0') {
        __ZdlPv(auStack_160[0]);
      }
      if (cStack_131 < '\0') {
        __ZdlPv(auStack_148[0]);
      }
      if (cStack_119 < '\0') {
        __ZdlPv(auStack_130[0]);
      }
      FUN_109228854(ppuVar3 + 1,puVar7);
    }
    _objc_release(param_5);
    auVar12._8_8_ = puVar7;
    auVar12._0_8_ = ppuVar3;
    return auVar12;
  }
  lVar1 = param_2 * 0x28;
  __Znwm(lVar1);
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = lVar1;
  return auVar11;
}



/* Entry: 109226f78; end: 109226fab;  */

/* WARNING: Removing unreachable block (ram,0x0001092271e4) */

undefined1  [16]
FUN_109226f78(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  undefined1 auStack_108 [24];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar1;
    return auVar8;
  }
  func_0x000104c4f740();
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar1;
    return auVar9;
  }
  func_0x000104c4f740();
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar1;
    return auVar10;
  }
  func_0x000104c4f740();
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (0x666666666666666 < param_2) {
    func_0x000104c4f740();
    _objc_retain(param_5);
    puStack_158 = PTR_PTR_1127011e0;
    ppuVar3 = &puStack_160;
    puVar7 = PTR_s_init_1125d9248;
    puStack_160 = puVar2;
    _objc_msgSendSuper2(ppuVar3,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar4 = ppuVar3;
      func_0x00010c0d59e0(ppuVar3);
      ppuVar5 = ppuVar3;
      func_0x00010c0d5a00(ppuVar3);
      uVar6 = param_5;
      _objc_retainAutorelease(param_5);
      func_0x00010bdc3520();
      puVar7 = (undefined *)0x8;
      __Znwm(8);
      func_0x000107c31940(auStack_108,uVar6);
      func_0x000107c31940(auStack_120,"");
      func_0x000107c31940(auStack_138,"");
      func_0x000107c31940(auStack_150,"");
      FUN_1095c8c98(puVar7,ppuVar4,ppuVar5,auStack_108,auStack_120,auStack_138,auStack_150,0,0x203);
      if (cStack_139 < '\0') {
        __ZdlPv(auStack_150[0]);
      }
      if (cStack_121 < '\0') {
        __ZdlPv(auStack_138[0]);
      }
      if (cStack_109 < '\0') {
        __ZdlPv(auStack_120[0]);
      }
      FUN_109228854(ppuVar3 + 1,puVar7);
    }
    _objc_release(param_5);
    auVar12._8_8_ = puVar7;
    auVar12._0_8_ = ppuVar3;
    return auVar12;
  }
  lVar1 = param_2 * 0x28;
  __Znwm(lVar1);
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = lVar1;
  return auVar11;
}



/* Entry: 109226fac; end: 109226fbf;  */

/* WARNING: Removing unreachable block (ram,0x0001092271e4) */

undefined1  [16]
FUN_109226fac(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 auStack_130 [2];
  char cStack_119;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  undefined1 auStack_e8 [24];
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar1;
    return auVar8;
  }
  func_0x000104c4f740();
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (0xaaaaaaaaaaaaaaa < param_2) {
    func_0x000104c4f740();
    puVar2 = &DAT_10f62a4d8;
    func_0x000104c4f6cc();
    if (0x666666666666666 < param_2) {
      func_0x000104c4f740();
      _objc_retain(param_5);
      puStack_138 = PTR_PTR_1127011e0;
      ppuVar3 = &puStack_140;
      puVar7 = PTR_s_init_1125d9248;
      puStack_140 = puVar2;
      _objc_msgSendSuper2(ppuVar3,PTR_s_init_1125d9248);
      if (ppuVar3 != (undefined **)0x0) {
        ppuVar4 = ppuVar3;
        func_0x00010c0d59e0(ppuVar3);
        ppuVar5 = ppuVar3;
        func_0x00010c0d5a00(ppuVar3);
        uVar6 = param_5;
        _objc_retainAutorelease(param_5);
        func_0x00010bdc3520();
        puVar7 = (undefined *)0x8;
        __Znwm(8);
        func_0x000107c31940(auStack_e8,uVar6);
        func_0x000107c31940(auStack_100,"");
        func_0x000107c31940(auStack_118,"");
        func_0x000107c31940(auStack_130,"");
        FUN_1095c8c98(puVar7,ppuVar4,ppuVar5,auStack_e8,auStack_100,auStack_118,auStack_130,0,0x203)
        ;
        if (cStack_119 < '\0') {
          __ZdlPv(auStack_130[0]);
        }
        if (cStack_101 < '\0') {
          __ZdlPv(auStack_118[0]);
        }
        if (cStack_e9 < '\0') {
          __ZdlPv(auStack_100[0]);
        }
        FUN_109228854(ppuVar3 + 1,puVar7);
      }
      _objc_release(param_5);
      auVar11._8_8_ = puVar7;
      auVar11._0_8_ = ppuVar3;
      return auVar11;
    }
    lVar1 = param_2 * 0x28;
    __Znwm(lVar1);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar1;
    return auVar10;
  }
  lVar1 = param_2 * 0x18;
  __Znwm(lVar1);
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = lVar1;
  return auVar9;
}



/* Entry: 109226fc0; end: 109227003;  */

/* WARNING: Removing unreachable block (ram,0x0001092271e4) */

undefined1  [16]
FUN_109226fc0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 auStack_f0 [2];
  char cStack_d9;
  undefined1 auStack_d8 [24];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar1;
    return auVar8;
  }
  func_0x000104c4f740();
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (0xaaaaaaaaaaaaaaa < param_2) {
    func_0x000104c4f740();
    puVar2 = &DAT_10f62a4d8;
    func_0x000104c4f6cc();
    if (0x666666666666666 < param_2) {
      func_0x000104c4f740();
      _objc_retain(param_5);
      puStack_128 = PTR_PTR_1127011e0;
      ppuVar3 = &puStack_130;
      puVar7 = PTR_s_init_1125d9248;
      puStack_130 = puVar2;
      _objc_msgSendSuper2(ppuVar3,PTR_s_init_1125d9248);
      if (ppuVar3 != (undefined **)0x0) {
        ppuVar4 = ppuVar3;
        func_0x00010c0d59e0(ppuVar3);
        ppuVar5 = ppuVar3;
        func_0x00010c0d5a00(ppuVar3);
        uVar6 = param_5;
        _objc_retainAutorelease(param_5);
        func_0x00010bdc3520();
        puVar7 = (undefined *)0x8;
        __Znwm(8);
        func_0x000107c31940(auStack_d8,uVar6);
        func_0x000107c31940(auStack_f0,"");
        func_0x000107c31940(auStack_108,"");
        func_0x000107c31940(auStack_120,"");
        FUN_1095c8c98(puVar7,ppuVar4,ppuVar5,auStack_d8,auStack_f0,auStack_108,auStack_120,0,0x203);
        if (cStack_109 < '\0') {
          __ZdlPv(auStack_120[0]);
        }
        if (cStack_f1 < '\0') {
          __ZdlPv(auStack_108[0]);
        }
        if (cStack_d9 < '\0') {
          __ZdlPv(auStack_f0[0]);
        }
        FUN_109228854(ppuVar3 + 1,puVar7);
      }
      _objc_release(param_5);
      auVar11._8_8_ = puVar7;
      auVar11._0_8_ = ppuVar3;
      return auVar11;
    }
    lVar1 = param_2 * 0x28;
    __Znwm(lVar1);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar1;
    return auVar10;
  }
  lVar1 = param_2 * 0x18;
  __Znwm(lVar1);
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = lVar1;
  return auVar9;
}



/* Entry: 109227004; end: 109227017;  */

/* WARNING: Removing unreachable block (ram,0x0001092271e4) */

undefined1  [16]
FUN_109227004(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  undefined1 auStack_b8 [24];
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar1;
    return auVar8;
  }
  func_0x000104c4f740();
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (0x666666666666666 < param_2) {
    func_0x000104c4f740();
    _objc_retain(param_5);
    puStack_108 = PTR_PTR_1127011e0;
    ppuVar3 = &puStack_110;
    puVar7 = PTR_s_init_1125d9248;
    puStack_110 = puVar2;
    _objc_msgSendSuper2(ppuVar3,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar4 = ppuVar3;
      func_0x00010c0d59e0(ppuVar3);
      ppuVar5 = ppuVar3;
      func_0x00010c0d5a00(ppuVar3);
      uVar6 = param_5;
      _objc_retainAutorelease(param_5);
      func_0x00010bdc3520();
      puVar7 = (undefined *)0x8;
      __Znwm(8);
      func_0x000107c31940(auStack_b8,uVar6);
      func_0x000107c31940(auStack_d0,"");
      func_0x000107c31940(auStack_e8,"");
      func_0x000107c31940(auStack_100,"");
      FUN_1095c8c98(puVar7,ppuVar4,ppuVar5,auStack_b8,auStack_d0,auStack_e8,auStack_100,0,0x203);
      if (cStack_e9 < '\0') {
        __ZdlPv(auStack_100[0]);
      }
      if (cStack_d1 < '\0') {
        __ZdlPv(auStack_e8[0]);
      }
      if (cStack_b9 < '\0') {
        __ZdlPv(auStack_d0[0]);
      }
      FUN_109228854(ppuVar3 + 1,puVar7);
    }
    _objc_release(param_5);
    auVar10._8_8_ = puVar7;
    auVar10._0_8_ = ppuVar3;
    return auVar10;
  }
  lVar1 = param_2 * 0x28;
  __Znwm(lVar1);
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = lVar1;
  return auVar9;
}



/* Entry: 109227018; end: 10922705b;  */

/* WARNING: Removing unreachable block (ram,0x0001092271e4) */

undefined1  [16]
FUN_109227018(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 auStack_f0 [2];
  char cStack_d9;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  undefined8 auStack_c0 [2];
  char cStack_a9;
  undefined1 auStack_a8 [24];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar1;
    return auVar8;
  }
  func_0x000104c4f740();
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (0x666666666666666 < param_2) {
    func_0x000104c4f740();
    _objc_retain(param_5);
    puStack_f8 = PTR_PTR_1127011e0;
    ppuVar3 = &puStack_100;
    puVar7 = PTR_s_init_1125d9248;
    puStack_100 = puVar2;
    _objc_msgSendSuper2(ppuVar3,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar4 = ppuVar3;
      func_0x00010c0d59e0(ppuVar3);
      ppuVar5 = ppuVar3;
      func_0x00010c0d5a00(ppuVar3);
      uVar6 = param_5;
      _objc_retainAutorelease(param_5);
      func_0x00010bdc3520();
      puVar7 = (undefined *)0x8;
      __Znwm(8);
      func_0x000107c31940(auStack_a8,uVar6);
      func_0x000107c31940(auStack_c0,"");
      func_0x000107c31940(auStack_d8,"");
      func_0x000107c31940(auStack_f0,"");
      FUN_1095c8c98(puVar7,ppuVar4,ppuVar5,auStack_a8,auStack_c0,auStack_d8,auStack_f0,0,0x203);
      if (cStack_d9 < '\0') {
        __ZdlPv(auStack_f0[0]);
      }
      if (cStack_c1 < '\0') {
        __ZdlPv(auStack_d8[0]);
      }
      if (cStack_a9 < '\0') {
        __ZdlPv(auStack_c0[0]);
      }
      FUN_109228854(ppuVar3 + 1,puVar7);
    }
    _objc_release(param_5);
    auVar10._8_8_ = puVar7;
    auVar10._0_8_ = ppuVar3;
    return auVar10;
  }
  lVar1 = param_2 * 0x28;
  __Znwm(lVar1);
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = lVar1;
  return auVar9;
}



/* Entry: 10922705c; end: 10922706f;  */

/* WARNING: Removing unreachable block (ram,0x0001092271e4) */

undefined1  [16]
FUN_10922705c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined8 auStack_a0 [2];
  char cStack_89;
  undefined1 auStack_88 [24];
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (0x666666666666666 < param_2) {
    func_0x000104c4f740();
    _objc_retain(param_5);
    puStack_d8 = PTR_PTR_1127011e0;
    ppuVar3 = &puStack_e0;
    puVar7 = PTR_s_init_1125d9248;
    puStack_e0 = puVar1;
    _objc_msgSendSuper2(ppuVar3,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar4 = ppuVar3;
      func_0x00010c0d59e0(ppuVar3);
      ppuVar5 = ppuVar3;
      func_0x00010c0d5a00(ppuVar3);
      uVar6 = param_5;
      _objc_retainAutorelease(param_5);
      func_0x00010bdc3520();
      puVar7 = (undefined *)0x8;
      __Znwm(8);
      func_0x000107c31940(auStack_88,uVar6);
      func_0x000107c31940(auStack_a0,"");
      func_0x000107c31940(auStack_b8,"");
      func_0x000107c31940(auStack_d0,"");
      FUN_1095c8c98(puVar7,ppuVar4,ppuVar5,auStack_88,auStack_a0,auStack_b8,auStack_d0,0,0x203);
      if (cStack_b9 < '\0') {
        __ZdlPv(auStack_d0[0]);
      }
      if (cStack_a1 < '\0') {
        __ZdlPv(auStack_b8[0]);
      }
      if (cStack_89 < '\0') {
        __ZdlPv(auStack_a0[0]);
      }
      FUN_109228854(ppuVar3 + 1,puVar7);
    }
    _objc_release(param_5);
    auVar9._8_8_ = puVar7;
    auVar9._0_8_ = ppuVar3;
    return auVar9;
  }
  lVar2 = param_2 * 0x28;
  __Znwm(lVar2);
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = lVar2;
  return auVar8;
}



/* Entry: 109227070; end: 1092270b3;  */

/* WARNING: Removing unreachable block (ram,0x0001092271e4) */

undefined1  [16]
FUN_109227070(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 auStack_c0 [2];
  char cStack_a9;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined1 auStack_78 [24];
  
  if (0x666666666666666 < param_2) {
    func_0x000104c4f740();
    _objc_retain(param_5);
    puStack_c8 = PTR_PTR_1127011e0;
    puVar2 = &uStack_d0;
    puVar6 = PTR_s_init_1125d9248;
    uStack_d0 = param_1;
    _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
      func_0x00010c0d59e0(puVar2);
      puVar4 = puVar2;
      func_0x00010c0d5a00(puVar2);
      uVar5 = param_5;
      _objc_retainAutorelease(param_5);
      func_0x00010bdc3520();
      puVar6 = (undefined *)0x8;
      __Znwm(8);
      func_0x000107c31940(auStack_78,uVar5);
      func_0x000107c31940(auStack_90,"");
      func_0x000107c31940(auStack_a8,"");
      func_0x000107c31940(auStack_c0,"");
      FUN_1095c8c98(puVar6,puVar3,puVar4,auStack_78,auStack_90,auStack_a8,auStack_c0,0,0x203);
      if (cStack_a9 < '\0') {
        __ZdlPv(auStack_c0[0]);
      }
      if (cStack_91 < '\0') {
        __ZdlPv(auStack_a8[0]);
      }
      if (cStack_79 < '\0') {
        __ZdlPv(auStack_90[0]);
      }
      FUN_109228854(puVar2 + 1,puVar6);
    }
    _objc_release(param_5);
    auVar8._8_8_ = puVar6;
    auVar8._0_8_ = puVar2;
    return auVar8;
  }
  lVar1 = param_2 * 0x28;
  __Znwm(lVar1);
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = lVar1;
  return auVar7;
}



/* Entry: 1092270b4; end: 1092272b7; -[LCVCoreSystem initWithExtractionParams:withInputType:withCalibrationFilePath:] */

/* WARNING: Removing unreachable block (ram,0x0001092271e4) */

undefined8 * FUN_1092270b4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_x4;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 auStack_a0 [2];
  char cStack_89;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined1 auStack_58 [24];
  
  _objc_retain(in_x4);
  puStack_a8 = PTR_PTR_1127011e0;
  puVar1 = &uStack_b0;
  uStack_b0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010c0d59e0(puVar1);
    puVar3 = puVar1;
    func_0x00010c0d5a00(puVar1);
    uVar4 = in_x4;
    _objc_retainAutorelease(in_x4);
    func_0x00010bdc3520();
    uVar5 = 8;
    __Znwm(8);
    func_0x000107c31940(auStack_58,uVar4);
    func_0x000107c31940(auStack_70,"");
    func_0x000107c31940(auStack_88,"");
    func_0x000107c31940(auStack_a0,"");
    FUN_1095c8c98(uVar5,puVar2,puVar3,auStack_58,auStack_70,auStack_88,auStack_a0,0,0x203);
    if (cStack_89 < '\0') {
      __ZdlPv(auStack_a0[0]);
    }
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
    if (cStack_59 < '\0') {
      __ZdlPv(auStack_70[0]);
    }
    FUN_109228854(puVar1 + 1,uVar5);
  }
  _objc_release(in_x4);
  return puVar1;
}



/* Entry: 1092272b8; end: 109227587; -[LCVCoreSystem initWithExtractionParams:withInputType:withCalibrationFilePath:withClassifierDataPath:withAdjustmentFilePath:withContentFilePath:] */

undefined8 * FUN_1092272b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 in_x4;
  char *in_x5;
  char *in_x6;
  char *in_x7;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 auStack_c0 [2];
  char cStack_a9;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 auStack_78 [2];
  char cStack_61;
  
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  puStack_c8 = PTR_PTR_1127011e0;
  puVar1 = &uStack_d0;
  uStack_d0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) goto LAB_10922748c;
  puVar2 = puVar1;
  func_0x00010c0d59e0();
  puVar3 = puVar1;
  func_0x00010c0d5a00();
  uVar4 = in_x4;
  _objc_retainAutorelease(in_x4);
  func_0x00010bdc3520();
  if (in_x5 == (char *)0x0) {
    pcVar5 = "";
    if (in_x6 == (char *)0x0) goto LAB_1092273a8;
LAB_109227388:
    pcVar6 = in_x6;
    _objc_retainAutorelease(in_x6);
    func_0x00010bdc3520();
  }
  else {
    pcVar5 = in_x5;
    _objc_retainAutorelease(in_x5);
    func_0x00010bdc3520();
    if (in_x6 != (char *)0x0) goto LAB_109227388;
LAB_1092273a8:
    pcVar6 = "";
  }
  uVar7 = 8;
  __Znwm(8);
  func_0x000107c31940(auStack_78,uVar4);
  func_0x000107c31940(auStack_90,pcVar5);
  func_0x000107c31940(auStack_a8,pcVar6);
  func_0x000107c31940(auStack_c0,"");
  FUN_1095c8c98(uVar7,(ulong)puVar2 & 0xffffffff,(ulong)puVar3 & 0xffffffff,auStack_78,auStack_90,
                auStack_a8,auStack_c0,0,0x203);
  if (cStack_a9 < '\0') {
    __ZdlPv(auStack_c0[0]);
  }
  if (cStack_91 < '\0') {
    __ZdlPv(auStack_a8[0]);
  }
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  FUN_109228854(puVar1 + 1,uVar7);
  if (in_x7 == (char *)0x0) {
    pcVar5 = "";
  }
  else {
    pcVar5 = in_x7;
    _objc_retainAutorelease(in_x7);
    func_0x00010bdc3520();
  }
  func_0x000107c2c4dc(puVar1 + 0xb,pcVar5);
LAB_10922748c:
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(in_x4);
  return puVar1;
}



/* Entry: 109227588; end: 10922764f; -[LCVCoreSystem setImuData:] */

void FUN_109227588(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  lStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  lStack_30 = 0;
  uStack_58 = 0;
  lStack_60 = 0;
  lStack_48 = 0;
  lStack_50 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
  func_0x00010bf50ce0(PTR_PTR_1126ddf60);
  FUN_1095c83b0(**(undefined8 **)(param_1 + 8),&lStack_80);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  if (lStack_68 != 0) {
    lStack_60 = lStack_68;
    __ZdlPv();
  }
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    __ZdlPv();
  }
  _objc_release(param_3);
  return;
}



/* Entry: 109227650; end: 1092276af;  */

long * FUN_109227650(long *param_1)

{
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092276b0; end: 109227bd3; -[LCVCoreSystem setPoseData:withRectifiedLeftFromImuTransformation:] */

void FUN_1092276b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 ***pppuVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 ***pppuVar15;
  undefined8 ***pppuVar16;
  undefined8 *puVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 **ppuStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_c0 = (undefined8 *)0x0;
  puStack_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  func_0x00010bf50e00(PTR_PTR_1126ddf60);
  uVar35 = param_5;
  func_0x00010c11d000(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a1240();
  uVar28 = param_5;
  uVar22 = param_1;
  func_0x00010c11d000(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2be880();
  uVar5 = param_5;
  uVar23 = uVar22;
  func_0x00010c11d000(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2beba0();
  uVar6 = param_5;
  uVar24 = uVar23;
  func_0x00010c11d000(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bef20();
  uVar7 = param_5;
  uVar8 = uVar24;
  func_0x00010c27ada0(param_5);
  fVar18 = (float)uVar8;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2be880();
  uVar8 = param_5;
  fVar19 = fVar18;
  func_0x00010c27ada0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2beba0();
  uVar9 = param_5;
  fVar20 = fVar19;
  func_0x00010c27ada0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bef20();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar28);
  _objc_release(uVar35);
  ppuStack_d8 = (undefined8 ***)0x0;
  ppuStack_d0 = (undefined8 ***)0x0;
  ppuStack_c8 = (undefined8 ***)0x0;
  FUN_10922636c(&ppuStack_d8,((long)puStack_b8 - (long)puStack_c0 >> 3) * -0x3333333333333333);
  puVar3 = puStack_b8;
  if (puStack_c0 != puStack_b8) {
    fVar21 = (float)uVar22;
    fVar30 = (float)uVar23;
    fVar27 = (float)uVar24;
    uVar35 = NEON_ext(CONCAT44(fVar30,fVar21),uVar24,4,1);
    puVar17 = puStack_c0;
    do {
      uStack_100 = puVar17[1];
      uStack_ec = *(undefined8 *)((long)puVar17 + 0x1c);
      uStack_f0 = (undefined4)((ulong)*(undefined8 *)((long)puVar17 + 0x14) >> 0x20);
      uStack_f8 = (undefined4)puVar17[2];
      uStack_f4 = (undefined4)((ulong)puVar17[2] >> 0x20);
      FUN_109227bd4(&fStack_11c,&uStack_100);
      fVar33 = (float)param_1;
      fVar37 = fStack_11c * -fVar21 + fStack_110 * fVar33 + fStack_118 * -fVar30 +
               fStack_114 * -fVar27;
      fVar38 = fVar21 * fStack_110 + fStack_11c * fVar33 + fStack_114 * fVar30 +
               fStack_118 * -fVar27;
      fVar39 = fVar30 * fStack_110 + fStack_118 * fVar33 + fStack_11c * fVar27 +
               fStack_114 * -fVar21;
      fVar34 = fVar27 * fStack_110 + fStack_114 * fVar33 + fStack_118 * fVar21 +
               fStack_11c * -fVar30;
      uVar28 = NEON_ext(CONCAT44(fStack_104,fStack_108),CONCAT44(fStack_108,fStack_10c),4,1);
      fVar29 = (float)((ulong)uVar28 >> 0x20);
      fVar36 = (float)((ulong)uVar35 >> 0x20);
      fVar25 = fVar27 * -fStack_108 + (float)uVar28 * (float)uVar35;
      fVar31 = fVar21 * -(float)uVar28 + fStack_10c * fVar27;
      fVar32 = fVar30 * -fVar29 + fStack_108 * fVar21;
      fVar26 = fVar33 * fVar25 + -(fVar31 * fVar27) + fVar30 * fVar32;
      fVar25 = fVar31 * fVar33 +
               fVar21 * -((float)uVar35 * -fStack_10c + fStack_108 * fVar21) + fVar25 * fVar27;
      fVar29 = fVar32 * fVar33 +
               fVar30 * -(fVar36 * -fStack_108 + fStack_104 * fVar30) +
               (fVar21 * -fStack_104 + fVar29 * fVar36) * fVar21;
      fVar26 = fVar18 + fStack_10c + fVar26 + fVar26;
      uVar28 = CONCAT44(fVar20 + fStack_104 + fVar29 + fVar29,fVar19 + fStack_108 + fVar25 + fVar25)
      ;
      if (ppuStack_d0 < ppuStack_c8) {
        *ppuStack_d0 = (undefined8 **)*puVar17;
        *(float *)(ppuStack_d0 + 1) = fVar38;
        *(float *)((long)ppuStack_d0 + 0xc) = fVar39;
        *(float *)(ppuStack_d0 + 2) = fVar34;
        *(float *)((long)ppuStack_d0 + 0x14) = fVar37;
        *(float *)(ppuStack_d0 + 3) = fVar26;
        *(undefined8 *)((long)ppuStack_d0 + 0x1c) = uVar28;
        pppuVar15 = (undefined8 ***)(ppuStack_d0 + 5);
      }
      else {
        lVar14 = (long)ppuStack_d0 - (long)ppuStack_d8;
        uVar11 = (lVar14 >> 3) * -0x3333333333333333 + 1;
        if (0x666666666666666 < uVar11) {
          FUN_10922705c();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x109227b0c);
          (*pcVar4)();
        }
        lVar12 = (long)ppuStack_c8 - (long)ppuStack_d8 >> 3;
        uVar13 = lVar12 * -0x6666666666666666;
        if (uVar13 < uVar11 || uVar13 - uVar11 == 0) {
          uVar13 = uVar11;
        }
        if (0x333333333333332 < (ulong)(lVar12 * -0x3333333333333333)) {
          uVar13 = 0x666666666666666;
        }
        pppuVar10 = &ppuStack_d8;
        FUN_109227070();
        puVar1 = (undefined8 *)((long)pppuVar10 + lVar14);
        *puVar1 = *puVar17;
        *(float *)(puVar1 + 1) = fVar38;
        *(float *)((long)puVar1 + 0xc) = fVar39;
        *(float *)(puVar1 + 2) = fVar34;
        *(float *)((long)puVar1 + 0x14) = fVar37;
        *(float *)(puVar1 + 3) = fVar26;
        *(undefined8 *)((long)puVar1 + 0x1c) = uVar28;
        pppuVar15 = (undefined8 ***)(puVar1 + 5);
        pppuVar16 = (undefined8 ***)((long)puVar1 - ((long)ppuStack_d0 - (long)ppuStack_d8));
        _memcpy(pppuVar16);
        bVar2 = (undefined8 ***)ppuStack_d8 != (undefined8 ***)0x0;
        ppuStack_d8 = pppuVar16;
        ppuStack_c8 = pppuVar10 + uVar13 * 5;
        if (bVar2) {
          ppuStack_d0 = pppuVar15;
          __ZdlPv();
        }
      }
      puVar17 = puVar17 + 5;
      ppuStack_d0 = pppuVar15;
    } while (puVar17 != puVar3);
  }
  if ((undefined8 ***)(**(long **)(param_2 + 8) + 0xf0) != &ppuStack_d8) {
    func_0x0001095c9fc4();
  }
  if ((undefined8 ***)ppuStack_d8 != (undefined8 ***)0x0) {
    ppuStack_d0 = ppuStack_d8;
    __ZdlPv(ppuStack_d8);
  }
  if (puStack_c0 != (undefined8 *)0x0) {
    puStack_b8 = puStack_c0;
    __ZdlPv();
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 109227bd4; end: 109227c63;  */

void FUN_109227bd4(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar1 = *(float *)((long)param_2 + 0xc);
  uVar3 = *param_2;
  uVar8 = *(undefined8 *)((long)param_2 + 4);
  fVar2 = (float)((ulong)uVar3 >> 0x20);
  uVar10 = NEON_ext(uVar8,uVar3,4,1);
  fVar5 = (float)uVar10;
  fVar12 = -fVar5;
  fVar11 = (float)((ulong)uVar10 >> 0x20);
  fVar6 = (float)uVar8;
  fVar9 = (float)((ulong)uVar8 >> 0x20);
  uVar8 = param_2[2];
  fVar15 = *(float *)(param_2 + 3);
  uVar10 = *(undefined8 *)((long)param_2 + 0x14);
  fVar13 = (float)uVar8;
  fVar14 = (float)((ulong)uVar8 >> 0x20);
  fVar7 = (float)((ulong)uVar10 >> 0x20);
  uVar8 = NEON_ext(uVar10,uVar8,4,1);
  fVar19 = (float)((ulong)uVar8 >> 0x20);
  fVar16 = fVar13 * -fVar6 + (float)uVar10 * (float)uVar3;
  fVar17 = (float)uVar10 * fVar12 + (float)uVar8 * fVar6;
  fVar18 = fVar7 * -fVar11 + fVar19 * fVar9;
  dVar4 = (double)CONCAT44(fVar11 * (fVar19 * -fVar2 + fVar14 * fVar11),
                           fVar5 * ((float)uVar8 * -(float)uVar3 + fVar13 * fVar5)) -
          (double)CONCAT44((fVar14 * -fVar9 + fVar7 * fVar2) * fVar9,fVar16 * fVar6);
  fVar2 = fVar17 * fVar1 + SUB84(dVar4,0);
  fVar5 = fVar18 * fVar1 + (float)((ulong)dVar4 >> 0x20);
  fVar7 = fVar1 * fVar16 + (fVar6 * fVar17 - fVar18 * fVar11);
  uVar3 = NEON_ext(CONCAT44(-fVar11,fVar12),CONCAT44(-fVar9,-fVar6),4,1);
  *param_1 = uVar3;
  *(float *)(param_1 + 1) = fVar12;
  *(float *)((long)param_1 + 0xc) = fVar1;
  param_1[2] = CONCAT44((fVar5 + fVar5) - fVar14,(fVar2 + fVar2) - fVar13);
  *(float *)(param_1 + 3) = (fVar7 + fVar7) - fVar15;
  return;
}



/* Entry: 109227c64; end: 109227c6f; -[LCVCoreSystem nativeInputDeviceFromInputDevice:] */

bool FUN_109227c64(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 109227c70; end: 109227c7f; -[LCVCoreSystem nativeInputTypeFromInputType:] */

uint FUN_109227c70(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  
  uVar1 = (uint)param_3;
  if (3 < param_3) {
    uVar1 = 0;
  }
  return uVar1 & 0xff;
}



/* Entry: 109227c80; end: 109227e2f; -[LCVCoreSystem extractCalibration:error:] */

undefined4 **
FUN_109227c80(char *param_1,int param_2,undefined4 **param_3,undefined8 *param_4,undefined *param_5,
             undefined1 param_6,undefined1 param_7,undefined8 *param_8)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined4 **ppuVar8;
  undefined4 **ppuVar9;
  undefined4 **ppuVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  int *piVar15;
  undefined4 **ppuVar16;
  undefined *unaff_x23;
  undefined4 *puVar17;
  undefined4 *puVar18;
  long lStack_c88;
  long lStack_c80;
  long lStack_c70;
  long lStack_c68;
  undefined8 uStack_c60;
  long lStack_c58;
  long lStack_c50;
  undefined8 uStack_c48;
  undefined4 **ppuStack_c40;
  undefined4 **ppuStack_c38;
  undefined *puStack_c30;
  undefined4 **ppuStack_c28;
  undefined1 **ppuStack_c20;
  code *pcStack_c18;
  long lStack_c10;
  undefined4 **ppuStack_c08;
  undefined1 auStack_c00 [40];
  undefined1 uStack_bd8;
  undefined1 auStack_bd0 [40];
  undefined1 uStack_ba8;
  undefined4 *puStack_ba0;
  undefined4 *puStack_b98;
  undefined1 uStack_b78;
  undefined1 auStack_b70 [4];
  int iStack_b6c;
  undefined *puStack_b68;
  undefined8 uStack_b60;
  undefined4 **ppuStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  long lStack_b38;
  long lStack_b30;
  undefined1 *puStack_b28;
  undefined1 auStack_b20 [952];
  long lStack_768;
  undefined1 *puStack_710;
  code *pcStack_708;
  undefined *apuStack_6f8 [83];
  char acStack_459 [1025];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  FUN_1095c8520(apuStack_6f8,**(undefined8 **)(param_1 + 8));
  ppuVar12 = apuStack_6f8;
  ppuVar10 = param_3;
  func_0x00010bf50d20(PTR_PTR_1126ddf60);
  if (param_4 != (undefined8 *)0x0) {
    pcVar1 = param_1 + 8;
    param_1 = acStack_459;
    param_2 = (int)**(undefined8 **)pcVar1 + 0x180;
    ppuVar12 = (undefined **)0x401;
    _memcpy(acStack_459);
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuVar16 = (undefined4 **)(long)acStack_459[0];
    if (ppuVar16 != (undefined4 **)0x0) {
      param_1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf72040();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = &PTR____CFConstantStringClassReference_110daafd8;
      param_5 = puVar5;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = puVar6;
      _objc_release(puVar5);
      _objc_release(param_1);
      ppuVar10 = ppuVar16;
      unaff_x23 = puVar5;
    }
  }
  FUN_109228534(apuStack_6f8);
  ppuVar7 = (undefined **)param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return (undefined4 **)0x1;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  _objc_release(param_1);
  FUN_109228534(apuStack_6f8);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_708 = FUN_109227e30;
  lStack_768 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = ppuVar12;
  ppuVar16 = ppuVar10;
  puStack_710 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar10);
  _objc_retain(param_5);
  iVar2 = (int)ppuVar7;
  if (param_5 == (undefined *)0x0) {
    ppuVar9 = (undefined4 **)ppuVar7[5];
    ppuVar7[5] = (undefined *)0x0;
    if (ppuVar9 == (undefined4 **)(ppuVar7 + 2)) goto LAB_109227ee4;
LAB_109227ec4:
    if (ppuVar9 != (undefined4 **)0x0) {
      lVar14 = 0x28;
      goto LAB_109227ee8;
    }
  }
  else {
    puVar5 = param_5;
    _objc_retainBlock();
    _auStack_b70 = &PTR_DAT_110ae1b08;
    param_2 = iVar2 + 0x10;
    puStack_b68 = puVar5;
    ppuStack_b58 = (undefined4 **)auStack_b70;
    FUN_1092289e4(auStack_b70);
    ppuVar9 = ppuStack_b58;
    if (ppuStack_b58 != (undefined4 **)auStack_b70) goto LAB_109227ec4;
LAB_109227ee4:
    lVar14 = 0x20;
LAB_109227ee8:
    (**(code **)((long)*ppuVar9 + lVar14))();
  }
  if (ppuVar10 == (undefined4 **)0x0) {
    ppuVar9 = (undefined4 **)ppuVar7[9];
    ppuVar7[9] = (undefined *)0x0;
    if (ppuVar9 == (undefined4 **)(ppuVar7 + 6)) goto LAB_109227f6c;
LAB_109227f4c:
    if (ppuVar9 != (undefined4 **)0x0) {
      lVar14 = 0x28;
      goto LAB_109227f70;
    }
  }
  else {
    ppuVar9 = ppuVar10;
    _objc_retainBlock();
    ppuVar8 = (undefined4 **)0x28;
    __Znwm();
    *ppuVar8 = (undefined4 *)&PTR_FUN_110ae1b98;
    ppuVar8[1] = (undefined4 *)ppuVar12;
    *(undefined1 *)(ppuVar8 + 2) = param_7;
    ppuVar8[3] = (undefined4 *)ppuVar9;
    *(undefined1 *)(ppuVar8 + 4) = param_6;
    *(undefined4 *)((long)ppuVar8 + 0x21) = 0;
    *(undefined4 *)((long)ppuVar8 + 0x24) = 0;
    param_2 = iVar2 + 0x30;
    ppuStack_b58 = ppuVar8;
    FUN_1092290dc(auStack_b70);
    ppuVar9 = ppuStack_b58;
    if (ppuStack_b58 != (undefined4 **)auStack_b70) goto LAB_109227f4c;
LAB_109227f6c:
    lVar14 = 0x20;
LAB_109227f70:
    (**(code **)((long)*ppuVar9 + lVar14))();
  }
  if ((undefined4 *)ppuVar7[9] != (undefined4 *)0x0) {
    param_2 = iVar2 + 0x30;
    FUN_10965d0ec(*(long *)(*(long *)ppuVar7[1] + 0x170) + 0x28);
  }
  if ((undefined4 *)ppuVar7[5] != (undefined4 *)0x0) {
    param_2 = iVar2 + 0x10;
    FUN_10965a6cc(*(long *)(*(long *)ppuVar7[1] + 0x170) + 8);
  }
  puVar17 = (undefined4 *)(long)*(char *)((long)ppuVar7 + 0x6f);
  if ((long)puVar17 < 0) {
    puVar18 = (undefined4 *)ppuVar7[0xc];
    puVar17 = (undefined4 *)0x0;
    if (puVar18 == (undefined4 *)0x0) goto LAB_109228114;
LAB_109227fc8:
    puStack_ba0 = (undefined4 *)0x0;
    puStack_b98 = (undefined4 *)0x0;
    puVar17 = (undefined4 *)(((ulong)puVar18 & 0xfffffffffffffffc) + 8);
    func_0x000107c2ae8c();
    puStack_ba0 = puVar17 + 1;
    *puVar17 = 1;
    *(undefined1 *)((long)puStack_ba0 + (long)puVar18) = 0;
    ppuVar16 = (undefined4 **)ppuVar7[0xb];
    if (-1 < *(char *)((long)ppuVar7 + 0x6f)) {
      ppuVar16 = (undefined4 **)(ppuVar7 + 0xb);
    }
    puStack_b98 = puVar18;
    _memcpy(puStack_ba0,ppuVar16,puVar18);
    FUN_109b7e470(auStack_b70,&puStack_ba0,1);
    puVar17 = puStack_ba0;
    puStack_ba0 = (undefined4 *)0x0;
    puStack_b98 = (undefined4 *)0x0;
    if (puVar17 != (undefined4 *)0x0) {
      piVar15 = puVar17 + -1;
      do {
        iVar2 = *piVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        _free(*(undefined8 *)(puVar17 + -3));
      }
    }
    puStack_ba0 = (undefined4 *)((ulong)puStack_ba0 & 0xffffffffffffff00);
    uStack_b78 = 0;
    auStack_bd0[0] = 0;
    uStack_ba8 = 0;
    auStack_c00[0] = 0;
    uStack_bd8 = 0;
    puVar17 = *(undefined4 **)ppuVar7[1];
    puVar11 = auStack_b70;
    ppuVar16 = &puStack_ba0;
    ppuVar13 = (undefined **)0x1;
    FUN_1095c8454(0,puVar17,puVar11,1,ppuVar16,auStack_bd0,auStack_c00,0);
    param_2 = (int)puVar11;
    if (lStack_b38 != 0) {
      piVar15 = (int *)(lStack_b38 + 0x14);
      do {
        iVar2 = *piVar15;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar4) {
          *piVar15 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(auStack_b70);
      }
    }
    lStack_b38 = 0;
    ppuStack_b58 = (undefined4 **)0x0;
    uStack_b60 = 0;
    uStack_b48 = 0;
    uStack_b50 = 0;
    if (0 < iStack_b6c) {
      lVar14 = 0;
      do {
        *(undefined4 *)(lStack_b30 + lVar14 * 4) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 < iStack_b6c);
    }
    if (puStack_b28 != auStack_b20 && puStack_b28 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_b28 + -8));
    }
    if (((ulong)puVar17 & 1) != 0) goto LAB_109228200;
  }
  else {
    puVar18 = puVar17;
    if (*(char *)((long)ppuVar7 + 0x6f) != '\0') goto LAB_109227fc8;
LAB_109228114:
    _NSLog(&PTR____CFConstantStringClassReference_110f2d4b8);
  }
  if ((long *)ppuVar7[1] == (long *)0x0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110f2d4d8;
    lVar14 = 0xfffffffa;
    if (param_8 == (undefined8 *)0x0) goto LAB_1092281d8;
LAB_109228164:
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar17 = (undefined4 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = (undefined4 **)(long)(int)lVar14;
    ppuVar13 = &PTR____CFConstantStringClassReference_110daafd8;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_8 = puVar5;
    _objc_release(puVar17);
  }
  else {
    lVar14 = *(long *)ppuVar7[1] + 0x180;
    _memcpy(auStack_b70,lVar14,0x401);
    param_2 = (int)lVar14;
    lVar14 = (long)auStack_b70[0];
    ppuVar13 = (undefined **)(auStack_b70 + 1);
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    if (param_8 != (undefined8 *)0x0) goto LAB_109228164;
LAB_1092281d8:
    _objc_retainAutorelease(ppuVar7);
    ppuVar9 = (undefined4 **)ppuVar7;
    func_0x00010bdc3520();
    lStack_c10 = lVar14;
    ppuStack_c08 = ppuVar9;
    _NSLog(&PTR____CFConstantStringClassReference_110f2d4f8);
  }
  _objc_release(ppuVar7);
LAB_109228200:
  _objc_release(param_5);
  ppuVar9 = ppuVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_768) {
    return ppuVar9;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    func_0x000104bd46a0();
    _objc_release(puVar17);
    _objc_release(ppuVar7);
    _objc_release(param_5);
    _objc_release(ppuVar10);
  }
  __Unwind_Resume(ppuVar9);
  pcStack_c18 = FUN_10922830c;
  ppuStack_c40 = (undefined4 **)ppuVar7;
  ppuStack_c38 = ppuVar9;
  puStack_c30 = param_5;
  ppuStack_c28 = ppuVar10;
  ppuStack_c20 = &puStack_710;
  _objc_retain(ppuVar13);
  _objc_retain(ppuVar16);
  lStack_c58 = 0;
  lStack_c50 = 0;
  uStack_c48 = 0;
  lStack_c70 = 0;
  lStack_c68 = 0;
  uStack_c60 = 0;
  func_0x00010bf50e00(PTR_PTR_1126ddf60);
  func_0x00010bf50e00(PTR_PTR_1126ddf60);
  FUN_1096717b0(&lStack_c88,&lStack_c58,&lStack_c70);
  ppuVar10 = (undefined4 **)PTR_PTR_1126ddf68;
  _objc_alloc_init(PTR_PTR_1126ddf68);
  func_0x00010bf50d80(PTR_PTR_1126ddf60);
  if (lStack_c88 != 0) {
    lStack_c80 = lStack_c88;
    __ZdlPv();
  }
  if (lStack_c70 != 0) {
    lStack_c68 = lStack_c70;
    __ZdlPv();
  }
  if (lStack_c58 != 0) {
    lStack_c50 = lStack_c58;
    __ZdlPv();
  }
  _objc_release(ppuVar16);
  _objc_release(ppuVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
  return ppuVar10;
}



/* Entry: 109227e30; end: 10922830b; -[LCVCoreSystem extractDepthForPrimaryCamera:withFrameOutputCallback:withProgressCallback:prepareForStorage:extractBothSides:error:] */

void FUN_109227e30(undefined **param_1,int param_2,undefined **param_3,undefined4 **param_4,
                  long param_5,undefined1 param_6,undefined1 param_7,undefined8 *param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 **ppuVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined4 **ppuVar9;
  long lVar10;
  int *piVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lStack_588;
  long lStack_580;
  long lStack_570;
  long lStack_568;
  undefined8 uStack_560;
  long lStack_558;
  long lStack_550;
  undefined8 uStack_548;
  undefined **ppuStack_540;
  undefined4 **ppuStack_538;
  long lStack_530;
  undefined4 **ppuStack_528;
  undefined1 *puStack_520;
  code *pcStack_518;
  long lStack_510;
  undefined **ppuStack_508;
  undefined1 auStack_500 [40];
  undefined1 uStack_4d8;
  undefined1 auStack_4d0 [40];
  undefined1 uStack_4a8;
  undefined4 *puStack_4a0;
  undefined *puStack_498;
  undefined1 uStack_478;
  undefined1 auStack_470 [4];
  int iStack_46c;
  long lStack_468;
  undefined8 uStack_460;
  undefined **ppuStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_438;
  long lStack_430;
  undefined1 *puStack_428;
  undefined1 auStack_420 [952];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_3;
  ppuVar9 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  iVar1 = (int)param_1;
  if (param_5 == 0) {
    ppuVar5 = (undefined **)param_1[5];
    param_1[5] = (undefined *)0x0;
    if (ppuVar5 == param_1 + 2) goto LAB_109227ee4;
LAB_109227ec4:
    if (ppuVar5 != (undefined **)0x0) {
      lVar10 = 0x28;
      goto LAB_109227ee8;
    }
  }
  else {
    lVar10 = param_5;
    _objc_retainBlock();
    _auStack_470 = &PTR_DAT_110ae1b08;
    param_2 = iVar1 + 0x10;
    lStack_468 = lVar10;
    ppuStack_458 = (undefined **)auStack_470;
    FUN_1092289e4(auStack_470);
    ppuVar5 = ppuStack_458;
    if (ppuStack_458 != (undefined **)auStack_470) goto LAB_109227ec4;
LAB_109227ee4:
    lVar10 = 0x20;
LAB_109227ee8:
    (**(code **)(*ppuVar5 + lVar10))();
  }
  if (param_4 == (undefined4 **)0x0) {
    ppuVar5 = (undefined **)param_1[9];
    param_1[9] = (undefined *)0x0;
    if (ppuVar5 == param_1 + 6) goto LAB_109227f6c;
LAB_109227f4c:
    if (ppuVar5 != (undefined **)0x0) {
      lVar10 = 0x28;
      goto LAB_109227f70;
    }
  }
  else {
    ppuVar4 = param_4;
    _objc_retainBlock();
    ppuVar5 = (undefined **)0x28;
    __Znwm();
    *ppuVar5 = (undefined *)&PTR_FUN_110ae1b98;
    ppuVar5[1] = (undefined *)param_3;
    *(undefined1 *)(ppuVar5 + 2) = param_7;
    ppuVar5[3] = (undefined *)ppuVar4;
    *(undefined1 *)(ppuVar5 + 4) = param_6;
    *(undefined4 *)((long)ppuVar5 + 0x21) = 0;
    *(undefined4 *)((long)ppuVar5 + 0x24) = 0;
    param_2 = iVar1 + 0x30;
    ppuStack_458 = ppuVar5;
    FUN_1092290dc(auStack_470);
    ppuVar5 = ppuStack_458;
    if (ppuStack_458 != (undefined **)auStack_470) goto LAB_109227f4c;
LAB_109227f6c:
    lVar10 = 0x20;
LAB_109227f70:
    (**(code **)(*ppuVar5 + lVar10))();
  }
  if (param_1[9] != (undefined *)0x0) {
    param_2 = iVar1 + 0x30;
    FUN_10965d0ec(*(long *)(*(long *)param_1[1] + 0x170) + 0x28);
  }
  if (param_1[5] != (undefined *)0x0) {
    param_2 = iVar1 + 0x10;
    FUN_10965a6cc(*(long *)(*(long *)param_1[1] + 0x170) + 8);
  }
  puVar12 = (undefined *)(long)*(char *)((long)param_1 + 0x6f);
  if ((long)puVar12 < 0) {
    puVar13 = param_1[0xc];
    puVar12 = (undefined *)0x0;
    if (puVar13 == (undefined *)0x0) goto LAB_109228114;
LAB_109227fc8:
    puStack_4a0 = (undefined4 *)0x0;
    puStack_498 = (undefined *)0x0;
    puVar6 = (undefined4 *)(((ulong)puVar13 & 0xfffffffffffffffc) + 8);
    func_0x000107c2ae8c();
    puStack_4a0 = puVar6 + 1;
    *puVar6 = 1;
    *(undefined1 *)((long)puStack_4a0 + (long)puVar13) = 0;
    ppuVar8 = (undefined **)param_1[0xb];
    if (-1 < *(char *)((long)param_1 + 0x6f)) {
      ppuVar8 = param_1 + 0xb;
    }
    puStack_498 = puVar13;
    _memcpy(puStack_4a0,ppuVar8,puVar13);
    FUN_109b7e470(auStack_470,&puStack_4a0,1);
    puVar6 = puStack_4a0;
    puStack_4a0 = (undefined4 *)0x0;
    puStack_498 = (undefined *)0x0;
    if (puVar6 != (undefined4 *)0x0) {
      piVar11 = puVar6 + -1;
      do {
        iVar1 = *piVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        _free(*(undefined8 *)(puVar6 + -3));
      }
    }
    puStack_4a0 = (undefined4 *)((ulong)puStack_4a0 & 0xffffffffffffff00);
    uStack_478 = 0;
    auStack_4d0[0] = 0;
    uStack_4a8 = 0;
    auStack_500[0] = 0;
    uStack_4d8 = 0;
    puVar12 = *(undefined **)param_1[1];
    puVar7 = auStack_470;
    ppuVar9 = &puStack_4a0;
    ppuVar8 = (undefined **)0x1;
    FUN_1095c8454(0,puVar12,puVar7,1,ppuVar9,auStack_4d0,auStack_500,0);
    param_2 = (int)puVar7;
    if (lStack_438 != 0) {
      piVar11 = (int *)(lStack_438 + 0x14);
      do {
        iVar1 = *piVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        func_0x000109a848d4(auStack_470);
      }
    }
    lStack_438 = 0;
    ppuStack_458 = (undefined **)0x0;
    uStack_460 = 0;
    uStack_448 = 0;
    uStack_450 = 0;
    if (0 < iStack_46c) {
      lVar10 = 0;
      do {
        *(undefined4 *)(lStack_430 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < iStack_46c);
    }
    if (puStack_428 != auStack_420 && puStack_428 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_428 + -8));
    }
    if (((ulong)puVar12 & 1) != 0) goto LAB_109228200;
  }
  else {
    puVar13 = puVar12;
    if (*(char *)((long)param_1 + 0x6f) != '\0') goto LAB_109227fc8;
LAB_109228114:
    _NSLog(&PTR____CFConstantStringClassReference_110f2d4b8);
  }
  if ((long *)param_1[1] == (long *)0x0) {
    param_1 = &PTR____CFConstantStringClassReference_110f2d4d8;
    lVar10 = 0xfffffffa;
    if (param_8 == (undefined8 *)0x0) goto LAB_1092281d8;
LAB_109228164:
    puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = (undefined4 **)(long)(int)lVar10;
    ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_8 = puVar13;
    _objc_release(puVar12);
  }
  else {
    lVar10 = *(long *)param_1[1] + 0x180;
    _memcpy(auStack_470,lVar10,0x401);
    param_2 = (int)lVar10;
    lVar10 = (long)auStack_470[0];
    ppuVar8 = (undefined **)(auStack_470 + 1);
    param_1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    if (param_8 != (undefined8 *)0x0) goto LAB_109228164;
LAB_1092281d8:
    _objc_retainAutorelease(param_1);
    ppuVar5 = param_1;
    func_0x00010bdc3520();
    lStack_510 = lVar10;
    ppuStack_508 = ppuVar5;
    _NSLog(&PTR____CFConstantStringClassReference_110f2d4f8);
  }
  _objc_release(param_1);
LAB_109228200:
  _objc_release(param_5);
  ppuVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    func_0x000104bd46a0();
    _objc_release(puVar12);
    _objc_release(param_1);
    _objc_release(param_5);
    _objc_release(param_4);
  }
  __Unwind_Resume(ppuVar4);
  pcStack_518 = FUN_10922830c;
  ppuStack_540 = param_1;
  ppuStack_538 = ppuVar4;
  lStack_530 = param_5;
  ppuStack_528 = param_4;
  puStack_520 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar9);
  lStack_558 = 0;
  lStack_550 = 0;
  uStack_548 = 0;
  lStack_570 = 0;
  lStack_568 = 0;
  uStack_560 = 0;
  func_0x00010bf50e00(PTR_PTR_1126ddf60);
  func_0x00010bf50e00(PTR_PTR_1126ddf60);
  FUN_1096717b0(&lStack_588,&lStack_558,&lStack_570);
  puVar12 = PTR_PTR_1126ddf68;
  _objc_alloc_init(PTR_PTR_1126ddf68);
  func_0x00010bf50d80(PTR_PTR_1126ddf60);
  if (lStack_588 != 0) {
    lStack_580 = lStack_588;
    __ZdlPv();
  }
  if (lStack_570 != 0) {
    lStack_568 = lStack_570;
    __ZdlPv();
  }
  if (lStack_558 != 0) {
    lStack_550 = lStack_558;
    __ZdlPv();
  }
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10922830c; end: 10922845f; +[LCVCoreSystem concatPoses:toPoseData:] */

void FUN_10922830c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lStack_78;
  long lStack_70;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_60 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  func_0x00010bf50e00(PTR_PTR_1126ddf60);
  func_0x00010bf50e00(PTR_PTR_1126ddf60);
  FUN_1096717b0(&lStack_78,&lStack_48,&lStack_60);
  puVar1 = PTR_PTR_1126ddf68;
  _objc_alloc_init(PTR_PTR_1126ddf68);
  func_0x00010bf50d80(PTR_PTR_1126ddf60);
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    __ZdlPv();
  }
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109228460; end: 109228517; -[LCVCoreSystem .cxx_destruct] */

void FUN_109228460(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x58));
  }
  plVar4 = *(long **)(param_1 + 0x50);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = *(long **)(param_1 + 0x48);
  if (plVar4 == (long *)(param_1 + 0x30)) {
    lVar5 = 0x20;
LAB_1092284cc:
    (**(code **)(*plVar4 + lVar5))();
  }
  else if (plVar4 != (long *)0x0) {
    lVar5 = 0x28;
    goto LAB_1092284cc;
  }
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)(param_1 + 0x10)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_109228504;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
LAB_109228504:
  lVar5 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = 0;
  if (lVar5 != 0) {
    FUN_1095ca220(lVar5,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar5);
    return;
  }
  return;
}



/* Entry: 109228518; end: 109228533; -[LCVCoreSystem .cxx_construct] */

void FUN_109228518(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



/* Entry: 109228534; end: 109228853;  */

long FUN_109228534(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x270) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x270) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x238);
    }
  }
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  if (0 < *(int *)(param_1 + 0x23c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x278);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x23c));
  }
  lVar5 = *(long *)(param_1 + 0x280);
  if (lVar5 != param_1 + 0x288 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x210) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x210) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x1d8);
    }
  }
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if (0 < *(int *)(param_1 + 0x1dc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x218);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x1dc));
  }
  lVar5 = *(long *)(param_1 + 0x220);
  if (lVar5 != param_1 + 0x228 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x1b0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x1b0) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x178);
    }
  }
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  if (0 < *(int *)(param_1 + 0x17c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x1b8);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x17c));
  }
  lVar5 = *(long *)(param_1 + 0x1c0);
  if (lVar5 != param_1 + 0x1c8 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x150) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x150) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x118);
    }
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (0 < *(int *)(param_1 + 0x11c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x158);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x11c));
  }
  lVar5 = *(long *)(param_1 + 0x160);
  if (lVar5 != param_1 + 0x168 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xf0) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xb8);
    }
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (0 < *(int *)(param_1 + 0xbc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xf8);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xbc));
  }
  lVar5 = *(long *)(param_1 + 0x100);
  if (lVar5 != param_1 + 0x108 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x90) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x58);
    }
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (0 < *(int *)(param_1 + 0x5c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x98);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x5c));
  }
  lVar5 = *(long *)(param_1 + 0xa0);
  if (lVar5 != param_1 + 0xa8 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 109228854; end: 10922895b;  */

void FUN_109228854(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1095ca220(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10922895c; end: 109228963;  */

void FUN_10922895c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 109228964; end: 10922898b;  */

void FUN_109228964(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10922898c; end: 10922899b;  */

void FUN_10922898c(long param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000109228998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*param_2);
  return;
}



/* Entry: 10922899c; end: 1092289d7;  */

long FUN_10922899c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae1b78);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1092289d8; end: 1092289e3;  */

undefined ** FUN_1092289d8(void)

{
  return &PTR_DAT_110ae1b78;
}



/* Entry: 1092289e4; end: 109228b4f;  */

long * FUN_1092289e4(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long alStack_40 [3];
  long lStack_28;
  
  plVar2 = alStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[3];
    plVar5 = (long *)param_2[3];
    if (plVar1 == param_1) {
      if (plVar5 == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        plVar2 = (long *)param_1[3];
        (**(code **)(*plVar2 + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
      param_1 = plVar2;
    }
    else if (plVar5 == param_2) {
      plVar4 = param_1;
      (**(code **)(*plVar5 + 0x18))(plVar5);
      plVar2 = (long *)param_2[3];
      (**(code **)(*plVar2 + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
      param_1 = plVar2;
    }
    else {
      param_1[3] = (long)plVar5;
      param_2[3] = (long)plVar1;
      param_1 = plVar1;
    }
  }
  iVar3 = (int)plVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  _objc_release(param_1[3]);
  return param_1;
}



/* Entry: 109228b50; end: 109228c57;  */

long FUN_109228b50(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  return param_1;
}



/* Entry: 109228c58; end: 109228c5f;  */

void FUN_109228c58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 109228c60; end: 109228c87;  */

void FUN_109228c60(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109228c88; end: 109228d73;  */

void FUN_109228c88(long param_1,long param_2)

{
  undefined *puVar1;
  undefined1 auStack_400 [960];
  
  if (((*(byte *)(param_1 + 0x10) & 1) == 0) &&
     (puVar1 = PTR_PTR_1126ddf60,
     func_0x00010c112d60(PTR_PTR_1126ddf60,param_2,*(undefined1 *)(param_2 + 0x10)),
     puVar1 != *(undefined **)(param_1 + 8))) {
    return;
  }
  puVar1 = PTR_PTR_1126d3638;
  _objc_alloc_init(PTR_PTR_1126d3638);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1095cab2c(auStack_400,param_2,0xffffffff);
  }
  else {
    FUN_1095ca248(auStack_400,param_2);
  }
  func_0x00010bf50d60(PTR_PTR_1126ddf60);
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))(*(long *)(param_1 + 0x18),puVar1);
  FUN_109228dbc(auStack_400);
  _objc_release(puVar1);
  return;
}



/* Entry: 109228d74; end: 109228daf;  */

long FUN_109228d74(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae1c08);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109228db0; end: 109228dbb;  */

undefined ** FUN_109228db0(void)

{
  return &PTR_DAT_110ae1c08;
}



/* Entry: 109228dbc; end: 1092290db;  */

long FUN_109228dbc(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x360) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x360) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x328);
    }
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  if (0 < *(int *)(param_1 + 0x32c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x368);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x32c));
  }
  lVar5 = *(long *)(param_1 + 0x370);
  if (lVar5 != param_1 + 0x378 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x300) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x300) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x2c8);
    }
  }
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  if (0 < *(int *)(param_1 + 0x2cc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x308);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x2cc));
  }
  lVar5 = *(long *)(param_1 + 0x310);
  if (lVar5 != param_1 + 0x318 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x2a0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x2a0) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x268);
    }
  }
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  if (0 < *(int *)(param_1 + 0x26c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x2a8);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x26c));
  }
  lVar5 = *(long *)(param_1 + 0x2b0);
  if (lVar5 != param_1 + 0x2b8 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x240) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x240) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x208);
    }
  }
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  if (0 < *(int *)(param_1 + 0x20c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x248);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x20c));
  }
  lVar5 = *(long *)(param_1 + 0x250);
  if (lVar5 != param_1 + 600 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x1e0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x1e0) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x1a8);
    }
  }
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  if (0 < *(int *)(param_1 + 0x1ac)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x1e8);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x1ac));
  }
  lVar5 = *(long *)(param_1 + 0x1f0);
  if (lVar5 != param_1 + 0x1f8 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x180) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x180) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x148);
    }
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  if (0 < *(int *)(param_1 + 0x14c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x188);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x14c));
  }
  lVar5 = *(long *)(param_1 + 400);
  if (lVar5 != param_1 + 0x198 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 1092290dc; end: 109229247;  */

ulong FUN_1092290dc(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long alStack_40 [3];
  long lStack_28;
  
  uVar7 = (undefined4)((ulong)param_1 >> 0x20);
  uVar6 = (undefined4)param_1;
  plVar2 = alStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_3;
  if (param_3 != param_2) {
    plVar1 = (long *)param_2[3];
    plVar5 = (long *)param_3[3];
    if (plVar1 == param_2) {
      if (plVar5 == param_3) {
        (**(code **)(*plVar1 + 0x18))(plVar1,alStack_40);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        (**(code **)(*(long *)param_3[3] + 0x18))((long *)param_3[3],param_2);
        (**(code **)(*(long *)param_3[3] + 0x20))();
        param_3[3] = 0;
        param_2[3] = (long)param_2;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        plVar2 = (long *)param_2[3];
        (**(code **)(*plVar2 + 0x20))();
        param_2[3] = param_3[3];
      }
      param_3[3] = (long)param_3;
      param_2 = plVar2;
    }
    else if (plVar5 == param_3) {
      plVar4 = param_2;
      (**(code **)(*plVar5 + 0x18))(plVar5);
      plVar2 = (long *)param_3[3];
      (**(code **)(*plVar2 + 0x20))();
      param_3[3] = param_2[3];
      param_2[3] = (long)param_2;
      param_2 = plVar2;
    }
    else {
      param_2[3] = (long)plVar5;
      param_3[3] = (long)plVar1;
      param_2 = plVar1;
    }
  }
  iVar3 = (int)plVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return CONCAT44(uVar7,uVar6);
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return (ulong)*(uint *)(param_2 + 1);
}



/* Entry: 109229248; end: 10922924f; -[LCVEulerAngles roll] */

undefined4 FUN_109229248(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 109229250; end: 109229257; -[LCVEulerAngles setRoll:] */

void FUN_109229250(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 109229258; end: 10922925f; -[LCVEulerAngles pitch] */

undefined4 FUN_109229258(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 109229260; end: 109229267; -[LCVEulerAngles setPitch:] */

void FUN_109229260(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xc) = param_1;
  return;
}



/* Entry: 109229268; end: 10922926f; -[LCVEulerAngles yaw] */

undefined4 FUN_109229268(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 109229270; end: 109229277; -[LCVEulerAngles setYaw:] */

void FUN_109229270(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 109229278; end: 10922927f; -[LCVAccelerationData x] */

undefined4 FUN_109229278(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 109229280; end: 109229287; -[LCVAccelerationData setX:] */

void FUN_109229280(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 109229288; end: 10922928f; -[LCVAccelerationData y] */

undefined4 FUN_109229288(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 109229290; end: 109229297; -[LCVAccelerationData setY:] */

void FUN_109229290(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xc) = param_1;
  return;
}



/* Entry: 109229298; end: 10922929f; -[LCVAccelerationData z] */

undefined4 FUN_109229298(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 1092292a0; end: 1092292a7; -[LCVAccelerationData setZ:] */

void FUN_1092292a0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 1092292a8; end: 1092292af; -[LCVTranslationData x] */

undefined4 FUN_1092292a8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


