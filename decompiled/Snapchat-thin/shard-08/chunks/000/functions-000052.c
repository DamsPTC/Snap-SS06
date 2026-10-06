/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c99ef8; end: 105c99f2b; -[SCGallerySelectionController _galleryFooterBarDidPressLockButton] */

void FUN_105c99ef8(long param_1,undefined8 param_2)

{
  func_0x00010be83300(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010be53e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logGallerySnapSelectWithExitAct_112572930,5,0,
             *(undefined8 *)(param_1 + 200));
  return;
}



/* Entry: 105c99f2c; end: 105c99f33; -[SCGallerySelectionController _galleryFooterBarDidPressUnlockButton] */

void FUN_105c99f2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be83310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__promptToMakeSelectedItemsPrivat_11257e660,0)
  ;
  return;
}



/* Entry: 105c99f34; end: 105c9a233; -[SCGallerySelectionController _galleryFooterBarDidPressBoomboxButton] */

void FUN_105c99f34(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lVar4 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar5;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar5);
      }
      puVar7 = PTR_DAT_1126a4ec8;
      lVar12 = *(long *)(lVar13 * 8);
      _objc_retain(lVar12);
      lVar6 = lVar12;
      func_0x00010010fab4(lVar12,puVar7);
      lVar1 = lVar12;
      if ((int)lVar6 == 0) {
        lVar1 = 0;
      }
      _objc_retain(lVar1);
      _objc_release(lVar12);
      if (lVar1 != 0) {
        func_0x00010bf97200(lVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(lVar12);
      }
      _objc_release(lVar1);
      lVar13 = lVar13 + 1;
    } while (lVar4 != lVar13);
    lVar4 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lVar4 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c159760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = lVar5;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar5);
      }
      uVar8 = *(undefined8 *)(lVar13 * 8);
      func_0x00010c241220(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar7);
      _objc_release(uVar8);
      lVar13 = lVar13 + 1;
    } while (lVar4 != lVar13);
    lVar4 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  func_0x00010bf9bae0(param_1);
  puVar9 = PTR_PTR_1126aead8;
  _objc_alloc();
  lVar4 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c038f40();
  _objc_release(lVar4);
  uVar8 = *(undefined8 *)(param_1 + 0xf8);
  func_0x00010bf23d00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0xf0));
  _objc_release(uVar8);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = puVar3 + 0x50;
  _objc_loadWeakRetained(puVar7);
  puVar9 = puVar7;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar3 + 0x50;
  _objc_loadWeakRetained(puVar7);
  puVar10 = puVar7;
  func_0x00010c159760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  func_0x00010c236f40(*(undefined8 *)(puVar3 + 0x140));
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 105c9a234; end: 105c9a2bb; -[SCGallerySelectionController _galleryFooterBarDidPressDebugViewerButton] */

void FUN_105c9a234(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c159760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c236f40(*(undefined8 *)(param_1 + 0x140),param_2,lVar2,lVar3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105c9a2bc; end: 105c9a2eb; -[SCGallerySelectionController _galleryFooterBarDidPressDirectorModeButton] */

void FUN_105c9a2bc(long param_1)

{
  if ((*(byte *)(param_1 + 0xbb) & 1) != 0) {
    return;
  }
  func_0x00010be6d0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bf9baf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_exitSelectionMode_1125c4860);
  return;
}



/* Entry: 105c9a2ec; end: 105c9a3b3; -[SCGallerySelectionController _openDirectorModeWithSelectedSnaps] */

void FUN_105c9a2ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c159760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf55d40(*(undefined8 *)(param_1 + 0x140),param_2,lVar3,lVar4,
                      &PTR___NSConcreteGlobalBlock_1108e3878);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105c9a3b4; end: 105c9a3b7;  */

void FUN_105c9a3b4(void)

{
  return;
}



/* Entry: 105c9a3b8; end: 105c9a3e7; -[SCGallerySelectionController _didPressCancelButton] */

void FUN_105c9a3b8(long param_1,undefined8 param_2)

{
  func_0x00010be53e40(param_1,param_2,0,0,*(undefined8 *)(param_1 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bf9baf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_exitSelectionMode_1125c4860);
  return;
}



/* Entry: 105c9a3e8; end: 105c9a72f; -[SCGallerySelectionController _updateItemsWithNeedFavorited:isPlural:] */

void FUN_105c9a3e8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
  _objc_release(puVar1);
  puVar1 = (undefined *)(param_1 + 0x50);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010b5fd5f8(puVar3,1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c159760();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar2 = puVar3;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf529e0();
  lVar4 = lVar6;
  func_0x00010bf529e0();
  if (puVar7 + lVar4 == (undefined *)0x0) {
    puVar7 = puVar2;
    func_0x00010bf529e0();
    if (puVar7 == (undefined *)0x0) goto LAB_105c9a6d0;
    puVar7 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    _objc_retain(puVar2);
    func_0x00010c0f84e0(puVar7);
    _objc_release(puVar7);
    _objc_release(puVar2);
    puVar7 = puVar2;
  }
  else {
    puVar7 = PTR_PTR_1126b2220;
    _objc_alloc(PTR_PTR_1126b2220);
    puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 8;
    func_0x00010bafa2a4(8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a560(puVar7);
    _objc_release(uVar9);
    _objc_release(puVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34ec0();
    _objc_release(uVar9);
  }
  _objc_release(puVar7);
LAB_105c9a6d0:
  func_0x00010be53e40(param_1);
  func_0x00010bf9bae0(param_1);
  _objc_release(puVar2);
  _objc_release(lVar6);
  _objc_release(puVar1);
  _objc_release(puVar3);
  return;
}



/* Entry: 105c9a730; end: 105c9a78b;  */

void FUN_105c9a730(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  _objc_retain(param_2);
  _objc_opt_class(puVar2);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c9a78c; end: 105c9a807;  */

void FUN_105c9a78c(long param_1,int param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  _objc_retain(param_3);
  if (((param_3 == 0) && (param_2 != 0)) && ((*(byte *)(param_1 + 0x20) & 1) != 0)) {
    if ((*(byte *)(param_1 + 0x21) & 1) == 0) {
      func_0x000108dfd8b4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108dfd8cc();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x000107e85a74();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c9a808; end: 105c9a927;  */

void FUN_105c9a808(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_2c0 [8];
  undefined1 auStack_2b8 [8];
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar9 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar9);
  puVar8 = auStack_d8;
  lVar10 = lVar9;
  func_0x00010bf52a60();
  iVar5 = (int)param_2;
  if (lVar10 != 0) {
    lVar11 = *plStack_110;
    do {
      lVar12 = 0;
      do {
        if (*plStack_110 != lVar11) {
          _objc_enumerationMutation(lVar9);
        }
        puVar1 = PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948;
        func_0x00010bf35020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19a500();
        _objc_release(puVar1);
        lVar12 = lVar12 + 1;
      } while (lVar10 != lVar12);
      puVar8 = auStack_d8;
      lVar10 = lVar9;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
      iVar5 = (int)param_2;
    } while (lVar10 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_250;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = lVar9;
  if (iVar5 != 0) {
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    lVar10 = *(long *)(lVar9 + 0x20);
    _objc_retain(lVar10);
    puVar8 = auStack_208;
    lVar11 = lVar10;
    func_0x00010bf52a60();
    if (lVar11 != 0) {
      lVar12 = *plStack_240;
      do {
        lVar13 = 0;
        do {
          if (*plStack_240 != lVar12) {
            _objc_enumerationMutation(lVar10);
          }
          uVar2 = *(undefined8 *)(*(long *)(lVar9 + 0x28) + 0x28);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = 8;
          func_0x00010bafa2a4();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a1b60(uVar2);
          _objc_release(uVar3);
          _objc_release(uVar2);
          lVar13 = lVar13 + 1;
        } while (lVar11 != lVar13);
        puVar8 = auStack_208;
        lVar11 = lVar10;
        puVar7 = &uStack_250;
        func_0x00010bf52a60();
      } while (lVar11 != 0);
    }
    _objc_release();
    puVar6 = puVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(puVar8);
  if (puVar8 != (undefined1 *)0x0) {
    func_0x00010bf84b00(puVar6);
    _objc_initWeak(auStack_2b8,lVar10);
    uVar2 = *(undefined8 *)(lVar10 + 0x140);
    lVar9 = lVar10 + 0x50;
    _objc_loadWeakRetained(lVar9);
    lVar11 = lVar9;
    func_0x00010c159720();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar10 + 0x50;
    _objc_loadWeakRetained(lVar10);
    lVar13 = lVar10;
    func_0x00010c159760();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar13;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_2c0,auStack_2b8);
    func_0x00010bef9520(uVar2);
    _objc_release(lVar4);
    _objc_release(lVar13);
    _objc_release(lVar10);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar9);
    _objc_destroyWeak(auStack_2c0);
    _objc_destroyWeak(auStack_2b8);
  }
  _objc_release(puVar8);
  _objc_release(puVar6);
  return;
}



/* Entry: 105c9a928; end: 105c9aa83;  */

void FUN_105c9a928(long param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_1;
  if (param_2 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar7 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar7);
    param_4 = auStack_e8;
    lVar1 = lVar7;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar7);
          }
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = 8;
          func_0x00010bafa2a4();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a1b60(uVar2);
          _objc_release(uVar3);
          _objc_release(uVar2);
          lVar9 = lVar9 + 1;
        } while (lVar1 != lVar9);
        param_4 = auStack_e8;
        lVar1 = lVar7;
        puVar6 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release();
    param_3 = (undefined1 *)puVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != (undefined1 *)0x0) {
    func_0x00010bf84b00(param_3);
    _objc_initWeak(auStack_198,lVar7);
    uVar2 = *(undefined8 *)(lVar7 + 0x140);
    lVar1 = lVar7 + 0x50;
    _objc_loadWeakRetained(lVar1);
    lVar8 = lVar1;
    func_0x00010c159720();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar7 + 0x50;
    _objc_loadWeakRetained(lVar7);
    lVar4 = lVar7;
    func_0x00010c159760();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_1a0,auStack_198);
    func_0x00010bef9520(uVar2);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar7);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_1a0);
    _objc_destroyWeak(auStack_198);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c9aa84; end: 105c9ac33; -[SCGallerySelectionController storySelectViewController:didSelectStory:] */

void FUN_105c9aa84(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    func_0x00010bf84b00(param_3);
    _objc_initWeak(auStack_68,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x140);
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c159720();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c159760();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bef9520(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(param_1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c9ac34; end: 105c9acb3;  */

void FUN_105c9ac34(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_3 != 0) && ((param_2 & 1) == 0)) && (param_1 != 0)) {
    func_0x00010bf9bae0(param_1);
    lVar1 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c15a560();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c9acb4; end: 105c9acd3; -[SCGallerySelectionController boomboxScopeDidDismiss:] */

void FUN_105c9acb4(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xf0));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105c9acd4; end: 105c9adfb; -[SCGallerySelectionController _setUpDisposables] */

void FUN_105c9acd4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 0x150);
  *(undefined **)(param_1 + 0x150) = puVar1;
  _objc_release(uVar4);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e11a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105c9adfc; end: 105c9aea7;  */

void FUN_105c9adfc(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105c9aea8; end: 105c9af0f;  */

void FUN_105c9aea8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    uVar2 = param_2;
    func_0x00010c2827c0();
    *(undefined8 *)(param_1 + 0x148) = uVar2;
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c9af10; end: 105c9af13;  */

void FUN_105c9af10(void)

{
  return;
}



/* Entry: 105c9af14; end: 105c9af17; -[SCGallerySelectionController memoriesPickerV2DidDismiss] */

void FUN_105c9af14(void)

{
  return;
}



/* Entry: 105c9af18; end: 105c9b07b; -[SCGallerySelectionController _createTemplateWithSnapDoc:medias:completionBlock:] */

void FUN_105c9af18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf59640();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c297260(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c9b07c; end: 105c9b163;  */

void FUN_105c9b07c(long param_1,long param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  if ((param_2 == 0) || (param_3 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be7a0c0();
    _objc_release(param_1);
  }
  else {
    puVar2 = PTR_PTR_1126bfa68;
    _objc_alloc(PTR_PTR_1126bfa68);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e26b98;
    func_0x00010bf64920(&PTR____CFConstantStringClassReference_110e26b98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051020(puVar2);
    _objc_release(ppuVar1);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),puVar2,*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c9b164; end: 105c9b1eb; -[SCGallerySelectionController onItemsSelectedWithItems:] */

void FUN_105c9b164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_40 = FUN_105c9b1ec;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105c9b1ec; end: 105c9b1f7;  */

void FUN_105c9b1ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be69ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onItemsSelectedWithItems__112578048,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105c9b1f8; end: 105c9b8eb; -[SCGallerySelectionController _onItemsSelectedWithItems:] */

void FUN_105c9b1f8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **unaff_x23;
  undefined *puVar13;
  undefined *unaff_x24;
  undefined1 auStack_278 [8];
  undefined *puStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined *puStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined *puStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  long alStack_158 [3];
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long alStack_110 [17];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_200 = param_3;
  _objc_retain(param_3);
  func_0x00010be7ea80(param_1);
  ppuVar1 = (undefined **)(param_1 + 0x50);
  _objc_loadWeakRetained();
  ppuVar2 = ppuVar1;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  ppuVar1 = ppuVar12;
  func_0x00010010fab4(ppuVar12,PTR_DAT_1126a4ec8);
  ppuStack_220 = ppuVar12;
  if ((int)ppuVar1 == 0) {
    ppuStack_220 = (undefined **)0x0;
  }
  _objc_retain(ppuStack_220);
  _objc_release(ppuVar12);
  ppuVar3 = (undefined **)PTR_PTR_1126af4d0;
  ppuVar2 = *(undefined ***)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7380();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  ppuStack_218 = ppuVar1;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  alStack_110[0] = 0;
  plVar10 = alStack_110;
  ppuVar3 = ppuVar1;
  func_0x000108020568();
  _objc_retainAutoreleasedReturnValue();
  lStack_208 = alStack_110[0];
  ppuStack_210 = ppuVar3;
  _objc_retain();
  _objc_release(ppuVar1);
  if (lStack_208 == 0) {
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_1f0 = puVar13;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puStack_200;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    alStack_158[2] = 0;
    alStack_158[1] = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    puStack_1f8 = puVar4;
    _objc_retain(puStack_200);
    func_0x00010bf52a60();
    if (puVar13 != (undefined *)0x0) {
      lVar11 = *plStack_140;
      ppuVar12 = &PTR_PTR_1126af000;
      do {
        unaff_x24 = (undefined *)0x0;
        do {
          if (*plStack_140 != lVar11) {
            _objc_enumerationMutation(puStack_200);
          }
          uVar9 = *(undefined8 *)(alStack_158[2] + (long)unaff_x24 * 8);
          func_0x00010c0c9920(uVar9);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar9;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          ppuVar2 = (undefined **)PTR_PTR_1126af4d0;
          uVar9 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c269d40(uVar9);
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = ppuVar2;
          func_0x00010bfa72e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          ppuVar1 = unaff_x23;
          func_0x00010c0c4ae0();
          _objc_retainAutoreleasedReturnValue();
          if (ppuVar1 == (undefined **)0x0) {
            ppuVar1 = unaff_x23;
            func_0x00010c0c6140();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (ppuVar1 == (undefined **)0x0) {
              ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c14de00();
              _objc_retainAutoreleasedReturnValue();
              ppuVar3 = &PTR____CFConstantStringClassReference_110e26ab8;
              func_0x00010be7a0c0(param_1);
              _objc_release(ppuVar1);
              _objc_release(unaff_x23);
              _objc_release(uVar8);
              puVar13 = puStack_200;
              goto LAB_105c9b830;
            }
          }
          else {
            _objc_release();
          }
          ppuVar2 = (undefined **)PTR_PTR_1126af4c0;
          uVar9 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010c269d40(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7060();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          func_0x00010befa120(puStack_1f0);
          plVar10 = (long *)PTR_DAT_1126a4ec0;
          _objc_retain(ppuVar2);
          ppuVar3 = ppuVar2;
          func_0x00010010fab4();
          ppuVar1 = ppuVar2;
          if ((int)ppuVar3 == 0) {
            ppuVar1 = (undefined **)0x0;
          }
          _objc_retain(ppuVar1);
          _objc_release(ppuVar2);
          func_0x00010befa120(puStack_1f8);
          _objc_release(ppuVar1);
          _objc_release(ppuVar2);
          _objc_release(unaff_x23);
          _objc_release(uVar8);
          unaff_x24 = unaff_x24 + 1;
        } while (puVar13 != unaff_x24);
        puVar13 = puStack_200;
        func_0x00010bf52a60();
      } while (puVar13 != (undefined *)0x0);
    }
    _objc_release(puStack_200);
    puVar13 = puStack_1f0;
    func_0x00010bf529e0();
    if (puVar13 < (undefined *)0x2) {
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = &PTR____CFConstantStringClassReference_110e26ab8;
      func_0x00010be7a0c0(param_1);
    }
    else {
      puVar13 = *(undefined **)(param_1 + 0x180);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = *(undefined **)(param_1 + 0x150);
      _objc_retain(unaff_x24);
      _objc_initWeak(alStack_158,param_1);
      puVar4 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_198 = 0xc2000000;
      pcStack_190 = FUN_105c9b8ec;
      puStack_188 = &UNK_1108e39f8;
      ppuVar12 = &puStack_1a0;
      _objc_copyWeak(auStack_160,alStack_158);
      puVar6 = puStack_1f0;
      puStack_180 = puVar13;
      _objc_retain(puStack_1f0);
      puStack_178 = puVar6;
      ppuVar5 = &puStack_1a0;
      lStack_170 = param_1;
      puStack_168 = unaff_x24;
      _objc_retainBlock();
      unaff_x23 = (undefined **)PTR_PTR_1126ae560;
      _objc_opt_new();
      puVar6 = PTR_PTR_1126b25b8;
      _objc_alloc();
      puVar7 = puVar6;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c011280();
      puStack_228 = puVar6;
      _objc_release(puVar7);
      uVar9 = *(undefined8 *)(param_1 + 0xe0);
      uVar8 = *(undefined8 *)(param_1 + 0x128);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107e6121c(puStack_228,ppuStack_210,uVar9,uVar8,*(undefined8 *)(param_1 + 400),
                          unaff_x23,0);
      _objc_release(uVar8);
      uVar8 = *(undefined8 *)(param_1 + 0x140);
      _objc_retain(uVar8);
      ppuVar2 = unaff_x23;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_1e8 = puVar4;
      uStack_1e0 = 0xc2000000;
      pcStack_1d8 = FUN_105c9bdec;
      puStack_1d0 = &UNK_1108e3a28;
      ppuVar1 = &puStack_1e8;
      plVar10 = alStack_158;
      _objc_copyWeak(auStack_1a8);
      puVar4 = puStack_1f8;
      uStack_1c8 = uVar8;
      _objc_retain(puStack_1f8);
      ppuVar3 = ppuStack_210;
      puStack_1c0 = puVar4;
      _objc_retain(ppuStack_210);
      ppuStack_1b8 = ppuVar3;
      ppuVar3 = &puStack_1e8;
      ppuStack_1b0 = ppuVar5;
      func_0x00010c297260(ppuVar2);
      _objc_release(ppuVar2);
      _objc_release(ppuStack_1b8);
      _objc_release(puStack_1c0);
      _objc_destroyWeak(auStack_1a8);
      _objc_release(uVar8);
      _objc_release(puStack_228);
      _objc_release(unaff_x23);
      _objc_release(ppuVar5);
      _objc_release(puStack_178);
      _objc_destroyWeak(auStack_160);
      _objc_destroyWeak(alStack_158);
      _objc_release(unaff_x24);
    }
LAB_105c9b830:
    _objc_release(puVar13);
    _objc_release(puStack_1f8);
  }
  else {
    puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e26ab8;
    puStack_1f0 = puVar13;
    func_0x00010be7a0c0(param_1);
  }
  _objc_release(puStack_1f0);
  _objc_release(ppuStack_210);
  _objc_release(lStack_208);
  _objc_release(ppuStack_218);
  _objc_release(ppuStack_220);
  puVar13 = puStack_200;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar1 + 8);
  _objc_destroyWeak(ppuVar12 + 8);
  _objc_destroyWeak(alStack_158);
  puVar4 = puVar13;
  __Unwind_Resume();
  pcStack_238 = FUN_105c9b8ec;
  puStack_270 = unaff_x24;
  ppuStack_268 = unaff_x23;
  ppuStack_260 = ppuVar12;
  ppuStack_258 = ppuVar2;
  ppuStack_250 = ppuVar1;
  puStack_248 = puVar13;
  puStack_240 = &stack0xfffffffffffffff0;
  _objc_retain(plVar10);
  _objc_retain(ppuVar3);
  ppuVar1 = ppuVar3;
  func_0x00010bf529e0();
  if (ppuVar1 == (undefined **)0x0) {
    puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar4 + 0x40;
    _objc_loadWeakRetained(puVar4);
    func_0x00010be7a0c0();
    _objc_release(puVar4);
  }
  else {
    uVar9 = *(undefined8 *)(puVar4 + 0x20);
    func_0x00010bfbfa60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = *(undefined **)(puVar4 + 0x28);
    _objc_retain(puVar13);
    _objc_retain(plVar10);
    _objc_copyWeak(auStack_278,puVar4 + 0x40);
    uVar8 = uVar9;
    func_0x00010c25ff60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar8);
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_278);
    _objc_release(plVar10);
  }
  _objc_release(puVar13);
  _objc_release(ppuVar3);
  _objc_release(plVar10);
  return;
}



/* Entry: 105c9b8ec; end: 105c9ba73;  */

void FUN_105c9b8ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010be7a0c0();
    _objc_release(param_1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfbfa60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_1 + 0x28);
    _objc_retain(puVar4);
    _objc_retain(param_2);
    _objc_copyWeak(auStack_48,param_1 + 0x40);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
    _objc_release(param_2);
  }
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105c9ba74; end: 105c9bb93;  */

void FUN_105c9ba74(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105c9bb94;
  puStack_68 = &UNK_1108e39c8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  _objc_retain(uVar2);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  _objc_copyWeak(auStack_88,param_1 + 0x38);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_2);
  return;
}



/* Entry: 105c9bb94; end: 105c9bd23;  */

void FUN_105c9bb94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c26afc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x1d0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c12f680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010c13cb40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,param_1 + 0x38);
  func_0x00010c297260(uVar4);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105c9bd24; end: 105c9bd2b;  */

void FUN_105c9bd24(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 105c9bd2c; end: 105c9bd87;  */

void FUN_105c9bd2c(long param_1,undefined8 param_2)

{
  func_0x00010c23fe00(param_2);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be99560();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c9bd88; end: 105c9bdeb;  */

void FUN_105c9bd88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e26c58);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7a0c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c9bdec; end: 105c9bf47;  */

void FUN_105c9bdec(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_3 == 0) && (lVar2 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_58,param_1 + 0x40);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    func_0x00010bf50fe0(uVar1);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_58);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010be7a0c0();
    _objc_release(param_1);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105c9bf48; end: 105c9bf9b;  */

void FUN_105c9bf48(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf4900();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c9bf9c; end: 105c9c2c7; -[SCGallerySelectionController _saveMashup:createdFromSnapIds:templateId:] */

void FUN_105c9bf9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90fc0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    puVar3 = PTR_PTR_1126bf820;
    _objc_alloc(PTR_PTR_1126bf820);
    func_0x00010c046fa0();
    uVar1 = *(undefined8 *)(param_1 + 0x170);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c14ade0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar4 = auStack_98;
    _objc_initWeak(puVar4,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0e0ea0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a0,auStack_98);
    uVar5 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
  }
  else {
    puVar3 = PTR_PTR_1126bf810;
    _objc_alloc();
    func_0x00010c0066e0();
    uVar1 = *(undefined8 *)(param_1 + 0x178);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c14aa60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105c9c2c8;
    puStack_78 = &UNK_1108e3a58;
    lStack_70 = param_1;
    func_0x00010c297260(uVar2);
  }
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105c9c2c8; end: 105c9c4af;  */

/* WARNING: Possible PIC construction at 0x000105c9c30c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105c9c310) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105c9c2c8(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128b80();
    _objc_release(uVar2);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e26cf8;
    lVar4 = *(long *)(param_1 + 0x20);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e26d18;
  }
  else {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e26cd8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e26ab8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar4,PTR_s__presentAlertForMashupVC_dialogT_11257c1d0,ppuVar3,ppuVar1);
  return;
}



/* Entry: 105c9c4b0; end: 105c9c4ff; -[SCGallerySelectionController onBackPressed] */

void FUN_105c9c4b0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x160;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105c9c500; end: 105c9c503; -[SCGallerySelectionController onCameraRollAlbumClickedWithCameraRollAlbumId:] */

void FUN_105c9c500(void)

{
  return;
}



/* Entry: 105c9c504; end: 105c9c507; -[SCGallerySelectionController onItemClickedWithItem:thumbnailCell:] */

void FUN_105c9c504(void)

{
  return;
}



/* Entry: 105c9c508; end: 105c9c50f; -[SCGallerySelectionController onTrimItemTappedWithItem:remainingDurationMs:selectedItems:disallowDurationChange:] */

undefined8 FUN_105c9c508(void)

{
  return 0;
}



/* Entry: 105c9c510; end: 105c9c513; -[SCGallerySelectionController multiSelectSendButtonTapped] */

void FUN_105c9c510(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didPressSendToWithActionBar_11255d580);
  return;
}



/* Entry: 105c9c514; end: 105c9c517; -[SCGallerySelectionController multiSelectCreateVideoButtonTapped] */

void FUN_105c9c514(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be00cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didTapCreateVideoButton_11255dcc8);
  return;
}



/* Entry: 105c9c518; end: 105c9c51b; -[SCGallerySelectionController multiSelectEditButtonTapped] */

void FUN_105c9c518(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1a270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__galleryFooterBarEditItem_112564238);
  return;
}



/* Entry: 105c9c51c; end: 105c9c72f; -[SCGallerySelectionController multiSelectMoreButtonTapped] */

void FUN_105c9c51c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = *(long *)(param_1 + 0xb0);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar2 = *(long *)(param_1 + 0xb0);
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar11 = 0;
      do {
        uVar4 = *(undefined8 *)(param_1 + 0xb0);
        func_0x00010c0dfd40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18b5e0();
        uVar5 = uVar4;
        func_0x00010beedec0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar3);
        _objc_release(uVar5);
        _objc_release(uVar4);
        uVar11 = uVar11 + 1;
        uVar6 = *(ulong *)(param_1 + 0xb0);
        func_0x00010bf529e0();
      } while (uVar11 < uVar6);
    }
    _objc_retain(puVar1);
    func_0x00010bf97e80(puVar3);
    puVar8 = PTR_PTR_1126b10a0;
    ppuVar7 = &PTR____CFConstantStringClassReference_110dbb618;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb42c0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    func_0x00010bf1d200(puVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b10a8;
    _objc_alloc(PTR_PTR_1126b10a8);
    func_0x00010c019f40();
    puVar10 = PTR_PTR_1126b27f8;
    _objc_alloc(PTR_PTR_1126b27f8);
    func_0x00010c040200();
    func_0x00010c161de0(puVar9);
    func_0x00010be7f9a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0();
    _objc_release(param_1);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c9c730; end: 105c9c917;  */

void FUN_105c9c730(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010beeef00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_2;
    func_0x00010c2711a0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b10a0;
  lVar1 = param_2;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb0);
  func_0x00010c0dfd40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  func_0x00010c0ec280(0x4030000000000000,0x4030000000000000,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar1);
  uVar5 = *(ulong *)(*(long *)(param_1 + 0x20) + 0xb0);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf926c0();
  if ((uVar6 & 1) == 0) {
    func_0x00010bf80e00(0x3ff0000000000000,uVar5);
  }
  func_0x00010c1677c0(puVar4);
  _objc_retain(param_2);
  func_0x00010bf1d200(puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010beecec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(puVar4);
  _objc_release(lVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(lVar2);
  return;
}



/* Entry: 105c9c918; end: 105c9c9d7;  */

void FUN_105c9c918(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105c9c9d8; end: 105c9c9df;  */

void FUN_105c9c9d8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dismissActionSheet_1125be5a0);
  return;
}



/* Entry: 105c9c9e0; end: 105c9caff; -[SCGallerySelectionController _logGallerySnapSelectWithExitAction:videoCreateSessionId:selectMode:] */

void FUN_105c9c9e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c159720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0xd0);
  uVar5 = *(undefined8 *)(param_1 + 0xe0);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105c9cb00;
  puStack_90 = &UNK_1108e3ad8;
  lStack_88 = lVar3;
  lStack_80 = param_1;
  uStack_78 = uVar4;
  uStack_70 = param_4;
  uStack_68 = param_5;
  uStack_58 = param_3;
  _objc_retain(param_4);
  _objc_retain(lVar3);
  _objc_retain(uVar4);
  func_0x00010c0f7fc0(uVar5,param_2,&puStack_a8);
  _objc_release(uStack_70);
  _objc_release(lStack_88);
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release(lVar3);
  return;
}



/* Entry: 105c9cb00; end: 105c9ce8b;  */

void FUN_105c9cb00(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar11);
  lVar9 = lVar11;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar11);
      }
      uVar14 = *(ulong *)(lVar13 * 8);
      uVar4 = uVar14;
      func_0x00010bfbd100();
      puVar7 = PTR__OBJC_CLASS___PHAsset_1126bd898;
      puVar3 = PTR_DAT_1126a4ec8;
      if (uVar4 == 2) {
        _objc_retain(uVar14);
        _objc_opt_class(puVar7);
        uVar8 = uVar14;
        _objc_opt_isKindOfClass(uVar14,puVar7);
        uVar4 = uVar14;
        if ((uVar8 & 1) == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar14);
        func_0x00010c0c6c20();
        _objc_release(uVar4);
      }
      else if (uVar4 == 1) {
        _objc_retain(uVar14);
        uVar8 = uVar14;
        func_0x00010010fab4(uVar14,puVar3);
        uVar4 = uVar14;
        if ((int)uVar8 == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar14);
        lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bfa7340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        _objc_retain(lVar6);
        lVar5 = lVar6;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (lVar5 != 0) {
          lVar12 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(lVar6);
            }
            func_0x00010b5fa088();
            lVar12 = lVar12 + 1;
          } while (lVar5 != lVar12);
          lVar5 = lVar6;
          func_0x00010bf52a60();
        }
        _objc_release(lVar6);
        _objc_release(lVar6);
        _objc_release(uVar4);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != lVar9);
    lVar9 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  lVar9 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40(lVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a72e0();
  _objc_release(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar9 + 0x208,0);
  _objc_storeStrong(lVar9 + 0x200,0);
  _objc_storeStrong(lVar9 + 0x1e8,0);
  _objc_storeStrong(lVar9 + 0x1e0,0);
  _objc_storeStrong(lVar9 + 0x1d8,0);
  _objc_storeStrong(lVar9 + 0x1d0,0);
  _objc_storeStrong(lVar9 + 0x1c8,0);
  _objc_storeStrong(lVar9 + 0x1c0,0);
  _objc_storeStrong(lVar9 + 0x1b8,0);
  _objc_storeStrong(lVar9 + 0x1b0,0);
  _objc_storeStrong(lVar9 + 0x1a8,0);
  _objc_storeStrong(lVar9 + 0x1a0,0);
  _objc_storeStrong(lVar9 + 0x198,0);
  _objc_storeStrong(lVar9 + 400,0);
  _objc_storeStrong(lVar9 + 0x188,0);
  _objc_storeStrong(lVar9 + 0x180,0);
  _objc_storeStrong(lVar9 + 0x178,0);
  _objc_storeStrong(lVar9 + 0x170,0);
  _objc_storeStrong(lVar9 + 0x168,0);
  _objc_destroyWeak(lVar9 + 0x160);
  _objc_storeStrong(lVar9 + 0x158,0);
  _objc_storeStrong(lVar9 + 0x150,0);
  _objc_storeStrong(lVar9 + 0x140,0);
  _objc_storeStrong(lVar9 + 0x138,0);
  _objc_storeStrong(lVar9 + 0x130,0);
  _objc_storeStrong(lVar9 + 0x128,0);
  _objc_storeStrong(lVar9 + 0x120,0);
  _objc_storeStrong(lVar9 + 0x118,0);
  _objc_storeStrong(lVar9 + 0x110,0);
  _objc_storeStrong(lVar9 + 0x108,0);
  _objc_storeStrong(lVar9 + 0x100,0);
  _objc_storeStrong(lVar9 + 0xf8,0);
  _objc_storeStrong(lVar9 + 0xf0,0);
  _objc_storeStrong(lVar9 + 0xe8,0);
  _objc_storeStrong(lVar9 + 0xe0,0);
  _objc_storeStrong(lVar9 + 0xb0,0);
  _objc_storeStrong(lVar9 + 0xa8,0);
  _objc_destroyWeak(lVar9 + 0xa0);
  _objc_storeStrong(lVar9 + 0x98,0);
  _objc_storeStrong(lVar9 + 0x90,0);
  _objc_storeStrong(lVar9 + 0x88,0);
  _objc_storeStrong(lVar9 + 0x80,0);
  _objc_storeStrong(lVar9 + 0x78,0);
  _objc_storeStrong(lVar9 + 0x70,0);
  _objc_storeStrong(lVar9 + 0x68,0);
  _objc_storeStrong(lVar9 + 0x60,0);
  _objc_destroyWeak(lVar9 + 0x58);
  _objc_destroyWeak(lVar9 + 0x50);
  _objc_destroyWeak(lVar9 + 0x48);
  _objc_storeStrong(lVar9 + 0x40,0);
  _objc_storeStrong(lVar9 + 0x38,0);
  _objc_storeStrong(lVar9 + 0x30,0);
  _objc_storeStrong(lVar9 + 0x28,0);
  _objc_storeStrong(lVar9 + 0x20,0);
  _objc_storeStrong(lVar9 + 0x18,0);
  _objc_storeStrong(lVar9 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar9 + 8,0);
  return;
}



/* Entry: 105c9ce8c; end: 105c9d13b; -[SCGallerySelectionController .cxx_destruct] */

void FUN_105c9ce8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_storeStrong(param_1 + 0x1e0,0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_destroyWeak(param_1 + 0x160);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
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
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_destroyWeak(param_1 + 0xa0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 105c9d13c; end: 105c9d163;  */

undefined ** FUN_105c9d13c(long param_1)

{
  if (param_1 - 1U < 0x15) {
    return (undefined **)(&PTR_PTR_1108e3b08)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e26d38;
}



/* Entry: 105c9d164; end: 105c9d767; +[SCGallerySelectionUtil footerActionItemsWithSelectedGalleryItemsCount:selectedGallerySnapsCount:numberEditableSnaps:numberOfEditableEntryOfMultipleSnaps:numberOfTooLongToImportForStoryVideoAssets:numberOfBoomboxIneligibleSnaps:numberOfTooLongToImportVideoAssets:numberOfPrivateEntries:numberOfFavoritedSnaps:numberOfSnapsSelected:numberOfStories:numberOfDirectorModeSegments:totalDirectorModeDuration:containBackupFailedEntries:actionSheetTitleType:currentTabType:hasExistingStoriesToShowAddToStoryOption:containEntryLevelSnapDoc:containSnapLevelSnapDoc:containsSpectacles:isMixOfSnapAndPHAsset:numberOfFavoritedPHAssets:numberOfPHAssets:shouldSupportFavoritingCR:createYourOwnSoundSyncedTemplatesEnabled:disableEditAndStoryActionsForBlockedCodec:circumstanceEngine:] */

void FUN_105c9d164(float param_1,undefined *param_2,undefined8 param_3,ulong param_4,long param_5,
                  long param_6,long param_7,undefined8 param_8,undefined8 param_9,long param_10,
                  long param_11,undefined8 param_12,undefined8 param_13,long param_14,ulong param_15
                  ,byte param_16,undefined4 param_17,undefined8 param_18,ulong param_19,
                  uint param_20,byte param_21,undefined8 param_22,long param_23,uint param_24,
                  undefined4 param_25,undefined8 param_26)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uStack_7c;
  
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar9 = param_24 >> 0x10 & 0xff;
  _objc_retain(param_26);
  _objc_opt_new(puVar6);
  puVar7 = param_2;
  func_0x00010beb3640(param_2,param_3,param_8);
  uStack_7c = (uint)puVar7;
  uVar8 = param_26;
  func_0x00010bf1f440(param_26,param_3,&PTR____CFConstantStringClassReference_110e26ff8,0,0);
  uVar5 = (uint)uVar8;
  _objc_release(param_26);
  if (((param_5 + param_4 == 1) && ((param_16 & 1) == 0)) && ((param_6 == 1 || (param_7 == 1)))) {
    puVar7 = PTR_PTR_1126c38b8;
    func_0x00010c084f40(PTR_PTR_1126c38b8,param_3,0,uVar9 ^ 1,param_18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6,param_3,puVar7);
    _objc_release(puVar7);
LAB_105c9d3f8:
    if (param_19 == 0xd) {
LAB_105c9d420:
      bVar1 = 0;
      if (param_23 == 0) {
        bVar1 = param_21 ^ 1;
      }
      if (((param_24 & 1) != 0) || (bVar1 != 0)) {
        func_0x00010bdc6ba0(param_2,param_3,puVar6,param_19,param_12,param_13,param_20._1_1_,
                            param_18,param_22,param_23,(undefined1)param_24);
      }
      if (param_19 == 6) {
LAB_105c9d46c:
        bVar4 = false;
        goto LAB_105c9d470;
      }
    }
    else {
      if (param_19 == 6) goto LAB_105c9d46c;
      if (param_19 == 3) goto LAB_105c9d420;
    }
    if ((((param_16 & 1) == 0) && ((param_5 == 0 && param_11 == 0) && param_10 == 0)) &&
       ((param_19 & 0xfffffffffffffffe) != 0xe)) {
      puVar7 = PTR_PTR_1126c38b8;
      func_0x00010c084f40(PTR_PTR_1126c38b8,param_3,3,1,param_18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_3,puVar7);
      _objc_release(puVar7);
    }
    uVar2 = 0;
    if (param_19 != 6) {
      uVar2 = uVar5 ^ 1;
    }
    if (((param_16 & 1) == 0) && ((uVar2 & uStack_7c) != 0)) {
      puVar7 = PTR_PTR_1126c38b8;
      func_0x00010c084f40(PTR_PTR_1126c38b8,param_3,5,uStack_7c & (uVar9 ^ 1),param_18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_3,puVar7);
      _objc_release(puVar7);
    }
    bVar3 = false;
    if ((param_19 == 3) || (bVar4 = false, param_19 == 0xd)) goto LAB_105c9d5bc;
  }
  else {
    if (param_19 != 6) {
      if ((((param_15 < 2) || (60.0 < param_1)) || (param_15 != param_4)) ||
         ((param_24 & 0x100) != 0)) {
        uStack_7c = (param_16 ^ 1) & uStack_7c;
      }
      else {
        puVar7 = PTR_PTR_1126c38b8;
        func_0x00010c084f40(PTR_PTR_1126c38b8,param_3,0xc,uVar9 ^ 1,param_18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6,param_3,puVar7);
        _objc_release(puVar7);
      }
      goto LAB_105c9d3f8;
    }
    bVar4 = (param_20 & 0xff & uStack_7c & ((param_16 | uVar5) ^ 1)) == 1;
    if (bVar4) {
      puVar7 = PTR_PTR_1126c38b8;
      func_0x00010c084f40(PTR_PTR_1126c38b8,param_3,6,uVar9 ^ 1,param_18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_3,puVar7);
      _objc_release(puVar7);
      uStack_7c = 1;
    }
LAB_105c9d470:
    if ((param_10 == 0 && param_5 == 0) && ((param_16 & 1) == 0)) {
      puVar7 = PTR_PTR_1126c38b8;
      func_0x00010c084f40(PTR_PTR_1126c38b8,param_3,4,1,param_18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_3,puVar7);
      _objc_release(puVar7);
    }
  }
  bVar3 = bVar4;
  func_0x00010bdc6ba0(param_2,param_3,puVar6,param_19,param_12,param_13,param_20._1_1_,param_18,
                      param_22,param_23,(undefined1)param_24);
LAB_105c9d5bc:
  if ((((param_20 & 0xff) != 0) && (uVar5 == 0 && (param_16 == 0 && !bVar3))) && (uStack_7c != 0)) {
    puVar7 = PTR_PTR_1126c38b8;
    func_0x00010c084f40(PTR_PTR_1126c38b8,param_3,6,uVar9 ^ 1,param_18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6,param_3,puVar7);
    _objc_release(puVar7);
  }
  if (((param_19 == 2) && (param_5 == 0)) && ((param_14 == 1 && ((param_16 & 1) == 0)))) {
    puVar7 = PTR_PTR_1126c38b8;
    func_0x00010c084f40(PTR_PTR_1126c38b8,param_3,7,1,param_18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6,param_3,puVar7);
    _objc_release(puVar7);
  }
  func_0x00010bdc67c0(param_2,param_3,puVar6,param_4,param_5,param_18);
  func_0x00010b6fb1b4();
  if (param_2 == (undefined *)0x1) {
    param_2 = PTR_PTR_1126c38b8;
    func_0x00010c084f40(PTR_PTR_1126c38b8,param_3,0xd,1,param_18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6,param_3,param_2);
    _objc_release(param_2);
  }
  if ((param_21 & 1) == 0) {
    func_0x00010b6fb240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    _objc_release(param_2);
  }
  if (param_19 != 0xf) {
    puVar7 = PTR_PTR_1126c38b8;
    func_0x00010c084f40(PTR_PTR_1126c38b8,param_3,1,1,param_18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6,param_3,puVar7);
    _objc_release(puVar7);
  }
  puVar7 = puVar6;
  func_0x00010bf51e00(puVar6);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105c9d768; end: 105c9d773; +[SCGallerySelectionUtil _shouldEnableAddToStory:] */

bool FUN_105c9d768(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0;
}



/* Entry: 105c9d774; end: 105c9d7a3; +[SCGallerySelectionUtil _disabledAddToStoryAlertDesc:] */

void FUN_105c9d774(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    func_0x000108dfdb6c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108dfd62c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c9d7a4; end: 105c9d877; +[SCGallerySelectionUtil _addFavoriteToFooterActionItems:currentTabType:numberOfFavoritedSnaps:numberOfSnapsSelected:containEntryLevelSnapDoc:actionSheetTitleType:numberOfFavoritedPHAssets:numberOfPHAssets:shouldSupportFavoritingCR:] */

void FUN_105c9d7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5,long param_6,uint param_7,undefined8 param_8,long param_9,
                  long param_10,char param_11)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if (((param_4 < 0xb) && ((1L << (param_4 & 0x3f) & 0x608U) != 0)) ||
     ((param_4 == 4 && (param_11 != '\0')))) {
    uVar1 = 9;
    if (param_9 == param_10 && param_5 == param_6) {
      uVar1 = 10;
    }
    puVar2 = PTR_PTR_1126c38b8;
    func_0x00010c084f40(PTR_PTR_1126c38b8,param_2,uVar1,param_7 ^ 1,param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(param_3,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c9d878; end: 105c9d89f; +[SCGallerySelectionUtil _addDebugMetaDateViewerIfNeeded:selectedGalleryItemsCount:selectedGallerySnapsCount:actionSheetTitleType:] */

void FUN_105c9d878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c9d8a0; end: 105c9db2f; -[SCGalleryStorySelectViewController initWithEncryptedContentManager:editDataMutator:memoriesMergedDataSource:cachingMediaManager:selectedItems:selectedSnaps:memoriesEntryThumbnailGeneratorBuilder:memoriesSnapThumbnailGeneratorBuilder:memoriesEntrySyncStatusGeneratorBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105c9d8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
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
  puStack_68 = PTR_PTR_1126ecb18;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112733434;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112733438;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11273343c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
    lVar5 = (long)_DAT_112733440;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112733444;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112733448;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11273344c;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112733450;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c3950;
    _objc_alloc();
    uVar2 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011ea0();
    lVar5 = (long)_DAT_112733454;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
  }
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



/* Entry: 105c9db30; end: 105c9db93; -[SCGalleryStorySelectViewController viewDidLoad] */

void FUN_105c9db30(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ecb18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x000108dfd53c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 105c9db94; end: 105c9ddaf; -[SCGalleryStorySelectViewController loadScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c9db94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init(PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18);
  func_0x00010c1c8300(0x4000000000000000);
  func_0x00010c1c82c0(0x4000000000000000,puVar1);
  func_0x00010c1f93e0(0,0,0x4000000000000000,0,puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c3958;
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c014040(puVar2,param_2,puVar1);
  lVar6 = (long)_DAT_112733458;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar5);
  _objc_release(lVar3);
  dVar7 = 2.0;
  func_0x00010c1acea0(0x4000000000000000,*(undefined8 *)(param_1 + lVar6));
  func_0x00010c1b6de0(*(undefined8 *)(param_1 + lVar6),param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6),param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1f7e20(*(undefined8 *)(param_1 + lVar6),param_2,1);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar6),param_2,0);
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar6),param_2,0);
  func_0x00010c167a20(*(undefined8 *)(param_1 + lVar6),param_2,1);
  func_0x000107e857e4();
  func_0x00010c181f80(0x4000000000000000,0,dVar7 + 1.0,0,*(undefined8 *)(param_1 + lVar6));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  puVar2 = PTR_PTR_1126c3960;
  _objc_opt_class(PTR_PTR_1126c3960);
  puVar4 = PTR_PTR_1126c3960;
  _objc_opt_class(PTR_PTR_1126c3960);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar5,param_2,puVar2,puVar4);
  _objc_release(puVar4);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar6),param_2,
                      &PTR____CFConstantStringClassReference_110e27018);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105c9ddb0; end: 105c9ddbf; -[SCGalleryStorySelectViewController collectionView:numberOfItemsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c9ddb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273345c),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105c9ddc0; end: 105c9df23; -[SCGalleryStorySelectViewController collectionView:cellForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c9ddc0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_3 + _DAT_11273345c);
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = param_6;
  func_0x00010c0840e0(param_6);
  func_0x00010c0dfd40(uVar4,param_4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c3960;
  _objc_opt_class(PTR_PTR_1126c3960);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_5;
  func_0x00010bf6e0c0(param_5,param_4,puVar2,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_3 + _DAT_11273344c);
  func_0x00010bf21f60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0(param_5);
  _objc_release(param_5);
  func_0x00010c222780(param_2,uVar1,param_4,uVar4,1,0,uVar3,
                      *(undefined8 *)(param_3 + _DAT_112733438),
                      *(undefined8 *)(param_3 + _DAT_112733434),
                      *(undefined8 *)(param_3 + _DAT_11273343c),
                      *(undefined8 *)(param_3 + _DAT_112733448),
                      *(undefined8 *)(param_3 + _DAT_112733450));
  func_0x00010c24eda0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c9df24; end: 105c9dfd3; -[SCGalleryStorySelectViewController collectionView:layout:sizeForItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_105c9df24(double param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_6);
  func_0x00010bfb68e0(param_4);
  _CGRectGetWidth();
  param_1 = param_1 + -5.0;
  dVar3 = param_1 + -5.0;
  uVar2 = *(undefined8 *)(param_2 + _DAT_11273345c);
  uVar1 = param_6;
  func_0x00010c0840e0(param_6);
  _objc_release(param_6);
  func_0x00010c0dfd40(uVar2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33e60(PTR_PTR_1126c3960,param_3,uVar2);
  _objc_release(uVar2);
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = dVar3;
  return auVar4;
}



/* Entry: 105c9dfd4; end: 105c9e04f; -[SCGalleryStorySelectViewController collectionView:didHighlightItemAtIndexPath:] */

void FUN_105c9dfd4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010bf33b60(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c3960;
  _objc_opt_class(PTR_PTR_1126c3960);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bf02f20(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c9e050; end: 105c9e0cb; -[SCGalleryStorySelectViewController collectionView:didUnhighlightItemAtIndexPath:] */

void FUN_105c9e050(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010bf33b60(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c3960;
  _objc_opt_class(PTR_PTR_1126c3960);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bf02f20(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8),uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105c9e0cc; end: 105c9e15f; -[SCGalleryStorySelectViewController collectionView:didSelectItemAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c9e0cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273345c);
  func_0x00010c0840e0(param_4);
  func_0x00010c0dfd40(uVar2,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  param_1 = param_1 + _DAT_112733460;
  _objc_loadWeakRetained(param_1);
  func_0x00010c25af60();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105c9e160; end: 105c9e1ef; -[SCGalleryStorySelectViewController storiesTabDataSourceDidReceiveData:viewModels:coordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c9e160(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105c9e1f0;
  puStack_30 = &UNK_1108e3bb0;
  lStack_28 = param_1;
  func_0x00010c14cca0(param_4,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273345c);
  *(undefined8 *)(param_1 + _DAT_11273345c) = param_4;
  _objc_release(uVar1);
  func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_112733458));
  return;
}



/* Entry: 105c9e1f0; end: 105c9e31b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_105c9e1f0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c27dd80();
  if (lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000106a1bde4();
    if ((int)lVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar7 = *(ulong *)(*(long *)(param_1 + 0x20) + (long)_DAT_112733440);
      lVar2 = param_2;
      func_0x00010bf97060(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
      if ((uVar7 & 1) == 0) {
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112733444);
        lVar3 = param_2;
        func_0x00010bf00920(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c225c20(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c069880(uVar6);
        uVar5 = (uint)uVar6 ^ 1;
        _objc_release(puVar4);
        _objc_release(lVar3);
      }
      else {
        uVar5 = 0;
      }
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(param_2);
  return uVar5;
}



/* Entry: 105c9e31c; end: 105c9e33b; -[SCGalleryStorySelectViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c9e31c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112733460);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105c9e33c; end: 105c9e34f; -[SCGalleryStorySelectViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c9e33c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112733460,param_3);
  return;
}



/* Entry: 105c9e350; end: 105c9e42b; -[SCGalleryStorySelectViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c9e350(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112733460);
  _objc_storeStrong(param_1 + _DAT_112733444,0);
  _objc_storeStrong(param_1 + _DAT_112733440,0);
  _objc_storeStrong(param_1 + _DAT_11273345c,0);
  _objc_storeStrong(param_1 + _DAT_112733454,0);
  _objc_storeStrong(param_1 + _DAT_112733458,0);
  _objc_storeStrong(param_1 + _DAT_112733450,0);
  _objc_storeStrong(param_1 + _DAT_11273344c,0);
  _objc_storeStrong(param_1 + _DAT_112733448,0);
  _objc_storeStrong(param_1 + _DAT_11273343c,0);
  _objc_storeStrong(param_1 + _DAT_112733438,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112733434,0);
  return;
}



/* Entry: 105c9e42c; end: 105c9e49f; -[SCMemoriesDirectorModeMediaProvider initWithMedia:] */

undefined1 * FUN_105c9e42c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ecb20;
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



/* Entry: 105c9e4a0; end: 105c9e4c7; -[SCMemoriesDirectorModeMediaProvider assets] */

void FUN_105c9e4a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105c9e4c8; end: 105c9e4cf; -[SCMemoriesDirectorModeMediaProvider shouldDisableRecovery] */

undefined8 FUN_105c9e4c8(void)

{
  return 0;
}



/* Entry: 105c9e4d0; end: 105c9e4db; -[SCMemoriesDirectorModeMediaProvider .cxx_destruct] */

void FUN_105c9e4d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105c9e4dc; end: 105c9ed47; -[SCMemoriesSnapBackupStatusInspectingViewController initWithBackupStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_105c9e4dc(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                    undefined8 param_5,long param_6,long param_7,long param_8)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  long lVar28;
  long lVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined *puVar36;
  undefined *puVar37;
  double dVar38;
  double dVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined8 uVar45;
  long lStack_330;
  long lStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long *plStack_f8;
  long lStack_e0;
  undefined *puStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  puStack_d8 = PTR_PTR_1126ecb28;
  plVar1 = &lStack_e0;
  lStack_e0 = param_4;
  _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)PTR_PTR_1126aea58;
    _objc_alloc();
    uVar40 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar41 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    dVar43 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
    uVar45 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    param_3 = dVar43;
    func_0x00010c013de0(uVar40,uVar41,dVar43,uVar45);
    func_0x00010c21ad00();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(plVar2);
    _objc_release(puVar3);
    func_0x00010c165e20(plVar2);
    func_0x00010c1cfce0(plVar2);
    if (param_6 == 0) {
      func_0x00010c212f20(plVar2);
      plVar5 = plVar1;
      func_0x00010c29bf00(plVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(plVar5);
      func_0x00010c219b60(plVar2);
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      plVar5 = plVar2;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      plVar6 = plVar1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      plStack_f8 = plVar6;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      plVar7 = plVar5;
      func_0x00010bf493c0(0x4024000000000000);
      _objc_retainAutoreleasedReturnValue();
      plVar8 = plVar2;
      plStack_a0 = plVar7;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      plVar9 = plVar1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      plVar10 = plVar9;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      plVar11 = plVar8;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      param_7 = 2;
      plVar12 = (long *)PTR__OBJC_CLASS___NSArray_1126ae530;
      plStack_98 = plVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3);
    }
    else {
      func_0x00010c2a0500();
      func_0x00010c212f20(plVar2);
      plVar5 = plVar1;
      func_0x00010c29bf00(plVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(plVar5);
      func_0x00010c219b60(plVar2);
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      plVar5 = plVar2;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      plVar6 = plVar1;
      func_0x00010c29bf00(plVar1);
      _objc_retainAutoreleasedReturnValue();
      plVar7 = plVar6;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      plVar8 = plVar5;
      func_0x00010bf493c0(0x4024000000000000);
      _objc_retainAutoreleasedReturnValue();
      plVar9 = plVar2;
      plStack_b0 = plVar8;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      plVar10 = plVar1;
      func_0x00010c29bf00(plVar1);
      _objc_retainAutoreleasedReturnValue();
      plVar11 = plVar10;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      plVar12 = plVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      plStack_a8 = plVar12;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3);
      _objc_release(puVar4);
      _objc_release(plVar12);
      _objc_release(plVar11);
      _objc_release(plVar10);
      _objc_release(plVar9);
      _objc_release(plVar8);
      _objc_release(plVar7);
      _objc_release(plVar6);
      _objc_release(plVar5);
      plVar5 = (long *)PTR_PTR_1126aea58;
      _objc_alloc();
      func_0x00010c013de0(uVar40,uVar41,dVar43,uVar45);
      func_0x00010c21ad00();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(plVar5);
      _objc_release(puVar3);
      func_0x00010c165e20(plVar5);
      func_0x00010c1cfce0(plVar5);
      func_0x00010c270fc0();
      func_0x00010c212f20(plVar5);
      plVar6 = plVar1;
      func_0x00010c29bf00(plVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(plVar6);
      func_0x00010c219b60(plVar5);
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      plVar6 = plVar5;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      plVar7 = plVar2;
      func_0x00010bf1ff80(plVar2);
      _objc_retainAutoreleasedReturnValue();
      plVar8 = plVar6;
      func_0x00010bf493c0(0x4024000000000000);
      _objc_retainAutoreleasedReturnValue();
      plVar9 = plVar5;
      plStack_c0 = plVar8;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      plVar10 = plVar1;
      func_0x00010c29bf00(plVar1);
      _objc_retainAutoreleasedReturnValue();
      plVar11 = plVar10;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      plVar12 = plVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      plStack_b8 = plVar12;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3);
      _objc_release(puVar4);
      _objc_release(plVar12);
      _objc_release(plVar11);
      _objc_release(plVar10);
      _objc_release(plVar9);
      _objc_release(plVar8);
      _objc_release(plVar7);
      _objc_release(plVar6);
      plVar6 = (long *)PTR_PTR_1126aea58;
      _objc_alloc();
      func_0x00010c013de0(uVar40,uVar41,dVar43,uVar45);
      func_0x00010c21ad00();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(plVar6);
      _objc_release(puVar3);
      func_0x00010c165e20(plVar6);
      func_0x00010c1cfce0(plVar6);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c271080(param_6);
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(plVar6);
      _objc_release(puVar3);
      _objc_release(puVar4);
      plVar7 = plVar1;
      func_0x00010c29bf00(plVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(plVar7);
      func_0x00010c219b60(plVar6);
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      plStack_f8 = plVar6;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      plVar7 = plVar5;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      plVar8 = plStack_f8;
      func_0x00010bf493c0(0x4024000000000000);
      _objc_retainAutoreleasedReturnValue();
      plVar9 = plVar6;
      plStack_d0 = plVar8;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      plVar10 = plVar1;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      plVar11 = plVar10;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      plVar12 = plVar9;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      param_7 = 2;
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      plStack_c8 = plVar12;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3);
      _objc_release(puVar4);
      param_3 = dVar43;
    }
    _objc_release(plVar12);
    _objc_release(plVar11);
    _objc_release(plVar10);
    _objc_release(plVar9);
    _objc_release(plVar8);
    _objc_release(plVar7);
    _objc_release(plStack_f8);
    _objc_release(plVar6);
    _objc_release(plVar5);
    _objc_release(plVar2);
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  plVar2 = plVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c16e440();
  _objc_release(plVar2);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return plVar1;
  }
  ___stack_chk_fail();
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(param_7);
  puStack_2b8 = PTR_PTR_1126ecb30;
  plVar1 = &lStack_2c0;
  lStack_2c0 = param_6;
  _objc_msgSendSuper2(plVar1,PTR_s_init_1125d9248);
  if (plVar1 != (long *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_opt_new();
    lVar35 = (long)_DAT_112733468;
    uVar40 = *(undefined8 *)((long)plVar1 + lVar35);
    *(undefined **)((long)plVar1 + lVar35) = puVar3;
    _objc_release(uVar40);
    func_0x00010c1f7b20(*(undefined8 *)((long)plVar1 + lVar35));
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)plVar1 + lVar35));
    plVar2 = plVar1;
    func_0x00010c29bf00(plVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(plVar2);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar13 = *(undefined8 *)((long)plVar1 + lVar35);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    plVar2 = plVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    plVar5 = plVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar40 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1d0 = uVar40;
    uVar14 = *(undefined8 *)((long)plVar1 + lVar35);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    plVar6 = plVar1;
    func_0x00010c29bf00(plVar1);
    _objc_retainAutoreleasedReturnValue();
    plVar7 = plVar6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar41 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1c8 = uVar41;
    uVar15 = *(undefined8 *)((long)plVar1 + lVar35);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    plVar8 = plVar1;
    func_0x00010c29bf00(plVar1);
    _objc_retainAutoreleasedReturnValue();
    plVar9 = plVar8;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_1c0 = uVar45;
    uVar16 = *(undefined8 *)((long)plVar1 + lVar35);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar16;
    func_0x00010bf49420(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar36 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_1b8 = uVar19;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar36);
    _objc_release(uVar19);
    _objc_release(uVar16);
    _objc_release(uVar45);
    _objc_release(plVar9);
    _objc_release(plVar8);
    _objc_release(uVar15);
    _objc_release(uVar41);
    _objc_release(plVar7);
    _objc_release(plVar6);
    _objc_release(uVar14);
    _objc_release(uVar40);
    _objc_release(plVar5);
    _objc_release(plVar2);
    _objc_release(uVar13);
    puVar3 = PTR_PTR_1126aea58;
    _objc_alloc();
    uVar40 = *(undefined8 *)PTR__CGRectZero_110347608;
    dVar42 = *(double *)(PTR__CGRectZero_110347608 + 8);
    dVar44 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
    uVar41 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    dVar43 = dVar42;
    dVar39 = dVar44;
    func_0x00010c013de0(uVar40,dVar42,dVar44,uVar41);
    func_0x00010c21ad00();
    puVar36 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar3);
    _objc_release(puVar36);
    func_0x00010c165e20(puVar3);
    func_0x00010c1cfce0(puVar3);
    if ((param_8 == 0) || (param_8 == 1)) {
      func_0x00010c212f20(puVar3);
    }
    func_0x00010c219b60(puVar3);
    func_0x00010befbb60(*(undefined8 *)((long)plVar1 + lVar35));
    puVar36 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar17 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar45 = *(undefined8 *)((long)plVar1 + lVar35);
    func_0x00010c274200(uVar45);
    _objc_retainAutoreleasedReturnValue();
    dVar38 = 5.0;
    puVar37 = puVar17;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar3;
    puStack_1e0 = puVar37;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)((long)plVar1 + lVar35);
    func_0x00010bf34860(uVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1d8 = puVar20;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar36);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(uVar19);
    _objc_release(puVar18);
    _objc_release(puVar37);
    _objc_release(uVar45);
    _objc_release(puVar17);
    func_0x00010c23d0a0(puVar4);
    func_0x00010c23d0a0(puVar4);
    puVar36 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar34 = (long)_DAT_11273346c;
    uVar45 = *(undefined8 *)((long)plVar1 + lVar34);
    *(undefined **)((long)plVar1 + lVar34) = puVar36;
    _objc_release(uVar45);
    func_0x00010c1a9f00(*(undefined8 *)((long)plVar1 + lVar34));
    func_0x00010befbb60(*(undefined8 *)((long)plVar1 + lVar35));
    func_0x00010c219b60(*(undefined8 *)((long)plVar1 + lVar34));
    puVar36 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar15 = *(undefined8 *)((long)plVar1 + lVar34);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar45 = uVar15;
    func_0x00010bf49420((dVar43 / dVar38) * dVar39 * 0.5);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)plVar1 + lVar34);
    uStack_200 = uVar45;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar37 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar19 = uVar16;
    func_0x00010bf49420(dVar39 * 0.5);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)((long)plVar1 + lVar34);
    uStack_1f8 = uVar19;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    plVar2 = plVar1;
    func_0x00010c29bf00(plVar1);
    _objc_retainAutoreleasedReturnValue();
    plVar5 = plVar2;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar23 = *(undefined8 *)((long)plVar1 + lVar34);
    uStack_1f0 = uVar13;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar3;
    func_0x00010bf1ff80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_1e8 = uVar14;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar36);
    _objc_release(puVar20);
    _objc_release(uVar14);
    _objc_release(puVar18);
    _objc_release(uVar23);
    _objc_release(uVar13);
    _objc_release(plVar5);
    _objc_release(plVar2);
    _objc_release(uVar22);
    _objc_release(uVar19);
    _objc_release(puVar37);
    _objc_release(uVar16);
    _objc_release(uVar45);
    _objc_release(puVar17);
    _objc_release(uVar15);
    lVar24 = param_7;
    func_0x00010bf529e0();
    if (lVar24 == 0) {
      puVar17 = PTR_PTR_1126aea58;
      _objc_alloc();
      func_0x00010c013de0(uVar40,dVar42,dVar44,uVar41);
      func_0x00010c21ad00();
      puVar36 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(puVar17);
      _objc_release(puVar36);
      func_0x00010c165e20(puVar17);
      func_0x00010c1cfce0(puVar17);
      func_0x00010c212f20(puVar17);
      func_0x00010c219b60(puVar17);
      func_0x00010befbb60(*(undefined8 *)((long)plVar1 + lVar35));
      puVar36 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar37 = puVar17;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar45 = *(undefined8 *)((long)plVar1 + lVar34);
      func_0x00010bf1ff80(uVar45);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar37;
      func_0x00010bf493c0(0x4024000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar17;
      puStack_218 = puVar18;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      plVar2 = plVar1;
      func_0x00010c29bf00(plVar1);
      _objc_retainAutoreleasedReturnValue();
      plVar5 = plVar2;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar20;
      func_0x00010bf493c0(0x4014000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar17;
      puStack_210 = puVar21;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar25;
      func_0x00010bf49420(param_3 + -10.0);
      _objc_retainAutoreleasedReturnValue();
      puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_208 = puVar26;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar36);
      _objc_release(puVar27);
      _objc_release(puVar26);
      _objc_release(puVar25);
      _objc_release(puVar21);
      _objc_release(plVar5);
      _objc_release(plVar2);
      _objc_release(puVar20);
      _objc_release(puVar18);
      _objc_release(uVar45);
      _objc_release(puVar37);
      _objc_release(puVar17);
    }
    lVar28 = param_7;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_330 = lVar28;
    func_0x00010bf52a60();
    lVar24 = lRam0000000000000000;
    if (lStack_330 != 0) {
      puVar36 = (undefined *)0x0;
      do {
        lVar33 = 0;
        puVar17 = puVar36;
        do {
          if (lRam0000000000000000 != lVar24) {
            _objc_enumerationMutation(lVar28);
          }
          puVar36 = PTR_PTR_1126aea58;
          _objc_alloc();
          func_0x00010c013de0(uVar40,dVar42,dVar44,uVar41);
          func_0x00010c21ad00();
          puVar37 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c213180(puVar36);
          _objc_release(puVar37);
          func_0x00010c165e20(puVar36);
          func_0x00010c1cfce0(puVar36);
          puVar37 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          lVar29 = param_7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar37);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c212f20(puVar36);
          _objc_release(puVar37);
          _objc_release(lVar29);
          func_0x00010befbb60(*(undefined8 *)((long)plVar1 + lVar35));
          func_0x00010c219b60(puVar36);
          puVar37 = *(undefined **)((long)plVar1 + lVar34);
          _objc_retain(puVar37);
          if (puVar17 != (undefined *)0x0) {
            _objc_retain(puVar17);
            _objc_release(puVar37);
            puVar37 = puVar17;
          }
          puVar18 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          puVar20 = puVar36;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          puVar21 = puVar37;
          func_0x00010bf1ff80();
          _objc_retainAutoreleasedReturnValue();
          puVar25 = puVar20;
          func_0x00010bf493c0(0x4014000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar26 = puVar36;
          puStack_2b0 = puVar25;
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          plVar2 = plVar1;
          func_0x00010c29bf00(plVar1);
          _objc_retainAutoreleasedReturnValue();
          plVar5 = plVar2;
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          puVar27 = puVar26;
          func_0x00010bf493c0(0x4014000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar30 = puVar36;
          puStack_2a8 = puVar27;
          func_0x00010c2a5060();
          _objc_retainAutoreleasedReturnValue();
          puVar31 = puVar30;
          func_0x00010bf49420(param_3 + -10.0);
          _objc_retainAutoreleasedReturnValue();
          puVar32 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_2a0 = puVar31;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar18);
          _objc_release(puVar32);
          _objc_release(puVar31);
          _objc_release(puVar30);
          _objc_release(puVar27);
          _objc_release(plVar5);
          _objc_release(plVar2);
          _objc_release(puVar26);
          _objc_release(puVar25);
          _objc_release(puVar21);
          _objc_release(puVar20);
          _objc_retain(puVar36);
          _objc_release(puVar17);
          _objc_release(puVar37);
          _objc_release(puVar36);
          lVar33 = lVar33 + 1;
          puVar17 = puVar36;
        } while (lStack_330 != lVar33);
        lStack_330 = lVar28;
        func_0x00010bf52a60();
      } while (lStack_330 != 0);
      _objc_release(puVar36);
    }
    _objc_release(lVar28);
    puVar36 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    plVar2 = plVar1;
    func_0x00010c29bf00(plVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(plVar2);
    _objc_release(puVar36);
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) {
    return plVar1;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar4 + _DAT_11273346c,0);
  plVar1 = (long *)(puVar4 + _DAT_112733468);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(plVar1,0);
  return plVar1;
}



/* Entry: 105c9ed48; end: 105c9fa8f; -[SCMemoriesTinyClipDemoViewController initWithImage:captionToScoreDict:sourceLevel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105c9ed48(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
             undefined8 param_5,long param_6,long param_7,long param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  undefined *puVar34;
  undefined *puVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined8 uVar41;
  long lStack_220;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_1a8 = PTR_PTR_1126ecb30;
  puVar1 = &uStack_1b0;
  uStack_1b0 = param_4;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_opt_new();
    lVar33 = (long)_DAT_112733468;
    uVar30 = *(undefined8 *)((long)puVar1 + lVar33);
    *(undefined **)((long)puVar1 + lVar33) = puVar2;
    _objc_release(uVar30);
    func_0x00010c1f7b20(*(undefined8 *)((long)puVar1 + lVar33));
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar33));
    puVar3 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar33);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar30;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar33);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar41 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar41;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar33);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar14;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar33);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar12;
    func_0x00010bf49420(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar34 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a8 = uVar16;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar34);
    _objc_release(uVar16);
    _objc_release(uVar12);
    _objc_release(uVar14);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar41);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar30);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    uVar30 = *(undefined8 *)PTR__CGRectZero_110347608;
    dVar39 = *(double *)(PTR__CGRectZero_110347608 + 8);
    dVar40 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
    uVar41 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    dVar37 = dVar39;
    dVar38 = dVar40;
    func_0x00010c013de0(uVar30,dVar39,dVar40,uVar41);
    func_0x00010c21ad00();
    puVar34 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar2);
    _objc_release(puVar34);
    func_0x00010c165e20(puVar2);
    func_0x00010c1cfce0(puVar2);
    if ((param_8 == 0) || (param_8 == 1)) {
      func_0x00010c212f20(puVar2);
    }
    func_0x00010c219b60(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar33));
    puVar34 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar13 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)puVar1 + lVar33);
    func_0x00010c274200(uVar14);
    _objc_retainAutoreleasedReturnValue();
    dVar36 = 5.0;
    puVar35 = puVar13;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar2;
    puStack_d0 = puVar35;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + lVar33);
    func_0x00010bf34860(uVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_c8 = puVar17;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar34);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(uVar16);
    _objc_release(puVar15);
    _objc_release(puVar35);
    _objc_release(uVar14);
    _objc_release(puVar13);
    func_0x00010c23d0a0(param_6);
    func_0x00010c23d0a0(param_6);
    puVar34 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar32 = (long)_DAT_11273346c;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar32);
    *(undefined **)((long)puVar1 + lVar32) = puVar34;
    _objc_release(uVar14);
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar32));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar33));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar32));
    puVar34 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar32);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar14 = uVar9;
    func_0x00010bf49420((dVar37 / dVar36) * dVar38 * 0.5);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)puVar1 + lVar32);
    uStack_f0 = uVar14;
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puVar35 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar16 = uVar12;
    func_0x00010bf49420(dVar38 * 0.5);
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)((long)puVar1 + lVar32);
    uStack_e8 = uVar16;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)((long)puVar1 + lVar32);
    uStack_e0 = uVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar2;
    func_0x00010bf1ff80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_d8 = uVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar34);
    _objc_release(puVar17);
    _objc_release(uVar6);
    _objc_release(puVar15);
    _objc_release(uVar20);
    _objc_release(uVar4);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(uVar19);
    _objc_release(uVar16);
    _objc_release(puVar35);
    _objc_release(uVar12);
    _objc_release(uVar14);
    _objc_release(puVar13);
    _objc_release(uVar9);
    lVar21 = param_7;
    func_0x00010bf529e0();
    if (lVar21 == 0) {
      puVar13 = PTR_PTR_1126aea58;
      _objc_alloc();
      func_0x00010c013de0(uVar30,dVar39,dVar40,uVar41);
      func_0x00010c21ad00();
      puVar34 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(puVar13);
      _objc_release(puVar34);
      func_0x00010c165e20(puVar13);
      func_0x00010c1cfce0(puVar13);
      func_0x00010c212f20(puVar13);
      func_0x00010c219b60(puVar13);
      func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar33));
      puVar34 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar35 = puVar13;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)((long)puVar1 + lVar32);
      func_0x00010bf1ff80(uVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar35;
      func_0x00010bf493c0(0x4024000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar13;
      puStack_108 = puVar15;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c29bf00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar17;
      func_0x00010bf493c0(0x4014000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar13;
      puStack_100 = puVar18;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar22;
      func_0x00010bf49420(param_3 + -10.0);
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_f8 = puVar23;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar34);
      _objc_release(puVar24);
      _objc_release(puVar23);
      _objc_release(puVar22);
      _objc_release(puVar18);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar17);
      _objc_release(puVar15);
      _objc_release(uVar14);
      _objc_release(puVar35);
      _objc_release(puVar13);
    }
    lVar25 = param_7;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_220 = lVar25;
    func_0x00010bf52a60();
    lVar21 = lRam0000000000000000;
    if (lStack_220 != 0) {
      puVar34 = (undefined *)0x0;
      do {
        lVar31 = 0;
        puVar13 = puVar34;
        do {
          if (lRam0000000000000000 != lVar21) {
            _objc_enumerationMutation(lVar25);
          }
          puVar34 = PTR_PTR_1126aea58;
          _objc_alloc();
          func_0x00010c013de0(uVar30,dVar39,dVar40,uVar41);
          func_0x00010c21ad00();
          puVar35 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c213180(puVar34);
          _objc_release(puVar35);
          func_0x00010c165e20(puVar34);
          func_0x00010c1cfce0(puVar34);
          puVar35 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          lVar26 = param_7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00(puVar35);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c212f20(puVar34);
          _objc_release(puVar35);
          _objc_release(lVar26);
          func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar33));
          func_0x00010c219b60(puVar34);
          puVar35 = *(undefined **)((long)puVar1 + lVar32);
          _objc_retain(puVar35);
          if (puVar13 != (undefined *)0x0) {
            _objc_retain(puVar13);
            _objc_release(puVar35);
            puVar35 = puVar13;
          }
          puVar15 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          puVar17 = puVar34;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar35;
          func_0x00010bf1ff80();
          _objc_retainAutoreleasedReturnValue();
          puVar22 = puVar17;
          func_0x00010bf493c0(0x4014000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar23 = puVar34;
          puStack_1a0 = puVar22;
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          func_0x00010c29bf00(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          puVar24 = puVar23;
          func_0x00010bf493c0(0x4014000000000000);
          _objc_retainAutoreleasedReturnValue();
          puVar27 = puVar34;
          puStack_198 = puVar24;
          func_0x00010c2a5060();
          _objc_retainAutoreleasedReturnValue();
          puVar28 = puVar27;
          func_0x00010bf49420(param_3 + -10.0);
          _objc_retainAutoreleasedReturnValue();
          puVar29 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_190 = puVar28;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar15);
          _objc_release(puVar29);
          _objc_release(puVar28);
          _objc_release(puVar27);
          _objc_release(puVar24);
          _objc_release(puVar5);
          _objc_release(puVar3);
          _objc_release(puVar23);
          _objc_release(puVar22);
          _objc_release(puVar18);
          _objc_release(puVar17);
          _objc_retain(puVar34);
          _objc_release(puVar13);
          _objc_release(puVar35);
          _objc_release(puVar34);
          lVar31 = lVar31 + 1;
          puVar13 = puVar34;
        } while (lStack_220 != lVar31);
        lStack_220 = lVar25;
        func_0x00010bf52a60();
      } while (lStack_220 != 0);
      _objc_release(puVar34);
    }
    _objc_release(lVar25);
    puVar34 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c29bf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar34);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    _objc_storeStrong(param_6 + _DAT_11273346c,0);
    puVar1 = (undefined8 *)(param_6 + _DAT_112733468);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(puVar1,0);
    return puVar1;
  }
  return puVar1;
}



/* Entry: 105c9fa90; end: 105c9facf; -[SCMemoriesTinyClipDemoViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105c9fa90(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273346c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112733468,0);
  return;
}



/* Entry: 105c9fad0; end: 105c9fd77; -[SCAlertViewActionStoryNameFieldController initWithTitle:actionHandler:textChangeHandler:] */

undefined8 *
FUN_105c9fad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126ecb38;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar4;
    _objc_release(uVar3);
    uVar4 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar3,uVar5,uVar6,uVar7);
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1[1]);
    _objc_release(puVar2);
    uVar4 = puVar1[1];
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4010000000000000);
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UITextField_1126af060;
    _objc_alloc();
    func_0x00010c013de0(uVar3,uVar5,uVar6,uVar7);
    uVar4 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1[4]);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar1[4]);
    _objc_release(puVar2);
    func_0x00010c212f20(puVar1[4]);
    func_0x00010c16d0a0(puVar1[4]);
    func_0x00010c1edbe0(puVar1[4]);
    func_0x00010c18b5e0(puVar1[4]);
    func_0x00010befbb60(puVar1[1]);
    uVar4 = puVar1[4];
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010befbd60(puVar1[4]);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105c9fd78; end: 105c9fe27;  */

void FUN_105c9fd78(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067640();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(0x3ff0000000000000,0x4024000000000000,0,0x4024000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105c9fe28; end: 105c9fe3f; -[SCAlertViewActionStoryNameFieldController _textFieldDidChange:] */

void FUN_105c9fe28(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105c9fe38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_1);
    return;
  }
  return;
}



/* Entry: 105c9fe40; end: 105c9feb7; -[SCAlertViewActionStoryNameFieldController trimmedText] */

void FUN_105c9fe40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26b700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c25d0a0(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105c9feb8; end: 105c9ffc7; -[SCAlertViewActionStoryNameFieldController textField:shouldChangeCharactersInRange:replacementString:] */

bool FUN_105c9feb8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar2 = param_3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  lVar4 = param_6;
  func_0x00010c08fa60();
  uVar1 = (lVar3 - param_5) + lVar4;
  _objc_release(lVar2);
  if ((0x1e < uVar1) && (lVar2 = param_6, func_0x00010bf2c4e0(param_6,param_2,1), (int)lVar2 != 0))
  {
    lVar2 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c260c20(lVar3,param_2,0x1e);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(param_3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return uVar1 < 0x1f;
}



/* Entry: 105c9ffc8; end: 105c9ffef; -[SCAlertViewActionStoryNameFieldController textFieldShouldReturn:] */

undefined8 FUN_105c9ffc8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  }
  return 1;
}



/* Entry: 105c9fff0; end: 105ca0003; -[SCAlertViewActionStoryNameFieldController actionViewSize] */

undefined1  [16] FUN_105c9fff0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x4046000000000000;
  auVar1._0_8_ = 0x7fefffffffffffff;
  return auVar1;
}



/* Entry: 105ca0004; end: 105ca002b; -[SCAlertViewActionStoryNameFieldController actionView] */

void FUN_105ca0004(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ca002c; end: 105ca0033; -[SCAlertViewActionStoryNameFieldController alertViewActionType] */

undefined8 FUN_105ca002c(void)

{
  return 1;
}



/* Entry: 105ca0034; end: 105ca003b; -[SCAlertViewActionStoryNameFieldController adjustsSizeToMatchStandard] */

undefined8 FUN_105ca0034(void)

{
  return 0;
}



/* Entry: 105ca003c; end: 105ca0043; -[SCAlertViewActionStoryNameFieldController becomeFirstResponder] */

void FUN_105ca003c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_becomeFirstResponder_1125a3810);
  return;
}



/* Entry: 105ca0044; end: 105ca0057; -[SCAlertViewActionStoryNameFieldController edgeInsets] */

undefined8 FUN_105ca0044(void)

{
  return 0;
}



/* Entry: 105ca0058; end: 105ca005f; -[SCAlertViewActionStoryNameFieldController requiresAdditionalPaddingIfLastItem] */

undefined8 FUN_105ca0058(void)

{
  return 1;
}



/* Entry: 105ca0060; end: 105ca0067; -[SCAlertViewActionStoryNameFieldController textField] */

undefined8 FUN_105ca0060(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105ca0068; end: 105ca00af; -[SCAlertViewActionStoryNameFieldController .cxx_destruct] */

void FUN_105ca0068(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ca00b0; end: 105ca0993; -[SCGalleryCellActionMenuHelper initWithDataSource:delegate:userId:dataObjectContext:memoriesSendViewPresenter:spectaclesCustomExportScopeExposer:spectaclesCustomExportScopeServices:userTrackedLogger:boomboxScopeExposer:boomboxScopeServices:videoImportServices:spectaclesManager:cloudFS:cloudSync:encryptedContentManager:featureSettingsService:previewURLVideoProvider:networkConnectivityMonitor:activityController:contentDelivery:circumstanceEngine:musicSelectionLoader:musicMediaLoader:grapheneRegistry:memoriesPreviewPresenterBuilder:memoriesMergedDataSource:galleryLogger:keyService:highlightContentDataSource:memoriesFeaturedStoryDataMutator:memoriesEditMutator:memoriesHighlightMutator:memoriesMeoMutator:memoriesFavoriteMutator:memoriesRetryMutator:memoriesDeletionMutator:memoriesAddSnapMutator:memoriesEntryThumbnailGeneratorBuilder:memoriesSnapThumbnailGeneratorBuilder:memoriesPrivateGallerySetupFlowScopeExposer:memoriesExternalShareAdaptorScopeExposer:usernameProvider:snapDocDownloadingService:memoriesProfile:userStorageServices:] */

undefined8 *
FUN_105ca00b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined4 param_45,undefined4 param_46,undefined8 param_47,undefined8 param_48)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain();
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
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_47);
  _objc_retain();
  puStack_70 = PTR_PTR_1126ecb40;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 0x3a,param_4);
    _objc_storeWeak(puVar1 + 0x3b,param_3);
    _objc_retain(param_5);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_39;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_41);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_41;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x23,param_42);
    _objc_storeWeak(puVar1 + 0x24,param_43);
    _objc_retain(param_44);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_44;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_47;
    _objc_release(uVar2);
    _objc_retain(param_48);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_48;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
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



/* Entry: 105ca0994; end: 105ca09a7; -[SCGalleryCellActionMenuHelper setType:] */

void FUN_105ca0994(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 8) != param_3) {
    *(long *)(param_1 + 8) = param_3;
  }
  return;
}



/* Entry: 105ca09a8; end: 105ca09bb; -[SCGalleryCellActionMenuHelper setSubType:] */

void FUN_105ca09a8(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x10) != param_3) {
    *(long *)(param_1 + 0x10) = param_3;
  }
  return;
}



/* Entry: 105ca09bc; end: 105ca09bf; -[SCGalleryCellActionMenuHelper setMemoriesTabType:] */

void FUN_105ca09bc(void)

{
  return;
}



/* Entry: 105ca09c0; end: 105ca0ad3; -[SCGalleryCellActionMenuHelper _setupActionMenuForActionSheetDataModels:sourceView:isSaved:shouldShowSpinner:] */

void FUN_105ca09c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c3968;
  if (*(long *)(param_1 + 0x20) != 0) {
    return;
  }
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff09a0();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setDelegate__112640798,param_1);
  return;
}



/* Entry: 105ca0ad4; end: 105ca0d87; -[SCGalleryCellActionMenuHelper presentActionMenuForDataModel:sourcePage:sourceView:viewController:shouldShowSpinner:] */

void FUN_105ca0ad4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  uVar3 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010010fab4();
  uVar1 = uVar5;
  if ((int)uVar6 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  _objc_initWeak(auStack_80,param_1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105ca0d88;
  puStack_a0 = &UNK_1108683b8;
  puVar7 = PTR_PTR_1126ae6b8;
  uStack_98 = uVar1;
  uStack_90 = uVar3;
  uStack_88 = uVar4;
  func_0x00010bf54280(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c25ffc0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c0e0ea0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d0,auStack_80);
  _objc_retain(param_3);
  _objc_retain(param_5);
  uStack_c8 = param_4;
  uStack_c0 = param_7;
  _objc_retain(param_6);
  puVar11 = puVar10;
  func_0x00010c25ff60(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105ca0d88; end: 105ca0fbf;  */

void FUN_105ca0d88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf9e140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126af4c0;
  if (lVar4 == 0) {
    func_0x00010c0d9840(param_2);
    func_0x00010bf436e0(param_2);
    _objc_release(param_2);
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf9e140(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa6f40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar2 = puVar3;
    func_0x00010c0b8620(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf529e0(puVar2);
    func_0x00010c0df840(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(param_2);
    _objc_release(puVar3);
    func_0x00010bf436e0(param_2);
    _objc_release(param_2);
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105ca0fc0; end: 105ca106f;  */

void FUN_105ca0fc0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c067fc0(param_2);
    func_0x00010beaa620(lVar1);
    *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_storeWeak(lVar1 + 0x60,uVar2);
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    _objc_retain();
    func_0x00010c10c7c0(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


