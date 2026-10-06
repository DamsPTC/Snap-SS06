/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105663f70; end: 105664057; -[SCPhotoPermissionCoordinator _handleMorePhotosCellTap:viewController:] */

void FUN_105663f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bf83000(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105664058; end: 1056640b7;  */

void FUN_105664058(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10cdc0();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056640b8; end: 1056640bf; -[SCPhotoPermissionCoordinator _handleDoneTap:] */

void FUN_1056640b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_dismissActionSheet_1125be5a0);
  return;
}



/* Entry: 1056640c0; end: 1056640ef; -[SCPhotoPermissionCoordinator .cxx_destruct] */

void FUN_1056640c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056640f0; end: 10566418f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056640f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126bc850;
  _objc_alloc(PTR_PTR_1126bc850);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_112727254;
    _objc_loadWeakRetained(lVar3);
  }
  lVar2 = lVar3;
  func_0x00010c293fc0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f0c0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105664190; end: 1056641cb; -[SCPhotoPermissionEntryPoint end] */

void FUN_105664190(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e97f8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056641cc; end: 10566421f; -[SCPhotoPermissionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056641cc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272725c,0);
  _objc_destroyWeak(param_1 + _DAT_112727258);
  _objc_destroyWeak(param_1 + _DAT_112727254);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727250);
  return;
}



/* Entry: 105664220; end: 105664243; +[SCPhotoPermissionHelper isAuthorizationStatusUndetermined] */

bool FUN_105664220(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
  return puVar1 == (undefined *)0x0;
}



/* Entry: 105664244; end: 105664287; +[SCPhotoPermissionHelper isAuthorizationStatusDenied] */

bool FUN_105664244(void)

{
  bool bVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if (puVar2 == (undefined *)0x2) {
    bVar1 = true;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
    bVar1 = puVar2 == (undefined *)0x1;
  }
  return bVar1;
}



/* Entry: 105664288; end: 10566436b; +[SCPhotoPermissionHelper requestAuthorizationWithUserTrackedLogger:sourcePageType:completion:] */

void FUN_105664288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  ppuVar2 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  uStack_38 = puVar1 == (undefined *)0x0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10566436c;
  puStack_58 = &UNK_1108a50c0;
  uStack_50 = param_3;
  uStack_48 = param_5;
  uStack_40 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_70);
  func_0x00010c1349c0(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30,param_2,2,ppuVar2);
  _objc_release(ppuVar2);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10566436c; end: 105664423;  */

void FUN_10566436c(long param_1,long param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010c0ac3c0(PTR_PTR_1126bc840,param_2,param_2 - 3U < 2,*(undefined8 *)(param_1 + 0x20),
                        param_2,*(undefined8 *)(param_1 + 0x30));
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_105664424;
    puStack_38 = &UNK_11084a9b8;
    _objc_retain(lVar1);
    lStack_30 = lVar1;
    uStack_28 = param_2 - 3U < 2;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(lStack_30);
  }
  return;
}



/* Entry: 105664424; end: 105664437;  */

void FUN_105664424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105664434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 105664438; end: 1056644b7; +[SCPhotoPermissionHelper promptToChangeSettingsIfPossibleWithAlertTitle:message:] */

void FUN_105664438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db6ad8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db6ad8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c118980(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1056644b8; end: 105664593; +[SCPhotoPermissionHelper promptToChangeSettingsIfPossibleWithAlertTitle:buttonTitle:message:] */

void FUN_1056644b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105664594;
  puStack_58 = &UNK_11084d788;
  uStack_50 = param_4;
  uStack_48 = param_3;
  uStack_40 = param_5;
  uStack_38 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 105664594; end: 105664713;  */

void FUN_105664594(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc0000000;
  pcStack_70 = FUN_105664714;
  puStack_68 = &UNK_1108a50f0;
  uStack_60 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = PTR_PTR_1126af180;
  func_0x00010beef320(PTR_PTR_1126af180,param_2,*(undefined8 *)(param_1 + 0x20),3,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af180;
  ppuVar2 = &PTR____CFConstantStringClassReference_110dace78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dace78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  puVar4 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_58 = puVar1;
  puStack_50 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0e99b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + 0x20),PTR_s_openSystemPermissionSettings_112618080);
  return;
}



/* Entry: 105664714; end: 10566471f;  */

void FUN_105664714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e99b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_openSystemPermissionSettings_112618080);
  return;
}



/* Entry: 105664720; end: 105664757; +[SCPhotoPermissionHelper openSystemPermissionSettings] */

void FUN_105664720(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105664758; end: 1056648e7; +[SCPhotoPermissionHelper checkCameraAccessWithSuccessBlock:failureBlock:showDeniedAlert:userTrackedLogger:sourcePageType:] */

void FUN_105664758(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  code *pcVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126bc840;
  func_0x00010c06ca80();
  puVar1 = PTR_PTR_1126bc840;
  if ((int)puVar2 == 0) {
    puVar2 = PTR_PTR_1126bc840;
    func_0x00010c06caa0();
    puVar1 = PTR_PTR_1126bc840;
    if ((int)puVar2 != 0) {
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c134ac0(puVar1);
      _objc_release(param_4);
      _objc_release(param_3);
      goto LAB_1056648b4;
    }
    if (param_3 == 0) goto LAB_1056648b4;
    pcVar6 = *(code **)(param_3 + 0x10);
    lVar5 = param_3;
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110df3b78;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110df3b78,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110df3b98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110df3b98,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1189a0(puVar1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    if (param_4 == 0) goto LAB_1056648b4;
    pcVar6 = *(code **)(param_4 + 0x10);
    lVar5 = param_4;
  }
  (*pcVar6)(lVar5);
LAB_1056648b4:
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056648e8; end: 1056649e7;  */

void FUN_1056648e8(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined1 uStack_27;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10566498c;
  puStack_48 = &UNK_1108a5130;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = param_2;
  _objc_retain(uVar1);
  uStack_27 = *(undefined1 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  uStack_30 = uVar3;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  return;
}



/* Entry: 1056649e8; end: 1056649ef; +[SCPhotoPermissionHelper checkCameraAccessWithSuccessBlock:failureBlock:showDeniedAlert:userTrackedLogger:] */

void FUN_1056649e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf37d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_checkCameraAccessWithSuccessBloc_1125ab8e8);
  return;
}



/* Entry: 1056649f0; end: 105664a03; +[SCPhotoPermissionHelper _presentPhotoAccessDeniedAlert] */

void FUN_1056649f0(void)

{
  char *pcVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  char *pcStack_28;
  
  pcVar1 = "APPSTORE";
  func_0x0001000d77b8("APPSTORE",&PTR___NSConcreteGlobalBlock_1108a5190);
  func_0x000107c61180();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  puStack_38 = &UNK_100c3b500;
  puStack_30 = &UNK_110849530;
  pcStack_28 = pcVar1;
  func_0x000107c61174();
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_48);
  func_0x000107c61170(pcStack_28);
  func_0x000107c61170(pcVar1);
  return;
}



/* Entry: 105664a04; end: 105664b63;  */

void FUN_105664a04(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126af180;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dae6f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae6f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc3e98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3e98,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110df3bb8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110df3bb8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar4;
  func_0x00010c235c40(puVar3);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b6df0;
  _objc_retain(ppuVar6);
  _objc_alloc_init(puVar2);
  func_0x00010c1dab80();
  func_0x00010c160cc0(puVar2);
  func_0x00010c1db440(puVar2);
  func_0x00010c1d7e80(puVar2);
  ppuVar1 = ppuVar6;
  func_0x00010c269d40(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  func_0x00010c0b2e60(ppuVar1);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105664b64; end: 105664c33; +[SCPhotoPermissionHelper logPhotoPermission:userTrackedLogger:photoPermissionAuthorizationStatus:sourcePageType:] */

void FUN_105664b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b6df0;
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c1dab80();
  func_0x00010c160cc0(puVar1,param_2,param_3);
  if (param_5 - 1U < 4) {
    uVar2 = *(undefined8 *)(&UNK_10ddb8300 + (param_5 - 1U) * 8);
  }
  else {
    uVar2 = 1;
  }
  func_0x00010c1db440(puVar1,param_2,uVar2);
  func_0x00010c1d7e80(puVar1,param_2,param_6);
  uVar2 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0b2e60(uVar2,param_2,puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105664c34; end: 105664e63;  */

char * FUN_105664c34(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5,
                    long param_6)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  char *pcStack_100;
  undefined *puStack_f8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  uVar8 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = acStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108a51b0);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar9 = 0;
    uVar8 = param_4;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  ppcVar3 = &pcStack_100;
  _objc_retain(pcVar1);
  _objc_retain(uVar8);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_f8 = PTR_PTR_1126e9808;
  pcStack_100 = pcVar2;
  _objc_msgSendSuper2(&pcStack_100,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    _objc_retain(pcVar1);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x10);
    *(char **)((long)ppcVar3 + 0x10) = pcVar1;
    _objc_release(uVar4);
    _objc_retain(uVar8);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x18);
    *(undefined8 *)((long)ppcVar3 + 0x18) = uVar8;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x20);
    *(undefined8 *)((long)ppcVar3 + 0x20) = param_5;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x38);
    *(long *)((long)ppcVar3 + 0x38) = param_6;
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)ppcVar3 + 8);
    *(undefined **)((long)ppcVar3 + 8) = puVar5;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)ppcVar3 + 0x28);
    *(undefined **)((long)ppcVar3 + 0x28) = puVar5;
    _objc_release(uVar4);
    lVar9 = param_6;
    func_0x00010c0b84a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 == 0) {
      *(char *)((long)ppcVar3 + 0x30) = '\0';
    }
    else {
      lVar6 = lVar9;
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf1f3c0();
      *(char *)((long)ppcVar3 + 0x30) = (char)lVar7;
      _objc_release(lVar6);
    }
    _objc_release(lVar9);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar8);
  _objc_release(pcVar1);
  return (char *)ppcVar3;
}



/* Entry: 105664e64; end: 105665017; -[SCMemoriesSnapDocDownloadingService initWithContentDeliveryService:snapDocManagerService:grapheneRegistry:circumstanceEngine:] */

undefined1 *
FUN_105664e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e9808;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(long *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    lVar4 = param_6;
    func_0x00010c0b84a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      *(undefined1 *)((long)puVar1 + 0x30) = 0;
    }
    else {
      lVar5 = lVar4;
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf1f3c0();
      *(char *)((long)puVar1 + 0x30) = (char)lVar6;
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105665018; end: 105665043; -[SCMemoriesSnapDocDownloadingService downloadWithSnapDocKey:snapDoc:pageInfo:callsite:progressPerformer:progressHandler:completionPerformer:completion:] */

void FUN_105665018(void)

{
  func_0x00010bf89280();
  return;
}



/* Entry: 105665044; end: 10566513b; -[SCMemoriesSnapDocDownloadingService downloadWithSnapDocKey:snapDoc:pageInfo:callsite:progressPerformer:progressHandler:completionPerformer:decryptRemoteContent:completion:] */

void FUN_105665044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  _objc_retain(param_12);
  _objc_retain(param_12);
  func_0x00010bf892a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_12);
  _objc_release(param_12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10566513c; end: 105665147;  */

void FUN_10566513c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105665144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105665148; end: 1056653ab; -[SCMemoriesSnapDocDownloadingService downloadWithSnapDocKey:snapDoc:pageInfo:callsite:progressPerformer:progressHandler:completionPerformer:decryptRemoteContent:errorCompletion:] */

void FUN_105665148(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = param_12;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_1056653ac;
  puStack_d8 = &UNK_1108a5440;
  uStack_80 = param_12;
  uStack_d0 = param_4;
  _objc_retain(uVar1);
  uStack_70 = param_10;
  uStack_88 = param_9;
  uStack_c8 = uVar1;
  lStack_c0 = param_1;
  uStack_b8 = uVar4;
  uStack_b0 = param_7;
  uStack_a8 = param_3;
  uStack_a0 = uVar3;
  uStack_98 = param_6;
  uStack_90 = param_5;
  uStack_78 = param_8;
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_12);
  _objc_retain(param_4);
  _objc_retain(uVar4);
  func_0x00010c0f7fc0(uVar4,param_2,&puStack_f0);
  uVar2 = uStack_88;
  _objc_retain(uVar1);
  _objc_release(uVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a8);
  _objc_release(uStack_78);
  _objc_release(uStack_b0);
  _objc_release(uStack_c8);
  _objc_release(uStack_80);
  _objc_release(uStack_d0);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_12);
  _objc_release(param_4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056653ac; end: 105665fb7;  */

void FUN_1056653ac(long param_1)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined1 auVar26 [16];
  undefined *puStack_3f0;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined *puStack_390;
  undefined8 uStack_388;
  code *pcStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  ulong uStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined **ppuStack_2f8;
  undefined8 uStack_2f0;
  undefined **ppuStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined **ppuStack_2b0;
  undefined8 uStack_2a8;
  undefined **ppuStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined **ppuStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined **ppuStack_248;
  byte bStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined **ppuStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar5;
  func_0x00010bd86870(uVar5,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0e98,
                      &PTR___NSConcreteGlobalBlock_1108a5270);
  uVar6 = uVar4;
  func_0x00010c282760();
  _objc_release(uVar4);
  if ((int)uVar6 == 0) {
    ppuVar18 = *(undefined ***)(param_1 + 0x28);
    (**(code **)(*(long *)(param_1 + 0x70) + 0x10))(*(long *)(param_1 + 0x70),1,ppuVar18,0);
  }
  else {
    puVar7 = PTR_PTR_1126b2798;
    _objc_opt_new();
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 8);
    func_0x00010c220220();
    _dispatch_group_create();
    puStack_168 = &uStack_128;
    uStack_128 = 0;
    uStack_118 = 0x2020000000;
    uStack_110 = 0;
    puStack_170 = &uStack_158;
    uStack_158 = 0;
    uStack_148 = 0x3032000000;
    pcStack_140 = FUN_105666044;
    uStack_138 = 0x105666054;
    uStack_130 = 0;
    puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_10566605c;
    puStack_198 = &UNK_1108a52f0;
    uVar22 = *(undefined8 *)(param_1 + 0x38);
    uVar24 = *(undefined8 *)(param_1 + 0x40);
    puStack_150 = puStack_170;
    puStack_120 = puStack_168;
    _objc_retain(*(undefined8 *)(param_1 + 0x40));
    uVar20 = *(undefined8 *)(param_1 + 0x78);
    uStack_190 = uVar22;
    uStack_188 = uVar24;
    _objc_retain(uVar20);
    uStack_178 = uVar20;
    uStack_160 = uVar6 & 0xffffffff;
    _objc_retain(uVar8);
    ppuVar9 = &puStack_1b0;
    uStack_180 = uVar8;
    _objc_retainBlock();
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    _objc_retain(uVar5);
    uVar4 = uVar5;
    func_0x00010bf52a60();
    if (uVar4 != 0) {
      lVar19 = *plStack_1e0;
      do {
        uVar25 = 0;
        do {
          if (*plStack_1e0 != lVar19) {
            _objc_enumerationMutation(uVar5);
          }
          ppuVar21 = *(undefined ***)(lStack_1e8 + uVar25 * 8);
          ppuVar18 = ppuVar21;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar21;
          func_0x00010c0c3fe0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = ppuVar10;
          func_0x00010bfd8fc0();
          _objc_release(ppuVar10);
          if (((ulong)ppuVar11 & 1) != 0) {
            _dispatch_group_enter(uVar8);
            puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_230 = 0xc2000000;
            pcStack_228 = FUN_1056662b0;
            puStack_220 = &UNK_1108a5320;
            uVar22 = *(undefined8 *)(param_1 + 0x20);
            _objc_retain(uVar22);
            uVar20 = *(undefined8 *)(param_1 + 0x48);
            uStack_218 = uVar22;
            ppuStack_210 = ppuVar18;
            _objc_retain(uVar20);
            uVar22 = *(undefined8 *)(param_1 + 0x50);
            uVar24 = *(undefined8 *)(param_1 + 0x58);
            uStack_208 = uVar20;
            _objc_retain(*(undefined8 *)(param_1 + 0x58));
            ppuVar10 = &puStack_238;
            uStack_200 = uVar22;
            uStack_1f8 = uVar24;
            FUN_1056662b0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar11 = ppuVar10;
            func_0x00010c09d820();
            _objc_retainAutoreleasedReturnValue();
            ppuVar12 = ppuVar11;
            func_0x00010c08fa60();
            _objc_release(ppuVar11);
            ppuVar11 = (undefined **)PTR_PTR_1126bc860;
            if (ppuVar12 == (undefined **)0x0) {
              ppuVar12 = ppuVar18;
              func_0x00010c0c5180(ppuVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf4c8c0();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              ppuVar12 = ppuVar10;
              func_0x00010c09d820();
              _objc_retainAutoreleasedReturnValue();
              ppuVar11 = ppuVar12;
              func_0x000108019ebc();
              _objc_retainAutoreleasedReturnValue();
            }
            _objc_release(ppuVar12);
            uVar22 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
            func_0x00010bf4c240();
            _objc_retainAutoreleasedReturnValue();
            ppuVar12 = ppuVar10;
            func_0x00010c0c6c20();
            bVar3 = (int)ppuVar12 == 3;
            bVar1 = *(byte *)(*(long *)(param_1 + 0x30) + 0x30);
            ppuVar12 = ppuVar18;
            func_0x00010b5fb7f4(ppuVar18,bVar3);
            puVar13 = PTR_PTR_1126ba150;
            if ((int)ppuVar12 == 0) {
LAB_105665778:
              puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_290 = 0xc2000000;
              pcStack_288 = FUN_105666418;
              puStack_280 = &UNK_1108a53b0;
              _objc_retain(ppuVar11);
              uVar24 = *(undefined8 *)(param_1 + 0x48);
              ppuStack_278 = ppuVar11;
              _objc_retain(uVar24);
              uVar23 = *(undefined8 *)(param_1 + 0x60);
              uStack_270 = uVar24;
              _objc_retain(uVar23);
              uVar24 = *(undefined8 *)(param_1 + 0x50);
              uVar20 = *(undefined8 *)(param_1 + 0x58);
              uStack_268 = uVar23;
              uStack_260 = uVar22;
              bStack_240 = bVar3 & bVar1;
              _objc_retain(*(undefined8 *)(param_1 + 0x58));
              uStack_258 = uVar24;
              uStack_250 = uVar20;
              _objc_retain(ppuVar9);
              ppuVar12 = &puStack_298;
              ppuStack_248 = ppuVar9;
              _objc_retainBlock();
              func_0x00010c0c3fe0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar14 = ppuVar21;
              func_0x00010bf93e60();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar21);
              if (*(char *)(param_1 + 0x80) == '\x01') {
                ppuVar21 = ppuVar14;
                func_0x00010c086560();
                _objc_retainAutoreleasedReturnValue();
                ppuStack_3c8 = ppuVar21;
                func_0x00010bf15da0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar21);
                if (*(char *)(param_1 + 0x80) != '\x01') goto LAB_1056658b4;
                ppuVar21 = ppuVar14;
                func_0x00010c085300();
                _objc_retainAutoreleasedReturnValue();
                ppuStack_3d0 = ppuVar21;
                func_0x00010bf15da0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar21);
              }
              else {
                ppuStack_3c8 = (undefined **)0x0;
LAB_1056658b4:
                ppuStack_3d0 = (undefined **)0x0;
              }
              ppuVar21 = ppuVar10;
              func_0x00010c09d820();
              _objc_retainAutoreleasedReturnValue();
              ppuVar15 = ppuVar21;
              func_0x00010c08fa60();
              if (ppuVar15 == (undefined **)0x0) {
                ppuVar15 = ppuVar10;
                func_0x00010c09d7e0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar16 = ppuVar15;
                func_0x00010c08fa60();
                _objc_release(ppuVar15);
                _objc_release(ppuVar21);
                if (ppuVar16 != (undefined **)0x0) goto LAB_105665914;
                ppuVar21 = ppuVar10;
                func_0x00010bdc2b80();
                _objc_retainAutoreleasedReturnValue();
                ppuVar15 = ppuVar21;
                func_0x00010c08fa60();
                _objc_release(ppuVar21);
                if (ppuVar15 == (undefined **)0x0) {
                  ppuVar21 = ppuVar10;
                  func_0x00010bf4cce0();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar15 = ppuVar21;
                  func_0x00010c08fa60();
                  _objc_release(ppuVar21);
                  if (ppuVar15 == (undefined **)0x0) {
                    func_0x00010b5f1f10(*(undefined8 *)(param_1 + 0x50),
                                        *(undefined8 *)(param_1 + 0x58),
                                        &PTR____CFConstantStringClassReference_110df3c58);
                    puStack_3f0 = (undefined *)0x4;
                    FUN_1056666a8(4,ppuVar11);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)ppuVar9[2])(ppuVar9,puStack_3f0);
                  }
                  else {
                    func_0x00010c0c6c20();
                    puStack_3f0 = PTR__OBJC_CLASS___NSDate_1126ae770;
                    func_0x00010bf65600(0x4143c68000000000);
                    _objc_retainAutoreleasedReturnValue();
                    uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
                    func_0x00010bf4c240();
                    _objc_retainAutoreleasedReturnValue();
                    uVar24 = uVar20;
                    func_0x00010c269d40();
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar21 = ppuVar10;
                    func_0x00010bf4cce0(ppuVar10);
                    _objc_retainAutoreleasedReturnValue();
                    puStack_328 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_320 = 0xc2000000;
                    uStack_318 = 0x1056668bc;
                    puStack_310 = &UNK_1108a53e0;
                    puStack_308 = puVar7;
                    _objc_retain(uVar8);
                    uVar23 = *(undefined8 *)(param_1 + 0x48);
                    uStack_300 = uVar8;
                    ppuStack_2f8 = ppuVar18;
                    _objc_retain(uVar23);
                    uStack_2f0 = uVar23;
                    ppuStack_2e8 = ppuVar12;
                    func_0x00010c125e00(uVar24);
                    _objc_release(ppuVar21);
                    _objc_release(uVar24);
                    _objc_release(uVar20);
                    _objc_release(uStack_2f0);
                    _objc_release(uStack_300);
                  }
                }
                else {
                  puStack_3f0 = PTR_PTR_1126b1058;
                  _objc_alloc();
                  ppuVar21 = ppuVar11;
                  func_0x00010b0ee738(ppuVar11);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar15 = ppuVar11;
                  func_0x00010c0c46a0(ppuVar11);
                  func_0x000107951d78();
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar16 = ppuVar10;
                  func_0x00010c0c6c20();
                  uVar2 = (int)ppuVar16 - 1;
                  if (uVar2 < 0xb) {
                    uVar24 = *(undefined8 *)(&UNK_10ddb8320 + (ulong)uVar2 * 8);
                  }
                  else {
                    uVar24 = 0;
                  }
                  func_0x00010b7f5628(uVar24);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c01b360();
                  _objc_release(uVar24);
                  _objc_release(ppuVar15);
                  _objc_release(ppuVar21);
                  puVar13 = PTR_PTR_1126b1050;
                  _objc_alloc(PTR_PTR_1126b1050);
                  ppuVar21 = ppuVar10;
                  func_0x00010bdc2b80(ppuVar10);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar15 = ppuVar11;
                  func_0x00010b0ee738();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c05a200(puVar13);
                  _objc_release(ppuVar15);
                  _objc_release(ppuVar21);
                  puVar17 = PTR__OBJC_CLASS___NSDate_1126ae770;
                  func_0x00010bf65600(0x4143c68000000000);
                  _objc_retainAutoreleasedReturnValue();
                  uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
                  func_0x00010bf4c240();
                  _objc_retainAutoreleasedReturnValue();
                  uVar24 = uVar20;
                  func_0x00010c269d40(uVar20);
                  _objc_retainAutoreleasedReturnValue();
                  puStack_2e0 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_2d8 = 0xc2000000;
                  uStack_2d0 = 0x105666858;
                  puStack_2c8 = &UNK_1108a53e0;
                  puStack_2c0 = puVar7;
                  _objc_retain(uVar8);
                  uVar23 = *(undefined8 *)(param_1 + 0x48);
                  uStack_2b8 = uVar8;
                  ppuStack_2b0 = ppuVar18;
                  _objc_retain(uVar23);
                  uStack_2a8 = uVar23;
                  ppuStack_2a0 = ppuVar12;
                  func_0x00010c126160(uVar24);
                  _objc_release(uVar24);
                  _objc_release(uVar20);
                  _objc_release(uStack_2a8);
                  _objc_release(uStack_2b8);
                  _objc_release(puVar17);
                  _objc_release(puVar13);
                }
                _objc_release(puStack_3f0);
              }
              else {
                _objc_release(ppuVar21);
LAB_105665914:
                (*(code *)ppuVar9[2])(ppuVar9,0);
              }
              _objc_release(ppuStack_3d0);
              _objc_release(ppuStack_3c8);
              _objc_release(ppuVar14);
              _objc_release(ppuVar12);
              _objc_release(ppuStack_248);
              _objc_release(uStack_250);
              _objc_release(uStack_268);
              _objc_release(uStack_270);
              _objc_release(ppuStack_278);
            }
            else {
              func_0x00010b5fb84c(ppuVar18);
              func_0x00010bf88960();
              if ((int)puVar13 == 0) goto LAB_105665778;
              _dispatch_group_leave(uVar8);
            }
            _objc_release(uVar22);
            _objc_release(ppuVar11);
            _objc_release(ppuVar10);
            _objc_release(uStack_1f8);
            _objc_release(uStack_208);
            _objc_release(uStack_218);
          }
          _objc_release(ppuVar18);
          uVar25 = uVar25 + 1;
        } while (uVar4 != uVar25);
        uVar4 = uVar5;
        func_0x00010bf52a60();
      } while (uVar4 != 0);
    }
    _objc_release(uVar5);
    uVar22 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c11de00(uVar22);
    _objc_retainAutoreleasedReturnValue();
    puStack_390 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_388 = 0xc2000000;
    pcStack_380 = FUN_105666920;
    puStack_378 = &UNK_1108a5410;
    puStack_340 = &uStack_128;
    uVar24 = *(undefined8 *)(param_1 + 0x48);
    uStack_330 = uVar6 & 0xffffffff;
    _objc_retain(uVar24);
    puStack_338 = &uStack_158;
    uVar20 = *(undefined8 *)(param_1 + 0x70);
    uStack_370 = uVar24;
    puStack_368 = puVar7;
    _objc_retain(uVar20);
    uVar24 = *(undefined8 *)(param_1 + 0x28);
    uStack_348 = uVar20;
    _objc_retain(uVar24);
    auVar26 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x30),*(undefined1 (*) [16])(param_1 + 0x30)
                       ,8,1);
    uStack_350 = auVar26._8_8_;
    uStack_358 = auVar26._0_8_;
    ppuVar18 = &puStack_390;
    uStack_360 = uVar24;
    func_0x000100bc0718(uVar8,uVar22,ppuVar18);
    _objc_release(uVar22);
    _objc_release(uStack_360);
    _objc_release(uStack_348);
    _objc_release(uStack_370);
    _objc_release(ppuVar9);
    _objc_release(uStack_180);
    _objc_release(uStack_178);
    _objc_release(uStack_188);
    __Block_object_dispose(&uStack_158,8);
    _objc_release(uStack_130);
    __Block_object_dispose(&uStack_128,8);
    _objc_release(uVar8);
    _objc_release(puVar7);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_158,8);
  uVar24 = 8;
  __Block_object_dispose(&uStack_128,8);
  __Unwind_Resume(uVar5);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(uVar24);
  func_0x00010c282760(ppuVar18);
  uVar22 = uVar24;
  func_0x00010c0c3fe0(uVar24);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar24);
  func_0x00010bfd8fc0(uVar22);
  func_0x00010c0df820(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105665fb8; end: 105666043;  */

void FUN_105665fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  func_0x00010c282760(param_3);
  uVar1 = param_2;
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bfd8fc0(uVar1);
  func_0x00010c0df820(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105666044; end: 10566605b;  */

void FUN_105666044(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10566605c; end: 10566622b;  */

void FUN_10566605c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10566622c; end: 10566624b;  */

void FUN_10566622c(long param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x28));
  dVar2 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000105666248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(dVar1 / dVar2,*(long *)(param_1 + 0x20));
  return;
}



/* Entry: 10566624c; end: 1056662af;  */

void FUN_10566624c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  return;
}



/* Entry: 1056662b0; end: 105666417;  */

void FUN_1056662b0(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  do {
    if (lVar8 == 0) {
      _objc_release(lVar3);
      lVar3 = *(long *)(param_1 + 0x38);
      func_0x00010b5f1f10(lVar3,*(undefined8 *)(param_1 + 0x40),
                          &PTR____CFConstantStringClassReference_110df3c18);
      lVar11 = 0;
LAB_1056663d8:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
        ___stack_chk_fail();
        puVar7 = PTR_PTR_1126b1378;
        func_0x00010c0c46a0(*(undefined8 *)(lVar3 + 0x20));
        func_0x00010c291580(puVar7);
        _objc_retainAutoreleasedReturnValue();
        cVar1 = *(char *)(lVar3 + 0x58);
        lVar8 = *(long *)(lVar3 + 0x38);
        func_0x00010c269d40(lVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = *(undefined8 *)(lVar3 + 0x20);
        lVar11 = lVar8;
        if (cVar1 == '\x01') {
          _objc_retain(uVar12);
          uVar13 = *(undefined8 *)(lVar3 + 0x28);
          _objc_retain(uVar13);
          uVar15 = *(undefined8 *)(lVar3 + 0x48);
          _objc_retain(*(undefined8 *)(lVar3 + 0x48));
          uVar10 = *(undefined8 *)(lVar3 + 0x50);
          _objc_retain(uVar10);
          func_0x00010c13e5c0(lVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar10);
          _objc_release(uVar15);
          _objc_release(uVar13);
        }
        else {
          _objc_retain(uVar12);
          uVar13 = *(undefined8 *)(lVar3 + 0x28);
          _objc_retain(uVar13);
          uVar15 = *(undefined8 *)(lVar3 + 0x48);
          _objc_retain(*(undefined8 *)(lVar3 + 0x48));
          uVar10 = *(undefined8 *)(lVar3 + 0x50);
          _objc_retain(uVar10);
          func_0x00010c13e4a0(lVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar10);
          _objc_release(uVar15);
          _objc_release(uVar13);
        }
        _objc_release(uVar12);
        _objc_release(lVar8);
        _objc_release(puVar7);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar11);
      return;
    }
    lVar14 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar3);
      }
      lVar11 = *(long *)(lVar14 * 8);
      lVar4 = lVar11;
      func_0x00010c0c55e0();
      lVar5 = *(long *)(param_1 + 0x28);
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0c55e0();
      _objc_release(lVar5);
      if (lVar4 == lVar6) {
        _objc_retain(lVar11);
        _objc_release();
        goto LAB_1056663d8;
      }
      lVar14 = lVar14 + 1;
    } while (lVar8 != lVar14);
    lVar8 = lVar3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105666418; end: 10566660b;  */

void FUN_105666418(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR_PTR_1126b1378;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c46a0(uVar2);
  func_0x00010c291580(puVar3,param_2,uVar2,*(undefined8 *)(param_1 + 0x30),0xd);
  _objc_retainAutoreleasedReturnValue();
  cVar1 = *(char *)(param_1 + 0x58);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = uVar4;
  if (cVar1 == '\x01') {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10566660c;
    puStack_70 = &UNK_1108a5350;
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uStack_68 = uVar5;
    _objc_retain(uVar6);
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = uVar6;
    _objc_retain(*(undefined8 *)(param_1 + 0x48));
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    uStack_58 = uVar7;
    uStack_50 = uVar8;
    _objc_retain(uVar6);
    uStack_48 = uVar6;
    func_0x00010c13e5c0(uVar4,param_2,uVar5,puVar3,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_60);
    uVar5 = uStack_68;
  }
  else {
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1056667e0;
    puStack_b8 = &UNK_1108a5380;
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uStack_b0 = uVar5;
    _objc_retain(uVar6);
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    uStack_a8 = uVar6;
    _objc_retain(*(undefined8 *)(param_1 + 0x48));
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    uStack_a0 = uVar7;
    uStack_98 = uVar8;
    _objc_retain(uVar6);
    uStack_90 = uVar6;
    func_0x00010c13e4a0(uVar4,param_2,uVar5,puVar3,&puStack_d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a8);
    uVar5 = uStack_b0;
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10566660c; end: 1056666a7;  */

void FUN_10566660c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcaaa0();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0);
  }
  else {
    func_0x00010b5f1f10(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                        &PTR____CFConstantStringClassReference_110df3c38);
    lVar2 = *(long *)(param_1 + 0x40);
    lVar1 = param_2;
    func_0x00010bfcaaa0(param_2);
    FUN_1056666a8();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056666a8; end: 1056667df;  */

void FUN_1056666a8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar5 = 1;
  if (param_1 == 3) {
    iVar5 = 2;
  }
  func_0x00010b0ee738();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105666808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x40) + 0x10))(*(long *)(param_2 + 0x40),0);
    return;
  }
  func_0x00010b5f1f10(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),
                      &PTR____CFConstantStringClassReference_110df3c38);
  lVar6 = *(long *)(param_2 + 0x40);
  uVar4 = 4;
  FUN_1056666a8(4,*(undefined8 *)(param_2 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1056667e0; end: 10566691f;  */

void FUN_1056667e0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105666808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0);
    return;
  }
  func_0x00010b5f1f10(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110df3c38);
  lVar2 = *(long *)(param_1 + 0x40);
  uVar1 = 4;
  FUN_1056666a8(4,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105666920; end: 105666ab7;  */

void FUN_105666920(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18);
  lVar8 = *(long *)(param_1 + 0x60);
  if (lVar7 == lVar8) {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x28);
    func_0x00010c06e0e0();
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((uVar2 & 1) == 0) {
      puVar6 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28);
      _objc_retain(puVar6);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
  }
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))
            (*(long *)(param_1 + 0x48),lVar7 == lVar8,*(undefined8 *)(param_1 + 0x30),puVar6);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(puVar6 + 0x20) + 8),
             PTR_s_setObject_forKeyedSubscript__112651bb8,0,*(undefined8 *)(puVar6 + 0x28));
  return;
}



/* Entry: 105666ab8; end: 105666ac7;  */

void FUN_105666ab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_setObject_forKeyedSubscript__112651bb8,0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105666ac8; end: 105666b53;  */

void FUN_105666ac8(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),7);
  return;
}



/* Entry: 105666b54; end: 105666be3; -[SCMemoriesSnapDocDownloadingService cancelTaskWithToken:] */

void FUN_105666b54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105666be4;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105666be4; end: 105666c23;  */

void FUN_105666be4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bf2dba0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105666c24; end: 105666cd3; -[SCMemoriesSnapDocDownloadingService .cxx_destruct] */

void FUN_105666c24(long param_1)

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



/* Entry: 105666cd4; end: 105666df3; -[SCMemoriesSnapDocDownloadingServiceProvider _createSnapDocDownloadingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105666cd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126bc870;
  _objc_alloc(PTR_PTR_1126bc870);
  if (param_1 == 0) {
    lVar6 = 0;
    lVar5 = 0;
    lVar7 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_112727284;
    _objc_loadWeakRetained(lVar5);
    lVar6 = param_1 + _DAT_112727288;
    _objc_loadWeakRetained(lVar6);
    lVar7 = param_1 + _DAT_11272728c;
    _objc_loadWeakRetained(lVar7);
  }
  lVar2 = lVar7;
  func_0x00010bfcdfa0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = 0;
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_112727290;
    _objc_loadWeakRetained(lVar3);
  }
  lVar4 = lVar3;
  func_0x00010bf398e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003400(puVar1,param_2,lVar5,lVar6,lVar2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105666df4; end: 105666e4f; -[SCMemoriesSnapDocDownloadingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105666df4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112727290);
  _objc_destroyWeak(param_1 + _DAT_11272728c);
  _objc_destroyWeak(param_1 + _DAT_112727288);
  _objc_destroyWeak(param_1 + _DAT_112727284);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112727280);
  return;
}



/* Entry: 105666e50; end: 105666e9f; -[SCGalleryUserDefaultsManager displayedCameraRollTabIntroPopup] */

undefined8 FUN_105666e50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be23ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110df3cb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde95c0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105666ea0; end: 105666ee7; -[SCGalleryUserDefaultsManager setDisplayedCameraRollTabIntroPopup:] */

void FUN_105666ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf868e0();
  if ((int)param_3 != (int)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bea24f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__setBoolUserPreference_forKey__1125862e0,param_3,
               &PTR____CFConstantStringClassReference_110df3cb8);
    return;
  }
  return;
}



/* Entry: 105666ee8; end: 105666f37; -[SCGalleryUserDefaultsManager displayedSaveOptionPrompt] */

undefined8 FUN_105666ee8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be23ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110df3cd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde95c0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105666f38; end: 105666f7f; -[SCGalleryUserDefaultsManager setDisplayedSaveOptionPrompt:] */

void FUN_105666f38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf86b60();
  if ((int)param_3 != (int)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bea24f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__setBoolUserPreference_forKey__1125862e0,param_3,
               &PTR____CFConstantStringClassReference_110df3cd8);
    return;
  }
  return;
}



/* Entry: 105666f80; end: 105666fc7; -[SCGalleryUserDefaultsManager setManuallyTurnedBackupOnCellular:] */

void FUN_105666f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0b85c0();
  if ((int)param_3 != (int)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bea24f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__setBoolUserPreference_forKey__1125862e0,param_3,
               &PTR____CFConstantStringClassReference_110df3cf8);
    return;
  }
  return;
}



/* Entry: 105666fc8; end: 105667017; -[SCGalleryUserDefaultsManager manuallyTurnedBackupOnCellular] */

undefined8 FUN_105666fc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be23ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110df3cf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde95c0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105667018; end: 10566708b; -[SCGalleryUserDefaultsManager setLastDismissModetizationBannerTimestampInSec:] */

void FUN_105667018(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110df3f18);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10566708c; end: 1056670d7; -[SCGalleryUserDefaultsManager lastDismissModetizationBannerTimestampInSec] */

undefined8 FUN_10566708c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be23ae0(param_2,param_3,&PTR____CFConstantStringClassReference_110df3f18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1056670d8; end: 10566714b; -[SCGalleryUserDefaultsManager setLastDismissFaceTaggingPermissionTrayTimestampInSec:] */

void FUN_1056670d8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110df3f38);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10566714c; end: 105667197; -[SCGalleryUserDefaultsManager lastDismissFaceTaggingPermissionTrayTimestampInSec] */

undefined8 FUN_10566714c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be23ae0(param_2,param_3,&PTR____CFConstantStringClassReference_110df3f38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105667198; end: 10566720b; -[SCGalleryUserDefaultsManager setLastDismissFaceTaggingSearchPermissionTrayTimestampInSec:] */

void FUN_105667198(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110df3f58);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10566720c; end: 105667257; -[SCGalleryUserDefaultsManager lastDismissFaceTaggingSearchPermissionTrayTimestampInSec] */

undefined8 FUN_10566720c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be23ae0(param_2,param_3,&PTR____CFConstantStringClassReference_110df3f58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105667258; end: 1056672cb; -[SCGalleryUserDefaultsManager setLastSnapsTabBackupBannerDismissalTimestamp:] */

void FUN_105667258(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110df3d18);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056672cc; end: 105667317; -[SCGalleryUserDefaultsManager lastSnapsTabBackupBannerDismissalTimestamp] */

undefined8 FUN_1056672cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be23ae0(param_2,param_3,&PTR____CFConstantStringClassReference_110df3d18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105667318; end: 105667383; -[SCGalleryUserDefaultsManager setNumTimesSeenBackupBanner:] */

void FUN_105667318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110df3d78);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105667384; end: 1056673c7; -[SCGalleryUserDefaultsManager numTimesSeenBackupBanner] */

ulong FUN_105667384(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  func_0x00010be23ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110df3d78);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c282760();
  _objc_release(param_1);
  return uVar1 & 0xffffffff;
}



/* Entry: 1056673c8; end: 105667433; -[SCGalleryUserDefaultsManager setSnapsTabBackupBannerCooldownCounter:] */

void FUN_1056673c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110df3d58);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105667434; end: 105667477; -[SCGalleryUserDefaultsManager snapsTabBackupBannerCooldownCounter] */

ulong FUN_105667434(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  func_0x00010be23ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110df3d58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c282760();
  _objc_release(param_1);
  return uVar1 & 0xffffffff;
}



/* Entry: 105667478; end: 1056674eb; -[SCGalleryUserDefaultsManager setSnapsTabBackupBannerDismissalCooldown:] */

void FUN_105667478(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110df3d38);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056674ec; end: 105667537; -[SCGalleryUserDefaultsManager snapsTabBackupBannerDismissalCooldown] */

undefined8 FUN_1056674ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be23ae0(param_2,param_3,&PTR____CFConstantStringClassReference_110df3d38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105667538; end: 10566758f; -[SCGalleryUserDefaultsManager setDateForLatestCloudSyncDataCapUsage:] */

void FUN_105667538(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105667590; end: 1056675df; -[SCGalleryUserDefaultsManager dateForLatestCloudSyncDataCapUsage] */

void FUN_105667590(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1056675e0; end: 105667637; -[SCGalleryUserDefaultsManager setCloudSyncDataCapCurrentDataUsageInBytes:] */

void FUN_1056675e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105667638; end: 105667643; -[SCGalleryUserDefaultsManager cloudSyncDataCapCurrentDataUsageInBytes] */

void FUN_105667638(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be23af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getUserPreferenceForKey__112566858,
             &PTR____CFConstantStringClassReference_110df3db8);
  return;
}



/* Entry: 105667644; end: 10566769b; -[SCGalleryUserDefaultsManager setDateForLatestRecentAdventureCollageGenerated:] */

void FUN_105667644(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10566769c; end: 1056676eb; -[SCGalleryUserDefaultsManager dateForLatestRecentAdventureCollageGenerated] */

void FUN_10566769c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1056676ec; end: 105667743; -[SCGalleryUserDefaultsManager setDateForLatestDailyRecapCollageGenerated:] */

void FUN_1056676ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105667744; end: 105667793; -[SCGalleryUserDefaultsManager dateForLatestDailyRecapCollageGenerated] */

void FUN_105667744(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105667794; end: 1056677eb; -[SCGalleryUserDefaultsManager setDateForLatestRecentMashupGenerated:] */

void FUN_105667794(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056677ec; end: 10566783b; -[SCGalleryUserDefaultsManager dateForLatestRecentMashupGenerated] */

void FUN_1056677ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10566783c; end: 105667893; -[SCGalleryUserDefaultsManager setDateForLatestSnapFeedHintThumbnailGenerated:] */

void FUN_10566783c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105667894; end: 1056678e3; -[SCGalleryUserDefaultsManager dateForLatestSnapFeedHintThumbnailGenerated] */

void FUN_105667894(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1056678e4; end: 10566793b; -[SCGalleryUserDefaultsManager setSnapFeedSnapLevelPriorities:] */

void FUN_1056678e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10566793c; end: 105667983; -[SCGalleryUserDefaultsManager setSnapFeedShouldEnableSingleSnapExperience:] */

void FUN_10566793c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c241020();
  if ((int)param_3 != (int)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bea24f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__setBoolUserPreference_forKey__1125862e0,param_3,
               &PTR____CFConstantStringClassReference_110df3e78);
    return;
  }
  return;
}



/* Entry: 105667984; end: 1056679db; -[SCGalleryUserDefaultsManager setMultiCollageStoriesFirstSeenTime:] */

void FUN_105667984(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056679dc; end: 105667a2b; -[SCGalleryUserDefaultsManager multiCollageStoriesFirstSeenTime] */

void FUN_1056679dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105667a2c; end: 105667a9b; -[SCGalleryUserDefaultsManager setDateForLatestEntryPointTextLabelDisplayed:] */

void FUN_105667a2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26f320(param_3);
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105667a9c; end: 105667b17; -[SCGalleryUserDefaultsManager dateForLatestEntryPointTextLabelDisplayed] */

void FUN_105667a9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf885a0(uVar2);
  func_0x00010bf655e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105667b18; end: 105667b87; -[SCGalleryUserDefaultsManager setDateForLatestCameraRollClustering:] */

void FUN_105667b18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26f320(param_3);
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105667b88; end: 105667c03; -[SCGalleryUserDefaultsManager dateForLatestCameraRollClustering] */

void FUN_105667b88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf885a0(uVar2);
  func_0x00010bf655e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105667c04; end: 105667c6f; -[SCGalleryUserDefaultsManager setCachedSnapsCount:] */

void FUN_105667c04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110df3ef8);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105667c70; end: 105667cd3; -[SCGalleryUserDefaultsManager cachedSnapsCount] */

undefined8 FUN_105667c70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c067fc0(uVar2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 105667cd4; end: 105667cdf; -[SCGalleryUserDefaultsManager setHasUserDismissedYearEndRecapBadge:] */

void FUN_105667cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea24f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setBoolUserPreference_forKey__1125862e0,param_3,
             &PTR____CFConstantStringClassReference_110df3f78);
  return;
}



/* Entry: 105667ce0; end: 105667d2f; -[SCGalleryUserDefaultsManager hasUserDismissedYearEndRecapBadge] */

undefined8 FUN_105667ce0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be23ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110df3f78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde95c0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105667d30; end: 105667d87; -[SCGalleryUserDefaultsManager setDateForYearEndRecapBadgeExpiration:] */

void FUN_105667d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105667d88; end: 105667dd7; -[SCGalleryUserDefaultsManager dateForYearEndRecapBadgeExpiration] */

void FUN_105667d88(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105667dd8; end: 105667e2f; -[SCGalleryUserDefaultsManager setMostRecentYearEndRecapId:] */

void FUN_105667dd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105667e30; end: 105667e7f; -[SCGalleryUserDefaultsManager mostRecentYearEndRecapId] */

void FUN_105667e30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105667e80; end: 105667ee3; -[SCGalleryUserDefaultsManager setTagsSyncCursor:] */

void FUN_105667e80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105667ee4; end: 105667f33; -[SCGalleryUserDefaultsManager tagsSyncCursor] */

void FUN_105667ee4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105667f34; end: 105667fbb; -[SCGalleryUserDefaultsManager _setBoolUserPreference:forKey:] */

void FUN_105667f34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar2,param_2,puVar1,param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105667fbc; end: 105667fc7; -[SCGalleryUserDefaultsManager .cxx_destruct] */

void FUN_105667fbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


