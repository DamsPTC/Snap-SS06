/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107d7ad1c; end: 107d7afc3; -[SCImpalaShowProfileOperaLayerViewController initWithOperaDelegate:delegateViewForGestures:viewControllerProvider:launchInfo:episodeId:watchedStateCache:shouldShowGradient:performHapticFeedback:page:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ***
FUN_107d7ad1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 **param_5,undefined8 param_6,undefined8 ***param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             uint param_13,undefined4 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  ulong uVar4;
  undefined8 ***pppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 ***pppuVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 **ppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  ppuVar12 = &PTR_PTR_1126fa000;
  puStack_78 = PTR_PTR_1126faf70;
  pppuVar3 = (undefined8 ***)&puStack_80;
  puStack_80 = param_5;
  _objc_msgSendSuper2(pppuVar3,PTR_s_init_1125d9248);
  pppuVar5 = pppuVar3;
  if (pppuVar3 == (undefined8 ***)0x0) goto LAB_107d7af4c;
  uStack_a4 = param_13 & 0xff;
  lVar11 = (long)_DAT_11276eb40;
  uVar13 = *(ulong *)((long)pppuVar3 + lVar11);
  uStack_a0 = param_9;
  uStack_98 = param_8;
  _objc_retain(uVar13);
  uVar4 = uVar13;
  func_0x00010bf12280();
  if ((uVar4 & 1) == 0) {
    _objc_release(uVar13);
LAB_107d7ae2c:
    puStack_88 = PTR_PTR_1126faf70;
    pppuVar5 = &ppuStack_90;
    ppuStack_90 = pppuVar3;
    _objc_msgSendSuper2(pppuVar5,PTR_s_initWithOperaDelegate_delegateVi_1125ea138,param_7,uStack_98,
                        uStack_a0,param_13._1_1_,0);
  }
  else {
    uVar4 = uVar13;
    func_0x00010c2604a0();
    _objc_release(uVar13);
    if ((uVar4 & 1) == 0) goto LAB_107d7ae2c;
    _objc_storeWeak((long)pppuVar3 + (long)_DAT_11276eb44,param_7);
  }
  uVar6 = param_10;
  func_0x00010bf51e00();
  uVar10 = *(undefined8 *)((long)pppuVar5 + lVar11);
  *(undefined8 *)((long)pppuVar5 + lVar11) = uVar6;
  _objc_release(uVar10);
  uVar6 = param_11;
  func_0x00010bf51e00();
  uVar10 = *(undefined8 *)((long)pppuVar5 + (long)_DAT_11276eb48);
  *(undefined8 *)((long)pppuVar5 + (long)_DAT_11276eb48) = uVar6;
  _objc_release(uVar10);
  ppuVar12 = (undefined **)(long)_DAT_11276eb4c;
  _objc_retain(param_12);
  uVar6 = *(undefined8 *)((long)pppuVar5 + (long)ppuVar12);
  *(undefined8 *)((long)pppuVar5 + (long)ppuVar12) = param_12;
  _objc_release(uVar6);
  *(char *)((long)pppuVar5 + (long)_DAT_11276eb50) = (char)uStack_a4;
  lVar11 = (long)_DAT_11276eb54;
  _objc_retain(param_15);
  uVar6 = *(undefined8 *)((long)pppuVar5 + lVar11);
  *(undefined8 *)((long)pppuVar5 + lVar11) = param_15;
  _objc_release(uVar6);
  pppuVar3 = param_7;
  func_0x00010bf99b40(param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c9400;
  func_0x00010c272d80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(pppuVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(pppuVar3);
  param_8 = uStack_98;
  param_9 = uStack_a0;
LAB_107d7af4c:
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  pppuVar3 = param_7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_107d7afc4;
  puStack_f8 = PTR_PTR_1126faf70;
  ppuStack_100 = pppuVar3;
  uStack_f0 = param_12;
  uStack_e8 = param_11;
  uStack_e0 = param_10;
  ppuStack_d8 = ppuVar12;
  uStack_d0 = param_8;
  ppuStack_c8 = param_7;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&ppuStack_100,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar11 = (long)_DAT_11276eb58;
  lVar2 = (long)_DAT_11276eb5c;
  if (*(long *)((long)pppuVar3 + lVar11) != 0) {
    puVar1 = (undefined8 *)((long)pppuVar3 + lVar2);
    pppuVar5 = pppuVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar5;
    func_0x00010bf20c00();
    param_1 = *puVar1;
    param_2 = puVar1[1];
    param_3 = puVar1[2];
    param_4 = puVar1[3];
    _CGRectEqualToRect();
    _objc_release(pppuVar5);
    if (((ulong)pppuVar9 & 1) == 0) {
      pppuVar5 = pppuVar3;
      func_0x00010c29bf00(pppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      func_0x00010c19f0e0(*(undefined8 *)((long)pppuVar3 + lVar11));
      _objc_release(pppuVar5);
    }
  }
  puVar1 = (undefined8 *)((long)pppuVar3 + lVar2);
  func_0x00010c29bf00(pppuVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  _objc_release(pppuVar3);
  return pppuVar3;
}



/* Entry: 107d7afc4; end: 107d7b0c3; -[SCImpalaShowProfileOperaLayerViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7afc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126faf70;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar2 = (long)_DAT_11276eb58;
  lVar3 = (long)_DAT_11276eb5c;
  if (*(long *)(param_5 + lVar2) != 0) {
    puVar1 = (undefined8 *)(param_5 + lVar3);
    uVar4 = param_5;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf20c00();
    param_1 = *puVar1;
    param_2 = puVar1[1];
    param_3 = puVar1[2];
    param_4 = puVar1[3];
    _CGRectEqualToRect();
    _objc_release(uVar4);
    if ((uVar5 & 1) == 0) {
      uVar4 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar2));
      _objc_release(uVar4);
    }
  }
  puVar1 = (undefined8 *)(param_5 + lVar3);
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  _objc_release(param_5);
  return;
}



/* Entry: 107d7b0c4; end: 107d7b247; -[SCImpalaShowProfileOperaLayerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7b0c4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  ulong uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  ulong uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + (long)_DAT_11276eb58);
  if (lVar1 != 0) {
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uVar3 = param_1;
      func_0x00010c0ea340(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c118dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c9410;
      func_0x00010bfe9fa0();
      _objc_retainAutoreleasedReturnValue();
      puStack_50 = PTR____kCFBooleanTrue_11034ab68;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_58 = puVar5;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7e940(uVar4);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
  }
  puStack_60 = PTR_PTR_1126faf70;
  uStack_68 = param_1;
  _objc_msgSendSuper2(&uStack_68,PTR_s_viewDidAppear__112684bd0,param_3);
  uVar3 = param_1;
  func_0x00010c06d1e0();
  if ((uVar3 & 1) == 0) {
    param_1 = param_1 + (long)_DAT_11276eb44;
    _objc_loadWeakRetained();
    func_0x00010c1c0f60();
    uVar3 = param_1;
    _objc_release(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_107d7b248;
  uStack_90 = param_3;
  uStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_98,uVar3);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x107d7b2d0;
  puStack_a8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_a0,auStack_98);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_c0);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  return;
}



/* Entry: 107d7b248; end: 107d7b30f; -[SCImpalaShowProfileOperaLayerViewController onButtonTapped] */

void FUN_107d7b248(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x107d7b2d0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107d7b310; end: 107d7b317; -[SCImpalaShowProfileOperaLayerViewController shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_107d7b310(void)

{
  return 0;
}



/* Entry: 107d7b318; end: 107d7b323; -[SCImpalaShowProfileOperaLayerViewController pushToValdiMarshaller:] */

undefined8 FUN_107d7b318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af9d1ac(param_3,param_1);
  func_0x00010af9d1a4();
  func_0x00010af9d160();
  func_0x00010af9d124();
  return param_3;
}



/* Entry: 107d7b324; end: 107d7b5e7; -[SCImpalaShowProfileOperaLayerViewController operaViewDidSendEvent:page:params:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7b324(float param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  ulong param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  double dStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126c9400;
  func_0x00010c272d80(PTR_PTR_1126c9400);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)uVar3 != 0) {
    uVar4 = param_5;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    iVar1 = (int)*(undefined8 *)(param_2 + _DAT_11276eb48);
    func_0x00010c0720c0();
    if (iVar1 != 0) {
      puVar2 = PTR_PTR_1126c9408;
      func_0x00010c29fbc0(PTR_PTR_1126c9408);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar7 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar2);
      uVar5 = uVar6;
      if ((uVar7 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar6);
      uVar6 = uVar5;
      func_0x00010bf1f3c0();
      _objc_release(uVar5);
      puVar2 = PTR_PTR_1126c9408;
      func_0x00010bf03ba0(PTR_PTR_1126c9408);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar8 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar2);
      uVar5 = uVar7;
      if ((uVar8 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar7);
      func_0x00010bfb2c80(uVar5);
      _objc_release(uVar5);
      _objc_initWeak(auStack_78,param_2);
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_107d7b5e8;
      puStack_98 = &UNK_11085da78;
      dStack_88 = (double)param_1;
      _objc_copyWeak(auStack_90,auStack_78);
      uStack_80 = (undefined1)uVar6;
      func_0x0001000d76cc("APPSTORE",&puStack_b0);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_78);
    }
    _objc_release(uVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107d7b5e8; end: 107d7b697;  */

void FUN_107d7b5e8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_50,param_1 + 0x20);
  uStack_48 = *(undefined1 *)(param_1 + 0x30);
  func_0x00010bf03400(uVar2,puVar1);
  _objc_destroyWeak(auStack_50);
  return;
}



/* Entry: 107d7b698; end: 107d7b6cb;  */

void FUN_107d7b698(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedc980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107d7b6cc; end: 107d7b6fb; -[SCImpalaShowProfileOperaLayerViewController actionBarContentViewForConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7b6cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276eb64);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107d7b6fc; end: 107d7b75f; -[SCImpalaShowProfileOperaLayerViewController shouldHideActionBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107d7b6fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_11276eb44;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0da1c0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 == 0;
}



/* Entry: 107d7b760; end: 107d7b813; -[SCImpalaShowProfileOperaLayerViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107d7b760(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  double dVar2;
  
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5,param_4,lVar1);
  _objc_release(param_5);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  dVar2 = param_1;
  func_0x00010c277540(*(undefined8 *)(param_3 + _DAT_11276eb64));
  _objc_release(lVar1);
  return param_1 - dVar2 <= param_2;
}



/* Entry: 107d7b814; end: 107d7b93b; -[SCImpalaShowProfileOperaLayerViewController _updateOverlayViewForVideoControls:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7b814(double param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  lVar5 = (long)_DAT_11276eb58;
  if (*(long *)(param_2 + lVar5) != 0) {
    lVar1 = param_2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMinX();
    lVar2 = param_2;
    dVar6 = param_1;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMinY();
    dVar8 = dVar6 + -70.0;
    if (param_4 == 0) {
      dVar8 = dVar6;
    }
    lVar3 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    lVar4 = param_2;
    dVar7 = dVar6;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetHeight();
    func_0x00010c19f0e0(param_1,dVar8,dVar6,dVar7,*(undefined8 *)(param_2 + lVar5));
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 107d7b93c; end: 107d7b94b; -[SCImpalaShowProfileOperaLayerViewController watchedStateCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d7b93c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276eb4c);
}



/* Entry: 107d7b94c; end: 107d7b98b; -[SCImpalaShowProfileOperaLayerViewController setWatchedStateCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7b94c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276eb4c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d7b98c; end: 107d7b9ab; -[SCImpalaShowProfileOperaLayerViewController operaDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7b98c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276eb44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d7b9ac; end: 107d7b9bb; -[SCImpalaShowProfileOperaLayerViewController swipeInteractionPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d7b9ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276eb60);
}



/* Entry: 107d7b9bc; end: 107d7b9cb; -[SCImpalaShowProfileOperaLayerViewController launchInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d7b9bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276eb40);
}



/* Entry: 107d7b9cc; end: 107d7b9db; -[SCImpalaShowProfileOperaLayerViewController episodeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d7b9cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276eb48);
}



/* Entry: 107d7b9dc; end: 107d7ba87; -[SCImpalaShowProfileOperaLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7b9dc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276eb48,0);
  _objc_storeStrong(param_1 + _DAT_11276eb40,0);
  _objc_storeStrong(param_1 + _DAT_11276eb60,0);
  _objc_destroyWeak(param_1 + _DAT_11276eb44);
  _objc_storeStrong(param_1 + _DAT_11276eb4c,0);
  _objc_storeStrong(param_1 + _DAT_11276eb54,0);
  _objc_storeStrong(param_1 + _DAT_11276eb68,0);
  _objc_storeStrong(param_1 + _DAT_11276eb64,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276eb58,0);
  return;
}



/* Entry: 107d7ba88; end: 107d7bbab; -[SCImpalaShowProfileOperaLayerViewControllerProvider initWithProvider:launchInfo:episodeId:watchedStateCache:shouldDelegateGestures:shouldShowGradient:performHapticFeedback:] */

undefined1 *
FUN_107d7ba88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126faf78;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x19) = param_7;
    *(undefined1 *)((long)puVar1 + 0x1a) = param_8;
    *(undefined1 *)((long)puVar1 + 0x18) = param_9;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d7bbac; end: 107d7bc63; -[SCImpalaShowProfileOperaLayerViewControllerProvider viewControllerForDelegate:delegateViewForGestures:page:] */

void FUN_107d7bbac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7b60;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c031ce0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d7bc64; end: 107d7bd93; -[SCImpalaShowProfileOperaLayerViewControllerProvider isEqual:] */

undefined8 FUN_107d7bc64(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cc338;
  _objc_opt_class(PTR_PTR_1126cc338);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    uVar5 = 0;
    goto LAB_107d7bd6c;
  }
  uVar6 = *(ulong *)(param_1 + 0x28);
  uVar3 = param_3;
  func_0x00010c08b920();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar6);
  _objc_retain(uVar3);
  if (uVar6 == uVar3) {
    _objc_release(uVar3);
    _objc_release(uVar6);
LAB_107d7bd2c:
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = param_3;
    func_0x00010bf984a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar5);
LAB_107d7bd5c:
    _objc_release(uVar6);
  }
  else {
    if (uVar3 == 0) {
      uVar5 = 0;
      goto LAB_107d7bd5c;
    }
    uVar4 = uVar6;
    func_0x00010c071ae0();
    _objc_release(uVar3);
    _objc_release(uVar6);
    if ((int)uVar4 != 0) goto LAB_107d7bd2c;
    uVar5 = 0;
  }
  _objc_release(uVar3);
LAB_107d7bd6c:
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 107d7bd94; end: 107d7bd9b; -[SCImpalaShowProfileOperaLayerViewControllerProvider shouldDelegateGestures] */

undefined1 FUN_107d7bd94(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 107d7bd9c; end: 107d7bda3; -[SCImpalaShowProfileOperaLayerViewControllerProvider shouldShowGradient] */

undefined1 FUN_107d7bd9c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a);
}



/* Entry: 107d7bda4; end: 107d7bdab; -[SCImpalaShowProfileOperaLayerViewControllerProvider episodeId] */

undefined8 FUN_107d7bda4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107d7bdac; end: 107d7bdb3; -[SCImpalaShowProfileOperaLayerViewControllerProvider launchInfo] */

undefined8 FUN_107d7bdac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107d7bdb4; end: 107d7bdfb; -[SCImpalaShowProfileOperaLayerViewControllerProvider .cxx_destruct] */

void FUN_107d7bdb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d7bdfc; end: 107d7c017; -[SCImpalaUnifiedPublicProfileOperaLayerViewController initWithOperaDelegate:delegateViewForGestures:viewControllerProvider:performHapticFeedback:commitHaptic:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107d7bdfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126faf80;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar8 = (long)_DAT_11276eb88;
    _objc_storeWeak((long)puVar1 + lVar8,param_3);
    puVar2 = PTR_PTR_1126cc328;
    _objc_alloc();
    uVar6 = param_3;
    func_0x00010bf99b40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010b60();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276eb8c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276eb8c) = puVar2;
    _objc_release(uVar5);
    _objc_release(uVar6);
    lVar7 = (long)puVar1 + lVar8;
    _objc_loadWeakRetained();
    lVar3 = lVar7;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c264dc0();
    _objc_release(lVar3);
    _objc_release(lVar7);
    lVar8 = (long)puVar1 + lVar8;
    _objc_loadWeakRetained();
    lVar7 = lVar8;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d6c60();
    _objc_release(lVar7);
    _objc_release(lVar8);
    puVar2 = PTR_PTR_1126b0ee0;
    _objc_alloc();
    puVar4 = param_4;
    if (param_4 == (undefined8 *)0x0) {
      puVar4 = puVar1;
      func_0x00010c29bf00(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c039560();
    lVar7 = (long)_DAT_11276eb90;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    if (param_4 == (undefined8 *)0x0) {
      _objc_release(puVar4);
    }
    func_0x00010c1da8e0(*(undefined8 *)((long)puVar1 + lVar7));
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107d7c018; end: 107d7c0ab; -[SCImpalaUnifiedPublicProfileOperaLayerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7c018(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126faf80;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c06d1a0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    param_1 = param_1 + _DAT_11276eb88;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1d9980();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 107d7c0ac; end: 107d7c13f; -[SCImpalaUnifiedPublicProfileOperaLayerViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7c0ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126faf80;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillDisappear__112685438);
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c06d1e0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    param_1 = param_1 + _DAT_11276eb88;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1c0f60();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 107d7c140; end: 107d7c1af; -[SCImpalaUnifiedPublicProfileOperaLayerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7c140(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126faf80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = param_1;
  func_0x00010c06d1e0();
  if ((uVar1 & 1) == 0) {
    lVar2 = param_1 + (long)_DAT_11276eb88;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c1c0f60();
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 107d7c1b0; end: 107d7c1cf; -[SCImpalaUnifiedPublicProfileOperaLayerViewController operaDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7c1b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276eb88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107d7c1d0; end: 107d7c1df; -[SCImpalaUnifiedPublicProfileOperaLayerViewController swipeInteractionPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d7c1d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276eb90);
}



/* Entry: 107d7c1e0; end: 107d7c22b; -[SCImpalaUnifiedPublicProfileOperaLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7c1e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276eb90,0);
  _objc_destroyWeak(param_1 + _DAT_11276eb88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276eb8c,0);
  return;
}



/* Entry: 107d7c22c; end: 107d7c25f; -[SCOperaArrowLayerView initWithFrame:] */

void FUN_107d7c22c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126faf88;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 107d7c260; end: 107d7c2f7; -[SCOperaArrowLayerView setupViewForLayer:] */

void FUN_107d7c260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010beaa9a0(param_2);
  func_0x00010bfd7840(param_4);
  func_0x00010c1a60a0(param_2);
  uVar1 = param_4;
  func_0x00010c26b700(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea84a0(param_2);
  _objc_release(uVar1);
  func_0x00010c0e8ca0(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c1d4bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2,PTR_s_setOpacity__112652d18);
  return;
}



/* Entry: 107d7c2f8; end: 107d7c41b; -[SCOperaArrowLayerView _setupArrowView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7c2f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11276eb94;
  if (*(long *)(param_1 + lVar6) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126d7b68;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c039f20(0x4004000000000000);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  ppuVar4 = &PTR____CFConstantStringClassReference_110ebd1b8;
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ebd1b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar6));
  _objc_release(ppuVar4);
  func_0x00010befbb60(param_1);
  func_0x00010bfb68e0(*(undefined8 *)(param_1 + lVar6));
  func_0x00010bc85160();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar6),PTR_s_setFrame__112645658)
  ;
  return;
}



/* Entry: 107d7c41c; end: 107d7c5f3; -[SCOperaArrowLayerView _setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7c41c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_11276eb98;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = param_3;
  _objc_release(uVar1);
  lVar5 = (long)_DAT_11276eb9c;
  if ((*(long *)(param_1 + lVar5) == 0) && (lVar2 = param_3, func_0x00010c08fa60(), lVar2 != 0)) {
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar3;
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar5),param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar5),param_2,1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
  }
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    func_0x00010c16b720(*(undefined8 *)(param_1 + lVar5),param_2,0);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    func_0x00010c04e820();
    uVar1 = *(undefined8 *)PTR__NSKernAttributeName_110345808;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(0x3f800000,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c08fa60(param_3);
    func_0x00010bef6f20(puVar3,param_2,uVar1,puVar4,0,lVar2);
    _objc_release(puVar4);
    uVar1 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c08fa60(param_3);
    func_0x00010bef6f20(puVar3,param_2,uVar1,puVar4,0,lVar2);
    _objc_release(puVar4);
    func_0x00010c16b720(*(undefined8 *)(param_1 + lVar5),param_2,puVar3);
    func_0x00010c23d620(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d7c5f4; end: 107d7c6ab; -[SCOperaArrowLayerView setHasGradient:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7c5f4(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(char *)(param_1 + _DAT_11276eba0) = (char)param_3;
  if ((param_3 != 0) && (lVar4 = (long)_DAT_11276eba4, *(long *)(param_1 + lVar4) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110ebd1d8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c066fa0(param_1,param_2,*(undefined8 *)(param_1 + lVar4),0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107d7c6ac; end: 107d7c75f; -[SCOperaArrowLayerView setOpacity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7c6ac(double param_1,long param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  *(double *)(param_2 + _DAT_11276eba8) = param_1;
  fVar2 = (float)param_1;
  uVar1 = *(undefined8 *)(param_2 + _DAT_11276eb94);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(fVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11276eb9c);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(fVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + _DAT_11276eba4);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(fVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107d7c760; end: 107d7c7cb; -[SCOperaArrowLayerView updateVisible:animationDuration:delay:] */

void FUN_107d7c760(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  double dStack_18;
  
  dStack_18 = (double)param_3;
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_107d7c7cc;
  puStack_28 = &UNK_110848c48;
  uStack_20 = param_1;
  func_0x00010bf03440(PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x30000,&puStack_40,0);
  return;
}



/* Entry: 107d7c7cc; end: 107d7c7db;  */

void FUN_107d7c7cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d4bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s_setOpacity__112652d18);
  return;
}



/* Entry: 107d7c7dc; end: 107d7c9bb; -[SCOperaArrowLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7c7dc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126faf88;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  lVar2 = (long)_DAT_11276eb9c;
  if (*(long *)(param_5 + lVar2) != 0) {
    lVar1 = *(long *)(param_5 + _DAT_11276eb98);
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      lVar1 = (long)_DAT_11276eb94;
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
      dVar6 = param_1;
      func_0x00010bf20c00(param_5);
      _CGRectGetMidX();
      dVar4 = dVar6;
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
      _CGRectGetMidX();
      dVar6 = dVar6 - dVar4;
      func_0x00010bf20c00(param_5);
      _CGRectGetMaxY();
      func_0x00010bc852e4(param_1,param_2,param_3,param_4,dVar6,
                          dVar4 + *(double *)(param_5 + _DAT_11276ebac));
      func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar1));
      lVar3 = (long)_DAT_11276eba4;
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
      dVar6 = param_1;
      func_0x00010bf20c00(param_5);
      _CGRectGetMidX();
      dVar4 = dVar6;
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
      _CGRectGetMidX();
      dVar6 = dVar6 - dVar4;
      func_0x00010bf20c00(param_5);
      _CGRectGetMaxY();
      dVar5 = dVar4;
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
      _CGRectGetMaxY();
      func_0x00010bc852e4(param_1,param_2,param_3,param_4,dVar6,dVar4 - dVar5);
      func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
      func_0x00010bf20c00(param_5);
      _CGRectGetMidX();
      dVar6 = param_1;
      func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
      _CGRectGetMidX();
      param_1 = param_1 - dVar6;
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
      _CGRectGetMaxY();
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
      func_0x00010c19f0e0(param_1,dVar6 + 4.0,param_3,*(undefined8 *)(param_5 + lVar2));
      func_0x00010beb8840(param_5);
    }
  }
  return;
}



/* Entry: 107d7c9bc; end: 107d7cabf; -[SCOperaArrowLayerView showAttachmentTriggerViewAnimated] */

void FUN_107d7c9bc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x107d7ca44;
  puStack_30 = &UNK_110842e18;
  ppuVar1 = &puStack_48;
  uStack_28 = param_1;
  _objc_retainBlock(ppuVar1);
  func_0x00010c08cdc0(param_1);
  func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,ppuVar1);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 107d7cac0; end: 107d7cb07; -[SCOperaArrowLayerView hideAttachmentTriggerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7cac0(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_11276ebac) = 0;
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_11276eba4));
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 107d7cb08; end: 107d7cb5f; -[SCOperaArrowLayerView _showCurrentAttachmentTriggerView] */

/* WARNING: Possible PIC construction at 0x000107d7cb2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107d7cb30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7cb08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276eb94),PTR_s_setHidden__1126479f8,0);
  return;
}



/* Entry: 107d7cb60; end: 107d7cc23; -[SCOperaArrowLayerView hitTest:withEvent:] */

void FUN_107d7cb60(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  double dVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  dVar2 = param_1;
  _objc_retain(param_5);
  func_0x00010bf20c00(param_3);
  _CGRectGetHeight();
  dVar2 = dVar2 + -36.0;
  if (dVar2 <= param_2) {
    func_0x00010bf20c00(param_3);
    _CGRectGetMidX();
    if (ABS(param_1 - dVar2) <= 15.0) {
      puStack_38 = PTR_PTR_1126faf88;
      uStack_40 = param_3;
      _objc_msgSendSuper2(param_1,param_2,&uStack_40,PTR_s_hitTest_withEvent__1125d6850,param_5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107d7cc04;
    }
  }
  puVar1 = (undefined8 *)0x0;
LAB_107d7cc04:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107d7cc24; end: 107d7cc2f; -[SCOperaArrowLayerView touchableAreaHeight] */

undefined8 FUN_107d7cc24(void)

{
  return 0x4042000000000000;
}



/* Entry: 107d7cc30; end: 107d7cc37; -[SCOperaArrowLayerView isFixedDuringPageTransitions] */

undefined8 FUN_107d7cc30(void)

{
  return 0;
}



/* Entry: 107d7cc38; end: 107d7cc3b; -[SCOperaArrowLayerView updateWithConfiguration:] */

void FUN_107d7cc38(void)

{
  return;
}



/* Entry: 107d7cc3c; end: 107d7cc4b; -[SCOperaArrowLayerView hasGradient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107d7cc3c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276eba0);
}



/* Entry: 107d7cc4c; end: 107d7cc5b; -[SCOperaArrowLayerView opacity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d7cc4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276eba8);
}



/* Entry: 107d7cc5c; end: 107d7cc6b; -[SCOperaArrowLayerView text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d7cc5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276eb98);
}



/* Entry: 107d7cc6c; end: 107d7cc77; -[SCOperaArrowLayerView setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7cc6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107d7cc78; end: 107d7ccd7; -[SCOperaArrowLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7cc78(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276eb98,0);
  _objc_storeStrong(param_1 + _DAT_11276eba4,0);
  _objc_storeStrong(param_1 + _DAT_11276eb9c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276eb94,0);
  return;
}



/* Entry: 107d7ccd8; end: 107d7d00b; -[SCOperaArrowLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7ccd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010c18b5e0();
  lVar6 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c0da1c0();
  _objc_release(lVar6);
  if (lVar2 == 0) {
    lVar6 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010c298f80();
    _objc_release(lVar6);
    if ((int)lVar2 == 0) {
      puVar3 = PTR_PTR_1126d7b78;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      lVar6 = (long)_DAT_11276ebb4;
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      *(undefined **)(param_1 + lVar6) = puVar3;
      _objc_release(uVar5);
    }
    else {
      puVar3 = PTR_PTR_1126d7b70;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      lVar6 = (long)_DAT_11276ebb0;
      uVar5 = *(undefined8 *)(param_1 + lVar6);
      *(undefined **)(param_1 + lVar6) = puVar3;
      _objc_release(uVar5);
      func_0x00010c2024c0(*(undefined8 *)(param_1 + lVar6),param_2,1);
    }
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
    func_0x00010c222380(param_1,param_2,*(undefined8 *)(param_1 + lVar6));
  }
  else {
    puVar3 = PTR_PTR_1126d7b70;
    _objc_alloc();
    uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    lVar6 = (long)_DAT_11276ebb0;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar3;
    _objc_release(uVar5);
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(uVar7,uVar8,uVar9,uVar10);
    func_0x00010c222380(param_1,param_2,puVar3);
    _objc_release(puVar3);
    lVar6 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar6);
  }
  lVar6 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c0d6c60();
  *(bool *)(param_1 + _DAT_11276ebb8) = lVar2 == 1;
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010c08c520();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010bfdb4e0();
  _objc_release(lVar6);
  if ((int)lVar2 != 0) {
    lVar6 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(lVar6);
  }
  lVar6 = param_1;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2638;
  func_0x00010c2a5aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(lVar6,param_2,param_1,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = puVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar3 != (undefined *)0x0) {
    puVar3 = puVar1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d6c60();
    puVar1[_DAT_11276ebb8] = puVar4 == (undefined *)0x1;
    _objc_release(puVar3);
    lVar6 = *(long *)(puVar1 + _DAT_11276ebb0);
    if (lVar6 == 0) {
      lVar6 = *(long *)(puVar1 + _DAT_11276ebb4);
    }
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2298c0(lVar6,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 107d7d00c; end: 107d7d0cb; -[SCOperaArrowLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7d00c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0d6c60();
    *(bool *)(param_1 + _DAT_11276ebb8) = lVar1 == 1;
    _objc_release(lVar2);
    lVar2 = *(long *)(param_1 + _DAT_11276ebb0);
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + _DAT_11276ebb4);
    }
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2298c0(lVar2,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107d7d0cc; end: 107d7d11b; -[SCOperaArrowLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7d0cc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126faf90;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidFullyAppear_112684c88);
  func_0x00010c235ec0(*(undefined8 *)(param_1 + _DAT_11276ebb4));
  return;
}



/* Entry: 107d7d11c; end: 107d7d16b; -[SCOperaArrowLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7d11c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126faf90;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidFullyDisappear_112684ca8);
  func_0x00010bfe1920(*(undefined8 *)(param_1 + _DAT_11276ebb4));
  return;
}



/* Entry: 107d7d16c; end: 107d7d1bf; -[SCOperaArrowLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7d16c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c1d4bc0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11276ebb4));
  puStack_28 = PTR_PTR_1126faf90;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_teardown_112678538);
  return;
}



/* Entry: 107d7d1c0; end: 107d7d327; -[SCOperaArrowLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7d1c0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010bf0a240(PTR_PTR_1126c9410);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (uVar2 != 0) {
    lVar8 = (long)_DAT_11276ebb4;
    if (*(long *)(param_1 + lVar8) != 0) {
      puVar1 = PTR_PTR_1126c9410;
      func_0x00010bf0a240(PTR_PTR_1126c9410);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0e00e0(param_3,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf1f3c0();
      _objc_release(uVar3);
      _objc_release(puVar1);
      if ((uVar4 & 1) == 0) {
        lVar5 = param_1;
        func_0x00010bf46560(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beee8c0();
        lVar6 = param_1;
        func_0x00010bf46560(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beee900();
        _objc_release(lVar6);
        _objc_release(lVar5);
      }
      uVar7 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010bf46560(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beee900();
      func_0x00010c28c240(uVar7,param_2,(uint)uVar4 ^ 1);
      _objc_release(param_1);
    }
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d7d328; end: 107d7d353; -[SCOperaArrowLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107d7d328(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (((param_3 == 4) && (param_4 != 0)) && ((*(byte *)(param_1 + _DAT_11276ebb8) & 1) != 0)) {
    return 1;
  }
  return 0xffffffffffffffff;
}



/* Entry: 107d7d354; end: 107d7d41b; -[SCOperaArrowLayerViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107d7d354(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  double dVar2;
  
  lVar1 = *(long *)(param_3 + _DAT_11276ebb0);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_3 + _DAT_11276ebb4);
  }
  _objc_retain(param_5);
  func_0x00010c277540(lVar1);
  lVar1 = param_3;
  dVar2 = param_1;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5,param_4,lVar1);
  _objc_release(param_5);
  _objc_release(lVar1);
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(param_3);
  return dVar2 - param_1 <= param_2;
}



/* Entry: 107d7d41c; end: 107d7d607; -[SCOperaArrowLayerViewController _didTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7d41c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5,param_4,uVar1);
  _objc_release(param_5);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  uVar8 = param_2;
  func_0x00010bf512a0();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b6008;
  func_0x00010c09f100();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uStack_98 = param_1;
  uStack_90 = param_2;
  puStack_88 = puVar2;
  func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8,param_4,&uStack_98,"{CGPoint=dd}");
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b6008;
  puStack_78 = puVar3;
  func_0x00010c09f120();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  uStack_a8 = uVar7;
  uStack_a0 = uVar8;
  puStack_80 = puVar4;
  func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8,param_4,&uStack_a8,"{CGPoint=dd}");
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_78,&puStack_88,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b2638;
  func_0x00010bf0a200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf04440(param_3,param_4,puVar2,puVar6);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b2638;
  _objc_retain(puVar3);
  func_0x00010c2a5aa0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0720c0(puVar3,param_4,puVar2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if ((int)puVar4 != 0) {
    puVar2 = puVar6;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d6c60();
    puVar6[_DAT_11276ebb8] = puVar3 == (undefined *)0x1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 107d7d608; end: 107d7d6b7; -[SCOperaArrowLayerViewController operaViewDidSendEvent:page:params:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7d608(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b2638;
  _objc_retain(param_3);
  func_0x00010c2a5aa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    lVar3 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0d6c60();
    *(bool *)(param_1 + _DAT_11276ebb8) = lVar4 == 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 107d7d6b8; end: 107d7d6f7; -[SCOperaArrowLayerViewController actionBarContentViewForConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7d6b8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11276ebb0);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + _DAT_11276ebb4);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107d7d6f8; end: 107d7d737; -[SCOperaArrowLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7d6f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276ebb0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ebb4,0);
  return;
}



/* Entry: 107d7d738; end: 107d7d89b; -[SCOperaVOperaPillLayerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107d7d738(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126faf98;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar4 = (long)_DAT_11276ebbc;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4032000000000000);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar5 = (long)_DAT_11276ebc0;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1ecc0(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar4));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107d7d89c; end: 107d7d8db; -[SCOperaVOperaPillLayerView setupViewForLayer:] */

void FUN_107d7d89c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c229980(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d7d8dc; end: 107d7d99f; -[SCOperaVOperaPillLayerView setupViewForText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7d8dc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11276ebc0;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c09e440(param_3,param_2,uVar1);
  _objc_release(uVar1);
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c09e420(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c08fa60(param_3);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276ebbc),param_2,lVar2 == 0);
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107d7d9a0; end: 107d7da9f; -[SCOperaVOperaPillLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7d9a0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126faf98;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  lVar1 = (long)_DAT_11276ebc0;
  dVar2 = param_3;
  func_0x00010c23d5a0(param_3,param_4,*(undefined8 *)(param_5 + lVar1));
  func_0x00010c19f0e0(0x4034000000000000,0,dVar2,0x4042000000000000,*(undefined8 *)(param_5 + lVar1)
                     );
  dVar3 = param_4 + -36.0 + -6.0;
  if (*(char *)(param_5 + _DAT_11276ebc4) == '\0') {
    dVar3 = (param_4 + -36.0) * 0.5;
  }
  func_0x00010c19f0e0((long)((param_3 - (dVar2 + 40.0)) * 0.5),(long)dVar3,dVar2 + 40.0,
                      0x4042000000000000,*(undefined8 *)(param_5 + _DAT_11276ebbc));
  return;
}



/* Entry: 107d7daa0; end: 107d7dadb; -[SCOperaVOperaPillLayerView touchableAreaHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_107d7daa0(long param_1)

{
  double in_d3;
  
  if (*(char *)(param_1 + _DAT_11276ebc4) == '\x01') {
    param_1 = *(long *)(param_1 + _DAT_11276ebbc);
  }
  func_0x00010bf20c00(param_1);
  return in_d3 + 12.0;
}



/* Entry: 107d7dadc; end: 107d7dae3; -[SCOperaVOperaPillLayerView isFixedDuringPageTransitions] */

undefined8 FUN_107d7dadc(void)

{
  return 0;
}



/* Entry: 107d7dae4; end: 107d7dae7; -[SCOperaVOperaPillLayerView updateWithConfiguration:] */

void FUN_107d7dae4(void)

{
  return;
}



/* Entry: 107d7dae8; end: 107d7dbcf; -[SCOperaVOperaPillLayerView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7dae8(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  double dVar2;
  double dVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  dVar3 = param_1;
  _objc_retain(param_5);
  func_0x00010bf20c00(param_3);
  _CGRectGetHeight();
  dVar2 = dVar3;
  func_0x00010c277540(param_3);
  dVar3 = dVar3 - dVar2;
  if (dVar3 <= param_2) {
    func_0x00010bf20c00(param_3);
    _CGRectGetMidX();
    dVar2 = param_1 - dVar3;
    func_0x00010bfb68e0(*(undefined8 *)(param_3 + _DAT_11276ebbc));
    _CGRectGetWidth();
    if (ABS(dVar2) <= dVar3 * 0.5) {
      puStack_48 = PTR_PTR_1126faf98;
      lStack_50 = param_3;
      _objc_msgSendSuper2(param_1,param_2,&lStack_50,PTR_s_hitTest_withEvent__1125d6850,param_5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107d7dbac;
    }
  }
  plVar1 = (long *)0x0;
LAB_107d7dbac:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 107d7dbd0; end: 107d7dbdf; -[SCOperaVOperaPillLayerView showingWithoutActionBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107d7dbd0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276ebc4);
}



/* Entry: 107d7dbe0; end: 107d7dbef; -[SCOperaVOperaPillLayerView setShowingWithoutActionBar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7dbe0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276ebc4) = param_3;
  return;
}



/* Entry: 107d7dbf0; end: 107d7dc2f; -[SCOperaVOperaPillLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7dbf0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276ebc0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276ebbc,0);
  return;
}



/* Entry: 107d7dc30; end: 107d7dc37; -[SCComposerFoundationActionSheetModel model] */

undefined8 FUN_107d7dc30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d7dc38; end: 107d7dc67; -[SCComposerFoundationActionSheetModel setModel:] */

void FUN_107d7dc38(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107d7dc68; end: 107d7dc6f; -[SCComposerFoundationActionSheetModel completion] */

undefined8 FUN_107d7dc68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d7dc70; end: 107d7dc77; -[SCComposerFoundationActionSheetModel setCompletion:] */

void FUN_107d7dc70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107d7dc78; end: 107d7dc7f; -[SCComposerFoundationActionSheetModel onClose] */

undefined8 FUN_107d7dc78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107d7dc80; end: 107d7dc87; -[SCComposerFoundationActionSheetModel setOnClose:] */

void FUN_107d7dc80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107d7dc88; end: 107d7dcc3; -[SCComposerFoundationActionSheetModel .cxx_destruct] */

void FUN_107d7dc88(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d7dcc4; end: 107d7dccb; -[SCComposerFoundationActionSheetHeaderModel model] */

undefined8 FUN_107d7dcc4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107d7dccc; end: 107d7dcfb; -[SCComposerFoundationActionSheetHeaderModel setModel:] */

void FUN_107d7dccc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107d7dcfc; end: 107d7dd03; -[SCComposerFoundationActionSheetHeaderModel completion] */

undefined8 FUN_107d7dcfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107d7dd04; end: 107d7dd0b; -[SCComposerFoundationActionSheetHeaderModel setCompletion:] */

void FUN_107d7dd04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107d7dd0c; end: 107d7dd3b; -[SCComposerFoundationActionSheetHeaderModel .cxx_destruct] */

void FUN_107d7dd0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d7dd3c; end: 107d7dd93; -[SCComposerFixedImageView initWithFrame:contentSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107d7dd3c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fafa0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276ebdc) = in_d4;
    ((undefined8 *)((long)puVar1 + (long)_DAT_11276ebdc))[1] = in_d5;
  }
  return;
}



/* Entry: 107d7dd94; end: 107d7dda7; -[SCComposerFixedImageView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107d7dd94(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11276ebdc);
}



/* Entry: 107d7dda8; end: 107d7de1f; -[SCComposerActionSheetDelegate initWithOnClose:] */

undefined1 * FUN_107d7dda8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fafa8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107d7de20; end: 107d7de33; -[SCComposerActionSheetDelegate actionSheetDidDismiss:] */

void FUN_107d7de20(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107d7de2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107d7de34; end: 107d7de3f; -[SCComposerActionSheetDelegate .cxx_destruct] */

void FUN_107d7de34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107d7de40; end: 107d7de97; -[SCComposerFoundationActionSheetController dismiss] */

void FUN_107d7de40(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107d7de98;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_38);
  return;
}



/* Entry: 107d7de98; end: 107d7df87;  */

void FUN_107d7de98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beeefc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beeefc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e2ec0();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107d7f670;
  puStack_50 = &UNK_110849530;
  uStack_48 = uVar4;
  _objc_retain();
  func_0x00010bf83000(uVar2,param_2,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c161dc0(*(undefined8 *)(param_1 + 0x20),param_2,0);
  return;
}



/* Entry: 107d7df88; end: 107d7e00f; -[SCComposerFoundationActionSheetController updateWithOptions:] */

void FUN_107d7df88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_107d7e010;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107d7e010; end: 107d7e1cf;  */

void FUN_107d7e010(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfb4220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0e2ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_107d7e1d0(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfdef60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0e2ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_107d7e2b4(uVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c084fc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107d7eb5c;
  puStack_50 = &UNK_110a0b978;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  uVar2 = uVar4;
  uStack_48 = uVar6;
  func_0x000100504554(uVar4,&puStack_68);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beeefc0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c0cfdc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1312e0(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}


