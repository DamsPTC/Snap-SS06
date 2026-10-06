/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106209b80; end: 106209b87; -[SCMainCameraScreenRouterImpl lensCarouselLayoutGuide] */

undefined8 FUN_106209b80(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 106209b88; end: 106209b8f; -[SCMainCameraScreenRouterImpl bottomMenuViewContainer] */

undefined8 FUN_106209b88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106209b90; end: 106209b97; -[SCMainCameraScreenRouterImpl miniCarouselActionBarContainer] */

undefined8 FUN_106209b90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106209b98; end: 106209b9f; -[SCMainCameraScreenRouterImpl memoriesButtonContainer] */

undefined8 FUN_106209b98(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 106209ba0; end: 106209ba7; -[SCMainCameraScreenRouterImpl alertDialogsUIContainer] */

undefined8 FUN_106209ba0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 106209ba8; end: 106209d1b; -[SCMainCameraScreenRouterImpl .cxx_destruct] */

void FUN_106209ba8(long param_1)

{
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 106209d1c; end: 106209d77; -[SCMiniCarouselTransitioningUIContainer detachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106209d1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010becf060(param_1,param_2,4);
  if ((int)lVar1 != 0) {
    func_0x00010bf6f440(*(undefined8 *)(param_1 + _DAT_11274344c),param_2,param_3);
    func_0x00010becf060(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106209d78; end: 106209d87; -[SCMiniCarouselTransitioningUIContainer isPresentedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106209d78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07ab30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274344c),PTR_s_isPresentedObservable_1125fc4d8);
  return;
}



/* Entry: 106209d88; end: 106209df7; -[SCMiniCarouselTransitioningUIContainer presentTransitioningUI] */

void FUN_106209d88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010becf060(param_1,param_2,1);
  if ((int)uVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106209df8;
    puStack_30 = &UNK_110842e18;
    uStack_28 = param_1;
    func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48);
  }
  return;
}



/* Entry: 106209df8; end: 106209e4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106209df8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112743458;
  func_0x00010bf17b00(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1),param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112743450),
             PTR_s_attachUI__1125a0c08,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
  return;
}



/* Entry: 106209e4c; end: 106209e9b; -[SCMiniCarouselTransitioningUIContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106209e4c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274344c,0);
  _objc_storeStrong(param_1 + _DAT_112743458,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112743450,0);
  return;
}



/* Entry: 106209e9c; end: 106209f17; -[SCMainCameraPresentationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106209e9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112743474,0);
  _objc_destroyWeak(param_1 + _DAT_112743470);
  _objc_destroyWeak(param_1 + _DAT_11274346c);
  _objc_destroyWeak(param_1 + _DAT_112743468);
  _objc_destroyWeak(param_1 + _DAT_112743464);
  _objc_destroyWeak(param_1 + _DAT_112743460);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274345c,0);
  return;
}



/* Entry: 106209f18; end: 106209f43; +[SCGrapheneLensViewsTrackerMetric loadError] */

void FUN_106209f18(void)

{
  _objc_alloc(PTR_PTR_1126c8e20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106209f44; end: 106209f6f; +[SCGrapheneLensViewsTrackerMetric tapError] */

void FUN_106209f44(void)

{
  _objc_alloc(PTR_PTR_1126c8e20);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106209f70; end: 10620a00f; -[SCGrapheneLensViewsTrackerMetric description] */

void FUN_106209f70(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e458d8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e458d8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f06e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10620a010; end: 10620a15b; -[SCGrapheneRegistry lensViewsTrackerGraphene] */

void FUN_10620a010(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10620a098;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c3470 != -1) {
    func_0x00010002a2fc(0x1136c3470,&puStack_48);
  }
  uVar1 = uRam00000001136c3468;
  _objc_retain(uRam00000001136c3468);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10620a15c; end: 10620a237; -[SCLensActionBarItem initWithData:position:dataObservable:visibleObservable:] */

undefined1 *
FUN_10620a15c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f06e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10620a238; end: 10620a23f; -[SCLensActionBarItem data] */

undefined8 FUN_10620a238(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10620a240; end: 10620a247; -[SCLensActionBarItem position] */

undefined8 FUN_10620a240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10620a248; end: 10620a24f; -[SCLensActionBarItem dataObservable] */

undefined8 FUN_10620a248(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10620a250; end: 10620a257; -[SCLensActionBarItem visibleObservable] */

undefined8 FUN_10620a250(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10620a258; end: 10620a293; -[SCLensActionBarItem .cxx_destruct] */

void FUN_10620a258(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10620a294; end: 10620a307; -[SCLensActionBarPluginScope initWithPlugInRegistry:] */

undefined1 * FUN_10620a294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f06f0;
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



/* Entry: 10620a308; end: 10620a30f; -[SCLensActionBarPluginScope plugInRegistry] */

undefined8 FUN_10620a308(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10620a310; end: 10620a31b; -[SCLensActionBarPluginScope .cxx_destruct] */

void FUN_10620a310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10620a31c; end: 10620a363; +[SCLensActionBarEvent didCollapse] */

void FUN_10620a31c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8e28;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10620a364; end: 10620a3af; +[SCLensActionBarEvent didExpand] */

void FUN_10620a364(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8e28;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10620a3b0; end: 10620a50f; -[SCLensActionBarEvent initWithCoder:] */

undefined8 * FUN_10620a3b0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_50 = PTR_PTR_1126f06f8;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) goto LAB_10620a49c;
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    puVar1[1] = uVar4;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_10620a49c:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10620a510; end: 10620a533; -[SCLensActionBarEvent copyWithZone:] */

undefined8 FUN_10620a510(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10620a534; end: 10620a593; -[SCLensActionBarEvent encodeWithCoder:] */

void FUN_10620a534(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e45938;
  }
  else {
    if (*(long *)(param_1 + 8) != 1) goto LAB_10620a584;
    ppuVar1 = &PTR____CFConstantStringClassReference_110e45958;
  }
  func_0x00010c14cb00(param_3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110db7018);
LAB_10620a584:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10620a594; end: 10620a59b; -[SCLensActionBarEvent hash] */

undefined8 FUN_10620a594(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10620a59c; end: 10620a5df; -[SCLensActionBarEvent internalInit] */

void FUN_10620a59c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f06f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10620a5e0; end: 10620a667; -[SCLensActionBarEvent isEqual:] */

bool FUN_10620a5e0(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10620a668; end: 10620a6df; -[SCLensActionBarEvent matchDidCollapse:didExpand:] */

void FUN_10620a668(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    lVar1 = param_4;
    if (param_4 == 0) goto LAB_10620a6b0;
  }
  else {
    lVar1 = param_3;
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10620a6b0;
  }
  (**(code **)(lVar1 + 0x10))();
LAB_10620a6b0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10620a6e0; end: 10620a7b7; -[SCLensActionBarItemData initWithCoder:] */

undefined1 * FUN_10620a6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0700;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10620a7b8; end: 10620a88f; -[SCLensActionBarItemData initWithIcon:bottomText:accessibility:] */

undefined1 *
FUN_10620a7b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f0700;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10620a890; end: 10620a8b3; -[SCLensActionBarItemData copyWithZone:] */

undefined8 FUN_10620a890(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10620a8b4; end: 10620a927; -[SCLensActionBarItemData encodeWithCoder:] */

void FUN_10620a8b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e45978);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e45998);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e459b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10620a928; end: 10620a9a7; -[SCLensActionBarItemData hash] */

undefined8 * FUN_10620a928(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10620aa40:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10620aa4c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10620aa4c;
          }
          goto LAB_10620aa40;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10620aa4c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10620a9a8; end: 10620aa67; -[SCLensActionBarItemData isEqual:] */

long FUN_10620a9a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10620aa40:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10620aa4c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10620aa4c;
          }
          goto LAB_10620aa40;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10620aa4c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10620aa68; end: 10620aa6f; -[SCLensActionBarItemData icon] */

undefined8 FUN_10620aa68(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10620aa70; end: 10620aa77; -[SCLensActionBarItemData bottomText] */

undefined8 FUN_10620aa70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10620aa78; end: 10620aa7f; -[SCLensActionBarItemData accessibility] */

undefined8 FUN_10620aa78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10620aa80; end: 10620aabb; -[SCLensActionBarItemData .cxx_destruct] */

void FUN_10620aa80(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10620aabc; end: 10620ab67; -[SCLensActionBarAccessibility initWithAccessibilityIdentifier:accessibilityValue:] */

undefined1 *
FUN_10620aabc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0708;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10620ab68; end: 10620ac17; -[SCLensActionBarAccessibility initWithCoder:] */

undefined1 * FUN_10620ab68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f0708;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10620ac18; end: 10620ac3b; -[SCLensActionBarAccessibility copyWithZone:] */

undefined8 FUN_10620ac18(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10620ac3c; end: 10620ac9b; -[SCLensActionBarAccessibility encodeWithCoder:] */

void FUN_10620ac3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e459d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e459f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10620ac9c; end: 10620ad0f; -[SCLensActionBarAccessibility hash] */

undefined8 * FUN_10620ac9c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10620ad90:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10620ad9c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10620ad9c;
        }
        goto LAB_10620ad90;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10620ad9c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10620ad10; end: 10620adb7; -[SCLensActionBarAccessibility isEqual:] */

long FUN_10620ad10(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10620ad90:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10620ad9c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10620ad9c;
        }
        goto LAB_10620ad90;
      }
    }
    lVar3 = 0;
  }
LAB_10620ad9c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10620adb8; end: 10620adbf; -[SCLensActionBarAccessibility accessibilityIdentifier] */

undefined8 FUN_10620adb8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10620adc0; end: 10620adc7; -[SCLensActionBarAccessibility accessibilityValue] */

undefined8 FUN_10620adc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10620adc8; end: 10620adf7; -[SCLensActionBarAccessibility .cxx_destruct] */

void FUN_10620adc8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10620adf8; end: 10620aecb; -[SCLensAutoCopyScope initWithLens:deepLink:lensAutoCopySource:delegate:] */

undefined1 *
FUN_10620adf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f0710;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10620aecc; end: 10620aed3; -[SCLensAutoCopyScope lens] */

undefined8 FUN_10620aecc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10620aed4; end: 10620aedb; -[SCLensAutoCopyScope deepLink] */

undefined8 FUN_10620aed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10620aedc; end: 10620aee3; -[SCLensAutoCopyScope lensAutoCopySource] */

undefined8 FUN_10620aedc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10620aee4; end: 10620aefb; -[SCLensAutoCopyScope delegate] */

void FUN_10620aee4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10620aefc; end: 10620af33; -[SCLensAutoCopyScope .cxx_destruct] */

void FUN_10620aefc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10620af34; end: 10620b00f; -[SCCameraToGalleryPresentationController initWithGradientColors:blurEffect:transitionOverlayIntroPoint:showsTopCorners:presentedViewController:presentingViewController:presentationStyle:presentingView:belowSubview:galleryViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10620af34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_1126f0718;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(param_1,puVar1,PTR_s_initWithGradientColors_blurEffec_11252fd40,param_4,
                      param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127434b4,param_12);
  }
  _objc_release(param_12);
  return puVar1;
}



/* Entry: 10620b010; end: 10620b09f; -[SCCameraToGalleryPresentationController presentationTransitionWillBegin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620b010(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0718;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_presentationTransitionWillBegin_1125283b8);
  func_0x00010becf3c0(param_1);
  lVar1 = param_1 + _DAT_1127434b4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10fd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29e780(lVar1);
  _objc_release(param_1);
  _objc_release(lVar1);
  return;
}



/* Entry: 10620b0a0; end: 10620b12f; -[SCCameraToGalleryPresentationController dismissalTransitionWillBegin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620b0a0(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0718;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dismissalTransitionWillBegin_1125283c0);
  func_0x00010becf3c0(param_1);
  lVar1 = param_1 + _DAT_1127434b4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10fd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29e880(lVar1);
  _objc_release(param_1);
  _objc_release(lVar1);
  return;
}



/* Entry: 10620b130; end: 10620b1cb; -[SCCameraToGalleryPresentationController presentationTransitionDidEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620b130(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0718;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_presentationTransitionDidEnd__1125283c8);
  lVar1 = param_1 + _DAT_1127434b4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10fd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c29c8c0(lVar1);
  }
  else {
    func_0x00010c29c720();
  }
  _objc_release(param_1);
  _objc_release(lVar1);
  return;
}



/* Entry: 10620b1cc; end: 10620b267; -[SCCameraToGalleryPresentationController dismissalTransitionDidEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620b1cc(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f0718;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dismissalTransitionDidEnd__11252fd48);
  lVar1 = param_1 + _DAT_1127434b4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10fd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    func_0x00010c29c720(lVar1);
  }
  else {
    func_0x00010c29c8c0();
  }
  _objc_release(param_1);
  _objc_release(lVar1);
  return;
}



/* Entry: 10620b268; end: 10620b3c7; -[SCCameraToGalleryPresentationController _transitionWillBegin:] */

void FUN_10620b268(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e45a18;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e45a38;
  }
  _objc_retain(ppuVar1);
  uStack_58 = 0x3ff0000000000000;
  if (param_3 != 1) {
    uStack_58 = 0;
  }
  uVar3 = param_1;
  func_0x00010c10f940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c27a780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10620b3c8;
  puStack_68 = &UNK_110916648;
  uStack_60 = param_1;
  func_0x00010bf02c20();
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c10fd00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c27a780();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = puVar2;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x10620b3e4;
  puStack_90 = &UNK_110870710;
  ppuStack_88 = ppuVar1;
  _objc_retain(ppuVar1);
  func_0x00010bf02c20(uVar3,param_2,0,&puStack_a8);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(ppuStack_88);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 10620b3c8; end: 10620b3eb;  */

void FUN_10620b3c8(long param_1,undefined8 param_2)

{
  if (*(double *)(param_1 + 0x28) != 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf02dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_animateDismissalCornerRoundingFo_11259e518);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf03050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_animatePresentationCornerRoundin_11259e5b8,
             param_2);
  return;
}



/* Entry: 10620b3ec; end: 10620b57b; -[SCCameraToGalleryPresentationController animatePresentationCornerRoundingForTransitionContext:] */

void FUN_10620b3ec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010c29c220(param_3,param_2,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c8e30;
  _objc_opt_class(PTR_PTR_1126c8e30);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar3 = param_3;
    func_0x00010c29c580();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
    _objc_opt_class(PTR__OBJC_CLASS___UIViewController_1126af898);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar3 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    if (uVar3 != 0) {
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4030000000000000);
      _objc_release(uVar5);
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_retain(uVar4);
      func_0x00010bf03420(0x3fd3333333333333,puVar2);
      _objc_release(uVar4);
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10620b57c; end: 10620b5b3;  */

void FUN_10620b57c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10620b5b4; end: 10620b8b3; -[SCCameraToGalleryPresentationController animateDismissalCornerRoundingForTransitionContext:] */

void FUN_10620b5b4(int param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  double dStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  double dStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  func_0x00010c232540();
  if (param_1 != 0) {
    lVar2 = param_3;
    func_0x00010c29c220(param_3,param_2,
                        *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf4b2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  lVar2 = param_3;
  func_0x00010c29c220(param_3,param_2,
                      *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29d0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf4b2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar6 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar12 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar11 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar10 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  dVar7 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  dVar8 = dVar7;
  uStack_80 = uVar6;
  uStack_78 = uVar9;
  uStack_70 = uVar11;
  uStack_68 = uVar12;
  dStack_60 = dVar7;
  uStack_58 = uVar10;
  func_0x00010c219960(lVar3,param_2,&uStack_80);
  func_0x00010c148fc0(lVar3);
  if (dVar8 != 0.0) {
    lVar2 = lVar3;
    func_0x00010c0bc260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x00010bf20c00(lVar3);
      func_0x00010c013de0(puVar4);
      func_0x00010c1c2ca0(lVar3,param_2,puVar4);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c0bc260(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440();
      _objc_release(lVar2);
      _objc_release(puVar4);
    }
  }
  lVar2 = lVar3;
  func_0x00010c0bc260(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = uVar6;
  uStack_78 = uVar9;
  uStack_70 = uVar11;
  uStack_68 = uVar12;
  dStack_60 = dVar7;
  uStack_58 = uVar10;
  func_0x00010c219960();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c0bc260(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0);
  _objc_release(lVar5);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10620b8b4;
  puStack_98 = &UNK_110848c48;
  _objc_retain(lVar3);
  puStack_d8 = puVar4;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_10620ba14;
  puStack_c0 = &UNK_110841f20;
  lStack_b8 = lVar3;
  lStack_90 = lVar3;
  dStack_88 = dVar8;
  _objc_retain(lVar3);
  func_0x00010bf02ee0(0,0,puVar1,param_2,0,&puStack_b0,&puStack_d8);
  _objc_release(lStack_b8);
  _objc_release(lStack_90);
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 10620b8b4; end: 10620ba13;  */

void FUN_10620b8b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10620b94c;
  puStack_48 = &UNK_110848c48;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar2;
  func_0x00010bef95a0(0,0x3fa999999999999a,puVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  return;
}



/* Entry: 10620ba14; end: 10620ba1f;  */

void FUN_10620ba14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c2cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setMaskView__11264e550,0);
  return;
}



/* Entry: 10620ba20; end: 10620ba63; -[SCCameraToGalleryPresentationController shouldRemovePresentersView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10620ba20(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127434b4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cfbe0();
  _objc_release(param_1);
  return lVar1 == 0;
}



/* Entry: 10620ba64; end: 10620ba83; -[SCCameraToGalleryPresentationController galleryViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620ba64(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127434b4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10620ba84; end: 10620ba93; -[SCCameraToGalleryPresentationController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620ba84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127434b4);
  return;
}



/* Entry: 10620ba94; end: 10620bac7;  */

void FUN_10620ba94(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be891c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10620bac8; end: 10620bb77; -[SCCameraToGallerySwipeTransitionCoordinator dismiss:completion:] */

void FUN_10620bac8(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar1 = 0x3fc999999999999a;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10620bb78;
  puStack_50 = &UNK_110849530;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010bf84b40(uVar1,param_1,param_2,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10620bb78; end: 10620bb8b;  */

void FUN_10620bb78(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010620bb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10620bb8c; end: 10620bcbf; -[SCCameraToGallerySwipeTransitionCoordinator present:launchSnapFeed:completion:] */

void FUN_10620bb8c(ulong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  uVar2 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf643e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c10f9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  uVar3 = 0x3fc999999999999a;
  if (param_3 == 0) {
    uVar3 = 0;
  }
  _objc_retain(param_5);
  func_0x00010c10edc0(uVar3,param_1);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(uVar2);
  return;
}



/* Entry: 10620bcc0; end: 10620bcd3;  */

void FUN_10620bcc0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010620bccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10620bcd4; end: 10620bd2b; -[SCCameraToGallerySwipeTransitionCoordinator requestToPresentMemories:openSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620bcd4(long param_1)

{
  param_1 = param_1 + _DAT_1127434c8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c152480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10620bd2c; end: 10620bd8f; -[SCCameraToGallerySwipeTransitionCoordinator scrollToSpectacles] */

void FUN_10620bd2c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar1);
  func_0x00010bfbde40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1527c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10620bd90; end: 10620bdf3; -[SCCameraToGallerySwipeTransitionCoordinator scrollToFeatured] */

void FUN_10620bd90(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar1);
  func_0x00010bfbde40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1527c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10620bdf4; end: 10620be57; -[SCCameraToGallerySwipeTransitionCoordinator scrollToScreenshots] */

void FUN_10620bdf4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar1);
  func_0x00010bfbde40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10620be58; end: 10620bea7; -[SCCameraToGallerySwipeTransitionCoordinator scrollToCameraRollWithAssetIdentifier:] */

void FUN_10620be58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bfbde40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152340();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10620bea8; end: 10620bf1f; -[SCCameraToGallerySwipeTransitionCoordinator browseCameraRollAssetInOpera:] */

void FUN_10620bea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfbde40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152320();
  _objc_release(uVar1);
  func_0x00010bfbde40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf214e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10620bf20; end: 10620bfcb; -[SCCameraToGallerySwipeTransitionCoordinator presentBrowsingCameraRollAssetInOpera:] */

void FUN_10620bf20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf643e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c10f9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfbde40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf214e0();
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x00010c10edc0(0x3fc999999999999a,param_1,param_2,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10620bfcc; end: 10620c02f; -[SCCameraToGallerySwipeTransitionCoordinator openQuickCut] */

void FUN_10620bfcc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar1);
  func_0x00010bfbde40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10620c030; end: 10620c127; -[SCCameraToGallerySwipeTransitionCoordinator scrollToDreamsTabWithSnapIds:generationIds:notificationId:notificationType:dreamsPackId:] */

void FUN_10620c030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6b08;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar1);
  func_0x00010bfbde40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c152380();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10620c128; end: 10620c133; -[SCCameraToGallerySwipeTransitionCoordinator passthroughViews] */

undefined * FUN_10620c128(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 10620c134; end: 10620c13f; -[SCCameraToGallerySwipeTransitionCoordinator defaultSwipeInteractionAnimationDuration] */

undefined8 FUN_10620c134(void)

{
  return 0x3fc999999999999a;
}



/* Entry: 10620c140; end: 10620c147; -[SCCameraToGallerySwipeTransitionCoordinator presentedViewControllerWithSwipeTransitionCoordinator:] */

void FUN_10620c140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7f930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentedViewControllerWithSwip_11257d7e8,param_3,0);
  return;
}



/* Entry: 10620c148; end: 10620c1d3; -[SCCameraToGallerySwipeTransitionCoordinator presentedViewControllerWithSwipeTransitionCoordinator:shouldLaunchSnapFeed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620c148(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if ((int)param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127434dc);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf808a0();
    param_4 = (ulong)((uint)uVar2 ^ 1);
    _objc_release(uVar1);
  }
  func_0x00010be7f920(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10620c1d4; end: 10620c30b; -[SCCameraToGallerySwipeTransitionCoordinator _presentedViewControllerWithSwipeTransitionCoordinator:shouldLaunchSnapFeed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620c1d4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126c8e30;
  _objc_alloc(PTR_PTR_1126c8e30);
  lVar2 = param_1;
  func_0x00010bfbde40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0402e0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  puVar3 = puVar1;
  func_0x00010c0d6280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c29bf00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (param_4 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127434d8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbde40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08bd60(uVar6,param_2,param_1);
    _objc_release(param_1);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10620c30c; end: 10620c32b; -[SCCameraToGallerySwipeTransitionCoordinator presentingViewControllerWithSwipeTransitionCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620c30c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127434bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10620c32c; end: 10620c43f; -[SCCameraToGallerySwipeTransitionCoordinator transitionCoordinator:presentationControllerForPresentedViewController:presentingViewController:] */

void FUN_10620c32c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010bfbde40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_opt_class(PTR__OBJC_CLASS___UIViewController_1126af898);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c8e38;
  _objc_alloc(PTR_PTR_1126c8e38);
  uVar5 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c017e00(0x3fdccccccccccccd,puVar3);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar5);
  func_0x00010be891c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10620c440; end: 10620c483; -[SCCameraToGallerySwipeTransitionCoordinator percentVisible] */

undefined8 FUN_10620c440(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c068d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7ce0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10620c484; end: 10620c4a3; -[SCCameraToGallerySwipeTransitionCoordinator shouldSetPresentedViewControllerAfterTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620c484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127434d4),
             PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e45af8,0,0);
  return;
}



/* Entry: 10620c4a4; end: 10620c4eb; -[SCCameraToGallerySwipeTransitionCoordinator _shouldPresentMemTwoLandingPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10620c4a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127434e0);
  func_0x00010c0c7640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c7600();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10620c4ec; end: 10620c58f; -[SCCameraToGallerySwipeTransitionCoordinator _installMemTwoDebugToggleOn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620c4ec(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar2 = *(ulong *)(param_1 + _DAT_1127434dc);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c75e0();
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126c8e40;
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + _DAT_1127434e0);
      func_0x00010c0c7640(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067920(puVar1,param_2,param_3,uVar4);
      _objc_release(uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10620c590; end: 10620c903; -[SCCameraToGallerySwipeTransitionCoordinator galleryViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10620c590(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar5 = param_1;
  func_0x00010beb4e40();
  if ((int)lVar5 == 0) {
    lVar7 = (long)_DAT_1127434c0;
    lVar5 = param_1 + lVar7;
    _objc_loadWeakRetained();
    lVar8 = lVar5;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    if (lVar8 != 0) {
      lVar5 = *(long *)(param_1 + _DAT_1127434e8);
      goto LAB_10620c6e4;
    }
    lVar8 = (long)_DAT_1127434d0;
    func_0x00010c291fc0(*(undefined8 *)(param_1 + lVar8));
    _objc_initWeak(auStack_78,param_1);
    puVar1 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10620c95c;
    puStack_b0 = &UNK_110849680;
    _objc_copyWeak(auStack_a8,auStack_78);
    _objc_copyWeak(auStack_d0,auStack_78);
    func_0x00010c0311a0(puVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0(PTR_PTR_1126ae720);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127434c4);
    lVar5 = param_1 + _DAT_1127434c8;
    _objc_loadWeakRetained(lVar5);
    func_0x00010bf245a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010c0652e0(*(undefined8 *)(param_1 + lVar8));
    lVar7 = param_1 + lVar7;
    _objc_loadWeakRetained(lVar7);
    func_0x00010bf9d620();
    _objc_release(lVar7);
    lVar5 = (long)_DAT_1127434e8;
    if (*(char *)(param_1 + _DAT_1127434b8) == '\x01') {
      func_0x00010c1c8b80(*(undefined8 *)(param_1 + lVar5));
    }
    lVar5 = *(long *)(param_1 + lVar5);
    _objc_retain(lVar5);
    _objc_release(uVar6);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_d0);
    puVar3 = auStack_a8;
  }
  else {
    lVar7 = (long)_DAT_1127434e8;
    lVar5 = *(long *)(param_1 + lVar7);
    if (lVar5 != 0) {
LAB_10620c6e4:
      _objc_retain(lVar5);
      goto LAB_10620c898;
    }
    func_0x00010c291fc0(*(undefined8 *)(param_1 + _DAT_1127434d0));
    _objc_initWeak(auStack_78,param_1);
    uVar6 = *(undefined8 *)(param_1 + _DAT_1127434e4);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10620c904;
    puStack_88 = &UNK_1108434b0;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010bf23080();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = uVar6;
    _objc_release(uVar4);
    if (*(char *)(param_1 + _DAT_1127434b8) == '\x01') {
      func_0x00010c1c8b80(*(undefined8 *)(param_1 + lVar7));
    }
    func_0x00010be3cd40(param_1);
    lVar5 = *(long *)(param_1 + lVar7);
    _objc_retain(lVar5);
    puVar3 = auStack_80;
  }
  _objc_destroyWeak(puVar3);
  _objc_destroyWeak(auStack_78);
LAB_10620c898:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}


