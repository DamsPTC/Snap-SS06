/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1051b4818; end: 1051b481f; -[SCContextAuraActionViewController pageViewName] */

undefined8 FUN_1051b4818(void)

{
  return 0x15;
}



/* Entry: 1051b4820; end: 1051b4893; -[SCContextAuraActionPerformer initWithAuraMyProfileScopeExposer:] */

undefined1 * FUN_1051b4820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6bc0;
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



/* Entry: 1051b4894; end: 1051b4b77; -[SCContextAuraActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051b4894(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010bf0bf80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110dca5d8;
  }
  else {
    lVar5 = lVar1;
    func_0x00010c116fa0();
    if ((int)lVar5 == 1) {
      uVar6 = param_8;
      _objc_retainBlock();
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = uVar6;
      _objc_release(uVar8);
      puVar2 = PTR_PTR_1126b5b18;
      _objc_alloc_init();
      puVar3 = PTR_PTR_1126aead8;
      _objc_alloc();
      func_0x00010c038f40();
      puVar4 = PTR_PTR_1126b4b10;
      _objc_alloc();
      func_0x00010c056900();
      lVar5 = *(long *)(param_1 + 8);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 != 0) {
        func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      uVar8 = *(undefined8 *)(param_1 + 8);
      _objc_retain(uVar8);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_1051b4b78;
      puStack_88 = &UNK_110841f80;
      uStack_80 = uVar8;
      puStack_78 = puVar4;
      func_0x00010c10eda0(param_4);
      _objc_retain(puVar2);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = puVar2;
      _objc_release(uVar6);
      _objc_initWeak(auStack_a8,param_1);
      ppuVar7 = (undefined **)PTR_PTR_1126afd78;
      _objc_alloc(PTR_PTR_1126afd78);
      _objc_copyWeak(auStack_b0,auStack_a8);
      func_0x00010bffae00(ppuVar7);
      _objc_destroyWeak(auStack_b0);
      _objc_destroyWeak(auStack_a8);
      _objc_release(uVar8);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      goto LAB_1051b4af0;
    }
    ppuVar7 = &PTR____CFConstantStringClassReference_110dca5f8;
  }
  func_0x0001051cb2fc(ppuVar7,param_8);
  _objc_retainAutoreleasedReturnValue();
LAB_1051b4af0:
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 1051b4b78; end: 1051b4b83;  */

void FUN_1051b4b78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_exposeScope__1125c4f30,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1051b4b84; end: 1051b4baf;  */

void FUN_1051b4b84(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becaca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051b4bb0; end: 1051b4c83; -[SCContextAuraActionPerformer _tearDown] */

void FUN_1051b4bb0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1051b4c84;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = uVar3;
  func_0x00010bcbe2c4("APPSTORE",&puStack_60);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar2);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1051b4c84; end: 1051b4cdf;  */

void FUN_1051b4c84(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_1 + 0x28);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1051b4ce0;
  puStack_20 = &UNK_110842e18;
  func_0x00010bf84b00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,0,&puStack_38);
  return;
}



/* Entry: 1051b4ce0; end: 1051b4d27;  */

void FUN_1051b4ce0(long param_1)

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



/* Entry: 1051b4d28; end: 1051b4ddb; -[SCContextAuraActionPerformer auraMyProfileWorkflowDidFinish] */

void FUN_1051b4d28(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1051b4db0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1051b4ddc; end: 1051b4e17; -[SCContextAuraActionPerformer .cxx_destruct] */

void FUN_1051b4ddc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051b4e18; end: 1051b4e8b; -[SCContextBitmojiAvatarActionPerformer initWithBitmojiAvatarBuilderScopeExposer:] */

undefined1 * FUN_1051b4e18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6bc8;
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



/* Entry: 1051b4e8c; end: 1051b509b; -[SCContextBitmojiAvatarActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051b4e8c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010bf54b00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dca618;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dca618,param_8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_5;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126af678;
    _objc_alloc(PTR_PTR_1126af678);
    func_0x00010c04a940();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
    _objc_initWeak(auStack_68,param_1);
    ppuVar5 = (undefined **)PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bffae00(ppuVar5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 1051b509c; end: 1051b50c7;  */

void FUN_1051b509c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c26ab80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051b50c8; end: 1051b516f; -[SCContextBitmojiAvatarActionPerformer tearDown] */

void FUN_1051b50c8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf6f440(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1051b5170; end: 1051b51ab;  */

void FUN_1051b5170(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051b51ac; end: 1051b51f3; -[SCContextBitmojiAvatarActionPerformer bitmojiCreateFlowDidCompleteWithAvatarId:] */

void FUN_1051b51ac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1051b51f4; end: 1051b5223; -[SCContextBitmojiAvatarActionPerformer .cxx_destruct] */

void FUN_1051b51f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051b5224; end: 1051b5297; -[SCContextBloopsActionPerformer initWithBloopsOnboardingControllerFactory:] */

undefined1 * FUN_1051b5224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6bd0;
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



/* Entry: 1051b5298; end: 1051b54fb; -[SCContextBloopsActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051b5298(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010bf28b40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    (**(code **)(param_8 + 0x10))(param_8,0);
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf54d00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c29d360(param_6);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1051b54fc;
    puStack_88 = &UNK_110842e18;
    _objc_retain(param_6);
    puStack_c8 = puVar4;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_1051b5544;
    puStack_b0 = &UNK_110842508;
    uStack_80 = param_6;
    _objc_retain(param_8);
    lStack_a8 = param_8;
    func_0x00010bf1db80(uVar5);
    _objc_initWeak(auStack_d0,param_1);
    puVar4 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    _objc_copyWeak(auStack_d8,auStack_d0);
    func_0x00010bffae00(puVar4);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_d0);
    _objc_release(lStack_a8);
    _objc_release(uStack_80);
  }
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1051b54fc; end: 1051b5543;  */

void FUN_1051b54fc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c0ea4c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c0eb780(lVar1,param_2,&PTR____CFConstantStringClassReference_110f69778);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051b5544; end: 1051b5553;  */

void FUN_1051b5544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001051b5550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1051b5554; end: 1051b559b;  */

void FUN_1051b5554(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf1db40(*(undefined8 *)(param_1 + 0x10),param_2,1,0);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051b559c; end: 1051b55cb; -[SCContextBloopsActionPerformer .cxx_destruct] */

void FUN_1051b559c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051b55cc; end: 1051b56d7; -[SCContextBoostActionPerformer initWithLazyBoostCoordinator:circumstanceEngine:] */

undefined1 *
FUN_1051b55cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e6bd8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051b56d8; end: 1051b5ab3; -[SCContextBoostActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051b56d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_6;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_6;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c25b200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_6;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf82a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  if (uVar4 != 0) {
    uVar2 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bf82a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  if (uVar1 == 0) {
    if (param_8 != 0) {
      puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x00010c00e2e0();
      (**(code **)(param_8 + 0x10))(param_8,puVar8);
      _objc_release(puVar8);
    }
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar2 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c22e6a0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar7);
      uVar7 = 0;
    }
    _objc_initWeak(auStack_68,param_1);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(uVar1);
    _objc_retain(uVar7);
    _objc_retain(param_7);
    _objc_retain(param_8);
    func_0x00010bfa5620(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar8 = PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    func_0x00010bffae00();
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(uVar7);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_70);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1051b5ab4; end: 1051b5ceb;  */

void FUN_1051b5ab4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  uVar11 = *(ulong *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c08f3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  puVar2 = PTR_PTR_1126b5b20;
  _objc_opt_class(PTR_PTR_1126b5b20);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar11 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar11 = 0;
  }
  _objc_retain(uVar11);
  _objc_release(uVar1);
  uVar4 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010b611854(uVar4,uVar11);
  _objc_release(uVar4);
  uVar1 = uVar11;
  func_0x00010c06b7e0();
  if ((int)uVar1 != 0) {
    uVar1 = uVar11;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(uVar1);
  }
  lVar5 = param_1 + 0x48;
  _objc_loadWeakRetained();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c082620();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08bda0();
  func_0x00010beef1e0();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ea4c0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be00bc0(lVar5);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 1051b5cec; end: 1051b60ff; -[SCContextBoostActionPerformer _didTapBoostButtonWithIsBoosted:storyId:itemId:isAd:savesToDeviceOnly:isUserGeneratedContent:launchSource:actionType:eventAnnouncer:page:completion:] */

void FUN_1051b5cec(double param_1,long param_2,undefined8 param_3,int param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,int param_8)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 auStack_100 [7];
  undefined8 auStack_c8 [7];
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  puVar3 = PTR_PTR_1126b2d20;
  _objc_retain(param_6);
  func_0x00010bfa1000();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_90 = puVar3;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar4;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar2 = auStack_c8;
  if (param_4 == 0) {
    puVar2 = auStack_100;
  }
  pcVar1 = (code *)0x1051b6154;
  if (param_4 != 0) {
    pcVar1 = FUN_1051b6100;
  }
  *puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puVar2[1] = 0xc2000000;
  puVar2[2] = pcVar1;
  puVar2[3] = &UNK_110848ba8;
  _objc_retain(in_stack_00000010);
  puVar2[4] = in_stack_00000010;
  _objc_retain(in_stack_00000018);
  puVar2[5] = in_stack_00000018;
  _objc_retain(puVar5);
  puVar2[6] = puVar5;
  func_0x000100162d98("APPSTORE",puVar2);
  _objc_release(puVar2[6]);
  _objc_release(puVar2[5]);
  _objc_release(puVar2[4]);
  lVar6 = param_5;
  func_0x000108f51d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b5b30;
  if (lVar6 == 0) {
    _objc_alloc(PTR_PTR_1126b5b30);
    func_0x00010c005f80();
  }
  else {
    _objc_alloc(PTR_PTR_1126b5b30);
    func_0x00010bf52680(lVar6);
    lVar7 = lVar6;
    func_0x00010bfe5ec0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298be0(lVar6);
    func_0x00010c005f80(puVar3);
    _objc_release(lVar7);
  }
  puVar4 = PTR_PTR_1126b5b38;
  _objc_alloc(PTR_PTR_1126b5b38);
  puVar8 = puVar4;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c04ee20(param_1 * 1000.0,0,puVar4);
  _objc_release(param_6);
  _objc_release(puVar9);
  _objc_release(puVar8);
  uVar10 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  if (param_8 == 0) {
    _objc_retain(in_stack_00000020);
    func_0x00010c14a0a0(uVar10);
    _objc_release(uVar10);
  }
  else {
    _objc_retain(in_stack_00000020);
    func_0x00010c14a0c0(uVar10);
    _objc_release(uVar10);
  }
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000020);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    uVar10 = *(undefined8 *)(param_5 + 0x20);
    puVar3 = PTR_PTR_1126b5b28;
    func_0x00010c27fa80(PTR_PTR_1126b5b28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1051b6100; end: 1051b61a7;  */

void FUN_1051b6100(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b5b28;
  func_0x00010c27fa80(PTR_PTR_1126b5b28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar2,param_2,puVar1,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051b61a8; end: 1051b61d7;  */

void FUN_1051b61a8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001051b61b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1051b61d8; end: 1051b6213; -[SCContextBoostActionPerformer .cxx_destruct] */

void FUN_1051b61d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051b6214; end: 1051b62df; -[SCContextCTItemActionPerformer initWithChatCameraScopeExposer:chatCameraScopeServices:stickerInjector:] */

undefined1 *
FUN_1051b6214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e6be0;
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051b62e0; end: 1051b64bb; -[SCContextCTItemActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051b62e0(undefined **param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar1 = param_1[1];
  func_0x00010c071800();
  if (((ulong)puVar1 & 1) == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dca678;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dca678,param_8);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1051b647c;
  }
  puVar1 = param_1[1];
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c12e1c0(param_1[1]);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  ppuVar2 = param_3;
  func_0x00010bf5cc20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf5ccc0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dca698;
LAB_1051b6458:
    func_0x0001051cb2fc(ppuVar5,param_8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar5 = ppuVar2;
    func_0x00010bf5cce0();
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110dca6b8;
      goto LAB_1051b6458;
    }
    ppuVar5 = ppuVar3;
    func_0x00010bfb1920(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_1;
    func_0x00010bde8280();
    _objc_release(ppuVar5);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110dca6d8;
      goto LAB_1051b6458;
    }
    if (ppuVar4 == (undefined **)0x1) {
      ppuVar5 = ppuVar3;
      func_0x00010bfb1920(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be28ea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      ppuVar5 = param_1;
    }
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
LAB_1051b647c:
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 1051b64bc; end: 1051b67a7; -[SCContextCTItemActionPerformer _handleEntityActionOpenCameraForCTItemInstance:onViewController:params:completion:] */

void FUN_1051b64bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c231ec0();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    puVar4 = *(undefined **)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c109960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if (puVar5 != (undefined *)0x0) {
      _objc_retain(puVar5);
      _objc_release(puVar1);
      puVar1 = puVar5;
    }
    _objc_release(puVar5);
  }
  uVar3 = param_6;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  _objc_release(uVar2);
  lVar6 = param_1;
  func_0x00010be8f040();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b5b40;
  func_0x00010c254180();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1051b67a8;
  puStack_a8 = &UNK_11086e718;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_6);
  uStack_88 = param_6;
  _objc_retain(param_4);
  uStack_a0 = param_4;
  _objc_retain(lVar6);
  puVar4 = puVar5;
  lStack_98 = lVar6;
  _objc_retain(puVar5);
  puStack_90 = puVar5;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar1);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  _objc_copyWeak(auStack_c8,auStack_78);
  func_0x00010bffae00(puVar4);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puStack_90);
  _objc_release(lStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar5);
  _objc_release(lVar6);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1051b67a8; end: 1051b68fb;  */

void FUN_1051b67a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      puVar3 = PTR_PTR_1126b5b48;
      func_0x00010bf5cd40();
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_1051b68fc;
      puStack_78 = &UNK_110866740;
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      lStack_70 = lVar1;
      _objc_retain(uVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      uStack_68 = uVar4;
      _objc_retain(uVar5);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      uStack_60 = uVar5;
      _objc_retain(uVar6);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      uStack_58 = uVar6;
      puStack_50 = puVar3;
      _objc_retain(uVar4);
      uStack_48 = uVar4;
      _objc_retain(puVar3);
      func_0x0001000d76cc("APPSTORE",&puStack_90);
      _objc_release(uStack_48);
      _objc_release(puStack_50);
      _objc_release(uStack_58);
      _objc_release(uStack_60);
      _objc_release(uStack_68);
      _objc_release(puVar3);
    }
    else {
      lVar2 = *(long *)(param_1 + 0x38);
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x10))(lVar2,0);
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1051b68fc; end: 1051b69c7;  */

void FUN_1051b68fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010bf23680(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(long *)(param_1 + 0x20),2,0,*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = uVar1;
  _objc_release(uVar3);
  func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001051b697c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,0);
    return;
  }
  return;
}



/* Entry: 1051b69c8; end: 1051b6af3; -[SCContextCTItemActionPerformer _contextActionTypeForCTItemInstance:] */

undefined8 FUN_1051b69c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf96ee0();
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar5 = (uint)uVar2;
  if (0x11 < uVar5 - 0xb) {
    uVar4 = 1;
    if (9 < uVar5) goto LAB_1051b6a54;
    if ((1 << (ulong)(uVar5 & 0x1f) & 0x1d9U) == 0) {
      if (uVar5 != 9) goto LAB_1051b6a54;
      uVar4 = param_3;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfede40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c27dd80();
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar4);
      if (((uint)uVar3 < 0x13) && (uVar4 = 1, (1 << (ulong)((uint)uVar3 & 0x1f) & 0x4c00aU) != 0))
      goto LAB_1051b6a54;
    }
  }
  uVar4 = 0;
LAB_1051b6a54:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1051b6af4; end: 1051b6c9b; -[SCContextCTItemActionPerformer _replyConfigurationForParams:] */

void FUN_1051b6af4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c08bda0();
  iVar1 = (int)uVar7;
  func_0x000108435ff0();
  if (iVar1 - 1U < 0xe) {
    uVar7 = *(undefined8 *)(&UNK_10dd90510 + (ulong)(iVar1 - 1U) * 8);
  }
  else {
    uVar7 = 0x2a;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010be62580(param_1,param_2,uVar7);
  puVar4 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x0001091ef76c(uVar7);
  func_0x00010c03e5a0(puVar4,param_2,0,uVar7,param_1,1,0);
  puVar5 = PTR_PTR_1126b5b50;
  _objc_alloc(PTR_PTR_1126b5b50);
  uVar2 = param_3;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c076240();
  _objc_release(param_3);
  func_0x00010c01f080(puVar5,param_2,1,0,0,0,0,0,0,uVar3,0);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126b1bb0;
  func_0x00010bf4efa0(PTR_PTR_1126b1bb0,param_2,puVar4,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1051b6c9c; end: 1051b6cc7; -[SCContextCTItemActionPerformer _navigationTypeFromPageSource:] */

undefined8 FUN_1051b6c9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xffffffffffffffff;
  if (param_3 == 0x2a) {
    uVar1 = 0xf;
  }
  uVar2 = 0xe;
  if (param_3 != 0x2b) {
    uVar2 = uVar1;
  }
  uVar1 = 0x13;
  if (param_3 != 0x3c) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1051b6cc8; end: 1051b6d37; -[SCContextCTItemActionPerformer dismissCameraScope:] */

void FUN_1051b6cc8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051b6d38; end: 1051b6d8b; -[SCContextCTItemActionPerformer .cxx_destruct] */

void FUN_1051b6d38(long param_1)

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



/* Entry: 1051b6d8c; end: 1051b6f07; -[SCContextCameraActionPerformer initWithUserSession:snapchattersDataFetcher:groupsDataFetcher:userInfoServices:contextExperimentService:chatCameraScopeExposer:chatCameraScopeServices:] */

undefined1 *
FUN_1051b6d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e6be8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051b6f08; end: 1051b70ab; -[SCContextCameraActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051b6f08(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar3 = param_6;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c131ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0748c0();
  _objc_release(uVar4);
  uVar4 = param_6;
  func_0x00010c0b3760(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1[3];
  puVar2 = param_1[4];
  puVar9 = param_1[1];
  puVar10 = param_1[5];
  uVar7 = param_6;
  func_0x00010c076240();
  uVar8 = uVar3;
  func_0x0001065eccb0(uVar3,uVar5 & 0xffffffff,0,0,0,0,uVar6,puVar1,puVar2,puVar9,puVar10,
                      (char)uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar4);
  if (uVar8 == 0) {
    param_1 = &PTR____CFConstantStringClassReference_110dca6f8;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dca6f8,param_8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0f8bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_8);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1051b70ac; end: 1051b736f; -[SCContextCameraActionPerformer performOnViewController:params:replyConfiguration:completion:] */

void FUN_1051b70ac(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x00010c071800();
  if ((uVar1 & 1) == 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110dca678;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dca678,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar6 = param_6;
    _objc_retainBlock();
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    _objc_release(uVar7);
    lVar5 = param_4;
    func_0x00010c23f540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR_PTR_1126b0820;
      _objc_alloc_init();
      puVar3 = puVar9;
      func_0x00010c2b2880();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar9);
      if (puVar4 == (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar9 = PTR_PTR_1126b5b58;
        _objc_alloc();
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_70 = puVar4;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c025e00();
        _objc_release(puVar3);
      }
      _objc_release(puVar4);
    }
    _objc_release(lVar5);
    _objc_initWeak(&puStack_70,param_1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1051b7370;
    puStack_98 = &UNK_110850cf8;
    _objc_copyWeak(auStack_78,&puStack_70);
    _objc_retain(param_3);
    lStack_90 = param_3;
    _objc_retain(param_5);
    uStack_88 = param_5;
    _objc_retain(puVar9);
    puStack_80 = puVar9;
    func_0x0001000d76cc("APPSTORE",&puStack_b0);
    _objc_release(puStack_80);
    _objc_release(uStack_88);
    _objc_release(lStack_90);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(&puStack_70);
    _objc_release(puVar9);
    ppuVar8 = (undefined **)0x0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar8 + 7);
  _objc_destroyWeak(&puStack_70);
  __Unwind_Resume();
  param_3 = param_3 + 0x38;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    lVar5 = *(long *)(param_3 + 0x38);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(param_3 + 0x38);
      func_0x00010c150520(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf834c0(param_3);
      _objc_release(uVar6);
    }
    uVar6 = *(undefined8 *)(param_3 + 0x40);
    func_0x00010bf23680(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_3 + 0x38));
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051b7370; end: 1051b743b;  */

void FUN_1051b7370(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x38);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x38);
      func_0x00010c150520(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf834c0(lVar1,param_2,uVar3);
      _objc_release(uVar3);
    }
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    func_0x00010bf23680(uVar3,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),lVar1,2,0,0,0,lVar1,
                        *(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x38),param_2,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051b743c; end: 1051b74c3; -[SCContextCameraActionPerformer captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_1051b743c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c150520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf834c0(param_1);
    _objc_release(uVar2);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051b74c4; end: 1051b750b; -[SCContextCameraActionPerformer dismissCameraScope:] */

void FUN_1051b74c4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1051b750c; end: 1051b7583; -[SCContextCameraActionPerformer .cxx_destruct] */

void FUN_1051b750c(long param_1)

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



/* Entry: 1051b7584; end: 1051b7677; -[SCContextCameraShortcutActionPerformer initWithCameraConfigurationServices:directorModeLaunchServices:directorModeScopeServices:circumstanceEngine:] */

undefined1 *
FUN_1051b7584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e6bf0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051b7678; end: 1051b7d2b; -[SCContextCameraShortcutActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8
FUN_1051b7678(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  if (param_5 == 0) goto LAB_1051b7cf0;
  _objc_retain(param_3);
  uVar2 = param_6;
  func_0x00010c0ea4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf2adc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar3 == 0) {
    if (param_8 != 0) {
      (**(code **)(param_8 + 0x10))(param_8,0);
    }
  }
  else {
    lVar4 = param_8;
    _objc_retainBlock();
    uVar15 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar4;
    _objc_release(uVar15);
    uVar15 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar15;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar14;
    func_0x00010c08bda0();
    iVar1 = (int)uVar17;
    func_0x000108435ff0();
    if ((iVar1 == 7) || (iVar1 == 1)) {
      uVar17 = 0x2b;
    }
    else {
      uVar17 = 0x2a;
    }
    _objc_release(uVar14);
    _objc_release(uVar15);
    puVar5 = PTR_PTR_1126ae6c0;
    func_0x00010c294300();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae6d0;
    _objc_alloc();
    func_0x0001091ef76c(uVar17);
    func_0x00010c03e5a0();
    lVar4 = lVar3;
    func_0x00010bfd67c0();
    if ((int)lVar4 == 0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar7;
      func_0x00010bf7f280();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar15;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar14;
      func_0x00010bf926c0();
      if ((int)uVar17 == 0) {
        puVar18 = (undefined *)0x0;
      }
      else {
        uVar8 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar8;
        func_0x00010c0d1c60();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar17;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c0718c0();
        _objc_release(uVar9);
        _objc_release(uVar17);
        _objc_release(uVar8);
        _objc_release(uVar14);
        _objc_release(uVar15);
        _objc_release(uVar7);
        if ((int)uVar10 == 0) {
          puVar18 = (undefined *)0x0;
          goto LAB_1051b79b8;
        }
        puVar18 = PTR_PTR_1126b5b60;
        _objc_alloc();
        uVar7 = param_6;
        func_0x00010c0b3760(param_6);
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar7;
        func_0x00010c15ffa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4eae0();
        uVar14 = param_6;
        func_0x00010c242420();
        _objc_retainAutoreleasedReturnValue();
        uVar17 = uVar14;
        func_0x00010c241400();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar17;
        func_0x00010c25b200();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf8ae20(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08d1e0();
        func_0x00010c045ec0();
        _objc_release(lVar4);
        _objc_release(uVar9);
        _objc_release(uVar17);
      }
      _objc_release(uVar14);
      _objc_release(uVar15);
      _objc_release(uVar7);
    }
LAB_1051b79b8:
    puVar11 = PTR_PTR_1126b5b50;
    _objc_alloc();
    uVar15 = param_6;
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar15;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076240();
    func_0x00010c01f080();
    _objc_release(uVar14);
    _objc_release(uVar15);
    puVar12 = PTR_PTR_1126b1bb0;
    func_0x00010bf4efa0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar15;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08bda0();
    func_0x000108435ff0();
    _objc_release(uVar14);
    _objc_release(uVar15);
    puVar13 = PTR_PTR_1126b5b68;
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bf4f100();
    if ((int)puVar13 != 0) {
      func_0x00010c277e80(lVar3);
    }
    _objc_release(lVar4);
    puVar13 = PTR_PTR_1126b5b68;
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bf4f100();
    if ((int)puVar13 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = lVar3;
      func_0x00010c094680(lVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar4);
    puVar13 = PTR_PTR_1126b5b70;
    _objc_alloc();
    uVar15 = param_6;
    func_0x00010c242420(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar15;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar14;
    func_0x00010c25b200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c045f20(0);
    _objc_release(uVar17);
    _objc_release(uVar14);
    _objc_release(uVar15);
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf235e0(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf7f580();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar17;
    func_0x00010c076220();
    _objc_release(uVar17);
    if ((int)uVar15 != 0) {
      uVar15 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bf7f580(uVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf94c20();
      _objc_release(uVar15);
    }
    func_0x00010c0eb780(uVar2);
    uVar15 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf7f580(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(puVar13);
    _objc_release(lVar16);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar18);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(lVar3);
  _objc_release(uVar2);
LAB_1051b7cf0:
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  return 0;
}



/* Entry: 1051b7d2c; end: 1051b7dc3; -[SCContextCameraShortcutActionPerformer directorModeScopeDidComplete] */

void FUN_1051b7d2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf7f580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf7f580(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
    _objc_release(uVar2);
  }
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,0);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051b7dc4; end: 1051b7e07; -[SCContextCameraShortcutActionPerformer dismissCameraScope:] */

void FUN_1051b7dc4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051b7e08; end: 1051b7e57; -[SCContextCameraShortcutActionPerformer .cxx_destruct] */

void FUN_1051b7e08(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051b7e58; end: 1051b80d7; -[SCContextCameraV2ActionPerformer initWithUserSession:cameraConfigurationServices:directorModeLaunchServices:directorModeScopeServices:chatCameraScopeExposer:chatCameraScopeServices:musicCameraScopeExposer:musicCameraScopeBuilderServices:snapchattersDataFetcher:groupsDataFetcher:userInfoServices:] */

undefined8 *
FUN_1051b7e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126e6bf8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
  }
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



/* Entry: 1051b80d8; end: 1051b893b; -[SCContextCameraV2ActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8
FUN_1051b80d8(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar2 = param_3;
  func_0x00010bf2b900();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_8;
  _objc_retainBlock();
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  _objc_release(uVar12);
  uVar7 = param_6;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar7;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c08bda0();
  iVar1 = (int)uVar13;
  func_0x000108435ff0();
  if ((iVar1 == 7) || (iVar1 == 1)) {
    uVar13 = 0x2b;
  }
  else {
    uVar13 = 0x2a;
  }
  _objc_release(uVar12);
  _objc_release(uVar7);
  puVar3 = PTR_PTR_1126ae6c0;
  func_0x00010c294300();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x0001091ef76c(uVar13);
  func_0x00010c03e5a0(puVar4);
  uVar7 = uVar2;
  func_0x00010bfd67c0();
  puStack_b0 = (undefined *)0x0;
  if ((int)uVar7 != 0) {
    func_0x00010bf4eae0();
    uVar7 = uVar2;
    func_0x00010bf8ae20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08d1e0();
    _objc_release(uVar7);
    uVar7 = param_6;
    func_0x00010c242420(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar7;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c25b200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(uVar7);
    puStack_b0 = PTR_PTR_1126b5b60;
    _objc_alloc();
    uVar7 = param_6;
    func_0x00010c0b3760(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar7;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c045ec0();
    _objc_release(uVar12);
    _objc_release(uVar7);
    _objc_release(uVar13);
  }
  puVar5 = PTR_PTR_1126b5b50;
  _objc_alloc();
  uVar7 = param_6;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar7;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c076240();
  func_0x00010c01f080();
  _objc_release(uVar12);
  _objc_release(uVar7);
  puVar6 = PTR_PTR_1126b1bb0;
  func_0x00010bf4efa0(PTR_PTR_1126b1bb0);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010bfd6580();
  if ((int)uVar7 == 0) {
    lVar8 = param_7;
    func_0x00010beef1e0();
    if (lVar8 == 8) {
      uVar14 = 0x85;
    }
    else if (lVar8 == 5) {
      uVar14 = 0x84;
    }
    else {
      uVar7 = param_6;
      func_0x00010c242420();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar7;
      func_0x00010c241400();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar12;
      func_0x00010c08bda0();
      iVar1 = (int)uVar13;
      func_0x000108435ff0();
      if (iVar1 - 1U < 0x10) {
        uVar14 = *(ulong *)(&UNK_10dd90600 + (ulong)(iVar1 - 1U) * 8);
      }
      else {
        uVar14 = 0xffffffffffffffff;
      }
      _objc_release(uVar12);
      _objc_release(uVar7);
    }
    uVar7 = uVar2;
    func_0x00010c2736e0();
    if ((int)uVar7 == 1) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
      func_0x00010c071800();
      if (iVar1 != 0) {
        lVar8 = *(long *)(param_1 + 0x40);
        func_0x00010c150520();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar8 != 0) {
          func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        puVar11 = puVar6;
        if ((uVar14 & 0xfffffffffffffffe) == 0x84) {
          puVar11 = param_1;
          func_0x00010be01ac0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
        }
        uVar7 = param_6;
        FUN_1051cb29c();
        _objc_retain(param_4);
        lVar8 = param_4;
        if ((int)uVar7 != 0) {
          lVar9 = param_4;
          func_0x00010c0d66a0();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010c275140();
          _objc_retainAutoreleasedReturnValue();
          if (lVar10 != 0) {
            lVar8 = lVar10;
          }
          _objc_retain(lVar8);
          _objc_release(lVar10);
          _objc_release(lVar9);
          lVar9 = lVar8;
          func_0x00010c10f940();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          while (lVar9 != 0) {
            lVar10 = lVar8;
            func_0x00010c10f940();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar8);
            lVar9 = lVar10;
            func_0x00010c10f940();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            lVar8 = lVar10;
          }
          _objc_release(param_4);
        }
        uVar12 = *(undefined8 *)(param_1 + 0x48);
        uVar7 = uVar2;
        func_0x00010c0d2940(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c277e80();
        func_0x00010bf236a0(uVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x40));
        _objc_release(uVar12);
        _objc_release(lVar8);
        puVar6 = puVar11;
      }
      goto LAB_1051b889c;
    }
    puVar11 = param_1;
    func_0x00010be3faa0();
    if ((int)puVar11 == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
      func_0x00010c071800();
      if (iVar1 != 0) {
        puVar11 = param_1;
        func_0x00010be01ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_70,param_1);
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_1051b893c;
        puStack_90 = &UNK_110848218;
        _objc_copyWeak(auStack_78,auStack_70);
        _objc_retain(param_4);
        lStack_88 = param_4;
        puStack_80 = puVar11;
        func_0x0001000d76cc("APPSTORE",&puStack_a8);
        _objc_release(lStack_88);
        _objc_destroyWeak(auStack_78);
        _objc_destroyWeak(auStack_70);
        _objc_release(puVar11);
      }
      goto LAB_1051b889c;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf235e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar7 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar7;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08bda0();
    func_0x000108435ff0();
    _objc_release(uVar12);
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf235e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf7f580();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar13;
  func_0x00010c076220();
  _objc_release(uVar13);
  if ((int)uVar12 != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf7f580(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
    _objc_release(uVar12);
  }
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf7f580(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(uVar12);
  _objc_release(uVar7);
LAB_1051b889c:
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puStack_b0);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 1051b893c; end: 1051b89eb;  */

void FUN_1051b893c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x30);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(lVar1 + 0x30));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    func_0x00010bf23680(uVar3,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),lVar1,1,0,0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x30),param_2,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051b89ec; end: 1051b8a83; -[SCContextCameraV2ActionPerformer directorModeScopeDidComplete] */

void FUN_1051b89ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf7f580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf7f580(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c20();
    _objc_release(uVar2);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,0);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051b8a84; end: 1051b8b1f; -[SCContextCameraV2ActionPerformer dismissCameraScope:] */

void FUN_1051b8a84(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051b8b20; end: 1051b8c8b; -[SCContextCameraV2ActionPerformer _isDirectorModeAvailableForDualCamContextUnlockWithCameraAction:sourcePageType:] */

undefined8 FUN_1051b8b20(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  func_0x00010bfd67c0();
  uVar10 = 0;
  if ((param_4 == 0x5c) && (param_3 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf7f280();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010bf926c0();
    if ((int)uVar10 == 0) {
      uVar10 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf7f280();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar6;
      func_0x00010bf4f400();
      if ((int)uVar10 == 0) {
        uVar10 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010bf45e20(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0d1c60();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c0718c0();
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
      }
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  return uVar10;
}



/* Entry: 1051b8c8c; end: 1051b8dc3; -[SCContextCameraV2ActionPerformer _directReplyConfigurationWithContextActionParams:cameraModeParameters:] */

void FUN_1051b8c8c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c131ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0748c0();
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c0b3760(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar10 = *(undefined8 *)(param_1 + 8);
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  uVar7 = param_3;
  func_0x00010c076240();
  _objc_release(param_3);
  uVar8 = uVar3;
  func_0x0001065eccb0(uVar3,uVar5 & 0xffffffff,0,0,0,param_4,uVar6,uVar1,uVar2,uVar10,uVar9,
                      (char)uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1051b8dc4; end: 1051b8e6b; -[SCContextCameraV2ActionPerformer .cxx_destruct] */

void FUN_1051b8dc4(long param_1)

{
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



/* Entry: 1051b8e6c; end: 1051b9003; -[SCContextCardsActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051b8e6c(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  ulong in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  func_0x00010c08f3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = in_x5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x5);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c0db200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar4 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a4f28);
  uVar1 = uVar2;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dca738;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dca738,in_x7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(in_x7);
    func_0x00010c10b7e0(uVar2);
    ppuVar5 = (undefined **)PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    func_0x00010bffae00();
    _objc_release(in_x7);
  }
  _objc_release(uVar1);
  _objc_release(in_x7);
  _objc_release(in_x6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 1051b9004; end: 1051b9017;  */

void FUN_1051b9004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001051b9010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1051b9018; end: 1051b905f; -[SCContextChatActionPerformer initWithChatDrawerType:] */

void FUN_1051b9018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e6c00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1051b9060; end: 1051b923f; -[SCContextChatActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051b9060(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  ulong in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  uVar1 = in_x5;
  func_0x00010c08f3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c0db200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar4 = uVar2;
  func_0x00010010fab4(uVar2,PTR_DAT_1126a4f28);
  uVar1 = uVar2;
  if ((int)uVar4 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dca738;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dca738,in_x7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be45be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(in_x7);
    func_0x00010c10b9a0(uVar2);
    _objc_release(param_1);
    ppuVar5 = (undefined **)PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    func_0x00010bffae00();
    _objc_release(in_x7);
  }
  _objc_release(uVar1);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 1051b9240; end: 1051b9253;  */

void FUN_1051b9240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001051b924c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1051b9254; end: 1051b92ab; -[SCContextChatActionPerformer _itemDeeplinkFrom] */

void FUN_1051b9254(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + 8) == 1) {
    ppuVar1 = &PTR_PTR_110cab468;
  }
  else {
    if (*(long *)(param_1 + 8) != 2) {
      puVar2 = (undefined *)0x0;
      goto LAB_1051b929c;
    }
    ppuVar1 = &PTR_PTR_110cab478;
  }
  puVar2 = *ppuVar1;
  _objc_retain(puVar2);
LAB_1051b929c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051b92ac; end: 1051b92b3; -[SCContextChatActionPerformer drawerType] */

undefined8 FUN_1051b92ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1051b92b4; end: 1051b9357; -[SCContextDwebUpsellActionPerformer initWithDwebExplainerTrayScopeExposer:dwebExplainerTrayScopeServices:] */

undefined1 *
FUN_1051b92b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6c08;
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



/* Entry: 1051b9358; end: 1051b952b; -[SCContextDwebUpsellActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051b9358(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010bf8b540();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dca758;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dca758,param_8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf22d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
    _objc_initWeak(auStack_68,param_1);
    ppuVar3 = (undefined **)PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bffae00(ppuVar3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1051b952c; end: 1051b9557;  */

void FUN_1051b952c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becaca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051b9558; end: 1051b959f; -[SCContextDwebUpsellActionPerformer _tearDown] */

void FUN_1051b9558(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1051b95a0; end: 1051b9647; -[SCContextDwebUpsellActionPerformer dWebExplainerTrayDidDismiss] */

void FUN_1051b95a0(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1051b9648;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1051b9648; end: 1051b9673;  */

void FUN_1051b9648(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becaca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051b9674; end: 1051b967b; -[SCContextDwebUpsellActionPerformer numberOfUsersPresentOnWeb] */

undefined8 FUN_1051b9674(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1051b967c; end: 1051b9683; -[SCContextDwebUpsellActionPerformer numberOfUsersPresent] */

undefined8 FUN_1051b967c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1051b9684; end: 1051b96b3; -[SCContextDwebUpsellActionPerformer .cxx_destruct] */

void FUN_1051b9684(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051b96b4; end: 1051b9727; -[SCContextCommerceActionPerformer initWithCommerceProductCatalogScopeExposer:] */

undefined1 * FUN_1051b96b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6c10;
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



/* Entry: 1051b9728; end: 1051b9bbf; -[SCContextCommerceActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051b9728(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_98;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010bf42220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dca778;
LAB_1051b993c:
    func_0x0001051cb2fc(ppuVar5,param_8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar7 = lVar1;
    func_0x00010beeed20();
    if ((int)lVar7 == 2) {
      lVar7 = lVar1;
      func_0x00010bf42700(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar7;
      func_0x00010c257800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      puStack_98 = PTR_PTR_1126b0518;
      func_0x00010c257ea0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if ((int)lVar7 != 1) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110dca798;
        goto LAB_1051b993c;
      }
      lVar7 = lVar1;
      func_0x00010bf424e0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar7;
      func_0x00010c257800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      lVar7 = lVar1;
      func_0x00010bf424e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c241860();
      _objc_release(lVar7);
      lVar7 = param_3;
      func_0x00010c0ccaa0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar7;
      func_0x00010bf31ca0();
      _objc_release(lVar7);
      if ((int)lVar2 == 0x30) {
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        puStack_98 = PTR_PTR_1126b0518;
        uVar3 = 0x2a;
        func_0x000100c6f294(0x2a);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c22cd60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
      }
      else {
        puVar6 = PTR_PTR_1126b0840;
        func_0x00010bf0d3c0(PTR_PTR_1126b0840);
        _objc_retainAutoreleasedReturnValue();
        puStack_98 = PTR_PTR_1126b0518;
        func_0x00010c23cc80();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar6);
    }
    _objc_release(lVar4);
    lVar7 = *(long *)(param_1 + 8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar8 = PTR_PTR_1126b0520;
    _objc_alloc(PTR_PTR_1126b0520);
    puVar6 = PTR_PTR_1126b0528;
    uVar3 = param_6;
    func_0x00010c0b3760(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4e3e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021b80(puVar8);
    _objc_release(puVar6);
    _objc_release(uVar9);
    _objc_release(uVar3);
    puVar6 = PTR_PTR_1126b0530;
    _objc_alloc(PTR_PTR_1126b0530);
    func_0x00010c001f40();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
    _objc_initWeak(auStack_68,param_1);
    ppuVar5 = (undefined **)PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bffae00(ppuVar5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(puStack_98);
  }
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 1051b9bc0; end: 1051b9beb;  */

void FUN_1051b9bc0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becaca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051b9bec; end: 1051b9bef; -[SCContextCommerceActionPerformer commerceBrowserWillPresent] */

void FUN_1051b9bec(void)

{
  return;
}



/* Entry: 1051b9bf0; end: 1051b9bf3; -[SCContextCommerceActionPerformer commerceBrowserWillDismiss] */

void FUN_1051b9bf0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becacb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__tearDown_1125904d0);
  return;
}



/* Entry: 1051b9bf4; end: 1051b9c3b; -[SCContextCommerceActionPerformer _tearDown] */

void FUN_1051b9bf4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1051b9c3c; end: 1051b9c47; -[SCContextCommerceActionPerformer .cxx_destruct] */

void FUN_1051b9c3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051b9c48; end: 1051b9cbb; -[SCContextCommerceMultiMerchantActionPerformer initWithTopicPageScopeExposer:] */

undefined1 * FUN_1051b9c48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6c18;
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



/* Entry: 1051b9cbc; end: 1051b9fab; -[SCContextCommerceMultiMerchantActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051b9cbc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010bf42560();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_110dca7b8;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dca7b8,param_8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126b5b78;
    _objc_alloc(PTR_PTR_1126b5b78);
    lVar2 = lVar1;
    func_0x00010c275360(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c29f300(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054480(puVar3);
    _objc_release(lVar4);
    _objc_release(lVar2);
    puVar6 = PTR_PTR_1126b0528;
    uVar5 = param_6;
    func_0x00010c0b3760(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4e3e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar5);
    puVar7 = PTR_PTR_1126b5b80;
    _objc_alloc(PTR_PTR_1126b5b80);
    func_0x00010c0543c0();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
    uVar5 = param_8;
    _objc_retainBlock();
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    _objc_release(uVar9);
    _objc_initWeak(auStack_68,param_1);
    ppuVar8 = (undefined **)PTR_PTR_1126afd78;
    _objc_alloc(PTR_PTR_1126afd78);
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bffae00(ppuVar8);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return;
}



/* Entry: 1051b9fac; end: 1051b9fd7;  */

void FUN_1051b9fac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becaca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051b9fd8; end: 1051b9fdb; -[SCContextCommerceMultiMerchantActionPerformer topicPageShouldDismiss] */

void FUN_1051b9fd8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becacb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__tearDown_1125904d0);
  return;
}



/* Entry: 1051b9fdc; end: 1051ba04b; -[SCContextCommerceMultiMerchantActionPerformer _tearDown] */

void FUN_1051b9fdc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051ba04c; end: 1051ba07b; -[SCContextCommerceMultiMerchantActionPerformer .cxx_destruct] */

void FUN_1051ba04c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051ba07c; end: 1051ba0ef; -[SCContextScreenshopActionPerformer initWithComposerScreenshopScopeExposer:] */

undefined1 * FUN_1051ba07c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6c20;
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



/* Entry: 1051ba0f0; end: 1051ba3ab; -[SCContextScreenshopActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051ba0f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_3;
  func_0x00010c1514c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b5b88;
  uVar2 = uVar1;
  func_0x00010bfe0ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar1;
  func_0x00010c241220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010c0b3760(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c086560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c085300(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c243f00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar10);
  _objc_release(uVar2);
  func_0x00010be8d1e0(param_1);
  puVar8 = PTR_PTR_1126b5b90;
  _objc_alloc(PTR_PTR_1126b5b90);
  func_0x00010c010580();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
  uVar2 = param_8;
  _objc_retainBlock();
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _objc_release(uVar10);
  _objc_initWeak(auStack_68,param_1);
  puVar9 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bffae00(puVar9);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1051ba3ac; end: 1051ba3d7;  */

void FUN_1051ba3ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becaca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051ba3d8; end: 1051ba3db; -[SCContextScreenshopActionPerformer screenshopPageShouldDismiss] */

void FUN_1051ba3d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becacb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__tearDown_1125904d0);
  return;
}



/* Entry: 1051ba3dc; end: 1051ba41b; -[SCContextScreenshopActionPerformer _tearDown] */

void FUN_1051ba3dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8d1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeScope_112580e18);
  return;
}



/* Entry: 1051ba41c; end: 1051ba463; -[SCContextScreenshopActionPerformer _removeScope] */

void FUN_1051ba41c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1051ba464; end: 1051ba493; -[SCContextScreenshopActionPerformer .cxx_destruct] */

void FUN_1051ba464(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051ba494; end: 1051ba5e7; -[SCContextContentLabelActionPerformer initWithRecommendTrayScopeServices:snapchattersDataFetcher:spotlightLogger:boostCoordinator:storiesConfigProvider:contextExperimentService:] */

undefined1 *
FUN_1051ba494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e6c28;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
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



/* Entry: 1051ba5e8; end: 1051baa83; -[SCContextContentLabelActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051ba5e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar9 = param_3;
  func_0x00010beeed20();
  if ((int)uVar9 != 0x4b) {
    ppuVar10 = &PTR____CFConstantStringClassReference_110dca7d8;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dca7d8,param_8);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1051baa08;
  }
  uVar1 = param_6;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b2390;
  _objc_opt_class(PTR_PTR_1126b2390);
  uVar2 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar2 = uVar1;
  func_0x0001084372fc();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf28980();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c27dd80();
  if (((uVar5 == 4) && (uVar5 = uVar3, func_0x00010bfb7f40(), 0 < (long)uVar5)) ||
     (uVar5 = uVar3, func_0x00010c27dd80(), uVar5 == 6)) {
    lVar6 = param_8;
    _objc_retainBlock();
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar6;
    _objc_release(uVar9);
    uVar5 = uVar3;
    func_0x00010c27dd80();
    if (uVar5 == 6) {
      uVar8 = uVar1;
      func_0x00010c290fa0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x000108437e88();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(uVar8);
      func_0x00010be7aa00(param_1);
    }
    else {
      lVar6 = param_1;
      func_0x00010beb2b60();
      if ((int)lVar6 == 0) {
        _objc_initWeak(auStack_68,param_1);
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        func_0x00010c259cc0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar1;
        func_0x00010c25b200(uVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(PTR___dispatch_main_q_11034be20);
        _objc_retain(uVar1);
        _objc_copyWeak(auStack_70,auStack_68);
        _objc_retain(uVar3);
        _objc_retain(param_4);
        _objc_retain(param_6);
        _objc_retain(param_7);
        func_0x00010bfa5620(uVar9);
        _objc_release(PTR___dispatch_main_q_11034be20);
        _objc_release(uVar8);
        _objc_release(uVar5);
        _objc_release(uVar9);
        _objc_release(param_7);
        _objc_release(param_6);
        _objc_release(param_4);
        _objc_release(uVar3);
        _objc_destroyWeak(auStack_70);
        _objc_release(uVar1);
        _objc_destroyWeak(auStack_68);
        goto LAB_1051ba9ec;
      }
      uVar5 = uVar3;
      func_0x00010bfb9180(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7aa00(param_1);
      _objc_release(uVar8);
    }
    _objc_release(uVar5);
  }
  else if (param_8 != 0) {
    (**(code **)(param_8 + 0x10))(param_8,0);
  }
LAB_1051ba9ec:
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  ppuVar10 = (undefined **)0x0;
LAB_1051baa08:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
  return;
}



/* Entry: 1051baa84; end: 1051bab3f;  */

void FUN_1051baa84(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5b98;
  _objc_opt_class(PTR_PTR_1126b5b98);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf9b320(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b611948(uVar1,uVar4);
  _objc_release(uVar1);
  _objc_release(uVar4);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051bab40; end: 1051bab9f; -[SCContextContentLabelActionPerformer _shouldBypassRecommendTrayForSource:] */

undefined8 FUN_1051bab40(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c068440();
  if (param_3 == 8) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c132220();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


