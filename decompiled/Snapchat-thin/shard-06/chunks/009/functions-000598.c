/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f74d48; end: 104f74d77; -[SCFriendsFeedSnapBackPagingGateLayer .cxx_destruct] */

void FUN_104f74d48(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f74d78; end: 104f74dcf; -[SCFriendsFeedSnapBackPagingGateLayerViewController loadView] */

void FUN_104f74d78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c21e900();
  func_0x00010c222380(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f74dd0; end: 104f74e9f; -[SCFriendsFeedSnapBackPagingGateLayerViewController viewWillAppear:] */

void FUN_104f74dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126e5440;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_viewWillAppear__1126853f0);
  uVar1 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 104f74ea0; end: 104f74ea7; -[SCFriendsFeedSnapBackPagingGateLayerViewController layerViewContainerOption] */

undefined8 FUN_104f74ea0(void)

{
  return 2;
}



/* Entry: 104f74ea8; end: 104f74f07; -[SCFriendsFeedSnapBackPagingGateLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

undefined8 FUN_104f74ea8(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  if ((param_3 == 5) && (func_0x00010beb2b00(), (param_1 & 1) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 104f74f08; end: 104f74fab; -[SCFriendsFeedSnapBackPagingGateLayerViewController didTryPagingWhenPagingDisabled:] */

void FUN_104f74f08(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if ((param_3 == 5) && (lVar1 = param_1, func_0x00010beb2b00(), (int)lVar1 != 0)) {
    lVar1 = param_1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e2b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010c0f0be0(param_1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,param_1);
      _objc_release(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 104f74fac; end: 104f7503f; -[SCFriendsFeedSnapBackPagingGateLayerViewController _shouldBlockSnapBackPaging] */

long FUN_104f74fac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c22e3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010c0f0be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (**(code **)(lVar1 + 0x10))(lVar1,param_1);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 104f75040; end: 104f750d7; -[SCFriendsFeedSnapBackPlugin initWithConversationStateProvider:] */

undefined1 * FUN_104f75040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5448;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f750d8; end: 104f75107; -[SCFriendsFeedSnapBackPlugin setPlaylistItemController:] */

void FUN_104f750d8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104f75108; end: 104f75137; -[SCFriendsFeedSnapBackPlugin setOperaControlling:] */

void FUN_104f75108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f75138; end: 104f7513b; -[SCFriendsFeedSnapBackPlugin extraPropertiesProvider] */

void FUN_104f75138(void)

{
  return;
}



/* Entry: 104f7513c; end: 104f7548f; -[SCFriendsFeedSnapBackPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

ulong FUN_104f7513c(ulong param_1,undefined *param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,long param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b2c68;
  if (param_6 != 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    uVar9 = param_3;
    if ((uVar2 & 1) == 0) {
      uVar9 = 0;
    }
    _objc_retain(uVar9);
    _objc_release(param_3);
    uVar2 = uVar9;
    func_0x00010c0cb140(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0cb5a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010be5d6e0(param_1);
    uVar2 = param_1;
    func_0x00010be41ec0();
    if ((uVar2 & 1) == 0) {
      param_2 = (undefined *)0x0;
      (**(code **)(param_6 + 0x10))(param_6,0,0);
    }
    else {
      _objc_initWeak(auStack_c0,param_1);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_104f75490;
      puStack_d0 = &UNK_11085e8e8;
      _objc_copyWeak(auStack_c8,auStack_c0);
      ppuVar4 = &puStack_e8;
      func_0x00010bf51e00();
      puStack_110 = puVar1;
      uStack_108 = 0xc2000000;
      pcStack_100 = FUN_104f754fc;
      puStack_f8 = &UNK_11085e918;
      _objc_copyWeak(auStack_f0,auStack_c0);
      ppuVar5 = &puStack_110;
      func_0x00010bf51e00();
      ppuStack_b0 = &PTR____CFConstantStringClassReference_110f0e2d8;
      puVar1 = PTR_PTR_1126b2cd8;
      _objc_opt_class();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_b8 = puVar1;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_a8 = &PTR____CFConstantStringClassReference_110dbd7f8;
      ppuVar7 = ppuVar4;
      puStack_98 = puVar6;
      _objc_retainBlock();
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110dbd818;
      ppuVar8 = ppuVar5;
      ppuStack_90 = ppuVar7;
      _objc_retainBlock();
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_88 = ppuVar8;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      param_2 = puVar1;
      (**(code **)(param_6 + 0x10))(param_6,puVar1,0);
      _objc_release(puVar1);
      _objc_release(ppuVar8);
      _objc_release(ppuVar7);
      _objc_release(puVar6);
      _objc_release(ppuVar5);
      _objc_destroyWeak(auStack_f0);
      _objc_release(ppuVar4);
      _objc_destroyWeak(auStack_c8);
      _objc_destroyWeak(auStack_c0);
    }
    _objc_release(uVar3);
    _objc_release(uVar9);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_c0);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = param_3;
    func_0x00010be41620(param_3);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar9;
}



/* Entry: 104f75490; end: 104f754fb;  */

long FUN_104f75490(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010be41620(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return lVar1;
}



/* Entry: 104f754fc; end: 104f7554b;  */

void FUN_104f754fc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be30600(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f7554c; end: 104f75607; -[SCFriendsFeedSnapBackPlugin registeredEventsForOperaSession] */

void FUN_104f7554c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2ce8;
  func_0x00010c23f4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2ce8;
  puStack_48 = puVar1;
  func_0x00010c23f4c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &puStack_48;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  puVar2 = PTR_PTR_1126b2ce8;
  func_0x00010c23f4a0(PTR_PTR_1126b2ce8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar5;
  func_0x00010c0720c0(ppuVar5,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)ppuVar4 == 0) {
    puVar2 = PTR_PTR_1126b2ce8;
    func_0x00010c23f4c0(PTR_PTR_1126b2ce8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar5;
    func_0x00010c0720c0(ppuVar5,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)ppuVar4 != 0) {
      func_0x00010be036c0(puVar1);
    }
  }
  else {
    func_0x00010be30620(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 104f75608; end: 104f756bb; -[SCFriendsFeedSnapBackPlugin operaViewDidSendEvent:page:params:] */

void FUN_104f75608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2ce8;
  func_0x00010c23f4a0(PTR_PTR_1126b2ce8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126b2ce8;
    func_0x00010c23f4c0(PTR_PTR_1126b2ce8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 != 0) {
      func_0x00010be036c0(param_1);
    }
  }
  else {
    func_0x00010be30620(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f756bc; end: 104f75833; -[SCFriendsFeedSnapBackPlugin _handleSnapBackActionInitiatedForPage:] */

void FUN_104f756bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf99b80();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x28) == 0)) {
    *(undefined8 *)(param_1 + 0x28) = 1;
    uVar2 = param_1;
    func_0x00010be41620();
    if ((uVar2 & 1) != 0) {
      uVar2 = param_3;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar4 = PTR_PTR_1126b2390;
      _objc_opt_class(PTR_PTR_1126b2390);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      uVar2 = uVar3;
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar3);
      uVar3 = uVar2;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = uVar3;
      func_0x00010c07c500();
      _objc_release(uVar3);
      if ((uVar2 & 1) != 0) {
        func_0x00010be6e200(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126b2ce8;
        func_0x00010c23f4e0(PTR_PTR_1126b2ce8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7c0(lVar1);
        _objc_release(puVar4);
        _objc_release(param_1);
        goto LAB_104f75814;
      }
    }
    func_0x00010be036c0(param_1);
  }
LAB_104f75814:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f75834; end: 104f758fb; -[SCFriendsFeedSnapBackPlugin _optionalEventParamsForPage:] */

void FUN_104f75834(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be4afe0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b2cf0;
    func_0x00010c23f540();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &lStack_40;
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_40 = param_1;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    plVar2 = param_3;
    func_0x00010c08fa60();
    if (plVar2 == (long *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x18);
      func_0x00010c101440();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar4 = *(undefined **)(param_1 + 0x18);
        func_0x00010bf63e60();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126b2c68;
        _objc_opt_class(PTR_PTR_1126b2c68);
        puVar5 = puVar4;
        _objc_opt_isKindOfClass(puVar4,puVar8);
        puVar1 = puVar4;
        if (((ulong)puVar5 & 1) == 0) {
          puVar1 = (undefined *)0x0;
        }
        _objc_retain(puVar1);
        _objc_release(puVar4);
        puVar5 = puVar1;
        func_0x00010c0cb140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar8 = (undefined *)0x0;
        if (puVar5 != (undefined *)0x0) {
          puVar8 = puVar1;
          func_0x00010c0cb140(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar8;
          FUN_104f75a88();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          puVar4 = puVar5;
          func_0x00010c0c45e0(puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          func_0x00010c242120();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf07ea0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar4);
          _objc_release(puVar5);
        }
        _objc_release(puVar1);
      }
      _objc_release(lVar3);
    }
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 104f758fc; end: 104f75a87; -[SCFriendsFeedSnapBackPlugin _lensIdForSnapBackActionForPage:] */

void FUN_104f758fc(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar8 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar8 = 0;
    }
    else {
      uVar3 = *(ulong *)(param_1 + 0x18);
      func_0x00010bf63e60();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b2c68;
      _objc_opt_class(PTR_PTR_1126b2c68);
      uVar8 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      uVar1 = uVar3;
      if ((uVar8 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar3);
      uVar3 = uVar1;
      func_0x00010c0cb140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar8 = 0;
      if (uVar3 != 0) {
        uVar8 = uVar1;
        func_0x00010c0cb140(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar8;
        FUN_104f75a88();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        uVar5 = uVar3;
        func_0x00010c0c45e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c242120();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf07ea0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar3);
      }
      _objc_release(uVar1);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 104f75a88; end: 104f75b8f;  */

void FUN_104f75a88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104f76160;
  uStack_40 = 0x104f76170;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010c0cb340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bfe80();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f75b90; end: 104f75f0b; -[SCFriendsFeedSnapBackPlugin _isLastItemInPlaybackEligibleForSnapBack:] */

ulong FUN_104f75b90(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x18) != 0) {
    _os_unfair_lock_lock(param_1 + 0x10);
    bVar1 = *(byte *)(param_1 + 0x38);
    _os_unfair_lock_unlock(param_1 + 0x10);
    if ((bVar1 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      func_0x00010c101260();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf5ee40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf5f0a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_3;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c08fa60();
      if (lVar6 == 0) {
        uVar17 = 0;
      }
      else {
        uVar7 = *(ulong *)(param_1 + 0x18);
        func_0x00010c101440();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = 0;
        if ((((lVar2 != 0) && (lVar3 != 0)) && (lVar4 != 0)) && (uVar7 != 0)) {
          uVar8 = uVar7;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar4;
          func_0x00010be36bc0(lVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar8;
          func_0x00010c0720c0();
          _objc_release(lVar6);
          _objc_release(uVar8);
          if ((int)uVar17 != 0) {
            lVar6 = lVar3;
            func_0x00010c084fc0();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar6;
            func_0x00010c089820();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar6);
            lVar6 = lVar2;
            func_0x00010bfce580();
            _objc_retainAutoreleasedReturnValue();
            if (lVar6 == 0) {
              lVar6 = lVar9;
              func_0x00010be36bc0();
              _objc_retainAutoreleasedReturnValue();
              lVar10 = lVar4;
              func_0x00010be36bc0(lVar4);
              _objc_retainAutoreleasedReturnValue();
              lVar11 = lVar6;
              func_0x00010c0720c0();
              _objc_release(lVar10);
              _objc_release(lVar6);
              if ((int)lVar11 == 0) {
                uVar17 = 0;
              }
              else {
                uVar12 = *(ulong *)(param_1 + 0x18);
                func_0x00010bf63e60();
                _objc_retainAutoreleasedReturnValue();
                puVar13 = PTR_PTR_1126b2c68;
                _objc_opt_class(PTR_PTR_1126b2c68);
                uVar17 = uVar12;
                _objc_opt_isKindOfClass(uVar12,puVar13);
                uVar8 = uVar12;
                if ((uVar17 & 1) == 0) {
                  uVar8 = 0;
                }
                _objc_retain(uVar8);
                _objc_release(uVar12);
                if (uVar8 == 0) {
LAB_104f75e4c:
                  uVar17 = 0;
                }
                else {
                  uVar17 = uVar12;
                  func_0x00010c0cb140();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (uVar17 == 0) goto LAB_104f75e4c;
                  func_0x00010c0cb140(uVar12);
                  _objc_retainAutoreleasedReturnValue();
                  uVar14 = uVar12;
                  func_0x00010c0cb5a0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar12);
                  lVar6 = param_1;
                  func_0x00010be41ec0();
                  if ((int)lVar6 == 0) {
                    uVar17 = 0;
                  }
                  else {
                    _os_unfair_lock_lock(param_1 + 0x10);
                    uVar15 = *(undefined8 *)(param_1 + 8);
                    func_0x00010bf51e00();
                    _os_unfair_lock_unlock(param_1 + 0x10);
                    uVar17 = *(ulong *)(param_1 + 0x30);
                    func_0x00010bf744a0();
                    if ((uVar17 & 1) == 0) {
                      uVar17 = *(ulong *)(param_1 + 0x30);
                      func_0x00010bf74480();
                      if ((uVar17 & 1) != 0) goto LAB_104f75e34;
                      uVar16 = *(undefined8 *)(param_1 + 0x30);
                      func_0x00010bfdde60(uVar16);
                      uVar17 = (ulong)((uint)uVar16 ^ 1);
                    }
                    else {
LAB_104f75e34:
                      uVar17 = 0;
                    }
                    _objc_release(uVar15);
                  }
                  _objc_release(uVar14);
                }
                _objc_release(uVar8);
              }
            }
            else {
              uVar17 = 0;
            }
            _objc_release();
            _objc_release(lVar9);
          }
        }
        _objc_release(uVar7);
      }
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      goto LAB_104f75ecc;
    }
  }
  uVar17 = 0;
LAB_104f75ecc:
  _objc_release(param_3);
  return uVar17;
}



/* Entry: 104f75f0c; end: 104f7605f; -[SCFriendsFeedSnapBackPlugin _markPlaybackItemAsSnapBackEligibleIfNeeded:] */

void FUN_104f75f0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_104f76014;
  uVar1 = param_3;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) goto LAB_104f76014;
  uVar1 = param_3;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  if (uVar3 != 0) {
    uVar3 = uVar1;
    FUN_104f75a88();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x00010c0bc340();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c08fa60();
      _objc_release(uVar4);
      if (uVar5 == 0) {
        uVar4 = param_1;
        func_0x00010be41ec0(param_1,param_2,uVar2);
        if (((uVar4 & 1) != 0) || (uVar4 = uVar3, func_0x00010bfd4a20(), (uVar4 & 1) != 0))
        goto LAB_104f75ffc;
        _os_unfair_lock_lock(param_1 + 0x10);
        func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,uVar2);
      }
      else {
        _os_unfair_lock_lock(param_1 + 0x10);
        *(undefined1 *)(param_1 + 0x38) = 1;
      }
      _os_unfair_lock_unlock(param_1 + 0x10);
    }
LAB_104f75ffc:
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_104f76014:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f76060; end: 104f760e3; -[SCFriendsFeedSnapBackPlugin _isMessageEligibleForSnapBack:] */

undefined8 FUN_104f76060(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf4b900(uVar2,param_2,param_3);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 104f760e4; end: 104f760fb; -[SCFriendsFeedSnapBackPlugin _handleSnapBackActionStarted] */

void FUN_104f760e4(long param_1)

{
  if (*(long *)(param_1 + 0x28) == 1) {
    *(undefined8 *)(param_1 + 0x28) = 2;
  }
  return;
}



/* Entry: 104f760fc; end: 104f76117; -[SCFriendsFeedSnapBackPlugin _dismissSnapBackAction] */

void FUN_104f760fc(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bf83ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b2cd0,PTR_s_dismissIfAllowedWithOperaControl_1125be850,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104f76118; end: 104f7615f; -[SCFriendsFeedSnapBackPlugin .cxx_destruct] */

void FUN_104f76118(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f76160; end: 104f76177;  */

void FUN_104f76160(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f76178; end: 104f761af;  */

void FUN_104f76178(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f761b0; end: 104f761b7;  */

void FUN_104f761b0(void)

{
  return;
}



/* Entry: 104f761b8; end: 104f7623b; -[SCMessagingPlaybackGrapheneLogger initWithMessagingPlaybackGraphene:source:] */

undefined1 *
FUN_104f761b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e5450;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f7623c; end: 104f762af; -[SCMessagingPlaybackGrapheneLogger logViewAttempt] */

void FUN_104f7623c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2cf8;
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x00010bfac180(PTR_PTR_1126b2cf8);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_1 + 0x10) == 1) {
    func_0x00010bf37980(PTR_PTR_1126b2cf8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f762b0; end: 104f76323; -[SCMessagingPlaybackGrapheneLogger logViewComplete] */

void FUN_104f762b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2cf8;
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x00010bfac1a0(PTR_PTR_1126b2cf8);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_1 + 0x10) == 1) {
    func_0x00010bf379a0(PTR_PTR_1126b2cf8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f76324; end: 104f76433; -[SCMessagingPlaybackGrapheneLogger logViewFailureWithReason:prefix:] */

void FUN_104f76324(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b2cf8;
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x00010bfac1c0(PTR_PTR_1126b2cf8);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_1 + 0x10) == 1) {
    func_0x00010bf37a20(PTR_PTR_1126b2cf8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  FUN_104f76434(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf558,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_3);
  puVar2 = puVar1;
  if (param_4 != 0) {
    func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dbd9d8,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f76434; end: 104f7645b;  */

undefined ** FUN_104f76434(long param_1)

{
  if (param_1 - 1U < 0xd) {
    return (undefined **)(&PTR_PTR_11085e988)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dabe78;
}



/* Entry: 104f7645c; end: 104f76523; -[SCMessagingPlaybackGrapheneLogger logPlaybackUnableToPresentWithReason:] */

void FUN_104f7645c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b2cf8;
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x00010bfac0e0(PTR_PTR_1126b2cf8);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_1 + 0x10) == 1) {
    func_0x00010bf37920(PTR_PTR_1126b2cf8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  if (param_3 - 1U < 7) {
    ppuVar2 = (undefined **)(&PTR_PTR_11085e9f0)[param_3 - 1U];
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dbd9f8;
  }
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daf558,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f76524; end: 104f76667; -[SCMessagingPlaybackGrapheneLogger logMediaPrepLatencyWithTotalDurationMS:imageCreationLatencyMS:mainThreadHopLatencyMS:] */

void FUN_104f76524(double param_1,double param_2,double param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126b2cf8;
  if (*(long *)(param_4 + 0x10) == 0) {
    func_0x00010bfabe40(PTR_PTR_1126b2cf8);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_4 + 0x10) == 1) {
    func_0x00010bf36d00(PTR_PTR_1126b2cf8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  puVar1 = puVar4;
  func_0x00010c2ac460(puVar4,param_5,&PTR____CFConstantStringClassReference_110dbdaf8,
                      &PTR____CFConstantStringClassReference_110dbdb18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0(*(undefined8 *)(param_4 + 8),param_5,puVar1,(long)param_2);
  puVar2 = puVar4;
  func_0x00010c2ac460(puVar4,param_5,&PTR____CFConstantStringClassReference_110dbdaf8,
                      &PTR____CFConstantStringClassReference_110dbdb38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0(*(undefined8 *)(param_4 + 8),param_5,puVar2,(long)param_3);
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_5,&PTR____CFConstantStringClassReference_110dbdaf8,
                      &PTR____CFConstantStringClassReference_110dbdb58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0(*(undefined8 *)(param_4 + 8),param_5,puVar3,(long)param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104f76668; end: 104f7671f; -[SCMessagingPlaybackGrapheneLogger logMediaPrepLatencyWithTotalDurationMS:] */

void FUN_104f76668(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b2cf8;
  if (*(long *)(param_2 + 0x10) == 0) {
    func_0x00010bfabe40(PTR_PTR_1126b2cf8);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_2 + 0x10) == 1) {
    func_0x00010bf36d00(PTR_PTR_1126b2cf8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110dbdaf8,
                      &PTR____CFConstantStringClassReference_110dbdb58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0(*(undefined8 *)(param_2 + 8),param_3,puVar1,(long)param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104f76720; end: 104f7688b; -[SCMessagingPlaybackGrapheneLogger logSnapTapLatency:] */

/* WARNING: Possible PIC construction at 0x000104f76768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104f76794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104f767c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104f767ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104f76818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104f76844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104f7681c) */
/* WARNING: Removing unreachable block (ram,0x000104f767f0) */
/* WARNING: Removing unreachable block (ram,0x000104f767c4) */
/* WARNING: Removing unreachable block (ram,0x000104f76798) */
/* WARNING: Removing unreachable block (ram,0x000104f7676c) */
/* WARNING: Removing unreachable block (ram,0x000104f76848) */

void FUN_104f76720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c243640(param_4);
  uVar1 = param_1;
  func_0x00010c0eb420(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010be59a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,uVar1,param_2,PTR_s__logTapToOperaStepMetric_startTi_112574038,
             &PTR____CFConstantStringClassReference_110dbdb78);
  return;
}



/* Entry: 104f7688c; end: 104f76933; -[SCMessagingPlaybackGrapheneLogger _logTapToOperaStepMetric:startTime:endTime:] */

void FUN_104f7688c(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2cf8;
  if (*(long *)(param_3 + 0x10) != 0) {
    return;
  }
  _objc_retain(param_5);
  func_0x00010bfac0a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar1);
  func_0x00010befc000(param_2 - param_1,*(undefined8 *)(param_3 + 8),param_4,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104f76934; end: 104f76ac3; -[SCMessagingPlaybackGrapheneLogger logMediaPrepareWithType:success:failureReason:durationMs:] */

void FUN_104f76934(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126b2cf8;
  if (*(long *)(param_2 + 0x10) == 0) {
    func_0x00010bfabec0(PTR_PTR_1126b2cf8);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_2 + 0x10) == 1) {
    func_0x00010bf37200(PTR_PTR_1126b2cf8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  if (param_4 - 1U < 3) {
    ppuVar3 = (undefined **)(&PTR_PTR_11085ea28)[param_4 - 1U];
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dbdc58;
  }
  puVar1 = puVar4;
  func_0x00010c2ac460(puVar4,param_3,&PTR____CFConstantStringClassReference_110dad058,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110dab0d8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  puVar4 = puVar2;
  if (((int)param_5 == 0) || (param_6 != 0)) {
    FUN_104f76434(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110dbdcd8,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(param_6);
  }
  func_0x00010befbfe0(*(undefined8 *)(param_2 + 8),param_3,puVar4,(long)param_1);
  func_0x00010bfec2a0(*(undefined8 *)(param_2 + 8),param_3,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104f76ac4; end: 104f76b07; -[SCMessagingPlaybackGrapheneLogger logSnapZoom] */

void FUN_104f76ac4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2cf8;
  func_0x00010c244020(PTR_PTR_1126b2cf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f76b08; end: 104f76c7f; -[SCMessagingPlaybackGrapheneLogger logMediaIdMissingForMessageBodyType:mediaType:isQuoted:] */

void FUN_104f76b08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b2cf8;
  func_0x00010c0c51e0(PTR_PTR_1126b2cf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dbdcf8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110db9478,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbdd18,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104f76c80; end: 104f76c8b; -[SCMessagingPlaybackGrapheneLogger .cxx_destruct] */

void FUN_104f76c80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f76c8c; end: 104f76da3;  */

void FUN_104f76c8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104f76da4;
  uStack_30 = 0x104f76db4;
  uStack_28 = 0;
  func_0x00010c0bfe80(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f76da4; end: 104f76dbb;  */

void FUN_104f76da4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f76dbc; end: 104f76ebf;  */

void FUN_104f76dbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f76ec0; end: 104f76f7b;  */

undefined1 FUN_104f76ec0(undefined8 param_1)

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
  func_0x00010c0bfe80(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104f76f7c; end: 104f76fab;  */

void FUN_104f76f7c(long param_1,undefined1 param_2)

{
  func_0x00010c07d9a0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 104f76fac; end: 104f77083;  */

undefined8 FUN_104f76fac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bfe80(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104f77084; end: 104f77097;  */

void FUN_104f77084(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x10;
  return;
}



/* Entry: 104f77098; end: 104f770c7;  */

void FUN_104f77098(long param_1,undefined8 param_2)

{
  func_0x00010c0cba00();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 104f770c8; end: 104f77183;  */

undefined1 FUN_104f770c8(undefined8 param_1)

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
  func_0x00010c0bfe80(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104f77184; end: 104f77197;  */

void FUN_104f77184(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104f77198; end: 104f77277;  */

void FUN_104f77198(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104f76da4;
  uStack_30 = 0x104f76db4;
  uStack_28 = 0;
  func_0x00010c0bfe80(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f77278; end: 104f772b7;  */

void FUN_104f77278(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0ed240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f772b8; end: 104f77393;  */

void FUN_104f772b8(long param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (param_1 != 0) {
    if ((param_2 == 0) || (lVar1 = param_2, func_0x00010c0720c0(), (int)lVar1 != 0)) {
      plVar3 = &lStack_40;
      param_4 = 1;
      lStack_40 = param_1;
    }
    else {
      param_4 = 2;
      lStack_50 = param_1;
      lStack_48 = param_2;
    }
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = plVar3;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_104f774f4;
    puStack_c0 = &UNK_11085eac0;
    uStack_b8 = param_6;
    uStack_b0 = param_4;
    uStack_a8 = param_5;
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_6);
    _objc_retain(param_3);
    func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_11085eaa0,&puStack_d8);
    lVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126b2ca8;
    func_0x00010c0e82e0(PTR_PTR_1126b2ca8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(uStack_b8);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f77394; end: 104f774eb;  */

void FUN_104f77394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104f774f4;
  puStack_70 = &UNK_11085eac0;
  uStack_68 = param_6;
  uStack_60 = param_4;
  uStack_58 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010050471c(param_1,&PTR___NSConcreteGlobalBlock_11085eaa0,&puStack_88);
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b2ca8;
  func_0x00010c0e82e0(PTR_PTR_1126b2ca8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f774ec; end: 104f774f3;  */

void FUN_104f774ec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 104f774f4; end: 104f7794b;  */

void FUN_104f774f4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0720c0();
  if (((ulong)puVar2 & 1) == 0) {
    _objc_release(puVar1);
  }
  else {
    puVar2 = param_2;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(param_2);
      puVar2 = PTR_PTR_1126b14b8;
      _objc_retain(uVar6);
      _objc_retain(uVar4);
      _objc_alloc();
      uVar3 = uVar4;
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar4 = uVar3;
      func_0x00010bf60aa0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      uVar6 = uVar5;
      func_0x00010bf60aa0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff7be0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      puVar1 = PTR_PTR_1126b15c8;
      _objc_alloc();
      puVar7 = param_2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_2;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_2;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07a6a0();
      puVar10 = param_2;
      func_0x00010bfb9b40();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_2;
      func_0x00010bf8e9c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06d560();
      puVar12 = param_2;
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = param_2;
      func_0x00010bfebe20();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = param_2;
      func_0x00010c262240();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = param_2;
      func_0x00010bf4a3a0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = param_2;
      func_0x00010c242760();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = param_2;
      func_0x00010c0d3e20();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = param_2;
      func_0x00010c08f840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c102000();
      puVar19 = param_2;
      func_0x00010c105520();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = param_2;
      func_0x00010bf5b820();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = param_2;
      func_0x00010beef400();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = param_2;
      func_0x00010c105040();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = param_2;
      func_0x00010c1022a0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = param_2;
      func_0x00010c149b60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06bb80();
      func_0x00010c05c0e0(puVar1);
      _objc_release(puVar24);
      _objc_release(puVar23);
      _objc_release(puVar22);
      _objc_release(puVar21);
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar2);
      _objc_release(param_2);
      goto LAB_104f77920;
    }
  }
  _objc_retain(param_2);
  puVar1 = param_2;
LAB_104f77920:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f7794c; end: 104f77a03;  */

undefined1 FUN_104f7794c(undefined8 param_1)

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
  func_0x00010c0bf240(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104f77a04; end: 104f77a17;  */

void FUN_104f77a04(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 104f77a18; end: 104f77a1b; -[SCMessagingPlaybackAiSongPageProvider setPlaylistItemController:] */

void FUN_104f77a18(void)

{
  return;
}



/* Entry: 104f77a1c; end: 104f77a1f; -[SCMessagingPlaybackAiSongPageProvider extraPropertiesProvider] */

void FUN_104f77a1c(void)

{
  return;
}



/* Entry: 104f77a20; end: 104f77a23; -[SCMessagingPlaybackAiSongPageProvider operaViewDidSendEvent:page:params:] */

void FUN_104f77a20(void)

{
  return;
}



/* Entry: 104f77a24; end: 104f77a2f; -[SCMessagingPlaybackAiSongPageProvider registeredEventsForOperaSession] */

undefined * FUN_104f77a24(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 104f77a30; end: 104f77d67; -[SCMessagingPlaybackAiSongPageProvider extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_104f77a30(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b2c68;
  if (param_6 != 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_104f77d68;
    uStack_88 = 0x104f77d78;
    uStack_80 = 0;
    uVar3 = uVar1;
    func_0x00010c0cb140(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bfe80();
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar5 = puStack_a0[5];
    func_0x000107d621f4();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar5;
    func_0x00010c08fa60();
    if (lVar10 == 0) {
      (**(code **)(param_6 + 0x10))
                (param_6,PTR____NSDictionary0__struct_11034ab58,
                 PTR____NSDictionary0__struct_11034ab58);
    }
    else {
      lVar10 = param_5;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar10;
      func_0x00010c08fa60();
      if (lVar6 == 0) {
        (**(code **)(param_6 + 0x10))
                  (param_6,PTR____NSDictionary0__struct_11034ab58,
                   PTR____NSDictionary0__struct_11034ab58);
      }
      else {
        puVar2 = PTR_PTR_1126b2d00;
        _objc_alloc();
        uVar7 = puStack_a0[5];
        func_0x00010beff020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff28a0();
        _objc_release(uVar7);
        puVar8 = PTR_PTR_1126b2d08;
        func_0x00010beff060();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_78 = puVar8;
        puStack_70 = puVar2;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_6 + 0x10))(param_6,puVar9,PTR____NSDictionary0__struct_11034ab58);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar2);
      }
      _objc_release(lVar10);
    }
    _objc_release(lVar5);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = 8;
  __Block_object_dispose(&uStack_a8);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
  *(undefined8 *)(lVar10 + 0x28) = 0;
  return;
}



/* Entry: 104f77d68; end: 104f77d83;  */

void FUN_104f77d68(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f77d84; end: 104f77dc3;  */

void FUN_104f77d84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010beff040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f77dc4; end: 104f77dc7;  */

void FUN_104f77dc4(void)

{
  return;
}



/* Entry: 104f77dc8; end: 104f77e0b;  */

void FUN_104f77dc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_104f6eb78();
  *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f77e0c; end: 104f77f23;  */

undefined1 FUN_104f77e0c(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010c0cb140(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bfe80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104f77f24; end: 104f77fb7;  */

void FUN_104f77f24(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c14ba60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf529e0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f77fb8; end: 104f77fcf;  */

void FUN_104f77fb8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f77fd0; end: 104f780ff;  */

void FUN_104f77fd0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c1197a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104f78100; end: 104f7820b; -[SCMessagingPlaybackChromeLayerPageProvider initWithCachedSummaryInfoProvider:imageDownloader:isDWebChromeHeaderEnabled:] */

undefined1 *
FUN_104f78100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e5458;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b2d18;
    _objc_alloc();
    uVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01c860();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f7820c; end: 104f7820f; -[SCMessagingPlaybackChromeLayerPageProvider setPlaylistItemController:] */

void FUN_104f7820c(void)

{
  return;
}



/* Entry: 104f78210; end: 104f78213; -[SCMessagingPlaybackChromeLayerPageProvider extraPropertiesProvider] */

void FUN_104f78210(void)

{
  return;
}



/* Entry: 104f78214; end: 104f78217; -[SCMessagingPlaybackChromeLayerPageProvider operaViewDidSendEvent:page:params:] */

void FUN_104f78214(void)

{
  return;
}



/* Entry: 104f78218; end: 104f7821f; -[SCMessagingPlaybackChromeLayerPageProvider registeredEventsForOperaSession] */

undefined8 FUN_104f78218(void)

{
  return 0;
}



/* Entry: 104f78220; end: 104f78d1b; -[SCMessagingPlaybackChromeLayerPageProvider extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_104f78220(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  bool bVar19;
  ulong uVar20;
  undefined *puStack_1b0;
  undefined **ppuStack_1a8;
  code *pcStack_1a0;
  code *pcStack_198;
  undefined8 *puStack_190;
  undefined **ppuStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  code *pcStack_138;
  code *pcStack_130;
  undefined **ppuStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar5 = PTR_PTR_1126b2c68;
  if (param_6 == 0) goto LAB_104f78c00;
  _objc_retain(param_3);
  _objc_opt_class(puVar5);
  uVar6 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar5);
  uVar1 = param_3;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar18 = *(ulong *)(param_1 + 0x18);
  _objc_retain(uVar1);
  _objc_retain(uVar18);
  uVar6 = uVar1;
  func_0x00010c0f4aa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puStack_190 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x2020000000;
  pcStack_100 = (code *)((ulong)pcStack_100 & 0xffffffffffffff00);
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  ppuStack_1a8 = (undefined **)0xc2000000;
  pcStack_1a0 = FUN_104f78ee8;
  pcStack_198 = (code *)&UNK_11085ec10;
  puStack_110 = puStack_190;
  func_0x00010c0bf240(uVar6);
  bVar2 = *(byte *)(puStack_110 + 3);
  __Block_object_dispose(&uStack_118,8);
  _objc_release(uVar6);
  _objc_release(uVar6);
  if ((bVar2 & 1) == 0) {
    _objc_retain(uVar1);
    puStack_110 = &uStack_118;
    uStack_118 = 0;
    uStack_108 = 0x2020000000;
    pcStack_100 = (code *)((ulong)pcStack_100 & 0xffffffffffffff00);
    uVar6 = uVar1;
    func_0x00010c0cb140(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar6;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_1a8 = (undefined **)0xc2000000;
    pcStack_1a0 = FUN_104f77dc8;
    pcStack_198 = (code *)&UNK_11085ea40;
    puStack_190 = &uStack_118;
    func_0x00010c0bfe80();
    _objc_release(uVar20);
    _objc_release(uVar6);
    bVar2 = *(byte *)(puStack_110 + 3);
    __Block_object_dispose(&uStack_118,8);
    _objc_release(uVar1);
    if ((bVar2 & 1) != 0) goto LAB_104f7841c;
    uVar6 = uVar1;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar6;
    FUN_104f7794c();
    if (((uVar20 & 1) == 0) && (uVar20 = uVar1, FUN_104f77e0c(), (uVar20 & 1) == 0)) {
      _objc_retain(uVar1);
      _objc_retain(uVar18);
      ppuStack_1a8 = &puStack_1b0;
      puStack_1b0 = (undefined *)0x0;
      pcStack_1a0 = (code *)0x3032000000;
      pcStack_198 = FUN_104f77fb8;
      puStack_190 = (undefined8 *)0x104f77fc8;
      ppuStack_188 = (undefined **)0x0;
      puStack_110 = &uStack_118;
      uStack_118 = 0;
      uStack_108 = 0x3032000000;
      pcStack_100 = FUN_104f77fb8;
      uStack_f8 = 0x104f77fc8;
      uStack_f0 = 0;
      uVar20 = uVar1;
      func_0x00010c0cb140(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar20;
      func_0x00010c0cb340();
      _objc_retainAutoreleasedReturnValue();
      puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
      ppuStack_140 = (undefined **)0xc2000000;
      pcStack_138 = FUN_104f77fd0;
      pcStack_130 = (code *)&UNK_11085eb50;
      ppuStack_128 = &puStack_1b0;
      puStack_120 = &uStack_118;
      func_0x00010c0bfe80();
      _objc_release(uVar8);
      _objc_release(uVar20);
      uVar3 = (uint)ppuStack_1a8[5];
      func_0x00010bf05f80();
      if ((6 < uVar3) || (uVar20 = 1, (1 << (ulong)(uVar3 & 0x1f) & 0x46U) == 0)) {
        iVar4 = (int)ppuStack_1a8[5];
        func_0x00010c247c60();
        if (iVar4 == 7) {
          uVar8 = uVar18;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar20 = uVar8;
          func_0x00010bf1f3c0();
          _objc_release(uVar8);
        }
        else {
          uVar20 = puStack_110[5];
          func_0x000107d612e4();
        }
      }
      __Block_object_dispose(&uStack_118,8);
      _objc_release(uStack_f0);
      __Block_object_dispose(&puStack_1b0,8);
      _objc_release(ppuStack_188);
      _objc_release(uVar18);
      _objc_release(uVar1);
      _objc_release(uVar6);
      _objc_release(uVar18);
      _objc_release(uVar1);
      if ((uVar20 & 1) != 0) goto LAB_104f78488;
      goto LAB_104f7842c;
    }
    _objc_release(uVar6);
    _objc_release(uVar18);
    _objc_release(uVar1);
LAB_104f78488:
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640();
    func_0x00010c1d0640(puVar5);
    uVar6 = uVar1;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar6;
    func_0x00010c0cb8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar1);
    uVar20 = uVar1;
    func_0x00010c0f4aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar20;
    FUN_104f7794c();
    if ((int)uVar8 == 0) {
      uVar8 = uVar1;
      FUN_104f77e0c();
      _objc_release(uVar20);
      _objc_release(uVar1);
      if ((int)uVar8 != 0) goto LAB_104f78548;
      func_0x00010c1d0640(puVar5);
LAB_104f789dc:
      _objc_retain(uVar1);
      puStack_110 = &uStack_118;
      uStack_118 = 0;
      uStack_108 = 0x3032000000;
      pcStack_100 = FUN_104f77fb8;
      uStack_f8 = 0x104f77fc8;
      uStack_f0 = 0;
      ppuStack_140 = &puStack_148;
      puStack_148 = (undefined *)0x0;
      pcStack_138 = (code *)0x3032000000;
      pcStack_130 = FUN_104f77fb8;
      ppuStack_128 = (undefined **)0x104f77fc8;
      puStack_120 = (undefined8 *)0x0;
      puStack_170 = &uStack_178;
      uStack_178 = 0;
      uStack_168 = 0x3032000000;
      pcStack_160 = FUN_104f77fb8;
      uStack_158 = 0x104f77fc8;
      uStack_150 = 0;
      uVar20 = uVar1;
      func_0x00010c0cb140(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar20;
      func_0x00010c0cb340();
      _objc_retainAutoreleasedReturnValue();
      puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
      ppuStack_1a8 = (undefined **)0xc2000000;
      pcStack_1a0 = (code *)0x104f78054;
      pcStack_198 = (code *)&UNK_11085eb80;
      puStack_190 = &uStack_118;
      ppuStack_188 = &puStack_148;
      puStack_180 = &uStack_178;
      func_0x00010c0bfe80();
      _objc_release(uVar8);
      _objc_release(uVar20);
      puVar10 = PTR_PTR_1126b2d10;
      func_0x00010bf0eb60();
      _objc_retainAutoreleasedReturnValue();
      __Block_object_dispose(&uStack_178,8);
      _objc_release(uStack_150);
      __Block_object_dispose(&puStack_148,8);
      _objc_release(puStack_120);
      __Block_object_dispose(&uStack_118,8);
      _objc_release(uStack_f0);
      _objc_release(uVar1);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar10 == (undefined *)0x0) {
        uVar20 = uVar6;
        func_0x00010c15e3a0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb5a00(puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar20);
        func_0x00010c1d0640(puVar5);
        _objc_release(puVar9);
      }
      else {
        func_0x00010c1d0640(puVar5);
      }
      puVar9 = puVar5;
      func_0x00010bf51e00(puVar5);
      (**(code **)(param_6 + 0x10))(param_6,puVar9,PTR____NSDictionary0__struct_11034ab58);
      _objc_release(puVar9);
      _objc_release(puVar10);
    }
    else {
      _objc_release(uVar20);
      _objc_release(uVar1);
LAB_104f78548:
      ppuStack_1a8 = &puStack_1b0;
      puStack_1b0 = (undefined *)0x0;
      pcStack_1a0 = (code *)0x3032000000;
      pcStack_198 = FUN_104f77fb8;
      puStack_190 = (undefined8 *)0x104f77fc8;
      ppuStack_188 = (undefined **)0x0;
      puStack_110 = &uStack_118;
      uStack_118 = 0;
      uStack_108 = 0x3032000000;
      pcStack_100 = FUN_104f77fb8;
      uStack_f8 = 0x104f77fc8;
      uStack_f0 = 0;
      uVar20 = uVar1;
      func_0x00010c0f4aa0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar6);
      _objc_retain(uVar18);
      func_0x00010c0bf240(uVar20);
      _objc_release(uVar20);
      if ((puStack_110[5] == 0) || (ppuStack_1a8[5] == (undefined *)0x0)) {
        (**(code **)(param_6 + 0x10))
                  (param_6,PTR____NSDictionary0__struct_11034ab58,
                   PTR____NSDictionary0__struct_11034ab58);
        bVar19 = false;
      }
      else {
        func_0x00010c1d0640(puVar5);
        func_0x00010c1d0640(puVar5);
        lVar7 = *(long *)(param_1 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar7;
        func_0x00010c258d00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        func_0x00010bfddf20(lVar16);
        if (lVar16 != 0) {
          func_0x00010bfddf20(lVar16);
        }
        func_0x00010c1d0640(puVar5);
        puStack_b0 = ppuStack_1a8[5];
        ppuStack_e0 = &PTR____CFConstantStringClassReference_110ebeb58;
        ppuStack_d8 = &PTR____CFConstantStringClassReference_110ebeab8;
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_d0 = &PTR____CFConstantStringClassReference_110ebead8;
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puStack_a8 = puVar9;
        func_0x00010c0df760();
        _objc_retainAutoreleasedReturnValue();
        puStack_98 = PTR____kCFBooleanTrue_11034ab68;
        ppuStack_c8 = &PTR____CFConstantStringClassReference_110ebeaf8;
        ppuStack_c0 = &PTR____CFConstantStringClassReference_110ebeb18;
        puVar11 = PTR_PTR_1126b19f8;
        puStack_a0 = puVar10;
        func_0x00010c0cbb20();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_e8 = puVar11;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_b8 = &PTR____CFConstantStringClassReference_110ebeb38;
        ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be600;
        puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_90 = puVar12;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(lVar16);
        bVar19 = true;
      }
      _objc_release(uVar18);
      _objc_release(uVar6);
      __Block_object_dispose(&uStack_118,8);
      _objc_release(uStack_f0);
      __Block_object_dispose(&puStack_1b0,8);
      _objc_release(ppuStack_188);
      if (bVar19) goto LAB_104f789dc;
    }
    _objc_release(uVar18);
    _objc_release(uVar6);
    _objc_release(puVar5);
  }
  else {
LAB_104f7841c:
    _objc_release(uVar18);
    _objc_release(uVar1);
LAB_104f7842c:
    (**(code **)(param_6 + 0x10))
              (param_6,PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58
              );
  }
  _objc_release(uVar1);
LAB_104f78c00:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_118,8);
    uVar15 = 8;
    __Block_object_dispose(&puStack_1b0);
    __Unwind_Resume();
    uVar17 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar15);
    func_0x00010c0cb8c0(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar15;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
    lVar16 = *(long *)(*(long *)(param_3 + 0x28) + 8);
    uVar15 = *(undefined8 *)(lVar16 + 0x28);
    *(undefined8 *)(lVar16 + 0x28) = uVar14;
    _objc_release(uVar15);
    _objc_release(uVar17);
    uVar14 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x28);
    func_0x00010901d7c4();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = *(long *)(*(long *)(param_3 + 0x30) + 8);
    uVar17 = *(undefined8 *)(lVar16 + 0x28);
    *(undefined8 *)(lVar16 + 0x28) = uVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar17);
    return;
  }
  return;
}



/* Entry: 104f78d1c; end: 104f78eab;  */

void FUN_104f78d1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0cb8c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104f78eac; end: 104f78ee7; -[SCMessagingPlaybackChromeLayerPageProvider .cxx_destruct] */

void FUN_104f78eac(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f78ee8; end: 104f78ef7;  */

void FUN_104f78ee8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_4;
  return;
}



/* Entry: 104f78ef8; end: 104f79033; -[SCMessagingPlaybackContextPageProvider initWithConversationId:currentUserId:isLockedConversation:shouldShowSnapReplyUpsell:musicContentRestrictionServices:featureSettingsService:snapProIdValidity:] */

undefined1 *
FUN_104f78ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e5460;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
    *(undefined1 *)((long)puVar1 + 0x19) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f79034; end: 104f79037; -[SCMessagingPlaybackContextPageProvider setPlaylistItemController:] */

void FUN_104f79034(void)

{
  return;
}



/* Entry: 104f79038; end: 104f7903b; -[SCMessagingPlaybackContextPageProvider extraPropertiesProvider] */

void FUN_104f79038(void)

{
  return;
}



/* Entry: 104f7903c; end: 104f7903f; -[SCMessagingPlaybackContextPageProvider operaViewDidSendEvent:page:params:] */

void FUN_104f7903c(void)

{
  return;
}



/* Entry: 104f79040; end: 104f79047; -[SCMessagingPlaybackContextPageProvider registeredEventsForOperaSession] */

undefined8 FUN_104f79040(void)

{
  return 0;
}



/* Entry: 104f79048; end: 104f7993f; -[SCMessagingPlaybackContextPageProvider extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_104f79048(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b2c68;
  if (param_6 != 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar3 = uVar1;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c07d080(uVar3);
    func_0x00010c0df6e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0c5b00(uVar3);
    func_0x00010c0df760(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b2d20;
    func_0x00010c06be00(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar2);
    uVar6 = uVar3;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    FUN_104f76c8c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = uVar7;
    func_0x00010c242120();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bde82c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010c0cb340(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    uStack_130 = 0x104f79948;
    puStack_128 = &UNK_11085ec80;
    _objc_retain(puVar4);
    puStack_120 = puVar4;
    func_0x00010c0bfe80(uVar9);
    _objc_release(uVar9);
    uVar9 = uVar3;
    func_0x00010c0cb8c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar9);
    puVar5 = PTR_PTR_1126b2370;
    _objc_alloc();
    func_0x00010c01f560();
    puVar10 = PTR_PTR_1126b2380;
    _objc_alloc();
    uVar9 = uVar7;
    func_0x00010c297e20(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar7;
    func_0x00010c23f480();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c2a2e80();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c2a2ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar6;
    func_0x00010c094540(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar6;
    func_0x00010bfadea0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar6;
    func_0x00010c0d2280(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar6;
    func_0x00010c281680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0607a0();
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar9);
    uVar9 = uVar3;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    FUN_104f76ec0();
    _objc_release(uVar9);
    uVar19 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfde1a0();
    _objc_release(uVar19);
    puStack_168 = &uStack_170;
    uStack_170 = 0;
    uStack_160 = 0x3032000000;
    uStack_158 = 0x104f79964;
    uStack_150 = 0x104f79974;
    uStack_148 = 0;
    puStack_198 = &uStack_1a0;
    uStack_1a0 = 0;
    uStack_190 = 0x3032000000;
    uStack_188 = 0x104f79964;
    uStack_180 = 0x104f79974;
    uStack_178 = 0;
    puStack_1c8 = &uStack_1d0;
    uStack_1d0 = 0;
    uStack_1c0 = 0x3032000000;
    uStack_1b8 = 0x104f79964;
    uStack_1b0 = 0x104f79974;
    uStack_1a8 = 0;
    uVar9 = uVar1;
    func_0x00010c0f4aa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar3);
    _objc_retain(uVar7);
    _objc_retain(uVar3);
    _objc_retain(uVar7);
    func_0x00010c0bf240(uVar9);
    _objc_release(uVar9);
    puVar20 = PTR_PTR_1126b2398;
    _objc_alloc();
    puVar2 = PTR_PTR_1126b23a0;
    func_0x00010c292680(PTR_PTR_1126b23a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bcc0(puVar20);
    _objc_release(puVar2);
    puVar21 = PTR_PTR_1126b2390;
    _objc_alloc(PTR_PTR_1126b2390);
    puVar22 = puVar21;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar1);
    puStack_90 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 0;
    uVar9 = uVar1;
    func_0x00010c0cb140(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x104f7a510;
    puStack_b0 = &UNK_11085ed40;
    _objc_retain(uVar1);
    puStack_f8 = &uStack_98;
    puStack_f0 = puVar2;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x104f7a5d4;
    puStack_d8 = &UNK_11085ea40;
    puStack_118 = puVar2;
    uStack_110 = 0xc2000000;
    uStack_108 = 0x104f7a5e8;
    puStack_100 = &UNK_11085ea70;
    puStack_d0 = puStack_f8;
    uStack_a8 = uVar1;
    puStack_a0 = puStack_f8;
    func_0x00010c0bfe80(uVar11);
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uStack_a8);
    __Block_object_dispose(&uStack_98,8);
    _objc_release(uVar1);
    uVar9 = uVar7;
    func_0x00010c0c6c20();
    if (uVar9 != 0xffffffffffffffff) {
      func_0x00010c0c6c20();
      func_0x0001085439dc();
    }
    func_0x00010c045140(puVar21);
    _objc_release(puVar22);
    func_0x000107b281fc(puVar4,puVar21);
    puVar2 = puVar4;
    func_0x00010bf51e00(puVar4);
    (**(code **)(param_6 + 0x10))(param_6,puVar2,PTR____NSDictionary0__struct_11034ab58);
    _objc_release(puVar2);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar3);
    __Block_object_dispose(&uStack_1d0,8);
    _objc_release(uStack_1a8);
    __Block_object_dispose(&uStack_1a0,8);
    _objc_release(uStack_178);
    __Block_object_dispose(&uStack_170,8);
    _objc_release(uStack_148);
    _objc_release(puVar10);
    _objc_release(puVar5);
    _objc_release(puStack_120);
    _objc_release(lVar8);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f79940; end: 104f7997b;  */

void FUN_104f79940(void)

{
  return;
}



/* Entry: 104f7997c; end: 104f79afb;  */

void FUN_104f7997c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = uVar1;
  _objc_release(uVar6);
  uVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = uVar1;
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126b23a8;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf026e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0cb5a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  FUN_104f79afc(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0c6c20(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf37be0(puVar5,param_2,uVar8,uVar1,0,uVar6,uVar2,uVar3,1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar3 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar5;
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f79afc; end: 104f79c17;  */

void FUN_104f79afc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  uStack_48 = 0x104f79964;
  uStack_40 = 0x104f79974;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010c0cb340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bfe80();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f79c18; end: 104f79ccf;  */

void FUN_104f79c18(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  return;
}



/* Entry: 104f79cd0; end: 104f79e8f;  */

void FUN_104f79cd0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cb8c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x000108ef3c74(param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0d5140();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar5 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = uVar2;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126b23a8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf026e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cb5a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_104f79afc(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20(*(undefined8 *)(param_1 + 0x30));
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf37be0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined **)(lVar7 + 0x28) = puVar3;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar2 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104f79e90; end: 104f79fcf; -[SCMessagingPlaybackContextPageProvider _contextClientInfoForMediaContent:playbackItem:pageProperties:] */

void FUN_104f79e90(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c242120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b2378;
    func_0x00010bfe3740(PTR_PTR_1126b2378,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c086560(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf43580(puVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bedbd80(param_1,param_2,param_5,puVar4,param_3);
    func_0x00010bee0340(param_1,param_2,param_5,puVar4,param_3,param_4);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104f79fd0; end: 104f7a09b; -[SCMessagingPlaybackContextPageProvider _updateMusicContentRestrictionPageProperties:withContextClientInfo:mediaContent:] */

void FUN_104f79fd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf4d340(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0c5180(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c2884e0(uVar1,param_2,param_4,param_3,uVar2,0x12);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104f7a09c; end: 104f7a33f; -[SCMessagingPlaybackContextPageProvider _updateSnapMeReplyPageProperties:withContextClientInfo:mediaContent:playbackItem:] */

void FUN_104f7a09c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x000107d65fcc();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2d28;
  if (lVar1 != 0) {
    uVar4 = param_6;
    func_0x00010c0cb140(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0cb8c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2342e0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    if ((int)puVar3 != 0) {
      puStack_88 = &uStack_90;
      uStack_90 = 0;
      uStack_80 = 0x3032000000;
      uStack_78 = 0x104f79964;
      uStack_70 = 0x104f79974;
      uStack_68 = 0;
      uVar4 = param_6;
      func_0x00010c0f4aa0(param_6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_6);
      func_0x00010c0bf240(uVar4);
      _objc_release(uVar4);
      uVar5 = *(ulong *)(param_1 + 0x30);
      uVar4 = puStack_88[5];
      func_0x00010c242760(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07bd40();
      _objc_release(uVar4);
      if ((uVar5 & 1) != 0) {
        puVar3 = PTR_PTR_1126b2d20;
        func_0x00010c241ee0(PTR_PTR_1126b2d20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_3);
        _objc_release(puVar3);
        if (puStack_88[5] != 0) {
          puVar3 = PTR_PTR_1126b2d20;
          func_0x00010c241f40(PTR_PTR_1126b2d20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(param_3);
          _objc_release(puVar3);
        }
        if (param_5 != 0) {
          puVar3 = PTR_PTR_1126b2d20;
          func_0x00010c241f00(PTR_PTR_1126b2d20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(param_3);
          _objc_release(puVar3);
        }
      }
      _objc_release(param_6);
      __Block_object_dispose(&uStack_90,8);
      _objc_release(uStack_68);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f7a340; end: 104f7a40b;  */

void FUN_104f7a340(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0cb140(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar1 = param_3;
  if (lVar3 != 0) {
    lVar1 = lVar3;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(lVar1);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar1;
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 104f7a40c; end: 104f7a5ab; -[SCMessagingPlaybackContextPageProvider .cxx_destruct] */

void FUN_104f7a40c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f7a5ac; end: 104f7a5fb;  */

void FUN_104f7a5ac(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0xf;
  return;
}


