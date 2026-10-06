/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105dfb044; end: 105dfb0bf; -[SCAugmentedCheckInLogger initWithBlizzardLogger:] */

undefined1 * FUN_105dfb044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed2a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010be1e620(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105dfb0c0; end: 105dfb25b; -[SCAugmentedCheckInLogger logPlacesCheckInOptionsSeenForPlaceTags:snapCaptureLocation:snapSource:snapTimestamp:] */

void FUN_105dfb0c0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined1 *param_6,undefined8 param_7,long param_8)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puVar12;
  double dVar13;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  puVar8 = &uStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_5;
  puVar12 = param_6;
  uVar10 = param_7;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = param_5;
  func_0x00010bf529e0();
  if (puVar1 != (undefined1 *)0x0) {
    if (param_8 == 0) {
      dVar13 = 0.0;
    }
    else {
      func_0x00010c26f320(param_8);
      param_2 = 0x40ac200000000000;
      dVar13 = (double)(long)(param_1 / 3600.0) * 3600.0;
    }
    param_1 = 0.0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(param_5);
    puVar12 = auStack_f8;
    uVar10 = 0x10;
    puVar1 = param_5;
    func_0x00010bf52a60();
    if (puVar1 != (undefined1 *)0x0) {
      lVar11 = *plStack_130;
      do {
        puVar12 = (undefined1 *)0x0;
        do {
          if (*plStack_130 != lVar11) {
            _objc_enumerationMutation(param_5);
          }
          param_1 = dVar13;
          func_0x00010be570c0(param_3,param_4,*(undefined8 *)(lStack_138 + (long)puVar12 * 8),
                              param_6,param_7);
          puVar12 = puVar12 + 1;
        } while (puVar1 != puVar12);
        puVar12 = auStack_f8;
        uVar10 = 0x10;
        puVar1 = param_5;
        puVar8 = &uStack_140;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
    }
    _objc_release(param_5);
    puVar7 = (undefined1 *)puVar8;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(puVar12);
  _objc_retain(uVar10);
  puVar2 = puVar7;
  func_0x00010c0fd640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf38020();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf31740();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar12;
  if (puVar4 != (undefined1 *)0x0) {
    puVar1 = puVar4;
  }
  _objc_retain(puVar1);
  _objc_release(puVar4);
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar3;
    func_0x00010c0fdd60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf529e0();
    _objc_release(puVar4);
    if (puVar5 != (undefined1 *)0x0) {
      puVar6 = PTR_PTR_1126c4dd8;
      _objc_alloc_init(PTR_PTR_1126c4dd8);
      puVar4 = puVar3;
      func_0x00010c0fdd60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dc480(puVar6,param_4,puVar4);
      _objc_release(puVar4);
      puVar4 = puVar2;
      func_0x00010c0fd140(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0b4ca0();
      func_0x00010c1dc7a0(puVar6,param_4,puVar5);
      _objc_release(puVar4);
      puVar4 = puVar7;
      func_0x00010c0fd0e0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dc7c0(puVar6,param_4,puVar4);
      _objc_release(puVar4);
      puVar4 = puVar7;
      func_0x00010c27dd80();
      if (puVar4 + -1 < (undefined1 *)0x5) {
        uVar9 = *(undefined8 *)(&UNK_10ddd0f00 + (long)(puVar4 + -1) * 8);
      }
      else {
        uVar9 = 0xa9;
      }
      func_0x00010c206c40(puVar6,param_4,uVar9);
      func_0x00010bf01f00(puVar1);
      func_0x00010c21eb40(puVar6);
      func_0x00010bfe4080(puVar1);
      func_0x00010c21eb60(puVar6);
      func_0x00010c298e00(puVar1);
      func_0x00010c21ec40(puVar6);
      func_0x00010c249ca0(puVar1);
      func_0x00010c21ec20(puVar6);
      func_0x00010bf51c80(puVar1);
      func_0x00010c21eb80(puVar6);
      func_0x00010bf51c80(puVar1);
      func_0x00010c21eba0(param_2,puVar6);
      func_0x00010c225980(puVar6,param_4,*(undefined8 *)(param_5 + 0x10));
      func_0x00010c2056c0(puVar6,param_4,uVar10);
      if (0.0 < param_1) {
        func_0x00010c2058a0(puVar6,param_4,(long)param_1);
      }
      uVar9 = *(undefined8 *)(param_5 + 8);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar9);
      _objc_release(puVar6);
    }
  }
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar10);
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 105dfb25c; end: 105dfb4e3; -[SCAugmentedCheckInLogger _logPlacesCheckInOptionsSeenForPlaceTag:snapCaptureLocation:snapSource:snapTimestamp:] */

void FUN_105dfb25c(double param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = param_5;
  func_0x00010c0fd640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf38020();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf31740();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_6;
  if (lVar4 != 0) {
    lVar1 = lVar4;
  }
  _objc_retain(lVar1);
  _objc_release(lVar4);
  if (lVar1 != 0) {
    lVar4 = lVar3;
    func_0x00010c0fdd60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      puVar6 = PTR_PTR_1126c4dd8;
      _objc_alloc_init(PTR_PTR_1126c4dd8);
      lVar4 = lVar3;
      func_0x00010c0fdd60(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dc480(puVar6,param_4,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c0fd140(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0b4ca0();
      func_0x00010c1dc7a0(puVar6,param_4,lVar5);
      _objc_release(lVar4);
      lVar4 = param_5;
      func_0x00010c0fd0e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dc7c0(puVar6,param_4,lVar4);
      _objc_release(lVar4);
      lVar4 = param_5;
      func_0x00010c27dd80();
      if (lVar4 - 1U < 5) {
        uVar7 = *(undefined8 *)(&UNK_10ddd0f00 + (lVar4 - 1U) * 8);
      }
      else {
        uVar7 = 0xa9;
      }
      func_0x00010c206c40(puVar6,param_4,uVar7);
      func_0x00010bf01f00(lVar1);
      func_0x00010c21eb40(puVar6);
      func_0x00010bfe4080(lVar1);
      func_0x00010c21eb60(puVar6);
      func_0x00010c298e00(lVar1);
      func_0x00010c21ec40(puVar6);
      func_0x00010c249ca0(lVar1);
      func_0x00010c21ec20(puVar6);
      func_0x00010bf51c80(lVar1);
      func_0x00010c21eb80(puVar6);
      func_0x00010bf51c80(lVar1);
      func_0x00010c21eba0(param_2,puVar6);
      func_0x00010c225980(puVar6,param_4,*(undefined8 *)(param_3 + 0x10));
      func_0x00010c2056c0(puVar6,param_4,param_7);
      if (0.0 < param_1) {
        func_0x00010c2058a0(puVar6,param_4,(long)param_1);
      }
      uVar7 = *(undefined8 *)(param_3 + 8);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar7);
      _objc_release(puVar6);
    }
  }
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105dfb4e4; end: 105dfb5d7; -[SCAugmentedCheckInLogger _getCurrentWifiSsidAsync] */

void FUN_105dfb4e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105dfb588;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(uVar1,&puStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105dfb5d8; end: 105dfb603; -[SCAugmentedCheckInLogger _roundToNearestHourWithCreationTime:] */

double FUN_105dfb5d8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c26f320(param_4);
  return (double)(long)(param_1 / 3600.0) * 3600.0;
}



/* Entry: 105dfb604; end: 105dfb633; -[SCAugmentedCheckInLogger .cxx_destruct] */

void FUN_105dfb604(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105dfb634; end: 105dfb69f; -[SCMapPlaceTagS2RInfoProvider initWithPlaceTagsTracker:] */

undefined1 * FUN_105dfb634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed2b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105dfb6a0; end: 105dfb8df; -[SCMapPlaceTagS2RInfoProvider getMetaInfo] */

void FUN_105dfb6a0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  if (uVar1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebeea0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      lVar3 = param_1;
      func_0x00010c0fd0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c220220(puVar2,param_2,lVar3,&PTR____CFConstantStringClassReference_110e2b198);
      _objc_release(lVar3);
    }
    uVar4 = uVar1;
    func_0x00010c2683a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 != 0) {
      uVar5 = uVar4;
      func_0x00010c0fd0e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c27dd80();
      if (uVar6 - 1 < 5) {
        ppuVar11 = (undefined **)(&PTR_PTR_1108ea2c0)[uVar6 - 1];
      }
      else {
        ppuVar11 = &PTR____CFConstantStringClassReference_110e2b1d8;
      }
      uVar6 = uVar4;
      func_0x00010c0fd640();
      _objc_retainAutoreleasedReturnValue();
      if (uVar6 == 0) {
        ppuVar12 = &PTR____CFConstantStringClassReference_110dd32f8;
      }
      else {
        uVar7 = uVar4;
        func_0x00010c0fd640();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c247be0();
        if (uVar8 < 4) {
          ppuVar12 = (undefined **)(&PTR_PTR_1108ea2e8)[uVar8];
        }
        else {
          ppuVar12 = &PTR____CFConstantStringClassReference_110e2b298;
        }
        _objc_release(uVar7);
      }
      _objc_release(uVar6);
      func_0x00010c220220(puVar2,param_2,uVar5,&PTR____CFConstantStringClassReference_110e2b138);
      func_0x00010c220220(puVar2,param_2,ppuVar11,&PTR____CFConstantStringClassReference_110e2b158);
      func_0x00010c220220(puVar2,param_2,ppuVar12,&PTR____CFConstantStringClassReference_110e2b178);
      _objc_release(uVar5);
    }
    puVar9 = puVar2;
    func_0x00010bf529e0();
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar9 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar9 = puVar2;
      func_0x00010bf660a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar10,param_2,&PTR____CFConstantStringClassReference_110e2b1b8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
    }
    _objc_release(uVar4);
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105dfb8e0; end: 105dfb987; -[SCMapPlaceTagS2RInfoProvider _spotlightPostingHint] */

void FUN_105dfb8e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
    goto LAB_105dfb96c;
  }
  lVar1 = param_1;
  func_0x00010bfc8d80(param_1,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_105dfb958:
    lVar3 = 0;
  }
  else {
    lVar3 = lVar1;
    func_0x00010c0fd640();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c247be0();
    _objc_release(lVar3);
    if (lVar2 != 3) goto LAB_105dfb958;
    _objc_retain(lVar1);
    lVar3 = lVar1;
  }
  _objc_release(lVar1);
LAB_105dfb96c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105dfb988; end: 105dfb98f; -[SCMapPlaceTagS2RInfoProvider .cxx_destruct] */

void FUN_105dfb988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105dfb990; end: 105dfba03; -[SCSpotlightPlaceTagsLogger initWithBlizzardLogger:] */

undefined1 * FUN_105dfb990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed2b8;
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



/* Entry: 105dfba04; end: 105dfba5f; -[SCSpotlightPlaceTagsLogger logTappedTagAPlace] */

void FUN_105dfba04(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c4de0;
  _objc_alloc_init(PTR_PTR_1126c4de0);
  func_0x00010c161620();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105dfba60; end: 105dfbb13; -[SCSpotlightPlaceTagsLogger logTappedTaggedPlaceWithPlaceId:searchSessionId:source:] */

void FUN_105dfba60(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c4de0;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c161620();
  func_0x00010c1dc3a0(puVar1,param_2,param_3);
  _objc_release(param_3);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1f8a40(puVar1,param_2,param_4);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105dfbb14; end: 105dfbbc7; -[SCSpotlightPlaceTagsLogger logPlaceTaggedSendWithPlaceId:searchSessionId:source:] */

void FUN_105dfbb14(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c4de0;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c161620();
  func_0x00010c1dc3a0(puVar1,param_2,param_3);
  _objc_release(param_3);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1f8a40(puVar1,param_2,param_4);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105dfbbc8; end: 105dfbcd7; -[SCSpotlightPlaceTagsLogger logPlaceTaggedWithPlaceId:searchSessionId:isAutoSelected:placeRank:source:] */

void FUN_105dfbbc8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c4de0;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c161620();
  func_0x00010c1dc3a0(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1af5e0(puVar1,param_2,param_5);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1f8a40(puVar1,param_2,param_4);
  }
  func_0x00010c1dc760(puVar1,param_2,param_6);
  if (param_7 - 1U < 3) {
    puVar4 = (&PTR_PTR_1108ea308)[param_7 - 1U];
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  func_0x00010c161e20(puVar1,param_2,puVar4);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105dfbcd8; end: 105dfbd33; -[SCSpotlightPlaceTagsLogger logScrollPlacePills] */

void FUN_105dfbcd8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c4de0;
  _objc_alloc_init(PTR_PTR_1126c4de0);
  func_0x00010c161620();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105dfbd34; end: 105dfbd63; -[SCSpotlightPlaceTagsLogger .cxx_destruct] */

void FUN_105dfbd34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105dfbd64; end: 105dfbddf;  */

void FUN_105dfbd64(undefined8 param_1)

{
  undefined *puVar1;
  
  _objc_retain();
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR_PTR_1126c4de8;
  _objc_alloc(PTR_PTR_1126c4de8);
  func_0x00010c037ee0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105dfbde0; end: 105dfc057;  */

undefined8 FUN_105dfbde0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = 3;
  if (((lVar1 == 0) && (lVar2 == 0)) && (lVar3 == 0)) {
    if ((param_2 == 0) || (lVar1 = param_2, func_0x00010c27dd80(), lVar1 == 4)) {
      lVar1 = param_1;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        uVar4 = 4;
      }
      else {
        lVar2 = lVar1;
        func_0x00010c0fd640();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c247be0();
        _objc_release(lVar2);
        uVar4 = 0;
        if (lVar3 != 3) {
          uVar4 = 5;
        }
      }
      _objc_release(lVar1);
    }
    else {
      uVar4 = 6;
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 105dfc058; end: 105dfc323; -[SCPlaceTaggingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfc058(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105dfc340;
  puStack_90 = &UNK_1108ea390;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  puStack_d0 = puVar5;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x105dfc380;
  puStack_b8 = &UNK_1108ea3c0;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  puStack_100 = puVar5;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x105dfc3c0;
  puStack_e8 = &UNK_1108ea3f0;
  _objc_copyWeak(auStack_d8,auStack_80);
  puStack_e0 = puVar3;
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_108,auStack_80);
  func_0x00010bf11fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c4df8;
  _objc_alloc(PTR_PTR_1126c4df8);
  func_0x00010c021f20();
  uVar7 = 0;
  if (param_1 != 0) {
    uVar7 = *(undefined8 *)(param_1 + _DAT_112736ff0);
  }
  _objc_retain(uVar7);
  func_0x00010bf9d660(uVar7);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_108);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 105dfc324; end: 105dfc33f;  */

void FUN_105dfc324(void)

{
  _objc_alloc_init(PTR_PTR_1126c4df0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dfc340; end: 105dfc447;  */

void FUN_105dfc340(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf16c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105dfc448; end: 105dfc4c3; -[SCPlaceTaggingEntryPoint _createSpotlightPlaceTagsLogger] */

void FUN_105dfc448(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c4e00;
  _objc_alloc(PTR_PTR_1126c4e00);
  FUN_105dfc4c4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8500(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105dfc4c4; end: 105dfc4e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfc4c4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112736fe0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dfc4e8; end: 105dfc563; -[SCPlaceTaggingEntryPoint _createAugmentedCheckInLogger] */

void FUN_105dfc4e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c4e08;
  _objc_alloc(PTR_PTR_1126c4e08);
  FUN_105dfc4c4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8500(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105dfc564; end: 105dfc6d3; -[SCPlaceTaggingEntryPoint _createPlaceTagsTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfc564(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126c4e10;
  _objc_alloc_init(PTR_PTR_1126c4e10);
  puVar2 = PTR_PTR_1126c4e18;
  _objc_alloc(PTR_PTR_1126c4e18);
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112736fd0;
    _objc_loadWeakRetained(lVar10);
  }
  lVar3 = lVar10;
  func_0x00010c0ec340(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_105dfc6d4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0fd6c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x000105dfc6f8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = 0;
  if (param_1 != 0) {
    lVar8 = param_1 + _DAT_112736fec;
    _objc_loadWeakRetained(lVar8);
  }
  lVar9 = lVar8;
  func_0x00010bfede00(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffdf60(puVar2,param_2,lVar3,lVar5,lVar7,puVar1,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar10);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105dfc6d4; end: 105dfc71b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfc6d4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112736fe8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105dfc71c; end: 105dfc977; -[SCPlaceTaggingEntryPoint _createSpotlightPlaceSearchViewProviderWithLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfc71c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105dfc978;
  puStack_88 = &UNK_110863778;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c4e20;
  _objc_alloc(PTR_PTR_1126c4e20);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112736fd8;
    _objc_loadWeakRetained(lVar8);
  }
  lVar4 = lVar8;
  func_0x00010c295440(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_105dfc6d4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0fd400();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105dfc6f8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0600a0(puVar3);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105dfc978; end: 105dfc9f7;  */

void FUN_105dfc978(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf1660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105dfc9f8; end: 105dfcb07; -[SCPlaceTaggingEntryPoint _createPlaceSearchGrpcService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfc9f8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112736fdc;
    _objc_loadWeakRetained(param_1);
  }
  lVar1 = param_1;
  func_0x00010bfcfa80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  lVar4 = lVar1;
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0b7020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105dfcb08; end: 105dfcb7f; -[SCPlaceTaggingEntryPoint _createComposerBlizzardLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfcb08(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112736fe4;
    _objc_loadWeakRetained(param_1);
  }
  lVar1 = param_1;
  func_0x00010bf1cf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105dfcb80; end: 105dfcc1b; -[SCPlaceTaggingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfcb80(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736ff0,0);
  _objc_destroyWeak(param_1 + _DAT_112736fec);
  _objc_destroyWeak(param_1 + _DAT_112736fe8);
  _objc_destroyWeak(param_1 + _DAT_112736fe4);
  _objc_destroyWeak(param_1 + _DAT_112736fe0);
  _objc_destroyWeak(param_1 + _DAT_112736fdc);
  _objc_destroyWeak(param_1 + _DAT_112736fd8);
  _objc_destroyWeak(param_1 + _DAT_112736fd4);
  _objc_destroyWeak(param_1 + _DAT_112736fd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112736fcc);
  return;
}



/* Entry: 105dfcc1c; end: 105dfccf7; -[SCPlaceTagCarouselCollectionViewController init] */

undefined1 * FUN_105dfcc1c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1f7ac0();
  func_0x00010c1f93e0(0,0x4014000000000000,0,0x4014000000000000,puVar1);
  func_0x00010c1c8300(0x4014000000000000,puVar1);
  func_0x00010c1c82c0(0x4014000000000000,puVar1);
  puStack_38 = PTR_PTR_1126ed2c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithCollectionViewLayout__1125dd830,puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar2);
    puVar3 = (undefined1 *)puVar2;
    func_0x00010bf40120(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 105dfccf8; end: 105dfcdd7; -[SCPlaceTagCarouselCollectionViewController setPlaceTagsTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfccf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112736ff4;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  lVar4 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01a80();
  func_0x00010c167660(*(undefined8 *)(param_1 + lVar5));
  _objc_release(lVar4);
  puVar1 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  lVar4 = (long)_DAT_112736ff8;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c150e00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112736ffc);
  *(undefined8 *)(param_1 + _DAT_112736ffc) = uVar3;
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bec1590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startRenderingViewModels_11258df08);
  return;
}



/* Entry: 105dfcdd8; end: 105dfcee7; -[SCPlaceTagCarouselCollectionViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfcdd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0deec0();
  _objc_release(lVar1);
  if (0 < lVar2) {
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1525a0();
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112736ffc);
    puVar4 = PTR_PTR_1126c4e28;
    func_0x00010c29e700(PTR_PTR_1126c4e28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dd80(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puStack_48 = PTR_PTR_1126ed2c0;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewWillAppear__1126853f0,param_3);
  return;
}



/* Entry: 105dfcee8; end: 105dfd04f; -[SCPlaceTagCarouselCollectionViewController viewDidLoad] */

void FUN_105dfcee8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ed2c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  uVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2025c0();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar1);
  _objc_release(puVar2);
  uVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f80(0,0x4014000000000000,0,0x4014000000000000);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189840();
  _objc_release(uVar1);
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126c4e30);
  func_0x00010c126000(param_1);
  _objc_release(param_1);
  return;
}



/* Entry: 105dfd050; end: 105dfd113; -[SCPlaceTagCarouselCollectionViewController collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_105dfd050(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  uVar1 = *(undefined8 *)(param_5 + _DAT_112737000);
  _objc_retain(param_7);
  func_0x00010c0840e0(param_9);
  func_0x00010c0dfd20(uVar1,param_6,param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(param_7);
  dVar2 = (double)(float)(int)(param_3 / 3.0);
  func_0x00010bfb68e0(param_7);
  _objc_release(param_7);
  func_0x00010c23d6e0(dVar2,param_4,PTR_PTR_1126c4e30,param_6,uVar1);
  _objc_release(uVar1);
  auVar3._8_8_ = param_4;
  auVar3._0_8_ = dVar2;
  return auVar3;
}



/* Entry: 105dfd114; end: 105dfd16f; -[SCPlaceTagCarouselCollectionViewController collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfd114(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c4e28;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112736ffc);
  func_0x00010c0840e0(param_4);
  func_0x00010bf7cc20(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105dfd170; end: 105dfd17f; -[SCPlaceTagCarouselCollectionViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfd170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112737000),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105dfd180; end: 105dfd223; -[SCPlaceTagCarouselCollectionViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfd180(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e2b458,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112737000);
  uVar1 = param_4;
  func_0x00010c0840e0(param_4);
  _objc_release(param_4);
  func_0x00010c0dfd20(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(param_3,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105dfd224; end: 105dfd2d3; -[SCPlaceTagCarouselCollectionViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfd224(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112736ffc);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105dfd2d4; end: 105dfd31b;  */

void FUN_105dfd2d4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed23c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dfd31c; end: 105dfd42f; -[SCPlaceTagCarouselCollectionViewController _update:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfd31c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112737000;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010bf40120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf408e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069fe0();
  _objc_release(lVar3);
  lVar4 = (long)_DAT_112736ff4;
  lVar3 = *(long *)(param_1 + lVar4);
  func_0x00010c159da0();
  if (lVar3 != -1) {
    lVar3 = param_1;
    func_0x00010bf40120(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c159da0(uVar1);
    func_0x00010bfed020(puVar2,param_2,uVar1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1525a0(lVar3,param_2,puVar2,8,1);
    _objc_release(puVar2);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dfd430; end: 105dfd43f; -[SCPlaceTagCarouselCollectionViewController placeTagsTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dfd430(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112736ff4);
}



/* Entry: 105dfd440; end: 105dfd49f; -[SCPlaceTagCarouselCollectionViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfd440(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112736ff4,0);
  _objc_storeStrong(param_1 + _DAT_112737000,0);
  _objc_storeStrong(param_1 + _DAT_112736ff8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112736ffc,0);
  return;
}



/* Entry: 105dfd4a0; end: 105dfd4d7; +[SCPlaceTagCarouselRow containerStyle:groupStyle:] */

undefined1  [16] FUN_105dfd4a0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  func_0x00010bf1f3c0();
  uVar1 = 0xe;
  if (param_3 == 0) {
    uVar1 = 10;
  }
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_4;
  return auVar2;
}



/* Entry: 105dfd4d8; end: 105dfd5e3; -[SCPlaceTagCarouselRow initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105dfd4d8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ed2c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c4e38;
    _objc_alloc_init();
    lVar5 = (long)_DAT_112737004;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c29bf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c29bf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    _objc_release(uVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c27f880(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c29bf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar3);
    _objc_release(uVar4);
    _objc_release(puVar3);
    func_0x00010beab900(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105dfd5e4; end: 105dfd5f3; -[SCPlaceTagCarouselRow setPlaceTagsTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfd5e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dc950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112737004),PTR_s_setPlaceTagsTracker__112654c78);
  return;
}



/* Entry: 105dfd5f4; end: 105dfd743; -[SCPlaceTagCarouselRow setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfd5f4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112737008;
  uVar4 = *(ulong *)(param_1 + lVar5);
  _objc_retain(param_3);
  _objc_retain(uVar4);
  if (param_3 == uVar4) {
    _objc_release(uVar4);
    _objc_release(param_3);
  }
  else {
    if (uVar4 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar4);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_105dfd72c;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b52e0;
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar4 = param_3;
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    puVar3 = PTR_PTR_1126c4e40;
    uVar1 = uVar4;
    func_0x00010c076140(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b020(puVar3);
    _objc_release(uVar4);
    func_0x00010c20eaa0(param_1);
    _objc_release(uVar1);
    func_0x00010c1cbe20(param_1);
  }
LAB_105dfd72c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dfd744; end: 105dfd74f; +[SCPlaceTagCarouselRow sizeWithViewModel:constrainedToSize:] */

void FUN_105dfd744(void)

{
  return;
}



/* Entry: 105dfd750; end: 105dfdaab; -[SCPlaceTagCarouselRow _setupCollectionConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105dfd750(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  long lVar26;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar26 = (long)_DAT_112737004;
  lVar2 = *(long *)(param_1 + lVar26);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c27f880();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf493c0(0x4014000000000000,lVar3,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar26);
  lStack_98 = lVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c27f880();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493c0(0xc014000000000000,uVar8,param_2,lVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar26);
  uStack_90 = uVar11;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c27f880();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar13;
  func_0x00010bf493c0(0x4000000000000000,uVar13,param_2,lVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar26);
  uStack_88 = uVar16;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c27f880(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar18;
  func_0x00010bf493c0(0xc000000000000000,uVar18,param_2,lVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar26);
  uStack_80 = uVar21;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010bf49420(0x4046800000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar24;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_98,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar25);
  _objc_release(puVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return lVar2;
  }
  ___stack_chk_fail();
  return *(long *)(lVar2 + _DAT_112737008);
}



/* Entry: 105dfdaac; end: 105dfdabb; -[SCPlaceTagCarouselRow viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dfdaac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737008);
}



/* Entry: 105dfdabc; end: 105dfdacb; -[SCPlaceTagCarouselRow actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dfdabc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273700c);
}



/* Entry: 105dfdacc; end: 105dfdb0b; -[SCPlaceTagCarouselRow setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfdacc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273700c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105dfdb0c; end: 105dfdb5b; -[SCPlaceTagCarouselRow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfdb0c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273700c,0);
  _objc_storeStrong(param_1 + _DAT_112737008,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112737004,0);
  return;
}



/* Entry: 105dfdb5c; end: 105dfdb67; -[SCPlaceTagCarouselViewProviderImpl placeTagCarouselCellClass] */

void FUN_105dfdb5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126c4e40);
  return;
}



/* Entry: 105dfdb68; end: 105dfdebb; -[SCPlaceTagItemView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105dfdb68(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_1126ed2d0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar7 = (long)_DAT_112737010;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar2);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x402e000000000000);
    _objc_release(uVar6);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar7));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar8 = (long)_DAT_112737014;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar8));
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(uVar6);
    _objc_release(puVar2);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc_init();
    lVar8 = (long)_DAT_112737018;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar6);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar8));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar8 = (long)_DAT_11273701c;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar8));
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(uVar6);
    _objc_release(puVar2);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar8));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar7));
    func_0x00010beabac0(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105dfdebc; end: 105dfe07f; -[SCPlaceTagItemView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfdebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c4dd0;
  lVar9 = (long)_DAT_112737020;
  uVar7 = *(ulong *)(param_1 + lVar9);
  _objc_retain(uVar7);
  _objc_opt_class(puVar2);
  uVar3 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar2);
  uVar1 = uVar7;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  uVar3 = uVar1;
  func_0x00010c071ae0();
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar6);
    _objc_release(uVar3);
    if ((uVar7 & 1) == 0) {
      uVar8 = *(undefined8 *)(param_1 + _DAT_112737018);
      uVar6 = param_3;
      func_0x00010c2711a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(uVar8);
      _objc_release(uVar6);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c07d660(uVar1);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c07d660(param_3);
    func_0x00010c0df6e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c071ae0();
    _objc_release(puVar4);
    _objc_release(puVar2);
    if (((ulong)puVar5 & 1) == 0) {
      func_0x00010c07d660(param_3);
      func_0x00010bedf900(param_1);
    }
    func_0x00010c08cdc0(param_1);
    _objc_retain(param_3);
    uVar6 = *(undefined8 *)(param_1 + lVar9);
    *(undefined8 *)(param_1 + lVar9) = param_3;
    _objc_release(uVar6);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105dfe080; end: 105dfe1f7; +[SCPlaceTagItemView sizeWithViewModel:constrainedToSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_105dfe080(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  long lVar45;
  long lVar46;
  undefined8 uVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  double dVar53;
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  
  lVar45 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  lVar2 = param_6;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = param_6;
  func_0x00010c07d660();
  uVar52 = 0x7fefffffffffffff;
  if ((int)lVar46 == 0) {
    uVar52 = param_1;
  }
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ba0(uVar52,param_2,lVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar52 = 0x4024000000000000;
  dVar53 = (double)(float)(int)(param_3 + 24.0 + 8.0 + 10.0);
  lVar46 = param_6;
  func_0x00010c07d660();
  _objc_release(param_6);
  dVar54 = dVar53 + 13.0;
  if ((int)lVar46 == 0) {
    dVar54 = dVar53;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar45) {
    ___stack_chk_fail();
    lVar46 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar45 = (long)_DAT_112737024;
    if (*(long *)(lVar2 + lVar45) != 0) {
      func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    lVar49 = (long)_DAT_112737010;
    uVar5 = *(undefined8 *)(lVar2 + lVar49);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar47 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar2 + lVar49);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(lVar2 + lVar49);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar41 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(lVar2 + lVar49);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar2;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar42 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar48 = (long)_DAT_112737014;
    uVar18 = *(undefined8 *)(lVar2 + lVar48);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(lVar2 + lVar49);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar43 = uVar18;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(lVar2 + lVar48);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)(lVar2 + lVar49);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar44 = uVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)(lVar2 + lVar48);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar51 = uVar22;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)(lVar2 + lVar48);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar23;
    func_0x00010bf49420(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar50 = (long)_DAT_112737018;
    uVar25 = *(undefined8 *)(lVar2 + lVar50);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar26 = *(undefined8 *)(lVar2 + lVar48);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uVar25;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = *(undefined8 *)(lVar2 + lVar50);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar29 = *(undefined8 *)(lVar2 + lVar49);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = uVar28;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar31 = *(undefined8 *)(lVar2 + lVar50);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = *(undefined8 *)(lVar2 + lVar49);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar31;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar48 = (long)_DAT_11273701c;
    uVar34 = *(undefined8 *)(lVar2 + lVar48);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = *(undefined8 *)(lVar2 + lVar49);
    func_0x00010bf348e0(uVar35);
    _objc_retainAutoreleasedReturnValue();
    uVar36 = uVar34;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar37 = *(undefined8 *)(lVar2 + lVar48);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar38 = uVar37;
    func_0x00010bf49420(0x402a000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar39 = *(undefined8 *)(lVar2 + lVar48);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar40 = uVar39;
    func_0x00010bf49420(0x402a000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar40);
    _objc_release(uVar39);
    _objc_release(uVar38);
    _objc_release(uVar37);
    _objc_release(uVar36);
    _objc_release(uVar35);
    _objc_release(uVar34);
    _objc_release(uVar33);
    _objc_release(uVar32);
    _objc_release(uVar31);
    _objc_release(uVar30);
    _objc_release(uVar29);
    _objc_release(uVar28);
    _objc_release(uVar27);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(uVar51);
    _objc_release(uVar22);
    _objc_release(uVar44);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar43);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar42);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(uVar15);
    _objc_release(uVar41);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(uVar8);
    _objc_release(uVar47);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(uVar5);
    iVar1 = (int)*(undefined8 *)(lVar2 + lVar48);
    func_0x00010c074c20();
    if (iVar1 == 0) {
      uVar41 = *(undefined8 *)(lVar2 + lVar48);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar42 = *(undefined8 *)(lVar2 + lVar50);
      func_0x00010c2793a0(uVar42);
      _objc_retainAutoreleasedReturnValue();
      uVar47 = uVar41;
      func_0x00010bf493c0(0x4010000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar43 = *(undefined8 *)(lVar2 + lVar48);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar44 = *(undefined8 *)(lVar2 + lVar49);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar51 = 0xc024000000000000;
      uVar11 = uVar43;
      func_0x00010bf493c0(0xc024000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar3);
      _objc_release(puVar4);
      _objc_release(uVar11);
      _objc_release(uVar44);
      _objc_release(uVar43);
    }
    else {
      uVar41 = *(undefined8 *)(lVar2 + lVar50);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar42 = *(undefined8 *)(lVar2 + lVar49);
      func_0x00010c2793a0(uVar42);
      _objc_retainAutoreleasedReturnValue();
      uVar51 = 0xc024000000000000;
      uVar47 = uVar41;
      func_0x00010bf493c0(0xc024000000000000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
    }
    _objc_release(uVar47);
    _objc_release(uVar42);
    _objc_release(uVar41);
    uVar47 = *(undefined8 *)(lVar2 + lVar45);
    *(undefined **)(lVar2 + lVar45) = puVar3;
    _objc_retain(puVar3);
    _objc_release(uVar47);
    func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar46) {
      ___stack_chk_fail();
      func_0x00010c1a7f60(*(undefined8 *)(puVar3 + _DAT_11273701c));
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(puVar3 + _DAT_112737010));
      _objc_release(puVar4);
      uVar47 = *(undefined8 *)(puVar3 + _DAT_112737014);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160(uVar47);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(*(undefined8 *)(puVar3 + _DAT_112737018));
      _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010beabad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s__setupConstraints_112588858);
      auVar57._8_8_ = uVar52;
      auVar57._0_8_ = uVar51;
      return auVar57;
    }
    auVar56._8_8_ = uVar52;
    auVar56._0_8_ = uVar51;
    return auVar56;
  }
  auVar55._8_8_ = 0x403e000000000000;
  auVar55._0_8_ = dVar54;
  return auVar55;
}



/* Entry: 105dfe1f8; end: 105dfe9a3; -[SCPlaceTagItemView _setupConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfe1f8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  long lVar45;
  long lVar46;
  undefined8 uVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  
  lVar45 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar46 = (long)_DAT_112737024;
  if (*(long *)(param_1 + lVar46) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  puVar40 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar49 = (long)_DAT_112737010;
  uVar2 = *(undefined8 *)(param_1 + lVar49);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar49);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar49);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar49);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = (long)_DAT_112737014;
  uVar15 = *(undefined8 *)(param_1 + lVar48);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar49);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = uVar15;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar48);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar49);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_1 + lVar48);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar48);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010bf49420(0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar50 = (long)_DAT_112737018;
  uVar23 = *(undefined8 *)(param_1 + lVar50);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar48);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar23;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar50);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + lVar49);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar26;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar50);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + lVar49);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar29;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = (long)_DAT_11273701c;
  uVar32 = *(undefined8 *)(param_1 + lVar48);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + lVar49);
  func_0x00010bf348e0(uVar33);
  _objc_retainAutoreleasedReturnValue();
  uVar34 = uVar32;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = *(undefined8 *)(param_1 + lVar48);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar35;
  func_0x00010bf49420(0x402a000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar37 = *(undefined8 *)(param_1 + lVar48);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar37;
  func_0x00010bf49420(0x402a000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar39 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar44);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar43);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar42);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar41);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar47);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + lVar48);
  func_0x00010c074c20();
  if (iVar1 == 0) {
    uVar41 = *(undefined8 *)(param_1 + lVar48);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar42 = *(undefined8 *)(param_1 + lVar50);
    func_0x00010c2793a0(uVar42);
    _objc_retainAutoreleasedReturnValue();
    uVar47 = uVar41;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar43 = *(undefined8 *)(param_1 + lVar48);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar44 = *(undefined8 *)(param_1 + lVar49);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar43;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar39 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar40);
    _objc_release(puVar39);
    _objc_release(uVar8);
    _objc_release(uVar44);
    _objc_release(uVar43);
  }
  else {
    uVar41 = *(undefined8 *)(param_1 + lVar50);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar42 = *(undefined8 *)(param_1 + lVar49);
    func_0x00010c2793a0(uVar42);
    _objc_retainAutoreleasedReturnValue();
    uVar47 = uVar41;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar40);
  }
  _objc_release(uVar47);
  _objc_release(uVar42);
  _objc_release(uVar41);
  uVar47 = *(undefined8 *)(param_1 + lVar46);
  *(undefined **)(param_1 + lVar46) = puVar40;
  _objc_retain(puVar40);
  _objc_release(uVar47);
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar45) {
    ___stack_chk_fail();
    func_0x00010c1a7f60(*(undefined8 *)(puVar40 + _DAT_11273701c));
    puVar39 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(puVar40 + _DAT_112737010));
    _objc_release(puVar39);
    uVar47 = *(undefined8 *)(puVar40 + _DAT_112737014);
    puVar39 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(uVar47);
    _objc_release(puVar39);
    puVar39 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(puVar40 + _DAT_112737018));
    _objc_release(puVar39);
                    /* WARNING: Could not recover jumptable at 0x00010beabad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar40,PTR_s__setupConstraints_112588858);
    return;
  }
  return;
}



/* Entry: 105dfe9a4; end: 105dfeaa3; -[SCPlaceTagItemView _updateSelectionStateView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfe9a4(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11273701c),param_2,param_3 ^ 1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112737010));
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112737014);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_112737018));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beabad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupConstraints_112588858);
  return;
}



/* Entry: 105dfeaa4; end: 105dfeab3; -[SCPlaceTagItemView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105dfeaa4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737020);
}



/* Entry: 105dfeab4; end: 105dfeb33; -[SCPlaceTagItemView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105dfeab4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112737020,0);
  _objc_storeStrong(param_1 + _DAT_112737024,0);
  _objc_storeStrong(param_1 + _DAT_112737018,0);
  _objc_storeStrong(param_1 + _DAT_11273701c,0);
  _objc_storeStrong(param_1 + _DAT_112737014,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112737010,0);
  return;
}



/* Entry: 105dfeb34; end: 105dfecbf; -[SCSpotlightPlaceSearchViewProviderImpl initWithValdiRuntimeProvider:placeSearchGrpcService:spotlightPlaceTagsLogger:composerBlizzardLogger:placeProfileDataFetcher:circumstanceEngine:] */

undefined1 *
FUN_105dfeb34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ed2d8;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___MKDistanceFormatter_1126b1f88;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105dfecc0; end: 105dfecc7; -[SCSpotlightPlaceSearchViewProviderImpl handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_105dfecc0(void)

{
  return 0;
}



/* Entry: 105dfecc8; end: 105dfede7; -[SCSpotlightPlaceSearchViewProviderImpl createSpotlightPlaceSearchViewForLocation:tagPlaceHandler:removePlaceHandler:] */

void FUN_105dfecc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be12d20(param_1,param_2,param_3,puVar1);
  lVar2 = param_1;
  func_0x00010bdf3ba0(param_1,param_2,param_4,param_5,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126c4e48;
  _objc_alloc(PTR_PTR_1126c4e48);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar3,param_2,0,lVar2,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105dfede8; end: 105dfee97; -[SCSpotlightPlaceSearchViewProviderImpl createSpotlightPlaceTagCarouselWithActionHandler:location:showRemixLabel:] */

void FUN_105dfede8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be12ce0(param_1,param_2,param_4,puVar1);
  puVar2 = PTR_PTR_1126c4e50;
  _objc_alloc(PTR_PTR_1126c4e50);
  func_0x00010bff0540();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105dfee98; end: 105dff23f; -[SCSpotlightPlaceSearchViewProviderImpl _createSpotlightPlaceTagsContextWithTagPlaceHandler:removePlaceHandler:placeTagsObservable:capturedLocation:] */

void FUN_105dfee98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126c4e58;
  _objc_alloc_init(PTR_PTR_1126c4e58);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171b20(puVar1);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c272120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dc920(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105dff240;
  puStack_a8 = &UNK_1108ea450;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_4);
  uStack_98 = param_4;
  _objc_retain(param_3);
  uStack_90 = param_3;
  _objc_retain(param_6);
  uStack_a0 = param_6;
  func_0x00010c1d31c0(puVar1);
  puStack_f8 = puVar3;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_105dff35c;
  puStack_e0 = &UNK_1108ea480;
  _objc_copyWeak(auStack_c8,auStack_80);
  _objc_retain(param_3);
  uStack_d0 = param_3;
  _objc_retain(param_6);
  uStack_d8 = param_6;
  func_0x00010c1d2e00(puVar1);
  puStack_120 = puVar3;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_105dff3ec;
  puStack_108 = &UNK_1108ea4b0;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010c1a3380(puVar1);
  _objc_copyWeak(auStack_128,auStack_80);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c1fe260(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4ce0(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c272120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c180a20(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c4e60;
  _objc_alloc(PTR_PTR_1126c4e60);
  func_0x00010c046500();
  func_0x00010c195000();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38));
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_release(uStack_d8);
  _objc_release(uStack_d0);
  _objc_destroyWeak(auStack_c8);
  _objc_release(uStack_a0);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105dff240; end: 105dff35b;  */

void FUN_105dff240(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x50) = 1;
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    func_0x00010c0fd0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010c0fd0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    if ((int)uVar4 == 0) {
      func_0x00010be30b60(param_1);
    }
    else {
      func_0x00010be30b40(param_1);
    }
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105dff35c; end: 105dff3eb;  */

void FUN_105dff35c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be30b60();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105dff3ec; end: 105dff4a3;  */

void FUN_105dff3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
  _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
  func_0x00010c021a60(param_1,param_2);
  puVar2 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
  _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
  func_0x00010c021a60(param_3,param_4);
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained(param_5);
  lVar3 = param_5;
  func_0x00010be1f300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105dff4a4; end: 105dff53f;  */

void FUN_105dff4a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x50) & 1) == 0)) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be30b60();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105dff540; end: 105dff75b; -[SCSpotlightPlaceSearchViewProviderImpl _fetchNearbyPlacesFromLocation:dataSubject:] */

void FUN_105dff540(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 != 0) {
    uVar1 = param_5;
    func_0x00010bf51c80();
    _CLLocationCoordinate2DIsValid();
    if ((uVar1 & 1) != 0) {
      puVar4 = PTR_PTR_1126c4e68;
      _objc_alloc(PTR_PTR_1126c4e68);
      func_0x00010c0367e0();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf51c80(param_5);
      func_0x00010c0df720(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b9120(puVar4);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf51c80(param_5);
      func_0x00010c0df720(param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1be5e0(puVar4);
      _objc_release(puVar2);
      func_0x00010c0d9840(param_6);
      _objc_initWeak(auStack_48,param_3);
      uVar3 = *(undefined8 *)(param_3 + 0x28);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_5);
      _objc_retain(param_6);
      func_0x00010bfa59a0(uVar3);
      _objc_release(uVar3);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      goto LAB_105dff708;
    }
  }
  puVar4 = PTR_PTR_1126c4e68;
  _objc_alloc(PTR_PTR_1126c4e68);
  func_0x00010c0367e0();
  func_0x00010c0d9840(param_6);
LAB_105dff708:
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105dff75c; end: 105dffa53;  */

void FUN_105dff75c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined *param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_5;
  _objc_retain(param_4);
  lVar2 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    if (param_5 == (undefined *)0x0) {
      _objc_retain(param_4);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      lVar6 = param_4;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar6 != 0) {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_4);
          }
          uVar7 = *(undefined8 *)(lVar9 * 8);
          func_0x00010c27dda0(uVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar3);
          func_0x00010c0c1400(uVar7);
          _objc_release(uVar7);
          _objc_release(puVar3);
          lVar9 = lVar9 + 1;
        } while (lVar6 != lVar9);
        lVar6 = param_4;
        func_0x00010bf52a60();
      }
      _objc_release(param_4);
      _objc_release(param_4);
      param_6 = 2;
    }
    else {
      param_6 = 1;
      puVar3 = PTR____NSArray0__struct_11034ab48;
    }
    puVar4 = PTR_PTR_1126c4e68;
    _objc_alloc();
    func_0x00010c0367e0();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf51c80(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c0df720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b9120(puVar4);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf51c80(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c0df720(param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1be5e0(puVar4);
    _objc_release(puVar5);
    if ((*(byte *)(lVar2 + 0x50) & 1) == 0) {
      lVar6 = lVar2;
      func_0x00010be1d140(lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar6 = *(long *)(lVar2 + 0x48);
      func_0x00010c0fd0e0(lVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1fb460(puVar4);
    _objc_release(lVar6);
    puVar5 = puVar4;
    func_0x00010c0d9840(*(undefined8 *)(param_3 + 0x28));
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(param_6);
  if (puVar5 == (undefined *)0x0) {
    func_0x00010c0d9840(param_6);
  }
  else {
    uVar7 = *(undefined8 *)(param_4 + 0x28);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    func_0x00010bfa59a0(uVar7);
    _objc_release(uVar7);
    _objc_release(param_6);
  }
  _objc_release(param_6);
  _objc_release(puVar5);
  return;
}



/* Entry: 105dffa54; end: 105dffc6b; -[SCSpotlightPlaceSearchViewProviderImpl _fetchNearbyPlaceTagsForCarouselWithLocation:dataSubject:] */

void FUN_105dffa54(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    func_0x00010c0d9840(param_4,param_2,PTR____NSArray0__struct_11034ab48);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x105dffb34;
    puStack_40 = &UNK_11085c638;
    _objc_retain(param_4);
    uStack_38 = param_4;
    func_0x00010bfa59a0(uVar1,param_2,param_3,3,5,&puStack_58);
    _objc_release(uVar1);
    _objc_release(uStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105dffc6c; end: 105dffcef; -[SCSpotlightPlaceSearchViewProviderImpl _getFormattedDistanceStringFromLocation:toLocation:] */

void FUN_105dffc6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  func_0x00010bf51c80(param_5);
  uVar1 = param_1;
  uVar2 = param_2;
  func_0x00010bf51c80(param_6);
  _objc_release(param_6);
  func_0x000108d312a8(param_1,param_2,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c25d450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x40),PTR_s_stringFromDistance__112674f38);
  return;
}



/* Entry: 105dffcf0; end: 105e00017; -[SCSpotlightPlaceSearchViewProviderImpl _handleSpotlightPlaceTaggedForPlaceTagItem:searchSessionId:tagPlaceHandler:dismissSearch:capturedLocation:placesListed:] */

void FUN_105dffcf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c4db8;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010bffcaa0();
  _objc_release(param_7);
  uVar6 = param_3;
  func_0x00010c0fd0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0(param_8);
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126c4dc0;
  _objc_alloc(PTR_PTR_1126c4dc0);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(param_8);
  _objc_release(param_8);
  func_0x00010c0df840(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0fd0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0367c0(puVar2);
  _objc_release(param_4);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c0e50;
  _objc_alloc();
  uVar6 = param_3;
  func_0x00010c0fd0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c036540();
  _objc_release(uVar5);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0fd0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010c15ffa0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247be0(puVar2);
  func_0x00010c0ac540(uVar6);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_retain(puVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar3;
  _objc_release(uVar6);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105e00018;
  puStack_80 = &UNK_1108523f8;
  puStack_78 = puVar3;
  uStack_70 = param_5;
  uStack_68 = param_6;
  _objc_retain(puVar3);
  _objc_retain(param_5);
  func_0x0001000d76cc("APPSTORE",&puStack_98);
  _objc_release(puStack_78);
  _objc_release(uStack_70);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 105e00018; end: 105e0002b;  */

void FUN_105e00018(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105e00028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 105e0002c; end: 105e00103; -[SCSpotlightPlaceSearchViewProviderImpl _handleSpotlightPlaceTagRemovedWithRemovePlaceHandler:] */

void FUN_105e0002c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x48) != 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105e00104;
    puStack_40 = &UNK_110848708;
    _objc_copyWeak(auStack_30,auStack_28);
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
    _objc_release(uStack_38);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105e00104; end: 105e0014f;  */

void FUN_105e00104(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),*(undefined8 *)(lVar1 + 0x48));
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    *(undefined8 *)(lVar1 + 0x48) = 0;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e00150; end: 105e00273; -[SCSpotlightPlaceSearchViewProviderImpl _getAutoselectedPlaceId:] */

void FUN_105e00150(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar5 = 0;
  if (lVar2 != 0) {
    do {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar5 = *(ulong *)(lVar6 * 8);
        uVar3 = uVar5;
        func_0x00010c06cd20();
        if ((uVar3 & 1) != 0) {
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105e0022c;
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
    uVar5 = 0;
  }
LAB_105e0022c:
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    _objc_storeStrong(param_3 + 0x48,0);
    _objc_storeStrong(param_3 + 0x40,0);
    _objc_storeStrong(param_3 + 0x38,0);
    _objc_storeStrong(param_3 + 0x30,0);
    _objc_storeStrong(param_3 + 0x28,0);
    _objc_storeStrong(param_3 + 0x20,0);
    _objc_storeStrong(param_3 + 0x18,0);
    _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105e00274; end: 105e002f7; -[SCSpotlightPlaceSearchViewProviderImpl .cxx_destruct] */

void FUN_105e00274(long param_1)

{
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



/* Entry: 105e002f8; end: 105e00403;  */

void FUN_105e002f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  
  puVar3 = PTR_PTR_1126c4e70;
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_alloc(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2711a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_6;
  func_0x00010c08fa60();
  lVar1 = param_4;
  if (lVar6 != 0) {
    lVar1 = param_6;
  }
  ppuVar7 = *(undefined ***)(param_1 + 0x20);
  func_0x00010bf86fe0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar2 = ppuVar7;
  }
  func_0x00010c036600(puVar3,param_2,uVar4,uVar5,lVar1,ppuVar2);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(ppuVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105e00404; end: 105e0040b;  */

void FUN_105e00404(void)

{
  return;
}



/* Entry: 105e0040c; end: 105e006ef; -[SCSpotlightPlaceTagCarousel initWithActionHandler:nearbyPlaceTagsObservable:snapCaptureLocation:spotlightPlaceTagsLogger:showRemixLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105e0040c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1f7ac0();
  func_0x00010c1c82c0(0x4010000000000000,puVar1);
  func_0x00010c1c8300(0,puVar1);
  func_0x00010c1f93e0(0,0x4020000000000000,0,0x4020000000000000,puVar1);
  puStack_68 = PTR_PTR_1126ed2e0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_70,
                      PTR_s_initWithFrame_collectionViewLayo_1125e29e0,puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    func_0x00010c219b60(puVar2);
    func_0x00010c2025c0(puVar2);
    func_0x00010c18b5e0(puVar2);
    func_0x00010c189840(puVar2);
    _objc_opt_class(PTR_PTR_1126b2780);
    func_0x00010c126000(puVar2);
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar2);
    _objc_release(puVar3);
    lVar8 = (long)_DAT_112737050;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_5;
    _objc_release(uVar4);
    lVar8 = (long)_DAT_112737054;
    _objc_retain(param_6);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar8);
    *(undefined8 *)((long)puVar2 + lVar8) = param_6;
    _objc_release(uVar4);
    lVar8 = (long)_DAT_112737058;
    _objc_storeWeak((undefined1 *)((long)puVar2 + lVar8),param_3);
    if (param_7 != 0) {
      puVar3 = PTR_PTR_1126c4dd0;
      _objc_alloc();
      puVar5 = puVar3;
      func_0x00010902294c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c053a20();
      uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_11273705c);
      *(undefined **)((long)puVar2 + (long)_DAT_11273705c) = puVar3;
      _objc_release(uVar4);
      _objc_release(puVar5);
    }
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_112737060);
    *(undefined **)((long)puVar2 + (long)_DAT_112737060) = puVar3;
    _objc_release(uVar4);
    func_0x00010be22e00(puVar2);
    puVar6 = (undefined1 *)((long)puVar2 + lVar8);
    _objc_loadWeakRetained(puVar6);
    puVar7 = puVar6;
    func_0x00010c2683e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be319c0(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 105e006f0; end: 105e008c3; -[SCSpotlightPlaceTagCarousel collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_105e006f0(undefined8 param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  _objc_retain(param_8);
  lVar2 = param_4;
  func_0x00010beb6500(param_4,param_5,param_8);
  lVar3 = 0xc;
  if ((int)lVar2 == 0) {
    lVar3 = 0x14;
  }
  lVar3 = *(long *)(param_4 + *(int *)(&DAT_112737050 + lVar3));
  _objc_retain(lVar3);
  if (lVar3 == 0) {
    lVar3 = param_8;
    func_0x00010c0840e0();
    if (-1 < lVar3) {
      lVar3 = param_8;
      func_0x00010c0840e0();
      lVar4 = (long)_DAT_112737068;
      lVar2 = *(long *)(param_4 + lVar4);
      func_0x00010bf529e0();
      if (lVar3 < lVar2) {
        lVar3 = *(long *)(param_4 + lVar4);
        lVar2 = param_8;
        func_0x00010c0840e0(param_8);
        func_0x00010c0dfd40(lVar3,param_5,lVar2);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105e00750;
      }
    }
    dVar5 = *(double *)PTR__CGSizeZero_110347620;
    uVar6 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
LAB_105e00750:
    lVar2 = lVar3;
    func_0x00010c297e20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0720c0();
    _objc_release(lVar2);
    puVar1 = PTR_PTR_1126c4e78;
    func_0x00010bf0e8a0(PTR_PTR_1126c4e78,param_5,0x18,4,0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c07d660();
    uVar7 = 0x7fefffffffffffff;
    if ((int)lVar2 == 0) {
      uVar7 = 0x4062c00000000000;
    }
    lVar2 = lVar3;
    func_0x00010c2711a0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0x4039000000000000;
    func_0x00010bf20ba0(uVar7,0x4039000000000000);
    _objc_release(lVar2);
    dVar5 = 12.0;
    if ((int)lVar4 == 0) {
      dVar5 = 15.0;
    }
    dVar5 = dVar5 + param_3 + 32.0 + 2.0;
    _objc_release(puVar1);
    _objc_release(lVar3);
  }
  _objc_release(param_8);
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = dVar5;
  return auVar8;
}



/* Entry: 105e008c4; end: 105e0091b; -[SCSpotlightPlaceTagCarousel collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105e008c4(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_11273706c) == 0) {
    lVar1 = *(long *)(param_1 + _DAT_112737068);
    func_0x00010bf529e0(lVar1);
  }
  else {
    lVar1 = 1;
  }
  if (*(long *)(param_1 + _DAT_11273705c) != 0) {
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}



/* Entry: 105e0091c; end: 105e00bf7; -[SCSpotlightPlaceTagCarousel collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e0091c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = param_1;
  func_0x00010beb6500();
  lVar5 = 0xc;
  if ((int)lVar4 == 0) {
    lVar5 = 0x14;
  }
  lVar5 = *(long *)(param_1 + *(int *)(&DAT_112737050 + lVar5));
  _objc_retain(lVar5);
  if (lVar5 == 0) {
    lVar5 = param_4;
    func_0x00010c0840e0();
    if (-1 < lVar5) {
      lVar5 = param_4;
      func_0x00010c0840e0();
      lVar6 = (long)_DAT_112737068;
      lVar4 = *(long *)(param_1 + lVar6);
      func_0x00010bf529e0();
      if (lVar5 < lVar4) {
        lVar5 = *(long *)(param_1 + lVar6);
        func_0x00010c0840e0(param_4);
        func_0x00010c0dfd40(lVar5);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_105e00990;
      }
    }
    uVar7 = 0;
  }
  else {
LAB_105e00990:
    uVar7 = param_3;
    func_0x00010bf6e0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    puVar1 = PTR_PTR_1126c4e80;
    _objc_alloc(PTR_PTR_1126c4e80);
    lVar4 = lVar5;
    func_0x00010c2711a0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c297e20(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07d660(lVar5);
    lVar2 = param_1;
    func_0x00010be49d00();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c028dc0(0x4062c00000000000,0x4039000000000000,puVar1);
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(lVar4);
    func_0x00010bf47740(uVar7);
    uVar3 = uVar7;
    func_0x00010c08c0e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(uVar3);
    uVar3 = uVar7;
    func_0x00010c08c0e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x402a000000000000);
    _objc_release(uVar3);
    func_0x00010c07d660(lVar5);
    func_0x00010bee12a0(param_1);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(lVar5);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 105e00bf8; end: 105e00c47;  */

void FUN_105e00bf8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c279540(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e00c48; end: 105e00c83; -[SCSpotlightPlaceTagCarousel scrollViewWillEndDragging:withVelocity:targetContentOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e00c48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112737054);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aedc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e00c84; end: 105e00cd3; -[SCSpotlightPlaceTagCarousel didTapCell:] */

void FUN_105e00c84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010c09ef00(param_3,param_2,param_1);
  lVar1 = param_1;
  func_0x00010bfed040();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010be2fbc0(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e00cd4; end: 105e00fb3; -[SCSpotlightPlaceTagCarousel _handleSelectCellAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e00cd4(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  uVar3 = param_1;
  func_0x00010beb6500(param_1,param_2,param_3);
  if ((uVar3 & 1) != 0) goto LAB_105e00f98;
  lVar10 = (long)_DAT_11273706c;
  lVar1 = *(long *)(param_1 + lVar10);
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c0840e0();
    if (lVar1 < 0) goto LAB_105e00f98;
    lVar1 = param_3;
    func_0x00010c0840e0();
    lVar9 = (long)_DAT_112737068;
    lVar10 = *(long *)(param_1 + lVar9);
    func_0x00010bf529e0();
    if (lVar10 <= lVar1) goto LAB_105e00f98;
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    lVar1 = param_3;
    func_0x00010c0840e0(param_3);
    func_0x00010c0dfd40(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c297e20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0720c0();
    _objc_release(uVar6);
    if ((int)uVar7 == 0) {
      lVar1 = param_3;
      func_0x00010c0840e0(param_3);
      uVar3 = param_1;
      func_0x00010bde6e20(param_1,param_2,uVar2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c0e50;
      _objc_alloc(PTR_PTR_1126c0e50);
      uVar6 = uVar2;
      func_0x00010c297e20(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      func_0x00010c2711a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c036540(puVar4,param_2,uVar6,uVar7,4,1,uVar3);
      _objc_release(uVar7);
      _objc_release(uVar6);
      lVar1 = param_1 + (long)_DAT_112737058;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf7d140();
      _objc_release(lVar1);
      lVar1 = param_3;
      func_0x00010c0840e0(param_3);
      uVar7 = *(undefined8 *)(param_1 + (long)_DAT_112737054);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010c297e20(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010c247be0(uVar3);
      func_0x00010c0ac540(uVar7,param_2,uVar6,0,0,lVar1 + -1,uVar8);
      _objc_release(uVar6);
      _objc_release(uVar7);
      goto LAB_105e00f84;
    }
    uVar3 = param_1 + (long)_DAT_112737058;
    _objc_loadWeakRetained(uVar3);
    func_0x00010bf7d400();
  }
  else {
    func_0x00010c27dd80();
    if (lVar1 == 0) goto LAB_105e00f98;
    lVar1 = *(long *)(param_1 + lVar10);
    func_0x00010c27dd80();
    if (lVar1 == 1) goto LAB_105e00f98;
    lVar1 = param_1 + (long)_DAT_112737058;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf7d140();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_112737054);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(ulong *)(param_1 + lVar10);
    func_0x00010c0fd0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_1 + lVar10);
    func_0x00010c0fd640(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c247be0();
    func_0x00010c0b18e0(uVar2,param_2,uVar3,0,puVar5);
LAB_105e00f84:
    _objc_release(puVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_105e00f98:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e00fb4; end: 105e010bf; -[SCSpotlightPlaceTagCarousel _leadingAccessoryForIdentifier:isSelected:] */

void FUN_105e00fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e2b598);
  uVar4 = 0x4028000000000000;
  if ((int)uVar1 == 0) {
    uVar4 = 0x402e000000000000;
  }
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x00010c013de0(0,0,uVar4,uVar4);
  func_0x00010be1fa60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1a9f00(puVar2,param_2,param_1);
  _objc_release(param_1);
  func_0x00010c182220(puVar2,param_2,1);
  func_0x00010c219b60(puVar2,param_2,0);
  uVar1 = 0xd5;
  if (param_4 == 0) {
    uVar1 = 0xcd;
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(puVar2,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e010c0; end: 105e01173; -[SCSpotlightPlaceTagCarousel _getImageForPillWithIdentifier:] */

void FUN_105e010c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e2b598);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e2b5b8);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e2b578;
    if ((int)uVar1 == 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e2b538;
    }
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e2b558;
  }
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e01174; end: 105e012af; -[SCSpotlightPlaceTagCarousel _updateStylingForCell:isSelected:] */

void FUN_105e01174(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_3);
  bVar2 = param_4 == 0;
  uVar4 = 0x6a;
  if (bVar2) {
    uVar4 = 0x6b;
  }
  uVar5 = 0xd5;
  if (bVar2) {
    uVar5 = 0xbf;
  }
  uVar1 = 0x6a;
  if (bVar2) {
    uVar1 = 0xae;
  }
  func_0x00010c23ba80(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_3,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c27f7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c26c280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar4 = param_3;
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c173280(uVar4,param_2,puVar6);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105e012b0; end: 105e01303; -[SCSpotlightPlaceTagCarousel _insertSearchPlacePill] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e012b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112737068;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c0d3c80();
  func_0x00010c066b00();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105e01304; end: 105e01493; -[SCSpotlightPlaceTagCarousel _getSpotlightPlaceTagsWithDataObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e01304(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c4dd0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000106879814();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053a20();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112737070);
  *(undefined **)(param_1 + _DAT_112737070) = puVar1;
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa140();
  lVar4 = (long)_DAT_112737068;
  _objc_retain(puVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105e01494; end: 105e014db;  */

void FUN_105e01494(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2cb80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e014dc; end: 105e015f3; -[SCSpotlightPlaceTagCarousel _handleNearbyPlaceTags:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e014dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112737068;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112737074);
  *(undefined8 *)(param_1 + _DAT_112737074) = uVar1;
  _objc_release(uVar2);
  func_0x00010be3c8a0(param_1);
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105e015fc;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105e015f4; end: 105e015fb;  */

void FUN_105e015f4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_venueId_1126839b0);
  return;
}


