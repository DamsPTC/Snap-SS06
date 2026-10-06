/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109213258; end: 1092132ff; -[SCCameraVideoDuration isEqual:] */

bool FUN_109213258(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
          (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 109213300; end: 109213307; -[SCCameraVideoDuration minuteComponent] */

undefined8 FUN_109213300(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109213308; end: 10921330f; -[SCCameraVideoDuration secondComponent] */

undefined8 FUN_109213308(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109213310; end: 109213317; -[SCCameraVideoDuration decimalComponent] */

undefined8 FUN_109213310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109213318; end: 10921334b; -[_YYImageWeakProxy initWithTarget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_109213318(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + _DAT_112783b68,param_3);
  return param_1;
}



/* Entry: 10921334c; end: 109213397; +[_YYImageWeakProxy proxyWithTarget:] */

void FUN_10921334c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dded8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0508e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109213398; end: 1092133b7; -[_YYImageWeakProxy forwardingTargetForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109213398(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112783b68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1092133b8; end: 1092133df; -[_YYImageWeakProxy forwardInvocation:] */

void FUN_1092133b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x00010c1edc60(param_3,param_2,&uStack_18);
  return;
}



/* Entry: 1092133e0; end: 1092133f3; -[_YYImageWeakProxy methodSignatureForSelector:] */

void FUN_1092133e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSObject_1126b1300,PTR_s_instanceMethodSignatureForSelect_1125f78f8,
             PTR_s_init_1125d9248);
  return;
}



/* Entry: 1092133f4; end: 10921343b; -[_YYImageWeakProxy respondsToSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1092133f4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112783b68;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  _objc_opt_respondsToSelector();
  _objc_release(param_1);
  return (uint)lVar1 & 1;
}



/* Entry: 10921343c; end: 10921349f; -[_YYImageWeakProxy isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10921343c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112783b68;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c071ae0();
  _objc_release(param_3);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1092134a0; end: 1092134df; -[_YYImageWeakProxy hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1092134a0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112783b68;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1092134e0; end: 109213527; -[_YYImageWeakProxy superclass] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092134e0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112783b68;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c262c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 109213528; end: 10921356f; -[_YYImageWeakProxy class] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109213528(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112783b68;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  _objc_opt_class();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 109213570; end: 1092135b7; -[_YYImageWeakProxy isKindOfClass:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_109213570(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112783b68;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  _objc_opt_isKindOfClass();
  _objc_release(param_1);
  return (uint)lVar1 & 1;
}



/* Entry: 1092135b8; end: 1092135ff; -[_YYImageWeakProxy isMemberOfClass:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1092135b8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112783b68;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c077980();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 109213600; end: 109213663; -[_YYImageWeakProxy conformsToProtocol:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_109213600(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112783b68;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf481c0();
  _objc_release(param_3);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 109213664; end: 10921366b; -[_YYImageWeakProxy isProxy] */

undefined8 FUN_109213664(void)

{
  return 1;
}



/* Entry: 10921366c; end: 1092136b3; -[_YYImageWeakProxy description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921366c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112783b68;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1092136b4; end: 1092136fb; -[_YYImageWeakProxy debugDescription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092136b4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112783b68;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf660a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1092136fc; end: 10921371b; -[_YYImageWeakProxy target] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092136fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112783b68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10921371c; end: 10921372b; -[_YYImageWeakProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921371c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112783b68);
  return;
}



/* Entry: 10921372c; end: 1092139cf; -[_YYAnimatedImageViewFetchOperation main] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921372c(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_78;
  
  lVar11 = (long)_DAT_112783b70;
  lVar7 = param_1 + lVar11;
  _objc_loadWeakRetained();
  if ((lVar7 != 0) && (uVar9 = param_1, func_0x00010c06e0e0(), (uVar9 & 1) == 0)) {
    lVar4 = (long)_DAT_112783b74;
    lVar6 = *(long *)(lVar7 + lVar4);
    lVar8 = lVar6 + 1;
    *(long *)(lVar7 + lVar4) = lVar8;
    if (lVar6 == -1) {
      func_0x00010bf277c0(lVar7);
      lVar4 = (long)_DAT_112783b74;
      lVar8 = *(long *)(lVar7 + lVar4);
    }
    lVar6 = *(long *)(lVar7 + _DAT_112783b78);
    if (lVar6 < lVar8) {
      *(long *)(lVar7 + lVar4) = lVar6;
      lVar8 = lVar6;
    }
    uVar9 = *(ulong *)(param_1 + (long)_DAT_112783b7c);
    uVar5 = *(ulong *)(lVar7 + _DAT_112783b80);
    _objc_release(lVar7);
    if (lVar8 < 2) {
      lVar8 = 1;
    }
    do {
      _objc_autoreleasePoolPush();
      if (uVar5 <= uVar9) {
        uVar9 = 0;
      }
      uVar1 = param_1;
      func_0x00010c06e0e0();
      if ((uVar1 & 1) != 0) {
LAB_1092139a0:
        _objc_autoreleasePoolPop(lVar7);
        lVar7 = 0;
        goto LAB_1092139ac;
      }
      lVar4 = param_1 + lVar11;
      _objc_loadWeakRetained();
      if (lVar4 == 0) goto LAB_1092139a0;
      _dispatch_semaphore_wait(*(undefined8 *)(lVar4 + _DAT_112783b84),0xffffffffffffffff);
      lVar6 = *(long *)(lVar4 + _DAT_112783b88);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar2);
      _dispatch_semaphore_signal(*(undefined8 *)(lVar4 + _DAT_112783b84));
      if (lVar6 == 0) {
        lVar3 = *(long *)(param_1 + (long)_DAT_112783b8c);
        func_0x00010bf035c0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        func_0x00010c2beec0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        uVar1 = param_1;
        func_0x00010c06e0e0();
        if ((uVar1 & 1) != 0) {
          _objc_release(lVar6);
          _objc_release(lVar4);
          goto LAB_1092139a0;
        }
        _dispatch_semaphore_wait(*(undefined8 *)(lVar4 + _DAT_112783b84),0xffffffffffffffff);
        if (lVar6 == 0) {
          puStack_78 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0();
          _objc_retainAutoreleasedReturnValue();
        }
        uVar10 = *(undefined8 *)(lVar4 + _DAT_112783b88);
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar10);
        _objc_release(puVar2);
        if (lVar6 == 0) {
          _objc_release(puStack_78);
        }
        _dispatch_semaphore_signal(*(undefined8 *)(lVar4 + _DAT_112783b84));
        _objc_release(lVar4);
        _objc_release(lVar6);
        lVar4 = 0;
      }
      _objc_release(lVar4);
      _objc_autoreleasePoolPop(lVar7);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    lVar7 = 0;
  }
LAB_1092139ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 1092139d0; end: 1092139ef; -[_YYAnimatedImageViewFetchOperation view] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092139d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112783b70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1092139f0; end: 109213a03; -[_YYAnimatedImageViewFetchOperation setView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092139f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112783b70,param_3);
  return;
}



/* Entry: 109213a04; end: 109213a13; -[_YYAnimatedImageViewFetchOperation nextIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109213a04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783b7c);
}



/* Entry: 109213a14; end: 109213a23; -[_YYAnimatedImageViewFetchOperation setNextIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109213a14(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112783b7c) = param_3;
  return;
}



/* Entry: 109213a24; end: 109213a33; -[_YYAnimatedImageViewFetchOperation curImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109213a24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783b8c);
}



/* Entry: 109213a34; end: 109213a73; -[_YYAnimatedImageViewFetchOperation setCurImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109213a34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112783b8c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109213a74; end: 109213aaf; -[_YYAnimatedImageViewFetchOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109213a74(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112783b8c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112783b70);
  return;
}



/* Entry: 109213ab0; end: 109213af7; -[YYAnimatedImageView init] */

undefined1 * FUN_109213ab0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701090;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  func_0x00010bea3520();
  return (undefined1 *)puVar1;
}



/* Entry: 109213af8; end: 109213b3f; -[YYAnimatedImageView initWithFrame:] */

undefined1 * FUN_109213af8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701090;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  func_0x00010bea3520();
  return (undefined1 *)puVar1;
}



/* Entry: 109213b40; end: 109213bdf; -[YYAnimatedImageView initWithImage:] */

undefined1 *
FUN_109213b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_init_1125d9248;
  puVar2 = &uStack_40;
  puStack_38 = PTR_PTR_112701090;
  uStack_40 = param_3;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&uStack_40,puVar1);
  func_0x00010bea3520();
  uVar3 = *(undefined8 *)PTR__CGPointZero_110347540;
  uVar4 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  func_0x00010c23d0a0(param_5);
  func_0x00010c19f0e0(uVar3,uVar4,param_1,param_2,puVar2);
  func_0x00010c1a9f00(puVar2);
  _objc_release(param_5);
  return (undefined1 *)puVar2;
}



/* Entry: 109213be0; end: 109213c9b; -[YYAnimatedImageView initWithImage:highlightedImage:] */

undefined1 *
FUN_109213be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,long param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_38 = PTR_PTR_112701090;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  func_0x00010bea3520();
  lVar1 = param_6;
  if (param_5 != 0) {
    lVar1 = param_5;
  }
  func_0x00010c23d0a0(lVar1);
  func_0x00010c19f0e0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_1,param_2,puVar2);
  func_0x00010c1a9f00(puVar2);
  func_0x00010c1a88e0(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar2;
}



/* Entry: 109213c9c; end: 109213cff; -[YYAnimatedImageView _setDefaultValues] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109213c9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)PTR__NSRunLoopCommonModes_11034aaa8;
  lVar3 = (long)_DAT_112783b90;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar2;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_112783b94) = 1;
  *(undefined1 *)(param_1 + _DAT_112783b98) = 1;
  return;
}



/* Entry: 109213d00; end: 109214057; -[YYAnimatedImageView resetAnimated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109213d00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar6 = (long)_DAT_112783b9c;
  if (*(long *)(param_1 + lVar6) == 0) {
    uVar3 = 1;
    _dispatch_semaphore_create();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112783b84);
    *(undefined8 *)(param_1 + _DAT_112783b84) = uVar3;
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112783b88);
    *(undefined **)(param_1 + _DAT_112783b88) = puVar1;
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_alloc_init();
    lVar7 = (long)_DAT_112783ba0;
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar1;
    _objc_release(uVar3);
    func_0x00010c1c3080(*(undefined8 *)(param_1 + lVar7));
    puVar1 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
    puVar2 = PTR_PTR_1126dded8;
    func_0x00010c11a060(PTR_PTR_1126dded8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf85b60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar3);
    _objc_release(puVar2);
    if (*(long *)(param_1 + _DAT_112783b90) != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
      func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befc2c0(uVar3);
      _objc_release(puVar1);
    }
    func_0x00010c1d9980(*(undefined8 *)(param_1 + lVar6));
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar1);
  }
  else {
    lVar7 = (long)_DAT_112783ba0;
  }
  func_0x00010bf2dd20(*(undefined8 *)(param_1 + lVar7));
  lVar8 = (long)_DAT_112783b84;
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + lVar8),0xffffffffffffffff);
  lVar5 = (long)_DAT_112783b88;
  lVar7 = *(long *)(param_1 + lVar5);
  func_0x00010bf529e0();
  if (lVar7 != 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    _objc_retain(uVar4);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    uVar3 = 0xfffffffffffffffe;
    _dispatch_get_global_queue(0xfffffffffffffffe,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_109214058;
    puStack_60 = &UNK_110842e18;
    uStack_58 = uVar4;
    _objc_retain(uVar4);
    func_0x000107c27d8c(uVar3,&puStack_78);
    _objc_release(uVar3);
    _objc_release(uStack_58);
    _objc_release(uVar4);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + lVar8));
  func_0x00010c1d9980(*(undefined8 *)(param_1 + lVar6));
  *(undefined8 *)(param_1 + _DAT_112783ba4) = 0;
  lVar6 = (long)_DAT_112783ba8;
  if (*(long *)(param_1 + lVar6) != 0) {
    func_0x00010c2a5c20(param_1);
    *(undefined8 *)(param_1 + lVar6) = 0;
    func_0x00010bf73800(param_1);
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_112783bac);
  *(undefined8 *)(param_1 + _DAT_112783bac) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112783bb0);
  *(undefined8 *)(param_1 + _DAT_112783bb0) = 0;
  _objc_release(uVar3);
  *(undefined8 *)(param_1 + _DAT_112783bb4) = 0;
  *(undefined8 *)(param_1 + _DAT_112783bb8) = 0;
  *(undefined8 *)(param_1 + _DAT_112783b80) = 1;
  *(undefined1 *)(param_1 + _DAT_112783bbc) = 0;
  *(undefined1 *)(param_1 + _DAT_112783bc0) = 0;
  *(undefined8 *)(param_1 + _DAT_112783b74) = 0;
  return;
}



/* Entry: 109214058; end: 10921405f;  */

void FUN_109214058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 109214060; end: 1092140c3; -[YYAnimatedImageView setImage:] */

void FUN_109214060(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != param_3) {
    func_0x00010c1aa0a0(param_1,param_2,param_3,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1092140c4; end: 109214127; -[YYAnimatedImageView setHighlightedImage:] */

void FUN_1092140c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfe3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != param_3) {
    func_0x00010c1aa0a0(param_1,param_2,param_3,2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109214128; end: 10921418b; -[YYAnimatedImageView setAnimationImages:] */

void FUN_109214128(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf03d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != param_3) {
    func_0x00010c1aa0a0(param_1,param_2,param_3,3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10921418c; end: 1092141ef; -[YYAnimatedImageView setHighlightedAnimationImages:] */

void FUN_10921418c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfe33a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != param_3) {
    func_0x00010c1aa0a0(param_1,param_2,param_3,4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1092141f0; end: 10921424f; -[YYAnimatedImageView setHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092141f0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112701090;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setHighlighted__112647c38);
  if (*(long *)(param_1 + _DAT_112783b9c) != 0) {
    func_0x00010c1381a0(param_1);
  }
  func_0x00010bfe7080(param_1);
  return;
}



/* Entry: 109214250; end: 1092142db; -[YYAnimatedImageView imageForType:] */

void FUN_109214250(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 3) {
    if (param_3 == 1) {
      func_0x00010bfe6ac0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 2) {
      func_0x00010bfe3460(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_3 == 3) {
    func_0x00010bf03d20(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 4) {
    func_0x00010bfe33a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1092142dc; end: 1092143ab; -[YYAnimatedImageView currentImageType] */

undefined1 FUN_1092142dc(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010c074da0();
  if ((int)lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bfe33a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      return 4;
    }
    lVar2 = param_1;
    func_0x00010bfe3460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      return 2;
    }
  }
  lVar2 = param_1;
  func_0x00010bf03d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    func_0x00010bfe6ac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar1 = param_1 != 0;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 1092143ac; end: 1092144a7; -[YYAnimatedImageView setImage:withType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092143ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long *plVar2;
  undefined **ppuVar3;
  long alStack_70 [2];
  long alStack_60 [2];
  long alStack_50 [2];
  long alStack_40 [2];
  
  plVar2 = alStack_70;
  _objc_retain(param_3);
  func_0x00010c2558c0(param_1);
  if (*(long *)(param_1 + _DAT_112783b9c) != 0) {
    func_0x00010c1381a0(param_1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112783bb0);
  *(undefined8 *)(param_1 + _DAT_112783bb0) = 0;
  _objc_release(uVar1);
  if (param_4 < 3) {
    if (param_4 == 1) {
      ppuVar3 = &PTR_s_setImage__1126481e8;
      plVar2 = alStack_40;
    }
    else {
      if (param_4 != 2) goto LAB_109214484;
      ppuVar3 = &PTR_s_setHighlightedImage__112647c58;
      plVar2 = alStack_50;
    }
  }
  else if (param_4 == 3) {
    ppuVar3 = &PTR_s_setAnimationImages__112637ab0;
    plVar2 = alStack_60;
  }
  else {
    if (param_4 != 4) goto LAB_109214484;
    ppuVar3 = &PTR_s_setHighlightedAnimationImages__1125400f8;
  }
  *plVar2 = param_1;
  plVar2[1] = (long)PTR_PTR_112701090;
  _objc_msgSendSuper2(plVar2,*ppuVar3,param_3);
LAB_109214484:
  func_0x00010bfe7080(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 1092144a8; end: 109214697; -[YYAnimatedImageView imageChanged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092144a8(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  func_0x00010bf5ef80();
  uVar2 = param_1;
  func_0x00010bfe7980();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  if ((((uVar4 & 1) == 0) || (uVar4 = uVar2, func_0x00010bf481c0(), (int)uVar4 == 0)) ||
     (uVar4 = uVar2, func_0x00010bf035e0(), uVar4 < 2)) {
    bVar1 = false;
LAB_109214560:
    lVar7 = (long)_DAT_112783bc4;
    if (*(char *)(param_1 + lVar7) == '\x01') {
      uVar4 = param_1;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf4e020();
      _CGRectEqualToRect();
      _objc_release(uVar4);
      if ((uVar5 & 1) == 0) {
        func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
        func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
        uVar4 = param_1;
        func_0x00010c08c0e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c182ce0(0,0,0x3ff0000000000000,0x3ff0000000000000);
        _objc_release(uVar4);
        func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
      }
    }
    *(undefined1 *)(param_1 + lVar7) = 0;
    if (!bVar1) goto LAB_109214670;
  }
  else {
    uVar4 = uVar2;
    _objc_opt_respondsToSelector(uVar2,PTR_s_animatedImageContentsRectAtIndex_11259e700);
    bVar1 = true;
    if ((uVar4 & 1) == 0) goto LAB_109214560;
    *(undefined1 *)(param_1 + (long)_DAT_112783bc4) = 1;
    func_0x00010bf03560(uVar2);
    func_0x00010c182d00(param_1);
  }
  func_0x00010c1381a0(param_1);
  lVar7 = (long)_DAT_112783bac;
  _objc_retain(uVar2);
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(ulong *)(param_1 + lVar7) = uVar2;
  _objc_release(uVar6);
  lVar8 = (long)_DAT_112783bb0;
  _objc_retain(uVar2);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(ulong *)(param_1 + lVar8) = uVar2;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf03620();
  *(undefined8 *)(param_1 + (long)_DAT_112783bb8) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf035e0();
  *(undefined8 *)(param_1 + (long)_DAT_112783b80) = uVar6;
  func_0x00010bf277c0(param_1);
LAB_109214670:
  func_0x00010c1cbd40(param_1);
  func_0x00010bf77f80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 109214698; end: 1092147f3; -[YYAnimatedImageView calcMaxBufferCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109214698(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  uint auStack_8c [15];
  long lStack_50;
  undefined4 uStack_44;
  
  lVar3 = *(long *)(param_1 + _DAT_112783bac);
  func_0x00010bf03540();
  lVar1 = 0x400;
  if (lVar3 != 0) {
    lVar1 = lVar3;
  }
  puVar4 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0fb8a0();
  _objc_release();
  if ((undefined *)0x7fffffffffffffff < puVar5) {
    puVar5 = (undefined *)0xffffffffffffffff;
  }
  _mach_host_self();
  uStack_44 = 0xf;
  puVar6 = puVar4;
  _host_page_size();
  dVar10 = -0.6;
  if (((int)puVar6 == 0) && (_host_statistics(puVar4,2,auStack_8c,&uStack_44), (int)puVar4 == 0)) {
    dVar10 = (double)(long)(lStack_50 * (ulong)auStack_8c[0]) * 0.6;
  }
  dVar9 = (double)(long)puVar5 * 0.2;
  if (dVar10 <= (double)(long)puVar5 * 0.2) {
    dVar9 = dVar10;
  }
  uVar7 = (ulong)dVar9;
  if ((long)uVar7 < 0xa00001) {
    uVar7 = 0xa00000;
  }
  uVar8 = *(ulong *)(param_1 + _DAT_112783b94);
  uVar2 = uVar7;
  if (uVar8 <= uVar7) {
    uVar2 = uVar8;
  }
  if (uVar8 != 0) {
    uVar7 = uVar2;
  }
  dVar9 = (double)uVar7 / (double)lVar1;
  dVar10 = 1.0;
  if ((1.0 <= dVar9) && (dVar10 = dVar9, 512.0 < dVar9)) {
    dVar10 = 512.0;
  }
  *(long *)(param_1 + _DAT_112783b78) = (long)dVar10;
  return;
}



/* Entry: 1092147f4; end: 1092148c7; -[YYAnimatedImageView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092147f4(long param_1)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf2dd20(*(undefined8 *)(param_1 + _DAT_112783ba0));
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_112783b9c));
  puStack_38 = PTR_PTR_112701090;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1092148c8; end: 1092148cb; -[YYAnimatedImageView isAnimating] */

void FUN_1092148c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5f090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_currentIsPlayingAnimation_1125b55c8);
  return;
}



/* Entry: 1092148cc; end: 10921493b; -[YYAnimatedImageView stopAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092148cc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112701090;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_stopAnimating_112673058);
  func_0x00010bf2dd20(*(undefined8 *)(param_1 + _DAT_112783ba0));
  func_0x00010c1d9980(*(undefined8 *)(param_1 + _DAT_112783b9c));
  func_0x00010c1874a0(param_1);
  return;
}



/* Entry: 10921493c; end: 109214a23; -[YYAnimatedImageView startAnimating] */

/* WARNING: Possible PIC construction at 0x0001092149a4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921493c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  undefined *puStack_28;
  
  lVar3 = param_1;
  func_0x00010bf5ef80();
  if (lVar3 - 3U < 2) {
    lVar3 = param_1;
    func_0x00010bfe7980();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      puStack_28 = PTR_PTR_112701090;
      lStack_30 = param_1;
      _objc_msgSendSuper2(&lStack_30,PTR_s_startAnimating_112671118);
code_r0x00010c1874a0:
                    /* WARNING: Could not recover jumptable at 0x00010c1874b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s_setCurrentIsPlayingAnimation__11263f748,1);
      return;
    }
    _objc_release(lVar3);
  }
  else if (*(long *)(param_1 + _DAT_112783bac) != 0) {
    lVar3 = (long)_DAT_112783b9c;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
    func_0x00010c079ba0();
    if (iVar1 != 0) {
      *(undefined8 *)(param_1 + _DAT_112783bb4) = 0;
      *(undefined1 *)(param_1 + _DAT_112783bbc) = 0;
      func_0x00010c1d9980(*(undefined8 *)(param_1 + lVar3));
      goto code_r0x00010c1874a0;
    }
  }
  return;
}



/* Entry: 109214a24; end: 109214a93; -[YYAnimatedImageView didReceiveMemoryWarning:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109214a24(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = (long)_DAT_112783ba0;
  func_0x00010bf2dd20(*(undefined8 *)(param_1 + lVar1));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_109214a94;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010befa3a0(*(undefined8 *)(param_1 + lVar1),param_2,&puStack_48);
  return;
}



/* Entry: 109214a94; end: 109214c5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109214a94(undefined8 param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  double *pdVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = param_5;
  _arc4random();
  *(long *)(*(long *)(param_5 + 0x20) + (long)_DAT_112783b74) =
       (long)(((int)((uVar15 & 0xffffffff) / 0x78) * 0x78 - (int)uVar15) + -0x3c);
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_112783b84;
  _dispatch_semaphore_wait(*(undefined8 *)(*(long *)(param_5 + 0x20) + lVar17),0xffffffffffffffff);
  lVar18 = (long)_DAT_112783b88;
  lVar3 = *(long *)(*(long *)(param_5 + 0x20) + lVar18);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar13 != 0) {
    lVar19 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar3);
      }
      uVar15 = *(ulong *)(lVar19 * 8);
      func_0x00010c071f40();
      if ((uVar15 & 1) == 0) {
        func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_5 + 0x20) + lVar18));
      }
      lVar19 = lVar19 + 1;
    } while (lVar13 != lVar19);
    lVar13 = lVar3;
    func_0x00010bf52a60();
  }
  _dispatch_semaphore_signal(*(undefined8 *)(*(long *)(param_5 + 0x20) + lVar17));
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_260;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf2dd20(*(undefined8 *)(puVar14 + _DAT_112783ba0));
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112783b84;
  _dispatch_semaphore_wait(*(undefined8 *)(puVar14 + lVar3),0xffffffffffffffff);
  lVar10 = (long)_DAT_112783b88;
  lVar5 = *(long *)(puVar14 + lVar10);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  dVar20 = 0.0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar13 = lVar5;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar17 = *plStack_250;
    do {
      lVar18 = 0;
      do {
        if (*plStack_250 != lVar17) {
          _objc_enumerationMutation(lVar5);
        }
        uVar15 = *(ulong *)(lStack_258 + lVar18 * 8);
        func_0x00010c071f40();
        if ((uVar15 & 1) == 0) {
          func_0x00010c12d3e0(*(undefined8 *)(puVar14 + lVar10));
        }
        lVar18 = lVar18 + 1;
      } while (lVar13 != lVar18);
      lVar13 = lVar5;
      puVar9 = &uStack_260;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(puVar14 + lVar3));
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  lVar13 = *(long *)(puVar4 + _DAT_112783bac);
  _objc_retain(lVar13);
  puVar14 = *(undefined **)(puVar4 + _DAT_112783b88);
  _objc_retain(puVar14);
  if (lVar13 != 0) {
    lVar5 = (long)_DAT_112783bbc;
    if (puVar4[lVar5] == '\x01') {
      func_0x00010c2558c0(puVar4);
    }
    else {
      lVar10 = (long)_DAT_112783ba8;
      lVar3 = (long)_DAT_112783b80;
      uVar11 = *(ulong *)(puVar4 + lVar3);
      uVar15 = 0;
      if (uVar11 != 0) {
        uVar15 = (*(long *)(puVar4 + lVar10) + 1U) / uVar11;
      }
      lVar17 = (*(long *)(puVar4 + lVar10) + 1U) - uVar15 * uVar11;
      lVar18 = (long)_DAT_112783bc0;
      if ((puVar4[lVar18] & 1) != 0) {
LAB_109214ecc:
        lVar19 = (long)_DAT_112783b84;
        lVar5 = *(long *)(puVar4 + lVar19);
        _dispatch_semaphore_wait(lVar5,0);
        if (lVar5 == 0) {
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar14;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          if (puVar16 == (undefined *)0x0) {
            bVar2 = false;
            puVar4[lVar18] = 1;
          }
          else {
            if ((ulong)(long)*(int *)(puVar4 + _DAT_112783b74) < *(ulong *)(puVar4 + lVar3)) {
              puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12d3e0(puVar14);
              _objc_release(puVar6);
            }
            func_0x00010c2a5c20(puVar4);
            *(long *)(puVar4 + lVar10) = lVar17;
            func_0x00010bf73800(puVar4);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = (undefined *)0x0;
            if (puVar16 != puVar7) {
              puVar6 = puVar16;
            }
            lVar5 = (long)_DAT_112783bb0;
            _objc_retain(puVar6);
            uVar8 = *(undefined8 *)(puVar4 + lVar5);
            *(undefined **)(puVar4 + lVar5) = puVar6;
            _objc_release(uVar8);
            _objc_release(puVar7);
            if (puVar4[_DAT_112783bc4] == '\x01') {
              pdVar1 = (double *)(puVar4 + _DAT_112783bc8);
              func_0x00010bf03560(lVar13);
              *pdVar1 = dVar20;
              pdVar1[1] = param_2;
              pdVar1[2] = param_3;
              pdVar1[3] = param_4;
              func_0x00010c182d00(puVar4);
            }
            puVar4[lVar18] = 0;
            puVar6 = puVar14;
            func_0x00010bf529e0();
            bVar2 = puVar6 == *(undefined **)(puVar4 + lVar3);
          }
          _dispatch_semaphore_signal(*(undefined8 *)(puVar4 + lVar19));
          if ((puVar4[lVar18] & 1) == 0) {
            puVar6 = puVar4;
            func_0x00010c08c0e0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1cbd40();
            _objc_release(puVar6);
          }
          if (!bVar2) {
            lVar3 = (long)_DAT_112783ba0;
            lVar5 = *(long *)(puVar4 + lVar3);
            func_0x00010c0eb9e0();
            if (lVar5 == 0) {
              puVar6 = PTR_PTR_1126ddee0;
              _objc_opt_new(PTR_PTR_1126ddee0);
              func_0x00010c222380();
              func_0x00010c1cd3c0(puVar6);
              func_0x00010c186e00(puVar6);
              func_0x00010befa340(*(undefined8 *)(puVar4 + lVar3));
              _objc_release(puVar6);
            }
          }
        }
        else {
          puVar16 = (undefined *)0x0;
          puVar4[lVar18] = 1;
        }
        goto LAB_109214e64;
      }
      func_0x00010bf8b160(puVar9);
      lVar19 = (long)_DAT_112783ba4;
      dVar20 = dVar20 + *(double *)(puVar4 + lVar19);
      *(double *)(puVar4 + lVar19) = dVar20;
      func_0x00010bf035a0(lVar13);
      if (dVar20 <= *(double *)(puVar4 + lVar19)) {
        dVar20 = *(double *)(puVar4 + lVar19) - dVar20;
        *(double *)(puVar4 + lVar19) = dVar20;
        if ((lVar17 != 0) ||
           (lVar12 = *(long *)(puVar4 + _DAT_112783bb4),
           *(ulong *)(puVar4 + _DAT_112783bb4) = lVar12 + 1U,
           lVar12 + 1U <= *(long *)(puVar4 + _DAT_112783bb8) - 1U)) {
          func_0x00010bf035a0(lVar13);
          param_2 = *(double *)(puVar4 + lVar19);
          if (dVar20 < param_2) {
            *(double *)(puVar4 + lVar19) = dVar20;
          }
          goto LAB_109214ecc;
        }
        puVar4[lVar5] = 1;
        func_0x00010c2558c0(puVar4);
        func_0x00010c08c0e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1cbd40();
        _objc_release(puVar4);
      }
    }
  }
  puVar16 = (undefined *)0x0;
LAB_109214e64:
  _objc_release(puVar16);
  _objc_release(puVar14);
  _objc_release(lVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 109214c5c; end: 109214de7; -[YYAnimatedImageView didEnterBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109214c5c(undefined8 param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf2dd20(*(undefined8 *)(param_5 + _DAT_112783ba0));
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = (long)_DAT_112783b84;
  _dispatch_semaphore_wait(*(undefined8 *)(param_5 + lVar16),0xffffffffffffffff);
  lVar17 = (long)_DAT_112783b88;
  lVar4 = *(long *)(param_5 + lVar17);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  dVar20 = 0.0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar11 = lVar4;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar18 = *plStack_120;
    do {
      lVar19 = 0;
      do {
        if (*plStack_120 != lVar18) {
          _objc_enumerationMutation(lVar4);
        }
        uVar13 = *(ulong *)(lStack_128 + lVar19 * 8);
        func_0x00010c071f40();
        if ((uVar13 & 1) == 0) {
          func_0x00010c12d3e0(*(undefined8 *)(param_5 + lVar17));
        }
        lVar19 = lVar19 + 1;
      } while (lVar11 != lVar19);
      lVar11 = lVar4;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar11 != 0);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_5 + lVar16));
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  lVar11 = *(long *)(puVar3 + _DAT_112783bac);
  _objc_retain(lVar11);
  puVar12 = *(undefined **)(puVar3 + _DAT_112783b88);
  _objc_retain(puVar12);
  if (lVar11 != 0) {
    lVar4 = (long)_DAT_112783bbc;
    if (puVar3[lVar4] == '\x01') {
      func_0x00010c2558c0(puVar3);
    }
    else {
      lVar17 = (long)_DAT_112783ba8;
      lVar16 = (long)_DAT_112783b80;
      uVar9 = *(ulong *)(puVar3 + lVar16);
      uVar13 = 0;
      if (uVar9 != 0) {
        uVar13 = (*(long *)(puVar3 + lVar17) + 1U) / uVar9;
      }
      lVar18 = (*(long *)(puVar3 + lVar17) + 1U) - uVar13 * uVar9;
      lVar19 = (long)_DAT_112783bc0;
      if ((puVar3[lVar19] & 1) != 0) {
LAB_109214ecc:
        lVar15 = (long)_DAT_112783b84;
        lVar4 = *(long *)(puVar3 + lVar15);
        _dispatch_semaphore_wait(lVar4,0);
        if (lVar4 == 0) {
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar12;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          if (puVar14 == (undefined *)0x0) {
            bVar2 = false;
            puVar3[lVar19] = 1;
          }
          else {
            if ((ulong)(long)*(int *)(puVar3 + _DAT_112783b74) < *(ulong *)(puVar3 + lVar16)) {
              puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12d3e0(puVar12);
              _objc_release(puVar5);
            }
            func_0x00010c2a5c20(puVar3);
            *(long *)(puVar3 + lVar17) = lVar18;
            func_0x00010bf73800(puVar3);
            puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = (undefined *)0x0;
            if (puVar14 != puVar6) {
              puVar5 = puVar14;
            }
            lVar4 = (long)_DAT_112783bb0;
            _objc_retain(puVar5);
            uVar7 = *(undefined8 *)(puVar3 + lVar4);
            *(undefined **)(puVar3 + lVar4) = puVar5;
            _objc_release(uVar7);
            _objc_release(puVar6);
            if (puVar3[_DAT_112783bc4] == '\x01') {
              pdVar1 = (double *)(puVar3 + _DAT_112783bc8);
              func_0x00010bf03560(lVar11);
              *pdVar1 = dVar20;
              pdVar1[1] = param_2;
              pdVar1[2] = param_3;
              pdVar1[3] = param_4;
              func_0x00010c182d00(puVar3);
            }
            puVar3[lVar19] = 0;
            puVar5 = puVar12;
            func_0x00010bf529e0();
            bVar2 = puVar5 == *(undefined **)(puVar3 + lVar16);
          }
          _dispatch_semaphore_signal(*(undefined8 *)(puVar3 + lVar15));
          if ((puVar3[lVar19] & 1) == 0) {
            puVar5 = puVar3;
            func_0x00010c08c0e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1cbd40();
            _objc_release(puVar5);
          }
          if (!bVar2) {
            lVar16 = (long)_DAT_112783ba0;
            lVar4 = *(long *)(puVar3 + lVar16);
            func_0x00010c0eb9e0();
            if (lVar4 == 0) {
              puVar5 = PTR_PTR_1126ddee0;
              _objc_opt_new(PTR_PTR_1126ddee0);
              func_0x00010c222380();
              func_0x00010c1cd3c0(puVar5);
              func_0x00010c186e00(puVar5);
              func_0x00010befa340(*(undefined8 *)(puVar3 + lVar16));
              _objc_release(puVar5);
            }
          }
        }
        else {
          puVar14 = (undefined *)0x0;
          puVar3[lVar19] = 1;
        }
        goto LAB_109214e64;
      }
      func_0x00010bf8b160(puVar8);
      lVar15 = (long)_DAT_112783ba4;
      dVar20 = dVar20 + *(double *)(puVar3 + lVar15);
      *(double *)(puVar3 + lVar15) = dVar20;
      func_0x00010bf035a0(lVar11);
      if (dVar20 <= *(double *)(puVar3 + lVar15)) {
        dVar20 = *(double *)(puVar3 + lVar15) - dVar20;
        *(double *)(puVar3 + lVar15) = dVar20;
        if ((lVar18 != 0) ||
           (lVar10 = *(long *)(puVar3 + _DAT_112783bb4),
           *(ulong *)(puVar3 + _DAT_112783bb4) = lVar10 + 1U,
           lVar10 + 1U <= *(long *)(puVar3 + _DAT_112783bb8) - 1U)) {
          func_0x00010bf035a0(lVar11);
          param_2 = *(double *)(puVar3 + lVar15);
          if (dVar20 < param_2) {
            *(double *)(puVar3 + lVar15) = dVar20;
          }
          goto LAB_109214ecc;
        }
        puVar3[lVar4] = 1;
        func_0x00010c2558c0(puVar3);
        func_0x00010c08c0e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1cbd40();
        _objc_release(puVar3);
      }
    }
  }
  puVar14 = (undefined *)0x0;
LAB_109214e64:
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 109214de8; end: 1092151c7; -[YYAnimatedImageView step:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109214de8(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  double *pdVar2;
  ulong uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  _objc_retain(param_7);
  lVar9 = *(long *)(param_5 + _DAT_112783bac);
  _objc_retain(lVar9);
  puVar10 = *(undefined **)(param_5 + _DAT_112783b88);
  _objc_retain(puVar10);
  if (lVar9 != 0) {
    lVar11 = (long)_DAT_112783bbc;
    if (*(char *)(param_5 + lVar11) == '\x01') {
      func_0x00010c2558c0(param_5);
    }
    else {
      lVar17 = (long)_DAT_112783ba8;
      uVar1 = *(long *)(param_5 + lVar17) + 1;
      lVar16 = (long)_DAT_112783b80;
      uVar8 = *(ulong *)(param_5 + lVar16);
      uVar3 = 0;
      if (uVar8 != 0) {
        uVar3 = uVar1 / uVar8;
      }
      lVar14 = uVar1 - uVar3 * uVar8;
      lVar15 = (long)_DAT_112783bc0;
      if ((*(byte *)(param_5 + lVar15) & 1) != 0) {
LAB_109214ecc:
        lVar13 = (long)_DAT_112783b84;
        lVar11 = *(long *)(param_5 + lVar13);
        _dispatch_semaphore_wait(lVar11,0);
        if (lVar11 == 0) {
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar10;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          if (puVar12 == (undefined *)0x0) {
            bVar4 = false;
            *(undefined1 *)(param_5 + lVar15) = 1;
          }
          else {
            if ((ulong)(long)*(int *)(param_5 + _DAT_112783b74) < *(ulong *)(param_5 + lVar16)) {
              puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12d3e0(puVar10);
              _objc_release(puVar5);
            }
            func_0x00010c2a5c20(param_5);
            *(long *)(param_5 + lVar17) = lVar14;
            func_0x00010bf73800(param_5);
            puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = (undefined *)0x0;
            if (puVar12 != puVar6) {
              puVar5 = puVar12;
            }
            lVar11 = (long)_DAT_112783bb0;
            _objc_retain(puVar5);
            uVar7 = *(undefined8 *)(param_5 + lVar11);
            *(undefined **)(param_5 + lVar11) = puVar5;
            _objc_release(uVar7);
            _objc_release(puVar6);
            if (*(char *)(param_5 + _DAT_112783bc4) == '\x01') {
              pdVar2 = (double *)(param_5 + _DAT_112783bc8);
              func_0x00010bf03560(lVar9);
              *pdVar2 = param_1;
              pdVar2[1] = param_2;
              pdVar2[2] = param_3;
              pdVar2[3] = param_4;
              func_0x00010c182d00(param_5);
            }
            *(undefined1 *)(param_5 + lVar15) = 0;
            puVar5 = puVar10;
            func_0x00010bf529e0();
            bVar4 = puVar5 == *(undefined **)(param_5 + lVar16);
          }
          _dispatch_semaphore_signal(*(undefined8 *)(param_5 + lVar13));
          if ((*(byte *)(param_5 + lVar15) & 1) == 0) {
            lVar11 = param_5;
            func_0x00010c08c0e0(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1cbd40();
            _objc_release(lVar11);
          }
          if (!bVar4) {
            lVar16 = (long)_DAT_112783ba0;
            lVar11 = *(long *)(param_5 + lVar16);
            func_0x00010c0eb9e0();
            if (lVar11 == 0) {
              puVar5 = PTR_PTR_1126ddee0;
              _objc_opt_new(PTR_PTR_1126ddee0);
              func_0x00010c222380();
              func_0x00010c1cd3c0(puVar5);
              func_0x00010c186e00(puVar5);
              func_0x00010befa340(*(undefined8 *)(param_5 + lVar16));
              _objc_release(puVar5);
            }
          }
        }
        else {
          puVar12 = (undefined *)0x0;
          *(undefined1 *)(param_5 + lVar15) = 1;
        }
        goto LAB_109214e64;
      }
      func_0x00010bf8b160(param_7);
      lVar13 = (long)_DAT_112783ba4;
      param_1 = param_1 + *(double *)(param_5 + lVar13);
      *(double *)(param_5 + lVar13) = param_1;
      func_0x00010bf035a0(lVar9);
      if (param_1 <= *(double *)(param_5 + lVar13)) {
        param_1 = *(double *)(param_5 + lVar13) - param_1;
        *(double *)(param_5 + lVar13) = param_1;
        if ((lVar14 != 0) ||
           (uVar1 = *(long *)(param_5 + _DAT_112783bb4) + 1,
           *(ulong *)(param_5 + _DAT_112783bb4) = uVar1,
           uVar1 <= *(long *)(param_5 + _DAT_112783bb8) - 1U)) {
          func_0x00010bf035a0(lVar9);
          param_2 = *(double *)(param_5 + lVar13);
          if (param_1 < param_2) {
            *(double *)(param_5 + lVar13) = param_1;
          }
          goto LAB_109214ecc;
        }
        *(undefined1 *)(param_5 + lVar11) = 1;
        func_0x00010c2558c0(param_5);
        func_0x00010c08c0e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1cbd40();
        _objc_release(param_5);
      }
    }
  }
  puVar12 = (undefined *)0x0;
LAB_109214e64:
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1092151c8; end: 1092152cf; -[YYAnimatedImageView displayLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092151c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long unaff_x23;
  long lStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_112783bb0) == 0) {
    lVar2 = param_1;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      unaff_x23 = param_1;
      func_0x00010bfe3460();
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x23 == 0) goto LAB_10921529c;
    }
    puVar1 = PTR_s_displayLayer__112539580;
    puStack_58 = PTR_PTR_112701090;
    plVar3 = &lStack_60;
    lStack_60 = param_1;
    _objc_msgSendSuper2(plVar3,PTR_s_respondsToSelector__11262c7e0,PTR_s_displayLayer__112539580);
    if (lVar2 == 0) {
      _objc_release(unaff_x23);
      if (((ulong)plVar3 & 1) == 0) goto LAB_10921529c;
    }
    else {
      _objc_release(lVar2);
      if ((int)plVar3 == 0) goto LAB_10921529c;
    }
    puStack_68 = PTR_PTR_112701090;
    lStack_70 = param_1;
    _objc_msgSendSuper2(&lStack_70,puVar1,param_3);
  }
  else {
    func_0x00010bdc1020();
    func_0x00010c182c80(param_3);
  }
LAB_10921529c:
  _objc_release(param_3);
  return;
}



/* Entry: 1092152d0; end: 109215427; -[YYAnimatedImageView setContentsRect:forImage:] */

void FUN_1092152d0(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,ulong param_7)

{
  int iVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar3 = param_1;
  dVar4 = param_2;
  _objc_retain(param_7);
  if ((param_7 != 0) && (uVar2 = param_7, func_0x00010c23d0a0(), 0.01 < dVar3)) {
    dVar6 = 0.0;
    dVar7 = 1.0;
    dVar8 = 0.0;
    dVar5 = 1.0;
    if (dVar4 <= 0.01) goto LAB_1092153a8;
    dVar8 = param_1 / dVar3;
    dVar6 = param_2 / dVar4;
    dVar5 = param_3 / dVar3;
    dVar7 = param_4 / dVar4;
    _CGRectIntersection(dVar8,dVar6,dVar5,dVar7,0,0,0x3ff0000000000000,0x3ff0000000000000);
    _CGRectIsNull();
    iVar1 = (int)uVar2;
    if (((uVar2 & 1) == 0) && (_CGRectIsEmpty(dVar8,dVar6,dVar5,dVar7), iVar1 == 0))
    goto LAB_1092153a8;
  }
  dVar6 = 0.0;
  dVar7 = 1.0;
  dVar8 = 0.0;
  dVar5 = 1.0;
LAB_1092153a8:
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718,param_6,1);
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182ce0(dVar8,dVar6,dVar5,dVar7);
  _objc_release(param_5);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 109215428; end: 1092154b7; -[YYAnimatedImageView didMoved] */

void FUN_109215428(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf118e0();
  if ((int)lVar1 == 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_startAnimating_112671118);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 1092154b8; end: 1092154ff; -[YYAnimatedImageView didMoveToWindow] */

void FUN_1092154b8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112701090;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToWindow_112527020);
  func_0x00010bf77f80(param_1);
  return;
}



/* Entry: 109215500; end: 109215547; -[YYAnimatedImageView didMoveToSuperview] */

void FUN_109215500(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112701090;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_didMoveToSuperview_1125bb968);
  func_0x00010bf77f80(param_1);
  return;
}



/* Entry: 109215548; end: 10921560b; -[YYAnimatedImageView setCurrentAnimatedImageIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109215548(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  ulong uStack_28;
  
  ppuVar2 = &puStack_50;
  uVar1 = *(ulong *)(param_1 + _DAT_112783bac);
  if (((uVar1 != 0) && (func_0x00010bf035e0(), param_3 < uVar1)) &&
     (*(ulong *)(param_1 + _DAT_112783ba8) != param_3)) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_10921560c;
    puStack_38 = &UNK_110848c48;
    lStack_30 = param_1;
    uStack_28 = param_3;
    _objc_retainBlock();
    puVar3 = (undefined1 *)ppuVar2;
    _pthread_main_np();
    if ((int)puVar3 == 0) {
      func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,ppuVar2);
    }
    else {
      (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
    }
    _objc_release(ppuVar2);
  }
  return;
}



/* Entry: 10921560c; end: 10921575b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921560c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112783b84;
  _dispatch_semaphore_wait(*(undefined8 *)(*(long *)(param_5 + 0x20) + lVar6),0xffffffffffffffff);
  func_0x00010bf2dd20(*(undefined8 *)(*(long *)(param_5 + 0x20) + (long)_DAT_112783ba0));
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_5 + 0x20) + (long)_DAT_112783b88));
  func_0x00010c2a5c20(*(undefined8 *)(param_5 + 0x20));
  *(undefined8 *)(*(long *)(param_5 + 0x20) + (long)_DAT_112783ba8) =
       *(undefined8 *)(param_5 + 0x28);
  func_0x00010bf73800(*(undefined8 *)(param_5 + 0x20));
  lVar5 = (long)_DAT_112783bac;
  uVar2 = *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar5);
  func_0x00010bf035c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_5 + 0x20) + (long)_DAT_112783bb0);
  *(undefined8 *)(*(long *)(param_5 + 0x20) + (long)_DAT_112783bb0) = uVar2;
  _objc_release(uVar3);
  lVar4 = *(long *)(param_5 + 0x20);
  if (*(char *)(lVar4 + _DAT_112783bc4) == '\x01') {
    puVar1 = (undefined8 *)(lVar4 + _DAT_112783bc8);
    func_0x00010bf03560(*(undefined8 *)(lVar4 + lVar5));
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    lVar4 = *(long *)(param_5 + 0x20);
  }
  *(undefined8 *)(lVar4 + _DAT_112783ba4) = 0;
  *(undefined1 *)(*(long *)(param_5 + 0x20) + (long)_DAT_112783bbc) = 0;
  *(undefined1 *)(*(long *)(param_5 + 0x20) + (long)_DAT_112783bc0) = 0;
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbd40();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)
            (*(undefined8 *)(*(long *)(param_5 + 0x20) + lVar6));
  return;
}



/* Entry: 10921575c; end: 10921576b; -[YYAnimatedImageView currentAnimatedImageIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10921575c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783ba8);
}



/* Entry: 10921576c; end: 109215863; -[YYAnimatedImageView setRunloopMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921576c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112783b90;
  uVar1 = *(ulong *)(param_1 + lVar5);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    lVar6 = (long)_DAT_112783b9c;
    lVar3 = *(long *)(param_1 + lVar6);
    if (lVar3 != 0) {
      if (*(long *)(param_1 + lVar5) != 0) {
        puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
        func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c900(lVar3,param_2,puVar2,*(undefined8 *)(param_1 + lVar5));
        _objc_release(puVar2);
      }
      lVar3 = param_3;
      func_0x00010c08fa60();
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(param_1 + lVar6);
        puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
        func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befc2c0(uVar4,param_2,puVar2,param_3);
        _objc_release(puVar2);
      }
    }
    lVar3 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(long *)(param_1 + lVar5) = lVar3;
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109215864; end: 1092158df; +[YYAnimatedImageView automaticallyNotifiesObserversForKey:] */

undefined1 * FUN_109215864(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    puStack_28 = PTR_PTR_112701098;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_automaticallyNotifiesObserversFo_112540100,param_3);
  }
  else {
    puVar2 = (undefined8 *)0x0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 1092158e0; end: 109215a8b; -[YYAnimatedImageView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1092158e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112701090;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithCoder__1125dd730,param_3);
  lVar2 = param_3;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112783b90;
  uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
  *(long *)((long)puVar1 + lVar5) = lVar2;
  _objc_release(uVar3);
  lVar2 = param_3;
  func_0x00010bf66f40();
  *(long *)((long)puVar1 + (long)_DAT_112783b94) = lVar2;
  lVar2 = *(long *)((long)puVar1 + lVar5);
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)PTR__NSRunLoopCommonModes_11034aaa8;
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = uVar4;
    _objc_release(uVar3);
  }
  lVar2 = param_3;
  func_0x00010bf4bc00();
  if ((int)lVar2 == 0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112783b98) = 1;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + (long)_DAT_112783b98) = (char)lVar2;
  }
  lVar2 = param_3;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010c1a9f00(puVar1);
    func_0x00010c1aa0a0(puVar1);
  }
  if (lVar5 != 0) {
    func_0x00010c1a88e0(puVar1);
    func_0x00010c1aa0a0(puVar1);
  }
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109215a8c; end: 109215c57; -[YYAnimatedImageView encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109215a8c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_112701090;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_encodeWithCoder__1125c2658,param_3);
  func_0x00010bf93020(param_3);
  func_0x00010bf92fc0(param_3);
  func_0x00010bf92da0(param_3);
  uVar1 = param_1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf481c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf035e0();
    _objc_release(uVar1);
    if (1 < uVar2) {
      uVar1 = param_1;
      func_0x00010bfe6ac0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf93020(param_3);
      _objc_release(uVar1);
    }
  }
  uVar1 = param_1;
  func_0x00010bfe3460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf481c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010bfe3460();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf035e0();
    _objc_release(uVar1);
    if (1 < uVar2) {
      func_0x00010bfe3460(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf93020(param_3);
      _objc_release(param_1);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 109215c58; end: 109215c67; -[YYAnimatedImageView autoPlayAnimatedImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_109215c58(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112783b98);
}



/* Entry: 109215c68; end: 109215c77; -[YYAnimatedImageView setAutoPlayAnimatedImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109215c68(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112783b98) = param_3;
  return;
}



/* Entry: 109215c78; end: 109215c87; -[YYAnimatedImageView currentIsPlayingAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_109215c78(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112783b6c);
}



/* Entry: 109215c88; end: 109215c97; -[YYAnimatedImageView setCurrentIsPlayingAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109215c88(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112783b6c) = param_3;
  return;
}



/* Entry: 109215c98; end: 109215ca7; -[YYAnimatedImageView runloopMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109215c98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783b90);
}



/* Entry: 109215ca8; end: 109215cb7; -[YYAnimatedImageView maxBufferSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_109215ca8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783b94);
}



/* Entry: 109215cb8; end: 109215cc7; -[YYAnimatedImageView setMaxBufferSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109215cb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112783b94) = param_3;
  return;
}



/* Entry: 109215cc8; end: 109215d57; -[YYAnimatedImageView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109215cc8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112783b90,0);
  _objc_storeStrong(param_1 + _DAT_112783b88,0);
  _objc_storeStrong(param_1 + _DAT_112783bb0,0);
  _objc_storeStrong(param_1 + _DAT_112783b9c,0);
  _objc_storeStrong(param_1 + _DAT_112783ba0,0);
  _objc_storeStrong(param_1 + _DAT_112783b84,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112783bac,0);
  return;
}



/* Entry: 109215d58; end: 109215e2f; -[YYFrameImage initWithImagePaths:oneFrameDuration:loopCount:] */

undefined8
FUN_109215d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar4 = param_4;
  func_0x00010bf529e0();
  if (0 < (int)uVar4) {
    do {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_3,puVar3);
      _objc_release(puVar3);
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  func_0x00010c01cbc0(param_2,param_3,param_4,puVar2,param_5);
  _objc_release(puVar2);
  _objc_release(param_4);
  return param_2;
}



/* Entry: 109215e30; end: 109216007; -[YYFrameImage initWithImagePaths:frameDurations:loopCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_109215e30(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar7 = param_4;
  func_0x00010bf529e0();
  if (lVar7 != 0) {
    lVar7 = param_4;
    func_0x00010bf529e0();
    lVar1 = param_5;
    func_0x00010bf529e0();
    if (lVar7 == lVar1) {
      lVar7 = param_4;
      func_0x00010c0dfd40(param_4,param_3,0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_3,lVar7);
      _objc_retainAutoreleasedReturnValue();
      FUN_109216008(lVar7);
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_alloc();
      func_0x00010c008240();
      puVar4 = puVar3;
      func_0x00010c2beec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc1020();
      func_0x00010bffa280(param_1,param_2,param_3,puVar3,0);
      if (param_2 != 0) {
        puVar3 = puVar4;
        _objc_retainAutorelease();
        func_0x00010bdc1020();
        _CGImageGetBytesPerRow();
        puVar5 = puVar4;
        _objc_retainAutorelease();
        func_0x00010bdc1020();
        _CGImageGetHeight();
        *(long *)(param_2 + _DAT_112783bcc) = (long)puVar5 * (long)puVar3;
        lVar1 = param_4;
        func_0x00010bf51e00();
        uVar6 = *(undefined8 *)(param_2 + _DAT_112783bd0);
        *(long *)(param_2 + _DAT_112783bd0) = lVar1;
        _objc_release(uVar6);
        lVar1 = param_5;
        func_0x00010bf51e00();
        uVar6 = *(undefined8 *)(param_2 + _DAT_112783bd4);
        *(long *)(param_2 + _DAT_112783bd4) = lVar1;
        _objc_release(uVar6);
        *(undefined8 *)(param_2 + _DAT_112783bd8) = param_6;
        _objc_retain(param_2);
      }
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(lVar7);
      lVar7 = param_2;
      goto LAB_109215fd0;
    }
  }
  lVar7 = 0;
LAB_109215fd0:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return lVar7;
}



/* Entry: 109216008; end: 109216173;  */

undefined8 FUN_109216008(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c08fa60();
  uVar3 = 0x3ff0000000000000;
  if ((uVar1 != 0) && (uVar1 = param_1, func_0x00010bfdcf80(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010c25cea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0x3ff0000000000000;
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(uVar1);
    _objc_retain(param_1);
    func_0x00010bf97dc0(puVar2);
    uVar3 = puStack_58[3];
    _objc_release(param_1);
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 109216174; end: 10921624b; -[YYFrameImage initWithImageDataArray:oneFrameDuration:loopCount:] */

undefined8
FUN_109216174(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar4 = param_4;
  func_0x00010bf529e0();
  if (0 < (int)uVar4) {
    do {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_3,puVar3);
      _objc_release(puVar3);
      uVar1 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  func_0x00010c01c680(param_2,param_3,param_4,puVar2,param_5);
  _objc_release(puVar2);
  _objc_release(param_4);
  return param_2;
}



/* Entry: 10921624c; end: 10921641b; -[YYFrameImage initWithImageDataArray:frameDurations:loopCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10921624c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar6 = param_4;
  func_0x00010bf529e0();
  if (lVar6 != 0) {
    lVar6 = param_4;
    func_0x00010bf529e0();
    lVar1 = param_5;
    func_0x00010bf529e0();
    if (lVar6 == lVar1) {
      lVar6 = param_4;
      func_0x00010c0dfd40(param_4,param_3,0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_alloc();
      func_0x00010c008240();
      puVar3 = puVar2;
      func_0x00010c2beec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc1020();
      func_0x00010bffa280(param_1,param_2,param_3,puVar2,0);
      if (param_2 != 0) {
        puVar2 = puVar3;
        _objc_retainAutorelease();
        func_0x00010bdc1020();
        _CGImageGetBytesPerRow();
        puVar4 = puVar3;
        _objc_retainAutorelease();
        func_0x00010bdc1020();
        _CGImageGetHeight();
        *(long *)(param_2 + _DAT_112783bcc) = (long)puVar4 * (long)puVar2;
        lVar1 = param_4;
        func_0x00010bf51e00();
        uVar5 = *(undefined8 *)(param_2 + _DAT_112783bdc);
        *(long *)(param_2 + _DAT_112783bdc) = lVar1;
        _objc_release(uVar5);
        lVar1 = param_5;
        func_0x00010bf51e00();
        uVar5 = *(undefined8 *)(param_2 + _DAT_112783bd4);
        *(long *)(param_2 + _DAT_112783bd4) = lVar1;
        _objc_release(uVar5);
        *(undefined8 *)(param_2 + _DAT_112783bd8) = param_6;
        _objc_retain(param_2);
      }
      _objc_release(puVar3);
      _objc_release(lVar6);
      lVar6 = param_2;
      goto LAB_1092163e4;
    }
  }
  lVar6 = 0;
LAB_1092163e4:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return lVar6;
}



/* Entry: 10921641c; end: 10921644b; -[YYFrameImage animatedImageFrameCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10921641c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112783bd0);
  if ((lVar1 == 0) && (lVar1 = *(long *)(param_1 + _DAT_112783bdc), lVar1 == 0)) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_count_1125b2420);
  return lVar1;
}



/* Entry: 10921644c; end: 10921645b; -[YYFrameImage animatedImageLoopCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10921644c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783bd8);
}



/* Entry: 10921645c; end: 10921646b; -[YYFrameImage animatedImageBytesPerFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10921645c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783bcc);
}



/* Entry: 10921646c; end: 1092165bf; -[YYFrameImage animatedImageFrameAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921646c(undefined *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112783bd0;
  uVar1 = *(ulong *)(param_1 + lVar6);
  if (uVar1 == 0) {
    lVar6 = (long)_DAT_112783bdc;
    uVar1 = *(ulong *)(param_1 + lVar6);
    if (uVar1 == 0) {
      if (param_3 != 0) {
        param_1 = (undefined *)0x0;
      }
      _objc_retain(param_1);
      goto LAB_1092165a8;
    }
    func_0x00010bf529e0();
    if (uVar1 <= param_3) goto LAB_109216590;
    puVar3 = *(undefined **)(param_1 + lVar6);
    func_0x00010c0dfd40(puVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    puVar2 = puVar3;
  }
  else {
    func_0x00010bf529e0();
    if (uVar1 <= param_3) {
LAB_109216590:
      param_1 = (undefined *)0x0;
      goto LAB_1092165a8;
    }
    puVar2 = *(undefined **)(param_1 + lVar6);
    func_0x00010c0dfd40(puVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_109216008();
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar4 = puVar3;
  }
  func_0x00010bfe9400(puVar5,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  param_1 = puVar5;
  func_0x00010c2beec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
LAB_1092165a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1092165c0; end: 10921663b; -[YYFrameImage animatedImageDurationAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1092165c0(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112783bd4;
  uVar1 = *(ulong *)(param_2 + lVar3);
  func_0x00010bf529e0();
  if (param_4 < uVar1) {
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010c0dfd40(uVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar2);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10921663c; end: 10921668b; -[YYFrameImage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921663c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112783bd4,0);
  _objc_storeStrong(param_1 + _DAT_112783bdc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112783bd0,0);
  return;
}



/* Entry: 10921668c; end: 10921671b;  */

void FUN_10921668c(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c11f2a0();
  if (2 < uVar1) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c11f2a0(param_3);
    func_0x00010c11f2a0(param_3);
    func_0x00010c260c80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = param_1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10921671c; end: 109216af7; +[YYImage imageNamed:] */

void FUN_10921671c(undefined8 param_1,undefined8 ****param_2,undefined8 param_3,
                  undefined8 ****param_4)

{
  ulong uVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 ****ppppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  float fVar15;
  double dVar16;
  undefined8 **ppuStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = (undefined **)param_4;
  _objc_retain(param_4);
  ppppuVar2 = param_4;
  func_0x00010c08fa60();
  if (ppppuVar2 != (undefined8 ****)0x0) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110dacf38;
    ppppuVar2 = param_4;
    func_0x00010bfdcf80();
    if (((ulong)ppppuVar2 & 1) == 0) {
      ppppuVar2 = param_4;
      func_0x00010c25cea0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar3 = param_4;
      func_0x00010c0f58c0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar13 = ppppuVar3;
      func_0x00010c08fa60();
      if (ppppuVar13 == (undefined8 ****)0x0) {
        ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_111183920;
      }
      else {
        ppuVar9 = (undefined **)&pppuStack_88;
        ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        pppuStack_88 = ppppuVar3;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
      }
      if (lRam0000000113732a10 != -1) {
        func_0x000107c27d9c(0x113732a10,&PTR___NSConcreteGlobalBlock_110ae19a8);
      }
      uVar1 = uRam0000000113732a08;
      _objc_retain(uRam0000000113732a08);
      uVar12 = uVar1;
      func_0x00010bf529e0();
      if (uVar12 == 0) {
        ppppuVar13 = (undefined8 ****)0x0;
        dVar16 = 1.0;
      }
      else {
        uVar12 = 0;
        do {
          fVar15 = (float)param_1;
          uVar5 = uVar1;
          func_0x00010c0dfd40(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb2c80();
          dVar16 = (double)fVar15;
          _objc_release(uVar5);
          _objc_retain(ppppuVar2);
          if (ppppuVar2 == (undefined8 ****)0x0) {
            ppppuVar14 = (undefined8 ****)0x0;
          }
          else {
            ppppuVar14 = ppppuVar2;
            if (((ABS(dVar16 + -1.0) <= 1.1920928955078125e-07) ||
                (ppppuVar13 = ppppuVar2, func_0x00010c08fa60(), ppppuVar13 == (undefined8 ****)0x0))
               || (ppppuVar13 = ppppuVar2, func_0x00010bfdcf80(), (int)ppppuVar13 != 0)) {
              func_0x00010bf51e00(ppppuVar2);
            }
            else {
              puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df720(dVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c25cde0(ppppuVar2);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar6);
            }
          }
          _objc_release(ppppuVar2);
          param_1 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_148 = 0;
          ppuStack_150 = (undefined8 ***)0x0;
          uStack_138 = 0;
          plStack_140 = (long *)0x0;
          _objc_retain(ppuVar4);
          ppuVar9 = (undefined **)&ppuStack_150;
          ppuVar7 = ppuVar4;
          func_0x00010bf52a60();
          if (ppuVar7 != (undefined **)0x0) {
            lVar10 = *plStack_140;
            do {
              ppuVar11 = (undefined **)0x0;
              do {
                if (*plStack_140 != lVar10) {
                  _objc_enumerationMutation(ppuVar4);
                }
                ppppuVar8 = (undefined8 ****)PTR__OBJC_CLASS___NSBundle_1126aea78;
                func_0x00010c0b6660();
                _objc_retainAutoreleasedReturnValue();
                ppppuVar13 = ppppuVar8;
                ppuVar9 = (undefined **)ppppuVar14;
                func_0x00010c0f5960();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppppuVar8);
                if (ppppuVar13 != (undefined8 ****)0x0) {
                  _objc_release(ppuVar4);
                  _objc_release(ppppuVar14);
                  goto LAB_109216a0c;
                }
                ppuVar11 = (undefined **)((long)ppuVar11 + 1);
              } while (ppuVar7 != ppuVar11);
              ppuVar9 = (undefined **)&ppuStack_150;
              ppuVar7 = ppuVar4;
              func_0x00010bf52a60();
            } while (ppuVar7 != (undefined **)0x0);
          }
          _objc_release(ppuVar4);
          _objc_release(ppppuVar14);
          uVar12 = uVar12 + 1;
          uVar5 = uVar1;
          func_0x00010bf529e0();
        } while (uVar12 < uVar5);
        ppppuVar13 = (undefined8 ****)0x0;
      }
LAB_109216a0c:
      ppppuVar14 = ppppuVar13;
      func_0x00010c08fa60();
      if (ppppuVar14 == (undefined8 ****)0x0) {
        param_2 = (undefined8 ****)0x0;
      }
      else {
        ppppuVar14 = (undefined8 ****)PTR__OBJC_CLASS___NSData_1126ae778;
        ppuVar9 = (undefined **)ppppuVar13;
        func_0x00010bf64a80();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar8 = ppppuVar14;
        func_0x00010c08fa60();
        if (ppppuVar8 == (undefined8 ****)0x0) {
          param_2 = (undefined8 ****)0x0;
        }
        else {
          _objc_alloc(param_2);
          ppuVar9 = (undefined **)ppppuVar14;
          func_0x00010c008500(dVar16);
        }
        _objc_release(ppppuVar14);
      }
      _objc_release(uVar1);
      _objc_release(ppuVar4);
      _objc_release(ppppuVar13);
      _objc_release(ppppuVar3);
      _objc_release(ppppuVar2);
      goto LAB_109216a94;
    }
  }
  param_2 = (undefined8 ****)0x0;
LAB_109216a94:
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_retain(ppuVar9);
    _objc_alloc(param_4);
    func_0x00010c004020();
    _objc_release(ppuVar9);
    param_2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 109216af8; end: 109216b3f; +[YYImage imageWithContentsOfFile:] */

void FUN_109216af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c004020();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 109216b40; end: 109216b4b; +[YYImage sc_imageWithData:] */

void FUN_109216b40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe93d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b2720,PTR_s_imageWithData__1125d7eb8);
  return;
}



/* Entry: 109216b4c; end: 109216b93; +[YYImage imageWithData:] */

void FUN_109216b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c008240();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 109216b94; end: 109216beb; +[YYImage imageWithData:scale:] */

void FUN_109216b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_alloc(param_2);
  func_0x00010c008500(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 109216bec; end: 109216daf; -[YYImage initWithContentsOfFile:] */

undefined8 FUN_109216bec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c08fa60();
  uVar4 = 0x3ff0000000000000;
  if ((uVar2 != 0) && (uVar2 = param_3, func_0x00010bfdcf80(), (uVar2 & 1) == 0)) {
    uVar2 = param_3;
    func_0x00010c25cea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x2020000000;
    uStack_58 = 0x3ff0000000000000;
    puVar3 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    func_0x00010c127e80(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(uVar2);
    _objc_retain(param_3);
    func_0x00010bf97dc0(puVar3);
    uVar4 = puStack_68[3];
    _objc_release(param_3);
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  func_0x00010c008500(uVar4,param_1);
  _objc_release(puVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 109216db0; end: 109216db7; -[YYImage initWithData:] */

void FUN_109216db0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c008510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,param_1,PTR_s_initWithData_scale__1125dfb10);
  return;
}



/* Entry: 109216db8; end: 1092170ab; -[YYImage initWithData:scale:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_109216db8(double param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  double dVar11;
  
  dVar11 = param_1;
  _objc_retain(param_4);
  lVar9 = param_4;
  func_0x00010c08fa60();
  if (lVar9 != 0) {
    if (param_1 <= 0.0) {
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      _objc_release(puVar2);
      param_1 = dVar11;
    }
    uVar3 = 1;
    _dispatch_semaphore_create();
    uVar8 = *(undefined8 *)(param_2 + _DAT_112783be4);
    *(undefined8 *)(param_2 + _DAT_112783be4) = uVar3;
    _objc_release(uVar8);
    _objc_autoreleasePoolPush();
    puVar2 = PTR_PTR_1126c3d50;
    func_0x00010bf67520(PTR_PTR_1126c3d50,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfb6920();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
LAB_10921703c:
      bVar1 = false;
    }
    else {
      puVar6 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc1020();
      func_0x00010c14e120(puVar2);
      puVar10 = puVar5;
      func_0x00010bfe8380(puVar5);
      func_0x00010bffa280(param_2,param_3,puVar6,puVar10);
      if (param_2 == 0) goto LAB_10921703c;
      puVar6 = puVar2;
      func_0x00010c27dd80();
      *(undefined **)(param_2 + _DAT_112783be8) = puVar6;
      puVar6 = puVar2;
      func_0x00010bfb6b20();
      if ((undefined *)0x1 < puVar6) {
        lVar9 = (long)_DAT_112783bec;
        _objc_retain(puVar2);
        uVar3 = *(undefined8 *)(param_2 + lVar9);
        *(undefined **)(param_2 + lVar9) = puVar2;
        _objc_release(uVar3);
        puVar6 = puVar5;
        _objc_retainAutorelease();
        func_0x00010bdc1020();
        _CGImageGetBytesPerRow();
        puVar10 = puVar5;
        _objc_retainAutorelease();
        func_0x00010bdc1020();
        _CGImageGetHeight();
        *(long *)(param_2 + _DAT_112783bf0) = (long)puVar10 * (long)puVar6;
        puVar7 = puVar2;
        func_0x00010bfb6b20();
        *(long *)(param_2 + _DAT_112783bf4) = (long)puVar7 * (long)puVar10 * (long)puVar6;
        puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        puVar10 = puVar2;
        func_0x00010bfb6b20(puVar2);
        func_0x00010bf0a0e0(puVar6,param_3,puVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar2;
        func_0x00010bfb6b20();
        if (puVar10 != (undefined *)0x0) {
          puVar10 = (undefined *)0x0;
          do {
            func_0x00010bfb6b60(puVar2,param_3,puVar10);
            dVar11 = 0.10000000149011612;
            if (0.010999999940395355 <= param_1) {
              dVar11 = param_1;
            }
            param_1 = dVar11;
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar6,param_3,puVar7);
            _objc_release(puVar7);
            puVar10 = puVar10 + 1;
            puVar7 = puVar2;
            func_0x00010bfb6b20();
          } while (puVar10 < puVar7);
        }
        puVar10 = puVar6;
        func_0x00010bf51e00();
        uVar3 = *(undefined8 *)(param_2 + _DAT_112783bf8);
        *(undefined **)(param_2 + _DAT_112783bf8) = puVar10;
        _objc_release(uVar3);
        _objc_release(puVar6);
      }
      bVar1 = true;
      func_0x00010c2278e0(param_2,param_3,1);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_autoreleasePoolPop(uVar8);
    if (bVar1) {
      _objc_retain(param_2);
      lVar9 = param_2;
      goto LAB_109217078;
    }
  }
  lVar9 = 0;
LAB_109217078:
  _objc_release(param_4);
  _objc_release(param_2);
  return lVar9;
}



/* Entry: 1092170ac; end: 1092170bb; -[YYImage animatedImageData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092170ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf63650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112783bec),PTR_s_data_1125b6738);
  return;
}



/* Entry: 1092170bc; end: 109217247; -[YYImage setPreloadAllAnimatedImageFrames:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1092170bc(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(byte *)(param_1 + _DAT_112783bfc) == param_3) {
    return;
  }
  if (param_3 != 0) {
    lVar5 = (long)_DAT_112783bec;
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010bfb6b20();
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lVar1 = *(long *)(param_1 + lVar5);
      func_0x00010bfb6b20();
      if (lVar1 != 0) {
        lVar5 = 0;
        do {
          lVar3 = param_1;
          func_0x00010bf035c0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 == 0) {
            puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2);
            _objc_release(puVar4);
          }
          else {
            func_0x00010befa120(puVar2);
          }
          _objc_release(lVar3);
          lVar5 = lVar5 + 1;
        } while (lVar1 != lVar5);
      }
      lVar1 = (long)_DAT_112783be4;
      _dispatch_semaphore_wait(*(undefined8 *)(param_1 + lVar1),0xffffffffffffffff);
      uVar6 = *(undefined8 *)(param_1 + _DAT_112783c00);
      *(undefined **)(param_1 + _DAT_112783c00) = puVar2;
      _objc_retain(puVar2);
      _objc_release(uVar6);
      _dispatch_semaphore_signal(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  lVar1 = (long)_DAT_112783be4;
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + lVar1),0xffffffffffffffff);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112783c00);
  *(undefined8 *)(param_1 + _DAT_112783c00) = 0;
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 109217248; end: 1092172cb; -[YYImage animatedIndexAtTime:] */

ulong FUN_109217248(double param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  
  dVar3 = param_1;
  func_0x00010bf03920();
  uVar2 = param_2;
  func_0x00010bf035e0();
  if (uVar2 != 0) {
    _fmod(param_1,dVar3);
    uVar2 = 0;
    dVar3 = param_1;
    do {
      func_0x00010bf035a0(param_2,param_3,uVar2);
      if (dVar3 < param_1) {
        return uVar2;
      }
      dVar3 = dVar3 - param_1;
      uVar2 = uVar2 + 1;
      uVar1 = param_2;
      func_0x00010bf035e0();
    } while (uVar2 < uVar1);
  }
  return 0xffffffffffffffff;
}



/* Entry: 1092172cc; end: 109217343; -[YYImage animatedTotalDuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1092172cc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  lVar3 = (long)_DAT_112783be0;
  dVar4 = *(double *)(param_1 + lVar3);
  if ((dVar4 == 0.0) && (uVar2 = param_1, func_0x00010bf035e0(), uVar2 != 0)) {
    uVar2 = 0;
    do {
      func_0x00010bf035a0(param_1,param_2,uVar2);
      dVar4 = dVar4 + *(double *)(param_1 + lVar3);
      *(double *)(param_1 + lVar3) = dVar4;
      uVar2 = uVar2 + 1;
      uVar1 = param_1;
      func_0x00010bf035e0();
    } while (uVar2 < uVar1);
  }
  return *(undefined8 *)(param_1 + lVar3);
}



/* Entry: 109217344; end: 109217413; -[YYImage initWithCoder:] */

undefined1 * FUN_109217344(undefined1 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 **ppuVar4;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_40;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf67000(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    puStack_38 = PTR_PTR_1127010a0;
    puStack_40 = param_1;
    _objc_msgSendSuper2(&puStack_40,PTR_s_initWithCoder__1125dd730,param_3);
  }
  else {
    func_0x00010bf885a0(lVar1);
    func_0x00010c008500(param_1);
    ppuVar4 = (undefined1 **)param_1;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return (undefined1 *)ppuVar4;
}


