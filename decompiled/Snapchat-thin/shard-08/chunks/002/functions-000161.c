/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ecb940; end: 105ecb997;  */

void FUN_105ecb940(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0cf00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ecb998; end: 105ecba63;  */

void FUN_105ecb998(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7c560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ecba64; end: 105ecbad3; -[SCMapBitmojiTrayViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecba64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c222380(param_1,param_2,*(undefined8 *)(param_1 + _DAT_1127398a4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ecbad4; end: 105ecbb1b; -[SCMapBitmojiTrayViewController viewWillAppear:] */

void FUN_105ecbad4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126edcb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010be4c8a0(param_1);
  return;
}



/* Entry: 105ecbb1c; end: 105ecbb77; -[SCMapBitmojiTrayViewController _removeStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecbb1c(long param_1,undefined8 param_2)

{
  func_0x00010c0b9e60(*(undefined8 *)(param_1 + _DAT_112739820),param_2,0xf,0,
                      *(undefined8 *)(param_1 + _DAT_11273988c));
  param_1 = param_1 + _DAT_112739814;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0b8900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ecbb78; end: 105ecbc1b; -[SCMapBitmojiTrayViewController _loadActionmojis] */

void FUN_105ecbb78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = 0x19;
  _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105ecbc1c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(uVar1,&puStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105ecbc1c; end: 105ecbcfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecbc1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112739818);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    func_0x00010bfa49c0(uVar2);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105ecbcfc; end: 105ecbd63;  */

void FUN_105ecbcfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be809e0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ecbd64; end: 105ecbe57; -[SCMapBitmojiTrayViewController _fetchSelectedHomeModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecbd64(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if ((*(char *)(param_1 + _DAT_112739858) == '\x01') && (*(long *)(param_1 + _DAT_11273989c) != 0))
  {
    _objc_initWeak(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11273985c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010bfa6100(uVar1);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 105ecbe58; end: 105ecbfeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecbe58(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126c5960;
    _objc_alloc(PTR_PTR_1126c5960);
    func_0x00010bffd2a0();
    if (param_3 != 0) {
      func_0x00010c1a4520(puVar1);
    }
    lVar2 = param_2;
    func_0x00010bfe3da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010bfe3da0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c1121a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16aa40(puVar1);
      _objc_release(lVar3);
      lVar3 = lVar2;
      func_0x00010bf63560(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1893c0(puVar1);
      _objc_release(lVar3);
      lVar3 = lVar2;
      func_0x00010c0d4f60(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16a880(puVar1);
      _objc_release(lVar3);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c102360(lVar2);
      func_0x00010c0df6e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1de2e0(puVar1);
      _objc_release(puVar4);
      _objc_release(lVar2);
    }
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11273989c));
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ecbfec; end: 105ecc0c3; -[SCMapBitmojiTrayViewController _getNowPlayingStateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecbfec(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112739878);
  func_0x00010c0bae40();
  if (iVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_initWeak(auStack_28,param_1);
    puVar2 = PTR_PTR_1126ae6b8;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010bf54280(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ecc0c4; end: 105ecc36f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecc0c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126c5968;
    _objc_alloc();
    func_0x00010c01f1e0();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112739874);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    _objc_retain(puVar1);
    func_0x00010bfc4040(uVar2);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105ecc370; end: 105ecc43f; -[SCMapBitmojiTrayViewController _toggleListenPrivatelyOff] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecc370(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112739874);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf9b8a0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105ecc440; end: 105ecc50f;  */

void FUN_105ecc440(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x105ecc4b8;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_48);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 105ecc510; end: 105ecc65b; -[SCMapBitmojiTrayViewController _presentMapAppearanceTrayWithInitialTab:onCloseBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecc510(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127398b0;
  if (*(long *)(param_1 + lVar6) != 0) {
    return;
  }
  _objc_retainBlock();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127398b4);
  *(undefined8 *)(param_1 + _DAT_1127398b4) = param_4;
  _objc_release(uVar4);
  lVar1 = param_1;
  func_0x000105eca808(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb6080();
  puVar2 = PTR_PTR_1126c5970;
  _objc_alloc(PTR_PTR_1126c5970);
  func_0x00010c058540();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112739880);
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf21f80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  func_0x00010c10ae00(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ecc65c; end: 105eccb1b; -[SCMapBitmojiTrayViewController _processCheckInOptions:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecc65c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 == 0) &&
     (lVar3 = param_3, func_0x00010bf529e0(), puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,
     lVar3 != 0)) {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_105eccb1c;
    uStack_70 = 0x105eccb2c;
    puStack_68 = (undefined *)0x0;
    lVar3 = param_3;
    func_0x00010c0b8620(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = puStack_88[5];
    func_0x00010c08fa60();
    puVar4 = PTR_PTR_1126c5978;
    _objc_alloc(PTR_PTR_1126c5978);
    func_0x00010bff07e0();
    if (lVar3 == 0) {
      uVar1 = puStack_88[5];
      puStack_88[5] = &PTR____CFConstantStringClassReference_110dc3a38;
      _objc_release(uVar1);
    }
    func_0x00010c066b00(puVar2);
    puVar5 = PTR_PTR_1126c5950;
    _objc_alloc(PTR_PTR_1126c5950);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112739898);
    func_0x00010c272120(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0ae0(puVar5);
    _objc_release(uVar1);
    func_0x00010beb6060(param_1);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c202220(puVar5);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21a000(puVar5);
    _objc_release(puVar6);
    func_0x00010c1fb480(puVar5);
    func_0x00010beb64e0(param_1);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c201f40(puVar5);
    _objc_release(puVar6);
    lVar3 = param_1;
    func_0x00010be21da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6ba0(puVar5);
    _objc_release(lVar3);
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_1127398a0));
    param_1 = param_1 + _DAT_112739830;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf529e0(puVar2);
    func_0x00010c0a9fe0(param_1);
    _objc_release(param_1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    __Block_object_dispose(&uStack_90,8);
    puVar2 = puStack_68;
  }
  else {
    puVar2 = PTR_PTR_1126c5950;
    _objc_alloc(PTR_PTR_1126c5950);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112739898);
    func_0x00010c272120(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff0ae0(puVar2);
    _objc_release(uVar1);
    func_0x00010beb6060(param_1);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c202220(puVar2);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21a000(puVar2);
    _objc_release(puVar4);
    func_0x00010c1fb480(puVar2);
    func_0x00010beb64e0(param_1);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c201f40(puVar2);
    _objc_release(puVar4);
    lVar3 = param_1;
    func_0x00010be21da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e6ba0(puVar2);
    _objc_release(lVar3);
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_1127398a0));
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105eccb1c; end: 105eccb33;  */

void FUN_105eccb1c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105eccb34; end: 105eccc9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eccb34(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0dab60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273982c);
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      uVar1 = param_2;
      func_0x00010c0dab60();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        uVar1 = param_2;
        func_0x00010beee760();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
        uVar4 = *(undefined8 *)(lVar3 + 0x28);
        *(ulong *)(lVar3 + 0x28) = uVar1;
        _objc_release(uVar4);
      }
    }
    puVar5 = PTR_PTR_1126c5978;
    _objc_alloc(PTR_PTR_1126c5978);
    uVar1 = param_2;
    func_0x00010beee760(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c0dab60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff07e0(puVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105eccc9c; end: 105ecce83; -[SCMapBitmojiTrayViewController _refreshViewModelWithBitmojiAvatarId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eccc9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_1127398a0;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  _objc_retain(param_3);
  func_0x00010c29d560(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c5950;
  _objc_alloc(PTR_PTR_1126c5950);
  uVar2 = uVar5;
  func_0x00010beef460(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c09cb40(uVar5);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112739898);
  func_0x00010c272120(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0ae0(puVar1,param_2,uVar2,param_3,uVar3,uVar4);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = uVar5;
  func_0x00010c159dc0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb480(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = uVar5;
  func_0x00010c2923e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = uVar5;
  func_0x00010c27b5a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a000(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = uVar5;
  func_0x00010c2397a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c201f40(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = uVar5;
  func_0x00010c11e960(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6ba0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = uVar5;
  func_0x00010c23ae80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c202220(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar6),param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105ecce84; end: 105eccfdf; -[SCMapBitmojiTrayViewController _didChooseStatusOptionWithActionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecce84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112739868);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfcc660();
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar4 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar4);
    uVar3 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar3 == 0) {
      func_0x00010be77ee0(param_1);
    }
    else {
      func_0x00010be8d5a0(param_1);
    }
  }
  else {
    lVar5 = (long)_DAT_1127398b8;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = param_3;
    _objc_release();
    FUN_105eca854();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105eccfe0;
    puStack_58 = &UNK_110841f80;
    lStack_50 = param_1;
    uStack_48 = uVar3;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105eccfe0; end: 105eccfef;  */

void FUN_105eccfe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__exposeShareLocationFlowScopeExp_112560e78,0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105eccff0; end: 105ecd0a3; -[SCMapBitmojiTrayViewController _prepareAndSendRequestWithActionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eccff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if ((*(byte *)(param_1 + _DAT_1127398bc) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_1127398bc) = 1;
  puVar1 = PTR_PTR_1126c5980;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c17c100();
  func_0x00010c17c160(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1a3a20(puVar1,param_2,0);
  func_0x00010c1d5ec0(puVar1,param_2,5);
  func_0x00010c207200(puVar1,param_2,3);
  func_0x00010bea7f20(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ecd0a4; end: 105ecd31b; -[SCMapBitmojiTrayViewController _setStatusWithRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecd0a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  lVar8 = (long)_DAT_1127398a0;
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010beef460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf529e0();
  _objc_release(uVar7);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + lVar8);
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010beef460();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105ecd31c;
  puStack_70 = &UNK_1108f3410;
  _objc_retain(param_3);
  lVar5 = lVar4;
  uStack_68 = param_3;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010beef460();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010bfecde0();
    _objc_release(uVar1);
    _objc_release(uVar6);
  }
  func_0x00010c0b9ea0(*(undefined8 *)(param_1 + _DAT_112739820));
  _objc_initWeak(auStack_90,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273981c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_a8,auStack_90);
  uStack_a0 = uVar7;
  uStack_98 = uVar2;
  _objc_retain(param_3);
  func_0x00010bef7640(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_90);
  _objc_release(lVar5);
  _objc_release(uStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 105ecd31c; end: 105ecd38b;  */

undefined8 FUN_105ecd31c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010beee760(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf38820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 105ecd38c; end: 105ecd4ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecd38c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_1127398bc) = 0;
    if (param_2 == 0) {
      uVar5 = *(undefined8 *)(lVar1 + _DAT_112739820);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf38820(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b9e80(uVar5);
      _objc_release(uVar2);
      puVar3 = PTR_PTR_1126bf300;
      uVar2 = param_3;
      func_0x00010c253880(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c253fe0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      lVar4 = lVar1 + _DAT_112739814;
      _objc_loadWeakRetained(lVar4);
      uVar2 = param_3;
      func_0x00010c253260(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b8820(lVar4);
      _objc_release(uVar2);
      _objc_release(lVar4);
    }
    else {
      puVar3 = (undefined *)(lVar1 + _DAT_112739814);
      _objc_loadWeakRetained(puVar3);
      func_0x00010c0b88e0();
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ecd500; end: 105ecd653; -[SCMapBitmojiTrayViewController _initiatePlusSubscriptionUpsellWithSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecd500(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112739844;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c071800();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + lVar7);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126b1da8;
      _objc_alloc(PTR_PTR_1126b1da8);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                          *(undefined8 *)(param_1 + _DAT_11273988c));
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04abe0(puVar3,param_2,0x36,puVar5,0x25,param_3,0xf,0);
      _objc_release(puVar5);
      _objc_release(puVar4);
      lVar2 = param_1;
      func_0x000105eca808(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + _DAT_112739848);
      func_0x00010bf23e60(uVar6,param_2,lVar2,puVar3,param_1,4,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar7),param_2,uVar6);
      _objc_release(uVar6);
      _objc_release(lVar2);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ecd654; end: 105ecd663; -[SCMapBitmojiTrayViewController scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecd654(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c065590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127398a4),PTR_s_innerScrollView_1125f6f70);
  return;
}



/* Entry: 105ecd664; end: 105ecd66f; -[SCMapBitmojiTrayViewController trayFeatureName] */

undefined ** FUN_105ecd664(void)

{
  return &PTR____CFConstantStringClassReference_110dd6e38;
}



/* Entry: 105ecd670; end: 105ecd693; -[SCMapBitmojiTrayViewController prepareForChangeFromPosition:toPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecd670(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112739888),PTR_s_next__112614028,
               PTR____kCFBooleanTrue_11034ab68);
    return;
  }
  return;
}



/* Entry: 105ecd694; end: 105ecd6df; -[SCMapBitmojiTrayViewController handleGripperAreaTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecd694(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127398a4);
  func_0x00010c065580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182300(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ecd6e0; end: 105ecd817; -[SCMapBitmojiTrayViewController _exposeHomeWorkScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecd6e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11273984c;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x000105eca808(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb6080(param_1);
  puVar2 = PTR_PTR_1126c5988;
  _objc_alloc(PTR_PTR_1126c5988);
  func_0x00010c00b180();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
  lVar5 = param_1;
  func_0x00010beb6060();
  if ((int)lVar5 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112739850);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a8fa0();
    _objc_release(uVar4);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ecd818; end: 105ecd88b; -[SCMapBitmojiTrayViewController _shouldShowHomesBadged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_105ecd818(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112739850);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe3fe0();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + _DAT_112739860);
  func_0x0001090218bc();
  func_0x00010beb6080(param_1);
  uVar1 = (undefined4)param_1;
  if (lVar3 < lVar2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 105ecd88c; end: 105ecd8eb; -[SCMapBitmojiTrayViewController _shouldShowHomesOnboarding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105ecd88c(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  bVar1 = *(byte *)(param_1 + _DAT_112739858);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112739850);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  if ((bVar1 & 1) == 0) {
    uVar4 = uVar3;
    func_0x00010bfe4000();
    uVar2 = (uint)uVar4;
  }
  else {
    uVar4 = uVar3;
    func_0x00010bfe4020();
    uVar2 = (uint)uVar4;
  }
  _objc_release(uVar3);
  return uVar2 ^ 1;
}



/* Entry: 105ecd8ec; end: 105ecdaaf; -[SCMapBitmojiTrayViewController _observeHomesOnboardingSeen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecd8ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e30298;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e30278;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e302b8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_60,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112739850);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puVar5 = auStack_68;
  _objc_copyWeak(auStack_70,puVar5);
  uVar4 = uVar2;
  func_0x00010c0e0c60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_1127398c0);
  *(undefined8 *)(param_1 + _DAT_1127398c0) = uVar4;
  _objc_release(uVar6);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume(puVar1);
  func_0x00010bf002e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010be2a8a0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105ecdab0; end: 105ecdaff;  */

void FUN_105ecdab0(long param_1,undefined8 param_2)

{
  func_0x00010bf002e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a8a0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105ecdb00; end: 105ecdbe3; -[SCMapBitmojiTrayViewController _handleHomesOnboardingSeenUpdatesWithChangedKeys:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecdb00(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf4b900(param_3,param_2,&PTR____CFConstantStringClassReference_110e30298);
  if ((((uVar1 & 1) != 0) ||
      (uVar1 = param_3,
      func_0x00010bf4b900(param_3,param_2,&PTR____CFConstantStringClassReference_110e30278),
      (uVar1 & 1) != 0)) ||
     (uVar1 = param_3,
     func_0x00010bf4b900(param_3,param_2,&PTR____CFConstantStringClassReference_110e302b8),
     (int)uVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_1127398a0);
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c23ae80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    if ((int)uVar4 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = param_1;
      func_0x00010beb6060();
      _objc_release(uVar3);
      if ((uVar1 & 1) == 0) {
        func_0x00010bee39c0(param_1,param_2,0);
      }
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ecdbe4; end: 105ecdde3; -[SCMapBitmojiTrayViewController _updateViewModelWithShowHomesNewBadge:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecdbe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = (long)_DAT_1127398a0;
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c29d560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c5950;
  _objc_alloc(PTR_PTR_1126c5950);
  uVar3 = uVar1;
  func_0x00010beef460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf1acc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c09cb40(uVar1);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112739898);
  func_0x00010c272120(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0ae0(puVar2,param_2,uVar3,uVar4,uVar5,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c159dc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb480(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c27b5a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a000(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c2397a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c201f40(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c11e960(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6ba0(puVar2,param_2,uVar3);
  _objc_release(uVar3);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c202220(puVar2,param_2,puVar7);
  _objc_release(puVar7);
  func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar8),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ecdde4; end: 105ecde3b; -[SCMapBitmojiTrayViewController plusSubscribeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecdde4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112739844;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105ecde3c; end: 105ecde93; -[SCMapBitmojiTrayViewController mapHomeWorkSettingsScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecde3c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273984c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105ecde94; end: 105ecdfbf; -[SCMapBitmojiTrayViewController mapHomeWorkSettingsSavedWithSelectedHome:gridIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecde94(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = (long)_DAT_11273989c;
  if (*(long *)(param_1 + lVar5) != 0) {
    puVar1 = PTR_PTR_1126c5960;
    _objc_alloc(PTR_PTR_1126c5960);
    func_0x00010bffd2a0();
    lVar2 = param_3;
    func_0x00010c1121a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      lVar2 = param_3;
      func_0x00010c1121a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16aa40(puVar1,param_2,lVar2);
      _objc_release(lVar2);
      func_0x00010c1a4520(puVar1,param_2,param_4);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar2 = param_3;
      func_0x00010c102360(param_3);
      func_0x00010c0df6e0(puVar4,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1de2e0(puVar1,param_2,puVar4);
      _objc_release(puVar4);
    }
    func_0x00010c0d9840(*(undefined8 *)(param_1 + lVar5),param_2,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ecdfc0; end: 105ece13f; -[SCMapBitmojiTrayViewController onTapMyPoseWithActionmojis:selectedPoseId:use3d:] */

void FUN_105ecdfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x105ece0ac;
  puStack_60 = &UNK_110844dd0;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_retain(param_4);
  uStack_50 = param_4;
  uStack_40 = param_5;
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ece140; end: 105ece28f; -[SCMapBitmojiTrayViewController onTapMyCarWithUserInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ece140(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_112739840);
  func_0x00010c260800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c080120();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) == 0) {
    func_0x00010be3bea0(param_1,param_2,&PTR____CFConstantStringClassReference_110e302f8);
  }
  else {
    lVar7 = (long)_DAT_112739838;
    lVar5 = *(long *)(param_1 + lVar7);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      lVar5 = param_1;
      func_0x000105eca808(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126c5998;
      _objc_alloc(PTR_PTR_1126c5998);
      func_0x00010c056f00();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar7),param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(lVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ece290; end: 105ece36b; -[SCMapBitmojiTrayViewController onTapMyPetWithUserInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ece290(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112739838;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x000105eca808(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c5998;
    _objc_alloc(PTR_PTR_1126c5998);
    func_0x00010c056f00();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar3),param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ece36c; end: 105ece3fb; -[SCMapBitmojiTrayViewController onToggleGhostModeWithUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ece36c(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127398b8);
  *(undefined8 *)(param_1 + _DAT_1127398b8) = 0;
  _objc_release();
  FUN_105eca854();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105ece3fc;
  puStack_38 = &UNK_110841f80;
  lStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uVar1);
  return;
}



/* Entry: 105ece3fc; end: 105ece40b;  */

void FUN_105ece3fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__exposeShareLocationFlowScopeExp_112560e78,0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105ece40c; end: 105ece4b3; -[SCMapBitmojiTrayViewController onTapContinue] */

void FUN_105ece40c(undefined8 param_1)

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
  pcStack_40 = FUN_105ece4b4;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105ece4b4; end: 105ece517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ece4b4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112739814;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0b88c0();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ece518; end: 105ece5e7; -[SCMapBitmojiTrayViewController onTapQuickShareCellWithUserId:] */

void FUN_105ece518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105ece5e8;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105ece5e8; end: 105ece647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ece5e8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112739814;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0b8800();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ece648; end: 105ece6b3; -[SCMapBitmojiTrayViewController onTapShareLocationWithUserId:] */

void FUN_105ece648(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = param_1;
    func_0x000105eca808(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0d360(param_1,param_2,param_3,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ece6b4; end: 105ece827; -[SCMapBitmojiTrayViewController _exposeShareLocationFlowScopeExposerWithFriendId:uiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ece6b4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar6 = (long)_DAT_1127398c8;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126c59a0;
    _objc_alloc(PTR_PTR_1126c59a0);
    if (param_3 == 0) {
      func_0x00010c0583e0(puVar1);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_50 = param_3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0583e0(puVar1);
      _objc_release(puVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273983c);
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    func_0x00010c10ae00(*(undefined8 *)(param_1 + lVar6));
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_105ece828;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105ece880;
  puStack_70 = &UNK_110842e18;
  lStack_68 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  return;
}



/* Entry: 105ece828; end: 105ece87f; -[SCMapBitmojiTrayViewController mapUpsellWantsToDismissTray] */

void FUN_105ece828(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105ece880;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105ece880; end: 105ece8b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ece880(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112739814;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0ba380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ece8b8; end: 105ece8bf; -[SCMapBitmojiTrayViewController shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105ece8b8(void)

{
  return 0;
}



/* Entry: 105ece8c0; end: 105ece97b; -[SCMapBitmojiTrayViewController _launchSubTraySIGWithViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ece8c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x000105eca808(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0a08;
  _objc_alloc();
  func_0x00010c055640();
  _objc_release(param_3);
  lVar4 = (long)_DAT_1127398ac;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  func_0x00010c167420(*(undefined8 *)(param_1 + lVar4),param_2,10);
  func_0x00010c219e20(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  func_0x00010c219c20(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x00010c10c720(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar4),param_2,lVar1,0,8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ece97c; end: 105ecec1b; -[SCMapBitmojiTrayViewController _createViewForPosesTrayWithActionmojis:selectedPoseId:use3d:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ece97c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126c59a8;
  _objc_alloc(PTR_PTR_1126c59a8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112739884);
  func_0x00010c272140(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105ecec1c;
  puStack_88 = &UNK_110843540;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010c055560(puVar1);
  _objc_release(uVar2);
  func_0x00010c1c76c0(puVar1);
  puVar3 = PTR_PTR_1126c59b0;
  _objc_alloc_init(PTR_PTR_1126c59b0);
  func_0x00010c162120();
  func_0x00010c1acd00(puVar3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112739868);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcc660();
  func_0x00010c0df6e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1ca0(puVar3);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126c59b8;
  _objc_alloc(PTR_PTR_1126c59b8);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112739824);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105ecec1c; end: 105ececc3;  */

void FUN_105ecec1c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105ececc4;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105ececc4; end: 105eced33;  */

void FUN_105ececc4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdfcc00(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105eced34; end: 105ecedbb; -[SCMapBitmojiTrayViewController _closePosesTray] */

void FUN_105eced34(undefined8 param_1)

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
  pcStack_40 = FUN_105ecedbc;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105ecedbc; end: 105ecee23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecedbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_1127398ac;
    func_0x00010bf83180(*(undefined8 *)(param_1 + lVar2),param_2,1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127398c4);
    *(undefined8 *)(param_1 + _DAT_1127398c4) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ecee24; end: 105ecee6f; -[SCMapBitmojiTrayViewController tray:positionDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecee24(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 2) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127398ac);
    *(undefined8 *)(param_1 + _DAT_1127398ac) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127398c4);
    *(undefined8 *)(param_1 + _DAT_1127398c4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105ecee70; end: 105ecee7b; -[SCMapBitmojiTrayViewController tray:heightForPosition:] */

undefined8 FUN_105ecee70(void)

{
  return 0x4081300000000000;
}



/* Entry: 105ecee7c; end: 105eceed3; -[SCMapBitmojiTrayViewController mapCarsAndPetsScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecee7c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112739838;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105eceed4; end: 105eceffb; -[SCMapBitmojiTrayViewController logActionWithActionInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eceed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_112739854);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010beedca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_105ed006c(uVar4,uVar1,1);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112739820);
  uVar1 = param_3;
  func_0x00010beedca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb01e90();
  uVar4 = param_3;
  func_0x00010c084c40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c084480(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0844e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0b9e20(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105eceffc; end: 105ecf173; -[SCMapBitmojiTrayViewController logCloseWithCloseInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105eceffc(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
  double dVar11;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  dVar11 = *(double *)(param_2 + _DAT_112739890);
  uVar9 = *(undefined8 *)(param_2 + _DAT_112739820);
  uVar10 = *(undefined8 *)(param_2 + _DAT_11273988c);
  uVar1 = *(undefined8 *)(param_2 + _DAT_1127398a0);
  func_0x00010c29d560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beef460();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  uVar4 = param_4;
  func_0x00010c2540c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bf31920(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c0fa7c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010bfe3dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010bfe3e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0b9e40(param_1 - dVar11,uVar9,param_3,uVar10,0,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ecf174; end: 105ecf283; -[SCMapBitmojiTrayViewController _observeSharingPreferences] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecf174(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112739868);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1067e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127398cc);
  *(undefined8 *)(param_1 + _DAT_1127398cc) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105ecf284; end: 105ecf2b7;  */

void FUN_105ecf284(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bee38c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ecf2b8; end: 105ecf323; -[SCMapBitmojiTrayViewController _shouldShowQuickShareFriends] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105ecf2b8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112739868);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22c5c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (uVar3 & 0xfffffffffffffffd) == 0;
}



/* Entry: 105ecf324; end: 105ecf59b; -[SCMapBitmojiTrayViewController _getQuickShareFriends] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_105ecf324(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar3 = *(long *)(param_1 + _DAT_112739864);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c11e980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar4);
  puVar10 = &uStack_130;
  lVar3 = lVar4;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar14 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar4);
        }
        uVar12 = *(undefined8 *)(lStack_128 + lVar14 * 8);
        uVar5 = uVar12;
        func_0x00010bfb7860(uVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126c59c0;
        _objc_alloc_init(PTR_PTR_1126c59c0);
        uVar7 = uVar5;
        func_0x00010c2923e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21e620(puVar6,param_2,uVar7);
        _objc_release(uVar7);
        uVar7 = uVar5;
        func_0x00010bf85d80(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18fca0(puVar6,param_2,uVar7);
        _objc_release(uVar7);
        uVar7 = uVar5;
        func_0x00010bf1acc0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16da00(puVar6,param_2,uVar7);
        _objc_release(uVar7);
        uVar7 = uVar5;
        func_0x00010bf1c0a0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fbc60(puVar6,param_2,uVar7);
        _objc_release(uVar7);
        func_0x00010c247520(uVar12);
        lVar8 = param_1;
        func_0x00010be85a40(param_1,param_2,uVar12);
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c180f60(puVar6,param_2,puVar9);
        _objc_release(puVar9);
        func_0x00010befa120(puVar2,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(uVar5);
        lVar14 = lVar14 + 1;
      } while (lVar3 != lVar14);
      puVar10 = &uStack_130;
      lVar3 = lVar4;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar4);
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  uVar11 = 1;
  if (puVar10 == (undefined8 *)0x1) {
    uVar11 = 2;
  }
  uVar1 = 0;
  if (puVar10 != (undefined8 *)0x2) {
    uVar1 = uVar11;
  }
  return (undefined *)(ulong)uVar1;
}



/* Entry: 105ecf59c; end: 105ecf5b3; -[SCMapBitmojiTrayViewController _quickShareSourceToFriendConnectionType:] */

undefined4 FUN_105ecf59c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_3 == 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (param_3 != 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 105ecf5b4; end: 105ecf8db; -[SCMapBitmojiTrayViewController _updateViewModelForPrefsChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecf5b4(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112739868);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfcc660();
  uVar1 = (undefined4)uVar4;
  FUN_105eca880();
  *(undefined4 *)(param_1 + _DAT_112739894) = uVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273986c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c28eea0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_112739898;
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(param_1 + lVar8) = uVar3;
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127398a0);
  func_0x00010c29d560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c5950;
  _objc_alloc();
  uVar3 = uVar2;
  func_0x00010beef460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf1acc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09cb40(uVar2);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c272120(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0ae0();
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c159dc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb480(puVar5);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar5);
  _objc_release(uVar3);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a000(puVar5);
  _objc_release(puVar7);
  uVar3 = uVar2;
  func_0x00010c23ae80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c202220(puVar5);
  _objc_release(uVar3);
  func_0x00010beb64e0(param_1);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c201f40(puVar5);
  _objc_release(puVar7);
  lVar8 = param_1;
  func_0x00010be21da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6ba0(puVar5);
  _objc_release(lVar8);
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105ecf8dc;
  puStack_70 = &UNK_110841fb0;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(puVar5);
  puStack_68 = puVar5;
  func_0x0001000d76cc("APPSTORE",&puStack_88);
  _objc_release(puStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar5);
  _objc_release(uVar2);
  return;
}



/* Entry: 105ecf8dc; end: 105ecf91f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecf8dc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c2226c0(*(undefined8 *)(lVar1 + _DAT_1127398a0),param_2,
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105ecf920; end: 105ecf953; -[SCMapBitmojiTrayViewController shareLocationFlowScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecf920(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127398c8);
  *(undefined8 *)(param_1 + _DAT_1127398c8) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bee38d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewModelForPrefsChange_1125967d8);
  return;
}



/* Entry: 105ecf954; end: 105ecf9fb; -[SCMapBitmojiTrayViewController onExitGhostModeWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecf954(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_3 != 0) {
    lVar4 = (long)_DAT_1127398b8;
    lVar1 = *(long *)(param_1 + lVar4);
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      uVar2 = *(ulong *)(param_1 + lVar4);
      func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc3a38);
      if ((uVar2 & 1) == 0) {
        func_0x00010be77ee0(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
      }
    }
  }
  if (*(long *)(param_1 + _DAT_1127398ac) != 0) {
    func_0x00010bde16a0(param_1);
  }
  lVar1 = param_1 + _DAT_112739814;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0b88e0();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127398b8);
  *(undefined8 *)(param_1 + _DAT_1127398b8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105ecf9fc; end: 105ecfa4b; -[SCMapBitmojiTrayViewController trayScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecf9fc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127398b0);
  *(undefined8 *)(param_1 + _DAT_1127398b0) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_1127398b4;
  uVar1 = 0;
  if (*(long *)(param_1 + lVar2) != 0) {
    (**(code **)(*(long *)(param_1 + lVar2) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
  }
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ecfa4c; end: 105ecfd03; -[SCMapBitmojiTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecfa4c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127398b8,0);
  _objc_storeStrong(param_1 + _DAT_1127398b4,0);
  _objc_storeStrong(param_1 + _DAT_1127398b0,0);
  _objc_storeStrong(param_1 + _DAT_112739880,0);
  _objc_storeStrong(param_1 + _DAT_11273987c,0);
  _objc_storeStrong(param_1 + _DAT_112739878,0);
  _objc_storeStrong(param_1 + _DAT_112739874,0);
  _objc_storeStrong(param_1 + _DAT_112739854,0);
  _objc_storeStrong(param_1 + _DAT_1127398a8,0);
  _objc_storeStrong(param_1 + _DAT_112739870,0);
  _objc_storeStrong(param_1 + _DAT_112739898,0);
  _objc_storeStrong(param_1 + _DAT_11273986c,0);
  _objc_storeStrong(param_1 + _DAT_1127398c8,0);
  _objc_storeStrong(param_1 + _DAT_11273983c,0);
  _objc_storeStrong(param_1 + _DAT_1127398cc,0);
  _objc_storeStrong(param_1 + _DAT_112739868,0);
  _objc_storeStrong(param_1 + _DAT_112739864,0);
  _objc_storeStrong(param_1 + _DAT_112739860,0);
  _objc_storeStrong(param_1 + _DAT_1127398c0,0);
  _objc_storeStrong(param_1 + _DAT_112739888,0);
  _objc_storeStrong(param_1 + _DAT_11273985c,0);
  _objc_storeStrong(param_1 + _DAT_11273989c,0);
  _objc_storeStrong(param_1 + _DAT_1127398c4,0);
  _objc_storeStrong(param_1 + _DAT_1127398ac,0);
  _objc_storeStrong(param_1 + _DAT_112739884,0);
  _objc_destroyWeak(param_1 + _DAT_112739830);
  _objc_storeStrong(param_1 + _DAT_1127398a0,0);
  _objc_storeStrong(param_1 + _DAT_1127398a4,0);
  _objc_storeStrong(param_1 + _DAT_112739850,0);
  _objc_storeStrong(param_1 + _DAT_11273984c,0);
  _objc_storeStrong(param_1 + _DAT_112739848,0);
  _objc_storeStrong(param_1 + _DAT_112739844,0);
  _objc_storeStrong(param_1 + _DAT_112739840,0);
  _objc_storeStrong(param_1 + _DAT_112739838,0);
  _objc_storeStrong(param_1 + _DAT_112739834,0);
  _objc_storeStrong(param_1 + _DAT_11273982c,0);
  _objc_storeStrong(param_1 + _DAT_112739824,0);
  _objc_storeStrong(param_1 + _DAT_11273981c,0);
  _objc_storeStrong(param_1 + _DAT_112739820,0);
  _objc_storeStrong(param_1 + _DAT_112739828,0);
  _objc_storeStrong(param_1 + _DAT_112739818,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112739814);
  return;
}



/* Entry: 105ecfd04; end: 105ecfdb3; -[SCMapBitmojiPosesTrayViewController initWithValdiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105ecfd04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126edcc0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1931e0(puVar1);
    puVar2 = PTR_PTR_1126b1e38;
    _objc_alloc();
    func_0x00010c05fb60();
    lVar4 = (long)_DAT_1127398d0;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar4));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ecfdb4; end: 105ecfe23; -[SCMapBitmojiPosesTrayViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecfdb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c222380(param_1,param_2,*(undefined8 *)(param_1 + _DAT_1127398d0));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ecfe24; end: 105ecfe6f; -[SCMapBitmojiPosesTrayViewController viewDidLoad] */

void FUN_105ecfe24(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126edcc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c189400(param_1);
  return;
}



/* Entry: 105ecfe70; end: 105ecfe83; -[SCMapBitmojiPosesTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ecfe70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127398d0,0);
  return;
}



/* Entry: 105ecfe84; end: 105ecfef7; -[SCGrapheneMapBitmojiTrayMetric2 init] */

undefined1 * FUN_105ecfe84(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126edcc8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105ecfef8; end: 105ed006b;  */

void FUN_105ecfef8(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f34af17;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108f34a0;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108f34a0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_105ed006c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f34af17;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_1108f34f0;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108f34f0,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_105ed01e0;
  if (puVar3 != (undefined *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    puStack_120 = puVar2;
    puStack_118 = puVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_1108f3540,&uStack_140,puVar4);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 105ed006c; end: 105ed01df;  */

void FUN_105ed006c(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f34af17;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108f34f0;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108f34f0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_105ed01e0;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_1108f3540,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 105ed01e0; end: 105ed0257;  */

void FUN_105ed01e0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108f3540,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105ed0258; end: 105ed034b; -[SCMapDropsAnnotationController initWithDropsAnnotationManager:mapView:mapViewport:edgePadding:] */

undefined1 *
FUN_105ed0258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126edcd0;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 105ed034c; end: 105ed0383; -[SCMapDropsAnnotationController placeDrop:] */

void FUN_105ed034c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc6c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addFeatureToMap_11254f4a0);
  return;
}



/* Entry: 105ed0384; end: 105ed055f; -[SCMapDropsAnnotationController updateDropWithCoordinate:] */

void FUN_105ed0384(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bf000;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010bf8aa20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010bf5b460(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010c0d4f60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010bf1b9c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010c15adc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252440(*(undefined8 *)(param_3 + 0x40));
  func_0x00010c06f8e0();
  func_0x00010c237fc0();
  uVar7 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010befd6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010c0fc060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07d080();
  func_0x00010c00e760(param_1,param_2);
  uVar9 = *(undefined8 *)(param_3 + 0x40);
  *(undefined **)(param_3 + 0x40) = puVar1;
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c2854e0(*(undefined8 *)(param_3 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010be18470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2,param_3,PTR_s__flyToCoordinates__112563ab8)
  ;
  return;
}



/* Entry: 105ed0560; end: 105ed05b7; -[SCMapDropsAnnotationController updateDrop:] */

void FUN_105ed0560(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c2854e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ed05b8; end: 105ed05c7; -[SCMapDropsAnnotationController removeDrop] */

void FUN_105ed05b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeDrop__112628a30,
             *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 105ed05c8; end: 105ed0697; -[SCMapDropsAnnotationController _addFeatureToMap] */

void FUN_105ed05c8(double param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_3 + 8);
  uStack_40 = *(undefined8 *)(param_3 + 0x40);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fd040(uVar3,param_4,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
  func_0x00010bf51c80(*(undefined8 *)(param_3 + 0x40));
  func_0x00010be18460();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  dVar4 = param_1;
  func_0x00010c2bf200(*(undefined8 *)(param_3 + 0x18));
  dVar6 = 18.0;
  if (dVar4 <= 18.0) {
    func_0x00010c2bf200(*(undefined8 *)(param_3 + 0x18));
    dVar6 = 14.0;
    if (14.0 < dVar4) {
      func_0x00010c2bf200(*(undefined8 *)(param_3 + 0x18));
      dVar6 = dVar4;
    }
  }
  puVar1 = PTR_PTR_1126b1e08;
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010bf28e60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fc7c0();
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  dVar5 = dVar4;
  func_0x00010bf28e60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0320();
  func_0x00010bf29880(param_1,param_2,dVar6,dVar4,dVar5,puVar1,param_4,
                      *(undefined8 *)(param_3 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  func_0x00010c176100(0x3fd999999999999a,*(undefined8 *)(param_3 + 0x18),param_4,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ed0698; end: 105ed07bb; -[SCMapDropsAnnotationController _flyToCoordinates:] */

void FUN_105ed0698(double param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = param_1;
  func_0x00010c2bf200(*(undefined8 *)(param_3 + 0x18));
  dVar6 = 18.0;
  if (dVar4 <= 18.0) {
    func_0x00010c2bf200(*(undefined8 *)(param_3 + 0x18));
    dVar6 = 14.0;
    if (14.0 < dVar4) {
      func_0x00010c2bf200(*(undefined8 *)(param_3 + 0x18));
      dVar6 = dVar4;
    }
  }
  puVar3 = PTR_PTR_1126b1e08;
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010bf28e60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fc7c0();
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  dVar5 = dVar4;
  func_0x00010bf28e60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0320();
  func_0x00010bf29880(param_1,param_2,dVar6,dVar4,dVar5,puVar3,param_4,
                      *(undefined8 *)(param_3 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c176100(0x3fd999999999999a,*(undefined8 *)(param_3 + 0x18),param_4,puVar3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105ed07bc; end: 105ed0803; -[SCMapDropsAnnotationController .cxx_destruct] */

void FUN_105ed07bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ed0804; end: 105ed08d3; -[SCMapDropsDataProvider initWithPlaceProfileDataFetcher:mapStoryPreviewFetcher:] */

undefined1 *
FUN_105ed0804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126edcd8;
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
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ed08d4; end: 105ed08ef;  */

void FUN_105ed08d4(void)

{
  _objc_alloc_init(PTR__OBJC_CLASS___MKDistanceFormatter_1126b1f88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ed08f0; end: 105ed0a0b; -[SCMapDropsDataProvider fetchNearbyPlacesForPinCoordinate:dataSubject:] */

void FUN_105ed08f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_3);
  uVar1 = *(undefined8 *)(param_3 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_1;
  uStack_50 = param_2;
  func_0x00010bfa8e00(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 105ed0a0c; end: 105ed0b13;  */

void FUN_105ed0a0c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    _objc_copyWeak(auStack_58,param_1 + 0x28);
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    lVar1 = param_2;
    func_0x00010c0b8600(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105ed0b14; end: 105ed0bcf;  */

void FUN_105ed0b14(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c08aca0(param_3);
  uVar3 = param_1;
  func_0x00010c09abe0(param_3);
  _CLLocationCoordinate2DMake(param_1,uVar3);
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010be1f2e0(param_1,uVar3,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30))
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = param_3;
  func_0x0001068779ec(param_3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105ed0bd0; end: 105ed0d3b; -[SCMapDropsDataProvider fetchNearbyPlacePreviewThumbnailForPlaceId:dataSubject:] */

void FUN_105ed0bd0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x105ed0ca4;
    puStack_40 = &UNK_1108f3650;
    _objc_retain(param_4);
    uStack_38 = param_4;
    func_0x00010bfa9680(uVar2,param_2,param_3,0,0,&puStack_58);
    _objc_release(uVar2);
    _objc_release(uStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ed0d3c; end: 105ed0de3; -[SCMapDropsDataProvider _getFormattedDistanceFromPinWithPlaceLocation:pinLocation:] */

void FUN_105ed0d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_5;
  _CLLocationCoordinate2DIsValid();
  iVar1 = (int)lVar2;
  if ((iVar1 == 0) || (_CLLocationCoordinate2DIsValid(param_3,param_4), iVar1 == 0)) {
    uVar4 = 0;
  }
  else {
    func_0x000108d312a8(param_1,param_2,param_3,param_4);
    uVar3 = *(undefined8 *)(param_5 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c25d440(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105ed0de4; end: 105ed0e1f; -[SCMapDropsDataProvider .cxx_destruct] */

void FUN_105ed0de4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


