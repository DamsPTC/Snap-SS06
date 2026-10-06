/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10921faf8; end: 10921faff; -[SCLensTalkCarouselScope carouselLifecycleEventObservable] */

undefined8 FUN_10921faf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10921fb00; end: 10921fb07; -[SCLensTalkCarouselScope lensSelectionEventObservable] */

undefined8 FUN_10921fb00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10921fb08; end: 10921fb0f; -[SCLensTalkCarouselScope lensOrderUpdateObservable] */

undefined8 FUN_10921fb08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10921fb10; end: 10921fb17; -[SCLensTalkCarouselScope moreLensesRequestedObservable] */

undefined8 FUN_10921fb10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10921fb18; end: 10921fb1f; -[SCLensTalkCarouselScope presentLensExplorerObservable] */

undefined8 FUN_10921fb18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10921fb20; end: 10921fb27; -[SCLensTalkCarouselScope talkContext] */

undefined8 FUN_10921fb20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10921fb28; end: 10921fbff; -[SCLensTalkCarouselScope .cxx_destruct] */

void FUN_10921fb28(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 10921fc00; end: 10921fc6b; +[SCLensTalkCarouselConfigurationEvent selectLensWithLens:] */

void FUN_10921fc00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ddf20;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10921fc6c; end: 10921fcd7; +[SCLensTalkCarouselConfigurationEvent updateLensToRestoreWithLens:] */

void FUN_10921fc6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ddf20;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10921fcd8; end: 10921fd2f; +[SCLensTalkCarouselConfigurationEvent updateLensesProcessingStateWithLensProcessingEnabled:] */

void FUN_10921fcd8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ddf20;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10921fd30; end: 10921ff0f; -[SCLensTalkCarouselConfigurationEvent initWithCoder:] */

undefined8 * FUN_10921fd30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  puStack_50 = PTR_PTR_112701130;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = unaff_x21;
    func_0x00010c0720c0();
    if ((int)uVar3 == 0) {
      uVar3 = unaff_x21;
      func_0x00010c0720c0();
      if ((int)uVar3 == 0) {
        uVar3 = unaff_x21;
        func_0x00010c0720c0();
        if ((int)uVar3 == 0) goto LAB_10921fe9c;
        uVar3 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = puVar1[4];
        puVar1[4] = uVar3;
        _objc_release(uVar4);
        uVar3 = 2;
      }
      else {
        uVar3 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = puVar1[3];
        puVar1[3] = uVar3;
        _objc_release(uVar4);
        uVar3 = 1;
      }
    }
    else {
      uVar4 = param_3;
      func_0x00010bf66ce0();
      uVar3 = 0;
      *(char *)(puVar1 + 2) = (char)uVar4;
    }
    puVar1[1] = uVar3;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_10921fe9c:
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



/* Entry: 10921ff10; end: 10921ff33; -[SCLensTalkCarouselConfigurationEvent copyWithZone:] */

undefined8 FUN_10921ff10(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10921ff34; end: 10921ffe3; -[SCLensTalkCarouselConfigurationEvent encodeWithCoder:] */

void FUN_10921ff34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                        &PTR____CFConstantStringClassReference_110f2d218);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f2d1f8;
  }
  else if (lVar2 == 1) {
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                        &PTR____CFConstantStringClassReference_110f2d1d8);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f2d1b8;
  }
  else {
    if (lVar2 != 0) goto LAB_10921ffd4;
    func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x10),
                        &PTR____CFConstantStringClassReference_110f2d198);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f2d178;
  }
  func_0x00010c14cb00(param_3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110db7018);
LAB_10921ffd4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10921ffe4; end: 109220063; -[SCLensTalkCarouselConfigurationEvent hash] */

void FUN_10921ffe4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
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
  puStack_78 = PTR_PTR_112701130;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109220064; end: 1092200a7; -[SCLensTalkCarouselConfigurationEvent internalInit] */

void FUN_109220064(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112701130;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1092200a8; end: 10922016f; -[SCLensTalkCarouselConfigurationEvent isEqual:] */

long FUN_1092200a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109220148:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109220154;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_109220154;
        }
        goto LAB_109220148;
      }
    }
    lVar3 = 0;
  }
LAB_109220154:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109220170; end: 109220223; -[SCLensTalkCarouselConfigurationEvent matchUpdateLensesProcessingState:updateLensToRestore:selectLens:] */

void FUN_109220170(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_109220200;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if (lVar2 != 1) {
      if ((lVar2 == 0) && (param_3 != 0)) {
        (**(code **)(param_3 + 0x10))(param_3,*(undefined1 *)(param_1 + 0x10));
      }
      goto LAB_109220200;
    }
    if (param_4 == 0) goto LAB_109220200;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar2 = param_4;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_109220200:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109220224; end: 109220253; -[SCLensTalkCarouselConfigurationEvent .cxx_destruct] */

void FUN_109220224(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 109220254; end: 10922029f; +[SCLensTalkCarouselLensSelectionEvent didDeactivateLens] */

void FUN_109220254(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ddf28;
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



/* Entry: 1092202a0; end: 10922030b; +[SCLensTalkCarouselLensSelectionEvent didFocusLensWithLens:] */

void FUN_1092202a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ddf28;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10922030c; end: 10922036f; +[SCLensTalkCarouselLensSelectionEvent didSelectLensWithLens:] */

void FUN_10922030c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ddf28;
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



/* Entry: 109220370; end: 10922052b; -[SCLensTalkCarouselLensSelectionEvent initWithCoder:] */

undefined8 * FUN_109220370(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_60 = PTR_PTR_112701138;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
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
      if ((uVar2 & 1) != 0) {
        uVar5 = 1;
        lVar6 = 0x18;
        goto LAB_109220430;
      }
      uVar2 = unaff_x21;
      func_0x00010c0720c0();
      if ((uVar2 & 1) == 0) goto LAB_1092204b8;
      uVar5 = 2;
    }
    else {
      uVar5 = 0;
      lVar6 = 0x10;
LAB_109220430:
      uVar2 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
      *(ulong *)((long)puVar1 + lVar6) = uVar2;
      _objc_release(uVar4);
    }
    puVar1[1] = uVar5;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_1092204b8:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110db7158;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = unaff_x21;
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



/* Entry: 10922052c; end: 10922054f; -[SCLensTalkCarouselLensSelectionEvent copyWithZone:] */

undefined8 FUN_10922052c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109220550; end: 1092205f3; -[SCLensTalkCarouselLensSelectionEvent encodeWithCoder:] */

void FUN_109220550(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f2d238;
    lVar2 = 0x10;
    ppuVar1 = &PTR____CFConstantStringClassReference_110f2d258;
LAB_1092205c0:
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + lVar2),ppuVar1);
  }
  else {
    if (lVar2 != 2) {
      if (lVar2 != 1) goto LAB_1092205e0;
      ppuVar3 = &PTR____CFConstantStringClassReference_110f2d278;
      lVar2 = 0x18;
      ppuVar1 = &PTR____CFConstantStringClassReference_110f2d298;
      goto LAB_1092205c0;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110f2d2b8;
  }
  func_0x00010c14cb00(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_110db7018);
LAB_1092205e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1092205f4; end: 10922066b; -[SCLensTalkCarouselLensSelectionEvent hash] */

void FUN_1092205f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_112701138;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10922066c; end: 1092206af; -[SCLensTalkCarouselLensSelectionEvent internalInit] */

void FUN_10922066c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112701138;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1092206b0; end: 109220767; -[SCLensTalkCarouselLensSelectionEvent isEqual:] */

long FUN_1092206b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109220740:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10922074c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10922074c;
        }
        goto LAB_109220740;
      }
    }
    lVar3 = 0;
  }
LAB_10922074c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109220768; end: 109220817; -[SCLensTalkCarouselLensSelectionEvent matchDidSelectLens:didFocusLens:didDeactivateLens:] */

void FUN_109220768(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
  }
  else {
    if (lVar2 == 1) {
      if (param_4 == 0) goto LAB_1092207f4;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
    else {
      if ((lVar2 != 0) || (param_3 == 0)) goto LAB_1092207f4;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    (*pcVar3)(lVar2,uVar1);
  }
LAB_1092207f4:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109220818; end: 109220847; -[SCLensTalkCarouselLensSelectionEvent .cxx_destruct] */

void FUN_109220818(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 109220848; end: 10922088f; +[SCLensTalkCarouselLifecycleEvent willDisplayLensCarousel] */

void FUN_109220848(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ddf30;
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



/* Entry: 109220890; end: 1092209cf; -[SCLensTalkCarouselLifecycleEvent initWithCoder:] */

undefined8 * FUN_109220890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 unaff_x21;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_50 = PTR_PTR_112701140;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010c0720c0();
    if ((int)uVar2 == 0) goto LAB_10922095c;
    puVar1[1] = 0;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_10922095c:
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



/* Entry: 1092209d0; end: 1092209f3; -[SCLensTalkCarouselLifecycleEvent copyWithZone:] */

undefined8 FUN_1092209d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1092209f4; end: 109220a1b; -[SCLensTalkCarouselLifecycleEvent encodeWithCoder:] */

void FUN_1092209f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 8) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c14cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sc_encodeObject_forKey__112630ce0,
             &PTR____CFConstantStringClassReference_110f2d2d8,
             &PTR____CFConstantStringClassReference_110db7018);
  return;
}



/* Entry: 109220a1c; end: 109220a23; -[SCLensTalkCarouselLifecycleEvent hash] */

undefined8 FUN_109220a1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109220a24; end: 109220a67; -[SCLensTalkCarouselLifecycleEvent internalInit] */

void FUN_109220a24(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112701140;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109220a68; end: 109220aef; -[SCLensTalkCarouselLifecycleEvent isEqual:] */

bool FUN_109220a68(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 109220af0; end: 109220b0b; -[SCLensTalkCarouselLifecycleEvent matchWillDisplayLensCarousel:] */

void FUN_109220af0(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000109220b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 109220b0c; end: 109220b77; -[SCLensRemoteApiServices initWithLensRemoteApiRPCHandler:] */

undefined1 * FUN_109220b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701148;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1bc9c0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109220b78; end: 109220b7f; -[SCLensRemoteApiServices lensRemoteApiRPCHandler] */

undefined8 FUN_109220b78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109220b80; end: 109220baf; -[SCLensRemoteApiServices setLensRemoteApiRPCHandler:] */

void FUN_109220b80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109220bb0; end: 109220bbb; -[SCLensRemoteApiServices .cxx_destruct] */

void FUN_109220bb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109220bbc; end: 109220c93; -[SCLensRemoteApiLinkedResource initWithUrl:key:iv:] */

undefined1 *
FUN_109220bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112701150;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109220c94; end: 109220cb7; -[SCLensRemoteApiLinkedResource copyWithZone:] */

undefined8 FUN_109220c94(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109220cb8; end: 109220d37; -[SCLensRemoteApiLinkedResource hash] */

undefined8 * FUN_109220cb8(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_109220dd0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_109220ddc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_109220ddc;
          }
          goto LAB_109220dd0;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_109220ddc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 109220d38; end: 109220df7; -[SCLensRemoteApiLinkedResource isEqual:] */

long FUN_109220d38(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109220dd0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109220ddc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_109220ddc;
          }
          goto LAB_109220dd0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_109220ddc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109220df8; end: 109220dff; -[SCLensRemoteApiLinkedResource url] */

undefined8 FUN_109220df8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109220e00; end: 109220e07; -[SCLensRemoteApiLinkedResource key] */

undefined8 FUN_109220e00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109220e08; end: 109220e0f; -[SCLensRemoteApiLinkedResource iv] */

undefined8 FUN_109220e08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109220e10; end: 109220e4b; -[SCLensRemoteApiLinkedResource .cxx_destruct] */

void FUN_109220e10(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109220e4c; end: 109220e57; -[SCMapPersonLocationServices .cxx_destruct] */

void FUN_109220e4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109220e58; end: 1092210ab; -[SCMapPersonLocation initWithUserId:clusterCoordinate:horizontalAccuracy:date:lastActiveDate:locality:venueName:sticker:status:coordinate:context:venueId:batteryLevel:accessories:isSharingBackgroundLocation:] */

undefined8 *
FUN_109220e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined1 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_98 = PTR_PTR_112701160;
  puVar1 = &uStack_a0;
  uStack_a0 = param_7;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[0xd] = param_1;
    puVar1[0xe] = param_2;
    puVar1[3] = param_3;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    puVar1[0xf] = param_4;
    puVar1[0x10] = param_5;
    puVar1[10] = param_16;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_6;
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_19;
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  return puVar1;
}



/* Entry: 1092210ac; end: 1092210cf; -[SCMapPersonLocation copyWithZone:] */

undefined8 FUN_1092210ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1092210d0; end: 109221263; -[SCMapPersonLocation hash] */

undefined8 * FUN_1092210d0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_b0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_a8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_a8 = uStack_a8 ^ uStack_a8 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_a0 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_a0 = uStack_a0 ^ uStack_a0 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_98 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_98 = uStack_98 ^ uStack_98 >> 0x16;
  uStack_b0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_90 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_88 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_70 = uVar4;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x78) + *(ulong *)(param_1 + 0x78) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_60 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x80) + *(ulong *)(param_1 + 0x80) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_58 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_50 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar8 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar8 = (uVar8 ^ uVar8 >> 0x18) * 0x109;
  uVar8 = (uVar8 ^ uVar8 >> 0xe) * 0x15;
  lStack_40 = (uVar8 ^ uVar8 >> 0x1c) * 0x80000001;
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uStack_48 = uVar4;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar3;
  func_0x000107c3191c(&uStack_b0,0x11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_109221478:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_109221484;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) &&
       ((((*(long *)((long)puVar5 + 0x50) == *(long *)(param_3 + 0x50) &&
          (*(char *)((long)puVar5 + 8) == param_3[8])) &&
         (ABS(*(double *)((long)puVar5 + 0x68) - *(double *)(param_3 + 0x68)) <=
          2.220446049250313e-16)) &&
        (ABS(*(double *)((long)puVar5 + 0x70) - *(double *)(param_3 + 0x70)) <=
         2.220446049250313e-16)))) {
      dVar12 = ABS(*(double *)((long)puVar5 + 0x18) - *(double *)(param_3 + 0x18));
      dVar11 = ABS(*(double *)((long)puVar5 + 0x18) + *(double *)(param_3 + 0x18)) *
               2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar12) && (bVar2 = false, !NAN(dVar12) && !NAN(dVar11))) {
        bVar2 = dVar12 < dVar11;
      }
      if (((bVar2) &&
          (ABS(*(double *)((long)puVar5 + 0x78) - *(double *)(param_3 + 0x78)) <=
           2.220446049250313e-16)) &&
         (ABS(*(double *)((long)puVar5 + 0x80) - *(double *)(param_3 + 0x80)) <=
          2.220446049250313e-16)) {
        fVar10 = ABS(*(float *)((long)puVar5 + 0xc) - *(float *)(param_3 + 0xc));
        if (((((fVar10 < 1.1754944e-38) ||
              (fVar10 < ABS(*(float *)((long)puVar5 + 0xc) + *(float *)(param_3 + 0xc)) *
                        1.1920929e-07)) &&
             (((lVar7 = *(long *)((long)puVar5 + 0x10), lVar7 == *(long *)(param_3 + 0x10) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
              ((lVar7 = *(long *)((long)puVar5 + 0x20), lVar7 == *(long *)(param_3 + 0x20) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)))))) &&
            (((lVar7 = *(long *)((long)puVar5 + 0x28), lVar7 == *(long *)(param_3 + 0x28) ||
              (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
             ((((lVar7 = *(long *)((long)puVar5 + 0x30), lVar7 == *(long *)(param_3 + 0x30) ||
                (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
               ((lVar7 = *(long *)((long)puVar5 + 0x38), lVar7 == *(long *)(param_3 + 0x38) ||
                (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
              ((lVar7 = *(long *)((long)puVar5 + 0x40), lVar7 == *(long *)(param_3 + 0x40) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)))))))) &&
           (((lVar7 = *(long *)((long)puVar5 + 0x48), lVar7 == *(long *)(param_3 + 0x48) ||
             (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
            ((lVar7 = *(long *)((long)puVar5 + 0x58), lVar7 == *(long *)(param_3 + 0x58) ||
             (func_0x00010c071ae0(), (int)lVar7 != 0)))))) {
          puVar9 = *(undefined1 **)((long)puVar5 + 0x60);
          if (puVar9 != *(undefined1 **)(param_3 + 0x60)) {
            func_0x00010c071ae0();
            goto LAB_109221484;
          }
          goto LAB_109221478;
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_109221484:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 109221264; end: 10922149f; -[SCMapPersonLocation isEqual:] */

long FUN_109221264(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109221478:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109221484;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         (ABS(*(double *)(param_1 + 0x68) - *(double *)(param_3 + 0x68)) <= 2.220446049250313e-16))
        && (ABS(*(double *)(param_1 + 0x70) - *(double *)(param_3 + 0x70)) <= 2.220446049250313e-16)
        ))) {
      dVar7 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar6 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar6))) {
        bVar1 = dVar7 < dVar6;
      }
      if (((bVar1) &&
          (ABS(*(double *)(param_1 + 0x78) - *(double *)(param_3 + 0x78)) <= 2.220446049250313e-16))
         && (ABS(*(double *)(param_1 + 0x80) - *(double *)(param_3 + 0x80)) <= 2.220446049250313e-16
            )) {
        fVar5 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
        if (((((fVar5 < 1.1754944e-38) ||
              (fVar5 < ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07))
             && (((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
                  (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                 ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
                  (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
            (((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
             ((((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
                (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
               ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
                (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
              ((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))))))) &&
           (((lVar4 = *(long *)(param_1 + 0x48), lVar4 == *(long *)(param_3 + 0x48) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
            ((lVar4 = *(long *)(param_1 + 0x58), lVar4 == *(long *)(param_3 + 0x58) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
          lVar4 = *(long *)(param_1 + 0x60);
          if (lVar4 != *(long *)(param_3 + 0x60)) {
            func_0x00010c071ae0();
            goto LAB_109221484;
          }
          goto LAB_109221478;
        }
      }
    }
    lVar4 = 0;
  }
LAB_109221484:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1092214a0; end: 1092214a7; -[SCMapPersonLocation userId] */

undefined8 FUN_1092214a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1092214a8; end: 1092214af; -[SCMapPersonLocation clusterCoordinate] */

undefined1  [16] FUN_1092214a8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x68);
}



/* Entry: 1092214b0; end: 1092214b7; -[SCMapPersonLocation horizontalAccuracy] */

undefined8 FUN_1092214b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1092214b8; end: 1092214bf; -[SCMapPersonLocation date] */

undefined8 FUN_1092214b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1092214c0; end: 1092214c7; -[SCMapPersonLocation lastActiveDate] */

undefined8 FUN_1092214c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1092214c8; end: 1092214cf; -[SCMapPersonLocation locality] */

undefined8 FUN_1092214c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1092214d0; end: 1092214d7; -[SCMapPersonLocation venueName] */

undefined8 FUN_1092214d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1092214d8; end: 1092214df; -[SCMapPersonLocation sticker] */

undefined8 FUN_1092214d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1092214e0; end: 1092214e7; -[SCMapPersonLocation status] */

undefined8 FUN_1092214e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1092214e8; end: 1092214ef; -[SCMapPersonLocation coordinate] */

undefined1  [16] FUN_1092214e8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x78);
}



/* Entry: 1092214f0; end: 1092214f7; -[SCMapPersonLocation context] */

undefined8 FUN_1092214f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1092214f8; end: 1092214ff; -[SCMapPersonLocation venueId] */

undefined8 FUN_1092214f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 109221500; end: 109221507; -[SCMapPersonLocation batteryLevel] */

undefined4 FUN_109221500(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 109221508; end: 10922150f; -[SCMapPersonLocation accessories] */

undefined8 FUN_109221508(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 109221510; end: 109221517; -[SCMapPersonLocation isSharingBackgroundLocation] */

undefined1 FUN_109221510(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 109221518; end: 10922159b; -[SCMapPersonLocation .cxx_destruct] */

void FUN_109221518(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10922159c; end: 109221683; -[SCMapPersonLocationAccessory initWithIdentifier:type:content:name:] */

undefined1 *
FUN_10922159c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112701168;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109221684; end: 1092216a7; -[SCMapPersonLocationAccessory copyWithZone:] */

undefined8 FUN_109221684(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1092216a8; end: 10922172b; -[SCMapPersonLocationAccessory hash] */

undefined8 * FUN_1092216a8(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar2;
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
LAB_1092217d4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1092217e0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[2] == param_3[2])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_1092217e0;
          }
          goto LAB_1092217d4;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1092217e0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10922172c; end: 1092217fb; -[SCMapPersonLocationAccessory isEqual:] */

long FUN_10922172c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1092217d4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1092217e0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_1092217e0;
          }
          goto LAB_1092217d4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1092217e0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1092217fc; end: 109221803; -[SCMapPersonLocationAccessory identifier] */

undefined8 FUN_1092217fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109221804; end: 10922180b; -[SCMapPersonLocationAccessory type] */

undefined8 FUN_109221804(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10922180c; end: 109221813; -[SCMapPersonLocationAccessory content] */

undefined8 FUN_10922180c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109221814; end: 10922181b; -[SCMapPersonLocationAccessory name] */

undefined8 FUN_109221814(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10922181c; end: 109221857; -[SCMapPersonLocationAccessory .cxx_destruct] */

void FUN_10922181c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109221858; end: 1092218c3; +[SCMapPersonLocationAccessoryContent contentObjectWithContentObject:] */

void FUN_109221858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bf308;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1092218c4; end: 109221927; +[SCMapPersonLocationAccessoryContent urlWithUrl:] */

void FUN_1092218c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bf308;
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



/* Entry: 109221928; end: 10922194b; -[SCMapPersonLocationAccessoryContent copyWithZone:] */

undefined8 FUN_109221928(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10922194c; end: 1092219c3; -[SCMapPersonLocationAccessoryContent hash] */

void FUN_10922194c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_112701170;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1092219c4; end: 109221a07; -[SCMapPersonLocationAccessoryContent internalInit] */

void FUN_1092219c4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112701170;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109221a08; end: 109221abf; -[SCMapPersonLocationAccessoryContent isEqual:] */

long FUN_109221a08(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109221a98:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109221aa4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_109221aa4;
        }
        goto LAB_109221a98;
      }
    }
    lVar3 = 0;
  }
LAB_109221aa4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109221ac0; end: 109221b43; -[SCMapPersonLocationAccessoryContent matchUrl:contentObject:] */

void FUN_109221ac0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_109221b28;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_109221b28;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_109221b28:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109221b44; end: 109221b73; -[SCMapPersonLocationAccessoryContent .cxx_destruct] */

void FUN_109221b44(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 109221b74; end: 109221d0b; -[SCMapPersonLocationCluster initWithPersonLocations:coordinate:floorRemoteImageURL:propRemoteImageURL:mapEffect:isCrowd:clusterId:isTombstone:stickerID:] */

undefined1 *
FUN_109221b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_13);
  puStack_78 = PTR_PTR_112701178;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x40) = param_1;
    *(undefined8 *)((long)puVar1 + 0x48) = param_2;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_11;
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 109221d0c; end: 109221d2f; -[SCMapPersonLocationCluster copyWithZone:] */

undefined8 FUN_109221d0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109221d30; end: 109221e1f; -[SCMapPersonLocationCluster hash] */

undefined8 * FUN_109221d30(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_70 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_68 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_78;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 != param_3) {
    puVar7 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_109221f60;
    puVar7 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((((ulong)puVar4 & 1) == 0) ||
          ((((*(char *)(puVar3 + 1) != *(char *)(param_3 + 1) ||
             (*(char *)((long)puVar3 + 9) != *(char *)((long)param_3 + 9))) ||
            (2.220446049250313e-16 < ABS((double)puVar3[8] - (double)param_3[8]))) ||
           (2.220446049250313e-16 < ABS((double)puVar3[9] - (double)param_3[9]))))) ||
         ((lVar5 = puVar3[2], lVar5 != param_3[2] && (func_0x00010c071ae0(), (int)lVar5 == 0)))) ||
        ((lVar5 = puVar3[3], lVar5 != param_3[3] && (func_0x00010c071ae0(), (int)lVar5 == 0)))) ||
       ((((lVar5 = puVar3[4], lVar5 != param_3[4] && (func_0x00010c071ae0(), (int)lVar5 == 0)) ||
         ((lVar5 = puVar3[5], lVar5 != param_3[5] && (func_0x00010c071ae0(), (int)lVar5 == 0)))) ||
        ((lVar5 = puVar3[6], lVar5 != param_3[6] && (func_0x00010c071ae0(), (int)lVar5 == 0)))))) {
      puVar7 = (undefined8 *)0x0;
      goto LAB_109221f60;
    }
    puVar7 = (undefined8 *)puVar3[7];
    if (puVar7 != (undefined8 *)param_3[7]) {
      func_0x00010c071ae0();
      goto LAB_109221f60;
    }
  }
  puVar7 = (undefined8 *)0x1;
LAB_109221f60:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 109221e20; end: 109221f7b; -[SCMapPersonLocationCluster isEqual:] */

long FUN_109221e20(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109221f60;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((((uVar2 & 1) == 0) ||
          ((((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
             (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
            (2.220446049250313e-16 < ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40)))
            ) || (2.220446049250313e-16 <
                  ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48)))))) ||
         ((lVar3 = *(long *)(param_1 + 0x10), lVar3 != *(long *)(param_3 + 0x10) &&
          (func_0x00010c071ae0(), (int)lVar3 == 0)))) ||
        ((lVar3 = *(long *)(param_1 + 0x18), lVar3 != *(long *)(param_3 + 0x18) &&
         (func_0x00010c071ae0(), (int)lVar3 == 0)))) ||
       ((((lVar3 = *(long *)(param_1 + 0x20), lVar3 != *(long *)(param_3 + 0x20) &&
          (func_0x00010c071ae0(), (int)lVar3 == 0)) ||
         ((lVar3 = *(long *)(param_1 + 0x28), lVar3 != *(long *)(param_3 + 0x28) &&
          (func_0x00010c071ae0(), (int)lVar3 == 0)))) ||
        ((lVar3 = *(long *)(param_1 + 0x30), lVar3 != *(long *)(param_3 + 0x30) &&
         (func_0x00010c071ae0(), (int)lVar3 == 0)))))) {
      lVar3 = 0;
      goto LAB_109221f60;
    }
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 != *(long *)(param_3 + 0x38)) {
      func_0x00010c071ae0();
      goto LAB_109221f60;
    }
  }
  lVar3 = 1;
LAB_109221f60:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109221f7c; end: 109221f83; -[SCMapPersonLocationCluster personLocations] */

undefined8 FUN_109221f7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109221f84; end: 109221f8b; -[SCMapPersonLocationCluster coordinate] */

undefined1  [16] FUN_109221f84(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x40);
}



/* Entry: 109221f8c; end: 109221f93; -[SCMapPersonLocationCluster floorRemoteImageURL] */

undefined8 FUN_109221f8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109221f94; end: 109221f9b; -[SCMapPersonLocationCluster propRemoteImageURL] */

undefined8 FUN_109221f94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109221f9c; end: 109221fa3; -[SCMapPersonLocationCluster mapEffect] */

undefined8 FUN_109221f9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109221fa4; end: 109221fab; -[SCMapPersonLocationCluster isCrowd] */

undefined1 FUN_109221fa4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 109221fac; end: 109221fb3; -[SCMapPersonLocationCluster clusterId] */

undefined8 FUN_109221fac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109221fb4; end: 109221fbb; -[SCMapPersonLocationCluster isTombstone] */

undefined1 FUN_109221fb4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 109221fbc; end: 109221fc3; -[SCMapPersonLocationCluster stickerID] */

undefined8 FUN_109221fbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


