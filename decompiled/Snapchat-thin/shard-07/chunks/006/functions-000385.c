/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056ff4b8; end: 1056ff4f7; -[SCAvatarBuilderInAppBrowserPresenter settingFinished] */

void FUN_1056ff4b8(long param_1)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001056ff590();
    func_0x00010bf436e0(*(undefined8 *)(unaff_x19 + 0x10));
    _os_unfair_lock_lock(unaff_x19 + 0x18);
    func_0x0001056ff5ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_unlock_11034c790)(unaff_x19 + 0x18);
    return;
  }
  return;
}



/* Entry: 1056ff4f8; end: 1056ff537; -[SCAvatarBuilderInAppBrowserPresenter settingDismissed] */

void FUN_1056ff4f8(long param_1)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001056ff590();
    func_0x00010bf436e0(*(undefined8 *)(unaff_x19 + 0x10));
    _os_unfair_lock_lock(unaff_x19 + 0x18);
    func_0x0001056ff5ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_unlock_11034c790)(unaff_x19 + 0x18);
    return;
  }
  return;
}



/* Entry: 1056ff538; end: 1056ff567; -[SCAvatarBuilderInAppBrowserPresenter .cxx_destruct] */

void FUN_1056ff538(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056ff568; end: 1056ff5db;  */

void FUN_1056ff568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1056ff5dc; end: 1056ff723;  */

void FUN_1056ff5dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bd5b8;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  uVar2 = param_1;
  func_0x00010c0b7ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1056ff724; end: 1056ff7c3;  */

void FUN_1056ff724(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  FUN_1056ff804();
  func_0x0001056ff808();
  func_0x0001056ff808();
  func_0x00010bf1a140(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056ff7c4; end: 1056ff7e7;  */

void FUN_1056ff7c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d28f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setOnLensPreviewRenderComplete__112652460);
  return;
}



/* Entry: 1056ff7e8; end: 1056ff803;  */

undefined8 FUN_1056ff7e8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c09af20(param_2);
  return 1;
}



/* Entry: 1056ff804; end: 1056ff80f;  */

void FUN_1056ff804(void)

{
  return;
}



/* Entry: 1056ff810; end: 1056ff86b; -[SCNativeBuilderServiceImpl didSaveOutfitChangeWithAvatarId:] */

void FUN_1056ff810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d57a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056ff86c; end: 1056ff883; -[SCNativeBuilderServiceImpl delegate] */

void FUN_1056ff86c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056ff884; end: 1056ff88f; -[SCNativeBuilderServiceImpl setDelegate:] */

void FUN_1056ff884(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1056ff890; end: 1056ff897; -[SCNativeBuilderServiceImpl .cxx_destruct] */

void FUN_1056ff890(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1056ff898; end: 1056ffaab; -[SCLiveMirrorCameraManager initWithCameraHardwareServicesAPI:cameraHardwareResource:cameraCaptureRequestHandler:cameraHardwareOwnershipRequester:cameraDeviceSettingsResolver:modelDownloader:builderLogger:isFromCreate:circumstanceEngine:] */

undefined8 *
FUN_1056ff898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000105701458();
  _objc_retain(param_4);
  func_0x00010570153c();
  _objc_retain(param_6);
  func_0x000105701604();
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126e9dd8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010570140c();
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 1,param_4);
    func_0x00010570153c();
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    func_0x000105701604();
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xb) = param_10;
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    func_0x0001057014c8(uVar2);
    func_0x0001057013a4();
    *(undefined4 *)((long)puVar1 + 0x74) = 0;
  }
  _objc_release(param_12);
  _objc_release(param_9);
  func_0x000105701534();
  func_0x000105701450();
  func_0x000105701414();
  func_0x0001057013ac();
  _objc_release(param_4);
  func_0x0001057013bc();
  return puVar1;
}



/* Entry: 1056ffaac; end: 1056ffb0b; -[SCLiveMirrorCameraManager prepareClassifier] */

void FUN_1056ffaac(void)

{
  undefined1 auStack_28 [8];
  
  func_0x0001057014ac(auStack_28);
  func_0x000105701444();
  func_0x00010570141c(FUN_1056ffb0c,0xc2000000);
  func_0x000105701620();
  func_0x000105701584();
  func_0x0001057014ec();
  return;
}



/* Entry: 1056ffb0c; end: 1056ffb37;  */

void FUN_1056ffb0c(undefined8 param_1)

{
  func_0x00010570155c();
  func_0x00010be21160();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056ffb38; end: 1056ffd3b; -[SCLiveMirrorCameraManager startCamera] */

void FUN_1056ffb38(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010570146c();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x68);
    func_0x00010c082b20();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__os_unfair_lock_unlock_11034c790)(unaff_x19 + 0x74);
      return;
    }
  }
  *(undefined1 *)(unaff_x19 + 0x70) = 0;
  func_0x0001057015fc();
  func_0x0001057015e8();
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c223180();
  func_0x0001057013ac();
  func_0x0001057013a4();
  func_0x0001057015e8();
  func_0x00010c255620();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001057015dc();
  func_0x0001057013ac();
  func_0x0001057013a4();
  func_0x0001057015e8();
  func_0x00010c299660();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001057015dc();
  func_0x0001057013ac();
  func_0x0001057013a4();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c136080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
  func_0x0001057014c8(uVar3);
  func_0x0001057013a4();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001057014ac(auStack_48);
  func_0x00010bfb5340(PTR_PTR_1126b5a50);
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105701444();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c250580();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105701450();
  _os_unfair_lock_lock(unaff_x19 + 0x74);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
  _objc_release(uVar3);
  func_0x0001057015fc();
  func_0x000105701488();
  func_0x00010570159c();
  func_0x0001057013a4();
  return;
}



/* Entry: 1056ffd3c; end: 1056ffe03;  */

void FUN_1056ffd3c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0db140(PTR_PTR_1126afed0);
  func_0x000105701444();
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18cd00(uVar1);
  func_0x0001057013ac();
  func_0x00010570151c();
  return;
}



/* Entry: 1056ffe04; end: 1056ffe27;  */

void FUN_1056ffe04(undefined8 param_1)

{
  func_0x00010570155c();
  func_0x00010bdd9200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056ffe28; end: 1056ffe7f; -[SCLiveMirrorCameraManager stopCamera] */

void FUN_1056ffe28(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  func_0x00010570146c();
  iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x68);
  func_0x00010c082b20();
  if (iVar1 != 0) {
    func_0x00010c069d20(0,*(undefined8 *)(unaff_x19 + 0x68),param_2,0);
  }
  uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(unaff_x19 + 0x74);
  return;
}



/* Entry: 1056ffe80; end: 1056fff3f; -[SCLiveMirrorCameraManager captureAndDetectTraitsForGender:retryOnFailure:] */

void FUN_1056ffe80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x0001057014ac(auStack_38);
  func_0x00010be20860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105701444();
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1056fff40;
  puStack_58 = &UNK_1108abca0;
  func_0x00010570158c(auStack_50);
  uStack_48 = param_3;
  uStack_40 = param_4;
  func_0x00010bfb2660(param_1,param_2,auStack_70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010570151c();
  func_0x0001057013bc();
  func_0x00010570143c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056fff40; end: 1057000af;  */

void FUN_1056fff40(void)

{
  long extraout_x8;
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [8];
  undefined1 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_58;
  
  FUN_105701388();
  uStack_80 = 0;
  uVar2 = 0x3032000000;
  puStack_78 = &uStack_80;
  func_0x000105701638();
  uStack_58 = 0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1057000c8;
  puStack_a0 = &UNK_1108abc40;
  puStack_98 = &uStack_80;
  uStack_70 = uVar2;
  _objc_copyWeak(auStack_90,unaff_x20 + 0x20);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x00010570140c();
  uStack_c0 = *(undefined1 *)(unaff_x20 + 0x30);
  _objc_copyWeak(auStack_c8,unaff_x20 + 0x20);
  func_0x00010570162c();
  lVar1 = puStack_78[5];
  if (lVar1 == 0) {
    func_0x000105701490();
    lVar1 = *(long *)(extraout_x8 + 0x5d0);
    func_0x00010bfa01c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105701478();
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001057013ac();
  }
  else {
    func_0x000105701404();
  }
  func_0x000105701594();
  func_0x00010570157c();
  func_0x000105701514();
  func_0x00010570156c(&uStack_80);
  _objc_release(uStack_58);
  func_0x0001057013bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057000b0; end: 1057000c7;  */

void FUN_1057000b0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1057000c8; end: 105700117;  */

void FUN_1057000c8(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_105701388();
  lVar1 = unaff_x20 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be2a3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001057013bc();
  func_0x000105701524(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105700118; end: 10570017b;  */

void FUN_105700118(long param_1,undefined8 param_2)

{
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x0001057014b4(*(undefined8 *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x38) == '\x01') {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be93480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10570017c; end: 1057001a3; -[SCLiveMirrorCameraManager _cameraFlipDidComplete] */

void FUN_10570017c(void)

{
  long unaff_x19;
  
  func_0x00010570146c();
  *(undefined1 *)(unaff_x19 + 0x70) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(unaff_x19 + 0x74);
  return;
}



/* Entry: 1057001a4; end: 105700293; -[SCLiveMirrorCameraManager _classifyImage:forGender:withClassifier:] */

void FUN_1057001a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  func_0x000105701458();
  func_0x000105701404();
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000105701444();
  func_0x000105701404();
  func_0x00010570140c();
  uStack_50 = param_4;
  _objc_copyWeak(auStack_58,auStack_48);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105701594();
  _objc_release(param_3);
  func_0x00010570157c();
  func_0x00010570159c();
  func_0x0001057013a4();
  func_0x0001057013bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105700294; end: 105700363;  */

void FUN_105700294(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined1 auStack_48 [8];
  
  FUN_105701388();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000105701444();
  _objc_copyWeak(auStack_48,unaff_x20 + 0x30);
  func_0x00010570140c();
  func_0x00010bf39da0(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(unaff_x19);
  func_0x000105701488();
  func_0x0001057013bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105700364; end: 105700467;  */

void FUN_105700364(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  FUN_105701388();
  lVar1 = unaff_x20 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = unaff_x19;
  func_0x00010c252d60();
  func_0x00010be56180(lVar1,param_2,lVar2);
  func_0x0001057013ac();
  func_0x0001057015f0();
  lVar1 = unaff_x19;
  func_0x00010bf12bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001057015a4();
  func_0x00010c0550a0();
  func_0x000105701414();
  lVar2 = unaff_x19;
  func_0x00010bf66060();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    unaff_x19 = 0;
  }
  else {
    func_0x00010bf66060();
    _objc_retainAutoreleasedReturnValue();
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c189f60(lVar1,param_2,unaff_x19);
  if (lVar2 != 0) {
    func_0x000105701534();
    func_0x000105701450();
  }
  func_0x000105701414();
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001057015b4();
  func_0x00010c0d9840();
  func_0x000105701450();
  func_0x00010bf436e0(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001057013ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105700468; end: 10570046b;  */

void FUN_105700468(void)

{
  return;
}



/* Entry: 10570046c; end: 1057004bb; -[SCLiveMirrorCameraManager _logMirrorClassificationStatus:] */

void FUN_10570046c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aa4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057004bc; end: 1057006af; -[SCLiveMirrorCameraManager _captureStillImage] */

void FUN_1057004bc(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [16];
  
  _os_unfair_lock_lock(param_1 + 0x74);
  uVar2 = *(ulong *)(param_1 + 0x68);
  func_0x00010c082b20();
  bVar1 = *(byte *)(param_1 + 0x70);
  _os_unfair_lock_unlock(param_1 + 0x74);
  puVar5 = PTR_PTR_1126ae6b8;
  if (((uVar2 & 1) == 0) || ((bVar1 & 1) == 0)) {
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR_PTR_1126b9e08;
    func_0x00010bfe6f80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aa1a0(puVar4,param_2,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x0001057013ac();
    func_0x0001008e3740();
    func_0x00010c2a87a0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b6fe8;
    func_0x00010c0b7e80(PTR_PTR_1126b6fe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aa2a0(puVar4,param_2,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x000105701414();
    func_0x0001057013ac();
    func_0x00010c2b9760(puVar4,param_2,&PTR____CFConstantStringClassReference_110df9178);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a76a0(puVar4,param_2,PTR____NSArray0__struct_11034ab48);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x0001057014a0();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae6b8;
    func_0x000105701444();
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1057006b0;
    puStack_58 = &UNK_110858c30;
    uStack_50 = uVar3;
    puStack_48 = puVar4;
    func_0x00010570158c(auStack_40);
    func_0x00010bf54280(puVar5,param_2,auStack_70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105701554();
    func_0x0001057013a4();
    func_0x00010570143c();
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1057006b0; end: 1057007ef;  */

void FUN_1057006b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_68 [8];
  
  func_0x0001057013f4();
  func_0x00010bf21f60(*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,param_1 + 0x30);
  func_0x00010570140c();
  func_0x00010bf30d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001057015a4();
  func_0x00010c25efc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105701414();
  func_0x0001057013a4();
  puVar1 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001057013ac();
  _objc_release(param_2);
  func_0x000105701488();
  func_0x0001057013bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057007f0; end: 105700a3f;  */

void FUN_1057007f0(double param_1,double param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x0001057013f4();
  func_0x000105701404();
  _objc_loadWeakRetained(param_3 + 0x28);
  func_0x00010be561a0();
  func_0x000105701414();
  lVar2 = param_4;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR_PTR_1126af5d0;
  if (lVar2 == 0) {
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    func_0x00010570160c();
    if ((param_1 == 0.0) || (func_0x00010570160c(), param_2 == 0.0)) {
      puVar4 = (undefined *)0x0;
    }
    else {
      func_0x00010bfe8380();
      _objc_opt_new(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
      func_0x00010c1f5fe0(0x3ff0000000000000);
      puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
      _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
      func_0x00010570160c();
      func_0x00010c046ac0(puVar3);
      func_0x000105701444();
      func_0x000105701604();
      puVar4 = puVar3;
      func_0x00010bfe91c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010570157c();
      _objc_release(puVar3);
      func_0x000105701534();
    }
    func_0x000105701450();
    func_0x00010c2619e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x000105701450();
  }
  func_0x00010c0d9840(*(undefined8 *)(param_3 + 0x20));
  func_0x00010bf436e0(*(undefined8 *)(param_3 + 0x20));
  func_0x000105701414();
  func_0x0001057013a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105700a40; end: 105700a47;  */

void FUN_105700a40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 105700a48; end: 105700a97; -[SCLiveMirrorCameraManager _logMirrorImageCaptureWithError:] */

void FUN_105700a48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000105701458();
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aa4e0();
  func_0x0001057013bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105700a98; end: 105700b2f; -[SCLiveMirrorCameraManager _getMirrorClassifier] */

void FUN_105700a98(void)

{
  undefined8 unaff_x20;
  undefined1 auStack_38 [8];
  
  func_0x0001057014ac(auStack_38);
  func_0x0001057015c4();
  func_0x0001057014d8(FUN_105700b30);
  func_0x00010bf6ab80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001057013a4();
  func_0x000105701564();
  func_0x000105701574();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 105700b30; end: 105700bb3;  */

void FUN_105700b30(long param_1,undefined8 param_2)

{
  long extraout_x8;
  
  func_0x00010570155c();
  func_0x00010be21160();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001057013a4();
  if (param_1 == 0) {
    func_0x000105701490();
    param_1 = *(long *)(extraout_x8 + 0x5d0);
    func_0x00010bfa01c0(param_1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105701478();
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001057013ac();
  }
  else {
    func_0x00010570140c();
  }
  func_0x0001057013bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105700bb4; end: 105700c5f; -[SCLiveMirrorCameraManager _getOrCreateMirrorClassifier] */

void FUN_105700bb4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 auStack_38 [8];
  
  func_0x0001057014ac(auStack_38);
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 == 0) {
    func_0x0001057015c4();
    uStack_58 = 0xc2000000;
    func_0x0001057014d8(FUN_105700c60);
    func_0x00010bf54280(0,param_2,auStack_60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11ac40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar2;
    func_0x0001057014c8(uVar1);
    func_0x0001057013a4();
    func_0x000105701564();
    lVar2 = *(long *)(param_1 + 0x48);
  }
  func_0x000105701404();
  func_0x000105701574();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105700c60; end: 105700ca7;  */

void FUN_105700c60(void)

{
  long unaff_x20;
  
  FUN_105701388();
  _objc_loadWeakRetained(unaff_x20 + 0x20);
  func_0x00010be05f80();
  func_0x0001057013bc();
  func_0x0001057013a4();
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b0418,PTR_s_create__1125b2a48,&PTR___NSConcreteGlobalBlock_1108abd50);
  return;
}



/* Entry: 105700ca8; end: 105700cab;  */

void FUN_105700ca8(void)

{
  return;
}



/* Entry: 105700cac; end: 105700d43; -[SCLiveMirrorCameraManager _downloadLiveMirrorModelWithObserver:] */

void FUN_105700cac(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_40 [16];
  
  func_0x0001057013e4();
  func_0x0001057014a0();
  func_0x000105701444();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105700d44;
  puStack_50 = &UNK_1108abd70;
  func_0x00010570158c(auStack_40);
  func_0x00010570140c();
  func_0x00010bf88e20(uVar1,param_2,auStack_68);
  func_0x00010570157c();
  _objc_destroyWeak(auStack_40);
  func_0x00010570143c();
  func_0x0001057013bc();
  return;
}



/* Entry: 105700d44; end: 105700ddf;  */

void FUN_105700d44(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x0001057013f4();
  func_0x000105701404();
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (lVar1 == 0) {
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2);
    func_0x000105701534();
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010be28a40(lVar1);
  }
  func_0x0001057013ac();
  func_0x0001057013a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105700de0; end: 105700ebf; -[SCLiveMirrorCameraManager _handleDownloadLiveMirrorModelResultWithModelData:configData:observer:] */

void FUN_105700de0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000105701458();
  func_0x000105701404();
  puVar1 = PTR_PTR_1126bd5c8;
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((param_3 == 0) || (param_4 == 0)) {
    func_0x00010570153c();
    _objc_alloc(puVar2);
    func_0x00010c00e2e0();
    func_0x0001057015b4();
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010570153c();
    _objc_alloc(puVar1);
    func_0x00010c02c600();
    func_0x0001057015b4();
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
  }
  func_0x000105701450();
  func_0x00010c0d9840(param_5,param_2,puVar2);
  func_0x00010bf436e0(param_5);
  func_0x0001057013ac();
  func_0x000105701414();
  func_0x0001057013a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105700ec0; end: 105700f1f; -[SCLiveMirrorCameraManager _resetMirrorClassifier] */

void FUN_105700ec0(void)

{
  undefined1 auStack_28 [8];
  
  func_0x0001057014ac(auStack_28);
  func_0x000105701444();
  func_0x00010570141c(FUN_105700f20,0xc2000000);
  func_0x000105701620();
  func_0x000105701584();
  func_0x0001057014ec();
  return;
}



/* Entry: 105700f20; end: 105700f47;  */

void FUN_105700f20(undefined8 param_1)

{
  func_0x00010570155c();
  func_0x00010bea5ac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105700f48; end: 105700f67; -[SCLiveMirrorCameraManager _setMirrorClassifier:] */

void FUN_105700f48(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001057013e4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105700f68; end: 10570102f; -[SCLiveMirrorCameraManager _handleGetMirrorClassifierSuccessWithClassifier:gender:] */

void FUN_105700f68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  
  func_0x0001057013e4();
  func_0x0001057014a0();
  func_0x00010bddb840();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105701444();
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105701030;
  puStack_58 = &UNK_110897728;
  func_0x00010570158c(auStack_48);
  uStack_40 = param_4;
  func_0x00010570140c();
  func_0x00010bfb2660(unaff_x20,param_2,auStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(unaff_x19);
  func_0x000105701514();
  func_0x0001057013a4();
  func_0x00010570143c();
  func_0x0001057013bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 105701030; end: 105701187;  */

void FUN_105701030(void)

{
  long extraout_x8;
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_58;
  
  FUN_105701388();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uVar2 = 0x3032000000;
  func_0x000105701638();
  uStack_58 = 0;
  uStack_70 = uVar2;
  _objc_copyWeak(auStack_90,unaff_x20 + 0x28);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000105701404();
  func_0x00010570162c();
  lVar1 = puStack_78[5];
  if (lVar1 == 0) {
    func_0x000105701490();
    lVar1 = *(long *)(extraout_x8 + 0x5d0);
    func_0x00010bfa01c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105701478();
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001057013ac();
  }
  else {
    func_0x000105701404();
  }
  _objc_release(uVar2);
  func_0x000105701554();
  func_0x00010570156c(&uStack_80);
  _objc_release(uStack_58);
  func_0x0001057013bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105701188; end: 10570123f;  */

void FUN_105701188(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_105701388();
  lVar1 = unaff_x20 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bddede0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001057013bc();
  func_0x000105701524(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105701240; end: 1057012b7; -[SCLiveMirrorCameraManager .cxx_destruct] */

void FUN_105701240(long param_1)

{
  func_0x0001057013fc(param_1 + 0x68);
  func_0x0001057013fc(param_1 + 0x60);
  func_0x0001057013fc(param_1 + 0x50);
  func_0x0001057013fc(param_1 + 0x48);
  func_0x0001057013fc(param_1 + 0x40);
  func_0x0001057013fc(param_1 + 0x38);
  func_0x0001057013fc(param_1 + 0x30);
  func_0x0001057013fc(param_1 + 0x28);
  func_0x0001057013fc(param_1 + 0x20);
  func_0x0001057013fc(param_1 + 0x18);
  func_0x0001057013fc(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1057012b8; end: 105701387;  */

void FUN_1057012b8(double param_1,double param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  
  FUN_105701388();
  func_0x00010570150c();
  func_0x000105701504();
  func_0x000105701504();
  param_2 = param_2 * 0.5;
  _CGContextTranslateCTM(param_1 * 0.5,param_2,param_3);
  func_0x00010570150c();
  dVar3 = *(double *)(unaff_x20 + 0x28);
  _CGContextRotateCTM(dVar3);
  cVar1 = *(char *)(unaff_x20 + 0x30);
  func_0x000105701504();
  dVar4 = param_2;
  if (cVar1 == '\x01') {
    func_0x000105701504();
    dVar4 = dVar3;
    dVar3 = param_2;
  }
  func_0x00010570150c();
  _CGContextTranslateCTM(dVar3 * -0.5,dVar4 * -0.5);
  func_0x00010570150c();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  _objc_retainAutorelease(uVar2);
  func_0x00010bdc1020();
  _CGContextDrawImage(0,0,dVar3,dVar4,param_3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105701388; end: 10570164b;  */

void FUN_105701388(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 10570164c; end: 1057016bb; -[SCTestCameraRequestHandler initWithContentDelivery:] */

undefined1 * FUN_10570164c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9de0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000105701980();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057016bc; end: 1057016c3; -[SCTestCameraRequestHandler updates] */

undefined8 FUN_1057016bc(void)

{
  return 0;
}



/* Entry: 1057016c4; end: 105701867; -[SCTestCameraRequestHandler submitCaptureRequest:] */

undefined8 FUN_1057016c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  puVar2 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puVar3 = PTR_PTR_1126b1058;
  _objc_alloc();
  func_0x00010c01b360();
  puVar4 = PTR_PTR_1126b1050;
  _objc_alloc(PTR_PTR_1126b1050);
  ppuVar6 = &PTR____CFConstantStringClassReference_110df9198;
  puVar7 = puVar3;
  func_0x00010c05a200();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105701868;
  puStack_50 = &UNK_1108abe30;
  uStack_48 = param_3;
  func_0x000105701980();
  func_0x00010c1267e0(uVar5,param_2,puVar1,puVar4,&PTR____CFConstantStringClassReference_110daafd8,
                      &PTR____CFConstantStringClassReference_110daafd8,puVar2,0,
                      (ulong)ppuVar6 & 0xffffffffffffff00,&puStack_68,puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return 0;
}



/* Entry: 105701868; end: 105701957;  */

void FUN_105701868(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126b9e70;
  if (param_2 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_2);
    _objc_alloc();
    func_0x00010c01c1e0();
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_alloc(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x00010c008240();
    _objc_release(param_2);
    func_0x00010c1a9f00(puVar2);
    _objc_release(puVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000105701980();
  func_0x00010c0be680(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105701958; end: 105701973;  */

void FUN_105701958(long param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000105701970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x20),0,0,0);
  return;
}



/* Entry: 105701974; end: 105701987; -[SCTestCameraRequestHandler .cxx_destruct] */

void FUN_105701974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105701988; end: 105701a0b; -[SCAvatarBuilderMirrorDecryptionResult initWithSuccess:data:] */

undefined1 *
FUN_105701988(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9de8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105701a0c; end: 105701a13; -[SCAvatarBuilderMirrorDecryptionResult success] */

undefined1 FUN_105701a0c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105701a14; end: 105701a1b; -[SCAvatarBuilderMirrorDecryptionResult data] */

undefined8 FUN_105701a14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105701a1c; end: 105701a27; -[SCAvatarBuilderMirrorDecryptionResult .cxx_destruct] */

void FUN_105701a1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105701a28; end: 105701adf; +[SCAvatarBuilderMirrorDecryption decrypt:] */

void FUN_105701a28(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = param_3;
  _objc_retain(param_3);
  if ((param_3 == (undefined *)0x0) || (puVar1 = param_3, func_0x00010c08fa60(), (long)puVar1 < 0))
  {
    FUN_105701ae0();
    func_0x00010c04f3c0();
  }
  else {
    puVar2 = PTR_PTR_1126bd5d8;
    func_0x00010c0ce920(PTR_PTR_1126bd5d8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    if ((puVar2 == (undefined *)0x0) || (func_0x00010c08fa60(), puVar1 == (undefined *)0x0)) {
      FUN_105701ae0();
    }
    else {
      FUN_105701ae0();
    }
    func_0x00010c04f3c0();
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105701ae0; end: 105701aeb;  */

void FUN_105701ae0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_alloc_11034d1a8)(PTR_PTR_1126bd5d0);
  return;
}



/* Entry: 105701aec; end: 105701b57; -[SCAvatarBuilderMirrorFaceDetector initWithFaceDetector:] */

undefined1 * FUN_105701aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000105702364();
  puStack_28 = PTR_PTR_1126e9df0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  func_0x000105702348();
  return (undefined1 *)puVar1;
}



/* Entry: 105701b58; end: 105701bcb; -[SCAvatarBuilderMirrorFaceDetector detectMostProminentFace:] */

void FUN_105701b58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000105702364();
  if (param_3 == 0) {
    func_0x0001057022a4();
  }
  else {
    func_0x00010570239c();
    func_0x00010c01bf60();
    if (lVar1 == 0) {
      func_0x0001057022a4();
    }
    else {
      func_0x00010bf6fa00(param_1,param_2,param_3,lVar1);
      func_0x0001057022cc();
    }
    func_0x000105702340();
  }
  func_0x000105702348();
  func_0x0001057022b8();
  return;
}



/* Entry: 105701bcc; end: 105701d3b; -[SCAvatarBuilderMirrorFaceDetector detectMostProminentFace:imageCI:] */

void FUN_105701bcc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 in_ZR;
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_4;
  lVar3 = param_3;
  _objc_retain();
  if (param_4 == 0) {
    func_0x0001057022a4();
  }
  else {
    lVar4 = *(long *)(param_1 + 8);
    uStack_78 = *(undefined8 *)PTR__CIDetectorImageOrientation_11034ac50;
    lVar1 = param_1;
    func_0x00010be1ee40(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_70 = lVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_70,&uStack_78,1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010bfa3560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar1);
    lVar1 = lVar4;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      func_0x0001057022a4();
    }
    else {
      lVar1 = param_1;
      func_0x00010be1fea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      func_0x0001057022cc();
      func_0x00010bf9de20(param_4);
      func_0x0001057022b8(param_1);
      func_0x00010bdc3720();
      func_0x0001057022cc();
      _objc_release();
      lVar3 = lVar4;
    }
    func_0x000105702340();
  }
  func_0x000105702348();
  func_0x0001057023a8(uStack_68);
  if ((bool)in_ZR) {
    func_0x0001057022b8();
    return;
  }
  ___stack_chk_fail();
  func_0x000105702318();
  lVar4 = lVar1;
  func_0x000105702364();
  if (lVar3 == 0) {
    func_0x0001057022a4();
  }
  else {
    func_0x00010570239c();
    func_0x00010c01bf60();
    if (lVar4 == 0) {
      func_0x0001057022a4();
    }
    else {
      func_0x000105702304(lVar1,param_2,lVar3);
      func_0x00010bf961e0();
      func_0x0001057022cc();
    }
    func_0x000105702340();
  }
  func_0x000105702348();
  func_0x0001057022b8();
  return;
}



/* Entry: 105701d3c; end: 105701db7; -[SCAvatarBuilderMirrorFaceDetector enlargeBounds:boundingBox:] */

void FUN_105701d3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000105702318();
  lVar1 = param_1;
  func_0x000105702364();
  if (param_3 == 0) {
    func_0x0001057022a4();
  }
  else {
    func_0x00010570239c();
    func_0x00010c01bf60();
    if (lVar1 == 0) {
      func_0x0001057022a4();
    }
    else {
      func_0x000105702304(param_1,param_2,param_3);
      func_0x00010bf961e0();
      func_0x0001057022cc();
    }
    func_0x000105702340();
  }
  func_0x000105702348();
  func_0x0001057022b8();
  return;
}



/* Entry: 105701db8; end: 105701e6b; -[SCAvatarBuilderMirrorFaceDetector enlargeBounds:boundingBox:imageCI:] */

undefined8
FUN_105701db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  if (param_5 != 0) {
    func_0x000105702318();
    func_0x000105702364();
    func_0x00010bf9de20(param_5);
    func_0x00010bfe8380(param_4);
    func_0x000105702340();
    func_0x000105702304(param_2);
    func_0x00010be0a0a0();
    return param_1;
  }
  return *(undefined8 *)PTR__CGRectZero_110347608;
}



/* Entry: 105701e6c; end: 105701fe7; +[SCAvatarBuilderMirrorFaceDetector transformRectInImageToUpOrientation:imageOrientation:imageWidth:imageHeight:] */

void FUN_105701e6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_d4;
  undefined8 in_register_00005088;
  undefined8 in_d5;
  undefined8 in_register_000050a8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  
  func_0x000105702318();
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar4 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar2 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_80 = uVar4;
  uStack_78 = uVar5;
  uStack_60 = uVar2;
  uStack_58 = uVar3;
  switch(param_3) {
  case 1:
  case 5:
    func_0x00010570232c();
    uVar3 = in_register_000050a8;
    uVar2 = in_d5;
    _CGAffineTransformTranslate(in_d4);
    func_0x0001057022e0();
    uVar1 = 0x400921fb54442d18;
    break;
  case 2:
  case 6:
    func_0x00010570232c();
    func_0x000105702390();
    func_0x0001057022e0();
    uVar1 = 0x3ff921fb54442d18;
    break;
  case 3:
  case 7:
    func_0x00010570232c();
    uVar3 = in_register_000050a8;
    uVar2 = in_d5;
    _CGAffineTransformTranslate(0);
    func_0x0001057022e0();
    uVar1 = 0xbff921fb54442d18;
    break;
  case 4:
    goto code_r0x000105701f4c;
  default:
    goto LAB_105701fb0;
  }
  _CGAffineTransformRotate(&uStack_b0,uVar1,&uStack_e0);
  func_0x0001057023bc();
  if (param_3 - 6U < 2) {
    func_0x0001057022e0();
    _CGAffineTransformTranslate(&uStack_b0,0,&uStack_e0);
    func_0x000105702380();
    uStack_e0 = uVar4;
    uStack_d8 = uVar5;
    uStack_d0 = in_d4;
    uStack_c8 = in_register_00005088;
    uStack_80 = uVar4;
    uStack_78 = uVar5;
    func_0x0001057022f4();
    uVar2 = 0x3ff0000000000000;
    uVar3 = 0xbff0000000000000;
  }
  else {
    if (1 < param_3 - 4U) goto LAB_105701fb0;
code_r0x000105701f4c:
    func_0x0001057022e0();
    func_0x000105702390(&uStack_b0,&uStack_e0);
    func_0x000105702380();
    uStack_e0 = uVar4;
    uStack_d8 = uVar5;
    uStack_d0 = uVar2;
    uStack_c8 = uVar3;
    uStack_80 = uVar4;
    uStack_78 = uVar5;
    func_0x0001057022f4();
    uVar2 = 0xbff0000000000000;
    uVar3 = 0x3ff0000000000000;
  }
  _CGAffineTransformScale(uVar2,uVar3);
  func_0x0001057023bc();
LAB_105701fb0:
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  func_0x000105702304(&uStack_b0);
  _CGRectApplyAffineTransform();
  return;
}



/* Entry: 105701fe8; end: 105702027; -[SCAvatarBuilderMirrorFaceDetector _getExifOrientation:] */

void FUN_105701fe8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  func_0x00010bfe8380();
  if (param_3 - 1U < 7) {
    uVar1 = *(undefined4 *)(&UNK_10ddbc458 + (param_3 - 1U) * 4);
  }
  else {
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSNumber_1126ae570,PTR_s_numberWithInt__1126157f0,uVar1);
  return;
}



/* Entry: 105702028; end: 10570217f; -[SCAvatarBuilderMirrorFaceDetector _getLargestAreaFace:] */

void FUN_105702028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 in_ZR;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double in_d7;
  double dVar12;
  double unaff_d12;
  double unaff_d13;
  undefined1 auStack_1f0 [16];
  double dStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [32];
  undefined8 uStack_1a0;
  double dStack_190;
  double dStack_188;
  
  uVar4 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000105702364();
  dVar8 = 0.0;
  func_0x000105702350();
  lVar1 = lRam0000000000000000;
  if (param_5 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    unaff_d13 = 0.0;
    do {
      uVar7 = 0;
      do {
        dVar9 = dVar8;
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_7);
          dVar9 = dVar8;
        }
        uVar6 = *(ulong *)(uVar7 * 8);
        puVar2 = PTR__OBJC_CLASS___CIFaceFeature_1126bd5e0;
        _objc_opt_class(PTR__OBJC_CLASS___CIFaceFeature_1126bd5e0);
        uVar3 = uVar6;
        _objc_opt_isKindOfClass(uVar6,puVar2);
        dVar8 = dVar9;
        if ((uVar3 & 1) != 0) {
          _objc_retain(uVar6);
          func_0x00010bf20c00(uVar6);
          func_0x0001057022cc();
          _CGRectGetWidth();
          dVar8 = dVar9;
          func_0x0001057022b8();
          _CGRectGetHeight();
          dVar12 = dVar9 * dVar8;
          if ((uVar5 == 0) || (unaff_d13 < dVar12)) {
            _objc_retain(uVar6);
            func_0x000105702340();
            uVar5 = uVar6;
            unaff_d13 = dVar12;
          }
          _objc_release();
          uVar3 = uVar6;
          unaff_d12 = dVar9;
        }
        uVar7 = uVar7 + 1;
        in_ZR = uVar7 == param_5;
      } while (uVar7 < param_5);
      func_0x000105702350();
      param_5 = uVar3;
    } while (uVar3 != 0);
  }
  func_0x000105702348();
  func_0x0001057023a8(uVar4);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
    return;
  }
  ___stack_chk_fail();
  dStack_190 = unaff_d13;
  dStack_188 = unaff_d12;
  _CGAffineTransformMakeScale(auStack_1c0,0x3ff0000000000000,0xbff0000000000000);
  in_d7 = -in_d7;
  uVar11 = 0;
  func_0x0001057022f4(uStack_1a0);
  uVar4 = 0;
  uVar10 = 0;
  _CGAffineTransformTranslate();
  func_0x000105702380();
  dStack_1e0 = in_d7;
  uStack_1d8 = uVar11;
  uStack_1d0 = uVar4;
  uStack_1c8 = uVar10;
  _CGRectApplyAffineTransform(dVar8,param_2,param_3,param_4,auStack_1f0);
  return;
}



/* Entry: 105702180; end: 105702213; -[SCAvatarBuilderMirrorFaceDetector _CIToUICoordinateSpace:extent:] */

void FUN_105702180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double in_d7;
  undefined1 auStack_a0 [16];
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  
  _CGAffineTransformMakeScale(auStack_70,0x3ff0000000000000,0xbff0000000000000);
  in_d7 = -in_d7;
  uVar3 = 0;
  func_0x0001057022f4(uStack_50);
  uVar1 = 0;
  uVar2 = 0;
  _CGAffineTransformTranslate();
  func_0x000105702380();
  dStack_90 = in_d7;
  uStack_88 = uVar3;
  uStack_80 = uVar1;
  uStack_78 = uVar2;
  _CGRectApplyAffineTransform(param_1,param_2,param_3,param_4,auStack_a0);
  return;
}



/* Entry: 105702214; end: 105702297; -[SCAvatarBuilderMirrorFaceDetector _enlargeBounds:extent:orientation:] */

void FUN_105702214(void)

{
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectIntersection_1103475c0)();
  return;
}



/* Entry: 105702298; end: 1057023cf; -[SCAvatarBuilderMirrorFaceDetector .cxx_destruct] */

void FUN_105702298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057023d0; end: 10570246b; -[SCAvatarBuilderLiveMirrorModelDownloader initWithOnDemandResourceDownloader:webBuilderLogger:isFromCreate:] */

undefined1 *
FUN_1057023d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  func_0x00010570276c();
  puStack_38 = PTR_PTR_1126e9df8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010570276c();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
  }
  func_0x000105702774();
  func_0x000105702764();
  return (undefined1 *)puVar1;
}



/* Entry: 10570246c; end: 105702597; -[SCAvatarBuilderLiveMirrorModelDownloader downloadLiveMirrorModel:] */

void FUN_10570246c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_48,param_2);
  func_0x00010c14e320(PTR_PTR_1126aebd8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_1;
  func_0x00010bf887e0(uVar1);
  func_0x00010570277c();
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  func_0x000105702774();
  _objc_destroyWeak(auStack_48);
  func_0x000105702764();
  return;
}



/* Entry: 105702598; end: 10570260f;  */

void FUN_105702598(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  }
  else {
    _objc_loadWeakRetained(param_1 + 0x28);
    func_0x00010be28b40(*(undefined8 *)(param_1 + 0x30));
    func_0x00010570277c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105702610; end: 105702733; -[SCAvatarBuilderLiveMirrorModelDownloader _handleDownloadedModelFiles:mirrorDownloadStartTime:completion:] */

void FUN_105702610(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  dVar3 = param_1;
  _objc_retain(param_5);
  func_0x00010570276c();
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c0aa500(dVar3 - param_1,uVar2);
  _objc_release(uVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110df91f8;
  func_0x00010c25ce00(&PTR____CFConstantStringClassReference_110df91f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ce00(&PTR____CFConstantStringClassReference_110df91f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0dff20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000105702774();
  (**(code **)(param_5 + 0x10))(param_5,uVar2,param_4);
  func_0x000105702764();
  _objc_release(param_4);
  _objc_release(uVar2);
  func_0x00010570277c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 105702734; end: 105702763; -[SCAvatarBuilderLiveMirrorModelDownloader .cxx_destruct] */

void FUN_105702734(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105702764; end: 105702783;  */

void FUN_105702764(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105702784; end: 10570278b; -[SCAvatarComposerBuilderContainerViewController modalPresentationStyle] */

undefined8 FUN_105702784(void)

{
  return 5;
}



/* Entry: 10570278c; end: 1057027eb; -[SCAvatarComposerBuilderNavigator initWithRuntime:] */

undefined1 * FUN_10570278c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9e00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithRuntime__1125edce0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_opt_class(PTR_PTR_1126bd5e8);
    func_0x00010c181960(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1057027ec; end: 1057028bf; -[SCAvatarComposerBuilderNavigator pushComponentWithPage:animated:] */

void FUN_1057027ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x000105702c34();
  _objc_initWeak(auStack_38);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1057028c0;
  puStack_58 = &UNK_1108488f8;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_40 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1057028c0; end: 1057028f3;  */

void FUN_1057028c0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057028f4; end: 105702953; -[SCAvatarComposerBuilderNavigator popWithAnimated:] */

void FUN_1057028f4(void)

{
  func_0x000105702bf4();
  func_0x000105702bbc(FUN_105702954,0xc2000000);
  func_0x000105702be4();
  func_0x000105702c04();
  func_0x000105702bdc();
  return;
}



/* Entry: 105702954; end: 10570297b;  */

void FUN_105702954(undefined8 param_1)

{
  func_0x000105702c4c();
  func_0x00010be75a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10570297c; end: 1057029db; -[SCAvatarComposerBuilderNavigator popToSelfWithAnimated:] */

void FUN_10570297c(void)

{
  func_0x000105702bf4();
  func_0x000105702bbc(FUN_1057029dc,0xc2000000);
  func_0x000105702be4();
  func_0x000105702c04();
  func_0x000105702bdc();
  return;
}



/* Entry: 1057029dc; end: 105702a03;  */

void FUN_1057029dc(undefined8 param_1)

{
  func_0x000105702c4c();
  func_0x00010be75a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105702a04; end: 105702ab3; -[SCAvatarComposerBuilderNavigator _pushComponentWithPage:animated:] */

void FUN_105702a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  long alStack_60 [2];
  long alStack_50 [2];
  
  func_0x000105702c34();
  lVar3 = unaff_x21;
  func_0x00010c0b8200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  plVar1 = alStack_60;
  if (lVar4 != 0) {
    plVar1 = alStack_50;
  }
  *plVar1 = unaff_x21;
  plVar1[1] = (long)PTR_PTR_1126e9e00;
  ppuVar2 = &PTR_s_presentComponentWithPage_animate_112525e60;
  if (lVar4 != 0) {
    ppuVar2 = &PTR_s_pushComponentWithPage_animated__112525e68;
  }
  _objc_msgSendSuper2(plVar1,*ppuVar2,param_3,param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105702ab4; end: 105702b37; -[SCAvatarComposerBuilderNavigator _popWithAnimated:] */

void FUN_105702ab4(long param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long alStack_50 [2];
  long alStack_40 [2];
  
  lVar3 = param_1;
  func_0x00010c0b8200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  plVar1 = alStack_50;
  if (lVar4 != 0) {
    plVar1 = alStack_40;
  }
  *plVar1 = param_1;
  plVar1[1] = (long)PTR_PTR_1126e9e00;
  ppuVar2 = &PTR_s_dismissWithAnimated__1125becc8;
  if (lVar4 != 0) {
    ppuVar2 = &PTR_s_popWithAnimated__112526600;
  }
  func_0x000105702c40(ppuVar2);
  return;
}



/* Entry: 105702b38; end: 105702bbb; -[SCAvatarComposerBuilderNavigator _popToSelfWithAnimated:] */

void FUN_105702b38(long param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long alStack_50 [2];
  long alStack_40 [2];
  
  lVar3 = param_1;
  func_0x00010c0b8200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  plVar1 = alStack_50;
  if (lVar4 != 0) {
    plVar1 = alStack_40;
  }
  *plVar1 = param_1;
  plVar1[1] = (long)PTR_PTR_1126e9e00;
  ppuVar2 = &PTR_s_dismissWithAnimated__1125becc8;
  if (lVar4 != 0) {
    ppuVar2 = &PTR_s_popToSelfWithAnimated__11261e888;
  }
  func_0x000105702c40(ppuVar2);
  return;
}



/* Entry: 105702bbc; end: 105702c57;  */

void FUN_105702bbc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x29;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined *puStack0000000000000020;
  
  puStack0000000000000020 = &UNK_11084ceb8;
  uStack0000000000000010 = param_2;
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(&stack0x00000028,unaff_x29 + -0x18);
  return;
}



/* Entry: 105702c58; end: 105702dcf; -[SCAvatarComposerBuilderPreviewLensViewController initWithFPS:bitmojiAvatarBuilderLensScopeExposer:bitmojiAvatarBuilderLensScopeServices:lensProcessingFactory:glbFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105702c58(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126e9e08;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127283a4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127283a4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    lVar4 = (long)_DAT_1127283a8;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar4);
    lVar4 = (long)_DAT_1127283ac;
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = uVar5;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127283b0;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_1127283b4;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127283b8) = param_3;
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_1127283bc),param_6);
    lVar4 = (long)_DAT_1127283c0;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar3);
  }
  func_0x000105703258();
  _objc_release(param_6);
  func_0x000105703260();
  func_0x000105703248();
  return (undefined1 *)puVar1;
}



/* Entry: 105702dd0; end: 105702e47; -[SCAvatarComposerBuilderPreviewLensViewController setView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105702dd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  undefined1 auStack_40 [16];
  
  func_0x000105703268();
  _objc_msgSendSuper2(auStack_40,PTR_s_setView__112666308);
  if (param_3 != 0) {
    lVar2 = (long)_DAT_1127283b0;
    lVar1 = *(long *)(unaff_x19 + lVar2);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(unaff_x19 + lVar2));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  return;
}



/* Entry: 105702e48; end: 105703003; -[SCAvatarComposerBuilderPreviewLensViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105702e48(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong unaff_x20;
  long lVar6;
  undefined1 auStack_60 [16];
  
  func_0x00010570320c();
  _objc_msgSendSuper2(auStack_60,PTR_s_viewDidLayoutSubviews_112684cc8);
  uVar1 = unaff_x20;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  if ((param_3 != 0.0) && (func_0x00010bf20c00(uVar1), param_4 != 0.0)) {
    lVar6 = (long)_DAT_1127283b0;
    lVar2 = *(long *)(unaff_x20 + lVar6);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((lVar2 == 0) &&
       ((uVar3 = unaff_x20, func_0x00010c06d1a0(), (uVar3 & 1) == 0 &&
        (uVar3 = unaff_x20, func_0x00010c077fc0(), (uVar3 & 1) == 0)))) {
      puVar4 = PTR_PTR_1126bd5f0;
      _objc_alloc(PTR_PTR_1126bd5f0);
      func_0x00010bf12ca0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(unaff_x20 + (long)_DAT_1127283c0);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff5ee0(puVar4);
      _objc_release(uVar5);
      func_0x000105703258();
      uVar5 = *(undefined8 *)(unaff_x20 + (long)_DAT_1127283b4);
      uVar3 = uVar1;
      func_0x00010bf12ca0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf237c0((double)*(int *)(unaff_x20 + (long)_DAT_1127283b8),uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010bf9d620(*(undefined8 *)(unaff_x20 + lVar6));
      func_0x00010bfebde0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1abea0(uVar1);
      func_0x000105703260();
      func_0x000105703258();
      _objc_release(puVar4);
    }
  }
  func_0x000105703248();
  return;
}



/* Entry: 105703004; end: 105703063; -[SCAvatarComposerBuilderPreviewLensViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105703004(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  func_0x000105703268();
  _objc_msgSendSuper2(auStack_30,PTR_s_viewDidLoad_112684cd8);
  uVar1 = *(undefined8 *)(unaff_x19 + _DAT_1127283a4);
  func_0x00010c29cac0(PTR_PTR_1126bd5f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
  func_0x000105703260();
  return;
}



/* Entry: 105703064; end: 1057030a7; -[SCAvatarComposerBuilderPreviewLensViewController viewDidAppear:] */

void FUN_105703064(undefined8 param_1)

{
  func_0x00010570320c();
  func_0x000105703250(param_1,PTR_s_viewDidAppear__112684bd0);
  func_0x0001057031f0();
  func_0x00010c29c760();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105703220();
  func_0x000105703248();
  return;
}



/* Entry: 1057030a8; end: 1057030eb; -[SCAvatarComposerBuilderPreviewLensViewController viewWillAppear:] */

void FUN_1057030a8(undefined8 param_1)

{
  func_0x00010570320c();
  func_0x000105703250(param_1,PTR_s_viewWillAppear__1126853f0);
  func_0x0001057031f0();
  func_0x00010c29e7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105703220();
  func_0x000105703248();
  return;
}


