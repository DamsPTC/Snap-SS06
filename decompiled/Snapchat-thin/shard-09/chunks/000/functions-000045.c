/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106894d24; end: 106894e0b; -[SCContinueUserActivityHandlerLockedCameraExtensionPlugin processEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106894d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  _objc_retain(param_3);
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c267460();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf433c0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar3 == (undefined *)0xffffffffffffffff) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar5 = *(undefined ***)PTR__NSUserActivityTypeLockedCameraCapture_11034b190;
    _objc_retain(ppuVar5);
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_112752624);
  func_0x00010c1149a0(uVar4,param_2,param_3,ppuVar5,0x6e,1);
  _objc_release(param_3);
  _objc_release(ppuVar5);
  return uVar4;
}



/* Entry: 106894e0c; end: 106894e1f; -[SCContinueUserActivityHandlerLockedCameraExtensionPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106894e0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112752624,0);
  return;
}



/* Entry: 106894e20; end: 106894ef7; -[SCContinueUserActivityHandlerPluginProcessor processEvent:activityType:source:fromExternal:] */

undefined8 FUN_106894e20(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSUserActivity_1126b27c0;
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c2a4680(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1149e0(param_1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106894ef8; end: 1068952bf; -[SCContinueUserActivityHandlerPluginProcessor processEvent:url:activityType:source:fromExternal:] */

ulong FUN_106894ef8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSUserActivity_1126b27c0;
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
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f83a98;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110f83d78;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_78 = param_5;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar2;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar5);
  uVar3 = uVar1;
  func_0x00010c124fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar3 = uVar1;
    func_0x00010c124fe0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(uVar6);
    _objc_release(uVar3);
  }
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_1068952c0;
  uStack_98 = 0x1068952d0;
  uStack_90 = 0;
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1c80();
  _objc_release(uVar7);
  if (puStack_b0[5] == 0) {
    puVar5 = PTR_PTR_1126b6300;
    func_0x00010bf9ff00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puStack_b0[5];
    puStack_b0[5] = puVar5;
    _objc_release(uVar7);
  }
  puVar5 = PTR_PTR_1126aec70;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bf777e0();
  _objc_release(puVar5);
  if (((ulong)puVar8 & 1) == 0) {
    puVar5 = PTR_PTR_1126aec70;
    func_0x00010c22ba80(PTR_PTR_1126aec70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1aa0();
    _objc_release(puVar5);
  }
  puVar5 = PTR_PTR_1126b6a80;
  _objc_alloc(PTR_PTR_1126b6a80);
  func_0x00010c059ec0();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar5);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return 1;
  }
  ___stack_chk_fail();
  lVar9 = 8;
  __Block_object_dispose(&uStack_b8);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = 0;
  return param_3;
}



/* Entry: 1068952c0; end: 1068952d7;  */

void FUN_1068952c0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1068952d8; end: 10689530f;  */

void FUN_1068952d8(long param_1,undefined8 param_2)

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



/* Entry: 106895310; end: 10689533f; -[SCContinueUserActivityHandlerPluginProcessor .cxx_destruct] */

void FUN_106895310(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106895340; end: 106895347; -[SCContinueUserActivityHandlerSystemSearchPlugin uniquePluginType] */

undefined8 FUN_106895340(void)

{
  return 3;
}



/* Entry: 106895348; end: 106895523; -[SCContinueUserActivityHandlerSystemSearchPlugin processEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106895348(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_3);
  puVar8 = PTR__OBJC_CLASS___NSUserActivity_1126b27c0;
  _objc_opt_class(PTR__OBJC_CLASS___NSUserActivity_1126b27c0);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar8);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = uVar1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar8);
  uVar2 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  if (uVar2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = puVar8;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 != (undefined *)0x0) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110dd3c78;
    puVar6 = puVar8;
    func_0x00010c1504a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf32ee0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    if (ppuVar9 == (undefined **)0x0) {
      puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf07b60();
      _objc_release(puVar5);
      uVar7 = *(undefined8 *)(param_1 + _DAT_112752630);
      func_0x00010c1149e0(uVar7);
      goto LAB_1068954e8;
    }
  }
  uVar7 = 3;
LAB_1068954e8:
  _objc_release(puVar8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 106895524; end: 106895537; -[SCContinueUserActivityHandlerSystemSearchPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106895524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112752630,0);
  return;
}



/* Entry: 106895538; end: 10689561f; -[SCDeepLinkHandlingAuthenticatedImpl initWithDeepLinkHandlingScopeExposer:snapRecoveryServices:deepLinkHandlingProcedureScopeServices:] */

undefined1 *
FUN_106895538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f3a08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ce968;
    _objc_alloc();
    func_0x00010c009b20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106895620; end: 106895627; -[SCDeepLinkHandlingAuthenticatedImpl isValidInternalDeepLinkURL:] */

void FUN_106895620(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c082db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_isValidInternalDeepLinkURL__1125fe578);
  return;
}



/* Entry: 106895628; end: 10689563f; -[SCDeepLinkHandlingAuthenticatedImpl handleOpenURL:additionalInfo:source:completion:] */

void FUN_106895628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_handleOpenURL_sourceApplication__1125d20c8,param_3,0,param_4,0,param_5,
             param_6);
  return;
}



/* Entry: 106895640; end: 1068956ff; -[SCDeepLinkHandlingAuthenticatedImpl handleOpenURL:sourceApplication:additionalInfo:fromExternal:source:completion:] */

void FUN_106895640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_58 [8];
  
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _arc4random_buf(auStack_58,8);
  func_0x00010bfd1ca0(param_1);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106895700; end: 106895723; -[SCDeepLinkHandlingAuthenticatedImpl handleOpenURL:sourceApplication:additionalInfo:fromExternal:source:handlingId:completion:] */

void FUN_106895700(void)

{
  func_0x00010bfd1cc0();
  return;
}



/* Entry: 106895724; end: 1068957d7; -[SCDeepLinkHandlingAuthenticatedImpl handleOpenURL:additionalInfo:source:onDestinationReached:completion:] */

void FUN_106895724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_48 [8];
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _arc4random_buf(auStack_48,8);
  func_0x00010bfd1cc0(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068957d8; end: 1068959ef; -[SCDeepLinkHandlingAuthenticatedImpl handleOpenURL:sourceApplication:additionalInfo:fromExternal:source:handlingId:onDestinationReached:completion:] */

void FUN_1068957d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c242aa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf3a660();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_80 = param_7;
  uStack_78 = param_8;
  uStack_70 = param_6;
  _objc_retain(param_9);
  uVar4 = param_10;
  _objc_retain(param_10);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068959f0; end: 106895a47;  */

void FUN_1068959f0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bfd1cc0(*(undefined8 *)(lVar1 + 8),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined1 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x50),
                        *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x40));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106895a48; end: 106895b27; -[SCDeepLinkHandlingAuthenticatedImpl didHandleOpenURLWithResult:handlingId:] */

void FUN_106895a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106895b28;
  puStack_58 = &UNK_110842a68;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_40 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106895b28; end: 106895b5f;  */

void FUN_106895b28(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106895b60; end: 106895b67; -[SCDeepLinkHandlingAuthenticatedImpl didValidateDeepLinkWithResult:handlingId:] */

void FUN_106895b60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd30f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_handleValidationResult_handlingI_1125d25e0);
  return;
}



/* Entry: 106895b68; end: 106895c47; -[SCDeepLinkHandlingAuthenticatedImpl didReachDeepLinkDestinationWithError:handlingId:] */

void FUN_106895b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106895c48;
  puStack_58 = &UNK_110842a68;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_40 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106895c48; end: 106895c7f;  */

void FUN_106895c48(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106895c80; end: 106895d07; -[SCDeepLinkHandlingAuthenticatedImpl createScopeWithRequest:handlingProcedureDelegate:] */

void FUN_106895c80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001004f22a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf22060(uVar2,param_2,param_3,uVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106895d08; end: 106895d0f; -[SCDeepLinkHandlingAuthenticatedImpl _didHandleOpenURLWithResult:handlingId:] */

void FUN_106895d08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_handleHandlingResult_handlingId__1125d1e80);
  return;
}



/* Entry: 106895d10; end: 106895d17; -[SCDeepLinkHandlingAuthenticatedImpl _didReachDeepLinkDestinationWithError:handlingId:] */

void FUN_106895d10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_handleDestinationOutcomeWithErro_1125d1cf0);
  return;
}



/* Entry: 106895d18; end: 106895d53; -[SCDeepLinkHandlingAuthenticatedImpl .cxx_destruct] */

void FUN_106895d18(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106895d54; end: 106895e83; -[SCDeepLinkHandlingCommonImpl initWithDeepLinkHandlingScopeExposer:scopeCreationDelegate:handlingProcedureWithHandlingIdDelegate:isLoggedIn:] */

undefined1 *
FUN_106895d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f3a10;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106895e84; end: 106895f23; -[SCDeepLinkHandlingCommonImpl isValidInternalDeepLinkURL:] */

undefined8 FUN_106895e84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _arc4random_buf(auStack_38,8);
  puVar1 = PTR_PTR_1126ce970;
  func_0x00010c296940(PTR_PTR_1126ce970);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010becfd80(param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1f3c0(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar3);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 106895f24; end: 106896053; -[SCDeepLinkHandlingCommonImpl handleOpenURL:sourceApplication:additionalInfo:fromExternal:source:handlingId:completion:] */

void FUN_106895f24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf51e00(param_9);
  uVar1 = param_9;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_2,uVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_9);
  puVar2 = PTR_PTR_1126ce970;
  func_0x00010bfd1d20(PTR_PTR_1126ce970,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010becfd80(param_1,param_2,puVar2,param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106896054; end: 106896193; -[SCDeepLinkHandlingCommonImpl handleOpenURL:sourceApplication:additionalInfo:fromExternal:source:handlingId:onDestinationReached:completion:] */

void FUN_106896054(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_10);
  if (param_9 != 0) {
    func_0x00010bf51e00();
    lVar1 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_8);
    _objc_retainAutoreleasedReturnValue();
    param_6 = param_6 & 0xffffffff;
    func_0x00010c1d0640(uVar3,param_2,lVar1,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
    _objc_release(param_9);
  }
  func_0x00010bfd1ca0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10);
  _objc_release(param_10);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106896194; end: 106896277; -[SCDeepLinkHandlingCommonImpl handleHandlingResult:handlingId:] */

void FUN_106896194(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x30);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  func_0x00010bddf240(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106896278; end: 106896343; -[SCDeepLinkHandlingCommonImpl handleDestinationOutcomeWithError:handlingId:] */

void FUN_106896278(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x38);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar3);
    _objc_release(puVar1);
    (**(code **)(lVar2 + 0x10))(lVar2,param_3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106896344; end: 10689638f; -[SCDeepLinkHandlingCommonImpl handleValidationResult:handlingId:] */

void FUN_106896344(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bddf240(param_1,param_2,param_4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106896390; end: 1068964c7; -[SCDeepLinkHandlingCommonImpl _triggerProcedureWithRequest:handlingId:] */

void FUN_106896390(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126ce978;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c019aa0(puVar1,param_2,param_4,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf58a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar5,param_2,lVar3,puVar4);
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar5,param_2,puVar1,puVar4);
  _objc_release(puVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,lVar3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1068964c8; end: 106896667; -[SCDeepLinkHandlingCommonImpl _cleanUpScopeWithHandlingId:] */

void FUN_1068964c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0x40);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e1e0(uVar3,param_2,uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar4,param_2,puVar1);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar4,param_2,puVar1);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar4,param_2,puVar1);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar4,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106896668; end: 10689666f; -[SCDeepLinkHandlingCommonImpl handlingIdToCompletionBlock] */

undefined8 FUN_106896668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106896670; end: 106896677; -[SCDeepLinkHandlingCommonImpl handlingIdToDestinationBlock] */

undefined8 FUN_106896670(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106896678; end: 10689667f; -[SCDeepLinkHandlingCommonImpl handlingIdToScopes] */

undefined8 FUN_106896678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106896680; end: 106896687; -[SCDeepLinkHandlingCommonImpl handlingIdToHandlingProcedureDelegates] */

undefined8 FUN_106896680(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106896688; end: 1068966f7; -[SCDeepLinkHandlingCommonImpl .cxx_destruct] */

void FUN_106896688(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068966f8; end: 106896773; -[SCDeepLinkHandlingProcedureDelegateImpl initWithHandlingId:delegate:] */

undefined1 *
FUN_1068966f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3a18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106896774; end: 1068967c7; -[SCDeepLinkHandlingProcedureDelegateImpl didHandleOpenURLWithResult:] */

void FUN_106896774(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf772e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068967c8; end: 10689680b; -[SCDeepLinkHandlingProcedureDelegateImpl didValidateDeepLinkWithResult:] */

void FUN_1068967c8(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7eac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10689680c; end: 106896887; -[SCDeepLinkHandlingProcedureDelegateImpl didReachDeepLinkDestinationWithError:] */

void FUN_10689680c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf78e00();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106896888; end: 10689688f; -[SCDeepLinkHandlingProcedureDelegateImpl .cxx_destruct] */

void FUN_106896888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 106896890; end: 106896a07;  */

undefined1 * FUN_106896890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *unaff_x22;
  undefined1 *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined1 *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  ppuVar6 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,param_1,0);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar2 = puVar1;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_e8;
  uVar8 = 0x10;
  puVar12 = puVar2;
  func_0x00010bf52a60();
  if (puVar12 != (undefined *)0x0) {
    lVar11 = *plStack_120;
    unaff_x22 = puVar12;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(puVar2);
        }
        puVar10 = *(undefined1 **)(lStack_128 + (long)puVar12 * 8);
        puVar3 = puVar10;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        ppuVar6 = &PTR____CFConstantStringClassReference_110db6af8;
        func_0x00010c0720c0();
        _objc_release(puVar3);
        if (((ulong)puVar4 & 1) != 0) {
          func_0x00010c296d80();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1068969b8;
        }
        puVar12 = puVar12 + 1;
      } while (unaff_x22 != puVar12);
      puVar7 = auStack_e8;
      uVar8 = 0x10;
      unaff_x22 = puVar2;
      ppuVar6 = &puStack_130;
      func_0x00010bf52a60();
    } while (unaff_x22 != (undefined *)0x0);
  }
  puVar10 = (undefined1 *)0x0;
LAB_1068969b8:
  _objc_release(puVar2);
  puVar12 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_170;
  pcStack_138 = FUN_106896a08;
  puStack_160 = unaff_x22;
  puStack_158 = puVar10;
  puStack_150 = puVar2;
  puStack_148 = puVar1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar6);
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  puStack_168 = PTR_PTR_1126f3a20;
  puStack_170 = puVar12;
  _objc_msgSendSuper2(&puStack_170,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    puVar1 = PTR_PTR_1126ce968;
    _objc_alloc();
    func_0x00010c009b20();
    uVar9 = *(undefined8 *)((long)ppuVar5 + 0x10);
    *(undefined **)((long)ppuVar5 + 0x10) = puVar1;
    _objc_release(uVar9);
    _objc_retain(puVar7);
    uVar9 = *(undefined8 *)((long)ppuVar5 + 8);
    *(undefined1 **)((long)ppuVar5 + 8) = puVar7;
    _objc_release(uVar9);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)((long)ppuVar5 + 0x18);
    *(undefined8 *)((long)ppuVar5 + 0x18) = uVar8;
    _objc_release(uVar9);
  }
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  return (undefined1 *)ppuVar5;
}



/* Entry: 106896a08; end: 106896aef; -[SCDeepLinkHandlingUnauthenticatedImpl initWithDeepLinkHandlingScopeExposer:deferredDeepLinkStore:tivNonceServices:] */

undefined1 *
FUN_106896a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f3a20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ce968;
    _objc_alloc();
    func_0x00010c009b20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106896af0; end: 106896af7; -[SCDeepLinkHandlingUnauthenticatedImpl isValidInternalDeepLinkURL:] */

void FUN_106896af0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c082db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_isValidInternalDeepLinkURL__1125fe578);
  return;
}



/* Entry: 106896af8; end: 106896b0f; -[SCDeepLinkHandlingUnauthenticatedImpl handleOpenURL:additionalInfo:source:completion:] */

void FUN_106896af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_handleOpenURL_sourceApplication__1125d20c8,param_3,0,param_4,0,param_5,
             param_6);
  return;
}



/* Entry: 106896b10; end: 106896b33; -[SCDeepLinkHandlingUnauthenticatedImpl handleOpenURL:sourceApplication:additionalInfo:fromExternal:source:completion:] */

void FUN_106896b10(void)

{
  func_0x00010bfd1ce0();
  return;
}



/* Entry: 106896b34; end: 106896b6b; -[SCDeepLinkHandlingUnauthenticatedImpl handleOpenURL:additionalInfo:source:onDestinationReached:completion:] */

void FUN_106896b34(void)

{
  func_0x00010bfd1ce0();
  return;
}



/* Entry: 106896b6c; end: 106896c7b; -[SCDeepLinkHandlingUnauthenticatedImpl handleOpenURL:sourceApplication:additionalInfo:fromExternal:source:onDestinationReached:completion:] */

void FUN_106896b6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _arc4random_buf(&uStack_68,8);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uStack_68;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  func_0x00010bfd1cc0(*(undefined8 *)(param_1 + 0x10));
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106896c7c; end: 106896d17; -[SCDeepLinkHandlingUnauthenticatedImpl handleOpenURL:sourceApplication:additionalInfo:fromExternal:source:handlingId:completion:] */

void FUN_106896c7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long in_stack_00000000;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(in_stack_00000000);
  func_0x00010bf99260(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6300;
  func_0x00010bf9ff00(PTR_PTR_1126b6300);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(in_stack_00000000 + 0x10))(in_stack_00000000,puVar2);
  _objc_release(in_stack_00000000);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106896d18; end: 106896df7; -[SCDeepLinkHandlingUnauthenticatedImpl didHandleOpenURLWithResult:handlingId:] */

void FUN_106896d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106896df8;
  puStack_58 = &UNK_110842a68;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_40 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106896df8; end: 106896e2f;  */

void FUN_106896df8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106896e30; end: 106896f0f; -[SCDeepLinkHandlingUnauthenticatedImpl didReachDeepLinkDestinationWithError:handlingId:] */

void FUN_106896e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106896f10;
  puStack_58 = &UNK_110842a68;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_40 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106896f10; end: 106896f47;  */

void FUN_106896f10(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106896f48; end: 106896f4f; -[SCDeepLinkHandlingUnauthenticatedImpl didValidateDeepLinkWithResult:handlingId:] */

void FUN_106896f48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd30f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_handleValidationResult_handlingI_1125d25e0);
  return;
}



/* Entry: 106896f50; end: 106896fdf; -[SCDeepLinkHandlingUnauthenticatedImpl createScopeWithRequest:handlingProcedureDelegate:] */

void FUN_106896f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ce980;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = puVar1;
  func_0x0001004f22a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03eca0(puVar1,param_2,param_3,puVar2,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106896fe0; end: 10689706b; -[SCDeepLinkHandlingUnauthenticatedImpl _storeDeferredDeepLinkWithURL:sourceApplication:handlingId:] */

void FUN_106896fe0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ce988;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c009c80();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c2576c0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10689706c; end: 106897127; -[SCDeepLinkHandlingUnauthenticatedImpl _didHandleOpenURLWithResult:handlingId:] */

void FUN_10689706c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) == param_4) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106897128;
    puStack_48 = &UNK_110946228;
    lStack_40 = param_1;
    lStack_38 = param_4;
    func_0x00010c0be280(param_3,param_2,0,&puStack_60,0,0);
  }
  func_0x00010bfd1360(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106897128; end: 10689718b;  */

void FUN_106897128(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bec3f20(uVar1);
  func_0x00010be32600(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10689718c; end: 106897193; -[SCDeepLinkHandlingUnauthenticatedImpl _didReachDeepLinkDestinationWithError:handlingId:] */

void FUN_10689718c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_handleDestinationOutcomeWithErro_1125d1cf0);
  return;
}



/* Entry: 106897194; end: 1068971ef; -[SCDeepLinkHandlingUnauthenticatedImpl _handleURLWithTIVNonceWithURL:] */

void FUN_106897194(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  FUN_106896890();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c2718a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068971f0; end: 1068971f7; -[SCDeepLinkHandlingUnauthenticatedImpl latestHandlingId] */

undefined8 FUN_1068971f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1068971f8; end: 1068971ff; -[SCDeepLinkHandlingUnauthenticatedImpl latestURL] */

undefined8 FUN_1068971f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106897200; end: 106897207; -[SCDeepLinkHandlingUnauthenticatedImpl latestSourceApplication] */

undefined8 FUN_106897200(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106897208; end: 10689720f; -[SCDeepLinkHandlingUnauthenticatedImpl deepLinkHandlingCommonImpl] */

undefined8 FUN_106897208(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106897210; end: 106897263; -[SCDeepLinkHandlingUnauthenticatedImpl .cxx_destruct] */

void FUN_106897210(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106897264; end: 1068972d7; -[SCDeepLinkTIVNonceServices initWithTIVNonceSubject:] */

undefined1 * FUN_106897264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3a28;
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



/* Entry: 1068972d8; end: 1068972df; -[SCDeepLinkTIVNonceServices tivNonce] */

undefined8 FUN_1068972d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1068972e0; end: 1068972eb; -[SCDeepLinkTIVNonceServices .cxx_destruct] */

void FUN_1068972e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068972ec; end: 10689735b; -[SCImageToVideoWriterScopeExposerServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068972ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ce990;
  _objc_alloc(PTR_PTR_1126ce990);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112752688);
  param_1 = param_1 + _DAT_11275268c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c02ca80(puVar1,param_2,uVar2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10689735c; end: 1068973a3; -[SCImageToVideoWriterScopeExposerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10689735c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275268c);
  _objc_storeStrong(param_1 + _DAT_112752688,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112752690);
  return;
}



/* Entry: 1068973a4; end: 10689754b; -[SCSpectaclesAppRouter initWithSpectaclesServices:statusService:contentPageScopeExposer:otaUpdatePageScopeExposer:memoriesSnapPreviewEditScopeExposer:homeScopeExposer:otaUpdatePageScopeServices:homeScopeServices:] */

undefined1 *
FUN_1068973a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f3a30;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10689754c; end: 1068975a7; -[SCSpectaclesAppRouter popMemoriesNavigationStackAndScrollToSpectaclesTab:] */

void FUN_10689754c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103980();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1527c0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068975a8; end: 1068975e7; -[SCSpectaclesAppRouter pushSpecsSettingsOntoViewController:] */

void FUN_1068975a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c1038e0(param_1,param_2,param_3);
  func_0x00010bf86460(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068975e8; end: 1068976ff; -[SCSpectaclesAppRouter pushManageSpecsOntoViewController:] */

void FUN_1068975e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  func_0x00010c11c300(param_1,param_2,param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf486e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    uVar5 = param_3;
    func_0x00010c0d66a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c275140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar3,param_2,uVar4,1);
    _objc_release(uVar4);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bf22e20(uVar5,param_2,lVar2,puVar3,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30),param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106897700; end: 1068977d3; -[SCSpectaclesAppRouter pushOTAUpdatePageOntoViewController:] */

void FUN_106897700(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c11c160(param_1,param_2,param_3);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  uVar3 = param_3;
  func_0x00010c0d66a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x00010c275140(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,uVar2,1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf23000(uVar3,param_2,param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1068977d4; end: 10689781f; -[SCSpectaclesAppRouter startManualWifiForProxyRequest] */

void FUN_1068977d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c249020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f340();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106897820; end: 10689789f; -[SCSpectaclesAppRouter presentPreviewForSnapId:fromViewController:] */

void FUN_106897820(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ce998;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c047b60();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1068978a0; end: 10689792b; -[SCSpectaclesAppRouter presentContentPagefromViewController:] */

void FUN_1068978a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b68e0;
  _objc_alloc(PTR_PTR_1126b68e0);
  func_0x00010c00afc0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10689792c; end: 106897973; -[SCSpectaclesAppRouter spectaclesContentPageExited] */

void FUN_10689792c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106897974; end: 1068979bb; -[SCSpectaclesAppRouter spectaclesOTAUpdatePageDidDismiss] */

void FUN_106897974(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1068979bc; end: 106897a03; -[SCSpectaclesAppRouter memoriesSnapPreviewEditScopeWillDismiss] */

void FUN_1068979bc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106897a04; end: 106897a07; -[SCSpectaclesAppRouter spectaclesHomeScopeWantsToDismiss:] */

void FUN_106897a04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c248c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_spectaclesHomeScopeDidDismiss__11266fd28);
  return;
}



/* Entry: 106897a08; end: 106897a4f; -[SCSpectaclesAppRouter spectaclesHomeScopeDidDismiss:] */

void FUN_106897a08(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106897a50; end: 106897b07; -[SCSpectaclesAppRouter .cxx_destruct] */

void FUN_106897a50(long param_1)

{
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



/* Entry: 106897b08; end: 106897c1f; -[SCSpectaclesAppRoutingServiceProvider _createNotificationHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106897b08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126ce9a8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_1127526b4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1 + _DAT_1127526b8;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c253460();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127526bc);
  uVar7 = *(undefined8 *)(param_1 + _DAT_1127526c0);
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127526c4);
  uVar9 = *(undefined8 *)(param_1 + _DAT_1127526c8);
  lVar5 = param_1 + _DAT_1127526cc;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_1127526d0;
  _objc_loadWeakRetained();
  func_0x00010c04b140(puVar1,param_2,lVar2,lVar4,uVar6,uVar7,uVar8,uVar9,lVar5,param_1);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106897c20; end: 106897cbb; -[SCSpectaclesAppRoutingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106897c20(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127526c8,0);
  _objc_storeStrong(param_1 + _DAT_1127526c4,0);
  _objc_storeStrong(param_1 + _DAT_1127526c0,0);
  _objc_storeStrong(param_1 + _DAT_1127526bc,0);
  _objc_destroyWeak(param_1 + _DAT_1127526d0);
  _objc_destroyWeak(param_1 + _DAT_1127526cc);
  _objc_destroyWeak(param_1 + _DAT_1127526b8);
  _objc_destroyWeak(param_1 + _DAT_1127526b4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127526d4);
  return;
}



/* Entry: 106897cbc; end: 106897d77; -[SCMemoriesSnapPreviewEditScope initWithSnapId:fromViewController:scopeDelegate:] */

undefined1 *
FUN_106897cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f3a38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106897d78; end: 106897d8f; -[SCMemoriesSnapPreviewEditScope scopeDelegate] */

void FUN_106897d78(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106897d90; end: 106897da7; -[SCMemoriesSnapPreviewEditScope fromViewController] */

void FUN_106897d90(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106897da8; end: 106897daf; -[SCMemoriesSnapPreviewEditScope snapId] */

undefined8 FUN_106897da8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106897db0; end: 106897de3; -[SCMemoriesSnapPreviewEditScope .cxx_destruct] */

void FUN_106897db0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106897de4; end: 106897ee3; -[SCModularSpotlightLauncherImpl launchModularSpotlightWithUiContainer:configuration:sourcePage:sourcePageSessionId:viewLocation:feedPageEntryType:spotlightScopeDelegate:spotlightPlaybackDelegate:] */

void FUN_106897de4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c12e460(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf241e0(uVar1,param_2,param_3,0,0,0,param_4,param_5,param_7,param_8,param_9,param_10,
                      param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106897ee4; end: 10689805b; -[SCModularSpotlightLauncherImpl launchSpotlightOnFriendsFeedWithParentController:baseView:sourcePage:sourcePageSessionId:feedPageEntryType:tappedStories:cachedSpotlightStories:friendUserId:friendFeedUserIds:inChatContextParams:spotlightScopeDelegate:spotlightPlaybackDelegate:] */

void FUN_106897ee4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_13);
  _objc_retain(param_14);
  lVar1 = param_1;
  func_0x00010bdc3b60(param_1,param_2,param_8,param_9,param_10,param_11,param_12);
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 != 0) && (lVar1 != 0)) {
    func_0x00010c12e460(param_1);
    puVar2 = PTR_PTR_1126b3530;
    _objc_alloc(PTR_PTR_1126b3530);
    func_0x00010c038f40();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf24200(uVar3,param_2,puVar2,0,0,param_3,lVar1,param_5,0x1e,param_7,param_13,
                        param_14,param_6,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10689805c; end: 106898267; -[SCModularSpotlightLauncherImpl _SOFFSeededConfigurationWithTappedStories:cachedSpotlightStories:friendUserId:friendFeedUserIds:inChatContextParams:] */

void FUN_10689805c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  puVar5 = PTR____NSArray0__struct_11034ab48;
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_4 != (undefined *)0x0) {
    puVar1 = param_4;
  }
  _objc_retain(puVar1);
  _objc_retain(param_4);
  func_0x00010bdc3b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if (param_3 != (undefined *)0x0) {
    puVar5 = param_3;
  }
  puVar2 = puVar5;
  func_0x000100504554(puVar5,&PTR___NSConcreteGlobalBlock_110946278);
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bf529e0();
  uVar4 = param_1;
  if (puVar2 == (undefined *)0x0) {
    _objc_retain(param_1);
  }
  else {
    uStack_80 = 0xc2000000;
    uStack_78 = 0x106898298;
    puStack_70 = &UNK_1108f1040;
    ppuStack_90 = &puStack_68;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    _objc_retain(puVar3);
    puStack_68 = puVar3;
    func_0x0001006372a4(param_1,&puStack_88);
  }
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf529e0();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126c68b8;
    func_0x00010c0d0ac0(PTR_PTR_1126c68b8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(uVar4);
  if (puVar2 != (undefined *)0x0) {
    _objc_release(*ppuStack_90);
  }
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106898268; end: 1068982f7;  */

void FUN_106898268(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}


