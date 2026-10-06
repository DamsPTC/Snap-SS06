/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10616c048; end: 10616c0eb; -[SCFeatureGreenScreenModeImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616c048(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740ae4,0);
  _objc_storeStrong(param_1 + _DAT_112740af0,0);
  _objc_storeStrong(param_1 + _DAT_112740aec,0);
  _objc_storeStrong(param_1 + _DAT_112740ae8,0);
  _objc_destroyWeak(param_1 + _DAT_112740ae0);
  _objc_destroyWeak(param_1 + _DAT_112740b00);
  _objc_destroyWeak(param_1 + _DAT_112740adc);
  _objc_storeStrong(param_1 + _DAT_112740b04,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740af8,0);
  return;
}



/* Entry: 10616c0ec; end: 10616c14f; -[SCFeatureHandsFreeImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616c0ec(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126efeb0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_activate_112599760);
  lVar1 = param_1;
  func_0x00010be859e0();
  if ((int)lVar1 != 0) {
    func_0x00010c269d40(*(undefined8 *)(param_1 + _DAT_112740b44));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10616c150; end: 10616c15f; -[SCFeatureHandsFreeImpl _quickReplyConsumptionEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616c150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112740b48),
             PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0a878,0,0);
  return;
}



/* Entry: 10616c160; end: 10616c23f; -[SCFeatureHandsFreeImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616c160(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar3 = (long)_DAT_112740b4c;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd3600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10616c240;
  puStack_40 = &UNK_110842e18;
  uStack_38 = uVar2;
  _objc_retain(uVar2);
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uVar2);
  puStack_60 = PTR_PTR_1126efeb0;
  lStack_68 = param_1;
  _objc_msgSendSuper2(&lStack_68,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10616c240; end: 10616c247;  */

void FUN_10616c240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 10616c248; end: 10616c33b; -[SCFeatureHandsFreeImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616c248(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740b58);
  *(undefined8 *)(param_1 + _DAT_112740b58) = uVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10616c33c; end: 10616c4c7;  */

void FUN_10616c33c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10616c4c8;
  puStack_70 = &UNK_11084ec30;
  _objc_copyWeak(auStack_68,param_1 + 0x20);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x10616c510;
  puStack_98 = &UNK_11090b9a8;
  _objc_copyWeak(auStack_90,param_1 + 0x20);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x10616c53c;
  puStack_c0 = &UNK_11090b9a8;
  _objc_copyWeak(auStack_b8,param_1 + 0x20);
  _objc_copyWeak(auStack_e0,param_1 + 0x20);
  func_0x00010c0bd6a0(param_2);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 10616c4c8; end: 10616c593;  */

void FUN_10616c4c8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c109760();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10616c594; end: 10616c60f; -[SCFeatureHandsFreeImpl shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10616c594(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_3 + _DAT_112740b5c) == '\x01') {
    uVar1 = *(undefined8 *)(param_3 + _DAT_112740b4c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c07a600(param_1,param_2);
    _objc_release(uVar1);
    return uVar2;
  }
  return 0;
}



/* Entry: 10616c610; end: 10616c657; -[SCFeatureHandsFreeImpl shouldDisplayHandsFreeTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10616c610(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740b4c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22f7a0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10616c658; end: 10616c7d3; -[SCFeatureHandsFreeImpl prepareForRecordingWithVideoCaptureConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616c658(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740b4c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221260();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740b18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _CMTimeMake(auStack_50,0,1000);
  _objc_copyWeak(auStack_58,auStack_38);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfa0(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10616c7d4; end: 10616c957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616c7d4(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    lVar5 = lVar2 + _DAT_112740b2c;
    _objc_loadWeakRetained(lVar5);
    lVar3 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfd3480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0be6c0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar5);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c270720();
    if ((iVar1 == 0) || ((*(byte *)(puStack_58 + 3) & 1) != 0)) {
      func_0x00010c177c00(lVar2);
      lVar5 = *(long *)(param_1 + 0x20);
      func_0x00010bf31440();
      if (lVar5 == 2) {
        func_0x00010c195460(lVar2);
      }
    }
    else {
      func_0x00010c177c00(lVar2);
    }
    __Block_object_dispose(&uStack_60,8);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10616c958; end: 10616c97f;  */

void FUN_10616c958(void)

{
  return;
}



/* Entry: 10616c980; end: 10616ce47; -[SCFeatureHandsFreeImpl forwardCameraTimerGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616c980(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_opt_class(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  uVar2 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar1);
  if ((uVar2 & 1) == 0) goto LAB_10616cd00;
  lVar7 = (long)_DAT_112740b4c;
  uVar3 = *(undefined8 *)(param_3 + lVar7);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfd3600();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar2 = param_5;
  func_0x00010c252440();
  if (uVar2 == 1) {
    uVar4 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a3020(param_1,param_2);
    _objc_release(uVar4);
    if (*(char *)(param_3 + _DAT_112740b60) != '\x01') goto LAB_10616cd00;
    lVar5 = (long)_DAT_112740b5c;
    if (*(char *)(param_3 + lVar5) == '\x01') {
      uVar3 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c07a620(param_1,param_2);
      _objc_release(uVar3);
      if ((int)uVar4 != 0) {
        uVar4 = *(undefined8 *)(param_3 + lVar7);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
LAB_10616cc64:
        func_0x00010c209fc0();
        goto LAB_10616cc6c;
      }
      if ((*(byte *)(param_3 + lVar5) & 1) != 0) goto LAB_10616cc70;
    }
    uVar3 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c07a640(param_1,param_2);
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      uVar4 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209fc0();
      _objc_release(uVar4);
      _objc_storeWeak(param_3 + _DAT_112740b64,param_5);
    }
  }
  else if (uVar2 == 2) {
    if (*(char *)(param_3 + _DAT_112740b60) != '\x01') goto LAB_10616cd00;
    uVar4 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2ea0(param_1,param_2);
    _objc_release(uVar4);
    if ((*(byte *)(param_3 + _DAT_112740b5c) & 1) == 0) {
      lVar6 = (long)_DAT_112740b64;
      lVar5 = param_3 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 == 0) {
        uVar3 = *(undefined8 *)(param_3 + lVar7);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c07a620(param_1,param_2);
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          _objc_storeWeak(param_3 + lVar6,param_5);
        }
      }
      else {
        _objc_release();
      }
      uVar2 = param_3 + lVar6;
      _objc_loadWeakRetained();
      _objc_release();
      if (param_5 != uVar2) goto LAB_10616cc70;
      uVar4 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22da80();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209fc0();
    }
    else {
      uVar4 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07a620(param_1,param_2);
      uVar3 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209fc0();
      _objc_release(uVar3);
    }
LAB_10616cc6c:
    _objc_release(uVar4);
  }
  else if (uVar2 == 3) {
    if (*(char *)(param_3 + _DAT_112740b60) != '\x01') goto LAB_10616cd00;
    uVar4 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2ea0(param_1,param_2);
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112740b5c;
    if ((*(byte *)(param_3 + lVar5) & 1) == 0) {
      uVar3 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c22da80();
      _objc_release(uVar3);
      if ((int)uVar4 == 0) {
        if (*(char *)(param_3 + lVar5) != '\x01') goto LAB_10616cc70;
        goto LAB_10616ca80;
      }
    }
    else {
LAB_10616ca80:
      uVar3 = *(undefined8 *)(param_3 + lVar7);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c07a620(param_1,param_2);
      _objc_release(uVar3);
      if ((int)uVar4 == 0) {
        uVar4 = *(undefined8 *)(param_3 + lVar7);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10616cc64;
      }
    }
    func_0x00010c195460(param_3);
  }
LAB_10616cc70:
  lVar5 = *(long *)(param_3 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c252440();
  _objc_release(lVar5);
  if (lVar7 == 4) {
    func_0x00010be51380(param_3);
  }
  else if (lVar7 == 3) {
    func_0x00010be513c0(param_3);
  }
  else if (lVar7 == 2) {
    uVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_5);
    func_0x00010be51400(param_3);
    _objc_release(uVar2);
  }
LAB_10616cd00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10616ce48; end: 10616cf3b; -[SCFeatureHandsFreeImpl setCancelBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616ce48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740b4c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c177f80();
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10616cf3c; end: 10616cf87;  */

void FUN_10616cf3c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdda580();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010616cf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10616cf88; end: 10616cfc3; -[SCFeatureHandsFreeImpl _cancelButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616cf88(long param_1)

{
  param_1 = param_1 + _DAT_112740b68;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1a5480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10616cfc4; end: 10616d02f; -[SCFeatureHandsFreeImpl setCanEnable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616cfc4(long param_1,undefined8 param_2,uint param_3)

{
  if (((param_3 & 1) == 0) && (*(char *)(param_1 + _DAT_112740b5c) == '\x01')) {
    func_0x00010c195460(param_1,param_2,0);
  }
  if (*(byte *)(param_1 + _DAT_112740b60) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112740b60) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be01390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didToggleAvailability_11255de80);
  return;
}



/* Entry: 10616d030; end: 10616d14b; -[SCFeatureHandsFreeImpl setEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616d030(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(char *)(param_1 + _DAT_112740b60) == '\x01') {
    if (param_3 != 0) {
      lVar2 = param_1 + _DAT_112740b68;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c1a5480();
      _objc_release(lVar2);
    }
    if (*(byte *)(param_1 + _DAT_112740b5c) != param_3) {
      *(char *)(param_1 + _DAT_112740b5c) = (char)param_3;
      lVar2 = (long)_DAT_112740b4c;
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a54c0();
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209fc0();
      _objc_release(uVar1);
      if ((param_3 & 1) == 0) {
        func_0x00010c09ef00(*(undefined8 *)(param_1 + _DAT_112740b6c));
        func_0x00010be51400(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be51390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__logCameraUserActionDidEndWithRe_112571e80,0);
        return;
      }
    }
  }
  return;
}



/* Entry: 10616d14c; end: 10616d18b; -[SCFeatureHandsFreeImpl turnOnHandsFree] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616d14c(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + _DAT_112740b60) & 1) == 0) {
    func_0x00010c177c00(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setEnabled__112642f38,1);
  return;
}



/* Entry: 10616d18c; end: 10616d1ef; -[SCFeatureHandsFreeImpl announceDestinationActivated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616d18c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be859e0();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112740b44);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf043e0();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10616d1f0; end: 10616d267; -[SCFeatureHandsFreeImpl destinationActivatedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616d1f0(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010be859e0();
  if ((uVar1 & 1) == 0) {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + (long)_DAT_112740b44);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf6eb80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10616d268; end: 10616d2cb; -[SCFeatureHandsFreeImpl destinationActivatedReplyConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616d268(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010be859e0();
  if ((int)lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112740b44);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf6eba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10616d2cc; end: 10616d31f; -[SCFeatureHandsFreeImpl nilOutDestionationActivated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616d2cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010be859e0();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112740b44);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10616d320; end: 10616d33b; -[SCFeatureHandsFreeImpl cameraUIItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10616d320(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x14;
  if (*(char *)(param_1 + _DAT_112740b70) == '\0') {
    uVar1 = 0x15;
  }
  return uVar1;
}



/* Entry: 10616d33c; end: 10616d357; -[SCFeatureHandsFreeImpl actionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10616d33c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 4;
  if (*(char *)(param_1 + _DAT_112740b70) == '\0') {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 10616d358; end: 10616d547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616d358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar1 = param_5 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR_PTR_1126c85f8;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_5 + 0x20);
    uVar6 = *(undefined8 *)(lVar1 + _DAT_112740b54);
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112740b08);
    uVar11 = *(undefined8 *)(lVar1 + _DAT_112740b10);
    uVar12 = *(undefined8 *)(lVar1 + _DAT_112740b14);
    uVar13 = *(undefined8 *)(lVar1 + _DAT_112740b1c);
    lVar9 = lVar1 + _DAT_112740b20;
    _objc_loadWeakRetained();
    uVar10 = *(undefined8 *)(lVar1 + _DAT_112740b24);
    uVar7 = *(undefined8 *)(lVar1 + _DAT_112740b30);
    lVar2 = lVar1 + _DAT_112740b2c;
    _objc_loadWeakRetained();
    func_0x00010c002840(puVar8,param_6,uVar4,uVar6,uVar5,uVar11,uVar12,uVar13,lVar9,uVar10,uVar7,
                        lVar2);
    _objc_release(lVar2);
    _objc_release(lVar9);
    uVar4 = *(undefined8 *)(param_5 + 0x20);
    puVar3 = puVar8;
    func_0x00010bfd3600(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fc0(uVar4,param_6,puVar3,0);
    _objc_release(puVar3);
    func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x20));
    puVar3 = puVar8;
    func_0x00010bfd3600(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126c8600;
    _objc_alloc();
    func_0x00010c050900();
    lVar9 = (long)_DAT_112740b6c;
    uVar4 = *(undefined8 *)(lVar1 + lVar9);
    *(undefined **)(lVar1 + lVar9) = puVar3;
    _objc_release(uVar4);
    func_0x00010c1c8340(0,*(undefined8 *)(lVar1 + lVar9));
    puVar3 = puVar8;
    func_0x00010bfd3600(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10616d548; end: 10616d597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616d548(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_112740b4c;
    uVar1 = *(ulong *)(param_1 + lVar2);
    func_0x00010c06f880();
    if ((uVar1 & 1) == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar2));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10616d598; end: 10616d5ff; -[SCFeatureHandsFreeImpl _didToggleAvailability] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616d598(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740b4c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209fc0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112740b64,0);
  return;
}



/* Entry: 10616d600; end: 10616d64f; -[SCFeatureHandsFreeImpl _logCameraUserActionDidEndWithRecording:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616d600(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_112740b70) = param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740b0c);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10616d650; end: 10616d69f; -[SCFeatureHandsFreeImpl _logCameraUserActionDidNotCompleteWithRecording:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616d650(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_112740b70) = param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740b0c);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10616d6a0; end: 10616d707; -[SCFeatureHandsFreeImpl _logCameraUserActionDidStartWithRecording:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616d6a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_3 + _DAT_112740b70) = param_5;
  uVar1 = *(undefined8 *)(param_3 + _DAT_112740b0c);
  func_0x00010bfa1820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b7c0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10616d708; end: 10616d70f; -[SCFeatureHandsFreeImpl _capturerDidFailRecording] */

void FUN_10616d708(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c177c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCanEnable__11263b920,0);
  return;
}



/* Entry: 10616d710; end: 10616d717; -[SCFeatureHandsFreeImpl _capturerDidFinishRecording] */

void FUN_10616d710(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c177c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCanEnable__11263b920,0);
  return;
}



/* Entry: 10616d718; end: 10616d71f; -[SCFeatureHandsFreeImpl _capturerDidCancelRecording] */

void FUN_10616d718(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c177c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCanEnable__11263b920,0);
  return;
}



/* Entry: 10616d720; end: 10616d72f; -[SCFeatureHandsFreeImpl canEnable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10616d720(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112740b60);
}



/* Entry: 10616d730; end: 10616d73f; -[SCFeatureHandsFreeImpl enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10616d730(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112740b5c);
}



/* Entry: 10616d740; end: 10616d74f; -[SCFeatureHandsFreeImpl longPressGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10616d740(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740b6c);
}



/* Entry: 10616d750; end: 10616d76f; -[SCFeatureHandsFreeImpl usageTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616d750(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112740b68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10616d770; end: 10616d77f; -[SCFeatureHandsFreeImpl handsFreeRecordingStateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10616d770(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740b28);
}



/* Entry: 10616d780; end: 10616d917; -[SCFeatureHandsFreeImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616d780(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740b28,0);
  _objc_destroyWeak(param_1 + _DAT_112740b68);
  _objc_storeStrong(param_1 + _DAT_112740b48,0);
  _objc_storeStrong(param_1 + _DAT_112740b54,0);
  _objc_storeStrong(param_1 + _DAT_112740b44,0);
  _objc_destroyWeak(param_1 + _DAT_112740b40);
  _objc_storeStrong(param_1 + _DAT_112740b3c,0);
  _objc_destroyWeak(param_1 + _DAT_112740b38);
  _objc_storeStrong(param_1 + _DAT_112740b34,0);
  _objc_storeStrong(param_1 + _DAT_112740b50,0);
  _objc_destroyWeak(param_1 + _DAT_112740b2c);
  _objc_destroyWeak(param_1 + _DAT_112740b20);
  _objc_storeStrong(param_1 + _DAT_112740b24,0);
  _objc_storeStrong(param_1 + _DAT_112740b1c,0);
  _objc_storeStrong(param_1 + _DAT_112740b18,0);
  _objc_storeStrong(param_1 + _DAT_112740b14,0);
  _objc_storeStrong(param_1 + _DAT_112740b10,0);
  _objc_storeStrong(param_1 + _DAT_112740b6c,0);
  _objc_storeStrong(param_1 + _DAT_112740b74,0);
  _objc_storeStrong(param_1 + _DAT_112740b78,0);
  _objc_storeStrong(param_1 + _DAT_112740b58,0);
  _objc_storeStrong(param_1 + _DAT_112740b0c,0);
  _objc_destroyWeak(param_1 + _DAT_112740b64);
  _objc_storeStrong(param_1 + _DAT_112740b08,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740b4c,0);
  return;
}



/* Entry: 10616d918; end: 10616d98b; -[SCFeatureHandsFreeTooltip initWithHandsFreeTooltipDelegate:scopedCameraType:cameraModeActivationController:usesRuntimeViewfinderGeometry:] */

long FUN_10616d918(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  if (param_1 != 0) {
    _objc_retain(param_5);
    _objc_storeWeak(param_1 + 8,param_3);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    _objc_storeWeak(param_1 + 0x20,param_5);
    _objc_release(param_5);
    *(undefined1 *)(param_1 + 0x30) = param_6;
  }
  return param_1;
}



/* Entry: 10616d98c; end: 10616da37; -[SCFeatureHandsFreeTooltip tooltipLabelStartRecording] */

void FUN_10616d98c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar1 = uVar4;
  func_0x00010c22f7a0();
  _objc_release(uVar4);
  lVar3 = *(long *)(param_1 + 0x40);
  if ((uVar1 & 1) == 0) {
    func_0x00010c12c960(lVar3);
    uVar4 = *(ulong *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    if (lVar3 != 0) goto LAB_10616da1c;
    func_0x00010b0aec24();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010becd280(param_1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(long *)(param_1 + 0x40) = lVar3;
    _objc_release(uVar2);
  }
  _objc_release(uVar4);
  lVar3 = *(long *)(param_1 + 0x40);
LAB_10616da1c:
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10616da38; end: 10616daab; -[SCFeatureHandsFreeTooltip tooltipLabelHoverOverLock] */

void FUN_10616da38(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x00010b0aec54();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010becd2a0(param_1,param_2,lVar3,1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar1;
    _objc_release(uVar2);
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + 0x48);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10616daac; end: 10616db07; -[SCFeatureHandsFreeTooltip tooltipHandsFreeEnabled] */

void FUN_10616daac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010bdf4e40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(long *)(param_1 + 0x50) = lVar2;
    _objc_release(uVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x50),param_2,1);
    lVar2 = *(long *)(param_1 + 0x50);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10616db08; end: 10616db37; -[SCFeatureHandsFreeTooltip setVideoCaptureConfiguration:] */

void FUN_10616db08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10616db38; end: 10616db4f; -[SCFeatureHandsFreeTooltip setTooltipIsInHoverOverLockState:] */

void FUN_10616db38(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x31) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x31) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c08d1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutTooltips_112600e78);
  return;
}



/* Entry: 10616db50; end: 10616dde3; -[SCFeatureHandsFreeTooltip setToolTipVisibilityWithStartRecordingAlpha:hoverOverLockAlpha:animated:] */

void FUN_10616db50(double param_1,double param_2,long param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  lVar1 = param_3;
  dVar4 = param_1;
  func_0x00010c273ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01b40();
  if (param_1 == dVar4) {
    lVar2 = param_3;
    func_0x00010c273ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf01b40();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (param_2 == dVar4) {
      return;
    }
  }
  else {
    _objc_release(lVar1);
  }
  lVar1 = param_3 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c074ae0();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uStack_68 = 0;
    lVar1 = param_3 + 0x20;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4fce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0be6c0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((*(byte *)(puStack_78 + 3) & 1) == 0) {
      if (param_5 == 0) {
        lVar1 = param_3;
        func_0x00010c273ee0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1677c0(param_1);
        _objc_release(lVar1);
        func_0x00010c273ec0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1677c0(param_2);
        _objc_release(param_3);
      }
      else {
        func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
      }
    }
    __Block_object_dispose(&uStack_80,8);
    return;
  }
  lVar1 = param_3;
  func_0x00010c273ee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(lVar1);
  func_0x00010c273ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10616dde4; end: 10616ddff;  */

void FUN_10616dde4(void)

{
  return;
}



/* Entry: 10616de00; end: 10616de6f;  */

void FUN_10616de00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c273ee0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c273ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10616de70; end: 10616df67; -[SCFeatureHandsFreeTooltip setTooltipIsInHoverOverLockState:animated:] */

void FUN_10616de70(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c217150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setTooltipIsInHoverOverLockState_112663678,param_3);
    return;
  }
  if ((int)param_3 == 0) {
    uVar3 = 0;
    uVar2 = 0x3feccccccccccccd;
  }
  else {
    func_0x00010c273ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar1 = 8;
    if (param_1 != 0) {
      lVar1 = 0;
    }
    uVar2 = *(undefined8 *)(&UNK_10ddd9c00 + lVar1);
    uVar3 = 0x3fe0000000000000;
    if (param_1 != 0) {
      uVar3 = 0;
    }
  }
  func_0x00010bf03460(0x3fd3333333333333,0,uVar2,uVar3,PTR__OBJC_CLASS___UIView_1126aec20);
  return;
}



/* Entry: 10616df68; end: 10616df73;  */

void FUN_10616df68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c217150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setTooltipIsInHoverOverLockState_112663678,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 10616df74; end: 10616e0d7; -[SCFeatureHandsFreeTooltip layoutTooltipsWithHandsFreeViewState:] */

/* WARNING: Possible PIC construction at 0x00010616e01c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010616dffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010616e000) */

void FUN_10616df74(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_3 < 3) {
    if (param_3 == 0) {
      uVar5 = 0;
      uVar6 = 0;
      uVar4 = 0;
      goto code_r0x00010c216ec0;
    }
    if (param_3 == 1) {
      lVar1 = param_1;
      func_0x00010c273ee0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + 8;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010c274080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee2640(param_1);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      goto LAB_10616e0b8;
    }
    if (param_3 != 2) {
      return;
    }
    func_0x00010c217160(param_1,param_2,1,1);
    uVar5 = 0;
    uVar6 = 0x3ff0000000000000;
  }
  else {
    if (param_3 - 5U < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bea4450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__setHandsFreeEnabledTooltipVisib_112586ab8,0,0);
      return;
    }
    if (param_3 != 3) {
      if (param_3 != 4) {
        return;
      }
      func_0x00010c217160(param_1,param_2,0,1);
      uVar5 = 0;
      uVar6 = 0;
      uVar4 = 1;
      goto code_r0x00010c216ec0;
    }
    func_0x00010c217160(param_1,param_2,0,1);
LAB_10616e0b8:
    uVar5 = 0x3ff0000000000000;
    uVar6 = 0;
  }
  uVar4 = 1;
code_r0x00010c216ec0:
                    /* WARNING: Could not recover jumptable at 0x00010c216ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar5,uVar6,param_1,PTR_s_setToolTipVisibilityWithStartRec_1126635d8,uVar4);
  return;
}



/* Entry: 10616e0d8; end: 10616e50b; -[SCFeatureHandsFreeTooltip layoutTooltips] */

void FUN_10616e0d8(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined1 uStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  undefined1 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  double dStack_220;
  undefined8 uStack_218;
  undefined1 auStack_180 [48];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [128];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_5 + 0x30) == '\x01') {
    lVar11 = param_5;
    func_0x00010c273ee0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be94740(0x4024000000000000,0x4024000000000000,param_5);
    _objc_release(lVar11);
    lVar11 = param_5;
    func_0x00010c273ec0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be94740(0x4024000000000000,0x4024000000000000,param_5);
    _objc_release(lVar11);
    lVar11 = param_5;
    func_0x00010c273e40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be94740(0x4010000000000000,0x4020000000000000,param_5);
    param_1 = *(double *)PTR__CGPointZero_110347540;
    param_2 = *(double *)(PTR__CGPointZero_110347540 + 8);
    func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x28));
    func_0x00010c1739e0(param_1,lVar11);
    func_0x00010bf20c00(lVar11);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + 0x28));
    _objc_release(lVar11);
  }
  lVar11 = param_5 + 8;
  _objc_loadWeakRetained(lVar11);
  func_0x00010bf2b2c0();
  _objc_release(lVar11);
  dVar13 = param_1;
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  lVar11 = param_5;
  func_0x00010c273ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  dVar14 = -11.5;
  if (lVar11 != 0) {
    dVar14 = -40.0;
  }
  dVar14 = dVar13 + param_1 * -0.75 * 0.5 + dVar14;
  lVar11 = param_5;
  func_0x00010c273ec0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
    uVar15 = 0x3ff0000000000000;
    dVar13 = dVar14;
  }
  else {
    lVar1 = param_5;
    func_0x00010c273ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar11);
    uVar15 = 0x3fd3333333333333;
    param_3 = 1.0;
    dVar13 = dVar14 + 10.0;
    if (lVar1 != 0) {
      uVar15 = 0x3ff0000000000000;
      dVar13 = dVar14;
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_5;
  func_0x00010c273ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar11 != 0) {
    lVar11 = param_5;
    func_0x00010c273ee0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(lVar11);
  }
  lVar11 = param_5;
  func_0x00010c273ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar11 != 0) {
    lVar11 = param_5;
    func_0x00010c273ec0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(lVar11);
  }
  lVar11 = param_5;
  func_0x00010c273e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar11 != 0) {
    func_0x00010c273e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(param_5);
  }
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(puVar2);
  iVar8 = (int)&uStack_150;
  iVar9 = (int)auStack_108;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar11 = *plStack_140;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_140 != lVar11) {
          _objc_enumerationMutation(puVar2);
        }
        uVar10 = *(undefined8 *)(lStack_148 + (long)puVar12 * 8);
        uVar4 = uVar10;
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        param_2 = param_3 * 0.5;
        func_0x00010bf20c00(uVar10);
        func_0x00010c17a6a0(param_2,dVar13 - param_4 * 0.5,uVar10);
        _objc_release(uVar4);
        _CGAffineTransformMakeScale(auStack_180,uVar15,uVar15);
        func_0x00010c219960(uVar10);
        puVar12 = puVar12 + 1;
      } while (puVar3 != puVar12);
      iVar8 = (int)&uStack_150;
      iVar9 = (int)auStack_108;
      puVar3 = puVar2;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = puVar2;
  dStack_220 = param_2;
  uStack_218 = uVar15;
  func_0x00010c273e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((puVar3 != (undefined *)0x0) && (*(long *)(puVar2 + 0x10) != 0xb)) {
    lVar11 = *(long *)(puVar2 + 0x38);
    func_0x00010bef0a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar11 == 0) {
      puStack_238 = &uStack_240;
      uStack_240 = 0;
      uStack_230 = 0x2020000000;
      uStack_228 = 0;
      puVar3 = puVar2 + 0x20;
      _objc_loadWeakRetained(puVar3);
      puVar5 = puVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf4fce0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_260 = 0xc2000000;
      uStack_258 = 0x10616e8bc;
      puStack_250 = &UNK_110847658;
      puStack_248 = &uStack_240;
      func_0x00010c0be6c0();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
      puVar3 = puVar2 + 0x20;
      _objc_loadWeakRetained();
      puVar5 = puVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf4fda0();
      _objc_release(puVar5);
      _objc_release(puVar3);
      if ((*(char *)(puStack_238 + 3) != '\x01') || (puVar6 == (undefined *)0x1)) {
        puStack_280 = &uStack_288;
        uStack_288 = 0;
        uStack_278 = 0x2020000000;
        uStack_270 = 0;
        puVar3 = puVar2 + 0x20;
        _objc_loadWeakRetained(puVar3);
        puVar5 = puVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bfd3480();
        _objc_retainAutoreleasedReturnValue();
        puStack_2b0 = puVar12;
        uStack_2a8 = 0xc2000000;
        uStack_2a0 = 0x10616e8d8;
        puStack_298 = &UNK_110847658;
        puStack_290 = &uStack_288;
        func_0x00010c0be6c0();
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar3);
        if ((*(byte *)(puStack_280 + 3) & 1) == 0) {
          if (*(long *)(puVar2 + 0x18) != 0) {
            _dispatch_block_cancel();
            uVar15 = *(undefined8 *)(puVar2 + 0x18);
            *(undefined8 *)(puVar2 + 0x18) = 0;
            _objc_release(uVar15);
          }
          puVar3 = puVar2;
          func_0x00010c273e40();
          _objc_retainAutoreleasedReturnValue();
          puStack_2d8 = puVar12;
          uStack_2d0 = 0xc2000000;
          pcStack_2c8 = FUN_10616e8f0;
          puStack_2c0 = &UNK_110842e18;
          _objc_retain();
          uVar15 = 0;
          puStack_2b8 = puVar3;
          func_0x0001008553e8(0,&puStack_2d8);
          if (iVar8 != 0) {
            func_0x00010c1a7f60(puVar3);
          }
          puStack_308 = puVar12;
          uStack_300 = 0xc2000000;
          uStack_2f8 = 0x10616e9dc;
          puStack_2f0 = &UNK_110845ce0;
          _objc_retain(puVar3);
          uStack_2e0 = (undefined1)iVar8;
          ppuVar7 = &puStack_308;
          puStack_2e8 = puVar3;
          _objc_retainBlock();
          if (iVar9 == 0) {
            (*(code *)ppuVar7[2])(ppuVar7);
          }
          else {
            func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
          }
          if (iVar8 != 0) {
            uVar4 = uVar15;
            _objc_retainBlock();
            uVar10 = *(undefined8 *)(puVar2 + 0x18);
            *(undefined8 *)(puVar2 + 0x18) = uVar4;
            _objc_release(uVar10);
            func_0x000100078e94();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f7fe0(0x4000000000000000);
            _objc_release(uVar10);
          }
          _objc_release(ppuVar7);
          _objc_release(puStack_2e8);
          _objc_release(uVar15);
          _objc_release(puStack_2b8);
          _objc_release(puVar3);
        }
        __Block_object_dispose(&uStack_288,8);
      }
      __Block_object_dispose(&uStack_240,8);
    }
  }
  return;
}



/* Entry: 10616e50c; end: 10616e8b7; -[SCFeatureHandsFreeTooltip _setHandsFreeEnabledTooltipVisibility:animated:] */

void FUN_10616e50c(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  lVar2 = param_1;
  func_0x00010c273e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar2 != 0) && (*(long *)(param_1 + 0x10) != 0xb)) {
    lVar2 = *(long *)(param_1 + 0x38);
    func_0x00010bef0a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puStack_88 = &uStack_90;
      uStack_90 = 0;
      uStack_80 = 0x2020000000;
      uStack_78 = 0;
      lVar2 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf4fce0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      uStack_a8 = 0x10616e8bc;
      puStack_a0 = &UNK_110847658;
      puStack_98 = &uStack_90;
      func_0x00010c0be6c0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = param_1 + 0x20;
      _objc_loadWeakRetained();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf4fda0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if ((*(char *)(puStack_88 + 3) != '\x01') || (lVar4 == 1)) {
        puStack_d0 = &uStack_d8;
        uStack_d8 = 0;
        uStack_c8 = 0x2020000000;
        uStack_c0 = 0;
        lVar2 = param_1 + 0x20;
        _objc_loadWeakRetained(lVar2);
        lVar3 = lVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bfd3480();
        _objc_retainAutoreleasedReturnValue();
        puStack_100 = puVar1;
        uStack_f8 = 0xc2000000;
        uStack_f0 = 0x10616e8d8;
        puStack_e8 = &UNK_110847658;
        puStack_e0 = &uStack_d8;
        func_0x00010c0be6c0();
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        if ((*(byte *)(puStack_d0 + 3) & 1) == 0) {
          if (*(long *)(param_1 + 0x18) != 0) {
            _dispatch_block_cancel();
            uVar5 = *(undefined8 *)(param_1 + 0x18);
            *(undefined8 *)(param_1 + 0x18) = 0;
            _objc_release(uVar5);
          }
          lVar2 = param_1;
          func_0x00010c273e40();
          _objc_retainAutoreleasedReturnValue();
          puStack_128 = puVar1;
          uStack_120 = 0xc2000000;
          pcStack_118 = FUN_10616e8f0;
          puStack_110 = &UNK_110842e18;
          _objc_retain();
          uVar5 = 0;
          lStack_108 = lVar2;
          func_0x0001008553e8(0,&puStack_128);
          if (param_3 != 0) {
            func_0x00010c1a7f60(lVar2);
          }
          puStack_158 = puVar1;
          uStack_150 = 0xc2000000;
          uStack_148 = 0x10616e9dc;
          puStack_140 = &UNK_110845ce0;
          _objc_retain(lVar2);
          uStack_130 = (undefined1)param_3;
          ppuVar6 = &puStack_158;
          lStack_138 = lVar2;
          _objc_retainBlock();
          if (param_4 == 0) {
            (*(code *)ppuVar6[2])(ppuVar6);
          }
          else {
            func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
          }
          if (param_3 != 0) {
            uVar7 = uVar5;
            _objc_retainBlock();
            uVar8 = *(undefined8 *)(param_1 + 0x18);
            *(undefined8 *)(param_1 + 0x18) = uVar7;
            _objc_release(uVar8);
            func_0x000100078e94();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f7fe0(0x4000000000000000);
            _objc_release(uVar8);
          }
          _objc_release(ppuVar6);
          _objc_release(lStack_138);
          _objc_release(uVar5);
          _objc_release(lStack_108);
          _objc_release(lVar2);
        }
        __Block_object_dispose(&uStack_d8,8);
      }
      __Block_object_dispose(&uStack_90,8);
    }
  }
  return;
}



/* Entry: 10616e8b8; end: 10616e8ef;  */

void FUN_10616e8b8(void)

{
  return;
}



/* Entry: 10616e8f0; end: 10616e9bb;  */

void FUN_10616e8f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10616e9bc;
  puStack_50 = &UNK_110842e18;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x10616e9c8;
  puStack_78 = &UNK_110841f20;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar4;
  _objc_retain(uVar3);
  uStack_70 = uVar3;
  func_0x00010bf03420(0x3fc999999999999a,puVar2,param_2,&puStack_68,&puStack_90);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  return;
}



/* Entry: 10616e9bc; end: 10616e9f7;  */

void FUN_10616e9bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10616e9f8; end: 10616ea0b; -[SCFeatureHandsFreeTooltip _tooltipLabelWithText:] */

void FUN_10616e9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010becd2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x402a000000000000,0x4024000000000000,0x4024000000000000,param_1,
             PTR_s__tooltipLabelWithText_isBold_fon_112590e58,param_3,0);
  return;
}



/* Entry: 10616ea0c; end: 10616ea1b; -[SCFeatureHandsFreeTooltip _tooltipLabelWithText:isBold:] */

void FUN_10616ea0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becd2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x402a000000000000,0x4024000000000000,0x4024000000000000,param_1,
             PTR_s__tooltipLabelWithText_isBold_fon_112590e58);
  return;
}



/* Entry: 10616ea1c; end: 10616eaeb; -[SCFeatureHandsFreeTooltip _tooltipLabelWithText:isBold:fontSize:verticalPadding:horizontalPadding:] */

void FUN_10616ea1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_retain(param_6);
  _objc_alloc(puVar1);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c213040();
  func_0x00010c1bdb00(puVar1,param_5,0);
  func_0x00010c1cfce0(puVar1,param_5,0);
  func_0x00010c1677c0(0,puVar1);
  func_0x00010bee2660(param_1,param_2,param_3,param_4,param_5,puVar1,param_6,param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10616eaec; end: 10616eaff; -[SCFeatureHandsFreeTooltip _updateTooltipLabel:withText:] */

void FUN_10616eaec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee2670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x402a000000000000,0x4024000000000000,0x4024000000000000,param_1,
             PTR_s__updateTooltipLabel_withText_isB_112596340,param_3,param_4,0);
  return;
}



/* Entry: 10616eb00; end: 10616eb0f; -[SCFeatureHandsFreeTooltip _updateTooltipLabel:withText:isBold:] */

void FUN_10616eb00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee2670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x402a000000000000,0x4024000000000000,0x4024000000000000,param_1,
             PTR_s__updateTooltipLabel_withText_isB_112596340);
  return;
}



/* Entry: 10616eb10; end: 10616ed7b; -[SCFeatureHandsFreeTooltip _updateTooltipLabel:withText:isBold:fontSize:verticalPadding:horizontalPadding:] */

void FUN_10616eb10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,ulong param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_7);
  func_0x00010bf71fe0(puVar1,param_5,3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  if ((param_8 & 1) == 0) {
    func_0x00010bf6d680(param_1,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf1ecc0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1d0640(puVar1,param_5,puVar2,*(undefined8 *)PTR__NSFontAttributeName_1103457f0);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_5,puVar2,
                      *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  _objc_alloc_init(PTR__OBJC_CLASS___NSShadow_1126b6158);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fd999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740(puVar2,param_5,puVar3);
  _objc_release(puVar3);
  func_0x00010c1fe720(0x4020000000000000,puVar2);
  func_0x00010c1fe7a0(0,0x3ff0000000000000,puVar2);
  func_0x00010c1d0640(puVar1,param_5,puVar2,*(undefined8 *)PTR__NSShadowAttributeName_110345828);
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  func_0x00010c04e840();
  _objc_release(param_7);
  puVar4 = param_6;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  if (puVar3 == puVar4) {
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  else {
    if (puVar4 == (undefined *)0x0) {
      _objc_release();
    }
    else {
      puVar5 = puVar3;
      func_0x00010c071ae0(puVar3,param_5,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar4);
      if (((ulong)puVar5 & 1) != 0) goto LAB_10616ed40;
    }
    func_0x00010c16b720(param_6,param_5,puVar3);
    func_0x00010be94740(param_2,param_3,param_4,param_5,param_6);
  }
LAB_10616ed40:
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10616ed7c; end: 10616ee03; -[SCFeatureHandsFreeTooltip _resolvedTooltipHostBounds] */

undefined8 FUN_10616ed7c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
  }
  else {
    puVar1 = (undefined *)(param_2 + 8);
    _objc_loadWeakRetained(puVar1);
    func_0x00010bfd35e0();
  }
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10616ee04; end: 10616ee43; -[SCFeatureHandsFreeTooltip _maximumTextWidthForHostBounds:] */

double FUN_10616ee04(double param_1)

{
  _CGRectGetWidth();
  return param_1 + -40.0;
}



/* Entry: 10616ee44; end: 10616eedb; -[SCFeatureHandsFreeTooltip _resizeTooltipLabel:verticalPadding:horizontalPadding:] */

void FUN_10616ee44(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  double dVar1;
  double dVar2;
  
  if (param_5 != 0) {
    dVar1 = param_1;
    _objc_retain(param_5);
    func_0x00010be94fa0(param_3);
    func_0x00010be5dea0(param_3);
    dVar2 = 1.79769313486232e+308;
    func_0x00010c23d5a0(param_5);
    func_0x00010c19f0e0(0,0,(double)(float)(int)dVar1 + param_2 * 2.0,
                        (double)(float)(int)dVar2 + param_1 * 2.0,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_5);
    return;
  }
  return;
}



/* Entry: 10616eedc; end: 10616f03f; -[SCFeatureHandsFreeTooltip _createTooltipHandsFreeEnabledNonIntrusive] */

void FUN_10616eedc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar1 = param_1;
  func_0x00010b0aec6c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010becd2c0(0x402a000000000000,0x4010000000000000,0x4020000000000000,param_1,param_2,lVar1
                      ,0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar2;
  _objc_release(uVar6);
  _objc_release(lVar1);
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x28));
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c013de0(puVar3);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf414e0(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c08c0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(puVar4);
  func_0x00010bf20c00(puVar3);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x28));
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + 0x28),param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010befbb60(puVar3,param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10616f040; end: 10616f047; -[SCFeatureHandsFreeTooltip videoCaptureConfiguration] */

undefined8 FUN_10616f040(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10616f048; end: 10616f077; -[SCFeatureHandsFreeTooltip setTooltipLabelStartRecording:] */

void FUN_10616f048(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10616f078; end: 10616f0a7; -[SCFeatureHandsFreeTooltip setTooltipLabelHoverOverLock:] */

void FUN_10616f078(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10616f0a8; end: 10616f0d7; -[SCFeatureHandsFreeTooltip setTooltipHandsFreeEnabled:] */

void FUN_10616f0a8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10616f0d8; end: 10616f0df; -[SCFeatureHandsFreeTooltip tooltipIsInHoverOverLockState] */

undefined1 FUN_10616f0d8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x31);
}



/* Entry: 10616f0e0; end: 10616f14f; -[SCFeatureHandsFreeTooltip .cxx_destruct] */

void FUN_10616f0e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10616f150; end: 10616f27f; -[SCFeatureHandsFreeViewImpl initWithContainerView:featureLayout:userSession:blizzardLogger:featureSettingsService:simpleFeatureGatingConfig:verticalToolbarConfiguration:handsFreeRecordingStateSubject:scopedCameraType:cameraModeActivationController:] */

undefined8
FUN_10616f150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  
  _objc_retain(param_12);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_8;
  func_0x00010c142ea0();
  func_0x00010c002860(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,(char)uVar1);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10616f280; end: 10616f617; -[SCFeatureHandsFreeViewImpl initWithContainerView:featureLayout:userSession:blizzardLogger:featureSettingsService:simpleFeatureGatingConfig:verticalToolbarConfiguration:handsFreeRecordingStateSubject:scopedCameraType:cameraModeActivationController:usesRuntimeViewfinderGeometry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10616f280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             char param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
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
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126efeb8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740bac,puVar1);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740bb0,param_3);
    lVar5 = (long)_DAT_112740bb4;
    _objc_storeWeak((long)puVar1 + lVar5,param_4);
    lVar6 = (long)_DAT_112740bb8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112740bbc;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112740bc0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112740bc4,param_9);
    lVar6 = (long)_DAT_112740bc8;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c8608;
    _objc_alloc();
    func_0x00010c019ac0();
    lVar6 = (long)_DAT_112740bcc;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar2);
    puVar4 = puVar1;
    func_0x00010bfe3ac0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar4);
    puVar4 = puVar1;
    func_0x00010c09fbe0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(puVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c273ee0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c273ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c273e40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar1);
    _objc_release(uVar2);
    lVar5 = (long)puVar1 + lVar5;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bfd3500();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf2dfc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ca20(lVar6);
    _objc_release(puVar4);
    _objc_release(lVar6);
    _objc_release(lVar5);
    lVar5 = (long)_DAT_112740bd0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740bd4) = param_11;
    *(char *)((long)puVar1 + (long)_DAT_112740bd8) = param_13;
    if (param_13 != '\0') {
      func_0x00010c16d4a0(puVar1);
    }
  }
  _objc_release(param_12);
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



/* Entry: 10616f618; end: 10616f793; -[SCFeatureHandsFreeViewImpl layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616f618(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126efeb8;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf2b2c0(param_5);
  dStack_78 = param_1;
  uVar4 = param_2;
  uVar5 = param_3;
  uVar6 = param_4;
  func_0x00010bf20c00(param_5);
  if ((*(byte *)(param_5 + _DAT_112740bd8) & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar1);
  }
  dVar2 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  _CGRectGetWidth(dStack_78,uVar4,uVar5,uVar6);
  dVar3 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  func_0x00010c19f0e0(0,dVar3,(dStack_78 - dVar2) * 0.5 + -30.0,param_1,
                      *(undefined8 *)(param_5 + _DAT_112740bdc));
  func_0x00010c08d1a0(*(undefined8 *)(param_5 + _DAT_112740bcc));
  func_0x00010be9b7c0(param_5);
  return;
}



/* Entry: 10616f794; end: 10616f80b; -[SCFeatureHandsFreeViewImpl shouldActivateHandsFree] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10616f794(double param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(long *)(param_2 + (long)_DAT_112740be0) - 1U < 3) {
    func_0x00010bfc1920();
    uVar2 = param_2;
    func_0x00010c07a640();
    if ((int)uVar2 != 0) {
      lVar1 = *(long *)(param_2 + (long)_DAT_112740be4);
      func_0x00010bf31440();
      uVar2 = 1;
      if (lVar1 != 1) {
        func_0x00010bfc19a0(param_2);
        uVar2 = (ulong)(10.0 < param_1);
      }
    }
    return uVar2;
  }
  return 0;
}



/* Entry: 10616f80c; end: 10616f8a3; -[SCFeatureHandsFreeViewImpl pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10616f80c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_3 + (long)_DAT_112740be0) == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bfe3ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c074c20();
    if (((uVar2 & 1) == 0) &&
       (uVar2 = param_3, func_0x00010c07a640(param_1,param_2), (uVar2 & 1) != 0)) {
      param_3 = 1;
    }
    else {
      func_0x00010c07a600(param_1,param_2,param_3);
    }
    _objc_release(uVar1);
  }
  return param_3;
}



/* Entry: 10616f8a4; end: 10616f8fb; -[SCFeatureHandsFreeViewImpl isPointInHitBox:] */

undefined8 FUN_10616f8a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfe3ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb68e0();
  _CGRectContainsPoint();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10616f8fc; end: 10616f927; -[SCFeatureHandsFreeViewImpl isPointInCaptureButton:] */

void FUN_10616f8fc(void)

{
  func_0x00010bf2b2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 10616f928; end: 10616f9ef; -[SCFeatureHandsFreeViewImpl isPointInCancelButton:] */

undefined8 FUN_10616f928(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  func_0x00010bf2dfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51200(param_1,param_2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf2dfc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01b40();
  if (param_1 == 0.0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bf2dfc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf20c00();
    _CGRectContainsPoint();
    _objc_release(param_3);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10616f9f0; end: 10616f9f7; -[SCFeatureHandsFreeViewImpl spacingBetweenCameraAndLockIcon] */

undefined8 FUN_10616f9f0(void)

{
  return 0x4034000000000000;
}



/* Entry: 10616f9f8; end: 10616fa33; -[SCFeatureHandsFreeViewImpl gestureHorizontalPanDistance] */

double FUN_10616f9f8(double param_1,undefined8 param_2)

{
  double dVar1;
  
  func_0x00010bfc1920();
  dVar1 = param_1;
  func_0x00010bfc1c40(param_2);
  return -(param_1 - dVar1);
}



/* Entry: 10616fa34; end: 10616fa9b; -[SCFeatureHandsFreeViewImpl lockIconDefaultPosition] */

undefined1  [16]
FUN_10616fa34(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  func_0x00010bf2b2c0();
  dVar1 = param_1;
  _CGRectGetMinX();
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = dVar1 + -20.0 + -20.0;
  return auVar2;
}



/* Entry: 10616fa9c; end: 10616fb8b; -[SCFeatureHandsFreeViewImpl lockIconView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616fa9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112740be8;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x4054000000000000,0x4044000000000000);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    lVar3 = param_1;
    func_0x00010c09fb00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar2,param_2,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    lVar3 = param_1;
    func_0x00010c09fba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar2,param_2,lVar3);
    _objc_release(lVar3);
    func_0x00010c09fbc0(param_1);
    func_0x00010c17a6a0(*(undefined8 *)(param_1 + lVar4));
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10616fb8c; end: 10616fdbf; -[SCFeatureHandsFreeViewImpl lockBackdropGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616fb8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = (long)_DAT_112740bec;
  lVar6 = *(long *)(param_1 + lVar8);
  if (lVar6 == 0) {
    puVar1 = PTR_PTR_1126b1198;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x4054000000000000,0x4044000000000000);
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar1;
    _objc_release(uVar5);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_68 = puVar2;
    func_0x00010bf41680(0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60(*(undefined8 *)(param_1 + lVar8),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bfcd9c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bff00();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bfcd9c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4034000000000000);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bfcd9c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167d20(0x3fd0000000000000,0x3fe0000000000000);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bfcd9c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c209760(0,0);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bfcd9c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196020(0x3ff0000000000000,0);
    _objc_release(uVar5);
    func_0x00010c17a6a0(0x4044000000000000,0x4034000000000000,*(undefined8 *)(param_1 + lVar8));
    lVar6 = *(long *)(param_1 + lVar8);
  }
  lVar8 = lVar6;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar7 = (long)_DAT_112740bdc;
    lVar6 = *(long *)(lVar8 + lVar7);
    if (lVar6 == 0) {
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar5 = *(undefined8 *)(lVar8 + lVar7);
      *(undefined **)(lVar8 + lVar7) = puVar1;
      _objc_release(uVar5);
      func_0x00010c160fc0(*(undefined8 *)(lVar8 + lVar7),param_2,
                          &PTR____CFConstantStringClassReference_110e42f98);
      func_0x00010c1af000(*(undefined8 *)(lVar8 + lVar7),param_2,1);
      lVar6 = *(long *)(lVar8 + lVar7);
    }
    _objc_retain(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 10616fdc0; end: 10616fe4f; -[SCFeatureHandsFreeViewImpl hitboxView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616fdc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112740bdc;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4),param_2,
                        &PTR____CFConstantStringClassReference_110e42f98);
    func_0x00010c1af000(*(undefined8 *)(param_1 + lVar4),param_2,1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10616fe50; end: 106170107; -[SCFeatureHandsFreeViewImpl lockIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10616fe50(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar1 = *(long *)(param_1 + _DAT_112740be4);
  func_0x00010bf31440();
  if (lVar1 == 2) {
    lVar1 = 0;
    goto LAB_1061700ec;
  }
  lVar8 = (long)_DAT_112740bf0;
  lVar1 = *(long *)(param_1 + lVar8);
  if (lVar1 == 0) {
    lVar1 = param_1 + _DAT_112740bc4;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfe5a40();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    if (lVar3 == 2) {
      _objc_alloc();
      puVar6 = PTR_PTR_1126b0c40;
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 0x1aa;
LAB_106170030:
      func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar6,param_2,uVar7,puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60(puVar4,param_2,puVar6);
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      *(undefined **)(param_1 + lVar8) = puVar4;
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      puVar4 = PTR_PTR_1126b0c40;
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar4,param_2,0x1aa,puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a88e0(*(undefined8 *)(param_1 + lVar8),param_2,puVar4);
LAB_1061700bc:
      _objc_release(puVar4);
      _objc_release(puVar6);
    }
    else {
      if (lVar3 == 1) {
        _objc_alloc();
        puVar6 = PTR_PTR_1126b0c40;
        puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = 0x1a9;
        goto LAB_106170030;
      }
      if (lVar3 == 0) {
        _objc_alloc();
        puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                            &PTR____CFConstantStringClassReference_110e42fb8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01bf60(puVar4,param_2,puVar6);
        uVar7 = *(undefined8 *)(param_1 + lVar8);
        *(undefined **)(param_1 + lVar8) = puVar4;
        _objc_release(uVar7);
        _objc_release(puVar6);
        puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                            &PTR____CFConstantStringClassReference_110e42fb8);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar6;
        func_0x00010c14d100(puVar6,param_2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a88e0(*(undefined8 *)(param_1 + lVar8),param_2,puVar5);
        _objc_release(puVar5);
        goto LAB_1061700bc;
      }
    }
    func_0x00010c17a6a0(0x4044000000000000,0x4034000000000000,*(undefined8 *)(param_1 + lVar8));
    lVar1 = *(long *)(param_1 + lVar8);
  }
  _objc_retain(lVar1);
LAB_1061700ec:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106170108; end: 10617023f; -[SCFeatureHandsFreeViewImpl cancelButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106170108(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + _DAT_112740be4);
  func_0x00010bf31440();
  if (lVar1 == 2) {
    lVar1 = 0;
  }
  else {
    lVar4 = (long)_DAT_112740bf4;
    lVar1 = *(long *)(param_1 + lVar4);
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126b6138;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar2;
      _objc_release(uVar3);
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                          &PTR____CFConstantStringClassReference_110db68f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4),param_2,puVar2);
      _objc_release(puVar2);
      func_0x00010c21d680(*(undefined8 *)(param_1 + lVar4),param_2,1);
      func_0x00010c1aac60(*(undefined8 *)(param_1 + lVar4),param_2,4);
      func_0x00010c1d4b80(*(undefined8 *)(param_1 + lVar4),param_2,1);
      func_0x00010c1c3c80(0x3ff1f06f60000000,*(undefined8 *)(param_1 + lVar4));
      func_0x00010befbd40(*(undefined8 *)(param_1 + lVar4),param_2,param_1,
                          PTR_s__cancelTapped_11252f720);
      func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
      func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4),param_2,
                          &PTR____CFConstantStringClassReference_110e42fd8);
      func_0x00010c1af000(*(undefined8 *)(param_1 + lVar4),param_2,1);
      lVar1 = *(long *)(param_1 + lVar4);
    }
    _objc_retain(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106170240; end: 1061708f3; -[SCFeatureHandsFreeViewImpl setState:] */

/* WARNING: Possible PIC construction at 0x0001061703f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106170754: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001061703f8) */
/* WARNING: Removing unreachable block (ram,0x000106170758) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106170240(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_90 [48];
  
  uVar4 = *(ulong *)(param_3 + _DAT_112740be0);
  if (uVar4 == param_5) {
    return;
  }
  if ((long)param_5 < 4) {
    if (param_5 == 1) {
      if (uVar4 != 0) {
        return;
      }
    }
    else if (param_5 == 2) {
      if ((uVar4 & 0xfffffffffffffffd) != 1) {
        return;
      }
    }
    else if ((param_5 == 3) && (uVar4 != 2)) {
      return;
    }
  }
  else if ((long)param_5 < 6) {
    if (param_5 == 4) {
      if (1 < uVar4 - 1) {
        return;
      }
    }
    else if (param_5 == 5) {
      uVar4 = uVar4 & 0xfffffffffffffffd;
LAB_1061702fc:
      if (uVar4 != 4) {
        return;
      }
    }
  }
  else if (param_5 == 6) {
    if (uVar4 != 5) {
      return;
    }
  }
  else if (param_5 == 7) {
    uVar4 = uVar4 & 0xfffffffffffffffe;
    goto LAB_1061702fc;
  }
  *(ulong *)(param_3 + _DAT_112740be0) = param_5;
  lVar6 = (long)_DAT_112740bb0;
  lVar1 = param_3 + lVar6;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd3620();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_3 + _DAT_112740bc8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
  _objc_release(puVar3);
  func_0x00010c08d1c0(*(undefined8 *)(param_3 + _DAT_112740bcc));
  if ((long)param_5 < 3) {
    if (param_5 != 0) {
      if (param_5 == 1) {
        func_0x00010c1cbe20(param_3);
        func_0x00010c08cdc0(param_3);
        func_0x00010c09fbc0(param_3);
        lVar1 = param_3;
        func_0x00010c09fbe0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c17a6a0(param_1,param_2);
        _objc_release(lVar1);
        func_0x00010bea5720(param_3);
        _CGAffineTransformMakeTranslation(auStack_90,0x4039000000000000,0);
        lVar1 = param_3;
        func_0x00010c09fbe0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c219960();
        _objc_release(lVar1);
        func_0x00010bf03440(0x3fc999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20);
        func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
        *(undefined1 *)(param_3 + _DAT_112740bf8) = 0;
      }
      else {
        if (param_5 != 2) {
          return;
        }
        func_0x00010bea5720(param_3);
      }
code_r0x00010be9b7c0:
                    /* WARNING: Could not recover jumptable at 0x00010be9b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__scheduleSyncHoverGhost_112584798);
      return;
    }
    lVar1 = param_3;
    func_0x00010c09fbe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    func_0x00010c1677c0(0);
    _objc_release(lVar1);
    func_0x00010c09fbc0(param_3);
    lVar1 = param_3;
    func_0x00010c09fbe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(uVar5,param_2);
    _objc_release(lVar1);
    func_0x00010bea5720(param_3);
    lVar1 = param_3;
    func_0x00010c09fba0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a8860();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bfe3ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf2dfc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(lVar1);
    lVar6 = param_3 + lVar6;
    _objc_loadWeakRetained(lVar6);
    lVar1 = lVar6;
    func_0x00010c131ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar6);
    func_0x00010be8c440(param_3);
    *(undefined1 *)(param_3 + _DAT_112740bf8) = 0;
  }
  else {
    if (param_5 == 3) {
      func_0x00010bea5720(param_3);
      goto code_r0x00010be9b7c0;
    }
    if (param_5 == 4) {
      lVar1 = param_3;
      func_0x00010bfe3ac0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar1);
      func_0x00010bf03440(0x3fc999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20);
      lVar6 = param_3 + lVar6;
      _objc_loadWeakRetained(lVar6);
      lVar1 = lVar6;
      func_0x00010c131ac0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(lVar6);
      lVar1 = param_3;
      func_0x00010c09fba0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219960();
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010c09fb00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219960();
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010c09fba0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a8860();
      _objc_release(lVar1);
      func_0x00010be16e60(param_3);
      func_0x00010be35940(param_3);
    }
    else if (param_5 == 7) {
      param_3 = param_3 + lVar6;
      _objc_loadWeakRetained(param_3);
      lVar1 = param_3;
      func_0x00010c131ac0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar6);
      _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_3);
      return;
    }
  }
  return;
}



/* Entry: 1061708f4; end: 106170987;  */

void FUN_1061708f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09fbe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  return;
}



/* Entry: 106170988; end: 10617098f;  */

void FUN_106170988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__scheduleSyncHoverGhost_112584798);
  return;
}



/* Entry: 106170990; end: 106170a6b;  */

void FUN_106170990(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c09fbe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  func_0x00010c1677c0(0);
  _objc_release(uVar1);
  func_0x00010c09fbc0(*(undefined8 *)(param_3 + 0x20));
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c09fbe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(uVar2,param_2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf2dfc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf2dfc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106170a6c; end: 106170a97;  */

void FUN_106170a6c(long param_1)

{
  func_0x00010be16e60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be35950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__hideLockHoverCircleAnimated__11256aff0,0);
  return;
}



/* Entry: 106170a98; end: 106170af3; -[SCFeatureHandsFreeViewImpl _ensureHapticsAllowedDuringRecording] */

void FUN_106170a98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___AVAudioSession_1126b6de8;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf01100();
  if (((ulong)puVar2 & 1) == 0) {
    uStack_28 = 0;
    func_0x00010c1670a0(puVar1,param_2,1,&uStack_28);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 106170af4; end: 106170c6b; -[SCFeatureHandsFreeViewImpl setGestureCurrentPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106170af4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = param_3;
  func_0x00010be42c20();
  lVar4 = (long)_DAT_112740bfc;
  if ((int)uVar2 != 0) {
    puVar1 = (undefined8 *)(param_3 + lVar4);
    uVar2 = param_3;
    func_0x00010be42c20(*puVar1,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      lVar3 = (long)_DAT_112740c00;
      *(undefined8 *)(param_3 + lVar3) = param_1;
      ((undefined8 *)(param_3 + lVar3))[1] = param_2;
    }
  }
  puVar1 = (undefined8 *)(param_3 + lVar4);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  uVar2 = param_3;
  func_0x00010c252440();
  if (uVar2 == 4) {
    return;
  }
  func_0x00010be48f20(param_3);
  uVar2 = param_3;
  func_0x00010c22da80();
  if ((uint)uVar2 != 0) {
    lVar4 = param_3 + (long)_DAT_112740bb0;
    _objc_loadWeakRetained(lVar4);
    lVar3 = lVar4;
    func_0x00010bf2b240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27ab60();
    _objc_release(lVar3);
    _objc_release(lVar4);
  }
  lVar4 = (long)_DAT_112740bcc;
  func_0x00010c217160(*(undefined8 *)(param_3 + lVar4));
  func_0x00010c216ec0((double)((uint)uVar2 ^ 1),(double)(uVar2 & 0xffffffff),
                      *(undefined8 *)(param_3 + lVar4));
  func_0x00010bea5720(param_3);
  lVar4 = param_3 + (long)_DAT_112740bb0;
  _objc_loadWeakRetained(lVar4);
  lVar3 = lVar4;
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a54e0();
  _objc_release(lVar3);
  _objc_release(lVar4);
  *(char *)(param_3 + (long)_DAT_112740c04) = (char)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010be9b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__scheduleSyncHoverGhost_112584798);
  return;
}



/* Entry: 106170c6c; end: 106170cd3; -[SCFeatureHandsFreeViewImpl setVideoCaptureConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106170c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740be4);
  *(undefined8 *)(param_1 + _DAT_112740be4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c221260(*(undefined8 *)(param_1 + _DAT_112740bcc),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106170cd4; end: 106170d2b; -[SCFeatureHandsFreeViewImpl _isPointWithinInterestRange:] */

bool FUN_106170cd4(double param_1,double param_2,undefined8 param_3)

{
  bool bVar1;
  double dVar2;
  
  dVar2 = param_1;
  func_0x00010bf2b2c0();
  _CGRectGetMaxX();
  if (param_1 <= dVar2) {
    func_0x00010bf2b2c0(param_3);
    _CGRectGetMinY();
    bVar1 = dVar2 <= param_2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106170d2c; end: 106170d3b; -[SCFeatureHandsFreeViewImpl _setLockIconToSelectedState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106170d2c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112740c04) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be9b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scheduleSyncHoverGhost_112584798);
  return;
}


