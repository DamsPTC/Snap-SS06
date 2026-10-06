/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091bc614; end: 1091bc997; -[SCLensMediaAndPresetPickerControllerV2 innerSelectOptionAtIndexPath:cellToSelect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091bc614(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) goto LAB_1091bc938;
  puStack_58 = PTR_PTR_112700c50;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_innerSelectOptionAtIndexPath_cel_1125f6f78,param_3,param_4);
  lVar1 = param_3;
  func_0x00010c1554e0();
  if (lVar1 != 1) goto LAB_1091bc938;
  lVar1 = param_3;
  func_0x00010c0840e0();
  lVar2 = param_1;
  func_0x00010bfe8840();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c07ad60();
  _objc_release(lVar2);
  if ((int)lVar3 == 0) {
    lVar1 = param_1;
    func_0x00010c159cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bfe8840(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c159cc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2de60(lVar1);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    _objc_initWeak(auStack_68,param_1);
    lVar1 = param_1;
    func_0x00010bfe8840();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0b780();
    _objc_release(lVar1);
    if (lVar2 == 1) {
      lVar1 = param_1;
      func_0x00010bfe8840(param_1);
      _objc_retainAutoreleasedReturnValue();
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_1091bca70;
      puStack_c0 = &UNK_110adfbe8;
      puVar4 = auStack_b0;
      _objc_copyWeak(puVar4,auStack_68);
      _objc_retain(param_3);
      lVar2 = lVar1;
      lStack_b8 = param_3;
      func_0x00010bfc8560(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fb400(param_1);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = lStack_b8;
LAB_1091bc924:
      _objc_release(lVar1);
      goto LAB_1091bc92c;
    }
    if (lVar2 == 2) {
      lVar1 = param_1;
      func_0x00010bfe8840(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = auStack_e0;
      _objc_copyWeak(puVar4,auStack_68);
      _objc_retain(param_3);
      lVar2 = lVar1;
      func_0x00010bfcc100(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fb400(param_1);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_3;
      goto LAB_1091bc924;
    }
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112782cc8);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1091bc998;
    puStack_90 = &UNK_110a4ac90;
    _objc_copyWeak(auStack_80,auStack_68);
    uStack_78 = param_2;
    lStack_70 = lVar1;
    _objc_retain(param_4);
    lStack_88 = param_4;
    func_0x00010c162a00(uVar5);
    _objc_release(lStack_88);
    puVar4 = auStack_80;
LAB_1091bc92c:
    _objc_destroyWeak(puVar4);
  }
  _objc_destroyWeak(auStack_68);
LAB_1091bc938:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091bc998; end: 1091bca63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091bc998(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_1091bca64;
      puStack_40 = &UNK_110842e18;
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar2);
      uStack_38 = uVar2;
      func_0x000107c312cc("APPSTORE",&puStack_58);
      _objc_release(uStack_38);
    }
    else {
      func_0x00010c0a4000(*(undefined8 *)(lVar1 + _DAT_112782ccc));
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1091bca64; end: 1091bca6f;  */

void FUN_1091bca64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bec70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setLoadingIndicatorActive__11264d540,0);
  return;
}



/* Entry: 1091bca70; end: 1091bcb4b;  */

void FUN_1091bca70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be86d00(param_1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091bcb4c; end: 1091bcc0f;  */

void FUN_1091bcb4c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if ((param_2 == 0) || (param_5 != 0)) {
      func_0x00010be0e220(param_1);
    }
    else {
      func_0x00010be86cc0(param_1);
    }
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091bcc10; end: 1091bce0f; -[SCLensMediaAndPresetPickerControllerV2 _receivedImage:forItemAtIndexPath:loadingId:imageId:normalizedFaceRects:] */

void FUN_1091bcc10(ulong param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_1;
  func_0x00010c159cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    lVar3 = param_4;
    func_0x00010c1554e0();
    _objc_release(uVar1);
    if (lVar3 == 1) goto LAB_1091bcdb4;
  }
  else {
    _objc_release(uVar1);
  }
  func_0x00010c1fb400(param_1);
  if (param_3 == 0) {
    func_0x00010be358c0(param_1);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar4 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1091bce10;
    puStack_a0 = &UNK_110853740;
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_4);
    lStack_98 = param_4;
    _objc_retain(param_3);
    lStack_90 = param_3;
    _objc_retain(param_7);
    uStack_88 = param_7;
    _objc_retain(param_6);
    uStack_80 = param_6;
    uStack_70 = param_2;
    func_0x000107c27d8c(uVar4,&puStack_b8);
    _objc_release(uVar4);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(lStack_90);
    _objc_release(lStack_98);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
LAB_1091bcdb4:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091bce10; end: 1091bd06f;  */

void FUN_1091bce10(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  
  lVar1 = param_2 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf9e160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010be358c0(lVar1);
    }
    else {
      func_0x00010c23d0a0(*(undefined8 *)(param_2 + 0x28));
      func_0x00010c23d0a0(*(undefined8 *)(param_2 + 0x28));
      _CGAffineTransformMakeScale(&uStack_90,param_1);
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc0000000;
      pcStack_d0 = FUN_1091bd070;
      puStack_c8 = &UNK_110adfc48;
      uStack_b8 = uStack_88;
      uStack_c0 = uStack_90;
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      func_0x00010c0b8600(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bde8140();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c08fa60();
      if (lVar4 != 0) {
        lVar4 = lVar1;
        func_0x00010bf6b020(lVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c097160(lVar4);
        _objc_release(puVar5);
        _objc_release(lVar4);
        _objc_initWeak(auStack_e8,lVar1);
        lVar4 = lVar1;
        func_0x00010bf9e160(lVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_f8,auStack_e8);
        uStack_f0 = *(undefined8 *)(param_2 + 0x48);
        uVar7 = *(undefined8 *)(param_2 + 0x28);
        _objc_retain(uVar7);
        uVar6 = *(undefined8 *)(param_2 + 0x20);
        _objc_retain(uVar6);
        func_0x00010c1995e0(lVar4);
        _objc_release(lVar4);
        _objc_release(uVar6);
        _objc_release(uVar7);
        _objc_destroyWeak(auStack_f8);
        _objc_destroyWeak(auStack_e8);
      }
      _objc_release(lVar2);
      _objc_release(uVar3);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1091bd070; end: 1091bd0c7;  */

void FUN_1091bd070(long param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010bdc1080(param_2);
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uStack_28 = *(undefined8 *)(param_1 + 0x48);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  _CGRectApplyAffineTransform(&uStack_50);
  func_0x00010c2971a0(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091bd0c8; end: 1091bd19b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091bd0c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      lVar2 = lVar1;
      func_0x00010bf6b020(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _UIImageJPEGRepresentation(*(undefined8 *)(lVar1 + _DAT_112782ce8),uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0971a0(lVar2,param_2,lVar1,uVar3);
      _objc_release(uVar3);
      _objc_release(lVar2);
      func_0x00010be358c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    }
    else {
      func_0x00010c0a4000(*(undefined8 *)(lVar1 + _DAT_112782ccc),param_2,param_3,
                          *(undefined8 *)(param_1 + 0x38));
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091bd19c; end: 1091bd2db; -[SCLensMediaAndPresetPickerControllerV2 _receiveVideoURL:forItemAtIndexPath:loadingId:videoId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091bd19c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar6 = PTR_PTR_1126ba150;
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_retain(param_4);
  func_0x00010bf0b9e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112782cf0;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe1120();
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf12400();
  func_0x00010c22e440(puVar6,param_2,puVar1,uVar3,uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  if ((int)puVar6 == 0) {
    func_0x00010bea3ce0(param_1,param_2,param_3,param_4,param_6);
    _objc_release(param_4);
  }
  else {
    func_0x00010be358c0(param_1,param_2,param_4);
    _objc_release(param_4);
    func_0x00010c10ae00(PTR_PTR_1126d2ad8);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091bd2dc; end: 1091bd327; -[SCLensMediaAndPresetPickerControllerV2 _failToReceiveVideoForIndexPath:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091bd2dc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112782cec;
  _os_unfair_lock_lock(param_1 + lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112782d00);
  *(undefined8 *)(param_1 + _DAT_112782d00) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar2);
  return;
}



/* Entry: 1091bd328; end: 1091bd52b; -[SCLensMediaAndPresetPickerControllerV2 _presentVideoEditingForURL:forItemAtIndexPath:videoId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091bd328(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ddb70;
  _objc_alloc(PTR_PTR_1126ddb70);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112782ce0);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061320(puVar1);
  _objc_release(uVar2);
  lVar3 = param_1 + _DAT_112782ce4;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c2641c0();
  _objc_release(lVar3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112782cdc);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf22c40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + _DAT_112782cd8));
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091bd52c; end: 1091bd5e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091bd52c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 != 0) {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_112782ce0));
      func_0x00010c0dd640(param_1);
      func_0x00010bea3ce0(param_1);
    }
    lVar1 = param_1 + _DAT_112782ce4;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c13d800();
    _objc_release(lVar1);
    func_0x00010bf94c20(*(undefined8 *)(param_1 + _DAT_112782cd8));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091bd5e4; end: 1091bd943; -[SCLensMediaAndPresetPickerControllerV2 _setExternalVideoForURL:forItemAtIndexPath:videoId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091bd5e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  double adStack_e0 [6];
  undefined8 uStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar6 = (long)_DAT_112782cec;
  _os_unfair_lock_lock(param_1 + lVar6);
  lVar5 = (long)_DAT_112782d00;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = param_3;
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + lVar6);
  lVar5 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c097180();
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010bf9e160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 == 0) {
    func_0x00010be358c0(param_1);
    goto LAB_1091bd8d8;
  }
  puVar3 = *(undefined **)(param_1 + _DAT_112782ce0);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ddb78;
    _objc_alloc();
    dStack_a8 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_b0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_98 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_a0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_88 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    fVar8 = 0.0;
    func_0x00010c03dd00(0,0x3f800000);
    if (puVar3 != (undefined *)0x0) goto LAB_1091bd72c;
    fVar7 = 0.0;
  }
  else {
LAB_1091bd72c:
    func_0x00010c27a460(&uStack_b0,puVar3);
    dVar1 = dStack_a8;
    func_0x00010c27a460(adStack_e0,puVar3);
    fVar7 = (float)dVar1;
    fVar8 = (float)adStack_e0[0];
  }
  _atan2f(fVar7,fVar8);
  fVar8 = fVar7 + 6.2831855;
  if (0.0 <= fVar7) {
    fVar8 = fVar7;
  }
  lVar6 = (long)(fVar8 / 1.5707964);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  _objc_release(puVar4);
  uVar2 = param_3;
  func_0x00010c0f5800(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c0c4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf26560();
  _objc_release(lVar5);
  _objc_initWeak(&uStack_b0,param_1);
  func_0x00010bf9e160(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128200(puVar3);
  lVar5 = lVar6;
  func_0x00010c1280c0(puVar3);
  puVar4 = puVar3;
  func_0x00010c078420(puVar3);
  _objc_copyWeak(auStack_f0,&uStack_b0);
  uStack_e8 = param_2;
  _objc_retain(param_4);
  func_0x00010c1998e0(lVar6,lVar5,(float)((uint)puVar4 ^ 1),param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(&uStack_b0);
  _objc_release(uVar2);
  _objc_release(puVar3);
LAB_1091bd8d8:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1091bd944; end: 1091bda1f;  */

void FUN_1091bd944(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1091bda20;
  puStack_58 = &UNK_1108502a8;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  _objc_retain(param_2);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = param_2;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x000107c312cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 1091bda20; end: 1091bda9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091bda20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x00010c0a4000(*(undefined8 *)(lVar1 + _DAT_112782ccc),param_2,*(long *)(param_1 + 0x20),
                          *(undefined8 *)(param_1 + 0x38));
    }
    func_0x00010be358c0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    lVar2 = lVar1 + _DAT_112782ce4;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c13d800();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091bda9c; end: 1091bdb7b; -[SCLensMediaAndPresetPickerControllerV2 showNoImagesWarningIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091bda9c(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010bf9e160();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar3 != 0) && (lVar3 = *(long *)(param_1 + _DAT_112782cc8), _objc_release(), lVar3 == 0)) {
    lVar3 = param_1;
    func_0x00010bfe8840();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c120180();
    _objc_release(lVar3);
    if (lVar1 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110f2b8d8;
    }
    else {
      lVar3 = param_1;
      func_0x00010bfe8840();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010bfe72c0();
      _objc_release(lVar3);
      if (lVar1 != 0) {
        return;
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110f2b8f8;
    }
    func_0x00010bcbeaa8(ppuVar2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23acc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
    return;
  }
  return;
}



/* Entry: 1091bdb7c; end: 1091bdbd3; -[SCLensMediaAndPresetPickerControllerV2 hideNoImagesWarning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091bdb7c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112782cf8;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010bfe7100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091bdbd4; end: 1091bdc0f; -[SCLensMediaAndPresetPickerControllerV2 currentMediaTypes] */

undefined8 FUN_1091bdbd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfe8840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0c6c20();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1091bdc10; end: 1091bdce7; -[SCLensMediaAndPresetPickerControllerV2 showWarningWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091bdc10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bfe7100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
  lVar2 = (long)_DAT_112782cfc;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  func_0x00010c21c3e0(param_1);
  lVar2 = param_1;
  func_0x00010c2a2200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_3);
  _objc_release(lVar2);
  func_0x00010c2a2200(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091bdce8; end: 1091bde27; -[SCLensMediaAndPresetPickerControllerV2 setPhotoPermissionsPromptHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091bdce8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((param_3 & 1) == 0) {
    lVar4 = param_1;
    func_0x00010bfe7100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar4);
    lVar4 = (long)_DAT_112782cf8;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar1);
    func_0x00010c21c300(param_1);
    lVar4 = param_1;
    func_0x00010c0fb3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar4);
    func_0x00010c0fb3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar2);
    _objc_release(lVar4);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112782cfc);
    *(undefined8 *)(param_1 + _DAT_112782cfc) = 0;
    _objc_release(uVar1);
    func_0x00010bfe7100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091bde28; end: 1091bde63; -[SCLensMediaAndPresetPickerControllerV2 _didTapAllowButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091bde28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112782cd0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e99c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091bde64; end: 1091bdf33; -[SCLensMediaAndPresetPickerControllerV2 _hideLoadingForCellAtIndexPath:] */

void FUN_1091bde64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1091bdf34;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000107c312cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1091bdf34; end: 1091bdfd7;  */

void FUN_1091bdf34(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bfe7100();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126ddb80;
  _objc_opt_class(PTR_PTR_1126ddb80);
  uVar2 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  func_0x00010c1bec60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091bdfd8; end: 1091be17b; -[SCLensMediaAndPresetPickerControllerV2 _contentUriForImage:withAssetIdentifier:indexPath:] */

void FUN_1091bdfd8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar6 = param_1;
  func_0x00010c0c4120();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bf4dc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  if (lVar1 == 0) {
    func_0x000107c3129c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010c25ce00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c25ce20(lVar2,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar6);
    uVar4 = param_3;
    _UIImageJPEGRepresentation(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c14e020();
    if ((int)uVar5 == 0) {
      func_0x00010be358c0(param_1,param_2,param_5);
      _objc_release(uVar4);
      lVar6 = 0;
      goto LAB_1091be124;
    }
    lVar6 = param_4;
    func_0x00010c08fa60();
    if (lVar6 != 0) {
      func_0x00010c0c4120(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf26560();
      _objc_release(param_1);
    }
    _objc_release(uVar4);
  }
  _objc_retain(lVar1);
  lVar6 = lVar1;
LAB_1091be124:
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1091be17c; end: 1091be247; -[SCLensMediaAndPresetPickerControllerV2 lensSubPickerImageProvider:didUpdateWithImageCount:canProcessMore:] */

void FUN_1091be17c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf9e160();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar2 == (undefined *)0x2) {
      _objc_release(lVar1);
      goto LAB_1091be228;
    }
    puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    _objc_release(lVar1);
    if (puVar2 == (undefined *)0x1) goto LAB_1091be228;
  }
  puStack_48 = PTR_PTR_112700c50;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_lensSubPickerImageProvider_didUp_112603680,param_3,param_4,
                      param_5);
LAB_1091be228:
  _objc_release(param_3);
  return;
}



/* Entry: 1091be248; end: 1091be3bb; -[SCLensMediaAndPresetPickerControllerV2 videoCellDidTapEditButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091be248(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar5 = param_1;
  func_0x00010c299e80();
  if ((int)lVar5 != 0) {
    lVar5 = (long)_DAT_112782cec;
    _os_unfair_lock_lock(param_1 + lVar5);
    lVar6 = (long)_DAT_112782d00;
    if (*(long *)(param_1 + lVar6) != 0) {
      lVar1 = param_1;
      func_0x00010bfe7100();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfecfa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar2;
      func_0x00010c1554e0();
      if (lVar1 == 1) {
        lVar4 = param_3;
        func_0x00010bf5f2e0(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar1 = lVar2;
        func_0x00010c1554e0();
        if (lVar1 == 0) {
          lVar1 = param_1;
          func_0x00010c13cac0(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar2;
          func_0x00010c0840e0(lVar2);
          lVar3 = lVar1;
          func_0x00010c0dfd40(lVar1,param_2,lVar4);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c0fb940();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          _objc_release(lVar1);
        }
        else {
          lVar4 = 0;
        }
      }
      func_0x00010be7f480(param_1,param_2,*(undefined8 *)(param_1 + lVar6),lVar2,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
    _os_unfair_lock_unlock(param_1 + lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091be3bc; end: 1091be3bf; -[SCLensMediaAndPresetPickerControllerV2 mediaPickerDidUnselectIndexPath:] */

void FUN_1091be3bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6e870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_deselectOptionAtIndexPath__1125b93c0);
  return;
}



/* Entry: 1091be3c0; end: 1091be703; -[SCLensMediaAndPresetPickerControllerV2 previouslySelectedAssetIdentifiersMap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1091be3c0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
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
  puVar1 = param_1;
  func_0x00010c1598a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  _objc_release();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar2 = param_1;
    func_0x00010c1598a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar13 = *plStack_120;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar13) {
            _objc_enumerationMutation(puVar2);
          }
          lVar14 = *(long *)(lStack_128 + (long)puVar12 * 8);
          puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
          lVar5 = lVar14;
          func_0x00010c1554e0();
          lVar6 = lVar14;
          func_0x00010c0840e0();
          if (lVar5 == 1) {
            puVar15 = param_1;
            func_0x00010c0c4120();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar15;
            func_0x00010bfe7ee0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar9;
            func_0x00010c08fa60();
            if (puVar10 == (undefined *)0x0) {
              _objc_release(puVar9);
            }
            else {
              puVar10 = param_1;
              func_0x00010c0c4120();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar10;
              func_0x00010bfe7ee0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar10);
              _objc_release(puVar9);
              _objc_release(puVar15);
              if (puVar11 == (undefined *)0x0) goto LAB_1091be660;
              func_0x00010c1d0640(puVar4,param_2,lVar14,puVar11);
              puVar15 = puVar11;
            }
LAB_1091be658:
            _objc_release(puVar15);
LAB_1091be660:
            func_0x00010befa120(puVar1,param_2,puVar4);
          }
          else {
            if (lVar5 != 0) goto LAB_1091be660;
            puVar15 = param_1;
            func_0x00010c13cac0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar15;
            func_0x00010bf529e0();
            _objc_release(puVar15);
            if (lVar6 < (long)puVar9) {
              puVar9 = param_1;
              func_0x00010c13cac0();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar9;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar10;
              func_0x00010c0fb940();
              _objc_retainAutoreleasedReturnValue();
              puVar15 = puVar11;
              func_0x00010c08fa60();
              if (puVar15 == (undefined *)0x0) {
                puVar15 = (undefined *)0x0;
              }
              else {
                puVar7 = param_1;
                func_0x00010c13cac0();
                _objc_retainAutoreleasedReturnValue();
                puVar8 = puVar7;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                puVar15 = puVar8;
                func_0x00010c0fb940();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar8);
                _objc_release(puVar7);
              }
              _objc_release(puVar11);
              _objc_release(puVar10);
              _objc_release(puVar9);
              if (puVar15 != (undefined *)0x0) {
                func_0x00010c1d0640(puVar4,param_2,lVar14,puVar15);
                goto LAB_1091be658;
              }
              goto LAB_1091be660;
            }
          }
          _objc_release(puVar4);
          puVar12 = puVar12 + 1;
        } while (puVar3 != puVar12);
        puVar3 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_130,auStack_f0,0x10);
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bf51e00(puVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    return *(undefined **)(puVar1 + _DAT_112782cf8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 1091be704; end: 1091be713; -[SCLensMediaAndPresetPickerControllerV2 warningMessageLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091be704(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112782cf8);
}



/* Entry: 1091be714; end: 1091be753; -[SCLensMediaAndPresetPickerControllerV2 setWarningMessageLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091be714(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112782cf8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091be754; end: 1091be763; -[SCLensMediaAndPresetPickerControllerV2 photoAccessPromptView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091be754(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112782cfc);
}



/* Entry: 1091be764; end: 1091be7a3; -[SCLensMediaAndPresetPickerControllerV2 setPhotoAccessPromptView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091be764(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112782cfc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091be7a4; end: 1091be7b3; -[SCLensMediaAndPresetPickerControllerV2 selectedOptionRequestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1091be7a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112782d04);
}



/* Entry: 1091be7b4; end: 1091be7f3; -[SCLensMediaAndPresetPickerControllerV2 setSelectedOptionRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091be7b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112782d04;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091be7f4; end: 1091be8ef; -[SCLensMediaAndPresetPickerControllerV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1091be7f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112782d04,0);
  _objc_storeStrong(param_1 + _DAT_112782cf0,0);
  _objc_storeStrong(param_1 + _DAT_112782d00,0);
  _objc_destroyWeak(param_1 + _DAT_112782ce4);
  _objc_storeStrong(param_1 + _DAT_112782ce0,0);
  _objc_storeStrong(param_1 + _DAT_112782cdc,0);
  _objc_storeStrong(param_1 + _DAT_112782cd8,0);
  _objc_storeStrong(param_1 + _DAT_112782cd4,0);
  _objc_storeStrong(param_1 + _DAT_112782cf4,0);
  _objc_storeStrong(param_1 + _DAT_112782cd0,0);
  _objc_storeStrong(param_1 + _DAT_112782ccc,0);
  _objc_storeStrong(param_1 + _DAT_112782cc8,0);
  _objc_storeStrong(param_1 + _DAT_112782cfc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112782cf8,0);
  return;
}



/* Entry: 1091be8f0; end: 1091beb87; -[SCLensSubPickerControllerV2 initWithBottomViewContainer:lensLogger:imageProvider:externalImageComponent:pickerFeature:resultFeatures:mediaAssetManager:videoEditingEnabled:batchSize:hideArrow:lensOptionSourceType:selectionLimit:] */

undefined8 *
FUN_1091be8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15,ulong param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_112700c58;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[6] = 0x7fffffffffffffff;
    *(undefined1 *)(puVar1 + 7) = 0;
    _objc_retain(param_4);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_5;
    _objc_release(uVar2);
    func_0x00010c18b5e0(puVar1[0x17]);
    _objc_retain(param_6);
    uVar2 = puVar1[1];
    puVar1[1] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[2];
    puVar1[2] = param_9;
    _objc_release(uVar2);
    puVar1[0xc] = 0;
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x11) = param_10;
    puVar1[0xd] = param_12;
    puVar1[0xe] = 0;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__CGAffineTransformIdentity_110347008;
    uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    puVar1[0x1c] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    puVar1[0x1b] = uVar2;
    puVar1[0x1e] = uVar5;
    puVar1[0x1d] = uVar4;
    uVar2 = *(undefined8 *)(puVar3 + 0x20);
    puVar1[0x20] = *(undefined8 *)(puVar3 + 0x28);
    puVar1[0x1f] = uVar2;
    puVar1[0xf] = param_16;
    puVar1[0x10] = param_15;
    *(bool *)((long)puVar1 + 0x89) = 1 < param_16;
    puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
    func_0x00010c1fb1c0(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    func_0x00010c21c3c0(puVar1);
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



/* Entry: 1091beb88; end: 1091bec2b; -[SCLensSubPickerControllerV2 dealloc] */

void FUN_1091beb88(long param_1)

{
  undefined8 uVar1;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  _objc_retain(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1091bec2c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x00010bcbe2c4("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  _objc_release(uVar1);
  puStack_50 = PTR_PTR_112700c58;
  lStack_58 = param_1;
  _objc_msgSendSuper2(&lStack_58,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091bec2c; end: 1091bec33;  */

void FUN_1091bec2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 1091bec34; end: 1091bef13; -[SCLensSubPickerControllerV2 setUpViews:] */

void FUN_1091bec34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126ddb88;
  _objc_alloc();
  func_0x00010c014020(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined **)(param_1 + 0xd0) = puVar1;
  _objc_release(uVar6);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + 0xd0),param_2,
                      &PTR____CFConstantStringClassReference_110f30ef8);
  func_0x00010c1af000(*(undefined8 *)(param_1 + 0xd0),param_2,1);
  func_0x00010bf07120(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0xd0));
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bf40120(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ddb90;
  _objc_opt_class(PTR_PTR_1126ddb90);
  puVar2 = PTR_PTR_1126ddb90;
  _objc_opt_class(PTR_PTR_1126ddb90);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar6,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bf40120(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ddb98;
  _objc_opt_class(PTR_PTR_1126ddb98);
  puVar2 = PTR_PTR_1126ddb98;
  _objc_opt_class(PTR_PTR_1126ddb98);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar6,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bf40120(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ddba0;
  _objc_opt_class(PTR_PTR_1126ddba0);
  puVar2 = PTR_PTR_1126ddba0;
  _objc_opt_class(PTR_PTR_1126ddba0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar6,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar6);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfb1920(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bf40120(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bfa1d20(uVar3);
  uVar5 = uVar3;
  func_0x00010bfa1ce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar4,param_2,uVar6,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bf40120(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa1d20(uVar5);
  uVar7 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa1ce0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126060(uVar6,param_2,uVar5,uVar7,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bf40120(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf408e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bf40120(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar6);
  func_0x00010c08cae0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1091bef14; end: 1091bef1b; -[SCLensSubPickerControllerV2 showAnimated:] */

void FUN_1091bef14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c235d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showAnimated_completion__11266b180,param_3,0)
  ;
  return;
}



/* Entry: 1091bef1c; end: 1091beff3; -[SCLensSubPickerControllerV2 showAnimated:completion:] */

void FUN_1091bef1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  func_0x00010c235d60(*(undefined8 *)(param_1 + 0xd0));
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c2a2120(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1091beff4; end: 1091bf033;  */

void FUN_1091beff4(long param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0xb8);
    func_0x00010bf2d220();
    if (iVar1 != 0) {
      func_0x00010c09bca0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091bf034; end: 1091bf187; -[SCLensSubPickerControllerV2 hideAnimated:completion:] */

void FUN_1091bf034(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1091bf188;
  uStack_40 = 0x1091bf198;
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  _objc_retain(uVar2);
  lVar1 = param_1;
  uStack_38 = uVar2;
  func_0x00010c1598a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(lVar1);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x48));
  uVar2 = puStack_58[5];
  _objc_retain(param_4);
  func_0x00010bfe1860(uVar2);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1091bf188; end: 1091bf1ab;  */

void FUN_1091bf188(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1091bf1ac; end: 1091bf203;  */

void FUN_1091bf1ac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c12c960(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001091bf1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1091bf204; end: 1091bf20b; -[SCLensSubPickerControllerV2 pointInside:view:] */

void FUN_1091bf204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c102b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xd0),PTR_s_pointInside_view__11261e4e0);
  return;
}



/* Entry: 1091bf20c; end: 1091bf26f; -[SCLensSubPickerControllerV2 setOptionIdToRestore:] */

void FUN_1091bf20c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010bf2d220(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c13c590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_restoreOptionSelectionIfNeededWi_11262cb80,uVar1);
  return;
}



/* Entry: 1091bf270; end: 1091bf2b3; -[SCLensSubPickerControllerV2 pickerContentView] */

void FUN_1091bf270(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c25e720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091bf2b4; end: 1091bf33b; -[SCLensSubPickerControllerV2 setPickerViewFillColor:] */

void FUN_1091bf2b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  func_0x00010c25e720(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c103be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091bf33c; end: 1091bf343; -[SCLensSubPickerControllerV2 selectedOptionIndex] */

undefined8 FUN_1091bf33c(void)

{
  return 0x7fffffffffffffff;
}



/* Entry: 1091bf344; end: 1091bf7b7; -[SCLensSubPickerControllerV2 selectOptionAtIndexPath:] */

void FUN_1091bf344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined *param_7,ulong param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_7;
  _objc_retain(param_7);
  if (param_7 == (undefined *)0x0) goto LAB_1091bf730;
  uVar1 = param_5;
  func_0x00010c1598a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  puVar4 = param_7;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) goto LAB_1091bf730;
  puVar3 = param_7;
  func_0x00010c0840e0();
  uVar1 = param_5;
  func_0x00010bfe7100();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_7;
  func_0x00010c1554e0(param_7);
  uVar2 = uVar1;
  func_0x00010c0deec0();
  _objc_release(uVar1);
  if ((long)uVar2 <= (long)puVar3) goto LAB_1091bf730;
  puVar4 = param_7;
  func_0x00010c1554e0();
  if (puVar4 == (undefined *)0x0) {
    lVar5 = *(long *)(param_5 + 0x28);
    func_0x00010bf529e0();
    if ((long)puVar3 < lVar5) {
      uVar6 = *(undefined8 *)(param_5 + 0x28);
      func_0x00010c0dfd40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fadc0();
      _objc_release(uVar6);
      uVar1 = param_5;
      func_0x00010c1598a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(uVar1);
      uVar1 = param_5;
      func_0x00010c06eb80();
      uVar2 = param_5;
      func_0x00010bfe7100();
      _objc_retainAutoreleasedReturnValue();
      if ((int)uVar1 == 0) {
        puVar3 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
        func_0x00010bfed300();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c128fa0(uVar2);
      }
      else {
        param_8 = 1;
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c128de0(uVar2);
      }
      _objc_release(puVar3);
      _objc_release(uVar2);
      func_0x00010be88e80(param_5);
      goto LAB_1091bf730;
    }
  }
  puVar4 = param_7;
  func_0x00010c1554e0();
  if (puVar4 == (undefined *)0x1) {
    uVar1 = param_5;
    func_0x00010c1598a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010c094e60(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c095a40(uVar1);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(uVar1);
  }
  uVar1 = param_5;
  func_0x00010bfe7100();
  _objc_retainAutoreleasedReturnValue();
  param_8 = uVar1;
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126ddb80;
  _objc_opt_class(PTR_PTR_1126ddb80);
  uVar2 = param_8;
  _objc_opt_isKindOfClass(param_8,puVar4);
  uVar1 = param_8;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_8);
  if (uVar1 == 0) {
LAB_1091bf644:
    uVar2 = param_5;
    func_0x00010bfe7100();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ddba0;
    _objc_opt_class(PTR_PTR_1126ddba0);
    uVar2 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar4);
    _objc_release(uVar7);
    if (((uVar2 & 1) != 0) && (uVar7 != 0)) {
      uVar2 = param_5;
      func_0x00010bfe7100(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c128de0(uVar2);
      _objc_release(puVar4);
      _objc_release(uVar2);
    }
    uVar2 = param_5;
    func_0x00010bfe7100();
    _objc_retainAutoreleasedReturnValue();
    param_8 = 0x12;
    puVar4 = param_7;
    func_0x00010c1525a0();
    _objc_release(uVar2);
  }
  else {
    uVar2 = param_5;
    func_0x00010bfe7100(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar7 = param_8;
    uVar6 = param_1;
    uVar9 = param_2;
    uVar10 = param_3;
    uVar11 = param_4;
    func_0x00010bfb68e0();
    _CGRectContainsRect(param_1,param_2,param_3,param_4,uVar6,uVar9,uVar10,uVar11);
    _objc_release(uVar2);
    if ((uVar7 & 1) == 0) goto LAB_1091bf644;
    puVar4 = param_7;
    func_0x00010c0655a0(param_5);
  }
  func_0x00010be88e80(param_5);
  _objc_release(uVar1);
LAB_1091bf730:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(param_7 + 0x48);
  _objc_retain(param_8);
  _objc_retain(puVar4);
  func_0x00010befa120(uVar6);
  func_0x00010c17c0e0(param_8);
  func_0x00010c1bec60(param_8);
  func_0x00010c2832c0(param_8);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1091bf7b8; end: 1091bf82f; -[SCLensSubPickerControllerV2 innerSelectOptionAtIndexPath:cellToSelect:] */

void FUN_1091bf7b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010befa120(uVar1,param_2,param_3);
  func_0x00010c17c0e0(param_4,param_2,1);
  func_0x00010c1bec60(param_4,param_2,1);
  func_0x00010c2832c0(param_4,param_2,param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091bf830; end: 1091bfab7; -[SCLensSubPickerControllerV2 deselectOptionAtIndexPath:] */

void FUN_1091bf830(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be41200();
  if ((int)uVar1 == 0) goto LAB_1091bfa78;
  uVar2 = param_3;
  func_0x00010c0840e0();
  uVar7 = param_3;
  func_0x00010c1554e0();
  uVar3 = param_1;
  func_0x00010be43a40();
  uVar1 = param_1;
  func_0x00010c1598a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d360();
  _objc_release(uVar1);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x48));
  uVar1 = param_1;
  func_0x00010bfe7100();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf33b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126ddb80;
  _objc_opt_class(PTR_PTR_1126ddb80);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar1 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 != 0) {
    func_0x00010c17c0e0(uVar4);
    func_0x00010c1bec60(uVar4);
    func_0x00010c2832c0(uVar4);
  }
  if (uVar7 == 1) {
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfe7ee0(uVar8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (uVar7 == 0) {
      uVar7 = *(ulong *)(param_1 + 0x28);
      func_0x00010bf529e0();
      if (uVar2 < uVar7) {
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0dfd40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fadc0();
        _objc_release(uVar8);
        uVar9 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0dfd40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar9;
        func_0x00010c0fb940();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        goto LAB_1091bf9f0;
      }
    }
    uVar8 = 0;
  }
LAB_1091bf9f0:
  func_0x00010c0dd640(param_1);
  if (*(char *)(param_1 + 0x89) == '\x01') {
    if ((int)uVar3 == 0) {
      func_0x00010bfe7100(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c128de0(param_1);
      _objc_release(puVar5);
      _objc_release(param_1);
    }
    else {
      func_0x00010be88e60();
    }
  }
  _objc_release(uVar8);
  _objc_release(uVar1);
LAB_1091bfa78:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(param_3 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be4e190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1091bfab8; end: 1091bfabf; -[SCLensSubPickerControllerV2 loadNextBatch] */

void FUN_1091bfab8(long param_1)

{
  *(undefined8 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be4e190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadNextBatch_112571200);
  return;
}



/* Entry: 1091bfac0; end: 1091bfac3; -[SCLensSubPickerControllerV2 showNoImagesWarningIfNeeded] */

void FUN_1091bfac0(void)

{
  return;
}



/* Entry: 1091bfac4; end: 1091bfac7; -[SCLensSubPickerControllerV2 hideNoImagesWarning] */

void FUN_1091bfac4(void)

{
  return;
}



/* Entry: 1091bfac8; end: 1091bfc1f; -[SCLensSubPickerControllerV2 restoreOptionSelectionIfNeededWithCanProcessMoreFlag:] */

void FUN_1091bfac8(ulong param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  if ((*(byte *)(param_1 + 0x89) & 1) != 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar6 = param_1;
    func_0x00010c1598a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf529e0();
    _objc_release(uVar6);
    if (uVar2 != 0) {
      return;
    }
    uVar6 = 0;
    goto LAB_1091bfbe0;
  }
  uVar6 = param_1;
  func_0x00010bfe8840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bfecd20();
  _objc_release(uVar6);
  if (uVar2 == 0x7fffffffffffffff) {
    if ((param_3 & 1) == 0) {
LAB_1091bfb74:
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x40) = 0;
      _objc_release(uVar3);
    }
  }
  else if ((param_3 == 0) || (uVar2 < *(ulong *)(param_1 + 0x60))) goto LAB_1091bfb74;
  uVar6 = param_1;
  func_0x00010c1598a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf529e0();
  _objc_release(uVar6);
  uVar6 = uVar2;
  if (param_3 == 0 && (uVar2 == 0x7fffffffffffffff && uVar4 == 0)) {
    uVar6 = 0;
  }
  if ((uVar2 == 0x7fffffffffffffff) && ((param_3 & 1) != 0 || uVar4 != 0)) {
    return;
  }
LAB_1091bfbe0:
  puVar5 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,uVar6,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c158ee0(param_1,param_2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1091bfc20; end: 1091bfc27; -[SCLensSubPickerControllerV2 videoEditingEnabled] */

undefined1 FUN_1091bfc20(long param_1)

{
  return *(undefined1 *)(param_1 + 0x88);
}



/* Entry: 1091bfc28; end: 1091bfc2f; -[SCLensSubPickerControllerV2 currentMediaTypes] */

undefined8 FUN_1091bfc28(void)

{
  return 1;
}



/* Entry: 1091bfc30; end: 1091bfc37; -[SCLensSubPickerControllerV2 imageCollectionView] */

void FUN_1091bfc30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf40130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xd0),PTR_s_collectionView_1125ad9f0);
  return;
}



/* Entry: 1091bfc38; end: 1091bfc4f; -[SCLensSubPickerControllerV2 activeFeatures] */

void FUN_1091bfc38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_filteredArrayUsingBlock__1125c9430,
             &PTR___NSConcreteGlobalBlock_110adfcb8);
  return;
}



/* Entry: 1091bfc50; end: 1091bfd5b; -[SCLensSubPickerControllerV2 isCollectionInSync] */

bool FUN_1091bfc50(long param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = param_1;
  func_0x00010bfe7100();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c0df2e0();
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010bfe7100(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c0df300(param_1,param_2,lVar7);
  _objc_release(lVar7);
  if (lVar3 == lVar4) {
    if (lVar3 < 1) {
      bVar1 = true;
    }
    else {
      lVar7 = 0;
      do {
        lVar4 = param_1;
        func_0x00010bfe7100();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0deec0();
        _objc_release(lVar4);
        lVar4 = param_1;
        func_0x00010bfe7100(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_1;
        func_0x00010bf404e0(param_1,param_2,lVar4,lVar7);
        _objc_release(lVar4);
        bVar1 = lVar5 == lVar6;
        if (!bVar1) {
          return bVar1;
        }
        bVar2 = lVar3 + -1 != lVar7;
        lVar7 = lVar7 + 1;
      } while (bVar2);
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1091bfd5c; end: 1091bfdff; -[SCLensSubPickerControllerV2 notifyUnselectedMediaForIdentifier:] */

void FUN_1091bfd5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (1 < *(ulong *)(param_1 + 0x78)) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010bf4dc60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_40 = 0xc2000000;
      pcStack_38 = FUN_1091bfe00;
      puStack_30 = &UNK_110849810;
      _objc_retain(lVar1);
      lStack_28 = lVar1;
      func_0x00010c282700(uVar2,param_2,lVar1,&puStack_48);
      _objc_release(lStack_28);
    }
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 1091bfe00; end: 1091bfe03;  */

void FUN_1091bfe00(void)

{
  return;
}



/* Entry: 1091bfe04; end: 1091bfe67; -[SCLensSubPickerControllerV2 _isIndexPathSelected:] */

undefined8 FUN_1091bfe04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c1598a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf4b900();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1091bfe68; end: 1091bfeaf; -[SCLensSubPickerControllerV2 _isSelectionLimitReached] */

bool FUN_1091bfe68(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c1598a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  lVar3 = *(long *)(param_1 + 0x78);
  _objc_release(lVar1);
  return lVar2 == lVar3;
}



/* Entry: 1091bfeb0; end: 1091bfeb7; -[SCLensSubPickerControllerV2 numberOfSectionsInCollectionView:] */

undefined8 FUN_1091bfeb0(void)

{
  return 2;
}



/* Entry: 1091bfeb8; end: 1091bff3f; -[SCLensSubPickerControllerV2 collectionView:numberOfItemsInSection:] */

long FUN_1091bfeb8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (param_4 == 1) {
    lVar1 = *(long *)(param_1 + 0x60) + (ulong)*(byte *)(param_1 + 0x58);
  }
  else if (param_4 == 0) {
    func_0x00010bef0820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf529e0();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 1091bff40; end: 1091c0063; -[SCLensSubPickerControllerV2 collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

void FUN_1091bff40(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c1554e0();
  if (lVar1 == 0) {
    uVar6 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
    uVar2 = param_4;
    func_0x00010c0720c0(param_4,param_2,uVar6);
    if ((int)uVar2 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bfa1ce0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_3;
      func_0x00010bf6e120(param_3,param_2,uVar6,uVar2,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar3 = puVar5;
      func_0x00010bfc1c00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf4b900();
      _objc_release(puVar3);
      if (((ulong)puVar4 & 1) == 0) {
        func_0x00010bef9040(puVar5,param_2,*(undefined8 *)(param_1 + 0x50));
      }
      goto LAB_1091c0030;
    }
  }
  puVar5 = PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20;
  _objc_opt_new(PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20);
LAB_1091c0030:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1091c0064; end: 1091c040f; -[SCLensSubPickerControllerV2 collectionView:cellForItemAtIndexPath:] */

void FUN_1091c0064(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010bef0820(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c1554e0();
  lVar6 = param_4;
  func_0x00010c0840e0();
  puVar7 = param_3;
  if (lVar2 == 0) {
    puVar3 = puVar1;
    func_0x00010c0dfd40(puVar1,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfa1ce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e0c0(param_3,param_2,puVar4,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010bf46f20(puVar3,param_2,puVar7);
    func_0x00010bde4e00(param_1,param_2,puVar7,param_4);
    _objc_retain(puVar7);
  }
  else {
    lVar2 = *(long *)(param_1 + 0xb8);
    func_0x00010bfe72c0();
    if (lVar2 <= lVar6) {
      puVar7 = PTR_PTR_1126ddba0;
      _objc_opt_class(PTR_PTR_1126ddba0);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_3;
      func_0x00010bf6e0c0(param_3,param_2,puVar7,param_4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1091c03d4;
    }
    lVar6 = *(long *)(param_1 + 0xb8);
    lVar2 = param_4;
    func_0x00010c0840e0(param_4);
    func_0x00010bf0b780(lVar6,param_2,lVar2);
    if (lVar6 == 2) {
      puVar3 = PTR_PTR_1126ddb98;
      _objc_opt_class(PTR_PTR_1126ddb98);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e0c0(param_3,param_2,puVar3,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      uVar8 = *(undefined8 *)(param_1 + 0xb8);
      lVar2 = param_4;
      func_0x00010c0840e0(param_4);
      func_0x00010c299da0(uVar8,param_2,lVar2);
      FUN_1091c7f54();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c192d40(puVar7,param_2,uVar8);
      _objc_release(uVar8);
      puVar3 = param_1;
      func_0x00010c299e80(param_1);
      func_0x00010c193b80(puVar7,param_2,puVar3);
      puVar3 = param_1;
      func_0x00010c299e80();
      if ((int)puVar3 != 0) {
        func_0x00010c18b5e0(puVar7,param_2,param_1);
      }
    }
    else if (lVar6 == 1) {
      puVar3 = PTR_PTR_1126ddb90;
      _objc_opt_class(PTR_PTR_1126ddb90);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6e0c0(param_3,param_2,puVar3,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    else {
      puVar7 = (undefined *)0x0;
    }
    func_0x00010bde4e00(param_1,param_2,puVar7,param_4);
    func_0x00010c2832c0(puVar7,param_2,param_4);
    uVar8 = *(undefined8 *)(param_1 + 0xb8);
    lVar2 = param_4;
    func_0x00010c0840e0(param_4);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1091c0410;
    puStack_60 = &UNK_110adfcd8;
    _objc_retain(puVar7);
    puStack_58 = puVar7;
    func_0x00010bfc9080(0x4079000000000000,0x4079000000000000,uVar8,param_2,lVar2,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010bf5f2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0xb8);
      puVar3 = puVar7;
      func_0x00010bf5f2e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2de60(uVar5,param_2,puVar3);
      _objc_release(puVar3);
      func_0x00010c187600(puVar7,param_2,uVar8);
      func_0x00010c1bec60(puVar7,param_2,1);
      func_0x00010c1a9f00(puVar7,param_2,0);
    }
    _objc_retain(puVar7);
    _objc_release(uVar8);
    puVar3 = puStack_58;
  }
  _objc_release(puVar3);
  puVar3 = puVar7;
LAB_1091c03d4:
  _objc_release(puVar7);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091c0410; end: 1091c04a7;  */

void FUN_1091c0410(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf5f2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1bec60(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091c04a8; end: 1091c0613; -[SCLensSubPickerControllerV2 collectionView:shouldSelectItemAtIndexPath:] */

bool FUN_1091c04a8(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c1554e0();
  uVar2 = param_4;
  func_0x00010c0840e0(param_4);
  if (*(char *)(param_1 + 0x89) == '\x01') {
    uVar3 = param_1;
    func_0x00010be41200(param_1,param_2,param_4);
    if ((int)uVar3 == 0) {
      uVar3 = param_1;
      func_0x00010be43a40();
      if ((uVar3 & 1) == 0) {
        if (uVar1 == 1) {
          lVar4 = *(long *)(param_1 + 0x60);
        }
        else {
          if (uVar1 != 0) goto LAB_1091c05d0;
          lVar4 = *(long *)(param_1 + 0x28);
          func_0x00010bf529e0(lVar4);
        }
        bVar5 = (long)uVar2 < lVar4;
        goto LAB_1091c05f4;
      }
    }
    else {
      func_0x00010bf6e860(param_1,param_2,param_4);
    }
  }
  else {
    uVar1 = param_1;
    func_0x00010c1598a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    if (uVar2 < 2) {
      uVar1 = param_1;
      func_0x00010c1598a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar1 = param_4;
      func_0x00010c071ae0(param_4,param_2,uVar3);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_4;
        func_0x00010c0840e0();
        if (*(long *)(param_1 + 0x60) <= (long)uVar1) goto LAB_1091c05d8;
        if (uVar2 == 1) {
          func_0x00010bf6e860(param_1,param_2,uVar3);
        }
        bVar5 = true;
      }
      else {
LAB_1091c05d8:
        bVar5 = false;
      }
      _objc_release(uVar3);
      goto LAB_1091c05f4;
    }
  }
LAB_1091c05d0:
  bVar5 = false;
LAB_1091c05f4:
  _objc_release(param_4);
  return bVar5;
}



/* Entry: 1091c0614; end: 1091c061b; -[SCLensSubPickerControllerV2 collectionView:didSelectItemAtIndexPath:] */

void FUN_1091c0614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c158ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_selectOptionAtIndexPath__112633dd8,param_4);
  return;
}



/* Entry: 1091c061c; end: 1091c06a3; -[SCLensSubPickerControllerV2 collectionView:layout:sizeForItemAtIndexPath:] */

undefined1  [16] FUN_1091c061c(long param_1)

{
  long lVar1;
  long in_x4;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain(in_x4);
  lVar1 = in_x4;
  func_0x00010c0840e0();
  uVar2 = 0x404e800000000000;
  if (*(long *)(param_1 + 0x60) <= lVar1) {
    if ((*(long *)(param_1 + 0x60) == 0) && (lVar1 = in_x4, func_0x00010c0840e0(), lVar1 == 0)) {
      uVar2 = 0x404e800000000000;
    }
    else {
      uVar2 = 0x4045000000000000;
    }
  }
  _objc_release(in_x4);
  auVar3._8_8_ = 0x404e800000000000;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1091c06a4; end: 1091c06c7; -[SCLensSubPickerControllerV2 collectionView:layout:referenceSizeForHeaderInSection:] */

undefined1  [16] FUN_1091c06a4(void)

{
  undefined8 uVar1;
  long in_x4;
  undefined1 auVar3 [16];
  undefined8 uVar2;
  
  uVar2 = 0x404e800000000000;
  uVar1 = 0x404e800000000000;
  if (in_x4 != 0) {
    uVar2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    uVar1 = *(undefined8 *)PTR__CGSizeZero_110347620;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1091c06c8; end: 1091c0817; -[SCLensSubPickerControllerV2 collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_1091c06c8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126ddb80;
  _objc_opt_class(PTR_PTR_1126ddb80);
  uVar4 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar3 = param_1;
  func_0x00010be41200();
  if ((int)lVar3 != 0) {
    if (uVar1 == 0) goto LAB_1091c07ec;
    uVar4 = *(ulong *)(param_1 + 0x48);
    func_0x00010bf4b900();
    if ((uVar4 & 1) == 0) {
      func_0x00010c0655a0(param_1);
    }
  }
  lVar3 = param_5;
  func_0x00010c1554e0();
  if (lVar3 == 1) {
    lVar3 = param_5;
    func_0x00010c0840e0();
    lVar5 = *(long *)(param_1 + 0xb8);
    func_0x00010bfe72c0();
    if (lVar3 < lVar5) {
      uVar6 = *(undefined8 *)(param_1 + 0xb8);
      func_0x00010c0840e0(param_5);
      func_0x00010bf0b780(uVar6);
      func_0x00010bf5f3e0(param_1);
      uVar6 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c0840e0(param_5);
      func_0x00010c095a00(uVar6);
    }
  }
  uVar4 = uVar1;
  func_0x00010c07d660();
  if ((uVar4 & 1) == 0) {
    func_0x00010be43a40(param_1);
    func_0x00010c18ec60(uVar1);
  }
LAB_1091c07ec:
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1091c0818; end: 1091c081b; -[SCLensSubPickerControllerV2 scrollViewDidScroll:] */

void FUN_1091c0818(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4e1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadNextBatchIfNeeded_112571208);
  return;
}



/* Entry: 1091c081c; end: 1091c081f; -[SCLensSubPickerControllerV2 scrollViewDidEndScrollingAnimation:] */

void FUN_1091c081c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4e1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadNextBatchIfNeeded_112571208);
  return;
}



/* Entry: 1091c0820; end: 1091c0823; -[SCLensSubPickerControllerV2 scrollViewDidEndDecelerating:] */

void FUN_1091c0820(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4e1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadNextBatchIfNeeded_112571208);
  return;
}



/* Entry: 1091c0824; end: 1091c0afb; -[SCLensSubPickerControllerV2 lensSubPickerImageProvider:didUpdateWithImageCount:canProcessMore:] */

void FUN_1091c0824(long param_1,undefined8 param_2,undefined8 param_3,long param_4,byte param_5)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_d0 [8];
  byte bStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  long lStack_90;
  long lStack_88;
  byte bStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 0x60);
  if (param_4 == 0) {
    if ((param_5 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      func_0x00010c238ae0(param_1);
      goto LAB_1091c0aa4;
    }
    lVar2 = param_1;
    func_0x00010c1598a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
    _objc_release(lVar2);
  }
  func_0x00010bfe2460(param_1);
  if ((lVar5 != 0 && param_4 != lVar5) && (lVar5 == 0 || lVar5 <= param_4)) {
    _objc_initWeak(auStack_78,param_1);
    lVar2 = param_1;
    func_0x00010bfe7100(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1091c0afc;
    puStack_a8 = &UNK_1108ad600;
    _objc_copyWeak(auStack_98,auStack_78);
    lStack_a0 = param_1;
    lStack_90 = lVar5;
    lStack_88 = param_4;
    bStack_80 = param_5;
    _objc_copyWeak(auStack_d0,auStack_78);
    bStack_c8 = param_5;
    func_0x00010c0f8420(lVar2);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_78);
  }
  else {
    *(long *)(param_1 + 0x60) = param_4;
    *(byte *)(param_1 + 0x58) = param_5;
    lVar2 = param_1;
    func_0x00010bfe7100(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128fa0(lVar2);
    _objc_release(puVar3);
    _objc_release(lVar2);
    func_0x00010c08cae0(param_1);
    func_0x00010c13c580(param_1);
  }
  if (param_4 != 0) {
    lVar2 = param_1;
    func_0x00010c1598a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar4 == 0) {
      lVar2 = param_1;
      func_0x00010bfe7100(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8420();
      _objc_release(lVar2);
    }
  }
  uVar1 = *(long *)(param_1 + 0x70) + (param_4 - lVar5);
  *(ulong *)(param_1 + 0x70) = uVar1;
  if (*(ulong *)(param_1 + 0x68) <= uVar1) {
    lVar5 = *(long *)(param_1 + 0x40);
    func_0x00010c08fa60();
    if (lVar5 == 0) goto LAB_1091c0aa4;
  }
  func_0x00010be4e180(param_1);
LAB_1091c0aa4:
  _objc_release(param_3);
  return;
}



/* Entry: 1091c0afc; end: 1091c0ccf;  */

void FUN_1091c0afc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x58) == '\x01') {
      lVar4 = lVar1;
      func_0x00010bfe7100(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,
                          *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60),1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_50 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6c100(lVar4,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(lVar4);
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    for (lVar4 = *(long *)(param_1 + 0x30); lVar4 < *(long *)(param_1 + 0x38); lVar4 = lVar4 + 1) {
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,lVar4,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar3);
      _objc_release(puVar3);
    }
    if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,*(long *)(param_1 + 0x38),
                          1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar3);
      _objc_release(puVar3);
    }
    lVar4 = lVar1;
    func_0x00010bfe7100(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066a40();
    _objc_release(lVar4);
    *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(param_1 + 0x38);
    *(undefined1 *)(lVar1 + 0x58) = *(undefined1 *)(param_1 + 0x40);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = lVar1 + 0x20;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c08cae0();
  func_0x00010c13c580(lVar4,param_2,*(undefined1 *)(lVar1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1091c0cd0; end: 1091c0d0f;  */

void FUN_1091c0cd0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c08cae0();
  func_0x00010c13c580(lVar1,param_2,*(undefined1 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1091c0d10; end: 1091c0ddf;  */

void FUN_1091c0d10(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe7100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128de0(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1091c0de0; end: 1091c0de3;  */

void FUN_1091c0de0(void)

{
  return;
}



/* Entry: 1091c0de4; end: 1091c0eab; -[SCLensSubPickerControllerV2 _loadNextBatchIfNeeded] */

void FUN_1091c0de4(double param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = param_4;
  func_0x00010bfe7100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d5e0();
  lVar2 = param_4;
  dVar4 = param_1;
  func_0x00010bfe7100(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar3 = param_4;
  func_0x00010bfe7100(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  dVar5 = (double)NEON_ucvtf(*(undefined8 *)(param_4 + 0x68));
  if ((param_1 - param_3) - dVar4 < dVar5 * 61.0) {
                    /* WARNING: Could not recover jumptable at 0x00010c09bcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s_loadNextBatch_112604938);
    return;
  }
  return;
}



/* Entry: 1091c0eac; end: 1091c0f1b; -[SCLensSubPickerControllerV2 _loadNextBatch] */

void FUN_1091c0eac(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bfe8840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2d220();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c114f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0x4079000000000000,0x4079000000000000,*(undefined8 *)(param_1 + 0xb8),
               PTR_s_processMoreImagesIfPossibleWithS_112622df0,*(undefined8 *)(param_1 + 0x68));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c238af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showNoImagesWarningIfNeeded_11266bce0);
  return;
}



/* Entry: 1091c0f1c; end: 1091c107f; -[SCLensSubPickerControllerV2 layoutCollectionViewIfNeededWithAnimation:] */

void FUN_1091c0f1c(long param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bf40120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf404e0(param_1,param_2,uVar2,1);
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bf40120(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf404e0(param_1,param_2,uVar4,0);
  _objc_release(uVar4);
  _objc_release(uVar2);
  if (*(long *)(param_1 + 0x30) == lVar5 + lVar3) {
    cVar1 = *(char *)(param_1 + 0x58);
    if (*(char *)(param_1 + 0x38) == cVar1) {
      return;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x58);
  }
  *(char *)(param_1 + 0x38) = cVar1;
  *(long *)(param_1 + 0x30) = lVar5 + lVar3;
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010bf40120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fa0();
  _objc_release(uVar2);
  if (param_3 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1091c1080;
    puStack_50 = &UNK_110842e18;
    lStack_48 = param_1;
    func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68);
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  func_0x00010c103be0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1091c1080; end: 1091c10b7;  */

void FUN_1091c1080(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0);
  func_0x00010c103be0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091c10b8; end: 1091c115b; -[SCLensSubPickerControllerV2 _configureCellSelectionState:atIndexPath:] */

void FUN_1091c10b8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar1 = *(undefined1 *)(param_1 + 0x89);
    _objc_retain(param_4);
    func_0x00010c1fb9e0(param_3,param_2,uVar1);
    lVar2 = param_1;
    func_0x00010be41200(param_1,param_2,param_4);
    _objc_release(param_4);
    if ((int)lVar2 == 0) {
      if (*(char *)(param_1 + 0x89) == '\x01') {
        func_0x00010be43a40(param_1);
        func_0x00010c18ec60(param_3,param_2,param_1);
      }
    }
    else {
      func_0x00010c17c0e0(param_3,param_2,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091c115c; end: 1091c12fb; -[SCLensSubPickerControllerV2 _refreshVisibleItems] */

void FUN_1091c115c(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar3 = param_1;
  func_0x00010bfe7100();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfed1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar4);
      }
      uVar5 = param_1;
      func_0x00010c1598a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf4b900();
      _objc_release(uVar5);
      if ((uVar6 & 1) == 0) {
        func_0x00010befa120(puVar2);
      }
      uVar9 = uVar9 + 1;
    } while (uVar3 != uVar9);
    uVar3 = uVar4;
    func_0x00010bf52a60();
  }
  _objc_release(uVar4);
  puVar7 = puVar2;
  func_0x00010bf529e0();
  if (puVar7 != (undefined *)0x0) {
    func_0x00010bfe7100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128de0();
    _objc_release(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  if ((puVar2[0x89] == '\x01') && (puVar7 = puVar2, func_0x00010be43a40(), (int)puVar7 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be88e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s__refreshVisibleItems_11257fd38);
    return;
  }
  return;
}



/* Entry: 1091c12fc; end: 1091c133b; -[SCLensSubPickerControllerV2 _refreshVisibleItemsIfSelectionLimitReached] */

void FUN_1091c12fc(long param_1)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 0x89) == '\x01') &&
     (lVar1 = param_1, func_0x00010be43a40(), (int)lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be88e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshVisibleItems_11257fd38);
    return;
  }
  return;
}



/* Entry: 1091c133c; end: 1091c13a7; -[SCLensSubPickerControllerV2 _configureHeaderView:] */

void FUN_1091c133c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c050900();
  func_0x00010bef9040(param_3,param_2,puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1091c13a8; end: 1091c13b3; -[SCLensSubPickerControllerV2 _headerViewTapped] */

void FUN_1091c13a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fadd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setSelected__11265c598,1);
  return;
}



/* Entry: 1091c13b4; end: 1091c13b7; -[SCLensSubPickerControllerV2 videoCellDidTapEditButton:] */

void FUN_1091c13b4(void)

{
  return;
}



/* Entry: 1091c13b8; end: 1091c13bf; -[SCLensSubPickerControllerV2 selectedIndexPaths] */

undefined8 FUN_1091c13b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1091c13c0; end: 1091c13ef; -[SCLensSubPickerControllerV2 setSelectedIndexPaths:] */

void FUN_1091c13c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091c13f0; end: 1091c13f7; -[SCLensSubPickerControllerV2 resultFeatures] */

undefined8 FUN_1091c13f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1091c13f8; end: 1091c1427; -[SCLensSubPickerControllerV2 setResultFeatures:] */

void FUN_1091c13f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091c1428; end: 1091c143f; -[SCLensSubPickerControllerV2 delegate] */

void FUN_1091c1428(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


