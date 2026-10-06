/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d2e920; end: 107d2ea53;  */

void FUN_107d2e920(long param_1)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if ((lVar3 - 0x49U < 0x1a && (1L << (lVar3 - 0x49U & 0x3f) & 0x2020001U) != 0) ||
     ((uVar1 = lVar3 - 0x57U >> 1, (uVar1 | lVar3 - 0x57U << 0x3f) < 8 &&
      ((0xb1U >> (ulong)((uint)uVar1 & 0x1f) & 1) != 0)))) {
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
    if (lVar3 - 0x14U < 0x3d) {
      bVar2 = (byte)(0x1000002000000009 >> (lVar3 - 0x14U & 0x3f));
    }
  }
  *(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = bVar2 & 1;
  return;
}



/* Entry: 107d2ea54; end: 107d2ec3b;  */

undefined1 FUN_107d2ea54(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uVar2 = param_1;
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  func_0x00010c0c1320(uVar2);
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_68 + 3);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107d2ec3c; end: 107d2ec87;  */

void FUN_107d2ec3c(long param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  
  if ((param_2 & 0xfffffffffffffffe) == 2) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c25b820();
    bVar1 = lVar2 != 1;
  }
  else {
    bVar1 = false;
  }
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = bVar1;
  return;
}



/* Entry: 107d2ec88; end: 107d2ed23;  */

void FUN_107d2ec88(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 107d2ed24; end: 107d2edeb; -[SCBoostScrubberControlGesture initWithProgressBarView:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107d2ed24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126faac8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithTarget_action__1125f1c48,param_1,
                      PTR_s_handlePan__112538f78);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c18b5e0(puVar1);
    func_0x00010c178280(puVar1);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11276dd1c),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11276dd20),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d2edec; end: 107d2f007; -[SCBoostScrubberControlGesture handlePan:] */

void FUN_107d2edec(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_7);
  lVar1 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_7,param_6,lVar1);
  dVar4 = param_1;
  dVar5 = param_2;
  func_0x00010bdca3c0(param_5);
  dVar6 = param_4;
  func_0x00010c297a00(param_5,param_6,lVar1);
  if ((10.0 < ABS(dVar5)) && (lVar2 = param_7, func_0x00010c252440(), lVar2 == 1)) {
    func_0x00010c209fc0(param_7,param_6,4);
    goto LAB_107d2efe0;
  }
  lVar2 = param_7;
  func_0x00010c252440();
  uVar3 = param_5;
  if (lVar2 - 3U < 3) {
    param_3 = (param_1 - dVar4) / param_3;
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    dVar4 = 1.0;
    if (param_3 <= 1.0) {
      dVar4 = param_3;
    }
    func_0x00010c152f80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f820(dVar4);
LAB_107d2eee0:
    _objc_release(uVar3);
    func_0x00010c110340(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195460();
LAB_107d2efc0:
    _objc_release(param_5);
  }
  else {
    if (lVar2 == 2) {
      func_0x00010bf20c00(lVar1);
      if (param_4 + 200.0 < dVar6 - param_2) {
        func_0x00010c209fc0(param_7,param_6,4);
        func_0x00010c152f80(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f8a0();
        goto LAB_107d2eee0;
      }
      param_3 = (param_1 - dVar4) / param_3;
      if (param_3 <= 0.0) {
        param_3 = 0.0;
      }
      dVar4 = 1.0;
      if (param_3 <= 1.0) {
        dVar4 = param_3;
      }
      func_0x00010c152f80(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f840(dVar4);
      goto LAB_107d2efc0;
    }
    if (lVar2 == 1) {
      func_0x00010c152f80(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f860();
      goto LAB_107d2efc0;
    }
  }
  func_0x00010c219ba0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_7,param_6,lVar1);
LAB_107d2efe0:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 107d2f008; end: 107d2f08b; -[SCBoostScrubberControlGesture _allowedScrubbingRect] */

undefined8 FUN_107d2f008(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(param_1);
  _objc_release(uVar1);
  return 0;
}



/* Entry: 107d2f08c; end: 107d2f093; -[SCBoostScrubberControlGesture gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_107d2f08c(void)

{
  return 1;
}



/* Entry: 107d2f094; end: 107d2f153; -[SCBoostScrubberControlGesture gestureRecognizer:shouldReceiveTouch:] */

undefined8
FUN_107d2f094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_4,param_2,param_3);
  _objc_release(param_4);
  uVar2 = param_1;
  func_0x00010bdca3c0();
  iVar1 = (int)uVar2;
  _CGRectContainsPoint();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c152f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf1f880();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107d2f154; end: 107d2f15b; -[SCBoostScrubberControlGesture gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

undefined8 FUN_107d2f154(void)

{
  return 1;
}



/* Entry: 107d2f15c; end: 107d2f163; -[SCBoostScrubberControlGesture gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

undefined8 FUN_107d2f15c(void)

{
  return 0;
}



/* Entry: 107d2f164; end: 107d2f16b; -[SCBoostScrubberControlGesture canPreventGestureRecognizer:] */

undefined8 FUN_107d2f164(void)

{
  return 1;
}



/* Entry: 107d2f16c; end: 107d2f23b; -[SCBoostScrubberControlGesture canBePreventedByGestureRecognizer:] */

undefined8 FUN_107d2f16c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126ce7d0;
    _objc_opt_class(PTR_PTR_1126ce7d0);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar1);
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      uVar4 = param_1;
      func_0x00010c110340(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195460();
      _objc_release(uVar4);
      func_0x00010c195460(param_3);
      func_0x00010c1e1860(param_1);
    }
  }
  _objc_release(param_3);
  return 0;
}



/* Entry: 107d2f23c; end: 107d2f29b; -[SCBoostScrubberControlGesture dealloc] */

void FUN_107d2f23c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c110340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126faac8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107d2f29c; end: 107d2f2bb; -[SCBoostScrubberControlGesture progressBarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d2f29c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276dd1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d2f2bc; end: 107d2f2cf; -[SCBoostScrubberControlGesture setProgressBarView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d2f2bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276dd1c,param_3);
  return;
}



/* Entry: 107d2f2d0; end: 107d2f2ef; -[SCBoostScrubberControlGesture scrubbingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d2f2d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276dd20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d2f2f0; end: 107d2f303; -[SCBoostScrubberControlGesture setScrubbingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d2f2f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276dd20,param_3);
  return;
}



/* Entry: 107d2f304; end: 107d2f323; -[SCBoostScrubberControlGesture preventedPanGestureOrNil] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d2f304(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276dd24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d2f324; end: 107d2f337; -[SCBoostScrubberControlGesture setPreventedPanGestureOrNil:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d2f324(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276dd24,param_3);
  return;
}



/* Entry: 107d2f338; end: 107d2f37b; -[SCBoostScrubberControlGesture .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d2f338(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276dd24);
  _objc_destroyWeak(param_1 + _DAT_11276dd20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11276dd1c);
  return;
}



/* Entry: 107d2f37c; end: 107d2f3c7; +[SCContentOperaBoostLayer layerWithPage:] */

void FUN_107d2f37c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d52b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d2f3c8; end: 107d2f553; -[SCContentOperaBoostLayer initWithPage:] */

undefined1 * FUN_107d2f3c8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126faad0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2390;
    _objc_opt_class(PTR_PTR_1126b2390);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar5 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar2);
    uVar2 = uVar5;
    func_0x00010c25b200();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
    *(ulong *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = uVar5;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar2;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x10);
    *(ulong *)((long)puVar1 + 0x10) = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar5 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    _objc_release(uVar5);
    uVar5 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    _objc_release(uVar5);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d2f554; end: 107d2f55b; -[SCContentOperaBoostLayer type] */

undefined8 FUN_107d2f554(void)

{
  return 0x19;
}



/* Entry: 107d2f55c; end: 107d2f567; -[SCContentOperaBoostLayer layerViewControllerClass] */

void FUN_107d2f55c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d7958);
  return;
}



/* Entry: 107d2f568; end: 107d2f68b; -[SCContentOperaBoostLayer isEqual:] */

bool FUN_107d2f568(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar3 = param_3;
  _objc_opt_class();
  puVar4 = PTR_PTR_1126d52b0;
  _objc_opt_class();
  if (puVar3 == puVar4) {
    if (param_1 == param_3) {
      bVar2 = true;
    }
    else {
      _objc_retain(param_3);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      puVar3 = param_3;
      func_0x00010c0844e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(uVar6,param_2,puVar3);
      if ((int)uVar6 == 0) {
        bVar2 = false;
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        puVar4 = param_3;
        func_0x00010c259cc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0(uVar6,param_2,puVar4);
        if (((int)uVar6 == 0) ||
           (bVar1 = param_1[8], puVar5 = param_3, func_0x00010c07c940(), (uint)bVar1 != (uint)puVar5
           )) {
          bVar2 = false;
        }
        else {
          bVar1 = param_1[9];
          puVar5 = param_3;
          func_0x00010c0822a0(param_3);
          bVar2 = (uint)bVar1 == (uint)puVar5;
        }
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
      _objc_release(param_3);
    }
  }
  else {
    bVar2 = false;
  }
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 107d2f68c; end: 107d2f693; -[SCContentOperaBoostLayer storyId] */

undefined8 FUN_107d2f68c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d2f694; end: 107d2f69b; -[SCContentOperaBoostLayer itemId] */

undefined8 FUN_107d2f694(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d2f69c; end: 107d2f6a3; -[SCContentOperaBoostLayer isRetrievedFromBoosts] */

undefined1 FUN_107d2f69c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d2f6a4; end: 107d2f6ab; -[SCContentOperaBoostLayer isUpNextRecommendedStory] */

undefined1 FUN_107d2f6a4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107d2f6ac; end: 107d2f6db; -[SCContentOperaBoostLayer .cxx_destruct] */

void FUN_107d2f6ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107d2f6dc; end: 107d2f72f; -[SCContentOperaBoostLayerView initWithFrame:] */

undefined1 * FUN_107d2f6dc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126faad8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e900(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107d2f730; end: 107d2f80f; -[SCContentOperaBoostLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d2f730(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126faad8;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetMaxX();
  lVar1 = (long)_DAT_11276dd38;
  dVar2 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar1));
  _CGRectGetWidth();
  param_1 = param_1 - dVar2;
  dVar3 = param_1 + -10.0;
  func_0x00010bf20c00(param_2);
  _CGRectGetMaxY();
  dVar2 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar1));
  _CGRectGetHeight();
  param_1 = param_1 - dVar2;
  dVar4 = param_1 + -60.0;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar1));
  _CGRectGetWidth();
  dVar2 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar1));
  _CGRectGetHeight();
  func_0x00010c19f0e0(dVar3,dVar4,param_1,dVar2,*(undefined8 *)(param_2 + lVar1));
  return;
}



/* Entry: 107d2f810; end: 107d2f8f7; -[SCContentOperaBoostLayerView toggleDebugIconWithIsRetrievedFromBoosts:isUpNextRecommendedStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d2f810(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276dd38;
  lVar1 = *(long *)(param_1 + lVar4);
  if (((param_3 & 1) == 0) && ((param_4 & 1) == 0)) {
    uVar3 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_opt_new();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar2;
      _objc_release(uVar3);
      func_0x00010befbb60(param_1);
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    }
    if (param_3 == 0) {
      PTR__OBJC_CLASS___UIImage_1126aea68 = puVar2;
      if (param_4 == 0) {
        return;
      }
    }
    PTR__OBJC_CLASS___UIImage_1126aea68 = puVar2;
    func_0x00010bfe8220(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4));
    _objc_release(puVar2);
    func_0x00010c23d620(*(undefined8 *)(param_1 + lVar4));
    lVar1 = *(long *)(param_1 + lVar4);
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setHidden__1126479f8,uVar3);
  return;
}



/* Entry: 107d2f8f8; end: 107d2f90b; -[SCContentOperaBoostLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d2f8f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276dd38,0);
  return;
}



/* Entry: 107d2f90c; end: 107d2f967; -[SCContentOperaBoostLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d2f90c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d7960;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11276dd3c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107d2f968; end: 107d2f97f; -[SCContentOperaBoostLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d2f968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276dd3c),
             PTR_s_toggleDebugIconWithIsRetrievedFr_11267a428,0,0);
  return;
}



/* Entry: 107d2f980; end: 107d2f993; -[SCContentOperaBoostLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d2f980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276dd3c,0);
  return;
}



/* Entry: 107d2f994; end: 107d2f9df; +[SCContentOperaBoostProgressBarLayer layerWithPage:] */

void FUN_107d2f994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3b00;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d2f9e0; end: 107d3050b; -[SCContentOperaBoostProgressBarLayer initWithPage:] */

undefined1 * FUN_107d2f9e0(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  uint uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar4 = &uStack_80;
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR_PTR_1126faae0;
  uStack_80 = param_2;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b3af0;
    _objc_opt_class(PTR_PTR_1126b3af0);
    uVar7 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar6);
    uVar1 = uVar5;
    if ((uVar7 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    _objc_retain(uVar1);
    uVar8 = *(undefined8 *)((long)puVar4 + 0x18);
    *(ulong *)((long)puVar4 + 0x18) = uVar1;
    _objc_release(uVar8);
    uVar7 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar9 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar6);
    uVar5 = uVar7;
    if ((uVar9 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar7);
    func_0x00010bfb2c80(uVar5);
    _objc_release(uVar5);
    *(double *)((long)puVar4 + 0x28) = (double)param_1;
    uVar7 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar9 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar6);
    uVar5 = uVar7;
    if ((uVar9 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar7);
    uVar7 = uVar5;
    func_0x00010bf1f3c0();
    _objc_release(uVar5);
    *(char *)((long)puVar4 + 9) = (char)uVar7;
    uVar7 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar9 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar6);
    uVar5 = uVar7;
    if ((uVar9 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar7);
    uVar7 = uVar5;
    func_0x00010bf1f3c0();
    _objc_release(uVar5);
    *(char *)((long)puVar4 + 0xe) = (char)uVar7;
    uVar7 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar9 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar6);
    uVar5 = uVar7;
    if ((uVar9 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar7);
    uVar8 = *(undefined8 *)((long)puVar4 + 0x48);
    *(ulong *)((long)puVar4 + 0x48) = uVar5;
    _objc_release(uVar8);
    dVar15 = *(double *)((long)puVar4 + 0x28);
    if (dVar15 <= 0.0) {
      bVar12 = 0;
    }
    else {
      bVar12 = *(byte *)((long)puVar4 + 0xe) ^ 1;
    }
    *(byte *)((long)puVar4 + 8) = bVar12 & 1;
    uVar5 = uVar3;
    func_0x00010c0e00e0();
    fVar14 = SUB84(dVar15,0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c067fc0();
    _objc_release(uVar5);
    *(bool *)((long)puVar4 + 0xf) = uVar7 == 3;
    uVar7 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar9 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar6);
    uVar5 = uVar7;
    if ((uVar9 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar7);
    uVar7 = uVar5;
    func_0x00010c067ec0();
    _objc_release(uVar5);
    *(bool *)((long)puVar4 + 10) = 0 < (int)uVar7;
    uVar7 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar9 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar6);
    uVar5 = uVar7;
    if ((uVar9 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar7);
    uVar7 = uVar5;
    func_0x00010c067ec0();
    _objc_release(uVar5);
    *(bool *)((long)puVar4 + 0xb) = 0 < (int)uVar7;
    uVar7 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar9 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar6);
    uVar5 = uVar7;
    if ((uVar9 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar7);
    uVar7 = uVar5;
    func_0x00010c067ec0();
    _objc_release(uVar5);
    *(bool *)((long)puVar4 + 0xd) = 0 < (int)uVar7;
    uVar7 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar9 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar6);
    uVar5 = uVar7;
    if ((uVar9 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar7);
    func_0x00010bfb2c80(uVar5);
    _objc_release(uVar5);
    dVar15 = (double)fVar14;
    *(double *)((long)puVar4 + 0x50) = dVar15;
    uVar7 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar9 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar6);
    uVar5 = uVar7;
    if ((uVar9 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar7);
    uVar7 = uVar5;
    func_0x00010bf1f3c0();
    _objc_release(uVar5);
    *(char *)((long)puVar4 + 0x10) = (char)uVar7;
    uVar7 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar9 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar6);
    uVar5 = uVar7;
    if ((uVar9 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar7);
    uVar7 = uVar5;
    func_0x00010bf1f3c0();
    _objc_release(uVar5);
    if ((int)uVar7 != 0) {
      puVar6 = PTR_PTR_1126b2d20;
      func_0x00010c27fe40(PTR_PTR_1126b2d20);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar9 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar6);
      uVar5 = uVar7;
      if ((uVar9 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar7);
      uVar8 = *(undefined8 *)((long)puVar4 + 0x40);
      *(ulong *)((long)puVar4 + 0x40) = uVar5;
      _objc_release(uVar8);
    }
    uVar7 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar9 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar6);
    uVar5 = uVar7;
    if ((uVar9 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar7);
    if (uVar5 == 0) {
      func_0x00010bf11300(param_4);
      if (dVar15 == 0.0) {
        uVar9 = uVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar10 = uVar9;
        _objc_opt_isKindOfClass(uVar9,puVar6);
        uVar7 = uVar9;
        if ((uVar10 & 1) == 0) {
          uVar7 = 0;
        }
        _objc_retain(uVar7);
        _objc_release(uVar9);
        uVar9 = uVar7;
        func_0x00010c08fa60();
        _objc_release(uVar7);
        uVar13 = (uint)(uVar9 != 0);
      }
      else {
        uVar13 = 1;
      }
      uVar9 = uVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar10 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar6);
      uVar7 = uVar9;
      if ((uVar10 & 1) == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar9);
      uVar9 = uVar7;
      func_0x00010bf1f3c0();
      _objc_release(uVar7);
      dVar15 = (double)(uVar13 & ((uint)uVar9 ^ 1));
    }
    else {
      func_0x00010bfb2c80(uVar7);
      dVar15 = (double)SUB84(dVar15,0);
    }
    *(double *)((long)puVar4 + 0x20) = dVar15;
    uVar7 = uVar3;
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    *(double *)((long)puVar4 + 0x58) = dVar15;
    _objc_release(uVar7);
    uVar7 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar7 != 0) {
      uVar9 = uVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar10 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar6);
      uVar7 = uVar9;
      if ((uVar10 & 1) == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar9);
      uVar9 = uVar7;
      func_0x00010bf1f3c0();
      _objc_release(uVar7);
      *(char *)((long)puVar4 + 0xc) = (char)uVar9;
    }
    uVar9 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010c2827c0();
    if (uVar7 < 2) {
      uVar7 = 1;
    }
    *(ulong *)((long)puVar4 + 0x30) = uVar7;
    _objc_release(uVar9);
    uVar7 = uVar3;
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    if (dVar15 == 0.0) {
      dVar15 = 10.0;
    }
    *(double *)((long)puVar4 + 0x38) = dVar15;
    _objc_release(uVar7);
    uVar7 = uVar3;
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar16 = 0.0;
    if (dVar15 != 0.0) {
      dVar16 = dVar15;
    }
    *(double *)((long)puVar4 + 0x60) = dVar16;
    _objc_release(uVar7);
    uVar9 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar10 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar6);
    uVar7 = uVar9;
    if ((uVar10 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar9);
    uVar9 = uVar7;
    func_0x00010bf1f3c0();
    _objc_release(uVar7);
    *(char *)((long)puVar4 + 0x11) = (char)uVar9;
    uVar9 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar10 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar6);
    uVar7 = uVar9;
    if ((uVar10 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar9);
    if (uVar7 == 0) {
      uVar2 = *(undefined1 *)((long)puVar4 + 0x11);
    }
    else {
      func_0x00010bf1f3c0();
      uVar2 = (undefined1)uVar9;
    }
    *(undefined1 *)((long)puVar4 + 0x12) = uVar2;
    uVar10 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar11 = uVar10;
    _objc_opt_isKindOfClass(uVar10,puVar6);
    uVar9 = uVar10;
    if ((uVar11 & 1) == 0) {
      uVar9 = 0;
    }
    _objc_retain(uVar9);
    _objc_release(uVar10);
    uVar10 = uVar9;
    func_0x00010bf1f3c0();
    _objc_release(uVar9);
    *(char *)((long)puVar4 + 0x13) = (char)uVar10;
    uVar9 = uVar3;
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    *(double *)((long)puVar4 + 0x68) = dVar16;
    _objc_release(uVar9);
    uVar10 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar11 = uVar10;
    _objc_opt_isKindOfClass(uVar10,puVar6);
    uVar9 = uVar10;
    if ((uVar11 & 1) == 0) {
      uVar9 = 0;
    }
    _objc_retain(uVar9);
    _objc_release(uVar10);
    uVar10 = uVar9;
    func_0x00010bf1f3c0();
    _objc_release(uVar9);
    *(char *)((long)puVar4 + 0x14) = (char)uVar10;
    uVar10 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar11 = uVar10;
    _objc_opt_isKindOfClass(uVar10,puVar6);
    uVar9 = uVar10;
    if ((uVar11 & 1) == 0) {
      uVar9 = 0;
    }
    _objc_retain(uVar9);
    _objc_release(uVar10);
    uVar10 = uVar9;
    func_0x00010c067fc0();
    _objc_release(uVar9);
    *(ulong *)((long)puVar4 + 0x70) = uVar10;
    uVar10 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar11 = uVar10;
    _objc_opt_isKindOfClass(uVar10,puVar6);
    uVar9 = uVar10;
    if ((uVar11 & 1) == 0) {
      uVar9 = 0;
    }
    _objc_retain(uVar9);
    _objc_release(uVar10);
    uVar8 = *(undefined8 *)((long)puVar4 + 0x78);
    *(ulong *)((long)puVar4 + 0x78) = uVar9;
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar1);
  }
  _objc_release(uVar3);
  _objc_release(param_4);
  return (undefined1 *)puVar4;
}



/* Entry: 107d3050c; end: 107d30513; -[SCContentOperaBoostProgressBarLayer type] */

undefined8 FUN_107d3050c(void)

{
  return 0x19;
}



/* Entry: 107d30514; end: 107d3051f; -[SCContentOperaBoostProgressBarLayer layerViewControllerClass] */

void FUN_107d30514(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d7968);
  return;
}



/* Entry: 107d30520; end: 107d307ef; -[SCContentOperaBoostProgressBarLayer isEqual:] */

bool FUN_107d30520(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  double dVar9;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  puVar3 = param_4;
  _objc_opt_class();
  puVar4 = PTR_PTR_1126b3b00;
  _objc_opt_class();
  if (puVar3 == puVar4) {
    if (param_2 == param_4) {
      bVar2 = true;
      goto LAB_107d30570;
    }
    if ((param_2[0x11] & 1) == 0) {
      _objc_retain(param_4);
      puVar3 = param_4;
      func_0x00010c29d560();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = *(undefined **)(param_2 + 0x18);
      _objc_retain();
      _objc_retain(puVar4);
      if (puVar3 == puVar4) {
        _objc_release(puVar4);
        _objc_release(puVar3);
LAB_107d30620:
        func_0x00010c064200(param_4);
        if ((((((param_1 == *(double *)(param_2 + 0x20)) &&
               (bVar1 = param_2[8], puVar4 = param_4, func_0x00010c07b480(),
               (uint)bVar1 == (uint)puVar4)) &&
              (bVar1 = param_2[9], puVar4 = param_4, func_0x00010bf021e0(),
              (uint)bVar1 == (uint)puVar4)) &&
             ((bVar1 = param_2[10], puVar4 = param_4, func_0x00010c290640(),
              (uint)bVar1 == (uint)puVar4 &&
              (bVar1 = param_2[0xb], puVar4 = param_4, func_0x00010c290660(),
              (uint)bVar1 == (uint)puVar4)))) &&
            ((bVar1 = param_2[0xd], puVar4 = param_4, func_0x00010c1393e0(),
             (uint)bVar1 == (uint)puVar4 &&
             ((bVar1 = param_2[0xe], puVar4 = param_4, func_0x00010bf203e0(),
              (uint)bVar1 == (uint)puVar4 &&
              (bVar1 = param_2[0xf], puVar4 = param_4, func_0x00010c294c60(),
              (uint)bVar1 == (uint)puVar4)))))) &&
           ((bVar1 = param_2[0x10], puVar4 = param_4, func_0x00010c269780(),
            (uint)bVar1 == (uint)puVar4 &&
            ((bVar1 = param_2[0x11], puVar4 = param_4, func_0x00010c282880(),
             (uint)bVar1 == (uint)puVar4 &&
             (bVar1 = param_2[0x13], puVar4 = param_4, func_0x00010c2828a0(),
             (uint)bVar1 == (uint)puVar4)))))) {
          lVar8 = *(long *)(param_2 + 0x40);
          lVar6 = lVar8;
          if (lVar8 == 0) {
            puStack_58 = param_4;
            func_0x00010bf1ff40();
            _objc_retainAutoreleasedReturnValue();
            if (puStack_58 == (undefined *)0x0) {
              puVar5 = *(undefined **)(param_2 + 0x30);
              puVar4 = param_4;
              func_0x00010c158200();
              if (puVar5 == puVar4) {
                dVar9 = *(double *)(param_2 + 0x38);
                func_0x00010c1582a0(param_4);
                bVar2 = dVar9 == param_1;
                puStack_58 = (undefined *)0x0;
              }
              else {
                bVar2 = false;
                puStack_58 = (undefined *)0x0;
              }
              goto LAB_107d30784;
            }
            lVar6 = *(long *)(param_2 + 0x40);
          }
          puVar4 = param_4;
          func_0x00010bf1ff40(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c071ae0(lVar6,param_3,puVar4);
          if (((int)lVar6 == 0) ||
             (puVar7 = *(undefined **)(param_2 + 0x30), puVar5 = param_4, func_0x00010c158200(),
             puVar7 != puVar5)) {
            bVar2 = false;
          }
          else {
            dVar9 = *(double *)(param_2 + 0x38);
            func_0x00010c1582a0(param_4);
            bVar2 = dVar9 == param_1;
          }
          _objc_release(puVar4);
          if (lVar8 == 0) goto LAB_107d30784;
        }
        else {
LAB_107d30774:
          bVar2 = false;
        }
      }
      else {
        if (puVar4 != (undefined *)0x0) {
          puVar5 = puVar3;
          func_0x00010c071ae0(puVar3,param_3,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar3);
          if ((int)puVar5 != 0) goto LAB_107d30620;
          goto LAB_107d30774;
        }
        bVar2 = false;
        puStack_58 = puVar3;
LAB_107d30784:
        _objc_release(puStack_58);
      }
      _objc_release(puVar3);
      _objc_release(param_4);
      goto LAB_107d30570;
    }
  }
  bVar2 = false;
LAB_107d30570:
  _objc_release(param_4);
  return bVar2;
}



/* Entry: 107d307f0; end: 107d307f7; -[SCContentOperaBoostProgressBarLayer viewModel] */

undefined8 FUN_107d307f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d307f8; end: 107d307ff; -[SCContentOperaBoostProgressBarLayer initialProgress] */

undefined8 FUN_107d307f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d30800; end: 107d30807; -[SCContentOperaBoostProgressBarLayer isProgressBarAlignedToTop] */

undefined1 FUN_107d30800(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107d30808; end: 107d3080f; -[SCContentOperaBoostProgressBarLayer topOffsetWhenOverMediaContent] */

undefined8 FUN_107d30808(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d30810; end: 107d30817; -[SCContentOperaBoostProgressBarLayer segmentCountForCurrentSnap] */

undefined8 FUN_107d30810(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107d30818; end: 107d3081f; -[SCContentOperaBoostProgressBarLayer segmentDuration] */

undefined8 FUN_107d30818(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107d30820; end: 107d30827; -[SCContentOperaBoostProgressBarLayer alwaysUseTopOffset] */

undefined1 FUN_107d30820(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107d30828; end: 107d3082f; -[SCContentOperaBoostProgressBarLayer useOffsetBelowStatusForNotchlessDevice] */

undefined1 FUN_107d30828(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107d30830; end: 107d30837; -[SCContentOperaBoostProgressBarLayer useOffsetForEdgeToEdgeExperiment] */

undefined1 FUN_107d30830(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107d30838; end: 107d3083f; -[SCContentOperaBoostProgressBarLayer shouldDisableProgressAnimation] */

undefined1 FUN_107d30838(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107d30840; end: 107d30847; -[SCContentOperaBoostProgressBarLayer resetProgressBarOnDisappear] */

undefined1 FUN_107d30840(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107d30848; end: 107d3084f; -[SCContentOperaBoostProgressBarLayer bottomProgressBarAlignedFor5thTab] */

undefined1 FUN_107d30848(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 107d30850; end: 107d30857; -[SCContentOperaBoostProgressBarLayer bottomActionBarOffset] */

undefined8 FUN_107d30850(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107d30858; end: 107d3085f; -[SCContentOperaBoostProgressBarLayer horizontalPaddingOverride] */

undefined8 FUN_107d30858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107d30860; end: 107d30867; -[SCContentOperaBoostProgressBarLayer usingScrubber] */

undefined1 FUN_107d30860(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 107d30868; end: 107d3086f; -[SCContentOperaBoostProgressBarLayer tapToUnhide] */

undefined1 FUN_107d30868(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 107d30870; end: 107d30877; -[SCContentOperaBoostProgressBarLayer scrubberFadeAnimationDuration] */

undefined8 FUN_107d30870(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107d30878; end: 107d3087f; -[SCContentOperaBoostProgressBarLayer expectedContinuousUpdateThreshold] */

undefined8 FUN_107d30878(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107d30880; end: 107d30887; -[SCContentOperaBoostProgressBarLayer unskippableDuration] */

undefined8 FUN_107d30880(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107d30888; end: 107d3088f; -[SCContentOperaBoostProgressBarLayer unskippableAdProgressBarEnabled] */

undefined1 FUN_107d30888(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 107d30890; end: 107d30897; -[SCContentOperaBoostProgressBarLayer skipAttemptHighlightEnabled] */

undefined1 FUN_107d30890(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 107d30898; end: 107d3089f; -[SCContentOperaBoostProgressBarLayer unskippableAdShouldHideProgressBar] */

undefined1 FUN_107d30898(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 107d308a0; end: 107d308a7; -[SCContentOperaBoostProgressBarLayer unskippableAdAccumulatedLongformTimeViewedMs] */

undefined8 FUN_107d308a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107d308a8; end: 107d308af; -[SCContentOperaBoostProgressBarLayer shouldHideProgressBar] */

undefined1 FUN_107d308a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 107d308b0; end: 107d308b7; -[SCContentOperaBoostProgressBarLayer storyTypeVariant] */

undefined8 FUN_107d308b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107d308b8; end: 107d308bf; -[SCContentOperaBoostProgressBarLayer storyTypeVariants] */

undefined8 FUN_107d308b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107d308c0; end: 107d30907; -[SCContentOperaBoostProgressBarLayer .cxx_destruct] */

void FUN_107d308c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107d30908; end: 107d30a6b; -[SCContentOperaBoostProgressBarLayerView initWithFrame:progressBarHeight:shouldFixProgressBarWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107d30908(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double in_d4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126faae8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(double *)((long)puVar1 + (long)_DAT_11276ddac) = in_d4;
    *(double *)((long)puVar1 + (long)_DAT_11276ddb0) = in_d4;
    dVar6 = 0.0;
    if (in_d4 <= 1.0) {
      dVar6 = in_d4 * 0.5;
    }
    *(double *)((long)puVar1 + (long)_DAT_11276ddb4) = dVar6;
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar5 = (long)_DAT_11276ddb8;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    func_0x00010c160fc0(puVar1);
    func_0x00010c21e900(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf55c80(0x3fd3333333333333);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ddbc);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11276ddbc) = puVar3;
    _objc_release(uVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf55c80(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276ddc0);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11276ddc0) = puVar3;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276ddc4) = param_3;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276ddc8) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107d30a6c; end: 107d30b3b; -[SCContentOperaBoostProgressBarLayerView createDefaultProgressBarLayerWithOpacity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d30a6c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
  func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c20e8e0(puVar1,param_3,puVar3);
  _objc_release(puVar2);
  func_0x00010c1bdd00(*(undefined8 *)(param_2 + _DAT_11276ddb0),puVar1);
  func_0x00010c1d4bc0((float)param_1,puVar1);
  uVar4 = *(undefined8 *)(param_2 + _DAT_11276ddb8);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d30b3c; end: 107d30c1b; -[SCContentOperaBoostProgressBarLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d30b3c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126faae8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  lVar2 = (long)_DAT_11276ddcc;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c276c00();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010bf600e0();
    lVar2 = *(long *)(param_1 + lVar2);
    func_0x00010c276c00();
    if (lVar1 < lVar2) {
      func_0x00010beaf900(param_1);
      func_0x00010beaf2e0(param_1);
      func_0x00010be06740(param_1);
      if ((*(double *)(param_1 + _DAT_11276ddd0) == 1.0) &&
         (*(double *)(param_1 + _DAT_11276ddd4) == 0.0)) {
        func_0x00010be066a0(param_1);
      }
      if (*(char *)(param_1 + _DAT_11276ddd8) == '\x01') {
        func_0x00010bebf680(param_1);
      }
    }
  }
  return;
}



/* Entry: 107d30c1c; end: 107d31183; -[SCContentOperaBoostProgressBarLayerView setupViewForLayer:ngsActionBarStyle:actionBarHeightOverride:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d30c1c(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [128];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar12 = param_1;
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010c07b480();
  *(char *)(param_2 + _DAT_11276dddc) = (char)puVar1;
  puVar1 = param_4;
  func_0x00010bf021e0();
  *(char *)(param_2 + _DAT_11276dde0) = (char)puVar1;
  puVar1 = param_4;
  func_0x00010c290640();
  *(char *)(param_2 + _DAT_11276dde4) = (char)puVar1;
  puVar1 = param_4;
  func_0x00010c290660();
  *(char *)(param_2 + _DAT_11276dde8) = (char)puVar1;
  func_0x00010c2747c0(param_4);
  *(double *)(param_2 + _DAT_11276ddec) = dVar12;
  func_0x00010be93760(param_2);
  puVar1 = param_4;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  FUN_107d31184();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11276ddcc);
  *(undefined **)(param_2 + _DAT_11276ddcc) = puVar5;
  _objc_release(uVar3);
  _objc_release(puVar1);
  func_0x00010c064200(param_4);
  *(double *)(param_2 + _DAT_11276ddd0) = dVar12;
  *(double *)(param_2 + _DAT_11276ddf0) = dVar12;
  *(undefined8 *)(param_2 + _DAT_11276ddd4) = 0;
  *(undefined8 *)(param_2 + _DAT_11276ddf4) = param_5;
  *(double *)(param_2 + _DAT_11276ddf8) = param_1;
  puVar1 = param_4;
  func_0x00010c22ef60();
  *(char *)(param_2 + _DAT_11276ddfc) = (char)puVar1;
  puVar1 = param_4;
  func_0x00010c1393e0();
  *(char *)(param_2 + _DAT_11276de00) = (char)puVar1;
  func_0x00010bf9c220(param_4);
  *(bool *)(param_2 + _DAT_11276de04) = dVar12 != 0.0;
  puVar1 = param_4;
  func_0x00010c269780();
  *(char *)(param_2 + _DAT_11276de08) = (char)puVar1;
  puVar1 = param_4;
  func_0x00010bf1ff40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11276de0c);
  *(undefined **)(param_2 + _DAT_11276de0c) = puVar1;
  _objc_release(uVar3);
  puVar1 = param_4;
  func_0x00010bfe4300();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11276de10);
  *(undefined **)(param_2 + _DAT_11276de10) = puVar1;
  _objc_release(uVar3);
  puVar1 = param_4;
  func_0x00010c25b820();
  uVar3 = 0x30;
  if (puVar1 != (undefined *)0x1) {
    uVar3 = 0xd5;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11276de14;
  _objc_retain();
  uVar3 = *(undefined8 *)(param_2 + lVar6);
  *(undefined **)(param_2 + lVar6) = puVar1;
  _objc_release(uVar3);
  puVar5 = param_4;
  func_0x00010c25b840();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11276de18;
  uVar3 = *(undefined8 *)(param_2 + lVar8);
  *(undefined **)(param_2 + lVar8) = puVar5;
  _objc_release(uVar3);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  lVar9 = (long)_DAT_11276de1c;
  lVar7 = *(long *)(param_2 + lVar9);
  _objc_retain(lVar7);
  lVar6 = lVar7;
  func_0x00010bf52a60(lVar7,param_3,&uStack_150,auStack_110,0x10);
  if (lVar6 != 0) {
    lVar10 = *plStack_140;
    do {
      lVar11 = 0;
      do {
        if (*plStack_140 != lVar10) {
          _objc_enumerationMutation(lVar7);
        }
        func_0x00010c12c940(*(undefined8 *)(lStack_148 + lVar11 * 8));
        lVar11 = lVar11 + 1;
      } while (lVar6 != lVar11);
      lVar6 = lVar7;
      func_0x00010bf52a60(lVar7,param_3,&uStack_150,auStack_110,0x10);
    } while (lVar6 != 0);
  }
  _objc_release(lVar7);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_2 + lVar9);
  *(undefined **)(param_2 + lVar9) = puVar5;
  _objc_release(uVar3);
  lVar6 = *(long *)(param_2 + lVar8);
  func_0x00010bf529e0();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11276ddbc);
  if (lVar6 == 0) {
    puVar5 = puVar1;
    _objc_retainAutorelease(puVar1);
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(uVar3,param_3,puVar5);
    uVar3 = *(undefined8 *)(param_2 + _DAT_11276ddc0);
    puVar5 = puVar1;
    _objc_retainAutorelease(puVar1);
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(uVar3,param_3,puVar5);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(uVar3,param_3,puVar2);
    _objc_release(puVar5);
    uVar3 = *(undefined8 *)(param_2 + _DAT_11276ddc0);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c20e8e0(uVar3,param_3,puVar2);
    _objc_release(puVar5);
  }
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar13 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  uVar3 = uVar13;
  func_0x00010c013de0(uVar13,uVar14,uVar15,uVar16);
  lVar7 = (long)_DAT_11276de20;
  uVar4 = *(undefined8 *)(param_2 + lVar7);
  *(undefined **)(param_2 + lVar7) = puVar5;
  _objc_release(uVar4);
  func_0x00010c16e440(*(undefined8 *)(param_2 + lVar7),param_3,puVar1);
  lVar6 = (long)_DAT_11276ddb8;
  func_0x00010befbb60(*(undefined8 *)(param_2 + lVar6),param_3,*(undefined8 *)(param_2 + lVar7));
  puVar5 = param_4;
  func_0x00010c294c60();
  lVar8 = (long)_DAT_11276de24;
  *(char *)(param_2 + lVar8) = (char)puVar5;
  puVar5 = param_4;
  func_0x00010bf203e0();
  *(char *)(param_2 + _DAT_11276de28) = (char)puVar5;
  if (*(char *)(param_2 + lVar8) == '\x01') {
    func_0x00010c152f20(param_4);
    *(undefined8 *)(param_2 + _DAT_11276de2c) = uVar3;
    puVar5 = PTR_PTR_1126d7970;
    _objc_alloc();
    func_0x00010c013de0(uVar13,uVar14,uVar15,uVar16);
    lVar8 = (long)_DAT_11276de30;
    uVar3 = *(undefined8 *)(param_2 + lVar8);
    *(undefined **)(param_2 + lVar8) = puVar5;
    _objc_release(uVar3);
    func_0x00010befbb60(param_2,param_3,*(undefined8 *)(param_2 + lVar8));
    uVar3 = *(undefined8 *)(param_2 + lVar6);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_2 + lVar7);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar3);
    uVar3 = uVar13;
  }
  puVar5 = param_4;
  func_0x00010c158200();
  *(undefined **)(param_2 + _DAT_11276de34) = puVar5;
  *(bool *)(param_2 + _DAT_11276de38) = (undefined *)0x1 < puVar5;
  func_0x00010c1582a0(param_4);
  *(undefined8 *)(param_2 + _DAT_11276de3c) = uVar3;
  *(undefined8 *)(param_2 + _DAT_11276de40) = 0;
  func_0x00010c1cbe20(param_2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar1 = param_4;
  func_0x00010c276c00();
  if (puVar1 < (undefined *)0x51) {
    _objc_retain(param_4);
    puVar1 = param_4;
  }
  else {
    puVar1 = param_4;
    func_0x00010c276c00();
    puVar5 = param_4;
    func_0x00010bf600e0();
    if (puVar5 < (undefined *)0x3c) {
      puVar5 = param_4;
      func_0x00010bf600e0(param_4);
    }
    else {
      puVar5 = param_4;
      func_0x00010bf600e0();
      if (puVar1 + -0x14 < puVar5) {
        puVar5 = param_4;
        func_0x00010bf600e0(param_4);
        puVar1 = param_4;
        func_0x00010c276c00(param_4);
        puVar5 = puVar5 + (0x50 - (long)puVar1);
      }
      else {
        puVar5 = (undefined *)0x3c;
      }
    }
    puVar1 = PTR_PTR_1126b3af0;
    _objc_alloc(PTR_PTR_1126b3af0);
    puVar2 = param_4;
    func_0x00010bf11820(param_4);
    func_0x00010c054900(puVar1,param_3,0x50,puVar5,puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d31184; end: 107d3126b;  */

void FUN_107d31184(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c276c00();
  if (puVar1 < (undefined *)0x51) {
    _objc_retain(param_1);
    puVar1 = param_1;
  }
  else {
    puVar1 = param_1;
    func_0x00010c276c00();
    puVar3 = param_1;
    func_0x00010bf600e0();
    if (puVar3 < (undefined *)0x3c) {
      puVar3 = param_1;
      func_0x00010bf600e0(param_1);
    }
    else {
      puVar3 = param_1;
      func_0x00010bf600e0();
      if (puVar1 + -0x14 < puVar3) {
        puVar3 = param_1;
        func_0x00010bf600e0(param_1);
        puVar1 = param_1;
        func_0x00010c276c00(param_1);
        puVar3 = puVar3 + (0x50 - (long)puVar1);
      }
      else {
        puVar3 = (undefined *)0x3c;
      }
    }
    puVar1 = PTR_PTR_1126b3af0;
    _objc_alloc(PTR_PTR_1126b3af0);
    puVar2 = param_1;
    func_0x00010bf11820(param_1);
    func_0x00010c054900(puVar1,param_2,0x50,puVar3,puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d3126c; end: 107d313c3; -[SCContentOperaBoostProgressBarLayerView updateProgress:withDurtaion:onSeekPoints:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3126c(double param_1,double param_2,long param_3,undefined8 param_4,uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  if ((param_2 == 0.0) || ((*(byte *)(param_3 + _DAT_11276de44) & 1) != 0)) {
    return;
  }
  lVar4 = (long)_DAT_11276ddd0;
  *(undefined8 *)(param_3 + _DAT_11276ddf0) = *(undefined8 *)(param_3 + lVar4);
  if (((param_5 & 1) == 0) && ((*(byte *)(param_3 + _DAT_11276de38) & 1) == 0)) {
    *(double *)(param_3 + _DAT_11276ddd4) = param_2;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    dVar5 = 1.0;
    if (param_1 <= 1.0) {
      dVar5 = param_1;
    }
    *(double *)(param_3 + lVar4) = dVar5;
    if (*(char *)(param_3 + _DAT_11276de04) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdcb210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__animateToProgress_112550620);
      return;
    }
  }
  else {
    uVar1 = *(ulong *)(param_3 + _DAT_11276de40);
    uVar2 = *(long *)(param_3 + _DAT_11276de34) - 1;
    if ((param_5 == 0) || (uVar2 <= uVar1)) {
      if (param_5 == 0) {
        return;
      }
      if (uVar1 != uVar2) {
        return;
      }
      lVar3 = (long)_DAT_11276de3c;
      dVar5 = param_2 - *(double *)(param_3 + lVar3) * (double)uVar1;
      *(double *)(param_3 + _DAT_11276ddd4) = dVar5;
      param_1 = (-((double)uVar1 * *(double *)(param_3 + lVar3)) + param_2 * param_1) / dVar5;
    }
    else {
      dVar5 = *(double *)(param_3 + _DAT_11276de3c);
      *(double *)(param_3 + _DAT_11276ddd4) = dVar5;
      param_1 = param_1 * param_2;
      _fmod(param_1,dVar5);
      param_1 = param_1 / dVar5;
    }
    *(double *)(param_3 + lVar4) = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bebf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__startAnimation_11258d748);
  return;
}



/* Entry: 107d313c4; end: 107d3146f; -[SCContentOperaBoostProgressBarLayerView _updateProgressForSeek:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d313c4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  uVar5 = 0x3ff0000000000000;
  dVar3 = 1.0;
  if (param_1 <= 1.0) {
    dVar3 = param_1;
  }
  if (0.99 <= dVar3) {
    dVar3 = 1.0;
  }
  lVar1 = (long)_DAT_11276ddd0;
  *(double *)(param_5 + lVar1) = dVar3;
  lVar2 = (long)_DAT_11276de20;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
  dVar4 = dVar3;
  func_0x00010bebc320(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar3,uVar5,
             *(double *)(param_5 + _DAT_11276ddb4) + *(double *)(param_5 + _DAT_11276ddb4) +
             *(double *)(param_5 + lVar1) * dVar4,param_4,*(undefined8 *)(param_5 + lVar2),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 107d31470; end: 107d31633; -[SCContentOperaBoostProgressBarLayerView _startAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d31470(double param_1,double param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  if (((*(byte *)(param_3 + _DAT_11276ddfc) & 1) == 0) &&
     (lVar7 = (long)_DAT_11276de20, *(long *)(param_3 + lVar7) != 0)) {
    lVar6 = (long)_DAT_11276de48;
    lVar5 = *(long *)(param_3 + lVar6);
    _objc_retain(lVar5);
    if ((lVar5 != 0) &&
       ((lVar2 = lVar5, func_0x00010c252440(), lVar2 == 1 &&
        (lVar2 = lVar5, func_0x00010c075c40(), (int)lVar2 != 0)))) {
      func_0x00010c2559c0(lVar5,param_4,1);
    }
    _objc_release(lVar5);
    uVar3 = *(undefined8 *)(param_3 + lVar6);
    *(undefined8 *)(param_3 + lVar6) = 0;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11276ddb8;
    func_0x00010c23d0a0(*(undefined8 *)(param_3 + lVar5));
    bVar1 = false;
    if ((param_1 == *(double *)PTR__CGSizeZero_110347620) &&
       (bVar1 = false, !NAN(param_2) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
      bVar1 = param_2 == *(double *)(PTR__CGSizeZero_110347620 + 8);
    }
    if (bVar1) {
      *(undefined1 *)(param_3 + _DAT_11276ddd8) = 1;
    }
    else {
      *(undefined1 *)(param_3 + _DAT_11276ddd8) = 0;
      func_0x00010bec2380(param_3);
      dVar8 = param_1;
      func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar5));
      _CGRectGetMinY();
      dVar9 = dVar8;
      func_0x00010bebc320(param_3);
      lVar5 = (long)_DAT_11276ddd0;
      func_0x00010c19f0e0(param_1,dVar8,dVar9 * *(double *)(param_3 + lVar5),
                          *(undefined8 *)(param_3 + _DAT_11276ddb0),*(undefined8 *)(param_3 + lVar7)
                         );
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_107d31634;
      puStack_60 = &UNK_110842e18;
      puVar4 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
      lStack_58 = param_3;
      func_0x00010c142dc0(*(double *)(param_3 + _DAT_11276ddd4) *
                          (1.0 - *(double *)(param_3 + lVar5)),0,
                          PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0,param_4,0x30000,
                          &puStack_78,0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_3 + lVar6);
      *(undefined **)(param_3 + lVar6) = puVar4;
      _objc_release(uVar3);
      func_0x00010c24dc40(*(undefined8 *)(param_3 + lVar6));
    }
  }
  return;
}



/* Entry: 107d31634; end: 107d3163b;  */

void FUN_107d31634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be066b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__drawMovingProgressbar_11255f348);
  return;
}



/* Entry: 107d3163c; end: 107d31867; -[SCContentOperaBoostProgressBarLayerView _animateToProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d3163c(long param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  undefined8 uStack_68;
  
  if (((*(byte *)(param_1 + _DAT_11276ddfc) & 1) == 0) &&
     (lVar9 = (long)_DAT_11276de20, *(long *)(param_1 + lVar9) != 0)) {
    lVar8 = (long)_DAT_11276de48;
    lVar7 = *(long *)(param_1 + lVar8);
    _objc_retain(lVar7);
    if ((lVar7 != 0) &&
       ((lVar4 = lVar7, func_0x00010c252440(), lVar4 == 1 &&
        (lVar4 = lVar7, func_0x00010c075c40(), (int)lVar4 != 0)))) {
      func_0x00010c2559c0(lVar7,param_2,1);
    }
    _objc_release(lVar7);
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = 0;
    _objc_release(uVar5);
    *(undefined1 *)(param_1 + _DAT_11276ddd8) = 0;
    lVar7 = (long)_DAT_11276ddd0;
    lVar4 = (long)_DAT_11276ddd4;
    dVar10 = *(double *)(param_1 + lVar7);
    dStack_70 = dVar10 - *(double *)(param_1 + _DAT_11276ddf0);
    dStack_70 = dStack_70 + dStack_70;
    dVar12 = *(double *)(param_1 + lVar4) * dStack_70;
    dVar13 = (double)(*(byte *)(param_1 + _DAT_11276de04) | 2);
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (0.0 < dVar12) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(dVar12) && !NAN(dVar13)) {
        bVar1 = dVar12 < dVar13;
        bVar2 = dVar12 == dVar13;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      dStack_70 = dVar10 + dStack_70;
    }
    else {
      func_0x00010bec2380(param_1);
      dVar12 = dVar10;
      func_0x00010bf20c00(*(undefined8 *)(param_1 + _DAT_11276ddb8));
      _CGRectGetMinY();
      dVar11 = dVar12;
      func_0x00010bebc320(param_1);
      func_0x00010c19f0e0(dVar10,dVar12,dVar11 * *(double *)(param_1 + lVar7),
                          *(undefined8 *)(param_1 + _DAT_11276ddb0),*(undefined8 *)(param_1 + lVar9)
                         );
      dVar10 = *(double *)(param_1 + lVar7);
      dVar12 = *(double *)(param_1 + lVar4);
      dStack_70 = dVar13 / dVar12;
      if (dVar12 <= 0.0) {
        dStack_70 = 0.0;
      }
      dStack_70 = dVar10 + dStack_70;
      dVar12 = dVar13;
    }
    func_0x00010bec2380(param_1);
    dVar13 = dVar10;
    func_0x00010bf20c00(*(undefined8 *)(param_1 + _DAT_11276ddb8));
    _CGRectGetMinY();
    dVar11 = dVar13;
    func_0x00010bebc320(param_1);
    dStack_70 = dStack_70 * dVar11;
    uStack_68 = *(undefined8 *)(param_1 + _DAT_11276ddb0);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107d31868;
    puStack_90 = &UNK_110870f70;
    puVar6 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    lStack_88 = param_1;
    dStack_80 = dVar10;
    dStack_78 = dVar13;
    func_0x00010c142dc0(dVar12,0,PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0,param_2,0x30004,
                        &puStack_a8,0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar6;
    _objc_release(uVar5);
    func_0x00010c24dc40(*(undefined8 *)(param_1 + lVar8));
  }
  return;
}



/* Entry: 107d31868; end: 107d31887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d31868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276de20),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 107d31888; end: 107d3189f; -[SCContentOperaBoostProgressBarLayerView isAnimatingProgressBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d31888(long param_1)

{
  if (*(long *)(param_1 + _DAT_11276de48) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c07cd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_11276de48),PTR_s_isRunning_1125fcd68);
    return;
  }
  return;
}



/* Entry: 107d318a0; end: 107d318e7; -[SCContentOperaBoostProgressBarLayerView pauseProgressBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d318a0(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c06c160();
  if ((int)lVar2 != 0) {
    lVar2 = (long)_DAT_11276de48;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
    func_0x00010c075c40();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0f5bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + lVar2),PTR_s_pauseAnimation_11261b110);
      return;
    }
  }
  return;
}



/* Entry: 107d318e8; end: 107d31923; -[SCContentOperaBoostProgressBarLayerView resumeProgressBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d318e8(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c06c160();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24dc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + (long)_DAT_11276de48),PTR_s_startAnimation_112671138);
  return;
}



/* Entry: 107d31924; end: 107d31973; -[SCContentOperaBoostProgressBarLayerView resetProgressBarOnDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d31924(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + _DAT_11276de00) == '\x01') {
    func_0x00010c288d80(0,*(undefined8 *)(param_1 + _DAT_11276ddd4),param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0f5fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pauseProgressBar_11261b208);
    return;
  }
  return;
}



/* Entry: 107d31974; end: 107d31993; -[SCContentOperaBoostProgressBarLayerView unhideFromTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d31974(long param_1)

{
  if (*(char *)(param_1 + _DAT_11276de08) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(0x3ff0000000000000,param_1,PTR_s_setAlpha__112637810);
    return;
  }
  return;
}



/* Entry: 107d31994; end: 107d31a5b; -[SCContentOperaBoostProgressBarLayerView showProgressBarAndScheduleAutoFadeOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d31994(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11276ddcc);
  func_0x00010bf11820();
  if (iVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12aaa0();
    _objc_release(lVar2);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107d31a5c;
    puStack_30 = &UNK_110842e18;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_107d31a68;
    puStack_58 = &UNK_110841f20;
    lStack_50 = param_1;
    lStack_28 = param_1;
    func_0x00010bf03440(0x3fc3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,2,
                        &puStack_48,&puStack_70);
  }
  return;
}



/* Entry: 107d31a5c; end: 107d31a67;  */

void FUN_107d31a5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107d31a68; end: 107d31ad7;  */

void FUN_107d31a68(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107d31ad8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf03440(0x3ff0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,2,&puStack_38,0);
  return;
}



/* Entry: 107d31ad8; end: 107d31ae3;  */

void FUN_107d31ad8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107d31ae4; end: 107d31bbf; -[SCContentOperaBoostProgressBarLayerView updateSegment:maxDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d31ae4(double param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(char *)(param_2 + _DAT_11276de38) == '\x01') {
    lVar4 = (long)_DAT_11276de48;
    lVar2 = *(long *)(param_2 + lVar4);
    func_0x00010c252440();
    if (lVar2 == 1) {
      iVar1 = (int)*(undefined8 *)(param_2 + lVar4);
      func_0x00010c075c40();
      if (iVar1 != 0) {
        func_0x00010c2559c0(*(undefined8 *)(param_2 + lVar4));
        func_0x00010bfaf6c0(*(undefined8 *)(param_2 + lVar4));
      }
    }
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    *(undefined8 *)(param_2 + lVar4) = 0;
    _objc_release(uVar3);
    *(long *)(param_2 + _DAT_11276de40) = param_4;
    func_0x00010be06740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c288d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              ((double)(ulong)(param_4 * 10) / param_1,param_1,param_2,
               PTR_s_updateProgress_withDurtaion_onSe_11267fd88,1);
    return;
  }
  return;
}



/* Entry: 107d31bc0; end: 107d31d6f; -[SCContentOperaBoostProgressBarLayerView _resetProgressBarViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d31bc0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_150;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = (long)_DAT_11276de48;
  lVar3 = *(long *)(param_1 + lVar4);
  _objc_retain(lVar3);
  if (((lVar3 != 0) && (lVar5 = lVar3, func_0x00010c252440(), lVar5 == 1)) &&
     (lVar5 = lVar3, func_0x00010c075c40(), (int)lVar5 != 0)) {
    func_0x00010c2559c0(lVar3);
  }
  _objc_release(lVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar2);
  func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_11276de20));
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11276ddcc);
  func_0x00010bf11820();
  if (iVar1 != 0) {
    func_0x00010c1677c0(0x3ff0000000000000,param_1);
  }
  lVar3 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(lVar3);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar5 = (long)_DAT_11276de1c;
  lVar4 = *(long *)(param_1 + lVar5);
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c12c940(*(undefined8 *)(lStack_118 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar4;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar4);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c12adc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_107d31d70;
  lStack_140 = lVar4;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010be93760();
  puStack_148 = PTR_PTR_1126faae8;
  uStack_150 = uVar2;
  _objc_msgSendSuper2(&uStack_150,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107d31d70; end: 107d31db3; -[SCContentOperaBoostProgressBarLayerView dealloc] */

void FUN_107d31d70(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010be93760();
  puStack_28 = PTR_PTR_1126faae8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107d31db4; end: 107d31e43; -[SCContentOperaBoostProgressBarLayerView _setupScrubberLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d31db4(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  if (*(char *)(param_2 + _DAT_11276de24) == '\x01') {
    lVar1 = (long)_DAT_11276de30;
    if (*(long *)(param_2 + lVar1) != 0) {
      func_0x00010be82ec0(param_2);
      param_1 = param_1 + -12.0;
      dVar2 = param_1 + -20.0;
      func_0x00010bf20c00(param_2);
      _CGRectGetWidth();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (0,dVar2,param_1,0x4034000000000000,*(undefined8 *)(param_2 + lVar1),
                 PTR_s_setFrame__112645658);
      return;
    }
  }
  return;
}



/* Entry: 107d31e44; end: 107d31e7b; -[SCContentOperaBoostProgressBarLayerView _horizontalPadding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107d31e44(double param_1,long param_2)

{
  if (*(long *)(param_2 + _DAT_11276de10) != 0) {
    func_0x00010bf885a0();
    if (param_1 < 0.0) {
      param_1 = 12.0;
    }
    return param_1;
  }
  return 12.0;
}



/* Entry: 107d31e7c; end: 107d31e83; -[SCContentOperaBoostProgressBarLayerView _extraFooterOffset] */

undefined8 FUN_107d31e7c(void)

{
  return 0;
}



/* Entry: 107d31e84; end: 107d31fb3; -[SCContentOperaBoostProgressBarLayerView _setupProgressBarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d31e84(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010be36380();
  dVar2 = param_1;
  if (*(char *)(param_2 + _DAT_11276dddc) == '\x01') {
    func_0x00010be82ec0(param_2);
    dVar3 = dVar2;
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    dVar3 = dVar3 + param_1 * -2.0;
  }
  else {
    if (*(char *)(param_2 + _DAT_11276ddc4) == '\x01') {
      lVar1 = (long)_DAT_11276ddc8;
      dVar3 = *(double *)(param_2 + lVar1);
      if (dVar3 == 0.0) {
        func_0x00010bf20c00(param_2);
        _CGRectGetWidth();
        if (dVar2 <= 0.0) {
          dVar3 = *(double *)(param_2 + lVar1);
        }
        else {
          func_0x00010bf20c00(param_2);
          _CGRectGetWidth();
          dVar2 = dVar2 + param_1 * -2.0;
          dVar3 = dVar2 + *(double *)(param_2 + _DAT_11276ddb4) * -2.0;
          *(double *)(param_2 + lVar1) = dVar3;
        }
      }
    }
    else {
      func_0x00010bf20c00(param_2);
      _CGRectGetWidth();
      dVar2 = dVar2 + param_1 * -2.0;
      dVar3 = dVar2 + *(double *)(param_2 + _DAT_11276ddb4) * -2.0;
    }
    func_0x00010be82ec0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,dVar2,dVar3,*(undefined8 *)(param_2 + _DAT_11276ddb0),
             *(undefined8 *)(param_2 + _DAT_11276ddb8),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 107d31fb4; end: 107d321f3; -[SCContentOperaBoostProgressBarLayerView _progressBarY] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107d31fb4(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  func_0x00010c14caa0(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
  dVar3 = *(double *)(param_4 + _DAT_11276ddf8);
  if (dVar3 <= 0.0) {
    if ((*(byte *)(param_4 + _DAT_11276de4c) & 1) == 0) {
      func_0x000100594f4c();
    }
    else {
      dVar3 = 70.0;
    }
  }
  lVar2 = *(long *)(param_4 + _DAT_11276ddf4);
  if (lVar2 == 1) {
    dVar4 = *(double *)(param_4 + _DAT_11276de50 + 0x10);
LAB_107d32034:
    dVar3 = dVar3 + dVar4;
  }
  else {
    if (((lVar2 == 0) && ((*(byte *)(param_4 + _DAT_11276de4c) & 1) != 0)) &&
       ((*(byte *)(param_4 + _DAT_11276de54) & 1) == 0)) {
      dVar3 = *(double *)(param_4 + _DAT_11276de50 + 0x10);
      dVar4 = 70.0;
      goto LAB_107d32034;
    }
    dVar3 = *(double *)(param_4 + _DAT_11276de50 + 0x10);
  }
  if (*(char *)(param_4 + _DAT_11276dddc) == '\x01') {
    dVar3 = *(double *)(param_4 + _DAT_11276de50);
    if (*(char *)(param_4 + _DAT_11276dde0) == '\x01') {
      dVar3 = dVar3 + *(double *)(param_4 + _DAT_11276ddec);
    }
    lVar2 = param_4;
    func_0x00010c14d760();
    uVar1 = (uint)lVar2;
    if (0.0 <= dVar3) {
      dVar3 = *(double *)(param_4 + _DAT_11276ddec);
    }
    func_0x000100478f84();
    dVar4 = dVar3;
    if (((uVar1 | *(byte *)(param_4 + _DAT_11276dde4) ^ 0xffffffff) & 1) == 0) {
      dVar4 = dVar3 + 17.0;
    }
    if (uVar1 == 0) {
      return dVar4;
    }
    if (*(char *)(param_4 + _DAT_11276dde8) != '\x01') {
      return dVar3;
    }
    func_0x00010c14cf80(dVar4,PTR__OBJC_CLASS___UIScreen_1126aea10);
    return dVar3 + dVar4;
  }
  if (*(long *)(param_4 + _DAT_11276de0c) == 0) {
LAB_107d32168:
    param_3 = param_3 - dVar3;
    dVar3 = param_3 - *(double *)(param_4 + _DAT_11276ddb0);
    func_0x00010be0d920(param_4);
    param_3 = dVar3 - param_3;
  }
  else {
    if (*(char *)(param_4 + _DAT_11276de4c) == '\x01') {
      if ((lVar2 == 0) && (*(char *)(param_4 + _DAT_11276de54) != '\x01')) goto LAB_107d32168;
      if (dVar3 == 0.0) goto LAB_107d321d4;
      func_0x00010bf885a0();
      param_3 = param_3 - dVar3;
      dVar3 = -70.0;
    }
    else if (dVar3 == 0.0) {
LAB_107d321d4:
      func_0x00010bf885a0();
      param_3 = param_3 - dVar3;
      dVar3 = -20.0;
    }
    else {
      func_0x00010bf885a0();
      param_3 = param_3 - dVar3;
      func_0x00010c0f0c40(param_4);
      param_3 = param_3 - dVar3;
      dVar3 = 8.0;
    }
    param_3 = param_3 + dVar3;
  }
  return param_3;
}



/* Entry: 107d321f4; end: 107d327e3; -[SCContentOperaBoostProgressBarLayerView _drawProgressBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d321f4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = (long)_DAT_11276ddb8;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar13));
  dVar22 = param_1;
  _CGRectGetMinX();
  dVar19 = dVar22;
  func_0x00010bebc320(param_5);
  dVar20 = dVar19;
  func_0x00010be82e80(param_5);
  lVar3 = param_5;
  func_0x00010bee9ee0();
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  func_0x00010c18e5e0(PTR__OBJC_CLASS___CATransaction_1126b5718);
  lVar18 = (long)_DAT_11276de18;
  lVar4 = *(long *)(param_5 + lVar18);
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    lVar13 = (long)_DAT_11276ddc0;
    func_0x00010c1d9820(*(undefined8 *)(param_5 + lVar13));
    lVar4 = (long)_DAT_11276ddbc;
    func_0x00010c1d9820(*(undefined8 *)(param_5 + lVar4));
    if (lVar3 != 0) {
      puVar8 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
      _objc_retainAutoreleasedReturnValue();
      dVar21 = param_1;
      _CGRectGetMidY(param_1,param_2,param_3,param_4);
      func_0x00010c0d18c0(dVar22,dVar21,puVar8);
      dVar22 = dVar22 + (double)lVar3 * dVar19 + (double)(lVar3 + -1) * dVar20;
      dVar21 = param_1;
      _CGRectGetMidY(param_1,param_2,param_3,param_4);
      func_0x00010bef98c0(dVar22,dVar21,puVar8);
      dVar22 = dVar20 + dVar22;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc1040();
      func_0x00010c1d9820(*(undefined8 *)(param_5 + lVar13));
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar19);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(dVar20);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bdb80(*(undefined8 *)(param_5 + lVar13));
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
    puVar8 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19920();
    _objc_retainAutoreleasedReturnValue();
    dVar21 = param_1;
    _CGRectGetMidY(param_1,param_2,param_3,param_4);
    func_0x00010c0d18c0(dVar22,dVar21,puVar8);
    dVar22 = param_1;
    _CGRectGetMaxX(param_1,param_2,param_3,param_4);
    _CGRectGetMidY(param_1,param_2,param_3,param_4);
    func_0x00010bef98c0(dVar22,param_1,puVar8);
    _objc_retainAutorelease(puVar8);
    func_0x00010bdc1040();
    func_0x00010c1d9820(*(undefined8 *)(param_5 + lVar4));
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar20);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdb80(*(undefined8 *)(param_5 + lVar4));
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    dVar21 = dVar20;
  }
  else {
    dVar21 = 0.0;
    lVar14 = (long)_DAT_11276de1c;
    lVar15 = *(long *)(param_5 + lVar14);
    _objc_retain(lVar15);
    lVar4 = lVar15;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar15);
        }
        func_0x00010c12c940(*(undefined8 *)(lVar17 * 8));
        lVar17 = lVar17 + 1;
      } while (lVar4 != lVar17);
      lVar4 = lVar15;
      func_0x00010bf52a60();
    }
    _objc_release(lVar15);
    func_0x00010c12adc0(*(undefined8 *)(param_5 + lVar14));
    uVar5 = *(ulong *)(param_5 + _DAT_11276ddcc);
    func_0x00010c276c00();
    if (uVar5 != 0) {
      uVar16 = 0;
      do {
        puVar8 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
        func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(ulong *)(param_5 + lVar18);
        func_0x00010bf529e0();
        if (uVar16 < uVar6) {
          uVar7 = *(undefined8 *)(param_5 + lVar18);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067fc0();
          _objc_release(uVar7);
        }
        puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
        func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
        _objc_retainAutoreleasedReturnValue();
        dVar21 = param_1;
        _CGRectGetMidY(param_1,param_2,param_3,param_4);
        func_0x00010c0d18c0(dVar22,dVar21,puVar10);
        dVar21 = param_1;
        _CGRectGetMidY(param_1,param_2,param_3,param_4);
        func_0x00010bef98c0(dVar19 + dVar22,dVar21,puVar10);
        _objc_retainAutorelease(puVar10);
        func_0x00010bdc1040();
        func_0x00010c1d9820(puVar8);
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc0fe0();
        func_0x00010c20e8e0(puVar8);
        func_0x00010c1bdd00(*(undefined8 *)(param_5 + _DAT_11276ddb0),puVar8);
        uVar1 = 0x3f800000;
        if (lVar3 <= (long)uVar16) {
          uVar1 = 0x3e99999a;
        }
        dVar21 = (double)(ulong)uVar1;
        func_0x00010c1d4bc0(dVar21,puVar8);
        uVar7 = *(undefined8 *)(param_5 + lVar13);
        func_0x00010c08c0e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb20();
        _objc_release(uVar7);
        func_0x00010befa120(*(undefined8 *)(param_5 + lVar14));
        dVar22 = dVar19 + dVar20 + dVar22;
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar8);
        uVar16 = uVar16 + 1;
      } while (uVar5 != uVar16);
    }
  }
  puVar8 = PTR__OBJC_CLASS___CATransaction_1126b5718;
  func_0x00010bf42760();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bec2380();
  dVar22 = dVar21;
  func_0x00010bf20c00(*(undefined8 *)(puVar8 + _DAT_11276ddb8));
  _CGRectGetMinY();
  dVar19 = dVar22;
  func_0x00010bebc320(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar21,dVar22,dVar19 + *(double *)(puVar8 + _DAT_11276ddb4) * 2.0,
             *(undefined8 *)(puVar8 + _DAT_11276ddb0),*(undefined8 *)(puVar8 + _DAT_11276de20),
             PTR_s_setFrame__112645658);
  return;
}



/* Entry: 107d327e4; end: 107d32857; -[SCContentOperaBoostProgressBarLayerView _drawMovingProgressbar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d327e4(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  func_0x00010bec2380();
  dVar1 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + _DAT_11276ddb8));
  _CGRectGetMinY();
  dVar2 = dVar1;
  func_0x00010bebc320(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,dVar1,dVar2 + *(double *)(param_2 + _DAT_11276ddb4) * 2.0,
             *(undefined8 *)(param_2 + _DAT_11276ddb0),*(undefined8 *)(param_2 + _DAT_11276de20),
             PTR_s_setFrame__112645658);
  return;
}


