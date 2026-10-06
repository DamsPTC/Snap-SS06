/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106fd6b48; end: 106fd6bdb; -[SCDiscoverFeedPerformanceLogger _logDebugWarningInfo:] */

void FUN_106fd6b48(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 != 0) {
    _CACurrentMediaTime();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e96418);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x38),param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fd6bdc; end: 106fd6cc3; -[SCDiscoverFeedPerformanceLogger logDiscoverFeedViewReady:firstPaintMs:sourcePage:viewReadyType:cacheLoaded:contentReadyType:actionType:pageSessionId:stopLoggingPullToRefreshLatency:] */

void FUN_106fd6bdc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 uVar1;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_77;
  
  _objc_retain(param_10);
  uVar1 = *(undefined8 *)(param_3 + 8);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106fd6cc4;
  puStack_c0 = &UNK_110987908;
  uStack_78 = param_11;
  lStack_b8 = param_3;
  uStack_b0 = param_10;
  uStack_a8 = param_6;
  uStack_a0 = param_8;
  uStack_98 = param_5;
  uStack_90 = param_1;
  uStack_88 = param_2;
  uStack_80 = param_9;
  uStack_77 = param_7;
  _objc_retain(param_10);
  func_0x00010c0f7fc0(uVar1,param_4,&puStack_d8);
  _objc_release(uStack_b0);
  _objc_release(param_10);
  return;
}



/* Entry: 106fd6cc4; end: 106fd6e93;  */

void FUN_106fd6cc4(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 == 0) {
    if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (lVar6 == 3) {
      uVar7 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x50);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,3,*(undefined8 *)(param_1 + 0x38));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(puVar4);
      if ((uVar7 & 1) != 0) {
        return;
      }
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
    }
    else {
      if (lVar6 != 1) goto LAB_106fd6de4;
      uVar7 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x48);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,1,*(undefined8 *)(param_1 + 0x38));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(puVar4);
      if ((uVar7 & 1) != 0) {
        return;
      }
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar8);
    _objc_release(puVar4);
    lVar6 = *(long *)(param_1 + 0x30);
  }
LAB_106fd6de4:
  bVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x20) == 0;
  lVar1 = *(long *)(param_1 + 0x40);
  FUN_106fd7648(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),lVar1,lVar6,
                *(undefined1 *)(param_1 + 0x61),bVar3,*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60),
                *(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined1 *)(param_1 + 0x61);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010ba604dc(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010ba60458(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107d04ae8(uVar9,bVar3,uVar2,uVar8,uVar5,lVar1 == 0x13,lVar1 == 0x5c);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 106fd6e94; end: 106fd6eff; -[SCDiscoverFeedPerformanceLogger .cxx_destruct] */

void FUN_106fd6e94(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fd6f00; end: 106fd6fa3; -[SCDiscoverFeedPerformanceLoggerAdaptor initWithPerformanceLogger:discoverFeedDataFetcher:] */

undefined1 *
FUN_106fd6f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f82a0;
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



/* Entry: 106fd6fa4; end: 106fd7207; -[SCDiscoverFeedPerformanceLoggerAdaptor didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_106fd6fa4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)lVar1 == 0) goto LAB_106fd71bc;
    uVar4 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar5 != 0) {
      uVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar4);
        }
        uVar6 = *(undefined8 *)(uVar9 * 8);
        func_0x0001079af428(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x0001079d6288();
        _objc_retainAutoreleasedReturnValue();
        FUN_106fd7238();
        _objc_release(uVar7);
        _objc_release(uVar6);
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
      uVar5 = uVar4;
      func_0x00010bf52a60();
    }
  }
  else {
    func_0x00010c0b0960(*(undefined8 *)(param_1 + 8));
    uVar5 = param_5;
    func_0x00010c0e00e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x0001079d6288();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar9 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar3 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar2);
    uVar5 = uVar9;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar9);
    uVar9 = uVar5;
    func_0x00010bf529e0();
    _objc_release(uVar5);
    if (uVar9 != 0) {
      FUN_106fd7238(uVar4,*(undefined8 *)(param_1 + 8));
    }
  }
  _objc_release(uVar4);
LAB_106fd71bc:
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 106fd7208; end: 106fd7237; -[SCDiscoverFeedPerformanceLoggerAdaptor .cxx_destruct] */

void FUN_106fd7208(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fd7238; end: 106fd72d3;  */

void FUN_106fd7238(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x000107cb8138();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c0720c0();
    if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c0720c0(), (int)uVar1 != 0)) {
      func_0x00010c0a57e0(0,param_2);
    }
    func_0x00010c0a57e0(0,param_2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fd72d4; end: 106fd737f;  */

undefined8 FUN_106fd72d4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110decf58);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110de6838);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110dd1df8);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_1;
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e202f8);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_1;
          func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e655d8);
          uVar2 = 4;
          if ((int)uVar1 == 0) {
            uVar2 = 0xffffffffffffffff;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106fd7380; end: 106fd74cf;  */

void FUN_106fd7380(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  lVar7 = param_1;
  func_0x00010bf529e0();
  if ((param_2 != 0) && (lVar7 != 0)) {
    lVar7 = 0;
    do {
      lVar2 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar7;
      func_0x0001079af528(lVar7,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x0001079d6288();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c0deb60();
      if ((lVar5 != 0) && (lVar5 = lVar4, func_0x000107cb8138(), (int)lVar5 != 0)) {
        func_0x00010c0720c0();
        func_0x00010befa120(puVar1);
      }
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar7 = lVar7 + 1;
    } while (param_2 != lVar7);
  }
  puVar6 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106fd74d0; end: 106fd756b;  */

undefined8 FUN_106fd74d0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e202f8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e3cd18);
    if ((((uVar1 & 1) == 0) &&
        (uVar1 = param_1,
        func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110ee11f8),
        (uVar1 & 1) == 0)) &&
       (uVar1 = param_1,
       func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110decf58),
       (uVar1 & 1) == 0)) {
      uVar1 = param_1;
      func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110de6838);
      uVar2 = 0xffffffffffffffff;
      if ((int)uVar1 != 0) {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106fd756c; end: 106fd7647;  */

void FUN_106fd756c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x4;
  
  puVar1 = PTR_PTR_1126d3ef8;
  _objc_retain(in_x4);
  _objc_opt_new(puVar1);
  func_0x00010c1cc320();
  func_0x00010c207200(puVar1);
  func_0x00010c20f8a0(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1cc300(puVar1);
  _objc_release(puVar2);
  func_0x00010c1f9620(puVar1);
  func_0x00010c0b2e60(in_x4);
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106fd7648; end: 106fd77af;  */

void FUN_106fd7648(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 in_x6;
  long in_x7;
  
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  puVar1 = PTR_PTR_1126d3f00;
  _objc_opt_new(PTR_PTR_1126d3f00);
  func_0x00010c206f20();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1e7f60(puVar1);
  _objc_release(puVar2);
  func_0x00010c197d00(puVar1);
  func_0x00010c225de0(puVar1);
  func_0x00010c225fa0(puVar1);
  func_0x00010c182500(puVar1);
  func_0x00010c1a2e40(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c19d3a0(puVar1);
  _objc_release(puVar2);
  lVar3 = in_x7;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c1d8620(puVar1);
  }
  func_0x00010c0b2e60(in_x6);
  _objc_release(puVar1);
  _objc_release(in_x7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x6);
  return;
}



/* Entry: 106fd77b0; end: 106fd7a7b;  */

void FUN_106fd77b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar2 = param_1;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _CACurrentMediaTime();
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x106fd78e4;
  puStack_88 = &UNK_1108e3258;
  uStack_80 = param_2;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_68 = param_5;
  uStack_60 = uVar2;
  uStack_58 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_a0);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 106fd7a7c; end: 106fd7a8b;  */

void FUN_106fd7a7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fd7a8c; end: 106fd7c2f;  */

void FUN_106fd7a8c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_1;
  _objc_retain();
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar4 = param_1;
  func_0x00010c269d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  func_0x00010bf39fa0(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar4);
  lVar3 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    _dispatch_group_enter(uVar1);
    lVar3 = param_2;
    func_0x00010c269d40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar1);
    func_0x00010bf39fa0(lVar3);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(uVar1);
  }
  _dispatch_group_wait(uVar1,0xffffffffffffffff);
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106fd7c30; end: 106fd7c3f;  */

void FUN_106fd7c30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fd7c40; end: 106fd7d83;  */

void FUN_106fd7c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106fd7d84;
  puStack_70 = &UNK_110852488;
  uStack_68 = param_1;
  uStack_60 = param_2;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010007380c(uVar1,&puStack_88);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 106fd7d84; end: 106fd8013;  */

void FUN_106fd7d84(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = param_1;
  _dispatch_group_create();
  _dispatch_group_enter();
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puStack_78 = &uStack_80;
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106fd8014;
  puStack_98 = &UNK_1108cfd58;
  puStack_88 = &uStack_80;
  _objc_retain(lVar3);
  lStack_90 = lVar3;
  func_0x00010c276b80(uVar4);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar4);
  lVar5 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    _dispatch_group_enter(lVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar2;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x106fd8030;
    puStack_c8 = &UNK_1108cfd58;
    puStack_b8 = &uStack_80;
    _objc_retain(lVar3);
    lStack_c0 = lVar3;
    func_0x00010c276b80(uVar4);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar4);
    _objc_release(lStack_c0);
  }
  lVar5 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    _dispatch_group_enter(lVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_110 = puVar2;
    uStack_108 = 0xc2000000;
    uStack_100 = 0x106fd804c;
    puStack_f8 = &UNK_1108cfd58;
    puStack_e8 = &uStack_80;
    _objc_retain(lVar3);
    lStack_f0 = lVar3;
    func_0x00010c276b80(uVar4);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar4);
    _objc_release(lStack_f0);
  }
  _dispatch_group_wait(lVar3,0xffffffffffffffff);
  puStack_140 = puVar2;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x106fd8068;
  puStack_128 = &UNK_1108647e8;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
  puStack_118 = &uStack_80;
  uStack_120 = uVar1;
  func_0x00010007380c(uVar4,&puStack_140);
  _objc_release(uStack_120);
  _objc_release(lStack_90);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(lVar3);
  return;
}



/* Entry: 106fd8014; end: 106fd807f;  */

void FUN_106fd8014(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fd8080; end: 106fd80c7; -[SCChatNotificationStartupThrottleRequest initWithTargetScreen:] */

void FUN_106fd8080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f82a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 106fd80c8; end: 106fd80d3; -[SCChatNotificationStartupThrottleRequest shouldThrottle:] */

bool FUN_106fd80c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 2;
}



/* Entry: 106fd80d4; end: 106fd80db; -[SCChatNotificationStartupThrottleRequest isAppStartupThrottleRequest] */

undefined8 FUN_106fd80d4(void)

{
  return 1;
}



/* Entry: 106fd80dc; end: 106fd80e7; -[SCChatNotificationStartupThrottleRequest requestID] */

undefined ** FUN_106fd80dc(void)

{
  return &PTR____CFConstantStringClassReference_110e964f8;
}



/* Entry: 106fd80e8; end: 106fd81f7; -[SCChatNotificationStartupThrottleRequest isEqual:] */

ulong FUN_106fd80e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    uVar2 = 1;
  }
  else {
    if (param_3 != 0) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar1 & 1) != 0) {
        uVar2 = param_1;
        func_0x00010c26a060();
        uVar1 = param_3;
        func_0x00010c26a060();
        if (uVar2 == uVar1) {
          func_0x00010c1356e0();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = param_3;
          func_0x00010c1356e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(param_1);
          _objc_retain(uVar1);
          if (param_1 == uVar1) {
            uVar2 = 1;
          }
          else if (uVar1 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = param_1;
            func_0x00010c071ae0(param_1);
          }
          _objc_release(uVar1);
          _objc_release(param_1);
          _objc_release(uVar1);
          _objc_release(param_1);
          goto LAB_106fd81dc;
        }
      }
    }
    uVar2 = 0;
  }
LAB_106fd81dc:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106fd81f8; end: 106fd81ff; -[SCChatNotificationStartupThrottleRequest targetScreen] */

undefined8 FUN_106fd81f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106fd8200; end: 106fd8207; -[SCChatNotificationStartupThrottleRequest setTargetScreen:] */

void FUN_106fd8200(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106fd8208; end: 106fd864f;  */

void FUN_106fd8208(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((param_1 & 0xfffffffffffffffe) == 2) {
    puVar1 = PTR_PTR_1126b6b18;
    func_0x00010c22b6a0(PTR_PTR_1126b6b18);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c2c70;
    _objc_alloc(PTR_PTR_1126c2c70);
    func_0x00010c050c20();
    func_0x00010bf96420(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b6b18;
    func_0x00010c22b6a0(PTR_PTR_1126b6b18);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d3e98;
    _objc_alloc(PTR_PTR_1126d3e98);
    func_0x00010c01ab60();
    func_0x00010bf96440(puVar1,param_2,puVar2);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106fd8650; end: 106fd8c57;  */

undefined * FUN_106fd8650(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    goto LAB_106fd8bf0;
  }
  puVar7 = param_3;
  func_0x00010c22f840();
  if (((int)puVar7 == 0) ||
     (puVar7 = PTR__OBJC_CLASS___UIViewController_1126af898, func_0x00010c070b00(),
     ((ulong)puVar7 & 1) != 0)) {
    puVar7 = (undefined *)0x4;
    goto LAB_106fd8bf0;
  }
  puVar2 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
    puVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar7);
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = param_1;
      func_0x00010c275140();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 != (undefined *)0x0) goto LAB_106fd871c;
    }
    puVar2 = param_1;
    func_0x00010c29c3c0();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_106fd871c:
  if ((puVar2 == (undefined *)0x0) || (puVar2 == param_1)) {
LAB_106fd874c:
    puVar4 = param_3;
    func_0x00010bf810c0();
    puVar9 = PTR_PTR_1126c8d50;
    puVar3 = PTR_DAT_1126a5658;
    puVar7 = param_1;
    if ((long)puVar4 < 7) {
      if (puVar4 != (undefined *)0x1) {
        if (puVar4 != (undefined *)0x2) {
          if (puVar4 == (undefined *)0x5) {
            puVar3 = PTR_PTR_1126c8d50;
            _objc_opt_class(PTR_PTR_1126c8d50);
            puVar9 = param_1;
            _objc_opt_isKindOfClass(param_1,puVar3);
            if (((ulong)puVar9 & 1) != 0) {
              puVar3 = param_1;
              func_0x00010c0c7a40();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar3;
              func_0x00010c07ec40();
              _objc_release(puVar3);
              if (((ulong)puVar9 & 1) != 0) goto LAB_106fd8a64;
            }
            puVar3 = PTR_DAT_1126a57f8;
            _objc_retain(param_1);
            puVar9 = param_1;
            func_0x00010010fab4(param_1,puVar3);
            puVar3 = param_1;
            if ((int)puVar9 == 0) {
              puVar3 = (undefined *)0x0;
            }
            _objc_retain(puVar3);
            _objc_release(param_1);
            if (puVar3 != (undefined *)0x0) {
              puVar3 = param_1;
              func_0x00010c07ec40();
              _objc_release(param_1);
              if (((ulong)puVar3 & 1) != 0) goto LAB_106fd8a64;
            }
            puVar3 = PTR_DAT_1126a5800;
            _objc_retain(param_1);
            func_0x00010010fab4(param_1,puVar3);
            _objc_release(param_1);
            if (param_1 != (undefined *)0x0) goto joined_r0x000106fd8a24;
          }
          goto LAB_106fd8a6c;
        }
        _objc_retain(param_1);
        puVar9 = param_1;
        func_0x00010010fab4(param_1,puVar3);
        _objc_release(param_1);
        if ((param_1 != (undefined *)0x0) && ((int)puVar9 != 0)) {
          _objc_retain(param_1);
          puVar3 = param_1;
          func_0x00010c07a4a0();
          if ((int)puVar3 == 0) {
            puVar3 = param_1;
            func_0x00010c234d60();
            if (((ulong)puVar3 & 1) == 0) {
              _objc_release(param_1);
              goto LAB_106fd8a50;
            }
          }
          else {
            puVar3 = param_3;
            func_0x00010c073420();
            if (((ulong)puVar3 & 1) == 0) {
LAB_106fd8a00:
              _objc_release(param_1);
              goto LAB_106fd8a6c;
            }
          }
LAB_106fd8a40:
          _objc_release(puVar7);
          goto LAB_106fd8a64;
        }
      }
LAB_106fd8a50:
      puVar7 = PTR__OBJC_CLASS___UIViewController_1126af898;
      func_0x00010c06e4c0();
joined_r0x000106fd8a24:
      if (((ulong)puVar7 & 1) != 0) {
LAB_106fd8a64:
        puVar7 = (undefined *)0x4;
        goto LAB_106fd8be8;
      }
    }
    else if (puVar4 == (undefined *)0x7) {
      puVar3 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
      _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
      puVar9 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar3);
      if (((ulong)puVar9 & 1) == 0) {
        puVar3 = PTR_PTR_1126cb710;
        _objc_opt_class(PTR_PTR_1126cb710);
        _objc_opt_isKindOfClass(param_1,puVar3);
        goto joined_r0x000106fd8a24;
      }
      func_0x00010c29c580();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar7;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar3 != (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar7);
          }
          puVar4 = PTR_DAT_1126a50e0;
          lVar8 = *(long *)((long)puVar9 * 8);
          _objc_retain(lVar8);
          lVar5 = lVar8;
          func_0x00010010fab4(lVar8,puVar4);
          _objc_release(lVar8);
          if ((int)lVar5 != 0 && lVar8 != 0) goto LAB_106fd8a40;
          puVar9 = puVar9 + 1;
        } while (puVar3 != puVar9);
        puVar3 = puVar7;
        func_0x00010bf52a60();
      }
      _objc_release(puVar7);
    }
    else {
      if (puVar4 == (undefined *)0x9) goto LAB_106fd8a64;
      if (puVar4 == (undefined *)0xa) {
        _objc_retain(param_1);
        _objc_opt_class(puVar9);
        puVar3 = param_1;
        _objc_opt_isKindOfClass(param_1,puVar9);
        if (((ulong)puVar3 & 1) == 0) {
          puVar7 = (undefined *)0x0;
        }
        _objc_retain(puVar7);
        _objc_release(param_1);
        if (puVar7 != (undefined *)0x0) {
          puVar3 = param_1;
          func_0x00010c0c7a40();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar3;
          func_0x00010bfbdee0();
          _objc_release(puVar3);
          if ((int)puVar9 == 0) goto LAB_106fd8a00;
        }
        goto LAB_106fd8a40;
      }
    }
LAB_106fd8a6c:
    puVar7 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x00010c080c80();
    if (((ulong)puVar7 & 1) == 0) {
      puVar7 = param_3;
      func_0x00010bf6af20();
      if (puVar7 == (undefined *)0x1) {
        puVar7 = PTR__OBJC_CLASS___UIViewController_1126af898;
        func_0x00010c070660();
        if (((ulong)puVar7 & 1) != 0) {
LAB_106fd8b2c:
          puVar7 = (undefined *)0x2;
          goto LAB_106fd8be8;
        }
      }
      else if (puVar7 == (undefined *)0x2) {
        puVar3 = PTR__OBJC_CLASS___UIViewController_1126af898;
        func_0x00010c070660();
        puVar7 = PTR_DAT_1126a5658;
        if (((ulong)puVar3 & 1) != 0) goto LAB_106fd8b2c;
        _objc_retain(param_1);
        puVar3 = param_1;
        func_0x00010010fab4(param_1,puVar7);
        puVar7 = param_1;
        if ((int)puVar3 == 0) {
          puVar7 = (undefined *)0x0;
        }
        _objc_retain(puVar7);
        _objc_release(param_1);
        if ((puVar7 == (undefined *)0x0) ||
           (puVar3 = param_1, func_0x00010c07a4a0(), (int)puVar3 == 0)) {
          _objc_release(puVar7);
        }
        else {
          puVar7 = param_1;
          func_0x00010c06e6a0();
          _objc_release(param_1);
          if (((ulong)puVar7 & 1) == 0) goto LAB_106fd8a80;
        }
        puVar7 = PTR_DAT_1126a57f0;
        _objc_retain(param_1);
        puVar3 = param_1;
        func_0x00010010fab4(param_1,puVar7);
        puVar7 = param_1;
        if ((int)puVar3 == 0) {
          puVar7 = (undefined *)0x0;
        }
        _objc_retain(puVar7);
        _objc_release(param_1);
        if (((puVar7 == (undefined *)0x0) ||
            (puVar3 = param_1, func_0x00010c07a480(), (int)puVar3 == 0)) ||
           (puVar3 = param_3, func_0x00010c11c420(), puVar3 == (undefined *)0x6)) {
          _objc_release(puVar7);
        }
        else {
          puVar7 = param_3;
          func_0x00010c11c420();
          _objc_release(param_1);
          if (puVar7 != (undefined *)0x7) goto LAB_106fd8a80;
        }
      }
      puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar7;
      func_0x00010bf07b60();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = param_3;
        func_0x00010c074cc0();
        _objc_release(puVar7);
        if (((ulong)puVar3 & 1) != 0) {
          puVar7 = (undefined *)0x1;
          goto LAB_106fd8be8;
        }
      }
      else {
        _objc_release(puVar7);
      }
      puVar7 = (undefined *)0x0;
    }
    else {
LAB_106fd8a80:
      puVar7 = (undefined *)0x3;
    }
  }
  else {
    puVar3 = puVar2;
    func_0x00010c102fe0();
    puVar7 = (undefined *)0x3;
    if (puVar3 != (undefined *)0x2) {
      puVar7 = puVar3;
    }
    if (puVar7 < (undefined *)0x2) goto LAB_106fd874c;
  }
LAB_106fd8be8:
  _objc_release(puVar2);
LAB_106fd8bf0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar7 = PTR_PTR_1126ce4d0;
  _objc_retain();
  _objc_opt_class(puVar7);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar7);
  puVar7 = param_3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar7 = (undefined *)0x0;
  }
  _objc_retain(puVar7);
  _objc_release(param_3);
  puVar2 = puVar7;
  func_0x00010bf60ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  if (puVar2 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126c6e70;
    _objc_opt_class(PTR_PTR_1126c6e70);
    puVar3 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar7);
    puVar7 = puVar2;
    if (((ulong)puVar3 & 1) == 0) {
      _objc_retain(puVar2);
    }
    else {
      func_0x00010bf38e80(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return puVar7;
}



/* Entry: 106fd8c58; end: 106fd8d1f;  */

void FUN_106fd8c58(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = PTR_PTR_1126ce4d0;
  _objc_retain();
  _objc_opt_class(puVar1);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  uVar4 = param_1;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(param_1);
  uVar2 = uVar4;
  func_0x00010bf60ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126c6e70;
    _objc_opt_class(PTR_PTR_1126c6e70);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar1);
    uVar4 = uVar2;
    if ((uVar3 & 1) == 0) {
      _objc_retain(uVar2);
    }
    else {
      func_0x00010bf38e80(uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106fd8d20; end: 106fd8d3b;  */

void FUN_106fd8d20(void)

{
  return;
}



/* Entry: 106fd8d3c; end: 106fd8e07;  */

void FUN_106fd8d3c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_1126a57f0;
  _objc_retain();
  lVar2 = param_1;
  func_0x00010010fab4(param_1,puVar1);
  _objc_release(param_1);
  if ((param_1 != 0) && ((int)lVar2 != 0)) {
    func_0x00010c0edee0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fd8e08; end: 106fd958b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106fd8e08(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  undefined1 uStack_18e;
  undefined1 uStack_18d;
  long lStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar14 = param_1;
  func_0x00010c0734a0();
  puVar12 = PTR_PTR_1126b19f8;
  func_0x00010c0dbb80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_100 = puVar12;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  lVar1 = param_1;
  func_0x00010c15de20();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar1;
  func_0x00010bf51e00();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfce860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_158 = puVar11;
  _objc_retain(puVar11);
  _objc_retain(lVar1);
  lVar16 = lVar15;
  _objc_retain();
  iVar13 = (int)lVar14;
  lStack_160 = lVar1;
  lStack_148 = lVar15;
  if (lVar1 == 0) {
    func_0x000107043694();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar15;
    func_0x00010c0720c0();
    _objc_release();
    if ((int)lVar14 == 0) {
      puVar11 = (undefined *)lVar15;
      func_0x000108f22604();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puStack_158;
      if (puVar11 == (undefined *)0x0) {
        puVar11 = (undefined *)lVar15;
        func_0x000108f22680();
        _objc_retainAutoreleasedReturnValue();
        if (puVar11 == (undefined *)0x0) {
          func_0x000109020298(lVar15,0,&PTR____CFConstantStringClassReference_110daafd8);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = (undefined *)lVar15;
        }
      }
    }
    else {
      func_0x000108f22bfc();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar16;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = (undefined *)lVar14;
      func_0x00010c293a00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar14);
      _objc_release(lVar16);
      puVar12 = puStack_158;
    }
    lVar14 = (long)puVar11;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar14;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    uVar10 = 4;
    if (iVar13 == 0) {
      uVar10 = 0;
    }
    lVar14 = (long)puVar11;
    func_0x0001085a30b8(puVar11,uVar10,puVar12,0x13,1,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001085a33ac();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar14;
    func_0x00010bfc61a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    _objc_release(lVar16);
    lVar14 = lVar15;
    func_0x00010c08fa60();
    if (lVar14 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_78 = lVar15;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar11 = puVar12;
    func_0x000108f22bfc();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c293a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar11);
    puStack_178 = puVar3;
    func_0x00010c2923e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = (undefined *)lVar1;
    func_0x000108ef2144(lVar1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    lStack_180 = lVar1;
    puStack_170 = puVar12;
    func_0x0001085a35dc(lVar1,puVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    lStack_150 = lVar15;
    _objc_release(lVar14);
    puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(lVar1);
    lVar14 = lVar1;
    func_0x00010bf52a60();
    if (lVar14 != 0) {
      lVar15 = *plStack_130;
      do {
        lVar16 = 0;
        do {
          if (*plStack_130 != lVar15) {
            _objc_enumerationMutation(lVar1);
          }
          puVar11 = *(undefined **)(lStack_138 + lVar16 * 8);
          if (iVar13 == 0) {
LAB_106fd9174:
            puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c294420(puVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar12);
            _objc_release(puVar11);
          }
          else {
            puVar2 = puVar11;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            func_0x00010c0720c0();
            _objc_release(puVar2);
            if ((int)puVar3 == 0) goto LAB_106fd9174;
            func_0x00010c294420(puVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar12);
            puVar2 = puVar11;
          }
          _objc_release(puVar2);
          lVar16 = lVar16 + 1;
        } while (lVar14 != lVar16);
        lVar14 = lVar1;
        func_0x00010bf52a60();
      } while (lVar14 != 0);
    }
    _objc_release(lVar1);
    lVar14 = lVar1;
    func_0x0001085a37b4(lVar1,puVar12,puStack_158,0x13,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    _objc_release(lVar1);
    _objc_release(lStack_180);
    _objc_release(puStack_178);
    _objc_release(puStack_170);
    puVar11 = puStack_168;
    lVar1 = lStack_150;
  }
  _objc_release(puVar11);
  lStack_150 = lVar1;
  if (iVar13 == 0) {
    lVar15 = 0;
  }
  else {
    puVar12 = PTR_PTR_1126c2ec0;
    _objc_alloc(PTR_PTR_1126c2ec0);
    func_0x00010c004820();
    lVar15 = lStack_148;
    func_0x000108fed074(lStack_148,lVar1,puVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
  }
  puVar12 = PTR_PTR_1126b4600;
  _objc_retain(lVar15);
  _objc_retain(lVar14);
  _objc_alloc();
  lVar1 = lVar14;
  func_0x00010bf1ac80(lVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar1;
  func_0x00010bf1ae20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar14;
  func_0x00010bf1ac80(lVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfce6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7e80();
  puStack_168 = puVar12;
  _objc_release(lVar15);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar16);
  _objc_release(lVar1);
  puVar11 = PTR_PTR_1126b4608;
  _objc_alloc(PTR_PTR_1126b4608);
  lVar16 = lVar14;
  func_0x00010bf14860();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar14;
  func_0x00010c141300(lVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar14;
  func_0x00010bf12c40(lVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar14;
  func_0x00010c0ce1c0(lVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar14;
  func_0x00010c230aa0();
  lVar7 = lVar14;
  func_0x00010c076be0();
  lVar8 = lVar14;
  func_0x00010c233fa0();
  _objc_release(lVar14);
  puVar12 = puStack_168;
  uStack_18d = 0;
  uStack_18e = (undefined1)lVar8;
  uStack_18f = (undefined1)lVar7;
  uStack_190 = (undefined1)lVar6;
  puVar3 = puStack_168;
  lVar6 = lVar16;
  func_0x00010bff7b20(puVar11);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(lVar16);
  _objc_release(puVar12);
  _objc_release(lVar15);
  _objc_release(lStack_150);
  _objc_release(lVar14);
  lVar1 = lStack_148;
  _objc_release(lStack_148);
  lVar14 = lStack_160;
  _objc_release(lStack_160);
  puVar12 = puStack_158;
  _objc_release(puStack_158);
  _objc_release(lVar14);
  _objc_release(lVar1);
  puVar2 = puVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuVar9 = &puStack_1e0;
    puStack_1b8 = puVar12;
    lStack_1b0 = lVar1;
    lStack_1a8 = lVar14;
    pcStack_198 = FUN_106fd958c;
    lStack_1d0 = lVar16;
    lStack_1c8 = lVar8;
    lStack_1c0 = lVar7;
    puStack_1a0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar3);
    _objc_retain(lVar6);
    puStack_1d8 = PTR_PTR_1126f82b0;
    puStack_1e0 = puVar2;
    _objc_msgSendSuper2(&puStack_1e0,PTR_s_initWithNotification_withHostVie_1125e9930,puVar3,lVar6);
    if (ppuVar9 != (undefined **)0x0) {
      puVar12 = PTR_PTR_1126d3f08;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      lVar14 = (long)_DAT_1127621b0;
      uVar10 = *(undefined8 *)((long)ppuVar9 + lVar14);
      *(undefined **)((long)ppuVar9 + lVar14) = puVar12;
      _objc_release(uVar10);
      puVar12 = puVar3;
      func_0x00010bfeafe0();
      if ((int)puVar12 != 0) {
        uVar10 = *(undefined8 *)((long)ppuVar9 + lVar14);
        func_0x00010bf81240(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c182220();
        _objc_release(uVar10);
      }
      puVar12 = puVar3;
      func_0x00010bfeb320(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0(*(undefined8 *)((long)ppuVar9 + lVar14));
      _objc_release(puVar12);
      uVar10 = *(undefined8 *)((long)ppuVar9 + lVar14);
      func_0x00010c271420(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cfce0();
      _objc_release(uVar10);
      puVar12 = puVar3;
      func_0x00010c11c420();
      if (puVar12 == (undefined *)0x6a) {
        uVar10 = *(undefined8 *)((long)ppuVar9 + lVar14);
        func_0x00010c271420(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1cfce0();
        _objc_release(uVar10);
      }
      puVar12 = puVar3;
      func_0x00010c11c420();
      if (puVar12 == (undefined *)0x95) {
        uVar10 = *(undefined8 *)((long)ppuVar9 + lVar14);
        func_0x00010c260f20(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1cfce0();
        _objc_release(uVar10);
      }
      puVar12 = puVar3;
      func_0x00010bfce860();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar11 = puVar3;
      func_0x00010c0734a0();
      *(char *)((long)ppuVar9 + (long)_DAT_1127621b4) = (char)puVar11;
      if (puVar12 == (undefined *)0x0) {
        uVar10 = *(undefined8 *)((long)ppuVar9 + lVar14);
        func_0x00010c271420(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c165e20();
        _objc_release(uVar10);
        uVar10 = *(undefined8 *)((long)ppuVar9 + lVar14);
        func_0x00010c271420(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c83a0(0x3fe8000000000000);
        _objc_release(uVar10);
      }
      puVar12 = puVar3;
      FUN_106fdda20(puVar3);
      func_0x00010bf47d60(*(undefined8 *)((long)ppuVar9 + lVar14));
      func_0x00010befbb60(ppuVar9);
      puVar11 = PTR_PTR_1126ae720;
      func_0x00010c0b8440();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)((long)ppuVar9 + (long)_DAT_1127621b8);
      *(undefined **)((long)ppuVar9 + (long)_DAT_1127621b8) = puVar11;
      _objc_release(uVar10);
      func_0x00010beb7c20(ppuVar9);
      func_0x00010befbb60(lVar6);
      _objc_release(puVar12);
    }
    _objc_release(lVar6);
    _objc_release(puVar3);
    return (undefined1 *)ppuVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return puVar11;
}



/* Entry: 106fd958c; end: 106fd981f; -[SCBitmojiInAppNotificationCard initWithNotification:withHostView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106fd958c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f82b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNotification_withHostVie_1125e9930,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d3f08;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar6 = (long)_DAT_1127621b0;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    lVar3 = param_3;
    func_0x00010bfeafe0();
    if ((int)lVar3 != 0) {
      uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
      func_0x00010bf81240(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c182220();
      _objc_release(uVar5);
    }
    lVar3 = param_3;
    func_0x00010bfeb320(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(lVar3);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c271420(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
    _objc_release(uVar5);
    lVar3 = param_3;
    func_0x00010c11c420();
    if (lVar3 == 0x6a) {
      uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
      func_0x00010c271420(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cfce0();
      _objc_release(uVar5);
    }
    lVar3 = param_3;
    func_0x00010c11c420();
    if (lVar3 == 0x95) {
      uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
      func_0x00010c260f20(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cfce0();
      _objc_release(uVar5);
    }
    lVar3 = param_3;
    func_0x00010bfce860();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar4 = param_3;
    func_0x00010c0734a0();
    *(char *)((long)puVar1 + (long)_DAT_1127621b4) = (char)lVar4;
    if (lVar3 == 0) {
      uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
      func_0x00010c271420(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c165e20();
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
      func_0x00010c271420(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c83a0(0x3fe8000000000000);
      _objc_release(uVar5);
    }
    lVar3 = param_3;
    FUN_106fdda20(param_3);
    func_0x00010bf47d60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127621b8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127621b8) = puVar2;
    _objc_release(uVar5);
    func_0x00010beb7c20(puVar1);
    func_0x00010befbb60(param_4);
    _objc_release(lVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106fd9820; end: 106fd983b;  */

void FUN_106fd9820(void)

{
  _objc_opt_new(PTR_PTR_1126c2e90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fd983c; end: 106fd998f; -[SCBitmojiInAppNotificationCard layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fd983c(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f82b0;
  lStack_70 = param_2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  lVar3 = (long)_DAT_1127621b0;
  func_0x00010c19f0e0(0x4014000000000000,0x4014000000000000,param_1 + -10.0,0x404b000000000000,
                      *(undefined8 *)(param_2 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar3));
  func_0x00010bf19a00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar4 = 0x4041000000000000;
  uVar5 = 0x4020000000000000;
  uVar6 = 0x403a000000000000;
  uVar7 = 0x4038000000000000;
  _CGRectIntegral(0x4041000000000000,0x4020000000000000,0x403a000000000000,0x4038000000000000);
  uVar2 = *(undefined8 *)(param_2 + _DAT_1127621b8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(uVar4,uVar5,uVar6,uVar7);
  _objc_release(uVar2);
  return;
}



/* Entry: 106fd9990; end: 106fd9b23; -[SCBitmojiInAppNotificationCard setUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fd9990(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar3 = (long)_DAT_1127621bc;
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != param_3) {
      _objc_storeWeak(param_1 + lVar3,param_3);
      lVar1 = param_3;
      func_0x00010bfe7580(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)_DAT_1127621b0;
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010bf132a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1aa200();
      _objc_release(uVar2);
      _objc_release(lVar1);
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010bf132a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
      _objc_release(uVar2);
      lVar1 = param_1;
      func_0x00010c0dbb80(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      FUN_106fd8e08();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010bf132a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0();
      _objc_release(uVar2);
      _objc_release(lVar3);
      _objc_release(lVar1);
      lVar3 = *(long *)(param_1 + lVar4);
      func_0x00010bf132a0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010bfe7580();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + lVar4);
        func_0x00010bf132a0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c29d560();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar2);
        _objc_release(lVar1);
      }
      _objc_release(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fd9b24; end: 106fd9bff; -[SCBitmojiInAppNotificationCard _showAndAnimateTypingBubbleIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fd9b24(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_1127621b4) == '\x01') {
    lVar3 = (long)_DAT_1127621b8;
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
      func_0x00010befbb60(param_1,param_2,uVar2);
      _objc_release(uVar2);
    }
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24dd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106fd9c00; end: 106fd9c1f; -[SCBitmojiInAppNotificationCard userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fd9c00(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127621bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fd9c20; end: 106fd9c6b; -[SCBitmojiInAppNotificationCard .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fd9c20(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127621bc);
  _objc_storeStrong(param_1 + _DAT_1127621b8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127621b0,0);
  return;
}



/* Entry: 106fd9c6c; end: 106fd9e3f; -[SCBitmojiInAppNotificationItemView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106fd9c6c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f82b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b1a08;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127621c0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127621c0) = puVar2;
    _objc_release(uVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010beed1c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4014000000000000);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f4ccccd);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4010000000000000);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf81240(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182220();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106fd9e40; end: 106fd9ea3; -[SCBitmojiInAppNotificationItemView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fd9e40(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f82b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010c19f0e0(0,0,0x4046800000000000,0x4046800000000000,
                      *(undefined8 *)(param_1 + _DAT_1127621c0));
  return;
}



/* Entry: 106fd9ea4; end: 106fd9ebf; -[SCBitmojiInAppNotificationItemView accessorySizeThatFits:] */

undefined1  [16] FUN_106fd9ea4(double param_1,double param_2)

{
  double dVar1;
  undefined1 auVar3 [16];
  double dVar2;
  
  dVar1 = 42.0;
  if (param_1 <= 42.0) {
    dVar1 = param_1;
  }
  dVar2 = 42.0;
  if (param_2 <= 42.0) {
    dVar2 = param_2;
  }
  auVar3._8_8_ = dVar2;
  auVar3._0_8_ = dVar1;
  return auVar3;
}



/* Entry: 106fd9ec0; end: 106fd9edb; -[SCBitmojiInAppNotificationItemView disclosureSizeThatFits:] */

undefined1  [16] FUN_106fd9ec0(double param_1,double param_2)

{
  double dVar1;
  undefined1 auVar3 [16];
  double dVar2;
  
  dVar1 = 35.0;
  if (param_1 <= 35.0) {
    dVar1 = param_1;
  }
  dVar2 = 35.0;
  if (param_2 <= 35.0) {
    dVar2 = param_2;
  }
  auVar3._8_8_ = dVar2;
  auVar3._0_8_ = dVar1;
  return auVar3;
}



/* Entry: 106fd9edc; end: 106fd9ee3; -[SCBitmojiInAppNotificationItemView accessoryViewHasContent] */

undefined8 FUN_106fd9edc(void)

{
  return 1;
}



/* Entry: 106fd9ee4; end: 106fd9ef3; -[SCBitmojiInAppNotificationItemView avatarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106fd9ee4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127621c0);
}



/* Entry: 106fd9ef4; end: 106fd9f07; -[SCBitmojiInAppNotificationItemView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fd9ef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127621c0,0);
  return;
}



/* Entry: 106fd9f08; end: 106fda20f; -[SCOptInPromptNotificationCard initWithNotification:withHostView:rtlSafeLayoutFixEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106fd9f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126f82c0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNotification_withHostVie_1125e9930,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127621c4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d3f10;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar4 = (long)_DAT_1127621c8;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1eec00(*(undefined8 *)((long)puVar1 + lVar4));
    uVar2 = param_3;
    func_0x00010bfeb320(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4014000000000000);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar2);
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f4ccccd);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4010000000000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010bf81240(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182220();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c0ebf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216980(puVar1);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c0ebf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbd60();
    _objc_release(uVar2);
    uVar2 = param_3;
    FUN_106fddcf8(0,0x401c000000000000,0,0x4050400000000000,param_3);
    func_0x00010bf47d60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(param_4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127621cc) = 0;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106fda210; end: 106fda2eb; -[SCOptInPromptNotificationCard layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fda210(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f82c0;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  lVar3 = (long)_DAT_1127621c8;
  func_0x00010c19f0e0(0x4014000000000000,0x4014000000000000,param_1 + -10.0,0x404b000000000000,
                      *(undefined8 *)(param_2 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar3));
  func_0x00010bf19a00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106fda2ec; end: 106fda6f3; -[SCOptInPromptNotificationCard didSelectSwitch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fda2ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c079040();
  if ((int)uVar1 != 0) {
    func_0x000108f218ac();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22fcc0();
    _objc_release(uVar1);
  }
  lVar10 = (long)_DAT_1127621c4;
  lVar2 = *(long *)(param_1 + lVar10);
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = *(undefined **)(param_1 + lVar10);
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lVar3 == 0) {
    if (puVar5 == (undefined *)0x0) goto LAB_106fda6a8;
    func_0x000108f2174c();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c25bc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar4);
    func_0x000100c67ae4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c079040();
    puVar7 = PTR_PTR_1126b4028;
    func_0x00010c0ebe40(PTR_PTR_1126b4028);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f9280(puVar4);
  }
  else {
    func_0x000108f21990();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0(lVar3);
    func_0x00010c079040();
    puVar7 = puVar4;
    func_0x00010c288fa0(puVar4);
    func_0x000108f2174c();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0(lVar3);
    puVar8 = puVar6;
    func_0x00010c25bb60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  _objc_release(puVar7);
  _objc_release(puVar4);
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126cec70);
  puVar7 = puVar4;
  func_0x00010beecc40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar7;
  func_0x00010bfe63a0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c079040();
  uVar1 = 0x1c;
  if ((int)uVar9 == 0) {
    uVar1 = 0x1d;
  }
  func_0x000107cb4cfc(uVar1,puVar8,5,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(puVar6);
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(puVar4);
  *(long *)(param_1 + _DAT_1127621cc) = *(long *)(param_1 + _DAT_1127621cc) + 1;
  _objc_initWeak(auStack_68,param_1);
  uVar9 = param_3;
  func_0x00010c079040();
  uVar1 = 500000000;
  if ((int)uVar9 == 0) {
    uVar1 = 3000000000;
  }
  uVar9 = 0;
  _dispatch_time(0,uVar1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106fda748;
  puStack_78 = &UNK_1108434b0;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010058c530(uVar9,PTR___dispatch_main_q_11034be20,&puStack_90);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar7);
  _objc_release(puVar8);
LAB_106fda6a8:
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 106fda6f4; end: 106fda73f;  */

void FUN_106fda6f4(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = PTR_PTR_1126afca8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110dae758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dae758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237520(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 106fda740; end: 106fda747;  */

void FUN_106fda740(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08d470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lazyDiscoverFeedEventsController_112600f28);
  return;
}



/* Entry: 106fda748; end: 106fda773;  */

void FUN_106fda748(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fda774; end: 106fda83f; -[SCOptInPromptNotificationCard _dismissNotificationIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fda774(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + _DAT_1127621cc) + -1;
  *(long *)(param_1 + _DAT_1127621cc) = lVar2;
  if (lVar2 != 0) {
    return;
  }
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b7568;
  _objc_opt_class(PTR_PTR_1126b7568);
  lVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110987a08);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010bfe63a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d300();
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106fda840; end: 106fda847;  */

void FUN_106fda840(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dc6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_notificationProcessingManager_112614bd0);
  return;
}



/* Entry: 106fda848; end: 106fda867; -[SCOptInPromptNotificationCard userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fda848(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127621d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fda868; end: 106fda87b; -[SCOptInPromptNotificationCard setUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fda868(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127621d0,param_3);
  return;
}



/* Entry: 106fda87c; end: 106fda8c7; -[SCOptInPromptNotificationCard .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fda87c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127621d0);
  _objc_storeStrong(param_1 + _DAT_1127621c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127621c8,0);
  return;
}



/* Entry: 106fda8c8; end: 106fdab57; -[SCOptInPromptNotificationItemView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106fda8c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f82c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UISwitch_1126b0680;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127621d4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127621d4) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165e20();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c83a0(0x3fe8000000000000);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c260f20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c260f20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165e20();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c260f20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c83a0(0x3fe8000000000000);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4014000000000000);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x3ff0000000000000);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f4ccccd);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4010000000000000);
    _objc_release(puVar3);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf81240(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182220();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106fdab58; end: 106fdad97; -[SCOptInPromptNotificationItemView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdab58(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_60;
  undefined *puStack_58;
  
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar5 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  lVar4 = param_2;
  func_0x00010bf8d060();
  lVar1 = param_2;
  func_0x00010c0ebf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_2;
  func_0x00010c142480();
  if ((int)lVar2 != 0) {
    uVar6 = 0x4051800000000000;
    if (dVar5 < 31.0 || lVar1 == 0) {
      uVar6 = 0x401c000000000000;
    }
    uVar7 = uVar6;
    if (lVar4 != 1) {
      uVar7 = 0x401c000000000000;
    }
    uVar9 = 0x401c000000000000;
    if (lVar4 != 1) {
      uVar9 = uVar6;
    }
    func_0x00010c181fe0(0,uVar7,0,uVar9,param_2);
  }
  puStack_58 = PTR_PTR_1126f82c8;
  lStack_60 = param_2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  lVar2 = param_2;
  if (dVar5 < 31.0 || lVar1 == 0) {
    uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    lVar4 = param_2;
    func_0x00010c0ebf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(uVar6,uVar7,uVar9,uVar10);
    _objc_release(lVar4);
    func_0x00010c0ebf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  else {
    lVar1 = param_2;
    func_0x00010c0ebf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c142480();
    dVar8 = 19.0;
    if (((uint)lVar1 & (uint)(lVar4 == 1)) == 0) {
      dVar8 = param_1 + -51.0 + -14.0 + -5.0;
    }
    func_0x00010c0ebf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar8,(dVar5 + -31.0) * 0.5,0x4049800000000000,0x403f000000000000);
  }
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_1127621d4;
  func_0x00010c16e440(*(undefined8 *)(param_2 + lVar4));
  _objc_release(puVar3);
  uVar6 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c08c0e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x402f000000000000);
  _objc_release(uVar6);
  return;
}



/* Entry: 106fdad98; end: 106fdada7; -[SCOptInPromptNotificationItemView optInSwitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106fdad98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127621d4);
}



/* Entry: 106fdada8; end: 106fdadbb; -[SCOptInPromptNotificationItemView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdada8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127621d4,0);
  return;
}



/* Entry: 106fdadbc; end: 106fdb2f3; -[SCInAppNotificationCard initWithNotification:withHostView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106fdadbc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126f82d0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNotification_withHostVie_1125e9930,param_3,param_4);
  if (puVar1 == (undefined8 *)0x0) goto LAB_106fdb2c4;
  lVar5 = param_3;
  func_0x00010c11c420();
  if (lVar5 == 0x76) {
    lVar5 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar6 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    puVar3 = PTR_PTR_1126d3f18;
    _objc_alloc();
    func_0x00010bfefe40();
    lVar6 = (long)_DAT_1127621d8;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar4);
LAB_106fdaf4c:
    _objc_release(lVar5);
    _objc_release(lVar2);
  }
  else {
    lVar5 = param_3;
    func_0x00010c11c420();
    if (lVar5 == 7) {
      lVar5 = param_3;
      func_0x00010c292820(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      puVar3 = PTR_PTR_1126d3f18;
      _objc_alloc();
      func_0x00010c02fc80();
      lVar6 = (long)_DAT_1127621d8;
      lVar5 = *(long *)((long)puVar1 + lVar6);
      *(undefined **)((long)puVar1 + lVar6) = puVar3;
      goto LAB_106fdaf4c;
    }
    lVar6 = (long)_DAT_1127621d8;
  }
  if (*(long *)((long)puVar1 + lVar6) == 0) {
    puVar3 = PTR_PTR_1126d3f18;
    _objc_alloc();
    func_0x00010c014a00(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar4);
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4014000000000000);
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(uVar4);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0,0x3ff0000000000000);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3f4ccccd);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x4010000000000000);
  _objc_release(uVar4);
  func_0x00010c11c420();
  uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
  func_0x00010beed360(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182220();
  _objc_release(uVar4);
  lVar5 = param_3;
  func_0x00010c0734a0();
  if ((int)lVar5 != 0) {
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127621dc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127621dc) = puVar3;
    _objc_release(uVar4);
  }
  lVar5 = param_3;
  func_0x00010bfeb320(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar6));
  _objc_release(lVar5);
  lVar5 = param_3;
  func_0x00010bfeb2a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
  func_0x00010c271420(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(uVar4);
  _objc_release(lVar5);
  lVar5 = param_3;
  func_0x00010c11c420();
  if (lVar5 == 0x95) {
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c271420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c260f20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cfce0();
    _objc_release(uVar4);
  }
  lVar5 = param_3;
  func_0x00010bfce860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 == 0) {
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c271420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165e20();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c271420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c83a0(0x3fe8000000000000);
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
  lVar5 = param_3;
  FUN_106fddcf8(0,0x401c000000000000,0,0x401c000000000000,param_3);
  func_0x00010bf47d60(uVar4);
  _objc_release(lVar5);
  func_0x00010befbb60(puVar1);
  lVar5 = param_3;
  func_0x00010c0734a0();
  if ((int)lVar5 != 0) {
    func_0x00010beb7c20(puVar1);
  }
  func_0x00010befbb60(param_4);
LAB_106fdb2c4:
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106fdb2f4; end: 106fdb30f;  */

void FUN_106fdb2f4(void)

{
  _objc_opt_new(PTR_PTR_1126c2e90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fdb310; end: 106fdb457; -[SCInAppNotificationCard layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdb310(double param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f82d0;
  lStack_60 = param_2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar5 = param_1 + -10.0;
  lVar1 = param_2;
  func_0x00010c0dbb80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeaf80();
  lVar4 = (long)_DAT_1127621d8;
  func_0x00010c19f0e0(0x4014000000000000,0x4014000000000000,dVar5,param_1 + -10.0,
                      *(undefined8 *)(param_2 + lVar4));
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(*(undefined8 *)(param_2 + lVar4));
  func_0x00010bf19a00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(uVar3);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_2 + _DAT_1127621dc);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(0x3ff8000000000000,0x3ff8000000000000,0x4044000000000000,0x4044000000000000);
  _objc_release(uVar3);
  return;
}



/* Entry: 106fdb458; end: 106fdb53f; -[SCInAppNotificationCard _showAndAnimateTypingBubbleIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdb458(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127621dc;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127621d8);
    func_0x00010beed1c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar2,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106fdb540; end: 106fdb57f; -[SCInAppNotificationCard .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdb540(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127621dc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127621d8,0);
  return;
}



/* Entry: 106fdb580; end: 106fdb59b;  */

void FUN_106fdb580(void)

{
  _objc_opt_new(PTR_PTR_1126ce080);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fdb59c; end: 106fdb5a3; -[SCInAppNotificationController applicationDidBackground:] */

void FUN_106fdb59c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 106fdb5a4; end: 106fdb6df; -[SCInAppNotificationController ensureView] */

void FUN_106fdb5a4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)(param_2 + 0x58);
  _objc_retain(lVar6);
  if (*(long *)(param_2 + 0x20) == 0 && lVar6 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_2 + 0x48);
    (**(code **)(lVar2 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d3f28;
    _objc_alloc();
    func_0x00010c00b420();
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    *(undefined **)(param_2 + 0x20) = puVar3;
    _objc_retain();
    _objc_release(uVar7);
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + 0x20),param_3,0);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2a7380();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c2a72a0(puVar5);
  func_0x00010c225b00(param_1 + 1.0,*(undefined8 *)(param_2 + 0x20));
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 106fdb6e0; end: 106fdb75f; -[SCInAppNotificationController maybePauseVCPlaybackForNotification:] */

void FUN_106fdb6e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c102fc0();
    _objc_release(lVar1);
    if (lVar2 == 1) {
      lVar1 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c0f5e80();
      _objc_release(lVar1);
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fdb760; end: 106fdb7a3; -[SCInAppNotificationController maybeResumeVCPlayback] */

void FUN_106fdb760(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c13d5c0();
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 106fdb7a4; end: 106fdba2b; -[SCInAppNotificationController handleCurrentNotificationDidChange:didInterrupt:] */

void FUN_106fdb7a4(double param_1,long param_2,undefined8 param_3,undefined *param_4,ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  if (param_4 == *(undefined **)(param_2 + 0x38)) goto LAB_106fdba08;
  if (param_4 != (undefined *)0x0) {
    func_0x00010bf96900(param_2);
  }
  func_0x00010c0c3a00(param_2);
  if (((param_5 & 1) == 0) && (lVar1 = *(long *)(param_2 + 0x38), lVar1 != 0)) {
    func_0x00010c2a26a0();
    if ((int)lVar1 != 0) {
      func_0x00010c12d300(*(undefined8 *)(param_2 + 0x50));
      func_0x00010c0ab080(PTR_PTR_1126b7550);
      goto LAB_106fdb828;
    }
    func_0x00010bfd1400(param_2);
    if (param_4 == (undefined *)0x0) goto LAB_106fdb850;
LAB_106fdb82c:
    puVar5 = param_4;
    func_0x00010c22f840();
    uVar6 = (uint)puVar5 ^ 1;
  }
  else {
LAB_106fdb828:
    if (param_4 != (undefined *)0x0) goto LAB_106fdb82c;
LAB_106fdb850:
    uVar6 = 0;
  }
  puVar5 = param_4;
  func_0x00010c15de20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    uVar7 = 0;
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = param_4;
    func_0x00010c11c420();
    if (puVar2 == (undefined *)0x2) {
      _objc_release(puVar5);
    }
    else {
      puVar2 = param_4;
      func_0x00010c11c420();
      _objc_release(puVar5);
      if (puVar2 != (undefined *)0x1) {
        uVar7 = 0;
        puVar5 = (undefined *)0x0;
        goto LAB_106fdb90c;
      }
    }
    puVar5 = param_4;
    func_0x00010c15de20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_2 + 0x40);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 == 0) || (func_0x00010c26f3a0(lVar1), param_1 <= 0.0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    _objc_release(lVar1);
  }
LAB_106fdb90c:
  if ((uVar6 | uVar7) == 1) {
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = 0;
    _objc_release(uVar3);
    if (param_4 != (undefined *)0x0) {
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_106fdba2c;
      puStack_68 = &UNK_110841f80;
      lStack_60 = param_2;
      _objc_retain(param_4);
      puStack_58 = param_4;
      func_0x000100162d98("APPSTORE",&puStack_80);
      puVar2 = puStack_58;
LAB_106fdb9f0:
      _objc_release(puVar2);
    }
  }
  else {
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    *(undefined **)(param_2 + 0x38) = param_4;
    _objc_release(uVar3);
    if (puVar5 != (undefined *)0x0) {
      lVar1 = *(long *)(param_2 + 0x38);
      func_0x00010c11c420();
      if (lVar1 == 2) {
        puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010bf64e40(0x4092c00000000000);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x40));
        _objc_release(puVar4);
        goto LAB_106fdb9f0;
      }
    }
  }
  func_0x00010be0a600(param_2);
  _objc_release(puVar5);
LAB_106fdba08:
  _objc_release(param_4);
  return;
}



/* Entry: 106fdba2c; end: 106fdba37;  */

void FUN_106fdba2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),PTR_s_removeNotification__112628ee0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106fdba38; end: 106fdbb1b; -[SCInAppNotificationController _logMissingNotificationPluginCollector:] */

void FUN_106fdba38(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7a20;
  func_0x00010c0cebc0(PTR_PTR_1126b7a20);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  if (param_3 != 0) {
    lVar2 = param_3;
    func_0x00010c11c460(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dad058,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(lVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0dcc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fdbb1c; end: 106fdbcab; -[SCInAppNotificationController _ensurePluginsThenDisplayOrHideCurrentNotificationDidInterrupt:] */

void FUN_106fdbb1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar6 = *(ulong *)(param_1 + 0x38);
  _objc_retain(uVar6);
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar1 = *(ulong *)(param_1 + 0x10);
  (**(code **)(uVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar2 == 0) {
    func_0x00010be561e0(param_1,param_2,uVar6);
    goto LAB_106fdbc30;
  }
  if (uVar6 == 0) {
    func_0x00010bf840e0();
    goto LAB_106fdbc30;
  }
  uVar1 = uVar2;
  func_0x00010c101be0(uVar2,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar3 = uVar6;
    func_0x00010c11c420();
    if ((uVar3 < 0x23) && ((1L << (uVar3 & 0x3f) & 0x630000000U) != 0)) {
      uVar3 = uVar1;
      func_0x00010c10c5e0(uVar1,param_2,uVar6,param_1);
      if ((uVar3 & 1) == 0) goto LAB_106fdbc28;
    }
    else {
      func_0x00010c10c600(uVar1,param_2,uVar6,param_1);
    }
    _objc_release(uVar6);
    uVar6 = 0;
  }
LAB_106fdbc28:
  _objc_release(uVar1);
LAB_106fdbc30:
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  func_0x00010bfeb0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf722a0(uVar7,param_2,uVar6,param_3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010c0c39c0(param_1,param_2,*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 106fdbcac; end: 106fdbcb3; -[SCInAppNotificationController handleQueuedNotificationRevoked:] */

void FUN_106fdbcac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_removeNotification__112628ee0);
  return;
}



/* Entry: 106fdbcb4; end: 106fdbd07; -[SCInAppNotificationController handleActiveNotificationDisplayInterrupted:reason:] */

void FUN_106fdbcb4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2a26a0();
  if ((uVar1 & 1) == 0) {
    func_0x00010bfd1420(param_1,param_2,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fdbd08; end: 106fdbe17; -[SCInAppNotificationController handleDidChangeVisibleViewControllerNotification:] */

void FUN_106fdbd08(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_DAT_1126a5808;
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar2 = param_3;
    func_0x00010010fab4(param_3,puVar1);
    _objc_release(param_3);
    uVar3 = param_3;
    if ((uVar2 & 1) != 0) goto LAB_106fdbd98;
  }
  uVar2 = param_1;
  func_0x00010bdcd8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
LAB_106fdbd98:
  uVar2 = uVar3;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  while (uVar2 != 0) {
    uVar4 = uVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar2 = uVar4;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar3 = uVar4;
  }
  func_0x00010bf73160(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106fdbe18; end: 106fdbecf; -[SCInAppNotificationController _applicationNavigationController] */

void FUN_106fdbe18(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = puVar3;
  func_0x00010c1417c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar1);
  puVar1 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fdbed0; end: 106fdbfc3; -[SCInAppNotificationController didChangeDisplayProtocol:] */

void FUN_106fdbed0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0edee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c0edee0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  func_0x00010c0c3a00(param_1);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0edee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0edee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_storeWeak(param_1 + 0x28,param_3);
  func_0x00010c18fe20(*(undefined8 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fdbfc4; end: 106fdbfcb; -[SCInAppNotificationController didPauseTimer] */

void FUN_106fdbfc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f60d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x60),PTR_s_pauseTimer_11261b250)
  ;
  return;
}



/* Entry: 106fdbfcc; end: 106fdbfd3; -[SCInAppNotificationController didResumeTimer] */

void FUN_106fdbfcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13d9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_resumeTimer_11262d090);
  return;
}



/* Entry: 106fdbfd4; end: 106fdc067; -[SCInAppNotificationController shouldIgnoreNotificationTapEvent:callback:] */

void FUN_106fdbfd4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c230f60();
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fdc068; end: 106fdc06b; -[SCInAppNotificationController handleCustomUINotificationPressed:] */

void FUN_106fdc068(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_handleInAppNotificationPressed__1125d1eb8);
  return;
}



/* Entry: 106fdc06c; end: 106fdc0ef; -[SCInAppNotificationController handleCustomUINotificationDismissed:reason:] */

void FUN_106fdc06c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  if (param_4 == 2) {
    func_0x00010c2249a0(param_3,param_2,1);
    param_1 = param_1 + 0x68;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfd1400();
    _objc_release(param_3);
    param_3 = param_1;
  }
  else {
    func_0x00010bfd1400(param_1,param_2,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fdc0f0; end: 106fdc16b; -[SCInAppNotificationController handleInAppNotificationPressed:] */

void FUN_106fdc0f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_3);
  func_0x00010c12d300(uVar2,param_2,param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf7ebe0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd1440();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fdc16c; end: 106fdc1e7; -[SCInAppNotificationController handleInAppNotificationDismissed:reason:] */

void FUN_106fdc16c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_3);
  func_0x00010c12d300(uVar1,param_2,param_3);
  func_0x00010c0ab080(PTR_PTR_1126b7550,param_2,param_3,0);
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd1400();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fdc1e8; end: 106fdc23f; -[SCInAppNotificationController handleInAppNotificationDisplayInterrupted:reason:] */

void FUN_106fdc1e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x68;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd1420();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fdc240; end: 106fdc247; -[SCInAppNotificationController grapheneRegistry] */

undefined8 FUN_106fdc240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106fdc248; end: 106fdc25f; -[SCInAppNotificationController delegate] */

void FUN_106fdc248(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fdc260; end: 106fdc2ff; -[SCInAppNotificationController .cxx_destruct] */

void FUN_106fdc260(long param_1)

{
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fdc300; end: 106fdc38f; -[SCInAppNotificationItemView initWithNotification:disclosureView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106fdc300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f82e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithAccessoryView_disclosure_1125d9958,0,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112762214;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106fdc390; end: 106fdc443; -[SCInAppNotificationItemView initWithFrame:notification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106fdc390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f82e0;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112762214;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 106fdc444; end: 106fdc45f; -[SCInAppNotificationItemView accessorySizeThatFits:] */

undefined1  [16] FUN_106fdc444(double param_1,double param_2)

{
  double dVar1;
  undefined1 auVar3 [16];
  double dVar2;
  
  dVar1 = 40.0;
  if (param_1 <= 40.0) {
    dVar1 = param_1;
  }
  dVar2 = 40.0;
  if (param_2 <= 40.0) {
    dVar2 = param_2;
  }
  auVar3._8_8_ = dVar2;
  auVar3._0_8_ = dVar1;
  return auVar3;
}



/* Entry: 106fdc460; end: 106fdc4bb; -[SCInAppNotificationItemView accessoryViewHasContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdc460(long param_1)

{
  ulong uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = 0;
  puStack_28 = PTR_PTR_1126f82e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_accessoryViewHasContent_112598e90);
  if ((uVar1 & 1) == 0) {
    func_0x00010c0734a0(*(undefined8 *)(param_1 + _DAT_112762214));
  }
  return;
}



/* Entry: 106fdc4bc; end: 106fdc4cf; -[SCInAppNotificationItemView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdc4bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112762214,0);
  return;
}



/* Entry: 106fdc4d0; end: 106fdc70b; -[SCBaseInAppNotificationCard initWithNotification:withHostView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106fdc4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  uVar7 = param_1;
  _objc_release(puVar2);
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  uVar8 = uVar7;
  func_0x00010bfeaf80(param_4);
  puStack_68 = PTR_PTR_1126f82e8;
  uStack_70 = param_2;
  _objc_msgSendSuper2(0,uVar7,param_1,uVar8,&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar3 + (long)_DAT_11276221c),param_5);
    lVar6 = (long)_DAT_112762220;
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar6);
    *(undefined8 *)((long)puVar3 + lVar6) = param_4;
    _objc_release(uVar4);
    puVar1 = (undefined8 *)((long)puVar3 + (long)_DAT_112762224);
    *puVar1 = 0;
    puVar1[1] = uVar7;
    puVar1[2] = param_1;
    puVar1[3] = uVar8;
    puVar5 = (undefined1 *)puVar3;
    func_0x00010bfe4660(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200c40();
    _objc_release(puVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3);
    _objc_release(puVar2);
    puVar1 = (undefined8 *)((long)puVar3 + (long)_DAT_112762228);
    _CGRectGetHeight(0,uVar7,param_1,uVar8);
    uVar4 = 0;
    func_0x00010bc8525c();
    *puVar1 = uVar4;
    puVar1[1] = uVar7;
    puVar1[2] = param_1;
    puVar1[3] = uVar8;
    func_0x00010c19f0e0(puVar3);
    func_0x00010c1677c0(0,puVar3);
    func_0x00010c1a7f60(puVar3);
    func_0x00010c1d4c20(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    func_0x00010c050900();
    func_0x00010c18b5e0();
    func_0x00010c1c8340(0,puVar2);
    func_0x00010c167320(0x40c3880000000000,puVar2);
    func_0x00010bef9040(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar3;
}



/* Entry: 106fdc70c; end: 106fdc83f; -[SCBaseInAppNotificationCard showAnimated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fdc70c(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010c1a7f60(param_1,param_2,0);
  *(undefined1 *)(param_1 + _DAT_11276222c) = 0;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106fdc7a4;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010bf03460(0x3fd54fdf3b645a1d,0,0x3fe999999999999a,0x4024000000000000,
                      PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x20000,&puStack_48,0);
  return;
}



/* Entry: 106fdc840; end: 106fdc84b;  */

void FUN_106fdc840(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}


