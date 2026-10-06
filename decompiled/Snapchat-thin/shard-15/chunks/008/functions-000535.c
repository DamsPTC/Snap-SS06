/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bc6afa0; end: 10bc6afff; -[SCUserQuickAddPrivacyUpdateResult hash] */

void FUN_10bc6afa0(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_11270e0d8;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc6b000; end: 10bc6b043; -[SCUserQuickAddPrivacyUpdateResult internalInit] */

void FUN_10bc6b000(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270e0d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc6b044; end: 10bc6b0e3; -[SCUserQuickAddPrivacyUpdateResult isEqual:] */

long FUN_10bc6b044(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10bc6b0c8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10bc6b0c8;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10bc6b0c8;
    }
  }
  lVar3 = 1;
LAB_10bc6b0c8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10bc6b0e4; end: 10bc6b167; -[SCUserQuickAddPrivacyUpdateResult matchSuccess:error:] */

void FUN_10bc6b0e4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc6b168; end: 10bc6b173; -[SCUserQuickAddPrivacyUpdateResult .cxx_destruct] */

void FUN_10bc6b168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10bc6b174; end: 10bc6b223; -[SCUserRegistrationInfo initWithCoder:] */

undefined1 * FUN_10bc6b174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270e0e0;
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



/* Entry: 10bc6b224; end: 10bc6b247; -[SCUserRegistrationInfo copyWithZone:] */

undefined8 FUN_10bc6b224(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10bc6b248; end: 10bc6b2a7; -[SCUserRegistrationInfo encodeWithCoder:] */

void FUN_10bc6b248(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_111025e18);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_111025e38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc6b2a8; end: 10bc6b31b; -[SCUserRegistrationInfo hash] */

undefined8 * FUN_10bc6b2a8(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10bc6b39c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10bc6b3a8;
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
          goto LAB_10bc6b3a8;
        }
        goto LAB_10bc6b39c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10bc6b3a8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10bc6b31c; end: 10bc6b3c3; -[SCUserRegistrationInfo isEqual:] */

long FUN_10bc6b31c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10bc6b39c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10bc6b3a8;
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
          goto LAB_10bc6b3a8;
        }
        goto LAB_10bc6b39c;
      }
    }
    lVar3 = 0;
  }
LAB_10bc6b3a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10bc6b3c4; end: 10bc6b3cb; -[SCUserRegistrationInfo registrationCountryCode] */

undefined8 FUN_10bc6b3c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bc6b3cc; end: 10bc6b47b; -[SCUserScoreInfo initWithCoder:] */

undefined1 * FUN_10bc6b3cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270e0e8;
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bc6b47c; end: 10bc6b49f; -[SCUserScoreInfo copyWithZone:] */

undefined8 FUN_10bc6b47c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10bc6b4a0; end: 10bc6b527; -[SCUserScoreInfo encodeWithCoder:] */

void FUN_10bc6b4a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_111025e58);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_111025e78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_111025e98);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_111025eb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc6b528; end: 10bc6b583; -[SCUserScoreInfo hash] */

undefined8 * FUN_10bc6b528(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c3191c(&uStack_40,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         (((*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8) ||
           (*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10))) ||
          (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x20) == *(long *)(param_3 + 0x20));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 10bc6b584; end: 10bc6b63b; -[SCUserScoreInfo isEqual:] */

bool FUN_10bc6b584(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) ||
         (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
           (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
          (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10bc6b63c; end: 10bc6b643; -[SCUserScoreInfo receivedCount] */

undefined8 FUN_10bc6b63c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bc6b644; end: 10bc6b64b; -[SCUserScoreInfo storiesPosted] */

undefined8 FUN_10bc6b644(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10bc6b64c; end: 10bc6b697; +[SCUserSnapPrivacy everyone] */

void FUN_10bc6b64c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b29b8;
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



/* Entry: 10bc6b698; end: 10bc6b6df; +[SCUserSnapPrivacy unknown] */

void FUN_10bc6b698(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b29b8;
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



/* Entry: 10bc6b6e0; end: 10bc6b85b; -[SCUserSnapPrivacy initWithCoder:] */

undefined ** FUN_10bc6b6e0(undefined *param_1,undefined8 param_2,ulong param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong unaff_x21;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  ulong uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_50 = PTR_PTR_11270e0f0;
  ppuVar1 = &puStack_58;
  puStack_58 = param_1;
  _objc_msgSendSuper2(ppuVar1,PTR_s_init_1125d9248);
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) {
        uVar2 = unaff_x21;
        func_0x00010c0720c0();
        if ((uVar2 & 1) == 0) goto LAB_10bc6b7e8;
        puVar4 = (undefined *)0x2;
      }
      else {
        puVar4 = (undefined *)0x1;
      }
    }
    else {
      puVar4 = (undefined *)0x0;
    }
    ppuVar1[1] = puVar4;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar1;
  }
  ___stack_chk_fail();
LAB_10bc6b7e8:
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db7118;
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw();
  _objc_retain(ppuVar1);
  if (*(ulong *)(puVar4 + 8) < 3) {
    func_0x00010c14cb00(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return ppuVar1;
}



/* Entry: 10bc6b85c; end: 10bc6b8af; -[SCUserSnapPrivacy encodeWithCoder:] */

void FUN_10bc6b85c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (*(ulong *)(param_1 + 8) < 3) {
    func_0x00010c14cb00(param_3,param_2,(&PTR_PTR_110d95ab0)[*(ulong *)(param_1 + 8)],
                        &PTR____CFConstantStringClassReference_110db7018);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc6b8b0; end: 10bc6b8b7; -[SCUserSnapPrivacy hash] */

undefined8 FUN_10bc6b8b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bc6b8b8; end: 10bc6b967; -[SCUserSnapContactsPrivacy initWithCoder:] */

undefined1 * FUN_10bc6b8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270e0f8;
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
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bc6b968; end: 10bc6b98b; -[SCUserSnapContactsPrivacy copyWithZone:] */

undefined8 FUN_10bc6b968(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10bc6b98c; end: 10bc6b9ff; -[SCUserSnapContactsPrivacy encodeWithCoder:] */

void FUN_10bc6b98c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_111025ed8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_111025ef8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_111025f18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc6ba00; end: 10bc6ba73; -[SCUserSnapContactsPrivacy hash] */

undefined8 * FUN_10bc6ba00(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined8 *)*(undefined1 **)((long)puVar2 + 0x10);
}



/* Entry: 10bc6ba74; end: 10bc6ba7b; -[SCUserSnapContactsPrivacy userSnapPrivacy] */

undefined8 FUN_10bc6ba74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bc6ba7c; end: 10bc6ba83; -[SCUserSnapContactsPrivacy allowInMyContactOnboarded] */

undefined1 FUN_10bc6ba7c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10bc6ba84; end: 10bc6ba8b; -[SCUserSnapContactsPrivacy allowInMyContactEnabled] */

undefined1 FUN_10bc6ba84(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10bc6ba8c; end: 10bc6baf3; +[SCUserSnapPrivacyUpdateResult errorWithMessage:] */

void FUN_10bc6ba8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8a30;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc6baf4; end: 10bc6bb3b; +[SCUserSnapPrivacyUpdateResult success] */

void FUN_10bc6baf4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8a30;
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



/* Entry: 10bc6bb3c; end: 10bc6bb5f; -[SCUserSnapPrivacyUpdateResult copyWithZone:] */

undefined8 FUN_10bc6bb3c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10bc6bb60; end: 10bc6bbbf; -[SCUserSnapPrivacyUpdateResult hash] */

void FUN_10bc6bb60(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_11270e100;
  puStack_60 = puVar2;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc6bbc0; end: 10bc6bc03; -[SCUserSnapPrivacyUpdateResult internalInit] */

void FUN_10bc6bbc0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270e100;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc6bc04; end: 10bc6bca3; -[SCUserSnapPrivacyUpdateResult isEqual:] */

long FUN_10bc6bc04(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10bc6bc88;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10bc6bc88;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10bc6bc88;
    }
  }
  lVar3 = 1;
LAB_10bc6bc88:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10bc6bca4; end: 10bc6bd27; -[SCUserSnapPrivacyUpdateResult matchSuccess:error:] */

void FUN_10bc6bca4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc6bd28; end: 10bc6bd33; -[SCUserSnapPrivacyUpdateResult .cxx_destruct] */

void FUN_10bc6bd28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10bc6bd34; end: 10bc6bd7f; +[SCUserStoryPrivacy custom] */

void FUN_10bc6bd34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8918;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc6bd80; end: 10bc6bdcb; +[SCUserStoryPrivacy everyone] */

void FUN_10bc6bd80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8918;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc6bdcc; end: 10bc6be17; +[SCUserStoryPrivacy friends] */

void FUN_10bc6bdcc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8918;
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



/* Entry: 10bc6be18; end: 10bc6be5f; +[SCUserStoryPrivacy unknown] */

void FUN_10bc6be18(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8918;
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



/* Entry: 10bc6be60; end: 10bc6bff7; -[SCUserStoryPrivacy initWithCoder:] */

undefined8 * FUN_10bc6be60(undefined8 param_1,undefined8 param_2,ulong param_3)

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
  puStack_50 = PTR_PTR_11270e108;
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
      if ((uVar2 & 1) == 0) {
        uVar2 = unaff_x21;
        func_0x00010c0720c0();
        if ((uVar2 & 1) == 0) {
          uVar2 = unaff_x21;
          func_0x00010c0720c0();
          if ((uVar2 & 1) == 0) goto LAB_10bc6bf84;
          uVar4 = 3;
        }
        else {
          uVar4 = 2;
        }
      }
      else {
        uVar4 = 1;
      }
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
LAB_10bc6bf84:
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



/* Entry: 10bc6bff8; end: 10bc6c01b; -[SCUserStoryPrivacy copyWithZone:] */

undefined8 FUN_10bc6bff8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10bc6c01c; end: 10bc6c06f; -[SCUserStoryPrivacy encodeWithCoder:] */

void FUN_10bc6c01c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (*(ulong *)(param_1 + 8) < 4) {
    func_0x00010c14cb00(param_3,param_2,(&PTR_PTR_110d95ac8)[*(ulong *)(param_1 + 8)],
                        &PTR____CFConstantStringClassReference_110db7018);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc6c070; end: 10bc6c077; -[SCUserStoryPrivacy hash] */

undefined8 FUN_10bc6c070(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bc6c078; end: 10bc6c0bb; -[SCUserStoryPrivacy internalInit] */

void FUN_10bc6c078(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270e108;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc6c0bc; end: 10bc6c143; -[SCUserStoryPrivacy isEqual:] */

bool FUN_10bc6c0bc(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10bc6c144; end: 10bc6c217; -[SCUserStoryPrivacy matchUnknown:friends:everyone:custom:] */

void FUN_10bc6c144(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    lVar1 = param_3;
    if ((lVar2 != 0) && (lVar1 = param_4, lVar2 != 1)) goto LAB_10bc6c1d0;
  }
  else {
    lVar1 = param_5;
    if ((lVar2 != 2) && (lVar1 = param_6, lVar2 != 3)) goto LAB_10bc6c1d0;
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
  }
LAB_10bc6c1d0:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc6c218; end: 10bc6c263; +[SCUserSaturnPrivacy noOne] */

void FUN_10bc6c218(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8900;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc6c264; end: 10bc6c2af; +[SCUserSaturnPrivacy saturnFriends] */

void FUN_10bc6c264(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8900;
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



/* Entry: 10bc6c2b0; end: 10bc6c2fb; +[SCUserSaturnPrivacy snapchatFriends] */

void FUN_10bc6c2b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8900;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc6c2fc; end: 10bc6c343; +[SCUserSaturnPrivacy unknown] */

void FUN_10bc6c2fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8900;
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



/* Entry: 10bc6c344; end: 10bc6c4db; -[SCUserSaturnPrivacy initWithCoder:] */

undefined8 * FUN_10bc6c344(undefined8 param_1,undefined8 param_2,ulong param_3)

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
  puStack_50 = PTR_PTR_11270e110;
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
      if ((uVar2 & 1) == 0) {
        uVar2 = unaff_x21;
        func_0x00010c0720c0();
        if ((uVar2 & 1) == 0) {
          uVar2 = unaff_x21;
          func_0x00010c0720c0();
          if ((uVar2 & 1) == 0) goto LAB_10bc6c468;
          uVar4 = 3;
        }
        else {
          uVar4 = 2;
        }
      }
      else {
        uVar4 = 1;
      }
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
LAB_10bc6c468:
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



/* Entry: 10bc6c4dc; end: 10bc6c4ff; -[SCUserSaturnPrivacy copyWithZone:] */

undefined8 FUN_10bc6c4dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10bc6c500; end: 10bc6c553; -[SCUserSaturnPrivacy encodeWithCoder:] */

void FUN_10bc6c500(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (*(ulong *)(param_1 + 8) < 4) {
    func_0x00010c14cb00(param_3,param_2,(&PTR_PTR_110d95ae8)[*(ulong *)(param_1 + 8)],
                        &PTR____CFConstantStringClassReference_110db7018);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc6c554; end: 10bc6c55b; -[SCUserSaturnPrivacy hash] */

undefined8 FUN_10bc6c554(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bc6c55c; end: 10bc6c59f; -[SCUserSaturnPrivacy internalInit] */

void FUN_10bc6c55c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270e110;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc6c5a0; end: 10bc6c627; -[SCUserSaturnPrivacy isEqual:] */

bool FUN_10bc6c5a0(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10bc6c628; end: 10bc6c6fb; -[SCUserSaturnPrivacy matchUnknown:saturnFriends:snapchatFriends:noOne:] */

void FUN_10bc6c628(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    lVar1 = param_3;
    if ((lVar2 != 0) && (lVar1 = param_4, lVar2 != 1)) goto LAB_10bc6c6b4;
  }
  else {
    lVar1 = param_5;
    if ((lVar2 != 2) && (lVar1 = param_6, lVar2 != 3)) goto LAB_10bc6c6b4;
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
  }
LAB_10bc6c6b4:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc6c6fc; end: 10bc6c747; +[SCUserSaturnPrivacyUpdateResult failure] */

void FUN_10bc6c6fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8a28;
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



/* Entry: 10bc6c748; end: 10bc6c78f; +[SCUserSaturnPrivacyUpdateResult success] */

void FUN_10bc6c748(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8a28;
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



/* Entry: 10bc6c790; end: 10bc6c7b3; -[SCUserSaturnPrivacyUpdateResult copyWithZone:] */

undefined8 FUN_10bc6c790(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10bc6c7b4; end: 10bc6c7bb; -[SCUserSaturnPrivacyUpdateResult hash] */

undefined8 FUN_10bc6c7b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bc6c7bc; end: 10bc6c7ff; -[SCUserSaturnPrivacyUpdateResult internalInit] */

void FUN_10bc6c7bc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270e118;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc6c800; end: 10bc6c887; -[SCUserSaturnPrivacyUpdateResult isEqual:] */

bool FUN_10bc6c800(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 10bc6c888; end: 10bc6c8ff; -[SCUserSaturnPrivacyUpdateResult matchSuccess:failure:] */

void FUN_10bc6c888(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    lVar1 = param_4;
    if (param_4 == 0) goto LAB_10bc6c8d0;
  }
  else {
    lVar1 = param_3;
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10bc6c8d0;
  }
  (**(code **)(lVar1 + 0x10))();
LAB_10bc6c8d0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc6c900; end: 10bc6c9eb; -[SCUserBitmojiFlatlandInfo initWithCoder:] */

undefined1 * FUN_10bc6c900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270e120;
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



/* Entry: 10bc6c9ec; end: 10bc6cad3; -[SCUserBitmojiFlatlandInfo initWithSceneId:backgroundId:urlType:backgroundURL:] */

undefined1 *
FUN_10bc6c9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_11270e120;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bc6cad4; end: 10bc6caf7; -[SCUserBitmojiFlatlandInfo copyWithZone:] */

undefined8 FUN_10bc6cad4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10bc6caf8; end: 10bc6cb7f; -[SCUserBitmojiFlatlandInfo encodeWithCoder:] */

void FUN_10bc6caf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f5e9d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e518b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_111025f98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_111025fb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc6cb80; end: 10bc6cc03; -[SCUserBitmojiFlatlandInfo hash] */

undefined8 * FUN_10bc6cb80(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10bc6ccac:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10bc6ccb8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[3] == param_3[3])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10bc6ccb8;
          }
          goto LAB_10bc6ccac;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10bc6ccb8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10bc6cc04; end: 10bc6ccd3; -[SCUserBitmojiFlatlandInfo isEqual:] */

long FUN_10bc6cc04(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10bc6ccac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10bc6ccb8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10bc6ccb8;
          }
          goto LAB_10bc6ccac;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10bc6ccb8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10bc6ccd4; end: 10bc6ccdb; -[SCUserBitmojiFlatlandInfo sceneId] */

undefined8 FUN_10bc6ccd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bc6ccdc; end: 10bc6cce3; -[SCUserBitmojiFlatlandInfo backgroundId] */

undefined8 FUN_10bc6ccdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bc6cce4; end: 10bc6cceb; -[SCUserBitmojiFlatlandInfo urlType] */

undefined8 FUN_10bc6cce4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bc6ccec; end: 10bc6ccf3; -[SCUserBitmojiFlatlandInfo backgroundURL] */

undefined8 FUN_10bc6ccec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10bc6ccf4; end: 10bc6cd2f; -[SCUserBitmojiFlatlandInfo .cxx_destruct] */

void FUN_10bc6ccf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc6cd30; end: 10bc6cd9b; +[SCUserUsernameMutationInfo errorWithMessage:] */

void FUN_10bc6cd30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8a48;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc6cd9c; end: 10bc6ce2b; +[SCUserUsernameMutationInfo successWithChangedDate:nextChangeDate:] */

void FUN_10bc6cd9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b8a48;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10bc6ce2c; end: 10bc6ce4f; -[SCUserUsernameMutationInfo copyWithZone:] */

undefined8 FUN_10bc6ce2c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10bc6ce50; end: 10bc6ced3; -[SCUserUsernameMutationInfo hash] */

void FUN_10bc6ce50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_11270e128;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc6ced4; end: 10bc6cf17; -[SCUserUsernameMutationInfo internalInit] */

void FUN_10bc6ced4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_11270e128;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc6cf18; end: 10bc6cfe7; -[SCUserUsernameMutationInfo isEqual:] */

long FUN_10bc6cf18(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10bc6cfc0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10bc6cfcc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10bc6cfcc;
          }
          goto LAB_10bc6cfc0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10bc6cfcc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10bc6cfe8; end: 10bc6d06f; -[SCUserUsernameMutationInfo matchSuccess:error:] */

void FUN_10bc6cfe8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc6d070; end: 10bc6d13b; -[SCUserUsernameMutationInfo .cxx_destruct] */

void FUN_10bc6d070(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10bc6d13c; end: 10bc6d147;  */

bool FUN_10bc6d13c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10bc6d148; end: 10bc6d1c3; +[SCBitmojiBitmojiBackgroundURL descriptor] */

undefined * FUN_10bc6d148(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fd938 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112d2bc10,
                        &PTR____CFConstantStringClassReference_111025ff8,
                        &PTR_s_snapchat_bitmoji_profile_v1_113400488,&PTR_DAT_1134004a0,2,0x10,0x1c)
    ;
    func_0x00010c2289e0();
    puRam00000001137fd938 = puVar1;
  }
  return puRam00000001137fd938;
}



/* Entry: 10bc6d1c4; end: 10bc6d397; -[SCAvailableScope remove:] */

void FUN_10bc6d1c4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar5 = param_3;
  _objc_opt_class(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0dff20(uVar1,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    lVar5 = 0;
  }
  else {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8),param_2,lVar5);
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010c0e00e0(lVar3,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  _os_unfair_lock_unlock(param_1 + 0x20);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar3 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        uVar1 = *(undefined8 *)(lStack_118 + lVar7 * 8);
        uVar2 = uVar1;
        func_0x00010bfec960(uVar1);
        func_0x00010c1f69e0(uVar1,param_2,0,uVar2);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar5;
      puVar4 = &uStack_120;
      func_0x00010bf52a60(lVar5,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar5);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(0x20);
  __Unwind_Resume();
  _objc_retain(puVar4);
  _os_unfair_lock_lock(param_3 + 0x20);
  func_0x00010c12d3e0(*(undefined8 *)(param_3 + 0x18),param_2,puVar4);
  _os_unfair_lock_unlock(param_3 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10bc6d398; end: 10bc6d3f3; -[SCAvailableScope removeDeferredServiceType:] */

void FUN_10bc6d398(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc6d3f4; end: 10bc6d547; -[SCAvailableScope debugRepresentation] */

void FUN_10bc6d3f4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar7 = *(long *)(param_1 + 8);
  _objc_retain(lVar7);
  lVar3 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0dff20(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf6e340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar5);
      _objc_release(uVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(lVar7 + 0x28);
  _objc_storeStrong(lVar7 + 0x18,0);
  _objc_storeStrong(lVar7 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar7 + 8,0);
  return;
}



/* Entry: 10bc6d548; end: 10bc6d58b; -[SCAvailableScope .cxx_destruct] */

void FUN_10bc6d548(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc6d58c; end: 10bc6d633;  */

void FUN_10bc6d58c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_111026058);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10bc6d634; end: 10bc6d6f3; -[SCScopedAccess onExpose:onRemove:] */

void FUN_10bc6d634(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(param_4);
  _objc_sync_enter(param_1);
  lVar1 = param_3;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = lVar1;
  _objc_release(uVar3);
  uVar3 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  _objc_release(uVar2);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (lVar1 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc6d6f4; end: 10bc6d76b; -[FCAdHocFasterDecodable initWithClassName:] */

undefined1 * FUN_10bc6d6f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e140;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72040();
    *(undefined **)((long)puVar1 + 8) = puVar2;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bc6d76c; end: 10bc6d79b; -[FCAdHocFasterDecodable asDictionary] */

undefined8 FUN_10bc6d76c(long param_1,undefined8 param_2)

{
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_1110260b8);
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bc6d79c; end: 10bc6d7a3; -[FCAdHocFasterDecodable setObject:forUInt64Key:] */

void FUN_10bc6d79c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 10bc6d7a4; end: 10bc6d7d3; -[FCAdHocFasterDecodable setBool:forUInt64Key:] */

void FUN_10bc6d7a4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_addObject__11259c1f0,puVar1);
  return;
}



/* Entry: 10bc6d7d4; end: 10bc6d803; -[FCAdHocFasterDecodable setSInt8:forUInt64Key:] */

void FUN_10bc6d7d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df700(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_addObject__11259c1f0,puVar1);
  return;
}



/* Entry: 10bc6d804; end: 10bc6d833; -[FCAdHocFasterDecodable setSInt16:forUInt64Key:] */

void FUN_10bc6d804(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_addObject__11259c1f0,puVar1);
  return;
}


