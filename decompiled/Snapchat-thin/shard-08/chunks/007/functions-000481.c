/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10650e6e0; end: 10650e7f7;  */

void FUN_10650e6e0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10650e7f8; end: 10650e8ff; -[SCBaseMediaThumbnailView videoView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650e7f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar4 = (long)_DAT_112749b80;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126bf660;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c100c60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2218a0();
    _objc_release(uVar2);
    func_0x00010c066f80(param_1,param_2,*(undefined8 *)(param_1 + lVar4),
                        *(undefined8 *)(param_1 + _DAT_112749b74));
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10650e900;
    puStack_40 = &UNK_1108471b0;
    lStack_38 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10650e900; end: 10650ea17;  */

void FUN_10650e900(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10650ea18; end: 10650ea83; -[SCBaseMediaThumbnailView videoURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650ea18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112749ba0;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112749ba4);
    func_0x00010c29bb40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10650ea84; end: 10650efdb; -[SCBaseMediaThumbnailView setMediaViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650ea84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  func_0x00010c1a7f60(param_3);
  lVar11 = (long)_DAT_112749ba4;
  uVar9 = *(ulong *)(param_3 + lVar11);
  _objc_retain(uVar9);
  _objc_retain(param_5);
  if (uVar9 == param_5) {
    _objc_release(param_5);
    _objc_release(uVar9);
LAB_10650eb20:
    lVar1 = param_3;
    func_0x00010bf4cf20();
    if ((int)lVar1 == 0) goto LAB_10650ecd4;
    func_0x00010be2eb80(param_3);
    lVar1 = *(long *)(param_3 + _DAT_112749b80);
    func_0x00010c100720();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar11 == 0) goto LAB_10650ef8c;
    func_0x00010c29bc60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_3;
    func_0x00010c100720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fe360();
    _objc_release(lVar11);
  }
  else {
    if (param_5 == 0) {
      _objc_release(uVar9);
    }
    else {
      uVar2 = uVar9;
      func_0x00010c071ae0();
      _objc_release(param_5);
      _objc_release(uVar9);
      if ((uVar2 & 1) != 0) goto LAB_10650eb20;
    }
    uVar2 = *(ulong *)(param_3 + lVar11);
    func_0x00010c0c5220();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_5;
    func_0x00010c0c5220();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar2);
    _objc_retain(uVar9);
    if (uVar2 == uVar9) {
      _objc_release(uVar9);
      _objc_release(uVar2);
      _objc_release(uVar9);
      _objc_release(uVar2);
    }
    else {
      if (uVar9 == 0) {
        _objc_release();
        _objc_release(uVar2);
      }
      else {
        uVar3 = uVar2;
        func_0x00010c071ae0();
        _objc_release(uVar9);
        _objc_release(uVar2);
        _objc_release(uVar9);
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) goto LAB_10650ec64;
      }
      func_0x00010c1385e0(param_3);
    }
LAB_10650ec64:
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)(param_3 + lVar11);
    *(ulong *)(param_3 + lVar11) = param_5;
    _objc_release(uVar4);
    func_0x00010bea8da0(param_3);
    puVar5 = PTR_PTR_1126cb480;
    func_0x00010bf68da0(PTR_PTR_1126cb480);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_3);
    _objc_release(puVar5);
    lVar1 = param_3;
    func_0x00010bfe90c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182220();
    _objc_release(lVar1);
LAB_10650ecd4:
    lVar6 = *(long *)(param_3 + lVar11);
    func_0x00010bf86a80();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_3;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar11;
    func_0x00010c0c5220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar11);
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(param_3 + _DAT_112749b64);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_3;
      func_0x00010c29d560(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar11;
      func_0x00010c0c5220();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c0a5340(uVar4);
      _objc_release(puVar5);
      _objc_release(lVar1);
      _objc_release(lVar11);
      _objc_release(uVar4);
    }
    func_0x00010bea9a40(param_3);
    _objc_initWeak(auStack_68,param_3);
    uVar9 = param_5;
    func_0x00010bf4b7a0();
    if ((int)uVar9 == 0) {
      if (lVar6 != 0) {
        lVar11 = lVar6;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar11 != 0) {
          uVar7 = *(undefined8 *)(param_3 + _DAT_112749b60);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26e2a0(param_3);
          puVar10 = auStack_a0;
          _objc_copyWeak(puVar10,auStack_68);
          _objc_retain(lVar6);
          uVar4 = uVar7;
          func_0x00010c26de40(param_1,param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(param_3 + _DAT_112749ba8);
          *(undefined8 *)(param_3 + _DAT_112749ba8) = uVar4;
          _objc_release(uVar8);
          _objc_release(uVar7);
          lVar11 = lVar6;
          goto LAB_10650ef70;
        }
      }
    }
    else {
      uVar7 = *(undefined8 *)(param_3 + _DAT_112749b60);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_5;
      func_0x00010c0c5220(param_5);
      _objc_retainAutoreleasedReturnValue();
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_10650efdc;
      puStack_80 = &UNK_110929ac0;
      puVar10 = auStack_70;
      _objc_copyWeak(puVar10,auStack_68);
      _objc_retain(lVar6);
      uVar4 = uVar7;
      lStack_78 = lVar6;
      func_0x00010bfcc8e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_3 + _DAT_112749ba8);
      *(undefined8 *)(param_3 + _DAT_112749ba8) = uVar4;
      _objc_release(uVar8);
      _objc_release(uVar9);
      _objc_release(uVar7);
      lVar11 = lStack_78;
LAB_10650ef70:
      _objc_release(lVar11);
      _objc_destroyWeak(puVar10);
    }
    _objc_destroyWeak(auStack_68);
    param_3 = lVar6;
  }
  _objc_release(param_3);
LAB_10650ef8c:
  _objc_release(param_5);
  return;
}



/* Entry: 10650efdc; end: 10650f0c3;  */

void FUN_10650efdc(long param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b4690;
  if (param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_2);
    _objc_alloc(puVar1);
    func_0x00010bff2e60();
    _objc_release(param_2);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be299e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10650f0c4; end: 10650f227; -[SCBaseMediaThumbnailView _handleFetchedGif:forMedia:error:] */

void FUN_10650f0c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10650f180;
  puStack_58 = &UNK_11084d788;
  uStack_50 = param_1;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 10650f228; end: 10650f39f; -[SCBaseMediaThumbnailView _handleFetchedThumbnailImage:forMedia:error:] */

void FUN_10650f228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10650f2e4;
  puStack_58 = &UNK_11084d788;
  uStack_50 = param_1;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 10650f3a0; end: 10650f3a3; -[SCBaseMediaThumbnailView _setUpAccessibilityValueForViewModel:] */

void FUN_10650f3a0(void)

{
  return;
}



/* Entry: 10650f3a4; end: 10650f3f3; -[SCBaseMediaThumbnailView _mediaLoadFailedAndIsFatal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650f3a4(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112749b90),param_2,0);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112749b88));
                    /* WARNING: Could not recover jumptable at 0x00010be35d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideSpinner_11256b0f0);
    return;
  }
  return;
}



/* Entry: 10650f3f4; end: 10650f453; -[SCBaseMediaThumbnailView _renderAnimatedImage:] */

void FUN_10650f3f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167e80();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be6b150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onRenderingDone_1125785f0);
  return;
}



/* Entry: 10650f454; end: 10650f4b3; -[SCBaseMediaThumbnailView _renderThumbnailImage:] */

void FUN_10650f454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be6b150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onRenderingDone_1125785f0);
  return;
}



/* Entry: 10650f4b4; end: 10650f4cf; -[SCBaseMediaThumbnailView _onRenderingDone] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650f4b4(long param_1)

{
  if (*(char *)(param_1 + _DAT_112749bac) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c10a3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_prepareVideoIfNecessary_112620318);
    return;
  }
  return;
}



/* Entry: 10650f4d0; end: 10650f5f7; -[SCBaseMediaThumbnailView _fetchAndAttachVideoOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650f4d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_3);
  uVar1 = *(undefined8 *)(param_3 + _DAT_112749ba4);
  func_0x00010bf86a80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26e2a0(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar1);
  func_0x00010bfab4c0(param_1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10650f5f8; end: 10650f64b;  */

void FUN_10650f5f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be330c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10650f64c; end: 10650f6eb; -[SCBaseMediaThumbnailView _handleVideoOverlayImage:forMedia:] */

void FUN_10650f64c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c134600();
  _objc_release(param_4);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c29a840(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10650f6ec; end: 10650f78b; -[SCBaseMediaThumbnailView prepareVideoIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650f6ec(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + _DAT_112749bac) = 1;
  lVar2 = *(long *)(param_1 + _DAT_112749b80);
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112749ba4);
    func_0x00010bf4bc20();
    if (iVar1 != 0) {
      func_0x00010be0f480(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c21c370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setUpVideo_112664b00);
      return;
    }
  }
  return;
}



/* Entry: 10650f78c; end: 10650f907; -[SCBaseMediaThumbnailView setUpVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650f78c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar6 = (long)_DAT_112749ba4;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar6);
  func_0x00010bf4bc20();
  if (iVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c100720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c29bc60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dda40();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c29bb40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c0c5220();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      _objc_initWeak(auStack_38,param_1);
      uVar5 = 0x19;
      func_0x0001000819a8(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_10650f908;
      puStack_58 = &UNK_110848218;
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(lVar2);
      lStack_50 = lVar2;
      _objc_retain(uVar4);
      uStack_48 = uVar4;
      func_0x00010007380c(uVar5,&puStack_70);
      _objc_release(uVar5);
      _objc_release(uStack_48);
      _objc_release(lStack_50);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    _objc_release(uVar4);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 10650f908; end: 10650f9f7;  */

void FUN_10650f908(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
  if (lVar2 != 0) {
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    func_0x00010bfc06e0(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10650f9f8; end: 10650fa4b;  */

void FUN_10650f9f8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b7a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10650fa4c; end: 10650fbf3; -[SCBaseMediaThumbnailView _onSilentVideoAssetGenerated:forVideoURL:mediaId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650fa4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749ba4);
  func_0x00010c0c5220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puStack_78 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x2020000000;
    uStack_58 = 0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10650fbf4;
    puStack_88 = &UNK_11084b9d0;
    lStack_80 = param_1;
    puStack_68 = puStack_78;
    func_0x00010bcbe2c4("APPSTORE",&puStack_a0);
    if ((*(byte *)(puStack_68 + 3) & 1) != 0) {
      _objc_initWeak(auStack_a8,param_1);
      _objc_copyWeak(auStack_b0,auStack_a8);
      func_0x00010bea8d80(param_1);
      _objc_destroyWeak(auStack_b0);
      _objc_destroyWeak(auStack_a8);
    }
    __Block_object_dispose(&uStack_70,8);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10650fbf4; end: 10650fc6b;  */

void FUN_10650fbf4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c29bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c100c60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar3 != 0;
  _objc_release();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10650fc6c; end: 10650fcb3;  */

void FUN_10650fc6c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e340();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10650fcb4; end: 10650fd3b; -[SCBaseMediaThumbnailView _handlePlayerItemLoaded:] */

void FUN_10650fcb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_40 = FUN_10650fd3c;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10650fd3c; end: 10650fe5f;  */

void FUN_10650fd3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x00010bdd3840(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010be8ec40(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bc60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161660();
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010be2eb80(*(undefined8 *)(param_1 + 0x20));
  puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_playerItemDidReachEnd__11252c4a8;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)PTR__AVPlayerItemDidPlayToEndTimeNotification_1103480c0;
  uVar3 = uVar6;
  func_0x00010c29bc60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240(puVar4,param_2,uVar6,puVar1,uVar7,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10650fe60; end: 106510087; -[SCBaseMediaThumbnailView _setUpAVPlayerWithAssetAync:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10650fe60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar3;
  puStack_68 = puVar2;
  puStack_60 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_3);
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  _objc_retain(param_4);
  func_0x00010c09c640(param_3);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  lVar6 = param_3 + 0x48;
  _objc_loadWeakRetained();
  if (lVar6 != 0) {
    lVar9 = *(long *)(param_3 + 0x20);
    func_0x00010c2533c0();
    _objc_retain(0);
    lVar7 = *(long *)(param_3 + 0x20);
    func_0x00010c2533c0();
    _objc_retain(0);
    _objc_release(0);
    lVar8 = *(long *)(param_3 + 0x20);
    func_0x00010c2533c0();
    _objc_retain(0);
    _objc_release(0);
    if (((lVar9 == 2) && (lVar7 == 2)) && (lVar8 == 2)) {
      iVar1 = (int)*(undefined8 *)(param_3 + 0x20);
      func_0x00010c07a2c0();
      if (iVar1 != 0) {
        puVar2 = PTR_PTR_1126ba150;
        func_0x00010c22e420();
        if (((ulong)puVar2 & 1) == 0) {
          puVar2 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
          _objc_alloc(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
          func_0x00010bff41a0();
          lVar9 = *(long *)(param_3 + 0x40);
          if (lVar9 != 0) {
            (**(code **)(lVar9 + 0x10))(lVar9,puVar2);
          }
          _objc_release(puVar2);
        }
      }
    }
    _objc_release(0);
  }
  _objc_release(lVar6);
  return;
}



/* Entry: 106510088; end: 1065101d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106510088(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar6 = *(long *)(param_1 + 0x20);
    func_0x00010c2533c0();
    _objc_retain(0);
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c2533c0();
    _objc_retain(0);
    _objc_release(0);
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c2533c0();
    _objc_retain(0);
    _objc_release(0);
    if (((lVar6 == 2) && (lVar3 == 2)) && (lVar4 == 2)) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c07a2c0();
      if (iVar1 != 0) {
        puVar5 = PTR_PTR_1126ba150;
        func_0x00010c22e420();
        if (((ulong)puVar5 & 1) == 0) {
          puVar5 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
          _objc_alloc(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
          func_0x00010bff41a0();
          lVar6 = *(long *)(param_1 + 0x40);
          if (lVar6 != 0) {
            (**(code **)(lVar6 + 0x10))(lVar6,puVar5);
          }
          _objc_release(puVar5);
        }
      }
    }
    _objc_release(0);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 1065101d4; end: 1065102bb; -[SCBaseMediaThumbnailView _replacePlayerItem:] */

void FUN_1065101d4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c29bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (lVar1 != param_3)) {
    func_0x00010bec34a0(param_1,param_2,lVar1);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d5c0();
    _objc_release(puVar3);
  }
  func_0x00010c130d60(lVar2,param_2,param_3);
  _objc_release(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065102bc; end: 10651030b; -[SCBaseMediaThumbnailView _stopObservingPlayerItem:] */

void FUN_1065102bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c29a720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281a80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10651030c; end: 106510437; -[SCBaseMediaThumbnailView _beginObservingPlayerItem:] */

void FUN_10651030c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c29a720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0e0780(param_1);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106510438; end: 106510523;  */

void FUN_106510438(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c252d60();
    if (lVar2 == 2) {
      lVar2 = lVar1;
      func_0x00010c29a720(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c281a80();
      _objc_release(lVar2);
      func_0x00010be8ec40(lVar1);
    }
    else {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010c252d60();
      if (lVar2 == 1) {
        puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_50 = 0xc2000000;
        pcStack_48 = FUN_106510524;
        puStack_40 = &UNK_110842e18;
        lStack_38 = lVar1;
        func_0x0001000d76cc("APPSTORE",&puStack_58);
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106510524; end: 10651056f;  */

void FUN_106510524(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bc60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fe360();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106510570; end: 1065105ff; -[SCBaseMediaThumbnailView _setUpSpinners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106510570(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010c21c2e0();
  lVar1 = param_1 + _DAT_112749b58;
  _objc_loadWeakRetained(lVar1);
  lVar4 = (long)_DAT_112749ba4;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0cb5a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf50280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7b8e0(lVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106510600; end: 10651063f; -[SCBaseMediaThumbnailView _handleReadyToDisplay] */

void FUN_106510600(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be86840();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bea8fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setUpCompleteDisplay_112587d98);
    return;
  }
  func_0x00010bed41c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bebb0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showSpinner_11258c5d0);
  return;
}



/* Entry: 106510640; end: 1065106e3; -[SCBaseMediaThumbnailView _setUpCompleteDisplay] */

void FUN_106510640(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bea8fe0(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1065106e4; end: 1065108df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065106e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0(PTR_PTR_1126b7f68);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c29d560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c278ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf49920(puVar1,param_2,lVar8);
    _objc_release(lVar8);
    _objc_release(lVar2);
    _objc_release(puVar1);
    lVar8 = (long)_DAT_112749b58;
    lVar2 = param_1 + lVar8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_1;
    func_0x00010c29d560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0cb5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c29d560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7b820(lVar2,param_2,lVar4,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar8 = param_1 + lVar8;
    _objc_loadWeakRetained(lVar8);
    lVar2 = param_1;
    func_0x00010c29d560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0c5220();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c29d560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf026e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c29d560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf74260(lVar8,param_2,lVar3,lVar5,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065108e0; end: 106510977; -[SCBaseMediaThumbnailView _setUpCompleteDisplayWithCompletionBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065108e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010be35d40(param_1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112749b88),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112749b8c),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112749b90),param_2,1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112749b94),param_2,1);
  func_0x00010c24dc40(param_1);
  func_0x00010bfe1a60(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106510978; end: 106510a8f; -[SCBaseMediaThumbnailView setUpPendingDisplay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106510978(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010bed41c0();
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749ba4);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112749b6c);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112749b68);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106510a90; end: 106510bbb;  */

void FUN_106510a90(long param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c22f2a0();
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c22fd40();
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c22f6c0();
  uVar4 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c22f6a0();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf86a80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c22e460();
  if ((int)uVar7 == 0) {
    uStack_58 = 0;
  }
  else {
    puVar6 = PTR_PTR_1126ba150;
    func_0x00010c22e480();
    uStack_58 = SUB81(puVar6,0);
  }
  _objc_release(uVar5);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106510bbc;
  puStack_70 = &UNK_110929b80;
  _objc_copyWeak(auStack_60,param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar7);
  uStack_68 = uVar7;
  uStack_57 = uVar1;
  uStack_56 = uVar2;
  uStack_55 = uVar3;
  uStack_54 = uVar4;
  func_0x000100162d98("APPSTORE",&puStack_88);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  return;
}



/* Entry: 106510bbc; end: 106510d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106510bbc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (((uVar1 != 0) && (*(long *)(uVar1 + (long)_DAT_112749ba4) == *(long *)(param_1 + 0x20))) &&
     (uVar2 = uVar1, func_0x00010be86840(), (uVar2 & 1) == 0)) {
    uVar2 = uVar1;
    if (*(char *)(param_1 + 0x30) == '\x01') {
      func_0x00010be35d40(uVar1);
      uVar3 = uVar1;
      func_0x00010c269560(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      uVar3 = uVar1;
      func_0x00010bf9fea0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      uVar3 = uVar1;
      func_0x00010bf9fdc0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      func_0x00010bf4dbe0(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c1a7f60(*(undefined8 *)(uVar1 + (long)_DAT_112749b94),param_2,1);
      if (*(char *)(param_1 + 0x31) == '\x01') {
        uVar3 = uVar1;
        func_0x00010bef15e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c17ea20();
        _objc_release(uVar3);
        func_0x00010bebb0a0(uVar1);
      }
      else {
        func_0x00010be35d40(uVar1);
      }
      uVar3 = uVar1;
      func_0x00010c269560(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      uVar3 = uVar1;
      func_0x00010bf9fea0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      func_0x00010bf9fdc0(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1a7f60();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106510d8c; end: 106510dff; -[SCBaseMediaThumbnailView contentPopulated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106510d8c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112749b74;
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010bf03520();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + lVar3);
    func_0x00010bfe6ac0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 106510e00; end: 106510e57; -[SCBaseMediaThumbnailView _showSpinner] */

void FUN_106510e00(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef15e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010bef15e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106510e58; end: 106510eaf; -[SCBaseMediaThumbnailView _hideSpinner] */

void FUN_106510e58(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef15e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010bef15e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2558c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106510eb0; end: 10651101b; -[SCBaseMediaThumbnailView resetContents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106510eb0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x00010bf1d9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(lVar1);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(lVar3);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112749b9c),param_2,0);
  func_0x00010c139240(param_1);
  func_0x00010bf3bae0(*(undefined8 *)(param_1 + _DAT_112749ba4));
  uVar2 = *(undefined8 *)(param_1 + _DAT_112749ba0);
  *(undefined8 *)(param_1 + _DAT_112749ba0) = 0;
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010c269560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf9fdc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf9fea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112749b94),param_2,1);
  lVar3 = param_1;
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167e80();
  _objc_release(lVar3);
  lVar3 = (long)_DAT_112749ba8;
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10651101c; end: 10651104b; -[SCBaseMediaThumbnailView resetContentsAndRemovePlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651101c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1385e0();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749b98);
  *(undefined8 *)(param_1 + _DAT_112749b98) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10651104c; end: 1065110b7; -[SCBaseMediaThumbnailView pauseVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651104c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112749ba4);
  func_0x00010bf4bc20();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112749bac) = 0;
    uVar2 = *(undefined8 *)(param_1 + _DAT_112749b80);
    func_0x00010c100720(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1065110b8; end: 1065111a7; -[SCBaseMediaThumbnailView resumeVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065110b8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112749ba4);
  func_0x00010bf4bc20();
  if (iVar1 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112749bac) = 1;
  lVar5 = (long)_DAT_112749b80;
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c100720(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fe360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  lVar4 = *(long *)(param_1 + _DAT_112749b9c);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
    func_0x00010be0f480(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c21c370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setUpVideo_112664b00);
  return;
}



/* Entry: 1065111a8; end: 1065112a7; -[SCBaseMediaThumbnailView _readyToRemoveOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1065111a8(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(param_1 + _DAT_112749ba4);
  func_0x00010c22fb60();
  if ((uVar2 & 1) == 0) {
    lVar4 = param_1;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010bf4bc20();
    _objc_release(lVar4);
    if ((int)lVar3 == 0) {
      lVar4 = *(long *)(param_1 + _DAT_112749b74);
      func_0x00010bfe6ac0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar4 != 0;
    }
    else {
      lVar4 = *(long *)(param_1 + _DAT_112749b80);
      func_0x00010c100720();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010bf5f0a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        lVar5 = *(long *)(param_1 + _DAT_112749b74);
        func_0x00010bfe6ac0(lVar5);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = lVar5 != 0;
        _objc_release();
      }
      else {
        bVar1 = true;
      }
      _objc_release(lVar3);
    }
    _objc_release(lVar4);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1065112a8; end: 106511363; -[SCBaseMediaThumbnailView hideBlockingOverlayWithCompletionBlock:] */

void FUN_1065112a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106511364;
  puStack_40 = &UNK_110842e18;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10651139c;
  puStack_68 = &UNK_110842508;
  uStack_60 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010bf03420(0x3fd6666660000000,puVar1,param_2,&puStack_58,&puStack_80);
  _objc_release(uStack_60);
  _objc_release(param_3);
  return;
}



/* Entry: 106511364; end: 10651139b;  */

void FUN_106511364(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1d9c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10651139c; end: 1065113af;  */

void FUN_10651139c(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001065113a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1065113b0; end: 10651140b; -[SCBaseMediaThumbnailView _updateBlockingOverlay] */

void FUN_1065113b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22fb60();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bebacf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showSendingBlockingOverlay_11258c4e0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beb9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showLoadingBlockingOverlay_11258c008);
  return;
}



/* Entry: 10651140c; end: 1065114d3; -[SCBaseMediaThumbnailView _showSendingBlockingOverlay] */

void FUN_10651140c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010706ddcc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf1d9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf1d9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3fd3333333333333);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf1d9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsDisplay_112650978);
  return;
}



/* Entry: 1065114d4; end: 1065115ff; -[SCBaseMediaThumbnailView _showLoadingBlockingOverlay] */

void FUN_1065114d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010706ddbc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf1d9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf1d9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126cb480;
  func_0x00010bf1fb20(PTR_PTR_1126cb480);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar1 = param_1;
  func_0x00010bf1d9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(puVar3);
  func_0x00010bf1d9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(0x3fe0000000000000);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106511600; end: 10651176b; -[SCBaseMediaThumbnailView playerItemDidReachEnd:] */

void FUN_106511600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
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
  pcStack_48 = FUN_10651176c;
  uStack_40 = 0x10651177c;
  uVar1 = param_3;
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = uVar1;
  func_0x00010c0f5b20(param_1);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = puStack_58[5];
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c157300(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10651176c; end: 106511783;  */

void FUN_10651176c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106511784; end: 106511837;  */

void FUN_106511784(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c29bc60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c100720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x00010bf5f0a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
      _objc_release();
      if ((param_2 != 0) && (lVar2 == lVar4)) {
        func_0x00010c0fe360(lVar1);
      }
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106511838; end: 106511893; -[SCBaseMediaThumbnailView resetPlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106511838(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c29a720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c281b20();
  _objc_release(lVar1);
  func_0x00010c0f6160(param_1);
  func_0x00010be8ec40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1dda50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749b80),PTR_s_setPlayer__1126550b8,0);
  return;
}



/* Entry: 106511894; end: 106511897; -[SCBaseMediaThumbnailView _mediaShouldHandleGestures] */

void FUN_106511894(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4cf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_contentPopulated_1125b0d70);
  return;
}



/* Entry: 106511898; end: 1065118b7; -[SCBaseMediaThumbnailView gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106511898(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + _DAT_112749b7c)) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be5ebb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__mediaShouldHandleGestures_112575488);
  return param_1;
}



/* Entry: 1065118b8; end: 10651192b; -[SCBaseMediaThumbnailView handleTap:] */

void FUN_1065118b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c252440();
  if (param_3 == 3) {
    puVar1 = PTR_PTR_1126b6b08;
    func_0x00010c22b6a0(PTR_PTR_1126b6b08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e20();
    _objc_release(puVar1);
    uVar2 = param_1;
    func_0x00010be5eba0();
    if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdee0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__createFullScreenView_1125591d0);
      return;
    }
  }
  return;
}



/* Entry: 10651192c; end: 106511ae3; -[SCBaseMediaThumbnailView _createFullScreenView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651192c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  uVar2 = param_1 + _DAT_112749b58;
  _objc_loadWeakRetained();
  uVar1 = uVar2;
  func_0x00010c22ee60();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    lVar8 = (long)_DAT_112749ba4;
    uVar2 = *(ulong *)(param_1 + lVar8);
    func_0x00010bf1ec00();
    if (0x2c < uVar2 || (1L << (uVar2 & 0x3f) & 0x1ffffffef7fbU) == 0) {
      lVar3 = *(long *)(param_1 + lVar8);
      func_0x00010bf1ec00(lVar3);
      puVar6 = PTR_PTR_1126c2cf8;
      uVar4 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c0cb5a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c122e00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf37bc0(puVar6,param_2,uVar4,lVar3 == 0x10,0,uVar5,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      puVar7 = PTR_PTR_1126c2d00;
      _objc_alloc(PTR_PTR_1126c2d00);
      uVar4 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c06e8e0(uVar4);
      func_0x00010bff7220(puVar7,param_2,param_1,1,uVar4);
      lVar3 = param_1 + _DAT_112749b5c;
      _objc_loadWeakRetained(lVar3);
      uVar4 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010bf50280(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c15df40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10d940(lVar3,param_2,uVar4,uVar5,puVar6,puVar7);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(lVar3);
      _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar6);
      return;
    }
  }
  return;
}



/* Entry: 106511ae4; end: 106511af3; -[SCBaseMediaThumbnailView startAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106511ae4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749b74),PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 106511af4; end: 106511b03; -[SCBaseMediaThumbnailView stopAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106511af4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749b74),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 106511b04; end: 106511be3; -[SCBaseMediaThumbnailView _thumbnailLabelWithText:] */

void FUN_106511b04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c212f20();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126cb480;
  func_0x00010bfce0c0(PTR_PTR_1126cb480);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126cb480;
  func_0x00010c087600(PTR_PTR_1126cb480);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1cfce0(puVar1,param_2,0);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c1a7f60(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106511be4; end: 106511c8f; -[SCBaseMediaThumbnailView _insertThumbnailLabel:] */

void FUN_106511be4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf1d9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066f80(param_1,param_2,param_3,uVar1);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106511c90;
  puStack_40 = &UNK_1108471b0;
  uStack_38 = param_1;
  func_0x00010c0bbfc0(param_3,param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106511c90; end: 106511e73;  */

void FUN_106511c90(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c26e2a0(uVar6);
  func_0x00010bddc6e0(param_2,uVar6);
  (**(code **)(lVar5 + 0x10))(lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c0bc080(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d2840();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(0x3fe3333333333333);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106511e74; end: 106511e83; +[SCBaseMediaThumbnailView borderColor] */

void FUN_106511e74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xae);
  return;
}



/* Entry: 106511e84; end: 106511e9b; +[SCBaseMediaThumbnailView grayChatColor] */

void FUN_106511e84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf41690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe3333333333333,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70,
             PTR_s_colorWithWhite_alpha__1125adf48);
  return;
}



/* Entry: 106511e9c; end: 106511eab; +[SCBaseMediaThumbnailView labelFont] */

void FUN_106511e9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c7350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_mediumAvenirNextFontOfSize__11260f6e8);
  return;
}



/* Entry: 106511eac; end: 106511eaf; +[SCBaseMediaThumbnailView defaultBackgroundColor] */

void FUN_106511eac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x2c);
  return;
}



/* Entry: 106511eb0; end: 106511ef3; -[SCBaseMediaThumbnailView gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_106511eb0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112749ba4;
  uVar2 = *(ulong *)(param_1 + lVar4);
  func_0x00010c22fd40();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c22fb60(uVar3);
    uVar1 = (uint)uVar3 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 106511ef4; end: 106511ef7; -[SCBaseMediaThumbnailView play] */

void FUN_106511ef4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13daf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resumeVideo_11262d0d8);
  return;
}



/* Entry: 106511ef8; end: 106511efb; -[SCBaseMediaThumbnailView pause] */

void FUN_106511ef8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f6170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pauseVideo_11261b278);
  return;
}



/* Entry: 106511efc; end: 106511f0b; -[SCBaseMediaThumbnailView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106511efc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749ba4);
}



/* Entry: 106511f0c; end: 106511f4b; -[SCBaseMediaThumbnailView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106511f0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749ba4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106511f4c; end: 106511f5f; -[SCBaseMediaThumbnailView thumbnailSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_106511f4c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112749b54);
}



/* Entry: 106511f60; end: 106511f73; -[SCBaseMediaThumbnailView setThumbnailSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106511f60(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112749b54;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 106511f74; end: 106511f93; -[SCBaseMediaThumbnailView parentVC] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106511f74(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112749b58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106511f94; end: 106511fd3; -[SCBaseMediaThumbnailView setActivityIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106511f94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749b84;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106511fd4; end: 106511fe3; -[SCBaseMediaThumbnailView blockingOverlayView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106511fd4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749b78);
}



/* Entry: 106511fe4; end: 106512023; -[SCBaseMediaThumbnailView setBlockingOverlayView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106511fe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749b78;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106512024; end: 106512063; -[SCBaseMediaThumbnailView setFailedToSendLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106512024(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749b8c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106512064; end: 1065120a3; -[SCBaseMediaThumbnailView setPlayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106512064(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749b98;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065120a4; end: 1065120e3; -[SCBaseMediaThumbnailView setTapToLoadLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065120a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749b88;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065120e4; end: 106512123; -[SCBaseMediaThumbnailView setFailedToLoadLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065120e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749b90;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106512124; end: 106512133; -[SCBaseMediaThumbnailView storedAnimatedImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106512124(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749bb0);
}



/* Entry: 106512134; end: 106512173; -[SCBaseMediaThumbnailView setStoredAnimatedImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106512134(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749bb0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106512174; end: 106512183; -[SCBaseMediaThumbnailView videoObserveController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106512174(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749b70);
}



/* Entry: 106512184; end: 1065121c3; -[SCBaseMediaThumbnailView setVideoObserveController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106512184(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749b70;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065121c4; end: 1065121d3; -[SCBaseMediaThumbnailView imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065121c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749b74);
}



/* Entry: 1065121d4; end: 106512213; -[SCBaseMediaThumbnailView setImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065121d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749b74;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106512214; end: 106512253; -[SCBaseMediaThumbnailView setVideoOverlayView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106512214(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749b9c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106512254; end: 106512293; -[SCBaseMediaThumbnailView setVideoView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106512254(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749b80;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106512294; end: 10651240b; -[SCBaseMediaThumbnailView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106512294(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112749b80,0);
  _objc_storeStrong(param_1 + _DAT_112749b9c,0);
  _objc_storeStrong(param_1 + _DAT_112749b74,0);
  _objc_storeStrong(param_1 + _DAT_112749b70,0);
  _objc_storeStrong(param_1 + _DAT_112749bb0,0);
  _objc_storeStrong(param_1 + _DAT_112749b90,0);
  _objc_storeStrong(param_1 + _DAT_112749b88,0);
  _objc_storeStrong(param_1 + _DAT_112749b98,0);
  _objc_storeStrong(param_1 + _DAT_112749b8c,0);
  _objc_storeStrong(param_1 + _DAT_112749b78,0);
  _objc_storeStrong(param_1 + _DAT_112749b84,0);
  _objc_storeStrong(param_1 + _DAT_112749ba4,0);
  _objc_storeStrong(param_1 + _DAT_112749b94,0);
  _objc_storeStrong(param_1 + _DAT_112749b6c,0);
  _objc_storeStrong(param_1 + _DAT_112749ba0,0);
  _objc_storeStrong(param_1 + _DAT_112749ba8,0);
  _objc_storeStrong(param_1 + _DAT_112749b68,0);
  _objc_storeStrong(param_1 + _DAT_112749b64,0);
  _objc_storeStrong(param_1 + _DAT_112749b60,0);
  _objc_destroyWeak(param_1 + _DAT_112749b5c);
  _objc_destroyWeak(param_1 + _DAT_112749b58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749b7c,0);
  return;
}



/* Entry: 10651240c; end: 10651252b; -[SCChatSingleMediaThumbnailView initWithParentVC:delegate:chatMediaFetcher:loadMessageLogger:performer:configProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10651240c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f19c0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_60,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112749bb4),param_4);
    func_0x00010be39520(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10651252c; end: 106512673; -[SCChatSingleMediaThumbnailView _initBaseMediaThumbnailViewWithParentVC:delegate:chatMediaFetcher:loadMessageLogger:performer:configProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651252c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126cb480;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c033ce0();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  lVar3 = (long)_DAT_112749bb8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106512674;
  puStack_60 = &UNK_1108471b0;
  lStack_58 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106512674; end: 1065126db;  */

void FUN_106512674(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065126dc; end: 10651274b; -[SCChatSingleMediaThumbnailView setMediaViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065126dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0c5220();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112749bbc);
  *(undefined8 *)(param_1 + _DAT_112749bbc) = uVar1;
  _objc_release(uVar2);
  func_0x00010c1c5680(*(undefined8 *)(param_1 + _DAT_112749bb8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10651274c; end: 10651275b; -[SCChatSingleMediaThumbnailView setThumbnailSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651274c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c214390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749bb8),PTR_s_setThumbnailSize__112662b08);
  return;
}


