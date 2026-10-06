/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10612011c; end: 106120123; -[SCLensExternalMediaStreamServiceImpl mediaSource] */

undefined8 FUN_10612011c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106120124; end: 1061201f7; -[SCLensExternalMediaStreamServiceImpl .cxx_destruct] */

void FUN_106120124(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1061201f8; end: 1061203bb; -[SCLensExternalMediaStreamServicesEntryPoint _createLensExternalStreamService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061201f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  long lVar12;
  
  puVar1 = PTR_PTR_1126c82a0;
  _objc_alloc(PTR_PTR_1126c82a0);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11273fbe0;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar8;
  func_0x00010c0962c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c091b60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf9e660();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
    lVar9 = 0;
    lVar10 = 0;
    lVar12 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11273fbd0;
    _objc_loadWeakRetained(lVar9);
    lVar10 = param_1 + _DAT_11273fbd4;
    _objc_loadWeakRetained(lVar10);
    lVar11 = param_1 + _DAT_11273fbd8;
    _objc_loadWeakRetained(lVar11);
    lVar12 = param_1 + _DAT_11273fbdc;
    _objc_loadWeakRetained(lVar12);
  }
  lVar5 = lVar12;
  func_0x00010c0c64e0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_11273fbe4;
    _objc_loadWeakRetained(lVar6);
  }
  lVar7 = lVar6;
  func_0x00010bf45e20(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011460(puVar1,param_2,lVar4,lVar9,lVar10,lVar11,lVar5,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061203bc; end: 10612044f; -[SCLensExternalMediaStreamServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061203bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273fbe8,0);
  _objc_destroyWeak(param_1 + _DAT_11273fbe4);
  _objc_destroyWeak(param_1 + _DAT_11273fbe0);
  _objc_destroyWeak(param_1 + _DAT_11273fbdc);
  _objc_destroyWeak(param_1 + _DAT_11273fbd8);
  _objc_destroyWeak(param_1 + _DAT_11273fbd4);
  _objc_destroyWeak(param_1 + _DAT_11273fbd0);
  _objc_destroyWeak(param_1 + _DAT_11273fbcc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273fbc8,0);
  return;
}



/* Entry: 106120450; end: 106120457; -[SCLensExternalMediaStreamVideoImportStrategy retryAVAssetImportMaxAttempts] */

undefined8 FUN_106120450(void)

{
  return 3;
}



/* Entry: 106120458; end: 106120487; -[SCLensExternalMediaStreamVideoImportStrategy initialExportSessionPreset] */

void FUN_106120458(void)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)PTR__AVAssetExportPreset1920x1080_110347e98;
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106120488; end: 1061204d7; -[SCLensExternalMediaStreamVideoImportStrategy exportSessionPresetForFailedExportWithPreset:failureCount:] */

void FUN_106120488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0720c0(param_3,param_2,*(undefined8 *)PTR__AVAssetExportPresetPassthrough_110347ec8);
  if ((int)param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)PTR__AVAssetExportPresetHighestQuality_110347eb8;
    _objc_retain(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1061204d8; end: 1061204df; -[SCLensExternalMediaStreamVideoImportStrategy outputFilePath] */

undefined8 FUN_1061204d8(void)

{
  return 0;
}



/* Entry: 1061204e0; end: 1061204e7; -[SCLensExternalMediaStreamVideoImportStrategy rotateLandscapeVideoToPortraitOrientationRight] */

undefined8 FUN_1061204e0(void)

{
  return 1;
}



/* Entry: 1061204e8; end: 1061204ef; -[SCLensExternalMediaStreamVideoImportStrategy allowDownloadFromiCloud] */

undefined8 FUN_1061204e8(void)

{
  return 1;
}



/* Entry: 1061204f0; end: 1061204f7; -[SCLensExternalMediaStreamVideoImportStrategy requestUnmodifiedOriginal] */

undefined8 FUN_1061204f0(void)

{
  return 1;
}



/* Entry: 1061204f8; end: 1061204ff; -[SCLensExternalMediaStreamServices externalMediaStreamService] */

undefined8 FUN_1061204f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106120500; end: 10612050b; -[SCLensExternalMediaStreamServices .cxx_destruct] */

void FUN_106120500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10612050c; end: 10612057f; +[SCLensExternalMediaSource assetWithAsset:isVideo:] */

void FUN_10612050c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b62c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
  puVar2[0x28] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106120580; end: 1061205f3; +[SCLensExternalMediaSource dataWithData:isVideo:] */

void FUN_106120580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b62c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_3;
  _objc_release(uVar3);
  puVar2[0x60] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061205f4; end: 10612065f; +[SCLensExternalMediaSource fileURLWithFileURL:isVideo:] */

void FUN_1061205f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b62c0;
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



/* Entry: 106120660; end: 1061206cb; +[SCLensExternalMediaSource imageWithImage:] */

void FUN_106120660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b62c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061206cc; end: 106120737; +[SCLensExternalMediaSource snapDocWithSnapDoc:] */

void FUN_1061206cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b62c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106120738; end: 1061207ab; +[SCLensExternalMediaSource snapWithSnapId:isVideo:] */

void FUN_106120738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b62c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  _objc_release(uVar3);
  puVar2[0x50] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1061207ac; end: 106120817; +[SCLensExternalMediaSource videoWithAsset:] */

void FUN_1061207ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b62c0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106120818; end: 10612083b; -[SCLensExternalMediaSource copyWithZone:] */

undefined8 FUN_106120818(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10612083c; end: 1061208ff; -[SCLensExternalMediaSource hash] */

void FUN_10612083c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_78 = (ulong)*(byte *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uStack_68 = (ulong)*(byte *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0x60);
  puVar3 = &uStack_88;
  uStack_38 = uVar2;
  func_0x000100505190(puVar3,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_b8 = PTR_PTR_1126efca0;
  puStack_c0 = puVar3;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106120900; end: 106120943; -[SCLensExternalMediaSource internalInit] */

void FUN_106120900(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126efca0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106120944; end: 106120ab3; -[SCLensExternalMediaSource isEqual:] */

long FUN_106120944(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106120a8c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106120a98;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))) &&
         (*(char *)(param_1 + 0x28) == *(char *)(param_3 + 0x28))) &&
        ((*(char *)(param_1 + 0x50) == *(char *)(param_3 + 0x50) &&
         (*(char *)(param_1 + 0x60) == *(char *)(param_3 + 0x60))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x48);
                if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x58);
                  if (lVar3 != *(long *)(param_3 + 0x58)) {
                    func_0x00010c071ae0();
                    goto LAB_106120a98;
                  }
                  goto LAB_106120a8c;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106120a98:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106120ab4; end: 106120c57; -[SCLensExternalMediaSource matchFileURL:asset:snapDoc:image:video:snap:data:] */

void FUN_106120ab4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 3) {
    if (lVar3 == 0) {
      if (param_3 == 0) goto LAB_106120c0c;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined1 *)(param_1 + 0x18);
      pcVar4 = *(code **)(param_3 + 0x10);
      lVar3 = param_3;
    }
    else {
      if (lVar3 != 1) {
        if ((lVar3 != 2) || (param_5 == 0)) goto LAB_106120c0c;
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        pcVar4 = *(code **)(param_5 + 0x10);
        lVar3 = param_5;
        goto LAB_106120bd4;
      }
      if (param_4 == 0) goto LAB_106120c0c;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined1 *)(param_1 + 0x28);
      pcVar4 = *(code **)(param_4 + 0x10);
      lVar3 = param_4;
    }
  }
  else {
    if (lVar3 < 5) {
      if (lVar3 == 3) {
        if (param_6 == 0) goto LAB_106120c0c;
        uVar1 = *(undefined8 *)(param_1 + 0x38);
        pcVar4 = *(code **)(param_6 + 0x10);
        lVar3 = param_6;
      }
      else {
        if ((lVar3 != 4) || (param_7 == 0)) goto LAB_106120c0c;
        uVar1 = *(undefined8 *)(param_1 + 0x40);
        pcVar4 = *(code **)(param_7 + 0x10);
        lVar3 = param_7;
      }
LAB_106120bd4:
      (*pcVar4)(lVar3,uVar1);
      goto LAB_106120c0c;
    }
    if (lVar3 == 5) {
      if (param_8 == 0) goto LAB_106120c0c;
      uVar1 = *(undefined8 *)(param_1 + 0x48);
      uVar2 = *(undefined1 *)(param_1 + 0x50);
      pcVar4 = *(code **)(param_8 + 0x10);
      lVar3 = param_8;
    }
    else {
      if ((lVar3 != 6) || (param_9 == 0)) goto LAB_106120c0c;
      uVar1 = *(undefined8 *)(param_1 + 0x58);
      uVar2 = *(undefined1 *)(param_1 + 0x60);
      pcVar4 = *(code **)(param_9 + 0x10);
      lVar3 = param_9;
    }
  }
  (*pcVar4)(lVar3,uVar1,uVar2);
LAB_106120c0c:
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



/* Entry: 106120c58; end: 106120cc3; -[SCLensExternalMediaSource .cxx_destruct] */

void FUN_106120c58(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106120cc4; end: 106121007;  */

void FUN_106120cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  
  _CVPixelBufferLockBaseAddress(param_1,0);
  _CVPixelBufferLockBaseAddress(param_2,0);
  uVar1 = param_1;
  _CVPixelBufferGetBaseAddressOfPlane(param_1,0);
  uVar2 = param_1;
  uStack_50 = uVar1;
  _CVPixelBufferGetHeightOfPlane(param_1,0);
  uVar1 = param_1;
  uStack_48 = uVar2;
  _CVPixelBufferGetWidthOfPlane(param_1,0);
  uVar2 = param_1;
  uStack_40 = uVar1;
  _CVPixelBufferGetBytesPerRowOfPlane(param_1,0);
  uVar1 = param_2;
  uStack_38 = uVar2;
  _CVPixelBufferGetBaseAddressOfPlane(param_2,0);
  uVar2 = param_2;
  uStack_70 = uVar1;
  _CVPixelBufferGetHeightOfPlane(param_2,0);
  uVar1 = param_2;
  uStack_68 = uVar2;
  _CVPixelBufferGetWidthOfPlane(param_2,0);
  uVar2 = param_2;
  uStack_60 = uVar1;
  _CVPixelBufferGetBytesPerRowOfPlane(param_2,0);
  puVar3 = &uStack_50;
  uStack_58 = uVar2;
  _vImageRotate90_Planar8(puVar3,&uStack_70,param_3,0,0);
  if (puVar3 == (undefined8 *)0x0) {
    uVar1 = param_1;
    _CVPixelBufferGetBaseAddressOfPlane(param_1,1);
    uVar2 = param_1;
    uStack_90 = uVar1;
    _CVPixelBufferGetHeightOfPlane(param_1,1);
    uVar1 = param_1;
    uStack_88 = uVar2;
    _CVPixelBufferGetWidthOfPlane(param_1,1);
    uVar2 = param_1;
    uStack_80 = uVar1;
    _CVPixelBufferGetBytesPerRowOfPlane(param_1,1);
    uVar1 = param_2;
    uStack_78 = uVar2;
    _CVPixelBufferGetBaseAddressOfPlane(param_2,1);
    uVar2 = param_2;
    uStack_b0 = uVar1;
    _CVPixelBufferGetHeightOfPlane(param_2,1);
    uVar1 = param_2;
    uStack_a8 = uVar2;
    _CVPixelBufferGetWidthOfPlane(param_2,1);
    uVar2 = param_2;
    uStack_a0 = uVar1;
    _CVPixelBufferGetBytesPerRowOfPlane(param_2,1);
    puVar3 = &uStack_90;
    uStack_98 = uVar2;
    _vImageRotate90_Planar16U(puVar3,&uStack_b0,param_3,0,0);
    if (puVar3 == (undefined8 *)0x0) {
      _CVPixelBufferUnlockBaseAddress(param_1,0);
      _CVPixelBufferUnlockBaseAddress(param_2,0);
    }
  }
  return;
}



/* Entry: 106121008; end: 106121063;  */

void FUN_106121008(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVAsset_1126aff38,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    FUN_106121064();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106121064; end: 10612139b;  */

undefined *
FUN_106121064(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  double dVar13;
  undefined1 auStack_f8 [24];
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar10 = PTR_PTR_1126bf698;
  func_0x00010bf0b9a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  puStack_a0 = *(undefined **)PTR__kCMTimeZero_110348670;
  uVar12 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uStack_90 = puStack_a0;
  uStack_88 = uStack_98;
  uStack_80 = uVar12;
  func_0x00010c297200();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if (param_5 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_90,param_5);
  }
  func_0x00010c297200();
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = uStack_98;
  uStack_90 = puStack_a0;
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uStack_80 = uVar12;
  func_0x00010c297200(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar4 = PTR_PTR_1126bf6a0;
  _objc_alloc();
  uStack_b0 = 0;
  dVar13 = 1.0;
  func_0x00010b7425e0(0x3ff0000000000000);
  puVar5 = PTR_PTR_1126bf6a8;
  puStack_a0 = puVar10;
  _objc_alloc(PTR_PTR_1126bf6a8);
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b742360(puVar5,1,0,&PTR____CFConstantStringClassReference_110db1158,puVar10);
  _objc_release(puVar10);
  func_0x00010befa120(puVar3);
  lVar6 = param_5;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf529e0();
  _objc_release(lVar6);
  if (lVar7 != 0) {
    puVar10 = PTR_PTR_1126bf6a0;
    _objc_alloc();
    uStack_b0 = 0;
    dVar13 = 1.0;
    func_0x00010b7425e0(0x3ff0000000000000);
    puVar8 = PTR_PTR_1126bf6a8;
    _objc_alloc(PTR_PTR_1126bf6a8);
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b742360(puVar8,0,1,&PTR____CFConstantStringClassReference_110db2d38,puVar9);
    _objc_release(puVar9);
    func_0x00010befa120(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar10);
  }
  puVar10 = PTR_PTR_1126bf6b0;
  _objc_alloc();
  func_0x00010b742210();
  puVar8 = PTR_PTR_1126bf6c0;
  _objc_alloc(PTR_PTR_1126bf6c0);
  puVar9 = puVar10;
  func_0x00010b743b10();
  _objc_release(puVar10);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar11);
  _objc_release(puVar1);
  _objc_release(puStack_a0);
  lVar6 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return puVar8;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10612139c;
  puStack_e0 = puVar11;
  puStack_d8 = puVar1;
  puStack_d0 = puVar10;
  lStack_c8 = param_5;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(puVar9);
  puVar11 = (undefined *)0x0;
  if ((lVar6 != 0) && (puVar9 != (undefined *)0x0)) {
    func_0x00010bf9de20(puVar9);
    puVar10 = (undefined *)(long)param_3;
    func_0x00010bf9de20(puVar9);
    func_0x000106120e5c(puVar10,(long)param_4);
    if (puVar10 == (undefined *)0x0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      _CVPixelBufferLockBaseAddress();
      func_0x00010c12f5e0(lVar6);
      _CACurrentMediaTime();
      _CMTimeMake(auStack_f8,(long)(dVar13 * 1000.0),1000);
      puVar11 = puVar10;
      func_0x000106120f4c(puVar10,auStack_f8);
      _CVPixelBufferUnlockBaseAddress(puVar10,0);
      _CFRelease(puVar10);
    }
  }
  _objc_release(puVar9);
  _objc_release(lVar6);
  return puVar11;
}



/* Entry: 10612139c; end: 106121537;  */

long FUN_10612139c(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  _objc_retain();
  _objc_retain(param_6);
  lVar2 = 0;
  if ((param_5 != 0) && (param_6 != 0)) {
    func_0x00010bf9de20(param_6);
    lVar1 = (long)param_3;
    func_0x00010bf9de20(param_6);
    func_0x000106120e5c(lVar1,(long)param_4);
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      _CVPixelBufferLockBaseAddress();
      func_0x00010c12f5e0(param_5);
      _CACurrentMediaTime();
      _CMTimeMake(auStack_48,(long)(param_1 * 1000.0),1000);
      lVar2 = lVar1;
      func_0x000106120f4c(lVar1,auStack_48);
      _CVPixelBufferUnlockBaseAddress(lVar1,0);
      _CFRelease(lVar1);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return lVar2;
}



/* Entry: 106121538; end: 10612165f; -[SDMSnapDoc mediaType] */

long * FUN_106121538(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long *plVar10;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined **unaff_x23;
  long unaff_x24;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined4 uStack_198;
  undefined1 auStack_190 [8];
  long lStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  long lStack_168;
  long lStack_160;
  undefined1 *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  plVar4 = &lStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  lStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (undefined8 *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_d8;
  lVar9 = param_1;
  func_0x00010bf52a60();
  uVar7 = SUB84(puVar8,0);
  if (lVar9 != 0) {
    unaff_x23 = (undefined **)*puStack_110;
    plVar10 = (long *)0x1;
    unaff_x21 = lVar9;
    do {
      unaff_x24 = 0;
      do {
        if ((undefined **)*puStack_110 != unaff_x23) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x22 = *(undefined8 *)(lStack_118 + unaff_x24 * 8);
        uVar1 = unaff_x22;
        func_0x00010c0c6c20();
        uVar7 = SUB84(puVar8,0);
        if ((int)uVar1 == 3) goto LAB_10612161c;
        uVar1 = unaff_x22;
        func_0x00010c0c6c20();
        uVar7 = SUB84(puVar8,0);
        if ((int)uVar1 == 2) {
          plVar10 = (long *)0x2;
          goto LAB_10612161c;
        }
        unaff_x24 = unaff_x24 + 1;
      } while (unaff_x21 != unaff_x24);
      puVar8 = auStack_d8;
      unaff_x21 = param_1;
      plVar4 = &lStack_120;
      func_0x00010bf52a60();
      uVar7 = SUB84(puVar8,0);
    } while (unaff_x21 != 0);
  }
  plVar10 = (long *)0xffffffffffffffff;
LAB_10612161c:
  lVar9 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar10;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_106121660;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = plVar4;
  lStack_160 = unaff_x24;
  puStack_158 = (undefined1 *)unaff_x23;
  uStack_150 = unaff_x22;
  lStack_148 = unaff_x21;
  plStack_140 = plVar10;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(plVar4);
  puStack_180 = PTR_PTR_1126efca8;
  plVar10 = &lStack_188;
  puVar5 = PTR_s_init_1125d9248;
  lStack_188 = lVar9;
  _objc_msgSendSuper2();
  if (plVar10 != (long *)0x0) {
    _objc_initWeak(auStack_190,plVar10);
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_106121808;
    puStack_1a8 = &UNK_11090f9a8;
    puVar5 = auStack_190;
    _objc_copyWeak(auStack_1a0);
    uStack_198 = uVar7;
    func_0x00010c297260(plVar4);
    puVar3 = PTR__OBJC_CLASS___CIContext_1126b3120;
    uStack_178 = *(undefined8 *)PTR__kCIContextCacheIntermediates_11034ad08;
    puStack_170 = PTR____kCFBooleanFalse_11034ab60;
    plVar2 = (long *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    plVar6 = plVar2;
    func_0x00010bf4f640();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = plVar10[2];
    plVar10[2] = (long)puVar3;
    _objc_release(lVar9);
    _objc_release(plVar2);
    _objc_destroyWeak(auStack_1a0);
    _objc_destroyWeak(auStack_190);
    unaff_x23 = &puStack_1c0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return plVar10;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x23 + 0x20));
  _objc_destroyWeak(auStack_190);
  __Unwind_Resume();
  if ((puVar5 != (undefined *)0x0) && (plVar6 == (long *)0x0)) {
    _objc_retain(puVar5);
    plVar4 = plVar4 + 4;
    _objc_loadWeakRetained(plVar4);
    func_0x00010bdeb8e0();
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(plVar4);
    return plVar4;
  }
  return plVar4;
}



/* Entry: 106121660; end: 106121807; -[SCLensExternalMediaStreamImageStreamProvider initWithImage:orientation:] */

undefined8 *
FUN_106121660(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined **unaff_x23;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_3);
  puStack_60 = PTR_PTR_1126efca8;
  puVar1 = &uStack_68;
  puVar4 = PTR_s_init_1125d9248;
  uStack_68 = param_1;
  _objc_msgSendSuper2();
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_70,puVar1);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106121808;
    puStack_88 = &UNK_11090f9a8;
    puVar4 = auStack_70;
    _objc_copyWeak(auStack_80);
    uStack_78 = param_4;
    func_0x00010c297260(param_3);
    puVar3 = PTR__OBJC_CLASS___CIContext_1126b3120;
    uStack_58 = *(undefined8 *)PTR__kCIContextCacheIntermediates_11034ad08;
    puStack_50 = PTR____kCFBooleanFalse_11034ab60;
    puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf4f640();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar6);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_70);
    unaff_x23 = &puStack_a0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x23 + 0x20));
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  if ((puVar4 != (undefined *)0x0) && (puVar5 == (undefined8 *)0x0)) {
    _objc_retain(puVar4);
    param_3 = param_3 + 4;
    _objc_loadWeakRetained(param_3);
    func_0x00010bdeb8e0();
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return param_3;
  }
  return param_3;
}



/* Entry: 106121808; end: 106121867;  */

void FUN_106121808(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdeb8e0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106121868; end: 1061218b7; -[SCLensExternalMediaStreamImageStreamProvider dealloc] */

void FUN_106121868(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    _CVPixelBufferRelease();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  puStack_28 = PTR_PTR_1126efca8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1061218b8; end: 106121a13; -[SCLensExternalMediaStreamImageStreamProvider managedVideoDataSource:sampleBufferAtTime:isRecording:] */

long FUN_1061218b8(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  _objc_retain(param_7);
  lVar2 = *(long *)(param_5 + 0x28);
  if (lVar2 == 0) {
    uVar1 = *(undefined8 *)(param_5 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9de20();
    lVar2 = (long)param_3;
    func_0x00010bf9de20(uVar1);
    func_0x000106120e5c(lVar2,(long)param_4);
    if (lVar2 != 0) {
      _CVPixelBufferLockBaseAddress();
      func_0x00010c12f5e0(*(undefined8 *)(param_5 + 0x10));
      _CVPixelBufferUnlockBaseAddress(lVar2,0);
      *(long *)(param_5 + 0x28) = lVar2;
      _objc_release(uVar1);
      lVar2 = *(long *)(param_5 + 0x28);
      goto joined_r0x0001061219ac;
    }
    _objc_release(uVar1);
  }
  else {
joined_r0x0001061219ac:
    if (param_8 == 0) {
      _CACurrentMediaTime();
      _CMTimeMake(auStack_58,(long)(param_1 * 1000.0),1000);
      func_0x000106120f4c(lVar2,auStack_58);
      goto LAB_1061219f0;
    }
    func_0x00010bde9b80();
    if (param_5 != 0) {
      _CACurrentMediaTime();
      _CMTimeMake(auStack_58,(long)(param_1 * 1000.0),1000);
      lVar2 = param_5;
      func_0x000106120f4c(param_5,auStack_58);
      _CFRelease(param_5);
      goto LAB_1061219f0;
    }
  }
  lVar2 = 0;
LAB_1061219f0:
  _objc_release(param_7);
  return lVar2;
}



/* Entry: 106121a14; end: 106121a17; -[SCLensExternalMediaStreamImageStreamProvider managedVideoDataSourceDidStartStreaming:performer:] */

void FUN_106121a14(void)

{
  return;
}



/* Entry: 106121a18; end: 106121a1b; -[SCLensExternalMediaStreamImageStreamProvider managedVideoDataSourceDidStopStreaming:] */

void FUN_106121a18(void)

{
  return;
}



/* Entry: 106121a1c; end: 106121a23; -[SCLensExternalMediaStreamImageStreamProvider mediaSizeOfManagedVideoDataSource] */

undefined1  [16] FUN_106121a1c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 106121a24; end: 106121a57; -[SCLensExternalMediaStreamImageStreamProvider mediaAspectRatioOfManagedVideoDataSource] */

double FUN_106121a24(long param_1)

{
  if (*(double *)(param_1 + 0x18) == 0.0) {
    return 0.0;
  }
  if (*(double *)(param_1 + 0x20) == 0.0) {
    return INFINITY;
  }
  return *(double *)(param_1 + 0x18) / *(double *)(param_1 + 0x20);
}



/* Entry: 106121a58; end: 106121aef; -[SCLensExternalMediaStreamImageStreamProvider currentCVPixelBufferRef] */

long FUN_106121a58(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbbfa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CVPixelBufferRetain_11034a2a0)();
    return lVar1;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_10612139c(lVar1,uVar2);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar1;
    _CMSampleBufferGetImageBuffer();
    _CVPixelBufferRetain();
    _CFRelease(lVar1);
    lVar1 = lVar3;
    _CVPixelBufferRetain();
    *(long *)(param_1 + 0x28) = lVar1;
  }
  _objc_release(uVar2);
  return lVar3;
}



/* Entry: 106121af0; end: 106121b0b; -[SCLensExternalMediaStreamImageStreamProvider preferredFrameTransformForReverseCamera] */

void FUN_106121af0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  param_1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = *(undefined8 *)(puVar1 + 0x20);
  param_1[5] = *(undefined8 *)(puVar1 + 0x28);
  param_1[4] = uVar2;
  return;
}



/* Entry: 106121b0c; end: 106121c3f; -[SCLensExternalMediaStreamImageStreamProvider _copyPixelBuffer:] */

ulong FUN_106121b0c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar2 = param_3;
  _CVPixelBufferGetWidth();
  uVar3 = param_3;
  _CVPixelBufferGetHeight(param_3);
  func_0x000106120e5c(uVar2,uVar3);
  if (uVar2 != 0) {
    _CVPixelBufferLockBaseAddress(param_3,1);
    _CVPixelBufferLockBaseAddress(uVar2,0);
    uVar3 = param_3;
    _CVPixelBufferGetPlaneCount();
    if (uVar3 != 0) {
      uVar9 = 0;
      do {
        uVar4 = param_3;
        _CVPixelBufferGetBaseAddressOfPlane(param_3,uVar9);
        uVar5 = uVar2;
        _CVPixelBufferGetBaseAddressOfPlane(uVar2,uVar9);
        uVar6 = param_3;
        _CVPixelBufferGetBytesPerRowOfPlane(param_3,uVar9);
        uVar7 = uVar2;
        _CVPixelBufferGetBytesPerRowOfPlane(uVar2,uVar9);
        uVar8 = param_3;
        _CVPixelBufferGetHeightOfPlane(param_3,uVar9);
        uVar1 = uVar6;
        if (uVar7 <= uVar6) {
          uVar1 = uVar7;
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          _memcpy(uVar5,uVar4,uVar1);
          uVar4 = uVar4 + uVar6;
          uVar5 = uVar5 + uVar7;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar3);
    }
    _CVPixelBufferUnlockBaseAddress(uVar2,0);
    _CVPixelBufferUnlockBaseAddress(param_3,1);
  }
  return uVar2;
}



/* Entry: 106121c40; end: 106121cff; -[SCLensExternalMediaStreamImageStreamProvider _createCIImageFromUIImage:orientation:] */

void FUN_106121c40(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  _objc_retain(param_5);
  func_0x00010c23d0a0(param_5);
  *(undefined8 *)(param_3 + 0x18) = param_1;
  *(undefined8 *)(param_3 + 0x20) = param_2;
  puVar1 = PTR_PTR_1126ae720;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106121d00;
  puStack_48 = &UNK_11090f9d8;
  uStack_40 = param_5;
  uStack_38 = param_6;
  _objc_retain(param_5);
  func_0x00010bf11fe0(puVar1,param_4,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + 8);
  *(undefined **)(param_3 + 8) = puVar1;
  _objc_release(uVar2);
  _objc_release(uStack_40);
  _objc_release(param_5);
  return;
}



/* Entry: 106121d00; end: 106121d67;  */

void FUN_106121d00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___CIImage_1126b3128;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retainAutorelease(uVar1);
  func_0x00010bdc1020();
  func_0x00010bfe9240(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfe6d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106121d68; end: 106121d6f; -[SCLensExternalMediaStreamImageStreamProvider resourceId] */

undefined8 FUN_106121d68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106121d70; end: 106121d9f; -[SCLensExternalMediaStreamImageStreamProvider setResourceId:] */

void FUN_106121d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106121da0; end: 106121ddb; -[SCLensExternalMediaStreamImageStreamProvider .cxx_destruct] */

void FUN_106121da0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106121ddc; end: 106121fcb; -[SCLensExternalMediaStreamVideoStreamProvider initWithNGSMESnap:ngsmePlayerFactory:rotationConstant:enableDisplayLink:] */

undefined8 *
FUN_106121ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,int param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126efcb0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 9) = param_5;
    if (param_6 != 0) {
      puVar2 = PTR_PTR_1126c82a8;
      func_0x00010bf85b60();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puVar1[4];
      puVar1[4] = puVar2;
      _objc_release(uVar3);
      uVar3 = puVar1[4];
      puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
      func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc2c0(uVar3);
      _objc_release(puVar2);
      func_0x00010c1dffe0(puVar1[4]);
      func_0x00010c1d9980(puVar1[4]);
    }
    _objc_initWeak(auStack_58,puVar1);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    uVar3 = param_3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[3];
    puVar1[3] = uVar3;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___CIContext_1126b3120;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[10];
    puVar1[10] = puVar2;
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106121fcc; end: 10612206f;  */

void FUN_106121fcc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
  }
  _objc_retain(uVar2);
  _objc_release(param_2);
  func_0x00010bdf0540(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0da280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106122070; end: 1061220c3; -[SCLensExternalMediaStreamVideoStreamProvider dealloc] */

void FUN_106122070(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126efcb0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1061220c4; end: 10612216f; -[SCLensExternalMediaStreamVideoStreamProvider startStreaming] */

void FUN_1061220c4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c297260(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106122170; end: 1061221b7;  */

void FUN_106122170(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
    func_0x00010c2504a0(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1d9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1061221b8; end: 106122263; -[SCLensExternalMediaStreamVideoStreamProvider stopStreaming] */

void FUN_1061221b8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c297260(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106122264; end: 1061222ab;  */

void FUN_106122264(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
    func_0x00010c2568a0(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1d9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1061222ac; end: 10612237f; -[SCLensExternalMediaStreamVideoStreamProvider _createNGSMEPlayerFromSnap:ngsmePlayerFactory:] */

void FUN_1061222ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  func_0x00010c269d40(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_6;
  func_0x00010c101140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c2009a0(uVar1,param_4,1);
  uVar2 = 0;
  func_0x00010c2241a0(uVar1);
  func_0x00010be23d40(param_3,param_4,param_5);
  _objc_release(param_5);
  *(undefined8 *)(param_3 + 0x28) = uVar2;
  *(undefined8 *)(param_3 + 0x30) = param_2;
  func_0x00010c1ea8e0(uVar2,param_2,uVar1);
  func_0x00010c10a180(uVar1);
  func_0x00010bea5e60(param_3,param_4,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106122380; end: 106122423; -[SCLensExternalMediaStreamVideoStreamProvider _sampleBufferAtTime:] */

ulong FUN_106122380(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_2;
  func_0x00010c0da280();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010bfc9c00(param_1);
    if (uVar2 != 0) {
      uVar3 = uVar2;
      if (*(char *)(param_2 + 0x48) != '\0') {
        func_0x000106121484(uVar2,1);
        _CFRelease(uVar2);
      }
      goto LAB_106122404;
    }
    uVar2 = uVar1;
    func_0x00010c07a400();
    if ((uVar2 & 1) == 0) {
      func_0x00010c2504a0(uVar1);
    }
  }
  uVar3 = 0;
LAB_106122404:
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 106122424; end: 1061225ef; -[SCLensExternalMediaStreamVideoStreamProvider _getVideoSizeOfSnap:] */

undefined1  [16] FUN_106122424(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_3 + 8);
  }
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010911c750(lVar4,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3010000000;
  pcStack_68 = "";
  uStack_58 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  uStack_60 = *(undefined8 *)PTR__CGSizeZero_110347620;
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar2 + 0x20);
  }
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar3 + 8);
  }
  _objc_retain(uVar5);
  func_0x00010c0bc940(uVar5);
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lVar4);
  auVar1 = *(undefined1 (*) [16])(puStack_78 + 4);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(lVar2);
  _objc_release(param_3);
  return auVar1;
}



/* Entry: 1061225f0; end: 10612266b;  */

void FUN_1061225f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c074fe0();
  if ((int)uVar1 == 0) {
    func_0x00010c29b240(PTR_PTR_1126b0010);
  }
  else {
    func_0x00010bfe8bc0(PTR__OBJC_CLASS___UIImage_1126aea68);
  }
  _objc_release(param_4);
  lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  return;
}



/* Entry: 10612266c; end: 1061226d3;  */

void FUN_10612266c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x00010c29b200(PTR_PTR_1126b0010,param_4,param_4);
  lVar1 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  return;
}



/* Entry: 1061226d4; end: 10612272b; -[SCLensExternalMediaStreamVideoStreamProvider _displayLinkCallback:] */

void FUN_1061226d4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  _objc_retain(param_4);
  func_0x00010c2709c0(param_4);
  dVar1 = param_1;
  func_0x00010bf8b160(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bea5290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1 + dVar1,param_2,PTR_s__setLastVSync__112586e48);
  return;
}



/* Entry: 10612272c; end: 106122763; -[SCLensExternalMediaStreamVideoStreamProvider _setLastVSync:] */

void FUN_10612272c(undefined8 param_1,long param_2)

{
  _os_unfair_lock_lock(param_2 + 0x38);
  *(undefined8 *)(param_2 + 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0x38);
  return;
}



/* Entry: 106122764; end: 10612279f; -[SCLensExternalMediaStreamVideoStreamProvider _lastVSync] */

undefined8 FUN_106122764(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _os_unfair_lock_unlock(param_1 + 0x38);
  return uVar1;
}



/* Entry: 1061227a0; end: 1061227df; -[SCLensExternalMediaStreamVideoStreamProvider _setNgsmePlayer:] */

void FUN_1061227a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x3c);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x3c);
  return;
}



/* Entry: 1061227e0; end: 10612281b; -[SCLensExternalMediaStreamVideoStreamProvider ngsmePlayer] */

void FUN_1061227e0(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x3c);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x3c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10612281c; end: 10612286b; -[SCLensExternalMediaStreamVideoStreamProvider currentCVPixelBufferRef] */

long FUN_10612281c(long param_1)

{
  long lVar1;
  
  func_0x00010be47220();
  func_0x00010be98740();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    _CMSampleBufferGetImageBuffer();
    _CVPixelBufferRetain();
    _CFRelease(param_1);
  }
  return lVar1;
}



/* Entry: 10612286c; end: 106122887; -[SCLensExternalMediaStreamVideoStreamProvider preferredFrameTransformForReverseCamera] */

void FUN_10612286c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  param_1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = *(undefined8 *)(puVar1 + 0x20);
  param_1[5] = *(undefined8 *)(puVar1 + 0x28);
  param_1[4] = uVar2;
  return;
}



/* Entry: 106122888; end: 10612288b; -[SCLensExternalMediaStreamVideoStreamProvider managedVideoDataSource:sampleBufferAtTime:isRecording:] */

void FUN_106122888(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be98750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__sampleBufferAtTime__112583b70);
  return;
}



/* Entry: 10612288c; end: 106122977; -[SCLensExternalMediaStreamVideoStreamProvider managedVideoDataSourceDidStartStreaming:performer:] */

void FUN_10612288c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_4;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106122978; end: 1061229c3;  */

void FUN_106122978(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c0da280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2504a0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061229c4; end: 106122a87; -[SCLensExternalMediaStreamVideoStreamProvider managedVideoDataSourceDidStopStreaming:] */

void FUN_1061229c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106122a88; end: 106122ad3;  */

void FUN_106122a88(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c0da280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5fe0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106122ad4; end: 106122adb; -[SCLensExternalMediaStreamVideoStreamProvider mediaSizeOfManagedVideoDataSource] */

undefined1  [16] FUN_106122ad4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x28);
}



/* Entry: 106122adc; end: 106122b0f; -[SCLensExternalMediaStreamVideoStreamProvider mediaAspectRatioOfManagedVideoDataSource] */

double FUN_106122adc(long param_1)

{
  if (*(double *)(param_1 + 0x28) == 0.0) {
    return 0.0;
  }
  if (*(double *)(param_1 + 0x30) == 0.0) {
    return INFINITY;
  }
  return *(double *)(param_1 + 0x28) / *(double *)(param_1 + 0x30);
}



/* Entry: 106122b10; end: 106122b17; -[SCLensExternalMediaStreamVideoStreamProvider resourceId] */

undefined8 FUN_106122b10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106122b18; end: 106122b47; -[SCLensExternalMediaStreamVideoStreamProvider setResourceId:] */

void FUN_106122b18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106122b48; end: 106122ba7; -[SCLensExternalMediaStreamVideoStreamProvider .cxx_destruct] */

void FUN_106122b48(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106122ba8; end: 106122cbf;  */

undefined1  [16] FUN_106122ba8(float param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  _objc_retain(param_4);
  if ((param_4 == 0) || (lVar1 = param_4, _CGImageSourceCreateWithURL(param_4,0), lVar1 == 0)) {
    dVar5 = *(double *)PTR__CGSizeZero_110347620;
    dVar6 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    lVar2 = lVar1;
    _CGImageSourceCopyPropertiesAtIndex();
    if (lVar2 == 0) {
      dVar5 = *(double *)PTR__CGSizeZero_110347620;
      dVar6 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    else {
      _objc_retain();
      lVar3 = lVar2;
      func_0x00010c0e00e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar5 = (double)param_1;
      lVar4 = lVar2;
      func_0x00010c0e00e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar6 = (double)param_1;
      _objc_release(lVar4);
      _objc_release(lVar3);
      _CFRelease(lVar2);
      _objc_release(lVar2);
    }
    _CFRelease(lVar1);
  }
  _objc_release(param_4);
  auVar7._8_8_ = dVar6;
  auVar7._0_8_ = dVar5;
  return auVar7;
}



/* Entry: 106122cc0; end: 106122ccf;  */

undefined * FUN_106122cc0(void)

{
  return PTR____kCFBooleanFalse_11034ab60;
}



/* Entry: 106122cd0; end: 106122e97;  */

void FUN_106122cd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
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
  pcStack_68 = FUN_106122e98;
  uStack_60 = 0x106122ea8;
  uStack_58 = 0;
  func_0x00010c0e7bc0(param_2);
  func_0x00010c0e3ae0(param_2);
  func_0x00010c0e3ac0(param_2);
  func_0x00010c0e3840(param_2);
  func_0x00010c0e7be0(param_2);
  func_0x00010c0e3860(param_2);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106122e98; end: 106122f67;  */

void FUN_106122e98(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106122f68; end: 106122fc3;  */

double FUN_106122f68(void)

{
  int iVar1;
  double dVar2;
  undefined4 uStack_3c;
  undefined1 auStack_38 [12];
  long lStack_2c;
  
  uStack_3c = 10;
  iVar1 = *(int *)PTR__mach_task_self__11034c5c8;
  _task_info(iVar1,0x12,auStack_38,&uStack_3c);
  dVar2 = (double)lStack_2c * 9.5367431640625e-07;
  if (iVar1 != 0) {
    dVar2 = 0.0;
  }
  return dVar2;
}



/* Entry: 106122fc4; end: 106122fcb;  */

undefined8 FUN_106122fc4(void)

{
  return 0;
}



/* Entry: 106122fcc; end: 106123083; -[SCSponsoredLensOnCameraWarmupEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106122fcc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273fc84);
  _objc_destroyWeak(param_1 + _DAT_11273fc60);
  _objc_destroyWeak(param_1 + _DAT_11273fc6c);
  _objc_destroyWeak(param_1 + _DAT_11273fc74);
  _objc_destroyWeak(param_1 + _DAT_11273fc78);
  _objc_destroyWeak(param_1 + _DAT_11273fc70);
  _objc_destroyWeak(param_1 + _DAT_11273fc68);
  _objc_destroyWeak(param_1 + _DAT_11273fc8c);
  _objc_destroyWeak(param_1 + _DAT_11273fc64);
  _objc_destroyWeak(param_1 + _DAT_11273fc88);
  _objc_storeStrong(param_1 + _DAT_11273fc7c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273fc80,0);
  return;
}



/* Entry: 106123084; end: 1061230f3;  */

void FUN_106123084(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1061230f4; end: 106123227;  */

void FUN_1061230f4(long param_1,undefined8 param_2)

{
  func_0x00010bf1f3c0(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c186100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106123228; end: 10612331f;  */

void FUN_106123228(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf1f3c0();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0d83a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x20);
    _objc_copyWeak(auStack_38,param_1 + 0x28);
    func_0x00010bf43280(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106123320; end: 10612344f;  */

void FUN_106123320(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uStack_6c;
  undefined1 auStack_68 [12];
  long lStack_5c;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5e060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  if (lVar4 == 0) {
    uStack_6c = 10;
    iVar1 = *(int *)PTR__mach_task_self__11034c5c8;
    _task_info(iVar1,0x12,auStack_68,&uStack_6c);
    if ((iVar1 == 0) && (1000.0 < (double)lStack_5c * 9.5367431640625e-07)) {
      if (lRam00000001136c33a0 != -1) {
        func_0x00010002a2fc(0x1136c33a0,&PTR___NSConcreteGlobalBlock_11090fd98);
      }
      if ((bRam00000001136c3398 & 1) == 0) goto LAB_106123398;
    }
    _objc_retain(param_2);
    uVar5 = param_2;
  }
  else {
LAB_106123398:
    uVar5 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106123450; end: 106123497;  */

void FUN_106123450(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beea800();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106123498; end: 106123803; -[SCSponsoredLensWarmupWorkflow _warmupLens:] */

ulong FUN_106123498(ulong param_1,undefined1 *param_2,ulong param_3)

{
  int iVar1;
  undefined1 *puVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **unaff_x24;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x20));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x00010c097f60();
  if (iVar1 != 0) {
    puVar2 = *(undefined1 **)(param_1 + 8);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    param_2 = puVar2;
    _objc_initWeak(auStack_58,puVar2);
    _objc_release(puVar2);
    uVar3 = param_1;
    func_0x00010bf2bcc0();
    if (((int)uVar3 != 0) && (uVar3 = param_1, func_0x00010bf5c4e0(), (uVar3 & 1) == 0)) {
      pcVar4 = "LENS_PROCESSING_WARMUP";
      func_0x0001000ba800("LENS_PROCESSING_WARMUP");
      puVar2 = auStack_58;
      _objc_loadWeakRetained(puVar2);
      func_0x00010c2a1dc0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      func_0x0001000e2a84(pcVar4);
      if (param_3 != 0) {
        uVar5 = *(ulong *)(param_1 + 0x38);
        func_0x00010c2a1f60();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_3;
        func_0x00010c094540(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf4b900();
        _objc_release(uVar3);
        _objc_release(uVar5);
        if ((((uVar6 & 1) == 0) && (uVar3 = param_1, func_0x00010bf2bcc0(), (int)uVar3 != 0)) &&
           (uVar3 = param_1, func_0x00010bf5c4e0(), (uVar3 & 1) == 0)) {
          pcVar4 = "LENS_PROCESSING_LENS_WARMUP";
          func_0x0001000ba800("LENS_PROCESSING_LENS_WARMUP");
          puVar2 = auStack_58;
          _objc_loadWeakRetained(puVar2);
          puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_50 = param_3;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar2;
          func_0x00010c2a1dc0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          _objc_release(puVar2);
          _objc_release(puVar8);
          func_0x0001000e2a84(pcVar4);
          _objc_initWeak(auStack_60,*(undefined8 *)(param_1 + 0x10));
          func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x30));
          uVar9 = *(undefined8 *)(param_1 + 0x40);
          func_0x00010bf65f60(0x4008000000000000);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010bfad7a0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar10;
          func_0x00010bfb0d80();
          _objc_retainAutoreleasedReturnValue();
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0xc2000000;
          pcStack_80 = FUN_106123820;
          puStack_78 = &UNK_1108fa1a0;
          _objc_copyWeak(auStack_70,auStack_60);
          param_2 = auStack_58;
          _objc_copyWeak(auStack_68,param_2);
          uVar12 = uVar11;
          func_0x00010c25ff60();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = *(undefined8 *)(param_1 + 0x30);
          *(undefined8 *)(param_1 + 0x30) = uVar12;
          _objc_release(uVar13);
          _objc_release(uVar11);
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_destroyWeak(auStack_68);
          _objc_destroyWeak(auStack_70);
          _objc_destroyWeak(auStack_60);
          unaff_x24 = &puStack_90;
        }
      }
    }
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x24 + 0x28));
  _objc_destroyWeak((undefined1 *)((long)unaff_x24 + 0x20));
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(param_3);
  func_0x00010bf1f3c0(param_2);
  return (ulong)((uint)param_2 ^ 1);
}



/* Entry: 106123804; end: 10612381f;  */

uint FUN_106123804(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf1f3c0(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 106123820; end: 1061238fb;  */

void FUN_106123820(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5e060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    pcVar5 = "LENS_PROCESSING_WARMUP_CLEAR_ALL";
    func_0x0001000ba800("LENS_PROCESSING_WARMUP_CLEAR_ALL");
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf3bf00();
    _objc_release(param_1);
    func_0x0001000e2a84(pcVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061238fc; end: 106123907; -[SCSponsoredLensWarmupWorkflow cameraVisible] */

byte FUN_1061238fc(long param_1)

{
  return *(byte *)(param_1 + 0x58) & 1;
}



/* Entry: 106123908; end: 106123913; -[SCSponsoredLensWarmupWorkflow criticalWorkRunning] */

byte FUN_106123908(long param_1)

{
  return *(byte *)(param_1 + 0x59) & 1;
}



/* Entry: 106123914; end: 10612391b; -[SCSponsoredLensWarmupWorkflow setCriticalWorkRunning:] */

void FUN_106123914(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x59) = param_3;
  return;
}



/* Entry: 10612391c; end: 106123a0b; -[SCSponsoredLensWarmupWorkflow .cxx_destruct] */

void FUN_10612391c(long param_1)

{
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



/* Entry: 106123a0c; end: 106123a13; -[SCLegacyCameraResourcesImpl animationTransitionCoordinator] */

void FUN_106123a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_target_112678178);
  return;
}



/* Entry: 106123a14; end: 106123a1b; -[SCLegacyCameraResourcesImpl gestureCoordinator] */

void FUN_106123a14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_target_112678178);
  return;
}



/* Entry: 106123a1c; end: 106123a23; -[SCLegacyCameraResourcesImpl metricCoordinator] */

void FUN_106123a1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_target_112678178);
  return;
}



/* Entry: 106123a24; end: 106123a2b; -[SCLegacyCameraResourcesImpl userStatus] */

void FUN_106123a24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_target_112678178);
  return;
}



/* Entry: 106123a2c; end: 106123a43; -[SCLegacyCameraResourcesImpl cameraSnapCreationLogger] */

void FUN_106123a2c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


