/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b6e169c; end: 10b6e16a3; -[SCGallerySnapTransientStateChangeRequest setBgMediaUploadKey:] */

void FUN_10b6e169c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16ff90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setBgMediaUploadKey__112639a00);
  return;
}



/* Entry: 10b6e16a4; end: 10b6e16ab; -[SCGallerySnapTransientStateChangeRequest bgMediaUploadState] */

void FUN_10b6e16a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf19af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_bgMediaUploadStateValue_1125a4060);
  return;
}



/* Entry: 10b6e16ac; end: 10b6e16b3; -[SCGallerySnapTransientStateChangeRequest setBgMediaUploadState:] */

void FUN_10b6e16ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16ffd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setBgMediaUploadStateValue__112639a10);
  return;
}



/* Entry: 10b6e16b4; end: 10b6e16bb; -[SCGallerySnapTransientStateChangeRequest snapId] */

void FUN_10b6e16b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 10b6e16bc; end: 10b6e16c3; -[SCGallerySnapTransientStateChangeRequest setSnapId:] */

void FUN_10b6e16bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c204690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setSnapId__11265ebc8);
  return;
}



/* Entry: 10b6e16c4; end: 10b6e16f3; -[SCGallerySnapTransientStateChangeRequest .cxx_destruct] */

void FUN_10b6e16c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6e16f4; end: 10b6e17cb; +[SCGalleryUserDefaults galleryUserDefaultsWithCompletedImportFromCameraRoll:didInitialCloudSync:dismissedImportButtonBelowSnaps:displayedCameraRollTabIntroPopup:displayedInitialCreateStoryPopup:displayedInitialNeedsPhotoAccessPopup:displayedPostLongVideoToStoryPopup:displayedSaveOptionPrompt:latestAckedBackupErrorTime:readFeaturedStoryIds:viewedFeaturedStoryIds:] */

void FUN_10b6e16f4(void)

{
  undefined *puVar1;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar1 = PTR_PTR_1126e0530;
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000008);
  _objc_alloc(puVar1);
  func_0x00010c030840();
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b6e17cc; end: 10b6e183f; -[SCGalleryUserDefaultsChangeRequest initWithGalleryUserDefaults:] */

undefined1 * FUN_10b6e17cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112709d60;
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



/* Entry: 10b6e1840; end: 10b6e198b; +[SCGalleryUserDefaultsChangeRequest changeRequestForGalleryUserDefaults:] */

void FUN_10b6e1840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(param_3);
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126e0498;
  uVar2 = param_3;
  func_0x00010c0e0160(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0b7f80(puVar3,param_2,uVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (puVar3 == (undefined *)0x0) {
    lVar7 = 0;
    puVar5 = (undefined *)0x0;
  }
  else {
    lStack_48 = 0;
    puVar5 = puVar1;
    func_0x00010bf9b3a0(puVar1,param_2,puVar3,&lStack_48);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lStack_48;
    _objc_retain(lStack_48);
    if (puVar5 != (undefined *)0x0 && lVar7 == 0) {
      puVar4 = PTR_PTR_1126e0498;
      func_0x00010bf5e560(PTR_PTR_1126e0498);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf35000();
      puVar6 = PTR_PTR_1126dbdc0;
      _objc_alloc(PTR_PTR_1126dbdc0);
      func_0x00010c0173a0();
      _objc_release(puVar4);
      lVar7 = 0;
      goto LAB_10b6e1950;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_10b6e1950:
  _objc_release(puVar5);
  _objc_release(lVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b6e198c; end: 10b6e1b87; +[SCGalleryUserDefaultsChangeRequest creationRequestWithGalleryUserDefaults:] */

void FUN_10b6e198c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126e0498;
  _objc_retain(param_3);
  func_0x00010bf5f5e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126e0588;
  func_0x00010c0668a0(PTR_PTR_1126e0588,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126e0498;
  func_0x00010bf5e560(PTR_PTR_1126e0498);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0e0160(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35000(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  uVar5 = param_3;
  func_0x00010bf43e80(param_3);
  func_0x00010c17faa0(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bf77540(param_3);
  func_0x00010c18d7c0(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bf84fe0(param_3);
  func_0x00010c18f920(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bf868e0(param_3);
  func_0x00010c190200(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bf869e0(param_3);
  func_0x00010c190480(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bf86a20(param_3);
  func_0x00010c1904c0(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bf86ae0(param_3);
  func_0x00010c1905e0(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010bf86b60(param_3);
  func_0x00010c1906c0(puVar2,param_2,uVar5);
  uVar5 = param_3;
  func_0x00010c08af60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b93a0(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c121520(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e7e60(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010c29ec40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c222f00(puVar2,param_2,uVar5);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126dbdc0;
  _objc_alloc(PTR_PTR_1126dbdc0);
  func_0x00010c0173a0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b6e1b88; end: 10b6e1d5b; +[SCGalleryUserDefaultsChangeRequest deleteGalleryUserDefaults:] */

void FUN_10b6e1b88(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar8 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar9 = PTR_PTR_1126e0498;
      uVar3 = *(undefined8 *)(lVar11 * 8);
      func_0x00010c0e0160(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b7f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      if (puVar9 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = puVar2;
        func_0x00010bf9b3a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(0);
        if (puVar7 != (undefined *)0x0) {
          func_0x00010bf6c4a0(puVar2);
        }
      }
      _objc_release(puVar7);
      _objc_release(0);
      _objc_release(puVar9);
      lVar11 = lVar11 + 1;
    } while (lVar8 != lVar11);
    lVar8 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_260;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar7 = PTR_PTR_1126e0588;
  func_0x00010bf96ec0(PTR_PTR_1126e0588);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar7);
  func_0x00010c1abe60(puVar9);
  puVar7 = puVar2;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar4 = puVar7;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar8 = *plStack_250;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_250 != lVar8) {
          _objc_enumerationMutation(puVar7);
        }
        func_0x00010bf6c4a0(puVar2);
        puVar10 = puVar10 + 1;
      } while (puVar4 != puVar10);
      puVar4 = puVar7;
      puVar5 = &uStack_260;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar7);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar7 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar4 = (undefined *)puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar9);
  puVar9 = PTR_DAT_1126a5c70;
  if (((ulong)puVar4 & 1) == 0) {
    if (puVar5 == (undefined8 *)0x0) {
      func_0x00010c1e3ee0(*(undefined8 *)(puVar2 + 8));
      goto LAB_10b6e204c;
    }
    _objc_retain(puVar5);
    puVar4 = (undefined *)puVar5;
    func_0x000107c318f8(puVar5,puVar9);
    puVar9 = (undefined *)puVar5;
    if ((int)puVar4 == 0) {
      puVar9 = (undefined *)0x0;
    }
    _objc_retain(puVar9);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126e0498;
    puVar10 = puVar9;
    func_0x00010c0e0160(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    if (puVar4 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = puVar7;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar9 != (undefined *)0x0) {
        func_0x00010c1e3ee0(*(undefined8 *)(puVar2 + 8));
      }
    }
    _objc_release(puVar9);
    _objc_release(0);
  }
  else {
    puVar4 = (undefined *)puVar5;
    func_0x00010c0b7f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e3ee0(*(undefined8 *)(puVar2 + 8));
  }
  _objc_release(puVar4);
LAB_10b6e204c:
  _objc_release(puVar7);
  _objc_release(puVar5);
  return;
}



/* Entry: 10b6e1d5c; end: 10b6e1ed7; +[SCGalleryUserDefaultsChangeRequest deleteAllGalleryUserDefaults] */

void FUN_10b6e1d5c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSFetchRequest_1126e04f8;
  _objc_alloc();
  puVar2 = PTR_PTR_1126e0588;
  func_0x00010bf96ec0(PTR_PTR_1126e0588);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010100();
  _objc_release(puVar2);
  func_0x00010c1abe60(puVar6);
  puVar2 = puVar1;
  func_0x00010bf9af20();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar5 = *plStack_110;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010bf6c4a0(puVar1);
        puVar7 = puVar7 + 1;
      } while (puVar3 != puVar7);
      puVar3 = puVar2;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  puVar2 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar3 = (undefined *)puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar6);
  puVar6 = PTR_DAT_1126a5c70;
  if (((ulong)puVar3 & 1) == 0) {
    if (puVar4 == (undefined8 *)0x0) {
      func_0x00010c1e3ee0(*(undefined8 *)(puVar1 + 8));
      goto LAB_10b6e204c;
    }
    _objc_retain(puVar4);
    puVar3 = (undefined *)puVar4;
    func_0x000107c318f8(puVar4,puVar6);
    puVar6 = (undefined *)puVar4;
    if ((int)puVar3 == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126e0498;
    puVar7 = puVar6;
    func_0x00010c0e0160(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar3 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar2;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar6 != (undefined *)0x0) {
        func_0x00010c1e3ee0(*(undefined8 *)(puVar1 + 8));
      }
    }
    _objc_release(puVar6);
    _objc_release(0);
  }
  else {
    puVar3 = (undefined *)puVar4;
    func_0x00010c0b7f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e3ee0(*(undefined8 *)(puVar1 + 8));
  }
  _objc_release(puVar3);
LAB_10b6e204c:
  _objc_release(puVar2);
  _objc_release(puVar4);
  return;
}



/* Entry: 10b6e1ed8; end: 10b6e2073; -[SCGalleryUserDefaultsChangeRequest setProfile:] */

void FUN_10b6e1ed8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126e0520;
  _objc_opt_class(PTR_PTR_1126e0520);
  puVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  puVar4 = PTR_DAT_1126a5c70;
  if (((ulong)puVar2 & 1) == 0) {
    if (param_3 == (undefined *)0x0) {
      func_0x00010c1e3ee0(*(undefined8 *)(param_1 + 8));
      goto LAB_10b6e204c;
    }
    _objc_retain(param_3);
    puVar2 = param_3;
    func_0x000107c318f8(param_3,puVar4);
    puVar4 = param_3;
    if ((int)puVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126e0498;
    puVar3 = puVar4;
    func_0x00010c0e0160(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c0b7f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = puVar1;
      func_0x00010bf9b3a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (puVar4 != (undefined *)0x0) {
        func_0x00010c1e3ee0(*(undefined8 *)(param_1 + 8));
      }
    }
    _objc_release(puVar4);
    _objc_release(0);
  }
  else {
    puVar2 = param_3;
    func_0x00010c0b7f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e3ee0(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(puVar2);
LAB_10b6e204c:
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b6e2074; end: 10b6e20f3; -[SCGalleryUserDefaultsChangeRequest placeholderForCreatedGalleryUserDefaults] */

void FUN_10b6e2074(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126e0498;
  func_0x00010bf5f5e0(PTR_PTR_1126e0498);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    puVar2 = PTR_PTR_1126e0520;
    _objc_alloc();
    func_0x00010c028260();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar2;
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b6e20f4; end: 10b6e215b; -[SCGalleryUserDefaultsChangeRequest objectID] */

void FUN_10b6e20f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e0160(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b6e215c; end: 10b6e22a7; -[SCGalleryUserDefaultsChangeRequest setWithGalleryUserDefaults:] */

void FUN_10b6e215c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf43e80(param_3);
  func_0x00010c17faa0(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  uVar1 = param_3;
  func_0x00010bf77540(param_3);
  func_0x00010c18d7c0(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  uVar1 = param_3;
  func_0x00010bf84fe0(param_3);
  func_0x00010c18f920(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  uVar1 = param_3;
  func_0x00010bf868e0(param_3);
  func_0x00010c190200(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  uVar1 = param_3;
  func_0x00010bf869e0(param_3);
  func_0x00010c190480(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  uVar1 = param_3;
  func_0x00010bf86a20(param_3);
  func_0x00010c1904c0(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  uVar1 = param_3;
  func_0x00010bf86ae0(param_3);
  func_0x00010c1905e0(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  uVar1 = param_3;
  func_0x00010bf86b60(param_3);
  func_0x00010c1906c0(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  uVar1 = param_3;
  func_0x00010c08af60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b93a0(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c121520(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e7e60(*(undefined8 *)(param_1 + 8),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c29ec40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c222f00(*(undefined8 *)(param_1 + 8),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6e22a8; end: 10b6e22af; -[SCGalleryUserDefaultsChangeRequest completedImportFromCameraRoll] */

void FUN_10b6e22a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_completedImportFromCameraRollVal_1125ae950);
  return;
}



/* Entry: 10b6e22b0; end: 10b6e22b7; -[SCGalleryUserDefaultsChangeRequest setCompletedImportFromCameraRoll:] */

void FUN_10b6e22b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17fab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setCompletedImportFromCameraRoll_11263d8c8);
  return;
}



/* Entry: 10b6e22b8; end: 10b6e22bf; -[SCGalleryUserDefaultsChangeRequest didInitialCloudSync] */

void FUN_10b6e22b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf77570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_didInitialCloudSyncValue_1125bb700);
  return;
}



/* Entry: 10b6e22c0; end: 10b6e22c7; -[SCGalleryUserDefaultsChangeRequest setDidInitialCloudSync:] */

void FUN_10b6e22c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18d7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setDidInitialCloudSyncValue__112641010);
  return;
}



/* Entry: 10b6e22c8; end: 10b6e22cf; -[SCGalleryUserDefaultsChangeRequest dismissedImportButtonBelowSnaps] */

void FUN_10b6e22c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf85010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_dismissedImportButtonBelowSnapsV_1125beda8);
  return;
}



/* Entry: 10b6e22d0; end: 10b6e22d7; -[SCGalleryUserDefaultsChangeRequest setDismissedImportButtonBelowSnaps:] */

void FUN_10b6e22d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18f930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setDismissedImportButtonBelowSna_112641868);
  return;
}



/* Entry: 10b6e22d8; end: 10b6e22df; -[SCGalleryUserDefaultsChangeRequest displayedCameraRollTabIntroPopup] */

void FUN_10b6e22d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_displayedCameraRollTabIntroPopup_1125bf3e8);
  return;
}



/* Entry: 10b6e22e0; end: 10b6e22e7; -[SCGalleryUserDefaultsChangeRequest setDisplayedCameraRollTabIntroPopup:] */

void FUN_10b6e22e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c190210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setDisplayedCameraRollTabIntroPo_112641aa0);
  return;
}



/* Entry: 10b6e22e8; end: 10b6e22ef; -[SCGalleryUserDefaultsChangeRequest displayedInitialCreateStoryPopup] */

void FUN_10b6e22e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_displayedInitialCreateStoryPopup_1125bf428);
  return;
}



/* Entry: 10b6e22f0; end: 10b6e22f7; -[SCGalleryUserDefaultsChangeRequest setDisplayedInitialCreateStoryPopup:] */

void FUN_10b6e22f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c190490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setDisplayedInitialCreateStoryPo_112641b40);
  return;
}



/* Entry: 10b6e22f8; end: 10b6e22ff; -[SCGalleryUserDefaultsChangeRequest displayedInitialNeedsPhotoAccessPopup] */

void FUN_10b6e22f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_displayedInitialNeedsPhotoAccess_1125bf438);
  return;
}



/* Entry: 10b6e2300; end: 10b6e2307; -[SCGalleryUserDefaultsChangeRequest setDisplayedInitialNeedsPhotoAccessPopup:] */

void FUN_10b6e2300(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1904d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setDisplayedInitialNeedsPhotoAcc_112641b50);
  return;
}



/* Entry: 10b6e2308; end: 10b6e230f; -[SCGalleryUserDefaultsChangeRequest displayedPostLongVideoToStoryPopup] */

void FUN_10b6e2308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_displayedPostLongVideoToStoryPop_1125bf468);
  return;
}



/* Entry: 10b6e2310; end: 10b6e2317; -[SCGalleryUserDefaultsChangeRequest setDisplayedPostLongVideoToStoryPopup:] */

void FUN_10b6e2310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1905f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setDisplayedPostLongVideoToStory_112641b98);
  return;
}



/* Entry: 10b6e2318; end: 10b6e231f; -[SCGalleryUserDefaultsChangeRequest displayedSaveOptionPrompt] */

void FUN_10b6e2318(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_displayedSaveOptionPromptValue_1125bf488);
  return;
}



/* Entry: 10b6e2320; end: 10b6e2327; -[SCGalleryUserDefaultsChangeRequest setDisplayedSaveOptionPrompt:] */

void FUN_10b6e2320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1906d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setDisplayedSaveOptionPromptValu_112641bd0);
  return;
}



/* Entry: 10b6e2328; end: 10b6e232f; -[SCGalleryUserDefaultsChangeRequest latestAckedBackupErrorTime] */

void FUN_10b6e2328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08af70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_latestAckedBackupErrorTime_1126005e8);
  return;
}



/* Entry: 10b6e2330; end: 10b6e2337; -[SCGalleryUserDefaultsChangeRequest setLatestAckedBackupErrorTime:] */

void FUN_10b6e2330(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b93b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setLatestAckedBackupErrorTime__11264bf10);
  return;
}



/* Entry: 10b6e2338; end: 10b6e233f; -[SCGalleryUserDefaultsChangeRequest readFeaturedStoryIds] */

void FUN_10b6e2338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c121530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_readFeaturedStoryIds_112625f68);
  return;
}



/* Entry: 10b6e2340; end: 10b6e2347; -[SCGalleryUserDefaultsChangeRequest setReadFeaturedStoryIds:] */

void FUN_10b6e2340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e7e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setReadFeaturedStoryIds__1126579c0);
  return;
}



/* Entry: 10b6e2348; end: 10b6e234f; -[SCGalleryUserDefaultsChangeRequest viewedFeaturedStoryIds] */

void FUN_10b6e2348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29ec50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_viewedFeaturedStoryIds_112685538);
  return;
}



/* Entry: 10b6e2350; end: 10b6e2357; -[SCGalleryUserDefaultsChangeRequest setViewedFeaturedStoryIds:] */

void FUN_10b6e2350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setViewedFeaturedStoryIds__1126665e8);
  return;
}



/* Entry: 10b6e2358; end: 10b6e2387; -[SCGalleryUserDefaultsChangeRequest .cxx_destruct] */

void FUN_10b6e2358(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6e2388; end: 10b6e2437; +[SCCloudSyncOperationSnapshot observe:dataObjectContext:queue:changeHandler:] */

void FUN_10b6e2388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc7e0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_4;
  func_0x00010c0e07e0(param_4,param_2,puVar1,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b6e2438; end: 10b6e248b; +[SCCloudSyncOperationSnapshot allKeys] */

void FUN_10b6e2438(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f78c8 != -1) {
    func_0x000107c27d9c(0x1137f78c8,&PTR___NSConcreteGlobalBlock_110d59720);
  }
  uVar1 = uRam00000001137f78c0;
  _objc_retain(uRam00000001137f78c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6e248c; end: 10b6e250f;  */

void FUN_10b6e248c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110f6e2d8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f78c0;
  puRam00000001137f78c0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6e2510; end: 10b6e25bf; +[SCGalleryEntry observe:dataObjectContext:queue:changeHandler:] */

void FUN_10b6e2510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af4c0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_4;
  func_0x00010c0e07e0(param_4,param_2,puVar1,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b6e25c0; end: 10b6e2613; +[SCGalleryEntry allKeys] */

void FUN_10b6e25c0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f78d8 != -1) {
    func_0x000107c27d9c(0x1137f78d8,&PTR___NSConcreteGlobalBlock_110d59740);
  }
  uVar1 = uRam00000001137f78d0;
  _objc_retain(uRam00000001137f78d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6e2614; end: 10b6e28ef;  */

void FUN_10b6e2614(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110ec3b98);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f78d0;
  puRam00000001137f78d0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6e28f0; end: 10b6e299f; +[SCGalleryEntryAsset observe:dataObjectContext:queue:changeHandler:] */

void FUN_10b6e28f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc808;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_4;
  func_0x00010c0e07e0(param_4,param_2,puVar1,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b6e29a0; end: 10b6e29f3; +[SCGalleryEntryAsset allKeys] */

void FUN_10b6e29a0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f78e8 != -1) {
    func_0x000107c27d9c(0x1137f78e8,&PTR___NSConcreteGlobalBlock_110d59760);
  }
  uVar1 = uRam00000001137f78e0;
  _objc_retain(uRam00000001137f78e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6e29f4; end: 10b6e2a8b;  */

void FUN_10b6e29f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110de1838);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f78e0;
  puRam00000001137f78e0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6e2a8c; end: 10b6e2b3b; +[SCGalleryProfile observe:dataObjectContext:queue:changeHandler:] */

void FUN_10b6e2a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2500;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_4;
  func_0x00010c0e07e0(param_4,param_2,puVar1,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b6e2b3c; end: 10b6e2b8f; +[SCGalleryProfile allKeys] */

void FUN_10b6e2b3c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f78f8 != -1) {
    func_0x000107c27d9c(0x1137f78f8,&PTR___NSConcreteGlobalBlock_110d59780);
  }
  uVar1 = uRam00000001137f78f0;
  _objc_retain(uRam00000001137f78f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6e2b90; end: 10b6e2c77;  */

void FUN_10b6e2b90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110f6ed98);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f78f0;
  puRam00000001137f78f0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6e2c78; end: 10b6e2d27; +[SCGalleryQuotaStatus observe:dataObjectContext:queue:changeHandler:] */

void FUN_10b6e2c78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d7f90;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_4;
  func_0x00010c0e07e0(param_4,param_2,puVar1,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b6e2d28; end: 10b6e2d7b; +[SCGalleryQuotaStatus allKeys] */

void FUN_10b6e2d28(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f7908 != -1) {
    func_0x000107c27d9c(0x1137f7908,&PTR___NSConcreteGlobalBlock_110d597a0);
  }
  uVar1 = uRam00000001137f7900;
  _objc_retain(uRam00000001137f7900);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6e2d7c; end: 10b6e2deb;  */

void FUN_10b6e2d7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110f6efb8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f7900;
  puRam00000001137f7900 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6e2dec; end: 10b6e2e9b; +[SCGallerySnap observe:dataObjectContext:queue:changeHandler:] */

void FUN_10b6e2dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126af4d0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_4;
  func_0x00010c0e07e0(param_4,param_2,puVar1,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b6e2e9c; end: 10b6e2eef; +[SCGallerySnap allKeys] */

void FUN_10b6e2e9c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f7918 != -1) {
    func_0x000107c27d9c(0x1137f7918,&PTR___NSConcreteGlobalBlock_110d597c0);
  }
  uVar1 = uRam00000001137f7910;
  _objc_retain(uRam00000001137f7910);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6e2ef0; end: 10b6e31e3;  */

void FUN_10b6e2ef0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110de1118);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f7910;
  puRam00000001137f7910 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6e31e4; end: 10b6e3293; +[SCGallerySnapDetail observe:dataObjectContext:queue:changeHandler:] */

void FUN_10b6e31e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc7b8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_4;
  func_0x00010c0e07e0(param_4,param_2,puVar1,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b6e3294; end: 10b6e32e7; +[SCGallerySnapDetail allKeys] */

void FUN_10b6e3294(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f7928 != -1) {
    func_0x000107c27d9c(0x1137f7928,&PTR___NSConcreteGlobalBlock_110d597e0);
  }
  uVar1 = uRam00000001137f7920;
  _objc_retain(uRam00000001137f7920);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6e32e8; end: 10b6e3337;  */

void FUN_10b6e32e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110de71b8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f7920;
  puRam00000001137f7920 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6e3338; end: 10b6e33e7; +[SCGallerySnapDoc observe:dataObjectContext:queue:changeHandler:] */

void FUN_10b6e3338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc800;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_4;
  func_0x00010c0e07e0(param_4,param_2,puVar1,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b6e33e8; end: 10b6e343b; +[SCGallerySnapDoc allKeys] */

void FUN_10b6e33e8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f7938 != -1) {
    func_0x000107c27d9c(0x1137f7938,&PTR___NSConcreteGlobalBlock_110d59800);
  }
  uVar1 = uRam00000001137f7930;
  _objc_retain(uRam00000001137f7930);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6e343c; end: 10b6e34ab;  */

void FUN_10b6e343c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110f6ec98);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f7930;
  puRam00000001137f7930 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6e34ac; end: 10b6e355b; +[SCGallerySnapMiniThumbnail observe:dataObjectContext:queue:changeHandler:] */

void FUN_10b6e34ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc7c8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_4;
  func_0x00010c0e07e0(param_4,param_2,puVar1,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b6e355c; end: 10b6e35af; +[SCGallerySnapMiniThumbnail allKeys] */

void FUN_10b6e355c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f7948 != -1) {
    func_0x000107c27d9c(0x1137f7948,&PTR___NSConcreteGlobalBlock_110d59820);
  }
  uVar1 = uRam00000001137f7940;
  _objc_retain(uRam00000001137f7940);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6e35b0; end: 10b6e360b;  */

void FUN_10b6e35b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110dba818);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f7940;
  puRam00000001137f7940 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6e360c; end: 10b6e36bb; +[SCGallerySnapTransientState observe:dataObjectContext:queue:changeHandler:] */

void FUN_10b6e360c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc810;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_4;
  func_0x00010c0e07e0(param_4,param_2,puVar1,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b6e36bc; end: 10b6e370f; +[SCGallerySnapTransientState allKeys] */

void FUN_10b6e36bc(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f7958 != -1) {
    func_0x000107c27d9c(0x1137f7958,&PTR___NSConcreteGlobalBlock_110d59840);
  }
  uVar1 = uRam00000001137f7950;
  _objc_retain(uRam00000001137f7950);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6e3710; end: 10b6e376b;  */

void FUN_10b6e3710(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110f6f898);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f7950;
  puRam00000001137f7950 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6e376c; end: 10b6e381b; +[SCGalleryUserDefaults observe:dataObjectContext:queue:changeHandler:] */

void FUN_10b6e376c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126e0530;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_4;
  func_0x00010c0e07e0(param_4,param_2,puVar1,param_3,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b6e381c; end: 10b6e386f; +[SCGalleryUserDefaults allKeys] */

void FUN_10b6e381c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f7968 != -1) {
    func_0x000107c27d9c(0x1137f7968,&PTR___NSConcreteGlobalBlock_110d59860);
  }
  uVar1 = uRam00000001137f7960;
  _objc_retain(uRam00000001137f7960);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b6e3870; end: 10b6e3923;  */

void FUN_10b6e3870(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110f6f8f8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f7960;
  puRam00000001137f7960 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6e3924; end: 10b6e3b13; -[SCGalleryEntryBuilder setDateRangeWithSnaps:] */

void FUN_10b6e3924(undefined8 param_1,undefined8 param_2,long param_3)

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
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (lVar1 == 0) {
    lVar5 = 0;
    lVar4 = 0;
  }
  else {
    lVar5 = 0;
    lVar4 = 0;
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_3);
        }
        lVar6 = *(long *)(lVar9 * 8);
        lVar10 = lVar6;
        func_0x00010bf313a0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar10 == 0) {
          func_0x00010bf59960();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(lVar10);
          lVar6 = lVar10;
        }
        _objc_release(lVar10);
        if ((lVar4 == 0) || (lVar10 = lVar6, func_0x00010bf433a0(), lVar10 == 1)) {
          _objc_retain(lVar6);
          _objc_release(lVar4);
          lVar4 = lVar6;
        }
        if ((lVar5 == 0) || (lVar10 = lVar6, func_0x00010bf433a0(), lVar10 == -1)) {
          _objc_retain(lVar6);
          _objc_release(lVar5);
          lVar5 = lVar6;
        }
        _objc_release(lVar6);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  func_0x00010c1b94c0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c193320(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar2);
  lVar1 = param_3;
  func_0x00010c08b1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf8be20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar2);
  lVar4 = lVar2;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar2);
      }
      lVar7 = *(long *)(lVar10 * 8);
      lVar6 = lVar7;
      func_0x00010bf313a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        func_0x00010bf59960();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(lVar6);
        lVar7 = lVar6;
      }
      _objc_release(lVar6);
      if ((lVar1 == 0) || (lVar6 = lVar7, func_0x00010bf433a0(), lVar6 == 1)) {
        _objc_retain(lVar7);
        _objc_release(lVar1);
        lVar1 = lVar7;
      }
      if ((lVar3 == 0) || (lVar6 = lVar7, func_0x00010bf433a0(), lVar6 == -1)) {
        _objc_retain(lVar7);
        _objc_release(lVar3);
        lVar3 = lVar7;
      }
      _objc_release(lVar7);
      lVar10 = lVar10 + 1;
    } while (lVar4 != lVar10);
    lVar4 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  func_0x00010c1b94c0(param_3);
  lVar4 = lVar3;
  func_0x00010c193320(param_3);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar3 == 0) {
    lVar10 = 0;
    lVar9 = 0;
  }
  else {
    lVar10 = 0;
    lVar9 = 0;
    do {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        lVar8 = *(long *)(lVar6 * 8);
        lVar7 = lVar8;
        func_0x00010bf313a0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 == 0) {
          func_0x00010bf59960();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(lVar7);
          lVar8 = lVar7;
        }
        _objc_release(lVar7);
        if ((lVar9 == 0) || (lVar7 = lVar8, func_0x00010bf433a0(), lVar7 == 1)) {
          _objc_retain(lVar8);
          _objc_release(lVar9);
          lVar9 = lVar8;
        }
        if ((lVar10 == 0) || (lVar7 = lVar8, func_0x00010bf433a0(), lVar7 == -1)) {
          _objc_retain(lVar8);
          _objc_release(lVar10);
          lVar10 = lVar8;
        }
        _objc_release(lVar8);
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar4;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  func_0x00010c1b94c0(lVar2);
  lVar1 = lVar10;
  func_0x00010c193320(lVar2);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf655f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)lVar1 / 1000.0,PTR__OBJC_CLASS___NSDate_1126ae770,
             PTR_s_dateWithTimeIntervalSince1970__1125b6f20);
  return;
}



/* Entry: 10b6e3b14; end: 10b6e3d17; -[SCGalleryEntryChangeRequest updateDateRangeWithSnaps:] */

void FUN_10b6e3b14(long param_1,undefined8 param_2,long param_3)

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
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c08b1e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf8be20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_3);
      }
      lVar6 = *(long *)(lVar8 * 8);
      lVar9 = lVar6;
      func_0x00010bf313a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar9 == 0) {
        func_0x00010bf59960();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(lVar9);
        lVar6 = lVar9;
      }
      _objc_release(lVar9);
      if ((lVar1 == 0) || (lVar9 = lVar6, func_0x00010bf433a0(), lVar9 == 1)) {
        _objc_retain(lVar6);
        _objc_release(lVar1);
        lVar1 = lVar6;
      }
      if ((lVar2 == 0) || (lVar9 = lVar6, func_0x00010bf433a0(), lVar9 == -1)) {
        _objc_retain(lVar6);
        _objc_release(lVar2);
        lVar2 = lVar6;
      }
      _objc_release(lVar6);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  func_0x00010c1b94c0(param_1);
  lVar3 = lVar2;
  func_0x00010c193320(param_1);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 == 0) {
    lVar8 = 0;
    lVar4 = 0;
  }
  else {
    lVar8 = 0;
    lVar4 = 0;
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar7 = *(long *)(lVar9 * 8);
        lVar6 = lVar7;
        func_0x00010bf313a0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 == 0) {
          func_0x00010bf59960();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(lVar6);
          lVar7 = lVar6;
        }
        _objc_release(lVar6);
        if ((lVar4 == 0) || (lVar6 = lVar7, func_0x00010bf433a0(), lVar6 == 1)) {
          _objc_retain(lVar7);
          _objc_release(lVar4);
          lVar4 = lVar7;
        }
        if ((lVar8 == 0) || (lVar6 = lVar7, func_0x00010bf433a0(), lVar6 == -1)) {
          _objc_retain(lVar7);
          _objc_release(lVar8);
          lVar8 = lVar7;
        }
        _objc_release(lVar7);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  func_0x00010c1b94c0(param_3);
  lVar1 = lVar8;
  func_0x00010c193320(param_3);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf655f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)lVar1 / 1000.0,PTR__OBJC_CLASS___NSDate_1126ae770,
             PTR_s_dateWithTimeIntervalSince1970__1125b6f20);
  return;
}



/* Entry: 10b6e3d18; end: 10b6e3ef7; -[SCGalleryEntryChangeRequest setDateRangeWithSnaps:] */

void FUN_10b6e3d18(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  if (lVar1 == 0) {
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        lVar7 = *(long *)(lVar8 * 8);
        lVar2 = lVar7;
        func_0x00010bf313a0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 == 0) {
          func_0x00010bf59960();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(lVar2);
          lVar7 = lVar2;
        }
        _objc_release(lVar2);
        if ((lVar5 == 0) || (lVar2 = lVar7, func_0x00010bf433a0(), lVar2 == 1)) {
          _objc_retain(lVar7);
          _objc_release(lVar5);
          lVar5 = lVar7;
        }
        if ((lVar6 == 0) || (lVar2 = lVar7, func_0x00010bf433a0(), lVar2 == -1)) {
          _objc_retain(lVar7);
          _objc_release(lVar6);
          lVar6 = lVar7;
        }
        _objc_release(lVar7);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  func_0x00010c1b94c0(param_1);
  lVar3 = lVar6;
  func_0x00010c193320(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf655f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              ((double)lVar3 / 1000.0,PTR__OBJC_CLASS___NSDate_1126ae770,
               PTR_s_dateWithTimeIntervalSince1970__1125b6f20);
    return;
  }
  return;
}



/* Entry: 10b6e3ef8; end: 10b6e3f13; -[SCGalleryEntryChangeRequest _dateFromServletTime:] */

void FUN_10b6e3ef8(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf655f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)param_3 / 1000.0,PTR__OBJC_CLASS___NSDate_1126ae770,
             PTR_s_dateWithTimeIntervalSince1970__1125b6f20);
  return;
}



/* Entry: 10b6e3f14; end: 10b6e4147; -[SCGalleryEntryChangeRequest setDateRangeWithServletGallerySnaps:] */

void FUN_10b6e3f14(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 == 0) {
    lVar8 = 0;
    lVar7 = 0;
  }
  else {
    lVar8 = 0;
    lVar7 = 0;
    do {
      lVar10 = 0;
      lVar4 = lVar7;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar9 = *(long *)(lVar10 * 8);
        if (lVar4 == 0) {
LAB_10b6e3fe4:
          lVar7 = lVar9;
          func_0x00010bf31360();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
        }
        else {
          lVar7 = lVar9;
          func_0x00010bf31360();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar7;
          func_0x00010bf433a0();
          _objc_release(lVar7);
          lVar7 = lVar4;
          if (lVar3 == 1) goto LAB_10b6e3fe4;
        }
        if (lVar8 == 0) {
LAB_10b6e4038:
          func_0x00010bf31360();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar8);
          lVar8 = lVar9;
        }
        else {
          lVar4 = lVar9;
          func_0x00010bf31360();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar4;
          func_0x00010bf433a0();
          _objc_release(lVar4);
          if (lVar3 == -1) goto LAB_10b6e4038;
        }
        lVar10 = lVar10 + 1;
        lVar4 = lVar7;
      } while (lVar2 != lVar10);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  func_0x00010c0b4ca0(lVar7);
  uVar5 = param_1;
  func_0x00010bdf80c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b94c0(param_1);
  _objc_release(uVar5);
  func_0x00010c0b4ca0(lVar8);
  uVar5 = param_1;
  func_0x00010bdf80c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193320(param_1);
  _objc_release(uVar5);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c22b8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126e0498,PTR_s_sharedContextFor_logger_flipper__112668858);
    return;
  }
  return;
}



/* Entry: 10b6e4148; end: 10b6e4167; +[SCDataObjectContext sharedContextFor:] */

void FUN_10b6e4148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126e0498,PTR_s_sharedContextFor_logger_flipper__112668858,param_3,0,0,0,0,0);
  return;
}



/* Entry: 10b6e4168; end: 10b6e4173; +[SCDataObjectContext sharedContextFor:logger:flipper:crashLogger:circumstanceEngine:backgroundExecutionServices:] */

void FUN_10b6e4168(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126e0498,PTR_s_sharedContextFor_logger_flipper__112668858);
  return;
}



/* Entry: 10b6e4174; end: 10b6e4253; +[SCDataObjectContext sharedDiskFileURLForContextName:] */

void FUN_10b6e4174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000107c308e4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c0e00e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110f71118);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000107c31294();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b6e4254; end: 10b6e42ff; +[SCDataObjectContext sharedDiskFileExistsForContextName:] */

undefined * FUN_10b6e4254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(param_3);
  func_0x00010bf69bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b24d8;
  func_0x00010c22b9c0(PTR_PTR_1126b24d8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010c0f5800(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 10b6e4300; end: 10b6e43eb; +[SCDataObjectContext markDiskFileForContextName:userId:] */

void FUN_10b6e4300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b24d8;
  func_0x00010bf82d40(PTR_PTR_1126b24d8,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010c0f5800(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  if ((int)puVar4 != 0) {
    puVar3 = puVar2;
    func_0x00010bdc2cc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb480(PTR_PTR_1126dbe20,param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b6e43ec; end: 10b6e4793; +[SCDataObjectContext clearDiskFileForContextName:exceptUserHashSet:] */

undefined *
FUN_10b6e43ec(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined8 unaff_x28;
  long lVar20;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 auStack_3e8 [17];
  undefined8 uStack_360;
  undefined1 auStack_358 [128];
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_188;
  undefined8 uStack_100;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_258 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar18 = puVar2;
  func_0x000107c31294();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar4;
  func_0x00010bfad320();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar19;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  _objc_release(puVar18);
  uStack_240 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
  puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uStack_240;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uStack_188 = 0;
  puVar16 = puVar2;
  puStack_260 = puVar15;
  func_0x00010bf4dfe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uStack_188;
  _objc_retain(uStack_188);
  _objc_release(puVar19);
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  _objc_retain(puVar16);
  puStack_250 = puVar16;
  func_0x00010bf52a60();
  puStack_238 = puVar16;
  if (puVar16 != (undefined *)0x0) {
    lStack_248 = *plStack_1c0;
    do {
      puVar15 = (undefined *)0x0;
      uVar10 = uVar3;
      do {
        if (*plStack_1c0 != lStack_248) {
          _objc_enumerationMutation(puStack_250);
        }
        uStack_100 = uStack_240;
        unaff_x27 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_230 = puVar15;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = puVar2;
        uStack_1d8 = uVar10;
        func_0x00010bf4dfe0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uStack_1d8;
        _objc_retain(uStack_1d8);
        _objc_release(uVar10);
        _objc_release(unaff_x27);
        uStack_1f8 = 0;
        uStack_200 = 0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        lStack_218 = 0;
        uStack_220 = 0;
        uStack_208 = 0;
        puStack_210 = (undefined8 *)0x0;
        _objc_retain(unaff_x26);
        puVar15 = unaff_x26;
        func_0x00010bf52a60();
        unaff_x28 = uVar3;
        if (puVar15 != (undefined *)0x0) {
          puVar19 = (undefined *)*puStack_210;
          do {
            puVar18 = (undefined *)0x0;
            uVar10 = uVar3;
            do {
              if ((undefined *)*puStack_210 != puVar19) {
                _objc_enumerationMutation(unaff_x26);
              }
              unaff_x28 = *(undefined8 *)(lStack_218 + (long)puVar18 * 8);
              uVar3 = unaff_x28;
              func_0x00010c0899c0(unaff_x28);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = param_4;
              func_0x00010bf4b900();
              _objc_release(uVar3);
              uVar3 = uVar10;
              if (((ulong)puVar4 & 1) == 0) {
                uStack_228 = uVar10;
                func_0x00010c12cc60(puVar2);
                uVar3 = uStack_228;
                _objc_retain(uStack_228);
                _objc_release(uVar10);
              }
              puVar18 = puVar18 + 1;
              uVar10 = uVar3;
            } while (puVar15 != puVar18);
            puVar15 = unaff_x26;
            func_0x00010bf52a60();
          } while (puVar15 != (undefined *)0x0);
          unaff_x27 = (undefined *)0x0;
        }
        _objc_release(unaff_x26);
        _objc_release(unaff_x26);
        puVar15 = puStack_230 + 1;
        uVar10 = uVar3;
      } while (puVar15 != puStack_238);
      puVar15 = puStack_250;
      func_0x00010bf52a60();
      puStack_238 = puVar15;
    } while (puVar15 != (undefined *)0x0);
  }
  puVar15 = puStack_250;
  _objc_release(puStack_250);
  _objc_release(puVar15);
  _objc_release(uVar3);
  _objc_release(puStack_260);
  _objc_release(puVar2);
  _objc_release(param_4);
  puVar16 = puStack_258;
  _objc_release(puStack_258);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar16;
  }
  ___stack_chk_fail();
  puStack_278 = puVar15;
  pcStack_268 = FUN_10b6e4794;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  uStack_2c0 = unaff_x28;
  puStack_2b8 = unaff_x27;
  puStack_2b0 = unaff_x26;
  puStack_2a8 = puVar19;
  uStack_2a0 = uVar3;
  puStack_298 = puVar18;
  puStack_290 = puVar4;
  puStack_288 = puVar2;
  puStack_280 = param_4;
  puStack_270 = &stack0xfffffffffffffff0;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar4 = puVar15;
  func_0x000107c31294();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad320();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar18;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  _objc_release(puVar4);
  uVar13 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_2d8 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  auStack_3e8[0] = 0;
  puVar12 = auStack_3e8;
  puVar4 = puVar15;
  func_0x00010bf4dfe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = auStack_3e8[0];
  _objc_retain(auStack_3e8[0]);
  _objc_release(puVar18);
  puVar18 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  plStack_420 = (long *)0x0;
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  _objc_retain(puVar4);
  puVar8 = auStack_358;
  uVar10 = 0x10;
  puVar19 = puVar4;
  func_0x00010bf52a60();
  if (puVar19 != (undefined *)0x0) {
    lVar14 = *plStack_420;
    do {
      puVar16 = (undefined *)0x0;
      uVar10 = uVar3;
      do {
        if (*plStack_420 != lVar14) {
          _objc_enumerationMutation(puVar4);
        }
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_360 = uVar13;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = &uStack_438;
        puVar6 = puVar15;
        uStack_438 = uVar10;
        func_0x00010bf4dfe0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uStack_438;
        _objc_retain(uStack_438);
        _objc_release(uVar10);
        _objc_release(puVar5);
        _objc_retain(puVar6);
        puVar5 = puVar6;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar5 != (undefined *)0x0) {
          puVar17 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar6);
            }
            lVar20 = *(long *)((long)puVar17 * 8);
            func_0x00010c0899c0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar20 != 0) {
              func_0x00010c1d0640(puVar18);
            }
            _objc_release(lVar20);
            puVar17 = puVar17 + 1;
          } while (puVar5 != puVar17);
          puVar5 = puVar6;
          func_0x00010bf52a60();
        }
        _objc_release(puVar6);
        _objc_release(puVar6);
        puVar16 = puVar16 + 1;
        uVar10 = uVar3;
      } while (puVar16 != puVar19);
      puVar8 = auStack_358;
      uVar10 = 0x10;
      puVar19 = puVar4;
      func_0x00010bf52a60();
    } while (puVar19 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  puVar19 = puVar18;
  func_0x00010bf51e00(puVar18);
  _objc_release(puVar18);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
    return puVar19;
  }
  ___stack_chk_fail();
  puVar18 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar18);
  puVar18 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar13 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar18);
  uVar3 = uVar13;
  _objc_retain(uVar7);
  puVar18 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar13;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar13);
  _objc_exception_throw(puVar18);
  uVar13 = uVar3;
  _objc_retain(uVar7);
  puVar18 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar18);
  uVar3 = uVar13;
  puVar9 = puVar8;
  uVar11 = uVar10;
  _objc_retain(uVar7);
  _objc_retain(puVar8);
  _objc_retain(uVar10);
  puVar18 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar13);
  _objc_exception_throw(puVar18);
  puVar18 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar10 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar18);
  uVar3 = uVar10;
  _objc_retain(uVar13);
  puVar18 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar10);
  _objc_exception_throw(puVar18);
  uVar10 = uVar3;
  _objc_retain(puVar9);
  puVar18 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar18);
  uVar3 = uVar10;
  uVar7 = uVar11;
  _objc_retain(puVar9);
  _objc_retain(uVar11);
  _objc_retain(puVar12);
  puVar18 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar10);
  _objc_exception_throw(puVar18);
  uVar10 = uVar3;
  _objc_retain(uVar13);
  _objc_retain(uVar7);
  puVar18 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar18);
  puVar18 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar10;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar10);
  _objc_exception_throw(puVar18);
  puVar18 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar18);
  _objc_retain();
  return puVar18;
}



/* Entry: 10b6e4794; end: 10b6e4b07; +[SCDataObjectContext scanCurrentUserHashDirForContextName:] */

undefined * FUN_10b6e4794(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 auStack_188 [17];
  undefined8 uStack_100;
  undefined1 auStack_f8 [128];
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar3 = puVar2;
  func_0x000107c31294();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad320();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar16 = *(undefined8 *)PTR__NSURLIsDirectoryKey_11034ab10;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar16;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  auStack_188[0] = 0;
  puVar15 = auStack_188;
  puVar3 = puVar2;
  func_0x00010bf4dfe0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = auStack_188[0];
  _objc_retain(auStack_188[0]);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  _objc_retain(puVar3);
  puVar11 = auStack_f8;
  uVar13 = 0x10;
  puVar6 = puVar3;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar17 = *plStack_1c0;
    do {
      puVar18 = (undefined *)0x0;
      uVar13 = uVar9;
      do {
        if (*plStack_1c0 != lVar17) {
          _objc_enumerationMutation(puVar3);
        }
        puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_100 = uVar16;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = &uStack_1d8;
        puVar8 = puVar2;
        uStack_1d8 = uVar13;
        func_0x00010bf4dfe0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uStack_1d8;
        _objc_retain(uStack_1d8);
        _objc_release(uVar13);
        _objc_release(puVar7);
        _objc_retain(puVar8);
        puVar7 = puVar8;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar7 != (undefined *)0x0) {
          puVar19 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar8);
            }
            lVar20 = *(long *)((long)puVar19 * 8);
            func_0x00010c0899c0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar20 != 0) {
              func_0x00010c1d0640(puVar4);
            }
            _objc_release(lVar20);
            puVar19 = puVar19 + 1;
          } while (puVar7 != puVar19);
          puVar7 = puVar8;
          func_0x00010bf52a60();
        }
        _objc_release(puVar8);
        _objc_release(puVar8);
        puVar18 = puVar18 + 1;
        uVar13 = uVar9;
      } while (puVar18 != puVar6);
      puVar11 = auStack_f8;
      uVar13 = 0x10;
      puVar6 = puVar3;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  puVar6 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar9);
  _objc_release(puVar5);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar9 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar16 = uVar9;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar9);
  _objc_exception_throw(puVar4);
  uVar9 = uVar16;
  _objc_retain(uVar10);
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar16;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar16);
  _objc_exception_throw(puVar4);
  uVar16 = uVar9;
  _objc_retain(uVar10);
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar9);
  _objc_exception_throw(puVar4);
  uVar9 = uVar16;
  puVar12 = puVar11;
  uVar14 = uVar13;
  _objc_retain(uVar10);
  _objc_retain(puVar11);
  _objc_retain(uVar13);
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar16);
  _objc_exception_throw(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar13 = uVar9;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar9;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar9);
  _objc_exception_throw(puVar4);
  uVar9 = uVar13;
  _objc_retain(uVar16);
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar13);
  _objc_exception_throw(puVar4);
  uVar13 = uVar9;
  _objc_retain(puVar12);
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar9);
  _objc_exception_throw(puVar4);
  uVar9 = uVar13;
  uVar10 = uVar14;
  _objc_retain(puVar12);
  _objc_retain(uVar14);
  _objc_retain(puVar15);
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar13;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar13);
  _objc_exception_throw(puVar4);
  uVar13 = uVar9;
  _objc_retain(uVar16);
  _objc_retain(uVar10);
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar9);
  _objc_exception_throw(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar9 = uVar13;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar13);
  _objc_exception_throw(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar9);
  _objc_exception_throw(puVar4);
  _objc_retain();
  return puVar4;
}



/* Entry: 10b6e4b08; end: 10b6e4b5b; -[SCDataObjectContext contextName] */

undefined *
FUN_10b6e4b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  uVar5 = param_4;
  uVar6 = param_5;
  _objc_retain(uVar4);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  uVar7 = uVar6;
  _objc_retain(uVar5);
  _objc_retain(uVar6);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  _objc_retain(uVar7);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b6e4b5c; end: 10b6e4baf; -[SCDataObjectContext installPersistentStore] */

undefined *
FUN_10b6e4b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  uVar5 = param_4;
  uVar6 = param_5;
  _objc_retain(uVar4);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  uVar7 = uVar6;
  _objc_retain(uVar5);
  _objc_retain(uVar6);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  _objc_retain(uVar7);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b6e4bb0; end: 10b6e4c0f; -[SCDataObjectContext destroyPersistentStore:reinstall:] */

undefined *
FUN_10b6e4bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  uVar5 = param_4;
  uVar6 = param_5;
  _objc_retain(uVar4);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  uVar7 = uVar6;
  _objc_retain(uVar5);
  _objc_retain(uVar6);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  _objc_retain(uVar7);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b6e4c10; end: 10b6e4c6f; -[SCDataObjectContext destroyPersistentStoreIfNeededWithPrecheck:reinstall:] */

undefined *
FUN_10b6e4c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  uVar5 = param_4;
  uVar6 = param_5;
  _objc_retain(uVar4);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  uVar7 = uVar6;
  _objc_retain(uVar5);
  _objc_retain(uVar6);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  _objc_retain(uVar7);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b6e4c70; end: 10b6e4ceb; -[SCDataObjectContext performChanges:queue:completionHandler:] */

undefined *
FUN_10b6e4c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2;
  uVar5 = param_4;
  uVar6 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  uVar7 = uVar6;
  _objc_retain(uVar5);
  _objc_retain(uVar6);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  _objc_retain(uVar7);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b6e4cec; end: 10b6e4d3f; -[SCDataObjectContext isInsidePerformChanges] */

undefined *
FUN_10b6e4cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  uVar5 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b6e4d40; end: 10b6e4d9f; -[SCDataObjectContext performChangesAndWait:error:] */

undefined *
FUN_10b6e4d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  uVar5 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b6e4da0; end: 10b6e4dff; -[SCDataObjectContext dispatchOnceWithToken:block:] */

undefined *
FUN_10b6e4da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  uVar5 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  uVar2 = uVar3;
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b6e4e00; end: 10b6e4e7b; -[SCDataObjectContext observe:object:queue:changeHandler:] */

undefined *
FUN_10b6e4e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2;
  uVar5 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = uVar3;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b6e4e7c; end: 10b6e4ee7; -[SCDataObjectContext unobserve:objectClass:objectID:] */

undefined *
FUN_10b6e4e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar3 = uVar2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b6e4ee8; end: 10b6e4f3b; -[SCDataObjectContext diskUsageReport] */

undefined * FUN_10b6e4ee8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b6e4f3c; end: 10b6e4f8f; -[SCDataObjectContext diskFileCreationDate] */

undefined * FUN_10b6e4f3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10b6e4f90; end: 10b6e4fb3; -[SCDataObjectContext copyWithZone:] */

undefined8 FUN_10b6e4f90(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6e4fb4; end: 10b6e509f; -[SCFetchOptions initWithPredicate:sortDescriptors:fetchOffset:fetchLimit:propertiesToFetch:] */

undefined1 *
FUN_10b6e4fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112709d68;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6e50a0; end: 10b6e50c3; -[SCFetchOptions copyWithZone:] */

undefined8 FUN_10b6e50a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b6e50c4; end: 10b6e51fb; -[SCFetchOptions initWithCoder:] */

undefined1 * FUN_10b6e50c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112709d68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2827c0();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2827c0();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


