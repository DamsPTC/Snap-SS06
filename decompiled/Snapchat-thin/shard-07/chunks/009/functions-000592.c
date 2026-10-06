/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105afdea4; end: 105afdeb7; -[SCDiscoverFeedView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afdea4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272f96c,param_3);
  return;
}



/* Entry: 105afdeb8; end: 105afdf23; -[SCDiscoverFeedView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105afdeb8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272f96c);
  _objc_storeStrong(param_1 + _DAT_11272f968,0);
  _objc_storeStrong(param_1 + _DAT_11272f964,0);
  _objc_storeStrong(param_1 + _DAT_11272f95c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272f960,0);
  return;
}



/* Entry: 105afdf24; end: 105afe013;  */

void FUN_105afdf24(ulong param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain();
  ppuVar2 = &PTR_PTR_1126c22b8;
  puVar3 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar4 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar3);
  if ((uVar4 & 1) == 0) {
    ppuVar2 = &PTR_PTR_1126c22c0;
    puVar3 = PTR_PTR_1126c22c0;
    _objc_opt_class(PTR_PTR_1126c22c0);
    uVar4 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar3);
    if ((uVar4 & 1) == 0) {
      ppuVar2 = &PTR_PTR_1126c2100;
      puVar3 = PTR_PTR_1126c2100;
      _objc_opt_class(PTR_PTR_1126c2100);
      uVar4 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar3);
      if ((uVar4 & 1) == 0) {
        uVar4 = 0;
        goto LAB_105afdff0;
      }
    }
  }
  puVar3 = *ppuVar2;
  _objc_retain(param_1);
  _objc_opt_class(puVar3);
  uVar4 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar3);
  uVar1 = param_1;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar4 = uVar1;
  func_0x00010c25a160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
LAB_105afdff0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105afe014; end: 105afe12f;  */

void FUN_105afe014(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_105afdf24();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 == 0) {
    uVar3 = param_1;
    FUN_105afe130();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c2380;
    _objc_opt_class(PTR_PTR_1126c2380);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar2 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar4);
    uVar4 = uVar2;
    func_0x00010bf5ed80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar4;
    func_0x00010c259cc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    uVar2 = uVar1;
    func_0x00010c0844e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105afe130; end: 105afe30f;  */

void FUN_105afe130(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR_PTR_1126c22b8;
  uVar2 = param_1;
  if ((uVar3 & 1) == 0) {
    puVar1 = PTR_PTR_1126c22c0;
    _objc_opt_class(PTR_PTR_1126c22c0);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    puVar1 = PTR_PTR_1126c22c0;
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
      goto LAB_105afe228;
    }
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    uVar3 = uVar2;
    func_0x00010c268c60(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    uVar3 = uVar2;
    func_0x00010c112fe0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
LAB_105afe228:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105afe310; end: 105afe31b; +[SCDiscoverFeedViewControllerLoggingAdaptor announcerIdentifier] */

undefined ** FUN_105afe310(void)

{
  return &PTR____CFConstantStringClassReference_110e1ca58;
}



/* Entry: 105afe31c; end: 105afe323; -[SCDiscoverFeedViewControllerLoggingAdaptor addListener:] */

void FUN_105afe31c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105afe324; end: 105afe32b; -[SCDiscoverFeedViewControllerLoggingAdaptor removeListener:] */

void FUN_105afe324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105afe32c; end: 105afe3eb; -[SCDiscoverFeedViewControllerLoggingAdaptor initWithStoriesConfigProvider:discoverFeedDataFetcher:] */

undefined1 *
FUN_105afe32c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebd00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105afe3ec; end: 105afe7c7; -[SCDiscoverFeedViewControllerLoggingAdaptor didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_105afe3ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar4 == 0) {
    uVar4 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      uVar4 = param_3;
      func_0x00010c0720c0();
      if ((int)uVar4 == 0) {
        uVar4 = param_3;
        func_0x00010c0720c0();
        if ((int)uVar4 == 0) {
          func_0x00010bf7dbc0(*(undefined8 *)(param_1 + 8));
          goto LAB_105afe75c;
        }
        _objc_initWeak(auStack_58,param_1);
        uVar4 = 0;
        func_0x0001000819a8(0,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_130 = 0xc2000000;
        pcStack_128 = FUN_105aff67c;
        puStack_120 = &UNK_110848218;
        ppuVar5 = &puStack_138;
        _objc_copyWeak(auStack_108,auStack_58);
        _objc_retain(param_4);
        uStack_118 = param_4;
        _objc_retain(param_5);
        uStack_110 = param_5;
        func_0x00010007380c(uVar4,&puStack_138);
        _objc_release(uVar4);
        _objc_release(uStack_110);
        uVar4 = uStack_118;
      }
      else {
        _objc_initWeak(auStack_58,param_1);
        uVar4 = 0;
        func_0x0001000819a8(0,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_f8 = 0xc2000000;
        pcStack_f0 = FUN_105afeb64;
        puStack_e8 = &UNK_110848218;
        ppuVar5 = &puStack_100;
        _objc_copyWeak(auStack_d0,auStack_58);
        _objc_retain(param_4);
        uStack_e0 = param_4;
        _objc_retain(param_5);
        uStack_d8 = param_5;
        func_0x00010007380c(uVar4,&puStack_100);
        _objc_release(uVar4);
        _objc_release(uStack_d8);
        uVar4 = uStack_e0;
      }
    }
    else {
      _objc_initWeak(auStack_58,param_1);
      uVar4 = 0;
      func_0x0001000819a8(0,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_105afeaf0;
      puStack_b0 = &UNK_110848218;
      ppuVar5 = &puStack_c8;
      _objc_copyWeak(auStack_98,auStack_58);
      _objc_retain(param_4);
      uStack_a8 = param_4;
      _objc_retain(param_5);
      uStack_a0 = param_5;
      func_0x00010007380c(uVar4,&puStack_c8);
      _objc_release(uVar4);
      _objc_release(uStack_a0);
      uVar4 = uStack_a8;
    }
  }
  else {
    uVar1 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) goto LAB_105afe75c;
    uVar2 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) goto LAB_105afe75c;
    _objc_initWeak(auStack_58,param_1);
    uVar4 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105afe7c8;
    puStack_78 = &UNK_110848218;
    ppuVar5 = &puStack_90;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    uStack_70 = param_4;
    _objc_retain(param_5);
    uStack_68 = param_5;
    func_0x00010007380c(uVar4,&puStack_90);
    _objc_release(uVar4);
    _objc_release(uStack_68);
    uVar4 = uStack_70;
  }
  _objc_release(uVar4);
  _objc_destroyWeak(ppuVar5 + 6);
  _objc_destroyWeak(auStack_58);
LAB_105afe75c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105afe7c8; end: 105afe83b;  */

void FUN_105afe7c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  FUN_105afe83c(uVar2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbba0(lVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105afe83c; end: 105afeaef;  */

void FUN_105afe83c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  lVar6 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 == 0) {
    lVar6 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 == 0) {
      lVar6 = 0;
      goto LAB_105afe92c;
    }
  }
  lVar6 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
LAB_105afe92c:
  lVar3 = lVar6;
  func_0x0001079d6288();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1d0640(puVar1);
  }
  lVar4 = lVar6;
  func_0x0001079d6398();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  lVar5 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010c0e00e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(lVar5);
  }
  lVar5 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(lVar5);
    func_0x00010c1d0640(puVar1);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105afeaf0; end: 105afeb63;  */

void FUN_105afeaf0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  FUN_105afe83c(uVar2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbba0(lVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105afeb64; end: 105aff67b;  */

void FUN_105afeb64(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uStack_140;
  undefined *puStack_138;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained();
  uVar2 = *(ulong *)(param_1 + 0x28);
  _objc_retain(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar6 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar6 != 0) {
    uVar6 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar6;
    func_0x0001079d6288();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (uVar22 == 0) {
      puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(puVar7);
    }
    else {
      func_0x00010c1d0640(puVar5);
    }
    uVar6 = uVar22;
    func_0x00010c08fa60();
    if ((uVar6 != 0) && (uVar6 = uVar22, func_0x000108f54104(), (int)uVar6 != 0)) {
      func_0x00010c1d0640(puVar5);
    }
    _objc_release(uVar22);
  }
  uVar6 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar6 == 0) {
    uVar6 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar6 == 0) {
      uVar6 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar6 == 0) goto LAB_105aff604;
      puStack_138 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uVar6 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
      uVar22 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar7);
      uStack_140 = uVar6;
      if ((uVar22 & 1) == 0) {
        uStack_140 = 0;
      }
      _objc_retain(uStack_140);
      _objc_release(uVar6);
      _objc_retain(uStack_140);
      uVar6 = uStack_140;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (uVar6 != 0) {
        uVar22 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(uStack_140);
          }
          lVar21 = *(long *)(uVar22 * 8);
          lVar13 = lVar21;
          func_0x00010c25a160();
          _objc_retainAutoreleasedReturnValue();
          lVar14 = lVar13;
          func_0x00010c0844e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar13);
          lVar13 = lVar14;
          func_0x00010c08fa60();
          if (lVar13 != 0) {
            puVar7 = PTR_PTR_1126c2390;
            _objc_alloc(PTR_PTR_1126c2390);
            lVar13 = lVar21;
            func_0x00010c25a160(lVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0741a0();
            func_0x00010c25a160(lVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2768e0();
            func_0x00010c01b720(puVar7);
            func_0x00010befa120(puStack_138);
            _objc_release(puVar7);
            _objc_release(lVar21);
            _objc_release(lVar13);
          }
          _objc_release(lVar14);
          uVar22 = uVar22 + 1;
        } while (uVar6 != uVar22);
        uVar6 = uStack_140;
        func_0x00010bf52a60();
      }
    }
    else {
      puStack_138 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uVar6 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
      uVar22 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar7);
      uStack_140 = uVar6;
      if ((uVar22 & 1) == 0) {
        uStack_140 = 0;
      }
      _objc_retain(uStack_140);
      _objc_release(uVar6);
      _objc_retain(uStack_140);
      uVar6 = uStack_140;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (uVar6 != 0) {
        uVar22 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(uStack_140);
          }
          puVar18 = *(undefined **)(uVar22 * 8);
          puVar9 = puVar18;
          func_0x00010bf4ddc0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126c22b8;
          _objc_opt_class(PTR_PTR_1126c22b8);
          puVar17 = puVar9;
          _objc_opt_isKindOfClass(puVar9,puVar7);
          puVar7 = puVar9;
          if (((ulong)puVar17 & 1) == 0) {
            puVar7 = (undefined *)0x0;
          }
          _objc_retain(puVar7);
          _objc_release(puVar9);
          if (puVar7 == (undefined *)0x0) {
            puVar10 = puVar18;
            func_0x00010bf4ddc0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR_PTR_1126c22c0;
            _objc_opt_class(PTR_PTR_1126c22c0);
            puVar20 = puVar10;
            _objc_opt_isKindOfClass(puVar10,puVar9);
            puVar17 = puVar10;
            if (((ulong)puVar20 & 1) == 0) {
              puVar17 = (undefined *)0x0;
            }
            _objc_retain(puVar17);
            _objc_release(puVar10);
            if (puVar17 == (undefined *)0x0) {
              puVar20 = puVar18;
              func_0x00010bf4ddc0();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = PTR_PTR_1126c2100;
              _objc_opt_class(PTR_PTR_1126c2100);
              puVar10 = puVar20;
              _objc_opt_isKindOfClass(puVar20,puVar9);
              puVar9 = puVar20;
              if (((ulong)puVar10 & 1) == 0) {
                puVar9 = (undefined *)0x0;
              }
              _objc_retain(puVar9);
              _objc_release(puVar20);
              if (puVar9 == (undefined *)0x0) {
                func_0x00010bf4ddc0();
                _objc_retainAutoreleasedReturnValue();
                puVar10 = PTR_PTR_1126c2378;
                _objc_opt_class(PTR_PTR_1126c2378);
                puVar20 = puVar18;
                _objc_opt_isKindOfClass(puVar18,puVar10);
                puVar10 = puVar18;
                if (((ulong)puVar20 & 1) == 0) {
                  puVar10 = (undefined *)0x0;
                }
                _objc_retain(puVar10);
                _objc_release(puVar18);
                if (puVar10 != (undefined *)0x0) {
                  puVar20 = puVar18;
                  func_0x00010c25a160();
                  _objc_retainAutoreleasedReturnValue();
                  puVar10 = puVar20;
                  func_0x00010c0844e0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar20);
                  puVar20 = puVar10;
                  func_0x00010c08fa60();
                  if (puVar20 == (undefined *)0x0) {
                    puVar20 = (undefined *)0x0;
                    puVar17 = (undefined *)0x0;
                    goto LAB_105aff348;
                  }
                  puVar20 = PTR_PTR_1126c2390;
                  _objc_alloc(PTR_PTR_1126c2390);
                  puVar11 = puVar18;
                  func_0x00010c25a160(puVar18);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0741a0();
                  puVar12 = puVar18;
                  func_0x00010c25a160(puVar18);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c2768e0();
                  func_0x00010c01b720(puVar20);
                  func_0x00010befa120(puStack_138);
                  _objc_release(puVar20);
                  goto LAB_105aff32c;
                }
                puVar18 = (undefined *)0x0;
                puVar20 = (undefined *)0x0;
                puVar17 = (undefined *)0x0;
              }
              else {
                puVar10 = puVar20;
                func_0x00010c25a160();
                _objc_retainAutoreleasedReturnValue();
                puVar18 = puVar10;
                func_0x00010c0844e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar10);
                puVar10 = puVar18;
                func_0x00010c08fa60();
                if (puVar10 != (undefined *)0x0) {
                  puVar12 = PTR_PTR_1126c2390;
                  _objc_alloc(PTR_PTR_1126c2390);
                  puVar10 = puVar20;
                  func_0x00010c25a160(puVar20);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0741a0();
                  func_0x00010c25a160(puVar20);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c2768e0();
                  func_0x00010c01b720(puVar12);
                  func_0x00010befa120(puStack_138);
                  puVar11 = puVar20;
LAB_105aff32c:
                  _objc_release(puVar12);
                  puVar20 = puVar9;
                  goto LAB_105aff33c;
                }
                puVar17 = (undefined *)0x0;
              }
              goto LAB_105aff350;
            }
            puVar9 = puVar10;
            func_0x00010c25a160();
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar9;
            func_0x00010c0844e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
            puVar9 = puVar20;
            func_0x00010c08fa60();
            if (puVar9 != (undefined *)0x0) {
              puVar11 = PTR_PTR_1126c2390;
              _objc_alloc(PTR_PTR_1126c2390);
              puVar18 = puVar10;
              func_0x00010c25a160(puVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0741a0();
              func_0x00010c25a160(puVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2768e0();
              func_0x00010c01b720(puVar11);
              func_0x00010befa120(puStack_138);
LAB_105aff33c:
              _objc_release(puVar11);
              goto LAB_105aff348;
            }
LAB_105aff358:
            _objc_release(puVar20);
          }
          else {
            puVar17 = puVar9;
            FUN_105afe014();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar17;
            func_0x00010c08fa60();
            puVar10 = puVar17;
            if (puVar18 != (undefined *)0x0) {
              puVar10 = PTR_PTR_1126c2390;
              _objc_alloc(PTR_PTR_1126c2390);
              puVar20 = puVar9;
              func_0x00010c25a160(puVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0741a0();
              func_0x00010c25a160(puVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2768e0();
              func_0x00010c01b720(puVar10);
              func_0x00010befa120(puStack_138);
              puVar18 = puVar9;
LAB_105aff348:
              _objc_release(puVar10);
LAB_105aff350:
              _objc_release(puVar18);
              puVar10 = puVar17;
              goto LAB_105aff358;
            }
          }
          _objc_release(puVar10);
          _objc_release(puVar7);
          uVar22 = uVar22 + 1;
        } while (uVar6 != uVar22);
        uVar6 = uStack_140;
        func_0x00010bf52a60();
      }
    }
  }
  else {
    puStack_138 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar6 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar22 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar7);
    uStack_140 = uVar6;
    if ((uVar22 & 1) == 0) {
      uStack_140 = 0;
    }
    _objc_retain(uStack_140);
    _objc_release(uVar6);
    _objc_retain(uStack_140);
    uVar6 = uStack_140;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (uVar6 != 0) {
      uVar22 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(uStack_140);
        }
        puVar7 = PTR_PTR_1126c2388;
        uVar19 = *(ulong *)(uVar22 * 8);
        _objc_retain(uVar19);
        _objc_opt_class(puVar7);
        uVar8 = uVar19;
        _objc_opt_isKindOfClass(uVar19,puVar7);
        uVar1 = uVar19;
        if ((uVar8 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar19);
        if (uVar1 != 0) {
          puVar7 = PTR_PTR_1126c2390;
          _objc_alloc(PTR_PTR_1126c2390);
          uVar8 = uVar19;
          func_0x00010bfe5ec0(uVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0741a0(uVar19);
          func_0x00010c0de660(uVar19);
          func_0x00010c01b720(puVar7);
          func_0x00010befa120(puStack_138);
          _objc_release(puVar7);
          _objc_release(uVar8);
        }
        _objc_release(uVar1);
        uVar22 = uVar22 + 1;
      } while (uVar6 != uVar22);
      uVar6 = uStack_140;
      func_0x00010bf52a60();
    }
  }
  _objc_release(uStack_140);
  puVar7 = puStack_138;
  func_0x00010bf51e00(puStack_138);
  func_0x00010c1d0640(puVar5);
  _objc_release(puVar7);
  _objc_release(uStack_140);
  _objc_release(puStack_138);
LAB_105aff604:
  puVar7 = puVar5;
  func_0x00010bf51e00();
  _objc_release(puVar5);
  _objc_release(uVar2);
  func_0x00010bdcbba0(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
    ___stack_chk_fail();
    puVar4 = puVar7 + 0x30;
    _objc_loadWeakRetained(puVar4);
    uVar15 = *(undefined8 *)(puVar7 + 0x28);
    FUN_105afe83c(uVar15,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcbba0(puVar4);
    _objc_release(uVar15);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105aff67c; end: 105aff6ef;  */

void FUN_105aff67c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  FUN_105afe83c(uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbba0(lVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105aff6f0; end: 105aff6f7; -[SCDiscoverFeedViewControllerLoggingAdaptor _announceEvent:identifier:extraData:] */

void FUN_105aff6f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 105aff6f8; end: 105aff733; -[SCDiscoverFeedViewControllerLoggingAdaptor .cxx_destruct] */

void FUN_105aff6f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105aff734; end: 105affc03; -[SCDiscoverFeedSectionCreator initWithUserSession:actionHandler:sectionHeaderActionHandler:discoverFeedDataFetcher:sectionViewAllButtonStates:coordinatingManager:imageDownloader:gestureCoordinator:bitmojiAvatarProvider:userPreferences:grapheneMetricsEmitter:snapchattersSynchronousDataFetcher:featureSettingsService:circumstanceEngine:imageFetchingService:storiesConfigProvider:bitmojiImageFetcher:promotedStoriesLogger:searchPreTypeNetworkRequester:friendsContextLabelBuilder:] */

undefined8 *
FUN_105aff734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  puStack_70 = PTR_PTR_1126ebd08;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[8];
    puVar1[8] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[9];
    puVar1[9] = param_19;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c2178;
    _objc_alloc();
    func_0x000108f54af0(0x3fe0000000000000,param_16);
    func_0x00010c041ba0();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_21;
    _objc_release(uVar2);
    uVar2 = puVar1[0x14];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_22;
    _objc_release(uVar2);
    uVar4 = puVar1[0x13];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c22a8;
    func_0x00010c27b940(PTR_PTR_1126c22a8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf1f360();
    *(char *)(puVar1 + 0x19) = (char)uVar2;
    _objc_release(puVar3);
    _objc_release(uVar4);
  }
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



/* Entry: 105affc04; end: 105affc53; -[SCDiscoverFeedSectionCreator setSectionExtensionServices:] */

void FUN_105affc04(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0xd0);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = param_3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105affc54; end: 105b00f6b; -[SCDiscoverFeedSectionCreator sectionForDescriptor:] */

void FUN_105affc54(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  ulong in_stack_fffffffffffffeb0;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  ppuVar15 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1700;
  _objc_opt_class(PTR_PTR_1126b1700);
  ppuVar16 = ppuVar15;
  _objc_opt_isKindOfClass(ppuVar15,puVar2);
  ppuVar1 = ppuVar15;
  if (((ulong)ppuVar16 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar15);
  ppuVar15 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar15;
  func_0x00010c0720c0();
  _objc_release(ppuVar15);
  if ((int)ppuVar16 != 0) {
    ppuVar15 = (undefined **)PTR_PTR_1126b1108;
    _objc_alloc(PTR_PTR_1126b1108);
    func_0x00010c04f820();
    puVar2 = PTR_PTR_1126c2398;
    _objc_alloc(PTR_PTR_1126c2398);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00ccc0(puVar2);
    _objc_release(uVar3);
    func_0x00010c1f9240(ppuVar15);
    puVar4 = PTR_PTR_1126c23a0;
    _objc_alloc(PTR_PTR_1126c23a0);
    func_0x00010c042de0();
    func_0x00010c189840();
    func_0x00010c1b9a60(ppuVar15);
    _objc_release(puVar4);
    goto LAB_105b00250;
  }
  puVar4 = *(undefined **)(param_1 + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010bf275c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  ppuVar15 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar15;
  func_0x00010c0720c0();
  if ((int)ppuVar16 == 0) {
    ppuVar16 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar16;
    func_0x00010c0720c0();
    _objc_release(ppuVar16);
    _objc_release(ppuVar15);
    if ((int)ppuVar5 != 0) goto LAB_105affe28;
    ppuVar15 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar15;
    func_0x000108f54104();
    _objc_release(ppuVar15);
    ppuVar15 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    if ((int)ppuVar16 == 0) {
      ppuVar16 = ppuVar15;
      func_0x00010c0720c0();
      _objc_release(ppuVar15);
      if ((int)ppuVar16 != 0) {
        ppuVar15 = param_3;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126b4890;
        _objc_opt_class(PTR_PTR_1126b4890);
        ppuVar16 = ppuVar15;
        _objc_opt_isKindOfClass(ppuVar15,puVar4);
        _objc_release(ppuVar15);
        ppuVar15 = param_3;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        if (((ulong)ppuVar16 & 1) != 0) {
          puVar4 = PTR_PTR_1126b4890;
          _objc_opt_class(PTR_PTR_1126b4890);
          ppuVar5 = ppuVar15;
          _objc_opt_isKindOfClass(ppuVar15,puVar4);
          ppuVar16 = ppuVar15;
          if (((ulong)ppuVar5 & 1) == 0) {
            ppuVar16 = (undefined **)0x0;
          }
          _objc_retain(ppuVar16);
          _objc_release(ppuVar15);
          ppuVar15 = ppuVar16;
          func_0x00010bf4c1e0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126c2180;
          _objc_opt_class(PTR_PTR_1126c2180);
          ppuVar12 = ppuVar15;
          _objc_opt_isKindOfClass(ppuVar15,puVar4);
          ppuVar5 = ppuVar15;
          if (((ulong)ppuVar12 & 1) == 0) {
            ppuVar5 = (undefined **)0x0;
          }
          _objc_retain(ppuVar5);
          _objc_release(ppuVar15);
          ppuVar12 = &PTR____CFConstantStringClassReference_110dcbaf8;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcbaf8,0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar15 = param_3;
          func_0x00010bfe5ec0(param_3);
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar12;
          func_0x0001079a3380(0x4028000000000000,ppuVar12,0,0,ppuVar15,0,2,ppuVar5,0,
                              in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar15);
          if (ppuVar9 == (undefined **)0x0) {
            puVar4 = (undefined *)0x0;
          }
          else {
            puVar4 = PTR_PTR_1126c23a8;
            _objc_alloc();
            func_0x00010c01a180();
            if (*(char *)(param_1 + 200) == '\x01') {
              func_0x00010bea8220(param_1);
              _objc_initWeak(auStack_70,param_1);
              _objc_copyWeak(auStack_a0,auStack_70);
              func_0x00010c21a140(puVar4);
              func_0x00010c28b560(puVar4);
              _objc_destroyWeak(auStack_a0);
              _objc_destroyWeak(auStack_70);
            }
          }
          ppuVar15 = (undefined **)PTR_PTR_1126bed88;
          _objc_alloc(PTR_PTR_1126bed88);
          ppuVar13 = param_3;
          func_0x00010bfe5ec0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c04f860(ppuVar15);
          _objc_release(ppuVar13);
          uVar3 = *(undefined8 *)(param_1 + 0x98);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = PTR_PTR_1126b1270;
          func_0x00010c152a20(PTR_PTR_1126b1270);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f320(uVar3);
          func_0x00010c1738c0(ppuVar15);
          _objc_release(puVar17);
          _objc_release(uVar3);
          puVar17 = PTR_PTR_1126c23c0;
          _objc_alloc(PTR_PTR_1126c23c0);
          ppuVar13 = param_3;
          func_0x00010bfe5ec0(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c043700(puVar17);
          _objc_release(uVar3);
          _objc_release(ppuVar13);
          func_0x00010c1951e0(ppuVar15);
          func_0x00010bef77a0(*(undefined8 *)(param_1 + 0x30));
          puVar14 = PTR_PTR_1126c23c8;
          _objc_alloc();
          uVar3 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c05d760();
          _objc_release(uVar6);
          _objc_release(uVar3);
          func_0x00010c18b5e0(puVar17);
          uVar3 = *(undefined8 *)(param_1 + 0xc0);
          *(undefined **)(param_1 + 0xc0) = puVar14;
          _objc_retain(puVar14);
          _objc_release(uVar3);
          func_0x00010c181a00(*(undefined8 *)(param_1 + 0xc0));
          func_0x00010c1f9240(ppuVar15);
          func_0x00010c161980(ppuVar15);
          func_0x00010c189700(ppuVar15);
          _objc_release(puVar14);
          _objc_release(puVar17);
          _objc_release(puVar4);
          _objc_release(ppuVar9);
          _objc_release(ppuVar12);
          _objc_release(ppuVar5);
          _objc_release(ppuVar16);
          goto LAB_105b00250;
        }
        puVar4 = PTR_PTR_1126b1700;
        _objc_opt_class(PTR_PTR_1126b1700);
        ppuVar16 = ppuVar15;
        _objc_opt_isKindOfClass(ppuVar15,puVar4);
        _objc_release(ppuVar15);
        if (((ulong)ppuVar16 & 1) != 0) {
          ppuVar16 = ppuVar1;
          func_0x00010bf4c1e0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126c2180;
          _objc_opt_class(PTR_PTR_1126c2180);
          ppuVar5 = ppuVar16;
          _objc_opt_isKindOfClass(ppuVar16,puVar4);
          ppuVar15 = ppuVar16;
          if (((ulong)ppuVar5 & 1) == 0) {
            ppuVar15 = (undefined **)0x0;
          }
          _objc_retain(ppuVar15);
          _objc_release(ppuVar16);
          ppuVar16 = ppuVar15;
          func_0x00010c262de0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = param_3;
          func_0x00010bfe5ec0(param_3);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar16;
          func_0x0001079a3380(0x4028000000000000,ppuVar16,0,0,ppuVar5,0,2,ppuVar15,0,
                              in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar15);
          _objc_release(ppuVar5);
          _objc_release(ppuVar16);
          ppuVar15 = (undefined **)PTR_PTR_1126b1108;
          _objc_alloc(PTR_PTR_1126b1108);
          if (ppuVar12 == (undefined **)0x0) {
            func_0x00010c04f820(ppuVar15);
          }
          else {
            puVar4 = PTR_PTR_1126c23a8;
            _objc_alloc(PTR_PTR_1126c23a8);
            func_0x00010c01a180();
            func_0x00010c04f820(ppuVar15);
            _objc_release(puVar4);
          }
          puVar4 = PTR_PTR_1126c23c8;
          _objc_alloc();
          uVar3 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c05d760();
          _objc_release(uVar6);
          _objc_release(uVar3);
          uVar3 = *(undefined8 *)(param_1 + 0xc0);
          *(undefined **)(param_1 + 0xc0) = puVar4;
          _objc_retain(puVar4);
          _objc_release(uVar3);
          func_0x00010c181a00(*(undefined8 *)(param_1 + 0xc0));
          func_0x00010c1f9240(ppuVar15);
          func_0x00010c161980(ppuVar15);
          func_0x00010c189700(ppuVar15);
          puVar17 = PTR_PTR_1126c23b8;
          _objc_opt_new(PTR_PTR_1126c23b8);
          _objc_release(puVar4);
          func_0x00010c1b9a60(ppuVar15);
          ppuVar16 = ppuVar15;
          func_0x00010c08caa0(ppuVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c189840();
          _objc_release(ppuVar16);
          _objc_release(puVar17);
          _objc_release(ppuVar12);
          goto LAB_105b00250;
        }
      }
      ppuVar15 = ppuVar1;
      func_0x00010bf4c1e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c2180;
      _objc_opt_class(PTR_PTR_1126c2180);
      ppuVar5 = ppuVar15;
      _objc_opt_isKindOfClass(ppuVar15,puVar4);
      ppuVar16 = ppuVar15;
      if (((ulong)ppuVar5 & 1) == 0) {
        ppuVar16 = (undefined **)0x0;
      }
      _objc_retain(ppuVar16);
      _objc_release(ppuVar15);
      ppuVar15 = param_3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar15;
      func_0x00010c0720c0();
      _objc_release(ppuVar15);
      ppuVar15 = param_3;
      func_0x0001079a3b00(param_3,*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0x10),
                          *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x50),0,ppuVar16
                          ,0,CONCAT71((int7)(in_stack_fffffffffffffeb0 >> 8),(char)ppuVar5) ^ 1,
                          *(undefined8 *)(param_1 + 0x98));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar16);
      if (ppuVar15 != (undefined **)0x0) {
        _objc_retain(ppuVar15);
      }
      _objc_release(ppuVar15);
      goto LAB_105b00250;
    }
    ppuVar16 = ppuVar15;
    func_0x000108f54160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar15);
    if (ppuVar16 == (undefined **)0x0) {
      ppuVar15 = (undefined **)0x0;
    }
    else {
      ppuVar15 = ppuVar16;
      func_0x00010c067ec0(ppuVar16);
    }
    ppuVar12 = param_3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b4890;
    _objc_opt_class(PTR_PTR_1126b4890);
    ppuVar9 = ppuVar12;
    _objc_opt_isKindOfClass(ppuVar12,puVar4);
    ppuVar5 = ppuVar12;
    if (((ulong)ppuVar9 & 1) == 0) {
      ppuVar5 = (undefined **)0x0;
    }
    _objc_retain(ppuVar5);
    _objc_release(ppuVar12);
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar9 = ppuVar1;
      func_0x00010bf4c1e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c2180;
      _objc_opt_class(PTR_PTR_1126c2180);
      ppuVar13 = ppuVar9;
      _objc_opt_isKindOfClass(ppuVar9,puVar4);
      ppuVar12 = ppuVar9;
      if (((ulong)ppuVar13 & 1) == 0) {
        ppuVar12 = (undefined **)0x0;
      }
      _objc_retain(ppuVar12);
      _objc_release(ppuVar9);
      ppuVar9 = ppuVar12;
      func_0x00010c262de0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar12;
      func_0x00010bf2cc60(ppuVar12);
      ppuVar11 = ppuVar9;
      func_0x0001079a3380(0x4028000000000000,ppuVar9,0,0,ppuVar13,ppuVar10,ppuVar15,ppuVar12,0,
                          in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar12);
      _objc_release(ppuVar13);
      _objc_release(ppuVar9);
      ppuVar15 = (undefined **)PTR_PTR_1126b1108;
      _objc_alloc(PTR_PTR_1126b1108);
      if (ppuVar11 == (undefined **)0x0) {
        func_0x00010c04f820(ppuVar15);
      }
      else {
        puVar4 = PTR_PTR_1126c23a8;
        _objc_alloc(PTR_PTR_1126c23a8);
        func_0x00010c01a180();
        func_0x00010c04f820(ppuVar15);
        _objc_release(puVar4);
      }
      puVar4 = PTR_PTR_1126c23b0;
      _objc_alloc(PTR_PTR_1126c23b0);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108f54a98();
      func_0x00010c00cd80(puVar4);
      _objc_release(uVar3);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      func_0x00010c18e980(puVar4);
      func_0x00010c1f9240(ppuVar15);
      func_0x00010c161980(ppuVar15);
      func_0x00010c189700(ppuVar15);
      puVar17 = PTR_PTR_1126c23b8;
      _objc_opt_new(PTR_PTR_1126c23b8);
      func_0x00010c1b9a60(ppuVar15);
      _objc_release(puVar17);
      ppuVar12 = ppuVar15;
      func_0x00010c08caa0(ppuVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c189840();
      _objc_release(ppuVar12);
    }
    else {
      func_0x00010bf4c1e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126c2180;
      _objc_opt_class(PTR_PTR_1126c2180);
      ppuVar13 = ppuVar12;
      _objc_opt_isKindOfClass(ppuVar12,puVar4);
      ppuVar9 = ppuVar12;
      if (((ulong)ppuVar13 & 1) == 0) {
        ppuVar9 = (undefined **)0x0;
      }
      _objc_retain(ppuVar9);
      _objc_release(ppuVar12);
      ppuVar12 = ppuVar9;
      func_0x00010c262de0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      func_0x00010bf2cc60(ppuVar9);
      ppuVar11 = ppuVar12;
      func_0x0001079a3380(0x4028000000000000,ppuVar12,0,0,ppuVar13,ppuVar10,ppuVar15,ppuVar9,0,
                          in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      _objc_release(ppuVar13);
      _objc_release(ppuVar12);
      puVar4 = PTR_PTR_1126c23b0;
      _objc_alloc(PTR_PTR_1126c23b0);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108f54a98();
      func_0x00010c00cd80(puVar4);
      _objc_release(uVar3);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      ppuVar15 = (undefined **)PTR_PTR_1126bed88;
      _objc_alloc(PTR_PTR_1126bed88);
      if (ppuVar11 == (undefined **)0x0) {
        puVar17 = (undefined *)0x0;
      }
      else {
        puVar17 = PTR_PTR_1126c23a8;
        _objc_alloc(PTR_PTR_1126c23a8);
        func_0x00010c01a180();
      }
      ppuVar12 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04f860(ppuVar15);
      _objc_release(ppuVar12);
      if (ppuVar11 != (undefined **)0x0) {
        _objc_release(puVar17);
      }
      func_0x00010c1738c0(ppuVar15);
      func_0x00010c1f9240(ppuVar15);
      func_0x00010c161980(ppuVar15);
      func_0x00010c189700(ppuVar15);
    }
    _objc_release(puVar4);
    _objc_release(ppuVar11);
    _objc_release(ppuVar5);
  }
  else {
    _objc_release(ppuVar15);
LAB_105affe28:
    ppuVar15 = param_3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar15;
    func_0x000108f54160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar15);
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar15 = (undefined **)0x0;
    }
    else {
      ppuVar15 = ppuVar5;
      func_0x00010c067ec0(ppuVar5);
    }
    ppuVar16 = ppuVar1;
    func_0x00010bf4c1e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c2180;
    _objc_opt_class(PTR_PTR_1126c2180);
    ppuVar9 = ppuVar16;
    _objc_opt_isKindOfClass(ppuVar16,puVar4);
    ppuVar12 = ppuVar16;
    if (((ulong)ppuVar9 & 1) == 0) {
      ppuVar12 = (undefined **)0x0;
    }
    _objc_retain(ppuVar12);
    _objc_release(ppuVar16);
    if ((*(byte *)(param_1 + 200) & 1) == 0) {
      ppuVar9 = ppuVar12;
      func_0x00010c262de0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar9 = &PTR____CFConstantStringClassReference_110dcbaf8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcbaf8,0);
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar16 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar12;
    func_0x00010bf2cc60(ppuVar12);
    ppuVar10 = ppuVar9;
    func_0x0001079a3380(0x4028000000000000,ppuVar9,0,0,ppuVar16,ppuVar13,ppuVar15,ppuVar12,0,
                        in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar16);
    ppuVar16 = (undefined **)PTR_PTR_1126c23a8;
    if (*(char *)(param_1 + 200) == '\x01') {
      _objc_alloc();
      func_0x00010c01a180();
      _objc_retain();
      uVar3 = *(undefined8 *)(param_1 + 0xb8);
      *(undefined ***)(param_1 + 0xb8) = ppuVar16;
      _objc_release(uVar3);
      _objc_initWeak(auStack_70,param_1);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_105b00f6c;
      puStack_80 = &UNK_110843540;
      _objc_copyWeak(auStack_78,auStack_70);
      func_0x00010c21a140(ppuVar16);
      func_0x00010bedf3a0(param_1);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_70);
    }
    else if (ppuVar10 == (undefined **)0x0) {
      ppuVar16 = (undefined **)0x0;
    }
    else {
      _objc_alloc(PTR_PTR_1126c23a8);
      func_0x00010c01a180();
      func_0x00010c19d920();
    }
    puVar4 = PTR_PTR_1126c23b0;
    _objc_alloc(PTR_PTR_1126c23b0);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108f54a98();
    func_0x00010c00cd80(puVar4);
    _objc_release(uVar3);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    func_0x00010c18e980(puVar4);
    ppuVar15 = (undefined **)PTR_PTR_1126b1108;
    _objc_alloc(PTR_PTR_1126b1108);
    func_0x00010c04f820();
    func_0x00010c1f9240();
    func_0x00010c161980(ppuVar15);
    func_0x00010c189700(ppuVar15);
    func_0x000108f54a98();
    puVar17 = PTR_PTR_1126c23a0;
    _objc_alloc(PTR_PTR_1126c23a0);
    func_0x00010c042de0();
    func_0x00010c1b9a60(ppuVar15);
    ppuVar13 = ppuVar15;
    func_0x00010c08caa0(ppuVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189840();
    _objc_release(ppuVar13);
    _objc_release(puVar17);
    _objc_release(puVar4);
    _objc_release(ppuVar9);
    _objc_release(ppuVar12);
    _objc_release(ppuVar5);
    _objc_release(ppuVar10);
  }
  _objc_release(ppuVar16);
LAB_105b00250:
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar15);
  return;
}



/* Entry: 105b00f6c; end: 105b0103b;  */

void FUN_105b00f6c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27baa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf81e40();
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b0103c; end: 105b01043; -[SCDiscoverFeedSectionCreator setSubscriptionSectionPaginationInFlight:] */

void FUN_105b0103c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d8b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xc0),PTR_s_setPaginationInFlight__112653d08);
  return;
}



/* Entry: 105b01044; end: 105b0112b; -[SCDiscoverFeedSectionCreator _setSubscriptionSectionHeaderProvider:] */

void FUN_105b01044(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xb0) != param_3) {
    func_0x00010c16b240();
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    *(long *)(param_1 + 0xb0) = param_3;
    _objc_release(uVar1);
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c16b240(*(undefined8 *)(param_1 + 0xb0));
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105b0112c; end: 105b01157;  */

void FUN_105b0112c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be651a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b01158; end: 105b011ab; -[SCDiscoverFeedSectionCreator _subscriptionSectionOwnsTrendingHeader] */

uint FUN_105b01158(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xb0);
  uVar1 = 0;
  if (lVar2 != 0) {
    func_0x00010c262e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      lVar2 = *(long *)(param_1 + 0xc0);
      uVar1 = 0;
      if (lVar2 != 0) {
        func_0x00010c071780();
        uVar1 = (uint)lVar2 ^ 1;
      }
    }
  }
  return uVar1;
}



/* Entry: 105b011ac; end: 105b01253; -[SCDiscoverFeedSectionCreator _updateSectionHeadersForTrendingTopics] */

void FUN_105b011ac(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  
  puVar3 = *(undefined **)(param_1 + 0xa0);
  func_0x00010c269d40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf275c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  lVar5 = param_1;
  func_0x00010bec8920();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  iVar6 = (int)lVar5;
  if (*(long *)(param_1 + 0xb0) != 0) {
    puVar2 = puVar4;
    if (iVar6 == 0) {
      puVar2 = PTR____NSArray0__struct_11034ab48;
    }
    func_0x00010c28b560(*(long *)(param_1 + 0xb0),param_2,puVar2);
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    if (iVar6 == 0) {
      puVar3 = puVar4;
    }
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111184420;
    if (iVar6 == 0) {
      ppuVar1 = (undefined **)0x0;
    }
    func_0x00010c19d920(*(long *)(param_1 + 0xb8),param_2,ppuVar1);
    func_0x00010c28b560(*(undefined8 *)(param_1 + 0xb8),param_2,puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105b01254; end: 105b012d3; -[SCDiscoverFeedSectionCreator _notifyTrendingTopicsDidUpdate] */

void FUN_105b01254(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 200) == '\x01') {
    func_0x00010bedf3a0();
    uVar1 = param_1 + 0xd8;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      param_1 = param_1 + 0xd8;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf81e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 105b012d4; end: 105b012e7; -[SCDiscoverFeedSectionCreator searchPreTypeNetworkRequesterDidUpdateTrendingTopics:] */

void FUN_105b012d4(long param_1)

{
  if (*(char *)(param_1 + 200) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be651b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyTrendingTopicsDidUpdate_112576e08);
    return;
  }
  return;
}



/* Entry: 105b012e8; end: 105b012fb; -[SCDiscoverFeedSectionCreator subscriptionSectionDataProviderDidUpdateContainerViewModels] */

void FUN_105b012e8(long param_1)

{
  if (*(char *)(param_1 + 200) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be651b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__notifyTrendingTopicsDidUpdate_112576e08);
    return;
  }
  return;
}



/* Entry: 105b012fc; end: 105b01303; -[SCDiscoverFeedSectionCreator sectionExtensionServices] */

undefined8 FUN_105b012fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 105b01304; end: 105b0131b; -[SCDiscoverFeedSectionCreator trendingTopicDelegate] */

void FUN_105b01304(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b0131c; end: 105b01327; -[SCDiscoverFeedSectionCreator setTrendingTopicDelegate:] */

void FUN_105b0131c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xd8,param_3);
  return;
}



/* Entry: 105b01328; end: 105b01473; -[SCDiscoverFeedSectionCreator .cxx_destruct] */

void FUN_105b01328(long param_1)

{
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
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



/* Entry: 105b01474; end: 105b01517; -[SCDiscoverFeedSubscriptionSectionCollapseCoordinator initWithSectionType:dataFetching:] */

undefined1 *
FUN_105b01474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebd10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b01518; end: 105b015cf; -[SCDiscoverFeedSubscriptionSectionCollapseCoordinator setCollapseState:] */

void FUN_105b01518(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105b015d0; end: 105b01603;  */

void FUN_105b015d0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea2b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b01604; end: 105b01633; -[SCDiscoverFeedSubscriptionSectionCollapseCoordinator _setCollapseState:] */

void FUN_105b01604(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b01634; end: 105b016e7; -[SCDiscoverFeedSubscriptionSectionCollapseCoordinator collapseProcessWithCompletionBlock:] */

void FUN_105b01634(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105b016e8;
  puStack_40 = &UNK_1108d4d60;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf00a00(uVar2,param_2,2,uVar1,&puStack_58);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105b016e8; end: 105b0180b;  */

long FUN_105b016e8(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      uVar5 = 1;
LAB_105b017b8:
      _objc_release(param_2);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar5);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return param_2;
      }
      ___stack_chk_fail();
      return *(long *)(param_2 + 0x10);
    }
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      iVar2 = (int)*(undefined8 *)(lVar6 * 8);
      func_0x000107c6e7e4();
      if (iVar2 == 0) {
        uVar5 = 0;
        goto LAB_105b017b8;
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105b0180c; end: 105b01813; -[SCDiscoverFeedSubscriptionSectionCollapseCoordinator collapseState] */

undefined8 FUN_105b0180c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105b01814; end: 105b0182b; -[SCDiscoverFeedSubscriptionSectionCollapseCoordinator delegate] */

void FUN_105b01814(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b0182c; end: 105b01837; -[SCDiscoverFeedSubscriptionSectionCollapseCoordinator setDelegate:] */

void FUN_105b0182c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 105b01838; end: 105b0183f; -[SCDiscoverFeedSubscriptionSectionCollapseCoordinator sectionType] */

undefined8 FUN_105b01838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105b01840; end: 105b01847; -[SCDiscoverFeedSubscriptionSectionCollapseCoordinator performer] */

undefined8 FUN_105b01840(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105b01848; end: 105b01877; -[SCDiscoverFeedSubscriptionSectionCollapseCoordinator setPerformer:] */

void FUN_105b01848(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b01878; end: 105b018bb; -[SCDiscoverFeedSubscriptionSectionCollapseCoordinator .cxx_destruct] */

void FUN_105b01878(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b018bc; end: 105b0195f; -[SCDiscoverFeedSubscriptionExtension initWithCircumstanceEngine:storiesConfigProvider:] */

undefined1 *
FUN_105b018bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebd18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c23d0;
    _objc_alloc();
    func_0x00010bffec00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b01960; end: 105b01967; -[SCDiscoverFeedSubscriptionExtension localSectionDescriptorProviders] */

undefined8 FUN_105b01960(void)

{
  return 0;
}



/* Entry: 105b01968; end: 105b019db; -[SCDiscoverFeedSubscriptionExtension remoteSectionProviders] */

undefined * FUN_105b01968(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_1 + 8);
  ppuStack_28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c28f0;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 105b019dc; end: 105b019e3; -[SCDiscoverFeedSubscriptionExtension collectionViewSectionCreators] */

undefined8 FUN_105b019dc(void)

{
  return 0;
}



/* Entry: 105b019e4; end: 105b019eb; -[SCDiscoverFeedSubscriptionExtension loggingParsers] */

undefined8 FUN_105b019e4(void)

{
  return 0;
}



/* Entry: 105b019ec; end: 105b019f7; -[SCDiscoverFeedSubscriptionExtension .cxx_destruct] */

void FUN_105b019ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b019f8; end: 105b01a9b; -[SCDiscoverFeedSubscriptionRemoteSectionParser initWithCircumstanceEngine:storiesConfigProvider:] */

undefined1 *
FUN_105b019f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebd20;
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



/* Entry: 105b01a9c; end: 105b01b23; -[SCDiscoverFeedSubscriptionRemoteSectionParser parseSectionMetadataWithDisplayName:loggingKey:feedType:eof:] */

void FUN_105b01a9c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 in_x3;
  
  uVar1 = in_x3;
  _objc_retain(in_x3);
  func_0x00010b0aeb34();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c2248;
  _objc_alloc(PTR_PTR_1126c2248);
  func_0x00010c0126e0();
  _objc_release(in_x3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b01b24; end: 105b01d13; -[SCDiscoverFeedSubscriptionRemoteSectionParser remoteSectionDescriptorWithSectionMetadata:circumstanceEngine:] */

void FUN_105b01b24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf86660(param_3);
  _objc_retainAutoreleasedReturnValue();
  dVar12 = 0.021299999207258224;
  dVar7 = dVar12;
  func_0x00010b8169fc(0x3f95cfaac0000000);
  dVar8 = dVar7;
  func_0x00010b816218();
  dVar9 = dVar12;
  func_0x00010b8169fc(0x3f95cfaac0000000);
  dVar10 = dVar9;
  func_0x00010b816218();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1270;
  func_0x00010bf71a60(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf1f320();
  _objc_release(puVar3);
  _objc_release(uVar2);
  dVar11 = 0.01600000075995922;
  if ((int)uVar4 == 0) {
    dVar11 = dVar12;
  }
  func_0x00010b8169fc(dVar11);
  puVar5 = PTR_PTR_1126c2180;
  _objc_alloc(PTR_PTR_1126c2180);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfa4340(param_3);
  _objc_release(param_3);
  func_0x00010c0df840(puVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110eb5658;
  func_0x00010c0127c0(puVar5);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(0,(double)(long)(dVar7 * dVar8) / dVar8,0,
                      (double)(long)(dVar9 * dVar10) / dVar10,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001079b7cb4(dVar11,&PTR____CFConstantStringClassReference_110eb5658,puVar5,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 105b01d14; end: 105b01d1b; -[SCDiscoverFeedSubscriptionRemoteSectionParser remoteSectionDescriptorWithSection:] */

void FUN_105b01d14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  _objc_retain();
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 1;
  lVar2 = param_7;
  func_0x00010c08cb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    iVar1 = 1;
  }
  else {
    lVar2 = param_7;
    func_0x00010c08cb80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c233900();
    iVar1 = (int)lVar6;
    _objc_release(lVar2);
    lVar2 = param_7;
    func_0x00010c08cb80(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c154d40();
    _objc_release(lVar2);
    lVar2 = param_7;
    func_0x00010c08cb80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c08d100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar6 != 0) {
      lVar2 = param_7;
      func_0x00010c08cb80(param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c08d100();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puStack_e0 = &uStack_b0;
      uStack_b0 = 0;
      uStack_a0 = 0x2020000000;
      uStack_98 = 0;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      puStack_c8 = &UNK_1079af5fc;
      puStack_c0 = &UNK_1109f3658;
      puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_f8 = 0xc2000000;
      puStack_f0 = &UNK_1079af660;
      puStack_e8 = &UNK_1109f3688;
      puStack_b8 = puStack_e0;
      puStack_a8 = puStack_e0;
      func_0x00010c0c1440(lVar6);
      __Block_object_dispose(&uStack_b0,8);
      _objc_release(lVar6);
      _objc_release(lVar6);
      _objc_release(lVar2);
      lVar2 = param_7;
      func_0x00010c08cb80(param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c08d100();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c1440();
      _objc_release(lVar6);
      _objc_release(lVar2);
    }
  }
  lVar2 = param_7;
  func_0x00010bfa4340(param_7);
  func_0x000108f53fe8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2180;
  _objc_alloc(PTR_PTR_1126c2180);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfa4340(param_7);
  func_0x00010c0df760(puVar4);
  _objc_retainAutoreleasedReturnValue();
  if (iVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_7;
    func_0x00010bf86660(param_7);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0127c0(puVar3);
  if (iVar1 != 0) {
    _objc_release(lVar6);
  }
  _objc_release(puVar4);
  func_0x000107c27608(lVar2);
  if (*(char *)(puStack_118 + 3) == '\x01') {
    dVar7 = 0.021299999207258224;
    func_0x00010b8169fc(0x3f95cfaac0000000);
  }
  else {
    dVar8 = 0.021299999207258224;
    func_0x00010b8169fc(0x3f95cfaac0000000);
    dVar7 = dVar8;
    func_0x00010b816218();
    dVar7 = (double)(long)(dVar8 * dVar7) / dVar7;
  }
  lVar6 = lVar2;
  if (*(char *)(puStack_118 + 3) == '\x01') {
    puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297340(param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001079b7cb4(dVar7,lVar2,puVar3,puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = (undefined *)0x0;
    func_0x0001079b7d94(0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c297340(param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001079b7bc4(dVar7,lVar2,puVar5,puVar3,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(lVar2);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105b01d1c; end: 105b01d4b; -[SCDiscoverFeedSubscriptionRemoteSectionParser .cxx_destruct] */

void FUN_105b01d1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b01d4c; end: 105b01d57; +[SCDiscoverFeedSectionViewAllButtonStates dataCoordinatorIdentifier] */

undefined ** FUN_105b01d4c(void)

{
  return &PTR____CFConstantStringClassReference_110e1cab8;
}



/* Entry: 105b01d58; end: 105b01d5f; -[SCDiscoverFeedSectionViewAllButtonStates addDataUpdateListener:] */

void FUN_105b01d58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105b01d60; end: 105b01d67; -[SCDiscoverFeedSectionViewAllButtonStates removeDataUpdateListener:] */

void FUN_105b01d60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105b01d68; end: 105b01dcb; -[SCDiscoverFeedSectionViewAllButtonStates init] */

undefined1 * FUN_105b01d68(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ebd28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b4990;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105b01dcc; end: 105b01dcf; -[SCDiscoverFeedSectionViewAllButtonStates handleDataRequest:] */

void FUN_105b01dcc(void)

{
  return;
}



/* Entry: 105b01dd0; end: 105b01e1b; -[SCDiscoverFeedSectionViewAllButtonStates setFriendStoriesSectionViewCanExpand:] */

void FUN_105b01dd0(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x10) = param_3;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class();
  func_0x00010bf63740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63720(uVar1,param_2,param_1,&PTR____CFConstantStringClassReference_110e1ca78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b01e1c; end: 105b01e67; -[SCDiscoverFeedSectionViewAllButtonStates setSubscriptionsSectionViewAllButtonCanExpand:] */

void FUN_105b01e1c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x11) = param_3;
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_opt_class();
  func_0x00010bf63740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63720(uVar1,param_2,param_1,&PTR____CFConstantStringClassReference_110e1ca98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b01e68; end: 105b01e6f; -[SCDiscoverFeedSectionViewAllButtonStates friendStoriesSectionViewCanExpand] */

undefined1 FUN_105b01e68(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 105b01e70; end: 105b01e77; -[SCDiscoverFeedSectionViewAllButtonStates subscriptionsSectionViewAllButtonCanExpand] */

undefined1 FUN_105b01e70(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 105b01e78; end: 105b01e9b; -[SCDiscoverFeedSectionViewAllButtonStates .cxx_destruct] */

void FUN_105b01e78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b01e9c; end: 105b0218b;  */

void FUN_105b01e9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0e1a60();
  func_0x000108f47180();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) != 0;
  uVar1 = param_2;
  func_0x00010bf24fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b0218c; end: 105b021cb;  */

void FUN_105b0218c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf20f80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b021cc; end: 105b021d7; +[SCDiscoverFeedSubscriptionSectionDataProvider announcerIdentifier] */

undefined ** FUN_105b021cc(void)

{
  return &PTR____CFConstantStringClassReference_110e1cb18;
}



/* Entry: 105b021d8; end: 105b0226f; -[SCDiscoverFeedSubscriptionSectionDataProvider _subsCircleLayoutConfigurationWithMainTitleOneLine:] */

void FUN_105b021d8(float param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  
  if ((param_4 & 1) == 0) {
    func_0x000107c89dac();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = *(long *)(param_2 + 0x90);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b1270;
    func_0x00010c06af40(PTR_PTR_1126b1270);
    _objc_retainAutoreleasedReturnValue();
    param_2 = lVar1;
    func_0x00010bfb2c20(lVar1,param_3,puVar2);
    func_0x000107c89e34((double)param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105b02270; end: 105b02277; -[SCDiscoverFeedSubscriptionSectionDataProvider addListener:] */

void FUN_105b02270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105b02278; end: 105b0227f; -[SCDiscoverFeedSubscriptionSectionDataProvider removeListener:] */

void FUN_105b02278(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105b02280; end: 105b026b7; -[SCDiscoverFeedSubscriptionSectionDataProvider initWithUserSession:discoverFeedDataFetcher:layoutType:sectionViewAllButtonStates:collapseCoordinator:bitmojiAvatarProvider:imageDownloader:snapchattersSynchronousDataFetcher:userPreferences:circumstanceEngine:imageFetchingService:storiesConfigProvider:bitmojiImageFetcher:friendsContextLabelBuilder:sectionTitle:] */

undefined8 *
FUN_105b02280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
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
  puStack_70 = PTR_PTR_1126ebd30;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = puVar1[5];
    puVar1[5] = param_4;
    _objc_release(uVar4);
    puVar1[6] = param_5;
    _objc_retain(param_6);
    uVar4 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar4 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar4);
    _objc_retain(param_9);
    uVar4 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar4);
    _objc_retain(param_13);
    uVar4 = puVar1[0x11];
    puVar1[0x11] = param_13;
    _objc_release(uVar4);
    _objc_retain(param_15);
    uVar4 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar4);
    _objc_retain(param_16);
    uVar4 = puVar1[0x10];
    puVar1[0x10] = param_16;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126c23e0;
    _objc_alloc();
    uVar4 = param_11;
    func_0x00010c269d40(param_11);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_12);
    func_0x00010bf11fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05cb60();
    uVar5 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(uVar4);
    _objc_retain(param_10);
    uVar4 = puVar1[0xd];
    puVar1[0xd] = param_10;
    _objc_release(uVar4);
    _objc_retain(param_12);
    uVar4 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar4);
    _objc_retain(param_14);
    uVar4 = puVar1[0x12];
    puVar1[0x12] = param_14;
    _objc_release(uVar4);
    uVar4 = param_17;
    func_0x00010bf51e00();
    uVar5 = puVar1[0x13];
    puVar1[0x13] = uVar4;
    _objc_release(uVar5);
    if (puVar1[6] == 0) {
      uVar5 = puVar1[0x12];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b1270;
      func_0x00010bf71a60(PTR_PTR_1126b1270);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010bf1f320();
      *(char *)((long)puVar1 + 0xa1) = (char)uVar4;
      _objc_release(puVar2);
      _objc_release(uVar5);
    }
    else {
      *(undefined1 *)((long)puVar1 + 0xa1) = 0;
    }
    _objc_release(param_12);
  }
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
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b026b8; end: 105b026e7;  */

void FUN_105b026b8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108f5471c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 105b026e8; end: 105b02717; -[SCDiscoverFeedSubscriptionSectionDataProvider setUp] */

void FUN_105b026e8(long param_1,undefined8 param_2)

{
  func_0x00010befc780(*(undefined8 *)(param_1 + 0x28),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bef7c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_addDataUpdateListener__11259b8c0,param_1);
  return;
}



/* Entry: 105b02718; end: 105b0275f; -[SCDiscoverFeedSubscriptionSectionDataProvider tearDown] */

void FUN_105b02718(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c12bd60(*(undefined8 *)(param_1 + 0x38),param_2,param_1);
  func_0x00010c12eea0(*(undefined8 *)(param_1 + 0x28),param_2,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b02760; end: 105b02797; -[SCDiscoverFeedSubscriptionSectionDataProvider setSectionDataModel:] */

void FUN_105b02760(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be8ab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reloadSection_112580478);
  return;
}



/* Entry: 105b02798; end: 105b028a7; -[SCDiscoverFeedSubscriptionSectionDataProvider setPaginationInFlight:] */

void FUN_105b02798(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1270;
  func_0x00010c0f28c0(PTR_PTR_1126b1270);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_3;
    func_0x00010c0f7fc0(uVar3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 105b028a8; end: 105b028db;  */

void FUN_105b028a8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea62c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b028dc; end: 105b028f3; -[SCDiscoverFeedSubscriptionSectionDataProvider _setPaginationInFlightAndReloadIfNeeded:] */

void FUN_105b028dc(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0xa0) == param_3) {
    return;
  }
  *(char *)(param_1 + 0xa0) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be8ab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reloadSection_112580478);
  return;
}



/* Entry: 105b028f4; end: 105b028fb; -[SCDiscoverFeedSubscriptionSectionDataProvider dataLoadingStatus] */

undefined8 FUN_105b028f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105b028fc; end: 105b02903; -[SCDiscoverFeedSubscriptionSectionDataProvider numberOfSections] */

undefined8 FUN_105b028fc(void)

{
  return 1;
}



/* Entry: 105b02904; end: 105b0290b; -[SCDiscoverFeedSubscriptionSectionDataProvider numberOfItemsInSection:] */

void FUN_105b02904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105b0290c; end: 105b0292b; -[SCDiscoverFeedSubscriptionSectionDataProvider isEmpty] */

bool FUN_105b0290c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0(lVar1);
  return lVar1 == 0;
}



/* Entry: 105b0292c; end: 105b029cf; -[SCDiscoverFeedSubscriptionSectionDataProvider containerCellViewModelsForIndexPaths:] */

void FUN_105b0292c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf51e00();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105b029d0;
  puStack_40 = &UNK_110845ab0;
  uStack_38 = uVar2;
  _objc_retain();
  uVar1 = param_3;
  func_0x000100504554(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b029d0; end: 105b029fb;  */

void FUN_105b029d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0840e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dfd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_objectAtIndexedSubscript__112615968,param_2);
  return;
}



/* Entry: 105b029fc; end: 105b02b17; -[SCDiscoverFeedSubscriptionSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_105b029fc(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_initWeak(auStack_150,puVar1);
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_105b02ce8;
    puStack_160 = &UNK_110845ae0;
    puVar9 = auStack_150;
    _objc_copyWeak(auStack_158,puVar9);
    ppuVar2 = &puStack_178;
    _objc_retainBlock();
    ppuStack_148 = &PTR____CFConstantStringClassReference_110eb45f8;
    ppuVar3 = ppuVar2;
    _objc_retainBlock();
    ppuStack_140 = &PTR____CFConstantStringClassReference_110eb45d8;
    ppuVar4 = ppuVar2;
    ppuStack_120 = ppuVar3;
    _objc_retainBlock();
    ppuStack_138 = &PTR____CFConstantStringClassReference_110eb4698;
    ppuVar5 = ppuVar2;
    ppuStack_118 = ppuVar4;
    _objc_retainBlock();
    ppuStack_130 = &PTR____CFConstantStringClassReference_110eb46b8;
    ppuVar6 = ppuVar2;
    ppuStack_110 = ppuVar5;
    _objc_retainBlock();
    ppuStack_128 = &PTR____CFConstantStringClassReference_110eb4818;
    ppuVar7 = ppuVar2;
    ppuStack_108 = ppuVar6;
    _objc_retainBlock();
    ppuStack_100 = ppuVar7;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_158);
    puVar8 = auStack_150;
    _objc_destroyWeak();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      _objc_destroyWeak(auStack_158);
      _objc_destroyWeak(auStack_150);
      __Unwind_Resume(puVar8);
      _objc_retain(puVar9);
      puVar8 = puVar8 + 0x20;
      _objc_loadWeakRetained(puVar8);
      func_0x00010bde5ba0();
      _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b02b18; end: 105b02ce7; -[SCDiscoverFeedSubscriptionSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_105b02b18(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_b0,param_1);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_105b02ce8;
  puStack_c0 = &UNK_110845ae0;
  puVar9 = auStack_b0;
  _objc_copyWeak(auStack_b8,puVar9);
  ppuVar1 = &puStack_d8;
  _objc_retainBlock();
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110eb45f8;
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110eb45d8;
  ppuVar3 = ppuVar1;
  ppuStack_80 = ppuVar2;
  _objc_retainBlock();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110eb4698;
  ppuVar4 = ppuVar1;
  ppuStack_78 = ppuVar3;
  _objc_retainBlock();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110eb46b8;
  ppuVar5 = ppuVar1;
  ppuStack_70 = ppuVar4;
  _objc_retainBlock();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110eb4818;
  ppuVar6 = ppuVar1;
  ppuStack_68 = ppuVar5;
  _objc_retainBlock();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_60 = ppuVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_b8);
  puVar8 = auStack_b0;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  __Unwind_Resume(puVar8);
  _objc_retain(puVar9);
  puVar8 = puVar8 + 0x20;
  _objc_loadWeakRetained(puVar8);
  func_0x00010bde5ba0();
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 105b02ce8; end: 105b02d2f;  */

void FUN_105b02ce8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5ba0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b02d30; end: 105b02d4f; -[SCDiscoverFeedSubscriptionSectionDataProvider modelCanUpdateComparator] */

undefined ** FUN_105b02d30(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR___NSConcreteGlobalBlock_1108d4e28;
  if (*(char *)(param_1 + 0xa1) == '\0') {
    ppuVar1 = &PTR___NSConcreteGlobalBlock_1108d4e48;
  }
  return ppuVar1;
}



/* Entry: 105b02d50; end: 105b02f67;  */

ulong FUN_105b02d50(undefined8 param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aea98;
  _objc_opt_class(PTR_PTR_1126aea98);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  uVar5 = param_2;
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  uVar2 = uVar5;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126c2100;
  _objc_opt_class(PTR_PTR_1126c2100);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar1);
  uVar5 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126aea98;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar2 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c2100;
  _objc_opt_class(PTR_PTR_1126c2100);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar1);
  uVar2 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar3 = uVar5;
  func_0x00010c25b980(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar3;
  func_0x00010c26e5c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c25b980(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar6;
  func_0x00010c26e5c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010c0720c0(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar8;
}



/* Entry: 105b02f68; end: 105b030df;  */

bool FUN_105b02f68(undefined8 param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aea98;
  _objc_opt_class(PTR_PTR_1126aea98);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  uVar5 = param_2;
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  uVar2 = uVar5;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar1);
  uVar5 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126aea98;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar2 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar1);
  uVar2 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  uVar3 = uVar5;
  func_0x00010c259740(uVar5);
  _objc_release(uVar5);
  uVar5 = uVar2;
  func_0x00010c259740(uVar2);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar3 == uVar5;
}



/* Entry: 105b030e0; end: 105b030eb; -[SCDiscoverFeedSubscriptionSectionDataProvider viewModelChangesComparator] */

undefined ** FUN_105b030e0(void)

{
  return &PTR___NSConcreteGlobalBlock_1108d4e68;
}



/* Entry: 105b030ec; end: 105b034d7;  */

bool FUN_105b030ec(double param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  double dVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126aea98;
  _objc_opt_class(PTR_PTR_1126aea98);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = uVar1;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar1 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126aea98;
  _objc_retain(param_4);
  _objc_opt_class(puVar3);
  uVar5 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar3);
  uVar4 = param_4;
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(param_4);
  uVar5 = uVar4;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010c259740();
  uVar6 = uVar4;
  func_0x00010c259740();
  if (uVar5 == uVar6) {
    uVar5 = uVar1;
    func_0x00010bf8ba00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bf8ba00();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == uVar6) {
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    else {
      uVar7 = uVar1;
      func_0x00010bf8ba00();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010bf8ba00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c071ae0();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      if ((int)uVar9 == 0) goto LAB_105b03400;
    }
    uVar5 = uVar1;
    func_0x00010bfe8d80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bfe8d80();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == uVar6) {
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    else {
      uVar7 = uVar1;
      func_0x00010bfe8d80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010bfe8d80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c071ae0();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      if ((int)uVar9 == 0) goto LAB_105b03400;
    }
    uVar5 = uVar1;
    func_0x00010c26e120();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c26e120();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == uVar6) {
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    else {
      uVar7 = uVar1;
      func_0x00010c26e120();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010c26e120(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c071ae0();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      if ((int)uVar9 == 0) goto LAB_105b03400;
    }
    uVar5 = uVar1;
    func_0x00010c11b580(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c117840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c117800();
    uVar7 = uVar4;
    dVar10 = param_1;
    func_0x00010c11b580(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c117840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c117800();
    bVar2 = param_1 == dVar10;
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  else {
LAB_105b03400:
    bVar2 = false;
  }
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 105b034d8; end: 105b034e3; -[SCDiscoverFeedSubscriptionSectionDataProvider circleSubsViewModelChangesComparator] */

undefined ** FUN_105b034d8(void)

{
  return &PTR___NSConcreteGlobalBlock_1108d4e88;
}



/* Entry: 105b034e4; end: 105b037c7;  */

undefined8 FUN_105b034e4(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126aea98;
  _objc_opt_class(PTR_PTR_1126aea98);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c2100;
  _objc_opt_class(PTR_PTR_1126c2100);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126aea98;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar3 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010bf4ddc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c2100;
  _objc_opt_class(PTR_PTR_1126c2100);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar3 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010c25b980();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c26e5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c25b980(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c26e5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x00010c0720c0();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  if ((int)uVar10 == 0) {
    uVar11 = 0;
  }
  else {
    uVar4 = uVar1;
    func_0x00010c25b980();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c26e5c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c26e120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010c25b980();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c26e5c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c26e120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((uVar6 == uVar7) || (uVar4 = uVar6, func_0x00010c071ae0(), (int)uVar4 != 0)) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
    }
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar11;
}



/* Entry: 105b037c8; end: 105b03893; -[SCDiscoverFeedSubscriptionSectionDataProvider supplementaryViewModels] */

void FUN_105b037c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x58) == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    uStack_38 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
    ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2908;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_40 = *(long *)(param_1 + 0x58);
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_40,&ppuStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_30 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_30,&uStack_38,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 105b03894; end: 105b03897; -[SCDiscoverFeedSubscriptionSectionDataProvider didUpdateWithAnnouncerIdentifier:] */

void FUN_105b03894(void)

{
  return;
}



/* Entry: 105b03898; end: 105b03987; -[SCDiscoverFeedSubscriptionSectionDataProvider dataCoordinatorDidUpdateWithIdentifier:dataRequest:] */

void FUN_105b03898(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c22e8;
  _objc_retain(param_3);
  func_0x00010bf63740(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar3 != 0) {
    _objc_retain(param_4);
    _objc_opt_class(puVar2);
    uVar4 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar1 = param_4;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    uVar4 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar4 != 0) {
      func_0x00010be72d20(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}


