/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104fe1384; end: 104fe13df; -[SCPlusSubscribeViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe1384(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112718fd0,0);
  _objc_destroyWeak(param_1 + _DAT_112718fcc);
  _objc_storeStrong(param_1 + _DAT_112718fc8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718fc4,0);
  return;
}



/* Entry: 104fe13e0; end: 104fe13f7;  */

void FUN_104fe13e0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104fe13f8; end: 104fe142f;  */

void FUN_104fe13f8(long param_1,undefined8 param_2)

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



/* Entry: 104fe1430; end: 104fe14eb;  */

void FUN_104fe1430(void)

{
  return;
}



/* Entry: 104fe14ec; end: 104fe1613;  */

void FUN_104fe14ec(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b36c0;
  if ((((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) && (param_6 != 0)) {
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_alloc();
    func_0x00010bf885a0(param_6);
    uVar2 = param_1;
    _objc_release(param_6);
    func_0x00010bf885a0(param_7);
    _objc_release(param_7);
    func_0x00010c01b160(param_1,uVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104fe1614; end: 104fe163b;  */

void FUN_104fe1614(void)

{
  return;
}



/* Entry: 104fe163c; end: 104fe1673;  */

void FUN_104fe163c(long param_1,undefined8 param_2)

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



/* Entry: 104fe1674; end: 104fe171f; -[SCPlusPageLoggingContext initWithLoggingContext:funnelLoggingContext:] */

undefined1 *
FUN_104fe1674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5848;
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



/* Entry: 104fe1720; end: 104fe1743; -[SCPlusPageLoggingContext copyWithZone:] */

undefined8 FUN_104fe1720(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104fe1744; end: 104fe17b7; -[SCPlusPageLoggingContext hash] */

undefined8 * FUN_104fe1744(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_104fe1838:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104fe1844;
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
          goto LAB_104fe1844;
        }
        goto LAB_104fe1838;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104fe1844:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104fe17b8; end: 104fe185f; -[SCPlusPageLoggingContext isEqual:] */

long FUN_104fe17b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104fe1838:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104fe1844;
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
          goto LAB_104fe1844;
        }
        goto LAB_104fe1838;
      }
    }
    lVar3 = 0;
  }
LAB_104fe1844:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104fe1860; end: 104fe1867; -[SCPlusPageLoggingContext loggingContext] */

undefined8 FUN_104fe1860(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104fe1868; end: 104fe186f; -[SCPlusPageLoggingContext funnelLoggingContext] */

undefined8 FUN_104fe1868(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104fe1870; end: 104fe189f; -[SCPlusPageLoggingContext .cxx_destruct] */

void FUN_104fe1870(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fe18a0; end: 104fe19c3; -[SCCPlusCustomNotificationSoundsServiceImpl initWithConversationServices:conversationIdServices:temporaryFileWriterServices:performerProvider:featureSettingsService:] */

undefined1 *
FUN_104fe18a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e5850;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fe19c4; end: 104fe1bfb; -[SCCPlusCustomNotificationSoundsServiceImpl getProviderForUserWithUserId:soundType:isBestFriend:callback:] */

void FUN_104fe19c4(long param_1,undefined1 *param_2,long param_3,undefined4 param_4,
                  undefined1 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (param_6 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfcd0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_initWeak(auStack_78,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf50420();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b01c0;
    func_0x00010c294260();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    param_2 = auStack_78;
    _objc_copyWeak(auStack_88);
    _objc_retain(param_6);
    uStack_80 = param_4;
    uStack_7c = param_5;
    func_0x00010bf504e0(uVar1);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_78);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(param_2);
  ppuVar7 = (undefined **)(param_3 + 0x28);
  _objc_loadWeakRetained();
  if (ppuVar7 != (undefined **)0x0) {
    puVar8 = param_2;
    func_0x00010bf529e0();
    if (puVar8 == (undefined1 *)0x0) {
      lVar11 = *(long *)(param_3 + 0x20);
      ppuVar9 = &PTR____CFConstantStringClassReference_110dc1658;
      func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1658);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      func_0x000106c7758c();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar11 + 0x10))(lVar11,0,ppuVar10);
      _objc_release(ppuVar10);
    }
    else {
      puVar8 = param_2;
      func_0x00010bfb1920(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar7;
      func_0x00010be22cc0(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),ppuVar9,0);
    }
    _objc_release(ppuVar9);
  }
  _objc_release(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fe1bfc; end: 104fe1cff;  */

void FUN_104fe1bfc(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  _objc_retain(param_2);
  ppuVar1 = (undefined **)(param_1 + 0x28);
  _objc_loadWeakRetained();
  if (ppuVar1 != (undefined **)0x0) {
    lVar4 = param_2;
    func_0x00010bf529e0();
    if (lVar4 == 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      ppuVar2 = &PTR____CFConstantStringClassReference_110dc1658;
      func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1658);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      func_0x000106c7758c();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,0,ppuVar3);
      _objc_release(ppuVar3);
    }
    else {
      lVar4 = param_2;
      func_0x00010bfb1920(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar1;
      func_0x00010be22cc0(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),ppuVar2,0);
    }
    _objc_release(ppuVar2);
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fe1d00; end: 104fe1d7f; -[SCCPlusCustomNotificationSoundsServiceImpl getProviderForGroupWithGroupId:soundType:callback:] */

void FUN_104fe1d00(undefined8 param_1)

{
  long in_x4;
  
  if (in_x4 != 0) {
    _objc_retain(in_x4);
    func_0x00010be22cc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(in_x4 + 0x10))(in_x4,param_1,0);
    _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104fe1d80; end: 104fe1df7; -[SCCPlusCustomNotificationSoundsServiceImpl getProviderForGlobalSoundWithSoundType:callback:] */

void FUN_104fe1d80(void)

{
  undefined *puVar1;
  long in_x3;
  
  puVar1 = PTR_PTR_1126b36c8;
  if (in_x3 != 0) {
    _objc_retain(in_x3);
    _objc_alloc(puVar1);
    func_0x00010c051120();
    (**(code **)(in_x3 + 0x10))(in_x3,puVar1,0);
    _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104fe1df8; end: 104fe201f; -[SCCPlusCustomNotificationSoundsServiceImpl getSelectedSoundMetadataForUserWithUserId:soundType:callback:] */

void FUN_104fe1df8(long param_1,undefined **param_2,long param_3,undefined4 param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined **unaff_x28;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_5 != 0) {
    _objc_initWeak(&puStack_78,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfcd0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf50420(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b01c0;
    func_0x00010c294260();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_104fe2020;
    puStack_98 = &UNK_110861308;
    _objc_retain(param_5);
    param_2 = &puStack_78;
    lStack_90 = param_5;
    _objc_copyWeak(auStack_88);
    uStack_80 = param_4;
    func_0x00010bf504e0(uVar1);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_88);
    _objc_release(lStack_90);
    _objc_release(uVar2);
    _objc_destroyWeak(&puStack_78);
    unaff_x28 = &puStack_b0;
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x28 + 0x28));
  _objc_destroyWeak(&puStack_78);
  __Unwind_Resume();
  _objc_retain(param_2);
  ppuVar7 = param_2;
  func_0x00010bf529e0();
  if (ppuVar7 == (undefined **)0x0) {
    lVar9 = *(long *)(param_3 + 0x20);
    ppuVar7 = &PTR____CFConstantStringClassReference_110dc1658;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1658);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x000106c7758c();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar9 + 0x10))(lVar9,0,ppuVar8);
  }
  else {
    ppuVar7 = (undefined **)(param_3 + 0x28);
    _objc_loadWeakRetained(ppuVar7);
    ppuVar8 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be22700(ppuVar7);
  }
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fe2020; end: 104fe20e7;  */

void FUN_104fe2020(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  
  _objc_retain(param_2);
  ppuVar1 = param_2;
  func_0x00010bf529e0();
  if (ppuVar1 == (undefined **)0x0) {
    lVar3 = *(long *)(param_1 + 0x20);
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc1658;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1658);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x000106c7758c();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,0,ppuVar2);
  }
  else {
    ppuVar1 = (undefined **)(param_1 + 0x28);
    _objc_loadWeakRetained(ppuVar1);
    ppuVar2 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be22700(ppuVar1);
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fe20e8; end: 104fe20eb; -[SCCPlusCustomNotificationSoundsServiceImpl getSelectedSoundMetadataForGroupWithGroupId:soundType:callback:] */

void FUN_104fe20e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be22710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__getSelectedSoundMetadataForConv_112566360);
  return;
}



/* Entry: 104fe20ec; end: 104fe227b; -[SCCPlusCustomNotificationSoundsServiceImpl getSelectedGlobalSoundMetadataWithSoundType:callback:] */

void FUN_104fe20ec(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  puVar5 = PTR_PTR_1126b2a30;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 != 0) {
    if (param_3 == 1) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf61b00();
      func_0x00010c0df840(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf61b20(puVar5);
      _objc_release(puVar2);
      _objc_release(uVar1);
      puVar2 = PTR_PTR_1126b36d0;
      _objc_alloc(PTR_PTR_1126b36d0);
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b2a30;
      func_0x00010c09e660(PTR_PTR_1126b2a30);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b120(puVar2);
      (**(code **)(param_4 + 0x10))(param_4,puVar2,0);
      _objc_release(puVar2);
      _objc_release(puVar5);
    }
    else {
      if (param_3 != 0) goto LAB_104fe2260;
      ppuVar3 = &PTR____CFConstantStringClassReference_110dc1918;
      func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1918);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x000106c7758c();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,0,ppuVar4);
    }
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
  }
LAB_104fe2260:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104fe227c; end: 104fe2283; -[SCCPlusCustomNotificationSoundsServiceImpl isGlobalRingtoneEnabled] */

undefined8 FUN_104fe227c(void)

{
  return 1;
}



/* Entry: 104fe2284; end: 104fe236f; -[SCCPlusCustomNotificationSoundsServiceImpl _getSelectedSoundMetadataForConversationId:soundType:callback:] */

void FUN_104fe2284(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf50600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104fe2370;
  puStack_58 = &UNK_110861338;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_5);
  func_0x00010bfa5f80(uVar1,param_2,param_3,&puStack_70);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(param_5);
  return;
}



/* Entry: 104fe2370; end: 104fe243b;  */

void FUN_104fe2370(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    ppuVar2 = (undefined **)PTR_PTR_1126b35e8;
    func_0x00010bebe460(PTR_PTR_1126b35e8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),ppuVar2,0);
  }
  else {
    if (param_3 != 1) goto LAB_104fe2428;
    lVar3 = *(long *)(param_1 + 0x20);
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc1938;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1938);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar2;
    func_0x000106c7758c();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,0,ppuVar1);
    _objc_release(ppuVar1);
  }
  _objc_release(ppuVar2);
LAB_104fe2428:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fe243c; end: 104fe24d3; -[SCCPlusCustomNotificationSoundsServiceImpl _getSoundProviderForConversationId:soundType:isBestFriend:] */

void FUN_104fe243c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined *param_5)

{
  _objc_retain(param_3);
  if (param_4 == 1) {
    param_5 = PTR_PTR_1126b36e0;
    _objc_alloc(PTR_PTR_1126b36e0);
    func_0x00010c004d60();
  }
  else if (param_4 == 0) {
    param_5 = PTR_PTR_1126b36d8;
    _objc_alloc(PTR_PTR_1126b36d8);
    func_0x00010c004d80();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 104fe24d4; end: 104fe264f; +[SCCPlusCustomNotificationSoundsServiceImpl _soundMetadataFromConversation:soundType:] */

void FUN_104fe24d4(undefined8 param_1,undefined8 param_2,undefined *param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *unaff_x22;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b2a30;
  if (param_4 == 1) {
    puVar1 = param_3;
    func_0x00010bf61b60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf61b20(puVar2,param_2,puVar1);
    _objc_release(puVar1);
    unaff_x22 = PTR_PTR_1126b36d0;
    _objc_alloc(PTR_PTR_1126b36d0);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b2a30;
    func_0x00010c09e660(PTR_PTR_1126b2a30,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_4 != 0) goto LAB_104fe2630;
    puVar2 = param_3;
    func_0x00010bf619a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010c2827c0();
    if ((undefined *)0xc < puVar1) {
      puVar1 = (undefined *)0x0;
    }
    _objc_release(puVar2);
    unaff_x22 = PTR_PTR_1126b36d0;
    _objc_alloc(PTR_PTR_1126b36d0);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107fd4144(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c01b120(unaff_x22,param_2,puVar4,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_104fe2630:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  return;
}



/* Entry: 104fe2650; end: 104fe26a3; -[SCCPlusCustomNotificationSoundsServiceImpl .cxx_destruct] */

void FUN_104fe2650(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fe26a4; end: 104fe270b; +[SCPlusStoryViewedNotificationSettingsPlusStoryViewedNotificationSettings descriptor] */

void FUN_104fe26a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b9248 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a0f9f0,
                        &PTR____CFConstantStringClassReference_110dc1958,
                        &PTR_s_subscription_sup_story_viewed_no_1130bf0a0,&PTR_s_viewerId_1130bf0b8,
                        3,0x18,0x1c);
    puRam00000001136b9248 = puVar1;
  }
  return;
}



/* Entry: 104fe270c; end: 104fe2737; +[SCGrapheneAutocaptionsMetric deleteCount] */

void FUN_104fe270c(void)

{
  _objc_alloc(PTR_PTR_1126b36e8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fe2738; end: 104fe2763; +[SCGrapheneAutocaptionsMetric onboardingAccepted] */

void FUN_104fe2738(void)

{
  _objc_alloc(PTR_PTR_1126b36e8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fe2764; end: 104fe278f; +[SCGrapheneAutocaptionsMetric onboardingDeclined] */

void FUN_104fe2764(void)

{
  _objc_alloc(PTR_PTR_1126b36e8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fe2790; end: 104fe27bb; +[SCGrapheneAutocaptionsMetric transcriptionSuccess] */

void FUN_104fe2790(void)

{
  _objc_alloc(PTR_PTR_1126b36e8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fe27bc; end: 104fe27e7; +[SCGrapheneAutocaptionsMetric transcriptionFailure] */

void FUN_104fe27bc(void)

{
  _objc_alloc(PTR_PTR_1126b36e8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fe27e8; end: 104fe2813; +[SCGrapheneAutocaptionsMetric editOpenLatency] */

void FUN_104fe27e8(void)

{
  _objc_alloc(PTR_PTR_1126b36e8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fe2814; end: 104fe283f; +[SCGrapheneAutocaptionsMetric renderLatency] */

void FUN_104fe2814(void)

{
  _objc_alloc(PTR_PTR_1126b36e8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fe2840; end: 104fe286b; +[SCGrapheneAutocaptionsMetric transcriptionLatency] */

void FUN_104fe2840(void)

{
  _objc_alloc(PTR_PTR_1126b36e8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fe286c; end: 104fe290b; -[SCGrapheneAutocaptionsMetric description] */

void FUN_104fe286c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc1978;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dc1978,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e5858;
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



/* Entry: 104fe290c; end: 104fe2a93; -[SCGrapheneRegistry autocaptionsGraphene] */

void FUN_104fe290c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104fe2994;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b9258 != -1) {
    func_0x00010002a2fc(0x1136b9258,&puStack_48);
  }
  uVar1 = uRam00000001136b9250;
  _objc_retain(uRam00000001136b9250);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fe2a94; end: 104fe2b3f; -[SCAutoCaptionsEditCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104fe2a94(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e5860;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b36f0;
    func_0x00010bf8c560();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112718ff0;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104fe2b40; end: 104fe2b4f; -[SCAutoCaptionsEditCell beginEditing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe2b40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112718ff0),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 104fe2b50; end: 104fe2b6b; -[SCAutoCaptionsEditCell setText:index:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe2b50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + _DAT_112718ff4) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112718ff0),PTR_s_setText__1126625f0);
  return;
}



/* Entry: 104fe2b6c; end: 104fe2c37; -[SCAutoCaptionsEditCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe2b6c(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126e5860;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar3 = param_1 + -100.0;
  lVar2 = param_2;
  func_0x00010bf4dce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  func_0x00010c19f0e0(0x4049000000000000,0x402e000000000000,dVar3,param_1 + -30.0,
                      *(undefined8 *)(param_2 + _DAT_112718ff0));
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 104fe2c38; end: 104fe2cd7; +[SCAutoCaptionsEditCell sizeThatFits:text:] */

undefined1  [16]
FUN_104fe2c38(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             )

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR_PTR_1126b36f0;
  _objc_retain(param_5);
  func_0x00010bf8c560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_5);
  param_1 = param_1 + -100.0;
  param_2 = param_2 + -30.0;
  func_0x00010c23d5a0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  auVar2._8_8_ = param_2 + 30.0;
  auVar2._0_8_ = param_1 + 100.0;
  return auVar2;
}



/* Entry: 104fe2cd8; end: 104fe2d2f; -[SCAutoCaptionsEditCell textViewDidBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe2cd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112718ff8;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf8c200();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fe2d30; end: 104fe2d9f; -[SCAutoCaptionsEditCell textView:shouldChangeTextInRange:replacementText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104fe2d30(long param_1,undefined8 param_2)

{
  undefined8 in_x5;
  
  func_0x00010c0720c0(in_x5,param_2,&PTR____CFConstantStringClassReference_110db2db8);
  if ((uint)in_x5 != 0) {
    func_0x00010c13a0e0(*(undefined8 *)(param_1 + _DAT_112718ff0));
    param_1 = param_1 + _DAT_112718ff8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf8c240();
    _objc_release(param_1);
  }
  return (uint)in_x5 ^ 1;
}



/* Entry: 104fe2da0; end: 104fe2e2f; -[SCAutoCaptionsEditCell textViewDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe2da0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c069fa0(param_3);
  lVar1 = param_1 + _DAT_112718ff8;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112718ff4);
  uVar2 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf8c220(lVar1,param_2,uVar3,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104fe2e30; end: 104fe2e4f; -[SCAutoCaptionsEditCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe2e30(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112718ff8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fe2e50; end: 104fe2e63; -[SCAutoCaptionsEditCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe2e50(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112718ff8,param_3);
  return;
}



/* Entry: 104fe2e64; end: 104fe2e9f; -[SCAutoCaptionsEditCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe2e64(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112718ff8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718ff0,0);
  return;
}



/* Entry: 104fe2ea0; end: 104fe2f97; -[SCAutoCaptionsEditViewController initWithViewModel:performanceLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104fe2ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1c8300(0);
  func_0x00010c1c82c0(0,puVar1);
  puStack_48 = PTR_PTR_1126e5868;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithCollectionViewLayout__1125dd830,puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112718ffc;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_3;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112719000;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_4;
    _objc_release(uVar3);
    func_0x00010c1c8b80(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 104fe2f98; end: 104fe3233; -[SCAutoCaptionsEditViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe2f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126e5868;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  dVar5 = 0.6;
  puVar2 = puVar1;
  func_0x00010bf414e0(0x3fe3333333333333);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar4);
  _objc_release(puVar1);
  lVar4 = param_5;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7c0();
  _objc_release(lVar4);
  dVar5 = dVar5 + 100.0;
  lVar4 = param_5;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181f80(dVar5,param_2,param_3,param_4);
  _objc_release(lVar4);
  lVar4 = param_5;
  func_0x00010bf40120(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b36f8);
  func_0x00010c126000(lVar4);
  _objc_release(lVar4);
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  _objc_alloc();
  func_0x00010c013de0(0x4024000000000000,dVar5 + 10.0,0x4044000000000000,0x4044000000000000);
  lVar4 = (long)_DAT_112719004;
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  *(undefined **)(param_5 + lVar4) = puVar1;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar3);
  _objc_release(puVar1);
  func_0x00010befbd60(*(undefined8 *)(param_5 + lVar4));
  lVar4 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar4);
  uVar3 = *(undefined8 *)(param_5 + _DAT_112719000);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5540();
  _objc_release(uVar3);
  return;
}



/* Entry: 104fe3234; end: 104fe327f; -[SCAutoCaptionsEditViewController viewDidAppear:] */

void FUN_104fe3234(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5868;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bdd3480(param_1);
  return;
}



/* Entry: 104fe3280; end: 104fe32c7; -[SCAutoCaptionsEditViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fe3280(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112718ffc);
  func_0x00010c0fb840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104fe32c8; end: 104fe33b7; -[SCAutoCaptionsEditViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe32c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  func_0x00010bf6e0c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc1a98,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112718ffc);
  func_0x00010c0fb840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0840e0(param_4);
  uVar3 = uVar1;
  func_0x00010c0dfd40(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0fb800();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c0840e0(param_4);
  _objc_release(param_4);
  func_0x00010c212f80(param_3,param_2,uVar2,uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104fe33b8; end: 104fe34e7; -[SCAutoCaptionsEditViewController collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_104fe33b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_9);
  _objc_retain(param_7);
  func_0x00010bf20c00(param_7);
  uVar1 = *(undefined8 *)(param_5 + _DAT_112718ffc);
  uVar4 = param_3;
  func_0x00010c0fb840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_9;
  func_0x00010c0840e0(param_9);
  _objc_release(param_9);
  uVar3 = uVar1;
  func_0x00010c0dfd40(uVar1,param_6,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0fb800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = 0x7fefffffffffffff;
  func_0x00010c23d5c0(param_3,0x7fefffffffffffff,PTR_PTR_1126b36f8,param_6,uVar2);
  uVar3 = uVar1;
  func_0x00010bf20c00(param_7);
  _objc_release(param_7);
  _CGRectGetWidth(param_3,uVar3,uVar4,param_4);
  _objc_release(uVar2);
  auVar5._8_8_ = uVar1;
  auVar5._0_8_ = param_3;
  return auVar5;
}



/* Entry: 104fe34e8; end: 104fe351f; -[SCAutoCaptionsEditViewController editCellDidBeginEditingWithResponder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe34e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112719008);
  *(undefined8 *)(param_1 + _DAT_112719008) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fe3520; end: 104fe36a7; -[SCAutoCaptionsEditViewController editCellDidUpdateTextAtIndex:text:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe3520(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain(param_4);
  lVar8 = (long)_DAT_112718ffc;
  uVar1 = *(ulong *)(param_1 + lVar8);
  func_0x00010c0fb840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (param_3 < uVar2) {
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c0fb840(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0d3c80();
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126b3700;
    _objc_alloc(PTR_PTR_1126b3700);
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c0fb840(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2510e0();
    func_0x00010c035e60(puVar5,param_2,param_4);
    _objc_release(uVar3);
    _objc_release(uVar6);
    func_0x00010c130f40(uVar4,param_2,param_3,puVar5);
    puVar7 = PTR_PTR_1126b3708;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c27a460(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c035ea0(puVar7,param_2,uVar4,uVar3);
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar7;
    _objc_release(uVar6);
    _objc_release(uVar3);
    func_0x00010bf408e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069fe0();
    _objc_release(param_1);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104fe36a8; end: 104fe36ab; -[SCAutoCaptionsEditViewController editCellWantsToDismissEditViewController] */

void FUN_104fe36a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismiss_11255e238);
  return;
}



/* Entry: 104fe36ac; end: 104fe37ab; -[SCAutoCaptionsEditViewController _beginEditingCellAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe36ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  
  uVar1 = *(ulong *)(param_1 + (long)_DAT_112718ffc);
  func_0x00010c0fb840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (param_3 < uVar2) {
    puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
    func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf40120();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf33b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar4 = PTR_PTR_1126b36f8;
    _objc_opt_class(PTR_PTR_1126b36f8);
    uVar5 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar4);
    uVar2 = uVar1;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar1);
    func_0x00010bf17fe0(uVar2);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 104fe37ac; end: 104fe37af; -[SCAutoCaptionsEditViewController _didTapBack] */

void FUN_104fe37ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismiss_11255e238);
  return;
}



/* Entry: 104fe37b0; end: 104fe381b; -[SCAutoCaptionsEditViewController _dismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe37b0(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112719008;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010bf2d440();
  if (iVar1 != 0) {
    func_0x00010c13a0e0(*(undefined8 *)(param_1 + lVar2));
  }
  param_1 = param_1 + _DAT_11271900c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf83800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fe381c; end: 104fe383b; -[SCAutoCaptionsEditViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe381c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271900c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104fe383c; end: 104fe384f; -[SCAutoCaptionsEditViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe383c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271900c,param_3);
  return;
}



/* Entry: 104fe3850; end: 104fe38bb; -[SCAutoCaptionsEditViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fe3850(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271900c);
  _objc_storeStrong(param_1 + _DAT_112719008,0);
  _objc_storeStrong(param_1 + _DAT_112719004,0);
  _objc_storeStrong(param_1 + _DAT_112719000,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718ffc,0);
  return;
}



/* Entry: 104fe38bc; end: 104fe38c7; -[SCFeatureSettingsService hasAcceptedAutoCaptionsOnboarding] */

void FUN_104fe38bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dc1ad8);
  return;
}



/* Entry: 104fe38c8; end: 104fe38d3; -[SCFeatureSettingsService acceptedAutoCaptionsOnboardingServerParam] */

undefined ** FUN_104fe38c8(void)

{
  return &PTR____CFConstantStringClassReference_110dc1ad8;
}



/* Entry: 104fe38d4; end: 104fe38e3; -[SCFeatureSettingsService setAcceptedAutoCaptionsOnboarding:] */

void FUN_104fe38d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110dc1ad8,param_3);
  return;
}



/* Entry: 104fe38e4; end: 104fe38eb; -[SCFeatureSettingsService auto_captions_onboarding_prompt_accepted_client_value:] */

undefined * FUN_104fe38e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 104fe38ec; end: 104fe38f3; -[SCFeatureSettingsService auto_captions_onboarding_prompt_accepted_server_value:] */

void FUN_104fe38ec(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104fe38f4; end: 104fe3903; -[SCFeatureSettingsService acceptedAutoCaptionsOnboarding] */

void FUN_104fe38f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110dc1ad8,0);
  return;
}



/* Entry: 104fe3904; end: 104fe3c53; -[SCAutoCaptionsWorkflow initWithAutoCaptionsScope:aSRServices:featureSettingsServices:autoCaptionsHelperServices:loggingServices:] */

undefined8 *
FUN_104fe3904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_80 = PTR_PTR_1126e5870;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
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
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    uVar4 = puVar1[1];
    func_0x00010bf11420(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c269220();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_104fe3c54;
    puStack_a0 = &UNK_110857468;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar5 = puVar1[1];
    func_0x00010bf9a080(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_104fe3c80;
    puStack_c8 = &UNK_110861398;
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar2 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = puVar1[1];
    func_0x00010bf0bb80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e8,auStack_90);
    uVar2 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104fe3c54; end: 104fe3c7f;  */

void FUN_104fe3c54(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fe3c80; end: 104fe3dab;  */

void FUN_104fe3c80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104fe3dac;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x104fe3dd8;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  func_0x00010c0bd980(param_2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 104fe3dac; end: 104fe3e03;  */

void FUN_104fe3dac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fe3e04; end: 104fe3ebf;  */

void FUN_104fe3e04(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104fe3ec0;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104fe3ec0; end: 104fe3f4b;  */

void FUN_104fe3ec0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fe3f4c; end: 104fe3fdf; -[SCAutoCaptionsWorkflow dismissEditViewController:updatedViewModel:] */

void FUN_104fe3f4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27ece0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c130620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e060();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fe3fe0; end: 104fe408b; -[SCAutoCaptionsWorkflow _handleButtonTap] */

void FUN_104fe3fe0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x38) == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be93cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetState_1125828d0);
    return;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x18);
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010beecba0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__begin_1125525c8);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010be7cf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentOnboardingPrompt_11257cd60);
    return;
  }
  return;
}



/* Entry: 104fe408c; end: 104fe430b; -[SCAutoCaptionsWorkflow _presentOnboardingPrompt] */

void FUN_104fe408c(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_80;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000104fe5aa8();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104fe430c;
  puStack_90 = &UNK_1108482a8;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000104fe5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = puVar4;
  func_0x000104fe5a90();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar2;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c4e0(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27ece0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  puVar1 = auStack_80;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume(puVar1);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be2d3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fe430c; end: 104fe4363;  */

void FUN_104fe430c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fe4364; end: 104fe4457; -[SCAutoCaptionsWorkflow _handleOnboardingAccept] */

void FUN_104fe4364(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f9760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab5e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfa2b80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160ce0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27ece0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
  return;
}



/* Entry: 104fe4458; end: 104fe445f;  */

void FUN_104fe4458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__begin_1125525c8);
  return;
}



/* Entry: 104fe4460; end: 104fe44e3; -[SCAutoCaptionsWorkflow _handleOnboardingCancel] */

void FUN_104fe4460(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f9760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab600();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010be93cc0(param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27ece0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104fe44e4; end: 104fe4603; -[SCAutoCaptionsWorkflow _begin] */

void FUN_104fe44e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x50) != 0) {
    *(undefined8 *)(param_1 + 0x38) = 1;
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf11420(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174a40();
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0f9760(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b1e80();
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010be0f0a0(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 104fe4604; end: 104fe464b;  */

void FUN_104fe4604(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2cc00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fe464c; end: 104fe49ef; -[SCAutoCaptionsWorkflow _fetchASROutputWithVideoAssets:completion:] */

void FUN_104fe464c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_1f8 [8];
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [136];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1c0 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar10 = PTR_PTR_1126b3710;
  _objc_alloc();
  func_0x00010c04a740();
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c1602c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  puStack_1b8 = puVar10;
  func_0x00010bf189e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1b0 = uVar5;
  _objc_release(uVar9);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ae810;
  _objc_alloc_init();
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar3;
  _objc_release(uVar9);
  _objc_initWeak(auStack_108,param_1);
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_104fe49f0;
  puStack_120 = &UNK_110861428;
  puVar8 = auStack_108;
  _objc_copyWeak(auStack_110,puVar8);
  _objc_retain(param_4);
  uVar9 = uStack_1b0;
  uStack_118 = param_4;
  func_0x00010c25ff60(uStack_1b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar9);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  puStack_170 = (undefined8 *)0x0;
  lVar12 = *(long *)(param_1 + 0x50);
  _objc_retain(lVar12);
  lVar4 = lVar12;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    puVar10 = (undefined *)*puStack_170;
    do {
      lVar11 = 0;
      do {
        if ((undefined *)*puStack_170 != puVar10) {
          _objc_enumerationMutation(lVar12);
        }
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf0ed40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar5;
        func_0x00010bf9ebe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        func_0x00010befa120(puVar3);
        _objc_release(uVar9);
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      lVar4 = lVar12;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar12);
  puVar6 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_104fe4b14;
  puStack_190 = &UNK_11085c638;
  puVar7 = puVar1;
  _objc_retain(puVar1);
  puStack_188 = puVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar6);
  _objc_release(puVar7);
  _objc_release(puStack_188);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(uStack_118);
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  _objc_release(uStack_1b0);
  _objc_release(puVar1);
  _objc_release(puStack_1b8);
  _objc_release(param_4);
  lVar4 = lStack_1c0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_110);
  _objc_destroyWeak(auStack_108);
  lVar12 = lVar4;
  __Unwind_Resume();
  pcStack_1c8 = FUN_104fe49f0;
  puStack_1f0 = puVar1;
  puStack_1e8 = puVar10;
  uStack_1e0 = param_4;
  lStack_1d8 = lVar4;
  puStack_1d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  _objc_copyWeak(auStack_1f8,lVar12 + 0x28);
  uVar9 = *(undefined8 *)(lVar12 + 0x20);
  _objc_retain(uVar9);
  func_0x00010c0bf300(puVar8);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_1f8);
  _objc_release(puVar8);
  return;
}



/* Entry: 104fe49f0; end: 104fe4aaf;  */

void FUN_104fe49f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0bf300(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104fe4ab0; end: 104fe4b13;  */

void FUN_104fe4ab0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf86d80(*(undefined8 *)(lVar1 + 0x48));
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fe4b14; end: 104fe4c53;  */

void FUN_104fe4b14(long param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined8 *)param_3;
  _objc_retain(param_2);
  if (param_3 == (undefined1 *)0x0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar1 = param_2;
    func_0x00010bf52a60();
    puVar3 = puVar4;
    if (lVar1 != 0) {
      lVar6 = *plStack_110;
      do {
        lVar7 = 0;
        do {
          if (*plStack_110 != lVar6) {
            _objc_enumerationMutation(param_2);
          }
          lVar5 = *(long *)(lStack_118 + lVar7 * 8);
          func_0x00010c08fa60();
          if (lVar5 != 0) {
            puVar2 = PTR_PTR_1126b3718;
            _objc_alloc(PTR_PTR_1126b3718);
            func_0x00010bff5240();
            func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
            _objc_release(puVar2);
          }
          lVar7 = lVar7 + 1;
        } while (lVar1 != lVar7);
        lVar1 = param_2;
        puVar3 = &uStack_120;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
  }
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  lVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_104fe4c54;
  lStack_140 = param_1;
  lStack_138 = param_2;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_104fe4cdc;
  puStack_158 = &UNK_110841f80;
  lStack_150 = lVar1;
  puStack_148 = (undefined1 *)puVar3;
  _objc_retain(puVar3);
  func_0x000100162d98("APPSTORE",&puStack_170);
  _objc_release(puStack_148);
  _objc_release(puVar3);
  return;
}



/* Entry: 104fe4c54; end: 104fe4cdb; -[SCAutoCaptionsWorkflow _handleNetworkFetchCompleteWithASROutput:] */

void FUN_104fe4c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_40 = FUN_104fe4cdc;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104fe4cdc; end: 104fe4f33;  */

void FUN_104fe4cdc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104fe4f34;
  uStack_40 = 0x104fe4f44;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_104fe4f34;
  uStack_70 = 0x104fe4f44;
  uStack_68 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_104fe4f34;
  uStack_a0 = 0x104fe4f44;
  uStack_98 = 0;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0f9760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1e60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c0c0800(*(undefined8 *)(param_1 + 0x28));
  lVar3 = puStack_88[5];
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    if (puStack_b8[5] == 0) {
      func_0x00010bf529e0(puStack_88[5]);
    }
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
    func_0x00010c0f9760(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b1e40();
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010be28fa0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
    func_0x00010c0f9760(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b1ea0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010be2cc20(*(undefined8 *)(param_1 + 0x20));
  }
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  return;
}



/* Entry: 104fe4f34; end: 104fe4f4b;  */

void FUN_104fe4f34(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104fe4f4c; end: 104fe4fbf;  */

void FUN_104fe4f4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104fe4fc0; end: 104fe4ff7;  */

void FUN_104fe4fc0(long param_1,undefined8 param_2)

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



/* Entry: 104fe4ff8; end: 104fe51bf; -[SCAutoCaptionsWorkflow _handleNetworkFetchSuccessWithFullTranscription:ASRTokenLattice:] */

void FUN_104fe4ff8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(undefined8 *)(param_1 + 0x38) = 2;
  uVar8 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf11420(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174a40();
  _objc_release(uVar8);
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c087ec0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_11117e520;
  func_0x00010bf4b900(&PTR__OBJC_CLASS___NSConstantArray_11117e520,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar4 = param_1;
  func_0x00010be5cfe0(param_1,param_2,param_4,param_3,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126b3720;
  _objc_alloc(PTR_PTR_1126b3720);
  func_0x00010c0554e0(0x3fe0000000000000,0x3fe0000000000000,0,0x3ff0000000000000);
  puVar2 = PTR_PTR_1126b3728;
  _objc_alloc(PTR_PTR_1126b3728);
  func_0x00010c053ee0();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f9760(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010c0ae100(uVar8);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c130620();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c12f760();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x00010c0ae0c0(uVar8);
  _objc_release(uVar8);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 104fe51c0; end: 104fe523f; -[SCAutoCaptionsWorkflow _handleErrorState] */

void FUN_104fe51c0(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf11420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174a40();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c130620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf74640();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c130620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf78fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fe5240; end: 104fe5313; -[SCAutoCaptionsWorkflow _handleEditEvent] */

void FUN_104fe5240(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f9760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a5560();
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b3730;
  _objc_alloc(PTR_PTR_1126b3730);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f9760(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061e40(puVar2,param_2,uVar1,uVar3);
  _objc_release(uVar3);
  func_0x00010c18b5e0(puVar2,param_2,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c27ece0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104fe5314; end: 104fe5373; -[SCAutoCaptionsWorkflow _handleDeleteEvent] */

void FUN_104fe5314(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0f9760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4d80();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be93cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetState_1125828d0);
  return;
}


