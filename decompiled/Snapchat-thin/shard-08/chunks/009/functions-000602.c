/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106763e14; end: 106763f27;  */

void FUN_106763e14(long param_1,undefined **param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar3 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar3);
    func_0x00010be545c0(*(undefined8 *)(param_1 + 0x38));
    _objc_release(lVar3);
    ppuVar1 = param_2;
    func_0x00010c0fb7a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar1 == (undefined **)0x0) {
      lVar3 = *(long *)(param_1 + 0x28);
      ppuVar1 = &PTR____CFConstantStringClassReference_110e5ba38;
      FUN_106761b84(&PTR____CFConstantStringClassReference_110e5ba38);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,0,ppuVar1);
    }
    else {
      ppuVar2 = param_2;
      func_0x00010c0fb7a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar2;
      FUN_10675a374();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar2);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),ppuVar1,0);
    }
    _objc_release(ppuVar1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106763f28; end: 10676436f; -[SCMapPlaceProfileService fetchCategoryIconsForPlaceIDs:styleName:completion:] */

void FUN_106763f28(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_2;
  func_0x00010be74240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = param_2;
    func_0x00010bdf97a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_5);
    lVar2 = param_5;
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  if ((*(byte *)(param_2 + 0x32) & 1) == 0) {
    puVar4 = *(undefined **)(param_2 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126cd9d0);
    puVar10 = puVar4;
    func_0x00010bf166a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
  puVar5 = puVar10;
  func_0x00010bf26f60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar5 != (undefined *)0x0) {
    puVar4 = puVar5;
  }
  _objc_retain(puVar4);
  _objc_release(puVar5);
  puVar5 = puVar10;
  func_0x00010c0ceb40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar5);
    puVar6 = puVar5;
  }
  _objc_release(puVar5);
  puVar5 = puVar6;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = puVar4;
    FUN_10675ad94(puVar4);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,puVar5,0);
    _objc_release(puVar5);
  }
  else {
    puVar5 = PTR_PTR_1126cd9d8;
    _objc_alloc_init(PTR_PTR_1126cd9d8);
    puVar7 = puVar6;
    func_0x00010bf00560(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c0d3c80();
    func_0x00010c1dc3c0(puVar5);
    _objc_release(puVar8);
    _objc_release(puVar7);
    func_0x00010c1c27a0(puVar5);
    puVar7 = PTR_PTR_1126bf180;
    _objc_alloc(PTR_PTR_1126bf180);
    _objc_opt_class(PTR_PTR_1126cd9e0);
    func_0x00010c05a180(puVar7);
    puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f320();
    _objc_release(puVar8);
    _objc_initWeak(auStack_80,param_2);
    uVar9 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    _objc_copyWeak(auStack_90,auStack_80);
    uStack_88 = param_1;
    _objc_retain(puVar4);
    _objc_retain(lVar1);
    _objc_retain(puVar3);
    func_0x00010bf9b020(uVar9);
    _objc_release(uVar9);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_90);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar10);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106764370; end: 10676448b;  */

void FUN_106764370(long param_1,long param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    if (param_2 == 0) {
      lVar3 = *(long *)(param_1 + 0x38);
      ppuVar2 = &PTR____CFConstantStringClassReference_110e5ba58;
      FUN_106761b84(&PTR____CFConstantStringClassReference_110e5ba58);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,0,ppuVar2);
    }
    else {
      lVar3 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar3);
      func_0x00010be545c0(*(undefined8 *)(param_1 + 0x48));
      _objc_release(lVar3);
      lVar3 = *(long *)(param_1 + 0x38);
      ppuVar2 = (undefined **)(param_1 + 0x40);
      _objc_loadWeakRetained(ppuVar2);
      ppuVar1 = ppuVar2;
      func_0x00010bddbfc0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,ppuVar1,0);
      _objc_release(ppuVar1);
    }
    _objc_release(ppuVar2);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10676448c; end: 1067646ef; -[SCMapPlaceProfileService _categoryIconModelsFromResponse:cachedIconsById:url:prefix:] */

void FUN_10676448c(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar1 = param_3;
  func_0x00010bfe5d40(param_3);
  func_0x00010bf71fe0(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bfe5d20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        lVar10 = *(long *)(lStack_128 + lVar9 * 8);
        lVar3 = lVar10;
        func_0x00010c0fd0e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08fa60();
        _objc_release(lVar3);
        if (lVar4 != 0) {
          lVar3 = lVar10;
          func_0x00010c0fd0e0(lVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2,param_2,lVar10,lVar3);
          _objc_release(lVar3);
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  if (((*(byte *)(param_1 + 0x32) & 1) == 0) &&
     (puVar5 = puVar2, func_0x00010bf529e0(), puVar5 != (undefined *)0x0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf16680(0x40f5180000000000);
    _objc_release(uVar6);
  }
  puVar5 = param_4;
  func_0x00010c0d3c80(param_4);
  func_0x00010bef7f60();
  puVar7 = puVar5;
  FUN_10675ad94(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e06c58);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1067646f0; end: 106764797; -[SCMapPlaceProfileService _placeProfileUrlWithEndpoint:forGooglePlaceData:] */

void FUN_1067646f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e06c58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106764798; end: 106764873; -[SCMapPlaceProfileService _constructPlaceProfileDataFromCacheResponseForPlaceID:] */

void FUN_106764798(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  FUN_106765bd0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126cd990;
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar3 = lVar1;
    func_0x00010c15eb00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f40e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar4 = puVar2;
    FUN_10675bd90(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106764874; end: 1067649a7; -[SCMapPlaceProfileService _updatePlaceProfileCacheResponseForPlaceID:placeProfile:] */

void FUN_106764874(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106764948;
  puStack_48 = &UNK_110864a38;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_60,0,0);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067649a8; end: 106764a0f; -[SCMapPlaceProfileService _logGraphenePlaceCardLoadedWithSource:wasSuccess:count:] */

void FUN_1067649a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (((*(long *)(param_1 + 0x28) != 0) && (lVar1 = param_3, func_0x00010c08fa60(), param_5 != 0))
     && (lVar1 != 0)) {
    FUN_1067677c8(*(undefined8 *)(param_1 + 0x28),param_3,param_4,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106764a10; end: 106764a8f; -[SCMapPlaceProfileService _logGraphenePlacesProfileFetchLatencyWithStartTimestamp:endpoint:] */

void FUN_106764a10(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  dVar2 = param_1 * 1000.0;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c26f320();
  _objc_release(puVar1);
  FUN_1067679b0(*(undefined8 *)(param_2 + 0x28),param_4,(long)(param_1 * 1000.0 - dVar2));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106764a90; end: 106764af7; -[SCMapPlaceProfileService _defaultStyleName] */

void FUN_106764a90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  if (lRam00000001138466f0 == 2) {
    func_0x00010bf61420();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf618c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106764af8; end: 106764b7b; -[SCMapPlaceProfileService .cxx_destruct] */

void FUN_106764af8(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106764b7c; end: 106764c77; -[SCMapPlaceVisitsService initWithEagleClient:workerQueue:grapheneMetricLogger:blizzardLogger:] */

undefined1 *
FUN_106764b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126f2ef0;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106764c78; end: 106764da7; -[SCMapPlaceVisitsService getInferredLocationWithLocation:completionQueue:completion:] */

void FUN_106764c78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106764da8; end: 10676509f;  */

void FUN_106764da8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **unaff_x25;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  uVar2 = *(ulong *)(param_2 + 0x20);
  if (uVar2 != 0) {
    func_0x00010bf51c80();
    _CLLocationCoordinate2DIsValid();
    if ((uVar2 & 1) != 0) {
      puVar4 = PTR_PTR_1126cd9e8;
      _objc_alloc_init();
      puVar1 = *(undefined **)(param_2 + 0x28);
      func_0x00010bde6c60();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar4;
      func_0x00010c1bfda0();
      puVar5 = PTR_PTR_1126bc1b8;
      func_0x00010902213c();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010c08fa60();
      if (puVar7 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        ppuStack_78 = &PTR____CFConstantStringClassReference_110dadcb8;
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_70 = puVar3;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar3);
      func_0x000106b13b74(puVar5,0,puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      func_0x00010c1eeba0(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 8);
      puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c8 = 0xc2000000;
      pcStack_c0 = FUN_1067650a0;
      puStack_b8 = &UNK_110939778;
      _objc_copyWeak(auStack_98,param_2 + 0x40);
      uVar8 = *(undefined8 *)(param_2 + 0x20);
      _objc_retain(uVar8);
      uVar9 = *(undefined8 *)(param_2 + 0x30);
      uStack_b0 = uVar8;
      uStack_90 = param_1;
      _objc_retain(uVar9);
      uVar8 = *(undefined8 *)(param_2 + 0x38);
      uStack_a8 = uVar9;
      _objc_retain(uVar8);
      puVar3 = puVar4;
      uStack_a0 = uVar8;
      func_0x00010bfed640(uVar6);
      uVar6 = 1;
      FUN_106767dc8(*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x20),1);
      _objc_release(uStack_a0);
      _objc_release(uStack_a8);
      _objc_release(uStack_b0);
      _objc_destroyWeak(auStack_98);
      _objc_release(puVar5);
      unaff_x25 = &puStack_d0;
      goto LAB_106765034;
    }
  }
  uStack_88 = *(undefined8 *)PTR__NSDebugDescriptionErrorKey_110345400;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110df16f8;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be87700(param_1,*(undefined8 *)(param_2 + 0x28));
  uVar6 = 0;
  puVar3 = puVar1;
  (**(code **)(*(long *)(param_2 + 0x38) + 0x10))(*(long *)(param_2 + 0x38),0,puVar1);
LAB_106765034:
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x25 + 0x38));
  __Unwind_Resume();
  _objc_retain(puVar3);
  _objc_retain(uVar6);
  puVar1 = puVar4 + 0x38;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be2ac80(*(undefined8 *)(puVar4 + 0x40));
  _objc_release(puVar3);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067650a0; end: 106765113;  */

void FUN_1067650a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be2ac80(*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106765114; end: 1067652c7; -[SCMapPlaceVisitsService _handleInferredLocationResponse:error:captureLocation:startTimestamp:completionQueue:completion:] */

void FUN_106765114(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x00010c09ef20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_4;
    func_0x00010c09ef20(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0fd0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  func_0x00010be87700(param_1,param_2);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1067652c8;
  puStack_98 = &UNK_1108465d0;
  uStack_90 = param_5;
  lStack_88 = param_4;
  uStack_80 = param_6;
  uStack_78 = param_8;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_5);
  func_0x00010007380c(param_7,&puStack_b0);
  _objc_release(param_7);
  _objc_release(uStack_80);
  _objc_release(lStack_88);
  _objc_release(uStack_78);
  _objc_release(uStack_90);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_8);
  _objc_release(param_5);
  return;
}



/* Entry: 1067652c8; end: 106765467;  */

void FUN_1067652c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0x20);
  if (lVar10 == 0) {
    lVar10 = *(long *)(param_1 + 0x28);
    func_0x00010c09ef20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar10 != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010c09ef20();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c0fd0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c08fa60();
      _objc_release(lVar1);
      _objc_release(lVar2);
      _objc_release(lVar10);
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c09ef20(uVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126cd9f0;
        _objc_alloc(PTR_PTR_1126cd9f0);
        uVar6 = uVar4;
        func_0x00010c0fd0e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar4;
        func_0x00010c09e680(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar4;
        func_0x00010c102a20(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar4;
        func_0x00010c102a40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c036480(puVar5);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
                  (*(long *)(param_1 + 0x38),puVar5,*(undefined8 *)(param_1 + 0x20));
        _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar4);
        return;
      }
    }
    lVar1 = *(long *)(param_1 + 0x38);
    lVar10 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x000106765464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,0,lVar10);
  return;
}



/* Entry: 106765468; end: 106765597; -[SCMapPlaceVisitsService _constructLocationSignalsForLocation:] */

void FUN_106765468(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_PTR_1126cd9f8;
  uVar6 = (undefined4)((ulong)param_1 >> 0x20);
  uVar7 = (undefined4)param_1;
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  func_0x00010bf51c80(param_5);
  func_0x00010c1b9120((float)(double)CONCAT44(uVar6,uVar7),puVar1);
  func_0x00010bf51c80(param_5);
  fVar5 = (float)param_2;
  uVar7 = 0;
  func_0x00010c1be5e0(fVar5,puVar1);
  func_0x00010bf01f00(param_5);
  fVar5 = (float)(double)CONCAT44(uVar7,fVar5);
  uVar7 = 0;
  func_0x00010c167940(fVar5,puVar1);
  func_0x00010bfe4080(param_5);
  fVar5 = (float)(double)CONCAT44(uVar7,fVar5);
  uVar7 = 0;
  func_0x00010c1a9100(fVar5,puVar1);
  puVar2 = PTR_PTR_1126cda00;
  _objc_alloc_init(PTR_PTR_1126cda00);
  func_0x00010c249ca0(param_5);
  _objc_release(param_5);
  func_0x00010c207c40((float)(double)CONCAT44(uVar7,fVar5),puVar2);
  func_0x00010c1c9180(puVar1,param_4,puVar2);
  puVar3 = PTR_PTR_1126cda08;
  _objc_alloc_init(PTR_PTR_1126cda08);
  puVar4 = PTR_PTR_1126b6728;
  func_0x00010bf60d80(PTR_PTR_1126b6728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225980(puVar3,param_4,puVar4);
  _objc_release(puVar4);
  func_0x00010c18c8e0(puVar1,param_4,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106765598; end: 106765643; -[SCMapPlaceVisitsService _recordGetInferredLocationWithSuccess:hasInferredLocation:startTimestamp:] */

undefined8 **
FUN_106765598(double param_1,long param_2,undefined8 param_3,undefined8 *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 ***pppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *unaff_x21;
  char *pcVar9;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined1 *unaff_x24;
  double dVar11;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  char *pcStack_c8;
  long lStack_c0;
  undefined8 **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  long alStack_60 [2];
  char cStack_49;
  long lStack_48;
  char *pcVar10;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  dVar11 = param_1;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  FUN_106767e40(*(undefined8 *)(param_2 + 0x20),param_5,param_4,1);
  lVar2 = *(long *)(param_2 + 0x20);
  if (lVar2 == 0) {
    return (undefined8 **)0x0;
  }
  puVar7 = (undefined8 *)(long)((dVar11 - param_1) * 1000.0);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined8 **)0x0;
  if (lVar2 != 0) {
    plVar8 = *(long **)(lVar2 + 8);
    unaff_x22 = &UNK_10f391bc2;
    unaff_x23 = &UNK_10f391bbd;
    puVar1 = unaff_x23;
    if ((int)param_5 == 0) {
      puVar1 = unaff_x22;
    }
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    puVar1 = unaff_x23;
    if ((int)param_4 == 0) {
      puVar1 = unaff_x22;
    }
    func_0x00010002b838(alStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    unaff_x21 = &uStack_98;
    param_4 = &uStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110939a18);
    ppuVar3 = &puStack_80;
    puStack_80 = unaff_x21;
    func_0x00010007e5dc();
    lVar2 = 0;
    do {
      if ((&cStack_49)[lVar2] < '\0') {
        ppuVar3 = *(undefined8 ***)((long)alStack_60 + lVar2);
        __ZdlPv();
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  puStack_80 = unaff_x21;
  func_0x00010007e5dc(&puStack_80);
  lVar2 = -0x30;
  pcVar10 = &cStack_49;
  do {
    pcVar9 = pcVar10 + -0x18;
    if (*pcVar10 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar10 + -0x17));
    }
    lVar2 = lVar2 + 0x18;
    pcVar10 = pcVar9;
  } while (lVar2 != 0);
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  pppuVar5 = &ppuStack_f0;
  pcStack_a8 = FUN_106768148;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = unaff_x22;
  pcStack_c8 = pcVar9;
  lStack_c0 = lVar2;
  ppuStack_b8 = ppuVar3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  _objc_retain(puVar7);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_e8 = PTR_PTR_1126f2f18;
  ppuStack_f0 = ppuVar4;
  _objc_msgSendSuper2(&ppuStack_f0,PTR_s_init_1125d9248);
  if (pppuVar5 != (undefined8 ***)0x0) {
    _objc_retain(param_4);
    puVar6 = pppuVar5[2];
    pppuVar5[2] = (undefined8 **)param_4;
    _objc_release(puVar6);
    _objc_retain(puVar7);
    puVar6 = pppuVar5[1];
    pppuVar5[1] = (undefined8 **)puVar7;
    _objc_release(puVar6);
    _objc_storeWeak(pppuVar5 + 3,param_6);
    _objc_storeWeak(pppuVar5 + 4,param_7);
    _objc_storeWeak(pppuVar5 + 5,param_8);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar7);
  _objc_release(param_4);
  return pppuVar5;
}



/* Entry: 106765644; end: 10676580f; -[SCMapPlaceVisitsService removeVisitForPlaceID:source:completion:] */

void FUN_106765644(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106765810;
    puStack_60 = &UNK_110849530;
    _objc_retain(param_5);
    puStack_58 = param_5;
    func_0x00010c0f7fc0(uVar4);
    puVar2 = puStack_58;
  }
  else {
    puVar2 = PTR_PTR_1126cda10;
    _objc_alloc_init(PTR_PTR_1126cda10);
    func_0x00010c1dc3a0();
    _objc_initWeak(auStack_80,param_1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar3 = PTR_PTR_1126bc1b8;
    func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_90,auStack_80);
    _objc_retain(param_3);
    uStack_88 = param_4;
    _objc_retain(param_5);
    func_0x00010c12db20(uVar4);
    _objc_release(puVar3);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106765810; end: 106765867;  */

void FUN_106765810(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e5ba98,0,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106765868; end: 1067658d3;  */

void FUN_106765868(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be879c0();
  _objc_release(lVar1);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067658d4; end: 106765a03; -[SCMapPlaceVisitsService removeAllPlaceVisitsWithCompletion:] */

void FUN_1067658d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cda18;
  _objc_alloc_init(PTR_PTR_1126cda18);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c12afe0(uVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106765a04; end: 106765a67;  */

void FUN_106765a04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be879a0();
  _objc_release(lVar1);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106765a68; end: 106765b13; -[SCMapPlaceVisitsService _recordRemovedPlaceID:source:success:] */

void FUN_106765a68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long *unaff_x20;
  long *plVar9;
  undefined8 *unaff_x21;
  long unaff_x24;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  long *plStack_100;
  undefined1 **ppuStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 **appuStack_c0 [2];
  char cStack_a9;
  long alStack_a8 [2];
  undefined1 *puStack_98;
  long *plStack_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  
  puVar1 = PTR_PTR_1126cda20;
  if ((int)param_5 != 0) {
    _objc_retain(param_3);
    _objc_alloc_init(puVar1);
    func_0x00010c1dc3a0();
    _objc_release(param_3);
    func_0x00010c206c40(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  puVar6 = &uStack_70;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  puVar7 = (undefined1 *)0x1;
  if (*(long *)(param_1 + 0x20) != 0) {
    unaff_x20 = *(long **)(*(long *)(param_1 + 0x20) + 8);
    puVar1 = &UNK_10f391bbd;
    if ((int)param_5 == 0) {
      puVar1 = &UNK_10f391bc2;
    }
    func_0x00010002b838(appuStack_50,puVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&stack0xffffffffffffffc8,1);
    param_5 = &UNK_1109398d8;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_1109398d8,&uStack_70,1);
    ppuVar3 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    puVar7 = (undefined1 *)puVar6;
    unaff_x21 = &uStack_70;
    if (unaff_x24 < 0) {
      ppuVar3 = appuStack_50[0];
      __ZdlPv();
      puVar7 = (undefined1 *)puVar6;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (unaff_x24 < 0) {
    __ZdlPv(appuStack_50[0]);
  }
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  pcStack_78 = FUN_106767cb0;
  alStack_a8[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = (undefined1 **)0x0;
  plVar9 = unaff_x20;
  puStack_98 = (undefined1 *)unaff_x21;
  plStack_90 = unaff_x20;
  ppuStack_88 = ppuVar3;
  puStack_80 = &stack0xfffffffffffffff0;
  if (ppuVar4 != (undefined1 **)0x0) {
    plVar9 = (long *)ppuVar4[1];
    puVar1 = &UNK_10f391bbd;
    if ((int)param_5 == 0) {
      puVar1 = &UNK_10f391bc2;
    }
    func_0x00010002b838(appuStack_c0,puVar1);
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x00010007e1e8(&uStack_e0,appuStack_c0,alStack_a8,1);
    param_5 = &UNK_110939928;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110939928,&uStack_e0,puVar7);
    ppuVar5 = &puStack_c8;
    puStack_c8 = (undefined1 *)&uStack_e0;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_e0;
    if (cStack_a9 < '\0') {
      ppuVar5 = appuStack_c0[0];
      __ZdlPv();
      unaff_x21 = &uStack_e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_a8[0]) {
    return;
  }
  ___stack_chk_fail();
  puStack_c8 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_c8);
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  ppuVar3 = ppuVar5;
  __Unwind_Resume();
  puStack_108 = (undefined1 *)&uStack_120;
  pcStack_e8 = FUN_106767dc8;
  if (ppuVar3 != (undefined1 **)0x0) {
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    plStack_100 = plVar9;
    ppuStack_f8 = ppuVar5;
    ppuStack_f0 = &puStack_80;
    (**(code **)(*(long *)ppuVar3[1] + 0x18))(ppuVar3[1],&UNK_110939978,&uStack_120,param_5);
    func_0x00010007e5dc(&puStack_108);
  }
  return;
}



/* Entry: 106765b14; end: 106765b87; -[SCMapPlaceVisitsService _recordRemoveAllWithSuccess:] */

void FUN_106765b14(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  long *plStack_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  if ((int)param_3 != 0) {
    puVar1 = PTR_PTR_1126cda28;
    _objc_alloc_init(PTR_PTR_1126cda28);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    unaff_x20 = *(long **)(*(long *)(param_1 + 0x20) + 8);
    puVar1 = &UNK_10f391bbd;
    if ((int)param_3 == 0) {
      puVar1 = &UNK_10f391bc2;
    }
    func_0x00010002b838(appuStack_50,puVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_3 = &UNK_110939928;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_110939928,&uStack_70,1);
    ppuVar3 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar3 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  puStack_98 = (undefined1 *)&uStack_b0;
  pcStack_78 = FUN_106767dc8;
  if (ppuVar4 != (undefined1 **)0x0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    plStack_90 = unaff_x20;
    ppuStack_88 = ppuVar3;
    puStack_80 = &stack0xfffffffffffffff0;
    (**(code **)(*(long *)ppuVar4[1] + 0x18))(ppuVar4[1],&UNK_110939978,&uStack_b0,param_3);
    func_0x00010007e5dc(&puStack_98);
  }
  return;
}



/* Entry: 106765b88; end: 106765bcf; -[SCMapPlaceVisitsService .cxx_destruct] */

void FUN_106765b88(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106765bd0; end: 106766063;  */

void FUN_106765bd0(double param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uStack_31c;
  long lStack_318;
  long lStack_310;
  undefined8 uStack_308;
  undefined **ppuStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2e8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  undefined1 uStack_289;
  undefined **ppuStack_288;
  undefined4 uStack_280;
  undefined2 uStack_270;
  byte bStack_26e;
  byte bStack_26d;
  undefined1 *puStack_250;
  undefined ***pppuStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  long *plStack_220;
  undefined **ppuStack_218;
  undefined4 uStack_210;
  undefined4 uStack_200;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined1 uStack_1a1;
  undefined **ppuStack_1a0;
  undefined4 uStack_198;
  undefined2 uStack_188;
  undefined2 uStack_186;
  undefined1 *puStack_168;
  undefined ***pppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined **ppuStack_130;
  undefined4 uStack_128;
  undefined2 uStack_118;
  byte bStack_116;
  byte bStack_115;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain();
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  _objc_opt_class(PTR_PTR_1126cda30);
  if (param_2 == 0) {
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_c0,param_2);
  }
  puVar3 = &uStack_1a1;
  FUN_106766528();
  uStack_210 = 0xf;
  uStack_200 = 0x100;
  _objc_retain(param_3);
  ppuStack_218 = &PTR_SUB_110862760;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  puStack_1d0 = (undefined *)0x0;
  plStack_1b8 = (long *)0x0;
  uStack_1c0 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_186 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_198 = 10;
  uStack_188 = 0x100;
  ppuStack_1a0 = &PTR_SUB_110862700;
  uStack_150 = 0;
  puStack_158 = (undefined *)0x0;
  plStack_140 = (long *)0x0;
  uStack_148 = 0;
  plStack_138 = (long *)0x0;
  puVar4 = &uStack_289;
  uStack_1e8 = param_3;
  puStack_168 = puVar3;
  pppuStack_160 = &ppuStack_218;
  FUN_1067666a0();
  lStack_2d0 = (long)param_1;
  uStack_2f8 = 0xf;
  uStack_2e8 = 0x100;
  ppuStack_300 = &PTR_DAT_110864b98;
  uStack_2c0 = 0;
  uStack_2c8 = 0;
  lStack_2b0 = 0;
  lStack_2b8 = 0;
  plStack_2a0 = (long *)0x0;
  uStack_2a8 = 0;
  plStack_298 = (long *)0x0;
  bStack_26e = puVar4[0x1a];
  bStack_26d = puVar4[0x1b];
  uStack_280 = 8;
  uStack_270 = 0x100;
  ppuStack_288 = &PTR_DAT_110864b38;
  plStack_220 = (long *)0x0;
  lStack_238 = 0;
  lStack_240 = 0;
  plStack_228 = (long *)0x0;
  uStack_230 = 0;
  bStack_116 = (byte)uStack_186 | bStack_26e;
  bStack_115 = uStack_186._1_1_ & bStack_26d;
  uStack_128 = 4;
  uStack_118 = 0x100;
  ppuStack_130 = &PTR_SUB_1108629c8;
  pppuStack_f0 = &ppuStack_288;
  uStack_e0 = 0;
  lStack_e8 = 0;
  plStack_d0 = (long *)0x0;
  uStack_d8 = 0;
  plStack_c8 = (long *)0x0;
  lStack_318 = 0;
  lStack_310 = 0;
  uStack_308 = 0;
  uStack_31c = 0;
  puVar5 = &uStack_c0;
  puStack_250 = puVar4;
  pppuStack_248 = &ppuStack_300;
  pppuStack_f8 = &ppuStack_1a0;
  func_0x0001000e77a0(puVar5,&ppuStack_130,&lStack_318,&uStack_31c);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (lStack_318 != 0) {
    lStack_310 = lStack_318;
    __ZdlPv();
  }
  plVar1 = plStack_c8;
  ppuStack_130 = &PTR_SUB_1108629c8;
  plStack_c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_d0;
  plStack_d0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_e8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_220;
  ppuStack_288 = &PTR_DAT_110864b38;
  plStack_220 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_228;
  plStack_228 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_240 != 0) {
    lStack_238 = lStack_240;
    __ZdlPv();
  }
  plVar1 = plStack_298;
  ppuStack_300 = &PTR_DAT_110864b98;
  plStack_298 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2a0;
  plStack_2a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2b8 != 0) {
    lStack_2b0 = lStack_2b8;
    __ZdlPv();
  }
  plVar1 = plStack_138;
  ppuStack_1a0 = &PTR_SUB_110862700;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_288 = &puStack_158;
  func_0x000100105004(&ppuStack_288);
  plVar1 = plStack_1b0;
  ppuStack_218 = &PTR_SUB_110862760;
  plStack_1b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1b8;
  plStack_1b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_288 = &puStack_1d0;
  func_0x000100105004(&ppuStack_288);
  _objc_release(uStack_1e8);
  func_0x0001000e76e0(&uStack_98);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106766064; end: 1067661a3;  */

void FUN_106766064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126cda30;
  _objc_alloc(PTR_PTR_1126cda30);
  func_0x00010c020d00();
  puVar2 = puVar1;
  FUN_106766e48();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067661a4; end: 106766267;  */

void FUN_1067661a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  lVar1 = param_1;
  FUN_106765bd0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126cda38;
    FUN_106766dd4(PTR_PTR_1126cda38,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106766268; end: 106766337; -[SCMapPlacesCacheItem initWithKey:serializedItem:expirationTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106766268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f2ef8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f778);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274f778) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274f77c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274f77c) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274f780) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106766338; end: 10676635b; -[SCMapPlacesCacheItem copyWithZone:] */

undefined8 FUN_106766338(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10676635c; end: 1067663e7; -[SCMapPlacesCacheItem hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10676635c(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274f778);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274f77c);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + _DAT_11274f780);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106766490:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10676649c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(long *)((long)puVar3 + (long)_DAT_11274f780) == *(long *)(param_3 + _DAT_11274f780))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_11274f778);
      if ((lVar5 == *(long *)(param_3 + _DAT_11274f778)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_11274f77c);
        if (puVar6 != *(undefined1 **)(param_3 + _DAT_11274f77c)) {
          func_0x00010c071ae0();
          goto LAB_10676649c;
        }
        goto LAB_106766490;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10676649c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1067663e8; end: 1067664b7; -[SCMapPlacesCacheItem isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1067663e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106766490:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10676649c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (*(long *)(param_1 + (long)_DAT_11274f780) == *(long *)(param_3 + (long)_DAT_11274f780))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_11274f778);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_11274f778)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_11274f77c);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_11274f77c)) {
          func_0x00010c071ae0();
          goto LAB_10676649c;
        }
        goto LAB_106766490;
      }
    }
    lVar3 = 0;
  }
LAB_10676649c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1067664b8; end: 1067664c7; -[SCMapPlacesCacheItem key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1067664b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274f778);
}



/* Entry: 1067664c8; end: 1067664d7; -[SCMapPlacesCacheItem serializedItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1067664c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274f77c);
}



/* Entry: 1067664d8; end: 1067664e7; -[SCMapPlacesCacheItem expirationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1067664d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274f780);
}



/* Entry: 1067664e8; end: 106766527; -[SCMapPlacesCacheItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067664e8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274f77c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274f778,0);
  return;
}



/* Entry: 106766528; end: 10676658b;  */

undefined ** FUN_106766528(void)

{
  int iVar1;
  
  if ((bRam000000011381ae80 & 1) == 0) {
    iVar1 = 0x1381ae80;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&SUB_105004938,&PTR_PTR_11315ce40,0x100000000);
      ___cxa_guard_release(0x11381ae80);
    }
  }
  return &PTR_PTR_11315ce40;
}



/* Entry: 10676658c; end: 106766613;  */

void FUN_10676658c(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106766614; end: 10676669f;  */

void FUN_106766614(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067666a0; end: 10676675b;  */

undefined8 FUN_1067666a0(void)

{
  int iVar1;
  
  if ((bRam000000011381aef8 & 1) == 0) {
    iVar1 = 0x1381aef8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381ae90 = 0xe;
      puRam000000011381ae98 = &UNK_10f391a03;
      uRam000000011381aea0 = 0x1010000;
      pcRam000000011381aea8 = FUN_10676675c;
      pcRam000000011381aeb0 = FUN_106766794;
      ppuRam000000011381ae88 = &PTR_DAT_110864b98;
      uRam000000011381aec8 = 0;
      uRam000000011381aec0 = 0;
      uRam000000011381aed8 = 0;
      uRam000000011381aed0 = 0;
      uRam000000011381aee8 = 0;
      uRam000000011381aee0 = 0;
      uRam000000011381aef0 = 0;
      ___cxa_atexit(&DAT_105077cd4,0x11381ae88,0x100000000);
      ___cxa_guard_release(0x11381aef8);
    }
  }
  return 0x11381ae88;
}



/* Entry: 10676675c; end: 106766793;  */

undefined8 FUN_10676675c(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 106766794; end: 1067667e7;  */

undefined8 FUN_106766794(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf9c880(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1067667e8; end: 1067667f3; +[SCMapPlacesCacheItem table] */

undefined * FUN_1067667e8(void)

{
  return &UNK_10f391a17;
}



/* Entry: 1067667f4; end: 106766963; +[SCMapPlacesCacheItem immutableObjectParse:bufferSize:] */

void FUN_1067667f4(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126cda30;
  _objc_alloc(PTR_PTR_1126cda30);
  lVar6 = (long)*piVar1;
  uVar5 = *(ushort *)((long)piVar1 - lVar6);
  if (uVar5 < 5) {
    puVar8 = (undefined *)0x0;
LAB_1067668dc:
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar1 - lVar6))[2];
    if (uVar7 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar7);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - lVar6);
    }
    lVar6 = -lVar6;
    if (uVar5 < 7) goto LAB_1067668dc;
    if (*(short *)((long)piVar1 + lVar6 + 6) == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      lVar6 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((8 < uVar5) && (uVar7 = (ulong)*(ushort *)((long)piVar1 + lVar6 + 8), uVar7 != 0)) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar7);
      goto LAB_1067668e4;
    }
  }
  uVar4 = 0;
LAB_1067668e4:
  func_0x00010c020d00(puVar3,param_2,puVar8,puVar9,uVar4);
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106766964; end: 106766987; +[SCMapPlacesCacheItem objectClassFunctionPointer] */

undefined1  [16] FUN_106766964(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x106766980;
  auVar1._0_8_ = 0x106766978;
  return auVar1;
}



/* Entry: 106766988; end: 106766a63;  */

undefined1 *
FUN_106766988(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126f2f00;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 106766a64; end: 106766dd3;  */

void FUN_106766a64(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar6,&UNK_10f391a32);
        if (puVar6 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c086560(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar6,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar6;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar6;
            _sqlite3_column_int64(puVar6,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126cda30);
            _sqlite3_column_blob(puVar6,1);
            _sqlite3_column_bytes(puVar6,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar6);
            if (puVar3 == (undefined *)0x0) goto LAB_106766d24;
            puVar6 = PTR_PTR_1126cda38;
            _objc_alloc(PTR_PTR_1126cda38);
            puVar2 = puVar3;
            func_0x00010c086560(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c15eb00(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010bf9c880(puVar3);
            FUN_106766988(puVar6,puVar1,puVar2,puVar4,puVar5);
            param_1 = puVar3;
            goto LAB_106766b58;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar6 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126cda30);
      puVar3 = puVar6;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar6);
      if (puVar3 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126cda38;
        _objc_alloc(PTR_PTR_1126cda38);
        puVar2 = puVar3;
        func_0x00010c086560(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c15eb00(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bf9c880(puVar3);
        FUN_106766988(puVar6,puVar1,puVar2,puVar4,puVar5);
        param_1 = puVar3;
LAB_106766b58:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_106766d2c;
      }
LAB_106766d24:
      param_1 = (undefined *)0x0;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_106766d2c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106766dd4; end: 106766e47;  */

void FUN_106766dd4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_106766a64();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106766e48; end: 106767073;  */

void FUN_106766e48(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126cda38;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_106766a64();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar5 = PTR_PTR_1126cda38;
    _objc_retain(param_1);
    _objc_opt_self(puVar5);
    puVar5 = PTR_PTR_1126cda38;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010c086560(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c15eb00(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010bf9c880(param_1);
      FUN_106766988(puVar5,0xffffffffffffffff,puVar2,puVar3,puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar5 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar5 = param_1;
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar5);
    puVar5 = param_1;
    func_0x00010c15eb00(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar5);
    puVar5 = param_1;
    func_0x00010bf9c880();
    *(undefined **)(puVar1 + 0x28) = puVar5;
    _objc_retain(puVar1);
    puVar5 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106767074; end: 1067670d7;  */

void FUN_106767074(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126cda30;
    _objc_alloc(PTR_PTR_1126cda30);
    func_0x00010c020d00();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067670d8; end: 106767107; -[SCMapPlacesCacheItemChangeRequest .cxx_destruct] */

void FUN_1067670d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106767108; end: 106767113; -[SCMapPlacesCacheItemChangeRequest table] */

undefined * FUN_106767108(void)

{
  return &UNK_10f391a17;
}



/* Entry: 106767114; end: 10676715b; -[SCMapPlacesCacheItemChangeRequest createTableWithSQLite:] */

void FUN_106767114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dddea90,0x82,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10676715c; end: 1067674e3; -[SCMapPlacesCacheItemChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10676715c(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_106767074(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1067674e4(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f391aad);
    if (lVar6 == 0) goto LAB_106767480;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_106767480;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126cda30);
    func_0x00010c21c9a0(puVar7);
LAB_106767468:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f391a77);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126cda30);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10676748c;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_10676748c;
    }
    FUN_106767074(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1067674e4(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f391aed);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126cda30);
        func_0x00010c21c9a0(puVar7);
        goto LAB_106767468;
      }
    }
LAB_106767480:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_10676748c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1067674e4; end: 106767753;  */

ulong FUN_1067674e4(ulong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_2);
  pcVar4 = param_2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_1067675e8;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_1;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x0001001cde08(param_1,pcVar5,pcVar6);
    goto LAB_1067675e8;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_1067675a8;
    uVar9 = 0;
  }
  else {
LAB_1067675a8:
    pcVar7 = pcVar5;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar8 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    pcVar6 = "";
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    func_0x0001001cde08(param_1,pcVar6,pcVar8);
  }
  _objc_release(pcVar5);
LAB_1067675e8:
  _objc_release(pcVar4);
  pcVar5 = param_2;
  func_0x00010c15eb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar5 == (char *)0x0) {
    uVar10 = 0;
  }
  else {
    pcVar6 = pcVar5;
    _objc_retainAutorelease(pcVar5);
    func_0x00010bf25f00();
    pcVar7 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    uVar10 = param_1;
    func_0x0001001d1030(param_1,pcVar6,pcVar7);
  }
  _objc_release(pcVar5);
  pcVar6 = param_2;
  func_0x00010bf9c880(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce170(param_1,8,pcVar6,0);
  func_0x0001001ce220(param_1,6,uVar10 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar9 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar5);
  _objc_release(pcVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106767754; end: 1067677c7; -[SCGraphenePlaceProfileMetric2 init] */

undefined1 * FUN_106767754(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2f08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1067677c8; end: 1067679af;  */

undefined * FUN_1067677c8(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined *unaff_x23;
  undefined1 *unaff_x24;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      unaff_x23 = &UNK_10f391b76;
    }
    else {
      unaff_x23 = param_2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,unaff_x23);
    puVar5 = &UNK_10f391b77;
    if ((int)param_3 == 0) {
      puVar5 = &UNK_10f391b7c;
    }
    func_0x00010002b838(auStack_60,puVar5);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar5 = &UNK_110939808;
    param_3 = &uStack_98;
    puVar6 = &uStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110939808,puVar6,param_4);
    puStack_80 = param_3;
    func_0x00010007e5dc(&puStack_80);
    lVar7 = 0;
    puVar4 = auStack_78;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  __Unwind_Resume();
  pcStack_a8 = FUN_1067679b0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_3;
  puStack_c8 = puVar4;
  puStack_c0 = puVar1;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f391b76;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_100,puVar1);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110939858,&uStack_120,puVar6);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar3 = &puStack_150;
  pcStack_128 = FUN_106767b24;
  puStack_148 = PTR_PTR_1126f2f10;
  puStack_150 = puVar2;
  puStack_140 = puVar1;
  puStack_138 = puVar5;
  ppuStack_130 = &puStack_b0;
  _objc_msgSendSuper2(&puStack_150,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    puVar4 = (undefined1 *)ppuVar3;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)ppuVar3 + 8) = puVar4;
  }
  return (undefined *)ppuVar3;
}



/* Entry: 1067679b0; end: 106767b23;  */

undefined * FUN_1067679b0(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f391b76;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110939858,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar3 = &puStack_b0;
  pcStack_88 = FUN_106767b24;
  puStack_a8 = PTR_PTR_1126f2f10;
  puStack_b0 = puVar2;
  puStack_a0 = puVar1;
  puStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    puVar4 = (undefined1 *)ppuVar3;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)ppuVar3 + 8) = puVar4;
  }
  return (undefined *)ppuVar3;
}



/* Entry: 106767b24; end: 106767b97; -[SCGraphenePlaceVisitationMetric2 init] */

undefined1 * FUN_106767b24(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2f10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106767b98; end: 106767caf;  */

void FUN_106767b98(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  undefined8 *puVar4;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  long *plStack_100;
  undefined1 **ppuStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 **appuStack_c0 [2];
  char cStack_a9;
  long lStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar4 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    unaff_x20 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f391bbd;
    if ((int)param_2 == 0) {
      puVar1 = &UNK_10f391bc2;
    }
    func_0x00010002b838(appuStack_50,puVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = &UNK_1109398d8;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_1109398d8,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    param_3 = (undefined1 *)puVar4;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      param_3 = (undefined1 *)puVar4;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pcStack_78 = FUN_106767cb0;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = (undefined1 **)0x0;
  puStack_80 = &stack0xfffffffffffffff0;
  if (ppuVar2 != (undefined1 **)0x0) {
    unaff_x20 = (long *)ppuVar2[1];
    puVar1 = &UNK_10f391bbd;
    if ((int)param_2 == 0) {
      puVar1 = &UNK_10f391bc2;
    }
    func_0x00010002b838(appuStack_c0,puVar1);
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x00010007e1e8(&uStack_e0,appuStack_c0,&lStack_a8,1);
    param_2 = &UNK_110939928;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_110939928,&uStack_e0,param_3);
    ppuVar3 = &puStack_c8;
    puStack_c8 = (undefined1 *)&uStack_e0;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_e0;
    if (cStack_a9 < '\0') {
      ppuVar3 = appuStack_c0[0];
      __ZdlPv();
      unaff_x21 = &uStack_e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  puStack_c8 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_c8);
  if (cStack_a9 < '\0') {
    __ZdlPv(appuStack_c0[0]);
  }
  ppuVar2 = ppuVar3;
  __Unwind_Resume();
  puStack_108 = (undefined1 *)&uStack_120;
  pcStack_e8 = FUN_106767dc8;
  if (ppuVar2 != (undefined1 **)0x0) {
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    plStack_100 = unaff_x20;
    ppuStack_f8 = ppuVar3;
    ppuStack_f0 = &puStack_80;
    (**(code **)(*(long *)ppuVar2[1] + 0x18))(ppuVar2[1],&UNK_110939978,&uStack_120,param_2);
    func_0x00010007e5dc(&puStack_108);
  }
  return;
}



/* Entry: 106767cb0; end: 106767dc7;  */

void FUN_106767cb0(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  long *plStack_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  if (param_1 != 0) {
    unaff_x20 = *(long **)(param_1 + 8);
    puVar1 = &UNK_10f391bbd;
    if ((int)param_2 == 0) {
      puVar1 = &UNK_10f391bc2;
    }
    func_0x00010002b838(appuStack_50,puVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = &UNK_110939928;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20,&UNK_110939928,&uStack_70,param_3);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  puStack_98 = (undefined1 *)&uStack_b0;
  pcStack_78 = FUN_106767dc8;
  if (ppuVar3 != (undefined1 **)0x0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    plStack_90 = unaff_x20;
    ppuStack_88 = ppuVar2;
    puStack_80 = &stack0xfffffffffffffff0;
    (**(code **)(*(long *)ppuVar3[1] + 0x18))(ppuVar3[1],&UNK_110939978,&uStack_b0,param_2);
    func_0x00010007e5dc(&puStack_98);
  }
  return;
}



/* Entry: 106767dc8; end: 106767e3f;  */

void FUN_106767dc8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110939978,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106767e40; end: 106767fc3;  */

char ** FUN_106767e40(long param_1,undefined *param_2,char *param_3,char *param_4,undefined8 param_5
                     ,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  char **ppcVar2;
  char **ppcVar3;
  char **ppcVar4;
  char ***pppcVar5;
  char *pcVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  char *unaff_x21;
  char *pcVar10;
  undefined *unaff_x22;
  undefined *puVar11;
  undefined *unaff_x23;
  undefined *puVar12;
  undefined1 *unaff_x24;
  undefined1 *puVar13;
  char **ppcStack_190;
  undefined *puStack_188;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  char *pcStack_168;
  long lStack_160;
  char **ppcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined1 auStack_118 [24];
  long alStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  char *pcStack_c8;
  long lStack_c0;
  char **ppcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined1 auStack_78 [24];
  long alStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar2 = (char **)0x0;
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    unaff_x22 = &UNK_10f391bc2;
    unaff_x23 = &UNK_10f391bbd;
    puVar11 = unaff_x23;
    if ((int)param_2 == 0) {
      puVar11 = unaff_x22;
    }
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar11);
    puVar11 = unaff_x23;
    if ((int)param_3 == 0) {
      puVar11 = unaff_x22;
    }
    func_0x00010002b838(alStack_60,puVar11);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    param_2 = &UNK_1109399c8;
    unaff_x21 = acStack_98;
    param_3 = acStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    ppcVar2 = &pcStack_80;
    pcStack_80 = unaff_x21;
    func_0x00010007e5dc();
    lVar8 = 0;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        ppcVar2 = *(char ***)((long)alStack_60 + lVar8);
        __ZdlPv();
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppcVar2;
  }
  ___stack_chk_fail();
  pcStack_80 = unaff_x21;
  func_0x00010007e5dc(&pcStack_80);
  lVar8 = -0x30;
  pcVar6 = &cStack_49;
  do {
    pcVar10 = pcVar6 + -0x18;
    if (*pcVar6 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar6 + -0x17));
    }
    iVar7 = (int)param_2;
    lVar8 = lVar8 + 0x18;
    pcVar6 = pcVar10;
  } while (lVar8 != 0);
  ppcVar3 = ppcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_106767fc4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar4 = (char **)0x0;
  puVar11 = unaff_x22;
  puVar12 = unaff_x23;
  puVar13 = unaff_x24;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = unaff_x22;
  pcStack_c8 = pcVar10;
  lStack_c0 = lVar8;
  ppcStack_b8 = ppcVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (ppcVar3 != (char **)0x0) {
    plVar9 = (long *)ppcVar3[1];
    puVar11 = &UNK_10f391bc2;
    puVar12 = &UNK_10f391bbd;
    puVar1 = puVar12;
    if (iVar7 == 0) {
      puVar1 = puVar11;
    }
    puVar13 = auStack_118;
    func_0x00010002b838(auStack_118,puVar1);
    puVar1 = puVar12;
    if ((int)param_3 == 0) {
      puVar1 = puVar11;
    }
    func_0x00010002b838(alStack_100,puVar1);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar10 = acStack_138;
    param_3 = acStack_138;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110939a18);
    ppcVar4 = &pcStack_120;
    pcStack_120 = pcVar10;
    func_0x00010007e5dc();
    lVar8 = 0;
    do {
      if ((&cStack_e9)[lVar8] < '\0') {
        ppcVar4 = *(char ***)((long)alStack_100 + lVar8);
        __ZdlPv();
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return ppcVar4;
  }
  ___stack_chk_fail();
  pcStack_120 = pcVar10;
  func_0x00010007e5dc(&pcStack_120);
  lVar8 = -0x30;
  pcVar6 = &cStack_e9;
  do {
    pcVar10 = pcVar6 + -0x18;
    if (*pcVar6 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar6 + -0x17));
    }
    lVar8 = lVar8 + 0x18;
    pcVar6 = pcVar10;
  } while (lVar8 != 0);
  ppcVar2 = ppcVar4;
  __Unwind_Resume();
  pppcVar5 = &ppcStack_190;
  pcStack_148 = FUN_106768148;
  puStack_180 = puVar13;
  puStack_178 = puVar12;
  puStack_170 = puVar11;
  pcStack_168 = pcVar10;
  lStack_160 = lVar8;
  ppcStack_158 = ppcVar4;
  ppuStack_150 = &puStack_b0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_188 = PTR_PTR_1126f2f18;
  ppcStack_190 = ppcVar2;
  _objc_msgSendSuper2(&ppcStack_190,PTR_s_init_1125d9248);
  if (pppcVar5 != (char ***)0x0) {
    _objc_retain(param_3);
    pcVar6 = (char *)pppcVar5[2];
    pppcVar5[2] = (char **)param_3;
    _objc_release(pcVar6);
    _objc_retain(param_4);
    pcVar6 = (char *)pppcVar5[1];
    pppcVar5[1] = (char **)param_4;
    _objc_release(pcVar6);
    _objc_storeWeak(pppcVar5 + 3,param_5);
    _objc_storeWeak(pppcVar5 + 4,param_6);
    _objc_storeWeak(pppcVar5 + 5,param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (char **)pppcVar5;
}



/* Entry: 106767fc4; end: 106768147;  */

undefined8 **
FUN_106767fc4(long param_1,int param_2,undefined8 *param_3,undefined8 *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 ***pppuVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *unaff_x21;
  char *pcVar8;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined1 *unaff_x24;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  char *pcStack_c8;
  long lStack_c0;
  undefined8 **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  long alStack_60 [2];
  char cStack_49;
  long lStack_48;
  char *pcVar9;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined8 **)0x0;
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    unaff_x22 = &UNK_10f391bc2;
    unaff_x23 = &UNK_10f391bbd;
    puVar1 = unaff_x23;
    if (param_2 == 0) {
      puVar1 = unaff_x22;
    }
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    puVar1 = unaff_x23;
    if ((int)param_3 == 0) {
      puVar1 = unaff_x22;
    }
    func_0x00010002b838(alStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    unaff_x21 = &uStack_98;
    param_3 = &uStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110939a18);
    ppuVar2 = &puStack_80;
    puStack_80 = unaff_x21;
    func_0x00010007e5dc();
    lVar6 = 0;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        ppuVar2 = *(undefined8 ***)((long)alStack_60 + lVar6);
        __ZdlPv();
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  puStack_80 = unaff_x21;
  func_0x00010007e5dc(&puStack_80);
  lVar6 = -0x30;
  pcVar9 = &cStack_49;
  do {
    pcVar8 = pcVar9 + -0x18;
    if (*pcVar9 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar9 + -0x17));
    }
    lVar6 = lVar6 + 0x18;
    pcVar9 = pcVar8;
  } while (lVar6 != 0);
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  pppuVar4 = &ppuStack_f0;
  pcStack_a8 = FUN_106768148;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = unaff_x22;
  pcStack_c8 = pcVar8;
  lStack_c0 = lVar6;
  ppuStack_b8 = ppuVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_e8 = PTR_PTR_1126f2f18;
  ppuStack_f0 = ppuVar3;
  _objc_msgSendSuper2(&ppuStack_f0,PTR_s_init_1125d9248);
  if (pppuVar4 != (undefined8 ***)0x0) {
    _objc_retain(param_3);
    puVar5 = pppuVar4[2];
    pppuVar4[2] = (undefined8 **)param_3;
    _objc_release(puVar5);
    _objc_retain(param_4);
    puVar5 = pppuVar4[1];
    pppuVar4[1] = (undefined8 **)param_4;
    _objc_release(puVar5);
    _objc_storeWeak(pppuVar4 + 3,param_5);
    _objc_storeWeak(pppuVar4 + 4,param_6);
    _objc_storeWeak(pppuVar4 + 5,param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return pppuVar4;
}



/* Entry: 106768148; end: 106768253; -[SCMapPlaceDiscoveryScope initWithBitmojiAvatarId:currentUserId:placeDiscoveryLifecycleDelegate:operaPresenterViewController:trayDetailsObservable:] */

undefined1 *
FUN_106768148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f2f18;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106768254; end: 10676825b; -[SCMapPlaceDiscoveryScope currentUserId] */

undefined8 FUN_106768254(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10676825c; end: 106768263; -[SCMapPlaceDiscoveryScope bitmojiAvatarId] */

undefined8 FUN_10676825c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106768264; end: 10676827b; -[SCMapPlaceDiscoveryScope placeDiscoveryLifecycleDelegate] */

void FUN_106768264(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10676827c; end: 106768293; -[SCMapPlaceDiscoveryScope operaPresenterViewController] */

void FUN_10676827c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106768294; end: 1067682ab; -[SCMapPlaceDiscoveryScope trayDetailsObservable] */

void FUN_106768294(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067682ac; end: 1067682f3; -[SCMapPlaceDiscoveryScope .cxx_destruct] */

void FUN_1067682ac(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067682f4; end: 10676843f; -[SCVisualPlacesTrayDetails initWithPlacePivot:shouldRecenterPlaces:initialOpen:searchThisArea:respectUserLocation:placeLocation:openSource:sourceSessionId:footerActionId:] */

undefined1 *
FUN_1067682f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_5);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_1126f2f20;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    *(undefined1 *)((long)puVar1 + 0xb) = param_9;
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106768440; end: 106768463; -[SCVisualPlacesTrayDetails copyWithZone:] */

undefined8 FUN_106768440(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106768464; end: 10676846b; -[SCVisualPlacesTrayDetails placePivot] */

undefined8 FUN_106768464(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10676846c; end: 106768473; -[SCVisualPlacesTrayDetails shouldRecenterPlaces] */

undefined1 FUN_10676846c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106768474; end: 10676847b; -[SCVisualPlacesTrayDetails initialOpen] */

undefined1 FUN_106768474(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10676847c; end: 106768483; -[SCVisualPlacesTrayDetails searchThisArea] */

undefined1 FUN_10676847c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106768484; end: 10676848b; -[SCVisualPlacesTrayDetails respectUserLocation] */

undefined1 FUN_106768484(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10676848c; end: 106768493; -[SCVisualPlacesTrayDetails placeLocation] */

undefined1  [16] FUN_10676848c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x30);
}



/* Entry: 106768494; end: 10676849b; -[SCVisualPlacesTrayDetails openSource] */

undefined8 FUN_106768494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10676849c; end: 1067684a3; -[SCVisualPlacesTrayDetails sourceSessionId] */

undefined8 FUN_10676849c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1067684a4; end: 1067684ab; -[SCVisualPlacesTrayDetails footerActionId] */

undefined8 FUN_1067684a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1067684ac; end: 1067684f3; -[SCVisualPlacesTrayDetails .cxx_destruct] */

void FUN_1067684ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1067684f4; end: 1067689cb;  */

void FUN_1067684f4(undefined *param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  puVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar3 == (undefined *)0x0) {
      _objc_release(param_1);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010bf4b900();
      if ((int)puVar8 != 0) {
        func_0x00010befa120(puVar3);
      }
      puVar8 = puVar2;
      func_0x00010bf4b900();
      if ((int)puVar8 != 0) {
        func_0x00010befa120(puVar3);
      }
      puVar8 = puVar2;
      func_0x00010bf4b900();
      if ((int)puVar8 != 0) {
        func_0x00010befa120(puVar3);
      }
      if (((param_2 & 1) != 0) || (puVar8 = puVar2, func_0x00010bf4b900(), (int)puVar8 != 0)) {
        func_0x00010befa120(puVar3);
      }
      puVar8 = puVar2;
      func_0x00010bf4b900();
      if ((int)puVar8 != 0) {
        func_0x00010befa120(puVar3);
      }
      puVar8 = puVar2;
      func_0x00010bf4b900();
      if ((int)puVar8 != 0) {
        func_0x00010befa120(puVar3);
      }
      puVar8 = puVar2;
      func_0x00010bf4b900();
      if ((int)puVar8 != 0) {
        func_0x00010befa120(puVar3);
      }
      puVar8 = puVar2;
      func_0x00010bf4b900();
      if ((int)puVar8 != 0) {
        func_0x00010befa120(puVar3);
      }
      puVar8 = puVar3;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
        ___stack_chk_fail();
        _objc_retain();
        puVar3 = param_1;
        func_0x00010c08fa60();
        if (puVar3 == (undefined *)0x0) {
          puVar8 = (undefined *)0x0;
        }
        else {
          puVar3 = param_1;
          func_0x00010bf44740();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar3;
          func_0x00010bf529e0();
          if (puVar2 == (undefined *)0x0) {
            puVar8 = (undefined *)0x0;
          }
          else {
            puVar8 = puVar3;
            func_0x00010bfb1920(puVar3);
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(puVar3);
        }
        _objc_release(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
      return;
    }
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      lVar7 = *(long *)((long)puVar8 * 8);
      lVar4 = lVar7;
      func_0x00010c0fc8e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf32ee0();
      _objc_release(lVar4);
      if (lVar5 == 0) {
LAB_1067687c4:
        func_0x00010befa120(puVar2);
      }
      else {
        lVar4 = lVar7;
        func_0x00010c0fc8e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf32ee0();
        _objc_release(lVar4);
        if (lVar5 == 0) goto LAB_1067687c4;
        lVar4 = lVar7;
        func_0x00010c0fc8e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf32ee0();
        _objc_release(lVar4);
        if (lVar5 == 0) goto LAB_1067687c4;
        lVar4 = lVar7;
        func_0x00010c0fc8e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf32ee0();
        _objc_release(lVar4);
        if (lVar5 == 0) goto LAB_1067687c4;
        lVar4 = lVar7;
        func_0x00010c0fc8e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf32ee0();
        _objc_release(lVar4);
        if (lVar5 == 0) goto LAB_1067687c4;
        lVar4 = lVar7;
        func_0x00010c0fc8e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf32ee0();
        _objc_release(lVar4);
        if (lVar5 == 0) goto LAB_1067687c4;
        lVar4 = lVar7;
        func_0x00010c0fc8e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf32ee0();
        _objc_release(lVar4);
        if (lVar5 == 0) goto LAB_1067687c4;
        func_0x00010c0fc8e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar7;
        func_0x00010bf32ee0();
        _objc_release(lVar7);
        if (lVar4 == 0) goto LAB_1067687c4;
      }
      puVar8 = puVar8 + 1;
    } while (puVar3 != puVar8);
    puVar3 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1067689cc; end: 106768a5f;  */

void FUN_1067689cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x00010bfb1920(lVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106768a60; end: 106768b83;  */

void FUN_106768a60(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 auStack_50 [5];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_2;
  func_0x00010bf32ee0();
  if (lVar1 == 0) {
    puVar5 = auStack_50 + 4;
    ppuVar6 = &PTR_PTR_110939cc0;
  }
  else {
    lVar1 = param_2;
    func_0x00010bf32ee0();
    if (lVar1 == 0) {
      puVar5 = auStack_50 + 3;
      ppuVar6 = &PTR_PTR_110939cd0;
    }
    else {
      lVar1 = param_2;
      func_0x00010bf32ee0();
      if (lVar1 == 0) {
        puVar5 = auStack_50 + 2;
        ppuVar6 = &PTR_PTR_110939cc8;
      }
      else {
        lVar1 = param_2;
        func_0x00010bf32ee0();
        puVar5 = auStack_50 + 1;
        ppuVar6 = &PTR_PTR_110939cd8;
        if (lVar1 != 0) {
          puVar5 = auStack_50;
          ppuVar6 = &PTR_PTR_110939ce0;
        }
      }
    }
  }
  *puVar5 = *ppuVar6;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(param_3);
    puVar2 = PTR_PTR_1126b2050;
    _objc_alloc_init(PTR_PTR_1126b2050);
    lVar1 = param_2;
    func_0x00010c0fd0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar2);
    _objc_release(lVar1);
    func_0x00010c08aca0(param_2);
    uVar7 = param_1;
    func_0x00010c09abe0(param_2);
    FUN_10676af10(param_1,uVar7,puVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010c1e5040(puVar2);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c118b60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110dd6038;
    lVar1 = param_2;
    func_0x00010c0870c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10676b02c(&PTR____CFConstantStringClassReference_110dd6038,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(ppuVar6);
    _objc_release(lVar1);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c118b60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110dbf1b8;
    lVar1 = param_2;
    func_0x00010c0d4f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10676b02c(&PTR____CFConstantStringClassReference_110dbf1b8,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(ppuVar6);
    _objc_release(lVar1);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c118b60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110e32618;
    lVar1 = param_2;
    func_0x00010c0fd0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10676b02c(&PTR____CFConstantStringClassReference_110e32618,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(ppuVar6);
    _objc_release(lVar1);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c118b60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110e5bb98;
    lVar1 = param_2;
    func_0x00010c072ac0(param_2);
    FUN_10676b0b8(&PTR____CFConstantStringClassReference_110e5bb98,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(ppuVar6);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c118b60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110dad058;
    FUN_10676b02c(&PTR____CFConstantStringClassReference_110dad058,
                  &PTR____CFConstantStringClassReference_110e5bd78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(ppuVar6);
    _objc_release(puVar3);
    lVar1 = param_2;
    func_0x00010c087500();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar4 != 0) {
      puVar3 = puVar2;
      func_0x00010c118b60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR____CFConstantStringClassReference_110e31798;
      lVar1 = param_2;
      func_0x00010c087500(param_2);
      _objc_retainAutoreleasedReturnValue();
      FUN_10676b02c(&PTR____CFConstantStringClassReference_110e31798,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(ppuVar6);
      _objc_release(lVar1);
      _objc_release(puVar3);
    }
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      puVar3 = puVar2;
      func_0x00010c118b60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR____CFConstantStringClassReference_110e5bbb8;
      FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bbb8,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(ppuVar6);
      _objc_release(puVar3);
    }
    _objc_release(param_3);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106768b84; end: 106768f53;  */

void FUN_106768b84(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2050;
  _objc_alloc_init(PTR_PTR_1126b2050);
  lVar2 = param_2;
  func_0x00010c0fd0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar1);
  _objc_release(lVar2);
  func_0x00010c08aca0(param_2);
  uVar6 = param_1;
  func_0x00010c09abe0(param_2);
  FUN_10676af10(param_1,uVar6,puVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c1e5040(puVar1);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110dd6038;
  lVar2 = param_2;
  func_0x00010c0870c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110dd6038,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(ppuVar5);
  _objc_release(lVar2);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110dbf1b8;
  lVar2 = param_2;
  func_0x00010c0d4f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110dbf1b8,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(ppuVar5);
  _objc_release(lVar2);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110e32618;
  lVar2 = param_2;
  func_0x00010c0fd0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110e32618,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(ppuVar5);
  _objc_release(lVar2);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110e5bb98;
  lVar2 = param_2;
  func_0x00010c072ac0(param_2);
  FUN_10676b0b8(&PTR____CFConstantStringClassReference_110e5bb98,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(ppuVar5);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110dad058;
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110dad058,
                &PTR____CFConstantStringClassReference_110e5bd78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3);
  _objc_release(ppuVar5);
  _objc_release(puVar3);
  lVar2 = param_2;
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar4 != 0) {
    puVar3 = puVar1;
    func_0x00010c118b60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110e31798;
    lVar2 = param_2;
    func_0x00010c087500(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10676b02c(&PTR____CFConstantStringClassReference_110e31798,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(ppuVar5);
    _objc_release(lVar2);
    _objc_release(puVar3);
  }
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    puVar3 = puVar1;
    func_0x00010c118b60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110e5bbb8;
    FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bbb8,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(ppuVar5);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106768f54; end: 1067693a7;  */

void FUN_106768f54(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = 0;
  uVar5 = param_1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (uVar6 == 0) {
      _objc_release(uVar5);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
        ___stack_chk_fail();
        puVar4 = PTR_PTR_1126b2050;
        _objc_retain();
        _objc_alloc_init(puVar4);
        uVar6 = param_1;
        func_0x00010c0fd0c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a99c0(puVar4);
        _objc_release(uVar6);
        func_0x00010c0fd1a0(param_1);
        func_0x00010c0fd1a0(param_1);
        FUN_10676af10(uVar15,puVar4);
        uVar6 = param_1;
        func_0x00010c0ed7e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar6;
        FUN_106768f54();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar5;
        func_0x00010c0d3c80();
        _objc_release(uVar5);
        _objc_release(uVar6);
        ppuVar12 = &PTR____CFConstantStringClassReference_110e5beb8;
        uVar6 = param_1;
        func_0x00010c08c340(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_1);
        FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5beb8,uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        func_0x00010befa120(uVar13);
        func_0x00010c1e5040(puVar4);
        _objc_release(ppuVar12);
        _objc_release(uVar13);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
      return;
    }
    uVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar5);
      }
      puVar14 = *(undefined **)(uVar13 * 8);
      uVar7 = param_1;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bf4b900();
      uVar10 = param_1;
      if (((ulong)puVar8 & 1) == 0) {
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar9 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar8);
        if ((uVar9 & 1) != 0) goto LAB_1067691fc;
        puVar8 = puVar2;
        func_0x00010bf4b900();
        if (((ulong)puVar8 & 1) != 0) {
LAB_10676928c:
          func_0x00010c0dff20(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = PTR_PTR_1126bf1c0;
          _objc_alloc_init(PTR_PTR_1126bf1c0);
          func_0x00010c1b6b40();
          func_0x00010bf885a0(uVar10);
          puVar8 = puVar14;
          func_0x00010c27e100(puVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1910c0();
          _objc_release(puVar8);
          func_0x00010befa120(puVar4);
          goto LAB_10676923c;
        }
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar9 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar8);
        if ((uVar9 & 1) != 0) goto LAB_10676928c;
        func_0x00010c0dff20(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
LAB_1067691fc:
        func_0x00010c0dff20(param_1);
        _objc_retainAutoreleasedReturnValue();
        FUN_10676b02c(puVar14,uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
LAB_10676923c:
        _objc_release(puVar14);
      }
      _objc_release(uVar10);
      _objc_release(uVar7);
      uVar13 = uVar13 + 1;
    } while (uVar6 != uVar13);
    uVar6 = uVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1067693a8; end: 1067694eb;  */

void FUN_1067693a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR_PTR_1126b2050;
  _objc_retain();
  _objc_alloc_init(puVar1);
  uVar2 = param_2;
  func_0x00010c0fd0c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar1);
  _objc_release(uVar2);
  func_0x00010c0fd1a0(param_2);
  func_0x00010c0fd1a0(param_2);
  FUN_10676af10(param_1,puVar1);
  uVar2 = param_2;
  func_0x00010c0ed7e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_106768f54();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d3c80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e5beb8;
  uVar2 = param_2;
  func_0x00010c08c340(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5beb8,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010befa120(uVar4);
  func_0x00010c1e5040(puVar1);
  _objc_release(ppuVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067694ec; end: 10676a177;  */

void FUN_1067694ec(undefined8 param_1,undefined **param_2,undefined **param_3,undefined **param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar2 = (undefined **)PTR_PTR_1126b2050;
  _objc_alloc_init();
  ppuVar6 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(ppuVar2);
  _objc_release(ppuVar6);
  func_0x00010bf51c80(param_2);
  func_0x00010bf51c80(param_2);
  FUN_10676af10(param_1,ppuVar2);
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  ppuVar11 = &PTR____CFConstantStringClassReference_110dd6038;
  ppuVar6 = param_2;
  func_0x00010bf33240(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110dd6038,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar3);
  _objc_release(ppuVar11);
  _objc_release(ppuVar6);
  ppuVar11 = &PTR____CFConstantStringClassReference_110dbf1b8;
  ppuVar6 = param_2;
  func_0x00010c0d4f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110dbf1b8,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar3);
  _objc_release(ppuVar11);
  _objc_release(ppuVar6);
  ppuVar11 = &PTR____CFConstantStringClassReference_110e32618;
  ppuVar6 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110e32618,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar3);
  _objc_release(ppuVar11);
  _objc_release(ppuVar6);
  ppuVar11 = &PTR____CFConstantStringClassReference_110e5bbd8;
  ppuVar6 = param_2;
  func_0x00010bf043a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bbd8,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar3);
  _objc_release(ppuVar11);
  _objc_release(ppuVar6);
  ppuVar11 = &PTR____CFConstantStringClassReference_110e5bcd8;
  ppuVar6 = param_2;
  func_0x00010c0b5b00(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bcd8,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar3);
  _objc_release(ppuVar11);
  _objc_release(ppuVar6);
  ppuVar11 = &PTR____CFConstantStringClassReference_110dad058;
  ppuVar6 = &PTR____CFConstantStringClassReference_110e5bd78;
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110dad058);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar3);
  _objc_release(ppuVar11);
  ppuVar11 = param_2;
  func_0x00010bf043a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar11;
  FUN_1067689cc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar11);
  ppuVar11 = ppuVar9;
  func_0x00010c08fa60();
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e5bbf8;
    ppuVar6 = ppuVar9;
    FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bbf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar3);
    _objc_release(ppuVar11);
  }
  ppuVar11 = param_2;
  func_0x00010c08c360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar12 = &PTR____CFConstantStringClassReference_110e5beb8;
    ppuVar11 = param_2;
    func_0x00010c08c360();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar11;
    FUN_10676b02c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar3);
    _objc_release(ppuVar12);
    _objc_release(ppuVar11);
  }
  ppuVar11 = param_2;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  func_0x00010c08fa60();
  _objc_release(ppuVar11);
  if (ppuVar12 != (undefined **)0x0) {
    ppuVar11 = &PTR____CFConstantStringClassReference_110e5bc18;
    ppuVar6 = param_2;
    func_0x00010c26d760(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bc18,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar3);
    _objc_release(ppuVar11);
    _objc_release(ppuVar6);
    ppuVar12 = &PTR____CFConstantStringClassReference_110e06dd8;
    ppuVar11 = param_2;
    func_0x00010c26d760();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar11;
    FUN_10676b02c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar3);
    _objc_release(ppuVar12);
    _objc_release(ppuVar11);
    ppuVar11 = param_3;
    func_0x00010c08fa60();
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar11 = &PTR____CFConstantStringClassReference_110e5bc58;
      ppuVar6 = param_3;
      FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bc58);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar3);
      _objc_release(ppuVar11);
    }
  }
  dVar14 = 0.0;
  ppuVar12 = param_2;
  func_0x00010c0ed7e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar12;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (ppuVar11 != (undefined **)0x0) {
    ppuVar8 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(ppuVar12);
      }
      lVar13 = *(long *)((long)ppuVar8 * 8);
      lVar4 = lVar13;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar4 != 0) {
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(ppuVar3);
        _objc_release(lVar13);
      }
      ppuVar8 = (undefined **)((long)ppuVar8 + 1);
    } while (ppuVar11 != ppuVar8);
    ppuVar11 = ppuVar12;
    func_0x00010bf52a60();
  }
  _objc_release(ppuVar12);
  ppuVar11 = param_2;
  func_0x00010c072a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar11 != (undefined **)0x0) {
    ppuVar12 = &PTR____CFConstantStringClassReference_110e5bb98;
    ppuVar11 = param_2;
    func_0x00010c072a60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar11;
    func_0x00010bf1f3c0();
    FUN_10676b0b8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(ppuVar3);
    _objc_release(ppuVar12);
    _objc_release(ppuVar11);
  }
  ppuVar12 = &PTR____CFConstantStringClassReference_110e5bbb8;
  ppuVar11 = ppuVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar11 == (undefined **)0x0) {
    ppuVar11 = param_4;
    func_0x00010c08fa60();
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar6 = param_4;
      FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bbb8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar3);
      ppuVar11 = ppuVar12;
      goto LAB_106769b6c;
    }
  }
  else {
LAB_106769b6c:
    _objc_release(ppuVar11);
  }
  ppuVar11 = ppuVar3;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  func_0x00010c0d3c80();
  func_0x00010c1e5040(ppuVar2);
  _objc_release(ppuVar12);
  _objc_release(ppuVar11);
  _objc_release(ppuVar9);
  _objc_release(ppuVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(ppuVar6);
  ppuVar2 = (undefined **)PTR_PTR_1126b2050;
  _objc_alloc_init(PTR_PTR_1126b2050);
  ppuVar3 = param_2;
  func_0x00010c0fd0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(ppuVar2);
  _objc_release(ppuVar3);
  func_0x00010c08aca0(param_2);
  dVar15 = dVar14;
  func_0x00010c09abe0(param_2);
  FUN_10676af10(dVar14,dVar15,ppuVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c1e5040(ppuVar2);
  _objc_release(puVar5);
  ppuVar3 = ppuVar2;
  func_0x00010c118b60(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &PTR____CFConstantStringClassReference_110dd6038;
  ppuVar11 = param_2;
  func_0x00010c0870c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110dd6038,ppuVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(ppuVar3);
  _objc_release(ppuVar9);
  _objc_release(ppuVar11);
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar2;
  func_0x00010c118b60(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &PTR____CFConstantStringClassReference_110dbf1b8;
  ppuVar11 = param_2;
  func_0x00010c09e640(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110dbf1b8,ppuVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(ppuVar3);
  _objc_release(ppuVar9);
  _objc_release(ppuVar11);
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar2;
  func_0x00010c118b60(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &PTR____CFConstantStringClassReference_110e32618;
  ppuVar11 = param_2;
  func_0x00010c0fd0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110e32618,ppuVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(ppuVar3);
  _objc_release(ppuVar9);
  _objc_release(ppuVar11);
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar2;
  func_0x00010c118b60(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &PTR____CFConstantStringClassReference_110dad058;
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110dad058,
                &PTR____CFConstantStringClassReference_110e5bd78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(ppuVar3);
  _objc_release(ppuVar11);
  _objc_release(ppuVar3);
  ppuVar3 = param_2;
  func_0x00010c259320();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar3;
  func_0x00010c11f900();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar11 == (undefined **)0x0) {
LAB_106769fe0:
    _objc_release(ppuVar3);
  }
  else {
    ppuVar9 = param_2;
    func_0x00010c259320(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0df1e0();
    _objc_release(ppuVar9);
    _objc_release(ppuVar11);
    _objc_release(ppuVar3);
    if (2.0 <= dVar14) {
      ppuVar3 = ppuVar2;
      func_0x00010c118b60(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = &PTR____CFConstantStringClassReference_110e06dd8;
      ppuVar11 = param_2;
      func_0x00010c259320(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar11;
      func_0x00010c11f900();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar12;
      func_0x00010c26e500();
      _objc_retainAutoreleasedReturnValue();
      FUN_10676b02c(&PTR____CFConstantStringClassReference_110e06dd8,ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(ppuVar3);
      _objc_release(ppuVar10);
      _objc_release(ppuVar8);
      _objc_release(ppuVar12);
      _objc_release(ppuVar9);
      _objc_release(ppuVar11);
      _objc_release(ppuVar3);
      ppuVar3 = ppuVar2;
      func_0x00010c118b60(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = &PTR____CFConstantStringClassReference_110e5bc58;
      FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bc58,
                    &PTR____CFConstantStringClassReference_110dba0d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(ppuVar3);
      _objc_release(ppuVar11);
      goto LAB_106769fe0;
    }
  }
  ppuVar3 = param_2;
  func_0x00010c0fd340();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar3;
  FUN_1067684f4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar11;
  FUN_1067689cc();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar2;
  func_0x00010c118b60(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = &PTR____CFConstantStringClassReference_110e5bbd8;
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bbd8,ppuVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(ppuVar9);
  _objc_release(ppuVar12);
  _objc_release(ppuVar9);
  ppuVar9 = ppuVar3;
  func_0x00010c08fa60();
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar9 = ppuVar2;
    func_0x00010c118b60(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = &PTR____CFConstantStringClassReference_110e5bbf8;
    FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bbf8,ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(ppuVar9);
    _objc_release(ppuVar12);
    _objc_release(ppuVar9);
  }
  ppuVar9 = ppuVar6;
  func_0x00010c08fa60();
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar9 = ppuVar2;
    func_0x00010c118b60(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = &PTR____CFConstantStringClassReference_110e5bbb8;
    FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bbb8,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(ppuVar9);
    _objc_release(ppuVar12);
    _objc_release(ppuVar9);
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar11);
  _objc_release(ppuVar6);
  _objc_release(param_2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10676a178; end: 10676a2bf;  */

void FUN_10676a178(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_3);
      }
      uVar7 = *(undefined8 *)(lVar10 * 8);
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar1);
      _objc_release(uVar7);
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_retain();
    puVar1 = PTR_PTR_1126b2050;
    _objc_alloc_init(PTR_PTR_1126b2050);
    func_0x00010bf51c80(param_3);
    func_0x00010bf51c80(param_3);
    FUN_10676af10(uVar11,puVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010c1e5040(puVar1);
    _objc_release(puVar3);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126bf1b0;
    _objc_alloc_init(PTR_PTR_1126bf1b0);
    func_0x00010c1a2e00(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126bf1b8;
    _objc_alloc_init(PTR_PTR_1126bf1b8);
    puVar4 = puVar1;
    func_0x00010bfc1860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1de8e0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010bf51c80(param_3);
    puVar3 = puVar1;
    func_0x00010bfc1860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c102a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9120(uVar11);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010bf51c80(param_3);
    puVar3 = puVar1;
    func_0x00010bfc1860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c102a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1be5e0(param_2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c118b60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR____CFConstantStringClassReference_110dff0f8;
    lVar2 = param_3;
    func_0x00010bf8aa20(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10676b02c(&PTR____CFConstantStringClassReference_110dff0f8,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(ppuVar8);
    _objc_release(lVar2);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c118b60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR____CFConstantStringClassReference_110e5bed8;
    lVar2 = param_3;
    func_0x00010bf5b460(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bed8,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(ppuVar8);
    _objc_release(lVar2);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c118b60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR____CFConstantStringClassReference_110e5bef8;
    lVar2 = param_3;
    func_0x00010bf1b9c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bef8,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(ppuVar8);
    _objc_release(lVar2);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c118b60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR____CFConstantStringClassReference_110e5bf18;
    lVar2 = param_3;
    func_0x00010c15adc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bf18,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(ppuVar8);
    _objc_release(lVar2);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c118b60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR____CFConstantStringClassReference_110e31798;
    lVar2 = param_3;
    func_0x00010c0d4f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10676b02c(&PTR____CFConstantStringClassReference_110e31798,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(ppuVar8);
    _objc_release(lVar2);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c118b60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR____CFConstantStringClassReference_110dad058;
    FUN_10676b02c(&PTR____CFConstantStringClassReference_110dad058,
                  &PTR____CFConstantStringClassReference_110dfe378);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(ppuVar8);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c118b60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR____CFConstantStringClassReference_110e07238;
    lVar2 = param_3;
    func_0x00010c237fc0();
    ppuVar8 = &PTR____CFConstantStringClassReference_110dad378;
    if ((int)lVar2 == 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110dad398;
    }
    FUN_10676b02c(&PTR____CFConstantStringClassReference_110e07238,ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(ppuVar9);
    _objc_release(puVar3);
    lVar2 = param_3;
    func_0x00010c0fc060();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar5 != 0) {
      puVar3 = puVar1;
      func_0x00010c118b60(puVar1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = &PTR____CFConstantStringClassReference_110e540b8;
      lVar2 = param_3;
      func_0x00010c0fc060(param_3);
      _objc_retainAutoreleasedReturnValue();
      FUN_10676b02c(&PTR____CFConstantStringClassReference_110e540b8,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(ppuVar8);
      _objc_release(lVar2);
      _objc_release(puVar3);
    }
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10676a2c0; end: 10676a7fb;  */

void FUN_10676a2c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b2050;
  _objc_alloc_init(PTR_PTR_1126b2050);
  func_0x00010bf51c80(param_3);
  func_0x00010bf51c80(param_3);
  FUN_10676af10(param_1,puVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c1e5040(puVar1);
  _objc_release(puVar2);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bf1b0;
  _objc_alloc_init(PTR_PTR_1126bf1b0);
  func_0x00010c1a2e00(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bf1b8;
  _objc_alloc_init(PTR_PTR_1126bf1b8);
  puVar3 = puVar1;
  func_0x00010bfc1860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1de8e0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bf51c80(param_3);
  puVar2 = puVar1;
  func_0x00010bfc1860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c102a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9120(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bf51c80(param_3);
  puVar2 = puVar1;
  func_0x00010bfc1860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c102a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be5e0(param_2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110dff0f8;
  lVar4 = param_3;
  func_0x00010bf8aa20(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110dff0f8,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(ppuVar6);
  _objc_release(lVar4);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e5bed8;
  lVar4 = param_3;
  func_0x00010bf5b460(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bed8,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(ppuVar6);
  _objc_release(lVar4);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e5bef8;
  lVar4 = param_3;
  func_0x00010bf1b9c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bef8,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(ppuVar6);
  _objc_release(lVar4);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e5bf18;
  lVar4 = param_3;
  func_0x00010c15adc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bf18,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(ppuVar6);
  _objc_release(lVar4);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e31798;
  lVar4 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110e31798,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(ppuVar6);
  _objc_release(lVar4);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110dad058;
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110dad058,
                &PTR____CFConstantStringClassReference_110dfe378);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(ppuVar6);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110e07238;
  lVar4 = param_3;
  func_0x00010c237fc0();
  ppuVar6 = &PTR____CFConstantStringClassReference_110dad378;
  if ((int)lVar4 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dad398;
  }
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110e07238,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(ppuVar7);
  _objc_release(puVar2);
  lVar4 = param_3;
  func_0x00010c0fc060();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  if (lVar5 != 0) {
    puVar2 = puVar1;
    func_0x00010c118b60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110e540b8;
    lVar4 = param_3;
    func_0x00010c0fc060(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10676b02c(&PTR____CFConstantStringClassReference_110e540b8,lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(ppuVar6);
    _objc_release(lVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10676a7fc; end: 10676ad7f;  */

void FUN_10676a7fc(double param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  double dVar10;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b2050;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1a99c0();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c1e5040(puVar1);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010c09ea00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08aca0();
  puVar3 = param_2;
  dVar10 = param_1;
  func_0x00010c09ea00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09abe0();
  FUN_10676af10(param_1,dVar10,puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010bfe3e20(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e5bb38;
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110e5bb38,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar2);
  ppuVar5 = &PTR____CFConstantStringClassReference_110dad058;
  FUN_10676b02c(&PTR____CFConstantStringClassReference_110dad058,
                &PTR____CFConstantStringClassReference_110df11f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c118b60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar2);
  puVar2 = param_2;
  func_0x00010bfe3da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf0b320();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c08fa60();
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (puVar6 != (undefined *)0x0) {
    puVar2 = param_2;
    func_0x00010bfe3da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf0b320();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR____CFConstantStringClassReference_110df1238;
    FUN_10676b02c(&PTR____CFConstantStringClassReference_110df1238,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c118b60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar2);
    _objc_release(ppuVar7);
  }
  puVar2 = param_2;
  func_0x00010bfe3da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    puVar6 = param_2;
    func_0x00010bfe3da0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf6dba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar8 == (undefined *)0x0) goto LAB_10676abe4;
    puVar2 = PTR_PTR_1126bf1c0;
    _objc_alloc_init(PTR_PTR_1126bf1c0);
    func_0x00010c1b6b40();
    puVar3 = param_2;
    func_0x00010bfe3da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c2a5040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    puVar8 = puVar2;
    func_0x00010c27e100(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1910c0();
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c118b60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126bf1c0;
    _objc_alloc_init(PTR_PTR_1126bf1c0);
    func_0x00010c1b6b40();
    puVar6 = param_2;
    func_0x00010bfe3da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bf6dba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    puVar9 = puVar3;
    func_0x00010c27e100(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1910c0();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    puVar6 = puVar1;
    func_0x00010c118b60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
LAB_10676abe4:
  puVar2 = param_2;
  func_0x00010bf02ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126bf1c0;
    _objc_alloc_init(PTR_PTR_1126bf1c0);
    func_0x00010c1b6b40();
    puVar3 = param_2;
    func_0x00010bf02ae0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    puVar6 = puVar2;
    func_0x00010c27e100(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1910c0();
    _objc_release(puVar6);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c118b60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  puVar2 = param_2;
  func_0x00010c14e120(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  dVar10 = param_1;
  _objc_release(puVar2);
  if (0.0 < param_1) {
    puVar2 = PTR_PTR_1126bf1c0;
    _objc_alloc_init(PTR_PTR_1126bf1c0);
    func_0x00010c1b6b40();
    puVar3 = param_2;
    func_0x00010c14e120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    puVar6 = puVar2;
    func_0x00010c27e100(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1910c0(dVar10);
    _objc_release(puVar6);
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c118b60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10676ad80; end: 10676af0f;  */

void FUN_10676ad80(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126cda40;
  _objc_alloc_init(PTR_PTR_1126cda40);
  func_0x00010c17cb40();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    puVar3 = PTR_PTR_1126bf1b8;
    _objc_alloc_init(PTR_PTR_1126bf1b8);
    lVar4 = param_1;
    func_0x00010c09ea00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aca0();
    func_0x00010c1b9120(puVar3);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010c09ea00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09abe0();
    func_0x00010c1be5e0(puVar3);
    _objc_release(lVar4);
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
  }
  if (param_2 != 0) {
    puVar3 = PTR_PTR_1126bf1b8;
    _objc_alloc_init(PTR_PTR_1126bf1b8);
    lVar4 = param_2;
    func_0x00010c09ea00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08aca0();
    func_0x00010c1b9120(puVar3);
    _objc_release(lVar4);
    lVar4 = param_2;
    func_0x00010c09ea00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09abe0();
    func_0x00010c1be5e0(puVar3);
    _objc_release(lVar4);
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
  }
  func_0x00010c1bff20(puVar1);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10676af10; end: 10676b02b;  */

void FUN_10676af10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bf1b0;
  _objc_retain();
  _objc_alloc_init(puVar1);
  func_0x00010c1a2e00(param_3,param_4,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bf1b8;
  _objc_alloc_init(PTR_PTR_1126bf1b8);
  uVar2 = param_3;
  func_0x00010bfc1860(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1de8e0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010bfc1860(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c102a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9120(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfc1860(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c102a80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be5e0(param_2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10676b02c; end: 10676b0b7;  */

void FUN_10676b02c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bf1c0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc_init(puVar1);
  func_0x00010c1b6b40();
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010c27e100(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e860();
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10676b0b8; end: 10676b0d3;  */

void FUN_10676b0b8(undefined8 param_1,int param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126bf1c0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
  _objc_retain(param_1);
  _objc_alloc_init(puVar2);
  func_0x00010c1b6b40();
  _objc_release(param_1);
  puVar3 = puVar2;
  func_0x00010c27e100(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e860();
  _objc_release(ppuVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10676b0d4; end: 10676b28b; +[SCMapDeepLinkHelpers mapURLWithLat:lng:zoom:displayText:openSource:sourcePageContext:] */

void FUN_10676b0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _objc_retain(param_8);
  _objc_retain(param_6);
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010be85580(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  FUN_10676b28c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_8;
  func_0x00010676b2f8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  func_0x00010c14de00(puVar1,param_5,&PTR____CFConstantStringClassReference_110e5c0f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(param_7);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


