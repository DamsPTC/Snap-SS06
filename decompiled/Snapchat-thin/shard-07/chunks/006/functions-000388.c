/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10570bcf0; end: 10570becf;  */

void FUN_10570bcf0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe8ee0(uVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126bd670;
    _objc_alloc(PTR_PTR_1126bd670);
    func_0x00010bf3ec40(*(undefined8 *)(param_1 + 0x30));
    ppuVar3 = *(undefined ***)(param_1 + 0x30);
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar3 == &PTR____CFConstantStringClassReference_110de0f78) {
      func_0x00010bf3ec40(*(undefined8 *)(param_1 + 0x30));
    }
    func_0x00010c054fc0(puVar2);
    (**(code **)(lVar4 + 0x10))(lVar4,0,uVar1,uVar5,puVar2);
    _objc_release(puVar2);
    _objc_release(ppuVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 10570bed0; end: 10570bedf;  */

void FUN_10570bed0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 10570bee0; end: 10570c193; -[SCBitmojiManager _prefetch3DImageData:contexts:feature:completionQueue:completionBlock:] */

void FUN_10570bee0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126af5d8;
  _objc_alloc(PTR_PTR_1126af5d8);
  uVar2 = param_3;
  func_0x00010bf12ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfb7be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c26afc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8ee0(param_3);
  func_0x00010c14e120(param_3);
  func_0x00010bff6020(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_10570a9ac;
  uStack_88 = 0x10570a9bc;
  uStack_80 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bfa9f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = puStack_a0[5];
  puStack_a0[5] = uVar3;
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  func_0x00010bffae00();
  _objc_release(param_7);
  _objc_release(param_6);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10570c194; end: 10570c287;  */

void FUN_10570c194(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10570c288; end: 10570c367;  */

void FUN_10570c288(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x10570c3a0;
    puStack_78 = &UNK_1108647e8;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_68 = *(undefined8 *)(param_1 + 0x30);
    uStack_70 = uVar2;
    func_0x000100162d98("APPSTORE",&puStack_90);
    uVar2 = uStack_70;
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10570c368;
    puStack_48 = &UNK_1108647e8;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_38 = *(undefined8 *)(param_1 + 0x30);
    uStack_40 = uVar2;
    func_0x00010007380c(lVar1,&puStack_60);
    uVar2 = uStack_40;
  }
  _objc_release(uVar2);
  return;
}



/* Entry: 10570c368; end: 10570c3d7;  */

void FUN_10570c368(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 10570c3d8; end: 10570c4b7;  */

void FUN_10570c3d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x10570c4f0;
    puStack_78 = &UNK_1108647e8;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_68 = *(undefined8 *)(param_1 + 0x30);
    uStack_70 = uVar2;
    func_0x000100162d98("APPSTORE",&puStack_90);
    uVar2 = uStack_70;
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10570c4b8;
    puStack_48 = &UNK_1108647e8;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_38 = *(undefined8 *)(param_1 + 0x30);
    uStack_40 = uVar2;
    func_0x00010007380c(lVar1,&puStack_60);
    uVar2 = uStack_40;
  }
  _objc_release(uVar2);
  return;
}



/* Entry: 10570c4b8; end: 10570c527;  */

void FUN_10570c4b8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 10570c528; end: 10570c537;  */

void FUN_10570c528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 10570c538; end: 10570c567; -[SCBitmojiManager .cxx_destruct] */

void FUN_10570c538(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10570c568; end: 10570c667; -[SCBitmojiService initWithBitmojiAvatarProvider:bitmojiAvatarDataProvider:userScopedValdiRuntimeServices:] */

undefined1 *
FUN_10570c568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e9e70;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10570c668; end: 10570c66b; -[SCBitmojiService getAvatarDataWithCompletion:] */

void FUN_10570c668(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__getAvatarDataV2ClientWithComple_112564e00);
  return;
}



/* Entry: 10570c66c; end: 10570c7e7; -[SCBitmojiService getCurrentUserAvatarBodyTypeFuture] */

void FUN_10570c66c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    puVar4 = PTR_PTR_1126ae558;
    func_0x00010bfe9c80(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puVar3 = PTR_PTR_1126ae560;
    _objc_alloc_init();
    puVar2 = auStack_38;
    _objc_loadWeakRetained(puVar2);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(puVar3);
    func_0x00010be1d180(puVar2);
    _objc_release(puVar2);
    puVar4 = puVar3;
    func_0x00010bfbc3e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_40);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10570c7e8; end: 10570c853;  */

void FUN_10570c7e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a2e0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10570c854; end: 10570c927; -[SCBitmojiService _handleGetAvatarDataForBodyTypeResponseWithAvatarData:error:promise:] */

void FUN_10570c854(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_5);
    func_0x00010c0ec460(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc6660();
    _objc_release(param_3);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(param_5,param_2,puVar1);
    _objc_release(param_5);
    _objc_release(puVar1);
    return;
  }
  _objc_retain(param_5);
  func_0x00010bf43ca0(param_5,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10570c928; end: 10570c9fb; -[SCBitmojiService _getAvatarDataV2ClientWithCompletion:] */

void FUN_10570c928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be1d1e0(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10570c9fc; end: 10570cb2b;  */

void FUN_10570c9fc(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 == (undefined *)0x0) || (lVar1 == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00e2e0();
    _objc_release(puVar3);
    puVar3 = puVar2;
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
    _objc_release(puVar2);
  }
  else {
    puVar3 = param_2;
    func_0x00010be1d1a0(lVar1);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  puVar2 = param_2;
  func_0x00010bf13120();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    _objc_initWeak(auStack_a8,param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c295440(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b0,auStack_a8);
    _objc_retain(puVar3);
    func_0x00010bfc9d00(uVar4);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
  }
  else {
    (**(code **)(puVar3 + 0x10))(puVar3,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
  return;
}



/* Entry: 10570cb2c; end: 10570cc63; -[SCBitmojiService _getAvatarService:] */

void FUN_10570cb2c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf13120();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c295440(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bfc9d00(uVar2);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3,lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10570cc64; end: 10570cd57;  */

void FUN_10570cc64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bd678;
  func_0x00010bfbc0e0(PTR_PTR_1126bd678);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf54b60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bea2740();
  _objc_release(lVar3);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10570cd58; end: 10570cd5b; -[SCBitmojiService _setCachedAvatarService:] */

void FUN_10570cd58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAvatarServiceCache__112639110);
  return;
}



/* Entry: 10570cd5c; end: 10570cdfb; -[SCBitmojiService _getAvatarDataWithAvatarService:completion:] */

void FUN_10570cd5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  func_0x00010bfc4680(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10570cdfc;
  puStack_30 = &UNK_1108ac568;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010c0e3040(param_3,param_2,&puStack_48);
  _objc_release(param_3);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 10570cdfc; end: 10570d00b;  */

void FUN_10570cdfc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_3 == 0) {
    puVar2 = PTR_PTR_1126bd680;
    _objc_opt_new(PTR_PTR_1126bd680);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    uVar4 = param_2;
    func_0x00010c0ec460(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00c560();
    _objc_release(uVar4);
    _objc_retain(puVar3);
    puVar5 = puVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar3);
        }
        puVar6 = puVar2;
        func_0x00010c0ec460(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c0e00e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0();
        func_0x00010c1adce0(puVar6);
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar9 = puVar9 + 1;
      } while (puVar5 != puVar9);
      puVar5 = puVar3;
      func_0x00010bf52a60();
    }
    _objc_release(puVar3);
    func_0x00010bfbeb80(param_2);
    func_0x00010c1a2620(puVar2);
    func_0x00010c20eaa0(puVar2);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2,0);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)();
  return;
}



/* Entry: 10570d00c; end: 10570d017; -[SCBitmojiService avatarServiceCache] */

void FUN_10570d00c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 10570d018; end: 10570d01f; -[SCBitmojiService setAvatarServiceCache:] */

void FUN_10570d018(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10570d020; end: 10570d073; -[SCBitmojiService .cxx_destruct] */

void FUN_10570d020(long param_1)

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



/* Entry: 10570d074; end: 10570d3db; -[SCBitmojiFlatlandSceneFetchRequest cacheKeyForUniversalAvatarType:cacheVersion:isUsingStagingHost:engineType:customojiText:rendererId:] */

void FUN_10570d074(undefined *param_1,undefined8 param_2,long param_3,ulong param_4,int param_5,
                  int param_6,long param_7,long param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  bool bVar7;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = param_1;
  func_0x00010bfb5800();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc1398;
  if (puVar2 != (undefined *)0x1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de1538;
  }
  _objc_retain(ppuVar1);
  func_0x00010c14e120();
  bVar7 = true;
  if ((param_3 == 2) || (param_3 == 1)) {
    bVar7 = false;
  }
  puVar3 = param_1;
  func_0x00010bfb7bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar4 == (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010bf12e60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = param_1;
    func_0x00010bf12e60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bfb7bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dc0f98);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14fa60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110df93b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(param_1);
  puVar4 = puVar3;
  if (!bVar7) {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dc4098);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  puVar3 = puVar4;
  if (1 < param_4) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110df93d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  puVar4 = puVar3;
  if (param_5 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110df93f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  puVar3 = puVar4;
  if (0 < param_6) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110df9418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  lVar6 = param_7;
  func_0x00010c08fa60();
  puVar4 = puVar3;
  if (lVar6 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110df9438);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar5);
  }
  lVar6 = param_8;
  func_0x00010c08fa60();
  puVar3 = puVar4;
  if (lVar6 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110df9458);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10570d3dc; end: 10570d4d7; -[SCProfileFlatlandBitmojiIdsImpl initWithAllIds:latestIds:plusExclusiveIds:showBadging:] */

undefined1 *
FUN_10570d3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e9e78;
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10570d4d8; end: 10570d4e3; -[SCProfileFlatlandBitmojiIdsImpl pushToValdiMarshaller:] */

undefined * FUN_10570d4d8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df138;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010af9d630();
  func_0x00010af9d60c();
  return puVar1;
}



/* Entry: 10570d4e4; end: 10570d4eb; -[SCProfileFlatlandBitmojiIdsImpl allIds] */

undefined8 FUN_10570d4e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10570d4ec; end: 10570d4f3; -[SCProfileFlatlandBitmojiIdsImpl setAllIds:] */

void FUN_10570d4ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10570d4f4; end: 10570d4fb; -[SCProfileFlatlandBitmojiIdsImpl latestIds] */

undefined8 FUN_10570d4f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10570d4fc; end: 10570d503; -[SCProfileFlatlandBitmojiIdsImpl setLatestIds:] */

void FUN_10570d4fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10570d504; end: 10570d50b; -[SCProfileFlatlandBitmojiIdsImpl plusExclusiveIds] */

undefined8 FUN_10570d504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10570d50c; end: 10570d513; -[SCProfileFlatlandBitmojiIdsImpl setPlusExclusiveIds:] */

void FUN_10570d50c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10570d514; end: 10570d51b; -[SCProfileFlatlandBitmojiIdsImpl showBadging] */

undefined8 FUN_10570d514(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10570d51c; end: 10570d54b; -[SCProfileFlatlandBitmojiIdsImpl setShowBadging:] */

void FUN_10570d51c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10570d54c; end: 10570d593; -[SCProfileFlatlandBitmojiIdsImpl .cxx_destruct] */

void FUN_10570d54c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10570d594; end: 10570d683; -[SCBitmojiProfileServiceProvider provide] */

void FUN_10570d594(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126bd688;
  _objc_alloc(PTR_PTR_1126bd688);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8040(puVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10570d684; end: 10570d6c3;  */

void FUN_10570d684(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd4760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10570d6c4; end: 10570d983; -[SCBitmojiProfileServiceProvider _bitmojiFlatlandServiceFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10570d6c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  puVar1 = PTR_PTR_1126bd690;
  _objc_alloc();
  lVar22 = (long)_DAT_112728474;
  lVar2 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf1ad00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf1b5c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112728478;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11272847c;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bfb2740();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112728480;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf5d420();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_112728484;
  lVar12 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bfa2420();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + _DAT_112728488);
  lVar14 = param_1 + _DAT_11272848c;
  _objc_loadWeakRetained();
  lVar15 = param_1 + _DAT_112728490;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112728494;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf148a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + _DAT_112728498);
  lVar22 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar19 = lVar22;
  func_0x00010bf1c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + _DAT_11272849c);
  lVar23 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar20 = lVar23;
  func_0x00010bfa1900();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127284a0;
  _objc_loadWeakRetained();
  func_0x00010bff6160(puVar1,param_2,lVar3,lVar5,lVar7,lVar9,lVar11,lVar13,uVar21,lVar14,lVar16,
                      lVar18,uVar24,lVar19,uVar25,lVar20,param_1);
  _objc_release(param_1);
  _objc_release(lVar20);
  _objc_release(lVar23);
  _objc_release(lVar19);
  _objc_release(lVar22);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10570d984; end: 10570da5b; -[SCBitmojiProfileServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10570d984(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272849c,0);
  _objc_storeStrong(param_1 + _DAT_112728488,0);
  _objc_destroyWeak(param_1 + _DAT_11272848c);
  _objc_storeStrong(param_1 + _DAT_112728498,0);
  _objc_destroyWeak(param_1 + _DAT_1127284a4);
  _objc_destroyWeak(param_1 + _DAT_1127284a0);
  _objc_destroyWeak(param_1 + _DAT_112728490);
  _objc_destroyWeak(param_1 + _DAT_112728494);
  _objc_destroyWeak(param_1 + _DAT_112728474);
  _objc_destroyWeak(param_1 + _DAT_112728484);
  _objc_destroyWeak(param_1 + _DAT_11272847c);
  _objc_destroyWeak(param_1 + _DAT_112728480);
  _objc_destroyWeak(param_1 + _DAT_112728478);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127284a8,0);
  return;
}



/* Entry: 10570da5c; end: 10570de17; -[SCProfileFlatlandMyProfileBitmojiService initWithAvatarIdProvider:bitmojiFlatlandInfoProvider:bitmojiFlatlandConfigProvider:bitmojiFlatlandUserUpdater:bitmojiCtaPromoManager:plusFeatureGating:plusSubscribeScopeExposer:plusSubscribeScopeServices:notificationPool:uiContainer:actionHandler:notificationCenter:generativeBackgroundsFeatureStatusProviding:posePickerScopeExposer:selfieIdProvider:bitmojiAvatarBuilderScopeExposer:plusFeatureBadging:mapCustomizationTrayFactoryServices:] */

undefined8 *
FUN_10570da5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  puStack_70 = PTR_PTR_1126e9e80;
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
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[10];
    puVar1[10] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = 0;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0x16) = 0;
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
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



/* Entry: 10570de18; end: 10570debb; -[SCProfileFlatlandMyProfileBitmojiService getMyAvatarId] */

void FUN_10570de18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010bf870a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10570debc; end: 10570df1f;  */

void FUN_10570debc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10570df20; end: 10570dffb; -[SCProfileFlatlandMyProfileBitmojiService getMySceneId] */

void FUN_10570df20(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2656e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar4;
  func_0x00010b09c8d0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10570dffc; end: 10570e11b;  */

void FUN_10570dffc(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c14fa80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126af5d0;
  puVar1 = PTR_PTR_1126ae6b8;
  if (puVar4 == (undefined *)0x0) {
    puVar4 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x18);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    func_0x00010bf6a1e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010c14fa80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10570e11c; end: 10570e253; -[SCProfileFlatlandMyProfileBitmojiService getMyBackground] */

void FUN_10570e11c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c2656e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar4;
  func_0x00010b09c8d0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10570e254; end: 10570e2b7;  */

void FUN_10570e254(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be17f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10570e2b8; end: 10570e4f7; -[SCProfileFlatlandMyProfileBitmojiService _flatlandBackgroundFromUserBitmojiFlatlandInfo:] */

void FUN_10570e2b8(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  int iVar9;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
LAB_10570e4c0:
    func_0x00010bdf9600(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c28fa80();
    if (lVar2 == 1) {
      lVar2 = param_3;
      func_0x00010c0ec5e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf14660();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      if (lVar4 == 0) {
        iVar9 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar5;
        func_0x00010c083660();
        iVar9 = (int)uVar8;
        _objc_release(uVar5);
      }
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    else {
      iVar9 = 0;
    }
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf14060();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126b3c90;
    lVar1 = param_3;
    if (iVar9 == 0) {
      if (lVar3 == 0) goto LAB_10570e4c0;
      _objc_alloc(PTR_PTR_1126b3c90);
      func_0x00010c0ec5e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf14060();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = 0;
    }
    else {
      _objc_alloc(PTR_PTR_1126b3c90);
      func_0x00010c0ec5e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf14660();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = 1;
    }
    func_0x00010c0563a0(puVar6,param_2,uVar8,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    param_1 = PTR_PTR_1126ae6b8;
    puVar7 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(param_1,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10570e4f8; end: 10570e567; -[SCProfileFlatlandMyProfileBitmojiService _defaultProfileFlatlandBackground] */

void FUN_10570e4f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf68dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10570e568; end: 10570e723;  */

void FUN_10570e568(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10570e724;
  uStack_40 = 0x10570e734;
  uStack_38 = 0;
  func_0x00010c0c0800(param_2);
  if (puStack_58[5] == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126b3c90;
    _objc_alloc(PTR_PTR_1126b3c90);
    func_0x00010c0563a0();
    puVar3 = PTR_PTR_1126ae6b8;
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10570e724; end: 10570e73b;  */

void FUN_10570e724(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10570e73c; end: 10570e773;  */

void FUN_10570e73c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf51e00();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10570e774; end: 10570e8df; -[SCProfileFlatlandMyProfileBitmojiService getAvailableSceneIds] */

void FUN_10570e774(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c14faa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0d87e0();
  _objc_release(uVar3);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010bf41860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010b09c8d0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10570e8e0; end: 10570ea77;  */

void FUN_10570e8e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_90 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10570e724;
  uStack_60 = 0x10570e734;
  uStack_58 = 0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10570ea78;
  puStack_a0 = &UNK_1108ac638;
  puStack_78 = puStack_90;
  _objc_retain(param_2);
  uStack_98 = param_2;
  _objc_copyWeak(auStack_88,param_1 + 0x20);
  _objc_retain(param_2);
  _objc_copyWeak(auStack_c0,param_1 + 0x20);
  func_0x00010c0c0800(param_3);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_c0);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10570ea78; end: 10570eb53;  */

void FUN_10570ea78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  _objc_retain(param_2);
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10570eb54; end: 10570ebc7;  */

void FUN_10570eb54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf8fb80(*(undefined8 *)(param_1 + 0x20));
  lVar2 = lVar1;
  func_0x00010be82ce0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10570ebc8; end: 10570ec8f;  */

void FUN_10570ebc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10570ec90; end: 10570ecf7;  */

void FUN_10570ec90(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be82ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10570ecf8; end: 10570ee07; -[SCProfileFlatlandMyProfileBitmojiService _profileFlatlandBitmojiSceneIds:badgingEnabled:] */

void FUN_10570ecf8(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c298be0(param_3);
    uVar5 = uVar1;
    func_0x00010c234100(uVar1,param_2,uVar2);
    _objc_release(uVar1);
  }
  puVar3 = PTR_PTR_1126bd698;
  _objc_alloc(PTR_PTR_1126bd698);
  uVar2 = param_3;
  func_0x00010bfe5fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c08b0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff2a80(puVar3,param_2,uVar2,uVar1,0,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10570ee08; end: 10570ef73; -[SCProfileFlatlandMyProfileBitmojiService getAvailableBackgroundIds] */

void FUN_10570ee08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf14080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0d87e0();
  _objc_release(uVar3);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010bf41860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010b09c8d0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10570ef74; end: 10570f10b;  */

void FUN_10570ef74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_90 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10570e724;
  uStack_60 = 0x10570e734;
  uStack_58 = 0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10570f10c;
  puStack_a0 = &UNK_1108ac638;
  puStack_78 = puStack_90;
  _objc_retain(param_2);
  uStack_98 = param_2;
  _objc_copyWeak(auStack_88,param_1 + 0x20);
  _objc_retain(param_2);
  _objc_copyWeak(auStack_c0,param_1 + 0x20);
  func_0x00010c0c0800(param_3);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_c0);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10570f10c; end: 10570f1e7;  */

void FUN_10570f10c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  _objc_retain(param_2);
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10570f1e8; end: 10570f25b;  */

void FUN_10570f1e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf8fb80(*(undefined8 *)(param_1 + 0x20));
  lVar2 = lVar1;
  func_0x00010be82cc0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10570f25c; end: 10570f323;  */

void FUN_10570f25c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10570f324; end: 10570f38b;  */

void FUN_10570f324(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be82cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10570f38c; end: 10570f4b7; -[SCProfileFlatlandMyProfileBitmojiService _profileFlatlandBitmojiBackgroundIds:badgingEnabled:] */

void FUN_10570f38c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c298be0(param_3);
    uVar6 = uVar1;
    func_0x00010c233320(uVar1,param_2,uVar2);
    _objc_release(uVar1);
  }
  puVar3 = PTR_PTR_1126bd698;
  _objc_alloc(PTR_PTR_1126bd698);
  uVar2 = param_3;
  func_0x00010bfe5fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c08b0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c102160(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff2a80(puVar3,param_2,uVar2,uVar1,uVar4,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10570f4b8; end: 10570f60b; -[SCProfileFlatlandMyProfileBitmojiService updateSceneAndBackgroundWithSceneId:background:] */

void FUN_10570f4b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126ae6b8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf54280(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10570f60c; end: 10570f7f7;  */

void FUN_10570f60c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_initWeak(auStack_58,param_2);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c27dd80();
  if (iVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c296d80(uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (iVar2 == 1) {
      puVar5 = PTR_PTR_1126b88e8;
      func_0x00010c0cb140(PTR_PTR_1126b88e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21acc0();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c296d80(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e980(puVar5);
      _objc_release(uVar3);
      uVar3 = 0;
      goto LAB_10570f6c8;
    }
    uVar3 = 0;
  }
  puVar5 = (undefined *)0x0;
LAB_10570f6c8:
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_68,param_1 + 0x38);
  _objc_copyWeak(auStack_60,auStack_58);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  func_0x00010c2896a0(uVar1);
  puVar4 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10570f7f8; end: 10570f897;  */

void FUN_10570f7f8(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (param_1 != 0)) {
    if (((param_2 & 1) == 0) && (param_3 != 0)) {
      func_0x00010bebbac0(lVar1);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_1);
    _objc_release(puVar2);
    func_0x00010bf436e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10570f898; end: 10570fb53; -[SCProfileFlatlandMyProfileBitmojiService displayBitmojiOutfitPageWithActionSource:source:promo:encodedOutfit:avatarStateHistoryJson:] */

void FUN_10570f898(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  long unaff_x27;
  undefined *puVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar6 = 0;
  iVar5 = (int)param_3;
  if (iVar5 < 2) {
    if (iVar5 != 0) {
      if (iVar5 == 1) {
LAB_10570f928:
        uVar6 = 0;
      }
      goto LAB_10570f980;
    }
    if (param_5 == 0) {
      bVar7 = true;
      uVar6 = param_1;
      func_0x00010becc480(param_1,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126afe28;
      _objc_alloc(PTR_PTR_1126afe28);
      puVar8 = (undefined *)0x0;
      goto LAB_10570f9f8;
    }
    uVar6 = param_1;
    func_0x00010becc480(param_1,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126afe28;
    _objc_alloc(PTR_PTR_1126afe28);
  }
  else {
    if (iVar5 == 2) {
      uVar6 = param_1;
      func_0x00010becc480(param_1,param_2,3);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (iVar5 == 3) {
      uVar6 = param_1;
      func_0x00010becc480(param_1,param_2,2);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (iVar5 == 4) goto LAB_10570f928;
LAB_10570f980:
    puVar4 = PTR_PTR_1126afe28;
    _objc_alloc(PTR_PTR_1126afe28);
    if (param_5 == 0) {
      puVar8 = (undefined *)0x0;
      bVar7 = true;
      goto LAB_10570f9f8;
    }
  }
  puVar8 = PTR_PTR_1126afe30;
  _objc_alloc(PTR_PTR_1126afe30);
  unaff_x27 = param_5;
  func_0x00010bf335e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = unaff_x27;
  func_0x00010c067fc0();
  param_3 = param_5;
  func_0x00010bf20f40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff5f00(puVar8,param_2,lVar2,param_3);
  bVar7 = false;
LAB_10570f9f8:
  lVar3 = param_4;
  func_0x00010bc9109c();
  lVar2 = 0;
  if (lVar3 == 0xc2) {
    lVar2 = 0x1a;
  }
  lVar1 = 0x1b;
  if (lVar3 != 0xd1) {
    lVar1 = lVar2;
  }
  if (lVar3 != 9) {
    lVar3 = lVar1;
  }
  func_0x00010c00fbc0(puVar4,param_2,param_6,puVar8,lVar3,uVar6,param_7);
  if (!bVar7) {
    _objc_release(puVar8);
    _objc_release(param_3);
    _objc_release(unaff_x27);
  }
  puVar8 = PTR_PTR_1126afdb8;
  _objc_alloc(PTR_PTR_1126afdb8);
  func_0x00010bff0880();
  func_0x00010be9e6a0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb8978,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10570fb54; end: 10570fdbf; -[SCProfileFlatlandMyProfileBitmojiService displayBitmojiEditPageWithActionSource:source:promo:avatarStateHistoryJson:] */

void FUN_10570fb54(undefined8 param_1,undefined8 param_2,uint param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  long unaff_x26;
  undefined *puVar8;
  long unaff_x28;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar6 = 0;
  if ((int)param_3 < 3) {
    if (1 < param_3) {
      if (param_3 == 2) {
        uVar5 = 6;
        goto LAB_10570fc54;
      }
      goto LAB_10570fc68;
    }
LAB_10570fbd8:
    if (param_5 == 0) {
      uVar6 = param_1;
      func_0x00010becc480(param_1,param_2,5);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126afe28;
      _objc_alloc(PTR_PTR_1126afe28);
      puVar8 = (undefined *)0x0;
      bVar7 = true;
      goto LAB_10570fce0;
    }
    uVar6 = param_1;
    func_0x00010becc480(param_1,param_2,7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126afe28;
    _objc_alloc(PTR_PTR_1126afe28);
  }
  else {
    if (param_3 != 3) {
      if (param_3 != 4) goto LAB_10570fc68;
      goto LAB_10570fbd8;
    }
    uVar5 = 2;
LAB_10570fc54:
    uVar6 = param_1;
    func_0x00010becc480(param_1,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
LAB_10570fc68:
    puVar2 = PTR_PTR_1126afe28;
    _objc_alloc(PTR_PTR_1126afe28);
    if (param_5 == 0) {
      puVar8 = (undefined *)0x0;
      bVar7 = true;
      goto LAB_10570fce0;
    }
  }
  puVar8 = PTR_PTR_1126afe30;
  _objc_alloc(PTR_PTR_1126afe30);
  unaff_x26 = param_5;
  func_0x00010bf335e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = unaff_x26;
  func_0x00010c067fc0();
  unaff_x28 = param_5;
  func_0x00010bf20f40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff5f00(puVar8,param_2,lVar3,unaff_x28);
  bVar7 = false;
LAB_10570fce0:
  lVar4 = param_4;
  func_0x00010bc9109c();
  lVar3 = 0;
  if (lVar4 == 0xc2) {
    lVar3 = 0x1a;
  }
  lVar1 = 0x1b;
  if (lVar4 != 0xd1) {
    lVar1 = lVar3;
  }
  if (lVar4 != 9) {
    lVar4 = lVar1;
  }
  func_0x00010c00fbc0(puVar2,param_2,0,puVar8,lVar4,uVar6,param_6);
  if (!bVar7) {
    _objc_release(puVar8);
    _objc_release(unaff_x28);
    _objc_release(unaff_x26);
  }
  puVar8 = PTR_PTR_1126afdb8;
  _objc_alloc(PTR_PTR_1126afdb8);
  func_0x00010bff0880();
  func_0x00010be9e6a0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb8998,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10570fdc0; end: 10570fdcf; -[SCProfileFlatlandMyProfileBitmojiService displayBitmojiSelfiePage] */

void FUN_10570fdc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9e690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendActionIdentifier__112585348,
             &PTR____CFConstantStringClassReference_110eb89b8);
  return;
}



/* Entry: 10570fdd0; end: 10570fe07; -[SCProfileFlatlandMyProfileBitmojiService displayBitmojiCreatePageFromWithActionSource:] */

void FUN_10570fdd0(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 1) {
    func_0x00010bf853a0(param_1,param_2,0xf);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85380();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10570fe08; end: 10570fe0f; -[SCProfileFlatlandMyProfileBitmojiService displayBitmojiCreatePage] */

void FUN_10570fe08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf853b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_displayBitmojiCreatePageFromSour_1125bee90,9)
  ;
  return;
}



/* Entry: 10570fe10; end: 10570ff93; -[SCProfileFlatlandMyProfileBitmojiService displayBitmojiCreatePageFromSource:] */

void FUN_10570fe10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10570ff94;
  puStack_50 = &UNK_110846540;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9e6a0(param_1);
  _objc_release(puVar1);
  _os_unfair_lock_lock(param_1 + 0xb0);
  lVar3 = *(long *)(param_1 + 0xa8);
  if (lVar3 != 0) {
    puVar1 = PTR_PTR_1126b15a8;
    func_0x00010c27f660(PTR_PTR_1126b15a8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb700(lVar3);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    _objc_release(uVar2);
  }
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined **)(param_1 + 0xa8) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(uVar2);
  _os_unfair_lock_unlock(param_1 + 0xb0);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10570ff94; end: 10570ffc7;  */

void FUN_10570ff94(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7ad20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10570ffc8; end: 105710077; -[SCProfileFlatlandMyProfileBitmojiService displayBitmojiShareOutfitPageWithPetImageUrl:avatarId:] */

void FUN_10570ffc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afe20;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0357c0();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126afdb8;
  _objc_alloc(PTR_PTR_1126afdb8);
  func_0x00010bff0880();
  func_0x00010be9e6a0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb89f8,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105710078; end: 1057100ff; -[SCProfileFlatlandMyProfileBitmojiService displayBitmojiLensCarouselPageWithPetImageUrl:skipToLensFeed:] */

void FUN_105710078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afe20;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0357c0();
  _objc_release(param_3);
  func_0x00010be9e6a0(param_1,param_2,&PTR____CFConstantStringClassReference_110eb8a38,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105710100; end: 1057101af; -[SCProfileFlatlandMyProfileBitmojiService handleUserDidEnterPoseSelectionView] */

void FUN_105710100(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf9d5c0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1057101b0; end: 10571025f;  */

void FUN_1057101b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd6a0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037640();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105710260; end: 10571028b; -[SCProfileFlatlandMyProfileBitmojiService handleUserDidExitPoseSelectionView] */

void FUN_105710260(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c12e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_removeScope_112629290);
  return;
}



/* Entry: 10571028c; end: 10571033b; -[SCProfileFlatlandMyProfileBitmojiService getPetsBadgedFeature] */

void FUN_10571028c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8740();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8740();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x000106c69040(uVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10571033c; end: 105710403; -[SCProfileFlatlandMyProfileBitmojiService displayPetsTrayWithOnClose:] */

void FUN_10571033c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    return;
  }
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b3680;
  _objc_alloc(PTR_PTR_1126b3680);
  func_0x00010c058520();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf21f80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c10ae00(*(undefined8 *)(param_1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105710404; end: 10571040b; -[SCProfileFlatlandMyProfileBitmojiService _sendActionIdentifier:] */

void FUN_105710404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9e6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendActionIdentifier_actionData_112585350,param_3,0);
  return;
}



/* Entry: 10571040c; end: 1057104db; -[SCProfileFlatlandMyProfileBitmojiService _sendActionIdentifier:actionDataModel:] */

void FUN_10571040c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c01b460();
  _objc_release(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1057104dc;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_3;
  uStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 1057104dc; end: 1057104eb;  */

void FUN_1057104dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x68),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,*(long *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 1057104ec; end: 105710593; -[SCProfileFlatlandMyProfileBitmojiService getPlusExclusiveBackgroundFeatureGatingState] */

void FUN_1057104ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9ae40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105710594; end: 1057105d3;  */

undefined ** FUN_105710594(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  func_0x00010c252440();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1570;
  if (param_2 != 1) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1558;
  }
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1588;
  if (param_2 != 3) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 1057105d4; end: 105710663; -[SCProfileFlatlandMyProfileBitmojiService displayPlusExclusiveBackgroundUpsellPage] */

void FUN_1057105d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1da8;
  _objc_alloc(PTR_PTR_1126b1da8);
  func_0x00010c04abe0();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf23e60(uVar2,param_2,*(undefined8 *)(param_1 + 0x60),puVar1,param_1,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38),param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105710664; end: 1057106cb; -[SCProfileFlatlandMyProfileBitmojiService clearNewBackgroundIds] */

void FUN_105710664(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf3a9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1057106cc; end: 105710733; -[SCProfileFlatlandMyProfileBitmojiService clearNewSceneIds] */

void FUN_1057106cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf3bf80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105710734; end: 10571096b; -[SCProfileFlatlandMyProfileBitmojiService triggerBatchRenderWithSceneIds:scale:] */

void FUN_105710734(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  puVar6 = PTR_PTR_1126af5d0;
  puVar7 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110df9478,400,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa01c0(puVar6,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar7,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010b09c8d0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x70);
    func_0x00010bf173e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c25ef60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126af5d0;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar7,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010c14f680(puVar8,param_2,puVar7,&PTR___NSConcreteGlobalBlock_1108ac808);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar3);
    puVar8 = puVar5;
    func_0x00010b09c8d0(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10571096c; end: 105710a97;  */

void FUN_10571096c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010bfb2660(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105710a98; end: 105710aa3;  */

void FUN_105710a98(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf09f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_arrayByAddingObject__1125a0180,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105710aa4; end: 105710af7; -[SCProfileFlatlandMyProfileBitmojiService isUniversalAvatarEnabled] */

void FUN_105710aa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,PTR____kCFBooleanTrue_11034ab68);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105710af8; end: 105710b9b; -[SCProfileFlatlandMyProfileBitmojiService getMySelfieId] */

void FUN_105710af8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010bf870a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010b09c8d0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105710b9c; end: 105710bff;  */

void FUN_105710b9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105710c00; end: 105710c13; -[SCProfileFlatlandMyProfileBitmojiService presentOutfitChangeNotificationWithAvatarId:] */

void FUN_105710c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9e6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendActionIdentifier_actionData_112585350,
             &PTR____CFConstantStringClassReference_110eb8a18,param_3);
  return;
}



/* Entry: 105710c14; end: 105710c27; -[SCProfileFlatlandMyProfileBitmojiService writeOutfitChangeTimestamp] */

void FUN_105710c14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9e6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendActionIdentifier_actionData_112585350,
             &PTR____CFConstantStringClassReference_110eb8a58,0);
  return;
}


