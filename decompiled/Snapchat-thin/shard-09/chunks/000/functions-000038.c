/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106879498; end: 1068794a7; -[SCMapPlacesComposerVideoView snapIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106879498(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127522c0);
}



/* Entry: 1068794a8; end: 1068794e7; -[SCMapPlacesComposerVideoView setSnapIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068794a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127522c0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068794e8; end: 1068794f7; -[SCMapPlacesComposerVideoView placeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1068794e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127522c4);
}



/* Entry: 1068794f8; end: 106879537; -[SCMapPlacesComposerVideoView setPlaceId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068794f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127522c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106879538; end: 106879547; -[SCMapPlacesComposerVideoView thumbnailUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106879538(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127522c8);
}



/* Entry: 106879548; end: 106879587; -[SCMapPlacesComposerVideoView setThumbnailUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106879548(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127522c8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106879588; end: 106879597; -[SCMapPlacesComposerVideoView venueStoryAnalytics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106879588(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127522cc);
}



/* Entry: 106879598; end: 1068795d7; -[SCMapPlacesComposerVideoView setVenueStoryAnalytics:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106879598(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127522cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1068795d8; end: 10687970b; -[SCMapPlacesComposerVideoView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068795d8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127522cc,0);
  _objc_storeStrong(param_1 + _DAT_1127522c8,0);
  _objc_storeStrong(param_1 + _DAT_1127522c4,0);
  _objc_storeStrong(param_1 + _DAT_1127522c0,0);
  _objc_storeStrong(param_1 + _DAT_1127522bc,0);
  _objc_destroyWeak(param_1 + _DAT_1127522b8);
  _objc_destroyWeak(param_1 + _DAT_1127522ac);
  _objc_storeStrong(param_1 + _DAT_1127522a8,0);
  _objc_storeStrong(param_1 + _DAT_1127522b4,0);
  _objc_storeStrong(param_1 + _DAT_1127522a4,0);
  _objc_storeStrong(param_1 + _DAT_1127522a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275229c);
  return;
}



/* Entry: 10687970c; end: 10687982b;  */

void FUN_10687970c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e628f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e628f8,
                      &PTR____CFConstantStringClassReference_110e63158,0);
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



/* Entry: 10687982c; end: 106879953;  */

void FUN_10687982c(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar1 = param_2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfdcf80();
  _objc_release(puVar1);
  if ((int)puVar2 == 0) {
    _objc_retain(param_2);
    puVar1 = param_2;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar2 = param_2;
    func_0x00010beec820(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25cde0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106879954; end: 1068799e3;  */

void FUN_106879954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  FUN_1068799e4(*(undefined8 *)PTR__CGSizeZero_110347620,
                *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068799e4; end: 106879c2f;  */

void FUN_1068799e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar2 = PTR_PTR_1126b08b0;
  uVar1 = param_2;
  func_0x00010beec820(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bf33760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  func_0x00010c1c5440();
  puVar4 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _NSStringFromClass(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar4);
  _objc_release(param_4);
  puVar6 = PTR_PTR_1126b85a0;
  puVar5 = puVar3;
  func_0x00010bf220e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23c900(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b85a8;
  _objc_alloc(PTR_PTR_1126b85a8);
  puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c01cf00(puVar5);
  _objc_release(puVar7);
  _objc_retain(param_5);
  func_0x00010bfa7900(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106879c30; end: 106879ceb;  */

void FUN_106879c30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106879cec; end: 106879d33;  */

void FUN_106879cec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106879d34; end: 106879d47;  */

void FUN_106879d34(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000106879d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_2);
  return;
}



/* Entry: 106879d48; end: 106879e37;  */

void FUN_106879d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  func_0x00010bf88ca0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106879e38; end: 10687a0ab; +[SCMapImageLoader downloadImageWithURL:contentFetcher:scaleToDevice:completion:] */

void FUN_106879e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010beec820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33760(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  func_0x00010c1c5440();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x106879f70;
  puStack_58 = &UNK_1109450a8;
  uStack_50 = param_6;
  uStack_48 = param_5;
  _objc_retain(param_6);
  func_0x00010c13e600(param_4,param_2,puVar2,&puStack_70);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_50);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 10687a0ac; end: 10687a117; -[SCMemoriesDeepLinkProcessor initWithNavigationDelegate:] */

undefined1 * FUN_10687a0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3900;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10687a118; end: 10687a207; -[SCMemoriesDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:] */

undefined8
FUN_10687a118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  FUN_10687a250();
  if ((int)uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10687a208;
    puStack_60 = &UNK_110848ba8;
    uStack_58 = param_1;
    _objc_retain(param_3);
    uStack_50 = param_3;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x00010c0f7fe0(0x3fe0000000000000,uVar2,param_2,&puStack_78);
    _objc_release(uVar2);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10687a208; end: 10687a247;  */

void FUN_10687a208(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10d420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10687a248; end: 10687a24f; -[SCMemoriesDeepLinkProcessor .cxx_destruct] */

void FUN_10687a248(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10687a250; end: 10687a297;  */

undefined8 FUN_10687a250(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10687a298; end: 10687a33b; -[SCMemoriesSettingsUIScope initWithUIContainer:shouldHighlighBackup:delegate:] */

undefined1 *
FUN_10687a298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f3908;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_5);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10687a33c; end: 10687a347; -[SCMemoriesSettingsUIScope initWithUIContainer:delegate:] */

void FUN_10687a33c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c057390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithUIContainer_shouldHighli_1125f36f0,param_3,0,param_4);
  return;
}



/* Entry: 10687a348; end: 10687a35f; -[SCMemoriesSettingsUIScope delegate] */

void FUN_10687a348(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10687a360; end: 10687a367; -[SCMemoriesSettingsUIScope uiContainer] */

undefined8 FUN_10687a360(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10687a368; end: 10687a36f; -[SCMemoriesSettingsUIScope shouldHighlightBackup] */

undefined1 FUN_10687a368(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10687a370; end: 10687a39b; -[SCMemoriesSettingsUIScope .cxx_destruct] */

void FUN_10687a370(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 10687a39c; end: 10687a477; -[SCMessagingNotificationExtensionUserDefaults arroyoConfig] */

void FUN_10687a39c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar4 = puVar3;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ba550;
  _objc_opt_class(PTR_PTR_1126ba550);
  puVar6 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar5 = puVar4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10687a478; end: 10687a4bf; -[SCMessagingNotificationExtensionUserDefaults latestUnreadMessageTimestamp] */

undefined8 FUN_10687a478(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f80();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10687a4c0; end: 10687a503; -[SCMessagingNotificationExtensionUserDefaults setLatestUnreadMessageTimestamp:] */

void FUN_10687a4c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1add40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10687a504; end: 10687a5c7; -[SCNotificationServiceExtensionArroyoConfig initWithCoder:] */

undefined1 * FUN_10687a504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3918;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
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



/* Entry: 10687a5c8; end: 10687a5eb; -[SCNotificationServiceExtensionArroyoConfig copyWithZone:] */

undefined8 FUN_10687a5c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10687a5ec; end: 10687a65b; -[SCNotificationServiceExtensionArroyoConfig hash] */

ulong * FUN_10687a5ec(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_28 = (ulong)*(byte *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_38;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (ulong *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10687a700;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((((char)puVar2[1] != (char)param_3[1] ||
         (*(char *)((long)puVar2 + 9) != *(char *)((long)param_3 + 9))) ||
        (*(char *)((long)puVar2 + 10) != *(char *)((long)param_3 + 10))))) {
      puVar4 = (ulong *)0x0;
      goto LAB_10687a700;
    }
    puVar4 = (ulong *)puVar2[2];
    if (puVar4 != (ulong *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10687a700;
    }
  }
  puVar4 = (ulong *)0x1;
LAB_10687a700:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10687a65c; end: 10687a71b; -[SCNotificationServiceExtensionArroyoConfig isEqual:] */

long FUN_10687a65c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10687a700;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
         (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
        (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) {
      lVar3 = 0;
      goto LAB_10687a700;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10687a700;
    }
  }
  lVar3 = 1;
LAB_10687a700:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10687a71c; end: 10687a723; -[SCNotificationServiceExtensionArroyoConfig enableDebugTracing] */

undefined1 FUN_10687a71c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10687a724; end: 10687a72b; -[SCNotificationServiceExtensionArroyoConfig useArroyoForNewConversations] */

undefined1 FUN_10687a724(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10687a72c; end: 10687a733; -[SCNotificationServiceExtensionArroyoConfig disableArroyoOneOnOne] */

undefined1 FUN_10687a72c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10687a734; end: 10687a73b; -[SCNotificationServiceExtensionArroyoConfig tweaks] */

undefined8 FUN_10687a734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10687a73c; end: 10687a747; -[SCChatAttribution legacy_sourceNotification] */

void FUN_10687a73c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getAssociatedObject_11034d240)(param_1,&UNK_10f39dc03);
  return;
}



/* Entry: 10687a748; end: 10687aa03; -[SCChatAttribution setLegacy_sourceNotification:] */

void FUN_10687a748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)(param_1,&UNK_10f39dc03,param_3,1);
  return;
}



/* Entry: 10687aa04; end: 10687abaf;  */

void FUN_10687aa04(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c14d780();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar4 = param_1;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      lVar4 = lVar2;
      func_0x00010bf4b900(lVar2,param_2,param_1);
      if ((int)lVar4 != 0) {
        lVar4 = lVar2;
        func_0x00010bfecde0(lVar2,param_2,param_1);
        lVar5 = lVar2;
        func_0x00010c25e980(lVar2,param_2,0,lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2224a0(lVar1,param_2,lVar5);
        _objc_release(lVar5);
      }
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
      goto LAB_10687aab8;
    }
    lVar4 = param_1;
    func_0x00010c29c300();
    if ((int)lVar4 != 0) {
      func_0x00010c29c1c0(param_1,param_2,param_3);
      goto LAB_10687aab8;
    }
    func_0x00010c10fd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84b00();
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10687abb0;
    puStack_50 = &UNK_110842508;
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x00010beeff40(lVar3,param_2,0,&puStack_68);
    param_1 = lStack_48;
  }
  _objc_release(param_1);
LAB_10687aab8:
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10687abb0; end: 10687abc7;  */

void FUN_10687abb0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010687abbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10687abc8; end: 10687adf7;  */

void FUN_10687abc8(double param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar6 = param_2;
  func_0x00010687ad54(param_2,PTR_s_shouldPopToRootViewController_11266a188);
  if ((uVar6 & 1) == 0) {
    uVar6 = param_2;
    func_0x00010687ad54(param_2,PTR_s_shouldPopToRootViewControllerLat_11266a190);
    uVar5 = (uint)uVar6;
  }
  else {
    uVar5 = 1;
  }
  uVar6 = param_2;
  func_0x00010687ad54(param_2,PTR_s_shouldDismissViewControllerWhenE_112669698);
  if ((uVar6 & 1) == 0) {
    uVar6 = param_2;
    func_0x00010687ad54(param_2,PTR_s_shouldDismissViewControllerLater_112669690);
    if (((uVar5 | (uint)uVar6) & 1) == 0) {
      uVar6 = param_2;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = (uint)(uVar6 != 0);
      _objc_release();
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 1;
  }
  func_0x00010c26f120(param_2);
  puVar2 = PTR_PTR_1126aecb0;
  if (param_1 == 60.0) {
    func_0x00010bf9b4a0(PTR_PTR_1126aecb0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c26f120(param_2);
    func_0x00010bf9b4c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  if (uVar5 == 0) {
    uVar3 = param_2;
    func_0x00010c22f1c0();
    if ((int)uVar3 != 0) goto LAB_10687ace8;
    if ((uVar6 & 1) == 0) {
      puVar4 = PTR_PTR_1126aecb0;
      func_0x00010bf9b4a0(PTR_PTR_1126aecb0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10687ad34;
    }
    func_0x00010c22f1a0();
    iVar1 = (int)param_2;
    puVar4 = PTR_PTR_1126aecb0;
  }
  else {
    uVar6 = param_2;
    func_0x00010c231d80();
    if ((int)uVar6 != 0) {
LAB_10687ace8:
      puVar4 = PTR_PTR_1126aecb0;
      func_0x00010bf9b820(PTR_PTR_1126aecb0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10687ad34;
    }
    func_0x00010c231da0();
    iVar1 = (int)param_2;
    puVar4 = PTR_PTR_1126aecb0;
  }
  PTR_PTR_1126aecb0 = puVar4;
  if (iVar1 == 0) {
    func_0x00010c0d83c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
    puVar4 = puVar2;
  }
LAB_10687ad34:
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10687adf8; end: 10687af33;  */

undefined * FUN_10687adf8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = param_1;
  func_0x000100456ca0();
  if ((int)puVar2 == 0) {
    puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
    _objc_opt_class(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
    puVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      return (undefined *)0x2;
    }
    func_0x00010c29c580(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2631c0();
    _objc_release(puVar2);
    puVar2 = param_1;
  }
  else {
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c2a72c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(param_1);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c252de0();
      _objc_release(puVar3);
    }
    else {
      puVar4 = puVar2;
      func_0x00010c0690e0();
    }
    puVar3 = (undefined *)0x2;
    if (puVar4 == (undefined *)0x4) {
      puVar3 = (undefined *)0x10;
    }
    puVar1 = (undefined *)0x8;
    if (puVar4 != (undefined *)0x3) {
      puVar1 = puVar3;
    }
    puVar3 = (undefined *)0x4;
    if (puVar4 != (undefined *)0x2) {
      puVar3 = puVar1;
    }
  }
  _objc_release(puVar2);
  return puVar3;
}



/* Entry: 10687af34; end: 10687af93;  */

undefined8 FUN_10687af34(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf6f4c0();
  _objc_release(param_1);
  return 0;
}



/* Entry: 10687af94; end: 10687b033;  */

void FUN_10687af94(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  uVar1 = 0;
  _dispatch_time(0,*(long *)(param_1 + 0x28) * 1000000);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10687b034;
  puStack_40 = &UNK_1108434b0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010058c530(uVar1,PTR___dispatch_main_q_11034be20,&puStack_58);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10687b034; end: 10687b097;  */

void FUN_10687b034(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be50220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10687b098; end: 10687b133; -[SCNavigationService detachViewController] */

void FUN_10687b098(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      func_0x00010be8f680(param_1);
    }
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = param_1 + 0x68;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf6f440();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,0);
    return;
  }
  return;
}



/* Entry: 10687b134; end: 10687b137; -[SCNavigationService exposeFeatureScopeIfNeeded] */

void FUN_10687b134(void)

{
  return;
}



/* Entry: 10687b138; end: 10687b13b; -[SCNavigationService _reportDiagnosticIfNeededForReason:details:] */

void FUN_10687b138(void)

{
  return;
}



/* Entry: 10687b13c; end: 10687b143; -[SCNavigationService tabItemUiContainer] */

undefined8 FUN_10687b13c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10687b144; end: 10687b173; -[SCNavigationService setTabItemUiContainer:] */

void FUN_10687b144(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10687b174; end: 10687b17f; -[SCNavigationService setSwipeViewContainer:] */

void FUN_10687b174(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 10687b180; end: 10687b18b; -[SCNavigationService setViewController:] */

void FUN_10687b180(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 10687b18c; end: 10687b227; -[SCNavigationService .cxx_destruct] */

void FUN_10687b18c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10687b228; end: 10687b34b; -[SCCommunitiesProfileScope initWithGroupId:uiContainer:delegate:pageType:scrollToProfileSection:] */

undefined1 *
FUN_10687b228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f3928;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = 1;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10687b34c; end: 10687b4ef; -[SCCommunitiesProfileScope initWithGroupId:uiContainer:delegate:pageType:sourceType:sessionId:profileUserId:ctaStatus:] */

undefined1 *
FUN_10687b34c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126f3928;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
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
    *(undefined1 *)((long)puVar1 + 8) = 0;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
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



/* Entry: 10687b4f0; end: 10687b4f7; -[SCCommunitiesProfileScope groupId] */

undefined8 FUN_10687b4f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10687b4f8; end: 10687b4ff; -[SCCommunitiesProfileScope uiContainer] */

undefined8 FUN_10687b4f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10687b500; end: 10687b517; -[SCCommunitiesProfileScope delegate] */

void FUN_10687b500(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10687b518; end: 10687b51f; -[SCCommunitiesProfileScope pageType] */

undefined8 FUN_10687b518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10687b520; end: 10687b527; -[SCCommunitiesProfileScope sourceType] */

undefined8 FUN_10687b520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10687b528; end: 10687b52f; -[SCCommunitiesProfileScope sessionId] */

undefined8 FUN_10687b528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10687b530; end: 10687b537; -[SCCommunitiesProfileScope viewingUserIsVerified] */

undefined1 FUN_10687b530(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10687b538; end: 10687b53f; -[SCCommunitiesProfileScope setViewingUserIsVerified:] */

void FUN_10687b538(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10687b540; end: 10687b547; -[SCCommunitiesProfileScope profileUserId] */

undefined8 FUN_10687b540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10687b548; end: 10687b54f; -[SCCommunitiesProfileScope ctaStatus] */

undefined8 FUN_10687b548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10687b550; end: 10687b557; -[SCCommunitiesProfileScope scrollToProfileSection] */

undefined8 FUN_10687b550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10687b558; end: 10687b5d7; -[SCCommunitiesProfileScope .cxx_destruct] */

void FUN_10687b558(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10687b5d8; end: 10687b673; -[SCMainCameraDeepLinkHandler initWithHandlerPlugins:deepLinkScopeDelegate:] */

undefined1 *
FUN_10687b5d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3930;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10687b674; end: 10687b757; -[SCMainCameraDeepLinkHandler handleDeepLink:additionalInfo:uiContainer:sourceViewController:] */

void FUN_10687b674(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010bdf8e60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bfd0a40(lVar1,param_2,param_3,param_4,param_5,param_6);
  }
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0b66a0();
  _objc_release(param_1);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10687b758; end: 10687b887; -[SCMainCameraDeepLinkHandler _deepLinkHandlerPluginForDeepLink:] */

void FUN_10687b758(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 8);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
      uVar6 = 0;
LAB_10687b83c:
      _objc_release(lVar5);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
        return;
      }
      ___stack_chk_fail();
      _objc_destroyWeak(param_3 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
      return;
    }
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar6 = *(ulong *)(lVar7 * 8);
      uVar3 = uVar6;
      func_0x00010bf2cb80();
      if ((uVar3 & 1) != 0) {
        _objc_retain(uVar6);
        goto LAB_10687b83c;
      }
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10687b888; end: 10687b8b3; -[SCMainCameraDeepLinkHandler .cxx_destruct] */

void FUN_10687b888(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10687b8b4; end: 10687b93b; -[SCMainCameraDeepLinkHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10687b8b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = param_1 + _DAT_112752360;
  _objc_loadWeakRetained();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10687b93c;
  puStack_30 = &UNK_110846660;
  lStack_28 = lVar1;
  _objc_retain();
  func_0x00010be89ca0(param_1,param_2,&puStack_48);
  _objc_release(lStack_28);
  _objc_release(lVar1);
  return;
}



/* Entry: 10687b93c; end: 10687ba4b;  */

void FUN_10687b93c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126ce898;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c150700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019a40(puVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf67c00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010befd100(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27ece0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c247e60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0a40(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10687ba4c; end: 10687bb2f; -[SCMainCameraDeepLinkHandlerEntryPoint _registerPluginsWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10687ba4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112752364);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10687bb30;
  puStack_30 = &UNK_110945180;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf9d5c0(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110945160,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10687bb30; end: 10687bb3b;  */

void FUN_10687bb30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010687bb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10687bb3c; end: 10687bb77; -[SCMainCameraDeepLinkHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10687bb3c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112752364,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112752360);
  return;
}



/* Entry: 10687bb78; end: 10687bbeb; -[SCDeepLinkVCInfo hasLensID] */

bool FUN_10687bb78(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010befd100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010c096de0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  return lVar2 != 0;
}



/* Entry: 10687bbec; end: 10687bc4b; -[SCMainCameraViewController settingsLauncher] */

void FUN_10687bbec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126afea0;
  _objc_opt_class(PTR_PTR_1126afea0);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_1109451b0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10687bc4c; end: 10687bc53;  */

void FUN_10687bc4c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c228170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_settingsLauncher_112667a80);
  return;
}



/* Entry: 10687bc54; end: 10687bd97; -[SCMainCameraViewController _isOrphanedMediaRecoveryEnabled] */

ulong FUN_10687bc54(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  uVar1 = param_1;
  _objc_getAssociatedObject(param_1,0x1136c46c8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bf29180(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f440();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(param_1,0x1136c46c9,puVar5,1);
    _objc_release(puVar5);
    _objc_setAssociatedObject(param_1,0x1136c46c8,PTR____kCFBooleanTrue_11034ab68,1);
  }
  _objc_getAssociatedObject(param_1,0x1136c46c9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10687bd98; end: 10687bec7; -[SCMainCameraViewController handleDeepLinkAddFriends:] */

void FUN_10687bd98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af668;
  _objc_alloc(PTR_PTR_1126af668);
  func_0x00010c033380();
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  uVar3 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar2,param_2,uVar3,1);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bef8e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf22980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bef8e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0(uVar3,param_2,uVar4,param_1);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10687bec8; end: 10687c117; -[SCMainCameraViewController handleDeepLinkBitmoji:] */

void FUN_10687bec8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_3;
  _objc_retain();
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b6360);
  uVar2 = uVar1;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c275140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar3);
  _objc_release(uVar1);
  _objc_release(param_1);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  uStack_68 = 0x10687c120;
  uStack_60 = 0x10687c130;
  uVar1 = uVar2;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1b220();
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = uVar5;
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar7 = puStack_78[5];
  uVar1 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2475e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10be00(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10687c118; end: 10687c137;  */

void FUN_10687c118(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1b270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_bitmojiDeepLinkFactory_1125a4640);
  return;
}



/* Entry: 10687c138; end: 10687c173;  */

void FUN_10687c138(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_opt_class(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10687c174; end: 10687c2d7; -[SCMainCameraViewController handleMainCameraDeepLinkWithInfo:] */

void FUN_10687c174(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be28380(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    uVar1 = param_1;
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f40(puVar2,param_2,uVar1,1);
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126cacc0;
    _objc_alloc(PTR_PTR_1126cacc0);
    uVar4 = param_3;
    func_0x00010c28f340(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010befd100(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0099e0(puVar3,param_2,uVar4,uVar5,puVar2,param_1,param_1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126ae750;
    func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b6700(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0b66e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar1);
    _objc_release(param_1);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10687c2d8; end: 10687c34f; -[SCMainCameraViewController mainCameraDeepLinkScopeDidHandleDeepLink:isHandled:] */

void FUN_10687c2d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c0b6700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b66e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10687c350; end: 10687c48f; -[SCMainCameraViewController handleDeepLinkPhoneVerification:] */

void FUN_10687c350(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126b3e80;
  puVar1 = PTR_PTR_1126aeae0;
  func_0x00010beed6c0(PTR_PTR_1126aeae0,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27c3a0(puVar2,param_2,puVar1,1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aead0;
  _objc_alloc(PTR_PTR_1126aead0);
  uVar3 = param_1;
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e4c0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c2282a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf22f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c228160(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b7c0();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10687c490; end: 10687c507; -[SCMainCameraViewController settingsScopeWantsDismiss] */

void FUN_10687c490(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c228160(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10687c508; end: 10687c54f; -[SCMainCameraViewController settingsScopeDidDismiss] */

void FUN_10687c508(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c228160();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10687c550; end: 10687c68f; -[SCMainCameraViewController handleDeepLinkPreview:] */

void FUN_10687c550(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  func_0x00010befd100();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f00298);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea68a0(param_1,param_2,uVar2);
  uVar3 = uVar1;
  func_0x00010c0c6c20();
  puVar4 = PTR_PTR_1126ae558;
  if (uVar3 < 8) {
    uVar5 = uVar1;
    if ((1L << (uVar3 & 0x3f) & 0x16U) == 0) {
      if ((1L << (uVar3 & 0x3f) & 0xa0U) == 0) goto LAB_10687c668;
      func_0x00010c110a40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be27fa0(param_1,param_2,uVar5);
    }
    else {
      func_0x00010c110a40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9ca0(puVar4,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be7d940(param_1,param_2,puVar4);
      _objc_release(puVar4);
    }
    _objc_release(uVar5);
  }
LAB_10687c668:
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10687c690; end: 10687c96b; -[SCMainCameraViewController handleDeepLinkSendTo:] */

void FUN_10687c690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010befd100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c110a40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c299e20(PTR_PTR_1126b0010);
  puVar6 = PTR_PTR_1126b5fb0;
  _objc_alloc();
  func_0x00010c0613a0(param_1);
  _objc_initWeak(auStack_78,param_2);
  puVar7 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(puVar6);
  func_0x00010bf11fe0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010c241a00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c2419c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = uVar9;
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010c28f340(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010c241960(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar8);
  puVar12 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_alloc(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x00010c0402e0();
  func_0x00010c1cb760();
  func_0x00010c10eda0(param_2);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 10687c96c; end: 10687c9c7;  */

void FUN_10687c96c(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ce8a8;
    _objc_alloc(PTR_PTR_1126ce8a8);
    func_0x00010c03d720();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10687c9c8; end: 10687caa3; -[SCMainCameraViewController handleDeepLinkCreativeKitLite:] */

void FUN_10687c9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010befd100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
    uVar3 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f00398);
    if ((int)uVar3 == 0) {
      uVar3 = uVar2;
      func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f00358);
      if ((int)uVar3 != 0) {
        func_0x00010bfd0aa0(param_1,param_2,param_3);
      }
    }
    else {
      func_0x00010bfd0be0(param_1,param_2,param_3);
    }
  }
  else {
    func_0x00010bfd0ba0(param_1,param_2,param_3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10687caa4; end: 10687ccbf; -[SCMainCameraViewController handleDeepLinkCreativeKitWeb:] */

void FUN_10687caa4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010befd100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f3c0();
  _objc_release(lVar2);
  if ((int)lVar3 == 0) {
    lVar2 = lVar1;
    func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110f002d8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    if ((int)lVar3 == 0) goto LAB_10687cc90;
    lVar3 = lVar1;
    func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110f00298);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010bfd0aa0(param_1,param_2,param_3);
    }
  }
  else {
    lVar2 = param_3;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar3;
    func_0x00010c08fa60();
    if (lVar4 != 0) {
      uVar5 = param_1;
      func_0x00010c241a00(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c2419c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar5 = uVar6;
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c28f340(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c241980(uVar5,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(uVar5);
      puVar8 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
      _objc_alloc(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
      func_0x00010c0402e0();
      func_0x00010c1cb760();
      func_0x00010c1c8b80(puVar8,param_2,6);
      func_0x00010c10eda0(param_1,param_2,puVar8,0,0);
      _objc_release(puVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
  }
  _objc_release(lVar3);
LAB_10687cc90:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10687ccc0; end: 10687cefb; -[SCMainCameraViewController handleDeepLinkCamera:] */

void FUN_10687ccc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010befd100(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c241880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c241880(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c293740(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2726a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18a980(uVar3,param_2,uVar2,uVar4,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c241880(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c1119e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c1119c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e2060(uVar3,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010bea68a0(param_1,param_2,uVar2);
  uVar3 = param_1;
  func_0x00010c241880(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2100(uVar3,param_2,uVar6,uVar2);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bfd8580();
  if ((int)uVar3 != 0) {
    func_0x00010bfd0b20(param_1,param_2,param_3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10687cefc; end: 10687d10b; -[SCMainCameraViewController handleDeepLinkLenses:] */

void FUN_10687cefc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126bbbc0);
  uVar2 = uVar1;
  func_0x00010beecc40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c20e8;
  func_0x00010c0f3980();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1ab0;
  func_0x00010c280b80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    _objc_initWeak(auStack_68,param_1);
    uVar1 = uVar2;
    func_0x00010bfe63a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0f8040();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    puVar7 = puVar3;
    _objc_retain(puVar3);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar6);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}


