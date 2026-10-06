/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0a53c0; end: 10b0a5413;  */

void FUN_10b0a53c0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f3fd8 != -1) {
    func_0x000107c27d9c(0x1137f3fd8,&PTR___NSConcreteGlobalBlock_110cb74f8);
  }
  uVar1 = uRam00000001137f3fd0;
  _objc_retain(uRam00000001137f3fd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0a5414; end: 10b0a543f;  */

void FUN_10b0a5414(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126df7a0;
  _objc_alloc_init();
  uVar1 = puRam00000001137f3fd0;
  puRam00000001137f3fd0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0a5440; end: 10b0a5447; -[SIGNavigationPushPresentationStyle modal] */

undefined8 FUN_10b0a5440(void)

{
  return 0;
}



/* Entry: 10b0a5448; end: 10b0a5453; -[SIGNavigationPushPresentationStyle duration] */

undefined8 FUN_10b0a5448(void)

{
  return 0x3fc999999999999a;
}



/* Entry: 10b0a5454; end: 10b0a545b; -[SIGNavigationPushPresentationStyle footerAnimationStyle] */

undefined8 FUN_10b0a5454(void)

{
  return 0;
}



/* Entry: 10b0a545c; end: 10b0a5463; -[SIGNavigationPushPresentationStyle headerAnimationStyle] */

undefined8 FUN_10b0a545c(void)

{
  return 0;
}



/* Entry: 10b0a5464; end: 10b0a546b; -[SIGNavigationPushPresentationStyle completionCurve] */

undefined8 FUN_10b0a5464(void)

{
  return 1;
}



/* Entry: 10b0a546c; end: 10b0a5507; -[SIGNavigationPushPresentationStyle setupInContext:] */

void FUN_10b0a546c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010bf4b2a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGAffineTransformMakeTranslation(&uStack_60,param_3,0);
  uVar2 = param_6;
  func_0x00010c0d95a0(param_6);
  _objc_release(param_6);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(uVar2,param_5,&uStack_90);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b0a5508; end: 10b0a555b; -[SIGNavigationPushPresentationStyle performAnimationsInContext:] */

void FUN_10b0a5508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0d95a0(param_3);
  func_0x00010c219960();
  _objc_release(param_3);
  return;
}



/* Entry: 10b0a555c; end: 10b0a555f; -[SIGNavigationPushPresentationStyle completeInContext:didComplete:] */

void FUN_10b0a555c(void)

{
  return;
}



/* Entry: 10b0a5560; end: 10b0a5567; -[SIGNavigationPopPresentationStyle modal] */

undefined8 FUN_10b0a5560(void)

{
  return 0;
}



/* Entry: 10b0a5568; end: 10b0a5573; -[SIGNavigationPopPresentationStyle duration] */

undefined8 FUN_10b0a5568(void)

{
  return 0x3fc999999999999a;
}



/* Entry: 10b0a5574; end: 10b0a557b; -[SIGNavigationPopPresentationStyle footerAnimationStyle] */

undefined8 FUN_10b0a5574(void)

{
  return 0;
}



/* Entry: 10b0a557c; end: 10b0a5583; -[SIGNavigationPopPresentationStyle headerAnimationStyle] */

undefined8 FUN_10b0a557c(void)

{
  return 0;
}



/* Entry: 10b0a5584; end: 10b0a558b; -[SIGNavigationPopPresentationStyle completionCurve] */

undefined8 FUN_10b0a5584(void)

{
  return 2;
}



/* Entry: 10b0a558c; end: 10b0a5717; -[SIGNavigationPopPresentationStyle setupInContext:] */

void FUN_10b0a558c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e20e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0d95a0(param_3);
  lVar4 = lVar3;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c071ae0(lVar2,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar5 != 0) {
    lVar1 = param_3;
    func_0x00010c0e20e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0d95a0(param_3);
    lVar4 = lVar1;
    func_0x00010bfecde0(lVar1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0e20e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bfecde0(lVar1,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
    if ((lVar4 != 0x7fffffffffffffff) && (lVar5 != 0x7fffffffffffffff)) {
      func_0x00010bf9aae0(lVar2,param_2,lVar4,lVar5);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0a5718; end: 10b0a57bb; -[SIGNavigationPopPresentationStyle performAnimationsInContext:] */

void FUN_10b0a5718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010bf4b2a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGAffineTransformMakeTranslation(&uStack_60,param_3,0);
  uVar2 = param_6;
  func_0x00010c0e20e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(uVar2,param_5,&uStack_90);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b0a57bc; end: 10b0a57bf; -[SIGNavigationPopPresentationStyle completeInContext:didComplete:] */

void FUN_10b0a57bc(void)

{
  return;
}



/* Entry: 10b0a57c0; end: 10b0a5807;  */

void FUN_10b0a57c0(void)

{
  _objc_alloc(PTR_PTR_1126df7a8);
  func_0x00010c032440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0a5808; end: 10b0a587b; -[SIGPanPresentationStyle initWithOriginEdge:options:footerAnimationStyle:] */

undefined1 *
FUN_10b0a5808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112705690;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bea45a0();
    *(undefined1 **)((long)puVar1 + 0x20) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b0a587c; end: 10b0a588f; -[SIGPanPresentationStyle _setHeaderAnimationStyle:] */

ulong FUN_10b0a587c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 != 2) {
    param_3 = (ulong)(param_3 == 8);
  }
  return param_3;
}



/* Entry: 10b0a5890; end: 10b0a59d7; -[SIGPanPresentationStyle _offsetsForContext:] */

undefined1  [16]
FUN_10b0a5890(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  _objc_retain(param_7);
  uVar5 = *(ulong *)(param_5 + 0x10);
  puVar2 = PTR_PTR_1126df658;
  func_0x00010c24d880();
  puVar1 = PTR__CGPointZero_110347540;
  dVar8 = 0.0;
  if (((ulong)puVar2 & uVar5) != 0) {
    dVar8 = 12.0;
  }
  uVar4 = (uint)*(ulong *)(param_5 + 8);
  if ((*(ulong *)(param_5 + 8) & 1) == 0) {
    dVar6 = *(double *)(PTR__CGPointZero_110347540 + 8);
  }
  else {
    uVar3 = param_7;
    func_0x00010bf4b2a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar6 = -param_4 - dVar8;
    _objc_release(uVar3);
    uVar4 = (uint)*(undefined8 *)(param_5 + 8);
  }
  if ((uVar4 >> 2 & 1) != 0) {
    uVar3 = param_7;
    func_0x00010bf4b2a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar6 = dVar8 + param_4;
    _objc_release(uVar3);
    uVar4 = (uint)*(undefined8 *)(param_5 + 8);
  }
  if ((uVar4 >> 1 & 1) == 0) {
    dVar7 = *(double *)puVar1;
  }
  else {
    uVar3 = param_7;
    func_0x00010bf4b2a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar7 = -param_3 - dVar8;
    _objc_release(uVar3);
    uVar4 = (uint)*(undefined8 *)(param_5 + 8);
  }
  if ((uVar4 >> 3 & 1) != 0) {
    uVar3 = param_7;
    func_0x00010bf4b2a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    dVar7 = dVar8 + param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  auVar9._8_8_ = dVar6;
  auVar9._0_8_ = dVar7;
  return auVar9;
}



/* Entry: 10b0a59d8; end: 10b0a5a07; -[SIGPanPresentationStyle _incomingViewShouldSlide] */

bool FUN_10b0a59d8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126df658;
  func_0x00010c23e8e0(PTR_PTR_1126df658);
  return ((ulong)puVar1 & uVar2) == 0;
}



/* Entry: 10b0a5a08; end: 10b0a5a37; -[SIGPanPresentationStyle _outgoingViewShouldSlide] */

bool FUN_10b0a5a08(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126df658;
  func_0x00010c23e880(PTR_PTR_1126df658);
  return ((ulong)puVar1 & uVar2) == 0;
}



/* Entry: 10b0a5a38; end: 10b0a5a67; -[SIGPanPresentationStyle _incomingViewShouldBeBelowOutgoingView] */

bool FUN_10b0a5a38(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126df658;
  func_0x00010c23e8e0(PTR_PTR_1126df658);
  return ((ulong)puVar1 & uVar2) != 0;
}



/* Entry: 10b0a5a68; end: 10b0a5afb; -[SIGPanPresentationStyle _incomingViewInitialCoveringInsetsWithContext:] */

double FUN_10b0a5a68(undefined8 param_1,double param_2,ulong param_3)

{
  double dVar1;
  double dVar2;
  
  func_0x00010be67440();
  func_0x00010be38140();
  dVar1 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
  if ((param_3 & 1) != 0) {
    dVar2 = dVar1;
    if (0.0 < param_2) {
      dVar2 = -param_2;
    }
    if (0.0 <= param_2) {
      dVar1 = dVar2;
    }
  }
  return dVar1;
}



/* Entry: 10b0a5afc; end: 10b0a5b93; -[SIGPanPresentationStyle _outgoingViewFinalCoveringInsetsWithContext:] */

double FUN_10b0a5afc(undefined8 param_1,double param_2,int param_3)

{
  double dVar1;
  
  func_0x00010be67440();
  func_0x00010be6e8a0();
  dVar1 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
  if (param_3 == 0) {
    if (0.0 < param_2) {
      dVar1 = -param_2;
    }
    if (param_2 < 0.0) {
      dVar1 = -param_2;
    }
  }
  return dVar1;
}



/* Entry: 10b0a5b94; end: 10b0a5b9b; -[SIGPanPresentationStyle modal] */

undefined8 FUN_10b0a5b94(void)

{
  return 0;
}



/* Entry: 10b0a5b9c; end: 10b0a5ba7; -[SIGPanPresentationStyle duration] */

undefined8 FUN_10b0a5b9c(void)

{
  return 0x3fc999999999999a;
}



/* Entry: 10b0a5ba8; end: 10b0a5baf; -[SIGPanPresentationStyle footerAnimationStyle] */

undefined8 FUN_10b0a5ba8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0a5bb0; end: 10b0a5bb7; -[SIGPanPresentationStyle completionCurve] */

undefined8 FUN_10b0a5bb0(void)

{
  return 2;
}



/* Entry: 10b0a5bb8; end: 10b0a5e23; -[SIGPanPresentationStyle setupInContext:] */

void FUN_10b0a5bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_90 [48];
  
  _objc_retain(param_5);
  func_0x00010be67440(param_3,param_4,param_5);
  uVar1 = param_3;
  func_0x00010be38160();
  if ((int)uVar1 != 0) {
    _CGAffineTransformMakeTranslation(auStack_90,param_1,param_2);
    lVar2 = param_5;
    func_0x00010c0d95a0(param_5);
    func_0x00010c219960();
    _objc_release(lVar2);
  }
  uVar1 = param_3;
  func_0x00010be38140();
  if ((int)uVar1 != 0) {
    lVar2 = param_5;
    func_0x00010c0e20e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010c0d95a0(param_5);
    lVar5 = lVar4;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c071ae0(lVar3,param_4,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((int)lVar6 != 0) {
      lVar2 = param_5;
      func_0x00010c0e20e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar3;
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_5;
      func_0x00010c0d95a0(param_5);
      lVar5 = lVar2;
      func_0x00010bfecde0(lVar2,param_4,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar2);
      lVar2 = lVar3;
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_5;
      func_0x00010c0e20e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010bfecde0(lVar2,param_4,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar2);
      if ((lVar5 != 0x7fffffffffffffff) && (lVar6 != 0x7fffffffffffffff)) {
        func_0x00010bf9aae0(lVar3,param_4,lVar5,lVar6);
      }
      _objc_release(lVar3);
    }
  }
  lVar2 = param_5;
  func_0x00010c0e20e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b0a5e24(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
  _objc_release(lVar2);
  lVar2 = param_5;
  func_0x00010c0d95a0(param_5);
  func_0x00010be38120(param_3,param_4,param_5);
  FUN_10b0a5e24(lVar2);
  _objc_release(lVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 10b0a5e24; end: 10b0a5eab;  */

void FUN_10b0a5e24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_5;
  func_0x000107c318f8(param_5,PTR_DAT_1126a5c08);
  lVar1 = param_5;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  if (lVar1 != 0) {
    func_0x00010c0f3700(param_1,param_2,param_3,param_4,param_5);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b0a5eac; end: 10b0a5fe3; -[SIGPanPresentationStyle performAnimationsInContext:] */

void FUN_10b0a5eac(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  func_0x00010be67440(param_3,param_4,param_5);
  uVar1 = param_5;
  func_0x00010c0d95a0(param_5);
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010be6e8a0();
  if ((int)uVar1 != 0) {
    _CGAffineTransformMakeTranslation(&uStack_a0,-param_1,-param_2);
    uVar1 = param_5;
    func_0x00010c0e20e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
    uStack_48 = uStack_78;
    uStack_50 = uStack_80;
    func_0x00010c219960();
    _objc_release(uVar1);
  }
  uVar1 = param_5;
  func_0x00010c0d95a0(param_5);
  FUN_10b0a5e24(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c0e20e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6e880(param_3,param_4,param_5);
  FUN_10b0a5e24(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 10b0a5fe4; end: 10b0a6103; -[SIGPanPresentationStyle completeInContext:didComplete:] */

void FUN_10b0a5fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0d95a0(param_3);
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0e20e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0d95a0(param_3);
  uVar2 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar3 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar4 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar5 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  FUN_10b0a5e24(uVar2,uVar3,uVar4,uVar5);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0e20e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  FUN_10b0a5e24(uVar2,uVar3,uVar4,uVar5,uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b0a6104; end: 10b0a6143; -[SIGPanPresentationStyle timingCurveForVelocity:] */

void FUN_10b0a6104(void)

{
  _objc_alloc(PTR__OBJC_CLASS___UICubicTimingParameters_1126c8ab8);
  func_0x00010c0048a0(0x3fb999999999999a,0x3fe999999999999a,0x3fc999999999999a,0x3fee666666666666);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0a6144; end: 10b0a614b; -[SIGPanPresentationStyle headerAnimationStyle] */

undefined8 FUN_10b0a6144(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0a614c; end: 10b0a6157; -[SCDeckRootContainerServices .cxx_destruct] */

void FUN_10b0a614c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0a6158; end: 10b0a61cb; -[SCPresenterNode initWithPresenter:] */

undefined1 * FUN_10b0a6158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127056a0;
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



/* Entry: 10b0a61cc; end: 10b0a61d3; -[SCPresenterNode presenter] */

undefined8 FUN_10b0a61cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0a61d4; end: 10b0a61db; -[SCPresenterNode nextNode] */

undefined8 FUN_10b0a61d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0a61dc; end: 10b0a620b; -[SCPresenterNode setNextNode:] */

void FUN_10b0a61dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0a620c; end: 10b0a623b; -[SCPresenterNode .cxx_destruct] */

void FUN_10b0a620c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0a623c; end: 10b0a62d3; -[SIGFIFONotificationPool submitNotificationWithPresenter:] */

void FUN_10b0a623c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126df7b0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc();
    func_0x00010c038a60();
    _objc_release(param_3);
    if (*(long *)(param_1 + 8) == 0) {
      _objc_retain(puVar1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      *(undefined **)(param_1 + 8) = puVar1;
      _objc_release(uVar2);
    }
    else {
      func_0x00010c1cd440(*(undefined8 *)(param_1 + 0x10));
    }
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be0bd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__executePresentationIfNeeded_1125608e0);
    return;
  }
  return;
}



/* Entry: 10b0a62d4; end: 10b0a64f7; -[SIGFIFONotificationPool _executePresentationIfNeeded] */

void FUN_10b0a62d4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if ((*(long *)(param_1 + 0x18) == 0) && (lVar1 = *(long *)(param_1 + 8), lVar1 != 0)) {
    func_0x00010c10fa00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar1;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0d9b80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar5;
    _objc_release(uVar6);
    if (*(long *)(param_1 + 8) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      _objc_release(uVar5);
    }
    puVar2 = PTR_PTR_1126df7b8;
    _objc_alloc();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf4b2a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c054a80();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar2;
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
    _objc_alloc(PTR__OBJC_CLASS___UIViewController_1126af898);
    func_0x00010c02f980();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c29bf00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c1ee700(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x20));
    _objc_initWeak(auStack_38,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    puVar3 = puVar2;
    func_0x00010c29bf00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c10d3a0(uVar5);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 10b0a64f8; end: 10b0a6543;  */

void FUN_10b0a64f8(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
    func_0x00010be0bd00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0a6544; end: 10b0a658b; -[SIGFIFONotificationPool .cxx_destruct] */

void FUN_10b0a6544(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0a658c; end: 10b0a667f; -[SIGNotificationWindow initWithTouchableView:frame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b0a658c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1127056a8;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11278c890),param_7);
    func_0x00010c225b00(*(undefined8 *)PTR__UIWindowLevelAlert_110345e80,puVar1);
    func_0x00010bd86158(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0a6680; end: 10b0a681b; -[SIGNotificationWindow pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10b0a6680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_90;
  undefined *puStack_88;
  
  iVar1 = (int)&lStack_90;
  lVar7 = (long)_DAT_11278c890;
  uVar8 = param_1;
  uVar9 = param_2;
  _objc_retain(param_7);
  lVar2 = param_5 + lVar7;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c10f4e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar5 = param_5 + lVar7;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
  }
  else {
    _objc_retain(lVar4);
    lVar6 = lVar4;
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar7 = param_5 + lVar7;
  _objc_loadWeakRetained();
  if (lVar7 == 0) {
    uVar8 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    param_3 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    param_4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  }
  else {
    func_0x00010bfb68e0(lVar6);
  }
  _objc_release(lVar7);
  puStack_88 = PTR_PTR_1127056a8;
  lStack_90 = param_5;
  _objc_msgSendSuper2(param_1,param_2,&lStack_90,PTR_s_pointInside_withEvent__11261e4e8,param_7);
  _objc_release(param_7);
  if (iVar1 == 0) {
    param_7 = 0;
  }
  else {
    _CGRectContainsPoint(uVar8,uVar9,param_3,param_4,param_1,param_2);
  }
  _objc_release(lVar6);
  return param_7;
}



/* Entry: 10b0a681c; end: 10b0a6927; -[SIGNotificationWindow hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a681c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar3 = &lStack_50;
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c102b20(param_1,param_2);
  if ((int)lVar1 == 0) {
    puStack_48 = PTR_PTR_1127056a8;
    lStack_50 = param_3;
    _objc_msgSendSuper2(param_1,param_2,&lStack_50,PTR_s_hitTest_withEvent__1125d6850,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = (long)_DAT_11278c890;
    lVar1 = param_3 + lVar4;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf512a0(param_1,param_2,param_3);
    _objc_release(lVar1);
    puVar2 = (undefined1 *)(param_3 + lVar4);
    _objc_loadWeakRetained(puVar2);
    plVar3 = (long *)puVar2;
    func_0x00010bfe3a40(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 10b0a6928; end: 10b0a6937; -[SIGNotificationWindow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0a6928(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11278c890);
  return;
}



/* Entry: 10b0a6938; end: 10b0a6967; -[SCQuickPerfLoggerServices setPerfLogger:] */

void FUN_10b0a6938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0a6968; end: 10b0a6973; -[SCQuickPerfLoggerServices .cxx_destruct] */

void FUN_10b0a6968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0a6974; end: 10b0a6adf; -[SCNQuickPerfloggerQuickPerfLoggerEvent initWithTopicId:instanceKey:durationInMicroSeconds:endState:startTimestampInMicroSeconds:backgroundPolicy:errorCode:annotations:pointsId:pointsOffsetSinceEventStartInMicroSeconds:] */

undefined8 *
FUN_10b0a6974(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1127056b8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    puVar1[2] = param_5;
    puVar1[3] = param_6;
    puVar1[4] = param_7;
    puVar1[5] = param_8;
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x00010b0a6b74(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    func_0x00010b0a6b74(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    func_0x00010b0a6b74(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  return puVar1;
}



/* Entry: 10b0a6ae0; end: 10b0a6ae7; -[SCNQuickPerfloggerQuickPerfLoggerEvent topicId] */

undefined4 FUN_10b0a6ae0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b0a6ae8; end: 10b0a6aef; -[SCNQuickPerfloggerQuickPerfLoggerEvent instanceKey] */

undefined4 FUN_10b0a6ae8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b0a6af0; end: 10b0a6af7; -[SCNQuickPerfloggerQuickPerfLoggerEvent durationInMicroSeconds] */

undefined8 FUN_10b0a6af0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0a6af8; end: 10b0a6aff; -[SCNQuickPerfloggerQuickPerfLoggerEvent endState] */

undefined8 FUN_10b0a6af8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0a6b00; end: 10b0a6b07; -[SCNQuickPerfloggerQuickPerfLoggerEvent startTimestampInMicroSeconds] */

undefined8 FUN_10b0a6b00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0a6b08; end: 10b0a6b0f; -[SCNQuickPerfloggerQuickPerfLoggerEvent backgroundPolicy] */

undefined8 FUN_10b0a6b08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0a6b10; end: 10b0a6b17; -[SCNQuickPerfloggerQuickPerfLoggerEvent errorCode] */

undefined8 FUN_10b0a6b10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b0a6b18; end: 10b0a6b1f; -[SCNQuickPerfloggerQuickPerfLoggerEvent annotations] */

undefined8 FUN_10b0a6b18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b0a6b20; end: 10b0a6b27; -[SCNQuickPerfloggerQuickPerfLoggerEvent pointsId] */

undefined8 FUN_10b0a6b20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b0a6b28; end: 10b0a6b2f; -[SCNQuickPerfloggerQuickPerfLoggerEvent pointsOffsetSinceEventStartInMicroSeconds] */

undefined8 FUN_10b0a6b28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b0a6b30; end: 10b0a6b6b; -[SCNQuickPerfloggerQuickPerfLoggerEvent .cxx_destruct] */

void FUN_10b0a6b30(long param_1)

{
  FUN_10b0a6b6c(param_1 + 0x48);
  FUN_10b0a6b6c(param_1 + 0x40);
  FUN_10b0a6b6c(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 10b0a6b6c; end: 10b0a6b7b;  */

void FUN_10b0a6b6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10b0a6b7c; end: 10b0a6b7f; -[SCScopeGraph setRootScope:] */

void FUN_10b0a6b7c(void)

{
  return;
}



/* Entry: 10b0a6b80; end: 10b0a6bcf; -[SCScopeGraph setScopeGraphMetricsReporter:] */

void FUN_10b0a6b80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0d0bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c7860();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0a6bd0; end: 10b0a6c1f; -[SCScopeGraph setScopeGraphMemoryUsageMetricsReporter:] */

void FUN_10b0a6bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0d0bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6800();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0a6c20; end: 10b0a6c6f; -[SCScopeGraph setScopeGraphPerformanceMetricsReporter:] */

void FUN_10b0a6c20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0d0bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1da960();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0a6c70; end: 10b0a6c77; -[SCScopeGraph appEventSignaller] */

void FUN_10b0a6c70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9a270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_eventSignaller_1125c4240);
  return;
}



/* Entry: 10b0a6c78; end: 10b0a6c7f; -[SCScopeGraph scopes] */

undefined8 FUN_10b0a6c78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0a6c80; end: 10b0a6caf; -[SCScopeGraph .cxx_destruct] */

void FUN_10b0a6c80(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0a6cb0; end: 10b0a6d4f; +[SCScopeGraph scopes] */

void FUN_10b0a6cb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c150b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0a6d50; end: 10b0a6e5b; -[SCScopeGraphDefaultApplicationEventSignaller signalEvent:] */

void FUN_10b0a6d50(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010bfd02e0(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 10b0a6e5c; end: 10b0a6e67; -[SCScopeGraphDefaultApplicationEventSignaller .cxx_destruct] */

void FUN_10b0a6e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0a6e68; end: 10b0a6f0b; -[SCScopeLifecycleAndEntryPoint initWithLifecycle:entryPoint:] */

undefined1 *
FUN_10b0a6e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127056d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0a6f0c; end: 10b0a704f; -[SCScopeLifecycleAndEntryPoint isEqual:] */

long FUN_10b0a6f0c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    lVar3 = 1;
    goto LAB_10b0a7030;
  }
  puVar1 = PTR_PTR_1126df7e0;
  _objc_opt_class(PTR_PTR_1126df7e0);
  lVar3 = param_3;
  func_0x00010c077980(param_3,param_2,puVar1);
  if ((int)lVar3 == 0) {
    lVar3 = 0;
    goto LAB_10b0a7030;
  }
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_3 + 8);
  _objc_retain(lVar2);
  _objc_retain(lVar3);
  if (lVar2 == lVar3) {
    _objc_release(lVar3);
    _objc_release(lVar2);
LAB_10b0a6fcc:
    lVar2 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_3 + 0x10);
    _objc_retain(lVar2);
    _objc_retain(lVar4);
    if (lVar2 == lVar4) {
      lVar3 = 1;
    }
    else if (lVar4 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x00010c071ae0(lVar2,param_2,lVar4);
    }
    _objc_release(lVar4);
LAB_10b0a7020:
    _objc_release(lVar2);
  }
  else {
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_10b0a7020;
    }
    lVar4 = lVar2;
    func_0x00010c071ae0(lVar2,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((int)lVar4 != 0) goto LAB_10b0a6fcc;
    lVar3 = 0;
  }
  _objc_release(param_3);
LAB_10b0a7030:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0a7050; end: 10b0a7087; -[SCScopeLifecycleAndEntryPoint hash] */

long FUN_10b0a7050(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfde980(lVar1);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bfde980(lVar2);
  return (lVar2 - lVar1) + lVar1 * 0x20;
}



/* Entry: 10b0a7088; end: 10b0a70ab; -[SCScopeLifecycleAndEntryPoint copyWithZone:] */

undefined8 FUN_10b0a7088(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0a70ac; end: 10b0a70b3; -[SCScopeLifecycleAndEntryPoint lifecycle] */

undefined8 FUN_10b0a70ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0a70b4; end: 10b0a70bb; -[SCScopeLifecycleAndEntryPoint entryPoint] */

undefined8 FUN_10b0a70b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0a70bc; end: 10b0a70eb; -[SCScopeLifecycleAndEntryPoint .cxx_destruct] */

void FUN_10b0a70bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0a70ec; end: 10b0a7193; -[SCEntryPointWatchDog initWithTimerFactory:entryPointTimeout:] */

undefined1 *
FUN_10b0a70ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127056e0;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0a7194; end: 10b0a7197; -[SCEntryPointWatchDog setMemoryUsageMetricsReporter:] */

void FUN_10b0a7194(void)

{
  return;
}



/* Entry: 10b0a7198; end: 10b0a719b; -[SCEntryPointWatchDog setMetricsReporter:] */

void FUN_10b0a7198(void)

{
  return;
}



/* Entry: 10b0a719c; end: 10b0a71cb; -[SCEntryPointWatchDog setExceptionReporter:] */

void FUN_10b0a719c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0a71cc; end: 10b0a71cf; -[SCEntryPointWatchDog setPerformanceMetricsReporter:] */

void FUN_10b0a71cc(void)

{
  return;
}



/* Entry: 10b0a71d0; end: 10b0a71d3; -[SCEntryPointWatchDog setStartupInfoService:] */

void FUN_10b0a71d0(void)

{
  return;
}



/* Entry: 10b0a71d4; end: 10b0a729b; -[SCEntryPointWatchDog _neverEndingEntryPointDetected:] */

void FUN_10b0a71d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c098ba0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf97440(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  _objc_opt_class(uVar3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133380(*(undefined8 *)(param_1 + 0x10),uVar5,param_2,uVar2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0a729c; end: 10b0a7403; -[SCEntryPointWatchDog entryPoint:endingInLifecycle:] */

void FUN_10b0a729c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126df7e0;
  _objc_alloc();
  func_0x00010c0260a0();
  lVar2 = *(long *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10b0a7404;
  puStack_70 = &UNK_110841fb0;
  _objc_copyWeak(auStack_60,auStack_58);
  puStack_68 = puVar1;
  (**(code **)(lVar2 + 0x10))(uVar3,lVar2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x28);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20));
  _os_unfair_lock_unlock(param_1 + 0x28);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0a7404; end: 10b0a7437;  */

void FUN_10b0a7404(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be62c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0a7438; end: 10b0a7527; -[SCEntryPointWatchDog entryPoint:endedInLifecycle:] */

void FUN_10b0a7438(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126df7e0;
  _objc_alloc(PTR_PTR_1126df7e0);
  func_0x00010c0260a0();
  _os_unfair_lock_lock(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(puVar1);
  _objc_retain(uVar3);
  uVar2 = uVar3;
  func_0x00010c0e00e0(uVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _os_unfair_lock_unlock(param_1 + 0x28);
  func_0x00010c069d00(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0a7528; end: 10b0a752b; -[SCEntryPointWatchDog scopeGraphMappingBuildStart:] */

void FUN_10b0a7528(void)

{
  return;
}



/* Entry: 10b0a752c; end: 10b0a752f; -[SCEntryPointWatchDog scopeGraphMappingBuildEnd:] */

void FUN_10b0a752c(void)

{
  return;
}



/* Entry: 10b0a7530; end: 10b0a7533; -[SCEntryPointWatchDog scopeGraphAllMappingsBuilt] */

void FUN_10b0a7530(void)

{
  return;
}



/* Entry: 10b0a7534; end: 10b0a7537; -[SCEntryPointWatchDog lifecycleBeginning:] */

void FUN_10b0a7534(void)

{
  return;
}



/* Entry: 10b0a7538; end: 10b0a753b; -[SCEntryPointWatchDog lifecycleBegan:] */

void FUN_10b0a7538(void)

{
  return;
}



/* Entry: 10b0a753c; end: 10b0a753f; -[SCEntryPointWatchDog lifecycleEnding:] */

void FUN_10b0a753c(void)

{
  return;
}



/* Entry: 10b0a7540; end: 10b0a7543; -[SCEntryPointWatchDog lifecycleEnded:] */

void FUN_10b0a7540(void)

{
  return;
}


