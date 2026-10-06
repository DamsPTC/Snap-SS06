/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060ba3ac; end: 1060ba3cf; -[SCFeatureMusicImpl disableMode] */

void FUN_1060ba3ac(undefined8 param_1)

{
  func_0x00010c137fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdfa370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deleteMusicPlaybackLayer_11255c278);
  return;
}



/* Entry: 1060ba3d0; end: 1060ba3db; -[SCFeatureMusicImpl incompatibleModes] */

undefined ** FUN_1060ba3d0(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_11117ff48;
}



/* Entry: 1060ba3dc; end: 1060ba3e3; -[SCFeatureMusicImpl modeType] */

undefined8 FUN_1060ba3dc(void)

{
  return 2;
}



/* Entry: 1060ba3e4; end: 1060ba41f; -[SCFeatureMusicImpl onTap:] */

void FUN_1060ba3e4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0cfda0();
  if ((int)uVar1 == param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010be7a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentCameraToolbarPickerIfNee_11257c348)
    ;
    return;
  }
  return;
}



/* Entry: 1060ba420; end: 1060ba427; -[SCFeatureMusicImpl isHidden] */

undefined8 FUN_1060ba420(void)

{
  return 0;
}



/* Entry: 1060ba428; end: 1060ba42b; -[SCFeatureMusicImpl secondaryOnTap:] */

void FUN_1060ba428(void)

{
  return;
}



/* Entry: 1060ba42c; end: 1060ba443; -[SCFeatureMusicImpl state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1060ba42c(long param_1)

{
  return *(long *)(param_1 + _DAT_11273ebb4) != 0;
}



/* Entry: 1060ba444; end: 1060ba44b; -[SCFeatureMusicImpl secondaryButtonState] */

undefined8 FUN_1060ba444(void)

{
  return 0;
}



/* Entry: 1060ba44c; end: 1060ba44f; -[SCFeatureMusicImpl toolbarButtonPositionDidChange:] */

void FUN_1060ba44c(void)

{
  return;
}



/* Entry: 1060ba450; end: 1060ba51b; -[SCFeatureMusicImpl _cameraShouldOpenSnapEditorWithMediaType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060ba450(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010be3fa60();
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + (long)_DAT_11273eb04);
    func_0x00010c0cfdc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_11273eb94);
    func_0x00010bf2aec0(uVar2,param_2,uVar4,param_3,*(undefined8 *)(param_1 + (long)_DAT_11273ec00),
                        *(undefined8 *)(param_1 + (long)_DAT_11273eb58),
                        *(undefined8 *)(param_1 + (long)_DAT_11273ebe4));
    _objc_release(uVar4);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 1060ba51c; end: 1060ba53b; -[SCFeatureMusicImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ba51c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273ebe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060ba53c; end: 1060ba55b; -[SCFeatureMusicImpl usageTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ba53c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273ebf4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060ba55c; end: 1060ba57b; -[SCFeatureMusicImpl cameraTooltipArbitrator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ba55c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273ec5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060ba57c; end: 1060ba58b; -[SCFeatureMusicImpl musicEditorActiveObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060ba57c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273eb28);
}



/* Entry: 1060ba58c; end: 1060ba59b; -[SCFeatureMusicImpl musicPlaybackEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060ba58c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273eb2c);
}



/* Entry: 1060ba59c; end: 1060ba5ab; -[SCFeatureMusicImpl hasActiveContextUnlockMusic] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1060ba59c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273ebdc);
}



/* Entry: 1060ba5ac; end: 1060ba5bb; -[SCFeatureMusicImpl setHasActiveContextUnlockMusic:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ba5ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11273ebdc) = param_3;
  return;
}



/* Entry: 1060ba5bc; end: 1060baa67; -[SCFeatureMusicImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060ba5bc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273ec5c);
  _objc_destroyWeak(param_1 + _DAT_11273ebf4);
  _objc_destroyWeak(param_1 + _DAT_11273ebe8);
  _objc_storeStrong(param_1 + _DAT_11273ec38,0);
  _objc_storeStrong(param_1 + _DAT_11273ec44,0);
  _objc_storeStrong(param_1 + _DAT_11273ec40,0);
  _objc_storeStrong(param_1 + _DAT_11273ec2c,0);
  _objc_storeStrong(param_1 + _DAT_11273eba8,0);
  _objc_storeStrong(param_1 + _DAT_11273eba4,0);
  _objc_storeStrong(param_1 + _DAT_11273eba0,0);
  _objc_destroyWeak(param_1 + _DAT_11273eb48);
  _objc_storeStrong(param_1 + _DAT_11273ebfc,0);
  _objc_storeStrong(param_1 + _DAT_11273ec10,0);
  _objc_storeStrong(param_1 + _DAT_11273ec4c,0);
  _objc_storeStrong(param_1 + _DAT_11273ec64,0);
  _objc_destroyWeak(param_1 + _DAT_11273eb98);
  _objc_storeStrong(param_1 + _DAT_11273ebc8,0);
  _objc_storeStrong(param_1 + _DAT_11273eb94,0);
  _objc_storeStrong(param_1 + _DAT_11273eb90,0);
  _objc_storeStrong(param_1 + _DAT_11273eb8c,0);
  _objc_storeStrong(param_1 + _DAT_11273eb88,0);
  _objc_storeStrong(param_1 + _DAT_11273ebb0,0);
  _objc_storeStrong(param_1 + _DAT_11273eb80,0);
  _objc_storeStrong(param_1 + _DAT_11273ebac,0);
  _objc_destroyWeak(param_1 + _DAT_11273eb74);
  _objc_storeStrong(param_1 + _DAT_11273eb78,0);
  _objc_storeStrong(param_1 + _DAT_11273eb70,0);
  _objc_storeStrong(param_1 + _DAT_11273eb6c,0);
  _objc_storeStrong(param_1 + _DAT_11273eb68,0);
  _objc_storeStrong(param_1 + _DAT_11273eb64,0);
  _objc_storeStrong(param_1 + _DAT_11273eb54,0);
  _objc_storeStrong(param_1 + _DAT_11273eb50,0);
  _objc_storeStrong(param_1 + _DAT_11273eb5c,0);
  _objc_storeStrong(param_1 + _DAT_11273eb4c,0);
  _objc_storeStrong(param_1 + _DAT_11273eb44,0);
  _objc_storeStrong(param_1 + _DAT_11273eb40,0);
  _objc_storeStrong(param_1 + _DAT_11273eb3c,0);
  _objc_storeStrong(param_1 + _DAT_11273eb38,0);
  _objc_storeStrong(param_1 + _DAT_11273eb34,0);
  _objc_storeStrong(param_1 + _DAT_11273eb04,0);
  _objc_storeStrong(param_1 + _DAT_11273ec50,0);
  _objc_storeStrong(param_1 + _DAT_11273ec24,0);
  _objc_storeStrong(param_1 + _DAT_11273ebd4,0);
  _objc_storeStrong(param_1 + _DAT_11273ec1c,0);
  _objc_storeStrong(param_1 + _DAT_11273ec18,0);
  _objc_storeStrong(param_1 + _DAT_11273ebe0,0);
  _objc_storeStrong(param_1 + _DAT_11273ec14,0);
  _objc_storeStrong(param_1 + _DAT_11273ebf0,0);
  _objc_storeStrong(param_1 + _DAT_11273ec58,0);
  _objc_storeStrong(param_1 + _DAT_11273ebb4,0);
  _objc_storeStrong(param_1 + _DAT_11273ec48,0);
  _objc_storeStrong(param_1 + _DAT_11273ebbc,0);
  _objc_storeStrong(param_1 + _DAT_11273ec08,0);
  _objc_destroyWeak(param_1 + _DAT_11273ec04);
  _objc_destroyWeak(param_1 + _DAT_11273ebcc);
  _objc_storeStrong(param_1 + _DAT_11273eb30,0);
  _objc_storeStrong(param_1 + _DAT_11273eb2c,0);
  _objc_storeStrong(param_1 + _DAT_11273eb28,0);
  _objc_storeStrong(param_1 + _DAT_11273eb24,0);
  _objc_storeStrong(param_1 + _DAT_11273eb20,0);
  _objc_storeStrong(param_1 + _DAT_11273ec0c,0);
  _objc_storeStrong(param_1 + _DAT_11273eb1c,0);
  _objc_storeStrong(param_1 + _DAT_11273eb18,0);
  _objc_storeStrong(param_1 + _DAT_11273eb14,0);
  _objc_destroyWeak(param_1 + _DAT_11273eb9c);
  _objc_storeStrong(param_1 + _DAT_11273eb84,0);
  _objc_storeStrong(param_1 + _DAT_11273eb10,0);
  _objc_storeStrong(param_1 + _DAT_11273eb08,0);
  _objc_storeStrong(param_1 + _DAT_11273eb0c,0);
  _objc_storeStrong(param_1 + _DAT_11273eb00,0);
  _objc_storeStrong(param_1 + _DAT_11273eafc,0);
  _objc_storeStrong(param_1 + _DAT_11273eb60,0);
  _objc_storeStrong(param_1 + _DAT_11273eaf8,0);
  _objc_storeStrong(param_1 + _DAT_11273eaf4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273eaf0,0);
  return;
}



/* Entry: 1060baa68; end: 1060bad9b; -[SCFeatureMusicMemoriesButtonImpl initWithMemoriesSideButtonFeatureRef:musicFeatureRef:memoriesQuickPostScopeExposer:musicCameraScope:musicServices:spotlightSubmissionScopeLauncher:spotlightSubmissionScopeServices:businessProfileId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1060baa68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
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
  puStack_68 = PTR_PTR_1126ef898;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar9 = (long)_DAT_11273ec68;
    _objc_storeWeak((long)puVar1 + lVar9,param_3);
    lVar8 = (long)_DAT_11273ec6c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11273ec70,param_6);
    lVar8 = (long)_DAT_11273ec74;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_7;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_11273ec78;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_8;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_11273ec7c;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_9;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_11273ec80;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined8 *)((long)puVar1 + lVar8) = param_10;
    _objc_release(uVar2);
    lVar8 = (long)puVar1 + lVar9;
    _objc_loadWeakRetained(lVar8);
    lVar3 = lVar8;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0c9880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd40();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar8);
    lVar9 = (long)puVar1 + lVar9;
    _objc_loadWeakRetained(lVar9);
    lVar8 = lVar9;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010c0c9880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
    _objc_release(lVar3);
    _objc_release(lVar8);
    _objc_release(lVar9);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = param_4;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0d32c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar6 = uVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273ec84);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273ec84) = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
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



/* Entry: 1060bad9c; end: 1060bae0b;  */

void FUN_1060bad9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bedbda0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060bae0c; end: 1060bae0f; -[SCFeatureMusicMemoriesButtonImpl activate] */

void FUN_1060bae0c(void)

{
  return;
}



/* Entry: 1060bae10; end: 1060baebb; -[SCFeatureMusicMemoriesButtonImpl memoriesQuickPostDidFinishWithDidSend:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060bae10(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ec6c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (param_3 != 0) {
    param_1 = param_1 + _DAT_11273ec70;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84b00();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1060baebc; end: 1060baebf; -[SCFeatureMusicMemoriesButtonImpl creatorsSpotlightSubmissionV2DidBegin] */

void FUN_1060baebc(void)

{
  return;
}



/* Entry: 1060baec0; end: 1060baecf; -[SCFeatureMusicMemoriesButtonImpl creatorsSpotlightSubmissionV2DidComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060baec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273ec78),PTR_s_endLaunchedFeature_1125c2cb0);
  return;
}



/* Entry: 1060baed0; end: 1060bb06b; -[SCFeatureMusicMemoriesButtonImpl _didTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060baed0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11273ec6c);
  func_0x00010c071800();
  if (iVar1 != 0) {
    if (*(long *)(param_1 + _DAT_11273ec88) == 0) {
      lVar2 = *(long *)(param_1 + _DAT_11273ec74);
      func_0x00010c15a860();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      if (lVar3 != 0) {
        _objc_initWeak(auStack_48,param_1);
        param_1 = param_1 + _DAT_11273ec70;
        _objc_loadWeakRetained();
        lVar2 = param_1;
        func_0x00010c277e80();
        _objc_release(param_1);
        _objc_retain(PTR___dispatch_main_q_11034be20);
        _objc_copyWeak(auStack_58,auStack_48);
        lStack_50 = lVar2;
        func_0x00010c09c160(lVar3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_destroyWeak(auStack_58);
        _objc_destroyWeak(auStack_48);
      }
      _objc_release(lVar3);
    }
    else {
      func_0x00010be7c6e0(param_1);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1060bb06c; end: 1060bb0e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060bb06c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (param_1 != 0)) {
    lVar2 = (long)_DAT_11273ec88;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_2;
    _objc_release(uVar1);
    func_0x00010be7c6e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060bb0e8; end: 1060bb477; -[SCFeatureMusicMemoriesButtonImpl _presentMemoriesPickerWithMusicSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060bb0e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  lVar11 = (long)_DAT_11273ec70;
  lVar12 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar12);
  lVar10 = lVar12;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar10;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar12);
  puVar2 = PTR_PTR_1126aff58;
  _objc_alloc(PTR_PTR_1126aff58);
  func_0x00010c038f60();
  lVar12 = (long)_DAT_11273ec78;
  if ((*(long *)(param_1 + lVar12) != 0) &&
     (lVar10 = (long)_DAT_11273ec7c, *(long *)(param_1 + lVar10) != 0)) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273ec74);
    func_0x00010bf9c660();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    func_0x00010c290ac0();
    _objc_release(uVar9);
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      puStack_88 = &uStack_90;
      uStack_90 = 0;
      uStack_80 = 0x3032000000;
      pcStack_78 = FUN_1060bb478;
      uStack_70 = 0x1060bb488;
      puStack_68 = (undefined *)0x0;
      lVar5 = param_1 + lVar11;
      _objc_loadWeakRetained(lVar5);
      lVar6 = lVar5;
      func_0x00010c131bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bcaa0();
      _objc_release(lVar6);
      _objc_release(lVar5);
      puVar7 = PTR_PTR_1126c7bb8;
      _objc_alloc();
      func_0x00010c02cee0();
      uVar9 = *(undefined8 *)(param_1 + lVar10);
      lVar11 = param_1 + lVar11;
      _objc_loadWeakRetained(lVar11);
      func_0x00010c247a20();
      func_0x00010bf24240(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      func_0x00010c08b7c0(*(undefined8 *)(param_1 + lVar12));
      _objc_release(uVar9);
      _objc_release(puVar7);
      __Block_object_dispose(&uStack_90,8);
      puVar7 = puStack_68;
      goto LAB_1060bb41c;
    }
  }
  puVar7 = PTR_PTR_1126b47b8;
  _objc_alloc(PTR_PTR_1126b47b8);
  lVar11 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010c131bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05aa60(puVar7);
  _objc_release(lVar12);
  _objc_release(lVar11);
  func_0x000107e483a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6260(puVar7);
  _objc_release(lVar11);
  func_0x00010c1ca160(puVar7);
  puVar8 = PTR_PTR_1126b47c0;
  _objc_alloc(PTR_PTR_1126b47c0);
  func_0x00010c00b040();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11273ec6c));
  _objc_release(puVar8);
LAB_1060bb41c:
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1060bb478; end: 1060bb48f;  */

void FUN_1060bb478(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1060bb490; end: 1060bb4cf;  */

void FUN_1060bb490(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060bb4d0; end: 1060bb507; -[SCFeatureMusicMemoriesButtonImpl _updateMusicSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060bb4d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273ec88);
  *(undefined8 *)(param_1 + _DAT_11273ec88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060bb508; end: 1060bb5af; -[SCFeatureMusicMemoriesButtonImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060bb508(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273ec88,0);
  _objc_storeStrong(param_1 + _DAT_11273ec84,0);
  _objc_storeStrong(param_1 + _DAT_11273ec80,0);
  _objc_storeStrong(param_1 + _DAT_11273ec7c,0);
  _objc_storeStrong(param_1 + _DAT_11273ec78,0);
  _objc_storeStrong(param_1 + _DAT_11273ec74,0);
  _objc_destroyWeak(param_1 + _DAT_11273ec70);
  _objc_storeStrong(param_1 + _DAT_11273ec6c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273ec68);
  return;
}



/* Entry: 1060bb5b0; end: 1060bb8df; -[SCSoundPillManager initWithEditorPresentationObservable:musicSelectionObservable:recommendationObservable:miniCarouselObservable:soundPillScopeExposer:recipientNameFeature:containerView:scopedCameraType:soundPillScopeDelegate:isBatchCaptureActivatedObservable:] */

undefined8 *
FUN_1060bb5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126ef8a0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar6 = param_3;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[1];
    puVar1[1] = uVar6;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc();
    puVar4 = PTR_PTR_1126b60f8;
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2b40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060400();
    uVar6 = puVar1[0xd];
    puVar1[0xd] = puVar2;
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_4;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[2];
    puVar1[2] = uVar5;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_5;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[3];
    puVar1[3] = uVar6;
    _objc_release(uVar5);
    _objc_release(puVar4);
    uVar6 = param_6;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[4];
    puVar1[4] = uVar6;
    _objc_release(uVar5);
    uVar6 = param_12;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[5];
    puVar1[5] = uVar6;
    _objc_release(uVar5);
    _objc_retain(param_7);
    uVar6 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar6);
    _objc_retain(param_8);
    uVar6 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar6);
    _objc_retain(param_9);
    uVar6 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar6);
    puVar1[10] = param_10;
    _objc_storeWeak(puVar1 + 0xb,param_11);
  }
  func_0x00010beafda0(puVar1);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1060bb8e0; end: 1060bb983;  */

void FUN_1060bb8e0(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf1f3c0();
  if ((int)puVar2 == 0) {
    puVar2 = PTR_PTR_1126b60f8;
    func_0x00010c0f2b40(PTR_PTR_1126b60f8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_3);
    puVar2 = param_3;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060bb984; end: 1060bba13; -[SCSoundPillManager updateNominatedSelection:] */

void FUN_1060bb984(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae750;
  if (param_3 == 0) {
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2468a0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  puVar2 = PTR_PTR_1126b60f8;
  func_0x00010c0f2b40(PTR_PTR_1126b60f8,param_2,PTR____kCFBooleanTrue_11034ab68,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060bba14; end: 1060bbae3; -[SCSoundPillManager clearNominatedSelection] */

void FUN_1060bba14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf1f3c0();
  _objc_release(uVar5);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b60f8;
  if ((int)uVar2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f2b40(puVar4,param_2,PTR____kCFBooleanFalse_11034ab60,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5,param_2,puVar4);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1060bbae4; end: 1060bbc27; -[SCSoundPillManager soundPillIsPresentedObservable] */

void FUN_1060bbae4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar3);
  func_0x00010bebe480(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1060bbbb4;
  puStack_40 = &UNK_11090cdc8;
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  lVar1 = param_1;
  func_0x00010c0b8600(param_1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(uStack_38);
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1060bbc28; end: 1060bbdfb; -[SCSoundPillManager reservedSoundPillBottomEdge] */

void FUN_1060bbc28(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  
  lVar5 = *(long *)(param_5 + 0x70);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c08cdc0(*(undefined8 *)(param_5 + 0x48));
    lVar1 = param_5;
    func_0x00010beea1e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar3 = *(undefined8 *)(param_5 + 0x48);
      func_0x00010c149040(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08cd20();
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_5 + 0x48);
      dVar6 = param_1;
      _CGRectGetMinX(param_1,param_2,param_3,param_4);
      _CGRectGetMinY(param_1,param_2,param_3,param_4);
      func_0x00010bf512a0(dVar6,param_1,uVar3,param_6,0);
      func_0x00010bebe4a0(param_5);
      param_1 = param_1 + dVar6;
    }
    else {
      lVar2 = lVar1;
      func_0x00010c262ca0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08cdc0();
      _objc_release(lVar2);
      func_0x00010bf20c00(lVar1);
      func_0x00010bf51460(lVar1,param_6,0);
      _CGRectGetMaxY();
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1 + 56.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  else {
    lVar1 = lVar5;
    func_0x00010c262ca0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar1);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf20c00(lVar5);
    func_0x00010bf51460(lVar5,param_6,0);
    _CGRectGetMaxY();
    func_0x00010c0df720(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1060bbdfc; end: 1060bbf0b; -[SCSoundPillManager _setupSoundPillScope] */

void FUN_1060bbdfc(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    lVar2 = param_1;
    func_0x00010be5c320();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar2;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c4808;
    _objc_alloc(PTR_PTR_1126c4808);
    lVar2 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    lVar4 = param_1;
    func_0x00010bebe480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00b380(puVar3,param_2,lVar2,uVar5,lVar4,0,0,0x51);
    _objc_release(lVar4);
    _objc_release(lVar2);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1060bbf0c; end: 1060bc03b; -[SCSoundPillManager _soundPillObservable] */

void FUN_1060bbf0c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 == 0) {
    lVar4 = *(long *)(param_1 + 0x50);
    _objc_initWeak(auStack_48,param_1);
    puVar1 = PTR_PTR_1126ae6b8;
    lVar3 = param_1;
    func_0x00010be65920(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = lVar4 == 0xb;
    func_0x00010bf41860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined **)(param_1 + 0x60) = puVar1;
    _objc_release(uVar2);
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + 0x60);
    _objc_retain(lVar3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  else {
    _objc_retain(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1060bc03c; end: 1060bc71b;  */

void FUN_1060bc03c(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar14 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar14 == 0) {
    puVar13 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1060bc350;
  }
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_1060bc71c;
  uStack_110 = 0x1060bc72c;
  uStack_108 = 0;
  puStack_158 = &uStack_160;
  uStack_160 = 0;
  uStack_150 = 0x3032000000;
  pcStack_148 = FUN_1060bc71c;
  uStack_140 = 0x1060bc72c;
  uStack_138 = 0;
  puStack_178 = &uStack_180;
  uStack_180 = 0;
  uStack_170 = 0x2020000000;
  uStack_168 = 0;
  puStack_1a8 = &uStack_1b0;
  uStack_1b0 = 0;
  uStack_1a0 = 0x3032000000;
  pcStack_198 = FUN_1060bc71c;
  uStack_190 = 0x1060bc72c;
  uStack_188 = 0;
  puStack_1d8 = &uStack_1e0;
  uStack_1e0 = 0;
  uStack_1d0 = 0x3032000000;
  pcStack_1c8 = FUN_1060bc71c;
  uStack_1c0 = 0x1060bc72c;
  uStack_1b8 = 0;
  puStack_208 = &uStack_210;
  uStack_210 = 0;
  uStack_200 = 0x3032000000;
  pcStack_1f8 = FUN_1060bc71c;
  uStack_1f0 = 0x1060bc72c;
  uStack_1e8 = 0;
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      func_0x00010c0bf3a0(*(undefined8 *)(lVar16 * 8));
      lVar16 = lVar16 + 1;
    } while (lVar4 != lVar16);
    lVar4 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  uVar3 = puStack_1d8[5];
  func_0x00010bf1f3c0();
  if ((uVar3 & 1) == 0) {
    iVar2 = (int)puStack_208[5];
    func_0x00010bf1f3c0();
    if (iVar2 != 0) goto LAB_1060bc2ac;
    if (*(char *)(puStack_178 + 3) == '\x01') {
      lVar4 = puStack_158[5];
      func_0x00010c0ec5e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 != 0) goto LAB_1060bc3d4;
      puVar13 = PTR_PTR_1126ae750;
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
LAB_1060bc3d4:
      lVar4 = puStack_158[5];
      func_0x00010c0ec5e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 == 0) {
        lVar4 = puStack_1a8[5];
        func_0x00010c0ec5e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar10 = PTR_PTR_1126c47d8;
        puVar13 = PTR_PTR_1126ae750;
        if (lVar4 == 0) {
          puVar13 = (undefined *)(ulong)*(byte *)(param_1 + 0x28);
          func_0x0001060bc8a8(puVar13);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          uVar9 = puStack_1a8[5];
          func_0x00010c0ec5e0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c123300(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2468a0(puVar13);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          _objc_release(uVar9);
        }
      }
      else {
        uVar5 = puStack_158[5];
        func_0x00010c0ec5e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar5;
        func_0x00010841fae8();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        uVar6 = puStack_158[5];
        func_0x00010c0ec5e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar6;
        func_0x00010bf5cba0();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar5;
        func_0x00010bfd8520();
        if ((int)uVar15 == 0) {
          uVar15 = 0;
        }
        else {
          uVar7 = puStack_158[5];
          func_0x00010c0ec5e0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar7;
          func_0x00010bf5cba0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar11;
          func_0x00010c091e80();
          _objc_retainAutoreleasedReturnValue();
          uVar15 = uVar8;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          _objc_release(uVar11);
          _objc_release(uVar7);
        }
        _objc_release(uVar5);
        _objc_release(uVar6);
        uVar5 = puStack_158[5];
        func_0x00010c0ec5e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be9e3e0(lVar14);
        _objc_release(uVar5);
        puVar10 = PTR_PTR_1126c47e0;
        _objc_alloc(PTR_PTR_1126c47e0);
        uVar11 = puStack_158[5];
        func_0x00010c0ec5e0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar11;
        func_0x00010c15a4a0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0b3ae0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c247a20();
        func_0x00010c04ab40(puVar10);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar11);
        puVar13 = PTR_PTR_1126ae750;
        puVar12 = PTR_PTR_1126c47d8;
        func_0x00010c0fb980(PTR_PTR_1126c47d8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2468a0(puVar13);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        _objc_release(puVar10);
        _objc_release(uVar15);
        _objc_release(uVar9);
      }
    }
  }
  else {
LAB_1060bc2ac:
    puVar13 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_210,8);
  _objc_release(uStack_1e8);
  __Block_object_dispose(&uStack_1e0,8);
  _objc_release(uStack_1b8);
  __Block_object_dispose(&uStack_1b0,8);
  _objc_release(uStack_188);
  __Block_object_dispose(&uStack_180,8);
  __Block_object_dispose(&uStack_160,8);
  _objc_release(uStack_138);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(uStack_108);
LAB_1060bc350:
  _objc_release(lVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_210,8);
  __Block_object_dispose(&uStack_1e0,8);
  __Block_object_dispose(&uStack_1b0,8);
  __Block_object_dispose(&uStack_180,8);
  __Block_object_dispose(&uStack_160,8);
  lVar14 = 8;
  __Block_object_dispose(&uStack_130);
  __Unwind_Resume();
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar14 + 0x28);
  *(undefined8 *)(lVar14 + 0x28) = 0;
  return;
}



/* Entry: 1060bc71c; end: 1060bc733;  */

void FUN_1060bc71c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1060bc734; end: 1060bc797;  */

void FUN_1060bc734(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1060bc798; end: 1060bc91f;  */

void FUN_1060bc798(long param_1,undefined8 param_2)

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



/* Entry: 1060bc920; end: 1060bca4f; -[SCSoundPillManager _observables] */

void FUN_1060bc920(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_11090cea8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa140(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_11090cee8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa140(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_11090cf28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa140(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_11090cf48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa140(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_11090cf68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa140(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060bca50; end: 1060bca7f;  */

void FUN_1060bca50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7bc0;
  func_0x00010bf1f3c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf8ca50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_editorShowingEventWithShowing__1125c0c38,param_2);
  return;
}



/* Entry: 1060bca80; end: 1060bcb1b;  */

void FUN_1060bca80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126c7bc0;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c154b60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bfb0d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf1f3c0(uVar2);
  func_0x00010c0fb960(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1060bcb1c; end: 1060bcb2b;  */

void FUN_1060bcb1c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1232f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c7bc0,PTR_s_recommendedSoundEventWithRecomme_1126266d8,param_2);
  return;
}



/* Entry: 1060bcb2c; end: 1060bcb8b;  */

void FUN_1060bcb2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7bc0;
  func_0x00010bf1f3c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0ce130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_miniCarouselEventWithShowing__112611260,param_2);
  return;
}



/* Entry: 1060bcb8c; end: 1060bcc9b; -[SCSoundPillManager _makeSoundPillViewContainer] */

void FUN_1060bcb8c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126af4a8;
  _objc_alloc(PTR_PTR_1126af4a8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1060bcc9c;
  puStack_58 = &UNK_110849710;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0311a0(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060bcc9c; end: 1060bcd37;  */

void FUN_1060bcc9c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd0640();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060bcd38; end: 1060bcda3; -[SCSoundPillManager _attachSoundPillView:] */

void FUN_1060bcd38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x48));
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + 0x70));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bde6590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__constrainSoundPillView_112557300);
  return;
}



/* Entry: 1060bcda4; end: 1060bcdcf; -[SCSoundPillManager _detachSoundPillView] */

void FUN_1060bcda4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x70));
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060bcdd0; end: 1060bd057; -[SCSoundPillManager _constrainSoundPillView] */

void FUN_1060bcdd0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf34860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x00010bf493a0(uVar2,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  uStack_80 = uVar15;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x00010bf49420(0x404c000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  uStack_78 = uVar14;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c2a5060(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf49520(0xc06a000000000000,uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar14);
  _objc_release(uVar4);
  _objc_release(uVar15);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar9 = param_1;
  func_0x00010beea1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(param_1 + 0x70);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 == 0) {
    lVar11 = *(long *)(param_1 + 0x48);
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebe4a0(param_1);
    lVar13 = lVar10;
    func_0x00010bf493c0(lVar10,param_2,lVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(lVar13);
  }
  else {
    lVar11 = lVar9;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar10;
    func_0x00010bf493a0(lVar10,param_2,lVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
  }
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar14 = *(undefined8 *)(lVar9 + 0x38);
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c07be60();
  _objc_release(uVar14);
  if ((int)uVar15 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(lVar9 + 0x38);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar15;
    func_0x00010c122ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
    uVar7 = uVar14;
    func_0x00010c074c20();
    uVar15 = 0;
    if ((int)uVar7 == 0) {
      uVar15 = uVar14;
    }
    _objc_retain(uVar15);
    _objc_release(uVar14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar15);
  return;
}



/* Entry: 1060bd058; end: 1060bd0fb; -[SCSoundPillManager _visibleRecipientView] */

void FUN_1060bd058(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07be60();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c122ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar3 = uVar1;
    func_0x00010c074c20();
    uVar2 = 0;
    if ((int)uVar3 == 0) {
      uVar2 = uVar1;
    }
    _objc_retain(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060bd0fc; end: 1060bd123; -[SCSoundPillManager _soundPillSafeAreaTopOffset] */

undefined8 FUN_1060bd0fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x4030000000000000;
  if (*(long *)(param_1 + 0x50) != 0xb) {
    uVar1 = 0x4014000000000000;
  }
  uVar2 = 0xc047800000000000;
  if (*(long *)(param_1 + 0x50) != 3) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 1060bd124; end: 1060bd223; -[SCSoundPillManager _selectionShouldAutoPlay:] */

bool FUN_1060bd124(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c247a20();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 == 0xc9) {
      bVar1 = true;
    }
    else {
      lVar2 = param_3;
      func_0x00010bf5cba0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        bVar1 = false;
      }
      else {
        lVar3 = param_3;
        func_0x00010c15a4a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0b3ae0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c247a20();
        bVar1 = lVar5 == 200;
        _objc_release(lVar4);
        _objc_release(lVar3);
      }
      _objc_release(lVar2);
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1060bd224; end: 1060bd22b; -[SCSoundPillManager soundPillView] */

undefined8 FUN_1060bd224(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1060bd22c; end: 1060bd2db; -[SCSoundPillManager .cxx_destruct] */

void FUN_1060bd22c(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
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



/* Entry: 1060bd2dc; end: 1060bd337; +[SCSoundPillEvent batchCaptureActivatedEventWithActivated:] */

void FUN_1060bd2dc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c7bc0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  puVar2[0x2a] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060bd338; end: 1060bd393; +[SCSoundPillEvent editorShowingEventWithShowing:] */

void FUN_1060bd338(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c7bc0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  puVar2[0x29] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060bd394; end: 1060bd3ef; +[SCSoundPillEvent miniCarouselEventWithShowing:] */

void FUN_1060bd394(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c7bc0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  puVar2[0x28] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060bd3f0; end: 1060bd45b; +[SCSoundPillEvent pickedSoundEventWithSelection:isNomination:] */

void FUN_1060bd3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c7bc0;
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



/* Entry: 1060bd45c; end: 1060bd4c7; +[SCSoundPillEvent recommendedSoundEventWithRecommendation:] */

void FUN_1060bd45c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c7bc0;
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



/* Entry: 1060bd4c8; end: 1060bd4eb; -[SCSoundPillEvent copyWithZone:] */

undefined8 FUN_1060bd4c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1060bd4ec; end: 1060bd577; -[SCSoundPillEvent hash] */

void FUN_1060bd4ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 0x28);
  uStack_38 = (ulong)*(byte *)(param_1 + 0x29);
  uStack_30 = (ulong)*(byte *)(param_1 + 0x2a);
  uStack_48 = uVar2;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126ef8a8;
  puStack_90 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060bd578; end: 1060bd5bb; -[SCSoundPillEvent internalInit] */

void FUN_1060bd578(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ef8a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060bd5bc; end: 1060bd6b3; -[SCSoundPillEvent isEqual:] */

long FUN_1060bd5bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1060bd68c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1060bd698;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))) &&
         (*(char *)(param_1 + 0x28) == *(char *)(param_3 + 0x28))))) &&
       ((*(char *)(param_1 + 0x29) == *(char *)(param_3 + 0x29) &&
        (*(char *)(param_1 + 0x2a) == *(char *)(param_3 + 0x2a))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_1060bd698;
        }
        goto LAB_1060bd68c;
      }
    }
    lVar3 = 0;
  }
LAB_1060bd698:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1060bd6b4; end: 1060bd7df; -[SCSoundPillEvent matchPickedSoundEvent:recommendedSoundEvent:miniCarouselEvent:editorShowingEvent:batchCaptureActivatedEvent:] */

void FUN_1060bd6b4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  undefined1 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x18));
      }
    }
    else if ((lVar2 == 1) && (param_4 != 0)) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else {
    if (lVar2 == 2) {
      if (param_5 == 0) goto LAB_1060bd7a8;
      uVar1 = *(undefined1 *)(param_1 + 0x28);
      pcVar3 = *(code **)(param_5 + 0x10);
      lVar2 = param_5;
    }
    else if (lVar2 == 3) {
      if (param_6 == 0) goto LAB_1060bd7a8;
      uVar1 = *(undefined1 *)(param_1 + 0x29);
      pcVar3 = *(code **)(param_6 + 0x10);
      lVar2 = param_6;
    }
    else {
      if ((lVar2 != 4) || (param_7 == 0)) goto LAB_1060bd7a8;
      uVar1 = *(undefined1 *)(param_1 + 0x2a);
      pcVar3 = *(code **)(param_7 + 0x10);
      lVar2 = param_7;
    }
    (*pcVar3)(lVar2,uVar1);
  }
LAB_1060bd7a8:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1060bd7e0; end: 1060bd80f; -[SCSoundPillEvent .cxx_destruct] */

void FUN_1060bd7e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1060bd810; end: 1060bdb3b;  */

undefined8 FUN_1060bd810(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c073580();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0f5820(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1060bdb3c; end: 1060bdc0f;  */

undefined4 FUN_1060bdb3c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc9af8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dc9af8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc9b18;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dc9b18,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e3d598;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e3d598,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110dc9b58;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dc9b58,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110dc9b78;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dc9b78,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110dc9b98;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dc9b98,param_2,param_1);
            uVar2 = 5;
            if (ppuVar1 != (undefined **)0x0) {
              uVar2 = 0;
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1060bdc10; end: 1060bdc3f; -[SCDualStreamCamModeCameraToolbarItem setDualStreamCamLayout:animated:] */

void FUN_1060bdc10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c1b4280(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsDisplay__112650980,param_4);
  return;
}



/* Entry: 1060bdc40; end: 1060bdc87; -[SCDualStreamCamModeCameraToolbarItem setIsSelected:] */

void FUN_1060bdc40(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ef8b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setIsSelected__11264aac8);
  func_0x00010c1cbd00(param_1);
  return;
}



/* Entry: 1060bdc88; end: 1060bddaf; -[SCDualStreamCamModeLayoutSelectionToolbarItem initWithPosition:activeLayout:] */

undefined1 * FUN_1060bdc88(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126ef8b8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithPosition__1125eb8f8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fb99999a0000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cdb40(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf414e0(0x3fb99999a0000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1faec0(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c200900(puVar1);
    func_0x00010c160fc0(puVar1);
    func_0x00010c1627e0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1060bddb0; end: 1060bde37; -[SCDualStreamCamModeLayoutSelectionToolbarItem setActiveLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060bddb0(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273ece0;
  *(undefined4 *)(param_1 + lVar2) = param_3;
  func_0x00010bed9840();
  lVar1 = param_1;
  func_0x00010bdc3f60(param_1,param_2,*(undefined4 *)(param_1 + lVar2));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1610c0(param_1,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bdc3f60(param_1,param_2,*(undefined4 *)(param_1 + lVar2));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1610e0(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060bde38; end: 1060bded7; -[SCDualStreamCamModeLayoutSelectionToolbarItem _accessibilityValueForLayout:] */

void FUN_1060bde38(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 3) {
    if (param_3 == 0) {
      func_0x00010b0aed14();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 1) {
      func_0x0001060c1614();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 2) {
      func_0x0001060c15fc();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_3 == 5) {
    func_0x0001060c1644();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 4) {
    func_0x0001060c162c();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 3) {
    func_0x0001060c15e4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060bded8; end: 1060bdf8f; -[SCDualStreamCamModeLayoutSelectionToolbarItem setIsShowingWidget:] */

void FUN_1060bded8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ef8b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setIsShowingWidget__11264ab98);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x3fd99999a0000000;
  if (param_3 == 0) {
    uVar3 = 0x3fb99999a0000000;
  }
  puVar2 = puVar1;
  func_0x00010bf414e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1faec0(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c1cbd60(param_1);
  return;
}



/* Entry: 1060bdf90; end: 1060bdfbf; -[SCDualStreamCamModeLayoutSelectionToolbarItem setDualStreamCamLayout:animated:] */

void FUN_1060bdf90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bed9840();
                    /* WARNING: Could not recover jumptable at 0x00010c1fadf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSelected_animated__11265c5a0,1,param_4);
  return;
}



/* Entry: 1060bdfc0; end: 1060bdfeb; -[SCDualStreamCamModeLayoutSelectionToolbarItem setSelected:animated:] */

void FUN_1060bdfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c1b4280();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsDisplay__112650980,param_4);
  return;
}



/* Entry: 1060bdfec; end: 1060be02f; -[SCDualStreamCamModeLayoutSelectionToolbarItem _updateImageWithDualStreamCamLayout:] */

void FUN_1060bdfec(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  
  if (param_3 < 6) {
    puVar1 = (&PTR_PTR_11090cfc0)[param_3];
    func_0x00010c1cdb60(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1fb150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSelectedImageName__11265c678,puVar1);
    return;
  }
  return;
}



/* Entry: 1060be030; end: 1060be03f; -[SCDualStreamCamModeLayoutSelectionToolbarItem activeLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1060be030(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11273ece0);
}



/* Entry: 1060be040; end: 1060be14b; -[SCDualStreamCamModeLogger initWithCameraUserBlizzardLogger:lensId:delegate:] */

undefined1 *
FUN_1060be040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

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
  puStack_48 = PTR_PTR_1126ef8c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_5);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x50) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1060be14c; end: 1060be157; -[SCDualStreamCamModeLogger onEnableDualStreamCamModeFromDM] */

void FUN_1060be14c(long param_1)

{
  *(undefined8 *)(param_1 + 0x48) = 3;
  return;
}



/* Entry: 1060be158; end: 1060be1a7; -[SCDualStreamCamModeLogger beginObservingVideoCaptureEvents:imageCaptureEvents:] */

void FUN_1060be158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010be65d40(param_1,param_2,param_3);
  func_0x00010be65d00(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1060be1a8; end: 1060be1b7; -[SCDualStreamCamModeLogger didTapNonDMDualStreamCamPrimaryButton] */

void FUN_1060be1a8(long param_1)

{
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
  return;
}



/* Entry: 1060be1b8; end: 1060be273; -[SCDualStreamCamModeLogger didTapLayout:] */

void FUN_1060be1b8(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf5f120();
  _objc_release(lVar1);
  if (param_3 != (int)lVar2) {
    lVar1 = 0;
    if (param_3 - 1U < 5) {
      lVar1 = (ulong)(param_3 - 1U) + 1;
    }
    func_0x00010bb02eec(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20),param_2,lVar1);
    _objc_release(lVar1);
  }
  if (param_3 - 1U < 5) {
    uVar3 = *(undefined8 *)(&UNK_10ddd3c88 + (ulong)(param_3 - 1U) * 8);
  }
  else {
    uVar3 = 4;
  }
  func_0x00010b9f8bfc(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28),param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1060be274; end: 1060be38b; -[SCDualStreamCamModeLogger willEnableModeWithActiveCameraPosition:isActivatedFromLensCarousel:] */

void FUN_1060be274(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar3 = (ulong)(param_3 != 0);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010b9f8bfc(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar6,param_2,uVar3);
  _objc_release(uVar3);
  lVar4 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf5f120();
  uVar2 = (int)lVar5 - 1;
  if (uVar2 < 5) {
    uVar6 = *(undefined8 *)(&UNK_10ddd3c88 + (ulong)uVar2 * 8);
  }
  else {
    uVar6 = 4;
  }
  _objc_release(lVar4);
  func_0x00010b9f8bfc(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28),param_2,uVar6);
  lVar4 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf5f120();
  uVar2 = (int)lVar5 - 1;
  lVar5 = 0;
  if (uVar2 < 5) {
    lVar5 = (ulong)uVar2 + 1;
  }
  _objc_release(lVar4);
  func_0x00010bb02eec(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20),param_2,lVar5);
  uVar1 = 5;
  if (param_4 == 0) {
    uVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1060be38c; end: 1060be3e3; -[SCDualStreamCamModeLogger onDisableMode] */

void FUN_1060be38c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = 2;
  func_0x00010b9f8bfc(2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
  return;
}



/* Entry: 1060be3e4; end: 1060be5bb; -[SCDualStreamCamModeLogger usageMetrics] */

void FUN_1060be3e4(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110f312d8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_88 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = *(undefined8 *)(param_1 + 0x28);
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110f31338;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110f312b8;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f312f8;
  lVar3 = param_1 + 0x10;
  puStack_90 = puVar2;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c06dec0();
  func_0x00010c0df6e0(puVar5,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = *(undefined8 *)(param_1 + 0x18);
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110f31358;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110f31378;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar5;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f31318;
  param_1 = param_1 + 0x10;
  puStack_68 = puVar6;
  _objc_loadWeakRetained();
  lVar4 = param_1;
  func_0x00010bf5f120();
  uVar1 = (int)lVar4 - 1;
  lVar4 = 0;
  if (uVar1 < 5) {
    lVar4 = (ulong)uVar1 + 1;
  }
  func_0x00010c0df780(puVar7,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_90,&ppuStack_c8,7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  if ((puVar2[0x40] & 1) == 0) {
    func_0x00010c12adc0(*(undefined8 *)(puVar2 + 0x20));
    func_0x00010c12adc0(*(undefined8 *)(puVar2 + 0x28));
    *(undefined8 *)(puVar2 + 0x50) = 0;
    puVar5 = puVar2 + 0x10;
    _objc_loadWeakRetained();
    puVar7 = puVar5;
    func_0x00010c06dec0();
    _objc_release(puVar5);
    if ((int)puVar7 != 0) {
      puVar5 = puVar2 + 0x10;
      _objc_loadWeakRetained();
      puVar7 = puVar5;
      func_0x00010bf5f120();
      uVar1 = (int)puVar7 - 1;
      lVar3 = 0;
      if (uVar1 < 5) {
        lVar3 = (ulong)uVar1 + 1;
      }
      _objc_release(puVar5);
      func_0x00010bb02eec(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(*(undefined8 *)(puVar2 + 0x20),param_2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
  }
  return;
}



/* Entry: 1060be5bc; end: 1060be673; -[SCDualStreamCamModeLogger reset] */

void FUN_1060be5bc(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x50) = 0;
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c06dec0();
    _objc_release(lVar2);
    if ((int)lVar3 != 0) {
      lVar2 = param_1 + 0x10;
      _objc_loadWeakRetained();
      lVar3 = lVar2;
      func_0x00010bf5f120();
      uVar1 = (int)lVar3 - 1;
      lVar3 = 0;
      if (uVar1 < 5) {
        lVar3 = (ulong)uVar1 + 1;
      }
      _objc_release(lVar2);
      func_0x00010bb02eec(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x20),param_2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
  }
  return;
}



/* Entry: 1060be674; end: 1060be6b3; -[SCDualStreamCamModeLogger didChangeDevicePositionWhileModeEnabled] */

void FUN_1060be674(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = 3;
  func_0x00010b9f8bfc(3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060be6b4; end: 1060bea57; -[SCDualStreamCamModeLogger logCameraShortcutTapWithParameters:] */

void FUN_1060be6b4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *unaff_x20;
  long unaff_x22;
  undefined **unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf90100();
  if ((int)puVar1 == 0) goto LAB_1060bea18;
  uVar2 = 0xc;
  func_0x00010baee46c();
  _objc_retainAutoreleasedReturnValue();
  unaff_x20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = param_3;
  func_0x00010bf4f1a0();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (puVar3 + 1 < (undefined *)0x8) {
    uVar2 = *(undefined8 *)(&UNK_10ddd3cb0 + (long)(puVar3 + 1) * 8);
    if (param_3 != (undefined *)0x0) goto LAB_1060be760;
LAB_1060be858:
    unaff_x23 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    uVar2 = 7;
    if (param_3 == (undefined *)0x0) goto LAB_1060be858;
LAB_1060be760:
    _objc_retain(param_3);
    func_0x00010bf71e20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar4 = param_3;
    func_0x00010bf90100(param_3);
    func_0x00010c0df6e0(puVar3,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e3d698);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar4 = param_3;
    func_0x00010bf8ae40(param_3);
    _objc_release(param_3);
    func_0x00010c0df760(puVar3,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e3d6b8);
    _objc_release(puVar3);
    lStack_68 = 0;
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar1,0,&lStack_68)
    ;
    _objc_retainAutoreleasedReturnValue();
    if (lStack_68 == 0) {
      unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      func_0x00010c008340();
    }
    else {
      unaff_x23 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  unaff_x24 = PTR_PTR_1126c7738;
  _objc_opt_new();
  func_0x00010c176a60();
  puVar1 = param_3;
  func_0x00010c22d640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ffc60(unaff_x24,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010c25b200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20db80(unaff_x24,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1ffd80(unaff_x24,param_2,uVar2);
  func_0x00010c1ffc20(unaff_x24,param_2,unaff_x23);
  lVar5 = param_1 + 8;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar6);
  _objc_release(lVar5);
  unaff_x25 = PTR_PTR_1126c7740;
  _objc_opt_new();
  func_0x00010c176a60();
  puVar1 = param_3;
  func_0x00010c22d640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ffc60(unaff_x25,param_2,puVar1);
  _objc_release(puVar1);
  unaff_x26 = param_3;
  func_0x00010c25b200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20db80(unaff_x25,param_2,unaff_x26);
  _objc_release(unaff_x26);
  func_0x00010c1ffd80(unaff_x25,param_2,uVar2);
  func_0x00010c1ffc20(unaff_x25,param_2,unaff_x23);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  unaff_x22 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = unaff_x25;
  func_0x00010c0b2e60();
  _objc_release(unaff_x22);
  _objc_release(param_1);
  _objc_release(unaff_x25);
  _objc_release(unaff_x24);
  _objc_release(unaff_x23);
  _objc_release(unaff_x20);
LAB_1060bea18:
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_1060bea58;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = unaff_x26;
  puStack_b8 = unaff_x25;
  puStack_b0 = unaff_x24;
  ppuStack_a8 = unaff_x23;
  lStack_a0 = unaff_x22;
  lStack_98 = param_1;
  puStack_90 = unaff_x20;
  puStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  uVar2 = 0xc;
  func_0x00010baee46c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_d0 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_d0,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lStack_d8 = 0;
  puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar3,0,&lStack_d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (lStack_d8 == 0) {
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
  }
  else {
    ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  puVar9 = PTR_PTR_1126c7738;
  _objc_opt_new(PTR_PTR_1126c7738);
  func_0x00010c176a60();
  func_0x00010c1ffc60(puVar9,param_2,uVar2);
  func_0x00010c1ffd80(puVar9,param_2,9);
  func_0x00010c1ffc20(puVar9,param_2,ppuVar8);
  puVar3 = puVar1 + 8;
  _objc_loadWeakRetained(puVar3);
  puVar10 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(puVar10);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c7740;
  _objc_opt_new(PTR_PTR_1126c7740);
  func_0x00010c176a60();
  func_0x00010c1ffc60(puVar3,param_2,uVar2);
  func_0x00010c1ffd80(puVar3,param_2,9);
  func_0x00010c1ffc20(puVar3,param_2,ppuVar8);
  puVar1 = puVar1 + 8;
  _objc_loadWeakRetained();
  puVar10 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(puVar10);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar9);
  _objc_release(ppuVar8);
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126c7bc8;
  _objc_opt_new(PTR_PTR_1126c7bc8);
  func_0x00010c1bbd60();
  puVar4 = puVar4 + 8;
  _objc_loadWeakRetained(puVar4);
  puVar3 = puVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(puVar3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060bea58; end: 1060bec8b; -[SCDualStreamCamModeLogger logCameraShortcutTapFromDeepLinkWithQueryParameters:] */

void FUN_1060bea58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = 0xc;
  func_0x00010baee46c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = uVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  lStack_68 = 0;
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,0,&lStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lStack_68 == 0) {
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  puVar5 = PTR_PTR_1126c7738;
  _objc_opt_new(PTR_PTR_1126c7738);
  func_0x00010c176a60();
  func_0x00010c1ffc60(puVar5,param_2,uVar1);
  func_0x00010c1ffd80(puVar5,param_2,9);
  func_0x00010c1ffc20(puVar5,param_2,ppuVar4);
  lVar6 = param_1 + 8;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar7);
  _objc_release(lVar6);
  puVar8 = PTR_PTR_1126c7740;
  _objc_opt_new(PTR_PTR_1126c7740);
  func_0x00010c176a60();
  func_0x00010c1ffc60(puVar8,param_2,uVar1);
  func_0x00010c1ffd80(puVar8,param_2,9);
  func_0x00010c1ffc20(puVar8,param_2,ppuVar4);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar6 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126c7bc8;
  _objc_opt_new(PTR_PTR_1126c7bc8);
  func_0x00010c1bbd60();
  puVar2 = puVar2 + 8;
  _objc_loadWeakRetained(puVar2);
  puVar5 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(puVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1060bec8c; end: 1060becff; -[SCDualStreamCamModeLogger logMultiCamCarouselActivation] */

void FUN_1060bec8c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c7bc8;
  _objc_opt_new(PTR_PTR_1126c7bc8);
  func_0x00010c1bbd60();
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060bed00; end: 1060bed4b; -[SCDualStreamCamModeLogger _didScheduleCapture] */

void FUN_1060bed00(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c06dec0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return;
}



/* Entry: 1060bed4c; end: 1060bee23; -[SCDualStreamCamModeLogger _observeCaptureVideoStrategyEvents:] */

void FUN_1060bed4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1060bee24; end: 1060bef2f;  */

void FUN_1060bee24(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1060bef30;
  puStack_50 = &UNK_11084ec30;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1060bef30; end: 1060bef5b;  */

void FUN_1060bef30(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be000e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060bef5c; end: 1060befc3;  */

void FUN_1060bef5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be59d20();
  _objc_release(param_5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060befc4; end: 1060bf09b; -[SCDualStreamCamModeLogger _observeCaptureImageStrategyEvents:] */

void FUN_1060befc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}


