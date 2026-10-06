/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10860d5b8; end: 10860d5e3; -[RTCAudioSession_v141 .cxx_destruct] */

void FUN_10860d5b8(long param_1)

{
  func_0x00010860d754(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10860d5e4; end: 10860d5ef; -[RTCAudioSession_v141 .cxx_construct] */

void FUN_10860d5e4(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 10860d5f0; end: 10860d603;  */

void FUN_10860d5f0(undefined8 param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if ((ulong)puVar1 >> 0x3d != 0) {
    func_0x000104bd35f4();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        _objc_moveWeak(param_3,puVar2);
        puVar2 = puVar2 + 8;
        param_3 = param_3 + 8;
      } while (puVar2 != param_2);
      do {
        _objc_destroyWeak(puVar1);
        puVar1 = puVar1 + 8;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 << 3);
  return;
}



/* Entry: 10860d604; end: 10860d637;  */

void FUN_10860d604(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  
  if (param_1 >> 0x3d != 0) {
    func_0x000104bd35f4();
    uVar1 = param_1;
    if (param_1 != param_2) {
      do {
        _objc_moveWeak(param_3,uVar1);
        uVar1 = uVar1 + 8;
        param_3 = param_3 + 8;
      } while (uVar1 != param_2);
      do {
        _objc_destroyWeak(param_1);
        param_1 = param_1 + 8;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm(param_1 << 3);
  return;
}



/* Entry: 10860d638; end: 10860d69f;  */

void FUN_10860d638(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_1 != param_2) {
    do {
      _objc_moveWeak(param_3,lVar1);
      lVar1 = lVar1 + 8;
      param_3 = param_3 + 8;
    } while (lVar1 != param_2);
    do {
      _objc_destroyWeak(param_1);
      param_1 = param_1 + 8;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10860d6a0; end: 10860d6eb;  */

long * FUN_10860d6a0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar1 != lVar2) {
    param_1[2] = lVar2 + -8;
    _objc_destroyWeak();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10860d6ec; end: 10860d7bb;  */

long FUN_10860d6ec(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    lVar1 = param_1;
    _objc_loadWeakRetained(param_1);
    _objc_storeWeak(param_3,lVar1);
    _objc_release(lVar1);
    param_3 = param_3 + 8;
  }
  return param_3;
}



/* Entry: 10860d7bc; end: 10860db37; -[SCTCameraProviderImpl initWithCameraHardwareServicesAPI:captureDeviceManager:grapheneLogger:cameraHardwareResource:renderTarget:cameraRequestManager:] */

undefined8 *
FUN_10860d7bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  puStack_68 = PTR_PTR_1126fd1c8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1771e0(0,puVar1);
    func_0x00010c176600(0,puVar1);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar9 = puVar1[10];
    puVar1[10] = puVar2;
    _objc_release(uVar9);
    _objc_initWeak(auStack_78,puVar1);
    uVar9 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010c28d760();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0e0ea0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar9);
    uVar9 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010bf318a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_6;
    func_0x00010c269d40(param_6);
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
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_retain(param_3);
    uVar9 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar9);
    _objc_retain(param_4);
    uVar9 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar9);
    _objc_retain(param_6);
    uVar9 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar9);
    _objc_retain(param_7);
    uVar9 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar9);
    _objc_retain(param_5);
    uVar9 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar9);
    puVar1[8] = 0xffffffffffffffff;
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10860db38; end: 10860dc27;  */

void FUN_10860db38(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10860dc28;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0bd7a0(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 10860dc28; end: 10860dc87;  */

void FUN_10860dc28(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1afc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10860dc88; end: 10860dcf7; -[SCTCameraProviderImpl dealloc] */

void FUN_10860dc88(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  func_0x00010c256420(param_1);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126fd1c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10860dcf8; end: 10860dd33; -[SCTCameraProviderImpl isMultitaskingCameraAccessEnabled] */

undefined8 FUN_10860dcf8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf312a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c078200();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10860dd34; end: 10860ddfb; -[SCTCameraProviderImpl setDevicePositionAsynchronouslyToFront:completion:] */

void FUN_10860dd34(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126afed0;
  func_0x00010c0db140(PTR_PTR_1126afed0);
  puVar4 = &UNK_10f4aa391;
  uVar5 = 0x97;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db92b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18cd00(uVar3,param_2,param_3 ^ 1,puVar1,param_4,puVar2,param_7,param_8,puVar4,uVar5);
  _objc_release(param_4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10860ddfc; end: 10860dfd7; -[SCTCameraProviderImpl startRunningAsynchronouslyWithMultitaskingCamera:cameraDeviceSettingsResolver:isDevicePositionFront:setVideoOrientation:completionHandler:] */

void FUN_10860ddfc(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined1 param_5
                  ,int param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10860dfd8;
  puStack_78 = &UNK_1108511c8;
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_5;
  _objc_retain(param_7);
  ppuVar1 = &puStack_90;
  uStack_70 = param_7;
  _objc_retainBlock(ppuVar1);
  if (param_6 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221b40();
    _objc_release(uVar2);
  }
  func_0x00010bfb5340(PTR_PTR_1126b5a50);
  if (param_3 != 0) {
    func_0x00010bf13c20(PTR_PTR_1126b5a50);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c250580(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10860dfd8; end: 10860e0a7;  */

void FUN_10860dfd8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c299c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa260();
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar4 = lVar1;
    func_0x00010bf312a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf70d80();
    *(long *)(lVar1 + 0x40) = lVar5;
    _objc_release(lVar4);
    func_0x00010c18cce0(lVar1,param_2,*(undefined1 *)(param_1 + 0x30),0);
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c1771e0(lVar1);
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10860e0a8; end: 10860e18f; -[SCTCameraProviderImpl reportFirstFrameMetrics] */

void FUN_10860e0a8(double param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010bf2b080(param_2);
  dVar2 = param_1;
  func_0x00010bf297e0(param_2);
  if (param_1 != 0.0) {
    if (dVar2 == 0.0) {
      uVar1 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0b2fe0();
    _objc_release(uVar1);
  }
  func_0x00010c1771e0(0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c176610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_2,PTR_s_setCameraFirstFrameTime__11263b3a0);
  return;
}



/* Entry: 10860e190; end: 10860e28b; -[SCTCameraProviderImpl stopRunningAsynchronously:after:setVideoOrientation:withCompletionHandler:] */

void FUN_10860e190(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126aff08;
  func_0x00010c073f00(PTR_PTR_1126aff08,param_3,*(undefined8 *)(param_2 + 0x40));
  func_0x00010c18cce0(param_2,param_3,puVar1,0);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c132e80(param_2);
  if (param_5 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221b40();
    _objc_release(uVar3);
  }
  func_0x00010c069d20(param_1,param_4,param_3,param_6);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10860e28c; end: 10860e337; -[SCTCameraProviderImpl activateLensesWithUseVideoCallSource:completion:] */

void FUN_10860e28c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &UNK_10f4aa481;
  uVar4 = 0xf7;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db92b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd620(uVar1,param_2,1,param_3,param_4,puVar2,param_7,param_8,puVar3,uVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10860e338; end: 10860e3e3; -[SCTCameraProviderImpl deactivateLensesWithUseVideoCallSource:completion:] */

void FUN_10860e338(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &UNK_10f4aa4cb;
  uVar4 = 0x103;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db92b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd620(uVar1,param_2,0,param_3,param_4,puVar2,param_7,param_8,puVar3,uVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10860e3e4; end: 10860e42b; -[SCTCameraProviderImpl getCameraPreview] */

void FUN_10860e3e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29f120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10860e42c; end: 10860e553; -[SCTCameraProviderImpl setAutofocusAndExposurePointOfInterest:viewSize:] */

void FUN_10860e42c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_5);
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c294d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf51680(param_1,param_2,param_3,param_4,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10860e554; end: 10860e61f;  */

void FUN_10860e554(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb35a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16d300(param_1,param_2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf9d820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199080(param_1,param_2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10860e620; end: 10860e823; -[SCTCameraProviderImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

void FUN_10860e620(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  if (*(long *)(param_1 + 0x48) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar1;
    _objc_release(uVar4);
    uVar4 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c2528c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10860e824;
    puStack_88 = &UNK_11090d240;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_78);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar4);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
  }
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10860e824; end: 10860e8c7;  */

void FUN_10860e824(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e39e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10860e8c8; end: 10860e943;  */

void FUN_10860e8c8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfcb00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10860e944; end: 10860e96f; -[SCTCameraProviderImpl stopObservingCapturerStateUpdate] */

void FUN_10860e944(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x48));
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10860e970; end: 10860ea9b; -[SCTCameraProviderImpl _didChangeState:] */

void FUN_10860e970(double param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010bf312a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf70d80();
  uVar3 = param_4;
  func_0x00010bf70d80();
  _objc_release(uVar1);
  if ((uVar2 != uVar3) && (func_0x00010bf297e0(param_2), param_1 != 0.0)) {
    func_0x00010c132e80(param_2);
    uVar1 = param_2;
    func_0x00010c06dd00();
    if ((int)uVar1 != 0) {
      func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x00010c1771e0(param_2);
    }
  }
  uVar1 = param_2;
  func_0x00010bf312a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c075c20();
  uVar3 = param_4;
  func_0x00010c075c20();
  _objc_release(uVar1);
  if ((int)uVar2 != (int)uVar3) {
    uVar1 = param_4;
    func_0x00010c075c20();
    uVar2 = param_2;
    func_0x00010bf6b020(param_2);
    _objc_retainAutoreleasedReturnValue();
    if ((uVar1 & 1) == 0) {
      func_0x00010bf2a4a0();
    }
    else {
      func_0x00010bf2a480();
    }
    _objc_release(uVar2);
  }
  func_0x00010c1792e0(param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10860ea9c; end: 10860eb7b; -[SCTCameraProviderImpl startObservingManagedVideoDataSourceOutputEvent:] */

void FUN_10860ea9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x10) == 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    uVar1 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10860eb7c; end: 10860ec27;  */

void FUN_10860eb7c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd5e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10860ec28; end: 10860ec87;  */

void FUN_10860ec28(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1494c0(param_2);
  _objc_release(param_2);
  func_0x00010bdff540(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10860ec88; end: 10860ecf3; -[SCTCameraProviderImpl _didReceiveManagedVideoDataSourceEvent:] */

void FUN_10860ec88(double param_1,undefined8 param_2)

{
  func_0x00010bf297e0();
  if (param_1 == 0.0) {
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c176600(param_2);
  }
  func_0x00010bf6b020(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2a460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10860ecf4; end: 10860ed1f; -[SCTCameraProviderImpl stopObservingManagedVideoDataSourceOutputEvent] */

void FUN_10860ecf4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10860ed20; end: 10860ed37; -[SCTCameraProviderImpl delegate] */

void FUN_10860ed20(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10860ed38; end: 10860ed43; -[SCTCameraProviderImpl setDelegate:] */

void FUN_10860ed38(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10860ed44; end: 10860ed4b; -[SCTCameraProviderImpl captureState] */

undefined8 FUN_10860ed44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10860ed4c; end: 10860ed53; -[SCTCameraProviderImpl setCaptureState:] */

void FUN_10860ed4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10860ed54; end: 10860ed5b; -[SCTCameraProviderImpl cameraStartTime] */

undefined8 FUN_10860ed54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10860ed5c; end: 10860ed63; -[SCTCameraProviderImpl setCameraStartTime:] */

void FUN_10860ed5c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x68) = param_1;
  return;
}



/* Entry: 10860ed64; end: 10860ed6f; -[SCTCameraProviderImpl isCameraActive] */

byte FUN_10860ed64(long param_1)

{
  return *(byte *)(param_1 + 0x58) & 1;
}



/* Entry: 10860ed70; end: 10860ed77; -[SCTCameraProviderImpl setIsCameraActive:] */

void FUN_10860ed70(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10860ed78; end: 10860ed7f; -[SCTCameraProviderImpl cameraFirstFrameTime] */

undefined8 FUN_10860ed78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10860ed80; end: 10860ed87; -[SCTCameraProviderImpl setCameraFirstFrameTime:] */

void FUN_10860ed80(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x70) = param_1;
  return;
}



/* Entry: 10860ed88; end: 10860ee13; -[SCTCameraProviderImpl .cxx_destruct] */

void FUN_10860ed88(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10860ee14; end: 10860f117; -[SCTCameraServices initWithCameraHardwareServicesAPI:captureDeviceManager:grapheneLogger:cameraHardwareResource:renderTarget:cameraRequestManager:] */

undefined8 *
FUN_10860ee14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
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
  puStack_68 = PTR_PTR_1126fd1d0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar6 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar6);
    _objc_retain(param_3);
    uVar6 = puVar1[6];
    puVar1[6] = param_3;
    _objc_release(uVar6);
    _objc_retain(param_4);
    uVar6 = puVar1[7];
    puVar1[7] = param_4;
    _objc_release(uVar6);
    _objc_retain(param_7);
    uVar6 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar6);
    _objc_retain(param_6);
    uVar6 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar6);
    _objc_retain(param_5);
    uVar6 = puVar1[10];
    puVar1[10] = param_5;
    _objc_release(uVar6);
    _objc_retain(param_8);
    uVar6 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar6 = puVar1[0xf];
    puVar1[0xf] = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar6 = puVar1[0x10];
    puVar1[0x10] = puVar2;
    _objc_release(uVar6);
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126b6ae8;
    func_0x00010c22ba80(PTR_PTR_1126b6ae8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae960;
    puVar4 = PTR_PTR_1126bdea0;
    func_0x00010bf2ad00(PTR_PTR_1126bdea0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c268800(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae970;
    func_0x00010c0c7320(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c2a1620(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10860f118; end: 10860f143;  */

void FUN_10860f118(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdccdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10860f144; end: 10860f1a3; -[SCTCameraServices aspectRatio] */

undefined8 FUN_10860f144(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb6900();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10860f1a4; end: 10860f22b; -[SCTCameraServices _appStartComplete] */

void FUN_10860f1a4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(undefined1 *)(param_1 + 0x60) = 1;
  lVar4 = *(long *)(param_1 + 0x68);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfc3580(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfc3560();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x68);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10860f22c; end: 10860f28b; -[SCTCameraServices activateLensesWithUseVideoCallSource:completion:] */

void FUN_10860f22c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bfc3580(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beefe00();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10860f28c; end: 10860f2eb; -[SCTCameraServices deactivateLensesWithUseVideoCallSource:completion:] */

void FUN_10860f28c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bfc3580(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf65d20();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10860f2ec; end: 10860f4df; -[SCTCameraServices startCameraForConsumer:cameraDeviceSettingsResolver:withMultitaskingCamera:setVideoOrientation:completion:] */

void FUN_10860f2ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bf4b900();
  if (iVar1 == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010bf529e0();
    if (lVar2 == 1) {
      uVar6 = *(undefined8 *)(param_1 + 0x80);
      puVar3 = PTR_PTR_1126da810;
      func_0x00010c2a6be0(PTR_PTR_1126da810);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6);
      _objc_release(puVar3);
      _objc_initWeak(auStack_68,*(undefined8 *)(param_1 + 0x80));
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_10860f4e0;
      puStack_90 = &UNK_1108484f8;
      lStack_88 = param_1;
      uStack_70 = param_2;
      _objc_copyWeak(auStack_78,auStack_68);
      _objc_retain(param_7);
      ppuVar4 = &puStack_a8;
      lStack_80 = param_7;
      _objc_retainBlock(ppuVar4);
      lVar2 = param_1;
      func_0x00010bfc3580();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c2504c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar5;
      _objc_release(uVar6);
      _objc_release(lVar2);
      _objc_release(ppuVar4);
      _objc_release(lStack_80);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_68);
      goto LAB_10860f48c;
    }
  }
  if (param_7 != 0) {
    (**(code **)(param_7 + 0x10))(param_7);
  }
LAB_10860f48c:
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10860f4e0; end: 10860f55f;  */

void FUN_10860f4e0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126da810;
  func_0x00010bf7ba60(PTR_PTR_1126da810);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010860f54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10860f560; end: 10860f70b; -[SCTCameraServices stopCameraForConsumer:setVideoOrientation:completion:] */

void FUN_10860f560(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bf4b900();
  if (iVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x28));
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      puVar3 = PTR_PTR_1126da810;
      func_0x00010c2a6ee0(PTR_PTR_1126da810);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar5);
      _objc_release(puVar3);
      _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x80));
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_10860f70c;
      puStack_80 = &UNK_1108aeb50;
      lStack_78 = param_1;
      uStack_60 = param_2;
      _objc_copyWeak(auStack_68,auStack_58);
      _objc_retain(param_5);
      ppuVar4 = &puStack_98;
      lStack_70 = param_5;
      _objc_retainBlock(ppuVar4);
      func_0x00010bfc3580(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2568c0(0);
      _objc_release(param_1);
      _objc_release(ppuVar4);
      _objc_release(lStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_58);
      goto LAB_10860f6c4;
    }
  }
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5);
  }
LAB_10860f6c4:
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10860f70c; end: 10860f78b;  */

void FUN_10860f70c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126da810;
  func_0x00010bf7c040(PTR_PTR_1126da810);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(lVar1);
  _objc_release(puVar2);
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010860f778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10860f78c; end: 10860f7eb; -[SCTCameraServices setAutofocusAndExposurePointOfInterest:viewSize:] */

void FUN_10860f78c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010bfc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d2e0(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10860f7ec; end: 10860f857; -[SCTCameraServices getCameraProvider] */

void FUN_10860f7ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126da818;
    _objc_alloc();
    func_0x00010bffb660();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 8),param_2,param_1);
    lVar3 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10860f858; end: 10860f8ff; -[SCTCameraServices acquirePreviewWithCompletion:] */

void FUN_10860f858(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    _objc_retain(param_3);
    func_0x00010bfc3580(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bfc3560();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,lVar1);
    _objc_release(param_3);
    _objc_release(lVar1);
    lVar2 = param_1;
  }
  else {
    _objc_retain(param_3);
    lVar1 = param_3;
    _objc_retainBlock();
    _objc_release(param_3);
    lVar2 = *(long *)(param_1 + 0x68);
    *(long *)(param_1 + 0x68) = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10860f900; end: 10860f90b; -[SCTCameraServices setVideoFrameReceiver:] */

void FUN_10860f900(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10860f90c; end: 10860f963; -[SCTCameraServices setCameraType:] */

void FUN_10860f90c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == *(long *)(param_1 + 0x20)) {
    return;
  }
  *(long *)(param_1 + 0x20) = param_3;
  func_0x00010bfc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18cce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10860f964; end: 10860f96b; -[SCTCameraServices getCameraType] */

undefined8 FUN_10860f964(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10860f96c; end: 10860f99f; -[SCTCameraServices cameraProvider:didOutputSampleBuffer:] */

void FUN_10860f96c(long param_1)

{
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c065000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10860f9a0; end: 10860f9af; -[SCTCameraServices cameraProviderDidBeginInterruption:] */

void FUN_10860f9a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_next__112614028,PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 10860f9b0; end: 10860f9bf; -[SCTCameraServices cameraProviderDidEndInterruption:] */

void FUN_10860f9b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_next__112614028,PTR____kCFBooleanFalse_11034ab60)
  ;
  return;
}



/* Entry: 10860f9c0; end: 10860f9fb; -[SCTCameraServices isMultitaskingCameraAccessEnabled] */

undefined8 FUN_10860f9c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfc3580();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c078200();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10860f9fc; end: 10860fa03; -[SCTCameraServices isCameraInterruptedObservable] */

void FUN_10860f9fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 10860fa04; end: 10860fa2b; -[SCTCameraServices cameraLifecycleObservable] */

void FUN_10860fa04(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10860fa2c; end: 10860fadb; -[SCTCameraServices .cxx_destruct] */

void FUN_10860fa2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10860fadc; end: 10860fbb3; -[SCTScreenCaptureServices initWithCircumstanceEngine:] */

undefined1 * FUN_10860fadc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fd1d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
    puVar2 = PTR_PTR_1126da820;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126da828;
    _objc_alloc();
    func_0x00010c00af40(0x4020000000000000);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10860fbb4; end: 10860fcbf; -[SCTScreenCaptureServices setDelegate:] */

void FUN_10860fbb4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  lVar2 = param_1 + 8;
  if (lVar1 == 0) {
    _objc_storeWeak(lVar2,param_3);
    func_0x00010bf8ef20(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != param_3) {
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c2a25c0();
      _objc_release(lVar1);
      _objc_storeWeak(param_1 + 8,0);
      func_0x00010c1e8380(*(undefined8 *)(param_1 + 0x18));
      _objc_storeWeak(param_1 + 8,param_3);
      func_0x00010c255a00(*(undefined8 *)(param_1 + 0x10));
    }
  }
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c151340(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c151000(lVar1);
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10860fcc0; end: 10860fd5f; -[SCTScreenCaptureServices removeDelegate:] */

bool FUN_10860fcc0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == param_3) {
    _objc_storeWeak(param_1 + 8,0);
    func_0x00010c1e8380(*(undefined8 *)(param_1 + 0x18));
    func_0x00010bf7f9e0(*(undefined8 *)(param_1 + 0x10));
  }
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_3);
  return lVar1 == param_3;
}



/* Entry: 10860fd60; end: 10860fd67; -[SCTScreenCaptureServices stopScreenCapture] */

void FUN_10860fd60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c255a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_stopAsync_1126730a8);
  return;
}



/* Entry: 10860fd68; end: 10860fdb7; -[SCTScreenCaptureServices screenSharingState] */

undefined8 FUN_10860fd68(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c151340(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x20);
  return uVar1;
}



/* Entry: 10860fdb8; end: 10860fe2f; -[SCTScreenCaptureServices notifyIntentToPublishFromDelegate:] */

void FUN_10860fdb8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == param_3) {
    func_0x00010c0dd260(*(undefined8 *)(param_1 + 0x10));
  }
  _os_unfair_lock_unlock(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10860fe30; end: 108610027; -[SCTScreenCaptureServices _onSystemRecordingChanged:] */

void FUN_10860fe30(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  uint uVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c151480();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 == (undefined *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    puVar6 = (undefined *)0x0;
    puVar7 = (undefined *)0x0;
    lVar8 = *plStack_120;
    do {
      puVar5 = (undefined *)0x0;
      puVar3 = puVar7;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(puVar1);
        }
        puVar7 = *(undefined **)(lStack_128 + (long)puVar5 * 8);
        _objc_retain(puVar7);
        _objc_release(puVar3);
        if (((ulong)puVar6 & 1) == 0) {
          puVar6 = puVar7;
          func_0x00010c06e280();
          if (uVar9 == 0) goto LAB_10860ff28;
LAB_10860ff10:
          uVar9 = 1;
        }
        else {
          puVar6 = (undefined *)0x1;
          if (uVar9 != 0) goto LAB_10860ff10;
LAB_10860ff28:
          puVar3 = puVar7;
          func_0x00010c0ce960();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010c0b6c20();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = (uint)(puVar3 == puVar4);
          _objc_release();
          _objc_release(puVar3);
        }
        puVar5 = puVar5 + 1;
        puVar3 = puVar7;
      } while (puVar2 != puVar5);
      puVar2 = puVar1;
      func_0x00010bf52a60(puVar1,param_2,&uStack_130,auStack_f0,0x10);
    } while (puVar2 != (undefined *)0x0);
    _objc_release(puVar7);
    uVar9 = (uint)puVar6 & (uVar9 ^ 1);
  }
  _objc_release(puVar1);
  func_0x00010c211180(*(undefined8 *)(param_1 + 0x18),param_2,uVar9);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x20);
  __Unwind_Resume(param_3);
  param_3 = param_3 + 8;
  _objc_loadWeakRetained(param_3);
  func_0x00010c150fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108610028; end: 10861006b; -[SCTScreenCaptureServices screenCaptureReceiver:onFrame:] */

void FUN_108610028(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c150fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10861006c; end: 1086100ef; -[SCTScreenCaptureServices screenCaptureReceiverStarted:] */

void FUN_10861006c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c06e2a0();
  if ((uVar1 & 1) == 0) {
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c1e8380(*(undefined8 *)(param_1 + 0x18),param_2,1);
    }
  }
  _os_unfair_lock_unlock(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1086100f0; end: 108610173; -[SCTScreenCaptureServices screenCaptureReceiverStopped:] */

void FUN_1086100f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c06e2a0();
  if (iVar1 != 0) {
    lVar2 = param_1 + 8;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c1e8380(*(undefined8 *)(param_1 + 0x18),param_2,0);
    }
  }
  _os_unfair_lock_unlock(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108610174; end: 108610177; -[SCTScreenCaptureServices screenCaptureReceiverPaused:] */

void FUN_108610174(void)

{
  return;
}



/* Entry: 108610178; end: 10861017b; -[SCTScreenCaptureServices screenCaptureReceiverResumed:] */

void FUN_108610178(void)

{
  return;
}



/* Entry: 10861017c; end: 1086101d7; -[SCTScreenCaptureServices screenCaptureReceiverExtensionLaunchDetected:] */

void FUN_10861017c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  func_0x00010c199380(*(undefined8 *)(param_1 + 0x18),param_2,1);
  _os_unfair_lock_unlock(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1086101d8; end: 108610233; -[SCTScreenCaptureServices screenCaptureReceiverExtensionExitDetected:] */

void FUN_1086101d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  func_0x00010c199380(*(undefined8 *)(param_1 + 0x18),param_2,0);
  _os_unfair_lock_unlock(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108610234; end: 108610277; -[SCTScreenCaptureServices screenSharingStateManager:stateChanged:] */

void FUN_108610234(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c151000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108610278; end: 1086102af; -[SCTScreenCaptureServices .cxx_destruct] */

void FUN_108610278(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1086102b0; end: 108610323; -[SCTV3NetServices initWithBatteryLogger:] */

undefined1 * FUN_1086102b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd1e0;
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



/* Entry: 108610324; end: 10861035b; -[SCTV3NetServices pauseDownloads] */

void FUN_108610324(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f5c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10861035c; end: 108610393; -[SCTV3NetServices resumeDownloads] */

void FUN_10861035c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108610394; end: 108610477; -[SCTV3NetServices logNetworkActivityStartedAt:] */

void FUN_108610394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  _objc_retain();
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dc4098);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d6c80;
  _objc_alloc(PTR_PTR_1126d6c80);
  func_0x00010c02f040();
  func_0x00010bf7bcc0(*(undefined8 *)(param_1 + 8),param_2,puVar2,param_3,
                      &PTR____CFConstantStringClassReference_110ee60f8,puVar3);
  _objc_release(param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108610478; end: 108610523; -[SCTV3NetServices logNetworkActivityEndedAt:startToken:] */

void FUN_108610478(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6c80;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c02f040();
  func_0x00010bf7c0a0(*(undefined8 *)(param_1 + 8),param_2,param_4,param_3,
                      &PTR____CFConstantStringClassReference_110ee60f8,puVar1,1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108610524; end: 10861052f; -[SCTV3NetServices .cxx_destruct] */

void FUN_108610524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108610530; end: 1086105af; -[SCTalkScreenSharingStateManager initWithDelegate:timeout:] */

undefined1 *
FUN_108610530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fd1e8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1086105b0; end: 1086105ff; -[SCTalkScreenSharingStateManager screenSharingState] */

long FUN_1086105b0(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar1 = param_1;
  func_0x00010be22f20(param_1);
  _os_unfair_lock_unlock(param_1 + 0x20);
  return lVar1;
}



/* Entry: 108610600; end: 108610717; -[SCTalkScreenSharingStateManager setExtensionStarted:] */

void FUN_108610600(long param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _os_unfair_lock_lock(param_1 + 0x20);
  if (*(byte *)(param_1 + 0x25) != param_3) {
    func_0x00010be22f20(param_1);
    bVar1 = 0;
    *(char *)(param_1 + 0x25) = (char)param_3;
    *(undefined1 *)(param_1 + 0x10) = 0;
    if ((param_3 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 0x26);
    }
    *(byte *)(param_1 + 0x11) = bVar1 & 1;
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108610718;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x000107c312cc("APPSTORE",&puStack_60);
    func_0x00010be07d60(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _os_unfair_lock_unlock(param_1 + 0x20);
  return;
}



/* Entry: 108610718; end: 108610777;  */

void FUN_108610718(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) &&
     (func_0x00010bf2eb80(PTR__OBJC_CLASS___NSObject_1126b1300,param_2,param_1),
     *(char *)(param_1 + 0x11) == '\x01')) {
    func_0x00010c0f8f40(*(undefined8 *)(param_1 + 0x18),param_1,param_2,
                        PTR_s__clearLastExtensionStopping_11253c100,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108610778; end: 10861089b; -[SCTalkScreenSharingStateManager setReceiverCapturing:] */

void FUN_108610778(long param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _os_unfair_lock_lock(param_1 + 0x20);
  if (*(byte *)(param_1 + 0x24) != param_3) {
    func_0x00010be22f20(param_1);
    *(char *)(param_1 + 0x24) = (char)param_3;
    if (((param_3 & 1) == 0) && (*(char *)(param_1 + 0x25) == '\x01')) {
      bVar1 = *(byte *)(param_1 + 0x26);
    }
    else {
      bVar1 = 0;
    }
    *(byte *)(param_1 + 0x10) = bVar1 & 1;
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10861089c;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x000107c312cc("APPSTORE",&puStack_60);
    func_0x00010be07d60(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _os_unfair_lock_unlock(param_1 + 0x20);
  return;
}



/* Entry: 10861089c; end: 108610953;  */

void FUN_10861089c(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      func_0x00010c0f8f40(*(undefined8 *)(param_1 + 0x18),param_1,param_2,
                          PTR_s__clearLastCapturingStopping_11253c108,0);
    }
    else {
      func_0x00010bf2eba0(PTR__OBJC_CLASS___NSObject_1126b1300,param_2,param_1,
                          PTR_s__clearLastCapturingStopping_11253c108,0);
    }
    if (((*(byte *)(param_1 + 0x24) & 1) == 0) && (*(char *)(param_1 + 0x25) == '\x01')) {
      func_0x00010c0f8f40(*(undefined8 *)(param_1 + 0x18),param_1,param_2,
                          PTR_s__clearExtensionRunning_11253c110,0);
    }
    else {
      func_0x00010bf2eba0(PTR__OBJC_CLASS___NSObject_1126b1300,param_2,param_1,
                          PTR_s__clearExtensionRunning_11253c110,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108610954; end: 1086109a7; -[SCTalkScreenSharingStateManager _clearLastCapturingStopping] */

void FUN_108610954(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar1 = param_1;
  func_0x00010be22f20(param_1);
  *(undefined1 *)(param_1 + 0x10) = 0;
  func_0x00010be07d60(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 1086109a8; end: 1086109fb; -[SCTalkScreenSharingStateManager _clearLastExtensionStopping] */

void FUN_1086109a8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar1 = param_1;
  func_0x00010be22f20(param_1);
  *(undefined1 *)(param_1 + 0x11) = 0;
  func_0x00010be07d60(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 1086109fc; end: 108610a4f; -[SCTalkScreenSharingStateManager _clearExtensionRunning] */

void FUN_1086109fc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar1 = param_1;
  func_0x00010be22f20(param_1);
  *(undefined1 *)(param_1 + 0x25) = 0;
  func_0x00010be07d60(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 108610a50; end: 108610b53; -[SCTalkScreenSharingStateManager setSystemRecording:] */

void FUN_108610a50(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _os_unfair_lock_lock(param_1 + 0x20);
  if (*(byte *)(param_1 + 0x26) != param_3) {
    func_0x00010be22f20(param_1);
    *(char *)(param_1 + 0x26) = (char)param_3;
    if ((param_3 & 1) == 0) {
      *(undefined2 *)(param_1 + 0x10) = 0;
      _objc_initWeak(auStack_38,param_1);
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_108610b54;
      puStack_48 = &UNK_1108434b0;
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x000107c312cc("APPSTORE",&puStack_60);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    func_0x00010be07d60(param_1);
  }
  _os_unfair_lock_unlock(param_1 + 0x20);
  return;
}



/* Entry: 108610b54; end: 108610bb3;  */

void FUN_108610b54(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf2eba0(PTR__OBJC_CLASS___NSObject_1126b1300,param_2,param_1,
                        PTR_s__clearLastCapturingStopping_11253c108,0);
    func_0x00010bf2eba0(PTR__OBJC_CLASS___NSObject_1126b1300,param_2,param_1,
                        PTR_s__clearLastExtensionStopping_11253c100,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108610bb4; end: 108610c37; -[SCTalkScreenSharingStateManager _emitIfChanged:] */

void FUN_108610bb4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _os_unfair_lock_assert_owner(param_1 + 0x20);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if ((lVar1 != 0) && (lVar1 = param_1, func_0x00010be22f20(), lVar1 != param_3)) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c151360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}


