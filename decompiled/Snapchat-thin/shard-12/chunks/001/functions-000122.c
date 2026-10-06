/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e3b2c0; end: 108e3b367;  */

void FUN_108e3b2c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108e3b368;
    puStack_40 = &UNK_110ac6fd0;
    uVar2 = param_2;
    lStack_38 = lVar1;
    func_0x000107c31908(param_2,&puStack_58);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e3b368; end: 108e3b373;  */

void FUN_108e3b368(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddb210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__captionCarouselEntityModelFromS_112554620,
             param_2);
  return;
}



/* Entry: 108e3b374; end: 108e3b613; -[SCCaptionCarouselController _captionCarouselEntityModelFromSnapchatter:] */

void FUN_108e3b374(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126dc208;
  _objc_opt_new();
  func_0x00010c196680();
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196620(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f6c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x000107c2aaa4();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bf5b820(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c116cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5920(puVar1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010bf5b820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf15520();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(int)uVar3 == 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3fc0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126dc210;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar4,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf1bae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16da00(puVar4,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf1bae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fbc60(puVar4,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16dc80(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126dc218;
    _objc_opt_new(PTR_PTR_1126dc218);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_3 + 0x39)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200b80(puVar1,param_2,puVar4);
    _objc_release(puVar4);
    func_0x00010c194b00(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e3b614; end: 108e3b683; -[SCCaptionCarouselController _settings] */

void FUN_108e3b614(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dc218;
  _objc_opt_new(PTR_PTR_1126dc218);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x39));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c200b80(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c194b00(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e3b684; end: 108e3b76f; -[SCCaptionCarouselController _setCurrentCaptionText:currentSelectedRange:] */

void FUN_108e3b684(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_3);
  uStack_58 = param_4;
  uStack_50 = param_5;
  func_0x00010bfc69a0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 108e3b770; end: 108e3b7c7;  */

void FUN_108e3b770(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(lVar1 + 0x78) = uVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(lVar1 + 0x88) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(lVar1 + 0x80) = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e3b7c8; end: 108e3b89f; -[SCCaptionCarouselController _setCurrentCaptionColor:] */

void FUN_108e3b7c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bfc69a0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108e3b8a0; end: 108e3b8e7;  */

void FUN_108e3b8a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x90);
    *(undefined8 *)(lVar1 + 0x90) = uVar3;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e3b8e8; end: 108e3b9bf; -[SCCaptionCarouselController _setCurrentCaptionStyle:] */

void FUN_108e3b8e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bfc69a0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108e3b9c0; end: 108e3ba13;  */

void FUN_108e3b9c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be61f60(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x70);
    *(long *)(lVar1 + 0x70) = lVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e3ba14; end: 108e3ba1b; -[SCCaptionCarouselController _getCurrentCaptionStyle] */

void FUN_108e3ba14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__dynamicCaptionStyleForNativeCTI_11255f478,
             *(undefined8 *)(param_1 + 0x70));
  return;
}



/* Entry: 108e3ba1c; end: 108e3ba97; -[SCCaptionCarouselController _nativeCTItemForCaptionStyle:] */

void FUN_108e3ba1c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010bdc22c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126dc1f8;
    _objc_alloc(PTR_PTR_1126dc1f8);
    func_0x00010bffa140();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e3ba98; end: 108e3bb5f; -[SCCaptionCarouselController _dynamicCaptionStyleForNativeCTItem:] */

void FUN_108e3ba98(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b0cb8;
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc();
    lVar2 = param_3;
    func_0x00010bf25f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c008360(puVar1,param_2,lVar2,0);
    _objc_release(lVar2);
    if (puVar1 == (undefined *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010bf96e00(uVar3,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c113040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108e3bb60; end: 108e3bbe7; -[SCCaptionCarouselController _handleCarouselAction] */

void FUN_108e3bb60(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108e3bbe8;
  puStack_38 = &UNK_110ac7030;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108e3bbe8; end: 108e3bcf3;  */

void FUN_108e3bbe8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = param_2;
    func_0x00010c27dd80();
    iVar1 = (int)uVar2;
    uVar2 = param_2;
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        func_0x00010c25e120(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be26f40(param_1);
      }
      else {
        if (iVar1 != 1) goto LAB_108e3bcd8;
        func_0x00010c26c480(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be26f60(param_1);
      }
    }
    else if (iVar1 == 2) {
      func_0x00010bf41100(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be26f00(param_1);
    }
    else {
      if (iVar1 != 4) goto LAB_108e3bcd8;
      func_0x00010bf9e440(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be26f20(param_1);
    }
    _objc_release(uVar2);
  }
LAB_108e3bcd8:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e3bcf4; end: 108e3bd7b; -[SCCaptionCarouselController _handleCarouselActionText:] */

void FUN_108e3bcf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108e3bd7c;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_3;
  uStack_28 = param_1;
  _objc_retain(param_3);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_3);
  return;
}



/* Entry: 108e3bd7c; end: 108e3c1af;  */

void FUN_108e3bd7c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf96f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    ppuVar3 = (undefined **)(*(long *)(param_1 + 0x28) + 0x28);
    _objc_loadWeakRetained();
    ppuVar5 = ppuVar3;
    func_0x00010bf5e800();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar5;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar14 = ppuVar4;
    }
    func_0x00010c0d3c80();
    _objc_release(ppuVar4);
    _objc_release(ppuVar5);
    _objc_release(ppuVar3);
    ppuVar5 = *(undefined ***)(param_1 + 0x20);
    func_0x00010c26c5e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar5;
    func_0x00010c24d960();
    _objc_release(ppuVar5);
    ppuVar5 = ppuVar14;
    func_0x00010c08fa60();
    if (ppuVar5 < ppuVar3) {
      ppuVar3 = ppuVar14;
      func_0x00010c08fa60(ppuVar14);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c26b700(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066ec0(ppuVar14,param_2,uVar6,ppuVar3);
    _objc_release(uVar6);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + 0x28) + 0x28;
    _objc_loadWeakRetained(lVar1);
    lVar7 = lVar1;
    func_0x00010bf5e800();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar14;
    func_0x00010bf51e00(ppuVar14);
    if ((int)uVar6 != 0) {
      func_0x00010c213420();
      _objc_release(ppuVar3);
      _objc_release(lVar7);
      _objc_release(lVar1);
      func_0x00010c0b2da0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20));
      goto LAB_108e3c014;
    }
    func_0x00010c212f20(lVar7,param_2,ppuVar3);
    _objc_release(ppuVar3);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf96f00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c067ec0();
    _objc_release(uVar2);
    if ((int)uVar6 != 0) {
      return;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    ppuVar14 = *(undefined ***)(*(long *)(param_1 + 0x28) + 0x18);
    func_0x00010c26b700(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c260c00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c244440(ppuVar14,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar6);
    if (ppuVar14 == (undefined **)0x0) {
      lVar1 = *(long *)(param_1 + 0x20);
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        return;
      }
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar9;
      func_0x00010c06f8e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar6;
      func_0x00010bf1f3c0();
      _objc_release(uVar6);
      _objc_release(uVar9);
      _objc_release(lVar1);
      if ((int)uVar2 == 0) {
        return;
      }
      ppuVar14 = (undefined **)PTR_PTR_1126b15c8;
      _objc_alloc();
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf96da0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar10;
      func_0x00010bf96e80();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf96da0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar11;
      func_0x00010c260dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf96da0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar12;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR_PTR_1126bb3e8;
      _objc_opt_new();
      func_0x00010c05c0e0(ppuVar14,param_2,uVar6,uVar2,uVar9,0,0,0,0,0);
      _objc_release(puVar13);
      _objc_release(uVar9);
      _objc_release(uVar12);
      _objc_release(uVar2);
      _objc_release(uVar11);
      _objc_release(uVar6);
      _objc_release(uVar10);
      if (ppuVar14 == (undefined **)0x0) {
        return;
      }
    }
    lVar1 = *(long *)(param_1 + 0x28) + 0x28;
    _objc_loadWeakRetained(lVar1);
    lVar7 = *(long *)(param_1 + 0x20);
    func_0x00010c26c5e0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c24d960();
    func_0x00010bfd2bc0(lVar1,param_2,ppuVar14,lVar8);
  }
  _objc_release(lVar7);
  _objc_release(lVar1);
LAB_108e3c014:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar14);
  return;
}



/* Entry: 108e3c1b0; end: 108e3c273; -[SCCaptionCarouselController _handleCarouselActionStyleModel:] */

void FUN_108e3c1b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x00010c271b20(param_3,param_2,*(undefined8 *)(param_1 + 0x68));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c1593c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea31e0(param_1);
  _objc_release(uVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108e3c274;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000107c312cc("APPSTORE",&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108e3c274; end: 108e3c2ab;  */

void FUN_108e3c274(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c15a120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e3c2ac; end: 108e3c393; -[SCCaptionCarouselController _handleCarouselActionColorModel:] */

void FUN_108e3c2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf40c40(param_3);
  func_0x00010bf41580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea31c0(param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x108e3c35c;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  puStack_28 = puVar1;
  _objc_retain(puVar1);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_release(puStack_28);
  _objc_release(puVar1);
  return;
}



/* Entry: 108e3c394; end: 108e3c45f; -[SCCaptionCarouselController _handleCarouselActionExternalModel:] */

void FUN_108e3c394(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x108e3c41c;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 108e3c460; end: 108e3c487; -[SCCaptionCarouselController containerView] */

void FUN_108e3c460(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e3c488; end: 108e3c497; -[SCCaptionCarouselController carouselMode] */

bool FUN_108e3c488(long param_1)

{
  return *(int *)(param_1 + 0x98) == 2;
}



/* Entry: 108e3c498; end: 108e3c543; -[SCCaptionCarouselController switchToCarouselMode:] */

void FUN_108e3c498(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  
  if (param_3 == 1) {
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d06a8;
  }
  else {
    if (param_3 != 2) {
      return;
    }
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf5e800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0fb8e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea31c0(param_1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0690;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_next__112614028,ppuVar4);
  return;
}



/* Entry: 108e3c544; end: 108e3c553; -[SCCaptionCarouselController setAndScrollToSelectedItemWithCaptionStyle:] */

void FUN_108e3c544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_next__112614028,
             &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d0678);
  return;
}



/* Entry: 108e3c554; end: 108e3c603; -[SCCaptionCarouselController selectedCaptionStyle] */

void FUN_108e3c554(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010be1e3a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010bf5e800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf303a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  else {
    _objc_retain(lVar1);
    lVar4 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108e3c604; end: 108e3c60b; -[SCCaptionCarouselController captionScrollCount] */

undefined8 FUN_108e3c604(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 108e3c60c; end: 108e3c653; -[SCCaptionCarouselController captionStyleLoadingTime] */

undefined8 FUN_108e3c60c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bf2ff00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c2580();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108e3c654; end: 108e3c693; -[SCCaptionCarouselController updateCaptionStylesFromMemoriesWithSet:] */

void FUN_108e3c654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf00560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed4de0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e3c694; end: 108e3c87f; -[SCCaptionCarouselController willStartEditingCaption:] */

void FUN_108e3c694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf8c8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c159e80();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf303a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be61f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0fb8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126dc220;
  _objc_opt_new();
  func_0x00010c197d00();
  _objc_initWeak(auStack_68,param_1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(uVar1);
  uStack_78 = uVar3;
  uStack_70 = param_2;
  _objc_retain(lVar4);
  _objc_retain(uVar2);
  _objc_retain(puVar5);
  func_0x00010bfc69a0(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108e3c880; end: 108e3c913;  */

void FUN_108e3c880(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(lVar1 + 0x78) = uVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(lVar1 + 0x88) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(lVar1 + 0x80) = uVar2;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(lVar1 + 0x70) = uVar3;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x90);
    *(undefined8 *)(lVar1 + 0x90) = uVar3;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x58),param_2,*(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e3c914; end: 108e3c9a3; -[SCCaptionCarouselController captionSelectionChanged:text:] */

void FUN_108e3c914(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x80);
  lVar2 = *(long *)(param_1 + 0x88);
  func_0x00010bea3200(param_1,param_2,param_5,param_3,param_4);
  if (param_3 != lVar1 || param_4 != lVar2) {
    puVar3 = PTR_PTR_1126dc220;
    _objc_opt_new(PTR_PTR_1126dc220);
    func_0x00010c197d00();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 108e3c9a4; end: 108e3c9e7; -[SCCaptionCarouselController prepareToStopCaptionEditing] */

void FUN_108e3c9a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc220;
  _objc_opt_new(PTR_PTR_1126dc220);
  func_0x00010c197d00();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e3c9e8; end: 108e3c9ef; -[SCCaptionCarouselController captionDataProviderDidUpdate:captionStylesWithNoRecents:] */

void FUN_108e3c9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed4df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCaptionStyles__112592d20,param_4);
  return;
}



/* Entry: 108e3c9f0; end: 108e3cab7; -[SCCaptionCarouselController .cxx_destruct] */

void FUN_108e3c9f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e3cab8; end: 108e3cdfb; -[SCCaptionStickerSuggestionsController initWithValdiRuntime:infoStickerDataProvider:captionStickerSuggestionsServices:delegate:] */

undefined8 *
FUN_108e3cab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_80 = PTR_PTR_1126fea88;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_6);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar5 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar5);
    _objc_initWeak(auStack_90,puVar1);
    uVar5 = param_5;
    func_0x00010c0b7260();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[3];
    puVar1[3] = uVar5;
    _objc_release(uVar6);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    uVar5 = puVar1[3];
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_108e3cdfc;
    puStack_a0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010c18df60(uVar5);
    func_0x00010bf1a280(puVar1[3]);
    puVar3 = PTR_PTR_1126dc228;
    _objc_opt_new(PTR_PTR_1126dc228);
    uVar5 = puVar1[2];
    func_0x00010c272120(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20bd40(puVar3);
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126dc230;
    _objc_opt_new(PTR_PTR_1126dc230);
    puStack_e0 = puVar2;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_108e3cec0;
    puStack_c8 = &UNK_110ac7090;
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010c1d3740(puVar4);
    puStack_108 = puVar2;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x108e3cf9c;
    puStack_f0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_e8,auStack_90);
    func_0x00010c1d43a0(puVar4);
    _objc_copyWeak(auStack_110,auStack_90);
    func_0x00010c1d1f00(puVar4);
    puVar2 = PTR_PTR_1126dc238;
    _objc_alloc();
    func_0x00010c061d40();
    uVar5 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar5);
    func_0x00010c1953e0(puVar1[5]);
    func_0x00010c125600(puVar1);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108e3cdfc; end: 108e3cebf;  */

void FUN_108e3cdfc(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108e3ce74;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x000107c312d0("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108e3cec0; end: 108e3cf67;  */

void FUN_108e3cec0(long param_1,undefined8 param_2)

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
  pcStack_50 = FUN_108e3cf68;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x000107c312d0("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 108e3cf68; end: 108e3d0e3;  */

void FUN_108e3cf68(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be012c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e3d0e4; end: 108e3d10b; -[SCCaptionStickerSuggestionsController containerView] */

void FUN_108e3d0e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e3d10c; end: 108e3d14f; -[SCCaptionStickerSuggestionsController hasRenderableSuggestions] */

bool FUN_108e3d10c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf12a20(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  return lVar2 != 0;
}



/* Entry: 108e3d150; end: 108e3d1af; -[SCCaptionStickerSuggestionsController refreshSuggestions] */

void FUN_108e3d150(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf12a20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071ae0();
  if ((uVar2 & 1) == 0) {
    _objc_retain(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x20) = uVar1;
    _objc_release(uVar3);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e3d1b0; end: 108e3d24f; -[SCCaptionStickerSuggestionsController _didTapSticker:] */

void FUN_108e3d1b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b0cc0;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bf25f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c008360(puVar1,param_2,uVar2,0);
  _objc_release(uVar2);
  if (puVar1 != (undefined *)0x0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf30320();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e3d250; end: 108e3d27b; -[SCCaptionStickerSuggestionsController _didTapViewAll] */

void FUN_108e3d250(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf30340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e3d27c; end: 108e3d2a7; -[SCCaptionStickerSuggestionsController _didTapCutout] */

void FUN_108e3d27c(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf30300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e3d2a8; end: 108e3d2f7; -[SCCaptionStickerSuggestionsController .cxx_destruct] */

void FUN_108e3d2a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108e3d2f8; end: 108e3d3c3; -[SCCaptionStyleLabel init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e3d2f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fea90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c17d4c0(puVar1);
    func_0x00010c213040(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277c254);
    *(undefined **)((long)puVar1 + (long)_DAT_11277c254) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e3d3c4; end: 108e3dc3f; -[SCCaptionStyleLabel setCaptionStyle:isDynamicCaptionStyle:text:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e3d3c4(long param_1,undefined8 param_2,undefined *param_3,ulong param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c16b720(param_1,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = (long)_DAT_11277c254;
  uVar14 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar14);
  puVar2 = param_3;
  func_0x00010c113040(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110e29558,param_2,puVar3);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  if ((uVar4 & 1) == 0) {
    puVar5 = param_3;
    func_0x00010c113040(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfb40c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfb3f20();
    _objc_retainAutoreleasedReturnValue();
    dVar17 = 18.0;
    func_0x00010bfb41a0(puVar1,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  else {
    dVar17 = 18.0;
    func_0x00010bfb41a0(PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
                        &PTR____CFConstantStringClassReference_110efb098);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126dc078;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010c113040(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c25e080();
    _objc_retainAutoreleasedReturnValue();
    dVar17 = 18.0;
    func_0x00010bfa0380(puVar2,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = puVar2;
  }
  func_0x00010c19e480(param_1,param_2,puVar1);
  puVar2 = param_3;
  func_0x00010c113040();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar5 = param_3;
    func_0x00010c113040();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c25e080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  else {
    _objc_retain(puVar3);
    puVar6 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar6;
  if (param_5 != (undefined *)0x0) {
    puVar2 = param_5;
  }
  func_0x00010c212f20(param_1,param_2,puVar2);
  _objc_release(param_5);
  func_0x00010c1cfce0(param_1,param_2,1);
  func_0x00010c165e20(param_1,param_2,1);
  if ((param_4 & 1) == 0) {
    func_0x00010c099280(puVar1);
    dVar17 = 18.5 / dVar17;
    iVar16 = (int)dVar17;
    lVar8 = param_1;
    func_0x00010bfb3a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ab40();
    dVar17 = (dVar17 + -14.5) * (double)iVar16;
    iVar16 = (int)dVar17;
    _objc_release(lVar8);
  }
  else {
    func_0x00010bf0ab40();
    dVar22 = dVar17;
    func_0x00010c099280(puVar1);
    dVar17 = dVar17 / dVar22;
    iVar13 = -2;
    if (0.66 < dVar17) {
      iVar13 = -1;
    }
    iVar16 = 0;
    if (dVar17 <= 0.75) {
      iVar16 = iVar13;
    }
  }
  lVar8 = param_1;
  func_0x00010c26b700(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c08fa60();
  _objc_release(lVar8);
  puVar2 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  lVar8 = param_1;
  func_0x00010bf0e540(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4f40(puVar2,param_2,lVar8);
  _objc_release(lVar8);
  uVar14 = *(undefined8 *)PTR__NSBaselineOffsetAttributeName_1103457c0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,iVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6f20(puVar2,param_2,uVar14,puVar3,0,lVar9);
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010c113040(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c26c7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea7680(param_1,param_2,puVar10,puVar2);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  func_0x00010c16b720(param_1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c16f5a0(param_1,param_2,1);
  puVar3 = param_3;
  func_0x00010c113040(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb4000();
  dVar22 = 1.0;
  if (0.0 < dVar17) {
    puVar7 = param_3;
    func_0x00010c113040(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010bfb40c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb4000();
    dVar22 = 18.0 / dVar17;
    _objc_release(puVar10);
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
  _objc_release(puVar3);
  dVar18 = 70.0;
  dVar21 = 1.79769313486232e+308;
  func_0x00010c23d5a0(0x4051800000000000,0x7fefffffffffffff,param_1);
  puVar3 = param_3;
  dVar19 = dVar18;
  func_0x00010c113040(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c26c540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08e8a0();
  dVar17 = dVar22 * dVar19;
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010c113040(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c26c540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c274800();
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  dVar20 = 0.0;
  func_0x00010c19f0e0(0,0,dVar18 + dVar17,dVar21 + dVar22 * dVar19,param_1);
  puVar3 = param_3;
  func_0x00010c113040();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf144e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puVar5 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1,param_2,puVar3);
  }
  else {
    puVar3 = puVar5;
    func_0x00010bf13d40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bf416c0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1,param_2,puVar10);
    _objc_release(puVar10);
    _objc_release(puVar7);
  }
  _objc_release(puVar3);
  func_0x00010bf1fbe0(puVar5);
  if (dVar20 == 0.0) {
    dVar20 = 0.0;
  }
  else {
    func_0x00010bf1fbe0(puVar5);
    dVar20 = dVar22 * dVar20;
  }
  lVar8 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0();
  _objc_release(lVar8);
  puVar3 = param_3;
  func_0x00010c113040(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010c26b920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea4060(param_1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010c113040(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb3bc0();
  *(double *)(param_1 + _DAT_11277c258) = dVar22 * dVar20;
  _objc_release(puVar7);
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010c113040();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf1fb20();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf416c0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010bf529e0();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar3);
  if (puVar12 != (undefined *)0x0) {
    puVar3 = param_3;
    func_0x00010c113040();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bfb40c0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010bf1fb20();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf416c0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + lVar15);
    *(undefined **)(param_1 + lVar15) = puVar12;
    _objc_release(uVar14);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar7);
    _objc_release(puVar3);
  }
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e3dc40; end: 108e3dd6f; -[SCCaptionStyleLabel drawTextInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e3dc40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar2 = param_5;
  _UIGraphicsGetCurrentContext();
  _CGContextSaveGState();
  lVar3 = param_5;
  func_0x00010c26b920(param_5);
  _objc_retainAutoreleasedReturnValue();
  _CGContextSetLineWidth(*(undefined8 *)(param_5 + _DAT_11277c258),lVar2);
  _CGContextSetLineJoin(lVar2,1);
  _CGContextSetTextDrawingMode(lVar2,1);
  func_0x00010c213180(param_5);
  puVar1 = PTR_s_drawTextInRect__11252d418;
  puStack_68 = PTR_PTR_1126fea90;
  lStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&lStack_70,PTR_s_drawTextInRect__11252d418);
  _CGContextSetTextDrawingMode(lVar2,0);
  func_0x00010c213180(param_5);
  puStack_78 = PTR_PTR_1126fea90;
  lStack_80 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&lStack_80,puVar1);
  _CGContextRestoreGState(lVar2);
  _objc_release(lVar3);
  return;
}



/* Entry: 108e3dd70; end: 108e3ded3; -[SCCaptionStyleLabel _setShadows:attributeString:] */

void FUN_108e3dd70(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bf40c40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf416c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSShadow_1126b6158;
    _objc_opt_new(PTR__OBJC_CLASS___NSShadow_1126b6158);
    lVar1 = param_4;
    func_0x00010bf40c40(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf416c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740(puVar4,param_3,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c2bea40(param_4);
    uVar5 = param_1;
    func_0x00010c2bec60(param_4);
    func_0x00010c1fe7a0(param_1,uVar5,puVar4);
    func_0x00010c11ef60(param_4);
    func_0x00010c1fe720(puVar4);
    uVar6 = *(undefined8 *)PTR__NSShadowAttributeName_110345828;
    uVar5 = param_5;
    func_0x00010c08fa60(param_5);
    func_0x00010bef6f20(param_5,param_3,uVar6,puVar4,0,uVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e3ded4; end: 108e3e187; -[SCCaptionStyleLabel _setFontColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e3ded4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar1 = param_7;
  func_0x00010bf416c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(param_5);
  }
  else {
    puVar1 = param_7;
    func_0x00010bf416c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf529e0();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x1) {
      puVar1 = param_7;
      func_0x00010bf416c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(param_5);
      _objc_release(puVar2);
    }
    else {
      func_0x00010bfb68e0(param_5);
      func_0x00010bfb68e0(param_5);
      uVar7 = 0;
      func_0x00010c26c660(0,0,param_3,param_5);
      uVar8 = uVar7;
      uVar9 = param_3;
      func_0x00010bfb68e0(param_5);
      puVar1 = PTR_PTR_1126dc078;
      puVar2 = param_7;
      uVar10 = param_4;
      func_0x00010bf416c0(param_7);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_7;
      func_0x00010bf41360(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf41000(param_7);
      func_0x00010bfb68e0(param_5);
      func_0x00010bfb68e0(param_5);
      puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c2971a0(uVar7,0,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcd9a0(uVar8,uVar9,uVar10,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41600(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(param_5);
      _objc_release(puVar2);
    }
  }
  _objc_release(puVar1);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_7 + _DAT_11277c254,0);
    return;
  }
  return;
}



/* Entry: 108e3e188; end: 108e3e19b; -[SCCaptionStyleLabel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e3e188(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c254,0);
  return;
}



/* Entry: 108e3e19c; end: 108e3e223; -[SCCaptionCarouselFeatureEvent initWithEntity:type:] */

undefined1 *
FUN_108e3e19c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fea98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e3e224; end: 108e3e247; -[SCCaptionCarouselFeatureEvent copyWithZone:] */

undefined8 FUN_108e3e224(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e3e248; end: 108e3e2b3; -[SCCaptionCarouselFeatureEvent hash] */

undefined8 * FUN_108e3e248(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108e3e338;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_108e3e338;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_108e3e338;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_108e3e338:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 108e3e2b4; end: 108e3e353; -[SCCaptionCarouselFeatureEvent isEqual:] */

long FUN_108e3e2b4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e3e338;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_108e3e338;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108e3e338;
    }
  }
  lVar3 = 1;
LAB_108e3e338:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e3e354; end: 108e3e35b; -[SCCaptionCarouselFeatureEvent entity] */

undefined8 FUN_108e3e354(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e3e35c; end: 108e3e363; -[SCCaptionCarouselFeatureEvent type] */

undefined8 FUN_108e3e35c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e3e364; end: 108e3e36f; -[SCCaptionCarouselFeatureEvent .cxx_destruct] */

void FUN_108e3e364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e3e370; end: 108e3e3fb; -[SCCaptionCarouselEvent initWithSelectedCaptionStyle:selectedIndex:gestureType:] */

undefined1 *
FUN_108e3e370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126feaa0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e3e3fc; end: 108e3e41f; -[SCCaptionCarouselEvent copyWithZone:] */

undefined8 FUN_108e3e3fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108e3e420; end: 108e3e48f; -[SCCaptionCarouselEvent hash] */

undefined8 * FUN_108e3e420(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108e3e524;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_108e3e524;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 8);
    if (puVar4 != *(undefined1 **)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108e3e524;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_108e3e524:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 108e3e490; end: 108e3e53f; -[SCCaptionCarouselEvent isEqual:] */

long FUN_108e3e490(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108e3e524;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_108e3e524;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108e3e524;
    }
  }
  lVar3 = 1;
LAB_108e3e524:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108e3e540; end: 108e3e547; -[SCCaptionCarouselEvent selectedCaptionStyle] */

undefined8 FUN_108e3e540(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e3e548; end: 108e3e54f; -[SCCaptionCarouselEvent selectedIndex] */

undefined8 FUN_108e3e548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e3e550; end: 108e3e557; -[SCCaptionCarouselEvent gestureType] */

undefined8 FUN_108e3e550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108e3e558; end: 108e3e563; -[SCCaptionCarouselEvent .cxx_destruct] */

void FUN_108e3e558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e3e564; end: 108e3e56f; +[SCCreativeToolsNativeStickerSuggestionsCarousel componentPath] */

undefined ** FUN_108e3e564(void)

{
  return &PTR____CFConstantStringClassReference_110efb598;
}



/* Entry: 108e3e570; end: 108e3e5a3; -[SCCreativeToolsNativeStickerSuggestionsCarousel initWithViewModel:componentContext:runtime:] */

void FUN_108e3e570(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126feaa8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 108e3e5a4; end: 108e3e5f3; -[SCCreativeToolsNativeStickerSuggestionsCarousel setViewModel:] */

void FUN_108e3e5a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e3e5f4; end: 108e3e637; -[SCCreativeToolsNativeStickerSuggestionsCarousel viewModel] */

void FUN_108e3e5f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e3e638; end: 108e3e703; -[SCCreativeToolsNativeStickerSuggestionsCarouselContext initWithOnStickerTapped:onViewAllTapped:onCutoutTapped:] */

undefined8 *
FUN_108e3e638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  puStack_48 = PTR_PTR_1126feab0;
  puVar3 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 108e3e704; end: 108e3e717; +[SCCreativeToolsNativeStickerSuggestionsCarouselContext valdiMarshallableObjectDescriptor] */

void FUN_108e3e704(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ac70c0;
  param_1[1] = &PTR_DAT_110ac7120;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 108e3e718; end: 108e3e753; -[SCCreativeToolsNativeStickerSuggestionsCarouselViewModel initWithStickersObservable:] */

void FUN_108e3e718(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126feab8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 108e3e754; end: 108e3e777; +[SCCreativeToolsNativeStickerSuggestionsCarouselViewModel valdiMarshallableObjectDescriptor] */

void FUN_108e3e754(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ac7130;
  param_1[1] = &PTR_s_SCBridgeObservable_110ac7160;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 108e3e778; end: 108e3e813; -[CTPObservableDebounce initWithTimeout:parent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108e3e778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126feac0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277c270) = param_1;
    lVar3 = (long)_DAT_11277c274;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108e3e814; end: 108e3e8ab; -[CTPObservableDebounce subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e3e814(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dc240;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277c274);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c030f00(*(undefined8 *)(param_1 + _DAT_11277c270));
  _objc_release(param_3);
  func_0x00010c25fd20(uVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108e3e8ac; end: 108e3e8bf; -[CTPObservableDebounce .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e3e8ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277c274,0);
  return;
}



/* Entry: 108e3e8c0; end: 108e3e95f; -[CTPObserverDebounce initWithObserver:timeout:] */

undefined1 *
FUN_108e3e8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126feac8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    puVar3 = PTR_PTR_1126bad10;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108e3e960; end: 108e3e9bf; -[CTPObserverDebounce _timeoutEndedWithNext:] */

void FUN_108e3e960(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c09faa0(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e3e9c0; end: 108e3eb1b; -[CTPObserverDebounce next:] */

void FUN_108e3e9c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x18) != 0) {
    _dispatch_block_cancel();
  }
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108e3eb1c;
  puStack_60 = &UNK_110841fb0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uVar1 = 0;
  uStack_58 = param_3;
  func_0x000107c27d90(0,&puStack_78);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
  uVar1 = 0;
  _dispatch_time(0,(long)(*(double *)(param_1 + 0x10) * 1000000000.0));
  uVar2 = 0x11;
  func_0x000107c312b8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27d84(uVar1,uVar2,*(undefined8 *)(param_1 + 0x18));
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 108e3eb1c; end: 108e3eb4f;  */

void FUN_108e3eb1c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010becc140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e3eb50; end: 108e3eb57; -[CTPObserverDebounce complete] */

void FUN_108e3eb50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 108e3eb58; end: 108e3eb93; -[CTPObserverDebounce .cxx_destruct] */

void FUN_108e3eb58(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e3eb94; end: 108e3ebd3; -[SCObservable creativeTools_debounce:] */

void FUN_108e3eb94(undefined8 param_1)

{
  _objc_alloc(PTR_PTR_1126dc248);
  func_0x00010c0527a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e3ebd4; end: 108e3ebef; -[SCObservable switchOnNext] */

void FUN_108e3ebd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2656f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_switchMap__112676fe0,&PTR___NSConcreteGlobalBlock_110ac7198);
  return;
}



/* Entry: 108e3ebf0; end: 108e3eca3;  */

undefined1  [16] FUN_108e3ebf0(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_3);
  uVar2 = 0;
  if ((long)param_1 >> 1 == param_1 >> 1) {
    uVar3 = 0;
    if (((long)param_2 >> 1 == param_2 >> 1) &&
       (uVar1 = param_3, func_0x00010c08fa60(), uVar2 = param_1, uVar3 = param_2,
       uVar1 < param_1 + param_2)) {
      uVar2 = param_3;
      func_0x00010c08fa60();
      if (uVar2 <= param_1) {
        param_1 = uVar2;
      }
      uVar3 = param_3;
      func_0x00010c08fa60(param_3);
      uVar2 = param_1;
      uVar3 = uVar3 - param_1;
    }
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 108e3eca4; end: 108e3ecb3;  */

void FUN_108e3eca4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xd4);
  return;
}



/* Entry: 108e3ecb4; end: 108e3efcb; +[SCCaptionHelpers gradientImageFromColors:colorStops:colorGradientAngleDegree:imageSize:drawingRects:] */

void FUN_108e3ecb4(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  ulong param_6,ulong param_7,ulong param_8,ulong param_9)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dStack_b0;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar14 = param_3;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar6 = param_7;
  func_0x00010bf529e0();
  if (uVar6 == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = param_8;
    func_0x00010bf529e0(param_8);
    _UIGraphicsBeginImageContext(param_2,param_3);
    _UIGraphicsGetCurrentContext();
    uVar6 = uVar1;
    _CGColorSpaceCreateDeviceRGB();
    uVar2 = param_7;
    func_0x00010c0b8600(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_8;
    func_0x00010bf529e0();
    uVar4 = uVar6;
    param_6 = uVar2;
    if (uVar7 == 0) {
      _CGGradientCreateWithColors(uVar6,uVar2,0);
    }
    else {
      uVar7 = param_8;
      func_0x00010bf529e0(param_8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(uVar7 * 8 + 0xf & 0xfffffffffffffff0);
      uVar7 = param_8;
      func_0x00010bf529e0();
      if (uVar7 != 0) {
        uVar7 = 0;
        do {
          fVar8 = SUB84(param_2,0);
          uVar3 = param_8;
          func_0x00010c0dfd40(param_8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb2c80();
          param_2 = (double)fVar8;
          *(double *)(((long)&dStack_b0 - extraout_x8) + uVar7 * 8) = param_2;
          _objc_release(uVar3);
          uVar7 = uVar7 + 1;
          uVar3 = param_8;
          func_0x00010bf529e0();
        } while (uVar7 < uVar3);
      }
      _CGGradientCreateWithColors(uVar6,uVar2,(long)&dStack_b0 - extraout_x8);
    }
    uVar5 = 0;
    if (param_1 != 90.0) {
      uVar5 = 3;
    }
    uVar7 = param_9;
    func_0x00010bf529e0();
    if (uVar7 != 0) {
      dVar12 = 180.0;
      dVar9 = (param_1 * 3.141592653589793) / 180.0;
      ___sincos_stret(dVar9);
      uVar7 = 0;
      dVar15 = dVar9;
      dVar13 = dVar12;
      do {
        uVar3 = param_9;
        func_0x00010c0dfd20(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc1080();
        _objc_release(uVar3);
        dVar11 = dVar15;
        _CGRectGetWidth(dVar15,dVar13,dVar14,param_4);
        dVar10 = dVar15;
        _CGRectGetHeight(dVar15,dVar13,dVar14,param_4);
        dVar14 = dVar15 + dVar11 * 0.5;
        param_4 = dVar13 + dVar10 * 0.5;
        dVar16 = dVar12 * dVar11 * 0.5;
        dVar15 = dVar14 - dVar16;
        dVar11 = dVar9 * dVar10 * 0.5;
        dVar13 = param_4 - dVar11;
        dVar14 = dVar14 + dVar16;
        param_4 = param_4 + dVar11;
        param_6 = uVar4;
        _CGContextDrawLinearGradient(uVar1,uVar4,uVar5);
        uVar7 = uVar7 + 1;
        uVar3 = param_9;
        func_0x00010bf529e0();
      } while (uVar7 < uVar3);
    }
    _CGGradientRelease(uVar4);
    _CGColorSpaceRelease(uVar6);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retainAutorelease(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108e3efcc; end: 108e3efe3;  */

void FUN_108e3efcc(undefined8 param_1,undefined8 param_2)

{
  _objc_retainAutorelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108e3efe4; end: 108e3f0db; +[SCCaptionHelpers fallBackToSystemfontOfSize:captionStyleId:] */

void FUN_108e3efe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110efb5b8;
  func_0x00010c0b5ac0(&PTR____CFConstantStringClassReference_110efb5b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfda7c0(param_4,param_3,ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f40(param_1,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar2 != 0) {
    puVar4 = puVar3;
    func_0x00010bfb3ce0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb3d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bfb4160(0,PTR__OBJC_CLASS___UIFont_1126aec38,param_3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e3f0dc; end: 108e3f1b3; -[SCCaptionStateUtils init] */

undefined1 * FUN_108e3f0dc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fead0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x88) = 0;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined ***)((long)puVar1 + 0x58) = &PTR____CFConstantStringClassReference_110daafd8;
    *(undefined8 *)((long)puVar1 + 0x60) = 2;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = 0x7fefffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x38) = 0x7fefffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x30) = 0x3fe0000000000000;
    *(undefined8 *)((long)puVar1 + 0x28) = 0x7fefffffffffffff;
    *(undefined2 *)((long)puVar1 + 8) = 0x100;
    *(undefined8 *)((long)puVar1 + 0x48) = 0;
    *(undefined8 *)((long)puVar1 + 0x50) = 0;
    *(undefined1 *)((long)puVar1 + 10) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined **)((long)puVar1 + 0x90) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x78) = 0;
    *(undefined2 *)((long)puVar1 + 0xb) = 0;
    *(undefined4 *)((long)puVar1 + 0x10) = 0xffffffff;
    uVar2 = *(undefined8 *)((long)puVar1 + 200);
    *(undefined8 *)((long)puVar1 + 200) = 0;
    _objc_release(uVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108e3f1b4; end: 108e3f317; -[SCCaptionStateUtils copyWithZone:] */

undefined * FUN_108e3f1b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cbf60;
  _objc_alloc_init(PTR_PTR_1126cbf60);
  func_0x00010c166c00();
  func_0x00010c206c40(puVar1,param_2,*(undefined8 *)(param_1 + 0x88));
  func_0x00010c212f20(puVar1,param_2,*(undefined8 *)(param_1 + 0x58));
  func_0x00010c16b720(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c190940(*(undefined8 *)(param_1 + 0x38),puVar1);
  func_0x00010c193ba0(*(undefined8 *)(param_1 + 0x40),puVar1);
  func_0x00010c17a840(*(undefined8 *)(param_1 + 0x28),puVar1);
  func_0x00010c17a860(*(undefined8 *)(param_1 + 0x30),puVar1);
  func_0x00010c1ee7a0(*(undefined8 *)(param_1 + 0x50),puVar1);
  func_0x00010c1a7f60(puVar1,param_2,*(undefined1 *)(param_1 + 9));
  func_0x00010c193b00(puVar1,param_2,*(undefined1 *)(param_1 + 8));
  func_0x00010c1b6e20(*(undefined8 *)(param_1 + 0x48),puVar1);
  func_0x00010c1b5180(puVar1,param_2,*(undefined1 *)(param_1 + 10));
  func_0x00010c219440(puVar1,param_2,*(undefined8 *)(param_1 + 0xa0));
  func_0x00010c178860(puVar1,param_2,*(undefined8 *)(param_1 + 0x68));
  func_0x00010c169b00(puVar1,param_2,*(undefined8 *)(param_1 + 0x70));
  func_0x00010c1db640(puVar1,param_2,*(undefined8 *)(param_1 + 0x80));
  func_0x00010c21b740(puVar1,param_2,*(undefined8 *)(param_1 + 0xa8));
  func_0x00010c1b8c80(puVar1,param_2,*(undefined8 *)(param_1 + 0x78));
  func_0x00010c211940(puVar1,param_2,*(undefined8 *)(param_1 + 0x90));
  func_0x00010c211920(puVar1,param_2,*(undefined8 *)(param_1 + 0xb8));
  func_0x00010c1b5080(puVar1,param_2,*(undefined1 *)(param_1 + 0xb));
  func_0x00010c20eb40(puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010c1dd660(puVar1,param_2,*(undefined4 *)(param_1 + 0x10));
  func_0x00010c193640(puVar1,param_2,*(undefined8 *)(param_1 + 0xc0));
  func_0x00010c1a2740(puVar1,param_2,*(undefined8 *)(param_1 + 200));
  return puVar1;
}



/* Entry: 108e3f318; end: 108e3f3d7; +[SCCaptionStateUtils stateWithStyle:text:hidden:] */

void FUN_108e3f318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126cbf60;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c178860();
  uVar2 = param_3;
  func_0x00010c113040(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c169b00(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c212f20(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1a7f60(puVar1,param_2,param_5);
  func_0x00010c20eb40(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e3f3d8; end: 108e3f41f; +[SCCaptionStateUtils stateWithStyle:source:text:hidden:] */

void FUN_108e3f3d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cbf60;
  func_0x00010c252940(PTR_PTR_1126cbf60,param_2,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e3f420; end: 108e3f653; -[SCCaptionStateUtils isEqual:] */

undefined8 FUN_108e3f420(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126cbf60;
  _objc_opt_class(PTR_PTR_1126cbf60);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    if (param_1 == uVar1) {
      uVar7 = 1;
      goto LAB_108e3f630;
    }
    if (*(long *)(param_3 + 0x60) == *(long *)(param_1 + 0x60)) {
      uVar4 = param_3;
      func_0x00010c06e940();
      uVar5 = param_1;
      func_0x00010c06e940();
      if (((int)uVar4 == (int)uVar5) && (*(long *)(param_3 + 0x88) == *(long *)(param_1 + 0x88))) {
        iVar2 = (int)*(undefined8 *)(param_3 + 0x58);
        func_0x00010c0720c0();
        if (iVar2 != 0) {
          iVar2 = (int)*(undefined8 *)(param_3 + 0x20);
          func_0x00010c071b80();
          if (((((iVar2 != 0) && (*(double *)(param_3 + 0x38) == *(double *)(param_1 + 0x38))) &&
               (*(double *)(param_3 + 0x40) == *(double *)(param_1 + 0x40))) &&
              (((*(double *)(param_3 + 0x28) == *(double *)(param_1 + 0x28) &&
                (*(double *)(param_3 + 0x30) == *(double *)(param_1 + 0x30))) &&
               ((*(double *)(param_3 + 0x50) == *(double *)(param_1 + 0x50) &&
                ((*(char *)(param_3 + 9) == *(char *)(param_1 + 9) &&
                 (*(char *)(param_3 + 8) == *(char *)(param_1 + 8))))))))) &&
             ((*(double *)(param_3 + 0x48) == *(double *)(param_1 + 0x48) &&
              (*(char *)(param_3 + 10) == *(char *)(param_1 + 10))))) {
            iVar2 = (int)*(undefined8 *)(param_3 + 0x68);
            func_0x00010c071ae0();
            if (iVar2 != 0) {
              iVar2 = (int)*(undefined8 *)(param_3 + 0x70);
              func_0x00010c071ae0();
              if (((iVar2 != 0) &&
                  ((lVar6 = *(long *)(param_3 + 0x80), lVar6 == 0 && *(long *)(param_1 + 0x80) == 0
                   || (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                 ((lVar6 = *(long *)(param_3 + 0xa0), lVar6 == 0 && *(long *)(param_1 + 0xa0) == 0
                  || (func_0x00010c071b60(), (int)lVar6 != 0)))) {
                iVar2 = (int)*(undefined8 *)(param_3 + 0x90);
                func_0x00010c071d00();
                if (((iVar2 != 0) &&
                    ((((lVar6 = *(long *)(param_3 + 0xb8),
                       lVar6 == 0 && *(long *)(param_1 + 0xb8) == 0 ||
                       (func_0x00010c071d00(), (int)lVar6 != 0)) &&
                      (*(long *)(param_3 + 0xa8) == *(long *)(param_1 + 0xa8))) &&
                     (*(char *)(param_3 + 0xb) == *(char *)(param_1 + 0xb))))) &&
                   ((lVar6 = *(long *)(param_3 + 0xc0), lVar6 == 0 && *(long *)(param_1 + 0xc0) == 0
                    || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
                  uVar7 = *(undefined8 *)(param_3 + 200);
                  func_0x00010c071ae0(uVar7);
                  goto LAB_108e3f630;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar7 = 0;
LAB_108e3f630:
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 108e3f654; end: 108e3f65b; -[SCCaptionStateUtils hash] */

undefined8 FUN_108e3f654(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 108e3f65c; end: 108e3f6c3; -[SCCaptionStateUtils isClassicStyle] */

undefined8 FUN_108e3f65c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c113040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 108e3f6c4; end: 108e3f70b; -[SCCaptionStateUtils isClassicStyleApplied] */

undefined8 FUN_108e3f6c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c25e080(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 108e3f70c; end: 108e3f713; -[SCCaptionStateUtils stylePreference] */

undefined8 FUN_108e3f70c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


