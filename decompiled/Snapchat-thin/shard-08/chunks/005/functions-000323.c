/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106196b8c; end: 106196bd7; -[SCFeatureTeachingTooltipsImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196b8c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112741408);
  _objc_storeStrong(param_1 + _DAT_112741404,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112741400,0);
  return;
}



/* Entry: 106196bd8; end: 106196beb; -[SCFeatureCameraToSnappableLoggingWithNavigationTrackingImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196bd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274140c,0);
  return;
}



/* Entry: 106196bec; end: 106196c03; -[SCFeatureToSnappableLoggingImpl cameraViewDidStartCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196bec(long param_1)

{
  if (*(long *)(param_1 + _DAT_112741414) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf2ba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112741414),PTR_s_cameraViewDidStartCamera_1125a8838);
    return;
  }
  return;
}



/* Entry: 106196c04; end: 106196c13; -[SCFeatureToSnappableLoggingImpl cameraViewDidSkipStartCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196c04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ba30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112741414),PTR_s_cameraViewDidSkipStartCamera_1125a8830)
  ;
  return;
}



/* Entry: 106196c14; end: 106196c23; -[SCFeatureToSnappableLoggingImpl cameraViewHasValidToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196c14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2bab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112741414),PTR_s_cameraViewHasValidToken_1125a8850);
  return;
}



/* Entry: 106196c24; end: 106196c33; -[SCFeatureToSnappableLoggingImpl cameraViewWillRequestCameraPermission] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196c24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2bc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112741414),
             PTR_s_cameraViewWillRequestCameraPermi_1125a88b8);
  return;
}



/* Entry: 106196c34; end: 106196c47; -[SCFeatureToSnappableLoggingImpl sigDrawerPresented] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196c34(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112741428) = 1;
  return;
}



/* Entry: 106196c48; end: 106196c57; -[SCFeatureToSnappableLoggingImpl sigDrawerDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196c48(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112741428) = 0;
  return;
}



/* Entry: 106196c58; end: 106196caf; -[SCFeatureToSnappableLoggingImpl _viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196c58(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_1;
  func_0x00010be40e60();
  if (((uVar1 & 1) == 0) && ((*(byte *)(param_1 + (long)_DAT_112741428) & 1) == 0)) {
    lVar3 = (long)_DAT_112741414;
    lVar2 = *(long *)(param_1 + lVar3);
    func_0x00010bf2b540();
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf2ba10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + lVar3),PTR_s_cameraViewDidLoad_1125a8828);
      return;
    }
  }
  return;
}



/* Entry: 106196cb0; end: 106196cc3; -[SCFeatureToSnappableLoggingImpl _cameraViewWillDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b9870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112741414),PTR_s_setLaunchedFromPage__11264c040,0);
  return;
}



/* Entry: 106196cc4; end: 106196cd3; -[SCFeatureToSnappableLoggingImpl _cameraViewDidDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196cc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2b9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112741414),PTR_s_cameraViewDidDisappear_1125a8820);
  return;
}



/* Entry: 106196cd4; end: 106196ce3; -[SCFeatureToSnappableLoggingImpl _appDidEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196cd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf04f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112741414),PTR_s_appDidBackground_11259ed78);
  return;
}



/* Entry: 106196ce4; end: 106196d4b;  */

void FUN_106196ce4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcc9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106196d4c; end: 106196d53;  */

void FUN_106196d4c(void)

{
  return;
}



/* Entry: 106196d54; end: 106196dd7;  */

void FUN_106196d54(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee9520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106196dd8; end: 106196ecf; -[SCFeatureToSnappableLoggingImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106196dd8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112741420,0);
  _objc_storeStrong(param_1 + _DAT_11274141c,0);
  _objc_storeStrong(param_1 + _DAT_112741418,0);
  _objc_storeStrong(param_1 + _DAT_112741414,0);
  _objc_storeStrong(param_1 + _DAT_11274142c,0);
  _objc_storeStrong(param_1 + _DAT_112741424,0);
  _objc_storeStrong(param_1 + _DAT_112741430,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112741410,0);
  return;
}



/* Entry: 106196ed0; end: 106196ed3;  */

void FUN_106196ed0(void)

{
  return;
}



/* Entry: 106196ed4; end: 106196eff;  */

void FUN_106196ed4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee9e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106196f00; end: 106196f03;  */

void FUN_106196f00(void)

{
  return;
}



/* Entry: 106196f04; end: 106196f4b;  */

void FUN_106196f04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126bd5f8;
  func_0x00010c29c8e0(PTR_PTR_1126bd5f8,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106196f4c; end: 106196f4f;  */

void FUN_106196f4c(void)

{
  return;
}



/* Entry: 106196f50; end: 106196f5b; -[SCToSnappableMonitorNavigationTypeHandler _didEnterBackground] */

void FUN_106196f50(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0x27;
  return;
}



/* Entry: 106196f5c; end: 106196f67; -[SCToSnappableMonitorNavigationTypeHandler _viewWillDisappear] */

void FUN_106196f5c(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 106196f68; end: 106196f93; -[SCToSnappableMonitorNavigationTypeHandler _willEnterForeground] */

void FUN_106196f68(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 0;
  func_0x00010bdd3820();
                    /* WARNING: Could not recover jumptable at 0x00010c1cba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setNavigationType__1126508b8,
             *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 106196f94; end: 106196fe3; -[SCToSnappableMonitorNavigationTypeHandler .cxx_destruct] */

void FUN_106196f94(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106196fe4; end: 106197297; -[SCFeatureVideoNoSoundLogger initWithMicNotification:cameraHardwareServicesAPIImpl:videoNoSoundLogger:cameraHardwareResource:notificationManager:audioSession:audioCaptureConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106196fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126effe8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741450);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112741450) = uVar2;
    _objc_release(uVar9);
    lVar10 = (long)_DAT_112741454;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_3;
    _objc_release(uVar2);
    lVar10 = (long)_DAT_112741458;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_4;
    _objc_release(uVar2);
    lVar10 = (long)_DAT_11274145c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_7;
    _objc_release(uVar2);
    lVar10 = (long)_DAT_112741460;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_8;
    _objc_release(uVar2);
    lVar10 = (long)_DAT_112741464;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b7008;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741468);
    *(undefined **)((long)puVar1 + (long)_DAT_112741468) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010bf318a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf51e00();
    uVar7 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f8a0(puVar1);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar9);
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106197298; end: 1061972db; -[SCFeatureVideoNoSoundLogger dealloc] */

void FUN_106197298(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  puStack_28 = PTR_PTR_1126effe8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1061972dc; end: 1061973cf; -[SCFeatureVideoNoSoundLogger beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061972dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274146c);
  *(undefined8 *)(param_1 + _DAT_11274146c) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1061973d0; end: 1061974db;  */

void FUN_1061973d0(long param_1,undefined8 param_2)

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
  pcStack_58 = FUN_1061974dc;
  puStack_50 = &UNK_11084ec30;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1061974dc; end: 10619754f;  */

void FUN_1061974dc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00100();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106197550; end: 1061977b7; -[SCFeatureVideoNoSoundLogger startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106197550(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  lVar6 = (long)_DAT_112741470;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0c42e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1061977b8;
    puStack_88 = &UNK_11084e400;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0987a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
  }
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1061977b8; end: 10619785b;  */

void FUN_1061977b8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e3b00(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10619785c; end: 1061978cb;  */

void FUN_10619785c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe460();
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061978cc; end: 10619796f;  */

void FUN_1061978cc(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e3820(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106197970; end: 1061979b7;  */

void FUN_106197970(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc520();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061979b8; end: 1061979eb; -[SCFeatureVideoNoSoundLogger stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061979b8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112741470;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061979ec; end: 106197aab; -[SCFeatureVideoNoSoundLogger _didScheduleRecordRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061979ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112741450;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c1380c0(uVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  uVar1 = param_3;
  func_0x00010c092940(param_3);
  func_0x00010c1bd480(uVar2,param_2,uVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  uVar1 = param_3;
  func_0x00010bef0a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162840(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  uVar1 = param_3;
  func_0x00010bf311e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c179280(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106197aac; end: 106197b63; -[SCFeatureVideoNoSoundLogger _willFinishRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106197aac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + _DAT_112741458);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010bfb2060(&uStack_48,lVar1);
  }
  lVar3 = (long)_DAT_112741450;
  uStack_58 = uStack_40;
  uStack_60 = uStack_48;
  uStack_50 = uStack_38;
  func_0x00010c19d880(*(undefined8 *)(param_1 + lVar3),param_2,&uStack_60);
  lVar2 = lVar1;
  func_0x00010bf0f980(lVar1);
  func_0x00010c16c180(*(undefined8 *)(param_1 + lVar3),param_2,lVar2);
  lVar2 = lVar1;
  func_0x00010bf0fa80(lVar1);
  func_0x00010c16c2a0(*(undefined8 *)(param_1 + lVar3),param_2,lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 106197b64; end: 106197d3b; -[SCFeatureVideoNoSoundLogger _didGetError:forType:session:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106197b64(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  undefined4 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 < 3) {
    if (param_4 == 0) {
      func_0x00010c16c140(*(undefined8 *)(param_1 + (long)_DAT_112741450));
      uVar2 = param_1;
      func_0x00010be33bc0();
      if (((int)uVar2 != 0) && (uVar2 = param_1, func_0x00010be42940(), (uVar2 & 1) == 0)) {
        uVar2 = param_1;
        func_0x00010be3e3e0();
        if ((int)uVar2 == 0) {
          puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_80 = 0xc2000000;
          uStack_78 = 0x106197d54;
          puStack_70 = &UNK_110842e18;
          ppuVar3 = &puStack_88;
          uStack_68 = param_1;
        }
        else {
          uVar1 = param_3;
          func_0x00010bf3ec40();
          puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_58 = 0xc2000000;
          pcStack_50 = FUN_106197d3c;
          puStack_48 = &UNK_110868698;
          uStack_38 = (undefined4)uVar1;
          ppuVar3 = &puStack_60;
          uStack_40 = param_1;
        }
        func_0x000100162d98("APPSTORE",ppuVar3);
      }
    }
    else if (param_4 == 1) {
      func_0x00010c16aaa0(*(undefined8 *)(param_1 + (long)_DAT_112741450));
    }
    else if (param_4 == 2) {
      func_0x00010c16c3a0(*(undefined8 *)(param_1 + (long)_DAT_112741450));
    }
  }
  else if (param_4 == 3) {
    func_0x00010c1ed8a0(*(undefined8 *)(param_1 + (long)_DAT_112741450));
  }
  else {
    if (param_4 == 4) {
      uVar1 = *(undefined8 *)(param_1 + (long)_DAT_112741450);
    }
    else {
      if (param_4 != 5) goto LAB_106197cd4;
      uVar1 = *(undefined8 *)(param_1 + (long)_DAT_112741450);
    }
    lVar4 = (long)_DAT_112741450;
    func_0x00010c173d40(uVar1);
    func_0x00010c1ed8c0(*(undefined8 *)(param_1 + lVar4));
  }
LAB_106197cd4:
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106197d3c; end: 106197d5b;  */

void FUN_106197d3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb9e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showMicErrorNotificationForQueu_11258c130,
             *(undefined4 *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110e3c638);
  return;
}



/* Entry: 106197d5c; end: 106197d6b; -[SCFeatureVideoNoSoundLogger _didCallLenseResume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106197d5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112741450),
             PTR_s_managedLensesProcessorDidCallRes_11260b9d8);
  return;
}



/* Entry: 106197d6c; end: 106197dbf; -[SCFeatureVideoNoSoundLogger _hasAudioPermission] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106197d6c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112741460);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1238e0();
  _objc_release(lVar1);
  return lVar2 == 0x67726e74;
}



/* Entry: 106197dc0; end: 106197e07; -[SCFeatureVideoNoSoundLogger _isAudioLossNotificationEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106197dc0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112741464);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0f240();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106197e08; end: 106197f2f; -[SCFeatureVideoNoSoundLogger _isPhoneCallActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106197e08(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  ppuVar7 = &puStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = PTR__OBJC_CLASS___CXCallObserver_1126b6e20;
  _objc_alloc_init();
  puVar5 = puVar4;
  func_0x00010bf289e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  puStack_110 = (undefined *)0x0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  _objc_retain();
  ppuVar8 = (undefined **)0x10;
  puVar6 = puVar5;
  func_0x00010bf52a60();
  puVar11 = (undefined *)0x0;
  if (puVar6 != (undefined *)0x0) {
    lVar9 = *plStack_100;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(puVar5);
        }
        iVar3 = (int)*(undefined8 *)(lStack_108 + (long)puVar11 * 8);
        func_0x00010bfd6ae0();
        if (iVar3 == 0) {
          puVar11 = (undefined *)0x1;
          goto LAB_106197ee0;
        }
        puVar11 = puVar11 + 1;
      } while (puVar6 != puVar11);
      ppuVar8 = (undefined **)0x10;
      puVar6 = puVar5;
      ppuVar7 = &puStack_110;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
    puVar11 = (undefined *)0x0;
  }
LAB_106197ee0:
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar11;
  }
  ___stack_chk_fail();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar10 = *(undefined8 *)(puVar4 + _DAT_112741468);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar1 = ppuVar7;
  }
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar7);
  func_0x00010c0df760(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar11;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110db8b78;
  if (ppuVar8 != (undefined **)0x0) {
    ppuVar2 = ppuVar8;
  }
  func_0x0001085aab68(uVar10,ppuVar1,puVar4,ppuVar2,1);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return puVar11;
}



/* Entry: 106197f30; end: 106197fff; -[SCFeatureVideoNoSoundLogger _logAudioLossNotificationEnqueuedWithCopyType:queueErrorCode:reason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106197f30(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined **param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_1 + _DAT_112741468);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0df760(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110db8b78;
  if (param_5 != (undefined **)0x0) {
    ppuVar2 = param_5;
  }
  func_0x0001085aab68(uVar5,ppuVar1,puVar4,ppuVar2,1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106198000; end: 106198143; -[SCFeatureVideoNoSoundLogger _showMicErrorNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106198000(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1370;
  func_0x00010c25d500(PTR_PTR_1126b1370,param_2,0x54);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110dad058);
  _objc_release(puVar2);
  func_0x00010703cf80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110dad0b8);
  _objc_release(puVar2);
  func_0x00010703cf98();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110dad858);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b1370;
  _objc_alloc(PTR_PTR_1126b1370);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c030320(puVar2,param_2,puVar3,2);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11274145c);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa0a0();
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106198144; end: 106198373; -[SCFeatureVideoNoSoundLogger _showMicErrorNotificationForQueueErrorCode:reason:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106198144(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  undefined **ppuVar8;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  iVar7 = (int)param_3;
  if (iVar7 < 0x73697269) {
    if (iVar7 == 0x21707269) {
LAB_1061981ec:
      func_0x00010703cfb0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = &PTR____CFConstantStringClassReference_110e43918;
      uVar2 = uVar1;
      func_0x00010619f724();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106198238;
    }
    if (iVar7 == 0x6e6f6877) {
      func_0x00010703cf80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = &PTR____CFConstantStringClassReference_110e43938;
      uVar2 = uVar1;
      func_0x00010703cf98();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106198238;
    }
  }
  else if ((iVar7 == 0x77686174) || (iVar7 == 0x73697269)) goto LAB_1061981ec;
  func_0x00010703cfc8();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110e43958;
  uVar2 = uVar1;
  func_0x00010703cfe0();
  _objc_retainAutoreleasedReturnValue();
LAB_106198238:
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1370;
  func_0x00010c25d500(PTR_PTR_1126b1370,param_2,0x54);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110dad058);
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dad0b8);
  func_0x00010c1d0640(puVar3,param_2,uVar2,&PTR____CFConstantStringClassReference_110dad858);
  puVar4 = PTR_PTR_1126b1370;
  _objc_alloc(PTR_PTR_1126b1370);
  puVar5 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c030320(puVar4,param_2,puVar5,2);
  _objc_release(puVar5);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11274145c);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa0a0();
  _objc_release(uVar6);
  func_0x00010be50660(param_1,param_2,ppuVar8,param_3,param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106198374; end: 106198377; -[SCFeatureVideoNoSoundLogger didRenderFirstFrameForVideoURL:] */

void FUN_106198374(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdde610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkVideoFileAndNotifyIfNeeded_112555320);
  return;
}



/* Entry: 106198378; end: 10619837b; -[SCFeatureVideoNoSoundLogger didExposeSnapEditorPreviewForVideoURL:] */

void FUN_106198378(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdde610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__checkVideoFileAndNotifyIfNeeded_112555320);
  return;
}



/* Entry: 10619837c; end: 10619850b; -[SCFeatureVideoNoSoundLogger _checkVideoFileAndNotifyIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619837c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112741458);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06c8a0();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    lVar6 = (long)_DAT_112741450;
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    uVar3 = *(undefined8 *)(param_1 + (long)_DAT_112741454);
    func_0x00010bfa1820(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfdc100();
    func_0x00010bf38700(uVar2);
    _objc_release(uVar3);
    uVar4 = param_1;
    func_0x00010be3e3e0();
    if ((int)uVar4 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
      func_0x00010bf0f980();
      if (iVar1 != 0) {
        lVar5 = *(long *)(param_1 + lVar6);
        func_0x00010bf0fa80();
        if (lVar5 == 0) {
          lVar5 = *(long *)(param_1 + lVar6);
          func_0x00010bf0f960();
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 == 0) {
            lVar6 = *(long *)(param_1 + lVar6);
            func_0x00010bf0fd60();
            _objc_retainAutoreleasedReturnValue();
            if ((lVar6 == 0) && (uVar4 = param_1, func_0x00010be33bc0(), (uVar4 & 1) != 0)) {
              func_0x00010be42940();
              if ((param_1 & 1) != 0) goto LAB_1061984ec;
              _objc_retain(param_3);
              uVar3 = 0;
              _dispatch_get_global_queue(0,0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010007380c();
              _objc_release(uVar3);
            }
          }
          _objc_release();
        }
      }
    }
  }
LAB_1061984ec:
  _objc_release(param_3);
  return;
}



/* Entry: 10619850c; end: 1061985c7;  */

void FUN_10619850c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_3,*(undefined8 *)(param_2 + 0x20)
                     );
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_38,puVar1);
  }
  _CMTimeGetSeconds(&uStack_38);
  if (0.5 <= param_1) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1061985c8;
    puStack_48 = &UNK_110842e18;
    uStack_40 = *(undefined8 *)(param_2 + 0x28);
    func_0x000100162d98("APPSTORE",&puStack_60);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 1061985c8; end: 1061985df;  */

void FUN_1061985c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb9e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__showMicErrorNotificationForQueu_11258c130,
             0x6e6f6877,&PTR____CFConstantStringClassReference_110e438f8);
  return;
}



/* Entry: 1061985e0; end: 10619868f; -[SCFeatureVideoNoSoundLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061985e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112741468,0);
  _objc_storeStrong(param_1 + _DAT_112741464,0);
  _objc_storeStrong(param_1 + _DAT_112741460,0);
  _objc_storeStrong(param_1 + _DAT_11274145c,0);
  _objc_storeStrong(param_1 + _DAT_112741470,0);
  _objc_storeStrong(param_1 + _DAT_112741458,0);
  _objc_storeStrong(param_1 + _DAT_112741454,0);
  _objc_storeStrong(param_1 + _DAT_11274146c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112741450,0);
  return;
}



/* Entry: 106198690; end: 1061986e3; -[SCFeatureVolumeButtonCaptureImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106198690(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12cf80(*(undefined8 *)(param_1 + _DAT_112741480),param_2,param_1);
  puStack_28 = PTR_PTR_1126efff0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1061986e4; end: 10619874f; -[SCFeatureVolumeButtonCaptureImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061986e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c22e100();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bfd3220(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24ee80();
    _objc_release(lVar1);
  }
  if ((*(byte *)(param_1 + _DAT_112741474) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112741474) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be65d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__observeCaptureState_1125770e8);
  return;
}



/* Entry: 106198750; end: 1061988f7; -[SCFeatureVolumeButtonCaptureImpl _observeCaptureState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106198750(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  lVar8 = (long)_DAT_112741498;
  if (*(long *)(param_1 + lVar8) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar1;
    _objc_release(uVar7);
    param_1 = param_1 + _DAT_112741488;
    _objc_loadWeakRetained(param_1);
    lVar8 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar8;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0987a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    lVar6 = lVar5;
    func_0x00010c25ff60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar8);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_70);
  }
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1061988f8; end: 10619899b;  */

void FUN_1061988f8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e3960(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10619899c; end: 1061989fb;  */

void FUN_10619899c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0982a0(param_2);
  _objc_release(param_2);
  func_0x00010c0e4e00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061989fc; end: 106198b0b; -[SCFeatureVolumeButtonCaptureImpl onLensesActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061989fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + _DAT_112741488;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_3;
  func_0x00010c0f7fc0(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106198b0c; end: 106198bb3;  */

void FUN_106198b0c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      func_0x00010bec0340();
    }
    else {
      lVar2 = lVar1;
      func_0x00010bec3140(lVar1);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f7fc0();
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106198bb4; end: 106198bbb;  */

void FUN_106198bb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2560d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_stopHandlingVolumeButtonEvents_112673258);
  return;
}



/* Entry: 106198bbc; end: 106198bfb; -[SCFeatureVolumeButtonCaptureImpl _stopListeningMuteSwitchUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106198bbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11274149c;
  func_0x00010c255780(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c12cf80(*(undefined8 *)(param_1 + lVar2),param_2,param_1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106198bfc; end: 106198c4b; -[SCFeatureVolumeButtonCaptureImpl _startListeningMuteSwitchUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106198bfc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b6df8;
  _objc_opt_new();
  lVar3 = (long)_DAT_11274149c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010bef9980(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar3),PTR_s_start_112671080);
  return;
}



/* Entry: 106198c4c; end: 106198d5f; -[SCFeatureVolumeButtonCaptureImpl startHandlingVolumeButtonEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106198c4c(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + (long)_DAT_112741480);
  func_0x00010c154dc0();
  if ((iVar1 == 0) || (uVar2 = param_1, func_0x00010bdca1c0(), (uVar2 & 1) != 0)) {
    if ((*(char *)(param_1 + (long)_DAT_1127414a0) != '\x01') ||
       (*(char *)(param_1 + (long)_DAT_112741484) == '\x01')) {
      uVar2 = param_1;
      func_0x00010bfd3220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar2 != 0) {
        func_0x00010bfd3220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c24ee80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(param_1);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010c200070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s_setShouldAutomaticallyStartHandl_11265da40,1);
      return;
    }
  }
  else {
    func_0x00010c2560c0(param_1);
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + (long)_DAT_112741494));
  }
  return;
}



/* Entry: 106198d60; end: 106198d77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106198d60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c162490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112741480),
             PTR_s_setActive__112636340,1);
  return;
}



/* Entry: 106198d78; end: 106198d87; -[SCFeatureVolumeButtonCaptureImpl reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106198d78(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112741478) = 0;
  return;
}



/* Entry: 106198d88; end: 106198e0f; -[SCFeatureVolumeButtonCaptureImpl volumeButtonHandlerDidBeginPressingVolumeButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106198d88(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a0ea0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    *(undefined1 *)(param_1 + _DAT_112741478) = 1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a0e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106198e10; end: 106198e87; -[SCFeatureVolumeButtonCaptureImpl volumeButtonHandlerDidEndPressingVolumeButton:] */

void FUN_106198e10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a0ec0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a0e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106198e88; end: 106198e9b; -[SCFeatureVolumeButtonCaptureImpl lensAudioDidStartPlaying] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106198e88(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127414a0) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c2560d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopHandlingVolumeButtonEvents_112673258);
  return;
}



/* Entry: 106198e9c; end: 106198eab; -[SCFeatureVolumeButtonCaptureImpl lensAudioDidStopPlaying] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106198e9c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_1127414a0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c24ee90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startHandlingVolumeButtonEvents_1126715c8);
  return;
}



/* Entry: 106198eac; end: 106198f17; -[SCFeatureVolumeButtonCaptureImpl audioSessionSilenceSecondaryAudioHintTypeDidChangeToStart:] */

void FUN_106198eac(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  ulong uStack_28;
  
  uVar1 = param_1;
  func_0x00010bdca1c0();
  if ((uVar1 & 1) == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106198f18;
    puStack_30 = &UNK_110842e18;
    uStack_28 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_48);
  }
  return;
}



/* Entry: 106198f18; end: 106198f7b;  */

void FUN_106198f18(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2560d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_stopHandlingVolumeButtonEvents_112673258);
  return;
}



/* Entry: 106198f7c; end: 10619907f; -[SCFeatureVolumeButtonCaptureImpl audioSessionSilenceSecondaryAudioHintTypeDidChangeToEnd:] */

void FUN_106198f7c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a0ee0();
  _objc_release(uVar1);
  if (((int)uVar2 != 0) && (uVar1 = param_1, func_0x00010bdca1c0(), (uVar1 & 1) == 0)) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x10619901c;
    puStack_40 = &UNK_110842e18;
    uStack_38 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_58);
  }
  return;
}



/* Entry: 106199080; end: 10619916b; -[SCFeatureVolumeButtonCaptureImpl secretFeatureChecker:didCheckSecretFeatureMode:] */

void FUN_106199080(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_4 != 0) {
    puVar1 = auStack_38;
    _objc_initWeak(puVar1,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lStack_40 = param_4;
    _objc_copyWeak(auStack_48,auStack_38);
    func_0x00010c0f7fc0(puVar1);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10619916c; end: 1061991ab;  */

void FUN_10619916c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (lVar1 == 1) {
    func_0x00010be6a280();
  }
  else {
    func_0x00010be6a260();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061991ac; end: 10619920b; -[SCFeatureVolumeButtonCaptureImpl _onMuteSwitchEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061991ac(long param_1)

{
  if (lRam00000001136c33b0 != -1) {
    func_0x00010002a2fc(0x1136c33b0,&PTR___NSConcreteGlobalBlock_110912798);
  }
  if ((bRam00000001136c33a8 & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112741484) = 1;
  }
  return;
}



/* Entry: 10619920c; end: 106199287; -[SCFeatureVolumeButtonCaptureImpl _onMuteSwitchDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10619920c(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + _DAT_112741484) = 0;
  if (*(char *)(param_1 + _DAT_1127414a0) == '\x01') {
    lVar1 = param_1;
    func_0x00010bfd3220();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c074ac0();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2560d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopHandlingVolumeButtonEvents_112673258)
      ;
      return;
    }
  }
  return;
}



/* Entry: 106199288; end: 1061992cf; -[SCFeatureVolumeButtonCaptureImpl _allowCaptureDuringOtherAppPlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106199288(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112741490);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf016a0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1061992d0; end: 1061992df; -[SCFeatureVolumeButtonCaptureImpl pressingVolumeButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061992d0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112741478);
}



/* Entry: 1061992e0; end: 1061992ef; -[SCFeatureVolumeButtonCaptureImpl audioSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061992e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741480);
}



/* Entry: 1061992f0; end: 1061992ff; -[SCFeatureVolumeButtonCaptureImpl shouldAutomaticallyStartHandlingEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061992f0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274147c);
}



/* Entry: 106199300; end: 10619930f; -[SCFeatureVolumeButtonCaptureImpl setShouldAutomaticallyStartHandlingEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106199300(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274147c) = param_3;
  return;
}



/* Entry: 106199310; end: 106199403; -[SCFeatureVolumeButtonCaptureImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106199310(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112741480,0);
  _objc_destroyWeak(param_1 + _DAT_1127414a4);
  _objc_storeStrong(param_1 + _DAT_112741494,0);
  _objc_storeStrong(param_1 + _DAT_112741498,0);
  _objc_storeStrong(param_1 + _DAT_11274149c,0);
  _objc_storeStrong(param_1 + _DAT_112741490,0);
  _objc_destroyWeak(param_1 + _DAT_11274148c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112741488);
  return;
}



/* Entry: 106199404; end: 10619940f; -[SCFeatureSettingsService hasZoomFactorsPillTapMoreTooltipSeen] */

void FUN_106199404(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e439d8);
  return;
}



/* Entry: 106199410; end: 10619941b; -[SCFeatureSettingsService zoomFactorsPillTapMoreTooltipSeenServerParam] */

undefined ** FUN_106199410(void)

{
  return &PTR____CFConstantStringClassReference_110e439d8;
}



/* Entry: 10619941c; end: 10619942b; -[SCFeatureSettingsService setZoomFactorsPillTapMoreTooltipSeen:] */

void FUN_10619941c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e439d8,param_3);
  return;
}



/* Entry: 10619942c; end: 106199433; -[SCFeatureSettingsService ZOOM_FACTORS_PILL_TAP_MORE_TOOLTIP_SEEN_client_value:] */

undefined * FUN_10619942c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106199434; end: 10619943b; -[SCFeatureSettingsService ZOOM_FACTORS_PILL_TAP_MORE_TOOLTIP_SEEN_server_value:] */

void FUN_106199434(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10619943c; end: 10619944b; -[SCFeatureSettingsService zoomFactorsPillTapMoreTooltipSeen] */

void FUN_10619943c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e439d8,0);
  return;
}



/* Entry: 10619944c; end: 10619957b;  */

void FUN_10619944c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bded060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10619957c; end: 10619957f; -[SCFeatureZoomFactorsImpl activate] */

void FUN_10619957c(void)

{
  return;
}



/* Entry: 106199580; end: 1061995cf; -[SCFeatureZoomFactorsImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106199580(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127414fc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28fc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1061995d0; end: 10619960b; -[SCFeatureZoomFactorsImpl resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061995d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127414fc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10619960c; end: 10619964f; -[SCFeatureZoomFactorsImpl dealloc] */

void FUN_10619960c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bed1d60();
  puStack_28 = PTR_PTR_1126efff8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106199650; end: 106199697; -[SCFeatureZoomFactorsImpl pinchDidZoomOutToUltraWideThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106199650(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + _DAT_1127414d0) != 10) &&
     (lVar1 = param_1, func_0x00010bf2c900(), (int)lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be091b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enableUltraWideCamera_11255fe08);
    return;
  }
  return;
}



/* Entry: 106199698; end: 1061996df; -[SCFeatureZoomFactorsImpl pinchDidZoomInToTelephotoTreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106199698(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + _DAT_1127414d0) != 10) &&
     (lVar1 = param_1, func_0x00010bf2c8c0(), (int)lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be090f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enableTelephotoCamera_11255fdd8);
    return;
  }
  return;
}



/* Entry: 1061996e0; end: 106199957; -[SCFeatureZoomFactorsImpl didPinchToZoomFactor:pinchEffectiveScale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1061996e0(float param_1,float param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [128];
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = param_3;
  if (*(long *)(param_3 + (long)_DAT_1127414d0) != 10) {
    func_0x00010be73da0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c074c20();
    _objc_release();
    if ((uVar3 & 1) == 0) {
      lVar7 = (long)_DAT_112741500;
      uVar4 = *(ulong *)(param_3 + lVar7);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bf529e0();
      _objc_release();
      if (uVar3 != 0) {
        dVar10 = 0.0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        lStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        plStack_150 = (long *)0x0;
        uVar4 = *(ulong *)(param_3 + lVar7);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        func_0x00010bf52a60();
        if (uVar3 != 0) {
          lVar7 = *plStack_150;
          dVar11 = (double)param_2;
          do {
            uVar8 = 0;
            do {
              if (*plStack_150 != lVar7) {
                _objc_enumerationMutation(uVar4);
              }
              func_0x00010bfb2c80(*(undefined8 *)(lStack_158 + uVar8 * 8));
              fVar9 = SUB84(dVar10,0);
              func_0x00010bed0d80(param_3);
              fVar9 = (float)(dVar10 * (double)fVar9);
              if (fVar9 <= param_1) {
                bVar1 = false;
              }
              else if (fVar9 <= param_2) {
                bVar1 = true;
              }
              else {
                dVar10 = ABS(dVar11 + (double)fVar9) * 2.220446049250313e-16;
                if (dVar10 <= 2.2250738585072014e-308) {
                  dVar10 = 2.2250738585072014e-308;
                }
                bVar1 = ABS(dVar11 - (double)fVar9) < dVar10;
              }
              fVar9 = fVar9 + 0.1;
              dVar10 = (double)(ulong)(uint)fVar9;
              if (param_1 <= fVar9) {
                bVar2 = false;
LAB_1061998b0:
                if ((bool)(bVar1 | bVar2)) goto LAB_1061998bc;
              }
              else {
                if (fVar9 < param_2) {
                  dVar10 = ABS(dVar11 + (double)fVar9) * 2.220446049250313e-16;
                  if (dVar10 <= 2.2250738585072014e-308) {
                    dVar10 = 2.2250738585072014e-308;
                  }
                  bVar2 = ABS((double)fVar9 - dVar11) < dVar10;
                  goto LAB_1061998b0;
                }
LAB_1061998bc:
                puVar5 = PTR_PTR_1126affa8;
                func_0x00010c22bc20(PTR_PTR_1126affa8);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0f8760();
                _objc_release(puVar5);
              }
              uVar8 = uVar8 + 1;
            } while (uVar3 != uVar8);
            uVar3 = uVar4;
            func_0x00010bf52a60(uVar4,param_4,&uStack_160,auStack_118,0x10);
          } while (uVar3 != 0);
        }
        _objc_release();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return uVar4;
  }
  ___stack_chk_fail();
  if (((*(byte *)(uVar4 + (long)_DAT_112741514) & 1) == 0) &&
     (*(char *)(uVar4 + (long)_DAT_1127414dc) == '\x01')) {
    uVar6 = *(byte *)(uVar4 + (long)_DAT_112741518) ^ 1;
  }
  else {
    uVar6 = 0;
  }
  return (ulong)(uVar6 & 1);
}



/* Entry: 106199958; end: 10619999b; -[SCFeatureZoomFactorsImpl canEnableTelephotoCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_106199958(long param_1)

{
  byte bVar1;
  
  if (((*(byte *)(param_1 + _DAT_112741514) & 1) == 0) &&
     (*(char *)(param_1 + _DAT_1127414dc) == '\x01')) {
    bVar1 = *(byte *)(param_1 + _DAT_112741518) ^ 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 10619999c; end: 1061999df; -[SCFeatureZoomFactorsImpl canEnableUltraWideCamera] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10619999c(long param_1)

{
  byte bVar1;
  
  if (((*(byte *)(param_1 + _DAT_112741514) & 1) == 0) &&
     (*(char *)(param_1 + _DAT_1127414d8) == '\x01')) {
    bVar1 = *(byte *)(param_1 + _DAT_11274151c) ^ 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 1061999e0; end: 106199a67; -[SCFeatureZoomFactorsImpl telephotoSwitchZoomThresholdAdaptedForUltraWide:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061999e0(double param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = *(undefined **)(param_2 + _DAT_1127414e0);
  if (puVar2 != (undefined *)0x0) {
    if ((param_4 & 1) == 0) {
      _objc_retain(puVar2);
    }
    else {
      func_0x00010bfb2c80(puVar2);
      fVar3 = SUB84(param_1,0);
      func_0x00010bed0d80(param_2);
      func_0x00010c0df740((float)(param_1 * (double)fVar3),puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


