/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091d8c70; end: 1091d8ccf; -[SCLensCarouselStudySettingsProvider .cxx_destruct] */

void FUN_1091d8c70(long param_1)

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



/* Entry: 1091d8cd0; end: 1091d8cff; -[SCLensCarouselCameraReplyConfigurationResolver setReplyConfiguration:] */

void FUN_1091d8cd0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1091d8d00; end: 1091d8d07; -[SCLensCarouselCameraReplyConfigurationResolver replyConfiguration] */

undefined8 FUN_1091d8d00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091d8d08; end: 1091d8d13; -[SCLensCarouselCameraReplyConfigurationResolver .cxx_destruct] */

void FUN_1091d8d08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091d8d14; end: 1091d8de3; -[SCLensCarouselContextImpl initWithConfiguration:contextManager:] */

undefined1 *
FUN_1091d8d14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700d50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_opt_new();
    puVar3 = puVar2;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091d8de4; end: 1091d8ea3; -[SCLensCarouselContextImpl dealloc] */

void FUN_1091d8de4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = uVar3;
  _objc_retain(uVar3);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1091d8ea4;
  puStack_48 = &UNK_110841f80;
  lStack_40 = lVar1;
  uStack_38 = uVar3;
  func_0x00010c0f7fc0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(lVar1);
  puStack_68 = PTR_PTR_112700d50;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091d8ea4; end: 1091d8eaf;  */

void FUN_1091d8ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeContextWithId__1126288c0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1091d8eb0; end: 1091d8ed7; -[SCLensCarouselContextImpl contextId] */

void FUN_1091d8eb0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091d8ed8; end: 1091d8f77; -[SCLensCarouselContextImpl activateWithLensSelection:completion:] */

void FUN_1091d8ed8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1;
  func_0x00010bf4e8a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc5100(param_1);
  func_0x00010beef900(lVar1,param_2,lVar2,param_1,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091d8f78; end: 1091d8f7f; -[SCLensCarouselContextImpl activateWithLensSelection:] */

void FUN_1091d8f78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef0050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_activateWithLensSelection_comple_1125999b8,param_3,0);
  return;
}



/* Entry: 1091d8f80; end: 1091d9043; -[SCLensCarouselContextImpl _activationSource] */

undefined8 FUN_1091d8f80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_70 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1091d9044;
  puStack_50 = &UNK_110868438;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x1091d9058;
  puStack_78 = &UNK_1109668f0;
  puStack_48 = puStack_70;
  puStack_38 = puStack_70;
  func_0x00010c0bf4e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_68,&puStack_90);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1091d9044; end: 1091d9067;  */

void FUN_1091d9044(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1091d9068; end: 1091d909f; -[SCLensCarouselContextImpl .cxx_destruct] */

void FUN_1091d9068(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091d90a0; end: 1091d90ef; -[SCLensCarouselManager lensCarouselDataUpdatingEventsSubject] */

void FUN_1091d90a0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x28);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1091d90f0; end: 1091d913f; -[SCLensCarouselManager lensCarouselSelectionSubject] */

void FUN_1091d90f0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x38);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1091d9140; end: 1091d918f; -[SCLensCarouselManager lensCarouselPresentationEventsSubject] */

void FUN_1091d9140(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1091d9190; end: 1091d925b; -[SCLensCarouselManager registerContextWithConfig:] */

void FUN_1091d9190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ddc38;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c001780();
  puVar3 = PTR_PTR_1126ddc40;
  puVar2 = puVar1;
  func_0x00010bf4e8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1261e0(puVar3,param_2,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  func_0x00010c0908e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091d925c; end: 1091d925f; -[SCLensCarouselManager unregisterContextWithId:] */

void FUN_1091d925c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeContextWithId__1126288c0);
  return;
}



/* Entry: 1091d9260; end: 1091d933b; -[SCLensCarouselManager activateContextWithId:activationSource:lensSelection:completionBlock:] */

void FUN_1091d9260(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ddc48;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR_PTR_1126ddc50;
  func_0x00010beef8e0(PTR_PTR_1126ddc50,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bff0be0(puVar1,param_2,puVar2,0,0,param_5);
  _objc_release(param_5);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar1;
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010bdc49c0(param_1,param_2,*(undefined8 *)(param_1 + 0x90),param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1091d933c; end: 1091d93bb; -[SCLensCarouselManager removeContextWithId:] */

void FUN_1091d933c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010c0908e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ddc40;
  func_0x00010bf6e1a0(PTR_PTR_1126ddc40,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d9840(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091d93bc; end: 1091d93c7; -[SCLensCarouselManager activateWithCompletion:] */

void FUN_1091d93bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeff10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_activateWithActivationSource_com_112599968,0,param_3);
  return;
}



/* Entry: 1091d93c8; end: 1091d93db; -[SCLensCarouselManager activateWithActivationSource:completion:] */

void FUN_1091d93c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc5010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__activateWithActivationSource_co_11254eda0,param_3,0,0,0,param_4);
  return;
}



/* Entry: 1091d93dc; end: 1091d9487; -[SCLensCarouselManager _activateWithActivationSource:controllerState:lensCarouselUIConfiguration:selection:completion:] */

void FUN_1091d93dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 == 0) {
    param_3 = 1;
  }
  else {
    func_0x00010c067fc0(param_3);
  }
  func_0x00010bdc5020(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1091d9488; end: 1091d948f; -[SCLensCarouselManager activate] */

void FUN_1091d9488(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeffb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_activateWithCompletion__112599990,0);
  return;
}



/* Entry: 1091d9490; end: 1091d963f; -[SCLensCarouselManager activateWithParameters:completion:] */

void FUN_1091d9490(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c097620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ddc58;
    _objc_opt_new(PTR_PTR_1126ddc58);
    lVar1 = param_3;
    func_0x00010c097620(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2b2620(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_3;
  func_0x00010bef0340(param_3);
  func_0x00010c0df780(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c091280(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010c15a4a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1091d9640;
  puStack_60 = &UNK_110842508;
  uStack_58 = param_4;
  _objc_retain(param_4);
  func_0x00010bdc5000(param_1,param_2,puVar2,puVar4,lVar1,lVar5,&puStack_78);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(puVar2);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091d9640; end: 1091d9653;  */

void FUN_1091d9640(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001091d964c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1091d9654; end: 1091d9793; -[SCLensCarouselManager deactivateWithCompletion:] */

void FUN_1091d9654(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_1);
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ddc60;
  func_0x00010bf65e00(PTR_PTR_1126ddc60);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2a80();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c24e880(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1091d9794; end: 1091d97bf;  */

void FUN_1091d9794(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf81e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091d97c0; end: 1091d97c7; -[SCLensCarouselManager deactivate] */

void FUN_1091d97c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf65dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_deactivateWithCompletion__1125b7118,0);
  return;
}



/* Entry: 1091d97c8; end: 1091d9853; -[SCLensCarouselManager activateWithLensCarouselType:] */

void FUN_1091d97c8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ddc48;
  _objc_alloc();
  puVar2 = PTR_PTR_1126ddc50;
  func_0x00010beeff60(PTR_PTR_1126ddc50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0be0();
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar1;
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc49b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__activateCarouselWithConfigurati_11254ec08,
             *(undefined8 *)(param_1 + 0x90));
  return;
}



/* Entry: 1091d9854; end: 1091d9947; -[SCLensCarouselManager _activateWithActivationSource:controllerState:lensCarouselUIConfiguration:selection:completionBlock:] */

void FUN_1091d9854(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ddc48;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc();
  puVar2 = PTR_PTR_1126ddc50;
  func_0x00010beef800(PTR_PTR_1126ddc50,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0be0(puVar1,param_2,puVar2,param_4,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar1;
  _objc_release(uVar3);
  _objc_release(puVar2);
  func_0x00010bdc49c0(param_1,param_2,*(undefined8 *)(param_1 + 0x90),param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1091d9948; end: 1091d9a07; -[SCLensCarouselManager activateWithLensesObservable:activationConfiguration:] */

void FUN_1091d9948(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ddc48;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR_PTR_1126ddc50;
  func_0x00010beef7e0(PTR_PTR_1126ddc50);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bff0be0();
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar1;
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc49b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__activateCarouselWithConfigurati_11254ec08,
             *(undefined8 *)(param_1 + 0x90));
  return;
}



/* Entry: 1091d9a08; end: 1091d9a0f; -[SCLensCarouselManager activateWithLastSavedState] */

void FUN_1091d9a08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beefff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_activateWithLastSavedStateWithCo_1125999a0,0)
  ;
  return;
}



/* Entry: 1091d9a10; end: 1091d9a2b; -[SCLensCarouselManager activateWithLastSavedStateWithCompletion:] */

void FUN_1091d9a10(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x90) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc49f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__activateCarouselWithConfigurati_11254ec18,*(long *)(param_1 + 0x90),1)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beeffb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_activateWithCompletion__112599990,param_3);
  return;
}



/* Entry: 1091d9a2c; end: 1091d9aab; -[SCLensCarouselManager selectLensWithIdentifier:] */

void FUN_1091d9a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010c0910c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b00f8;
  func_0x00010c159160(PTR_PTR_1126b00f8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d9840(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091d9aac; end: 1091d9afb; -[SCLensCarouselManager applyLensCarouselSelection:] */

void FUN_1091d9aac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0910c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091d9afc; end: 1091d9b8b; -[SCLensCarouselManager selectLensWithIdentifier:animated:] */

void FUN_1091d9afc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010c0910c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b00f8;
  func_0x00010c158d00(PTR_PTR_1126b00f8,param_2,param_3,param_4,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d9840(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091d9b8c; end: 1091d9d27; -[SCLensCarouselManager _activate] */

void FUN_1091d9b8c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c1e12c0();
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf55540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_1;
    func_0x00010c0908e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c0910c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c090d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23860(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
    uVar7 = *(undefined8 *)(param_1 + 0x78);
    puVar6 = PTR_PTR_1126ddc68;
    func_0x00010c2a6660(PTR_PTR_1126ddc68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  lVar1 = param_1;
  func_0x00010c10f660();
  if (lVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bf766f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0xb8),PTR_s_didFinishCarouselPresentingWithS_1125bb360,1);
    return;
  }
  return;
}



/* Entry: 1091d9d28; end: 1091d9e0f; -[SCLensCarouselManager _deactivate] */

void FUN_1091d9d28(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    puVar2 = PTR_PTR_1126ddc68;
    func_0x00010c2a6640(PTR_PTR_1126ddc68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
    func_0x00010c090d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ddc70;
    func_0x00010bf83520(PTR_PTR_1126ddc70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_1);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  lVar1 = param_1;
  func_0x00010c10f660();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf766d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xb8),PTR_s_didFinishCarouselHidingWithSucce_1125bb358,1);
  return;
}



/* Entry: 1091d9e10; end: 1091d9e93; -[SCLensCarouselManager didPresentCarouselWithCarouselInfoProvider:] */

void FUN_1091d9e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c1e12c0(param_1);
  func_0x00010bf766e0(*(undefined8 *)(param_1 + 0xb8));
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bed28f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateActiveStateOnActivation_r_1125923e0,1,0);
  return;
}



/* Entry: 1091d9e94; end: 1091d9ebf; -[SCLensCarouselManager didFailToPresentCarousel] */

void FUN_1091d9e94(long param_1,undefined8 param_2)

{
  func_0x00010c1e12c0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bf766f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xb8),PTR_s_didFinishCarouselPresentingWithS_1125bb360,0);
  return;
}



/* Entry: 1091d9ec0; end: 1091d9f8b; -[SCLensCarouselManager didActivateLens:] */

void FUN_1091d9ec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae750;
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2468a0(puVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010bed2900(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091d9f8c; end: 1091da057; -[SCLensCarouselManager didSelectLens:] */

void FUN_1091d9f8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae750;
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2468a0(puVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010bed2920(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091da058; end: 1091da05f; -[SCLensCarouselManager didChangeLenses:] */

void FUN_1091da058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x70),PTR_s_next__112614028);
  return;
}



/* Entry: 1091da060; end: 1091da063; -[SCLensCarouselManager willDismissCarousel] */

void FUN_1091da060(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be99490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__saveLensCarouselConfiguration_112583ec0);
  return;
}



/* Entry: 1091da064; end: 1091da1db; -[SCLensCarouselManager didDismissCarousel] */

void FUN_1091da064(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1e12c0(param_1,param_2,0);
    func_0x00010bed28e0(param_1,param_2,0,1);
    func_0x00010bf766c0(*(undefined8 *)(param_1 + 0xb8),param_2,1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40),param_2,PTR____kCFBooleanFalse_11034ab60);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1091da1dc; end: 1091da2db; -[SCLensCarouselManager didEmitUIEvent:] */

void FUN_1091da1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x1091da2ec;
  puStack_20 = &UNK_110966070;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1091da2fc;
  puStack_48 = &UNK_110966070;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x1091da308;
  puStack_70 = &UNK_110850cc8;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1091da314;
  puStack_98 = &UNK_110966100;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0c18e0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110ae0288,
                      &PTR___NSConcreteGlobalBlock_110ae02a8,&PTR___NSConcreteGlobalBlock_110ae02c8,
                      &PTR___NSConcreteGlobalBlock_110ae02e8,&puStack_38,
                      &PTR___NSConcreteGlobalBlock_110ae0308,&puStack_60,&puStack_88,&puStack_b0,
                      &PTR___NSConcreteGlobalBlock_110ae0348,&PTR___NSConcreteGlobalBlock_110ae0368,
                      &PTR___NSConcreteGlobalBlock_110ae0388);
  return;
}



/* Entry: 1091da2dc; end: 1091da313;  */

void FUN_1091da2dc(void)

{
  return;
}



/* Entry: 1091da314; end: 1091da38f;  */

void FUN_1091da314(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c0b8600(param_2,param_2,&PTR___NSConcreteGlobalBlock_110ae0328);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  puVar1 = PTR_PTR_1126ddc68;
  func_0x00010bf7e9a0(PTR_PTR_1126ddc68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091da390; end: 1091da42f;  */

void FUN_1091da390(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d1088;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c08fb40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf329c0(param_2);
  func_0x00010c151220(param_2);
  _objc_release(param_2);
  func_0x00010c022740(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091da430; end: 1091da43b;  */

void FUN_1091da430(void)

{
  return;
}



/* Entry: 1091da43c; end: 1091da50b; -[SCLensCarouselManager didCompleteOperationWithUuid:result:] */

void FUN_1091da43c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126ddc60;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c115a80(param_5);
  uVar1 = param_5;
  func_0x00010c13ca80();
  _objc_release(param_5);
  if (uVar1 != 2) {
    uVar1 = (ulong)(uVar1 == 1);
  }
  func_0x00010c0eb9c0(param_1,puVar2,param_3,param_4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = *(undefined8 *)(param_2 + 0xc0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2a80();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1091da50c; end: 1091da647; -[SCLensCarouselManager _saveLensCarouselConfiguration] */

void FUN_1091da50c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010bef0a40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ddc78;
  _objc_alloc();
  func_0x00010c0226a0();
  puVar8 = puVar2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar8;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  if (puVar3 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126b00f8;
    func_0x00010c159160(PTR_PTR_1126b00f8,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126ddc48;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bef02c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c091280(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0be0(puVar4,param_2,uVar5,puVar2,uVar6,puVar8);
  uVar7 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar4;
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 1091da648; end: 1091da64f; -[SCLensCarouselManager _activateCarouselWithConfiguration:] */

void FUN_1091da648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc49d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__activateCarouselWithConfigurati_11254ec10,param_3,0);
  return;
}



/* Entry: 1091da650; end: 1091da65b; -[SCLensCarouselManager _activateCarouselWithConfiguration:completion:] */

void FUN_1091da650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc49f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__activateCarouselWithConfigurati_11254ec18,param_3,0,param_4);
  return;
}



/* Entry: 1091da65c; end: 1091da7ff; -[SCLensCarouselManager _activateCarouselWithConfiguration:isRestoration:completion:] */

void FUN_1091da65c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = auStack_58;
  _objc_initWeak(puVar1,param_1);
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ddc60;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c150520(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef0320(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2a80();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_4;
  func_0x00010c24da80(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1091da800; end: 1091da837;  */

void FUN_1091da800(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc4a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091da838; end: 1091da927; -[SCLensCarouselManager _activateCarouselWithConfigurationBase:isRestoration:] */

void FUN_1091da838(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0908e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ddc40;
  func_0x00010c28c640(PTR_PTR_1126ddc40,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
  func_0x00010bdc4860(param_1);
  puVar2 = PTR_PTR_1126ddc68;
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  uVar3 = param_3;
  func_0x00010bef02c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf72280(puVar2,param_2,uVar3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar4,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1091da928; end: 1091da963; -[SCLensCarouselManager activeLens] */

void FUN_1091da928(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0xdc);
  uVar1 = *(undefined8 *)(param_1 + 200);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0xdc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091da964; end: 1091da96b; -[SCLensCarouselManager firstApplicableLens] */

void FUN_1091da964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb0df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_firstApplicableLens_1125c9d20);
  return;
}



/* Entry: 1091da96c; end: 1091da973; -[SCLensCarouselManager defaultSelectionLensId] */

void FUN_1091da96c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6a2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_defaultSelectionLensId_1125b8260);
  return;
}



/* Entry: 1091da974; end: 1091da9b3; -[SCLensCarouselManager setActiveLens:] */

void FUN_1091da974(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xdc);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xdc);
  return;
}



/* Entry: 1091da9b4; end: 1091da9e7; -[SCLensCarouselManager active] */

undefined1 FUN_1091da9b4(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0xdc);
  uVar1 = *(undefined1 *)(param_1 + 0xd8);
  _os_unfair_lock_unlock(param_1 + 0xdc);
  return uVar1;
}



/* Entry: 1091da9e8; end: 1091daa17; -[SCLensCarouselManager setActive:] */

void FUN_1091da9e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  _os_unfair_lock_lock(param_1 + 0xdc);
  *(undefined1 *)(param_1 + 0xd8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xdc);
  return;
}



/* Entry: 1091daa18; end: 1091daa4b; -[SCLensCarouselManager presentationState] */

undefined8 FUN_1091daa18(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0xdc);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  _os_unfair_lock_unlock(param_1 + 0xdc);
  return uVar1;
}



/* Entry: 1091daa4c; end: 1091daa7b; -[SCLensCarouselManager setPresentationState:] */

void FUN_1091daa4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _os_unfair_lock_lock(param_1 + 0xdc);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0xdc);
  return;
}



/* Entry: 1091daa7c; end: 1091daac3; -[SCLensCarouselManager performer] */

void FUN_1091daa7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091daac4; end: 1091dab83; -[SCLensCarouselManager _updateActiveStateOnActivation:resetActiveLensOnDeactivation:] */

void FUN_1091daac4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf02120();
  _objc_release(uVar1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(param_1);
  return;
}



/* Entry: 1091dab84; end: 1091dac23;  */

void FUN_1091dab84(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bef0a40();
    _objc_retainAutoreleasedReturnValue();
    if (*(char *)(param_1 + 0x29) == '\x01') {
      if (lVar1 == 0) {
        uVar3 = 0;
      }
      else {
        lVar2 = lVar1;
        func_0x00010c079580(lVar1);
        uVar3 = (uint)lVar2 ^ 1;
      }
    }
    else {
      uVar3 = (uint)*(byte *)(param_1 + 0x28);
    }
    _objc_release(lVar1);
  }
  else {
    if (*(char *)(param_1 + 0x2a) == '\x01') {
      func_0x00010c162800(*(undefined8 *)(param_1 + 0x20),param_2,0);
    }
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed28d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateActiveStateIfNeeded__1125923d8,uVar3);
  return;
}



/* Entry: 1091dac24; end: 1091dacf3; -[SCLensCarouselManager _updateActiveStateOnSelectionLens:] */

void FUN_1091dac24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf02120();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar3 = param_1;
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1091dacf4;
    puStack_48 = &UNK_110841f80;
    _objc_retain(param_3);
    uStack_40 = param_3;
    lStack_38 = param_1;
    func_0x00010c0f7fc0(lVar3,param_2,&puStack_60);
    _objc_release(lVar3);
    _objc_release(uStack_40);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1091dacf4; end: 1091dad23;  */

void FUN_1091dacf4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c079580(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bed28d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__updateActiveStateIfNeeded__1125923d8,
             (uint)uVar1 ^ 1);
  return;
}



/* Entry: 1091dad24; end: 1091dae57; -[SCLensCarouselManager _updateActiveStateOnActivationLens:] */

void FUN_1091dad24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1091dadcc;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1091dae58; end: 1091daef7; -[SCLensCarouselManager _updateActiveStateIfNeeded:] */

void FUN_1091dae58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ae40();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bef03e0();
  if ((int)param_3 != (int)lVar1) {
    func_0x00010c162480(param_1,param_2,param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1091daef8; end: 1091db03b; -[SCLensCarouselManager .cxx_destruct] */

void FUN_1091daef8(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x78,0);
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091db03c; end: 1091db047; -[SCLensCarouselManagerResolver .cxx_destruct] */

void FUN_1091db03c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091db048; end: 1091db06f; -[SCLensCarouselManagerStream lensCarouselManagerObservable] */

void FUN_1091db048(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091db070; end: 1091db07b; -[SCLensCarouselManagerStream .cxx_destruct] */

void FUN_1091db070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091db07c; end: 1091db0a3; -[SCSharedFeatureLensCollectionsCarouselProvider lensCollectionsCarouselFeature] */

void FUN_1091db07c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091db0a4; end: 1091db0af; -[SCSharedFeatureLensCollectionsCarouselProvider .cxx_destruct] */

void FUN_1091db0a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091db0b0; end: 1091db153; -[SCLensContextMetadataStoreDecorator initWithBaseMetadataStore:contextUpdater:] */

undefined1 *
FUN_1091db0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700d78;
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



/* Entry: 1091db154; end: 1091db16b; -[SCLensContextMetadataStoreDecorator updateLenses:] */

void FUN_1091db154(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2873b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_updateLenses__11267f710,puVar1);
  return;
}



/* Entry: 1091db16c; end: 1091db1bb; -[SCLensContextMetadataStoreDecorator lenses] */

void FUN_1091db16c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + 8);
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091db1bc; end: 1091db20b; -[SCLensContextMetadataStoreDecorator lensesToPrefetch] */

void FUN_1091db1bc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + 8);
  func_0x00010c0987c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091db20c; end: 1091db213; -[SCLensContextMetadataStoreDecorator applyMetadataProviderSettings:] */

void FUN_1091db20c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf08710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_applyMetadataProviderSettings__11259fb68);
  return;
}



/* Entry: 1091db214; end: 1091db21b; -[SCLensContextMetadataStoreDecorator addListener:] */

void FUN_1091db214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1091db21c; end: 1091db223; -[SCLensContextMetadataStoreDecorator removeListener:] */

void FUN_1091db21c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1091db224; end: 1091db277; -[SCLensContextMetadataStoreDecorator startUpdatingWithMode:] */

void FUN_1091db224(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010c251660(*(undefined8 *)(param_1 + 8));
  if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bf4f010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_contextRequestedUpdatedMoreData_1125b15a8);
    return;
  }
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf4eff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_contextRequestedUpdatedActive_1125b15a0);
    return;
  }
  return;
}



/* Entry: 1091db278; end: 1091db29f; -[SCLensContextMetadataStoreDecorator stopUpdating] */

void FUN_1091db278(long param_1)

{
  func_0x00010c256d40(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bf4f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_contextRequestedUpdatedStop_1125b15b0);
  return;
}



/* Entry: 1091db2a0; end: 1091db2a7; -[SCLensContextMetadataStoreDecorator synchronize] */

void FUN_1091db2a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c266b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_synchronize_112677508);
  return;
}



/* Entry: 1091db2a8; end: 1091db2af; -[SCLensContextMetadataStoreDecorator warmUp] */

void FUN_1091db2a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a1c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_warmUp_112686130);
  return;
}



/* Entry: 1091db2b0; end: 1091db2b7; -[SCLensContextMetadataStoreDecorator supportsFilteringForAttribute:] */

void FUN_1091db2b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c263730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_supportsFilteringForAttribute__1126767f0);
  return;
}



/* Entry: 1091db2b8; end: 1091db2bf; -[SCLensContextMetadataStoreDecorator hasMoreLensesToLoad] */

undefined8 FUN_1091db2b8(void)

{
  return 0;
}



/* Entry: 1091db2c0; end: 1091db2c7; -[SCLensContextMetadataStoreDecorator loadMoreTriggerDistance] */

undefined8 FUN_1091db2c0(void)

{
  return 0;
}



/* Entry: 1091db2c8; end: 1091db2f7; -[SCLensContextMetadataStoreDecorator .cxx_destruct] */

void FUN_1091db2c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091db2f8; end: 1091db37f; +[SCLensUITestMetadataStore sharedInstance] */

void FUN_1091db2f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_1091db380;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137328f0 != -1) {
    func_0x000107c27d9c(0x1137328f0,&puStack_48);
  }
  uVar1 = uRam00000001137328e8;
  _objc_retain(uRam00000001137328e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091db380; end: 1091db3a7;  */

void FUN_1091db380(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam00000001137328e8;
  uRam00000001137328e8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091db3a8; end: 1091db42f; +[SCLensUITestMetadataStore liveLensPreviewInstance] */

void FUN_1091db3a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_1091db430;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam0000000113732900 != -1) {
    func_0x000107c27d9c(0x113732900,&puStack_48);
  }
  uVar1 = uRam00000001137328f8;
  _objc_retain(uRam00000001137328f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091db430; end: 1091db457;  */

void FUN_1091db430(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam00000001137328f8;
  uRam00000001137328f8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091db458; end: 1091db4df; +[SCLensUITestMetadataStore ucoInstance] */

void FUN_1091db458(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_1091db4e0;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam0000000113732910 != -1) {
    func_0x000107c27d9c(0x113732910,&puStack_48);
  }
  uVar1 = uRam0000000113732908;
  _objc_retain(uRam0000000113732908);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091db4e0; end: 1091db507;  */

void FUN_1091db4e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam0000000113732908;
  uRam0000000113732908 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


