/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e70b04; end: 106e70cc3; -[SCMemoriesEntrySyncStatusGeneratorBuilderServiceProvider _syncStatusGeneratorBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e70b04(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126d2e78;
  _objc_alloc(PTR_PTR_1126d2e78);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112760148;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar8;
  func_0x00010c13f8a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11276014c;
    _objc_loadWeakRetained(lVar9);
  }
  lVar3 = lVar9;
  func_0x00010c0cadc0(lVar9);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112760150;
    _objc_loadWeakRetained(lVar10);
  }
  lVar4 = lVar10;
  func_0x00010bf3e340(lVar10);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112760154;
    _objc_loadWeakRetained(lVar11);
  }
  lVar5 = lVar11;
  func_0x00010c249020(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_112760158;
    _objc_loadWeakRetained(lVar6);
  }
  lVar7 = lVar6;
  func_0x00010c0c8940(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ff40(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e70cc4; end: 106e70d2b; -[SCMemoriesEntrySyncStatusGeneratorBuilderServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e70cc4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112760158);
  _objc_destroyWeak(param_1 + _DAT_112760154);
  _objc_destroyWeak(param_1 + _DAT_112760150);
  _objc_destroyWeak(param_1 + _DAT_11276014c);
  _objc_destroyWeak(param_1 + _DAT_112760148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112760144);
  return;
}



/* Entry: 106e70d2c; end: 106e70d3b;  */

void FUN_106e70d2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106e70d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 106e70d3c; end: 106e70e9f; -[SCGalleryEntrySyncStatusGenerator initWithEntry:selectMode:retryDataMutator:mergedDataSource:cloudSync:spectaclesManager:memoriesExperimentService:] */

undefined1 *
FUN_106e70d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f7798;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x48) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    func_0x00010bdf4700(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e70ea0; end: 106e7103b; -[SCGalleryEntrySyncStatusGenerator initWithSnap:entry:selectMode:retryDataMutator:mergedDataSource:cloudSync:spectaclesManager:shouldCreateIcon:memoriesExperimentService:] */

undefined1 *
FUN_106e70ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,char param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f7798;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x48) = param_5;
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
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_12;
    _objc_release(uVar2);
    if (param_10 != '\0') {
      func_0x00010bdf4700(puVar1);
    }
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e7103c; end: 106e7106b; -[SCGalleryEntrySyncStatusGenerator updateEntry:] */

void FUN_106e7103c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e7106c; end: 106e7109b; -[SCGalleryEntrySyncStatusGenerator updateSnap:] */

void FUN_106e7106c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106e7109c; end: 106e710ef; -[SCGalleryEntrySyncStatusGenerator _createSyncStatusIcon] */

void FUN_106e7109c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cfb28;
  _objc_alloc();
  func_0x00010c01afa0();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010befbd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_addTarget_action_forControlEvent_11259c900,
             param_1,PTR_s__presentBackupAlert_112535828,0x40);
  return;
}



/* Entry: 106e710f0; end: 106e710fb; -[SCGalleryEntrySyncStatusGenerator _startInfiniteSyncAnimationWithIsTacomaEnabled:] */

void FUN_106e710f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec1b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x7f800000,param_1,PTR_s__startSyncAnimationWithRepeatCou_11258e078);
  return;
}



/* Entry: 106e710fc; end: 106e71107; -[SCGalleryEntrySyncStatusGenerator _startTransitorySyncAnimationWithIsTacomaEnabled:] */

void FUN_106e710fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec1b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3f800000,param_1,PTR_s__startSyncAnimationWithRepeatCou_11258e078,1);
  return;
}



/* Entry: 106e71108; end: 106e7136f; -[SCGalleryEntrySyncStatusGenerator _startSyncAnimationWithRepeatCount:isTacomaEnabled:] */

void FUN_106e71108(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined **)(param_2 + 0x50);
  uVar7 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf03c40();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar2 != (undefined *)0x0) {
      return;
    }
    puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_3,
                        &PTR____CFConstantStringClassReference_110e2a518);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c192d40(0x4004000000000000);
    func_0x00010c216920(puVar2,param_3,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111184dd0);
    func_0x00010c1eabe0(param_1,puVar2);
    func_0x00010c1ea580(puVar2,param_3,0);
    puVar1 = *(undefined **)(param_2 + 0x50);
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
  }
  else {
    _objc_release(puVar1);
    func_0x00010c130b40(puVar2);
    if ((float)uVar7 == (float)param_1) goto LAB_106e71354;
    puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_3,
                        &PTR____CFConstantStringClassReference_110e2a518);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c10f4e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c296f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(uVar7,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar1,param_3,puVar6);
    _objc_release(puVar6);
    func_0x00010c192d40(0x4004000000000000,puVar1);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720((double)(float)uVar7 + 6.283185307179586,
                        PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar1,param_3,puVar6);
    _objc_release(puVar6);
    func_0x00010c1eabe0(param_1,puVar1);
    func_0x00010c1ea580(puVar1,param_3,0);
    uVar7 = *(undefined8 *)(param_2 + 0x50);
    func_0x00010c08c0e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(uVar7);
  }
  _objc_release(puVar1);
LAB_106e71354:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106e71370; end: 106e71403; -[SCGalleryEntrySyncStatusGenerator _stopSyncAnimation] */

void FUN_106e71370(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf03c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12b200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 106e71404; end: 106e71543; -[SCGalleryEntrySyncStatusGenerator _updateIcon] */

void FUN_106e71404(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 - 1U < 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    uVar2 = 2;
LAB_106e71458:
    func_0x00010c1a9820(uVar1,param_2,uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x50);
  }
  else {
    if (lVar3 == 3) {
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      uVar2 = 1;
      goto LAB_106e71458;
    }
    if (lVar3 != 0) goto LAB_106e71468;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
  }
  func_0x00010c1a7f60(uVar1);
LAB_106e71468:
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf0c2e0(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106e71544; end: 106e7154b;  */

void FUN_106e71544(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0809f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isTacomaBackupOrchestratorEnable_1125fdc88);
  return;
}



/* Entry: 106e7154c; end: 106e71617;  */

void FUN_106e7154c(long param_1,int param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_106e71604;
  lVar1 = *(long *)(param_1 + 0x60);
  if (param_2 == 0) {
    if (lVar1 == 2) goto LAB_106e715a4;
LAB_106e715ac:
    func_0x00010bec39c0(param_1);
  }
  else if (lVar1 == 1) {
    func_0x00010bec1e40(param_1);
  }
  else {
    if (lVar1 != 2) goto LAB_106e715ac;
LAB_106e715a4:
    func_0x00010bec01e0(param_1);
  }
  func_0x00010c21e900(*(undefined8 *)(param_1 + 0x50));
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2666a0();
  _objc_release(lVar1);
LAB_106e71604:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e71618; end: 106e71627; -[SCGalleryEntrySyncStatusGenerator isShowingSyncStatusIcon] */

bool FUN_106e71618(long param_1)

{
  return *(long *)(param_1 + 0x60) != 0;
}



/* Entry: 106e71628; end: 106e7162f; -[SCGalleryEntrySyncStatusGenerator setSelectMode:] */

void FUN_106e71628(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed9510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateIcon_112593ee8);
  return;
}



/* Entry: 106e71630; end: 106e716fb; -[SCGalleryEntrySyncStatusGenerator _isSnapPartOfCurrentSpectaclesTransferSession] */

undefined8 FUN_106e71630(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  uVar5 = 0;
  if (lVar1 != 0) {
    func_0x00010b5fa088();
    if (lVar1 - 2U < 0xb) {
      lVar1 = *(long *)(param_1 + 0x10);
      func_0x00010c0e0160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) {
        uVar5 = 1;
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c282b60();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c0c5180(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010bf4b900(uVar3,param_2,uVar4);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}



/* Entry: 106e716fc; end: 106e718df; -[SCGalleryEntrySyncStatusGenerator startGeneratingUpdates] */

void FUN_106e716fc(double param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if ((*(byte *)(param_2 + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_2 + 0x18) = 1;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0742e0();
  _objc_release(uVar2);
  if ((int)uVar5 == 0) {
    uVar3 = *(ulong *)(param_2 + 0x10);
    if (uVar3 == 0) {
      iVar1 = (int)*(undefined8 *)(param_2 + 8);
      func_0x00010c0f7a20();
      if (0 < iVar1) {
LAB_106e7179c:
        uVar5 = 1;
        goto LAB_106e717a0;
      }
    }
    else {
      func_0x00010bfdd120();
      if ((uVar3 & 1) == 0) {
        uVar3 = *(ulong *)(param_2 + 0x10);
        func_0x00010c080ca0();
        if (((uVar3 & 1) == 0) && (uVar3 = param_2, func_0x00010be43d60(), (uVar3 & 1) == 0))
        goto LAB_106e7179c;
      }
    }
    *(undefined8 *)(param_2 + 0x60) = 0;
  }
  else {
    uVar5 = 3;
LAB_106e717a0:
    *(undefined8 *)(param_2 + 0x60) = uVar5;
  }
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3c0();
  dVar6 = param_1;
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf8b0a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3c0();
  _objc_release(uVar5);
  if ((*(long *)(param_2 + 0x60) == 1) && (param_1 < dVar6)) {
    func_0x00010c256060(param_2);
    _objc_initWeak(auStack_48,param_2);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106e718e0;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x000100c749e0((float)((dVar6 - param_1) + 1.0),"APPSTORE",&puStack_70);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    return;
  }
  func_0x00010bed9500(param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 106e718e0; end: 106e71913;  */

void FUN_106e718e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c24eda0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e71914; end: 106e71963; -[SCGalleryEntrySyncStatusGenerator stopGeneratingUpdates] */

void FUN_106e71914(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cf80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106e71964; end: 106e71993; -[SCGalleryEntrySyncStatusGenerator reset] */

void FUN_106e71964(long param_1)

{
  func_0x00010c256060();
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,0);
  return;
}



/* Entry: 106e71994; end: 106e71997; -[SCGalleryEntrySyncStatusGenerator cloudSync:didChangeStatus:isBackingUpNow:mayUpload:requiresUpgrade:] */

void FUN_106e71994(void)

{
  return;
}



/* Entry: 106e71998; end: 106e71a53; -[SCGalleryEntrySyncStatusGenerator cloudSync:didChangeEntrySyncStatus:entryId:snapId:] */

void FUN_106e71998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106e71a54;
  puStack_58 = &UNK_11084d788;
  uStack_50 = param_1;
  uStack_48 = param_5;
  uStack_40 = param_6;
  uStack_38 = param_4;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 106e71a54; end: 106e71a63;  */

void FUN_106e71a54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be270b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleChangeEntrySyncStatus_ent_1125675c8,
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106e71a64; end: 106e71b5b; -[SCGalleryEntrySyncStatusGenerator _handleChangeEntrySyncStatus:entryId:snapId:] */

void FUN_106e71a64(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010bf97200(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0(param_4,param_2,uVar4);
  _objc_release(param_4);
  _objc_release(uVar4);
  if ((int)uVar1 == 0) goto LAB_106e71b44;
  if ((param_5 != 0) && (lVar2 = *(long *)(param_1 + 0x10), lVar2 != 0)) {
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x00010c0720c0(param_5,param_2,lVar2);
    _objc_release(lVar2);
    if ((int)lVar3 == 0) goto LAB_106e71b44;
  }
  if ((param_3 < 2) || (param_3 == 3)) {
LAB_106e71b38:
    *(ulong *)(param_1 + 0x60) = param_3;
  }
  else if (param_3 == 2) {
    lVar2 = param_1;
    func_0x00010be43d60();
    param_3 = 0;
    if ((int)lVar2 == 0) {
      param_3 = 2;
    }
    goto LAB_106e71b38;
  }
  func_0x00010bed9500(param_1);
LAB_106e71b44:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106e71b5c; end: 106e71dbb; -[SCGalleryEntrySyncStatusGenerator _presentBackupAlert] */

void FUN_106e71b5c(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  int iVar10;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_a8,param_1);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106e71dbc;
  puStack_b8 = &UNK_110849200;
  _objc_copyWeak(auStack_b0,auStack_a8);
  _objc_retain(&puStack_d0);
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e893b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e893b8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af180;
  ppuVar3 = &PTR____CFConstantStringClassReference_110db3738;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db3738,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar6;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106e70d2c;
  puStack_88 = &UNK_1108498b0;
  puStack_80 = (undefined1 *)&puStack_d0;
  _objc_retain(&puStack_d0);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126af180;
  ppuVar5 = &PTR____CFConstantStringClassReference_110dace78;
  iVar10 = 0;
  puStack_78 = puVar4;
  func_0x00010bcbeaa8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  _objc_release(puStack_80);
  _objc_release(&puStack_d0);
  _objc_destroyWeak(auStack_b0);
  puVar8 = auStack_a8;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume();
  puVar8 = puVar8 + 0x20;
  _objc_loadWeakRetained();
  if (((iVar10 != 0) && (puVar8 != (undefined1 *)0x0)) && (*(long *)(puVar8 + 0x60) == 3)) {
    uVar9 = *(undefined8 *)(puVar8 + 0x20);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b2220;
    _objc_alloc(PTR_PTR_1126b2220);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560(puVar6);
    func_0x00010c13f660(uVar9);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 106e71dbc; end: 106e71eb7;  */

void FUN_106e71dbc(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_2 != 0) && (param_1 != 0)) && (*(long *)(param_1 + 0x60) == 3)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b2220;
    _objc_alloc(PTR_PTR_1126b2220);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560(puVar2);
    func_0x00010c13f660(uVar1);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e71eb8; end: 106e71ebf; -[SCGalleryEntrySyncStatusGenerator syncStatusIcon] */

undefined8 FUN_106e71eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106e71ec0; end: 106e71ed7; -[SCGalleryEntrySyncStatusGenerator delegate] */

void FUN_106e71ec0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e71ed8; end: 106e71ee3; -[SCGalleryEntrySyncStatusGenerator setDelegate:] */

void FUN_106e71ed8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 106e71ee4; end: 106e71eeb; -[SCGalleryEntrySyncStatusGenerator status] */

undefined8 FUN_106e71ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106e71eec; end: 106e71ef3; -[SCGalleryEntrySyncStatusGenerator selectMode] */

undefined1 FUN_106e71eec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



/* Entry: 106e71ef4; end: 106e71f73; -[SCGalleryEntrySyncStatusGenerator .cxx_destruct] */

void FUN_106e71ef4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e71f74; end: 106e72097; -[SCMemoriesEntrySyncStatusGeneratorBuilder initWithRetryDataMutator:mergedDataSource:cloudSync:spectaclesManager:memoriesExperimentService:] */

undefined1 *
FUN_106e71f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f77a0;
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



/* Entry: 106e72098; end: 106e7210f; -[SCMemoriesEntrySyncStatusGeneratorBuilder buildWithEntry:selectMode:] */

void FUN_106e72098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2e80;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0101a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e72110; end: 106e721b3; -[SCMemoriesEntrySyncStatusGeneratorBuilder buildWithSnap:entry:selectMode:shouldCreateIcon:] */

void FUN_106e72110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2e80;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c046f60();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e721b4; end: 106e72207; -[SCMemoriesEntrySyncStatusGeneratorBuilder .cxx_destruct] */

void FUN_106e721b4(long param_1)

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



/* Entry: 106e72208; end: 106e72277; -[SCMemoriesStatusIcon initWithIconType:] */

undefined1 * FUN_106e72208(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f77a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_30,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be39d80(puVar1);
    func_0x00010c1a9820(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106e72278; end: 106e72347; -[SCMemoriesStatusIcon _initIcon] */

void FUN_106e72278(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(param_1);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar4 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  uVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(uVar3,uVar4);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3f19999a);
  _objc_release(uVar2);
  func_0x00010c1677c0(0x3fe999999999999a,param_1);
  func_0x00010c21e900(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 106e72348; end: 106e72477; -[SCMemoriesStatusIcon setIconType:] */

/* WARNING: Possible PIC construction at 0x000106e723d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106e72438: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106e723dc) */
/* WARNING: Removing unreachable block (ram,0x000106e7243c) */
/* WARNING: Removing unreachable block (ram,0x000106e72458) */
/* WARNING: Removing unreachable block (ram,0x00010c161020) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e72348(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  *(long *)(param_1 + _DAT_1127601a0) = param_3;
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (param_3 == 2) {
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110e893f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 1) {
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110e893d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 != 0) {
      return;
    }
    puVar1 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a9fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setImage_forState__112648218,puVar1,0);
  return;
}



/* Entry: 106e72478; end: 106e72487; -[SCMemoriesStatusIcon iconType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e72478(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127601a0);
}



/* Entry: 106e72488; end: 106e724fb; -[SCMemoriesEntrySyncStatusGeneratorServices initWithSynStatusGeneratorBuilder:] */

undefined1 * FUN_106e72488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f77b0;
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



/* Entry: 106e724fc; end: 106e72503; -[SCMemoriesEntrySyncStatusGeneratorServices syncStatusGeneratorBuilder] */

undefined8 FUN_106e724fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e72504; end: 106e7250f; -[SCMemoriesEntrySyncStatusGeneratorServices .cxx_destruct] */

void FUN_106e72504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e72510; end: 106e72583; -[SCUserMetadataCacheService initWithMetadataCache:] */

undefined1 * FUN_106e72510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f77b8;
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



/* Entry: 106e72584; end: 106e7258b; -[SCUserMetadataCacheService metadataCache] */

undefined8 FUN_106e72584(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e7258c; end: 106e72597; -[SCUserMetadataCacheService .cxx_destruct] */

void FUN_106e7258c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e72598; end: 106e7259f; -[SCMusicFavoritesComposer musicFavoritesService] */

undefined8 FUN_106e72598(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e725a0; end: 106e725a7; -[SCMusicFavoritesComposer notificationPresenter] */

undefined8 FUN_106e725a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e725a8; end: 106e725af; -[SCMusicFavoritesComposer musicFeatureSettings] */

undefined8 FUN_106e725a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e725b0; end: 106e725eb; -[SCMusicFavoritesComposer .cxx_destruct] */

void FUN_106e725b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e725ec; end: 106e725f3; -[SCMusicRecentsComposer musicRecentsService] */

undefined8 FUN_106e725ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e725f4; end: 106e725ff; -[SCMusicRecentsComposer .cxx_destruct] */

void FUN_106e725f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e72600; end: 106e72607; -[SCMusicSyncServices snapDocFactory] */

undefined8 FUN_106e72600(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e72608; end: 106e72637; -[SCMusicSyncServices .cxx_destruct] */

void FUN_106e72608(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e72638; end: 106e726e3; -[SCMusicSyncTrack initWithTrack:beatSyncData:] */

undefined1 *
FUN_106e72638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f77d8;
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



/* Entry: 106e726e4; end: 106e72707; -[SCMusicSyncTrack copyWithZone:] */

undefined8 FUN_106e726e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e72708; end: 106e7277b; -[SCMusicSyncTrack hash] */

undefined8 * FUN_106e72708(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106e727fc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106e72808;
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
          goto LAB_106e72808;
        }
        goto LAB_106e727fc;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106e72808:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106e7277c; end: 106e72823; -[SCMusicSyncTrack isEqual:] */

long FUN_106e7277c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e727fc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e72808;
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
          goto LAB_106e72808;
        }
        goto LAB_106e727fc;
      }
    }
    lVar3 = 0;
  }
LAB_106e72808:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e72824; end: 106e7282b; -[SCMusicSyncTrack track] */

undefined8 FUN_106e72824(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e7282c; end: 106e72833; -[SCMusicSyncTrack beatSyncData] */

undefined8 FUN_106e7282c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e72834; end: 106e72863; -[SCMusicSyncTrack .cxx_destruct] */

void FUN_106e72834(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e72864; end: 106e7286b; -[SCPlaybackWebProxyServices proxyController] */

undefined8 FUN_106e72864(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e7286c; end: 106e72873; -[SCPlaybackWebProxyServices proxiedUrlProvider] */

undefined8 FUN_106e7286c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e72874; end: 106e728a3; -[SCPlaybackWebProxyServices .cxx_destruct] */

void FUN_106e72874(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e728a4; end: 106e7299f; -[SCIAPTokenInAppPurchaseServices initWithInAppProductService:tokenPackPurchaseService:itemOrderService:itemEntitleService:] */

undefined1 *
FUN_106e728a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f77e8;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e729a0; end: 106e729a7; -[SCIAPTokenInAppPurchaseServices inAppProductService] */

undefined8 FUN_106e729a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e729a8; end: 106e729af; -[SCIAPTokenInAppPurchaseServices tokenPackPurchaseService] */

undefined8 FUN_106e729a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e729b0; end: 106e729b7; -[SCIAPTokenInAppPurchaseServices itemOrderService] */

undefined8 FUN_106e729b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e729b8; end: 106e729bf; -[SCIAPTokenInAppPurchaseServices itemEntitleService] */

undefined8 FUN_106e729b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e729c0; end: 106e72a07; -[SCIAPTokenInAppPurchaseServices .cxx_destruct] */

void FUN_106e729c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e72a08; end: 106e72a73; +[SCIAPTokenFetchPromotionsUpdate failedWithError:] */

void FUN_106e72a08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c01f8;
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



/* Entry: 106e72a74; end: 106e72abb; +[SCIAPTokenFetchPromotionsUpdate started] */

void FUN_106e72a74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c01f8;
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



/* Entry: 106e72abc; end: 106e72b23; +[SCIAPTokenFetchPromotionsUpdate succeededWithPromotions:] */

void FUN_106e72abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c01f8;
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



/* Entry: 106e72b24; end: 106e72b47; -[SCIAPTokenFetchPromotionsUpdate copyWithZone:] */

undefined8 FUN_106e72b24(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e72b48; end: 106e72bbf; -[SCIAPTokenFetchPromotionsUpdate hash] */

void FUN_106e72b48(long param_1)

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
  puStack_68 = PTR_PTR_1126f77f0;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e72bc0; end: 106e72c03; -[SCIAPTokenFetchPromotionsUpdate internalInit] */

void FUN_106e72bc0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f77f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e72c04; end: 106e72cbb; -[SCIAPTokenFetchPromotionsUpdate isEqual:] */

long FUN_106e72c04(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e72c94:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e72ca0;
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
          goto LAB_106e72ca0;
        }
        goto LAB_106e72c94;
      }
    }
    lVar3 = 0;
  }
LAB_106e72ca0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e72cbc; end: 106e72d6b; -[SCIAPTokenFetchPromotionsUpdate matchStarted:succeeded:failed:] */

void FUN_106e72cbc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_106e72d48;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if (lVar2 != 1) {
      if ((lVar2 == 0) && (param_3 != 0)) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
      goto LAB_106e72d48;
    }
    if (param_4 == 0) goto LAB_106e72d48;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar2 = param_4;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_106e72d48:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e72d6c; end: 106e72d9b; -[SCIAPTokenFetchPromotionsUpdate .cxx_destruct] */

void FUN_106e72d6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e72d9c; end: 106e72e33; +[SCIAPTokenConsumeOrderUpdate failedWithOrderIdentifier:error:] */

void FUN_106e72d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c0140;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
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



/* Entry: 106e72e34; end: 106e72e97; +[SCIAPTokenConsumeOrderUpdate startedWithOrderIdentifier:] */

void FUN_106e72e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c0140;
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



/* Entry: 106e72e98; end: 106e72f03; +[SCIAPTokenConsumeOrderUpdate succeededWithOrderIdentifier:] */

void FUN_106e72e98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c0140;
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



/* Entry: 106e72f04; end: 106e72f27; -[SCIAPTokenConsumeOrderUpdate copyWithZone:] */

undefined8 FUN_106e72f04(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e72f28; end: 106e72fb7; -[SCIAPTokenConsumeOrderUpdate hash] */

void FUN_106e72f28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126f77f8;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e72fb8; end: 106e72ffb; -[SCIAPTokenConsumeOrderUpdate internalInit] */

void FUN_106e72fb8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f77f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e72ffc; end: 106e730e3; -[SCIAPTokenConsumeOrderUpdate isEqual:] */

long FUN_106e72ffc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e730bc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e730c8;
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
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_106e730c8;
            }
            goto LAB_106e730bc;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e730c8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e730e4; end: 106e73197; -[SCIAPTokenConsumeOrderUpdate matchStarted:succeeded:failed:] */

void FUN_106e730e4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    }
  }
  else {
    if (lVar2 == 1) {
      if (param_4 == 0) goto LAB_106e73174;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
    else {
      if ((lVar2 != 0) || (param_3 == 0)) goto LAB_106e73174;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    (*pcVar3)(lVar2,uVar1);
  }
LAB_106e73174:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e73198; end: 106e731df; -[SCIAPTokenConsumeOrderUpdate .cxx_destruct] */

void FUN_106e73198(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e731e0; end: 106e73277; +[SCIAPTokenGetUnconsumedOrdersUpdate failedWithAppIdentifier:error:] */

void FUN_106e731e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c0148;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e73278; end: 106e732db; +[SCIAPTokenGetUnconsumedOrdersUpdate startedWithAppIdentifier:] */

void FUN_106e73278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c0148;
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



/* Entry: 106e732dc; end: 106e73373; +[SCIAPTokenGetUnconsumedOrdersUpdate succeededWithAppIdentifier:orders:] */

void FUN_106e732dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c0148;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e73374; end: 106e73397; -[SCIAPTokenGetUnconsumedOrdersUpdate copyWithZone:] */

undefined8 FUN_106e73374(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e73398; end: 106e73433; -[SCIAPTokenGetUnconsumedOrdersUpdate hash] */

void FUN_106e73398(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
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
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126f7800;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e73434; end: 106e73477; -[SCIAPTokenGetUnconsumedOrdersUpdate internalInit] */

void FUN_106e73434(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f7800;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e73478; end: 106e73577; -[SCIAPTokenGetUnconsumedOrdersUpdate isEqual:] */

long FUN_106e73478(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e73550:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e7355c;
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
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_106e7355c;
              }
              goto LAB_106e73550;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e7355c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e73578; end: 106e7362b; -[SCIAPTokenGetUnconsumedOrdersUpdate matchStarted:succeeded:failed:] */

void FUN_106e73578(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

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
    if (param_5 == 0) goto LAB_106e73608;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    pcVar4 = *(code **)(param_5 + 0x10);
    lVar3 = param_5;
  }
  else {
    if (lVar3 != 1) {
      if ((lVar3 == 0) && (param_3 != 0)) {
        (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
      }
      goto LAB_106e73608;
    }
    if (param_4 == 0) goto LAB_106e73608;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    pcVar4 = *(code **)(param_4 + 0x10);
    lVar3 = param_4;
  }
  (*pcVar4)(lVar3,uVar1,uVar2);
LAB_106e73608:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e7362c; end: 106e7367f; -[SCIAPTokenGetUnconsumedOrdersUpdate .cxx_destruct] */

void FUN_106e7362c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e73680; end: 106e73717; +[SCIAPTokenListItemsUpdate failedWithAppIdentifier:error:] */

void FUN_106e73680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c0130;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


