/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d88870; end: 104d88933;  */

void FUN_104d88870(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c15c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104d88934; end: 104d8893b;  */

void FUN_104d88934(void)

{
  return;
}



/* Entry: 104d8893c; end: 104d88967;  */

void FUN_104d8893c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc4ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d88968; end: 104d8896f;  */

void FUN_104d88968(void)

{
  return;
}



/* Entry: 104d88970; end: 104d88a27; -[SCFeatureRemixWithSnap _registerObservers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d88970(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712974);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c297280(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104d88a28; end: 104d88aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d88a28(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 == 0)) {
    lVar1 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271298c);
    *(long *)(param_1 + _DAT_11271298c) = lVar1;
    _objc_release(uVar2);
    func_0x00010be89860(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d88ab0; end: 104d88c4f; -[SCFeatureRemixWithSnap _registerLensObserversForLensCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d88ab0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  lVar3 = (long)_DAT_11271298c;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bef1060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104d88c50;
  puStack_78 = &UNK_110842a38;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bef0b80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 104d88c50; end: 104d88ca7;  */

void FUN_104d88c50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (uVar1 = param_2, func_0x00010bf1f3c0(), (int)uVar1 != 0)) {
    func_0x00010bdc4ee0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d88ca8; end: 104d88d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d88ca8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_112712990;
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d88d10; end: 104d88e27; -[SCFeatureRemixWithSnap _activateRemixLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d88d10(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11271298c;
  if (*(long *)(param_1 + lVar5) != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112712978);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11271297c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000105202c28(uVar4,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b00f8;
    uVar1 = uVar4;
    func_0x00010c094540(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c159160(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126b0240;
    _objc_alloc(PTR_PTR_1126b0240);
    func_0x00010bff0c60();
    func_0x00010bef0080(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 104d88e28; end: 104d88f5f; -[SCFeatureRemixWithSnap remixPreviewConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d88e28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112712980);
  func_0x00010c129840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1298a0();
  uVar3 = uVar1;
  func_0x00010c131e40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_104d8845c(uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b0238;
  _objc_alloc(PTR_PTR_1126b0238);
  uVar3 = uVar1;
  func_0x00010c247de0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c247b80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1297c0(uVar1);
  func_0x00010beb3140(param_1);
  func_0x00010c1298a0();
  func_0x00010c04ace0(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104d88f60; end: 104d8900f; -[SCFeatureRemixWithSnap isRemixActiveOnSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104d88f60(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104d89010;
  puStack_50 = &UNK_11084f020;
  puStack_38 = puStack_48;
  func_0x00010c0bf0a0(*(undefined8 *)(param_1 + _DAT_112712990),param_2,0,&puStack_68);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 104d89010; end: 104d8903f;  */

void FUN_104d89010(long param_1,undefined1 param_2)

{
  func_0x00010c07c280();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 104d89040; end: 104d8908b; -[SCFeatureRemixWithSnap _shouldDisableSavingInPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104d89040(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112712980);
  func_0x00010c129840(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1298a0();
  _objc_release(lVar1);
  return lVar2 != 2;
}



/* Entry: 104d8908c; end: 104d8912b; -[SCFeatureRemixWithSnap .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8908c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712984,0);
  _objc_storeStrong(param_1 + _DAT_112712988,0);
  _objc_storeStrong(param_1 + _DAT_112712990,0);
  _objc_storeStrong(param_1 + _DAT_112712980,0);
  _objc_storeStrong(param_1 + _DAT_11271297c,0);
  _objc_storeStrong(param_1 + _DAT_112712978,0);
  _objc_storeStrong(param_1 + _DAT_11271298c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112712974,0);
  return;
}



/* Entry: 104d8912c; end: 104d891e7; -[SCFeatureCaptionImpl initWithUserSession:captionState:creativeToolsABProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104d8912c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e41e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112712994;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112712998;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d891e8; end: 104d89267; -[SCFeatureCaptionImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d891e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11271299c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c11e380(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar1,param_2,param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d89268; end: 104d89327; -[SCFeatureCaptionImpl forwardCameraOverlayTapGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d89268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar2;
  
  _objc_retain(param_7);
  if (*(long *)(param_5 + _DAT_1127129a0) != 0) {
    func_0x00010bfb68e0();
    uVar2 = param_7;
    uVar3 = param_1;
    uVar4 = param_2;
    func_0x00010c09ef00(param_7,param_6,*(undefined8 *)(param_5 + _DAT_11271299c));
    iVar1 = (int)uVar2;
    _CGRectContainsPoint(param_1,param_2,param_3,param_4,uVar3,uVar4);
    if (iVar1 != 0) {
      param_5 = param_5 + _DAT_1127129a4;
      _objc_loadWeakRetained(param_5);
      func_0x00010bfa1c20();
      _objc_release(param_5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 104d89328; end: 104d89427; -[SCFeatureCaptionImpl quickCaptionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d89328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar1 = _DAT_1127129a0;
  if (*(long *)(param_5 + _DAT_112712998) != 0) {
    lVar3 = param_5;
    func_0x00010bf300a0();
    _objc_retainAutoreleasedReturnValue();
    iVar1 = _DAT_1127129a0;
    if (lVar3 != 0) {
      plVar2 = (long *)(param_5 + _DAT_1127129a0);
      lVar3 = *plVar2;
      _objc_release();
      if (lVar3 == 0) {
        lVar3 = *(long *)(param_5 + _DAT_1127129a8);
        lVar4 = (long)_DAT_11271299c;
        func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
        uVar5 = param_1;
        uVar6 = param_2;
        uVar7 = param_3;
        uVar8 = param_4;
        func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
        func_0x00010c0d95c0(param_1,param_2,param_3,param_4,uVar5,uVar6,uVar7,uVar8);
        lVar4 = *plVar2;
        *plVar2 = lVar3;
        _objc_release(lVar4);
        goto LAB_104d89400;
      }
    }
  }
  plVar2 = (long *)(param_5 + iVar1);
LAB_104d89400:
  lVar3 = *plVar2;
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 104d89428; end: 104d894bf; -[SCFeatureCaptionImpl captionManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d89428(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127129a8;
  lVar2 = *(long *)(param_1 + lVar4);
  if (lVar2 == 0) {
    puVar1 = PTR_PTR_1126b0248;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112712998);
    func_0x00010bf20c00(*(undefined8 *)(param_1 + _DAT_11271299c));
    func_0x00010bffc620(puVar1,param_2,uVar3,*(undefined8 *)(param_1 + _DAT_1127129ac));
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar3);
    lVar2 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 104d894c0; end: 104d894df; -[SCFeatureCaptionImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d894c0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127129a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d894e0; end: 104d894f3; -[SCFeatureCaptionImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d894e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127129a4,param_3);
  return;
}



/* Entry: 104d894f4; end: 104d89503; -[SCFeatureCaptionImpl userSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d894f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712994);
}



/* Entry: 104d89504; end: 104d89543; -[SCFeatureCaptionImpl setUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d89504(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712994;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d89544; end: 104d89553; -[SCFeatureCaptionImpl containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d89544(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271299c);
}



/* Entry: 104d89554; end: 104d89593; -[SCFeatureCaptionImpl setContainerView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d89554(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271299c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d89594; end: 104d895d3; -[SCFeatureCaptionImpl setQuickCaptionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d89594(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127129a0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d895d4; end: 104d895e3; -[SCFeatureCaptionImpl captionState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104d895d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112712998);
}



/* Entry: 104d895e4; end: 104d89623; -[SCFeatureCaptionImpl setCaptionState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d895e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112712998;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d89624; end: 104d89663; -[SCFeatureCaptionImpl setCaptionManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d89624(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127129a8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d89664; end: 104d896ef; -[SCFeatureCaptionImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d89664(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127129a8,0);
  _objc_storeStrong(param_1 + _DAT_112712998,0);
  _objc_storeStrong(param_1 + _DAT_1127129a0,0);
  _objc_storeStrong(param_1 + _DAT_11271299c,0);
  _objc_storeStrong(param_1 + _DAT_112712994,0);
  _objc_destroyWeak(param_1 + _DAT_1127129a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127129ac,0);
  return;
}



/* Entry: 104d896f0; end: 104d899af; -[SCCameraLensRemoteApiExternalMediaStreamPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d896f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_1127129bc;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar12;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c129600();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_1127129b0;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c150aa0();
  lVar5 = lVar3;
  func_0x00010c0719a0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar12);
  if ((int)lVar5 != 0) {
    _objc_initWeak(auStack_68,param_1);
    puVar6 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b0250;
    _objc_alloc(PTR_PTR_1126b0250);
    puVar8 = PTR_PTR_1126b0258;
    func_0x00010bf8ae80(PTR_PTR_1126b0258);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefa40(puVar7);
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b0260;
    _objc_alloc(PTR_PTR_1126b0260);
    func_0x00010c03ee80();
    lVar12 = (long)_DAT_1127129b4;
    _objc_retain(puVar6);
    uVar11 = *(undefined8 *)(param_1 + lVar12);
    *(undefined **)(param_1 + lVar12) = puVar6;
    _objc_release(uVar11);
    param_1 = param_1 + _DAT_1127129b8;
    _objc_loadWeakRetained(param_1);
    lVar12 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar12);
    _objc_release(param_1);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 104d899b0; end: 104d899ef;  */

void FUN_104d899b0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d899f0; end: 104d89a8b; -[SCCameraLensRemoteApiExternalMediaStreamPluginEntryPoint _createRequestHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d899f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b0268;
  _objc_alloc(PTR_PTR_1126b0268);
  lVar2 = param_1 + _DAT_1127129bc;
  _objc_loadWeakRetained(lVar2);
  param_1 = param_1 + _DAT_1127129c0;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bf9e3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffb1a0(puVar1,param_2,lVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d89a8c; end: 104d89afb; -[SCCameraLensRemoteApiExternalMediaStreamPluginEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d89a8c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127129b4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e41f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d89afc; end: 104d89b67; -[SCCameraLensRemoteApiExternalMediaStreamPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d89afc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127129c0);
  _objc_destroyWeak(param_1 + _DAT_1127129bc);
  _objc_destroyWeak(param_1 + _DAT_1127129c4);
  _objc_destroyWeak(param_1 + _DAT_1127129b0);
  _objc_destroyWeak(param_1 + _DAT_1127129b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127129b4,0);
  return;
}



/* Entry: 104d89b68; end: 104d89c0b; -[SCCameraLensRemoteApiExternalMediaStreamPluginRequestHandler initWithCameraConfigurationServices:externalMediaStreamService:] */

undefined1 *
FUN_104d89b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e41f8;
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



/* Entry: 104d89c0c; end: 104d89f3f; -[SCCameraLensRemoteApiExternalMediaStreamPluginRequestHandler handleRequest:] */

void FUN_104d89c0c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf95e20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf32ee0();
  _objc_release(puVar1);
  if (puVar3 == (undefined *)0x0) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      func_0x00010c137fe0(param_1);
    }
    puVar3 = *(undefined **)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010c0c67c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      lVar2 = param_1;
      func_0x00010be1baa0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x18);
      *(long *)(param_1 + 0x18) = lVar2;
      _objc_release(uVar9);
      puVar3 = param_3;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar3;
      _objc_release(uVar9);
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef8220();
      _objc_release(uVar9);
    }
    puVar6 = PTR_PTR_1126ae6b8;
    puVar4 = param_3;
    func_0x00010c135700();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_104d89f40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    puVar1 = param_3;
    func_0x00010bf95e20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf32ee0();
    _objc_release(puVar1);
    puVar6 = PTR_PTR_1126ae6b8;
    puVar1 = param_3;
    if (puVar3 == (undefined *)0x0) {
      func_0x00010c137fe0(param_1);
      puVar6 = PTR_PTR_1126ae6b8;
      func_0x00010c135700();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      FUN_104d89f40(puVar1,1,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010c0860a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      goto LAB_104d89efc;
    }
    func_0x00010c135700();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    FUN_104d89f40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
LAB_104d89efc:
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_retain();
    puVar1 = (undefined *)0x0;
    if (puVar7 != (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR_PTR_1126b0278;
    _objc_alloc(PTR_PTR_1126b0278);
    func_0x00010c03efa0();
    _objc_release(puVar1);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104d89f40; end: 104d89fd7;  */

void FUN_104d89f40(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = (undefined *)0x0;
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126b0278;
  _objc_alloc(PTR_PTR_1126b0278);
  func_0x00010c03efa0();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d89fd8; end: 104d8a02b; -[SCCameraLensRemoteApiExternalMediaStreamPluginRequestHandler reset] */

void FUN_104d89fd8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c3a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8a02c; end: 104d8a077; -[SCCameraLensRemoteApiExternalMediaStreamPluginRequestHandler _generateResourceId] */

void FUN_104d8a02c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d8a078; end: 104d8a0bf; -[SCCameraLensRemoteApiExternalMediaStreamPluginRequestHandler .cxx_destruct] */

void FUN_104d8a078(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d8a0c0; end: 104d8a257; -[SCCharmsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8a0c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104d8a258;
  puStack_68 = &UNK_11084f090;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112712a04);
  }
  _objc_retain(uVar4);
  puVar3 = PTR_PTR_1126b0290;
  _objc_alloc(PTR_PTR_1126b0290);
  func_0x00010bffd800();
  func_0x00010bf9d660(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 104d8a258; end: 104d8a30f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8a258(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b0280;
    _objc_alloc(PTR_PTR_1126b0280);
    lVar1 = param_1 + _DAT_112712a00;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0271a0(puVar4,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104d8a310; end: 104d8a73b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8a310(long param_1)

{
  long lVar1;
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
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1 + _DAT_1127129dc;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf10b80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = lVar1 + _DAT_1127129f8;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c273160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar1 + _DAT_1127129e0;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010bf87660();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar2);
    lVar2 = lVar1 + _DAT_1127129d8;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar2);
    lVar2 = lVar1 + _DAT_1127129e4;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010c2946e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(lVar2);
    lVar2 = lVar1 + _DAT_1127129f0;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010bfb9940();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar2);
    lVar2 = lVar1 + _DAT_1127129e8;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar2);
    lVar2 = lVar1 + _DAT_1127129e8;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010c244b40();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar2);
    lVar2 = lVar1 + _DAT_1127129ec;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010bfcf900();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar2);
    lVar2 = lVar1 + _DAT_1127129e8;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010c2947e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar2);
    uVar14 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1 + _DAT_1127129f4;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010bf50600();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar5;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar2);
    lVar2 = lVar1 + _DAT_1127129fc;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010bf50420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar16 = PTR_PTR_1126b0288;
    _objc_alloc();
    func_0x00010c045600();
    _objc_release(lVar5);
    _objc_release(lVar15);
    _objc_release(uVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar8);
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 104d8a73c; end: 104d8a777; -[SCCharmsEntryPoint end] */

void FUN_104d8a73c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e4200;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d8a778; end: 104d8a82b; -[SCCharmsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8a778(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112712a04,0);
  _objc_destroyWeak(param_1 + _DAT_112712a00);
  _objc_destroyWeak(param_1 + _DAT_1127129fc);
  _objc_destroyWeak(param_1 + _DAT_1127129f8);
  _objc_destroyWeak(param_1 + _DAT_1127129f4);
  _objc_destroyWeak(param_1 + _DAT_1127129f0);
  _objc_destroyWeak(param_1 + _DAT_1127129ec);
  _objc_destroyWeak(param_1 + _DAT_1127129e8);
  _objc_destroyWeak(param_1 + _DAT_1127129e4);
  _objc_destroyWeak(param_1 + _DAT_1127129e0);
  _objc_destroyWeak(param_1 + _DAT_1127129dc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127129d8);
  return;
}



/* Entry: 104d8a82c; end: 104d8a8ef;  */

void FUN_104d8a82c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b0298;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010bff4ae0();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b02a0;
  _objc_alloc(PTR_PTR_1126b02a0);
  func_0x00010c01d740();
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d8a8f0; end: 104d8a987;  */

void FUN_104d8a8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104d8a988;
  puStack_48 = &UNK_11084f0f0;
  uStack_40 = param_2;
  uStack_38 = param_3;
  _objc_retain(param_2);
  func_0x00010bd86420(param_1,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104d8a988; end: 104d8ac53;  */

void FUN_104d8a988(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  _objc_retain(param_2);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_retain(uVar6);
  puVar1 = PTR_PTR_1126b02b0;
  _objc_opt_class(PTR_PTR_1126b02b0);
  uVar5 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  puVar2 = PTR_PTR_1126b02b8;
  puVar1 = PTR_PTR_1126b02b0;
  uVar3 = param_2;
  if ((param_2 == 0) || ((uVar5 & 1) == 0)) {
    _objc_retain(param_2);
    _objc_opt_class(puVar2);
    uVar5 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    _objc_release(param_2);
    puVar1 = PTR_PTR_1126b02b8;
    uVar7 = 0;
    if ((param_2 != 0) && ((uVar5 & 1) != 0)) {
      _objc_retain(param_2);
      _objc_opt_class(puVar1);
      uVar5 = param_2;
      _objc_opt_isKindOfClass(param_2,puVar1);
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(param_2);
      uVar5 = uVar3;
      func_0x00010bfe5e40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104d8aab8;
    }
  }
  else {
    _objc_retain(param_2);
    _objc_opt_class(puVar1);
    uVar5 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar1);
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_2);
    uVar5 = uVar3;
    func_0x00010c115e60(uVar3);
    _objc_retainAutoreleasedReturnValue();
LAB_104d8aab8:
    _objc_release(uVar3);
    uVar7 = uVar5;
    func_0x00010c0720c0(uVar5);
    _objc_release(uVar5);
  }
  _objc_release(uVar6);
  _objc_release(param_2);
  puVar1 = PTR_PTR_1126b02b0;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  _objc_release(param_2);
  puVar1 = PTR_PTR_1126b02b8;
  if ((param_2 == 0) || ((uVar3 & 1) == 0)) {
    _objc_retain(param_2);
    _objc_opt_class(puVar1);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar1);
    _objc_release(param_2);
    uVar5 = 0;
    if ((param_2 == 0) || ((uVar3 & 1) == 0)) goto LAB_104d8ac30;
    _objc_retain(param_2);
    uVar3 = param_2;
    func_0x00010bfe5e40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_104d8a82c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar5 = param_2;
    func_0x000106d5e488(param_2,uVar7,uVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_2);
    uVar3 = param_2;
    func_0x00010c115e60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_104d8a82c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar5 = param_2;
    func_0x000106d5e234(param_2,uVar7,uVar4,0,uVar6,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(uVar4);
LAB_104d8ac30:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104d8ac54; end: 104d8b003;  */

void FUN_104d8ac54(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126b02c0;
  _objc_opt_class(PTR_PTR_1126b02c0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  puVar12 = PTR_PTR_1126b02c8;
  puVar2 = PTR_PTR_1126b02c0;
  if ((param_1 == 0) || ((uVar3 & 1) == 0)) {
    _objc_retain(param_1);
    _objc_opt_class(puVar12);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar12);
    _objc_release(param_1);
    puVar2 = PTR_PTR_1126b02c8;
    puVar12 = (undefined *)0x0;
    if ((param_1 == 0) || ((uVar3 & 1) == 0)) goto LAB_104d8afd8;
    _objc_retain(param_1);
    _objc_opt_class(puVar2);
    uVar9 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar2);
    uVar3 = param_1;
    if ((uVar9 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_1);
    puVar12 = PTR_PTR_1126b02c8;
    _objc_alloc(PTR_PTR_1126b02c8);
    uStack_68 = uVar3;
    func_0x00010c257d00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x00010c260dc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = uVar3;
    func_0x00010bfe8f00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x00010c257840(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
    func_0x00010c257840(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar11;
    FUN_104d8a82c(uVar11,2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04cda0(puVar12);
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar2);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar2);
    uVar1 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_1);
    puVar12 = PTR_PTR_1126b02c0;
    _objc_alloc();
    uStack_68 = uVar1;
    func_0x00010c115e60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    func_0x00010c257800();
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = uVar1;
    func_0x00010c2716a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar1;
    func_0x00010c112a80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar1;
    func_0x00010c25ccc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bfe8f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07eea0();
    uVar4 = uVar1;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010c115ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    FUN_104d8a82c();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c2610e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cbe0();
    uVar8 = uVar1;
    func_0x00010c278ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa11a0();
    _objc_release(uVar1);
    func_0x00010c03a760(puVar12);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uStack_70);
  _objc_release(uVar9);
  _objc_release(uStack_68);
LAB_104d8afd8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 104d8b004; end: 104d8b0f3;  */

void FUN_104d8b004(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf0d600();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_1;
  if (lVar1 == 2) {
    func_0x00010bf0cf00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar1 != 1) {
      puVar3 = (undefined *)0x0;
      goto LAB_104d8b0d4;
    }
    func_0x00010bf0cf00();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db1bb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
LAB_104d8b0d4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d8b0f4; end: 104d8b12f;  */

void FUN_104d8b0f4(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  func_0x00010c1e3bc0(param_1,param_2,0);
  func_0x00010c2039c0(param_1,param_2,0xffffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d8b130; end: 104d8b1eb;  */

void FUN_104d8b130(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == 0) {
    FUN_104d8b0f4(param_1);
  }
  else {
    lVar1 = param_2;
    func_0x00010bf0d600();
    if (lVar1 == 1) {
      lVar1 = param_2;
      func_0x00010bf0cf00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e3bc0(param_1);
      _objc_release(lVar1);
    }
    else {
      func_0x00010c1e3bc0(param_1);
    }
    func_0x00010bf0d600();
    func_0x00010c2039c0(param_1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d8b1ec; end: 104d8b1f7; +[SCCommerceAttachmentPaginationProvider announcerIdentifier] */

undefined ** FUN_104d8b1ec(void)

{
  return &PTR____CFConstantStringClassReference_110db1bf8;
}



/* Entry: 104d8b1f8; end: 104d8b1ff; -[SCCommerceAttachmentPaginationProvider addListener:] */

void FUN_104d8b1f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 104d8b200; end: 104d8b207; -[SCCommerceAttachmentPaginationProvider removeListener:] */

void FUN_104d8b200(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 104d8b208; end: 104d8b30b; -[SCCommerceAttachmentPaginationProvider initWithDataCoordinator:configProvider:] */

undefined1 *
FUN_104d8b208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4208;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    _objc_release(uVar4);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 0x40));
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_4;
    _objc_release(uVar4);
    ppuVar3 = &PTR____CFConstantStringClassReference_110db1bd8;
    func_0x0001001139cc(&PTR____CFConstantStringClassReference_110db1bd8,0x15,0,1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined ***)((long)puVar1 + 0x48) = ppuVar3;
    _objc_release(uVar4);
    func_0x00010c137fe0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104d8b30c; end: 104d8b317; -[SCCommerceAttachmentPaginationProvider nextPage] */

long FUN_104d8b30c(long param_1)

{
  return *(long *)(param_1 + 0x18) + 1;
}



/* Entry: 104d8b318; end: 104d8b3bf; -[SCCommerceAttachmentPaginationProvider reset] */

void FUN_104d8b318(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104d8b3c0; end: 104d8b437;  */

void FUN_104d8b3c0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar2);
    func_0x00010bdcc460(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d8b438; end: 104d8b497; -[SCCommerceAttachmentPaginationProvider clearError] */

void FUN_104d8b438(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126b02d8;
  _objc_opt_new(PTR_PTR_1126b02d8);
  func_0x00010bf09f60(uVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d8b498; end: 104d8b56f; -[SCCommerceAttachmentPaginationProvider setSelectedProduct:] */

void FUN_104d8b498(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104d8b570; end: 104d8b5a3;  */

void FUN_104d8b570(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be25e40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d8b5a4; end: 104d8b5cb; -[SCCommerceAttachmentPaginationProvider viewModels] */

void FUN_104d8b5a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d8b5cc; end: 104d8b83f; -[SCCommerceAttachmentPaginationProvider didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_104d8b5cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar2 != 0) {
    uVar2 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c071ae0();
    _objc_release(uVar2);
    if ((int)uVar1 != 0) {
      func_0x00010c137fe0(param_1);
    }
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104d8b840;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  uVar2 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar2 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x104d8b874;
    puStack_98 = &UNK_110841fb0;
    _objc_copyWeak(auStack_88,auStack_58);
    _objc_retain(param_5);
    uStack_90 = param_5;
    func_0x00010c0f7fc0(uVar2);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_58);
  }
  uVar2 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar2 != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    _objc_copyWeak(auStack_b8,auStack_58);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d8b840; end: 104d8b8e3;  */

void FUN_104d8b840(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be2afa0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d8b8e4; end: 104d8b93f; -[SCCommerceAttachmentPaginationProvider _announceInitialItemsLoaded] */

void FUN_104d8b8e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e85678,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d8b940; end: 104d8ba4b; -[SCCommerceAttachmentPaginationProvider _announceItemsLoadedWithAddedIndices:] */

void FUN_104d8b940(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  long lStack_108;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined **ppuStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bf529e0(), lVar1 == 0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    ppuStack_58 = &PTR____CFConstantStringClassReference_110e85738;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_50 = param_3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_50,&ppuStack_58,1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e85698;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e85698,param_1,puVar3)
  ;
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar5);
  if ((ppuVar5 == (undefined **)0x0) ||
     (ppuVar6 = ppuVar5, func_0x00010bf529e0(), ppuVar6 == (undefined **)0x0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110e85758;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_b0 = ppuVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_b0,&ppuStack_b8,1
                       );
    _objc_retainAutoreleasedReturnValue();
  }
  lVar1 = param_3;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e856b8;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(lVar1,param_2,&PTR____CFConstantStringClassReference_110e856b8,param_3,puVar3)
  ;
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar6);
  if ((ppuVar6 == (undefined **)0x0) ||
     (ppuVar2 = ppuVar6, func_0x00010bf529e0(), ppuVar2 == (undefined **)0x0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    ppuStack_118 = &PTR____CFConstantStringClassReference_110e85778;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_110 = ppuVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_110,&ppuStack_118
                        ,1);
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar2 = ppuVar5;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110e856f8;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110e856f8,ppuVar5,
                      puVar3);
  _objc_release(ppuVar5);
  _objc_release(ppuVar2);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar7);
  if ((ppuVar7 == (undefined **)0x0) ||
     (ppuVar5 = ppuVar7, func_0x00010bf529e0(), ppuVar5 == (undefined **)0x0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    ppuStack_178 = &PTR____CFConstantStringClassReference_110e85778;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_170 = ppuVar7;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_170,&ppuStack_178
                        ,1);
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar5 = ppuVar6;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110e856d8,ppuVar6,
                      puVar3);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(puVar3);
  _objc_release(ppuVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  ppuVar5 = ppuVar7;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(ppuVar7);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110e85718,ppuVar7,0);
  _objc_release(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 104d8ba4c; end: 104d8bb6f; -[SCCommerceAttachmentPaginationProvider _announceFinalItemsLoadedWithRemovedIndices:] */

void FUN_104d8ba4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  long lStack_108;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined **ppuStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bf529e0(), lVar1 == 0)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    ppuStack_58 = &PTR____CFConstantStringClassReference_110e85758;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_50 = param_3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_50,&ppuStack_58,1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = param_1;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110e856b8;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e856b8,param_1,puVar4)
  ;
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar5);
  if ((ppuVar5 == (undefined **)0x0) ||
     (ppuVar6 = ppuVar5, func_0x00010bf529e0(), ppuVar6 == (undefined **)0x0)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110e85778;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_b0 = ppuVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_b0,&ppuStack_b8,1
                       );
    _objc_retainAutoreleasedReturnValue();
  }
  lVar1 = param_3;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e856f8;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(lVar1,param_2,&PTR____CFConstantStringClassReference_110e856f8,param_3,puVar4)
  ;
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar6);
  if ((ppuVar6 == (undefined **)0x0) ||
     (ppuVar3 = ppuVar6, func_0x00010bf529e0(), ppuVar3 == (undefined **)0x0)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    ppuStack_118 = &PTR____CFConstantStringClassReference_110e85778;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_110 = ppuVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_110,&ppuStack_118
                        ,1);
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar3 = ppuVar5;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110e856d8,ppuVar5,
                      puVar4);
  _objc_release(ppuVar5);
  _objc_release(ppuVar3);
  _objc_release(puVar4);
  _objc_release(ppuVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  ppuVar5 = ppuVar6;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(ppuVar6);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110e85718,ppuVar6,0);
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 104d8bb70; end: 104d8bc93; -[SCCommerceAttachmentPaginationProvider _announceItemsUpdatedWithChangedIndices:] */

void FUN_104d8bb70(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined **ppuStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bf529e0(), lVar1 == 0)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    ppuStack_58 = &PTR____CFConstantStringClassReference_110e85778;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_50 = param_3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_50,&ppuStack_58,1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = param_1;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110e856f8;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e856f8,param_1,puVar4)
  ;
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar5);
  if ((ppuVar5 == (undefined **)0x0) ||
     (ppuVar3 = ppuVar5, func_0x00010bf529e0(), ppuVar3 == (undefined **)0x0)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110e85778;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_b0 = ppuVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_b0,&ppuStack_b8,1
                       );
    _objc_retainAutoreleasedReturnValue();
  }
  lVar1 = param_3;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(lVar1,param_2,&PTR____CFConstantStringClassReference_110e856d8,param_3,puVar4)
  ;
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(puVar4);
  _objc_release(ppuVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  ppuVar3 = ppuVar5;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(ppuVar5);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110e85718,ppuVar5,0);
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
  return;
}



/* Entry: 104d8bc94; end: 104d8bdb7; -[SCCommerceAttachmentPaginationProvider _announceItemsLoadingFailedWithChangedIndices:] */

void FUN_104d8bc94(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bf529e0(), lVar1 == 0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    ppuStack_58 = &PTR____CFConstantStringClassReference_110e85778;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_50 = param_3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_50,&ppuStack_58,1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = param_1;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e856d8,param_1,puVar3)
  ;
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_3;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_3);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(lVar1,param_2,&PTR____CFConstantStringClassReference_110e85718,param_3,0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d8bdb8; end: 104d8be2f; -[SCCommerceAttachmentPaginationProvider _announceReset] */

void FUN_104d8bdb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e85718,param_1,0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8be30; end: 104d8bf6f; -[SCCommerceAttachmentPaginationProvider _handleItemLoadingDidBegin] */

void FUN_104d8be30(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x10);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b02e0;
  _objc_opt_class(PTR_PTR_1126b02e0);
  puVar3 = puVar1;
  _objc_opt_isKindOfClass(puVar1,puVar2);
  puVar2 = puVar1;
  _objc_release();
  if ((((ulong)puVar3 & 1) != 0) && (puVar1 != (undefined *)0x0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    puVar2 = PTR_PTR_1126b02d8;
    _objc_alloc_init(PTR_PTR_1126b02d8);
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    _objc_release(uVar6);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x10));
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar3;
    func_0x00010bdcc040(param_1);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  puVar3 = param_3;
  if (((ulong)puVar1 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(param_3);
  puVar1 = puVar3;
  func_0x00010c067fc0();
  _objc_release(puVar3);
  *(undefined **)(puVar2 + 0x18) = puVar1;
  if (0 < (long)puVar1) {
    lVar4 = *(long *)(puVar2 + 0x40);
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(puVar2 + 0x28);
    func_0x00010bf0cf00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar2 + 0x50);
    func_0x00010c23b0e0(uVar6);
    lVar5 = lVar4;
    FUN_104d8a8f0(lVar4,uVar7,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(lVar4);
    if ((lVar5 == 0) || (lVar4 = lVar5, func_0x00010bf529e0(), lVar4 == 0)) {
      func_0x00010be29dc0(puVar2);
    }
    else {
      func_0x00010be32aa0(puVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be2acf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar2,PTR_s__handleInitialItemLoadingDidSucc_1125684d8);
  return;
}



/* Entry: 104d8bf70; end: 104d8c0a3; -[SCCommerceAttachmentPaginationProvider _handleItemLoadingDidSucceedWithExtraData:] */

void FUN_104d8bf70(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e85858);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  *(ulong *)(param_1 + 0x18) = uVar3;
  if (0 < (long)uVar3) {
    lVar4 = *(long *)(param_1 + 0x40);
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf0cf00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c23b0e0(uVar6);
    lVar7 = lVar4;
    FUN_104d8a8f0(lVar4,uVar5,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(lVar4);
    if ((lVar7 == 0) || (lVar4 = lVar7, func_0x00010bf529e0(), lVar4 == 0)) {
      func_0x00010be29dc0(param_1);
    }
    else {
      func_0x00010be32aa0(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be2acf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleInitialItemLoadingDidSucc_1125684d8);
  return;
}



/* Entry: 104d8c0a4; end: 104d8c15f; -[SCCommerceAttachmentPaginationProvider _handleInitialItemLoadingDidSucceed] */

void FUN_104d8c0a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c084fc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf0cf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c23b0e0(uVar3);
  uVar4 = uVar1;
  FUN_104d8a8f0(uVar1,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar5;
  _objc_release(uVar1);
  func_0x00010beda060(param_1);
  func_0x00010bdcbf20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104d8c160; end: 104d8c2ff; -[SCCommerceAttachmentPaginationProvider _handleUpdatedItemsWithNewViewModels:] */

void FUN_104d8c160(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010bf51e00();
  func_0x00010beda060(param_1);
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b02d8;
  _objc_opt_class(PTR_PTR_1126b02d8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  _objc_release(uVar2);
  if (((uVar4 & 1) == 0) || (uVar2 == 0)) {
    lVar5 = *(long *)(param_1 + 0x10);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b02e0;
    _objc_opt_class(PTR_PTR_1126b02e0);
    lVar7 = lVar5;
    _objc_opt_isKindOfClass(lVar5,puVar3);
    _objc_release(lVar5);
    lVar7 = -((ulong)((uint)(lVar5 == 0) | (uint)lVar7 ^ 0xffffffff) & 1);
  }
  else {
    lVar7 = 0;
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar4 = uVar1;
  func_0x00010bf529e0();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  lVar5 = param_3;
  func_0x00010bf529e0();
  if (uVar4 < uVar2 + lVar7 + lVar5) {
    do {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(puVar6);
      uVar4 = uVar4 + 1;
      uVar2 = uVar1;
      func_0x00010bf529e0();
      lVar5 = param_3;
      func_0x00010bf529e0();
    } while (uVar4 < uVar2 + lVar7 + lVar5);
  }
  func_0x00010bdcc000(param_1);
  _objc_release(puVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d8c300; end: 104d8c487; -[SCCommerceAttachmentPaginationProvider _handleFinalItemsLoaded] */

void FUN_104d8c300(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 8) = 0;
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b02d8;
  _objc_opt_class(PTR_PTR_1126b02d8);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar14);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    puVar15 = *(undefined **)(param_1 + 0x10);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126b02e0;
    _objc_opt_class(PTR_PTR_1126b02e0);
    puVar4 = puVar15;
    _objc_opt_isKindOfClass(puVar15,puVar14);
    puVar14 = puVar15;
    _objc_release();
    if ((((ulong)puVar4 & 1) == 0) || (puVar15 == (undefined *)0x0)) goto LAB_104d8c458;
  }
  else {
    _objc_release(uVar2);
  }
  lVar12 = param_1;
  func_0x00010c29db80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar12;
  func_0x00010bf51e00();
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5;
  _objc_release(uVar11);
  _objc_release(lVar12);
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcbd20(param_1);
  _objc_release(puVar4);
  _objc_release();
LAB_104d8c458:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = puVar14;
  func_0x00010bee3900();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(puVar14 + 0x10);
  func_0x00010c0d3c80();
  _objc_retain(puVar15);
  puVar4 = puVar15;
  func_0x00010bf52a60();
  lVar10 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar10) {
        _objc_enumerationMutation(puVar15);
      }
      uVar16 = *(undefined8 *)((long)puVar17 * 8);
      puVar6 = puVar14;
      func_0x00010c29db80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0(uVar16);
      puVar7 = puVar6;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0(uVar16);
      func_0x00010c1d04c0(uVar11);
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar17 = puVar17 + 1;
    } while (puVar4 != puVar17);
    puVar4 = puVar15;
    func_0x00010bf52a60();
  }
  _objc_release(puVar15);
  uVar16 = uVar11;
  func_0x00010bf51e00();
  uVar13 = *(undefined8 *)(puVar14 + 0x10);
  *(undefined8 *)(puVar14 + 0x10) = uVar16;
  _objc_release(uVar13);
  func_0x00010bdcc040(puVar14);
  _objc_release(uVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = puVar15;
  func_0x00010c29db80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar14;
  func_0x00010bf529e0();
  _objc_release(puVar14);
  if (puVar4 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = puVar15;
    func_0x00010c29db80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b02e0;
    _objc_alloc(PTR_PTR_1126b02e0);
    ppuVar8 = &PTR____CFConstantStringClassReference_110db1c18;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1c18,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010920(puVar4);
    puVar17 = puVar14;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar15 + 0x10);
    *(undefined **)(puVar15 + 0x10) = puVar17;
    _objc_release(uVar11);
    _objc_release(puVar4);
    _objc_release(ppuVar8);
    _objc_release(puVar14);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar17 = puVar15;
    func_0x00010c29db80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar17);
  }
  func_0x00010bdcc020(puVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c29db80();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010bf529e0();
  _objc_release(puVar15);
  if (puVar17 != (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    do {
      puVar17 = puVar14;
      func_0x00010c29db80();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar17;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf51e00();
      _objc_release(puVar6);
      _objc_release(puVar17);
      _objc_retain(puVar7);
      puVar17 = PTR_PTR_1126b02c0;
      _objc_opt_class(PTR_PTR_1126b02c0);
      puVar6 = puVar7;
      _objc_opt_isKindOfClass(puVar7,puVar17);
      puVar17 = PTR_PTR_1126b02c8;
      if ((puVar7 == (undefined *)0x0) || (((ulong)puVar6 & 1) == 0)) {
        _objc_retain(puVar7);
        _objc_opt_class(puVar17);
        puVar6 = puVar7;
        _objc_opt_isKindOfClass(puVar7,puVar17);
        _objc_release(puVar7);
        puVar17 = (undefined *)0x0;
        if ((puVar7 != (undefined *)0x0) && (((ulong)puVar6 & 1) != 0)) {
          puVar17 = puVar7;
          func_0x00010c257840();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        puVar17 = puVar7;
        func_0x00010c115ea0();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar7);
      uVar11 = *(undefined8 *)(puVar14 + 0x28);
      func_0x00010bf0cf00(uVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar17;
      func_0x00010c0720c0();
      if ((int)puVar6 == 0) {
        _objc_release(uVar11);
LAB_104d8c948:
        puVar9 = *(undefined **)(puVar14 + 0x28);
        func_0x00010bf0cf00(puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar17;
        func_0x00010c0720c0();
        if (((ulong)puVar6 & 1) != 0) goto LAB_104d8c9f4;
        puVar6 = puVar7;
        func_0x00010c06e7c0();
        _objc_release(puVar9);
        if ((int)puVar6 != 0) {
          uVar11 = 0;
          goto LAB_104d8c988;
        }
      }
      else {
        puVar6 = puVar7;
        func_0x00010c06e7c0();
        _objc_release(uVar11);
        if (((ulong)puVar6 & 1) != 0) goto LAB_104d8c948;
        uVar11 = 1;
LAB_104d8c988:
        puVar6 = puVar7;
        FUN_104d8ac54(puVar7,uVar11,puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar14;
        func_0x00010c29db80(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d04c0();
        _objc_release(puVar9);
        _objc_release(puVar6);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
LAB_104d8c9f4:
        _objc_release(puVar9);
      }
      _objc_release(puVar17);
      _objc_release(puVar7);
      puVar15 = puVar15 + 1;
      puVar17 = puVar14;
      func_0x00010c29db80();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar17;
      func_0x00010bf529e0();
      _objc_release(puVar17);
    } while (puVar15 < puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104d8c488; end: 104d8c62f; -[SCCommerceAttachmentPaginationProvider _handleAttachedItemUpdate] */

void FUN_104d8c488(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bee3900();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d3c80();
  _objc_retain(lVar1);
  lVar3 = lVar1;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar1);
      }
      uVar16 = *(undefined8 *)(lVar18 * 8);
      lVar4 = param_1;
      func_0x00010c29db80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0(uVar16);
      lVar5 = lVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0(uVar16);
      func_0x00010c1d04c0(uVar2);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar18 = lVar18 + 1;
    } while (lVar3 != lVar18);
    lVar3 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  uVar16 = uVar2;
  func_0x00010bf51e00();
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar16;
  _objc_release(uVar13);
  func_0x00010bdcc040(param_1);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = lVar1;
  func_0x00010c29db80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  if (lVar6 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    lVar3 = lVar1;
    func_0x00010c29db80();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126b02e0;
    _objc_alloc(PTR_PTR_1126b02e0);
    ppuVar7 = &PTR____CFConstantStringClassReference_110db1c18;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1c18,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010920(puVar14);
    lVar6 = lVar3;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    *(long *)(lVar1 + 0x10) = lVar6;
    _objc_release(uVar2);
    _objc_release(puVar14);
    _objc_release(ppuVar7);
    _objc_release(lVar3);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar3 = lVar1;
    func_0x00010c29db80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(lVar3);
  }
  func_0x00010bdcc020(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c29db80();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar15;
  func_0x00010bf529e0();
  _objc_release(puVar15);
  if (puVar17 != (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    do {
      puVar17 = puVar14;
      func_0x00010c29db80();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar17;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf51e00();
      _objc_release(puVar9);
      _objc_release(puVar17);
      _objc_retain(puVar10);
      puVar17 = PTR_PTR_1126b02c0;
      _objc_opt_class(PTR_PTR_1126b02c0);
      puVar9 = puVar10;
      _objc_opt_isKindOfClass(puVar10,puVar17);
      puVar17 = PTR_PTR_1126b02c8;
      if ((puVar10 == (undefined *)0x0) || (((ulong)puVar9 & 1) == 0)) {
        _objc_retain(puVar10);
        _objc_opt_class(puVar17);
        puVar9 = puVar10;
        _objc_opt_isKindOfClass(puVar10,puVar17);
        _objc_release(puVar10);
        puVar17 = (undefined *)0x0;
        if ((puVar10 != (undefined *)0x0) && (((ulong)puVar9 & 1) != 0)) {
          puVar17 = puVar10;
          func_0x00010c257840();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        puVar17 = puVar10;
        func_0x00010c115ea0();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar10);
      uVar2 = *(undefined8 *)(puVar14 + 0x28);
      func_0x00010bf0cf00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar17;
      func_0x00010c0720c0();
      if ((int)puVar9 == 0) {
        _objc_release(uVar2);
LAB_104d8c948:
        puVar11 = *(undefined **)(puVar14 + 0x28);
        func_0x00010bf0cf00(puVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar17;
        func_0x00010c0720c0();
        if (((ulong)puVar9 & 1) != 0) goto LAB_104d8c9f4;
        puVar9 = puVar10;
        func_0x00010c06e7c0();
        _objc_release(puVar11);
        if ((int)puVar9 != 0) {
          uVar2 = 0;
          goto LAB_104d8c988;
        }
      }
      else {
        puVar9 = puVar10;
        func_0x00010c06e7c0();
        _objc_release(uVar2);
        if (((ulong)puVar9 & 1) != 0) goto LAB_104d8c948;
        uVar2 = 1;
LAB_104d8c988:
        puVar9 = puVar10;
        FUN_104d8ac54(puVar10,uVar2,puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar14;
        func_0x00010c29db80(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d04c0();
        _objc_release(puVar11);
        _objc_release(puVar9);
        puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar8);
LAB_104d8c9f4:
        _objc_release(puVar11);
      }
      _objc_release(puVar17);
      _objc_release(puVar10);
      puVar15 = puVar15 + 1;
      puVar17 = puVar14;
      func_0x00010c29db80();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar17;
      func_0x00010bf529e0();
      _objc_release(puVar17);
    } while (puVar15 < puVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 104d8c630; end: 104d8c7bf; -[SCCommerceAttachmentPaginationProvider _handleItemLoadingDidFail] */

void FUN_104d8c630(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c29db80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c29db80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b02e0;
    _objc_alloc(PTR_PTR_1126b02e0);
    ppuVar3 = &PTR____CFConstantStringClassReference_110db1c18;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1c18,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010920(puVar10);
    lVar2 = lVar1;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar2;
    _objc_release(uVar9);
    _objc_release(puVar10);
    _objc_release(ppuVar3);
    _objc_release(lVar1);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar1 = param_1;
    func_0x00010c29db80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar1);
  }
  func_0x00010bdcc020(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c29db80();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf529e0();
  _objc_release(puVar11);
  if (puVar12 != (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    do {
      puVar12 = puVar10;
      func_0x00010c29db80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar12;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf51e00();
      _objc_release(puVar5);
      _objc_release(puVar12);
      _objc_retain(puVar6);
      puVar12 = PTR_PTR_1126b02c0;
      _objc_opt_class(PTR_PTR_1126b02c0);
      puVar5 = puVar6;
      _objc_opt_isKindOfClass(puVar6,puVar12);
      puVar12 = PTR_PTR_1126b02c8;
      if ((puVar6 == (undefined *)0x0) || (((ulong)puVar5 & 1) == 0)) {
        _objc_retain(puVar6);
        _objc_opt_class(puVar12);
        puVar5 = puVar6;
        _objc_opt_isKindOfClass(puVar6,puVar12);
        _objc_release(puVar6);
        puVar12 = (undefined *)0x0;
        if ((puVar6 != (undefined *)0x0) && (((ulong)puVar5 & 1) != 0)) {
          puVar12 = puVar6;
          func_0x00010c257840();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        puVar12 = puVar6;
        func_0x00010c115ea0();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar6);
      uVar9 = *(undefined8 *)(puVar10 + 0x28);
      func_0x00010bf0cf00(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar12;
      func_0x00010c0720c0();
      if ((int)puVar5 == 0) {
        _objc_release(uVar9);
LAB_104d8c948:
        puVar7 = *(undefined **)(puVar10 + 0x28);
        func_0x00010bf0cf00(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar12;
        func_0x00010c0720c0();
        if (((ulong)puVar5 & 1) != 0) goto LAB_104d8c9f4;
        puVar5 = puVar6;
        func_0x00010c06e7c0();
        _objc_release(puVar7);
        if ((int)puVar5 != 0) {
          uVar9 = 0;
          goto LAB_104d8c988;
        }
      }
      else {
        puVar5 = puVar6;
        func_0x00010c06e7c0();
        _objc_release(uVar9);
        if (((ulong)puVar5 & 1) != 0) goto LAB_104d8c948;
        uVar9 = 1;
LAB_104d8c988:
        puVar5 = puVar6;
        FUN_104d8ac54(puVar6,uVar9,puVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar10;
        func_0x00010c29db80(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d04c0();
        _objc_release(puVar7);
        _objc_release(puVar5);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
LAB_104d8c9f4:
        _objc_release(puVar7);
      }
      _objc_release(puVar12);
      _objc_release(puVar6);
      puVar11 = puVar11 + 1;
      puVar12 = puVar10;
      func_0x00010c29db80();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar12;
      func_0x00010bf529e0();
      _objc_release(puVar12);
    } while (puVar11 < puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104d8c7c0; end: 104d8ca5b; -[SCCommerceAttachmentPaginationProvider _updateViewModelSelectionStates] */

void FUN_104d8c7c0(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c29db80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf529e0();
  _objc_release(uVar7);
  if (uVar2 != 0) {
    uVar7 = 0;
    do {
      uVar2 = param_1;
      func_0x00010c29db80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010bf51e00();
      _objc_release(uVar8);
      _objc_release(uVar2);
      _objc_retain(uVar3);
      puVar5 = PTR_PTR_1126b02c0;
      _objc_opt_class(PTR_PTR_1126b02c0);
      uVar2 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar5);
      puVar5 = PTR_PTR_1126b02c8;
      if ((uVar3 == 0) || ((uVar2 & 1) == 0)) {
        _objc_retain(uVar3);
        _objc_opt_class(puVar5);
        uVar2 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar5);
        _objc_release(uVar3);
        uVar8 = 0;
        if ((uVar3 != 0) && ((uVar2 & 1) != 0)) {
          uVar8 = uVar3;
          func_0x00010c257840();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        uVar8 = uVar3;
        func_0x00010c115ea0();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(uVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf0cf00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar8;
      func_0x00010c0720c0();
      if ((int)uVar2 == 0) {
        _objc_release(uVar4);
LAB_104d8c948:
        puVar5 = *(undefined **)(param_1 + 0x28);
        func_0x00010bf0cf00(puVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar8;
        func_0x00010c0720c0();
        if ((uVar2 & 1) != 0) goto LAB_104d8c9f4;
        uVar2 = uVar3;
        func_0x00010c06e7c0();
        _objc_release(puVar5);
        if ((int)uVar2 != 0) {
          uVar4 = 0;
          goto LAB_104d8c988;
        }
      }
      else {
        uVar2 = uVar3;
        func_0x00010c06e7c0();
        _objc_release(uVar4);
        if ((uVar2 & 1) != 0) goto LAB_104d8c948;
        uVar4 = 1;
LAB_104d8c988:
        uVar2 = uVar3;
        FUN_104d8ac54(uVar3,uVar4,uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_1;
        func_0x00010c29db80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d04c0();
        _objc_release(uVar6);
        _objc_release(uVar2);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
LAB_104d8c9f4:
        _objc_release(puVar5);
      }
      _objc_release(uVar8);
      _objc_release(uVar3);
      uVar7 = uVar7 + 1;
      uVar2 = param_1;
      func_0x00010c29db80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010bf529e0();
      _objc_release(uVar2);
    } while (uVar7 < uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d8ca5c; end: 104d8cb17; -[SCCommerceAttachmentPaginationProvider _updateItemsWithNewViewModels:] */

void FUN_104d8ca5c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  uVar2 = *(ulong *)(param_1 + 0x40);
  func_0x00010c0f1c60();
  *(bool *)(param_1 + 8) = uVar2 <= uVar1;
  func_0x00010befa160(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010bf51e00();
    puVar4 = *(undefined **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar5;
  }
  else {
    puVar4 = PTR_PTR_1126b02d8;
    _objc_opt_new(PTR_PTR_1126b02d8);
    func_0x00010bf09f60(uVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104d8cb18; end: 104d8cb23; -[SCCommerceAttachmentPaginationProvider items] */

void FUN_104d8cb18(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 104d8cb24; end: 104d8cb2b; -[SCCommerceAttachmentPaginationProvider currentPage] */

undefined8 FUN_104d8cb24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104d8cb2c; end: 104d8cb37; -[SCCommerceAttachmentPaginationProvider canLoadMorePages] */

byte FUN_104d8cb2c(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



/* Entry: 104d8cb38; end: 104d8cb43; -[SCCommerceAttachmentPaginationProvider errorModel] */

void FUN_104d8cb38(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 104d8cb44; end: 104d8cb4b; -[SCCommerceAttachmentPaginationProvider selectedProduct] */

undefined8 FUN_104d8cb44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104d8cb4c; end: 104d8cb53; -[SCCommerceAttachmentPaginationProvider setViewModels:] */

void FUN_104d8cb4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104d8cb54; end: 104d8cb5b; -[SCCommerceAttachmentPaginationProvider eventAnnouncer] */

undefined8 FUN_104d8cb54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104d8cb5c; end: 104d8cb8b; -[SCCommerceAttachmentPaginationProvider setEventAnnouncer:] */

void FUN_104d8cb5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8cb8c; end: 104d8cb93; -[SCCommerceAttachmentPaginationProvider dataCoordinator] */

undefined8 FUN_104d8cb8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104d8cb94; end: 104d8cbc3; -[SCCommerceAttachmentPaginationProvider setDataCoordinator:] */

void FUN_104d8cb94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8cbc4; end: 104d8cbcb; -[SCCommerceAttachmentPaginationProvider queue] */

undefined8 FUN_104d8cbc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104d8cbcc; end: 104d8cbfb; -[SCCommerceAttachmentPaginationProvider setQueue:] */

void FUN_104d8cbcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8cbfc; end: 104d8cc03; -[SCCommerceAttachmentPaginationProvider configProvider] */

undefined8 FUN_104d8cbfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104d8cc04; end: 104d8cc33; -[SCCommerceAttachmentPaginationProvider setConfigProvider:] */

void FUN_104d8cc04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d8cc34; end: 104d8ccab; -[SCCommerceAttachmentPaginationProvider .cxx_destruct] */

void FUN_104d8cc34(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 104d8ccac; end: 104d8cfcf; -[SCCommerceAttachmentToolViewController initWithEventLogger:imageSourceProvider:imageFetchingService:storeFetcher:delegate:storeModel:attachedProduct:configProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104d8ccac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  puStack_68 = PTR_PTR_1126e4210;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar7 = (long)_DAT_112712a34;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_4;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112712a38;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_5;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112712a3c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_3;
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712a40);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112712a40) = uVar2;
    _objc_release(uVar6);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112712a44,param_7);
    puVar3 = PTR_PTR_1126b02e8;
    _objc_alloc();
    func_0x00010c04cc00();
    lVar8 = (long)_DAT_112712a48;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02f0;
    _objc_alloc();
    func_0x00010c008600();
    lVar7 = (long)_DAT_112712a4c;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar2);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + lVar7));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    _objc_release(puVar4);
    func_0x00010beacf40(puVar1);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c257a20(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112712a50);
    func_0x00010bf5eee0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar6);
    func_0x00010beab960(puVar1);
    func_0x00010beaaa00(puVar1);
    func_0x00010beae580(puVar1);
    func_0x00010bea1fa0(puVar1);
    func_0x00010c09b800(*(undefined8 *)((long)puVar1 + lVar8));
  }
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



/* Entry: 104d8cfd0; end: 104d8d05b; -[SCCommerceAttachmentToolViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8cfd0(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e4210;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillAppear__1126853f0);
  lVar1 = (long)_DAT_112712a3c;
  FUN_104d8b130(*(undefined8 *)(param_1 + lVar1),*(undefined8 *)(param_1 + _DAT_112712a54));
  func_0x00010c0abc20(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c13c0e0(*(undefined8 *)(param_1 + _DAT_112712a58));
  return;
}



/* Entry: 104d8d05c; end: 104d8d0ab; -[SCCommerceAttachmentToolViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d8d05c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e4210;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010bfaf120(*(undefined8 *)(param_1 + _DAT_112712a58));
  return;
}


