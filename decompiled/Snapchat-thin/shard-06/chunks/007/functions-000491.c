/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d5d8c8; end: 104d5d96f; -[SCGroupUnifiedProfileBitmojiActionHandler _presentLensCarouselFromSnapshot:skipToLensFeed:] */

void FUN_104d5d8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _objc_retain(param_3);
  func_0x00010c0b6c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010bfe7c80(puVar2,param_2,param_3,1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010be7c200(param_1,param_2,puVar2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104d5d970; end: 104d5db1b; -[SCGroupUnifiedProfileBitmojiActionHandler _presentLensCarouselScopeWithImage:skipToLensFeed:] */

void FUN_104d5d970(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(param_3);
  func_0x00010c116c60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1e41c0(uVar5,param_2,puVar2,0);
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126afdd8;
  lVar4 = param_1 + 0x98;
  _objc_loadWeakRetained(lVar4);
  lVar3 = lVar4;
  func_0x00010c0f2220();
  func_0x00010bfc8740(puVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bde68;
  if (param_4 == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(ppuVar1);
  lVar4 = param_1;
  func_0x00010bdd4920(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf24560(0,uVar5,param_2,lVar4,puVar2,0x52,1,*(undefined8 *)(param_1 + 0x40),0,0,
                      ppuVar1,0,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x48);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x48),param_2,uVar5);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104d5db1c; end: 104d5dc2b; -[SCGroupUnifiedProfileBitmojiActionHandler _bitmojiOutfitSharingContainerView] */

void FUN_104d5db1c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104d5dc2c;
  puStack_58 = &UNK_110849680;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0311a0(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d5dc2c; end: 104d5dcc7;  */

void FUN_104d5dc2c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84f20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d5dcc8; end: 104d5dd33; -[SCGroupUnifiedProfileBitmojiActionHandler _pushViewController:] */

void FUN_104d5dcc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x98;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d5dd34; end: 104d5dd83; -[SCGroupUnifiedProfileBitmojiActionHandler _popViewController] */

void FUN_104d5dd34(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x98;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103980();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d5dd84; end: 104d5de17; -[SCGroupUnifiedProfileBitmojiActionHandler _showError] */

void FUN_104d5dd84(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126afde0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db1398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1398,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104d5de18; end: 104d5de6b; -[SCGroupUnifiedProfileBitmojiActionHandler _presentOutfitChangeNotificationWithAvatarId:] */

void FUN_104d5de18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d6c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d5de6c; end: 104d5deb3; -[SCGroupUnifiedProfileBitmojiActionHandler bitmojiCreateFlowDidCompleteWithAvatarId:] */

void FUN_104d5de6c(long param_1)

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



/* Entry: 104d5deb4; end: 104d5defb; -[SCGroupUnifiedProfileBitmojiActionHandler bitmojiAvatarBuilderCancelled] */

void FUN_104d5deb4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104d5defc; end: 104d5df43; -[SCGroupUnifiedProfileBitmojiActionHandler bitmojiAvatarBuilderCompleted] */

void FUN_104d5defc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104d5df44; end: 104d5df8f; -[SCGroupUnifiedProfileBitmojiActionHandler bitmojiAvatarBuilderFailedWithError:] */

void FUN_104d5df44(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010beb8e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showError_11258bd40);
  return;
}



/* Entry: 104d5df90; end: 104d5e07b; -[SCGroupUnifiedProfileBitmojiActionHandler bitmojiEditAvatarBuilderScopeDidSaveOutfitChange:avatarId:] */

void FUN_104d5df90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104d5e07c;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d5e07c; end: 104d5e0af;  */

void FUN_104d5e07c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7d140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d5e0b0; end: 104d5e0f7; -[SCGroupUnifiedProfileBitmojiActionHandler bitmojiOutfitSharingScopeDidDismiss:] */

void FUN_104d5e0b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x48));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104d5e0f8; end: 104d5e10f; -[SCGroupUnifiedProfileBitmojiActionHandler presentingViewControllerForBitmojiOutfitSharing] */

void FUN_104d5e0f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d5e110; end: 104d5e157; -[SCGroupUnifiedProfileBitmojiActionHandler bitmojiGroupProfileSharingScopeDidDismiss] */

void FUN_104d5e110(long param_1)

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



/* Entry: 104d5e158; end: 104d5e16f; -[SCGroupUnifiedProfileBitmojiActionHandler presentingViewController] */

void FUN_104d5e158(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d5e170; end: 104d5e17b; -[SCGroupUnifiedProfileBitmojiActionHandler setPresentingViewController:] */

void FUN_104d5e170(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 104d5e17c; end: 104d5e267; -[SCGroupUnifiedProfileBitmojiActionHandler .cxx_destruct] */

void FUN_104d5e17c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x98);
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



/* Entry: 104d5e268; end: 104d5e27f;  */

void FUN_104d5e268(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db1458;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db1458,
                      &PTR____CFConstantStringClassReference_110db1478,0);
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



/* Entry: 104d5e280; end: 104d5e3b7; -[SCMyProfileBitmojiSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5e280(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afda8;
  _objc_alloc(PTR_PTR_1126afda8);
  func_0x00010c032260();
  param_1 = param_1 + _DAT_112711f6c;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104d5e3b8; end: 104d5e3f7;  */

void FUN_104d5e3b8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdc4360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d5e3f8; end: 104d5e7c3; -[SCMyProfileBitmojiSectionEntryPoint _actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5e3f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
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
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  
  puVar1 = PTR_PTR_1126afe10;
  _objc_opt_new();
  lVar2 = param_1 + _DAT_112711f70;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf1c460();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf5e220();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126afe18;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112711f74;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112711f78;
  _objc_loadWeakRetained();
  uVar29 = *(undefined8 *)(param_1 + _DAT_112711f7c);
  lVar4 = param_1 + _DAT_112711f80;
  _objc_loadWeakRetained();
  uVar30 = *(undefined8 *)(param_1 + _DAT_112711f84);
  lVar9 = param_1 + _DAT_112711f88;
  _objc_loadWeakRetained();
  lVar10 = param_1 + _DAT_112711f8c;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = *(undefined8 *)(param_1 + _DAT_112711f90);
  lVar12 = param_1 + _DAT_112711f94;
  _objc_loadWeakRetained();
  lVar32 = (long)_DAT_112711f98;
  lVar13 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf12de0();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + lVar32;
  _objc_loadWeakRetained();
  lVar15 = lVar32;
  func_0x00010bf12e00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112711f9c;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bfa0c40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112711fa0;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112711fa4;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112711fa8;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c119b40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_112711f6c;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010c117240();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_112711fac;
  _objc_loadWeakRetained();
  lVar28 = param_1 + _DAT_112711fb0;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_112711fb4;
  _objc_loadWeakRetained();
  func_0x00010c038060(puVar6,param_2,lVar8,puVar1,lVar3,uVar29,lVar4,uVar30,lVar9,lVar11,uVar31,
                      lVar12,lVar14,lVar15,lVar18,lVar20,lVar22,lVar24,lVar26,lVar5,lVar27,lVar28,
                      param_1);
  _objc_release(param_1);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar32);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104d5e7c4; end: 104d5e8df; -[SCMyProfileBitmojiSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d5e7c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711f84,0);
  _objc_destroyWeak(param_1 + _DAT_112711f88);
  _objc_destroyWeak(param_1 + _DAT_112711f94);
  _objc_storeStrong(param_1 + _DAT_112711f90,0);
  _objc_destroyWeak(param_1 + _DAT_112711f80);
  _objc_storeStrong(param_1 + _DAT_112711f7c,0);
  _objc_destroyWeak(param_1 + _DAT_112711fb4);
  _objc_destroyWeak(param_1 + _DAT_112711fb0);
  _objc_destroyWeak(param_1 + _DAT_112711fac);
  _objc_destroyWeak(param_1 + _DAT_112711fa4);
  _objc_destroyWeak(param_1 + _DAT_112711fa8);
  _objc_destroyWeak(param_1 + _DAT_112711f9c);
  _objc_destroyWeak(param_1 + _DAT_112711f98);
  _objc_destroyWeak(param_1 + _DAT_112711f70);
  _objc_destroyWeak(param_1 + _DAT_112711f8c);
  _objc_destroyWeak(param_1 + _DAT_112711f78);
  _objc_destroyWeak(param_1 + _DAT_112711fa0);
  _objc_destroyWeak(param_1 + _DAT_112711f74);
  _objc_destroyWeak(param_1 + _DAT_112711f6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112711fb8);
  return;
}



/* Entry: 104d5e8e0; end: 104d5ed27; -[SCMyUnifiedProfileBitmojiActionHandler initWithPreferences:bitmojiSectionLoadingStateProvider:bitmojiSelfieServices:bitmojiSelfiePickerScopeExposer:bitmojiSelfiePickerScopeServices:bitmojiEditAvatarBuilderScopeExposer:bitmojiEditAvatarBuilderScopeServices:notificationPool:bitmojiOutfitSharingScopeExposer:bitmojiOutfitSharingScopeServices:bitmojiAvatarDataProvider:bitmojiAvatarDataServices:bitmojiOutfitSharingLogger:avatarProvider:circumstanceEngine:bitmojiFashionNotificationProvider:profileSessionId:bitmojiStyle:userInfoServices:flatlandContentServices:profileLensServices:] */

undefined8 *
FUN_104d5e8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  puStack_70 = PTR_PTR_1126e4130;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[8];
    puVar1[8] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
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
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
    puVar1[0x13] = param_20;
    _objc_retain(param_21);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_23;
    _objc_release(uVar2);
  }
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
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



/* Entry: 104d5ed28; end: 104d5ed33; +[SCMyUnifiedProfileBitmojiActionHandler announcerIdentifier] */

undefined ** FUN_104d5ed28(void)

{
  return &PTR____CFConstantStringClassReference_110db14b8;
}



/* Entry: 104d5ed34; end: 104d5ed3b; -[SCMyUnifiedProfileBitmojiActionHandler addUpdateListener:] */

void FUN_104d5ed34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 104d5ed3c; end: 104d5ed43; -[SCMyUnifiedProfileBitmojiActionHandler removeUpdateListener:] */

void FUN_104d5ed3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 104d5ed44; end: 104d5f147; -[SCMyUnifiedProfileBitmojiActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_104d5ed44(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if (((ulong)puVar4 & 1) == 0) {
    puVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    if ((int)puVar4 == 0) {
      puVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c0720c0();
      _objc_release(puVar1);
      if ((int)puVar4 == 0) {
        puVar1 = param_4;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010c0720c0();
        _objc_release(puVar1);
        if ((int)puVar4 == 0) {
          puVar1 = param_4;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar1;
          func_0x00010c0720c0();
          _objc_release(puVar1);
          if ((int)puVar4 == 0) {
            puVar1 = param_4;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar1;
            func_0x00010c0720c0();
            _objc_release(puVar1);
            if ((int)puVar4 == 0) {
              puVar1 = param_4;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar1;
              func_0x00010c0720c0();
              _objc_release(puVar1);
              if ((int)puVar4 == 0) {
                puVar1 = param_4;
                func_0x00010bfe5ec0();
                _objc_retainAutoreleasedReturnValue();
                puVar4 = puVar1;
                func_0x00010c0720c0();
                _objc_release(puVar1);
                if ((int)puVar4 == 0) {
                  puVar1 = param_4;
                  func_0x00010bfe5ec0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = puVar1;
                  func_0x00010c0720c0();
                  _objc_release(puVar1);
                  if ((int)puVar4 == 0) {
                    uVar5 = 0;
                    goto LAB_104d5f0d0;
                  }
                  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
                  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c26f320();
                  func_0x00010c1b8440(*(undefined8 *)(param_1 + 0x10));
                }
                else {
                  puVar4 = param_4;
                  func_0x00010beee2e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
                  puVar3 = puVar4;
                  _objc_opt_isKindOfClass(puVar4,puVar1);
                  puVar1 = puVar4;
                  if (((ulong)puVar3 & 1) == 0) {
                    puVar1 = (undefined *)0x0;
                  }
                  _objc_retain(puVar1);
                  _objc_release(puVar4);
                  puVar4 = puVar1;
                  func_0x00010c08fa60();
                  if (puVar4 != (undefined *)0x0) {
                    puVar4 = *(undefined **)(param_1 + 0x88);
                    func_0x00010c269d40(puVar4);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c10d6c0();
                    goto LAB_104d5f0c0;
                  }
                }
              }
              else {
                puVar1 = param_4;
                func_0x00010beee2e0();
                _objc_retainAutoreleasedReturnValue();
                puVar4 = PTR_PTR_1126afe20;
                _objc_opt_class(PTR_PTR_1126afe20);
                puVar2 = puVar1;
                _objc_opt_isKindOfClass(puVar1,puVar4);
                puVar3 = puVar1;
                if (((ulong)puVar2 & 1) == 0) {
                  puVar3 = (undefined *)0x0;
                }
                _objc_retain(puVar3);
                _objc_release(puVar1);
                puVar1 = puVar3;
                func_0x00010c0fa820(puVar3);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = puVar3;
                func_0x00010bfecf00(puVar3);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar3);
                func_0x00010be7dc60(param_1);
LAB_104d5f0c0:
                _objc_release(puVar4);
              }
            }
            else {
              puVar4 = param_4;
              func_0x00010beee2e0();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR_PTR_1126afdb8;
              _objc_opt_class(PTR_PTR_1126afdb8);
              puVar3 = puVar4;
              _objc_opt_isKindOfClass(puVar4,puVar1);
              puVar1 = puVar4;
              if (((ulong)puVar3 & 1) == 0) {
                puVar1 = (undefined *)0x0;
              }
              _objc_retain(puVar1);
              _objc_release(puVar4);
              puVar3 = puVar1;
              func_0x00010beee2e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar1);
              puVar1 = PTR_PTR_1126afe20;
              _objc_opt_class(PTR_PTR_1126afe20);
              puVar2 = puVar3;
              _objc_opt_isKindOfClass(puVar3,puVar1);
              puVar4 = puVar3;
              if (((ulong)puVar2 & 1) == 0) {
                puVar4 = (undefined *)0x0;
              }
              _objc_retain(puVar4);
              _objc_release(puVar3);
              puVar1 = puVar4;
              func_0x00010c0fa820(puVar4);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar4);
              func_0x00010be7dc60(param_1);
            }
            _objc_release(puVar1);
          }
          else {
            func_0x00010be6d280(param_1);
          }
        }
        else {
          func_0x00010be9db80(param_1);
        }
      }
      else {
        func_0x00010be06ee0(param_1);
      }
    }
    else {
      func_0x00010bddc980(param_1);
    }
  }
  uVar5 = 1;
LAB_104d5f0d0:
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 104d5f148; end: 104d5f25b; -[SCMyUnifiedProfileBitmojiActionHandler _selfiePackDidChange] */

void FUN_104d5f148(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c15af80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c161a00(*(undefined8 *)(param_1 + 0x40));
  lVar1 = lVar2;
  func_0x00010c15ae20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126afde0;
  if (lVar3 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110db1398;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1398,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55ce0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340();
    _objc_release(uVar6);
    _objc_release(puVar5);
  }
  else {
    func_0x00010be7e5a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104d5f25c; end: 104d5f6bb; -[SCMyUnifiedProfileBitmojiActionHandler _changeOutfit:] */

void FUN_104d5f25c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  func_0x00010c1a73a0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c161a00(*(undefined8 *)(param_1 + 0x40));
  puVar1 = PTR_PTR_1126afdc8;
  _objc_opt_new(PTR_PTR_1126afdc8);
  func_0x00010c2ae460();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afdb8;
  _objc_opt_class(PTR_PTR_1126afdb8);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126afe28;
  _objc_opt_class(PTR_PTR_1126afe28);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  puVar5 = puVar3;
  func_0x00010bf93600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR_PTR_1126afdd0;
  if (puVar5 == (undefined *)0x0) {
    if (puVar3 == (undefined *)0x0) {
      puVar4 = param_3;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126afe28;
      _objc_opt_class(PTR_PTR_1126afe28);
      puVar5 = puVar4;
      _objc_opt_isKindOfClass(puVar4,puVar2);
      puVar2 = puVar4;
      if (((ulong)puVar5 & 1) == 0) {
        puVar2 = (undefined *)0x0;
      }
      _objc_retain(puVar2);
      _objc_release(puVar4);
      puVar4 = puVar2;
      func_0x00010bf68660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar5 = param_3;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126afe28;
      _objc_opt_class(PTR_PTR_1126afe28);
      puVar6 = puVar5;
      _objc_opt_isKindOfClass(puVar5,puVar2);
      puVar2 = puVar5;
      if (((ulong)puVar6 & 1) == 0) {
        puVar2 = (undefined *)0x0;
      }
      _objc_retain(puVar2);
      _objc_release(puVar5);
      func_0x00010c247520(puVar2);
      _objc_release(puVar2);
      puVar2 = param_3;
      func_0x00010beee2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126afe28;
      _objc_opt_class(PTR_PTR_1126afe28);
      puVar6 = puVar2;
      _objc_opt_isKindOfClass(puVar2,puVar5);
      puVar5 = puVar2;
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = (undefined *)0x0;
      }
      _objc_retain(puVar5);
      _objc_release(puVar2);
      puVar2 = puVar5;
      func_0x00010bfcdc80(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    else {
      puVar5 = puVar2;
      func_0x00010bf68660();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126afe30;
      _objc_opt_class(PTR_PTR_1126afe30);
      puVar6 = puVar5;
      _objc_opt_isKindOfClass(puVar5,puVar4);
      puVar4 = puVar5;
      if (((ulong)puVar6 & 1) == 0) {
        puVar4 = (undefined *)0x0;
      }
      _objc_retain(puVar4);
      _objc_release(puVar5);
      func_0x00010c247520(puVar2);
      func_0x00010bfcdc80(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    if (puVar4 != (undefined *)0x0) {
      func_0x00010bf12cc0(puVar4);
      func_0x00010c2afd60(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c155f40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2afe20(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    puVar5 = puVar3;
    func_0x00010bf131a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a8f00(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c2aeee0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7b180(param_1);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  else {
    puVar2 = puVar3;
    func_0x00010bf93600(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93640(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b51c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bfcdc80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aeee0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar4 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c247520(puVar3);
    func_0x00010be7b180(param_1);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d5f6bc; end: 104d5f9d7; -[SCMyUnifiedProfileBitmojiActionHandler _editBitmoji:] */

void FUN_104d5f6bc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  func_0x00010c161a00(*(undefined8 *)(param_1 + 0x40));
  puVar2 = PTR_PTR_1126afdc8;
  _objc_opt_new(PTR_PTR_1126afdc8);
  func_0x00010c2ae460();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afdb8;
  _objc_opt_class(PTR_PTR_1126afdb8);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar5 = param_3;
  if (uVar1 != 0) {
    uVar5 = uVar3;
  }
  uVar6 = uVar5;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afe28;
  _objc_opt_class(PTR_PTR_1126afe28);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar4);
  uVar3 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar6);
  uVar6 = uVar3;
  func_0x00010bf68660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar7 = uVar5;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afe28;
  _objc_opt_class(PTR_PTR_1126afe28);
  uVar8 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar4);
  uVar3 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar7);
  func_0x00010c247520(uVar3);
  _objc_release(uVar3);
  uVar7 = uVar5;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afe28;
  _objc_opt_class(PTR_PTR_1126afe28);
  uVar8 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar4);
  uVar3 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar7);
  uVar7 = uVar3;
  func_0x00010bfcdc80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afe28;
  _objc_opt_class(PTR_PTR_1126afe28);
  uVar8 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar4);
  uVar3 = uVar5;
  if ((uVar8 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  uVar5 = uVar3;
  func_0x00010bf131a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (uVar6 != 0) {
    func_0x00010bf12cc0(uVar6);
    func_0x00010c2afd60(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c155f40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2afe20(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  func_0x00010c2aeee0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8f00(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7b180(param_1);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d5f9d8; end: 104d5fba7; -[SCMyUnifiedProfileBitmojiActionHandler _presentEditAvatarBuilderWithContext:linkPage:actionIdentifier:] */

void FUN_104d5f9d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104d5fba8;
  puStack_80 = &UNK_11084d918;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_5);
  uStack_78 = param_5;
  _objc_copyWeak(auStack_a0,auStack_68);
  func_0x00010c0311a0(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf23c20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104d5fba8; end: 104d5fbfb;  */

void FUN_104d5fba8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7f4e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d5fbfc; end: 104d5fc43;  */

void FUN_104d5fbfc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be759e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d5fc44; end: 104d5fcdb; -[SCMyUnifiedProfileBitmojiActionHandler _presentViewController:forActionIdentifier:] */

void FUN_104d5fc44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0xb8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c161a00(*(undefined8 *)(param_1 + 0x40),param_2,param_4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104d5fcdc; end: 104d5fd6b; -[SCMyUnifiedProfileBitmojiActionHandler _popToRootViewControllerWithDetachCompletion:] */

void FUN_104d5fcdc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0xb8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf098c0(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c103980(lVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d5fd6c; end: 104d5fecf; -[SCMyUnifiedProfileBitmojiActionHandler _selectSelfie] */

void FUN_104d5fd6c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c15af80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c15ae20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar3 == 0) {
    func_0x00010c161a00(*(undefined8 *)(param_1 + 0x40));
    lVar1 = lVar2;
    func_0x00010bfaa0a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_38,param_1);
    puVar4 = auStack_40;
    _objc_copyWeak(puVar4,auStack_38);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar1);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(lVar1);
  }
  else {
    func_0x00010be7e5a0(param_1);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 104d5fed0; end: 104d5fefb;  */

void FUN_104d5fed0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9e580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d5fefc; end: 104d600e3; -[SCMyUnifiedProfileBitmojiActionHandler _presentSelfieViewController] */

void FUN_104d5fefc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0xb8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_copyWeak(auStack_58,param_1 + 0xb8);
    uStack_88 = 0;
    uStack_78 = 0x3042000000;
    pcStack_70 = FUN_104d600e4;
    uStack_68 = 0x104d600f0;
    puStack_80 = &uStack_88;
    _objc_initWeak(auStack_60,0);
    puVar3 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_104d600f8;
    puStack_a0 = &UNK_11084d948;
    puStack_98 = &uStack_88;
    _objc_copyWeak(auStack_90,auStack_58);
    _objc_copyWeak(auStack_c0,auStack_58);
    func_0x00010c0311a0(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf23ec0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_90);
    __Block_object_dispose(&uStack_88,8);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 104d600e4; end: 104d600f7;  */

void FUN_104d600e4(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_moveWeak_11034d280)(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 104d600f8; end: 104d60177;  */

void FUN_104d600f8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  _objc_storeWeak(lVar1 + 0x28,param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d60178; end: 104d6027b;  */

void FUN_104d60178(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c275140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar3;
  func_0x00010c071ae0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar5 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d6027c; end: 104d602ff; -[SCMyUnifiedProfileBitmojiActionHandler _openKeyboardOnboardingInBitmoji] */

void FUN_104d6027c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110db1498);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a6780(*(undefined8 *)(param_1 + 0x10),param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d60300; end: 104d60303;  */

void FUN_104d60300(void)

{
  return;
}



/* Entry: 104d60304; end: 104d6040f; -[SCMyUnifiedProfileBitmojiActionHandler _markPromoAsViewedForCtaType:] */

void FUN_104d60304(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = *(undefined **)(param_2 + 0x10);
  func_0x00010bf5d400();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0df780(puVar2,param_3,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(puVar3,param_3,puVar2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c186700(*(undefined8 *)(param_2 + 0x10),param_3,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104d60410; end: 104d6061f; -[SCMyUnifiedProfileBitmojiActionHandler _previewImageObservable:avatarId:petImageUrl:] */

void FUN_104d60410(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = param_3;
  func_0x00010c14fa80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  puVar3 = PTR_PTR_1126af5d0;
  puVar4 = PTR_PTR_1126ae6b8;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = *(undefined **)(param_1 + 0xa8);
    func_0x00010bf461c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf6a1e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_3;
    func_0x00010c14fa80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2619e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar3 = puVar4;
  func_0x00010bfb2660(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d60620; end: 104d60a0b;  */

void FUN_104d60620(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  puStack_98 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_104d60a0c;
  uStack_70 = 0x104d60a1c;
  uStack_68 = 0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104d60a24;
  puStack_a0 = &UNK_110842b58;
  puStack_88 = puStack_98;
  func_0x00010c0c0800(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = puStack_88[5];
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126af5d8;
      _objc_alloc();
      func_0x00010bff6040();
      lVar4 = *(long *)(param_1 + 0x28);
      func_0x00010bf14660();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010c08fa60();
      _objc_release(lVar4);
      if (lVar2 == 0) {
        lVar4 = *(long *)(param_1 + 0x28);
        func_0x00010bf14060();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar4;
        func_0x00010c08fa60();
        _objc_release(lVar4);
        puVar5 = PTR_PTR_1126afd80;
        if (lVar2 != 0) {
          uVar7 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010bf14060(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe5e80(puVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          puVar9 = PTR_PTR_1126afd88;
          _objc_alloc(PTR_PTR_1126afd88);
          func_0x00010bff6380();
          puVar6 = *(undefined **)(lVar1 + 0xa8);
          func_0x00010bf418c0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar6;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar8;
          func_0x00010bfa9f40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          goto LAB_104d6087c;
        }
        puVar8 = *(undefined **)(lVar1 + 0xa8);
        func_0x00010bf461c0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar5;
        func_0x00010bf68dc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_c0,param_1 + 0x38);
        _objc_retain(puVar3);
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar7);
        puVar10 = puVar9;
        func_0x00010bfb2660(puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(puVar5);
        _objc_release(puVar8);
        _objc_release(uVar7);
        _objc_release(puVar3);
        _objc_destroyWeak(auStack_c0);
      }
      else {
        puVar5 = *(undefined **)(lVar1 + 0xa8);
        func_0x00010bf418c0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = *(undefined **)(param_1 + 0x28);
        func_0x00010bf14660(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bfa9f60(puVar9);
        _objc_retainAutoreleasedReturnValue();
LAB_104d6087c:
        _objc_release(puVar6);
        _objc_release(puVar9);
        _objc_release(puVar5);
      }
      puVar5 = puVar10;
      func_0x00010bf43280(puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar3);
      goto LAB_104d608c0;
    }
  }
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
LAB_104d608c0:
  _objc_release(lVar1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104d60a0c; end: 104d60a23;  */

void FUN_104d60a0c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d60a24; end: 104d60a5b;  */

void FUN_104d60a24(long param_1,undefined8 param_2)

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



/* Entry: 104d60a5c; end: 104d60c53;  */

void FUN_104d60a5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_104d60a0c;
  uStack_60 = 0x104d60a1c;
  uStack_58 = 0;
  func_0x00010c0c0800(param_2);
  lVar1 = puStack_78[5];
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      puVar6 = PTR_PTR_1126ae6b8;
      func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = PTR_PTR_1126afd80;
      func_0x00010bfe5e80(PTR_PTR_1126afd80);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126afd88;
      _objc_alloc(PTR_PTR_1126afd88);
      func_0x00010bff6380();
      puVar4 = *(undefined **)(param_1 + 0xa8);
      func_0x00010bf418c0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfa9f40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(param_1);
  }
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104d60c54; end: 104d60c8b;  */

void FUN_104d60c54(long param_1,undefined8 param_2)

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



/* Entry: 104d60c8c; end: 104d60d6b;  */

void FUN_104d60c8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104d60a0c;
  uStack_30 = 0x104d60a1c;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d60d6c; end: 104d60da3;  */

void FUN_104d60d6c(long param_1,undefined8 param_2)

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



/* Entry: 104d60da4; end: 104d6110f; -[SCMyUnifiedProfileBitmojiActionHandler _presentProfileLensCarouselWithPetImageUrl:indexOnBitmojiFeed:] */

void FUN_104d60da4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be588e0(param_1);
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c116c60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e41c0();
    _objc_release(uVar9);
    _objc_release(uVar7);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010bf1b5c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010c28d760();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010bf43280();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(lVar2);
    _objc_retain(param_3);
    uVar6 = uVar5;
    func_0x00010bfb2660(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar3);
    uVar7 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c116c60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e41c0();
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(param_3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  puVar8 = PTR_PTR_1126afdd8;
  lVar1 = param_1 + 0xb8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0f2220();
  func_0x00010bfc8740(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  lVar1 = param_1;
  func_0x00010bdd4920(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0898a0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010bf24560(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x50));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x50));
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d61110; end: 104d61117;  */

void FUN_104d61110(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ec5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_optional_112618b90);
  return;
}



/* Entry: 104d61118; end: 104d611b3;  */

void FUN_104d61118(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010be7fda0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d611b4; end: 104d612fb; -[SCMyUnifiedProfileBitmojiActionHandler _logShareOutfitTap] */

void FUN_104d611b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd46c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf12dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be16fc0(param_1);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfc2c80(uVar2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104d612fc; end: 104d61343;  */

void FUN_104d612fc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be16fc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d61344; end: 104d61393; -[SCMyUnifiedProfileBitmojiActionHandler _finishLoggingShareOutfitTapWithAvatarData:] */

void FUN_104d61344(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  lVar1 = param_1;
  func_0x00010be46620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0af660(uVar2,param_2,lVar1,9,*(undefined8 *)(param_1 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d61394; end: 104d614af; -[SCMyUnifiedProfileBitmojiActionHandler _dictionaryFromAvatarData:] */

void FUN_104d61394(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c0ec460(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x104d61440;
  puStack_40 = &UNK_11084dad8;
  puStack_38 = puVar1;
  func_0x00010bf97cc0(uVar2,param_2,&puStack_58);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d614b0; end: 104d61577; -[SCMyUnifiedProfileBitmojiActionHandler _bitmojiOutfitSharingContainerView] */

void FUN_104d614b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0311a0(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d61578; end: 104d615bf;  */

void FUN_104d61578(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10ed60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d615c0; end: 104d615d3;  */

void FUN_104d615c0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104d615cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x10))(param_2);
    return;
  }
  return;
}



/* Entry: 104d615d4; end: 104d61623; -[SCMyUnifiedProfileBitmojiActionHandler presentViewController:] */

void FUN_104d615d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0xb8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d61624; end: 104d6166f; -[SCMyUnifiedProfileBitmojiActionHandler dismissViewControllerWithCompletion:] */

void FUN_104d61624(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0xb8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf84b00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d61670; end: 104d6172b; -[SCMyUnifiedProfileBitmojiActionHandler _jsonStringFromAvatarData:] */

void FUN_104d61670(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdfc140();
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = 0;
  func_0x00010bf64b60(puVar1,param_2,param_1,0,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  puVar3 = puVar2;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d6172c; end: 104d61787; -[SCMyUnifiedProfileBitmojiActionHandler bitmojiSelfiePickerComplete] */

void FUN_104d6172c(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010c161a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_setActionIdentifier_isInLoadingS_1126360a0,
             &PTR____CFConstantStringClassReference_110eb89b8,0);
  return;
}



/* Entry: 104d61788; end: 104d617cf; -[SCMyUnifiedProfileBitmojiActionHandler bitmojiOutfitSharingScopeDidDismiss:] */

void FUN_104d61788(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x50));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104d617d0; end: 104d617e7; -[SCMyUnifiedProfileBitmojiActionHandler presentingViewControllerForBitmojiOutfitSharing] */

void FUN_104d617d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d617e8; end: 104d617eb; -[SCMyUnifiedProfileBitmojiActionHandler bitmojiAvatarBuilderCancelled] */

void FUN_104d617e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde15f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__closeEditAvatarBuilder_112555f18);
  return;
}



/* Entry: 104d617ec; end: 104d617ef; -[SCMyUnifiedProfileBitmojiActionHandler bitmojiAvatarBuilderCompleted] */

void FUN_104d617ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde15f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__closeEditAvatarBuilder_112555f18);
  return;
}



/* Entry: 104d617f0; end: 104d61843; -[SCMyUnifiedProfileBitmojiActionHandler _presentOutfitChangeNotificationWithAvatarId:] */

void FUN_104d617f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d6c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d61844; end: 104d618db; -[SCMyUnifiedProfileBitmojiActionHandler bitmojiAvatarBuilderFailedWithError:] */

void FUN_104d61844(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010bde15e0();
  puVar2 = PTR_PTR_1126afde0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db1398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1398,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104d618dc; end: 104d61947; -[SCMyUnifiedProfileBitmojiActionHandler _closeEditAvatarBuilder] */

/* WARNING: Possible PIC construction at 0x000104d6192c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104d61930) */

void FUN_104d618dc(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010c161a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_setActionIdentifier_isInLoadingS_1126360a0,
             &PTR____CFConstantStringClassReference_110eb8998,0);
  return;
}



/* Entry: 104d61948; end: 104d61a5f; -[SCMyUnifiedProfileBitmojiActionHandler bitmojiEditAvatarBuilderScopeDidSaveOutfitChange:avatarId:] */

void FUN_104d61948(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1b8440(*(undefined8 *)(param_1 + 0x10));
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104d61a60;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d61a60; end: 104d61a93;  */

void FUN_104d61a60(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7d140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d61a94; end: 104d61aab; -[SCMyUnifiedProfileBitmojiActionHandler presentingViewController] */

void FUN_104d61a94(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d61aac; end: 104d61ab7; -[SCMyUnifiedProfileBitmojiActionHandler setPresentingViewController:] */

void FUN_104d61aac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xb8,param_3);
  return;
}



/* Entry: 104d61ab8; end: 104d61bd3; -[SCMyUnifiedProfileBitmojiActionHandler .cxx_destruct] */

void FUN_104d61ab8(long param_1)

{
  _objc_destroyWeak(param_1 + 0xb8);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
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



/* Entry: 104d61bd4; end: 104d61c17; -[SCPreferences hasPressedEnableBitmojiKeyboard] */

undefined8 FUN_104d61bd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0dff20(param_1,param_2,&PTR____CFConstantStringClassReference_110db14d8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104d61c18; end: 104d61c63; -[SCPreferences setHasPressedEnableBitmojiKeyboard:] */

void FUN_104d61c18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110db14d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d61c64; end: 104d61c6f; -[SCPreferences hasViewedBitmojiMixAndMatchFashion] */

void FUN_104d61c64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolForKey__1125a5670,&PTR____CFConstantStringClassReference_110db14f8);
  return;
}



/* Entry: 104d61c70; end: 104d61c7b; -[SCPreferences setHasViewedBitmojiMixAndMatchFashion:] */

void FUN_104d61c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c172ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setBool_forKey__11263a618,param_3,
             &PTR____CFConstantStringClassReference_110db14f8);
  return;
}



/* Entry: 104d61c7c; end: 104d61cc7; -[SCPreferences lastOutfitChangeTimestamp] */

undefined8 FUN_104d61c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0dff20(param_2,param_3,&PTR____CFConstantStringClassReference_110db1518);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 104d61cc8; end: 104d61d13; -[SCPreferences setLastOutfitChangeTimestamp:] */

void FUN_104d61cc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110db1518);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d61d14; end: 104d61d77; -[SCUnifiedProfileBitmojiSectionLoadingStateProvider init] */

undefined1 * FUN_104d61d14(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4138;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104d61d78; end: 104d61dc7; -[SCUnifiedProfileBitmojiSectionLoadingStateProvider isActionIdentifierInLoadingState:] */

long FUN_104d61d78(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf1f3c0(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 104d61dc8; end: 104d61e93; -[SCUnifiedProfileBitmojiSectionLoadingStateProvider setActionIdentifier:isInLoadingState:] */

void FUN_104d61dc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0df6e0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(uVar3,param_2,puVar1,param_3);
  _objc_release(param_3);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09d400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104d61e94; end: 104d61eab; -[SCUnifiedProfileBitmojiSectionLoadingStateProvider delegate] */

void FUN_104d61e94(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d61eac; end: 104d61eb7; -[SCUnifiedProfileBitmojiSectionLoadingStateProvider setDelegate:] */

void FUN_104d61eac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 104d61eb8; end: 104d61ee3; -[SCUnifiedProfileBitmojiSectionLoadingStateProvider .cxx_destruct] */

void FUN_104d61eb8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d61ee4; end: 104d61f5f; -[SCProfileFlatlandBitmojiPickerProvider init] */

undefined1 * FUN_104d61ee4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4140;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104d61f60; end: 104d61f67; -[SCProfileFlatlandBitmojiPickerProvider selectedSceneIdObserver] */

void FUN_104d61f60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 104d61f68; end: 104d61f6f; -[SCProfileFlatlandBitmojiPickerProvider selectedBackgroundIdObserver] */

void FUN_104d61f68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 104d61f70; end: 104d61f77; -[SCProfileFlatlandBitmojiPickerProvider updateSelectedSceneId:] */

void FUN_104d61f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_next__112614028);
  return;
}



/* Entry: 104d61f78; end: 104d61f7f; -[SCProfileFlatlandBitmojiPickerProvider updateSelectedBackgroundId:] */

void FUN_104d61f78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_next__112614028);
  return;
}



/* Entry: 104d61f80; end: 104d61faf; -[SCProfileFlatlandBitmojiPickerProvider .cxx_destruct] */

void FUN_104d61f80(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d61fb0; end: 104d6202b; -[SCProfileFlatlandBitmojiPickerServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d61fb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11084db48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126afe40;
  _objc_alloc(PTR_PTR_1126afe40);
  func_0x00010c035ec0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112712028),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


