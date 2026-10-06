/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c5909c; end: 106c59203;  */

void FUN_106c5909c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_1);
  puVar5 = auStack_e8;
  puVar2 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar7 = *plStack_120;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        lVar6 = *(long *)(lStack_128 + (long)puVar8 * 8);
        func_0x00010c08fa60();
        if (lVar6 != 0) {
          puVar3 = PTR_PTR_1126d1b38;
          func_0x00010c266d40();
          _objc_retainAutoreleasedReturnValue();
          if (puVar3 != (undefined *)0x0) {
            func_0x00010c1d0640(puVar1);
          }
          _objc_release(puVar3);
        }
        puVar8 = puVar8 + 1;
      } while (puVar2 != puVar8);
      puVar5 = auStack_e8;
      puVar2 = param_1;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    _objc_retain(puVar4);
    _objc_retain(param_2);
    puVar2 = param_1;
    _objc_retain(param_1);
    func_0x000106c78f10();
    puVar1 = param_1;
    FUN_106c592a8(param_1,param_2,puVar4,puVar5,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(param_2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c59204; end: 106c592a7;  */

void FUN_106c59204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_1;
  _objc_retain(param_1);
  func_0x000106c78f10();
  uVar2 = param_1;
  FUN_106c592a8(param_1,param_2,param_3,param_4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c592a8; end: 106c59517;  */

void FUN_106c592a8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d1b40;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1697a0();
  _objc_release(param_3);
  func_0x00010c1e9480(puVar1);
  _objc_release(param_4);
  puVar2 = param_1;
  FUN_106c59050();
  if ((int)puVar2 == 0) {
    puVar2 = param_1;
    FUN_106c58af0(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e81a0(puVar1);
  }
  else {
    puVar2 = PTR_PTR_1126d1b48;
    _objc_opt_new(PTR_PTR_1126d1b48);
    func_0x00010c195460();
    puVar3 = param_1;
    func_0x00010c0f67c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e3bc0(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b0458;
    _objc_retain();
    _objc_alloc_init(puVar3);
    func_0x00010c26f320(puVar4);
    _objc_release(puVar4);
    func_0x000106c78f1c(param_5);
    func_0x00010c1f90c0(puVar3);
    func_0x00010c198d60(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar4);
    func_0x00010c1c8a20(puVar1);
    puVar3 = PTR_PTR_1126d1b10;
    _objc_opt_new(PTR_PTR_1126d1b10);
    func_0x00010c1e52e0();
    puVar4 = param_1;
    func_0x00010c279820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219600(puVar3);
    _objc_release(puVar4);
    puVar4 = param_1;
    func_0x00010c0f67c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e3bc0(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010c1e81a0(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c59518; end: 106c59627;  */

void FUN_106c59518(undefined *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae748;
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  FUN_106c59050();
  _objc_release(param_1);
  if ((int)puVar3 != 0) {
    if (param_2 - 1U < 4) {
      puVar3 = (&PTR_PTR_11096b958)[param_2 - 1U];
    }
    else {
      puVar3 = (undefined *)0x0;
    }
    func_0x00010c08fa60();
    param_1 = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0) {
      param_1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9140(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar2) {
    ___stack_chk_fail();
    puVar3 = param_1;
    _objc_retain();
    func_0x000106c78f04();
    puVar1 = param_1;
    FUN_106c59518(param_1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c59628; end: 106c596bf;  */

void FUN_106c59628(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  _objc_retain();
  func_0x000106c78f04();
  uVar2 = param_1;
  FUN_106c59518(param_1,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c596c0; end: 106c597c7;  */

void FUN_106c596c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106c597c8;
  uStack_30 = 0x106c597d8;
  uStack_28 = 0;
  func_0x00010c0c0700(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c597c8; end: 106c597e7;  */

void FUN_106c597c8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106c597e8; end: 106c5981f;  */

void FUN_106c597e8(long param_1,undefined8 param_2)

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



/* Entry: 106c59820; end: 106c5982f;  */

void FUN_106c59820(void)

{
  return;
}



/* Entry: 106c59830; end: 106c59953;  */

void FUN_106c59830(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106c597c8;
  uStack_30 = 0x106c597d8;
  uStack_28 = 0;
  func_0x00010c0c0700(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c59954; end: 106c5995b;  */

void FUN_106c59954(void)

{
  return;
}



/* Entry: 106c5995c; end: 106c599cb;  */

void FUN_106c5995c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c599cc; end: 106c599d7;  */

void FUN_106c599cc(void)

{
  return;
}



/* Entry: 106c599d8; end: 106c59b97; -[SCPreferences metadataForTransaction:] */

void FUN_106c599d8(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010c279860(), lVar1 == 3)) {
    uVar7 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c279860();
    if (lVar1 == 1) {
      lVar1 = param_3;
      func_0x00010c279820();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c08fa60();
      _objc_release(lVar1);
      if (lVar2 != 0) {
        lVar1 = param_3;
        func_0x00010c279820(param_3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = &PTR____CFConstantStringClassReference_110e7c8f8;
        func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e7c8f8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        uVar7 = param_1;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126d1b50;
        _objc_opt_class(PTR_PTR_1126d1b50);
        uVar5 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar4);
        uVar6 = uVar7;
        if ((uVar5 & 1) == 0) {
          uVar6 = 0;
        }
        _objc_retain(uVar6);
        _objc_release(uVar7);
        _objc_release(ppuVar3);
        if (uVar6 != 0) goto LAB_106c59b78;
      }
    }
    lVar1 = param_3;
    func_0x00010c0f67c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e7c918;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e7c918);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d1b50;
    _objc_opt_class(PTR_PTR_1126d1b50);
    uVar6 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar4);
    uVar7 = param_1;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(param_1);
    _objc_release(ppuVar3);
  }
LAB_106c59b78:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 106c59b98; end: 106c59ceb; -[SCPreferences setMetadata:forTransaction:] */

void FUN_106c59b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 != 0) && (lVar1 = param_4, func_0x00010c279860(), lVar1 != 3)) {
    lVar1 = param_4;
    func_0x00010c279860();
    if (lVar1 == 1) {
      lVar1 = param_4;
      func_0x00010c279820();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c08fa60();
      _objc_release(lVar1);
      if (lVar2 != 0) {
        lVar1 = param_4;
        func_0x00010c279820(param_4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = &PTR____CFConstantStringClassReference_110e7c8f8;
        func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e7c8f8,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        func_0x00010c1d0560(param_1,param_2,param_3,ppuVar3);
        _objc_release(ppuVar3);
      }
    }
    lVar1 = param_4;
    func_0x00010c0f67c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e7c918;
    func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e7c918,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c1d0560(param_1,param_2,param_3,ppuVar3);
    _objc_release(ppuVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c59cec; end: 106c59d5f; -[SCPlusStoreKitObserverJobProcessor initWithStoreKitService:] */

undefined1 * FUN_106c59cec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5f18;
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



/* Entry: 106c59d60; end: 106c59dfb; -[SCPlusStoreKitObserverJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8 FUN_106c59d60(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long in_x5;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126d1af0;
  uVar4 = *(ulong *)(param_1 + 8);
  _objc_retain(uVar4);
  _objc_retain(in_x5);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  func_0x00010befba20(uVar1);
  _objc_release(uVar1);
  (**(code **)(in_x5 + 0x10))(in_x5,0,0);
  _objc_release(in_x5);
  return 0;
}



/* Entry: 106c59dfc; end: 106c59e07; -[SCPlusStoreKitObserverJobProcessor .cxx_destruct] */

void FUN_106c59dfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c59e08; end: 106c59e5b; -[SCPlusStoreKitServiceImpl dealloc] */

void FUN_106c59e08(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0xb0));
  func_0x00010c12eca0(*(undefined8 *)(param_1 + 0x50));
  puStack_28 = PTR_PTR_1126f5f20;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106c59e5c; end: 106c59f03; -[SCPlusStoreKitServiceImpl addStoreKitObserver] */

void FUN_106c59e5c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106c59f04; end: 106c59f2f;  */

void FUN_106c59f04(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc86e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c59f30; end: 106c59f37; -[SCPlusStoreKitServiceImpl transactionsObservable] */

void FUN_106c59f30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 106c59f38; end: 106c5a093; -[SCPlusStoreKitServiceImpl validateProductIdentifier:] */

void FUN_106c59f38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be94c60(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106c5a018;
  puStack_40 = &UNK_110892440;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c0b8600(param_1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c5a094; end: 106c5a2db;  */

void FUN_106c5a094(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126d1bf0;
  puVar7 = (undefined *)0x0;
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_alloc();
    lVar2 = param_1;
    func_0x00010c112a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106c5e6d0();
    lVar3 = param_1;
    func_0x00010c112b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf5de80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c112b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c09e220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02bf80();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar7 = PTR_PTR_1126d1bf8;
    _objc_alloc();
    lVar2 = param_1;
    func_0x00010c115ea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c09e900(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c09e4e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c2608a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x000106c5e760();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c069ac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    FUN_106c5e7d4();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010bf813e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar11 = lVar10;
    func_0x000100504554(lVar10,&PTR___NSConcreteGlobalBlock_11096be70);
    _objc_release(lVar10);
    func_0x00010c03a880(puVar7);
    _objc_release(lVar11);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106c5a2dc; end: 106c5a327; -[SCPlusStoreKitServiceImpl validateProductIdentifiers:] */

void FUN_106c5a2dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be94c60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c5a328; end: 106c5a34f;  */

void FUN_106c5a328(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bd869d0(param_2,&PTR___NSConcreteGlobalBlock_11096bb20,
                      &PTR___NSConcreteGlobalBlock_11096bb60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c5a350; end: 106c5a377;  */

void FUN_106c5a350(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106c5a378; end: 106c5a37f;  */

void FUN_106c5a378(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126d1bf0;
  puVar7 = (undefined *)0x0;
  if (param_2 != 0) {
    _objc_retain(param_2);
    _objc_alloc();
    lVar2 = param_2;
    func_0x00010c112a80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106c5e6d0();
    lVar3 = param_2;
    func_0x00010c112b80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf5de80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010c112b80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c09e220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02bf80();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar7 = PTR_PTR_1126d1bf8;
    _objc_alloc();
    lVar2 = param_2;
    func_0x00010c115ea0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c09e900(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c09e4e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010c2608a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x000106c5e760();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_2;
    func_0x00010c069ac0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    FUN_106c5e7d4();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_2;
    func_0x00010bf813e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar11 = lVar10;
    func_0x000100504554(lVar10,&PTR___NSConcreteGlobalBlock_11096be70);
    _objc_release(lVar10);
    func_0x00010c03a880(puVar7);
    _objc_release(lVar11);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106c5a380; end: 106c5a4eb; -[SCPlusStoreKitServiceImpl purchaseSubscription:promotionalOffer:referralId:] */

void FUN_106c5a380(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126d1b50;
    func_0x00010c260a60(PTR_PTR_1126d1b50,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126d1b98;
  _objc_alloc();
  uVar4 = param_3;
  func_0x00010c115ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a8c0(puVar2,param_2,uVar4,puVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106c5a4ec;
  puStack_78 = &UNK_11084c4a0;
  uStack_70 = param_3;
  puStack_68 = puVar2;
  lStack_60 = param_1;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar4,param_2,&puStack_90);
  uVar4 = uStack_58;
  _objc_retain(puVar2);
  _objc_release(uVar4);
  _objc_release(uStack_70);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c5a4ec; end: 106c5a59b;  */

void FUN_106c5a4ec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000106c58498();
  _objc_release(lVar1);
  if (lVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be84970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s__purchaseProduct_handle_promotio_11257ebf8,
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x38),0);
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c117d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e7c978;
  FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7c978);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar3);
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106c5a59c; end: 106c5a6db; -[SCPlusStoreKitServiceImpl purchaseGift:recipientUserId:externalId:] */

void FUN_106c5a59c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d1b50;
  func_0x00010bfcc9c0(PTR_PTR_1126d1b50,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d1b98;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010c115ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a8c0(puVar2,param_2,uVar3,puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106c5a6dc;
  puStack_68 = &UNK_11084c4a0;
  uStack_60 = param_3;
  puStack_58 = puVar2;
  lStack_50 = param_1;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_80);
  uVar3 = uStack_48;
  _objc_retain(puVar2);
  _objc_release(uVar3);
  _objc_release(uStack_60);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c5a6dc; end: 106c5a78b;  */

void FUN_106c5a6dc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000106c58498();
  _objc_release(lVar1);
  if (lVar2 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be84970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s__purchaseProduct_handle_promotio_11257ebf8,
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),0,
               *(undefined8 *)(param_1 + 0x38));
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c117d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e7c978;
  FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7c978);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar3);
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106c5a78c; end: 106c5a8d3; -[SCPlusStoreKitServiceImpl purchaseStreakRestore:conversationId:traceId:externalId:] */

void FUN_106c5a78c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d1b50;
  func_0x00010c25c2a0(PTR_PTR_1126d1b50,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d1b98;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010c115ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a8c0(puVar2,param_2,uVar3,puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106c5a8d4;
  puStack_68 = &UNK_11084c4a0;
  uStack_60 = param_3;
  puStack_58 = puVar2;
  lStack_50 = param_1;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_80);
  uVar3 = uStack_48;
  _objc_retain(puVar2);
  _objc_release(uVar3);
  _objc_release(uStack_60);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c5a8d4; end: 106c5a983;  */

void FUN_106c5a8d4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000106c58498();
  _objc_release(lVar1);
  if (lVar2 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010be84970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s__purchaseProduct_handle_promotio_11257ebf8,
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),0,
               *(undefined8 *)(param_1 + 0x38));
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c117d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e7c978;
  FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7c978);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar3);
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106c5a984; end: 106c5aac3; -[SCPlusStoreKitServiceImpl purchaseBulkStreakRestore:traceId:externalId:] */

void FUN_106c5a984(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d1b50;
  func_0x00010bf24920(PTR_PTR_1126d1b50,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d1b98;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010c115ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a8c0(puVar2,param_2,uVar3,puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106c5aac4;
  puStack_68 = &UNK_11084c4a0;
  uStack_60 = param_3;
  puStack_58 = puVar2;
  lStack_50 = param_1;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_80);
  uVar3 = uStack_48;
  _objc_retain(puVar2);
  _objc_release(uVar3);
  _objc_release(uStack_60);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c5aac4; end: 106c5ab73;  */

void FUN_106c5aac4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000106c58498();
  _objc_release(lVar1);
  if (lVar2 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010be84970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s__purchaseProduct_handle_promotio_11257ebf8,
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),0,
               *(undefined8 *)(param_1 + 0x38));
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c117d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e7c978;
  FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7c978);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar3);
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106c5ab74; end: 106c5acab; -[SCPlusStoreKitServiceImpl purchaseDream:generationId:] */

void FUN_106c5ab74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d1b50;
  func_0x00010bf8a460(PTR_PTR_1126d1b50,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d1b98;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010c115ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a8c0(puVar2,param_2,uVar3,puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106c5acac;
  puStack_68 = &UNK_11084c4a0;
  uStack_60 = param_3;
  puStack_58 = puVar2;
  uStack_50 = param_4;
  lStack_48 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_80);
  _objc_retain(puVar2);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c5acac; end: 106c5ad6f;  */

void FUN_106c5acac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000106c58498();
  _objc_release(lVar1);
  if (lVar2 == 5) {
    puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
    func_0x00010c057ea0();
    func_0x00010be84960(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),0,puVar3);
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x28);
    func_0x00010c117d80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e7c978;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7c978);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(puVar3,param_2,ppuVar4);
    _objc_release(ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106c5ad70; end: 106c5aeb3; -[SCPlusStoreKitServiceImpl purchaseBitmojiContent:contentId:domainInfo:] */

void FUN_106c5ad70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d1b50;
  func_0x00010bf1c6e0(PTR_PTR_1126d1b50,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d1b98;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010c115ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a8c0(puVar2,param_2,uVar3,puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106c5aeb4;
  puStack_68 = &UNK_11084c4a0;
  uStack_60 = param_3;
  puStack_58 = puVar2;
  lStack_50 = param_1;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_80);
  uVar3 = uStack_48;
  _objc_retain(puVar2);
  _objc_release(uVar3);
  _objc_release(uStack_60);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c5aeb4; end: 106c5af63;  */

void FUN_106c5aeb4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000106c58498();
  _objc_release(lVar1);
  if (lVar2 == 6) {
                    /* WARNING: Could not recover jumptable at 0x00010be84970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x30),PTR_s__purchaseProduct_handle_promotio_11257ebf8,
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),0,
               *(undefined8 *)(param_1 + 0x38));
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c117d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e7c978;
  FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7c978);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar3);
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106c5af64; end: 106c5b09b; -[SCPlusStoreKitServiceImpl purchaseALCProduct:entityId:] */

void FUN_106c5af64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d1b50;
  func_0x00010beec080(PTR_PTR_1126d1b50,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d1b98;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010c115ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a8c0(puVar2,param_2,uVar3,puVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106c5b09c;
  puStack_68 = &UNK_11084c4a0;
  uStack_60 = param_3;
  puStack_58 = puVar2;
  uStack_50 = param_4;
  lStack_48 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_80);
  _objc_retain(puVar2);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c5b09c; end: 106c5b15f;  */

void FUN_106c5b09c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000106c58498();
  _objc_release(lVar1);
  if (lVar2 == 7) {
    puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
    func_0x00010c057ea0();
    func_0x00010be84960(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),0,puVar3);
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x28);
    func_0x00010c117d80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e7c978;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7c978);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(puVar3,param_2,ppuVar4);
    _objc_release(ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106c5b160; end: 106c5b2bb; -[SCPlusStoreKitServiceImpl restorePurchases] */

void FUN_106c5b160(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126d1ba0;
  _objc_opt_new(PTR_PTR_1126d1ba0);
  puVar3 = puVar2;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c297260(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c5b2bc; end: 106c5b37f;  */

void FUN_106c5b2bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
    return;
  }
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010be11080(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 106c5b380; end: 106c5b48f;  */

void FUN_106c5b380(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_106c5b430;
  if (param_3 != 0) {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
    goto LAB_106c5b430;
  }
  puVar1 = param_2;
  func_0x00010bf987e0();
  if ((int)puVar1 == 1) {
    puVar1 = PTR_PTR_1126d1ba8;
    _objc_alloc(PTR_PTR_1126d1ba8);
LAB_106c5b414:
    func_0x00010c055880();
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    func_0x00010bdc86e0(*(undefined8 *)(param_1 + 0x20));
    lVar4 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar4 + 0xc0) != 0) {
      puVar1 = PTR_PTR_1126d1ba8;
      _objc_alloc(PTR_PTR_1126d1ba8);
      goto LAB_106c5b414;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar4 + 0xc0);
    *(undefined8 *)(lVar4 + 0xc0) = uVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    puVar1 = param_2;
    func_0x00010bf9e6c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13c2a0(uVar2);
  }
  _objc_release(puVar1);
LAB_106c5b430:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c5b490; end: 106c5b6f7; -[SCPlusStoreKitServiceImpl subscribeWithTransactionId:productId:] */

void FUN_106c5b490(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSBundle_1126aea78;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  FUN_106c6723c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar5 = PTR_PTR_1126d1b10;
  _objc_opt_new(PTR_PTR_1126d1b10);
  func_0x00010c1e52e0();
  func_0x00010c1e3bc0(puVar5,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c219600(puVar5,param_2,param_3);
  _objc_release(param_3);
  ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar3 = ppuVar4;
  }
  func_0x00010c1e81a0(puVar5,param_2,ppuVar3);
  puVar6 = PTR_PTR_1126d1b40;
  _objc_opt_new(PTR_PTR_1126d1b40);
  func_0x00010c1e81a0();
  puVar7 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar8 = PTR_PTR_1126ae988;
  uVar12 = *(undefined8 *)(param_1 + 0x98);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  _objc_retain(uVar12);
  _objc_alloc(puVar8);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106c5b6f8;
  puStack_80 = &UNK_11096bbe0;
  puVar9 = PTR_PTR_1126d1bb0;
  puStack_78 = puVar7;
  uStack_70 = uVar1;
  uStack_68 = uVar2;
  _objc_opt_class(PTR_PTR_1126d1bb0);
  func_0x00010c0199c0(puVar8,param_2,&puStack_98,puVar9);
  uVar10 = uVar12;
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  func_0x00010bf63640(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar10,param_2,&PTR____CFConstantStringClassReference_110e7c998,puVar9,puVar11
                      ,puVar8);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(uVar10);
  puVar9 = puVar7;
  func_0x00010bfbc3e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar12);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106c5b6f8; end: 106c5b827;  */

void FUN_106c5b6f8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    uVar3 = param_2;
    func_0x00010bf987e0();
    if ((int)uVar3 == 0) {
      puVar1 = *(undefined **)(param_1 + 0x28);
      func_0x00010c269d40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26e7a0(param_2);
      func_0x00010c252d60(param_2);
      puVar2 = puVar1;
      func_0x00010bfb5040(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260();
      _objc_release(puVar2);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60(uVar3);
    }
    _objc_release(puVar1);
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_2);
  return;
}



/* Entry: 106c5b828; end: 106c5b86b;  */

void FUN_106c5b828(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c5b86c; end: 106c5b877; -[SCPlusStoreKitServiceImpl latestSubscriptionTransactionWithRequestor:] */

void FUN_106c5b86c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08b230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d1bb8,PTR_s_latestSubscriptionTransaction__112600698);
  return;
}



/* Entry: 106c5b878; end: 106c5b947; -[SCPlusStoreKitServiceImpl eligibleOfferInfoWithRequestor:] */

void FUN_106c5b878(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e7c9b8,1,0);
  if ((int)uVar1 == 0) {
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106c5b948;
    puStack_30 = &UNK_110842e18;
    puStack_28 = puVar2;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_48);
    puVar3 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    puVar3 = PTR_PTR_1126d1bb8;
    func_0x00010bf8d520(PTR_PTR_1126d1bb8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c5b948; end: 106c5bb1b;  */

void FUN_106c5b948(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_106c671cc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c08fa60();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126d1be8;
    _objc_alloc(PTR_PTR_1126d1be8);
    func_0x00010c00f2a0();
    goto LAB_106c5baec;
  }
  puVar3 = puVar2;
  FUN_106c66724();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
LAB_106c5baa8:
    puVar1 = PTR_PTR_1126d1be8;
    _objc_alloc(PTR_PTR_1126d1be8);
    func_0x00010c00f2a0();
  }
  else {
    puVar1 = puVar3;
    func_0x00010bf24a60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf24a60();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c0720c0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
    if (((ulong)puVar6 & 1) == 0) goto LAB_106c5baa8;
    puVar1 = puVar3;
    func_0x00010c279880(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x0001006372a4();
    _objc_release(puVar1);
    puVar5 = puVar4;
    func_0x0001006372a4(puVar4,&PTR___NSConcreteGlobalBlock_11096bdf0);
    func_0x00010bf529e0();
    func_0x00010bf529e0(puVar4);
    puVar1 = PTR_PTR_1126d1be8;
    _objc_alloc(PTR_PTR_1126d1be8);
    func_0x00010c00f2a0();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
LAB_106c5baec:
  _objc_release(puVar2);
  func_0x00010bf43d60(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c5bb1c; end: 106c5bbd3; -[SCPlusStoreKitServiceImpl isLinkedToDeviceAccount] */

void FUN_106c5bb1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  func_0x00010be11080(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260();
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c5bbd4; end: 106c5bc97;  */

/* WARNING: Possible PIC construction at 0x000106c5bc60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106c5bc64) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_106c5bbd4(long param_1,int param_2,undefined **param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_3 == (undefined **)0x0) {
    func_0x00010bf987e0();
    if (param_2 < 1) {
      if (param_2 != -0x4524111) {
        if (param_2 != 0) {
          return;
        }
        uVar1 = *(undefined8 *)(param_1 + 0x20);
        puVar2 = PTR____kCFBooleanTrue_11034ab68;
LAB_106c5bc8c:
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_completeWithValue__1125ae900,puVar2);
        return;
      }
    }
    else {
      if (param_2 == 1) {
        uVar1 = *(undefined8 *)(param_1 + 0x20);
        puVar2 = PTR____kCFBooleanFalse_11034ab60;
        goto LAB_106c5bc8c;
      }
      if (param_2 != 2) {
        return;
      }
    }
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    param_3 = &PTR____CFConstantStringClassReference_110e7c9d8;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7c9d8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_completeWithError__1125ae8d0,param_3);
  return;
}



/* Entry: 106c5bc98; end: 106c5be7f; -[SCPlusStoreKitServiceImpl _fetchExternalUserIdApplyingSk2Policy:] */

void FUN_106c5bc98(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar3 = *(undefined **)(param_1 + 0x28);
  _objc_retain(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  if (param_3 == 0) {
    puVar1 = PTR_PTR_1126ae560;
    _objc_opt_new();
    func_0x00010c08b240(param_1,param_2,0xcb);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x106c5bde4;
    puStack_50 = &UNK_11096bc40;
    _objc_retain(puVar3);
    puStack_48 = puVar3;
    puStack_40 = puVar1;
    _objc_retain(uVar4);
    uStack_38 = uVar4;
    _objc_retain(puVar1);
    func_0x00010c297260(param_1,param_2,&puStack_68,uVar4);
    _objc_release(param_1);
    puVar2 = puVar1;
    func_0x00010bfbc3e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_38);
    _objc_release(puStack_40);
    _objc_release(puStack_48);
  }
  else {
    puVar1 = puVar3;
    func_0x00010c269d40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfa69e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c5be80; end: 106c5bed7; -[SCPlusStoreKitServiceImpl paymentQueue:updatedTransactions:] */

void FUN_106c5be80(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106c5bed8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x30),param_2,&puStack_38);
  return;
}



/* Entry: 106c5bed8; end: 106c5bf0f;  */

void FUN_106c5bed8(long param_1)

{
  func_0x00010bedce00(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be819e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be64e00(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bedac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateLifecycleObserver_1125944a8);
  return;
}



/* Entry: 106c5bf10; end: 106c5bf9f; -[SCPlusStoreKitServiceImpl paymentQueue:removedTransactions:] */

void FUN_106c5bf10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106c5bfa0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 106c5bfa0; end: 106c5c117;  */

void FUN_106c5bfa0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be64e00(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bedac00(*(undefined8 *)(param_1 + 0x20));
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x0001006372a4(lVar1,&PTR___NSConcreteGlobalBlock_11096be30);
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        lVar6 = *(long *)(lStack_128 + lVar8 * 8);
        lVar3 = lVar6;
        func_0x00010c279860();
        if (lVar3 == 1) {
          func_0x00010c279820();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar6;
          func_0x00010c08fa60();
          _objc_release(lVar6);
          if (lVar3 != 0) {
            uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
            func_0x00010c269d40(uVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1c7400();
            _objc_release(uVar4);
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  uVar4 = *(undefined8 *)(lVar1 + 0x30);
  _objc_retain(puVar5);
  func_0x00010c0f7fc0(uVar4);
  _objc_release(puVar5);
  _objc_release(puVar5);
  return;
}



/* Entry: 106c5c118; end: 106c5c29f; -[SCPlusStoreKitServiceImpl paymentQueueRestoreCompletedTransactionsFinished:] */

void FUN_106c5c118(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106c5c1a8;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 106c5c2a0; end: 106c5c2bf;  */

bool FUN_106c5c2a0(undefined8 param_1,long param_2)

{
  func_0x00010c279860(param_2);
  return param_2 == 3;
}



/* Entry: 106c5c2c0; end: 106c5c34f; -[SCPlusStoreKitServiceImpl paymentQueue:restoreCompletedTransactionsFailedWithError:] */

void FUN_106c5c2c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106c5c350;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_4;
  lStack_38 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 106c5c350; end: 106c5c383;  */

void FUN_106c5c350(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf43ca0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xc0),param_2,
                      *(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xc0);
  *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xc0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c5c384; end: 106c5c613; -[SCPlusStoreKitServiceImpl _resolveSKProductsForIdentifiers:] */

undefined ** FUN_106c5c384(long param_1,undefined **param_2,undefined **param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **unaff_x23;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  double dVar13;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined **ppuStack_2a0;
  undefined1 auStack_298 [8];
  undefined8 uStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_1d0;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  ppuVar2 = param_3;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    lVar10 = *plStack_110;
    do {
      ppuVar11 = (undefined **)0x0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x23 = *(undefined ***)(lStack_118 + (long)ppuVar11 * 8);
        puVar3 = (undefined1 *)unaff_x23;
        func_0x00010c08fa60();
        if (puVar3 != (undefined1 *)0x0) {
          func_0x00010befa120(puVar7);
        }
        ppuVar11 = (undefined **)((long)ppuVar11 + 1);
      } while (ppuVar2 != ppuVar11);
      ppuVar2 = param_3;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(param_3);
  puVar5 = puVar7;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    ppuVar2 = (undefined **)PTR_PTR_1126ae558;
    func_0x00010bfe9ca0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_106c78f40();
    ppuVar2 = (undefined **)PTR_PTR_1126ae558;
    if ((int)puVar5 == 0) {
      ppuVar11 = (undefined **)PTR_PTR_1126ae560;
      _objc_opt_new();
      _objc_initWeak(&puStack_128,param_1);
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_158 = 0xc2000000;
      pcStack_150 = FUN_106c5c614;
      puStack_148 = &UNK_110848218;
      param_2 = &puStack_128;
      _objc_copyWeak(auStack_130);
      ppuStack_140 = ppuVar11;
      _objc_retain(puVar7);
      puStack_138 = puVar7;
      func_0x00010c0f7fc0(uVar8);
      ppuVar2 = ppuVar11;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_138);
      _objc_destroyWeak(auStack_130);
      _objc_destroyWeak(&puStack_128);
      _objc_release(ppuVar11);
      unaff_x23 = &puStack_160;
    }
    else {
      puVar5 = puVar7;
      FUN_106c5909c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
  }
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x23 + 0x30));
  _objc_destroyWeak(&puStack_128);
  __Unwind_Resume();
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_3 + 6;
  _objc_loadWeakRetained();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar11 = (undefined **)param_3[4];
    ppuVar12 = &PTR____CFConstantStringClassReference_110e7c9f8;
    FUN_106c7723c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar12;
    func_0x00010bf43ca0(ppuVar11);
    _objc_release(ppuVar12);
  }
  else {
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    dVar13 = 0.0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    plStack_280 = (long *)0x0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    ppuVar9 = (undefined **)param_3[5];
    _objc_retain(ppuVar9);
    ppuVar4 = ppuVar9;
    func_0x00010bf52a60();
    ppuVar11 = param_3;
    if (ppuVar4 != (undefined **)0x0) {
      lVar10 = *plStack_280;
      do {
        ppuVar11 = (undefined **)0x0;
        do {
          if (*plStack_280 != lVar10) {
            _objc_enumerationMutation(ppuVar9);
          }
          puVar5 = ppuVar2[0x19];
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = ppuVar2[0x1a];
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if ((puVar5 == (undefined *)0x0 || puVar6 == (undefined *)0x0) ||
             (func_0x00010c26f3a0(puVar6), dVar13 <= -120.0)) {
            func_0x00010befa120(puVar7);
          }
          else {
            func_0x00010c1d0640(ppuVar12);
          }
          _objc_release(puVar6);
          _objc_release(puVar5);
          ppuVar11 = (undefined **)((long)ppuVar11 + 1);
        } while (ppuVar4 != ppuVar11);
        ppuVar4 = ppuVar9;
        func_0x00010bf52a60();
      } while (ppuVar4 != (undefined **)0x0);
    }
    _objc_release(ppuVar9);
    puVar5 = puVar7;
    func_0x00010bf529e0();
    if (puVar5 == (undefined *)0x0) {
      ppuVar4 = ppuVar12;
      func_0x00010bf43d60(param_3[4]);
    }
    else {
      puVar5 = puVar7;
      FUN_106c58704();
      _objc_retainAutoreleasedReturnValue();
      puStack_2c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2c0 = 0xc2000000;
      pcStack_2b8 = FUN_106c5c8f4;
      puStack_2b0 = &UNK_11089aa30;
      puStack_2a8 = param_3[4];
      ppuVar11 = &puStack_2c8;
      param_2 = param_3 + 6;
      _objc_copyWeak(auStack_298);
      _objc_retain(ppuVar12);
      ppuVar4 = &puStack_2c8;
      ppuStack_2a0 = ppuVar12;
      func_0x00010c297260(puVar5);
      _objc_release(puVar5);
      _objc_release(ppuStack_2a0);
      _objc_destroyWeak(auStack_298);
    }
    _objc_release(puVar7);
    _objc_release(ppuVar12);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d0) {
    ___stack_chk_fail();
    _objc_destroyWeak(ppuVar11 + 6);
    __Unwind_Resume();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_2);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar11 = ppuVar2 + 6;
      _objc_loadWeakRetained();
      if ((ppuVar11 != (undefined **)0x0) &&
         (ppuVar4 = param_2, func_0x00010bf529e0(), ppuVar4 != (undefined **)0x0)) {
        puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_2);
        ppuVar4 = param_2;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (ppuVar4 != (undefined **)0x0) {
          ppuVar12 = (undefined **)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(param_2);
            }
            ppuVar9 = param_2;
            func_0x00010c0e00e0(param_2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppuVar11[0x19]);
            _objc_release(ppuVar9);
            func_0x00010c1d0640(ppuVar11[0x1a]);
            ppuVar12 = (undefined **)((long)ppuVar12 + 1);
          } while (ppuVar4 != ppuVar12);
          ppuVar4 = param_2;
          func_0x00010bf52a60();
        }
        _objc_release(param_2);
        _objc_release(puVar7);
      }
      puVar7 = ppuVar2[5];
      func_0x00010c0d3c80();
      if (param_2 != (undefined **)0x0) {
        func_0x00010bef7f60(puVar7);
      }
      func_0x00010bf43d60(ppuVar2[4]);
      _objc_release(puVar7);
      _objc_release(ppuVar11);
    }
    else {
      func_0x00010bf43ca0(ppuVar2[4]);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      return param_2;
    }
    ___stack_chk_fail();
    puVar6 = param_2[10];
    func_0x00010c279880(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x0001006372a4();
    puVar5 = puVar7;
    func_0x00010bf529e0();
    _objc_release(puVar7);
    _objc_release(puVar6);
    return (undefined **)(ulong)(puVar5 != (undefined *)0x0);
  }
  return ppuVar2;
}



/* Entry: 106c5c614; end: 106c5c8f3;  */

undefined ** FUN_106c5c614(undefined **param_1,undefined **param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  double dVar11;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_1 + 6;
  _objc_loadWeakRetained();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar7 = (undefined **)param_1[4];
    ppuVar9 = &PTR____CFConstantStringClassReference_110e7c9f8;
    FUN_106c7723c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar9;
    func_0x00010bf43ca0(ppuVar7);
    _objc_release(ppuVar9);
  }
  else {
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    dVar11 = 0.0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    ppuVar8 = (undefined **)param_1[5];
    _objc_retain(ppuVar8);
    ppuVar3 = ppuVar8;
    func_0x00010bf52a60();
    ppuVar7 = param_1;
    if (ppuVar3 != (undefined **)0x0) {
      lVar10 = *plStack_120;
      do {
        ppuVar7 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(ppuVar8);
          }
          puVar4 = ppuVar2[0x19];
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = ppuVar2[0x1a];
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if ((puVar4 == (undefined *)0x0 || puVar5 == (undefined *)0x0) ||
             (func_0x00010c26f3a0(puVar5), dVar11 <= -120.0)) {
            func_0x00010befa120(puVar6);
          }
          else {
            func_0x00010c1d0640(ppuVar9);
          }
          _objc_release(puVar5);
          _objc_release(puVar4);
          ppuVar7 = (undefined **)((long)ppuVar7 + 1);
        } while (ppuVar3 != ppuVar7);
        ppuVar3 = ppuVar8;
        func_0x00010bf52a60();
      } while (ppuVar3 != (undefined **)0x0);
    }
    _objc_release(ppuVar8);
    puVar4 = puVar6;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      ppuVar3 = ppuVar9;
      func_0x00010bf43d60(param_1[4]);
    }
    else {
      puVar4 = puVar6;
      FUN_106c58704();
      _objc_retainAutoreleasedReturnValue();
      puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_160 = 0xc2000000;
      pcStack_158 = FUN_106c5c8f4;
      puStack_150 = &UNK_11089aa30;
      puStack_148 = param_1[4];
      ppuVar7 = &puStack_168;
      param_2 = param_1 + 6;
      _objc_copyWeak(auStack_138);
      _objc_retain(ppuVar9);
      ppuVar3 = &puStack_168;
      ppuStack_140 = ppuVar9;
      func_0x00010c297260(puVar4);
      _objc_release(puVar4);
      _objc_release(ppuStack_140);
      _objc_destroyWeak(auStack_138);
    }
    _objc_release(puVar6);
    _objc_release(ppuVar9);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_destroyWeak(ppuVar7 + 6);
    __Unwind_Resume();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_2);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar7 = ppuVar2 + 6;
      _objc_loadWeakRetained();
      if ((ppuVar7 != (undefined **)0x0) &&
         (ppuVar3 = param_2, func_0x00010bf529e0(), ppuVar3 != (undefined **)0x0)) {
        puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_2);
        ppuVar3 = param_2;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (ppuVar3 != (undefined **)0x0) {
          ppuVar9 = (undefined **)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(param_2);
            }
            ppuVar8 = param_2;
            func_0x00010c0e00e0(param_2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppuVar7[0x19]);
            _objc_release(ppuVar8);
            func_0x00010c1d0640(ppuVar7[0x1a]);
            ppuVar9 = (undefined **)((long)ppuVar9 + 1);
          } while (ppuVar3 != ppuVar9);
          ppuVar3 = param_2;
          func_0x00010bf52a60();
        }
        _objc_release(param_2);
        _objc_release(puVar6);
      }
      puVar6 = ppuVar2[5];
      func_0x00010c0d3c80();
      if (param_2 != (undefined **)0x0) {
        func_0x00010bef7f60(puVar6);
      }
      func_0x00010bf43d60(ppuVar2[4]);
      _objc_release(puVar6);
      _objc_release(ppuVar7);
    }
    else {
      func_0x00010bf43ca0(ppuVar2[4]);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      return param_2;
    }
    ___stack_chk_fail();
    puVar5 = param_2[10];
    func_0x00010c279880(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x0001006372a4();
    puVar4 = puVar6;
    func_0x00010bf529e0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    return (undefined **)(ulong)(puVar4 != (undefined *)0x0);
  }
  return ppuVar2;
}



/* Entry: 106c5c8f4; end: 106c5cacf;  */

ulong FUN_106c5c8f4(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if ((lVar1 != 0) && (uVar2 = param_2, func_0x00010bf529e0(), uVar2 != 0)) {
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_2);
      uVar2 = param_2;
      func_0x00010bf52a60();
      lVar6 = lRam0000000000000000;
      while (uVar2 != 0) {
        uVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar6) {
            _objc_enumerationMutation(param_2);
          }
          uVar4 = param_2;
          func_0x00010c0e00e0(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(lVar1 + 200));
          _objc_release(uVar4);
          func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0xd0));
          uVar8 = uVar8 + 1;
        } while (uVar2 != uVar8);
        uVar2 = param_2;
        func_0x00010bf52a60();
      }
      _objc_release(param_2);
      _objc_release(puVar3);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0d3c80();
    if (param_2 != 0) {
      func_0x00010bef7f60(uVar5);
    }
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar5);
    _objc_release(lVar1);
  }
  else {
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_2;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)(param_2 + 0x50);
  func_0x00010c279880(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x0001006372a4();
  lVar1 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  _objc_release(lVar6);
  return (ulong)(lVar1 != 0);
}



/* Entry: 106c5cad0; end: 106c5cb6b; -[SCPlusStoreKitServiceImpl _hasQueuedSubscriptionTransaction] */

bool FUN_106c5cad0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c279880(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001006372a4();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3 != 0;
}



/* Entry: 106c5cb6c; end: 106c5cbdb; -[SCPlusStoreKitServiceImpl _addStoreKitObserverIfNeeded] */

void FUN_106c5cb6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0xb8) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0xb8) = 1;
  func_0x00010befc600(*(undefined8 *)(param_1 + 0x50),param_2,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar1 = uVar2;
  func_0x00010c279880(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f69a0(param_1,param_2,uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c5cbdc; end: 106c5cc53; -[SCPlusStoreKitServiceImpl _notifyObservers] */

void FUN_106c5cbdc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c279880(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001006372a4();
  uVar3 = uVar2;
  func_0x000100504554();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106c5cc54; end: 106c5ccff;  */

void FUN_106c5cc54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d1bc0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c0f67c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c279860(param_2);
  _objc_release(param_2);
  func_0x00010c03a860(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c5cd00; end: 106c5cd8f; -[SCPlusStoreKitServiceImpl _updatePendingTransactions] */

void FUN_106c5cd00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x0001006372a4(uVar1,&PTR___NSConcreteGlobalBlock_11096bcd0);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c279880();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001006372a4();
  uVar4 = uVar3;
  func_0x00010c0d3c80();
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010befa160(*(undefined8 *)(param_1 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c5cd90; end: 106c5cd97;  */

uint FUN_106c5cd90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d1b30;
  _objc_retain();
  _objc_opt_class(puVar1);
  uVar2 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  _objc_release(param_2);
  return (uint)uVar2 & 1;
}



/* Entry: 106c5cd98; end: 106c5cecf; -[SCPlusStoreKitServiceImpl _updateLifecycleObserver] */

void FUN_106c5cd98(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  func_0x00010be344a0();
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0xb0) == 0) {
      _objc_initWeak(auStack_38,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c2a6420();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_40,auStack_38);
      uVar3 = uVar4;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xb0) = uVar3;
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    return;
  }
  func_0x00010bf86d40();
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106c5ced0; end: 106c5cefb;  */

void FUN_106c5ced0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be81a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c5cefc; end: 106c5d0b3; -[SCPlusStoreKitServiceImpl _processNextTransactionOnIdleIfNeeded] */

void FUN_106c5cefc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b85b8;
  puVar4 = PTR_PTR_1126ae960;
  puVar2 = PTR_PTR_1126d1bc8;
  func_0x00010c114fa0(PTR_PTR_1126d1bc8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c257920(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c244160(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae970;
  func_0x00010c0b5920(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c2a14e0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar7);
  return;
}



/* Entry: 106c5d0b4; end: 106c5d13f;  */

void FUN_106c5d0b4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106c5d140; end: 106c5d187;  */

void FUN_106c5d140(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bedce00();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be819e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c5d188; end: 106c5d60f; -[SCPlusStoreKitServiceImpl _processNextTransactionIfNeeded] */

void FUN_106c5d188(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  if ((*(byte *)(param_1 + 0xa0) & 1) != 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0xa8);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0xa8);
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3c0(*(undefined8 *)(param_1 + 0xa8));
  uVar3 = uVar2;
  func_0x00010c0f67c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x000106c58498();
  _objc_release(uVar5);
  _objc_release(uVar3);
  if (uVar4 == 0) goto LAB_106c5d5b4;
  uVar3 = uVar2;
  FUN_106c59050();
  if ((uVar3 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 0x50);
    func_0x00010c279880();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bf4b900();
    _objc_release(uVar5);
    if ((uVar3 & 1) == 0) {
      func_0x00010be819e0(param_1);
      goto LAB_106c5d5b4;
    }
  }
  lVar1 = *(long *)(param_1 + 0x40);
  uVar3 = uVar2;
  func_0x00010c0f67c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cc0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  if (lVar1 == 0) {
    lVar6 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010c0cc420();
    _objc_retainAutoreleasedReturnValue();
LAB_106c5d304:
    _objc_release(lVar6);
  }
  else {
    uVar3 = uVar2;
    FUN_106c59050();
    if ((uVar3 & 1) == 0) {
      lVar6 = *(long *)(param_1 + 0x10);
      func_0x00010c269d40(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c7400();
      goto LAB_106c5d304;
    }
  }
  uVar3 = uVar2;
  func_0x00010c279860();
  if (uVar3 == 3) {
    uVar7 = *(undefined8 *)(param_1 + 0xa8);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106c5d610;
    puStack_68 = &UNK_11096bcf0;
    uStack_60 = uVar2;
    uStack_58 = param_1;
    func_0x0001006372a4(uVar7,&puStack_80);
    uVar9 = uVar7;
    func_0x00010c0d3c80();
    uVar8 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = uVar9;
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  uVar3 = uVar2;
  func_0x00010c279860();
  uVar5 = uVar2;
  if ((long)uVar3 < 2) {
    if (uVar3 == 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c0f67c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c115ea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1158a0(uVar9);
LAB_106c5d4f0:
      _objc_release(uVar3);
      goto LAB_106c5d5a0;
    }
    if (uVar3 == 1) goto LAB_106c5d3e8;
  }
  else {
    if (uVar3 == 2) {
      func_0x00010bfafd40(*(undefined8 *)(param_1 + 0x50));
      uVar9 = *(undefined8 *)(param_1 + 0x40);
      uVar3 = uVar2;
      func_0x00010c0f67c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c115ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf987e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9fae0(uVar9);
      _objc_release(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar3);
      uVar5 = *(ulong *)(param_1 + 0x18);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf987e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      FUN_106c745d0(uVar5,uVar3);
    }
    else {
      if (uVar3 != 3) {
        if (uVar3 != 4) goto LAB_106c5d5a4;
        uVar9 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c0f67c0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        func_0x00010c115ea0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf43740(uVar9);
        goto LAB_106c5d4f0;
      }
LAB_106c5d3e8:
      *(undefined1 *)(param_1 + 0xa0) = 1;
      uVar3 = uVar2;
      func_0x00010c279860();
      if (uVar3 == 3) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(ulong *)(param_1 + 0x40);
      }
      _objc_retain(uVar5);
      uVar3 = param_1;
      func_0x00010be173e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_88,param_1);
      _objc_copyWeak(auStack_90,auStack_88);
      func_0x00010c297260(uVar3);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_88);
    }
    _objc_release(uVar3);
LAB_106c5d5a0:
    _objc_release(uVar5);
  }
LAB_106c5d5a4:
  func_0x00010be819e0(param_1);
  _objc_release(lVar1);
LAB_106c5d5b4:
  _objc_release(uVar2);
  return;
}



/* Entry: 106c5d610; end: 106c5d703;  */

undefined8 FUN_106c5d610(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c279860();
  if (lVar1 == 3) {
    lVar1 = param_2;
    func_0x00010c0f67c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0f67c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0720c0();
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar4 != 0) {
      func_0x00010bfafd40(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50));
      uVar5 = 0;
      goto LAB_106c5d6e0;
    }
  }
  uVar5 = 1;
LAB_106c5d6e0:
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 106c5d704; end: 106c5d73b;  */

void FUN_106c5d704(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0xa0) = 0;
    func_0x00010be819e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c5d73c; end: 106c5d873; -[SCPlusStoreKitServiceImpl _finishTransaction:metadata:purchaseHandleManager:] */

void FUN_106c5d73c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0f67c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000106c58498();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bece480(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae558;
  if (param_1 == (undefined *)0x0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e7ca18;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7ca18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(puVar5,param_2,ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
  }
  else {
    puVar5 = param_1;
    func_0x00010bfafd60(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c5d874; end: 106c5d8b3; -[SCPlusStoreKitServiceImpl _transactionProcessorForProductType:] */

void FUN_106c5d874(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 - 1U < 7) {
    uVar1 = *(undefined8 *)(param_1 + (param_3 - 1U) * 8 + 0x60);
    _objc_retain(uVar1);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c5d8b4; end: 106c5da0b; -[SCPlusStoreKitServiceImpl _purchaseProduct:handle:promotionalOffer:externalId:] */

void FUN_106c5d8b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be94c60(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106c5da0c;
  puStack_80 = &UNK_11096bd50;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = param_4;
  uStack_70 = param_3;
  lStack_68 = param_1;
  uStack_60 = param_5;
  uStack_58 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c297260(lVar2,param_2,&puStack_98,uVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c5da0c; end: 106c5db4f;  */

void FUN_106c5da0c(long param_1,long param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (param_2 == 0) {
      ppuVar1 = &PTR__OBJC_CLASS___NSConstantDictionary_111174c20;
      func_0x00010c0d3c80(&PTR__OBJC_CLASS___NSConstantDictionary_111174c20);
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010c08fa60();
      ppuVar3 = (undefined **)0x0;
      if (lVar2 != 0) {
        ppuVar3 = ppuVar1;
        func_0x00010c1d0640(ppuVar1);
      }
      FUN_106c776b0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(ppuVar1);
      _objc_release(ppuVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c117d80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = &PTR____CFConstantStringClassReference_110e389b8;
      FUN_106c77258(&PTR____CFConstantStringClassReference_110e389b8,ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(uVar4);
      _objc_release(ppuVar3);
      _objc_release(uVar4);
      _objc_release(ppuVar1);
      param_2 = 0;
    }
    else {
      func_0x00010be84980(*(undefined8 *)(param_1 + 0x30));
    }
  }
  else {
    param_2 = *(long *)(param_1 + 0x20);
    func_0x00010c117d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c5db50; end: 106c5de63; -[SCPlusStoreKitServiceImpl _purchaseSKProduct:handle:promotionalOffer:externalId:] */

void FUN_106c5db50(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined *apuStack_e8 [16];
  long lStack_68;
  
  ppuVar9 = &puStack_150;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_4;
  uVar6 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bdc86e0(param_1);
  puVar7 = PTR__OBJC_CLASS___SKPaymentQueue_1126c00b8;
  func_0x00010bf2ce20();
  if (((ulong)puVar7 & 1) == 0) {
    ppuVar4 = (undefined **)PTR_PTR_1126d1bd0;
    _objc_alloc();
    ppuVar2 = (undefined **)0x0;
    func_0x00010c055a20();
    ppuVar5 = param_4;
    func_0x00010c117d80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar4;
    func_0x00010bf43d60();
  }
  else {
    ppuVar5 = param_3;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar5;
    func_0x000106c58498();
    _objc_release(ppuVar5);
    if (ppuVar1 != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(param_1 + 0x50);
      func_0x00010c279880();
      _objc_retainAutoreleasedReturnValue();
      puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_108 = 0xc0000000;
      pcStack_100 = FUN_106c5e600;
      puStack_f8 = &UNK_11096be10;
      ppuVar4 = ppuVar2;
      ppuStack_f0 = ppuVar1;
      func_0x0001006372a4();
      _objc_release(ppuVar2);
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      plStack_148 = (long *)0x0;
      puStack_150 = (undefined *)0x0;
      uStack_138 = 0;
      uStack_140 = 0;
      ppuVar2 = apuStack_e8;
      uVar6 = 0x10;
      ppuVar5 = ppuVar4;
      func_0x00010bf52a60();
      if (ppuVar5 == (undefined **)0x0) {
        if ((long)ppuVar1 - 2U < 6) {
          ppuVar9 = param_4;
          ppuVar2 = param_3;
          uVar6 = param_6;
          func_0x00010bec62a0(param_1);
        }
        else if (ppuVar1 == (undefined **)0x1) {
          ppuVar9 = param_4;
          ppuVar2 = param_3;
          uVar6 = param_5;
          func_0x00010bec6760(param_1);
        }
        goto LAB_106c5dde4;
      }
      lVar3 = *plStack_148;
      func_0x00010c279860();
      ppuVar5 = (undefined **)PTR_PTR_1126d1bd0;
      _objc_alloc();
      if (lVar3 == 4) {
        ppuVar2 = (undefined **)0x0;
        func_0x00010c055a20();
        ppuVar1 = param_4;
        func_0x00010c117d80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar5;
        func_0x00010bf43d60();
LAB_106c5ddd0:
        _objc_release(ppuVar1);
      }
      else {
        ppuVar2 = (undefined **)0x0;
        func_0x00010c055a20();
        ppuVar1 = param_4;
        func_0x00010c117d80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar5;
        func_0x00010bf43d60();
        _objc_release(ppuVar1);
        if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
          ppuVar9 = *(undefined ***)(param_1 + 0x50);
          ppuVar1 = ppuVar9;
          func_0x00010c279880();
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = ppuVar1;
          func_0x00010c0f69a0(param_1);
          goto LAB_106c5ddd0;
        }
      }
      _objc_release(ppuVar5);
      goto LAB_106c5dde4;
    }
    ppuVar4 = param_4;
    func_0x00010c117d80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = &PTR____CFConstantStringClassReference_110e7ca58;
    FUN_106c7723c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar5;
    func_0x00010bf43ca0(ppuVar4);
  }
  _objc_release(ppuVar5);
LAB_106c5dde4:
  _objc_release(ppuVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(ppuVar9);
    _objc_retain(ppuVar2);
    _objc_retain(uVar6);
    puVar7 = param_3[10];
    puVar8 = param_3[8];
    _objc_retain(puVar8);
    _objc_retain(puVar7);
    ppuVar5 = ppuVar2;
    func_0x00010c115ea0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_106c587c4();
    _objc_release(ppuVar5);
    func_0x00010be11080(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar6);
    _objc_retain(ppuVar2);
    _objc_retain(ppuVar9);
    func_0x00010c297260(param_3);
    _objc_release(param_3);
    _objc_release(uVar6);
    _objc_release(ppuVar2);
    _objc_release(ppuVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(ppuVar2);
    _objc_release(ppuVar9);
    return;
  }
  return;
}



/* Entry: 106c5de64; end: 106c5dfc3; -[SCPlusStoreKitServiceImpl _submitSubscriptionPaymentWithHandle:product:promotionalOffer:] */

void FUN_106c5de64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  uVar5 = param_4;
  func_0x00010c115ea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  FUN_106c587c4();
  _objc_release(uVar5);
  lVar2 = param_1;
  func_0x00010be11080(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106c5dfc4;
  puStack_88 = &UNK_11096bd80;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = param_3;
  uStack_78 = uVar4;
  uStack_70 = param_4;
  lStack_68 = param_1;
  uStack_60 = param_5;
  uStack_58 = uVar3;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c297260(lVar2,param_2,&puStack_a0,uVar5);
  _objc_release(lVar2);
  _objc_release(uStack_60);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106c5dfc4; end: 106c5e2af;  */

void FUN_106c5dfc4(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar2 = *(undefined **)(param_1 + 0x20);
    func_0x00010c117d80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0();
    goto LAB_106c5e128;
  }
  uVar7 = param_2;
  func_0x00010bf987e0();
  if ((int)uVar7 == 1) {
    puVar2 = PTR_PTR_1126d1bd0;
    _objc_alloc(PTR_PTR_1126d1bd0);
    func_0x00010c055a20();
    ppuVar3 = *(undefined ***)(param_1 + 0x20);
    func_0x00010c117d80(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60();
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x28);
    func_0x00010c1a5140();
    iVar1 = (int)uVar4;
    if ((uVar4 & 1) == 0) {
      puVar2 = *(undefined **)(param_1 + 0x20);
      func_0x00010c117d80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = &PTR____CFConstantStringClassReference_110e7ca78;
      FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7ca78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(puVar2);
    }
    else {
      FUN_106c78f40();
      if (iVar1 == 0) {
        puVar2 = PTR__OBJC_CLASS___SKMutablePayment_1126d1bd8;
        func_0x00010c0f6a00(PTR__OBJC_CLASS___SKMutablePayment_1126d1bd8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e62e0();
        uVar7 = param_2;
        func_0x00010bf9e6c0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1699e0(puVar2);
        _objc_release(uVar7);
        if (*(long *)(param_1 + 0x40) != 0) {
          puVar6 = PTR__OBJC_CLASS___SKPaymentDiscount_1126d1be0;
          _objc_alloc(PTR__OBJC_CLASS___SKPaymentDiscount_1126d1be0);
          uVar7 = *(undefined8 *)(param_1 + 0x40);
          func_0x00010c0e1a20(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + 0x40);
          func_0x00010c086860(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(param_1 + 0x40);
          func_0x00010c0db0e0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = *(undefined8 *)(param_1 + 0x40);
          func_0x00010c23c2c0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = *(undefined8 *)(param_1 + 0x40);
          func_0x00010c2709c0(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01b740(puVar6);
          func_0x00010c1d9c20(puVar2);
          _objc_release(puVar6);
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar5);
          _objc_release(uVar7);
        }
        func_0x00010befa6c0(*(undefined8 *)(param_1 + 0x48));
        goto LAB_106c5e128;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c115ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      FUN_106c587c4();
      _objc_release(uVar5);
      if ((int)uVar7 == 0) {
        puVar2 = *(undefined **)(param_1 + 0x30);
        uVar7 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c115ea0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be04020(uVar7);
        goto LAB_106c5e128;
      }
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      puVar2 = *(undefined **)(param_1 + 0x30);
      func_0x00010c115ea0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = &PTR____CFConstantStringClassReference_110e7ca98;
      FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7ca98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9fae0(uVar7);
    }
  }
  _objc_release(ppuVar3);
LAB_106c5e128:
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c5e2b0; end: 106c5e31b; -[SCPlusStoreKitServiceImpl _dispatchSyntheticSubscribeForProduct:] */

void FUN_106c5e2b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1b30;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c03a840();
  _objc_release(param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0xa8),param_2,puVar1);
  func_0x00010be819e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c5e31c; end: 106c5e433; -[SCPlusStoreKitServiceImpl _submitNonSubscriptionPaymentWithHandle:product:externalId:] */

void FUN_106c5e31c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010c1a5140(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    puVar3 = param_3;
    func_0x00010c117d80(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e7ca78;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7ca78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(puVar3,param_2,ppuVar4);
    _objc_release(ppuVar4);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___SKMutablePayment_1126d1bd8;
    func_0x00010c0f6a00(PTR__OBJC_CLASS___SKMutablePayment_1126d1bd8,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e62e0();
    uVar2 = param_5;
    func_0x00010bdc3580(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1699e0(puVar3,param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010befa6c0(*(undefined8 *)(param_1 + 0x50),param_2,puVar3);
  }
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c5e434; end: 106c5e5ff; -[SCPlusStoreKitServiceImpl .cxx_destruct] */

void FUN_106c5e434(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
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



/* Entry: 106c5e600; end: 106c5e7d3;  */

bool FUN_106c5e600(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c0f67c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000106c58498();
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar2 == lVar3;
}



/* Entry: 106c5e7d4; end: 106c5e9cf;  */

void FUN_106c5e7d4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bfe5ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c112b80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf5de80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08fa60();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (uVar4 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      uVar2 = param_1;
      func_0x00010c2608a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x000106c5e760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar5 = PTR_PTR_1126d1bf0;
      _objc_alloc(PTR_PTR_1126d1bf0);
      uVar2 = param_1;
      func_0x00010c112a80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x000106c5e6d0();
      uVar6 = param_1;
      func_0x00010c112b80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf5de80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_1;
      func_0x00010c112b80(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c09e220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02bf80(puVar5,param_2,uVar4,uVar7,uVar9);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar2);
      uVar2 = param_1;
      func_0x00010c0f6960();
      if (uVar2 != 2) {
        uVar2 = (ulong)(uVar2 == 1);
      }
      puVar10 = PTR_PTR_1126d1c08;
      _objc_alloc(PTR_PTR_1126d1c08);
      uVar4 = param_1;
      func_0x00010c0df100(param_1);
      func_0x00010c01b880(puVar10,param_2,uVar1,puVar5,uVar3,uVar4,uVar2);
      _objc_release(puVar5);
      _objc_release(uVar3);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106c5e9d0; end: 106c5e9d7;  */

void FUN_106c5e9d0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  _objc_retain();
  if (param_2 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar1 = param_2;
    func_0x00010bfe5ec0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c112b80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf5de80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar4 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      lVar2 = param_2;
      func_0x00010c2608a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x000106c5e760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      puVar5 = PTR_PTR_1126d1bf0;
      _objc_alloc(PTR_PTR_1126d1bf0);
      lVar2 = param_2;
      func_0x00010c112a80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000106c5e6d0();
      lVar4 = param_2;
      func_0x00010c112b80(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010bf5de80();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_2;
      func_0x00010c112b80(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c09e220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02bf80(puVar5);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar4);
      _objc_release(lVar2);
      func_0x00010c0f6960();
      puVar9 = PTR_PTR_1126d1c08;
      _objc_alloc(PTR_PTR_1126d1c08);
      func_0x00010c0df100(param_2);
      func_0x00010c01b880(puVar9);
      _objc_release(puVar5);
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106c5e9d8; end: 106c5ea97; -[SCPlusStoreKitServicePurchaseHandleImpl initWithProductIdentifier:metadata:] */

undefined1 *
FUN_106c5e9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5f28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c5ea98; end: 106c5ea9f; -[SCPlusStoreKitServicePurchaseHandleImpl result] */

void FUN_106c5ea98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 106c5eaa0; end: 106c5eaa7; -[SCPlusStoreKitServicePurchaseHandleImpl productIdentifier] */

undefined8 FUN_106c5eaa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106c5eaa8; end: 106c5eaaf; -[SCPlusStoreKitServicePurchaseHandleImpl metadata] */

undefined8 FUN_106c5eaa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c5eab0; end: 106c5eab7; -[SCPlusStoreKitServicePurchaseHandleImpl promise] */

undefined8 FUN_106c5eab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106c5eab8; end: 106c5eaff; -[SCPlusStoreKitServicePurchaseHandleImpl .cxx_destruct] */

void FUN_106c5eab8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c5eb00; end: 106c5eb1f;  */

void FUN_106c5eb00(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  *(undefined1 *)(param_1 + 0x20) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106c5eb20; end: 106c5eb7f; -[SCPlusStoreKitServicePurchaseHandleManager setHandle:] */

bool FUN_106c5eb20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return lVar2 == 0;
}


