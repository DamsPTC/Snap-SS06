/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104eaf614; end: 104eaf68b; -[SCScanResultsLensCollectionsViewModelProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eaf614(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112715af4,0);
  _objc_destroyWeak(param_1 + _DAT_112715b00);
  _objc_destroyWeak(param_1 + _DAT_112715afc);
  _objc_destroyWeak(param_1 + _DAT_112715af8);
  _objc_destroyWeak(param_1 + _DAT_112715af0);
  _objc_destroyWeak(param_1 + _DAT_112715ae8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112715aec);
  return;
}



/* Entry: 104eaf68c; end: 104eaf6bb;  */

void FUN_104eaf68c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db90d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db90d8,
                      &PTR____CFConstantStringClassReference_110db91d8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104eaf6bc; end: 104eaf77b; -[SCLensCollectionCarouselActivator initWithLensCarouselManager:lensCollectionsPresenter:] */

undefined1 *
FUN_104eaf6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4c40;
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
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104eaf77c; end: 104eaf783; -[SCLensCollectionCarouselActivator carouselManager] */

void FUN_104eaf77c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 104eaf784; end: 104eaf78b; -[SCLensCollectionCarouselActivator lensCollectionsPresenter] */

void FUN_104eaf784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 104eaf78c; end: 104eaf7c7; -[SCLensCollectionCarouselActivator isPresented] */

undefined8 FUN_104eaf78c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c091800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07aae0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104eaf7c8; end: 104eaf863; -[SCLensCollectionCarouselActivator presentLensCollectionWithId:selectedLens:completion:] */

void FUN_104eaf7c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c091800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10ca40();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x00010be6cf80(param_1,param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104eaf864; end: 104eaf893; -[SCLensCollectionCarouselActivator dismissLensCollectionCarousel] */

void FUN_104eaf864(undefined8 param_1)

{
  func_0x00010c091800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eaf894; end: 104eaf967; -[SCLensCollectionCarouselActivator _openCarouselWithCompletion:] */

void FUN_104eaf894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bddd5a0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104eaf968; end: 104eaf9c3;  */

void FUN_104eaf968(long param_1,int param_2)

{
  if (param_2 == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdc4980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104eaf990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104eaf9c4; end: 104eafb07; -[SCLensCollectionCarouselActivator _checkCarouselActivationState:] */

void FUN_104eaf9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  func_0x00010bf32960(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bef1060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ec0(uVar2,param_2,uVar3,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104eafb08;
  puStack_60 = &UNK_110857398;
  uStack_58 = param_3;
  _objc_retain(param_3);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 104eafb08; end: 104eafb37;  */

void FUN_104eafb08(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf1f3c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x000104eafb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  return;
}



/* Entry: 104eafb38; end: 104eafcbb; -[SCLensCollectionCarouselActivator _activateCarouselWithCompletion:] */

void FUN_104eafb38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf32960(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef6e0();
  _objc_release(uVar1);
  func_0x00010bf32960(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bef1060();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e0ea0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x104eafcc4;
  puStack_70 = &UNK_110857398;
  uStack_68 = param_3;
  _objc_retain(param_3);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(uStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 104eafcbc; end: 104eafcd7;  */

void FUN_104eafcbc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 104eafcd8; end: 104eafd13; -[SCLensCollectionCarouselActivator .cxx_destruct] */

void FUN_104eafcd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104eafd14; end: 104eafd87; -[SCLensCollectionSendToPresenter initWithSendToScopeExposer:] */

undefined1 * FUN_104eafd14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4c48;
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



/* Entry: 104eafd88; end: 104eafebf; -[SCLensCollectionSendToPresenter presentSendToControllerWithUIContainer:lensCollectionId:imageFuture:dismissBlock:] */

void FUN_104eafd88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_6;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9218);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126b1b28;
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c091700(puVar3,param_2,puVar2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b1b30;
  _objc_alloc(PTR_PTR_1126b1b30);
  func_0x00010c056660();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104eafec0; end: 104eaff73; -[SCLensCollectionSendToPresenter didDismissWithRecipientsCount:groupsCount:] */

void FUN_104eafec0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c150520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar3 = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 104eaff74; end: 104eaffa3; -[SCLensCollectionSendToPresenter .cxx_destruct] */

void FUN_104eaff74(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104eaffa4; end: 104eb001f; -[SCLensCollectionsCarouselPresenter initWithLensCollectionsCarouselFeature:showLensesOnlyUI:] */

undefined1 *
FUN_104eaffa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e4c50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104eb0020; end: 104eb0057; -[SCLensCollectionsCarouselPresenter isPresented] */

long FUN_104eb0020(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bef0100();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 104eb0058; end: 104eb016f; -[SCLensCollectionsCarouselPresenter presentLensCollectionWithId:selectedLens:completion:] */

void FUN_104eb0058(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    puVar3 = (undefined *)(param_1 + 8);
    _objc_loadWeakRetained(puVar3);
    func_0x00010beef860();
  }
  else {
    puVar1 = PTR_PTR_1126b0820;
    func_0x00010c094120(PTR_PTR_1126b0820,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c2b2700();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010beef880();
    _objc_release(param_1);
  }
  _objc_release(puVar3);
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104eb0170; end: 104eb019b; -[SCLensCollectionsCarouselPresenter dismissLensCollectionCarousel] */

void FUN_104eb0170(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf65bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eb019c; end: 104eb01a3; -[SCLensCollectionsCarouselPresenter .cxx_destruct] */

void FUN_104eb019c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104eb01a4; end: 104eb05a3; -[SCLensExplorerAboveMiniCarouselButtonCaaSCameraEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb01a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lVar1 = param_1 + _DAT_112715b20;
  _objc_loadWeakRetained();
  lVar17 = lVar1;
  func_0x00010c090800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c280320();
  _objc_release(lVar2);
  _objc_release(lVar17);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    if (param_1 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = param_1 + _DAT_112715b4c;
      _objc_loadWeakRetained();
    }
    uVar4 = uVar16;
    func_0x00010c0ec6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c230ce0();
    _objc_release(uVar4);
    _objc_release(uVar16);
    if ((uVar5 & 1) == 0) {
      lVar17 = (long)_DAT_112715b24;
      lVar1 = param_1 + lVar17;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf2b140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1 + lVar17;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c299080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar10 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_104eb05a4;
      puStack_88 = &UNK_110857408;
      puVar7 = PTR_PTR_1126ae720;
      lStack_80 = lVar6;
      func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_a0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1 + _DAT_112715b28;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010bf2b640();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = param_1 + _DAT_112715b2c;
      _objc_loadWeakRetained();
      lVar8 = lVar1;
      func_0x00010c090c20();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c090c40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar1);
      lVar1 = param_1 + _DAT_112715b30;
      _objc_loadWeakRetained();
      lVar8 = lVar1;
      func_0x00010c093360();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puStack_c8 = puVar10;
      uStack_c0 = 0xc2000000;
      uStack_b8 = 0x104eb0604;
      puStack_b0 = &UNK_110857438;
      puVar10 = PTR_PTR_1126ae720;
      lStack_a8 = lVar2;
      func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_c8);
      _objc_retainAutoreleasedReturnValue();
      lVar17 = param_1 + lVar17;
      _objc_loadWeakRetained(lVar17);
      lVar1 = lVar17;
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar1;
      func_0x00010c0ce100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(lVar17);
      lVar1 = param_1 + _DAT_112715b34;
      _objc_loadWeakRetained(lVar1);
      lVar17 = lVar1;
      func_0x00010c092ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = param_1 + _DAT_112715b38;
      _objc_loadWeakRetained(lVar1);
      lVar12 = lVar1;
      func_0x00010c095b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = param_1 + _DAT_112715b3c;
      _objc_loadWeakRetained();
      lVar13 = lVar1;
      func_0x00010c091680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar14 = PTR_PTR_1126b1b48;
      _objc_alloc();
      func_0x00010bffbe00();
      uVar15 = *(undefined8 *)(param_1 + _DAT_112715b40);
      *(undefined **)(param_1 + _DAT_112715b40) = puVar14;
      _objc_release(uVar15);
      func_0x00010bdd3ec0(param_1);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar17);
      _objc_release(lVar11);
      _objc_release(puVar10);
      _objc_release(lVar8);
      _objc_release(lVar9);
      _objc_release(lVar2);
      _objc_release(puVar7);
      _objc_release(lVar6);
      _objc_release(lVar3);
    }
  }
  return;
}



/* Entry: 104eb05a4; end: 104eb0633;  */

void FUN_104eb05a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b1b38;
  _objc_alloc(PTR_PTR_1126b1b38);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe5a40();
  func_0x00010c01af80(puVar1,param_2,uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104eb0634; end: 104eb069f; -[SCLensExplorerAboveMiniCarouselButtonCaaSCameraEntryPoint _beginWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb0634(long param_1)

{
  long lVar1;
  
  func_0x00010bf17a60(*(undefined8 *)(param_1 + _DAT_112715b40));
  FUN_104eb06a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27eec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126480();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eb06a0; end: 104eb06c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb06a0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112715b5c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eb06c4; end: 104eb077b; -[SCLensExplorerAboveMiniCarouselButtonCaaSCameraEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb06c4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long alStack_50 [2];
  long alStack_40 [2];
  
  plVar4 = alStack_50;
  lVar5 = (long)_DAT_112715b40;
  if (*(long *)(param_1 + lVar5) == 0) {
    plVar4 = alStack_40;
  }
  else {
    lVar1 = param_1 + _DAT_112715b5c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c27eec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c281fe0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bf940a0(*(undefined8 *)(param_1 + lVar5));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = 0;
    _objc_release(uVar3);
  }
  *plVar4 = param_1;
  plVar4[1] = (long)PTR_PTR_1126e4c58;
  _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eb077c; end: 104eb085f; -[SCLensExplorerAboveMiniCarouselButtonCaaSCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb077c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112715b20);
  _objc_destroyWeak(param_1 + _DAT_112715b5c);
  _objc_destroyWeak(param_1 + _DAT_112715b3c);
  _objc_destroyWeak(param_1 + _DAT_112715b58);
  _objc_destroyWeak(param_1 + _DAT_112715b38);
  _objc_destroyWeak(param_1 + _DAT_112715b34);
  _objc_destroyWeak(param_1 + _DAT_112715b24);
  _objc_destroyWeak(param_1 + _DAT_112715b30);
  _objc_destroyWeak(param_1 + _DAT_112715b2c);
  _objc_destroyWeak(param_1 + _DAT_112715b28);
  _objc_destroyWeak(param_1 + _DAT_112715b54);
  _objc_destroyWeak(param_1 + _DAT_112715b50);
  _objc_destroyWeak(param_1 + _DAT_112715b4c);
  _objc_destroyWeak(param_1 + _DAT_112715b48);
  _objc_destroyWeak(param_1 + _DAT_112715b44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112715b40,0);
  return;
}



/* Entry: 104eb0860; end: 104eb0c0f; -[SCLensExplorerAboveMiniCarouselButtonChatCameraEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb0860(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lVar1 = param_1 + _DAT_112715b60;
  _objc_loadWeakRetained();
  lVar14 = lVar1;
  func_0x00010c090800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c280320();
  _objc_release(lVar2);
  _objc_release(lVar14);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar14 = (long)_DAT_112715b64;
    lVar1 = param_1 + lVar14;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf2b140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + lVar14;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c299080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_104eb0c10;
    puStack_88 = &UNK_110857408;
    puVar5 = PTR_PTR_1126ae720;
    lStack_80 = lVar4;
    func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_a0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + _DAT_112715b68;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf2b640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_112715b6c;
    _objc_loadWeakRetained();
    lVar6 = lVar1;
    func_0x00010c090c20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c090c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_112715b70;
    _objc_loadWeakRetained();
    lVar6 = lVar1;
    func_0x00010c093360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puStack_c8 = puVar8;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x104eb0c70;
    puStack_b0 = &UNK_110857438;
    puVar8 = PTR_PTR_1126ae720;
    lStack_a8 = lVar2;
    func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_c8);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1 + lVar14;
    _objc_loadWeakRetained(lVar14);
    lVar1 = lVar14;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c0ce100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar14);
    lVar1 = param_1 + _DAT_112715b74;
    _objc_loadWeakRetained(lVar1);
    lVar14 = lVar1;
    func_0x00010c092ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_112715b78;
    _objc_loadWeakRetained(lVar1);
    lVar10 = lVar1;
    func_0x00010c095b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_112715b7c;
    _objc_loadWeakRetained();
    lVar11 = lVar1;
    func_0x00010c091680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar12 = PTR_PTR_1126b1b48;
    _objc_alloc();
    func_0x00010bffbe00();
    uVar13 = *(undefined8 *)(param_1 + _DAT_112715b80);
    *(undefined **)(param_1 + _DAT_112715b80) = puVar12;
    _objc_release(uVar13);
    func_0x00010bdd3ec0(param_1);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar14);
    _objc_release(lVar9);
    _objc_release(puVar8);
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 104eb0c10; end: 104eb0c9f;  */

void FUN_104eb0c10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b1b38;
  _objc_alloc(PTR_PTR_1126b1b38);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe5a40();
  func_0x00010c01af80(puVar1,param_2,uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104eb0ca0; end: 104eb0d0b; -[SCLensExplorerAboveMiniCarouselButtonChatCameraEntryPoint _beginWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb0ca0(long param_1)

{
  long lVar1;
  
  func_0x00010bf17a60(*(undefined8 *)(param_1 + _DAT_112715b80));
  FUN_104eb0d0c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27eec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126480();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eb0d0c; end: 104eb0d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb0d0c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112715b9c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eb0d30; end: 104eb0e3f; -[SCLensExplorerAboveMiniCarouselButtonChatCameraEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb0d30(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long alStack_60 [2];
  long alStack_50 [2];
  
  plVar5 = alStack_60;
  lVar1 = param_1 + _DAT_112715b60;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c090800();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c280320();
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 == 0) {
    plVar5 = alStack_50;
  }
  else {
    lVar1 = param_1;
    FUN_104eb0d0c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c27eec0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112715b80;
    func_0x00010c281fe0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bf940a0(*(undefined8 *)(param_1 + lVar6));
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = 0;
    _objc_release(uVar4);
  }
  *plVar5 = param_1;
  plVar5[1] = (long)PTR_PTR_1126e4c60;
  _objc_msgSendSuper2(plVar5,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eb0e40; end: 104eb0f4f; -[SCLensExplorerAboveMiniCarouselButtonChatCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb0e40(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112715b60);
  _objc_destroyWeak(param_1 + _DAT_112715b9c);
  _objc_destroyWeak(param_1 + _DAT_112715b7c);
  _objc_destroyWeak(param_1 + _DAT_112715b98);
  _objc_destroyWeak(param_1 + _DAT_112715b78);
  _objc_destroyWeak(param_1 + _DAT_112715b74);
  _objc_destroyWeak(param_1 + _DAT_112715b64);
  _objc_destroyWeak(param_1 + _DAT_112715b70);
  _objc_destroyWeak(param_1 + _DAT_112715b6c);
  _objc_destroyWeak(param_1 + _DAT_112715b68);
  _objc_destroyWeak(param_1 + _DAT_112715b94);
  _objc_destroyWeak(param_1 + _DAT_112715b90);
  _objc_destroyWeak(param_1 + _DAT_112715b8c);
  _objc_destroyWeak(param_1 + _DAT_112715b88);
  _objc_destroyWeak(param_1 + _DAT_112715b84);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112715b80,0);
  return;
}



/* Entry: 104eb0f50; end: 104eb0ff3; -[SCLensExplorerAboveMiniCarouselButtonEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb0f50(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x000100b7617c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c27eec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112715bc4;
  func_0x00010c281fe0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf940a0(*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar3);
  puStack_38 = PTR_PTR_1126e4c68;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eb0ff4; end: 104eb10db; -[SCLensExplorerAboveMiniCarouselButtonEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb0ff4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112715bdc);
  _objc_destroyWeak(param_1 + _DAT_112715bd8);
  _objc_destroyWeak(param_1 + _DAT_112715bbc);
  _objc_destroyWeak(param_1 + _DAT_112715bb8);
  _objc_destroyWeak(param_1 + _DAT_112715bd4);
  _objc_destroyWeak(param_1 + _DAT_112715bb4);
  _objc_destroyWeak(param_1 + _DAT_112715bb0);
  _objc_destroyWeak(param_1 + _DAT_112715ba0);
  _objc_destroyWeak(param_1 + _DAT_112715bac);
  _objc_destroyWeak(param_1 + _DAT_112715ba8);
  _objc_destroyWeak(param_1 + _DAT_112715ba4);
  _objc_destroyWeak(param_1 + _DAT_112715bd0);
  _objc_destroyWeak(param_1 + _DAT_112715bcc);
  _objc_destroyWeak(param_1 + _DAT_112715bc8);
  _objc_storeStrong(param_1 + _DAT_112715bc0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112715bc4,0);
  return;
}



/* Entry: 104eb10dc; end: 104eb13e3; -[SCLensExplorerAboveMiniCarouselButtonImpl _setupBlurredBackgroundView] */

void FUN_104eb10dc(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c219b60();
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4034000000000000);
  _objc_release(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  func_0x00010bf20c00(puVar1);
  func_0x00010c013de0();
  puVar2 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20(puVar3);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar3);
  func_0x00010befbb60(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010bfe0660(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  func_0x00010c2a5060(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(puVar3 + 0x20),PTR_s_setHidden__1126479f8,puVar3[0x28]);
    return;
  }
  return;
}



/* Entry: 104eb13e4; end: 104eb13fb;  */

void FUN_104eb13e4(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setHidden__1126479f8,
               *(undefined1 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 104eb13fc; end: 104eb1543; -[SCLensExplorerAboveMiniCarouselButtonImpl _didPressLensExplorerButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb13fc(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined *puVar5;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c252440();
  func_0x00010c09ef00(param_3,param_2,param_1);
  _objc_release(param_3);
  lVar4 = param_1;
  func_0x00010bf20c00();
  iVar2 = (int)lVar4;
  _CGRectContainsPoint();
  if ((lVar3 - 1U < 2) && (iVar2 != 0)) {
    if (*(long *)(param_1 + _DAT_112715be0) != 0) {
      return;
    }
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x25);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112715be4),param_2,puVar5);
  }
  else {
    if (*(long *)(param_1 + _DAT_112715be0) == 0) {
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_1 + _DAT_112715be4),param_2,puVar5);
      _objc_release(puVar5);
    }
    iVar1 = 0;
    if (lVar3 != 4) {
      iVar1 = iVar2;
    }
    if (iVar1 != 1) {
      return;
    }
    puVar5 = (undefined *)(param_1 + _DAT_112715be8);
    _objc_loadWeakRetained(puVar5);
    func_0x00010bf78940();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 104eb1544; end: 104eb157f; -[SCLensExplorerAboveMiniCarouselButtonImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb1544(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112715be4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112715be8);
  return;
}



/* Entry: 104eb1580; end: 104eb196f; -[SCLensExplorerAboveMiniCarouselButtonModularCameraEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb1580(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lVar1 = param_1 + _DAT_112715bec;
  _objc_loadWeakRetained();
  lVar14 = lVar1;
  func_0x00010c090800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27ff80();
  _objc_release(lVar2);
  _objc_release(lVar14);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar1 = param_1 + _DAT_112715bf0;
    _objc_loadWeakRetained();
    lVar14 = lVar1;
    func_0x00010c0956a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar14;
    func_0x00010bf8f000();
    _objc_release(lVar14);
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      lVar14 = (long)_DAT_112715bf4;
      lVar1 = param_1 + lVar14;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf2b140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1 + lVar14;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c299080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar8 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_104eb1970;
      puStack_88 = &UNK_110857408;
      puVar5 = PTR_PTR_1126ae720;
      lStack_80 = lVar4;
      func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_a0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1 + _DAT_112715bf8;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010bf2b640();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = param_1 + _DAT_112715bfc;
      _objc_loadWeakRetained();
      lVar6 = lVar1;
      func_0x00010c090c20();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c090c40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar1);
      lVar1 = param_1 + _DAT_112715c00;
      _objc_loadWeakRetained();
      lVar6 = lVar1;
      func_0x00010c093360();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puStack_c8 = puVar8;
      uStack_c0 = 0xc2000000;
      uStack_b8 = 0x104eb19d0;
      puStack_b0 = &UNK_110857438;
      puVar8 = PTR_PTR_1126ae720;
      lStack_a8 = lVar2;
      func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_c8);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = param_1 + lVar14;
      _objc_loadWeakRetained(lVar14);
      lVar1 = lVar14;
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar1;
      func_0x00010c0ce100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(lVar14);
      lVar1 = param_1 + _DAT_112715c04;
      _objc_loadWeakRetained(lVar1);
      lVar14 = lVar1;
      func_0x00010c092ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = param_1 + _DAT_112715c08;
      _objc_loadWeakRetained(lVar1);
      lVar10 = lVar1;
      func_0x00010c095b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = param_1 + _DAT_112715c0c;
      _objc_loadWeakRetained();
      lVar11 = lVar1;
      func_0x00010c091680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar12 = PTR_PTR_1126b1b48;
      _objc_alloc();
      func_0x00010bffbe00();
      uVar13 = *(undefined8 *)(param_1 + _DAT_112715c10);
      *(undefined **)(param_1 + _DAT_112715c10) = puVar12;
      _objc_release(uVar13);
      func_0x00010bdd3ec0(param_1);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar14);
      _objc_release(lVar9);
      _objc_release(puVar8);
      _objc_release(lVar6);
      _objc_release(lVar7);
      _objc_release(lVar2);
      _objc_release(puVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
  }
  return;
}



/* Entry: 104eb1970; end: 104eb19ff;  */

void FUN_104eb1970(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b1b38;
  _objc_alloc(PTR_PTR_1126b1b38);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe5a40();
  func_0x00010c01af80(puVar1,param_2,uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104eb1a00; end: 104eb1a6b; -[SCLensExplorerAboveMiniCarouselButtonModularCameraEntryPoint _beginWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb1a00(long param_1)

{
  long lVar1;
  
  func_0x00010bf17a60(*(undefined8 *)(param_1 + _DAT_112715c10));
  FUN_104eb1a6c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c27eec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126480();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eb1a6c; end: 104eb1a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb1a6c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112715c28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eb1a90; end: 104eb1c03; -[SCLensExplorerAboveMiniCarouselButtonModularCameraEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb1a90(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long alStack_70 [2];
  long alStack_60 [2];
  
  plVar7 = alStack_70;
  uVar6 = param_1 + _DAT_112715bec;
  _objc_loadWeakRetained();
  uVar1 = uVar6;
  func_0x00010c090800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27ff80();
  if ((uVar3 & 1) == 0) {
    _objc_release(uVar2);
    _objc_release(uVar1);
    plVar7 = alStack_60;
  }
  else {
    lVar4 = param_1 + _DAT_112715bf0;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c0956a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010bf8f000();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar6);
    if ((int)lVar8 == 0) {
      plVar7 = alStack_60;
      goto LAB_104eb1bc4;
    }
    lVar4 = param_1;
    FUN_104eb1a6c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c27eec0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = (long)_DAT_112715c10;
    func_0x00010c281fe0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010bf940a0(*(undefined8 *)(param_1 + lVar8));
    uVar6 = *(ulong *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = 0;
  }
  _objc_release(uVar6);
LAB_104eb1bc4:
  *plVar7 = param_1;
  plVar7[1] = (long)PTR_PTR_1126e4c78;
  _objc_msgSendSuper2(plVar7,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eb1c04; end: 104eb1ce7; -[SCLensExplorerAboveMiniCarouselButtonModularCameraEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb1c04(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112715bec);
  _objc_destroyWeak(param_1 + _DAT_112715c28);
  _objc_destroyWeak(param_1 + _DAT_112715c0c);
  _objc_destroyWeak(param_1 + _DAT_112715c24);
  _objc_destroyWeak(param_1 + _DAT_112715c08);
  _objc_destroyWeak(param_1 + _DAT_112715c04);
  _objc_destroyWeak(param_1 + _DAT_112715bf4);
  _objc_destroyWeak(param_1 + _DAT_112715c00);
  _objc_destroyWeak(param_1 + _DAT_112715bfc);
  _objc_destroyWeak(param_1 + _DAT_112715bf8);
  _objc_destroyWeak(param_1 + _DAT_112715c20);
  _objc_destroyWeak(param_1 + _DAT_112715c1c);
  _objc_destroyWeak(param_1 + _DAT_112715bf0);
  _objc_destroyWeak(param_1 + _DAT_112715c18);
  _objc_destroyWeak(param_1 + _DAT_112715c14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112715c10,0);
  return;
}



/* Entry: 104eb1ce8; end: 104eb1d23; -[SCLensExplorerAboveMiniCarouselButtonWorkflow end] */

void FUN_104eb1ce8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 104eb1d24; end: 104eb1df3; -[SCLensExplorerAboveMiniCarouselButtonWorkflow isPointInsideView:] */

void FUN_104eb1d24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = (int)*(undefined8 *)(param_5 + 0x40);
  uVar4 = param_1;
  uVar5 = param_2;
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_5 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    uVar3 = *(undefined8 *)(param_5 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51200(param_1,param_2);
    _CGRectContainsPoint(uVar4,uVar5,param_3,param_4,param_1,param_2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 104eb1df4; end: 104eb1df7; -[SCLensExplorerAboveMiniCarouselButtonWorkflow setUIHidden:] */

void FUN_104eb1df4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be35530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideButton__11256aee8);
  return;
}



/* Entry: 104eb1df8; end: 104eb1ed3; -[SCLensExplorerAboveMiniCarouselButtonWorkflow didPressLensExplorerButton] */

void FUN_104eb1df8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b1b50;
  func_0x00010bf6a8e0(PTR_PTR_1126b1b50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1b58;
  _objc_alloc(PTR_PTR_1126b1b58);
  func_0x00010c04a5a0();
  lVar3 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb660();
  _objc_release(lVar4);
  _objc_release(lVar3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9380();
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104eb1ed4; end: 104eb1f4b; -[SCLensExplorerAboveMiniCarouselButtonWorkflow .cxx_destruct] */

void FUN_104eb1ed4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104eb1f4c; end: 104eb1fb7; -[SCLensExplorerButtonAboveFooterRightContainer initWithCameraUIScopeViewContainer:] */

undefined1 * FUN_104eb1f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4c88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104eb1fb8; end: 104eb22ab; -[SCLensExplorerButtonAboveFooterRightContainer attachView:] */

void FUN_104eb1fb8(long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf4b340();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c094220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4b340();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe1260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  lVar2 = lVar4;
  func_0x00010c269d40(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ca20();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar6 = param_3;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c1408a0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf493c0(0xc020000000000000,uVar6,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  uStack_98 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010bf1ff80(lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf493c0(0xc020000000000000,uVar8,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  uStack_90 = uVar9;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf49580(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  uStack_88 = uVar11;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar13 = uVar12;
  func_0x00010bf49580(0x4049000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_80 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_98,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar14);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar3);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar2);
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(lVar5 + 8);
  return;
}



/* Entry: 104eb22ac; end: 104eb22b3; -[SCLensExplorerButtonAboveFooterRightContainer .cxx_destruct] */

void FUN_104eb22ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104eb22b4; end: 104eb24ef; -[SCLensExplorerOnCameraPresentationCaaSCameraServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb22b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar1 = param_1 + _DAT_112715c5c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c093d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112715c60;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c092bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112715c64;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf2b140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112715c68;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010bf090c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf08e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112715c6c;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf2b640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104eb24f0;
  puStack_70 = &UNK_110857508;
  puVar7 = PTR_PTR_1126ae720;
  lStack_68 = lVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar8;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x104eb2538;
  puStack_b8 = &UNK_110857538;
  puVar8 = PTR_PTR_1126ae720;
  lStack_b0 = lVar3;
  lStack_a8 = lVar2;
  lStack_a0 = lVar6;
  puStack_98 = puVar7;
  lStack_90 = lVar5;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_d0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b1b68;
  _objc_alloc(PTR_PTR_1126b1b68);
  func_0x00010c023de0();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 104eb24f0; end: 104eb256f;  */

void FUN_104eb24f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cfca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104eb2570; end: 104eb258f; -[SCLensExplorerOnCameraPresentationCaaSCameraServiceProvider arbarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb2570(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112715c68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eb2590; end: 104eb25a3; -[SCLensExplorerOnCameraPresentationCaaSCameraServiceProvider setArbarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb2590(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112715c68,param_3);
  return;
}



/* Entry: 104eb25a4; end: 104eb2623; -[SCLensExplorerOnCameraPresentationCaaSCameraServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb25a4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112715c68);
  _objc_destroyWeak(param_1 + _DAT_112715c64);
  _objc_destroyWeak(param_1 + _DAT_112715c60);
  _objc_destroyWeak(param_1 + _DAT_112715c6c);
  _objc_destroyWeak(param_1 + _DAT_112715c5c);
  _objc_destroyWeak(param_1 + _DAT_112715c78);
  _objc_destroyWeak(param_1 + _DAT_112715c74);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112715c70);
  return;
}



/* Entry: 104eb2624; end: 104eb285f; -[SCLensExplorerOnCameraPresentationChatCameraServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb2624(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar1 = param_1 + _DAT_112715c7c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c093d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112715c80;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c092bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112715c84;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf2b140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112715c88;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010bf090c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf08e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112715c8c;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf2b640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104eb2860;
  puStack_70 = &UNK_110857508;
  puVar7 = PTR_PTR_1126ae720;
  lStack_68 = lVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar8;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x104eb28a8;
  puStack_b8 = &UNK_110857538;
  puVar8 = PTR_PTR_1126ae720;
  lStack_b0 = lVar3;
  lStack_a8 = lVar2;
  lStack_a0 = lVar6;
  puStack_98 = puVar7;
  lStack_90 = lVar5;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_d0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b1b68;
  _objc_alloc(PTR_PTR_1126b1b68);
  func_0x00010c023de0();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 104eb2860; end: 104eb28df;  */

void FUN_104eb2860(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cfca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104eb28e0; end: 104eb28ff; -[SCLensExplorerOnCameraPresentationChatCameraServiceProvider arbarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb28e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112715c88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eb2900; end: 104eb2913; -[SCLensExplorerOnCameraPresentationChatCameraServiceProvider setArbarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb2900(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112715c88,param_3);
  return;
}



/* Entry: 104eb2914; end: 104eb2993; -[SCLensExplorerOnCameraPresentationChatCameraServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb2914(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112715c88);
  _objc_destroyWeak(param_1 + _DAT_112715c84);
  _objc_destroyWeak(param_1 + _DAT_112715c80);
  _objc_destroyWeak(param_1 + _DAT_112715c8c);
  _objc_destroyWeak(param_1 + _DAT_112715c7c);
  _objc_destroyWeak(param_1 + _DAT_112715c98);
  _objc_destroyWeak(param_1 + _DAT_112715c94);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112715c90);
  return;
}



/* Entry: 104eb2994; end: 104eb2ab7; -[SCLensExplorerOnCameraPresentationImpl initWithFeatureLensFeed:lensExplorerNavigation:arBar:modalUIContainer:cameraSwitcherConfig:] */

undefined1 *
FUN_104eb2994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e4c90;
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



/* Entry: 104eb2ab8; end: 104eb2b5f; -[SCLensExplorerOnCameraPresentationImpl openLensExplorerWith:] */

void FUN_104eb2ab8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071800();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c07ab40();
    if ((uVar4 & 1) == 0) {
      func_0x00010c0e93a0(uVar3,param_2,param_3);
    }
    _objc_release(uVar3);
  }
  else {
    uVar4 = param_1;
    func_0x00010bdc4880();
    if ((uVar4 & 1) == 0) {
      func_0x00010be7c300(param_1,param_2,param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104eb2b60; end: 104eb2c03; -[SCLensExplorerOnCameraPresentationImpl _presentLensExplorerWithConfig:] */

void FUN_104eb2b60(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9b3e0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10cc00(uVar3,param_2,uVar4,param_3);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104eb2c04; end: 104eb2c47; -[SCLensExplorerOnCameraPresentationImpl _activateARBar] */

undefined8 FUN_104eb2c04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beef960();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104eb2c48; end: 104eb2c9b; -[SCLensExplorerOnCameraPresentationImpl .cxx_destruct] */

void FUN_104eb2c48(long param_1)

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



/* Entry: 104eb2c9c; end: 104eb2ed7; -[SCLensExplorerOnCameraPresentationModularCameraServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb2c9c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar1 = param_1 + _DAT_112715cb0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c093d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112715cb4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c092bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112715cb8;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf2b140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112715cbc;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010bf090c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf08e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112715cc0;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf2b640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104eb2ed8;
  puStack_70 = &UNK_110857508;
  puVar7 = PTR_PTR_1126ae720;
  lStack_68 = lVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar8;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x104eb2f20;
  puStack_b8 = &UNK_110857538;
  puVar8 = PTR_PTR_1126ae720;
  lStack_b0 = lVar3;
  lStack_a8 = lVar2;
  lStack_a0 = lVar6;
  puStack_98 = puVar7;
  lStack_90 = lVar5;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_d0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b1b68;
  _objc_alloc(PTR_PTR_1126b1b68);
  func_0x00010c023de0();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 104eb2ed8; end: 104eb2f57;  */

void FUN_104eb2ed8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cfca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104eb2f58; end: 104eb2f77; -[SCLensExplorerOnCameraPresentationModularCameraServiceProvider arbarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb2f58(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112715cbc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eb2f78; end: 104eb2f8b; -[SCLensExplorerOnCameraPresentationModularCameraServiceProvider setArbarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb2f78(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112715cbc,param_3);
  return;
}



/* Entry: 104eb2f8c; end: 104eb3043; -[SCLensExplorerOnCameraPresentationModularCameraServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb2f8c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112715cbc);
  _objc_destroyWeak(param_1 + _DAT_112715cb8);
  _objc_destroyWeak(param_1 + _DAT_112715cb4);
  _objc_destroyWeak(param_1 + _DAT_112715cc0);
  _objc_destroyWeak(param_1 + _DAT_112715cb0);
  _objc_destroyWeak(param_1 + _DAT_112715ccc);
  _objc_destroyWeak(param_1 + _DAT_112715cc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112715cc4);
  return;
}



/* Entry: 104eb3044; end: 104eb3063; -[SCLensExplorerOnCameraPresentationServicesEntryPoint arbarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb3044(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112715cdc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104eb3064; end: 104eb3077; -[SCLensExplorerOnCameraPresentationServicesEntryPoint setArbarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb3064(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112715cdc,param_3);
  return;
}



/* Entry: 104eb3078; end: 104eb30ef; -[SCLensExplorerOnCameraPresentationServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eb3078(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112715ce4,0);
  _objc_destroyWeak(param_1 + _DAT_112715cdc);
  _objc_destroyWeak(param_1 + _DAT_112715cd8);
  _objc_destroyWeak(param_1 + _DAT_112715cd4);
  _objc_destroyWeak(param_1 + _DAT_112715ce0);
  _objc_destroyWeak(param_1 + _DAT_112715ce8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112715cd0);
  return;
}



/* Entry: 104eb30f0; end: 104eb329f; -[SCLensScheduleUnlockableModularCameraLensDataProvider initWithLensDataProviderFactory:studySettings:lensDataConfigProvider:lensDataProviderConfiguration:dataProviderFactory:scheduleMetadataStoreCreator:bundledLensProvider:performerProvider:shouldIgnoreLensesInjection:] */

undefined1 *
FUN_104eb30f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

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
  puStack_68 = PTR_PTR_1126e4c98;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_10;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = param_11;
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



/* Entry: 104eb32a0; end: 104eb33f3; -[SCLensScheduleUnlockableModularCameraLensDataProvider dataProviderWithLenses:delegate:] */

void FUN_104eb32a0(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    puVar1 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,PTR____NSArray0__struct_11034ab48);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c097aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bf57500(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be4c7a0(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c097a60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 104eb33f4; end: 104eb35d7; -[SCLensScheduleUnlockableModularCameraLensDataProvider _liveDataProviderWithPedefinedMetadataStore:] */

void FUN_104eb33f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b1b70;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain();
  _objc_alloc();
  func_0x00010c023f00();
  puVar3 = PTR_PTR_1126ae720;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104eb35d8;
  puStack_80 = &UNK_110857598;
  puStack_78 = puVar2;
  uStack_70 = uVar1;
  uStack_68 = param_3;
  _objc_retain(param_3);
  _objc_retain(puVar2);
  func_0x00010bf11fe0(puVar3,param_2,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1b88;
  _objc_alloc(PTR_PTR_1126b1b88);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0b6bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001e40(puVar4,param_2,uVar8,puVar3,uVar9,0,param_3,0,uVar6,uVar7,0);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf55b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uStack_68);
  _objc_release(puStack_78);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 104eb35d8; end: 104eb368f;  */

void FUN_104eb35d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126b1b78;
  _objc_alloc(PTR_PTR_1126b1b78);
  func_0x00010c012240();
  puVar2 = PTR_PTR_1126b1b80;
  _objc_alloc(PTR_PTR_1126b1b80);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104eb3690;
  puStack_40 = &UNK_110857568;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  func_0x00010bff7000(puVar2,param_2,puVar1,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104eb3690; end: 104eb36d7;  */

void FUN_104eb3690(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104eb36d8; end: 104eb374f; -[SCLensScheduleUnlockableModularCameraLensDataProvider .cxx_destruct] */

void FUN_104eb36d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104eb3750; end: 104eb381f; -[SCLensUnlockableModularCameraLensDataProvider initWithLensDataProviderFactory:lensDataProviderConfiguration:contextUpdaterBlock:] */

undefined1 *
FUN_104eb3750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e4ca0;
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
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104eb3820; end: 104eb39e7; -[SCLensUnlockableModularCameraLensDataProvider dataProviderWithLenses:delegate:] */

void FUN_104eb3820(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar7 = *(long *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    uVar4 = uVar6;
    func_0x00010c097a20(uVar6,param_2,*(undefined8 *)(param_1 + 0x10),param_3,3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(param_3);
    uVar5 = uVar4;
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  else {
    uVar4 = uVar6;
    func_0x00010c097aa0(uVar6,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar6);
    puVar1 = PTR_PTR_1126b1b90;
    _objc_alloc();
    func_0x00010c0047a0();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104eb39e8;
    puStack_50 = &UNK_1108575c8;
    uVar6 = uVar4;
    puStack_48 = puVar1;
    func_0x00010c0b8600(uVar4,param_2,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c097a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    uVar5 = uVar3;
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(puVar1);
    uVar6 = uVar4;
  }
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104eb39e8; end: 104eb3a43;  */

void FUN_104eb39e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1b98;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bff6e20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104eb3a44; end: 104eb3a7f; -[SCLensUnlockableModularCameraLensDataProvider .cxx_destruct] */

void FUN_104eb3a44(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104eb3a80; end: 104eb3ab7; -[SCCreatorsLensModularCameraContextUpdaterContainer initWithContextUpdaterBlock:] */

long FUN_104eb3a80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104eb3ab8; end: 104eb3abb; -[SCCreatorsLensModularCameraContextUpdaterContainer contextRequestedUpdatedActive] */

void FUN_104eb3ab8(void)

{
  return;
}



/* Entry: 104eb3abc; end: 104eb3ac7; -[SCCreatorsLensModularCameraContextUpdaterContainer contextRequestedUpdatedMoreData] */

void FUN_104eb3abc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104eb3ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 104eb3ac8; end: 104eb3acb; -[SCCreatorsLensModularCameraContextUpdaterContainer contextRequestedUpdatedStop] */

void FUN_104eb3ac8(void)

{
  return;
}



/* Entry: 104eb3acc; end: 104eb3ad7; -[SCCreatorsLensModularCameraContextUpdaterContainer .cxx_destruct] */

void FUN_104eb3acc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104eb3ad8; end: 104eb3baf; -[SCLensModularCameraLaunchParamConfigurer initWithModularCameraScope:lensEffectLaunchDataStore:circumstanceEngine:] */

undefined1 *
FUN_104eb3ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e4ca8;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104eb3bb0; end: 104eb3c2b; -[SCLensModularCameraLaunchParamConfigurer configureLaunchParamsWithEffectId:] */

void FUN_104eb3bb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c131e40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c091be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde4f80(param_1,param_2,param_3,uVar1);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104eb3c2c; end: 104eb3c7f; -[SCLensModularCameraLaunchParamConfigurer cleanupIfNeeded] */

void FUN_104eb3c2c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3b6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104eb3c80; end: 104eb3cf3; -[SCLensModularCameraLaunchParamConfigurer _configureCustomLaunchParamsWithEffectId:lensConfigReplyParams:] */

void FUN_104eb3c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_4;
    func_0x00010c118700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010bde5600(param_1,param_2,param_3);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104eb3cf4; end: 104eb4017; -[SCLensModularCameraLaunchParamConfigurer _configurePromptLensesLaunchDataWithEffectId:] */

void FUN_104eb3cf4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c131e40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c091be0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c118700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010c1185e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) goto LAB_104eb3fd0;
  lVar1 = lVar3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar1;
  _objc_release(uVar10);
  lVar1 = lVar3;
  func_0x00010c13b900();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2698e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c08fa60();
  puVar8 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  if (lVar5 == 0) {
    lVar5 = lVar4;
    func_0x00010c08fa60();
    puVar8 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    if (lVar5 == 0) {
      puVar6 = puRam00000001136b9100;
      if (puRam00000001136b9100 == (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf64b60();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puRam00000001136b9100;
        puRam00000001136b9100 = puVar8;
        _objc_release(puVar6);
        _objc_release(puVar7);
        puVar6 = puRam00000001136b9100;
      }
      goto LAB_104eb3f68;
    }
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64b60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  else {
    puVar6 = puRam00000001136b9108;
    if (puRam00000001136b9108 == (undefined *)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64b60();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puRam00000001136b9108;
      puRam00000001136b9108 = puVar8;
      _objc_release(puVar6);
      _objc_release(puVar7);
      puVar6 = puRam00000001136b9108;
    }
LAB_104eb3f68:
    _objc_retain(puVar6);
    puVar8 = puVar6;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c094540(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c228dc0(uVar10);
  _objc_release(lVar5);
  _objc_release(uVar10);
  _objc_release(puVar8);
  _objc_release(lVar4);
  _objc_release(lVar1);
LAB_104eb3fd0:
  _objc_release(lVar2);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar3 + 0x20,0);
  _objc_storeStrong(lVar3 + 0x18,0);
  _objc_storeStrong(lVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + 8,0);
  return;
}



/* Entry: 104eb4018; end: 104eb405f; -[SCLensModularCameraLaunchParamConfigurer .cxx_destruct] */

void FUN_104eb4018(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


