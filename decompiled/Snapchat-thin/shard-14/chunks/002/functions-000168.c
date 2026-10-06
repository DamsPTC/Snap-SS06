/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b067c68; end: 10b067c6f; -[SCPlatformAnalyticsDrawerMetricInfo drawerSessionId] */

undefined8 FUN_10b067c68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b067c70; end: 10b067c77; -[SCPlatformAnalyticsDrawerMetricInfo tabInfo] */

undefined8 FUN_10b067c70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b067c78; end: 10b067ca7; -[SCPlatformAnalyticsDrawerMetricInfo .cxx_destruct] */

void FUN_10b067c78(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b067ca8; end: 10b067d87; +[SCPlatformAnalyticsDrawerTabMetricInfo bloopInfoWithPackId:section:bloopsInfo:source:searchSource:] */

void FUN_10b067ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b6090;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  *(undefined8 *)(puVar2 + 0x38) = param_6;
  *(undefined8 *)(puVar2 + 0x40) = param_7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b067d88; end: 10b067df3; +[SCPlatformAnalyticsDrawerTabMetricInfo ctItemInfoWithCtItemInfo:] */

void FUN_10b067d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b6090;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b067df4; end: 10b067e4f; +[SCPlatformAnalyticsDrawerTabMetricInfo mediaInfoWithMediaDrawerTab:] */

void FUN_10b067df4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b6090;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b067e50; end: 10b067eb3; +[SCPlatformAnalyticsDrawerTabMetricInfo stickerInfoWithStickerInfo:] */

void FUN_10b067e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b6090;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b067eb4; end: 10b06814f; -[SCPlatformAnalyticsDrawerTabMetricInfo initWithCoder:] */

undefined8 * FUN_10b067eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x21;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_50 = PTR_PTR_1127050b0;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = unaff_x21;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      uVar4 = unaff_x21;
      func_0x00010c0720c0();
      if ((int)uVar4 == 0) {
        uVar4 = unaff_x21;
        func_0x00010c0720c0();
        if ((int)uVar4 == 0) {
          uVar4 = unaff_x21;
          func_0x00010c0720c0();
          if ((int)uVar4 == 0) goto LAB_10b0680dc;
          uVar4 = param_3;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = puVar1[9];
          puVar1[9] = uVar4;
          _objc_release(uVar3);
          uVar4 = 3;
        }
        else {
          uVar4 = param_3;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = puVar1[4];
          puVar1[4] = uVar4;
          _objc_release(uVar3);
          uVar4 = param_3;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = puVar1[5];
          puVar1[5] = uVar4;
          _objc_release(uVar3);
          uVar4 = param_3;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = puVar1[6];
          puVar1[6] = uVar4;
          _objc_release(uVar3);
          uVar4 = param_3;
          func_0x00010bf66f40();
          puVar1[7] = uVar4;
          uVar4 = param_3;
          func_0x00010bf66f40();
          puVar1[8] = uVar4;
          uVar4 = 2;
        }
      }
      else {
        uVar4 = param_3;
        func_0x00010bf66f40();
        puVar1[3] = uVar4;
        uVar4 = 1;
      }
    }
    else {
      uVar4 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puVar1[2];
      puVar1[2] = uVar4;
      _objc_release(uVar3);
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
LAB_10b0680dc:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db7158;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b068150; end: 10b068173; -[SCPlatformAnalyticsDrawerTabMetricInfo copyWithZone:] */

undefined8 FUN_10b068150(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b068174; end: 10b0682a3; -[SCPlatformAnalyticsDrawerTabMetricInfo encodeWithCoder:] */

void FUN_10b068174(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                          &PTR____CFConstantStringClassReference_110f54c18);
      ppuVar1 = &PTR____CFConstantStringClassReference_110f54bf8;
    }
    else {
      if (lVar2 != 1) goto LAB_10b068294;
      func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                          &PTR____CFConstantStringClassReference_110f54c38);
      ppuVar1 = &PTR____CFConstantStringClassReference_110f17278;
    }
  }
  else if (lVar2 == 2) {
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                        &PTR____CFConstantStringClassReference_110f54c78);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                        &PTR____CFConstantStringClassReference_110f54c98);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                        &PTR____CFConstantStringClassReference_110f54cb8);
    func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                        &PTR____CFConstantStringClassReference_110f54cd8);
    func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                        &PTR____CFConstantStringClassReference_110f54cf8);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f54c58;
  }
  else {
    if (lVar2 != 3) goto LAB_10b068294;
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                        &PTR____CFConstantStringClassReference_110f54d38);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f54d18;
  }
  func_0x00010c14cb00(param_3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110db7018);
LAB_10b068294:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0682a4; end: 10b068357; -[SCPlatformAnalyticsDrawerTabMetricInfo hash] */

void FUN_10b0682a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x18);
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  lStack_60 = -lVar1;
  if (-1 < lVar1) {
    lStack_60 = lVar1;
  }
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_1127050b0;
  puStack_a0 = (undefined1 *)puVar4;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b068358; end: 10b06839b; -[SCPlatformAnalyticsDrawerTabMetricInfo internalInit] */

void FUN_10b068358(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127050b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b06839c; end: 10b0684cb; -[SCPlatformAnalyticsDrawerTabMetricInfo isEqual:] */

long FUN_10b06839c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b0684a4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b0684b0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
         (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
        (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x48);
              if (lVar3 != *(long *)(param_3 + 0x48)) {
                func_0x00010c071ae0();
                goto LAB_10b0684b0;
              }
              goto LAB_10b0684a4;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b0684b0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b0684cc; end: 10b0685c7; -[SCPlatformAnalyticsDrawerTabMetricInfo matchStickerInfo:mediaInfo:bloopInfo:ctItemInfo:] */

void FUN_10b0684cc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_10b068598;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else {
      if ((lVar2 != 1) || (param_4 == 0)) goto LAB_10b068598;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
  }
  else {
    if (lVar2 == 2) {
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))
                  (param_5,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                   *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                   *(undefined8 *)(param_1 + 0x40));
      }
      goto LAB_10b068598;
    }
    if ((lVar2 != 3) || (param_6 == 0)) goto LAB_10b068598;
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    pcVar3 = *(code **)(param_6 + 0x10);
    lVar2 = param_6;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10b068598:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0685c8; end: 10b06861b; -[SCPlatformAnalyticsDrawerTabMetricInfo .cxx_destruct] */

void FUN_10b0685c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b06861c; end: 10b06879f; -[SCPlatformAnalyticsDestinationInfo initWithArroyoGroupIds:fsnGroupIds:arroyoRecipientIds:arroyoOneOnOneConversationIds:fsnRecipientIds:numOfRecipients:numOfPresentUsers:numOfPresentDWebUsers:detailedRecipientInfo:] */

undefined1 *
FUN_10b06861c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1127050b8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0687a0; end: 10b06892b; -[SCPlatformAnalyticsDestinationInfo initWithCoder:] */

undefined1 * FUN_10b0687a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127050b8;
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
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b06892c; end: 10b06894f; -[SCPlatformAnalyticsDestinationInfo copyWithZone:] */

undefined8 FUN_10b06892c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b068950; end: 10b068a3b; -[SCPlatformAnalyticsDestinationInfo encodeWithCoder:] */

void FUN_10b068950(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f54d58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f54d78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f54d98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f54db8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f54dd8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f54df8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f54e18);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f54e38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f54e58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b068a3c; end: 10b068af7; -[SCPlatformAnalyticsDestinationInfo hash] */

undefined8 * FUN_10b068a3c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  lVar5 = *(long *)(param_1 + 0x40);
  uStack_30 = *(undefined8 *)(param_1 + 0x48);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uStack_50 = uVar1;
  func_0x00010bfde980();
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b068c08:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b068c14;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30) &&
         (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))) &&
        (*(long *)((long)puVar3 + 0x40) == *(long *)(param_3 + 0x40))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x28);
              if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
                if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                  func_0x00010c071ae0();
                  goto LAB_10b068c14;
                }
                goto LAB_10b068c08;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b068c14:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10b068af8; end: 10b068c2f; -[SCPlatformAnalyticsDestinationInfo isEqual:] */

long FUN_10b068af8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b068c08:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b068c14;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
         (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
        (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x48);
                if (lVar3 != *(long *)(param_3 + 0x48)) {
                  func_0x00010c071ae0();
                  goto LAB_10b068c14;
                }
                goto LAB_10b068c08;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b068c14:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b068c30; end: 10b068c37; -[SCPlatformAnalyticsDestinationInfo arroyoGroupIds] */

undefined8 FUN_10b068c30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b068c38; end: 10b068c3f; -[SCPlatformAnalyticsDestinationInfo fsnGroupIds] */

undefined8 FUN_10b068c38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b068c40; end: 10b068c47; -[SCPlatformAnalyticsDestinationInfo arroyoRecipientIds] */

undefined8 FUN_10b068c40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b068c48; end: 10b068c4f; -[SCPlatformAnalyticsDestinationInfo arroyoOneOnOneConversationIds] */

undefined8 FUN_10b068c48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b068c50; end: 10b068c57; -[SCPlatformAnalyticsDestinationInfo fsnRecipientIds] */

undefined8 FUN_10b068c50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b068c58; end: 10b068c5f; -[SCPlatformAnalyticsDestinationInfo numOfRecipients] */

undefined8 FUN_10b068c58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b068c60; end: 10b068c67; -[SCPlatformAnalyticsDestinationInfo numOfPresentUsers] */

undefined8 FUN_10b068c60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b068c68; end: 10b068c6f; -[SCPlatformAnalyticsDestinationInfo numOfPresentDWebUsers] */

undefined8 FUN_10b068c68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b068c70; end: 10b068c77; -[SCPlatformAnalyticsDestinationInfo detailedRecipientInfo] */

undefined8 FUN_10b068c70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b068c78; end: 10b068cd7; -[SCPlatformAnalyticsDestinationInfo .cxx_destruct] */

void FUN_10b068c78(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b068cd8; end: 10b068d9b; -[SCPlatformAnalyticsChatMentionsMetricInfo initWithCoder:] */

undefined1 * FUN_10b068cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127050c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b068d9c; end: 10b068e0b; -[SCPlatformAnalyticsChatMentionsMetricInfo initWithDisplayNameSearchWithAtSymbolCount:displayNameSearchWithoutAtSymbolCount:usernameSearchWithAtSymbolCount:searchWithoutAtSymbolVisibleCount:searchWithAtSymbolVisibleCount:] */

void FUN_10b068d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1127050c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  return;
}



/* Entry: 10b068e0c; end: 10b068e2f; -[SCPlatformAnalyticsChatMentionsMetricInfo copyWithZone:] */

undefined8 FUN_10b068e0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b068e30; end: 10b068ecb; -[SCPlatformAnalyticsChatMentionsMetricInfo encodeWithCoder:] */

void FUN_10b068e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f54e78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f54e98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f54eb8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f54ed8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f54ef8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b068ecc; end: 10b068f3f; -[SCPlatformAnalyticsChatMentionsMetricInfo hash] */

undefined8 * FUN_10b068ecc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_20;
  long lStack_18;
  
  puVar1 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  lVar3 = *(long *)(param_1 + 0x28);
  lStack_20 = -lVar3;
  if (-1 < lVar3) {
    lStack_20 = lVar3;
  }
  func_0x000107c3191c(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if (((((ulong)puVar2 & 1) == 0) ||
          (((*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8) ||
            (*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10))) ||
           (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))))) ||
         (*(long *)((long)puVar1 + 0x20) != *(long *)(param_3 + 0x20))) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x28) == *(long *)(param_3 + 0x28));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b068f40; end: 10b069007; -[SCPlatformAnalyticsChatMentionsMetricInfo isEqual:] */

bool FUN_10b068f40(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((((uVar3 & 1) == 0) ||
          (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
            (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
           (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) ||
         (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b069008; end: 10b06900f; -[SCPlatformAnalyticsChatMentionsMetricInfo displayNameSearchWithAtSymbolCount] */

undefined8 FUN_10b069008(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b069010; end: 10b069017; -[SCPlatformAnalyticsChatMentionsMetricInfo displayNameSearchWithoutAtSymbolCount] */

undefined8 FUN_10b069010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b069018; end: 10b06901f; -[SCPlatformAnalyticsChatMentionsMetricInfo usernameSearchWithAtSymbolCount] */

undefined8 FUN_10b069018(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b069020; end: 10b069027; -[SCPlatformAnalyticsChatMentionsMetricInfo searchWithoutAtSymbolVisibleCount] */

undefined8 FUN_10b069020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b069028; end: 10b06902f; -[SCPlatformAnalyticsChatMentionsMetricInfo searchWithAtSymbolVisibleCount] */

undefined8 FUN_10b069028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b069030; end: 10b0690f3; -[SCPlatformAnalyticsDetailedRecipientInfo initWithCoder:] */

undefined1 * FUN_10b069030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127050c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0690f4; end: 10b06918f; -[SCPlatformAnalyticsDetailedRecipientInfo initWithNumOfUniqueRecipients:numOfGroupRecipients:numOfUniqueGroupRecipients:recipientRelationshipCounts:] */

undefined1 *
FUN_10b0690f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1127050c8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10b069190; end: 10b0691b3; -[SCPlatformAnalyticsDetailedRecipientInfo copyWithZone:] */

undefined8 FUN_10b069190(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0691b4; end: 10b06923b; -[SCPlatformAnalyticsDetailedRecipientInfo encodeWithCoder:] */

void FUN_10b0691b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f54f18);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f54f38);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f54f58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f54f78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b06923c; end: 10b0692af; -[SCPlatformAnalyticsDetailedRecipientInfo hash] */

undefined8 * FUN_10b06923c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar3 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  lVar1 = *(long *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lStack_30 = -lVar1;
  if (-1 < lVar1) {
    lStack_30 = lVar1;
  }
  func_0x00010bfde980();
  uStack_28 = uVar2;
  func_0x000107c3191c(&uStack_40,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 != (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b069354;
    puVar5 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar4 & 1) == 0) ||
       (((*(long *)((long)puVar3 + 8) != *(long *)(param_3 + 8) ||
         (*(long *)((long)puVar3 + 0x10) != *(long *)(param_3 + 0x10))) ||
        (*(long *)((long)puVar3 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_10b069354;
    }
    puVar5 = *(undefined1 **)((long)puVar3 + 0x20);
    if (puVar5 != *(undefined1 **)(param_3 + 0x20)) {
      func_0x00010c071ae0();
      goto LAB_10b069354;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_10b069354:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10b0692b0; end: 10b06936f; -[SCPlatformAnalyticsDetailedRecipientInfo isEqual:] */

long FUN_10b0692b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b069354;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
         (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10b069354;
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != *(long *)(param_3 + 0x20)) {
      func_0x00010c071ae0();
      goto LAB_10b069354;
    }
  }
  lVar3 = 1;
LAB_10b069354:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b069370; end: 10b069377; -[SCPlatformAnalyticsDetailedRecipientInfo numOfUniqueRecipients] */

undefined8 FUN_10b069370(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b069378; end: 10b06937f; -[SCPlatformAnalyticsDetailedRecipientInfo numOfGroupRecipients] */

undefined8 FUN_10b069378(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b069380; end: 10b069387; -[SCPlatformAnalyticsDetailedRecipientInfo numOfUniqueGroupRecipients] */

undefined8 FUN_10b069380(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b069388; end: 10b06938f; -[SCPlatformAnalyticsDetailedRecipientInfo recipientRelationshipCounts] */

undefined8 FUN_10b069388(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b069390; end: 10b06939b; -[SCPlatformAnalyticsDetailedRecipientInfo .cxx_destruct] */

void FUN_10b069390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10b06939c; end: 10b06945f; -[SCPlatformAnalyticsCreativeKitInfo initWithAppId:product:hasAttachment:attachmentUrl:] */

undefined1 *
FUN_10b06939c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1127050d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b069460; end: 10b069537; -[SCPlatformAnalyticsCreativeKitInfo initWithCoder:] */

undefined1 * FUN_10b069460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127050d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b069538; end: 10b06955b; -[SCPlatformAnalyticsCreativeKitInfo copyWithZone:] */

undefined8 FUN_10b069538(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b06955c; end: 10b0695e3; -[SCPlatformAnalyticsCreativeKitInfo encodeWithCoder:] */

void FUN_10b06955c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dff7d8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f54f98);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f54fb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e287d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0695e4; end: 10b06966b; -[SCPlatformAnalyticsCreativeKitInfo hash] */

undefined8 * FUN_10b0695e4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  lStack_40 = -lVar4;
  if (-1 < lVar4) {
    lStack_40 = lVar4;
  }
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  puVar2 = &uStack_48;
  func_0x000107c3191c(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
LAB_10b06970c:
    puVar5 = (undefined8 *)0x1;
  }
  else {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b069718;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) &&
       ((puVar2[3] == param_3[3] && (*(char *)(puVar2 + 1) == *(char *)(param_3 + 1))))) {
      lVar4 = puVar2[2];
      if ((lVar4 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        puVar5 = (undefined8 *)puVar2[4];
        if (puVar5 != (undefined8 *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_10b069718;
        }
        goto LAB_10b06970c;
      }
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_10b069718:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10b06966c; end: 10b069733; -[SCPlatformAnalyticsCreativeKitInfo isEqual:] */

long FUN_10b06966c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b06970c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b069718;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10b069718;
        }
        goto LAB_10b06970c;
      }
    }
    lVar3 = 0;
  }
LAB_10b069718:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b069734; end: 10b06973b; -[SCPlatformAnalyticsCreativeKitInfo appId] */

undefined8 FUN_10b069734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b06973c; end: 10b069743; -[SCPlatformAnalyticsCreativeKitInfo product] */

undefined8 FUN_10b06973c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b069744; end: 10b06974b; -[SCPlatformAnalyticsCreativeKitInfo hasAttachment] */

undefined1 FUN_10b069744(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b06974c; end: 10b069753; -[SCPlatformAnalyticsCreativeKitInfo attachmentUrl] */

undefined8 FUN_10b06974c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b069754; end: 10b069783; -[SCPlatformAnalyticsCreativeKitInfo .cxx_destruct] */

void FUN_10b069754(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b069784; end: 10b06990f; -[SCPlatformAnalyticsSnapSendInfo initWithCoder:] */

undefined1 * FUN_10b069784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127050d8;
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
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b069910; end: 10b069ab3; -[SCPlatformAnalyticsSnapSendInfo initWithDestinationInfo:snapCommonLoggingParams:uuid:storyPostInfo:initialActionTimestamp:snapSendSource:memoriesSnapSendInfo:sendTappedUserActionId:] */

undefined1 *
FUN_10b069910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1127050d8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b069ab4; end: 10b069ad7; -[SCPlatformAnalyticsSnapSendInfo copyWithZone:] */

undefined8 FUN_10b069ab4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b069ad8; end: 10b069baf; -[SCPlatformAnalyticsSnapSendInfo encodeWithCoder:] */

void FUN_10b069ad8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f54798);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f54fd8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e7e6d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f54ff8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f54998);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f55018);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f55038);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f54a98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b069bb0; end: 10b069c63; -[SCPlatformAnalyticsSnapSendInfo hash] */

undefined8 * FUN_10b069bb0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar4 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10b069d6c:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b069d78;
    puVar7 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) && (puVar4[6] == param_3[6])) {
      lVar6 = puVar4[1];
      if ((lVar6 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = puVar4[2];
        if ((lVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = puVar4[3];
          if ((lVar6 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = puVar4[4];
            if ((lVar6 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = puVar4[5];
              if ((lVar6 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                lVar6 = puVar4[7];
                if ((lVar6 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                  puVar7 = (undefined8 *)puVar4[8];
                  if (puVar7 != (undefined8 *)param_3[8]) {
                    func_0x00010c071ae0();
                    goto LAB_10b069d78;
                  }
                  goto LAB_10b069d6c;
                }
              }
            }
          }
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_10b069d78:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 10b069c64; end: 10b069d93; -[SCPlatformAnalyticsSnapSendInfo isEqual:] */

long FUN_10b069c64(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b069d6c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b069d78;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if (lVar3 != *(long *)(param_3 + 0x40)) {
                    func_0x00010c071ae0();
                    goto LAB_10b069d78;
                  }
                  goto LAB_10b069d6c;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b069d78:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b069d94; end: 10b069d9b; -[SCPlatformAnalyticsSnapSendInfo destinationInfo] */

undefined8 FUN_10b069d94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b069d9c; end: 10b069da3; -[SCPlatformAnalyticsSnapSendInfo snapCommonLoggingParams] */

undefined8 FUN_10b069d9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b069da4; end: 10b069dab; -[SCPlatformAnalyticsSnapSendInfo uuid] */

undefined8 FUN_10b069da4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b069dac; end: 10b069db3; -[SCPlatformAnalyticsSnapSendInfo storyPostInfo] */

undefined8 FUN_10b069dac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b069db4; end: 10b069dbb; -[SCPlatformAnalyticsSnapSendInfo initialActionTimestamp] */

undefined8 FUN_10b069db4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b069dbc; end: 10b069dc3; -[SCPlatformAnalyticsSnapSendInfo snapSendSource] */

undefined8 FUN_10b069dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b069dc4; end: 10b069dcb; -[SCPlatformAnalyticsSnapSendInfo memoriesSnapSendInfo] */

undefined8 FUN_10b069dc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b069dcc; end: 10b069dd3; -[SCPlatformAnalyticsSnapSendInfo sendTappedUserActionId] */

undefined8 FUN_10b069dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b069dd4; end: 10b069e3f; -[SCPlatformAnalyticsSnapSendInfo .cxx_destruct] */

void FUN_10b069dd4(long param_1)

{
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



/* Entry: 10b069e40; end: 10b069fb7; -[SCPlatformAnalyticsBloopsGeneratedResultInfo initWithCoder:] */

undefined1 * FUN_10b069e40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127050e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b069fb8; end: 10b06a117; -[SCPlatformAnalyticsBloopsGeneratedResultInfo initWithGenderType:bloopsConfigUrl:bloopsCoreApiVersion:generateResultType:bloopsGridIndex:bloopsHasCustomText:bloopsId:bloopsSearchConfigurationName:bloopsChatMediaContentProviderAnalytics:] */

undefined1 *
FUN_10b069fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1127050e0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b06a118; end: 10b06a13b; -[SCPlatformAnalyticsBloopsGeneratedResultInfo copyWithZone:] */

undefined8 FUN_10b06a118(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b06a13c; end: 10b06a227; -[SCPlatformAnalyticsBloopsGeneratedResultInfo encodeWithCoder:] */

void FUN_10b06a13c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f55058);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f55078);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f55098);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f550b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110f550d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f550f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110f55118);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f55138);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110f55158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b06a228; end: 10b06a2df; -[SCPlatformAnalyticsBloopsGeneratedResultInfo hash] */

long * FUN_10b06a228(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar3 = &lStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lStack_70 = -lVar5;
  if (-1 < lVar5) {
    lStack_70 = lVar5;
  }
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uStack_58 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&lStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_10b06a3e8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b06a3f4;
    puVar6 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((*(long *)((long)plVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
          (*(long *)((long)plVar3 + 0x28) == *(long *)(param_3 + 0x28))) &&
         (*(long *)((long)plVar3 + 0x30) == *(long *)(param_3 + 0x30))) &&
        (*(char *)((long)plVar3 + 8) == param_3[8])))) {
      lVar5 = *(long *)((long)plVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)plVar3 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)plVar3 + 0x38);
          if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)plVar3 + 0x40);
            if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)plVar3 + 0x48);
              if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                func_0x00010c071ae0();
                goto LAB_10b06a3f4;
              }
              goto LAB_10b06a3e8;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b06a3f4:
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 10b06a2e0; end: 10b06a40f; -[SCPlatformAnalyticsBloopsGeneratedResultInfo isEqual:] */

long FUN_10b06a2e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b06a3e8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b06a3f4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
          (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x38);
          if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x40);
            if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x48);
              if (lVar3 != *(long *)(param_3 + 0x48)) {
                func_0x00010c071ae0();
                goto LAB_10b06a3f4;
              }
              goto LAB_10b06a3e8;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b06a3f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b06a410; end: 10b06a417; -[SCPlatformAnalyticsBloopsGeneratedResultInfo genderType] */

undefined8 FUN_10b06a410(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b06a418; end: 10b06a41f; -[SCPlatformAnalyticsBloopsGeneratedResultInfo bloopsConfigUrl] */

undefined8 FUN_10b06a418(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b06a420; end: 10b06a427; -[SCPlatformAnalyticsBloopsGeneratedResultInfo bloopsCoreApiVersion] */

undefined8 FUN_10b06a420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b06a428; end: 10b06a42f; -[SCPlatformAnalyticsBloopsGeneratedResultInfo generateResultType] */

undefined8 FUN_10b06a428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b06a430; end: 10b06a437; -[SCPlatformAnalyticsBloopsGeneratedResultInfo bloopsGridIndex] */

undefined8 FUN_10b06a430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b06a438; end: 10b06a43f; -[SCPlatformAnalyticsBloopsGeneratedResultInfo bloopsHasCustomText] */

undefined1 FUN_10b06a438(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b06a440; end: 10b06a447; -[SCPlatformAnalyticsBloopsGeneratedResultInfo bloopsId] */

undefined8 FUN_10b06a440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b06a448; end: 10b06a44f; -[SCPlatformAnalyticsBloopsGeneratedResultInfo bloopsSearchConfigurationName] */

undefined8 FUN_10b06a448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b06a450; end: 10b06a457; -[SCPlatformAnalyticsBloopsGeneratedResultInfo bloopsChatMediaContentProviderAnalytics] */

undefined8 FUN_10b06a450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b06a458; end: 10b06a4ab; -[SCPlatformAnalyticsBloopsGeneratedResultInfo .cxx_destruct] */

void FUN_10b06a458(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b06a4ac; end: 10b06a59b; -[SCPlatformAnalyticsBloopsInfo initWithBloopsGeneratedResult:bloopsWasSentFromFullScreen:viewTimeInMilliseconds:sentBloopFeatures:notSentBloopFeatures:] */

undefined1 *
FUN_10b06a4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1127050e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b06a59c; end: 10b06a69b; -[SCPlatformAnalyticsBloopsInfo initWithCoder:] */

undefined1 * FUN_10b06a59c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127050e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b06a69c; end: 10b06a6bf; -[SCPlatformAnalyticsBloopsInfo copyWithZone:] */

undefined8 FUN_10b06a69c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b06a6c0; end: 10b06a75b; -[SCPlatformAnalyticsBloopsInfo encodeWithCoder:] */

void FUN_10b06a6c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f55178);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f55198);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f551b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f551d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f551f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b06a75c; end: 10b06a7e3; -[SCPlatformAnalyticsBloopsInfo hash] */

undefined8 * FUN_10b06a75c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10b06a89c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b06a8a8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] &&
        (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
          if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_10b06a8a8;
          }
          goto LAB_10b06a89c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10b06a8a8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}


