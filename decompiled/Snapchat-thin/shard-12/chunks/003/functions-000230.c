/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ff3890; end: 108ff39bb; -[SCAvatarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff3890(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277f68c);
  _objc_storeStrong(param_1 + _DAT_11277f67c,0);
  _objc_storeStrong(param_1 + _DAT_11277f678,0);
  _objc_storeStrong(param_1 + _DAT_11277f674,0);
  _objc_storeStrong(param_1 + _DAT_11277f660,0);
  _objc_storeStrong(param_1 + _DAT_11277f634,0);
  _objc_storeStrong(param_1 + _DAT_11277f690,0);
  _objc_storeStrong(param_1 + _DAT_11277f654,0);
  _objc_storeStrong(param_1 + _DAT_11277f650,0);
  _objc_storeStrong(param_1 + _DAT_11277f64c,0);
  _objc_storeStrong(param_1 + _DAT_11277f648,0);
  _objc_storeStrong(param_1 + _DAT_11277f65c,0);
  _objc_storeStrong(param_1 + _DAT_11277f658,0);
  _objc_storeStrong(param_1 + _DAT_11277f644,0);
  _objc_storeStrong(param_1 + _DAT_11277f640,0);
  _objc_storeStrong(param_1 + _DAT_11277f63c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f638,0);
  return;
}



/* Entry: 108ff39bc; end: 108ff39e7;  */

void FUN_108ff39bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_108ff9580();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam0000000113730610;
  uRam0000000113730610 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ff39e8; end: 108ff3a87;  */

void FUN_108ff39e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR_PTR_1126b1a08;
  _objc_opt_class(PTR_PTR_1126b1a08);
  func_0x00010bf249e0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar4,param_2,&PTR____CFConstantStringClassReference_110ea9c58,puVar3,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113730620;
  puRam0000000113730620 = puVar2;
  _objc_release(uVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108ff3a88; end: 108ff3a93; +[SCBitmojiAvatarContainerView announcerIdentifier] */

undefined ** FUN_108ff3a88(void)

{
  return &PTR____CFConstantStringClassReference_110f16a98;
}



/* Entry: 108ff3a94; end: 108ff3aa3; -[SCBitmojiAvatarContainerView addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff3a94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f694),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 108ff3aa4; end: 108ff3ab3; -[SCBitmojiAvatarContainerView removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff3aa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f694),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 108ff3ab4; end: 108ff3ac3; -[SCBitmojiAvatarContainerView didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff3ab4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f694),
             PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 108ff3ac4; end: 108ff3c57; -[SCBitmojiAvatarContainerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108ff3ac4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ffc60;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_48,puVar1);
    func_0x00010c1af000(puVar1);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f698);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f698) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f69c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f69c) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f6a0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f6a0) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f694);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f694) = puVar2;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return puVar1;
}



/* Entry: 108ff3c58; end: 108ff3ca7;  */

void FUN_108ff3c58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9728;
  _objc_opt_new(PTR_PTR_1126c9728);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ff3ca8; end: 108ff3cdf;  */

void FUN_108ff3ca8(void)

{
  _objc_opt_new(PTR_PTR_1126dc520);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ff3ce0; end: 108ff3d1b; -[SCBitmojiAvatarContainerView prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff3ce0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f6a4);
  *(undefined8 *)(param_1 + _DAT_11277f6a4) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_11277f6a8) = 0;
  return;
}



/* Entry: 108ff3d1c; end: 108ff3f83; -[SCBitmojiAvatarContainerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff3d1c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ffc60;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  uVar1 = *(undefined8 *)(param_5 + _DAT_11277f698);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  func_0x00010bf20c00(param_5);
  uVar1 = *(undefined8 *)(param_5 + _DAT_11277f69c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_5 + _DAT_11277f6a4);
  func_0x00010bf20c00(param_5);
  FUN_108ff8758(uVar1,1);
  dVar3 = param_1;
  _CGRectGetWidth();
  dVar4 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  lVar2 = (long)_DAT_11277f6a0;
  uVar1 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  dVar5 = 0.0;
  func_0x00010c1739e0(0,0,dVar3,dVar4);
  _objc_release(uVar1);
  dVar3 = param_1;
  _CGRectGetMidX(param_1,param_2,param_3,param_4);
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  uVar1 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar3,param_1);
  _objc_release(uVar1);
  if (((*(byte *)(param_5 + _DAT_11277f6ac) >> 1 & 1) != 0) ||
     (*(long *)(param_5 + _DAT_11277f6a8) != 0)) {
    func_0x00010bf20c00(param_5);
    _CGRectGetHeight();
    dVar5 = dVar3 * 0.5;
  }
  lVar2 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar5);
  _objc_release(lVar2);
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(param_5);
  return;
}



/* Entry: 108ff3f84; end: 108ff4123; -[SCBitmojiAvatarContainerView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff3f84(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11277f6a4;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_108ff40e0;
    }
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = uVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,param_1);
    func_0x00010bf1aa00(param_3);
    uVar3 = param_3;
    func_0x00010bfce6a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010be353e0(param_1);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
LAB_108ff40e0:
  _objc_release(param_3);
  return;
}



/* Entry: 108ff4124; end: 108ff4157;  */

void FUN_108ff4124(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beaa140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ff4158; end: 108ff41f3; -[SCBitmojiAvatarContainerView setPreferredImageSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff4158(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f6b0;
  *(undefined8 *)(param_3 + lVar2) = param_1;
  ((undefined8 *)(param_3 + lVar2))[1] = param_2;
  uVar1 = *(undefined8 *)(param_3 + _DAT_11277f698);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e0040(param_1,param_2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_3 + _DAT_11277f69c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e0040(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ff41f4; end: 108ff42af; -[SCBitmojiAvatarContainerView setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff41f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setBackgroundColor__112639330;
  puStack_38 = PTR_PTR_1126ffc60;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f698);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f69c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 108ff42b0; end: 108ff4333; -[SCBitmojiAvatarContainerView setOptimizationOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff42b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + _DAT_11277f6ac) = param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f698);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5da0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f69c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ff4334; end: 108ff46cb; -[SCBitmojiAvatarContainerView _setViewModelAfterHidingBitmojiAccessory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff4334(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277f6a4;
  puVar4 = *(undefined **)(param_1 + lVar6);
  _objc_retain(puVar4);
  _objc_retain(param_3);
  if (puVar4 == param_3) {
    _objc_release(param_3);
    _objc_release(puVar4);
LAB_108ff43bc:
    puVar4 = PTR_PTR_1126dc470;
    _objc_alloc(PTR_PTR_1126dc470);
    _objc_retain(param_3);
    puVar1 = param_3;
    func_0x00010bf1a9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined *)(ulong)(puVar1 != (undefined *)0x0);
    _objc_release();
    puVar2 = param_3;
    func_0x00010bf1ae20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 == (undefined *)0x0) {
      puVar1 = param_3;
      func_0x00010bfce6a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = param_3;
        func_0x00010bfce6a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bf529e0();
        puVar5 = puVar2 + (long)puVar5;
        _objc_release(puVar1);
      }
    }
    else {
      puVar5 = (undefined *)0x1;
      if (puVar1 != (undefined *)0x0) {
        puVar5 = (undefined *)0x2;
      }
    }
    _objc_release(param_3);
    func_0x00010c02f260(puVar4,param_2,puVar5);
    puVar5 = param_3;
    func_0x00010bf1ae20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 == (undefined *)0x0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_11277f698);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
    }
    else {
      func_0x00010beb8040(param_1);
      uVar3 = *(undefined8 *)(param_1 + _DAT_11277f698);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_3;
      func_0x00010bf1ae20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c222880(uVar3,param_2,puVar5,puVar4);
      _objc_release(puVar5);
    }
    _objc_release(uVar3);
    puVar5 = param_3;
    func_0x00010bfce6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 == (undefined *)0x0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_11277f69c);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
    }
    else {
      func_0x00010beb9520(param_1);
      uVar3 = *(undefined8 *)(param_1 + _DAT_11277f69c);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_3;
      func_0x00010bfce6a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2229c0(uVar3,param_2,puVar5,1,puVar4);
      _objc_release(puVar5);
    }
    _objc_release(uVar3);
    lVar6 = *(long *)(param_1 + lVar6);
    func_0x00010bf1a9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 == 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_11277f6a0);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      *(undefined8 *)(param_1 + _DAT_11277f6a8) = 0;
    }
    else {
      func_0x00010beb7f40(param_1);
      uVar3 = *(undefined8 *)(param_1 + _DAT_11277f6a0);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_3;
      func_0x00010bf1a9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c222880(uVar3,param_2,puVar5,puVar4);
      _objc_release(puVar5);
      _objc_release(uVar3);
      puVar5 = param_3;
      func_0x00010bf1aa00(param_3);
      puVar1 = param_3;
      func_0x00010bfce6a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdca920(param_1,param_2,puVar5,puVar1 != (undefined *)0x0);
      _objc_release(puVar1);
    }
    func_0x00010c1cbe20(param_1);
  }
  else if (param_3 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x00010c071ae0(puVar4,param_2,param_3);
    _objc_release(param_3);
    _objc_release(puVar4);
    if ((int)puVar5 == 0) goto LAB_108ff46b0;
    goto LAB_108ff43bc;
  }
  _objc_release(puVar4);
LAB_108ff46b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ff46cc; end: 108ff479b; -[SCBitmojiAvatarContainerView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff46cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f6b4);
  *(undefined8 *)(param_1 + _DAT_11277f6b4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f698);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f69c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f6a0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ff479c; end: 108ff481b; -[SCBitmojiAvatarContainerView setComposerRuntimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff479c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f6b8);
  *(undefined8 *)(param_1 + _DAT_11277f6b8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f698);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ff80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ff481c; end: 108ff4907; -[SCBitmojiAvatarContainerView bitmojiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff481c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  puVar4 = (ulong *)(param_1 + _DAT_11277f698);
  uVar1 = *puVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
LAB_108ff4888:
    puVar4 = (ulong *)(param_1 + _DAT_11277f69c);
    uVar1 = *puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) goto LAB_108ff48f4;
    uVar2 = *puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) goto LAB_108ff48f4;
  }
  else {
    uVar2 = *puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c074c20();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 != 0) goto LAB_108ff4888;
  }
  func_0x00010c269d40(*puVar4);
  _objc_retainAutoreleasedReturnValue();
LAB_108ff48f4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ff4908; end: 108ff4ab7; -[SCBitmojiAvatarContainerView _showBitmojiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff4908(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = (long)_DAT_11277f698;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d5da0();
    _objc_release(uVar2);
    lVar1 = param_1;
    func_0x00010bf13d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar2);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277f6b0);
    uVar5 = ((undefined8 *)(param_1 + _DAT_11277f6b0))[1];
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e0040(uVar4,uVar5);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa200();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ff80();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108ff4ab8; end: 108ff4c3b; -[SCBitmojiAvatarContainerView _showGroupBitmojiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff4ab8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = (long)_DAT_11277f69c;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d5da0();
    _objc_release(uVar2);
    lVar1 = param_1;
    func_0x00010bf13d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar2);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277f6b0);
    uVar5 = ((undefined8 *)(param_1 + _DAT_11277f6b0))[1];
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e0040(uVar4,uVar5);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa200();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108ff4c3c; end: 108ff4d0b; -[SCBitmojiAvatarContainerView _showBitmojiAccessoryAvatarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff4c3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277f6a0;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa200();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108ff4d0c; end: 108ff4dff; -[SCBitmojiAvatarContainerView _hideBitmojiAccessoryIfNecessaryWithAnimationState:isGroupBitmoji:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff4d0c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  if (*(long *)(param_1 + _DAT_11277f6a8) == param_3) {
LAB_108ff4d48:
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else {
    if (param_3 - 4U < 2) {
      uVar1 = *(undefined8 *)(param_1 + _DAT_11277f6a0);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00(param_1);
      _CGRectGetHeight();
      FUN_108ffc714(uVar1,param_5);
    }
    else {
      if (param_3 != 2) goto LAB_108ff4d48;
      uVar1 = *(undefined8 *)(param_1 + _DAT_11277f6a0);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00(param_1);
      _CGRectGetHeight();
      FUN_108ffc45c(uVar1,param_4,param_5);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108ff4e00; end: 108ff4ecf; -[SCBitmojiAvatarContainerView _animateBitmojiAccessoryAvatarViewWithAnimationState:isGroupBitmoji:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff4e00(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + _DAT_11277f6a8) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_11277f6a8) = param_3;
  if (param_3 == 3) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277f6a0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(param_1);
    _CGRectGetHeight();
    FUN_108ffc5ec(uVar1,param_4);
  }
  else {
    if (param_3 != 1) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277f6a0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00(param_1);
    _CGRectGetHeight();
    FUN_108ffc330(uVar1,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ff4ed0; end: 108ff4f27; -[SCBitmojiAvatarContainerView bitmojiDidLoad:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff4ed0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277f6bc;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1b300();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ff4f28; end: 108ff4f3b; -[SCBitmojiAvatarContainerView preferredImageSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108ff4f28(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277f6b0);
}



/* Entry: 108ff4f3c; end: 108ff4f4b; -[SCBitmojiAvatarContainerView optimizationOptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff4f3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f6ac);
}



/* Entry: 108ff4f4c; end: 108ff4f5b; -[SCBitmojiAvatarContainerView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff4f4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f6a4);
}



/* Entry: 108ff4f5c; end: 108ff4f6b; -[SCBitmojiAvatarContainerView imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff4f5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f6b4);
}



/* Entry: 108ff4f6c; end: 108ff4f7b; -[SCBitmojiAvatarContainerView valdiRuntimeProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff4f6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f6b8);
}



/* Entry: 108ff4f7c; end: 108ff4fbb; -[SCBitmojiAvatarContainerView setValdiRuntimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff4f7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f6b8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ff4fbc; end: 108ff4fdb; -[SCBitmojiAvatarContainerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff4fbc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277f6bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ff4fdc; end: 108ff4fef; -[SCBitmojiAvatarContainerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff4fdc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277f6bc,param_3);
  return;
}



/* Entry: 108ff4ff0; end: 108ff508b; -[SCBitmojiAvatarContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff4ff0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277f6bc);
  _objc_storeStrong(param_1 + _DAT_11277f6b8,0);
  _objc_storeStrong(param_1 + _DAT_11277f6b4,0);
  _objc_storeStrong(param_1 + _DAT_11277f6a4,0);
  _objc_storeStrong(param_1 + _DAT_11277f694,0);
  _objc_storeStrong(param_1 + _DAT_11277f6a0,0);
  _objc_storeStrong(param_1 + _DAT_11277f69c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f698,0);
  return;
}



/* Entry: 108ff508c; end: 108ff515b; -[SCBitmojiAvatarView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108ff508c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffc68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1af000(puVar1);
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f6c0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f6c0) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f6c4);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f6c4) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108ff515c; end: 108ff51d7;  */

void FUN_108ff515c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b48f0;
  _objc_opt_new(PTR_PTR_1126b48f0);
  func_0x00010c182220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ff51d8; end: 108ff52e3; -[SCBitmojiAvatarView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff51d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ffc68;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  uVar1 = *(undefined8 *)(param_5 + _DAT_11277f6c4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  func_0x00010bf20c00(param_5);
  uVar1 = *(undefined8 *)(param_5 + _DAT_11277f6c0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar1);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277f6c8));
  return;
}



/* Entry: 108ff52e4; end: 108ff52eb; -[SCBitmojiAvatarView setViewModel:] */

void FUN_108ff52e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setViewModel_withImageSynchroniz_112666448,param_3,0);
  return;
}



/* Entry: 108ff52ec; end: 108ff55b3; -[SCBitmojiAvatarView setViewModel:withImageSynchronizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff52ec(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x00010c1610a0(param_1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277f6cc);
    *(undefined8 *)(param_1 + _DAT_11277f6cc) = 0;
    _objc_release(uVar4);
    uVar5 = *(ulong *)(param_1 + _DAT_11277f6d0);
    *(undefined8 *)(param_1 + _DAT_11277f6d0) = 0;
LAB_108ff53d8:
    _objc_release(uVar5);
  }
  else {
    lVar6 = (long)_DAT_11277f6cc;
    lVar2 = *(long *)(param_1 + lVar6);
    if ((lVar2 == param_3) || (func_0x00010c071ae0(), (int)lVar2 != 0)) {
      uVar5 = *(ulong *)(param_1 + _DAT_11277f6d0);
      _objc_retain(uVar5);
      _objc_retain(param_4);
      if (uVar5 == param_4) {
        _objc_release(param_4);
        goto LAB_108ff53d8;
      }
      if (param_4 == 0) {
        _objc_release(uVar5);
      }
      else {
        uVar3 = uVar5;
        func_0x00010c071ae0();
        _objc_release(param_4);
        _objc_release(uVar5);
        if ((uVar3 & 1) != 0) goto LAB_108ff555c;
      }
    }
    lVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(long *)(param_1 + lVar6) = lVar2;
    _objc_release(uVar4);
    lVar2 = (long)_DAT_11277f6d0;
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)(param_1 + lVar2);
    *(ulong *)(param_1 + lVar2) = param_4;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277f6c0);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277f6c4);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar4);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277f6c8));
    _objc_initWeak(auStack_58,param_1);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108ff55b4;
    puStack_70 = &UNK_110ad2950;
    _objc_copyWeak(auStack_60,auStack_58);
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_108ff5664;
    puStack_98 = &UNK_110952158;
    lStack_68 = param_1;
    _objc_copyWeak(auStack_90,auStack_58);
    _objc_copyWeak(auStack_b8,auStack_58);
    func_0x00010c0be480(uVar4);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
LAB_108ff555c:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108ff55b4; end: 108ff5663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff55b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb7fc0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ff5664; end: 108ff56f3;  */

void FUN_108ff5664(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb8d40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ff56f4; end: 108ff5773; -[SCBitmojiAvatarView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff56f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f6d4);
  *(undefined8 *)(param_1 + _DAT_11277f6d4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f6c0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ff5774; end: 108ff57ab; -[SCBitmojiAvatarView setComposerRuntimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff5774(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f6d8);
  *(undefined8 *)(param_1 + _DAT_11277f6d8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ff57ac; end: 108ff586f; -[SCBitmojiAvatarView setPreferredImageSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff57ac(double param_1,double param_2,long param_3)

{
  double *pdVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  pdVar1 = (double *)(param_3 + _DAT_11277f6dc);
  bVar2 = false;
  if ((*pdVar1 == param_1) && (bVar2 = false, !NAN(pdVar1[1]) && !NAN(param_2))) {
    bVar2 = pdVar1[1] == param_2;
  }
  if ((!bVar2) && ((*(byte *)(param_3 + _DAT_11277f6e0) & 1) != 0)) {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    lVar4 = (long)_DAT_11277f6c0;
    uVar3 = *(undefined8 *)(param_3 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ec940();
    _objc_release(uVar3);
    dVar5 = *pdVar1;
    dVar6 = pdVar1[1];
    uVar3 = *(undefined8 *)(param_3 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e0040(dVar5,dVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 108ff5870; end: 108ff5c1b; -[SCBitmojiAvatarView _showBitmojiNetworkImageViewWithNetworkImage:loadingImage:fallbackNetworkImage:transformation:viewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff5870(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  double *pdVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar6 = (long)_DAT_11277f6c0;
  lVar3 = *(long *)(param_1 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar6));
    _objc_unsafeClaimAutoreleasedReturnValue();
    pdVar1 = (double *)(param_1 + _DAT_11277f6dc);
    bVar2 = false;
    if ((*pdVar1 == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar2 = false, !NAN(pdVar1[1]) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar2 = pdVar1[1] == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if (!bVar2) {
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ec940();
      _objc_release(uVar4);
      dVar7 = *pdVar1;
      dVar8 = pdVar1[1];
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e0040(dVar7,dVar8);
      _objc_release(uVar4);
    }
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa200();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1);
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11277f6c4);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aaac0();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bec20();
  _objc_release(uVar4);
  func_0x00010bed2580(param_1);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108ff5c1c;
  puStack_88 = &UNK_1108663e0;
  _objc_retain(param_6);
  uStack_80 = param_6;
  _objc_copyWeak(auStack_a8,auStack_78);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  func_0x00010c1cc220(uVar4);
  _objc_release(uVar4);
  func_0x00010c1cbe20(param_1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar5);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108ff5c1c; end: 108ff5db7;  */

void FUN_108ff5c1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_retain(lVar2);
  if (lVar2 == 0) {
    _objc_retain(param_2);
    uVar3 = param_2;
  }
  else {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_108ff6504;
    uStack_60 = 0x108ff6514;
    uStack_58 = 0;
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    _objc_retain(param_2);
    func_0x00010c0bcfc0(lVar2);
    uVar3 = puStack_78[5];
    _objc_retain(uVar3);
    _objc_release(param_2);
    _objc_release(param_2);
    _objc_release(puVar1);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108ff5db8; end: 108ff5e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff5db8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010bf3ec40(), lVar2 == 1)) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010bed25a0();
    _objc_release(param_1);
    if (lVar1 == 0) goto LAB_108ff5e68;
    param_1 = (long)_DAT_11277f6e4;
    lVar2 = lVar1 + param_1;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 == 0) goto LAB_108ff5e68;
    param_1 = lVar1 + param_1;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf1b300();
  }
  else {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010bed40e0();
  }
  _objc_release(param_1);
LAB_108ff5e68:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ff5e84; end: 108ff5f93; -[SCBitmojiAvatarView _updateBitmojiNetworkImageWithFallBackImage:viewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff5e84(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = *(long *)(param_1 + _DAT_11277f6cc);
  _objc_retain(lVar3);
  _objc_retain(param_4);
  if (lVar3 == param_4) {
    uVar4 = 0;
LAB_108ff5ef4:
    _objc_release(param_4);
    _objc_release(lVar3);
    if ((param_3 == 0) || ((uVar4 & 1) != 0)) goto LAB_108ff5f74;
    lVar3 = param_3;
    FUN_108feaf80(param_3,1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277f6c0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cc200();
    _objc_release(uVar2);
    func_0x00010bed2580(param_1);
  }
  else {
    if (param_4 != 0) {
      lVar1 = lVar3;
      func_0x00010c071ae0();
      uVar4 = (uint)lVar1 ^ 1;
      goto LAB_108ff5ef4;
    }
    _objc_release(0);
  }
  _objc_release(lVar3);
LAB_108ff5f74:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ff5f94; end: 108ff6043; -[SCBitmojiAvatarView _updateAccessibilityValueWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff5f94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + _DAT_11277f6cc);
  _objc_retain(lVar2);
  _objc_retain(param_3);
  if (lVar2 == param_3) {
    _objc_release(param_3);
    _objc_release(lVar2);
  }
  else {
    if (param_3 == 0) {
      _objc_release(lVar2);
      goto LAB_108ff6030;
    }
    lVar1 = lVar2;
    func_0x00010c071ae0(lVar2,param_2,param_3);
    _objc_release(param_3);
    _objc_release(lVar2);
    if ((int)lVar1 == 0) goto LAB_108ff6030;
  }
  func_0x00010bed2580(param_1,param_2,&PTR____CFConstantStringClassReference_110e2a9f8);
LAB_108ff6030:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ff6044; end: 108ff6047; -[SCBitmojiAvatarView _updateAccessibilityValue:] */

void FUN_108ff6044(void)

{
  return;
}



/* Entry: 108ff6048; end: 108ff615b; -[SCBitmojiAvatarView _showEmojiLabelWithAttributedText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff6048(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277f6c4;
  lVar2 = *(long *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f6c0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc200();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1610b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAccessibilityValue__112635e48,0);
  return;
}



/* Entry: 108ff615c; end: 108ff626f; -[SCBitmojiAvatarView _showAlternativeAvatarViewWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff615c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + _DAT_11277f6d8);
  if (lVar1 == 0) {
    func_0x00010c1325c0(uRam00000001138473b0,param_2,
                        &PTR____CFConstantStringClassReference_110f16ad8,0);
  }
  else {
    lVar5 = (long)_DAT_11277f6c8;
    if (*(long *)(param_1 + lVar5) == 0) {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c142e00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar3 = PTR_PTR_1126dce18;
      _objc_alloc();
      func_0x00010c061d40();
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar3;
      _objc_release(uVar4);
      func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
      _objc_release(lVar2);
    }
    else {
      func_0x00010c2226c0(*(long *)(param_1 + lVar5),param_2,param_3);
    }
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar5),param_2,0);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,0);
    func_0x00010c1610a0(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ff6270; end: 108ff638f; -[SCBitmojiAvatarView isVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_108ff6270(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  lVar5 = (long)_DAT_11277f6c4;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_108ff62cc:
    lVar7 = (long)_DAT_11277f6c0;
    lVar2 = *(long *)(param_1 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + _DAT_11277f6c8);
      if (lVar2 == 0) {
        uVar6 = 0;
      }
      else {
        func_0x00010c074c20();
        uVar6 = (uint)lVar2 ^ 1;
      }
    }
    else {
      uVar3 = *(ulong *)(param_1 + lVar7);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c074c20();
      if ((uVar4 & 1) == 0) {
        uVar6 = 1;
      }
      else {
        lVar7 = *(long *)(param_1 + _DAT_11277f6c8);
        if (lVar7 == 0) {
          uVar6 = 0;
        }
        else {
          func_0x00010c074c20();
          uVar6 = (uint)lVar7 ^ 1;
        }
      }
      _objc_release(uVar3);
      _objc_release(lVar2);
    }
    if (lVar1 == 0) goto LAB_108ff6370;
  }
  else {
    lVar5 = *(long *)(param_1 + lVar5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c074c20();
    if ((int)lVar2 != 0) goto LAB_108ff62cc;
    uVar6 = 1;
  }
  _objc_release(lVar5);
LAB_108ff6370:
  _objc_release(lVar1);
  return uVar6;
}



/* Entry: 108ff6390; end: 108ff63a3; -[SCBitmojiAvatarView preferredImageSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108ff6390(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277f6dc);
}



/* Entry: 108ff63a4; end: 108ff63b3; -[SCBitmojiAvatarView optimizationOptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff63a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f6e0);
}



/* Entry: 108ff63b4; end: 108ff63c3; -[SCBitmojiAvatarView setOptimizationOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff63b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277f6e0) = param_3;
  return;
}



/* Entry: 108ff63c4; end: 108ff63d3; -[SCBitmojiAvatarView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff63c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f6cc);
}



/* Entry: 108ff63d4; end: 108ff63e3; -[SCBitmojiAvatarView imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff63d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f6d4);
}



/* Entry: 108ff63e4; end: 108ff63f3; -[SCBitmojiAvatarView valdiRuntimeProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff63e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f6d8);
}



/* Entry: 108ff63f4; end: 108ff6433; -[SCBitmojiAvatarView setValdiRuntimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff63f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f6d8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ff6434; end: 108ff6453; -[SCBitmojiAvatarView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff6434(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277f6e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ff6454; end: 108ff6467; -[SCBitmojiAvatarView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff6454(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277f6e4,param_3);
  return;
}



/* Entry: 108ff6468; end: 108ff6503; -[SCBitmojiAvatarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff6468(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277f6e4);
  _objc_storeStrong(param_1 + _DAT_11277f6d8,0);
  _objc_storeStrong(param_1 + _DAT_11277f6d4,0);
  _objc_storeStrong(param_1 + _DAT_11277f6cc,0);
  _objc_storeStrong(param_1 + _DAT_11277f6c8,0);
  _objc_storeStrong(param_1 + _DAT_11277f6d0,0);
  _objc_storeStrong(param_1 + _DAT_11277f6c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f6c4,0);
  return;
}



/* Entry: 108ff6504; end: 108ff651b;  */

void FUN_108ff6504(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108ff651c; end: 108ff668f;  */

void FUN_108ff651c(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar3);
  func_0x00010c23d0a0(uVar3);
  dVar5 = param_1 / 1.266;
  func_0x00010c23d0a0(uVar3);
  dVar4 = dVar5 * 0.5;
  dVar6 = param_1 * 0.5 - dVar4;
  func_0x00010c23d0a0(uVar3);
  uVar1 = uVar3;
  func_0x00010bf5c7a0(dVar6,(dVar4 * 11.0) / 100.0,dVar5,dVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bf5c7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_2 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ff6690; end: 108ff67b3; -[SCGroupBitmojiAvatarView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108ff6690(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffc70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c17d4c0(puVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f6e8);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f6e8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f6ec);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f6ec) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f6f0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f6f0) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277f6f4);
    *(undefined **)((long)puVar1 + (long)_DAT_11277f6f4) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277f6f8) = 0x3fe0000000000000;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108ff67b4; end: 108ff67df;  */

void FUN_108ff67b4(void)

{
  _objc_alloc(PTR_PTR_1126b4640);
  func_0x00010c005ee0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ff67e0; end: 108ff67eb;  */

void FUN_108ff67e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b48f0;
  _objc_opt_new(PTR_PTR_1126b48f0);
  func_0x00010c182220();
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8160();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108ff67ec; end: 108ff692b; -[SCGroupBitmojiAvatarView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff67ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  ulong uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ffc70;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_layoutSubviews_112600e60);
  uVar1 = param_5;
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010beb4780();
  dVar5 = 0.0;
  if ((uVar2 & 1) == 0) {
    func_0x00010bf20c00(0,param_5);
    _CGRectGetHeight();
    param_2 = 0x3fe0000000000000;
    dVar5 = dVar5 * 0.5;
  }
  func_0x00010c1842e0(dVar5,uVar1);
  func_0x00010bf20c00(param_5);
  lVar4 = (long)_DAT_11277f6e8;
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(dVar5,param_2,param_3,param_4);
  _objc_release(uVar3);
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar5 * 0.5);
  _objc_release(uVar3);
  func_0x00010be49320(param_5);
  func_0x00010be49520(param_5);
  func_0x00010be493c0(param_5);
  _objc_release(uVar1);
  return;
}



/* Entry: 108ff692c; end: 108ff6a47; -[SCGroupBitmojiAvatarView _layoutLeftBitmojiImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff692c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277f6fc;
  lVar1 = *(long *)(param_5 + lVar5);
  func_0x00010bf529e0();
  if (lVar1 != 2) {
    lVar1 = *(long *)(param_5 + lVar5);
    func_0x00010bf529e0();
    if (lVar1 != 3) {
      return;
    }
  }
  uVar2 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c089820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_5);
  uVar3 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010bf529e0(uVar3);
  uVar4 = uVar2;
  FUN_108ff6a48(uVar2);
  FUN_108ff82d0(param_1,param_2,param_3,param_4,uVar3,uVar4);
  uVar4 = *(undefined8 *)(param_5 + _DAT_11277f6f0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108ff6a48; end: 108ff6b03;  */

undefined1 FUN_108ff6a48(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0be480(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108ff6b04; end: 108ff6c47; -[SCGroupBitmojiAvatarView _layoutRightBitmojiImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff6b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277f6fc;
  lVar1 = *(long *)(param_5 + lVar5);
  func_0x00010bf529e0();
  if (lVar1 != 2) {
    lVar1 = *(long *)(param_5 + lVar5);
    func_0x00010bf529e0();
    if (lVar1 != 3) {
      return;
    }
  }
  lVar1 = *(long *)(param_5 + lVar5);
  func_0x00010bf529e0();
  uVar2 = *(undefined8 *)(param_5 + lVar5);
  if (lVar1 == 2) {
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf20c00(param_5);
  uVar3 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010bf529e0(uVar3);
  uVar4 = uVar2;
  FUN_108ff6a48(uVar2);
  func_0x000108ff8454(param_1,param_2,param_3,param_4,uVar3,uVar4);
  uVar4 = *(undefined8 *)(param_5 + _DAT_11277f6f4);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108ff6c48; end: 108ff6d6f; -[SCGroupBitmojiAvatarView _layoutMiddleBitmojiImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff6c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277f6fc;
  lVar1 = *(long *)(param_5 + lVar5);
  func_0x00010bf529e0();
  if (lVar1 != 1) {
    lVar1 = *(long *)(param_5 + lVar5);
    func_0x00010bf529e0();
    if (lVar1 != 3) {
      return;
    }
  }
  uVar2 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_5);
  uVar3 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010bf529e0(uVar3);
  uVar4 = uVar2;
  FUN_108ff6a48(uVar2);
  FUN_108ff8628(param_1,param_2,param_3,param_4,uVar3,uVar4,
                *(undefined1 *)(param_5 + _DAT_11277f700));
  uVar4 = *(undefined8 *)(param_5 + _DAT_11277f6ec);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108ff6d70; end: 108ff6df3; -[SCGroupBitmojiAvatarView setViewModels:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff6d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dc470;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010c02f260(puVar1,param_2,uVar2);
  func_0x00010c2229c0(param_1,param_2,param_3,*(undefined1 *)(param_1 + _DAT_11277f700),puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ff6df4; end: 108ff712b; -[SCGroupBitmojiAvatarView setViewModels:withSelfieInset:withImageSynchronizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff6df4(long param_1,undefined8 param_2,ulong param_3,undefined1 param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar5 = (long)_DAT_11277f6fc;
  uVar6 = *(ulong *)(param_1 + lVar5);
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + lVar5) = 0;
    _objc_release(uVar6);
    uVar6 = *(ulong *)(param_1 + _DAT_11277f704);
    *(undefined8 *)(param_1 + _DAT_11277f704) = 0;
LAB_108ff6efc:
    _objc_release(uVar6);
  }
  else {
    _objc_retain(uVar6);
    if (uVar6 == param_3) {
      _objc_release(uVar6);
LAB_108ff6ea0:
      uVar6 = *(ulong *)(param_1 + _DAT_11277f704);
      _objc_retain(uVar6);
      _objc_retain(param_5);
      if (uVar6 == param_5) {
        _objc_release(param_5);
        goto LAB_108ff6efc;
      }
      if (param_5 == 0) {
        _objc_release(uVar6);
      }
      else {
        uVar1 = uVar6;
        func_0x00010c071ae0();
        _objc_release(param_5);
        _objc_release(uVar6);
        if ((uVar1 & 1) != 0) goto LAB_108ff70dc;
      }
    }
    else {
      uVar1 = uVar6;
      func_0x00010c071ae0();
      _objc_release(uVar6);
      if ((int)uVar1 != 0) goto LAB_108ff6ea0;
    }
    uVar6 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar6;
    _objc_release(uVar4);
    *(undefined1 *)(param_1 + _DAT_11277f700) = param_4;
    lVar5 = (long)_DAT_11277f704;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = param_5;
    _objc_release(uVar4);
    func_0x00010bedb320(param_1);
    func_0x00010bf529e0(param_3);
    lVar5 = param_1;
    func_0x00010bdd4820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(param_3);
    func_0x00010be35400(param_1);
    uVar6 = param_3;
    func_0x00010bf529e0();
    if (uVar6 != 0) {
      uVar6 = 0;
      do {
        uVar1 = param_3;
        func_0x00010c0dfd40(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar5;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdee960(param_1);
        func_0x00010bedda80(param_1);
        lVar3 = lVar2;
        func_0x00010c269d40(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1aaac0();
        _objc_release(lVar3);
        _objc_initWeak(auStack_78,param_1);
        _objc_copyWeak(auStack_80,auStack_78);
        _objc_retain(lVar2);
        _objc_retain(param_3);
        func_0x00010c0be480(uVar1);
        _objc_release(param_3);
        _objc_release(lVar2);
        _objc_destroyWeak(auStack_80);
        _objc_destroyWeak(auStack_78);
        _objc_release(lVar2);
        _objc_release(uVar1);
        uVar6 = uVar6 + 1;
        uVar1 = param_3;
        func_0x00010bf529e0();
      } while (uVar6 < uVar1);
    }
    func_0x00010c1cbe20(param_1);
    _objc_release(lVar5);
  }
LAB_108ff70dc:
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108ff712c; end: 108ff71b7;  */

void FUN_108ff712c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed40a0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ff71b8; end: 108ff7287; -[SCGroupBitmojiAvatarView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff71b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f708);
  *(undefined8 *)(param_1 + _DAT_11277f708) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f6ec);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f6f4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f6f0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ff7288; end: 108ff7367; -[SCGroupBitmojiAvatarView setPreferredImageSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff7288(double param_1,double param_2,long param_3)

{
  double *pdVar1;
  bool bVar2;
  undefined8 uVar3;
  
  pdVar1 = (double *)(param_3 + _DAT_11277f70c);
  bVar2 = false;
  if ((*pdVar1 == param_1) && (bVar2 = false, !NAN(pdVar1[1]) && !NAN(param_2))) {
    bVar2 = pdVar1[1] == param_2;
  }
  if ((!bVar2) && ((*(byte *)(param_3 + _DAT_11277f710) & 1) != 0)) {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    uVar3 = *(undefined8 *)(param_3 + _DAT_11277f6f0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ec940();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_3 + _DAT_11277f6f4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ec940();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_3 + _DAT_11277f6ec);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ec940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 108ff7368; end: 108ff73ff; -[SCGroupBitmojiAvatarView setBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff7368(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setBackgroundColor__112639330;
  puStack_38 = PTR_PTR_1126ffc70;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  func_0x00010bedb320(param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277f6e8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184220();
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 108ff7400; end: 108ff740f; -[SCGroupBitmojiAvatarView setRearBitmojiOpacity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff7400(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277f6f8) = param_1;
  return;
}



/* Entry: 108ff7410; end: 108ff75ef; -[SCGroupBitmojiAvatarView _updateBitmojiImageView:networkImage:loadingImage:fallbackNetworkImage:viewModels:] */

void FUN_108ff7410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bedc600(param_1);
  uVar1 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bec20();
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  _objc_initWeak(auStack_60,param_3);
  uVar1 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_58);
  _objc_copyWeak(auStack_68,auStack_60);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c1cc220(uVar1);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108ff75f0; end: 108ff768b;  */

void FUN_108ff75f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_3 != 0) && (lVar1 = param_3, func_0x00010bf3ec40(), lVar1 != 1)) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010bee6640(lVar1);
    _objc_release(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108ff768c; end: 108ff77ab; -[SCGroupBitmojiAvatarView _useFallBackImageForBitmojiView:fallbackNetworkImage:viewModels:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff768c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar3 = *(long *)(param_1 + _DAT_11277f6fc);
  _objc_retain(lVar3);
  _objc_retain(param_5);
  if (lVar3 == param_5) {
    _objc_release(param_5);
    _objc_release(lVar3);
LAB_108ff7728:
    lVar3 = param_4;
    FUN_108feaf80(param_4,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedc600(param_1);
    uVar2 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cc200();
    _objc_release(uVar2);
    func_0x00010c1cbe20(param_1);
  }
  else if (param_5 != 0) {
    lVar1 = lVar3;
    func_0x00010c071ae0();
    _objc_release(param_5);
    _objc_release(lVar3);
    if ((int)lVar1 == 0) goto LAB_108ff7784;
    goto LAB_108ff7728;
  }
  _objc_release(lVar3);
LAB_108ff7784:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ff77ac; end: 108ff7887; -[SCGroupBitmojiAvatarView _updateOpacityForBitmojiImageView:networkImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff77ac(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != *(long *)(param_1 + _DAT_11277f6f0)) {
    uVar3 = 0x3ff0000000000000;
    if (param_3 != *(long *)(param_1 + _DAT_11277f6f4)) goto LAB_108ff7844;
    lVar1 = *(long *)(param_1 + _DAT_11277f6fc);
    func_0x00010bf529e0();
    if (lVar1 != 3) goto LAB_108ff7844;
  }
  uVar2 = param_4;
  FUN_1090072d8();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11277f6f8);
  }
  else {
    uVar3 = 0x3fc3333340000000;
  }
LAB_108ff7844:
  lVar1 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(uVar3);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ff7888; end: 108ff797f; -[SCGroupBitmojiAvatarView _bitmojiImageViewsToUpdateForCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff7888(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (undefined8 *)0x1) {
    uStack_48 = *(undefined8 *)(param_1 + _DAT_11277f6ec);
    param_3 = &uStack_48;
LAB_108ff7940:
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 == (undefined8 *)0x2) {
      uStack_40 = *(undefined8 *)(param_1 + _DAT_11277f6f4);
      uStack_38 = *(undefined8 *)(param_1 + _DAT_11277f6f0);
      param_3 = &uStack_40;
      goto LAB_108ff7940;
    }
    puVar2 = PTR____NSArray0__struct_11034ab48;
    if (param_3 == (undefined8 *)0x3) {
      uStack_30 = *(undefined8 *)(param_1 + _DAT_11277f6ec);
      uStack_28 = *(undefined8 *)(param_1 + _DAT_11277f6f4);
      uStack_20 = *(undefined8 *)(param_1 + _DAT_11277f6f0);
      param_3 = &uStack_30;
      goto LAB_108ff7940;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar3 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 != (undefined8 *)0x0) goto LAB_108ff7b60;
  func_0x00010bf57500(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200();
  _objc_release(puVar3);
  dVar8 = *(double *)((long)(puVar2 + _DAT_11277f70c) + 8);
  bVar1 = false;
  if ((*(double *)(puVar2 + _DAT_11277f70c) == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar1 = false, !NAN(dVar8) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar1 = dVar8 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (!bVar1) {
    puVar3 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ec940();
    _objc_release(puVar3);
  }
  lVar6 = (long)_DAT_11277f6f4;
  puVar3 = param_3;
  if (param_3 == *(undefined8 **)(puVar2 + lVar6)) {
    lVar7 = (long)_DAT_11277f6ec;
    lVar5 = *(long *)(puVar2 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) goto LAB_108ff7a60;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
LAB_108ff7af4:
    uVar4 = *(undefined8 *)(puVar2 + lVar7);
LAB_108ff7b30:
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fe0(puVar2,param_2,puVar3,uVar4);
    _objc_release(uVar4);
  }
  else {
LAB_108ff7a60:
    if (param_3 == *(undefined8 **)(puVar2 + _DAT_11277f6f0)) {
      lVar5 = *(long *)(puVar2 + lVar6);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 == 0) goto LAB_108ff7a74;
      func_0x00010c269d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(puVar2 + lVar6);
      goto LAB_108ff7b30;
    }
LAB_108ff7a74:
    lVar7 = (long)_DAT_11277f6e8;
    lVar6 = *(long *)(puVar2 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) goto LAB_108ff7af4;
    func_0x00010befbb60(puVar2,param_2,puVar3);
  }
  _objc_release(puVar3);
LAB_108ff7b60:
  puVar3 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ff7980; end: 108ff7b9b; -[SCGroupBitmojiAvatarView _createIfNecessaryForView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff7980(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) goto LAB_108ff7b60;
  func_0x00010bf57500(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200();
  _objc_release(lVar2);
  dVar7 = ((double *)(param_1 + _DAT_11277f70c))[1];
  bVar1 = false;
  if ((*(double *)(param_1 + _DAT_11277f70c) == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar1 = false, !NAN(dVar7) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar1 = dVar7 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (!bVar1) {
    lVar2 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ec940();
    _objc_release(lVar2);
  }
  lVar5 = (long)_DAT_11277f6f4;
  lVar2 = param_3;
  if (param_3 == *(long *)(param_1 + lVar5)) {
    lVar6 = (long)_DAT_11277f6ec;
    lVar4 = *(long *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) goto LAB_108ff7a60;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
LAB_108ff7af4:
    uVar3 = *(undefined8 *)(param_1 + lVar6);
LAB_108ff7b30:
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fe0(param_1,param_2,lVar2,uVar3);
    _objc_release(uVar3);
  }
  else {
LAB_108ff7a60:
    if (param_3 == *(long *)(param_1 + _DAT_11277f6f0)) {
      lVar4 = *(long *)(param_1 + lVar5);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 == 0) goto LAB_108ff7a74;
      func_0x00010c269d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      goto LAB_108ff7b30;
    }
LAB_108ff7a74:
    lVar6 = (long)_DAT_11277f6e8;
    lVar5 = *(long *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) goto LAB_108ff7af4;
    func_0x00010befbb60(param_1,param_2,lVar2);
  }
  _objc_release(lVar2);
LAB_108ff7b60:
  lVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ff7b9c; end: 108ff7c3f; -[SCGroupBitmojiAvatarView _hideBitmojiImageViewsForCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff7b9c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int *piVar2;
  
  if (param_3 == 2) {
    piVar2 = (int *)&DAT_11277f6ec;
  }
  else {
    if (param_3 != 1) {
      return;
    }
    piVar2 = (int *)&DAT_11277f6f0;
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277f6f4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + *piVar2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ff7c40; end: 108ff7deb; -[SCGroupBitmojiAvatarView _updatePreferredImageSizeForView:bitmojiAvatarViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff7c40(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == *(long *)(param_1 + _DAT_11277f6f0)) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277f70c);
    uVar5 = ((undefined8 *)(param_1 + _DAT_11277f70c))[1];
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277f6fc);
    func_0x00010bf529e0(uVar1);
    uVar2 = param_4;
    FUN_108ff6a48(param_4);
    func_0x000108ff82d0(0,0,uVar4,uVar5,uVar1,uVar2);
  }
  else if (param_3 == *(long *)(param_1 + _DAT_11277f6f4)) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277f70c);
    uVar5 = ((undefined8 *)(param_1 + _DAT_11277f70c))[1];
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277f6fc);
    func_0x00010bf529e0(uVar1);
    uVar2 = param_4;
    FUN_108ff6a48(param_4);
    func_0x000108ff8454(0,0,uVar4,uVar5,uVar1,uVar2);
  }
  else {
    if (param_3 != *(long *)(param_1 + _DAT_11277f6ec)) goto LAB_108ff7dc8;
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277f70c);
    uVar5 = ((undefined8 *)(param_1 + _DAT_11277f70c))[1];
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277f6fc);
    func_0x00010bf529e0(uVar1);
    uVar2 = param_4;
    FUN_108ff6a48(param_4);
    FUN_108ff8628(0,0,uVar4,uVar5,uVar1,uVar2,*(undefined1 *)(param_1 + _DAT_11277f700));
  }
  lVar3 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e0040(uVar4,uVar5);
  _objc_release(lVar3);
LAB_108ff7dc8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ff7dec; end: 108ff7ea7; -[SCGroupBitmojiAvatarView _updateMaskingIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff7dec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010beb4780();
  lVar4 = (long)_DAT_11277f6e8;
  lVar2 = *(long *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if ((int)lVar1 != 0) {
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1);
      _objc_release(uVar3);
    }
    lVar2 = *(long *)(param_1 + lVar4);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1a7f60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108ff7ea8; end: 108ff7fdb; -[SCGroupBitmojiAvatarView _shouldMaskWithRoundedCornerContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108ff7ea8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dStack_50;
  
  if ((*(byte *)(param_1 + (long)_DAT_11277f710) >> 1 & 1) == 0) {
    return false;
  }
  uVar1 = param_1;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    _CGColorEqualToColor(uVar2,puVar4);
    _objc_release(puVar3);
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010bf13d40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfc9760();
      _objc_release(param_1);
      dVar5 = ABS(dStack_50 + 1.0) * 2.220446049250313e-16;
      if (dVar5 <= 2.2250738585072014e-308) {
        dVar5 = 2.2250738585072014e-308;
      }
      return ABS(dStack_50 + -1.0) < dVar5;
    }
  }
  return false;
}



/* Entry: 108ff7fdc; end: 108ff811b; -[SCGroupBitmojiAvatarView isVisible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_108ff7fdc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = (long)_DAT_11277f6f0;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_108ff803c:
    lVar8 = (long)_DAT_11277f6ec;
    lVar2 = *(long *)(param_1 + lVar8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
LAB_108ff8080:
      lVar9 = (long)_DAT_11277f6f4;
      lVar3 = *(long *)(param_1 + lVar9);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        uVar7 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + lVar9);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c074c20();
        uVar7 = (uint)uVar5 ^ 1;
        _objc_release(uVar4);
        _objc_release(lVar3);
      }
      if (lVar2 != 0) goto LAB_108ff80d0;
    }
    else {
      lVar8 = *(long *)(param_1 + lVar8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar8;
      func_0x00010c074c20();
      if ((int)lVar3 != 0) goto LAB_108ff8080;
      uVar7 = 1;
LAB_108ff80d0:
      _objc_release(lVar8);
      _objc_release(lVar2);
    }
    if (lVar1 == 0) goto LAB_108ff80ec;
  }
  else {
    lVar6 = *(long *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010c074c20();
    if ((int)lVar2 != 0) goto LAB_108ff803c;
    uVar7 = 1;
  }
  _objc_release(lVar6);
LAB_108ff80ec:
  _objc_release(lVar1);
  return uVar7;
}



/* Entry: 108ff811c; end: 108ff812f; -[SCGroupBitmojiAvatarView preferredImageSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108ff811c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277f70c);
}



/* Entry: 108ff8130; end: 108ff813f; -[SCGroupBitmojiAvatarView optimizationOptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff8130(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f710);
}



/* Entry: 108ff8140; end: 108ff814f; -[SCGroupBitmojiAvatarView setOptimizationOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff8140(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277f710) = param_3;
  return;
}



/* Entry: 108ff8150; end: 108ff815f; -[SCGroupBitmojiAvatarView viewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff8150(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f6fc);
}



/* Entry: 108ff8160; end: 108ff816f; -[SCGroupBitmojiAvatarView withSelfieInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ff8160(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277f700);
}



/* Entry: 108ff8170; end: 108ff817f; -[SCGroupBitmojiAvatarView setWithSelfieInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ff8170(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277f700) = param_3;
  return;
}



/* Entry: 108ff8180; end: 108ff818f; -[SCGroupBitmojiAvatarView imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ff8180(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f708);
}


