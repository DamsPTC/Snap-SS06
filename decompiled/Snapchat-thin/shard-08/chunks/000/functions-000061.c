/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ccae18; end: 105ccae1f; -[SCGalleryTabsController scrollContentBottomInset] */

undefined8 FUN_105ccae18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b8);
}



/* Entry: 105ccae20; end: 105ccae27; -[SCGalleryTabsController focusedDisplayedTabController] */

undefined8 FUN_105ccae20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}



/* Entry: 105ccae28; end: 105ccae2f; -[SCGalleryTabsController isVisible] */

undefined1 FUN_105ccae28(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a8);
}



/* Entry: 105ccae30; end: 105ccae37; -[SCGalleryTabsController selectMode] */

undefined1 FUN_105ccae30(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a9);
}



/* Entry: 105ccae38; end: 105ccae3f; -[SCGalleryTabsController focused] */

undefined1 FUN_105ccae38(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1aa);
}



/* Entry: 105ccae40; end: 105ccae47; -[SCGalleryTabsController suppressOperaPlaylistDismiss] */

undefined1 FUN_105ccae40(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1ab);
}



/* Entry: 105ccae48; end: 105ccae4f; -[SCGalleryTabsController setSuppressOperaPlaylistDismiss:] */

void FUN_105ccae48(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1ab) = param_3;
  return;
}



/* Entry: 105ccae50; end: 105ccb09b; -[SCGalleryTabsController .cxx_destruct] */

void FUN_105ccae50(long param_1)

{
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_destroyWeak(param_1 + 0x1b0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ccb09c; end: 105ccb1e7; -[SCMemoriesTabSessionLogger initWithUserTrackedLogger:galleryLogger:] */

undefined1 *
FUN_105ccb09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ecbf8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    _objc_release(uVar4);
    func_0x00010be93f80(puVar1);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ccb1e8; end: 105ccb20f; -[SCMemoriesTabSessionLogger getMemTabSessionIdObservable] */

void FUN_105ccb1e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ccb210; end: 105ccb31f; -[SCMemoriesTabSessionLogger startMemoriesTabSessionWithTabType:] */

void FUN_105ccb210(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x50));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105ccb284;
  puStack_40 = &UNK_110858dc0;
  lStack_38 = param_2;
  uStack_30 = param_1;
  uStack_28 = param_4;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 0x38),param_3,&puStack_58);
  return;
}



/* Entry: 105ccb320; end: 105ccb3bf; -[SCMemoriesTabSessionLogger endMemoriesTabSession] */

void FUN_105ccb320(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x50));
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105ccb38c;
  puStack_38 = &UNK_110848c48;
  lStack_30 = param_2;
  uStack_28 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 0x38),param_3,&puStack_50);
  return;
}



/* Entry: 105ccb3c0; end: 105ccb417; -[SCMemoriesTabSessionLogger _logGalleryTabSessionEnd] */

void FUN_105ccb3c0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105ccb418;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_38);
  return;
}



/* Entry: 105ccb418; end: 105ccb527;  */

void FUN_105ccb418(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c3b38;
  _objc_alloc_init(PTR_PTR_1126c3b38);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bafbe34(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2115c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c211500(puVar1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  func_0x00010c1c6480(puVar1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
  func_0x00010c222d20(puVar1,param_2,
                      (long)(*(double *)(*(long *)(param_1 + 0x20) + 0x10) -
                            *(double *)(*(long *)(param_1 + 0x20) + 8)));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bafbe34(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d50a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c211520(puVar1,param_2,(long)(*(double *)(*(long *)(param_1 + 0x20) + 8) * 1000.0));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ccb528; end: 105ccb57f; -[SCMemoriesTabSessionLogger _resetTabSession] */

void FUN_105ccb528(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105ccb580;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_38);
  return;
}



/* Entry: 105ccb580; end: 105ccb5e7;  */

void FUN_105ccb580(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) =
       *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be079b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__emitCurrentMemTabSessionId_11255f808);
  return;
}



/* Entry: 105ccb5e8; end: 105ccb5f7; -[SCMemoriesTabSessionLogger _emitCurrentMemTabSessionId] */

void FUN_105ccb5e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_next__112614028,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105ccb5f8; end: 105ccb663; -[SCMemoriesTabSessionLogger .cxx_destruct] */

void FUN_105ccb5f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 105ccb664; end: 105ccb6ff; -[SCFaceClusterOperaActionHandler initWithOperaLauncher:presentingViewController:] */

undefined1 *
FUN_105ccb664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ecc00;
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



/* Entry: 105ccb700; end: 105ccb703; -[SCFaceClusterOperaActionHandler onBackPressed] */

void FUN_105ccb700(void)

{
  return;
}



/* Entry: 105ccb704; end: 105ccb96b; -[SCFaceClusterOperaActionHandler onItemsSelectionChangedWithItems:] */

void FUN_105ccb704(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        lVar6 = *(long *)(lStack_128 + lVar8 * 8);
        lVar3 = lVar6;
        func_0x00010c0c9920();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar3);
        if (lVar4 != 0) {
          func_0x00010c0c9920(lVar6);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar6;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(lVar3);
          _objc_release(lVar6);
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar5 = puVar1;
  func_0x00010bf51e00();
  _objc_initWeak(auStack_138,param_1);
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_105ccb96c;
  puStack_150 = &UNK_110841fb0;
  _objc_copyWeak(auStack_140,auStack_138);
  _objc_retain(puVar5);
  puStack_148 = puVar5;
  func_0x0001000d76cc("APPSTORE",&puStack_168);
  _objc_release(puStack_148);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    func_0x00010c166f60(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ccb96c; end: 105ccb9a7;  */

void FUN_105ccb96c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c166f60(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ccb9a8; end: 105ccbab7; -[SCFaceClusterOperaActionHandler onItemClickedWithItem:thumbnailCell:] */

void FUN_105ccb9a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0c9920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_38,param_1);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105ccbab8;
      puStack_50 = &UNK_110841fb0;
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(lVar1);
      lStack_48 = lVar1;
      func_0x0001000d76cc("APPSTORE",&puStack_68);
      _objc_release(lStack_48);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ccbab8; end: 105ccbd37;  */

undefined * FUN_105ccbab8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  if (puVar2 == (undefined *)0x0) goto LAB_105ccbcf8;
  puVar3 = puVar2 + 0x10;
  _objc_loadWeakRetained();
  if (puVar3 != (undefined *)0x0) {
    _objc_retain(puVar3);
    puVar4 = puVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = puVar3;
    puVar5 = PTR_DAT_1126a4e58;
    while (PTR_DAT_1126a4e58 = puVar5, puVar4 != (undefined *)0x0) {
      puVar5 = puVar1;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar4 = puVar5;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar1 = puVar5;
      puVar5 = PTR_DAT_1126a4e58;
    }
    _objc_retain(puVar1);
    puVar4 = puVar1;
    func_0x00010010fab4(puVar1,puVar5);
    puVar5 = puVar1;
    if ((int)puVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar1);
    puVar4 = PTR_DAT_1126a4e58;
    puVar6 = puVar1;
    if (puVar5 == (undefined *)0x0) {
      _objc_retain(puVar3);
      puVar6 = puVar3;
      func_0x00010010fab4(puVar3,puVar4);
      puVar5 = puVar3;
      if ((int)puVar6 == 0) {
        puVar5 = (undefined *)0x0;
      }
      _objc_retain(puVar5);
      _objc_release(puVar3);
      puVar6 = puVar3;
      if (puVar5 != (undefined *)0x0) goto LAB_105ccbbe4;
    }
    else {
LAB_105ccbbe4:
      puVar5 = puVar2;
      func_0x00010bf00900();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010bf529e0();
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
LAB_105ccbc64:
        puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(uVar7);
      }
      else {
        puVar4 = puVar5;
        func_0x00010bfecde0();
        _objc_release(uVar7);
        puVar8 = puVar5;
        if (puVar4 == (undefined *)0x7fffffffffffffff) {
          uVar7 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105ccbc64;
        }
      }
      uVar7 = *(undefined8 *)(puVar2 + 8);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08ba40();
      _objc_release(uVar7);
      _objc_release(puVar8);
      _objc_release(puVar6);
    }
    _objc_release(puVar1);
  }
  _objc_release(puVar3);
LAB_105ccbcf8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar2;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar2 + 0x18);
}



/* Entry: 105ccbd38; end: 105ccbd3f; -[SCFaceClusterOperaActionHandler allSnapIds] */

undefined8 FUN_105ccbd38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105ccbd40; end: 105ccbd47; -[SCFaceClusterOperaActionHandler setAllSnapIds:] */

void FUN_105ccbd40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105ccbd48; end: 105ccbd7f; -[SCFaceClusterOperaActionHandler .cxx_destruct] */

void FUN_105ccbd48(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ccbd80; end: 105ccbe37; -[SCFaceClusterSnapStoreImpl initWithMergedDataSource:asyncReadsEnabled:] */

undefined1 *
FUN_105ccbd80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ecc08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ccbe38; end: 105ccbf6b; -[SCFaceClusterSnapStoreImpl getSnapsByMediaIdsWithMediaIds:] */

void FUN_105ccbe38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010be65c00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_105ccbf6c;
    uStack_40 = 0x105ccbf7c;
    uStack_38 = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar1);
    param_1 = puStack_58[5];
    func_0x00010c272120(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105ccbf6c; end: 105ccbf83;  */

void FUN_105ccbf6c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105ccbf84; end: 105ccbfc7;  */

void FUN_105ccbf84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be5c3e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ccbfc8; end: 105ccc15f; -[SCFaceClusterSnapStoreImpl getVisibleSnapIdsByMediaIdsWithMediaIds:] */

void FUN_105ccbfc8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010beea160();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_1);
        }
        lVar3 = *(long *)(lStack_118 + lVar8 * 8);
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010befa120(puVar1);
        }
        _objc_release(lVar3);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126ae6b8;
  puVar6 = puVar1;
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar1);
  lVar2 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_105ccc160;
    puStack_150 = puVar4;
    puStack_148 = puVar5;
    puStack_140 = puVar1;
    lStack_138 = param_1;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    _objc_initWeak(auStack_158,lVar2);
    puVar1 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_160,auStack_158);
    _objc_retain(puVar6);
    func_0x00010bf54280(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(auStack_158);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105ccc160; end: 105ccc263; -[SCFaceClusterSnapStoreImpl _observeAsyncForMediaIds:] */

void FUN_105ccc160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ccc264; end: 105ccc44f;  */

void FUN_105ccc264(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010bf436e0(param_2);
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    _objc_retain(uVar4);
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x2020000000;
    uStack_68 = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    _objc_retain(param_2);
    _objc_retain(puVar2);
    func_0x00010c0f7fc0(uVar4);
    puVar3 = PTR_PTR_1126b0418;
    _objc_retain(uVar4);
    _objc_retain(puVar2);
    func_0x00010bf54280(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(param_2);
    _objc_release(uVar5);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105ccc450; end: 105ccc477;  */

void FUN_105ccc450(long param_1)

{
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec1ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__startStreamForMediaIds_intoObse_11258e058,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 105ccc478; end: 105ccc4fb;  */

void FUN_105ccc478(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105ccc4fc;
  puStack_30 = &UNK_110842e18;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_28 = uVar2;
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  return;
}



/* Entry: 105ccc4fc; end: 105ccc503;  */

void FUN_105ccc4fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 105ccc504; end: 105ccc74b; -[SCFaceClusterSnapStoreImpl _startStreamForMediaIds:intoObserver:requeryLifecycle:] */

void FUN_105ccc504(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_68 = 0;
  lVar2 = param_1;
  func_0x00010be854a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_68;
  _objc_retain(uStack_68);
  func_0x00010c0d9840(param_4);
  _objc_release(lVar2);
  _objc_initWeak(auStack_70,param_1);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105ccbf6c;
  uStack_80 = 0x105ccbf7c;
  _objc_retain(uVar1);
  uStack_78 = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0960();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c26d5a0(0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_70);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ccc74c; end: 105ccc813;  */

void FUN_105ccc74c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uStack_48;
  
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uStack_48 = 0;
    lVar3 = lVar2;
    func_0x00010be854a0(lVar2,param_2,*(undefined8 *)(param_1 + 0x20),&uStack_48);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uStack_48;
    _objc_retain(uStack_48);
    uVar4 = uVar1;
    func_0x00010c071b60(uVar1,param_2,
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
    if ((uVar4 & 1) == 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      _objc_retain(uVar1);
      uVar5 = *(undefined8 *)(lVar6 + 0x28);
      *(ulong *)(lVar6 + 0x28) = uVar1;
      _objc_release(uVar5);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,lVar3);
    }
    _objc_release(lVar3);
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 105ccc814; end: 105ccca93; -[SCFaceClusterSnapStoreImpl _makeStreamForMediaIds:] */

void FUN_105ccc814(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uStack_68 = 0;
  lVar2 = param_1;
  func_0x00010be854a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_68;
  _objc_retain(uStack_68);
  puVar3 = PTR_PTR_1126ae820;
  _objc_alloc(PTR_PTR_1126ae820);
  func_0x00010c060400();
  _objc_initWeak(auStack_70,param_1);
  _objc_initWeak(auStack_78,puVar3);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_105ccbf6c;
  uStack_88 = 0x105ccbf7c;
  _objc_retain(uVar1);
  uStack_80 = uVar1;
  puVar4 = PTR_PTR_1126ae810;
  _objc_alloc_init(PTR_PTR_1126ae810);
  _objc_setAssociatedObject(puVar3,0x1136c2230,puVar4,1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0e0960();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c26d5a0(0x3fd3333333333333);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b8,auStack_70);
  _objc_copyWeak(auStack_b0,auStack_78);
  _objc_retain(param_3);
  uVar8 = uVar7;
  func_0x00010c25ff60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105ccca94; end: 105cccb73;  */

void FUN_105ccca94(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uStack_48;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((lVar2 != 0) && (lVar3 != 0)) {
    uStack_48 = 0;
    lVar4 = lVar2;
    func_0x00010be854a0(lVar2,param_2,*(undefined8 *)(param_1 + 0x20),&uStack_48);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uStack_48;
    _objc_retain(uStack_48);
    uVar5 = uVar1;
    func_0x00010c071b60(uVar1,param_2,
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
    if ((uVar5 & 1) == 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      _objc_retain(uVar1);
      uVar6 = *(undefined8 *)(lVar7 + 0x28);
      *(ulong *)(lVar7 + 0x28) = uVar1;
      _objc_release(uVar6);
      func_0x00010c0d9840(lVar3,param_2,lVar4);
    }
    _objc_release(lVar4);
    _objc_release(uVar1);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 105cccb74; end: 105cccbfb;  */

void FUN_105cccb74(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  _objc_copyWeak(param_1 + 0x30,param_2 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x38,param_2 + 0x38);
  return;
}



/* Entry: 105cccbfc; end: 105cccf5b; -[SCFaceClusterSnapStoreImpl _querySnapsForMediaIds:signature:] */

undefined *
FUN_105cccbfc(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *unaff_x24;
  long lVar16;
  undefined *unaff_x26;
  long lVar17;
  undefined *puVar18;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 auStack_308 [16];
  long lStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined8 *puStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  long lStack_230;
  undefined *puStack_228;
  undefined8 *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_178;
  undefined8 auStack_170 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_178 = (undefined *)0x0;
  puVar1 = param_1;
  puStack_220 = param_4;
  func_0x00010beea160();
  _objc_retainAutoreleasedReturnValue();
  puStack_208 = puStack_178;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(puVar1);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  _objc_retain(puVar1);
  puVar9 = puVar1;
  func_0x00010bf52a60();
  if (puVar9 != (undefined *)0x0) {
    lVar14 = *plStack_1b0;
    do {
      unaff_x26 = (undefined *)0x0;
      do {
        if (*plStack_1b0 != lVar14) {
          _objc_enumerationMutation(puVar1);
        }
        lVar3 = *(long *)(lStack_1b8 + (long)unaff_x26 * 8);
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010befa120(puVar2);
        }
        _objc_release(lVar3);
        unaff_x26 = unaff_x26 + 1;
      } while (puVar9 != unaff_x26);
      puVar9 = puVar1;
      func_0x00010bf52a60();
      unaff_x24 = (undefined *)0x0;
    } while (puVar9 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  puVar4 = param_1;
  func_0x00010be0e720();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_218 = puVar4;
  func_0x00010bf529e0(puVar1);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_210 = puVar9;
  func_0x00010bf529e0(puVar1);
  puVar9 = puVar4;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  _objc_retain(puVar1);
  puVar8 = &uStack_200;
  puVar13 = auStack_170;
  puVar5 = puVar1;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar14 = *plStack_1f0;
    do {
      unaff_x24 = (undefined *)0x0;
      do {
        if (*plStack_1f0 != lVar14) {
          _objc_enumerationMutation(puVar1);
        }
        lVar17 = *(long *)(lStack_1f8 + (long)unaff_x24 * 8);
        lVar3 = lVar17;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          puVar15 = puStack_208;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar15 != (undefined *)0x0) {
            puVar4 = puStack_218;
            func_0x00010bf4b900();
            puVar18 = puVar15;
            FUN_105f6127c(puVar15,lVar17,puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puStack_210);
            _objc_release(puVar18);
            param_1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            lStack_230 = lVar3;
            puStack_228 = puVar4;
            func_0x00010c14de00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar9);
            _objc_release(param_1);
            _objc_release(puVar15);
            puVar4 = puVar15;
          }
        }
        _objc_release(lVar3);
        unaff_x24 = unaff_x24 + 1;
      } while (puVar5 != unaff_x24);
      puVar8 = &uStack_200;
      puVar13 = auStack_170;
      puVar5 = puVar1;
      func_0x00010bf52a60();
      unaff_x26 = (undefined *)0x0;
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  puVar6 = puStack_220;
  if (puStack_220 != (undefined8 *)0x0) {
    puVar5 = puVar9;
    func_0x00010bf51e00();
    _objc_autorelease();
    *puVar6 = puVar5;
  }
  _objc_release(puVar9);
  _objc_release(puStack_218);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar15 = puStack_208;
  _objc_release();
  puVar5 = puStack_210;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar12 = &uStack_350;
    puStack_248 = puVar6;
    pcStack_238 = FUN_105cccf5c;
    lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar11 = puVar8;
    puStack_280 = unaff_x26;
    puStack_278 = puVar9;
    puStack_270 = unaff_x24;
    puStack_268 = param_1;
    puStack_260 = puVar2;
    puStack_258 = puVar1;
    puStack_250 = puVar4;
    puStack_240 = &stack0xfffffffffffffff0;
    _objc_retain(puVar8);
    puVar6 = puVar8;
    func_0x00010bf529e0();
    if (puVar6 == (undefined8 *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      plStack_340 = (long *)0x0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      lVar3 = *(long *)(puVar15 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar3;
      func_0x00010bfa6ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      puVar13 = auStack_308;
      lVar3 = lVar14;
      func_0x00010bf52a60();
      if (lVar3 != 0) {
        lVar17 = *plStack_340;
        do {
          lVar16 = 0;
          do {
            if (*plStack_340 != lVar17) {
              _objc_enumerationMutation(lVar14);
            }
            lVar7 = *(long *)(lStack_348 + lVar16 * 8);
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            if (lVar7 != 0) {
              func_0x00010befa120(puVar2);
            }
            _objc_release(lVar7);
            lVar16 = lVar16 + 1;
          } while (lVar3 != lVar16);
          puVar13 = auStack_308;
          lVar3 = lVar14;
          puVar12 = &uStack_350;
          func_0x00010bf52a60();
        } while (lVar3 != 0);
      }
      _objc_release(lVar14);
      puVar5 = puVar2;
      func_0x00010bf51e00();
      _objc_release(puVar2);
      puVar11 = puVar12;
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
      ___stack_chk_fail();
      lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(puVar11);
      puVar9 = (undefined *)puVar8[1];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar9;
      func_0x00010bfa7560();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR____NSArray0__struct_11034ab48;
      if (puVar1 != (undefined *)0x0) {
        puVar2 = puVar1;
      }
      _objc_retain(puVar2);
      _objc_release(puVar1);
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf529e0(puVar2);
      func_0x00010bf0a0e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar9;
      func_0x00010bfa4a00();
      _objc_retainAutoreleasedReturnValue();
      if (puVar13 != (undefined8 *)0x0) {
        _objc_retainAutorelease(puVar1);
        *puVar13 = puVar1;
      }
      _objc_retain(puVar2);
      puVar4 = puVar2;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (puVar4 != (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(puVar2);
          }
          lVar17 = *(long *)((long)puVar15 * 8);
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          if (lVar17 == 0) {
            puVar18 = (undefined *)0x0;
          }
          else {
            puVar18 = puVar1;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if ((puVar18 != (undefined *)0x0) &&
               (puVar10 = puVar18, func_0x00010c07b240(), ((ulong)puVar10 & 1) == 0)) {
              func_0x00010befa120(puVar5);
            }
          }
          _objc_release(puVar18);
          _objc_release(lVar17);
          puVar15 = puVar15 + 1;
        } while (puVar4 != puVar15);
        puVar4 = puVar2;
        func_0x00010bf52a60();
      }
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(puVar2);
      _objc_release(puVar9);
      _objc_release(puVar11);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
        ___stack_chk_fail();
        return (undefined *)0x1;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 105cccf5c; end: 105ccd10b; -[SCFaceClusterSnapStoreImpl _favoritedSnapIdsAmongSnapIds:] */

undefined * FUN_105cccf5c(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [128];
  long lStack_190;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 auStack_d8 [16];
  long lStack_58;
  
  puVar11 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 == (undefined1 *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
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
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar3;
    func_0x00010bfa6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    param_4 = auStack_d8;
    lVar3 = lVar16;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar13 = *plStack_110;
      do {
        lVar14 = 0;
        do {
          if (*plStack_110 != lVar13) {
            _objc_enumerationMutation(lVar16);
          }
          lVar4 = *(long *)(lStack_118 + lVar14 * 8);
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          if (lVar4 != 0) {
            func_0x00010befa120(puVar2,param_2,lVar4);
          }
          _objc_release(lVar4);
          lVar14 = lVar14 + 1;
        } while (lVar3 != lVar14);
        param_4 = auStack_d8;
        lVar3 = lVar16;
        puVar11 = &uStack_120;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar16);
    puVar5 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
    puVar10 = (undefined1 *)puVar11;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar10);
    puVar6 = *(undefined **)(param_3 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010bfa7560();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR____NSArray0__struct_11034ab48;
    if (puVar5 != (undefined *)0x0) {
      puVar2 = puVar5;
    }
    _objc_retain(puVar2);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar7 = puVar2;
    func_0x00010bf529e0(puVar2);
    func_0x00010bf0a0e0(puVar5,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfa4a00(puVar6,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    if (param_4 != (undefined8 *)0x0) {
      _objc_retainAutorelease(puVar7);
      *param_4 = puVar7;
    }
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    _objc_retain(puVar2);
    puVar8 = puVar2;
    func_0x00010bf52a60(puVar2,param_2,&uStack_250,auStack_210,0x10);
    if (puVar8 != (undefined *)0x0) {
      lVar16 = *plStack_240;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_240 != lVar16) {
            _objc_enumerationMutation(puVar2);
          }
          lVar13 = *(long *)(lStack_248 + (long)puVar12 * 8);
          lVar3 = lVar13;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 == 0) {
            puVar15 = (undefined *)0x0;
          }
          else {
            puVar15 = puVar7;
            func_0x00010c0e00e0(puVar7,param_2,lVar3);
            _objc_retainAutoreleasedReturnValue();
            if ((puVar15 != (undefined *)0x0) &&
               (puVar9 = puVar15, func_0x00010c07b240(), ((ulong)puVar9 & 1) == 0)) {
              func_0x00010befa120(puVar5,param_2,lVar13);
            }
          }
          _objc_release(puVar15);
          _objc_release(lVar3);
          puVar12 = puVar12 + 1;
        } while (puVar8 != puVar12);
        puVar8 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_250,auStack_210,0x10);
      } while (puVar8 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_190) {
      ___stack_chk_fail();
      return (undefined *)0x1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 105ccd10c; end: 105ccd33b; -[SCFaceClusterSnapStoreImpl _visibleGallerySnapsForSnapIds:entriesBySnapId:] */

undefined * FUN_105ccd10c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = *(undefined **)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfa7560();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar4 = puVar1;
  func_0x00010bf529e0(puVar1);
  func_0x00010bf0a0e0(puVar3,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bfa4a00(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != (undefined8 *)0x0) {
    _objc_retainAutorelease(puVar4);
    *param_4 = puVar4;
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar1);
  puVar5 = puVar1;
  func_0x00010bf52a60(puVar1,param_2,&uStack_130,auStack_f0,0x10);
  if (puVar5 != (undefined *)0x0) {
    lVar11 = *plStack_120;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(puVar1);
        }
        lVar9 = *(long *)(lStack_128 + (long)puVar8 * 8);
        lVar6 = lVar9;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 == 0) {
          puVar10 = (undefined *)0x0;
        }
        else {
          puVar10 = puVar4;
          func_0x00010c0e00e0(puVar4,param_2,lVar6);
          _objc_retainAutoreleasedReturnValue();
          if ((puVar10 != (undefined *)0x0) &&
             (puVar7 = puVar10, func_0x00010c07b240(), ((ulong)puVar7 & 1) == 0)) {
            func_0x00010befa120(puVar3,param_2,lVar9);
          }
        }
        _objc_release(puVar10);
        _objc_release(lVar6);
        puVar8 = puVar8 + 1;
      } while (puVar5 != puVar8);
      puVar5 = puVar1;
      func_0x00010bf52a60(puVar1,param_2,&uStack_130,auStack_f0,0x10);
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 105ccd33c; end: 105ccd343; -[SCFaceClusterSnapStoreImpl shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105ccd33c(void)

{
  return 1;
}



/* Entry: 105ccd344; end: 105ccd34f; -[SCFaceClusterSnapStoreImpl pushToValdiMarshaller:] */

undefined8 FUN_105ccd344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af97398(param_3,param_1);
  func_0x00010af97388();
  func_0x00010af97324();
  func_0x00010af9734c();
  return param_3;
}



/* Entry: 105ccd350; end: 105ccd37f; -[SCFaceClusterSnapStoreImpl .cxx_destruct] */

void FUN_105ccd350(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ccd380; end: 105ccd787; -[SCMemoriesSearchPreTypeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ccd380(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  undefined8 uStack_f0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  
  puVar1 = PTR_PTR_1126c3b40;
  _objc_alloc();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112733dec;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar14;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_112733df0;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar15;
  func_0x00010c0c89c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  FUN_105ccd788();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_105ccd788();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    lVar16 = 0;
  }
  else {
    uStack_88 = param_1 + _DAT_112733df4;
    _objc_loadWeakRetained();
    uStack_98 = *(undefined8 *)(param_1 + _DAT_112733e1c);
    _objc_retain();
    uStack_b0 = param_1 + _DAT_112733df8;
    _objc_loadWeakRetained();
    uStack_a0 = param_1 + _DAT_112733dfc;
    _objc_loadWeakRetained();
    uStack_a8 = param_1 + _DAT_112733e00;
    _objc_loadWeakRetained();
    lVar16 = param_1 + _DAT_112733e04;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar16;
  func_0x00010bf13bc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar19 = 0;
    uStack_f0 = 0;
    lVar17 = 0;
  }
  else {
    uStack_f0 = param_1 + _DAT_112733e08;
    _objc_loadWeakRetained();
    lVar19 = param_1 + _DAT_112733e0c;
    _objc_loadWeakRetained();
    lVar17 = param_1 + _DAT_112733e10;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar17;
  func_0x00010bf9f1e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uVar21 = 0;
    uVar9 = 0;
    uVar10 = 0;
    lVar18 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + _DAT_112733e24);
    _objc_retain();
    uVar10 = *(undefined8 *)(param_1 + _DAT_112733e2c);
    _objc_retain();
    uVar21 = *(undefined8 *)(param_1 + _DAT_112733e28);
    _objc_retain(uVar21);
    lVar18 = param_1 + _DAT_112733e14;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar18;
  func_0x00010c0c97a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c0c97e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_112733e18;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar20;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ff60(puVar1,param_2,lVar2,lVar3,lVar5,lVar6,uStack_88,uStack_98,uStack_b0,uStack_a0
                      ,uStack_a8,lVar7,uStack_f0,lVar19,lVar8,uVar9,uVar10,uVar21,lVar12,lVar13);
  _objc_release(uVar21);
  _objc_release(lVar13);
  _objc_release(lVar20);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar18);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar17);
  _objc_release(lVar19);
  _objc_release(uStack_f0);
  _objc_release(lVar7);
  _objc_release(lVar16);
  _objc_release(uStack_a8);
  _objc_release(uStack_a0);
  _objc_release(uStack_b0);
  _objc_release(uStack_98);
  _objc_release(uStack_88);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar15);
  _objc_release(lVar2);
  _objc_release(lVar14);
  FUN_105ccd788(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c153e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar14);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ccd788; end: 105ccd7ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ccd788(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112733de4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ccd7ac; end: 105ccd8e3; -[SCMemoriesSearchPreTypeEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ccd7ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112733e20);
  }
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112733e20);
    }
    func_0x00010c12e1c0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_112733e1c);
  }
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112733e1c);
    }
    func_0x00010c12e1c0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + _DAT_112733e28);
  }
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112733e28);
    }
    func_0x00010c12e1c0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puStack_38 = PTR_PTR_1126ecc10;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ccd8e4; end: 105ccd9fb; -[SCMemoriesSearchPreTypeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ccd8e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112733e2c,0);
  _objc_storeStrong(param_1 + _DAT_112733e28,0);
  _objc_storeStrong(param_1 + _DAT_112733e24,0);
  _objc_storeStrong(param_1 + _DAT_112733e20,0);
  _objc_storeStrong(param_1 + _DAT_112733e1c,0);
  _objc_destroyWeak(param_1 + _DAT_112733e18);
  _objc_destroyWeak(param_1 + _DAT_112733e14);
  _objc_destroyWeak(param_1 + _DAT_112733e10);
  _objc_destroyWeak(param_1 + _DAT_112733e0c);
  _objc_destroyWeak(param_1 + _DAT_112733e08);
  _objc_destroyWeak(param_1 + _DAT_112733e04);
  _objc_destroyWeak(param_1 + _DAT_112733e00);
  _objc_destroyWeak(param_1 + _DAT_112733dfc);
  _objc_destroyWeak(param_1 + _DAT_112733df8);
  _objc_destroyWeak(param_1 + _DAT_112733df4);
  _objc_destroyWeak(param_1 + _DAT_112733df0);
  _objc_destroyWeak(param_1 + _DAT_112733dec);
  _objc_destroyWeak(param_1 + _DAT_112733de8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112733de4);
  return;
}



/* Entry: 105ccd9fc; end: 105ccde3b; -[SCMemoriesSearchPreTypeViewController initWithValdiRuntimeProvider:memoriesFeatureProviderFactory:uiContainer:memoriesSearchPreTypeScope:deckServices:webBrowsingScopeExposer:memoriesOperaLaunchServices:memoriesValdiDataServices:composerCoreUIServices:backfillSnapCountProvider:memoriesValdiBackupServices:mergedDataSourceServices:faceTaggingItemActionHandler:memoriesQuickCutScopeExposer:memoriesPreviewEditScopeExposer:myEyesOnlySetupFlowExposer:memoriesSendViewPresenter:memoriesExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105ccd9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain();
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
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_1126ecc18;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar6 = (long)_DAT_112733e30;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0c89e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112733e34);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112733e34) = uVar5;
    _objc_release(uVar4);
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112733e38;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112733e3c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112733e40;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112733e44;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_8;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112733e48;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_9;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112733e4c;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_10;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112733e50;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_11;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112733e54;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_12;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112733e58;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_13;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112733e5c;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_14;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112733e60;
    _objc_retain(param_20);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_20;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c39c8;
    uVar2 = param_14;
    func_0x00010c0cadc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd3300();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112733e64);
    *(undefined **)((long)puVar1 + (long)_DAT_112733e64) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  _objc_release(param_20);
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



/* Entry: 105ccde3c; end: 105ccde77; -[SCMemoriesSearchPreTypeViewController loadView] */

void FUN_105ccde3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bdf00c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222380(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ccde78; end: 105ccdeab; -[SCMemoriesSearchPreTypeViewController viewDidLoad] */

void FUN_105ccde78(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ecc18;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewDidLoad_112684cd8);
  return;
}



/* Entry: 105ccdeac; end: 105ccdeff; -[SCMemoriesSearchPreTypeViewController viewWillAppear:] */

void FUN_105ccdeac(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ecc18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010b817710(param_1);
  func_0x000108df58d4();
  return;
}



/* Entry: 105ccdf00; end: 105ccdf33; -[SCMemoriesSearchPreTypeViewController viewDidAppear:] */

void FUN_105ccdf00(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ecc18;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewDidAppear__112684bd0);
  return;
}



/* Entry: 105ccdf34; end: 105ccdfdf; -[SCMemoriesSearchPreTypeViewController viewDidDisappear:] */

void FUN_105ccdf34(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ecc18;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidDisappear__112684c48);
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
      func_0x00010bf84b00(param_1);
    }
  }
  return;
}



/* Entry: 105ccdfe0; end: 105ccdfe7; -[SCMemoriesSearchPreTypeViewController shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105ccdfe0(void)

{
  return 0;
}



/* Entry: 105ccdfe8; end: 105cce687; -[SCMemoriesSearchPreTypeViewController _createMemoriesSearchPreTypeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ccdfe8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126c3b48;
  _objc_alloc_init(PTR_PTR_1126c3b48);
  func_0x00010c1c5f40();
  _objc_initWeak(auStack_80,param_1);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105cce688;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c1a5200(puVar1);
  lVar9 = (long)_DAT_112733e3c;
  uVar11 = *(undefined8 *)(param_1 + lVar9);
  _objc_retain(uVar11);
  puStack_d8 = puVar5;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_105cce6b4;
  puStack_c0 = &UNK_110841fb0;
  _objc_retain(uVar11);
  uStack_b8 = uVar11;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010c18f5a0(puVar1);
  lVar12 = (long)_DAT_112733e40;
  lVar2 = *(long *)(param_1 + lVar12);
  if (lVar2 != 0) {
    func_0x00010bf66980();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar2;
    func_0x00010bf66920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar13);
    _objc_release(lVar2);
    if (lVar3 != 0) {
      lVar4 = *(long *)(param_1 + lVar12);
      func_0x00010bf66980();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010bf66920();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar13;
      func_0x00010bf55bc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar13);
      _objc_release(lVar2);
      _objc_release(lVar4);
      if (lVar3 != 0) {
        if (*(long *)(param_1 + _DAT_112733e30) != 0) {
          lVar2 = lVar3;
          func_0x00010bf553a0(lVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar2;
          func_0x00010bf668c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c18a1e0(puVar1);
          _objc_release(lVar13);
          _objc_release(lVar2);
        }
      }
      _objc_release(lVar3);
    }
  }
  lVar2 = (long)_DAT_112733e44;
  if (*(long *)(param_1 + lVar2) != 0) {
    puVar5 = PTR_PTR_1126ae630;
    func_0x00010bfe6000(PTR_PTR_1126ae630);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2b9b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126afe88;
    _objc_alloc(PTR_PTR_1126afe88);
    lVar12 = *(long *)(param_1 + lVar12);
    if (lVar12 == 0) {
      lVar13 = 0;
    }
    else {
      lVar2 = lVar12;
      func_0x00010bf66980(lVar12);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar2;
      func_0x00010bf44a60();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c062da0(puVar5);
    if (lVar12 != 0) {
      _objc_release(lVar13);
      _objc_release(lVar2);
    }
    func_0x00010c224e20(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
  lVar2 = (long)_DAT_112733e48;
  if (*(long *)(param_1 + lVar2) != 0) {
    puVar5 = PTR_PTR_1126c3b50;
    _objc_alloc();
    uVar7 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c0c90a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c031d80();
    uVar10 = *(undefined8 *)(param_1 + _DAT_112733e68);
    *(undefined **)(param_1 + _DAT_112733e68) = puVar5;
    _objc_release(uVar10);
    _objc_release(uVar7);
    func_0x00010c1c61e0(puVar1);
  }
  puVar5 = PTR_PTR_1126c3b58;
  _objc_alloc(PTR_PTR_1126c3b58);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112733e5c);
  func_0x00010c0cadc0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + _DAT_112733e60);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c072840();
  func_0x00010c02b1e0(puVar5);
  func_0x00010c199a60(puVar1);
  _objc_release(puVar5);
  _objc_release(uVar10);
  _objc_release(uVar7);
  func_0x00010c16e340(puVar1);
  func_0x00010c199ba0(puVar1);
  lVar2 = (long)_DAT_112733e50;
  if (*(long *)(param_1 + lVar2) != 0) {
    _objc_initWeak(auStack_e0,param_1);
    uVar8 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010beef000(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_e8,auStack_e0);
    uVar10 = uVar7;
    func_0x00010c0b7640(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161e00(puVar1);
    _objc_release(uVar10);
    _objc_release(uVar7);
    _objc_release(uVar8);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_e0);
  }
  if (*(long *)(param_1 + _DAT_112733e58) != 0) {
    puVar5 = PTR_PTR_1126c3b60;
    _objc_alloc(PTR_PTR_1126c3b60);
    func_0x00010bff6720();
    func_0x00010c16e360(puVar1);
    _objc_release(puVar5);
  }
  uVar7 = *(undefined8 *)(param_1 + lVar9);
  func_0x00010c0c7580(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5900(puVar1);
  _objc_release(uVar7);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf11b20(*(undefined8 *)(param_1 + lVar9));
  func_0x00010c0df6e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16cee0(puVar1);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126c3b68;
  _objc_alloc(PTR_PTR_1126c3b68);
  uVar10 = *(undefined8 *)(param_1 + _DAT_112733e30);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar10;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar10);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uVar11);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105cce688; end: 105cce6b3;  */

void FUN_105cce688(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cce6b4; end: 105cce757;  */

void FUN_105cce6b4(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105cce758;
  puStack_38 = &UNK_110841fb0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_30 = uVar1;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_28);
  _objc_release(uStack_30);
  return;
}



/* Entry: 105cce758; end: 105cce7ff;  */

void FUN_105cce758(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf83c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94800();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    param_1 = *(long *)(param_1 + 0x20);
    func_0x00010bf83c40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cce800; end: 105cce817;  */

void FUN_105cce800(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cce818; end: 105cce8cf; -[SCMemoriesSearchPreTypeViewController _handleExitPreTypeScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cce818(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112733e3c);
  _objc_retain(uVar2);
  uVar1 = uVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105cce8d0;
  puStack_38 = &UNK_110841f80;
  uStack_30 = uVar1;
  uStack_28 = uVar2;
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 105cce8d0; end: 105cce8db;  */

void FUN_105cce8d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e52d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onMemoriesSearchPreTypeDidDismis_112616ec8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105cce8dc; end: 105cce8e3; -[SCMemoriesSearchPreTypeViewController pageViewName] */

undefined8 FUN_105cce8dc(void)

{
  return 0x6c;
}



/* Entry: 105cce8e4; end: 105cce9f3; -[SCMemoriesSearchPreTypeViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cce8e4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112733e60,0);
  _objc_storeStrong(param_1 + _DAT_112733e64,0);
  _objc_storeStrong(param_1 + _DAT_112733e58,0);
  _objc_storeStrong(param_1 + _DAT_112733e54,0);
  _objc_storeStrong(param_1 + _DAT_112733e50,0);
  _objc_storeStrong(param_1 + _DAT_112733e5c,0);
  _objc_storeStrong(param_1 + _DAT_112733e68,0);
  _objc_storeStrong(param_1 + _DAT_112733e4c,0);
  _objc_storeStrong(param_1 + _DAT_112733e48,0);
  _objc_storeStrong(param_1 + _DAT_112733e44,0);
  _objc_storeStrong(param_1 + _DAT_112733e40,0);
  _objc_storeStrong(param_1 + _DAT_112733e3c,0);
  _objc_storeStrong(param_1 + _DAT_112733e38,0);
  _objc_storeStrong(param_1 + _DAT_112733e34,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112733e30,0);
  return;
}



/* Entry: 105cce9f4; end: 105ccea67; -[SCMemoriesComposerServices initWithMemoriesFeatureProviderFactory:] */

undefined1 * FUN_105cce9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ecc20;
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



/* Entry: 105ccea68; end: 105ccea6f; -[SCMemoriesComposerServices memoriesFeatureProviderFactory] */

undefined8 FUN_105ccea68(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105ccea70; end: 105ccea7b; -[SCMemoriesComposerServices .cxx_destruct] */

void FUN_105ccea70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ccea7c; end: 105cceb63; -[SCMemoriesContentUnderstandingDetailsDataCoordinator initWithGalleryEntries:memoriesMergedDataSource:performer:] */

undefined1 *
FUN_105ccea7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ecc28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c3b70;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
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



/* Entry: 105cceb64; end: 105ccebbb; -[SCMemoriesContentUnderstandingDetailsDataCoordinator reannounceDataSourceChange] */

void FUN_105cceb64(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105ccebbc;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  return;
}



/* Entry: 105ccebbc; end: 105ccebc7;  */

void FUN_105ccebbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdeca70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__createDataModelsAndAnnounceChan_112558c38,
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  return;
}



/* Entry: 105ccebc8; end: 105ccebef; -[SCMemoriesContentUnderstandingDetailsDataCoordinator addListener:] */

void FUN_105ccebc8(long param_1)

{
  func_0x00010bef9980(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c121e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reannounceDataSourceChange_1126261a0);
  return;
}



/* Entry: 105ccebf0; end: 105ccebf7; -[SCMemoriesContentUnderstandingDetailsDataCoordinator removeListener:] */

void FUN_105ccebf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105ccebf8; end: 105cceebb; -[SCMemoriesContentUnderstandingDetailsDataCoordinator _createDataModelsAndAnnounceChange:] */

void FUN_105ccebf8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar7;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  puVar10 = PTR____NSArray0__struct_11034ab48;
  lVar1 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
      _objc_release(param_3);
      puVar10 = puVar3;
      func_0x00010c0c9e60(*(undefined8 *)(param_1 + 8));
      _objc_release(puVar3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        return;
      }
      ___stack_chk_fail();
      _objc_retain(param_1);
      _objc_retain(puVar10);
      uVar9 = *(undefined8 *)(param_3 + 0x20);
      _objc_retain(puVar10);
      _objc_retain(param_1);
      func_0x00010c14cca0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdeca60(param_3);
      _objc_release(uVar9);
      _objc_release(puVar10);
      _objc_release(param_1);
      _objc_release(puVar10);
      _objc_release(param_1);
      return;
    }
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar14 = *(long *)(lVar12 * 8);
      puVar5 = *(undefined **)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfa7340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      lVar7 = lVar14;
      func_0x00010bfbdda0();
      iVar2 = (int)lVar7;
      func_0x00010b5fad2c();
      if (iVar2 == 0) {
        lVar7 = lVar14;
        func_0x00010bfbdda0();
        func_0x00010b5fa33c();
        if (lVar7 != 8) {
          puVar5 = puVar6;
          func_0x00010b5f8ce0();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105cced5c;
        }
      }
      else {
        puVar8 = puVar6;
        func_0x00010bf529e0();
        puVar5 = puVar10;
        if (puVar8 != (undefined *)0x0) {
          puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
        }
LAB_105cced5c:
        _objc_retain(puVar5);
        puVar8 = puVar5;
        func_0x00010bf52a60();
        lVar7 = lRam0000000000000000;
        while (puVar8 != (undefined *)0x0) {
          puVar13 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar7) {
              _objc_enumerationMutation(puVar5);
            }
            uVar9 = *(undefined8 *)((long)puVar13 * 8);
            func_0x000106d0e0f4(uVar9,lVar14,puVar10,0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar3);
            _objc_release(uVar9);
            puVar13 = puVar13 + 1;
          } while (puVar8 != puVar13);
          puVar8 = puVar5;
          func_0x00010bf52a60();
        }
        _objc_release(puVar5);
        _objc_release(puVar5);
      }
      _objc_release(puVar6);
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar4);
    lVar4 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105cceebc; end: 105ccf01b; -[SCMemoriesContentUnderstandingDetailsDataCoordinator filterWithStartDate:endDate:] */

void FUN_105cceebc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105ccef90;
  puStack_48 = &UNK_1108e4660;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c14cca0(uVar1,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdeca60(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ccf01c; end: 105ccf063; -[SCMemoriesContentUnderstandingDetailsDataCoordinator .cxx_destruct] */

void FUN_105ccf01c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ccf064; end: 105ccf0cf; -[SCMemoriesContentUnderstandingDetailsRouter initWithContainerViewController:] */

undefined1 * FUN_105ccf064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ecc30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ccf0d0; end: 105ccf1cb; -[SCMemoriesContentUnderstandingDetailsRouter presentSettingsViewController] */

void FUN_105ccf0d0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126c3b78;
    _objc_alloc();
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c00a2c0();
    _objc_release(lVar3);
    _objc_copyWeak(auStack_38,param_1 + 8);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105ccf1cc;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(puVar2);
    puStack_48 = puVar2;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_release(puStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 105ccf1cc; end: 105ccf28b;  */

void FUN_105ccf1cc(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc(PTR_PTR_1126aeaf8);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010c0311a0(puVar1);
  func_0x00010bf0c980();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105ccf28c; end: 105ccf2db;  */

void FUN_105ccf28c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10eda0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ccf2dc; end: 105ccf2ef;  */

void FUN_105ccf2dc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105ccf2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x10))(param_2);
    return;
  }
  return;
}



/* Entry: 105ccf2f0; end: 105ccf2f7; -[SCMemoriesContentUnderstandingDetailsRouter .cxx_destruct] */

void FUN_105ccf2f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105ccf2f8; end: 105ccf423; -[SCMemoriesContentUnderstandingDetailsViewController initWithWithSubscreenViewControllerType:streamingContentPrefetcher:dataCoordinator:operaPresenter:snapThumbnailGenerator:applicationLifecycleEvents:memoriesSelectionFooterBarControllerFactory:tagName:memoriesExperimentService:memoriesMonetizationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105ccf2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ecc38;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithWithSubscreenViewControl_11252d020,4,param_4,param_5,
                      param_6,param_7,param_8,param_9,param_11,param_12);
  uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112733e84);
  *(undefined8 *)((long)puVar1 + (long)_DAT_112733e84) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112733e88);
  *(undefined8 *)((long)puVar1 + (long)_DAT_112733e88) = param_10;
  _objc_retain(param_10);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c3b80;
  _objc_alloc();
  func_0x00010c0028c0();
  uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112733e8c);
  *(undefined **)((long)puVar1 + (long)_DAT_112733e8c) = puVar2;
  _objc_release(uVar3);
  _objc_release(param_10);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 105ccf424; end: 105ccf51b; -[SCMemoriesContentUnderstandingDetailsViewController viewDidLoad] */

void FUN_105ccf424(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ecc38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidLoad_112684cd8);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined1 *)puVar1;
  func_0x00010beedf60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar4 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bdc2640(PTR__OBJC_CLASS___UIButton_1126aec48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be219c0(param_1);
  func_0x00010befbd60(puVar4);
  func_0x00010bfdf5e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2194c0();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 105ccf51c; end: 105ccf527; -[SCMemoriesContentUnderstandingDetailsViewController _getPressSettingsButtonAction] */

undefined * FUN_105ccf51c(void)

{
  return PTR_s__didPressSettingsButton_11252d028;
}



/* Entry: 105ccf528; end: 105ccf537; -[SCMemoriesContentUnderstandingDetailsViewController _didPressSettingsButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ccf528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10e290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733e8c),PTR_s_presentSettingsViewController_1126212c0
            );
  return;
}



/* Entry: 105ccf538; end: 105ccf53b; -[SCMemoriesContentUnderstandingDetailsViewController _willDismiss] */

void FUN_105ccf538(void)

{
  return;
}



/* Entry: 105ccf53c; end: 105ccf53f; -[SCMemoriesContentUnderstandingDetailsViewController _didEndDismissing:] */

void FUN_105ccf53c(void)

{
  return;
}



/* Entry: 105ccf540; end: 105ccf543; -[SCMemoriesContentUnderstandingDetailsViewController _didCreateStory:] */

void FUN_105ccf540(void)

{
  return;
}



/* Entry: 105ccf544; end: 105ccf573; -[SCMemoriesContentUnderstandingDetailsViewController _title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ccf544(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112733e88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ccf574; end: 105ccf5b7; -[SCMemoriesContentUnderstandingDetailsViewController _sectionControllerConfiguration] */

void FUN_105ccf574(void)

{
  _objc_alloc(PTR_PTR_1126c3b88);
  func_0x00010bfff420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ccf5b8; end: 105ccf5bf; -[SCMemoriesContentUnderstandingDetailsViewController pageViewName] */

undefined8 FUN_105ccf5b8(void)

{
  return 0x3b;
}



/* Entry: 105ccf5c0; end: 105ccf5cf; -[SCMemoriesContentUnderstandingDetailsViewController didUpdateStartDate:endDate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ccf5c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733e84),PTR_s_filterWithStartDate_endDate__1125c9428)
  ;
  return;
}



/* Entry: 105ccf5d0; end: 105ccf61f; -[SCMemoriesContentUnderstandingDetailsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ccf5d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112733e8c,0);
  _objc_storeStrong(param_1 + _DAT_112733e88,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112733e84,0);
  return;
}



/* Entry: 105ccf620; end: 105ccf6b7; -[SCMemoriesContentUnderstandingSettingsViewController initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105ccf620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ecc40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112733e90),param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112733e94);
    *(undefined ***)((long)puVar1 + (long)_DAT_112733e94) =
         &PTR__OBJC_CLASS___NSConstantArray_11117f480;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ccf6b8; end: 105ccf723; -[SCMemoriesContentUnderstandingSettingsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ccf6b8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ecc40;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112733e98);
  _objc_opt_class(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
  func_0x00010c125fe0(uVar1);
  return;
}



/* Entry: 105ccf724; end: 105ccfadb; -[SCMemoriesContentUnderstandingSettingsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ccf724(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126ecc40;
  lStack_98 = param_1;
  _objc_msgSendSuper2(&lStack_98,PTR_s_loadView_112604be0);
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar17 = (long)_DAT_112733e98;
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar16);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c16e9a0(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c167a20(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                      *(undefined8 *)(param_1 + lVar17));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0(*(undefined8 *)(param_1 + lVar17));
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar3 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar17);
  uStack_88 = uVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar17);
  uStack_80 = uVar8;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  uStack_78 = uVar12;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(lVar17);
  _objc_release(param_1);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar16);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar3;
  }
  ___stack_chk_fail();
  return 1;
}


