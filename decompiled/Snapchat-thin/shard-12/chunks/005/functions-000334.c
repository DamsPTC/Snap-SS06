/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091b30f8; end: 1091b3123; -[SCLensDownloadHintController deactivate] */

void FUN_1091b30f8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091b3124; end: 1091b31f7; -[SCLensDownloadHintController showTapToDownloadHint:animated:] */

/* WARNING: Possible PIC construction at 0x0001091b3154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001091b3158) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1091b3124(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_3 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    func_0x00010be78da0(param_1);
    lVar2 = *(long *)(param_1 + 0x10);
    uVar1 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c237c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_showHintView_withHintView_animat_11266b938,uVar1,lVar2,param_4);
  return;
}



/* Entry: 1091b31f8; end: 1091b33a3; -[SCLensDownloadHintController showHintView:withHintView:animated:] */

void FUN_1091b31f8(undefined8 param_1,undefined8 param_2,int param_3,ulong param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  
  _objc_retain(param_4);
  if ((param_5 & 1) == 0) {
    if (param_3 != 0) {
      func_0x00010c1677c0(0x3ff0000000000000,param_4);
    }
    func_0x00010c1a7f60(param_4,param_2,param_3 == 0);
  }
  else {
    if (((param_3 != 0) && (param_4 != 0)) &&
       (uVar3 = param_4, func_0x00010c074c20(), (int)uVar3 != 0)) {
      func_0x00010c1a7f60(param_4,param_2,0);
      func_0x00010c1677c0(0,param_4);
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1091b33a4;
      puStack_50 = &UNK_110842e18;
      _objc_retain(param_4);
      uStack_48 = param_4;
      func_0x00010bf03420(0x3fd3333340000000,puVar1,param_2,&puStack_68,0);
      _objc_release(uStack_48);
    }
    if (((param_4 != 0) && (param_3 == 0)) &&
       (uVar3 = param_4, func_0x00010c074c20(), puVar2 = PTR__OBJC_CLASS___UIView_1126aec20,
       puVar1 = PTR___NSConcreteStackBlock_11034bd00, (uVar3 & 1) == 0)) {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      uStack_80 = 0x1091b33b0;
      puStack_78 = &UNK_110842e18;
      _objc_retain(param_4);
      puStack_b8 = puVar1;
      uStack_b0 = 0xc2000000;
      uStack_a8 = 0x1091b33bc;
      puStack_a0 = &UNK_110841f20;
      uStack_70 = param_4;
      _objc_retain(param_4);
      uStack_98 = param_4;
      func_0x00010bf03420(0x3fd3333340000000,puVar2,param_2,&puStack_90,&puStack_b8);
      _objc_release(uStack_98);
      _objc_release(uStack_70);
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1091b33a4; end: 1091b33c7;  */

void FUN_1091b33a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1091b33c8; end: 1091b33ef; -[SCLensDownloadHintController parentView] */

void FUN_1091b33c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091b33f0; end: 1091b33f7; -[SCLensDownloadHintController tapToDownloadLabel] */

undefined8 FUN_1091b33f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1091b33f8; end: 1091b3427; -[SCLensDownloadHintController setTapToDownloadLabel:] */

void FUN_1091b33f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091b3428; end: 1091b3463; -[SCLensDownloadHintController .cxx_destruct] */

void FUN_1091b3428(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091b3464; end: 1091b34ff; -[SCLensStatusProvider initWithLensCarouselApplicator:lensCarouselLensDownloader:] */

undefined1 *
FUN_1091b3464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700bf0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091b3500; end: 1091b3553; -[SCLensStatusProvider statusForLens:] */

undefined8 FUN_1091b3500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c076440(param_1,param_2,param_3);
  func_0x00010bec2780(param_1,param_2,param_3,uVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1091b3554; end: 1091b365b; -[SCLensStatusProvider isLensBeingApplied:] */

ulong FUN_1091b3554(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar4 = param_1;
    func_0x00010bf07e80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c0720c0(uVar4,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(uVar4);
    if ((uVar3 & 1) == 0) {
      func_0x00010bf60e40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c094540(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c0720c0(param_1,param_2,lVar1);
      _objc_release(lVar1);
      _objc_release(param_1);
      goto LAB_1091b363c;
    }
  }
  uVar4 = 0;
LAB_1091b363c:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1091b365c; end: 1091b36d3; -[SCLensStatusProvider currentlyApplingLensId] */

void FUN_1091b365c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60e20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1091b36d4; end: 1091b374b; -[SCLensStatusProvider appliedLensId] */

void FUN_1091b36d4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf07e60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1091b374c; end: 1091b381f; -[SCLensStatusProvider _statusForLens:isBeingApplied:] */

undefined8 FUN_1091b374c(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c076520();
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    uVar2 = *(ulong *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c076500();
    if ((uVar3 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010c076d40();
      _objc_release(uVar2);
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
        goto LAB_1091b3800;
      }
    }
    else {
      _objc_release(uVar2);
    }
    uVar4 = 2;
  }
  else {
    uVar4 = 3;
    if (param_4 == 0) {
      uVar4 = 1;
    }
  }
LAB_1091b3800:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1091b3820; end: 1091b384b; -[SCLensStatusProvider .cxx_destruct] */

void FUN_1091b3820(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1091b384c; end: 1091b38ff; -[SCLensStudioPreviewExeptionHandler initWithLensCarouselApplicator:lensCarouselManager:] */

undefined1 * FUN_1091b384c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112700bf8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091b3900; end: 1091b3987; -[SCLensStudioPreviewExeptionHandler _lensCoreHandledAnExceptionNotificationReceived:] */

void FUN_1091b3900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_40 = FUN_1091b3988;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_3;
  uStack_28 = param_1;
  _objc_retain(param_3);
  func_0x000107c312cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_3);
  return;
}



/* Entry: 1091b3988; end: 1091b3cdf;  */

void FUN_1091b3988(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  _objc_release(uVar3);
  if (((uVar2 & 1) != 0) && (uVar3 != 0)) {
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    lVar6 = *(long *)(param_1 + 0x28);
    func_0x00010c292820(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar16;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4ade0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar16);
    if (lVar6 == 0) {
      func_0x00010c0982a0(*(undefined8 *)(param_1 + 0x28));
    }
    else {
      lVar7 = lVar6;
      func_0x00010c2344c0();
      iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
      func_0x00010c0982a0();
      if ((iVar1 != 0) && ((int)lVar7 != 0)) {
        lVar7 = *(long *)(param_1 + 0x28) + 8;
        _objc_loadWeakRetained();
        lVar8 = lVar7;
        func_0x00010bfe6360();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        lVar7 = lVar8;
        func_0x00010bf60e20();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar7;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar7);
        if (lVar10 == 0) {
          ppuVar9 = &PTR____CFConstantStringClassReference_110f2b7d8;
        }
        else {
          func_0x00010bf3b720(lVar8);
          ppuVar9 = &PTR____CFConstantStringClassReference_110f2b7b8;
        }
        func_0x00010bcbeaa8(ppuVar9,0);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = *(long *)(param_1 + 0x20);
        func_0x00010c292820();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
        if (lVar7 == 0) {
          func_0x00010c238700(PTR_PTR_1126afca8);
        }
        else {
          lVar10 = lVar7;
          func_0x00010c09e560();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010c11f440();
          lVar12 = lVar10;
          if (lVar11 != 0x7fffffffffffffff) {
            func_0x00010c260c20();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar10);
          }
          puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126afca8;
          puVar14 = PTR_PTR_1126afca8;
          func_0x00010c0cb260(PTR_PTR_1126afca8);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2386c0(0x4010000000000000,puVar4);
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(lVar12);
        }
        uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
        func_0x00010c269d40(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c158cc0();
        _objc_release(uVar16);
        _objc_release(lVar7);
        _objc_release(lVar8);
        _objc_release(ppuVar9);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 1091b3ce0; end: 1091b3e1b; -[SCLensStudioPreviewExeptionHandler _lensFromCarouselWithId:] */

void FUN_1091b3ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1091b3e1c;
  uStack_40 = 0x1091b3e2c;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c095ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c25ff60(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1091b3e1c; end: 1091b3e33;  */

void FUN_1091b3e1c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1091b3e34; end: 1091b3ecf;  */

void FUN_1091b3e34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1091b3ed0; end: 1091b3f17;  */

undefined8 FUN_1091b3ed0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1091b3f18; end: 1091b3f97; -[SCLensStudioPreviewExeptionHandler lensesActive] */

bool FUN_1091b3f18(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c10f660();
  if (lVar3 == 1) {
    bVar1 = true;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c10f660();
    bVar1 = lVar3 == 2;
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 1091b3f98; end: 1091b3fc3; -[SCLensStudioPreviewExeptionHandler .cxx_destruct] */

void FUN_1091b3f98(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1091b3fc4; end: 1091b444b; -[SCLensSubPickerManager initWithExternalImageComponent:lensComponent:modalUIContainer:containerView:lensCrashLoggerFactory:lensLogger:photoPermissionCoordinator:lensVideoEditingLauncher:lensVideoEditingScopeServices:modalPresentationEnabled:lensOptionSourceType:inLensMediaPickerManager:lensApplicator:lensTinselExternalContentTracker:studySettingsProvider:applicationLifecycleEvents:fetchLimit:] */

undefined8 *
FUN_1091b3fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_112700c00;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_6);
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
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar1[0x10] = param_13;
    _objc_retain(param_14);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_16;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_18;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x17) = 0;
    _objc_retain(param_19);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_19;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    uVar4 = puVar1[0x12];
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c2a7100();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
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



/* Entry: 1091b444c; end: 1091b4493;  */

void FUN_1091b444c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be336c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091b4494; end: 1091b4583; -[SCLensSubPickerManager warmUpSubPickerWithMediaType:] */

void FUN_1091b4494(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126ddb18;
  func_0x00010bf0b400();
  puVar2 = *(undefined **)(param_1 + 0x68);
  if ((puVar2 == (undefined *)0x0) || (func_0x00010c0c6c20(), puVar2 != puVar1)) {
    puVar1 = PTR_PTR_1126ddb20;
    _objc_alloc();
    uVar3 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    func_0x00010c029ea0();
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar1;
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  lVar4 = *(long *)(param_1 + 0x70);
  if ((lVar4 == 0) || (func_0x00010c0c6c20(), lVar4 != param_3)) {
    lVar4 = param_1;
    func_0x00010bdefe40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    *(long *)(param_1 + 0x70) = lVar4;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2a2130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_warmupWithCompletion__112686270,
             &PTR___NSConcreteGlobalBlock_110adfa48);
  return;
}



/* Entry: 1091b4584; end: 1091b4587;  */

void FUN_1091b4584(void)

{
  return;
}



/* Entry: 1091b4588; end: 1091b4877; -[SCLensSubPickerManager _createSubPickerWithSelectionLimit:] */

void FUN_1091b4588(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf56f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(ulong *)(param_2 + 0x70);
  func_0x00010c0c6c20();
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  uStack_98 = param_2;
  if (param_4 < 2) {
    uVar5 = *(undefined8 *)(param_2 + 0xa0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0d2060();
    _objc_release(uVar5);
    if ((int)uVar2 == 0) {
      uStack_a8 = PTR_PTR_1126ddb30;
      _objc_alloc();
      func_0x00010be5ea00();
      _objc_retainAutoreleasedReturnValue();
      uStack_b0 = *(undefined8 *)(param_2 + 0x30);
      uVar6 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_2 + 8);
      uVar2 = *(undefined8 *)(param_2 + 0x68);
      uStack_b8 = *(undefined8 *)(param_2 + 0x70);
      uStack_c0 = *(undefined8 *)(param_2 + 0x38);
      uVar10 = *(undefined8 *)(param_2 + 0x40);
      uVar5 = *(undefined8 *)(param_2 + 0x48);
      uStack_90 = *(undefined8 *)(param_2 + 0xa0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fba40();
      uVar7 = *(undefined8 *)(param_2 + 0x98);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c085c60();
      uVar8 = *(undefined8 *)(param_2 + 0xa8);
      func_0x00010bf75dc0();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      goto LAB_1091b47d0;
    }
  }
  uStack_a8 = PTR_PTR_1126ddb28;
  _objc_alloc();
  func_0x00010be5ea00();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = *(undefined8 *)(param_2 + 0x30);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  uStack_b8 = *(undefined8 *)(param_2 + 0x70);
  uStack_c0 = *(undefined8 *)(param_2 + 0x38);
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  bVar1 = param_4 == 1;
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  uStack_90 = *(undefined8 *)(param_2 + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fba40();
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c085c60();
  uVar8 = *(undefined8 *)(param_2 + 0xa8);
  func_0x00010bf75dc0();
  _objc_retainAutoreleasedReturnValue();
LAB_1091b47d0:
  func_0x00010bff9480(param_1,uStack_a8,param_3,uStack_98,uStack_b0,0,uVar6,param_2,uStack_b8,uVar3,
                      uStack_c0,uVar9,uVar9,uVar4,uVar2,uVar10,uVar5,bVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uStack_90);
  _objc_release(uVar6);
  _objc_release(uStack_98);
  func_0x00010c18b5e0(uStack_a8,param_3,param_2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_a8);
  return;
}



/* Entry: 1091b4878; end: 1091b48b7; -[SCLensSubPickerManager _mediaPickerControllerContainer] */

void FUN_1091b4878(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfe1220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1091b48b8; end: 1091b494f; -[SCLensSubPickerManager showSubPickerWithMediaType:selectionLimit:] */

void FUN_1091b48b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c2a1cc0();
  lVar1 = param_1;
  func_0x00010bdf4380();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(long *)(param_1 + 0x60) = lVar1;
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfeb6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27b500();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c235d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_showAnimated__11266b178,1);
  return;
}



/* Entry: 1091b4950; end: 1091b497f; -[SCLensSubPickerManager _resetMediaAssetResources] */

void FUN_1091b4950(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091b4980; end: 1091b49a7; -[SCLensSubPickerManager lensSubPickerController] */

void FUN_1091b4980(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091b49a8; end: 1091b4a4b; -[SCLensSubPickerManager _createMediaAssetProviderWithMediaType:mediaAssetManager:] */

void FUN_1091b49a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ddb18;
  _objc_alloc(PTR_PTR_1126ddb18);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0fba40();
  func_0x00010c029f60(0,puVar1,param_2,param_3,uVar4,uVar3,1,*(undefined8 *)(param_1 + 0xa0),param_4
                     );
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091b4a4c; end: 1091b4a4f; -[SCLensSubPickerManager isPickerOpen] */

void FUN_1091b4a4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c079fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isPhotoPickerShown_1125fc200);
  return;
}



/* Entry: 1091b4a50; end: 1091b4b77; -[SCLensSubPickerManager hideSubPicker] */

void FUN_1091b4a50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010c139500(*(undefined8 *)(param_1 + 0x70));
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfeb6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27b500();
    _objc_release(uVar2);
    _objc_release(uVar1);
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1091b4b78;
    uStack_40 = 0x1091b4b88;
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x00010bfe1880(*(undefined8 *)(param_1 + 0x60));
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    _objc_release(uVar2);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  return;
}



/* Entry: 1091b4b78; end: 1091b4ba3;  */

void FUN_1091b4b78(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1091b4ba4; end: 1091b4bb3; -[SCLensSubPickerManager isPhotoPickerShown] */

bool FUN_1091b4ba4(long param_1)

{
  return *(long *)(param_1 + 0x60) != 0;
}



/* Entry: 1091b4bb4; end: 1091b4c0f; -[SCLensSubPickerManager pointInsideLensSubPicker:] */

undefined8 FUN_1091b4bb4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x60);
  param_3 = param_3 + 0x10;
  _objc_loadWeakRetained(param_3);
  func_0x00010c102b00(param_1,param_2,uVar1,param_4,param_3);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1091b4c10; end: 1091b4ddb; -[SCLensSubPickerManager showPhotoPickerForLens:supportPhotos:supportVideos:supportFaceFiltering:supportMultipleFaceFiltering:selectionLimit:useLensCoreTinselTracking:completion:] */

void FUN_1091b4c10(long param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_11);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0xb8) = param_9;
    func_0x00010c1ba8a0(param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    lVar1 = param_3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = lVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
    _objc_initWeak(auStack_78,param_1);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1091b4ddc;
    puStack_a0 = &UNK_110adfa68;
    uStack_80 = param_4;
    uStack_7f = param_5;
    uStack_7e = param_6;
    uStack_7d = param_7;
    _objc_copyWeak(auStack_90,auStack_78);
    uStack_88 = param_8;
    _objc_retain(param_11);
    uStack_98 = param_11;
    func_0x000107c312d0("APPSTORE",&puStack_b8);
    _objc_release(uStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar1 = param_3 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c23a480();
  _objc_release(lVar1);
  if (*(long *)(param_3 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001091b4e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1091b4ddc; end: 1091b4e57;  */

void FUN_1091b4ddc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c23a480();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001091b4e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1091b4e58; end: 1091b4f7b; -[SCLensSubPickerManager hidePhotoPickerWithCompletion:] */

void FUN_1091b4e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  func_0x00010c1ba8a0(param_1);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1091b4f18;
  puStack_40 = &UNK_110848708;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000107c312d0("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1091b4f7c; end: 1091b4f8f; -[SCLensSubPickerManager selectedOptionIndex] */

long FUN_1091b4f7c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c159c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_selectedOptionIndex_112634140);
    return lVar1;
  }
  return 0x7fffffffffffffff;
}



/* Entry: 1091b4f90; end: 1091b5057; -[SCLensSubPickerManager _handleWillTurnOffEvent:] */

void FUN_1091b4f90(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf8d080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3a360();
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  _objc_release(uVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 1091b5058; end: 1091b50a3;  */

undefined8 FUN_1091b5058(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1091b50a4; end: 1091b513b; -[SCLensSubPickerManager suspendSceneUpdatesWithCompletion:] */

void FUN_1091b50a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bfe6360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fb40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2641a0(uVar2,param_2,lVar1,param_3);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1091b513c; end: 1091b51d3; -[SCLensSubPickerManager resumeSceneUpdatesWithCompletion:] */

void FUN_1091b513c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bfe6360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fb40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d7e0(uVar2,param_2,lVar1,param_3);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1091b51d4; end: 1091b51d7; -[SCLensSubPickerManager lensSubPickerController:didSelectImage:] */

void FUN_1091b51d4(void)

{
  return;
}



/* Entry: 1091b51d8; end: 1091b51db; -[SCLensSubPickerManager lensSubPickerController:didSelectVideo:] */

void FUN_1091b51d8(void)

{
  return;
}



/* Entry: 1091b51dc; end: 1091b5293; -[SCLensSubPickerManager lensSubPickerController:didSetExternalImageData:] */

void FUN_1091b51dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(long *)(param_1 + 0x98) != 0) && ((*(byte *)(param_1 + 0xb8) & 1) == 0)) {
    lVar1 = param_1;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    *(long *)(param_1 + 0xb0) = lVar2;
    _objc_release(uVar3);
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef8180();
    _objc_release(uVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091b5294; end: 1091b529f; -[SCLensSubPickerManager lens] */

void FUN_1091b5294(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,200,1);
  return;
}



/* Entry: 1091b52a0; end: 1091b52a7; -[SCLensSubPickerManager setLens:] */

void FUN_1091b52a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1091b52a8; end: 1091b53cf; -[SCLensSubPickerManager .cxx_destruct] */

void FUN_1091b52a8(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
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
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091b53d0; end: 1091b5487; -[SCLensesOpenCloseButtonController initWithDependencyProvider:cameraViewType:parentView:] */

undefined1 *
FUN_1091b53d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112700c08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
    puVar2 = PTR_PTR_1126ddb38;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091b5488; end: 1091b564b; -[SCLensesOpenCloseButtonController lensesOpenCloseButton] */

void FUN_1091b5488(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126b6138;
    _objc_alloc();
    dVar5 = *(double *)PTR__CGRectZero_110347608;
    func_0x00010c013de0(dVar5,*(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar1;
    _objc_release(uVar3);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + 0x38),param_2,
                        &PTR____CFConstantStringClassReference_110e45878);
    func_0x00010befbd40(*(undefined8 *)(param_1 + 0x38),param_2,param_1,
                        PTR_s_lensesOpenCloseButtonPressed_11253fc68);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x38),param_2,1);
    lVar4 = param_1;
    func_0x00010be6cfc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0x38),param_2,lVar4);
    _objc_release(lVar4);
    func_0x00010c23d0a0(*(undefined8 *)(param_1 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    dVar6 = dVar5;
    func_0x00010bfe6ac0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d0a0();
    dVar6 = (dVar5 - dVar6) * 0.5;
    _objc_release(uVar3);
    func_0x00010c1aa420(dVar6,dVar6,*(undefined8 *)(param_1 + 0x38));
    func_0x00010c1d4b80(*(undefined8 *)(param_1 + 0x38),param_2,1);
    func_0x00010bed5540(param_1,param_2,*(undefined8 *)(param_1 + 0x28));
    lVar4 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar4);
    lVar2 = lVar4;
    func_0x00010bfe1200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c23d0a0(*(undefined8 *)(param_1 + 0x18));
    func_0x00010bf07160(lVar2,param_2,uVar3,3);
    if (*(long *)(param_1 + 0x18) == 0) {
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x00010c27a460(&uStack_70);
    }
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    func_0x00010c219960(*(undefined8 *)(param_1 + 0x38),param_2,&uStack_a0);
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x38));
    _objc_release(lVar2);
    lVar4 = *(long *)(param_1 + 0x38);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1091b564c; end: 1091b5853; -[SCLensesOpenCloseButtonController setLensesOpenCloseButtonVisible:animated:] */

void FUN_1091b564c(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  lVar3 = param_1;
  func_0x00010be3ef20(param_1,param_2,*(undefined8 *)(param_1 + 0x10));
  if ((param_3 == 0) || ((*(byte *)(param_1 + 0x30) & 1) != 0)) {
    uVar7 = 1;
  }
  else {
    lVar4 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010bf3db60();
    uVar7 = (uint)lVar5 | (uint)lVar3;
    _objc_release(lVar4);
  }
  lVar3 = param_1;
  func_0x00010c0986c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c074c20();
  _objc_release(lVar3);
  if ((uVar7 & 1) != (uint)lVar4) {
    lVar3 = param_1;
    func_0x00010c0986c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar3);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar8);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1091b5854;
    puStack_70 = &UNK_11084d5f8;
    uVar1 = (undefined1)(uVar7 & 1);
    lStack_68 = param_1;
    uStack_58 = uVar1;
    _objc_retain(uVar8);
    ppuVar6 = &puStack_88;
    uStack_60 = uVar8;
    _objc_retainBlock();
    if (param_4 == 0) {
      lVar3 = param_1;
      func_0x00010c0986c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12aaa0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      (*(code *)ppuVar6[2])(ppuVar6);
      func_0x00010c0986c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(param_1);
    }
    else {
      puStack_b8 = puVar2;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_1091b592c;
      puStack_a0 = &UNK_110857498;
      lStack_98 = param_1;
      uStack_90 = uVar1;
      func_0x00010bf03460(0x3fd6666666666666,0,0x3feccccccccccccd,0,
                          PTR__OBJC_CLASS___UIView_1126aec20,param_2,2,ppuVar6,&puStack_b8);
    }
    _objc_release(ppuVar6);
    _objc_release(uStack_60);
    _objc_release(uVar8);
  }
  return;
}



/* Entry: 1091b5854; end: 1091b592b;  */

void FUN_1091b5854(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if (*(long *)(param_1 + 0x28) == 0) {
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x00010c27a460(&uStack_60);
    }
  }
  else {
    uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0986c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar2);
  bVar1 = *(byte *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0986c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0((double)(bVar1 ^ 1));
  _objc_release(uVar2);
  return;
}



/* Entry: 1091b592c; end: 1091b596f;  */

void FUN_1091b592c(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0986c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1091b5970; end: 1091b597b; -[SCLensesOpenCloseButtonController _isCloseButtonHiddenForCameraViewType:] */

bool FUN_1091b5970(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 9;
}



/* Entry: 1091b597c; end: 1091b59a7; -[SCLensesOpenCloseButtonController lensesOpenCloseButtonPressed] */

void FUN_1091b597c(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd0860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091b59a8; end: 1091b59b7; -[SCLensesOpenCloseButtonController setCloseButtonHidden:] */

void FUN_1091b59a8(long param_1,undefined8 param_2,uint param_3)

{
  *(char *)(param_1 + 0x30) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1bd710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setLensesOpenCloseButtonVisible__11264cfe8,param_3 ^ 1,0);
  return;
}



/* Entry: 1091b59b8; end: 1091b5aaf; -[SCLensesOpenCloseButtonController _updateCloseButtonTintColor:] */

void FUN_1091b59b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar1 = param_1, func_0x00010be3fa40(), (uVar1 & 1) == 0)
     ) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c270f20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c071c60(param_3,param_2,uVar2);
    _objc_release(uVar2);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00010be6cfc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      if (param_3 == 0) {
        func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0x38),param_2,uVar1);
      }
      else {
        uVar3 = uVar1;
        func_0x00010bfe9720(uVar1,param_2,2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0x38),param_2,uVar3);
        _objc_release(uVar3);
      }
      _objc_release(uVar1);
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bfe90c0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216160();
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091b5ab0; end: 1091b5af7; -[SCLensesOpenCloseButtonController _openCloseButtonImage] */

void FUN_1091b5ab0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010be3fa40();
  if ((uVar1 & 1) == 0) {
    func_0x00010bfe6ac0(*(undefined8 *)(param_1 + 0x18));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfe74c0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091b5af8; end: 1091b5b07; -[SCLensesOpenCloseButtonController _isDirectorMode] */

bool FUN_1091b5af8(long param_1)

{
  return *(long *)(param_1 + 0x10) == 9;
}



/* Entry: 1091b5b08; end: 1091b5b97; -[SCLensesOpenCloseButtonController isInsideOpenCloseButton:] */

ulong FUN_1091b5b08(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c0986c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074c20();
  if ((uVar2 & 1) == 0) {
    func_0x00010c0986c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bfb68e0();
    _CGRectContainsPoint();
    _objc_release(param_1);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1091b5b98; end: 1091b5bc7; -[SCLensesOpenCloseButtonController setLensesOpenCloseButton:] */

void FUN_1091b5b98(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1091b5bc8; end: 1091b5c13; -[SCLensesOpenCloseButtonController .cxx_destruct] */

void FUN_1091b5bc8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1091b5c14; end: 1091b5d3b; -[SCLensCarouselEventsReporter initWithLensCarouselFunnelLogger:lensLogger:legacyUiUpdateAnnouncer:lensCarouselSelectionMapper:] */

undefined1 *
FUN_1091b5c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_112700c10;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x00010c0974c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1091b5d3c; end: 1091b5daf; -[SCLensCarouselEventsReporter dealloc] */

void FUN_1091b5d3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0974c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80(uVar2);
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_112700c10;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091b5db0; end: 1091b5db3; -[SCLensCarouselEventsReporter reportLensCarouselActivated:] */

void FUN_1091b5db0(void)

{
  return;
}



/* Entry: 1091b5db4; end: 1091b5e67; -[SCLensCarouselEventsReporter reportLensCarousel:didActivateLens:index:selectionType:originalLensIndex:totalLensesCount:isLensFetched:] */

void FUN_1091b5db4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  char param_9)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  func_0x00010c094e80(uVar1,param_2,param_4,param_6);
  if (param_9 == '\0') {
    func_0x00010c096d80(*(undefined8 *)(param_1 + 0x10),param_2,param_4,param_5,uVar1,param_7,
                        param_8);
  }
  else {
    func_0x00010c095fc0(*(undefined8 *)(param_1 + 0x10),param_2,param_4,param_5,uVar1,param_7,
                        param_8,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1091b5e68; end: 1091b5e6b; -[SCLensCarouselEventsReporter reportLensCarousel:didSelectLens:index:selectionType:originalLensIndex:totalLensesCount:] */

void FUN_1091b5e68(void)

{
  return;
}



/* Entry: 1091b5e6c; end: 1091b5eb3; -[SCLensCarouselEventsReporter reportLensCarousel:didUpdateVisibleLenses:mappedVisibleLenses:] */

void FUN_1091b5e6c(long param_1)

{
  undefined8 in_x4;
  
  _objc_retain(in_x4);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e4d60();
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091b5eb4; end: 1091b5ef7; -[SCLensCarouselEventsReporter .cxx_destruct] */

void FUN_1091b5eb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1091b5ef8; end: 1091b5f6b; -[SCLensCarouselSelectionMapper initWithLensDataProvider:] */

undefined1 * FUN_1091b5ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700c18;
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



/* Entry: 1091b5f6c; end: 1091b5fdf; -[SCLensCarouselSelectionMapper lensLoggerSelectionTypeForLens:carouselSelectionType:] */

long FUN_1091b5f6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  if (3 < param_4 - 1U) {
    if (param_4 - 5U < 2) {
      func_0x00010be8ad00(param_1,param_2,param_3,param_4);
      param_4 = param_1;
    }
    else {
      param_4 = 0;
    }
  }
  _objc_release(param_3);
  return param_4;
}



/* Entry: 1091b5fe0; end: 1091b60f7; -[SCLensCarouselSelectionMapper _reloadSpecificSelectionTypeForLens:selectionType:] */

undefined8 FUN_1091b5fe0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar4 = 4;
  }
  else {
    lVar1 = param_3;
    func_0x00010c27dd80();
    if (lVar1 == 0x12) {
      uVar4 = 7;
    }
    else {
      lVar1 = param_3;
      func_0x00010c27dd80();
      if ((lVar1 == 0x17) || (lVar1 = param_3, func_0x00010c27dd80(), lVar1 == 0x18)) {
        uVar4 = 9;
      }
      else {
        uVar2 = *(ulong *)(param_1 + 8);
        func_0x00010bf07500();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        if ((uVar3 & 1) == 0) {
          uVar3 = uVar2;
          func_0x00010c0720c0(uVar2,param_2,PTR_PTR_1133c9358);
          if ((uVar3 & 1) == 0) {
            if (param_4 == 6) {
              uVar4 = 8;
            }
            else {
              uVar3 = uVar2;
              func_0x00010c0720c0(uVar2,param_2,PTR_PTR_1133c92c0);
              uVar4 = 8;
              if ((int)uVar3 == 0) {
                uVar4 = 4;
              }
            }
          }
          else {
            uVar4 = 6;
          }
        }
        else {
          uVar4 = 5;
        }
        _objc_release(uVar2);
      }
    }
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1091b60f8; end: 1091b6103; -[SCLensCarouselSelectionMapper .cxx_destruct] */

void FUN_1091b60f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091b6104; end: 1091b67a7; -[SCLensCarouselUIController initWithCameraLensesViewControllerManager:cameraViewType:parentViewContainer:lensFeatureContainer:cameraViewDelegate:lsaLensComponent:lensUserProvider:lensInfoButton:lensFavoriteButton:lensFavoritesTabBarButton:lensCollectionsBackButton:lensesTooltip:lensPreferences:lensIconRepository:currentPageTracker:lensTooltipsService:legacyUiUpdateAnnouncer:lensExplorerFromCarouselOverlay:lensCarouselSettings:lensCarouselStudySettings:lensSendToButton:lensSendToTabBarButton:lensEntryPointTracker:lensCarouselApplicator:lensCTAHandler:lensesFeaturesInfoProvider:lensCarouselManager:cameraFeatureCatalog:visibilityController:lensCarouselLensDownloader:lensCarouselCollectionController:] */

undefined8 *
FUN_1091b6104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined4 param_18,undefined4 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined4 param_26,undefined4 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
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
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain();
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain();
  _objc_retain(param_31);
  _objc_retain();
  _objc_retain();
  _objc_retain(param_34);
  _objc_retain(param_35);
  puStack_70 = PTR_PTR_112700c20;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 0x10,param_28);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = puVar1[0x18];
    puVar1[0x18] = puVar2;
    _objc_release(uVar5);
    _objc_storeWeak(puVar1 + 4,param_8);
    _objc_retain(param_30);
    uVar5 = puVar1[0x11];
    puVar1[0x11] = param_30;
    _objc_release(uVar5);
    _objc_retain(param_9);
    uVar5 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar5);
    _objc_retain(param_22);
    uVar5 = puVar1[0xe];
    puVar1[0xe] = param_22;
    _objc_release(uVar5);
    _objc_retain(param_23);
    uVar5 = puVar1[0xf];
    puVar1[0xf] = param_23;
    _objc_release(uVar5);
    _objc_storeWeak(puVar1 + 2,param_5);
    uVar5 = param_6;
    func_0x00010bfe12e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0xc];
    puVar1[0xc] = uVar5;
    _objc_release(uVar6);
    uVar5 = param_6;
    func_0x00010c090840();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0xd];
    puVar1[0xd] = uVar5;
    _objc_release(uVar6);
    _objc_retain(param_20);
    uVar5 = puVar1[0x22];
    puVar1[0x22] = param_20;
    _objc_release(uVar5);
    _objc_retain(param_15);
    uVar5 = puVar1[6];
    puVar1[6] = param_15;
    _objc_release(uVar5);
    _objc_retain(param_29);
    uVar5 = puVar1[0x1f];
    puVar1[0x1f] = param_29;
    _objc_release(uVar5);
    _objc_retain(param_31);
    uVar5 = puVar1[0x12];
    puVar1[0x12] = param_31;
    _objc_release(uVar5);
    _objc_storeWeak(puVar1 + 5,param_32);
    _objc_retain(param_33);
    uVar5 = puVar1[0x13];
    puVar1[0x13] = param_33;
    _objc_release(uVar5);
    _objc_retain(param_34);
    uVar5 = puVar1[0x14];
    puVar1[0x14] = param_34;
    _objc_release(uVar5);
    _objc_retain(param_35);
    uVar5 = puVar1[0x15];
    puVar1[0x15] = param_35;
    _objc_release(uVar5);
    *(undefined4 *)(puVar1 + 0x21) = 0;
    puVar2 = PTR_PTR_1126ddb40;
    _objc_alloc();
    func_0x00010c0119e0();
    uVar5 = puVar1[0x1a];
    puVar1[0x1a] = puVar2;
    _objc_release(uVar5);
    _objc_retain(param_16);
    uVar5 = puVar1[8];
    puVar1[8] = param_16;
    _objc_release(uVar5);
    uVar5 = param_35;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0x1d];
    puVar1[0x1d] = uVar5;
    _objc_release(uVar6);
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_storeWeak(puVar1 + 3,param_7);
    _objc_storeWeak(puVar1 + 9,param_10);
    puVar2 = PTR_PTR_1126ddb48;
    _objc_alloc();
    func_0x00010c00b720();
    uVar5 = puVar1[0x1b];
    puVar1[0x1b] = puVar2;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126ddb50;
    _objc_alloc();
    func_0x00010c022d60();
    uVar5 = puVar1[0x1e];
    puVar1[0x1e] = puVar2;
    _objc_release(uVar5);
    puVar3 = puVar1 + 9;
    _objc_loadWeakRetained(puVar3);
    func_0x00010c1defc0();
    _objc_release(puVar3);
    _objc_storeWeak(puVar1 + 10,param_14);
    _objc_retain(param_17);
    uVar5 = puVar1[0xb];
    puVar1[0xb] = param_17;
    _objc_release(uVar5);
    uVar5 = param_22;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf02120();
    _objc_release(uVar5);
    if ((int)uVar6 != 0) {
      *(undefined1 *)(puVar1 + 0x17) = 1;
    }
    puVar2 = PTR_PTR_1126ddb58;
    _objc_alloc();
    func_0x00010c022c80();
    uVar5 = puVar1[0x1c];
    puVar1[0x1c] = puVar2;
    _objc_release(uVar5);
    puVar3 = puVar1 + 10;
    _objc_loadWeakRetained(puVar3);
    puVar4 = puVar1;
    func_0x00010c08f7e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25fec0(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010bec6b40(puVar1);
  }
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1091b67a8; end: 1091b6a8b; -[SCLensCarouselUIController _subscribeOnCarouselEvents] */

void FUN_1091b67a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar2 = PTR_PTR_1126ae810;
  _objc_opt_new();
  _objc_retain();
  uVar3 = *(undefined8 *)(param_1 + 200);
  *(undefined **)(param_1 + 200) = puVar2;
  _objc_release(uVar3);
  _objc_initWeak(auStack_78,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bef1060();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1091b6a8c;
  puStack_88 = &UNK_110842a38;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar5 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bef0b80();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1091b6aec;
  puStack_b0 = &UNK_11084eff0;
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar5 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c094160();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_1091b6b34;
  puStack_d8 = &UNK_110842a38;
  _objc_copyWeak(auStack_d0,auStack_78);
  uVar5 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  _objc_copyWeak(auStack_f8,auStack_78);
  func_0x00010c0e33e0(uVar3);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar2);
  return;
}



/* Entry: 1091b6a8c; end: 1091b6aeb;  */

void FUN_1091b6a8c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010be26f80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091b6aec; end: 1091b6b33;  */

void FUN_1091b6aec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b300();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091b6b34; end: 1091b6b93;  */

void FUN_1091b6b34(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010be2a160(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091b6b94; end: 1091b6c77;  */

void FUN_1091b6b94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c092800(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1091b6c78; end: 1091b6cbf;  */

void FUN_1091b6c78(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b3e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091b6cc0; end: 1091b6e1b; -[SCLensCarouselUIController _handleLensDownloadEvent:] */

void FUN_1091b6cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_1091b6e1c;
  uStack_50 = 0x1091b6e2c;
  uStack_48 = 0;
  func_0x00010c0c1940(param_3);
  uVar1 = puStack_68[5];
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bef0a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) != 0) {
    func_0x00010beb8c00(param_1);
  }
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1091b6e1c; end: 1091b6e37;  */

void FUN_1091b6e1c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1091b6e38; end: 1091b6e6f;  */

void FUN_1091b6e38(long param_1,undefined8 param_2)

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



/* Entry: 1091b6e70; end: 1091b6edf; -[SCLensCarouselUIController _showDownloadHintIfNeedForLens:] */

void FUN_1091b6e70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c076520();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c23a710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_showTapToDownloadHint_animated__11266c3e8,(uint)uVar1 ^ 1,1);
  return;
}



/* Entry: 1091b6ee0; end: 1091b710f; -[SCLensCarouselUIController _handleCarouselActivated:] */

void FUN_1091b6ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if ((int)param_3 == 0) {
    func_0x00010bf65b20(*(undefined8 *)(param_1 + 0xd0));
    func_0x00010c23a700(param_1);
    func_0x00010be931a0(param_1);
  }
  else {
    uVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c233e60();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar4 & 1) == 0) {
      uVar1 = param_1 + 8;
      _objc_loadWeakRetained();
      uVar2 = uVar1;
      func_0x00010bf08f60();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        lVar5 = param_1 + 0x28;
        _objc_loadWeakRetained();
        lVar6 = lVar5;
        func_0x00010bf29e60();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bfa1820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c06c220();
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        lVar5 = param_1 + 0x28;
        _objc_loadWeakRetained();
        lVar6 = lVar5;
        func_0x00010c091780();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c08d540();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010bfe6360();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010c072ba0();
        if ((int)lVar9 != 0) {
          lVar9 = param_1 + 0x28;
          _objc_loadWeakRetained();
          lVar10 = lVar9;
          func_0x00010c091780();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010c08d540();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar11;
          func_0x00010bfe6360();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef0100();
          _objc_release(lVar12);
          _objc_release(lVar11);
          _objc_release(lVar10);
          _objc_release(lVar9);
        }
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
      }
    }
    func_0x00010c17d500(param_1);
    func_0x00010beadaa0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1bd710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xd8),PTR_s_setLensesOpenCloseButtonVisible__11264cfe8,
             param_3,0);
  return;
}



/* Entry: 1091b7110; end: 1091b71c7; -[SCLensCarouselUIController _handleLensActivated:] */

void FUN_1091b7110(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162800(param_1,param_2,param_3);
  if (param_3 != 0) {
    func_0x00010c28b6e0(param_1,param_2,param_3);
    uVar1 = param_3;
    func_0x00010c06c2e0();
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c097c20(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8060(uVar2,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(uVar2);
    }
    func_0x00010beb8c00(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091b71c8; end: 1091b71fb; -[SCLensCarouselUIController _handleFullScreenModeEnabled:] */

void FUN_1091b71c8(long param_1)

{
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010c210900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091b71fc; end: 1091b723b; -[SCLensCarouselUIController _alwaysOnCarouselEnabled] */

undefined8 FUN_1091b71fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf02120();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1091b723c; end: 1091b72c7; -[SCLensCarouselUIController dealloc] */

void FUN_1091b723c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1;
  func_0x00010c08f7e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282aa0(lVar1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf3a200(param_1);
  puStack_38 = PTR_PTR_112700c20;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1091b72c8; end: 1091b72ef; -[SCLensCarouselUIController lensCarouselCollectionController] */

void FUN_1091b72c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091b72f0; end: 1091b72f7; -[SCLensCarouselUIController lensesOpenCloseButton] */

void FUN_1091b72f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0986d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xd8),PTR_s_lensesOpenCloseButton_112603bc0);
  return;
}



/* Entry: 1091b72f8; end: 1091b7357; -[SCLensCarouselUIController handleCloseLensesAction] */

void FUN_1091b72f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c272a00();
  _objc_release(lVar1);
  param_1 = param_1 + 0x80;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b720();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1091b7358; end: 1091b73cb; -[SCLensCarouselUIController updateUIElementsVisibilityForLens:] */

void FUN_1091b7358(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bdca5c0();
  if (((int)lVar2 != 0) &&
     (bVar1 = *(byte *)(param_1 + 0xb8), uVar3 = param_3, func_0x00010c079580(),
     (uint)bVar1 != (uint)uVar3)) {
    uVar3 = param_3;
    func_0x00010c079580();
    *(char *)(param_1 + 0xb8) = (char)uVar3;
    func_0x00010c1bd700(*(undefined8 *)(param_1 + 0xd8),param_2,(uint)uVar3 ^ 1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091b73cc; end: 1091b73d3; -[SCLensCarouselUIController setCloseButtonHidden:] */

void FUN_1091b73cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17d510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xd8),PTR_s_setCloseButtonHidden__11263cf60);
  return;
}



/* Entry: 1091b73d4; end: 1091b747b; -[SCLensCarouselUIController activeLensIcon] */

void FUN_1091b73d4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010bef0a40();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 == 0) || (uVar2 = uVar1, func_0x00010c079580(), (uVar2 & 1) != 0)) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf4c6e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c094380(uVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}


