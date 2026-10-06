/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b68caf0; end: 10b68cb1f; -[FLAnimatedImage setPendingIndexes:] */

void FUN_10b68caf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b68cb20; end: 10b68cb27; -[FLAnimatedImage runningPendingIndexing] */

undefined1 FUN_10b68cb20(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b68cb28; end: 10b68cb2f; -[FLAnimatedImage setRunningPendingIndexing:] */

void FUN_10b68cb28(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b68cb30; end: 10b68cb37; -[FLAnimatedImage imageGeneratingRequest] */

undefined8 FUN_10b68cb30(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10b68cb38; end: 10b68cb67; -[FLAnimatedImage setImageGeneratingRequest:] */

void FUN_10b68cb38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b68cb68; end: 10b68cc1b; -[FLAnimatedImage .cxx_destruct] */

void FUN_10b68cb68(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b68cc1c; end: 10b68cc67; +[FLWeakProxy weakProxyForObject:] */

void FUN_10b68cc1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0490;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c2121a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b68cc68; end: 10b68cc87; -[FLWeakProxy forwardingTargetForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b68cc68(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112791578);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b68cc88; end: 10b68ccaf; -[FLWeakProxy forwardInvocation:] */

void FUN_10b68cc88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x00010c1edc60(param_3,param_2,&uStack_18);
  return;
}



/* Entry: 10b68ccb0; end: 10b68ccc3; -[FLWeakProxy methodSignatureForSelector:] */

void FUN_10b68ccb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSObject_1126b1300,PTR_s_instanceMethodSignatureForSelect_1125f78f8,
             PTR_s_init_1125d9248);
  return;
}



/* Entry: 10b68ccc4; end: 10b68cce3; -[FLWeakProxy target] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b68ccc4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112791578);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b68cce4; end: 10b68ccf7; -[FLWeakProxy setTarget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b68cce4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112791578,param_3);
  return;
}



/* Entry: 10b68ccf8; end: 10b68cd07; -[FLWeakProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b68ccf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112791578);
  return;
}



/* Entry: 10b68cd08; end: 10b68ce6b; -[FLAnimatedImageView setAnimatedImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b68cd08(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112791590;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010c071ae0();
  if ((uVar1 & 1) == 0) {
    if (param_3 == 0) {
      func_0x00010c2558c0(param_1);
    }
    else {
      puStack_38 = PTR_PTR_112709b98;
      lStack_40 = param_1;
      _objc_msgSendSuper2(&lStack_40,PTR_s_setImage__1126481e8,0);
      puStack_48 = PTR_PTR_112709b98;
      lStack_50 = param_1;
      _objc_msgSendSuper2(&lStack_50,PTR_s_setHighlighted__112647c38,0);
      func_0x00010c069fa0(param_1);
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = param_3;
    func_0x00010c105800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c187380(param_1);
    _objc_release(lVar3);
    func_0x00010c1873a0(param_1);
    lVar3 = param_3;
    func_0x00010c0b5740();
    if (lVar3 != 0) {
      func_0x00010c0b5740(param_3);
    }
    func_0x00010c1c0f20(param_1);
    func_0x00010c1614c0(0,param_1);
    func_0x00010c289ee0(param_1);
    lVar3 = param_1;
    func_0x00010c22de40();
    if ((int)lVar3 != 0) {
      func_0x00010c24dbc0(param_1);
    }
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbd40();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b68ce6c; end: 10b68cee3; -[FLAnimatedImageView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b68ce6c(long param_1)

{
  undefined *puVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_112791594));
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar1);
  puStack_28 = PTR_PTR_112709b98;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b68cee4; end: 10b68cf4b; -[FLAnimatedImageView didMoveToSuperview] */

void FUN_10b68cee4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112709b98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToSuperview_1125bb968);
  func_0x00010c289ee0(param_1);
  uVar1 = param_1;
  func_0x00010c22de40();
  if ((int)uVar1 == 0) {
    func_0x00010c2558c0(param_1);
  }
  else {
    func_0x00010c24dbc0(param_1);
  }
  return;
}



/* Entry: 10b68cf4c; end: 10b68cfb3; -[FLAnimatedImageView didMoveToWindow] */

void FUN_10b68cf4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112709b98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToWindow_112527020);
  func_0x00010c289ee0(param_1);
  uVar1 = param_1;
  func_0x00010c22de40();
  if ((int)uVar1 == 0) {
    func_0x00010c2558c0(param_1);
  }
  else {
    func_0x00010c24dbc0(param_1);
  }
  return;
}



/* Entry: 10b68cfb4; end: 10b68d01b; -[FLAnimatedImageView setAlpha:] */

void FUN_10b68cfb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112709b98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setAlpha__112637810);
  func_0x00010c289ee0(param_1);
  uVar1 = param_1;
  func_0x00010c22de40();
  if ((int)uVar1 == 0) {
    func_0x00010c2558c0(param_1);
  }
  else {
    func_0x00010c24dbc0(param_1);
  }
  return;
}



/* Entry: 10b68d01c; end: 10b68d083; -[FLAnimatedImageView setHidden:] */

void FUN_10b68d01c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112709b98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setHidden__1126479f8);
  func_0x00010c289ee0(param_1);
  uVar1 = param_1;
  func_0x00010c22de40();
  if ((int)uVar1 == 0) {
    func_0x00010c2558c0(param_1);
  }
  else {
    func_0x00010c24dbc0(param_1);
  }
  return;
}



/* Entry: 10b68d084; end: 10b68d11f; -[FLAnimatedImageView intrinsicContentSize] */

undefined1  [16] FUN_10b68d084(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112709b98;
  lStack_40 = param_3;
  _objc_msgSendSuper2(&lStack_40,PTR_s_intrinsicContentSize_1125f8080);
  lVar1 = param_3;
  uVar2 = param_1;
  uVar3 = param_2;
  func_0x00010bf03520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bfe6ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    _objc_release(param_3);
    param_1 = uVar2;
    param_2 = uVar3;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10b68d120; end: 10b68d193; -[FLAnimatedImageView image] */

void FUN_10b68d120(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1;
  func_0x00010bf03520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_28 = PTR_PTR_112709b98;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_image_1125d7478);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf5ec20(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b68d194; end: 10b68d1fb; -[FLAnimatedImageView setImage:] */

void FUN_10b68d194(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010c167e80(param_1);
  }
  puStack_28 = PTR_PTR_112709b98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setImage__1126481e8,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10b68d1fc; end: 10b68d437; -[FLAnimatedImageView startAnimating] */

void FUN_10b68d1fc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1;
  func_0x00010bf03520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_48 = PTR_PTR_112709b98;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_startAnimating_112671118);
  }
  else {
    lVar1 = param_1;
    func_0x00010bf85b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126e0490;
      func_0x00010c2a2bc0(PTR_PTR_1126e0490);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
      func_0x00010bf85b60(PTR__OBJC_CLASS___CADisplayLink_1126b94a8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18fc00(param_1);
      _objc_release(puVar3);
      uVar5 = *(undefined8 *)PTR__NSDefaultRunLoopMode_11034aa38;
      _objc_retain(uVar5);
      puVar3 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
      func_0x00010c114d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bef0f00();
      _objc_release(puVar3);
      uVar6 = uVar5;
      if ((undefined *)0x1 < puVar4) {
        uVar6 = *(undefined8 *)PTR__NSRunLoopCommonModes_11034aaa8;
        _objc_retain(uVar6);
        _objc_release(uVar5);
      }
      lVar1 = param_1;
      func_0x00010bf85b20(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
      func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc2c0(lVar1);
      _objc_release(puVar3);
      _objc_release(lVar1);
      _objc_release(uVar6);
      _objc_release(puVar2);
    }
    func_0x00010bf85b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9980();
    _objc_release(param_1);
  }
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar2);
  return;
}



/* Entry: 10b68d438; end: 10b68d4df; -[FLAnimatedImageView stopAnimating] */

void FUN_10b68d438(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1;
  func_0x00010bf03520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_28 = PTR_PTR_112709b98;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_stopAnimating_112673058);
  }
  else {
    func_0x00010bf85b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9980();
    _objc_release(param_1);
  }
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar2);
  return;
}



/* Entry: 10b68d4e0; end: 10b68d597; -[FLAnimatedImageView isAnimating] */

undefined1 * FUN_10b68d4e0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar3 = &lStack_40;
  lVar1 = param_1;
  func_0x00010bf03520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_38 = PTR_PTR_112709b98;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_isAnimating_1125f8a48);
  }
  else {
    lVar1 = param_1;
    func_0x00010bf85b20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      func_0x00010bf85b20(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c079ba0();
      plVar3 = (long *)(ulong)((uint)lVar2 ^ 1);
      _objc_release(param_1);
    }
    _objc_release(lVar1);
  }
  return (undefined1 *)plVar3;
}



/* Entry: 10b68d598; end: 10b68d5ff; -[FLAnimatedImageView setHighlighted:] */

void FUN_10b68d598(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010bf03520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_38 = PTR_PTR_112709b98;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_setHighlighted__112647c38,param_3);
  }
  return;
}



/* Entry: 10b68d600; end: 10b68d633; -[FLAnimatedImageView _applicationDidEnterBackground:] */

void FUN_10b68d600(undefined8 param_1)

{
  func_0x00010bf85b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b68d634; end: 10b68d667; -[FLAnimatedImageView _applicationDidBecomeActive:] */

void FUN_10b68d634(undefined8 param_1)

{
  func_0x00010bf85b20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b68d668; end: 10b68d71f; -[FLAnimatedImageView updateShouldAnimate] */

void FUN_10b68d668(double param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  
  uVar1 = param_2;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    bVar4 = false;
  }
  else {
    uVar2 = param_2;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar2 == 0) || (uVar3 = param_2, func_0x00010c074c20(), (uVar3 & 1) != 0)) {
      bVar4 = false;
    }
    else {
      func_0x00010bf01b40(param_2);
      bVar4 = 0.0 < param_1;
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf03520(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fff60(param_2,param_3,uVar1 != 0 & bVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b68d720; end: 10b68d9b7; -[FLAnimatedImageView displayDidRefresh:] */

void FUN_10b68d720(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c22de40();
  if ((int)uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf07b60();
    _objc_release(puVar2);
    if (puVar3 != (undefined *)0x2) {
      uVar1 = param_2;
      func_0x00010bf03520();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bf6af60();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar5 = param_2;
      func_0x00010bf5ec40(param_2);
      func_0x00010c0df840(puVar2,param_3,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0dff20(uVar4,param_3,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(uVar4);
      _objc_release(uVar1);
      if (uVar5 == 0) {
        uVar1 = param_2;
        func_0x00010bf5ec40(param_2);
        func_0x00010c1873a0(param_2,param_3,uVar1 + 1);
      }
      else {
        func_0x00010bfb2c80(uVar5);
        uVar1 = param_2;
        dVar9 = param_1;
        func_0x00010bf03520();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_2;
        func_0x00010bf5ec40(param_2);
        uVar6 = uVar1;
        func_0x00010bfe8060(uVar1,param_3,uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        if (uVar6 != 0) {
          func_0x00010c187380(param_2,param_3,uVar6);
          uVar1 = param_2;
          func_0x00010c0d7340();
          if ((int)uVar1 != 0) {
            uVar1 = param_2;
            func_0x00010c08c0e0(param_2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1cbd40();
            _objc_release(uVar1);
            func_0x00010c1cbde0(param_2,param_3,0);
          }
          func_0x00010bf8b160(param_4);
          dVar8 = dVar9;
          func_0x00010beed8e0(param_2);
          dVar9 = dVar9 + dVar8;
          func_0x00010c1614c0(param_2);
          while (func_0x00010beed8e0(param_2), (double)SUB84(param_1,0) <= dVar9) {
            func_0x00010beed8e0(param_2);
            dVar9 = dVar9 - (double)SUB84(param_1,0);
            func_0x00010c1614c0(param_2);
            uVar1 = param_2;
            func_0x00010bf5ec40(param_2);
            func_0x00010c1873a0(param_2,param_3,uVar1 + 1);
            uVar1 = param_2;
            func_0x00010bf5ec40();
            uVar4 = param_2;
            func_0x00010bf03520();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar4;
            func_0x00010bfb6b20();
            _objc_release(uVar4);
            if (uVar7 <= uVar1) {
              uVar1 = param_2;
              func_0x00010c0b5760(param_2);
              func_0x00010c1c0f20(param_2,param_3,uVar1 - 1);
              uVar1 = param_2;
              func_0x00010c0b5760();
              if (uVar1 == 0) {
                func_0x00010c2558c0(param_2);
                break;
              }
              func_0x00010c1873a0(param_2,param_3,0);
            }
            func_0x00010c1cbde0(param_2,param_3,1);
          }
        }
        _objc_release(uVar6);
      }
      _objc_release(uVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b68d9b8; end: 10b68da13; -[FLAnimatedImageView displayLayer:] */

void FUN_10b68d9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfe6ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  func_0x00010c182c80(param_3,param_2,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b68da14; end: 10b68da23; -[FLAnimatedImageView animatedImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b68da14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791590);
}



/* Entry: 10b68da24; end: 10b68da33; -[FLAnimatedImageView currentFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b68da24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791598);
}



/* Entry: 10b68da34; end: 10b68da73; -[FLAnimatedImageView setCurrentFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b68da34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112791598;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b68da74; end: 10b68da83; -[FLAnimatedImageView currentFrameIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b68da74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279157c);
}



/* Entry: 10b68da84; end: 10b68da93; -[FLAnimatedImageView setCurrentFrameIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b68da84(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11279157c) = param_3;
  return;
}



/* Entry: 10b68da94; end: 10b68daa3; -[FLAnimatedImageView loopCountdown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b68da94(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791580);
}



/* Entry: 10b68daa4; end: 10b68dab3; -[FLAnimatedImageView setLoopCountdown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b68daa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112791580) = param_3;
  return;
}



/* Entry: 10b68dab4; end: 10b68dac3; -[FLAnimatedImageView accumulator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b68dab4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791584);
}



/* Entry: 10b68dac4; end: 10b68dad3; -[FLAnimatedImageView setAccumulator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b68dac4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112791584) = param_1;
  return;
}



/* Entry: 10b68dad4; end: 10b68dae3; -[FLAnimatedImageView displayLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b68dad4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112791594);
}



/* Entry: 10b68dae4; end: 10b68db23; -[FLAnimatedImageView setDisplayLink:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b68dae4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112791594;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b68db24; end: 10b68db33; -[FLAnimatedImageView shouldAnimate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b68db24(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112791588);
}



/* Entry: 10b68db34; end: 10b68db43; -[FLAnimatedImageView setShouldAnimate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b68db34(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112791588) = param_3;
  return;
}



/* Entry: 10b68db44; end: 10b68db53; -[FLAnimatedImageView needsDisplayWhenImageBecomesAvailable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b68db44(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11279158c);
}



/* Entry: 10b68db54; end: 10b68db63; -[FLAnimatedImageView setNeedsDisplayWhenImageBecomesAvailable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b68db54(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11279158c) = param_3;
  return;
}



/* Entry: 10b68db64; end: 10b68dbb3; -[FLAnimatedImageView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b68db64(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112791594,0);
  _objc_storeStrong(param_1 + _DAT_112791598,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112791590,0);
  return;
}



/* Entry: 10b68dbb4; end: 10b68dc27; -[SCMediaTranscodingConfigurationProviderServices initWithConfigurationProvider:] */

undefined1 * FUN_10b68dbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709ba0;
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



/* Entry: 10b68dc28; end: 10b68dc2f; -[SCMediaTranscodingConfigurationProviderServices provider] */

undefined8 FUN_10b68dc28(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b68dc30; end: 10b68dc3b; -[SCMediaTranscodingConfigurationProviderServices .cxx_destruct] */

void FUN_10b68dc30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b68dc3c; end: 10b68dd63;  */

undefined1 *
FUN_10b68dc3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined1 param_18)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_a0;
  undefined *puStack_98;
  
  plVar1 = &lStack_a0;
  _objc_retain(param_14);
  puVar4 = (undefined1 *)0x0;
  if (param_6 != 0) {
    puStack_98 = PTR_PTR_112709ba8;
    lStack_a0 = param_6;
    _objc_msgSendSuper2(&lStack_a0,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined1 *)((long)plVar1 + 8) = param_7;
      *(undefined1 *)((long)plVar1 + 9) = param_8;
      *(undefined1 *)((long)plVar1 + 10) = param_9;
      *(undefined1 *)((long)plVar1 + 0xb) = param_10;
      *(undefined8 *)((long)plVar1 + 0x50) = param_1;
      *(undefined8 *)((long)plVar1 + 0x58) = param_2;
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      *(undefined8 *)((long)plVar1 + 0x20) = param_11;
      *(undefined8 *)((long)plVar1 + 0x28) = param_12;
      *(undefined8 *)((long)plVar1 + 0x30) = param_13;
      uVar2 = param_14;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x38);
      *(undefined8 *)((long)plVar1 + 0x38) = uVar2;
      _objc_release(uVar3);
      *(undefined1 *)((long)plVar1 + 0xc) = param_15;
      *(undefined8 *)((long)plVar1 + 0x40) = param_5;
      *(undefined8 *)((long)plVar1 + 0x48) = param_17;
      *(undefined1 *)((long)plVar1 + 0xd) = param_18;
    }
  }
  _objc_release(param_14);
  return puVar4;
}



/* Entry: 10b68dd64; end: 10b68dd87; -[SCVideoTranscodingConfiguration copyWithZone:] */

undefined8 FUN_10b68dd64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b68dd88; end: 10b68dedb; -[SCVideoTranscodingConfiguration hash] */

ulong * FUN_10b68dd88(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  ulong uVar10;
  double dVar12;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  ulong uVar11;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar6 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_88 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_80 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar10 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar9 >> 0x18),
                                           (uint6)(byte)((uint)uVar9 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar9) & 0xffffffffffffff01;
  uVar2 = (uint)CONCAT12((char)((uint)uVar9 >> 8),(short)uVar10);
  uVar11 = CONCAT44((int)(uVar10 >> 0x20),uVar2) & 0xffffffffff01ffff;
  uVar10 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar11)) &
           0xff01ff01ffffffff;
  uVar8 = (ushort)(uVar10 >> 0x30);
  uStack_a8 = (ulong)uVar2 & 0xff;
  uStack_a0 = uVar10 >> 0x10 & 0xff;
  uStack_98 = (ulong)CONCAT24(uVar8,(uint)(ushort)(uVar10 >> 0x20)) & 0xffffffff;
  uStack_90 = (ulong)uVar8;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_78 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar6 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_70 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_40 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_30 = (ulong)*(byte *)(param_1 + 0xd);
  puVar4 = &uStack_a8;
  uStack_50 = uVar3;
  func_0x000107c3191c(puVar4,0x10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b68e0b8:
    puVar7 = (ulong *)0x1;
  }
  else {
    puVar7 = (ulong *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b68e0bc;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar5 & 1) != 0) &&
         (((((char)puVar4[1] == (char)param_3[1] &&
            (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) &&
           (*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10))) &&
          ((*(char *)((long)puVar4 + 0xb) == *(char *)((long)param_3 + 0xb) &&
           (puVar4[4] == param_3[4])))))) && (puVar4[5] == param_3[5])) &&
       (((puVar4[6] == param_3[6] &&
         (*(char *)((long)puVar4 + 0xc) == *(char *)((long)param_3 + 0xc))) &&
        ((puVar4[9] == param_3[9] &&
         (*(char *)((long)puVar4 + 0xd) == *(char *)((long)param_3 + 0xd))))))) {
      puVar7 = (ulong *)0x0;
      if (((double)puVar4[10] != (double)param_3[10]) ||
         ((double)puVar4[0xb] != (double)param_3[0xb])) goto LAB_10b68e0bc;
      dVar12 = ABS((double)puVar4[2] - (double)param_3[2]);
      if ((dVar12 < 2.2250738585072014e-308) ||
         (dVar12 < ABS((double)puVar4[2] + (double)param_3[2]) * 2.220446049250313e-16)) {
        dVar12 = ABS((double)puVar4[3] - (double)param_3[3]);
        if ((dVar12 < 2.2250738585072014e-308) ||
           (dVar12 < ABS((double)puVar4[3] + (double)param_3[3]) * 2.220446049250313e-16)) {
          dVar12 = ABS((double)puVar4[8] - (double)param_3[8]);
          if ((dVar12 < 2.2250738585072014e-308) ||
             (dVar12 < ABS((double)puVar4[8] + (double)param_3[8]) * 2.220446049250313e-16)) {
            puVar7 = (ulong *)puVar4[7];
            if (puVar7 != (ulong *)param_3[7]) {
              func_0x00010c071ae0();
              goto LAB_10b68e0bc;
            }
            goto LAB_10b68e0b8;
          }
        }
      }
    }
    puVar7 = (ulong *)0x0;
  }
LAB_10b68e0bc:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10b68dedc; end: 10b68e0d7; -[SCVideoTranscodingConfiguration isEqual:] */

long FUN_10b68dedc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b68e0b8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b68e0bc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
           (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
          ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
           (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
       (((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
         (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) &&
        ((*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48) &&
         (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))))))) {
      lVar3 = 0;
      if ((*(double *)(param_1 + 0x50) != *(double *)(param_3 + 0x50)) ||
         (*(double *)(param_1 + 0x58) != *(double *)(param_3 + 0x58))) goto LAB_10b68e0bc;
      dVar4 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16)) {
          dVar4 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
          if ((dVar4 < 2.2250738585072014e-308) ||
             (dVar4 < ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                      2.220446049250313e-16)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if (lVar3 != *(long *)(param_3 + 0x38)) {
              func_0x00010c071ae0();
              goto LAB_10b68e0bc;
            }
            goto LAB_10b68e0b8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b68e0bc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b68e0d8; end: 10b68e0e3; -[SCVideoTranscodingConfiguration .cxx_destruct] */

void FUN_10b68e0d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,0);
  return;
}



/* Entry: 10b68e0e4; end: 10b68e267;  */

long * FUN_10b68e0e4(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,
                    undefined1 param_12,undefined1 param_13,long param_14,long param_15,
                    long param_16,long param_17,long param_18,long param_19,long param_20,
                    long param_21,long param_22,undefined1 param_23)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_b8;
  undefined *puStack_b0;
  
  _objc_retain(param_18);
  _objc_retain(param_20);
  plVar1 = (long *)0x0;
  if (param_9 != 0) {
    puStack_b0 = PTR_PTR_112709bb0;
    plVar1 = &lStack_b8;
    lStack_b8 = param_9;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      plVar1[0x11] = param_1;
      plVar1[0x12] = param_2;
      plVar1[0x13] = param_3;
      plVar1[0x14] = param_4;
      plVar1[2] = param_5;
      plVar1[3] = param_6;
      plVar1[4] = param_10;
      plVar1[5] = param_7;
      plVar1[6] = param_8;
      plVar1[7] = param_17;
      *(undefined1 *)(plVar1 + 1) = param_12;
      *(undefined1 *)((long)plVar1 + 9) = param_13;
      plVar1[8] = param_11;
      plVar1[9] = param_14;
      plVar1[10] = param_15;
      plVar1[0xb] = param_16;
      lVar2 = param_18;
      func_0x00010bf51e00();
      lVar3 = plVar1[0xc];
      plVar1[0xc] = lVar2;
      _objc_release(lVar3);
      plVar1[0xd] = param_19;
      lVar2 = param_20;
      func_0x00010bf51e00();
      lVar3 = plVar1[0xe];
      plVar1[0xe] = lVar2;
      _objc_release(lVar3);
      plVar1[0xf] = param_21;
      plVar1[0x10] = param_22;
      *(undefined1 *)((long)plVar1 + 10) = param_23;
    }
  }
  _objc_release(param_20);
  _objc_release(param_18);
  return plVar1;
}



/* Entry: 10b68e268; end: 10b68e28b; -[SCVideoTranscodingConfigurationProviderInput copyWithZone:] */

undefined8 FUN_10b68e268(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b68e28c; end: 10b68e46b; -[SCVideoTranscodingConfigurationProviderInput hash] */

ulong * FUN_10b68e28c(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  double dVar9;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = ~*(ulong *)(param_1 + 0x88) + *(ulong *)(param_1 + 0x88) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_d8 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_d8 = uStack_d8 ^ uStack_d8 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x90) + *(ulong *)(param_1 + 0x90) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_d0 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_d0 = uStack_d0 ^ uStack_d0 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x98) + *(ulong *)(param_1 + 0x98) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_c8 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_c8 = uStack_c8 ^ uStack_c8 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0xa0) + *(ulong *)(param_1 + 0xa0) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_c0 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_c0 = uStack_c0 ^ uStack_c0 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_b8 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_b8 = uStack_b8 ^ uStack_b8 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_b0 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_b0 = uStack_b0 ^ uStack_b0 >> 0x16;
  uStack_a8 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_a0 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_a0 = uStack_a0 ^ uStack_a0 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar6 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_98 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_98 = uStack_98 ^ uStack_98 >> 0x16;
  uStack_90 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_90 = uStack_90 ^ uStack_90 >> 0x16;
  uStack_80 = (ulong)*(byte *)(param_1 + 8);
  uStack_88 = *(undefined8 *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x48);
  uStack_78 = (ulong)*(byte *)(param_1 + 9);
  lStack_70 = -lVar2;
  if (-1 < lVar2) {
    lStack_70 = lVar2;
  }
  uStack_60 = *(undefined8 *)(param_1 + 0x58);
  uStack_68 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bfde980();
  lVar2 = *(long *)(param_1 + 0x68);
  uStack_48 = *(undefined8 *)(param_1 + 0x70);
  lStack_50 = -lVar2;
  if (-1 < lVar2) {
    lStack_50 = lVar2;
  }
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x78));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x80));
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  puVar4 = &uStack_d8;
  func_0x000107c3191c(puVar4,0x16);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b68e6fc:
    puVar8 = (ulong *)0x1;
  }
  else {
    puVar8 = (ulong *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10b68e708;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((puVar4[4] == param_3[4] && (puVar4[8] == param_3[8])) &&
           ((char)puVar4[1] == (char)param_3[1])) &&
          ((*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9) && (puVar4[9] == param_3[9])
           ))))) && (puVar4[10] == param_3[10])) &&
       (((puVar4[0xb] == param_3[0xb] && (puVar4[0xd] == param_3[0xd])) &&
        ((puVar4[0xf] == param_3[0xf] &&
         ((puVar4[0x10] == param_3[0x10] &&
          (*(char *)((long)puVar4 + 10) == *(char *)((long)param_3 + 10))))))))) {
      puVar8 = (ulong *)0x0;
      if (((double)puVar4[0x11] != (double)param_3[0x11]) ||
         ((((double)puVar4[0x12] != (double)param_3[0x12] ||
           (puVar8 = (ulong *)0x0, (double)puVar4[0x13] != (double)param_3[0x13])) ||
          ((double)puVar4[0x14] != (double)param_3[0x14])))) goto LAB_10b68e708;
      dVar9 = ABS((double)puVar4[2] - (double)param_3[2]);
      if ((dVar9 < 2.2250738585072014e-308) ||
         (dVar9 < ABS((double)puVar4[2] + (double)param_3[2]) * 2.220446049250313e-16)) {
        dVar9 = ABS((double)puVar4[3] - (double)param_3[3]);
        if ((dVar9 < 2.2250738585072014e-308) ||
           (dVar9 < ABS((double)puVar4[3] + (double)param_3[3]) * 2.220446049250313e-16)) {
          dVar9 = ABS((double)puVar4[5] - (double)param_3[5]);
          if ((dVar9 < 2.2250738585072014e-308) ||
             (dVar9 < ABS((double)puVar4[5] + (double)param_3[5]) * 2.220446049250313e-16)) {
            dVar9 = ABS((double)puVar4[6] - (double)param_3[6]);
            if ((dVar9 < 2.2250738585072014e-308) ||
               (dVar9 < ABS((double)puVar4[6] + (double)param_3[6]) * 2.220446049250313e-16)) {
              dVar9 = ABS((double)puVar4[7] - (double)param_3[7]);
              if (((dVar9 < 2.2250738585072014e-308) ||
                  (dVar9 < ABS((double)puVar4[7] + (double)param_3[7]) * 2.220446049250313e-16)) &&
                 ((uVar7 = puVar4[0xc], uVar7 == param_3[0xc] ||
                  (func_0x00010c071ae0(), (int)uVar7 != 0)))) {
                puVar8 = (ulong *)puVar4[0xe];
                if (puVar8 != (ulong *)param_3[0xe]) {
                  func_0x00010c071ae0();
                  goto LAB_10b68e708;
                }
                goto LAB_10b68e6fc;
              }
            }
          }
        }
      }
    }
    puVar8 = (ulong *)0x0;
  }
LAB_10b68e708:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10b68e46c; end: 10b68e723; -[SCVideoTranscodingConfigurationProviderInput isEqual:] */

long FUN_10b68e46c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b68e6fc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b68e708;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
            (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
           (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
          ((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
           (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))))))) &&
        (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))) &&
       (((*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58) &&
         (*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68))) &&
        ((*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78) &&
         ((*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80) &&
          (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))))))) {
      lVar3 = 0;
      if ((*(double *)(param_1 + 0x88) != *(double *)(param_3 + 0x88)) ||
         (((*(double *)(param_1 + 0x90) != *(double *)(param_3 + 0x90) ||
           (lVar3 = 0, *(double *)(param_1 + 0x98) != *(double *)(param_3 + 0x98))) ||
          (*(double *)(param_1 + 0xa0) != *(double *)(param_3 + 0xa0))))) goto LAB_10b68e708;
      dVar4 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                    2.220446049250313e-16)) {
          dVar4 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
          if ((dVar4 < 2.2250738585072014e-308) ||
             (dVar4 < ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                      2.220446049250313e-16)) {
            dVar4 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
            if ((dVar4 < 2.2250738585072014e-308) ||
               (dVar4 < ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                        2.220446049250313e-16)) {
              dVar4 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
              if (((dVar4 < 2.2250738585072014e-308) ||
                  (dVar4 < ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                           2.220446049250313e-16)) &&
                 ((lVar3 = *(long *)(param_1 + 0x60), lVar3 == *(long *)(param_3 + 0x60) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)))) {
                lVar3 = *(long *)(param_1 + 0x70);
                if (lVar3 != *(long *)(param_3 + 0x70)) {
                  func_0x00010c071ae0();
                  goto LAB_10b68e708;
                }
                goto LAB_10b68e6fc;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b68e708:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b68e724; end: 10b68e753; -[SCVideoTranscodingConfigurationProviderInput .cxx_destruct] */

void FUN_10b68e724(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x60,0);
  return;
}



/* Entry: 10b68e754; end: 10b68e773;  */

void FUN_10b68e754(void)

{
  _objc_opt_self();
  _objc_alloc_init(PTR_PTR_1126da190);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b68e774; end: 10b68e83b;  */

void FUN_10b68e774(long param_1)

{
  if (param_1 != 0) {
    _objc_alloc(PTR_PTR_1126da0b0);
    FUN_10b68e0e4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                  *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                  *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                  *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b68e83c; end: 10b68e86b; -[SCVideoTranscodingConfigurationProviderInputBuilder .cxx_destruct] */

void FUN_10b68e83c(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x80,0);
  return;
}



/* Entry: 10b68e86c; end: 10b68e9f7; -[SCMediaTranscodingDestinationInfo initWithCoder:] */

undefined1 * FUN_10b68e86c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709bb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xc) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xd) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xe) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xf) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x11) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x12) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x13) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0x14) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b68e9f8; end: 10b68eb1b;  */

long * FUN_10b68e9f8(long param_1,long param_2,undefined1 param_3,undefined1 param_4,
                    undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                    undefined4 param_9,undefined4 param_10)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_2);
  plVar1 = (long *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_112709bb8;
    plVar1 = &lStack_70;
    lStack_70 = param_1;
    _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
    if (plVar1 != (long *)0x0) {
      lVar2 = param_2;
      func_0x00010bf51e00();
      lVar3 = plVar1[3];
      plVar1[3] = lVar2;
      _objc_release(lVar3);
      *(undefined1 *)(plVar1 + 1) = param_3;
      *(undefined1 *)((long)plVar1 + 9) = param_4;
      *(undefined1 *)((long)plVar1 + 10) = param_5;
      *(undefined1 *)((long)plVar1 + 0xb) = param_6;
      *(undefined1 *)((long)plVar1 + 0xc) = param_7;
      *(undefined1 *)((long)plVar1 + 0xd) = param_8;
      *(undefined1 *)((long)plVar1 + 0xe) = (undefined1)param_9;
      *(undefined1 *)((long)plVar1 + 0xf) = param_9._1_1_;
      *(undefined1 *)(plVar1 + 2) = param_9._2_1_;
      *(undefined1 *)((long)plVar1 + 0x11) = param_9._3_1_;
      *(undefined1 *)((long)plVar1 + 0x12) = (undefined1)param_10;
      *(undefined1 *)((long)plVar1 + 0x13) = param_10._1_1_;
      *(undefined1 *)((long)plVar1 + 0x14) = param_10._2_1_;
    }
  }
  _objc_release(param_2);
  return plVar1;
}



/* Entry: 10b68eb1c; end: 10b68eb3f; -[SCMediaTranscodingDestinationInfo copyWithZone:] */

undefined8 FUN_10b68eb1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b68eb40; end: 10b68ec8f; -[SCMediaTranscodingDestinationInfo encodeWithCoder:] */

void FUN_10b68eb40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f6d618);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f6d638);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f6d658);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f6d678);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110f6d698);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xc),
                      &PTR____CFConstantStringClassReference_110f6d6b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xd),
                      &PTR____CFConstantStringClassReference_110f6d6d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xe),
                      &PTR____CFConstantStringClassReference_110f6d6f8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xf),
                      &PTR____CFConstantStringClassReference_110f6d718);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f6d738);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x11),
                      &PTR____CFConstantStringClassReference_110f6d758);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x12),
                      &PTR____CFConstantStringClassReference_110f6d778);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x13),
                      &PTR____CFConstantStringClassReference_110f6d798);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x14),
                      &PTR____CFConstantStringClassReference_110f6d7b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b68ec90; end: 10b68ed6f; -[SCMediaTranscodingDestinationInfo hash] */

undefined8 * FUN_10b68ec90(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ushort uVar6;
  ushort uVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar8 = *(undefined4 *)(param_1 + 8);
  uVar9 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar8 >> 0x18),
                                          (uint6)(byte)((uint)uVar8 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar8) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar8 >> 8),(short)uVar9);
  uVar10 = CONCAT44((int)(uVar9 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar9 = CONCAT26((short)(uVar10 >> 0x30),CONCAT24((short)(uVar9 >> 0x20),(int)uVar10)) &
          0xff01ff01ffffffff;
  uVar6 = (ushort)(uVar9 >> 0x30);
  uStack_90 = (ulong)uVar1 & 0xff;
  uStack_88 = uVar9 >> 0x10 & 0xff;
  uStack_80 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar9 >> 0x20)) & 0xffffffff;
  uStack_78 = (ulong)uVar6;
  uVar8 = *(undefined4 *)(param_1 + 0xc);
  uVar10 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar8 >> 0x18),
                                           (uint6)(byte)((uint)uVar8 >> 0x10) << 0x20) >> 0x10),
                           (ushort)(byte)uVar8) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar8 >> 8),(short)uVar10);
  uVar9 = CONCAT44((int)(uVar10 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar9 = CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar10 >> 0x20),(int)uVar9)) &
          0xff01ff01ffffffff;
  uVar6 = (ushort)(uVar9 >> 0x30);
  uStack_70 = (ulong)uVar1 & 0xff;
  uStack_68 = uVar9 >> 0x10 & 0xff;
  uStack_60 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar9 >> 0x20)) & 0xffffffff;
  uStack_58 = (ulong)uVar6;
  uVar8 = *(undefined4 *)(param_1 + 0x10);
  uVar9 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar8 >> 0x18),
                                          (uint6)(byte)((uint)uVar8 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar8) & 0xffffffffffffff01;
  uVar10 = CONCAT44((int)(uVar9 >> 0x20),(uint)CONCAT12((char)((uint)uVar8 >> 8),(short)uVar9)) &
           0xffffffffff01ffff;
  uVar8 = (undefined4)uVar10;
  uVar9 = CONCAT26((short)(uVar10 >> 0x30),CONCAT24((short)(uVar9 >> 0x20),uVar8)) &
          0xff01ff01ffffffff;
  uVar6 = (ushort)(uVar9 >> 0x10);
  uVar7 = (ushort)(uVar9 >> 0x30);
  uStack_50 = (ulong)(CONCAT24(uVar6,uVar8) & 0xffff0000ffff) & 0xffffffff;
  uStack_48 = (ulong)uVar6;
  uStack_40 = (ulong)CONCAT24(uVar7,(uint)(ushort)(uVar9 >> 0x20)) & 0xffffffff;
  uStack_38 = (ulong)uVar7;
  uStack_30 = (ulong)*(byte *)(param_1 + 0x14);
  puVar3 = &uStack_98;
  uStack_98 = uVar2;
  func_0x000107c3191c(puVar3,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b68eeb4;
    puVar5 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if (((((ulong)puVar4 & 1) == 0) ||
        (((*(char *)(puVar3 + 1) != *(char *)(param_3 + 1) ||
          (*(char *)((long)puVar3 + 9) != *(char *)((long)param_3 + 9))) ||
         (*(char *)((long)puVar3 + 10) != *(char *)((long)param_3 + 10))))) ||
       ((((*(char *)((long)puVar3 + 0xb) != *(char *)((long)param_3 + 0xb) ||
          (*(char *)((long)puVar3 + 0xc) != *(char *)((long)param_3 + 0xc))) ||
         (*(char *)((long)puVar3 + 0xd) != *(char *)((long)param_3 + 0xd))) ||
        (((*(char *)((long)puVar3 + 0xe) != *(char *)((long)param_3 + 0xe) ||
          (*(char *)((long)puVar3 + 0xf) != *(char *)((long)param_3 + 0xf))) ||
         (((*(char *)(puVar3 + 2) != *(char *)(param_3 + 2) ||
           (((*(char *)((long)puVar3 + 0x11) != *(char *)((long)param_3 + 0x11) ||
             (*(char *)((long)puVar3 + 0x12) != *(char *)((long)param_3 + 0x12))) ||
            (*(char *)((long)puVar3 + 0x13) != *(char *)((long)param_3 + 0x13))))) ||
          (*(char *)((long)puVar3 + 0x14) != *(char *)((long)param_3 + 0x14))))))))) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_10b68eeb4;
    }
    puVar5 = (undefined8 *)puVar3[3];
    if (puVar5 != (undefined8 *)param_3[3]) {
      func_0x00010c071ae0();
      goto LAB_10b68eeb4;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_10b68eeb4:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b68ed70; end: 10b68eecf; -[SCMediaTranscodingDestinationInfo isEqual:] */

long FUN_10b68ed70(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b68eeb4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) == 0) ||
        (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
         (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) ||
       ((((*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb) ||
          (*(char *)(param_1 + 0xc) != *(char *)(param_3 + 0xc))) ||
         (*(char *)(param_1 + 0xd) != *(char *)(param_3 + 0xd))) ||
        (((*(char *)(param_1 + 0xe) != *(char *)(param_3 + 0xe) ||
          (*(char *)(param_1 + 0xf) != *(char *)(param_3 + 0xf))) ||
         (((*(char *)(param_1 + 0x10) != *(char *)(param_3 + 0x10) ||
           (((*(char *)(param_1 + 0x11) != *(char *)(param_3 + 0x11) ||
             (*(char *)(param_1 + 0x12) != *(char *)(param_3 + 0x12))) ||
            (*(char *)(param_1 + 0x13) != *(char *)(param_3 + 0x13))))) ||
          (*(char *)(param_1 + 0x14) != *(char *)(param_3 + 0x14))))))))) {
      lVar3 = 0;
      goto LAB_10b68eeb4;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10b68eeb4;
    }
  }
  lVar3 = 1;
LAB_10b68eeb4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b68eed0; end: 10b68eee7;  */

byte FUN_10b68eed0(long param_1)

{
  byte bVar1;
  
  if (param_1 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 9);
  }
  return bVar1 & 1;
}



/* Entry: 10b68eee8; end: 10b68eef3; -[SCMediaTranscodingDestinationInfo .cxx_destruct] */

void FUN_10b68eee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b68eef4; end: 10b68ef13;  */

void FUN_10b68eef4(void)

{
  _objc_opt_self();
  _objc_alloc_init(PTR_PTR_1126c4288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b68ef14; end: 10b68f1bb;  */

void FUN_10b68ef14(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  byte bVar3;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar1 = PTR_PTR_1126c4288;
  FUN_10b68eef4(PTR_PTR_1126c4288);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
  }
  _objc_retain(uVar2);
  func_0x00010b68f228(puVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    func_0x00010b68f26c(puVar1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f29c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f2cc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f2fc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f32c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f35c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f38c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f3bc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f3ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f41c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f44c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f47c();
    _objc_retainAutoreleasedReturnValue();
    bVar3 = 0;
  }
  else {
    func_0x00010b68f26c(puVar1,*(undefined1 *)(param_2 + 8));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f29c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f2cc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f2fc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f32c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f35c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f38c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f3bc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f3ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f41c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f44c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b68f47c();
    _objc_retainAutoreleasedReturnValue();
    bVar3 = *(byte *)(param_2 + 0x14);
  }
  _objc_release(param_2);
  func_0x00010b68f4ac(puVar1,bVar3 & 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b68f1bc; end: 10b68f4db;  */

void FUN_10b68f1bc(long param_1)

{
  if (param_1 != 0) {
    _objc_alloc(PTR_PTR_1126c4910);
    FUN_10b68e9f8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b68f4dc; end: 10b68f4e7; -[SCMediaTranscodingDestinationInfoBuilder .cxx_destruct] */

void FUN_10b68f4dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b68f4e8; end: 10b68f543; +[SCSpectaclesRectificationConfiguration hermosaWithCamera:] */

void FUN_10b68f4e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3570;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b68f544; end: 10b68f58f; +[SCSpectaclesRectificationConfiguration matador] */

void FUN_10b68f544(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3570;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b68f590; end: 10b68f627; +[SCSpectaclesRectificationConfiguration newportFisheyeWithLookupTable:stabilization:] */

void FUN_10b68f590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d3570;
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



/* Entry: 10b68f628; end: 10b68f67b; +[SCSpectaclesRectificationConfiguration rectifiedWithCamera:] */

void FUN_10b68f628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3570;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b68f67c; end: 10b68f69f; -[SCSpectaclesRectificationConfiguration copyWithZone:] */

undefined8 FUN_10b68f67c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b68f6a0; end: 10b68f71f; -[SCSpectaclesRectificationConfiguration hash] */

void FUN_10b68f6a0(long param_1)

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
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_112709bc0;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b68f720; end: 10b68f763; -[SCSpectaclesRectificationConfiguration internalInit] */

void FUN_10b68f720(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112709bc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b68f764; end: 10b68f83b; -[SCSpectaclesRectificationConfiguration isEqual:] */

long FUN_10b68f764(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b68f814:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b68f820;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b68f820;
        }
        goto LAB_10b68f814;
      }
    }
    lVar3 = 0;
  }
LAB_10b68f820:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b68f83c; end: 10b68f92f; -[SCSpectaclesRectificationConfiguration matchRectified:newportFisheye:hermosa:matador:] */

void FUN_10b68f83c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 != 0) {
      if ((lVar2 == 1) && (param_4 != 0)) {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
      }
      goto LAB_10b68f900;
    }
    if (param_3 == 0) goto LAB_10b68f900;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
  }
  else {
    if (lVar2 != 2) {
      if ((lVar2 == 3) && (param_6 != 0)) {
        (**(code **)(param_6 + 0x10))(param_6);
      }
      goto LAB_10b68f900;
    }
    if (param_5 == 0) goto LAB_10b68f900;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10b68f900:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b68f930; end: 10b68f95f; -[SCSpectaclesRectificationConfiguration .cxx_destruct] */

void FUN_10b68f930(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b68f960; end: 10b68fa13; -[SCImageProcessVideoCircleConfiguration initWithCoder:] */

undefined1 * FUN_10b68f960(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_4);
  puStack_28 = PTR_PTR_112709bc8;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    func_0x00010bf66e40(param_4);
    *(double *)((long)puVar1 + 0x18) = (double)param_1;
    uVar2 = param_4;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b68fa14; end: 10b68faab; -[SCImageProcessVideoCircleConfiguration initWithColor:padding:renderWithoutEdits:] */

undefined1 *
FUN_10b68fa14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112709bc8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b68faac; end: 10b68facf; -[SCImageProcessVideoCircleConfiguration copyWithZone:] */

undefined8 FUN_10b68faac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b68fad0; end: 10b68fb47; -[SCImageProcessVideoCircleConfiguration encodeWithCoder:] */

void FUN_10b68fad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110de8258);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x18),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f6d7d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f6d7f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b68fb48; end: 10b68fbdb; -[SCImageProcessVideoCircleConfiguration hash] */

undefined8 * FUN_10b68fb48(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b68fc88:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b68fc94;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      dVar8 = ABS(*(double *)((long)puVar3 + 0x18) - *(double *)(param_3 + 0x18));
      dVar7 = ABS(*(double *)((long)puVar3 + 0x18) + *(double *)(param_3 + 0x18)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071c60();
          goto LAB_10b68fc94;
        }
        goto LAB_10b68fc88;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b68fc94:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b68fbdc; end: 10b68fcaf; -[SCImageProcessVideoCircleConfiguration isEqual:] */

long FUN_10b68fbdc(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b68fc88:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b68fc94;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071c60();
          goto LAB_10b68fc94;
        }
        goto LAB_10b68fc88;
      }
    }
    lVar4 = 0;
  }
LAB_10b68fc94:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b68fcb0; end: 10b68fcb7; -[SCImageProcessVideoCircleConfiguration color] */

undefined8 FUN_10b68fcb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b68fcb8; end: 10b68fcbf; -[SCImageProcessVideoCircleConfiguration padding] */

undefined8 FUN_10b68fcb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b68fcc0; end: 10b68fcc7; -[SCImageProcessVideoCircleConfiguration renderWithoutEdits] */

undefined1 FUN_10b68fcc0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b68fcc8; end: 10b68fcd3; -[SCImageProcessVideoCircleConfiguration .cxx_destruct] */

void FUN_10b68fcc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b68fcd4; end: 10b68fdab; -[SCSpectaclesLookupTable initWithCamera:fieldOfView:data:alignment:size:] */

undefined1 *
FUN_10b68fcd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112709bd0;
  uStack_60 = param_4;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10b68fdac; end: 10b68febb; -[SCSpectaclesLookupTable initWithCoder:] */

undefined1 *
FUN_10b68fdac(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112709bd0;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x00010bf66e40(param_5);
    dVar4 = (double)param_1;
    *(double *)((long)puVar1 + 0x10) = dVar4;
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf67000(param_5);
    _objc_retainAutoreleasedReturnValue();
    _CGSizeFromString();
    *(double *)((long)puVar1 + 0x28) = dVar4;
    *(undefined8 *)((long)puVar1 + 0x30) = param_2;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b68febc; end: 10b68fedf; -[SCSpectaclesLookupTable copyWithZone:] */

undefined8 FUN_10b68febc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b68fee0; end: 10b68ff9b; -[SCSpectaclesLookupTable encodeWithCoder:] */

void FUN_10b68fee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110df62b8);
  func_0x00010bf92ee0((float)*(double *)(param_1 + 0x10),param_3,param_2,
                      &PTR____CFConstantStringClassReference_110f6d818);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110eb6cf8);
  uVar1 = param_3;
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f6d838);
  _NSStringFromCGSize(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f6d858);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b68ff9c; end: 10b690077; -[SCSpectaclesLookupTable hash] */

undefined8 * FUN_10b68ff9c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar7 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_58;
  uStack_40 = uVar3;
  func_0x000107c3191c(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b690160:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b69016c;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (puVar4[1] == param_3[1])) {
      dVar10 = ABS((double)puVar4[2] - (double)param_3[2]);
      dVar9 = ABS((double)puVar4[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (bVar1) {
        puVar8 = (undefined8 *)0x0;
        if (((double)puVar4[5] != (double)param_3[5]) || ((double)puVar4[6] != (double)param_3[6]))
        goto LAB_10b69016c;
        lVar6 = puVar4[3];
        if ((lVar6 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          puVar8 = (undefined8 *)puVar4[4];
          if (puVar8 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10b69016c;
          }
          goto LAB_10b690160;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_10b69016c:
  _objc_release(param_3);
  return puVar8;
}


