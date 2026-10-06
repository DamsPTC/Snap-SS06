/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ee4c3c; end: 104ee4c43; -[SCMapPlaceProfileV2DataProvider numOfRankedSnaps] */

undefined8 FUN_104ee4c3c(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 104ee4c44; end: 104ee4c4b; -[SCMapPlaceProfileV2DataProvider storyCarouselData] */

undefined8 FUN_104ee4c44(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 104ee4c4c; end: 104ee4c53; -[SCMapPlaceProfileV2DataProvider storyCarouselLoaded] */

undefined1 FUN_104ee4c4c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x90);
}



/* Entry: 104ee4c54; end: 104ee4d73; -[SCMapPlaceProfileV2DataProvider .cxx_destruct] */

void FUN_104ee4c54(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ee4d74; end: 104ee4de7; -[SCMapPlaceProfileV2ETADataFetcher initWithMapNavigationRouteFetcher:] */

undefined1 * FUN_104ee4d74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4e38;
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



/* Entry: 104ee4de8; end: 104ee506b; -[SCMapPlaceProfileV2ETADataFetcher fetchETADataForPlaceCoordinate:userCoordinate:completion:] */

void FUN_104ee4de8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_7;
  _objc_retain();
  FUN_104eef32c(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_104eef32c(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_88 = lVar1;
  lStack_80 = lVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294b00();
  _objc_release(puVar4);
  lVar5 = param_5;
  func_0x00010bdf0600(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_5;
  func_0x00010bdf0600();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_90,param_5);
  uVar7 = *(undefined8 *)(param_5 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_90;
  _objc_copyWeak(auStack_98,puVar8);
  _objc_retain(lVar6);
  _objc_retain(param_7);
  lVar9 = lVar5;
  func_0x00010bfc9b00(uVar7);
  _objc_release(uVar7);
  _objc_release(param_7);
  _objc_release(lVar6);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  _objc_retain(lVar9);
  _objc_retain(puVar8);
  param_7 = param_7 + 0x30;
  _objc_loadWeakRetained(param_7);
  func_0x00010be334e0();
  _objc_release(lVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 104ee506c; end: 104ee50d7;  */

void FUN_104ee506c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be334e0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ee50d8; end: 104ee52fb; -[SCMapPlaceProfileV2ETADataFetcher _handleWalkingETAResponse:error:drivingRequest:completion:] */

void FUN_104ee50d8(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_4;
  FUN_104eef500(param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c0b95c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08eb20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c262900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f000();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if ((lVar1 == 0) || (1800.0 < param_1)) {
    _objc_initWeak(auStack_78,param_2);
    uVar6 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(lVar1);
    _objc_retain(param_7);
    func_0x00010bfc9b00(uVar6);
    _objc_release(uVar6);
    _objc_release(param_7);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  else {
    (**(code **)(param_7 + 0x10))(param_7,lVar1,1);
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104ee52fc; end: 104ee5367;  */

void FUN_104ee52fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28ba0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ee5368; end: 104ee53ff; -[SCMapPlaceProfileV2ETADataFetcher _handleDrivingETAResponse:error:walkingETAText:completion:] */

void FUN_104ee5368(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  FUN_104eef500(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 2;
  if ((param_5 != 0) && (param_3 == 0)) {
    _objc_retain(param_5);
    uVar1 = 1;
    param_3 = param_5;
  }
  (**(code **)(param_6 + 0x10))(param_6,param_3,uVar1);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104ee5400; end: 104ee5483; -[SCMapPlaceProfileV2ETADataFetcher _createNavigationRouteRequestForRouteMode:locations:unit:] */

void FUN_104ee5400(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x3;
  
  puVar1 = PTR_PTR_1126b2028;
  _objc_retain(in_x3);
  _objc_alloc(puVar1);
  func_0x00010c0590a0();
  _objc_release(in_x3);
  puVar2 = PTR_PTR_1126b2030;
  _objc_alloc(PTR_PTR_1126b2030);
  func_0x00010c0321a0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ee5484; end: 104ee548f; -[SCMapPlaceProfileV2ETADataFetcher .cxx_destruct] */

void FUN_104ee5484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ee5490; end: 104ee5503; -[SCMapPlaceProfileV2PublicProfileFetcher initWithProfilesProvider:] */

undefined1 * FUN_104ee5490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4e40;
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



/* Entry: 104ee5504; end: 104ee554b; -[SCMapPlaceProfileV2PublicProfileFetcher dealloc] */

void FUN_104ee5504(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_1126e4e40;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104ee554c; end: 104ee570b; -[SCMapPlaceProfileV2PublicProfileFetcher fetchPublicProfileForBusinessId:completion:] */

void FUN_104ee554c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x10));
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_60 = param_3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c1176c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = auStack_68;
  _objc_copyWeak(auStack_70,puVar4);
  _objc_retain(param_4);
  uVar7 = uVar6;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(puVar4);
  lVar3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar7);
    uVar6 = *(undefined8 *)(param_3 + 0x20);
    _objc_retain(uVar6);
    func_0x00010c0c0800(puVar4);
    _objc_release(uVar6);
    _objc_release(uVar7);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104ee570c; end: 104ee57fb;  */

void FUN_104ee570c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ee57fc; end: 104ee586b;  */

void FUN_104ee57fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ee586c; end: 104ee587b;  */

void FUN_104ee586c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ee5878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 104ee587c; end: 104ee59d3; -[SCMapPlaceProfileV2PublicProfileFetcher createBusinessProfileDataFromSCSnapProProfile:] */

void FUN_104ee587c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126b2038;
  _objc_retain(param_3);
  _objc_alloc_init(puVar2);
  lVar3 = param_3;
  func_0x00010c116a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174420(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bfe44e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161380(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bfe4500(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f760(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c0b4680(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4260(puVar2,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c0e1a60();
  _objc_release(param_3);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be3f0;
  if (lVar3 != 2) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be408;
  }
  func_0x00010c1b2ee0(puVar2,param_2,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ee59d4; end: 104ee5a03; -[SCMapPlaceProfileV2PublicProfileFetcher .cxx_destruct] */

void FUN_104ee59d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ee5a04; end: 104ee5acf; -[SCMapPlaceProfileV2StoryFetcher initWithPreviewStoryFetcher:storyFetcher:mapPeopleFriendsProvider:] */

undefined1 *
FUN_104ee5a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e4e48;
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



/* Entry: 104ee5ad0; end: 104ee5bdf; -[SCMapPlaceProfileV2StoryFetcher prefetchRankedStoriesForPlaceId:requestId:completion:] */

void FUN_104ee5ad0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b1e48;
  _objc_retain(param_3);
  func_0x00010c0fd380(puVar1,param_2,param_3,PTR____NSArray0__struct_11034ab48,0,1,param_4,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104ee5be0;
  puStack_50 = &UNK_11084e3a0;
  uStack_48 = param_5;
  _objc_retain(param_5);
  func_0x00010bfa9560(uVar2,param_2,puVar1,param_3,&puStack_68);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(puVar1);
  return;
}



/* Entry: 104ee5be0; end: 104ee5beb;  */

void FUN_104ee5be0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104ee5be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104ee5bec; end: 104ee5d6f; -[SCMapPlaceProfileV2StoryFetcher fetchRankedStoryThumbnailsForPlaceId:forComponents:requestId:observer:] */

void FUN_104ee5bec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar1);
  _objc_initWeak(auStack_58,param_2);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_60 = param_5;
  _objc_retain(param_4);
  uStack_68 = param_1;
  _objc_retain(param_7);
  func_0x00010bfa9640(uVar2);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 104ee5d70; end: 104ee5f43;  */

void FUN_104ee5d70(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *unaff_x21;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_2 != (undefined *)0x0 && param_3 == 0) {
    unaff_x21 = auStack_78;
    _objc_copyWeak(unaff_x21,param_1 + 0x30);
    puVar1 = param_2;
    func_0x00010c0b8600(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(char *)(param_1 + 0x40) == '\x01') {
    puVar2 = PTR_PTR_1126b1ef0;
    _objc_alloc(PTR_PTR_1126b1ef0);
    func_0x00010c036560();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    puVar2 = PTR_PTR_1126b2040;
    _objc_alloc(PTR_PTR_1126b2040);
    func_0x00010c03cc80();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(puVar2);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar1);
  if (param_2 != (undefined *)0x0 && param_3 == 0) {
    _objc_destroyWeak(unaff_x21);
  }
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104ee5f44; end: 104ee5fc3;  */

void FUN_104ee5f44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c075200();
  if ((int)uVar1 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bde6e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104ee5fc4; end: 104ee608f; -[SCMapPlaceProfileV2StoryFetcher fetchNumberOfRankedStoryThumbnailsForPlaceIds:observer:] */

void FUN_104ee5fc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104ee6090;
  puStack_40 = &UNK_1108597e8;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bfa8f40(uVar1,param_2,param_3,1,1,&puStack_58);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 104ee6090; end: 104ee60c7;  */

void FUN_104ee6090(long param_1,undefined *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 104ee60c8; end: 104ee61a3; -[SCMapPlaceProfileV2StoryFetcher fetchPreviewThumbnailForPlaceId:useAlternateRanking:observer:] */

void FUN_104ee60c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104ee61a4;
  puStack_48 = &UNK_110859af8;
  uStack_40 = param_3;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bfa9680(uVar1,param_2,param_3,param_4,1,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104ee61a4; end: 104ee627f;  */

void FUN_104ee61a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1ee8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c2827c0(param_3);
  _objc_release(param_3);
  func_0x00010c0365a0(puVar1);
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ee6280; end: 104ee639b; -[SCMapPlaceProfileV2StoryFetcher _constructPlaceStoryThumbnailForThumbnail:] */

void FUN_104ee6280(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1ef8;
  _objc_alloc(PTR_PTR_1126b1ef8);
  lVar2 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf24de0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c0830a0(param_3);
  func_0x00010c0520c0(puVar1,param_2,lVar2,lVar3,lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010bf5b440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde6ac0(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c19fa00(puVar1,param_2,param_1);
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ee639c; end: 104ee64fb; -[SCMapPlaceProfileV2StoryFetcher _constructFriendAttributionDataForUserId:] */

void FUN_104ee639c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  ppuVar4 = *(undefined ***)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar4;
  func_0x00010c0b96e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(ppuVar4);
  if (ppuVar1 == (undefined **)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    ppuVar2 = ppuVar1;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar4 = ppuVar2;
    }
    _objc_retain(ppuVar4);
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar1;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = ppuVar1;
      func_0x00010c294420(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(ppuVar2);
      ppuVar3 = ppuVar2;
    }
    _objc_release(ppuVar2);
    puVar5 = PTR_PTR_1126b2048;
    _objc_alloc_init(PTR_PTR_1126b2048);
    ppuVar2 = ppuVar1;
    func_0x00010c2923e0(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e620(puVar5,param_2,ppuVar2);
    _objc_release(ppuVar2);
    func_0x00010c19d320(puVar5,param_2,ppuVar3);
    func_0x00010c170a80(puVar5,param_2,ppuVar4);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104ee64fc; end: 104ee6537; -[SCMapPlaceProfileV2StoryFetcher .cxx_destruct] */

void FUN_104ee64fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ee6538; end: 104ee6663; -[SCMapPlaceProfileV2BasemapManager initWithMapViewServices:placesContentServices:placeProfileV2Scope:multiTrayServices:circumstanceEngine:gestureServices:] */

undefined1 *
FUN_104ee6538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_48 = PTR_PTR_1126e4e50;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    func_0x00010be894c0(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ee6664; end: 104ee66b7; -[SCMapPlaceProfileV2BasemapManager dealloc] */

void FUN_104ee6664(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e4e50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104ee66b8; end: 104ee688b; -[SCMapPlaceProfileV2BasemapManager presentMapViewportForMapPlace:bounds:needsExtraPadding:needsDefaultCamera:customServerRankingId:shouldDisplayPlacePin:] */

void FUN_104ee66b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,int param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  lVar2 = param_3;
  func_0x00010bf51c80();
  iVar1 = (int)lVar2;
  _CLLocationCoordinate2DIsValid();
  if (iVar1 != 0) {
    if ((param_8 != 0) && (lVar2 = *(long *)(param_1 + 0x30), lVar2 != param_3)) {
      if (lVar2 != 0) {
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be35b20(param_1);
        _objc_release(lVar2);
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x30) = 0;
        _objc_release(uVar3);
      }
      lVar2 = param_3;
      func_0x0001067694ec(param_3,&PTR____CFConstantStringClassReference_110dba0d8,param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be36140(param_1);
      _objc_retain(param_3);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = param_3;
      _objc_release(uVar3);
      _objc_release(lVar2);
    }
    if (param_6 != 0) {
      _objc_initWeak(auStack_58,param_1);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_104ee688c;
      puStack_80 = &UNK_110844dd0;
      _objc_copyWeak(auStack_68,auStack_58);
      _objc_retain(param_3);
      lStack_78 = param_3;
      _objc_retain(param_4);
      uStack_70 = param_4;
      uStack_60 = param_5;
      func_0x0001000d76cc("APPSTORE",&puStack_98);
      _objc_release(uStack_70);
      _objc_release(lStack_78);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ee688c; end: 104ee6983;  */

void FUN_104ee688c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x00010bf51c80(*(undefined8 *)(param_3 + 0x20));
    uVar1 = *(undefined1 *)(param_3 + 0x38);
    uVar3 = *(undefined8 *)(param_3 + 0x20);
    uVar6 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c07b500(uVar3);
    lVar4 = lVar2;
    func_0x00010bdf92c0(param_1,param_2,0x402c000000000000,lVar2,param_4,uVar6,uVar1,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar2 + 8);
    func_0x00010c0ba460(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c0baae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176100(0x3fc999999999999a);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104ee6984; end: 104ee6bb3; -[SCMapPlaceProfileV2BasemapManager setPlaceAsRecentlyViewed:customServerRankingId:] */

void FUN_104ee6984(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_4);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2050;
  _objc_alloc_init(PTR_PTR_1126b2050);
  uVar3 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar2);
  _objc_release(uVar3);
  func_0x00010bf51c80(param_4);
  func_0x00010bf51c80(param_4);
  func_0x00010676af10(param_1,puVar2);
  puVar4 = puVar2;
  func_0x00010c118b60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110e32618;
  uVar3 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010676b02c(&PTR____CFConstantStringClassReference_110e32618,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4);
  _objc_release(ppuVar7);
  _objc_release(uVar3);
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010c118b60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110e5bcb8;
  func_0x00010676b02c(&PTR____CFConstantStringClassReference_110e5bcb8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4);
  _objc_release(ppuVar7);
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010c0ba460(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c1530a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar5);
  func_0x00010bef8340(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ee6bb4; end: 104ee6c83; -[SCMapPlaceProfileV2BasemapManager presentMapViewportForReloadedTrayData:] */

void FUN_104ee6bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_48 = FUN_104ee6c84;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104ee6c84; end: 104ee6e4b;  */

void FUN_104ee6c84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_3 + 0x20);
    func_0x00010bfd9000();
    if ((uVar2 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010c247d20(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 0xb;
      func_0x00010ba1c764(0xb);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c0720c0(uVar4,param_4,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    else {
      uVar7 = 1;
    }
    uVar3 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c0ba460(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0baae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bf200();
    uVar8 = param_1;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010bf51c80(*(undefined8 *)(param_3 + 0x20));
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bf20c00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c07b500(uVar5);
    lVar6 = lVar1;
    func_0x00010bdf92c0(uVar8,param_2,param_1,lVar1,param_4,uVar4,uVar7,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c0ba460(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c0baae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176100(0x3fc999999999999a);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ee6e4c; end: 104ee6fe3; -[SCMapPlaceProfileV2BasemapManager cameraProviderForTrayData:] */

void FUN_104ee6e4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  if (param_5 == 0) {
    ppuVar5 = (undefined **)0x0;
  }
  else {
    _objc_initWeak(auStack_68,param_3);
    func_0x00010bf51c80(param_5);
    lVar1 = param_5;
    uVar6 = param_1;
    func_0x00010bf20c00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_3 + 8);
    func_0x00010c0ba460(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0baae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bf200();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_104ee6fe4;
    puStack_a0 = &UNK_110859b28;
    _objc_retain(param_5);
    lStack_98 = param_5;
    _objc_copyWeak(auStack_88,auStack_68);
    lStack_90 = lVar1;
    uStack_80 = param_1;
    uStack_78 = param_2;
    uStack_70 = uVar6;
    _objc_retain(lVar1);
    ppuVar5 = &puStack_b8;
    _objc_retainBlock(ppuVar5);
    _objc_release(lStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_release(lStack_98);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 104ee6fe4; end: 104ee70cf;  */

void FUN_104ee6fe4(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  if (param_2 == 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010bfd9000();
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c247d20(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 0xb;
      func_0x00010ba1c764(0xb);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar4);
    dVar6 = *(double *)(param_1 + 0x48);
    if (dVar6 == 0.0) {
      dVar6 = 14.0;
    }
    func_0x00010c07b500(*(undefined8 *)(param_1 + 0x20));
    lVar5 = lVar4;
    func_0x00010bdf92c0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),dVar6,lVar4)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  else {
    lVar5 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 104ee70d0; end: 104ee720f; -[SCMapPlaceProfileV2BasemapManager trayPositionDidUpdateFromCollapsedToHalfForMapPlace:needsExtraPadding:] */

void FUN_104ee70d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfe5ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0(uVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    puVar4 = PTR_PTR_1126b1e20;
    _objc_alloc(PTR_PTR_1126b1e20);
    func_0x00010c00eb00(0x3fc999999999999a);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0ba460(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0baae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdf92a0(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c176120(uVar3,param_2,param_1,puVar4,0);
    _objc_release(param_1);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ee7210; end: 104ee726b; -[SCMapPlaceProfileV2BasemapManager restoreBasemapForPlaceProfileV2Close] */

void FUN_104ee7210(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be35b20(param_1,param_2,lVar1);
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104ee726c; end: 104ee7637; -[SCMapPlaceProfileV2BasemapManager removeVisitedAnnotationForPlace:] */

void FUN_104ee726c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010bf043a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b1ff0;
  _objc_alloc();
  lVar1 = param_5;
  func_0x00010bfe5ec0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5;
  func_0x00010bf33240(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80(param_5);
  lVar6 = param_5;
  func_0x00010c072a60(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_5;
  func_0x00010c0d4f60(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_5;
  func_0x00010c26d760(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_5;
  func_0x00010c08c360();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_5;
  func_0x00010c0b5b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b520(param_1,param_2);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  puVar11 = puVar4;
  func_0x0001067694ec(puVar4,&PTR____CFConstantStringClassReference_110dba0d8,
                      &PTR____CFConstantStringClassReference_110e5bff8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    ppuVar12 = &PTR____CFConstantStringClassReference_110e5bbf8;
    func_0x00010676b02c(&PTR____CFConstantStringClassReference_110e5bbf8,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010c118b60(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar13);
    _objc_release(ppuVar12);
  }
  uVar14 = *(undefined8 *)(param_3 + 8);
  func_0x00010c0ba460(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar16;
  func_0x00010c1530a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8340();
  _objc_release(uVar15);
  _objc_release(uVar16);
  _objc_release(uVar14);
  uVar15 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010bfe5ec0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c0720c0();
  _objc_release(lVar1);
  _objc_release(uVar15);
  if ((int)uVar16 != 0) {
    _objc_retain(puVar4);
    uVar16 = *(undefined8 *)(param_3 + 0x30);
    *(undefined **)(param_3 + 0x30) = puVar4;
    _objc_release(uVar16);
    uVar14 = *(undefined8 *)(param_3 + 8);
    func_0x00010c0ba460(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar16;
    func_0x00010c1530a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef8340();
    _objc_release(uVar15);
    _objc_release(uVar16);
    _objc_release(uVar14);
  }
  _objc_release(puVar11);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104ee7638; end: 104ee765f;  */

uint FUN_104ee7638(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0720c0(param_2,param_2,&PTR____CFConstantStringClassReference_110e5bf58);
  return (uint)param_2 ^ 1;
}



/* Entry: 104ee7660; end: 104ee7723; -[SCMapPlaceProfileV2BasemapManager _hidePlacePinForPlaceId:] */

void FUN_104ee7660(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0ba460(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c1530a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c135460(uVar4,param_2,&PTR____CFConstantStringClassReference_110e30138,param_3);
    uVar3 = uVar4;
    func_0x00010bfc8d60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235ce0();
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ee7724; end: 104ee7893; -[SCMapPlaceProfileV2BasemapManager _highlightPlacePinForPlaceFeature:] */

undefined8 FUN_104ee7724(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_alloc();
  uVar2 = param_4;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010c0ba460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c1530a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar2 = uVar5;
  func_0x00010bfc8d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7fe0();
  _objc_release(uVar2);
  func_0x00010bef8340(uVar5,param_3,&PTR____CFConstantStringClassReference_110e30138,param_4);
  _objc_release(param_4);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c0d26a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x3fe19999a0000000;
  func_0x00010c0b8980(0x3fe19999a0000000);
  _objc_release(uVar2);
  _objc_release(uVar5);
  return uVar4;
}



/* Entry: 104ee7894; end: 104ee793f; -[SCMapPlaceProfileV2BasemapManager _edgePaddingForHalfishTrayPositionWithExtraPadding:] */

undefined8 FUN_104ee7894(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d26a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x3fe19999a0000000;
  func_0x00010c0b8980(0x3fe19999a0000000);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 104ee7940; end: 104ee7dd7; -[SCMapPlaceProfileV2BasemapManager _defaultCameraForTrayCreationWithCoordinate:boundingBox:desiredZoomLevel:needsExtraPadding:isPromoted:] */

void FUN_104ee7940(double param_1,double param_2,double param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,ulong param_7,undefined8 param_8)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  
  dVar11 = param_1;
  dVar16 = param_2;
  dVar13 = param_3;
  _objc_retain(param_7);
  puVar3 = *(undefined **)(param_5 + 8);
  func_0x00010c0ba460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0baae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar6 = param_5;
  func_0x00010be06ec0(param_5,param_6,param_8);
  if (param_7 == 0) {
    dVar15 = 0.0;
    dVar14 = 0.0;
    dVar18 = 0.0;
    dVar19 = 0.0;
  }
  else {
    dVar15 = dVar11;
    _objc_retain(param_7);
    uVar6 = param_7;
    func_0x00010c264480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aca0();
    dVar14 = dVar15;
    func_0x00010c09abe0(uVar6);
    _CLLocationCoordinate2DMake();
    uVar7 = param_7;
    dVar18 = dVar15;
    func_0x00010c0d6e60(param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    func_0x00010c08aca0(uVar7);
    dVar19 = dVar18;
    func_0x00010c09abe0(uVar7);
    _CLLocationCoordinate2DMake();
    _objc_release(uVar7);
    _objc_release();
  }
  if ((dVar18 < dVar15) || (dVar19 < dVar14)) {
LAB_104ee7ca8:
    _CLLocationCoordinate2DIsValid(param_1,param_2);
    if ((uVar6 & 1) == 0) {
      puVar4 = puVar5;
      func_0x00010bf28e60(puVar5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104ee7d98;
    }
    uVar8 = *(undefined8 *)(param_5 + 0x28);
    func_0x00010bfc1a20(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    dVar11 = param_3;
    func_0x00010bf12080(param_3);
    dVar16 = dVar11;
    _objc_release(uVar17);
    _objc_release(uVar8);
    puVar4 = PTR_PTR_1126b1e08;
    func_0x00010bf7f0e0(puVar5);
    puVar10 = *(undefined **)(param_5 + 8);
    func_0x00010c0ba460(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf29880(param_1,param_2,param_3,dVar11,dVar16,puVar4,param_6,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    dVar12 = ABS(dVar14 - dVar19);
    bVar1 = false;
    bVar2 = true;
    if (ABS(dVar15 - dVar18) <= 2.220446049250313e-16) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dVar12)) {
        bVar1 = dVar12 == 2.220446049250313e-16;
        bVar2 = 2.220446049250313e-16 <= dVar12;
      }
    }
    if (!bVar2 || bVar1) goto LAB_104ee7ca8;
    puVar10 = puVar5;
    func_0x00010bf2b200(dVar15,dVar14,dVar18,dVar19,dVar11,dVar16,dVar13,param_4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_5 + 8);
    func_0x00010c0ba460(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    FUN_104eefb50(dVar11,dVar16,dVar13,param_4);
    _objc_release(uVar17);
    _objc_release(uVar8);
    func_0x00010bf01f00(puVar10);
    dVar13 = dVar11;
    func_0x00010c0fc7c0(puVar10);
    dVar15 = dVar13;
    func_0x00010bf34640(puVar10);
    dVar13 = 1.5707963267948966 - (dVar13 * 3.141592653589793) / 180.0;
    _sin();
    dVar14 = 0.2617993877991494;
    _tan();
    dVar15 = (dVar15 * 3.141592653589793) / 180.0;
    _cos();
    uVar17 = 0x3f60000000000000;
    dVar13 = ((dVar15 * 6.283185307179586 * 6378137.0) /
             ((dVar14 * (dVar11 / dVar13 + dVar11 / dVar13)) / dVar16)) * 0.001953125;
    _log2();
    puVar4 = PTR_PTR_1126b1e08;
    dVar11 = dVar13;
    func_0x00010bf34640(puVar10);
    dVar16 = param_3;
    if (dVar13 <= 16.0) {
      dVar16 = dVar13;
    }
    func_0x00010c0fc7c0(puVar5);
    dVar13 = param_3;
    func_0x00010bf7f0e0(puVar5);
    uVar9 = *(undefined8 *)(param_5 + 8);
    func_0x00010c0ba460(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf29880(dVar11,uVar17,dVar16,param_3,dVar13,puVar4,param_6,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar9);
  }
  _objc_release(puVar10);
LAB_104ee7d98:
  _objc_release(puVar5);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104ee7dd8; end: 104ee804f; -[SCMapPlaceProfileV2BasemapManager _defaultCameraForMapPlace:needsExtraPadding:] */

void FUN_104ee7dd8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bf51c80();
  _CLLocationCoordinate2DIsValid();
  if ((uVar1 & 1) == 0) {
    puVar2 = *(undefined **)(param_3 + 8);
    func_0x00010c0ba460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c0baae0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be06ec0(param_3,param_4,param_6);
    puVar13 = PTR_PTR_1126b1e08;
    func_0x00010bf51c80(param_5);
    puVar2 = *(undefined **)(param_3 + 8);
    uVar14 = param_1;
    func_0x00010c0ba460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c0baae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bf200();
    uVar3 = *(undefined8 *)(param_3 + 8);
    uVar15 = uVar14;
    func_0x00010c0ba460();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0baae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fc7c0();
    uVar6 = *(undefined8 *)(param_3 + 8);
    uVar16 = uVar15;
    func_0x00010c0ba460(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0baae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7f0e0();
    uVar9 = *(undefined8 *)(param_3 + 8);
    func_0x00010c0ba460(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf29880(param_1,param_2,uVar14,uVar15,uVar16,puVar13,param_4,uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 104ee8050; end: 104ee817f; -[SCMapPlaceProfileV2BasemapManager _registerFavoritesChangeListener] */

void FUN_104ee8050(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0fd080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfc5600();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c272160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar3);
  return;
}



/* Entry: 104ee8180; end: 104ee81c7;  */

void FUN_104ee8180(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be691c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ee81c8; end: 104ee84af; -[SCMapPlaceProfileV2BasemapManager _onFavoriteChange:] */

void FUN_104ee81c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c0fd0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    puVar2 = PTR_PTR_1126b1ff0;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010bfe5ec0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010bf33240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51c80(*(undefined8 *)(param_3 + 0x30));
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c072ac0(param_5);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c0d4f60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010bf043a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c26d760(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c08c360();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c0b5b00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c0ed7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07b500();
    func_0x00010c01b520(param_1,param_2);
    uVar12 = *(undefined8 *)(param_3 + 0x30);
    *(undefined **)(param_3 + 0x30) = puVar2;
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar1);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar1 = *(undefined8 *)(param_3 + 0x30);
    func_0x0001067694ec(uVar1,&PTR____CFConstantStringClassReference_110dba0d8,
                        &PTR____CFConstantStringClassReference_110e5bfd8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_3 + 8);
    func_0x00010c0ba460(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c1530a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef8340();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104ee84b0; end: 104ee851b; -[SCMapPlaceProfileV2BasemapManager .cxx_destruct] */

void FUN_104ee84b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ee851c; end: 104ee8e4b; -[SCMapPlaceProfileV2WorkflowManager initWithMultiTrayServices:contextFactory:valdiRuntimeProvider:mapSession:contentFetcher:notificationPool:venueEditorScopeExposer:webBrowsingScopeExposer:webBrowsingUIContainer:unifiedPublicProfilesPresenterScopeLauncher:placeSharingScopeExposer:deepLinkHandler:placeProfileV2Scope:composerPlaceStoryServices:storyFetcher:storyPlaybackScopeExposer:storyPlaybackScopeServices:composerCoreUIServices:bitmojiAvatarId:basemapManager:mapPlacesContentServices:previewStoryFetcher:mapNavigationRouteFetcher:profilesProvider:locationProvider:mapLoggerProvider:mapViewServices:eventSender:mapPlaceSuggestAttributeTrayScopeExposer:mapPeopleFriendsProvider:circumstanceEngine:mapBrowsingContextManager:promotedPlaceActionPublisher:promotedPlaceRepository:mapBitmojiAvatarGenerator:cameraScopeExposer:caasCameraScopeBuilderServices:] */

undefined8 *
FUN_104ee851c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  puStack_80 = PTR_PTR_1126e4e58;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[5];
    puVar1[5] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_32;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[8];
    puVar1[8] = param_15;
    _objc_release(uVar2);
    uVar2 = param_16;
    func_0x00010bf44e60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[9];
    puVar1[9] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[10];
    puVar1[10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_35;
    _objc_release(uVar2);
    uVar2 = param_33;
    func_0x000109021ec0();
    *(char *)(puVar1 + 0x1f) = (char)uVar2;
    uVar2 = param_33;
    func_0x000109021ee0();
    *(char *)((long)puVar1 + 0xf9) = (char)uVar2;
    puVar3 = PTR_PTR_1126b2058;
    _objc_alloc();
    func_0x00010c036780();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    uVar5 = puVar1[2];
    uVar4 = puVar1[8];
    func_0x00010c27b220(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_104ee8e4c;
    puStack_a8 = &UNK_110859bc8;
    _objc_copyWeak(auStack_98,auStack_90);
    _objc_retain(param_11);
    uStack_a0 = param_11;
    uVar2 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7e00(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar5 = puVar1[2];
    uVar4 = puVar1[8];
    func_0x00010c27b540(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = puVar3;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_104ee9048;
    puStack_d0 = &UNK_110859bf8;
    _objc_copyWeak(auStack_c8,auStack_90);
    uVar2 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7e00(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar5 = puVar1[2];
    uVar4 = puVar1[8];
    func_0x00010c159d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_f0,auStack_90);
    _objc_retain(param_11);
    uVar2 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7e00(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    func_0x00010be899a0(puVar1);
    _objc_release(param_11);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_c8);
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
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



/* Entry: 104ee8e4c; end: 104ee9037;  */

void FUN_104ee8e4c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) goto LAB_104ee9014;
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010c07b500();
    if ((int)lVar1 != 0) {
      if (*(char *)(param_1 + 0xf8) == '\x01') {
        func_0x00010be83d40(param_1);
        puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_58 = 0xc2000000;
        pcStack_50 = FUN_104ee9038;
        puStack_48 = &UNK_110841f80;
        _objc_retain(param_1);
        lStack_40 = param_1;
        _objc_retain(param_2);
        lStack_38 = param_2;
        func_0x000100162d98("APPSTORE",&puStack_60);
        _objc_release(lStack_38);
        lVar1 = lStack_40;
        goto LAB_104ee8ff0;
      }
      func_0x00010be57460(param_1);
    }
    func_0x00010be7d4c0(param_1);
  }
  else {
    func_0x00010c27b200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be57440(param_1);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c07b500();
    if ((int)lVar1 != 0) {
      if (*(char *)(param_1 + 0xf8) == '\x01') {
        func_0x00010be83d40(param_1);
      }
      else {
        func_0x00010be57460(param_1);
      }
    }
    lVar1 = param_2;
    func_0x00010bf16500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_2;
      func_0x00010bf16500(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be79ee0(param_1);
      _objc_release(lVar1);
    }
    func_0x00010c10cf60(*(undefined8 *)(param_1 + 0x78));
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    lVar1 = param_2;
    func_0x00010c0e9800(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128ee0(uVar2);
LAB_104ee8ff0:
    _objc_release(lVar1);
  }
LAB_104ee9014:
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 104ee9038; end: 104ee9047;  */

void FUN_104ee9038(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentPlaceProfileTrayWithTray_11257ced0,
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 104ee9048; end: 104ee9097;  */

void FUN_104ee9048(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be6a640(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ee9098; end: 104ee9193;  */

void FUN_104ee9098(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(char *)(param_1 + 0xf8) == '\x01')) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c27b200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c07b500();
    if ((int)uVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c27b200();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar1);
      if ((int)uVar4 == 0) goto LAB_104ee9170;
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c27b200(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be83d40(param_1);
    }
    _objc_release(uVar1);
  }
LAB_104ee9170:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104ee9194; end: 104ee92ab; -[SCMapPlaceProfileV2WorkflowManager cleanup:] */

void FUN_104ee9194(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + 0xe0) = 1;
  uVar1 = *(ulong *)(param_1 + 0x100);
  if (uVar1 != 0) {
    func_0x00010c067fc0();
    if (uVar1 < 6) {
      uVar2 = *(undefined8 *)(&UNK_10dd8d640 + uVar1 * 8);
    }
    else {
      uVar2 = 6;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x0001008e41d4(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e7320(uVar3);
    _objc_release(uVar2);
  }
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104ee92ac;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104ee92ac; end: 104ee92fb;  */

void FUN_104ee92ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010bfaf680(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010be8b540(lVar1);
    func_0x00010bf86d80(*(undefined8 *)(lVar1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ee92fc; end: 104ee9573; -[SCMapPlaceProfileV2WorkflowManager _presentPlaceProfileTrayWithTrayData:isStacked:] */

void FUN_104ee92fc(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar9);
  if (((param_4 & 1) != 0) || (*(long *)(param_1 + 0x30) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c0b7580();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b2060;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    uVar7 = *(undefined8 *)(param_1 + 0x88);
    uVar12 = *(undefined8 *)(param_1 + 0x50);
    uVar9 = *(undefined8 *)(param_1 + 0x90);
    uVar11 = *(undefined8 *)(param_1 + 0x98);
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    uVar13 = *(undefined8 *)(param_1 + 0xa8);
    uVar5 = *(undefined8 *)(param_1 + 200);
    func_0x00010c0ba460();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0284a0(puVar4,param_2,uVar2,uVar7,uVar9,uVar12,uVar11,uVar13,uVar10,uVar1,uVar14);
    _objc_release(uVar14);
    _objc_release(uVar5);
    puVar6 = PTR_PTR_1126b2068;
    _objc_alloc();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar11 = *(undefined8 *)(param_1 + 8);
    uVar13 = *(undefined8 *)(param_1 + 0x18);
    uVar14 = *(undefined8 *)(param_1 + 0xd8);
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    uVar7 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010beef000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c036260(puVar6,param_2,puVar4,uVar2,uVar1,uVar11,uVar13,0,uVar14,uVar3,uVar5,uVar10,
                        uVar9,uVar7,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0xb8),
                        *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),param_1,
                        *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0x78),
                        *(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
    _objc_release(uVar7);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x38),param_2,puVar6);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar6;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  lVar8 = param_3;
  func_0x00010bf16500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 != 0) {
    lVar8 = param_3;
    func_0x00010bf16500(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be79ee0(param_1,param_2,lVar8,0);
    _objc_release(lVar8);
  }
  func_0x00010c1629e0(*(undefined8 *)(param_1 + 0xd8),param_2,*(undefined8 *)(param_1 + 0x30));
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  lVar8 = param_3;
  func_0x00010c0e9800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c08c400(uVar2);
  func_0x00010c09be60(uVar9,param_2,param_3,lVar8,uVar2);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ee9574; end: 104ee9617; -[SCMapPlaceProfileV2WorkflowManager _restoreNextController] */

void FUN_104ee9574(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar2);
  func_0x00010c1629e0(*(undefined8 *)(param_1 + 0xd8),param_2,*(undefined8 *)(param_1 + 0x30));
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c27b200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10cf60(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0b97c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be79ee0(param_1,param_2,uVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104ee9618; end: 104ee9717; -[SCMapPlaceProfileV2WorkflowManager _onNextTrayPositionUpdate:] */

void FUN_104ee9618(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c27b460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c27b460();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf5fb20();
    _objc_release(lVar2);
    if ((lVar1 != 2) && (uVar3 = param_3, func_0x00010c104260(), ((uint)uVar3 >> 1 & 1) == 0)) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0d26a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c27b460(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010bf034a0(param_3);
      func_0x00010c219f40(uVar5,param_2,uVar6,uVar3,uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ee9718; end: 104ee97ef; -[SCMapPlaceProfileV2WorkflowManager placeProfileLoadedForController:needsDefaultCamera:] */

void FUN_104ee9718(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (param_3 == lVar1) {
    func_0x00010c0b97c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be79ee0(param_1,param_2,lVar1,param_4);
    _objc_release(lVar1);
    if (*(char *)(param_1 + 0xf9) == '\x01') {
      uVar5 = *(undefined8 *)(param_1 + 0x78);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c0b97c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c27b200(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf61ba0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dc200(uVar5,param_2,uVar2,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  return;
}



/* Entry: 104ee97f0; end: 104ee9953; -[SCMapPlaceProfileV2WorkflowManager trayLifecycleWasCreatedForController:] */

void FUN_104ee97f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = auStack_48;
  _objc_initWeak(puVar1,param_3);
  _objc_initWeak(auStack_50,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(puVar1);
  uVar2 = param_3;
  func_0x00010c27b460(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0ba2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_50);
  _objc_copyWeak(auStack_58,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7e00(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104ee9954; end: 104ee99d7;  */

void FUN_104ee9954(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27b460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be29020(lVar1);
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ee99d8; end: 104ee9a7f; -[SCMapPlaceProfileV2WorkflowManager dismissActiveTrayController] */

void FUN_104ee99d8(long param_1)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c27b460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_104ee9a80;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x000100162d98("APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 104ee9a80; end: 104ee9b17;  */

void FUN_104ee9a80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0d26a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c27b460(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12ed40(uVar2,param_2,uVar3,1,4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ee9b18; end: 104ee9beb; -[SCMapPlaceProfileV2WorkflowManager updateTrayPositionWithPosition:] */

void FUN_104ee9b18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c27b460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104ee9bec;
    puStack_50 = &UNK_110846540;
    _objc_copyWeak(auStack_48,auStack_38);
    uStack_40 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_68);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 104ee9bec; end: 104ee9c8f;  */

void FUN_104ee9bec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c0d26a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c27b460(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219f40(uVar3,param_2,uVar4,*(undefined8 *)(param_1 + 0x28),1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104ee9c90; end: 104ee9d8b; -[SCMapPlaceProfileV2WorkflowManager openStackedTrayWithTrayData:] */

void FUN_104ee9c90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x104ee9d44;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104ee9d8c; end: 104ee9d93; -[SCMapPlaceProfileV2WorkflowManager closeAllTrays] */

void FUN_104ee9d8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8b550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeAllTrays__1125806f0,0);
  return;
}



/* Entry: 104ee9d94; end: 104ee9e47; -[SCMapPlaceProfileV2WorkflowManager _removeAllTrays:] */

void FUN_104ee9d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_48 = FUN_104ee9e48;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104ee9e48; end: 104eea0a7;  */

void FUN_104ee9e48(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
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
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010bfaf680(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010c13c220(*(undefined8 *)(lVar1 + 0x78));
    puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar10 = *(long *)(lVar1 + 0x38);
    _objc_retain(lVar10);
    param_3 = &uStack_130;
    param_4 = auStack_f0;
    lVar3 = lVar10;
    func_0x00010bf52a60();
    if (lVar3 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      lVar9 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(lVar10);
          }
          uVar11 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          uVar4 = uVar11;
          func_0x00010c27b460(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa140(puVar2);
          _objc_release(uVar4);
          func_0x00010c27b200();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar11;
          func_0x00010c0e9800();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = 0xb;
          func_0x00010bb01b4c(0xb);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar4;
          func_0x00010c0720c0();
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar11);
          uVar12 = (uint)uVar7 | uVar12;
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        param_3 = &uStack_130;
        param_4 = auStack_f0;
        lVar3 = lVar10;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar10);
    puVar6 = puVar2;
    func_0x00010bf529e0();
    if (puVar6 != (undefined8 *)0x0) {
      uVar7 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c0d26a0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      param_4 = (undefined1 *)0x1;
      param_3 = puVar2;
      func_0x00010c12ed60();
      _objc_release(uVar4);
      _objc_release(uVar7);
    }
    func_0x00010c12adc0(*(undefined8 *)(lVar1 + 0x38));
    if ((uVar12 & 1) != 0) {
      param_3 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
      func_0x00010c1dce60(*(undefined8 *)(lVar1 + 0xe8));
    }
    func_0x00010bfaf680(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_initWeak(auStack_188,lVar1);
    puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_104eea1dc;
    puStack_198 = &UNK_110859c88;
    _objc_copyWeak(auStack_190,auStack_188);
    _objc_copyWeak(auStack_1b8,auStack_188);
    _objc_retain(param_4);
    func_0x00010c0c1800(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_1b8);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_188);
    _objc_release(param_4);
    _objc_release(param_3);
    return;
  }
  return;
}



/* Entry: 104eea0a8; end: 104eea1db; -[SCMapPlaceProfileV2WorkflowManager _handleEvent:trayLifecycle:] */

void FUN_104eea0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104eea1dc;
  puStack_58 = &UNK_110859c88;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  _objc_retain(param_4);
  func_0x00010c0c1800(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104eea1dc; end: 104eea21f;  */

void FUN_104eea1dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6ca00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eea220; end: 104eea253;  */

void FUN_104eea220(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6c7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eea254; end: 104eea31b; -[SCMapPlaceProfileV2WorkflowManager _onWasRemovedForTrayLifecycle:] */

void FUN_104eea254(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0xe0) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c27b200(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be57440(param_1,param_2,uVar1);
    _objc_release(uVar1);
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x30));
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x38);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      func_0x00010c13c220(*(undefined8 *)(param_1 + 0x78));
      uVar1 = *(undefined8 *)(param_1 + 0xd8);
      *(undefined8 *)(param_1 + 0xd8) = 0;
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bf6b020(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b9860();
      _objc_release(uVar1);
    }
    else {
      func_0x00010be95760(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104eea31c; end: 104eea503; -[SCMapPlaceProfileV2WorkflowManager _onWillChangeToPosition:withInteractionMethod:] */

void FUN_104eea31c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010c27b460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5fb20();
  _objc_release(lVar2);
  if ((((uint)param_3 >> 3 & 1) == 0) || (((uint)lVar3 >> 2 & 1) == 0)) {
    if ((param_3 == 2) || (lVar3 != 2)) {
      if ((param_3 == 2) && (lVar3 != 2)) {
        func_0x00010c13c220(*(undefined8 *)(param_1 + 0x78));
        iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
        func_0x00010c22f120();
        if ((iVar1 != 0) && ((*(byte *)(param_1 + 0xb0) & 1) == 0)) {
          uVar7 = *(undefined8 *)(param_1 + 0x40);
          func_0x00010bf6b020(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b9860();
          _objc_release(uVar7);
        }
        *(undefined1 *)(param_1 + 0xb0) = 0;
      }
      goto LAB_104eea4bc;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0b97c0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be79ee0(param_1,param_2,uVar7,0);
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x30);
    func_0x00010c27b200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfd9000();
    if ((uVar5 & 1) == 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c27b200(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010c247d20();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 0xb;
      func_0x00010ba1c764(0xb);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c0720c0(uVar7,param_2,uVar6);
      _objc_release(uVar6);
      _objc_release(uVar7);
      _objc_release(uVar8);
    }
    else {
      uVar9 = 1;
    }
    _objc_release(uVar4);
    uVar8 = *(undefined8 *)(param_1 + 0x78);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0b97c0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27b520(uVar8,param_2,uVar7,uVar9);
  }
  _objc_release(uVar7);
LAB_104eea4bc:
  lVar3 = param_1;
  func_0x00010be1ee60(param_1,param_2,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7320(*(undefined8 *)(param_1 + 0x30),param_2,param_3,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104eea504; end: 104eea60f; -[SCMapPlaceProfileV2WorkflowManager _registerMapSessionResetObservable] */

void FUN_104eea504(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c160300();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104eea610; end: 104eea667;  */

void FUN_104eea610(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x100) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104eea668; end: 104eea6b3; -[SCMapPlaceProfileV2WorkflowManager _getExitTypeFromInteractionMethod:trayPosition:] */

void FUN_104eea668(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 - 1U < 2) {
    if (param_3 < 5) {
      uVar1 = *(undefined8 *)(&UNK_10dd8d670 + param_3 * 8);
    }
    else {
      uVar1 = 0;
    }
    func_0x0001008e41d4(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eea6b4; end: 104eea83f; -[SCMapPlaceProfileV2WorkflowManager _presentActiveControllerBasemapStateForMapPlace:needsDefaultCamera:] */

void FUN_104eea6b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *(ulong *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c27b200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010bfd9000();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c27b200(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c247d20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0xb;
    func_0x00010ba1c764(0xb);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar9 = 1;
  }
  _objc_release(uVar8);
  uVar10 = *(undefined8 *)(param_1 + 0x78);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c27b200(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf20c00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c27b200(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bf61ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c27b200(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c22f980();
  func_0x00010c10cf40(uVar10,param_2,param_3,uVar3,uVar9,param_4,uVar2,uVar4);
  _objc_release(param_3);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 104eea840; end: 104eeaa5f; -[SCMapPlaceProfileV2WorkflowManager _publishAdsPinTapEventWithTrayData:uiContainer:] */

void FUN_104eea840(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (((param_6 != 0) && (param_5 != 0)) && ((*(byte *)(param_3 + 0xf8) & 1) != 0)) {
    _objc_initWeak(auStack_68,param_3);
    uVar1 = *(undefined8 *)(param_3 + 200);
    func_0x00010c0ba460(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010bf345e0(uVar2);
    func_0x00010bf345e0(uVar2);
    func_0x00010c013de0(param_1,param_2,0x3ff0000000000000,0x3ff0000000000000,puVar3);
    uVar1 = *(undefined8 *)(param_3 + 0xf0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010bfe5ec0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104eeaa60;
    puStack_78 = &UNK_1108434b0;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_copyWeak(auStack_98,auStack_68);
    _objc_retain(param_5);
    func_0x00010c11adc0(uVar1);
    _objc_release(lVar4);
    _objc_release(uVar1);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 104eeaa60; end: 104eeaabf;  */

void FUN_104eeaa60(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be07760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eeaac0; end: 104eeac03; -[SCMapPlaceProfileV2WorkflowManager _emitAdContentPresentationEndedTrigger] */

void FUN_104eeaac0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b2070;
  _objc_alloc_init(PTR_PTR_1126b2070);
  func_0x00010c20e860();
  puVar2 = PTR_PTR_1126b2078;
  _objc_alloc_init(PTR_PTR_1126b2078);
  func_0x00010c1b6b40();
  func_0x00010c21ad80(puVar2,param_2,puVar1);
  puVar3 = PTR_PTR_1126b2080;
  _objc_alloc_init(PTR_PTR_1126b2080);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182e60(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf4e2c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 200);
  func_0x00010c0ba460(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c1530a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8e160();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104eeac04; end: 104eeac8b; -[SCMapPlaceProfileV2WorkflowManager _logPromotedPlaceOpenedIfNeeded:] */

void FUN_104eeac04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c07b500();
  if ((int)uVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11acc0(uVar2,param_2,0,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104eeac8c; end: 104eead13; -[SCMapPlaceProfileV2WorkflowManager _logPromotedPlaceClosedIfNeeded:] */

void FUN_104eeac8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c07b500();
  if ((int)uVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11acc0(uVar2,param_2,1,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104eead14; end: 104eeae87; -[SCMapPlaceProfileV2WorkflowManager .cxx_destruct] */

void FUN_104eead14(long param_1)

{
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa8,0);
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
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104eeae88; end: 104eeb2c7; -[SCMapPlaceProfileV2Router initWithPlaceProfileV2Scope:mapSession:contentFetcher:notificationPool:venueEditorScopeExposer:webBrowsingScopeExposer:webBrowsingUIContainer:unifiedPublicProfilesPresenterScopeLauncher:placeSharingScopeExposer:deepLinkHandler:bitmojiAvatarId:eventSender:workflowManager:mapPlaceSuggestAttributeTrayScopeExposer:circumstanceEngine:promotedPlaceActionPublisher:promotedPlaceRepository:mapBitmojiAvatarGenerator:cameraScopeExposer:caasCameraScopeBuilderServices:] */

undefined8 *
FUN_104eeae88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_initWeak(auStack_70,param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  puStack_78 = PTR_PTR_1126e4e60;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b2088;
    _objc_alloc();
    func_0x00010c003520();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_14;
    _objc_release(uVar2);
    puVar4 = auStack_70;
    _objc_loadWeakRetained(puVar4);
    _objc_storeWeak(puVar1 + 0x12,puVar4);
    _objc_release(puVar4);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[1];
    puVar1[1] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_13;
    _objc_release(uVar2);
    func_0x00010be4d180(puVar1);
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
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



/* Entry: 104eeb2c8; end: 104eeb2d3; -[SCMapPlaceProfileV2Router setActivePlaceProfileV2Controller:] */

void FUN_104eeb2c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 104eeb2d4; end: 104eeb2d7; -[SCMapPlaceProfileV2Router launchPlaceDiscoveryResultsTrayWithPivot:placeSessionId:] */

void FUN_104eeb2d4(void)

{
  return;
}



/* Entry: 104eeb2d8; end: 104eeb2db; -[SCMapPlaceProfileV2Router getETADataForPlaceWithLat:lng:] */

void FUN_104eeb2d8(void)

{
  return;
}



/* Entry: 104eeb2dc; end: 104eeb307; -[SCMapPlaceProfileV2Router closeTray] */

void FUN_104eeb2dc(long param_1)

{
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf83040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eeb308; end: 104eeb337; -[SCMapPlaceProfileV2Router maximizeTray] */

void FUN_104eeb308(long param_1)

{
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained(param_1);
  func_0x00010c28b500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eeb338; end: 104eeb427; -[SCMapPlaceProfileV2Router openWebPageForUrlWithUrl:] */

void FUN_104eeb338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010be57420(param_1);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104eeb428;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(puVar1);
    puStack_48 = puVar1;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_release(puStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104eeb428; end: 104eeb463;  */

void FUN_104eeb428(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be7f580(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104eeb464; end: 104eeb67b; -[SCMapPlaceProfileV2Router openGoogleReviewsPageWithUrl:] */

void FUN_104eeb464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x104eeb548;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(puVar1);
    puStack_48 = puVar1;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_release(puStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}


