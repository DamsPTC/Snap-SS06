/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104cf3554; end: 104cf3567;  */

void FUN_104cf3554(void)

{
  return;
}



/* Entry: 104cf3568; end: 104cf35af; -[SCSettingsLogoutRowProvider memoriesBackupUIWillDismiss] */

void FUN_104cf3568(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104cf35b0; end: 104cf35bb; -[SCSettingsLogoutRowProvider defaultProjectNameV3] */

void FUN_104cf35b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 104cf35bc; end: 104cf35c7; -[SCSettingsLogoutRowProvider defaultProjectNameV2] */

void FUN_104cf35bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_login_11260a990);
  return;
}



/* Entry: 104cf35c8; end: 104cf368f; -[SCSettingsLogoutRowProvider .cxx_destruct] */

void FUN_104cf35c8(long param_1)

{
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
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cf3690; end: 104cf3e2f; -[SCGalleryLogoutAlertThumbnailsView initWithUserTrackedLogger:profile:dataObjectContext:keyService:memoriesSnapThumbnailProvider:snaps:privateSnapIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104cf3690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined **param_9)

{
  double *pdVar1;
  double dVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_110 = PTR_PTR_1126e3cb8;
  dVar25 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
  dVar26 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  puVar3 = &uStack_118;
  puVar14 = (undefined8 *)PTR_s_initWithFrame__1125e2948;
  uStack_118 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8));
  pcVar21 = (code *)param_9;
  if (puVar3 != (undefined8 *)0x0) {
    lVar15 = (long)_DAT_112710e78;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar15);
    *(undefined8 *)((long)puVar3 + lVar15) = param_3;
    _objc_release(uVar4);
    lVar15 = (long)_DAT_112710e7c;
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar15);
    *(undefined8 *)((long)puVar3 + lVar15) = param_4;
    _objc_release(uVar4);
    lVar15 = (long)_DAT_112710e80;
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar15);
    *(undefined8 *)((long)puVar3 + lVar15) = param_5;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar3 + (long)_DAT_112710e84);
    *(undefined **)((long)puVar3 + (long)_DAT_112710e84) = puVar5;
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3);
    _objc_release(puVar5);
    lVar15 = (long)_DAT_112710e88;
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar15);
    *(undefined8 *)((long)puVar3 + lVar15) = param_8;
    _objc_release(uVar4);
    lVar19 = (long)_DAT_112710e8c;
    _objc_retain(param_9);
    uVar4 = *(undefined8 *)((long)puVar3 + lVar19);
    *(undefined ***)((long)puVar3 + lVar19) = param_9;
    _objc_release(uVar4);
    uVar6 = *(ulong *)((long)puVar3 + lVar15);
    func_0x00010bf529e0();
    dVar24 = 55.0;
    if (uVar6 != 4) {
      dVar24 = 44.0;
    }
    uVar18 = 4;
    if (uVar6 != 4) {
      uVar18 = 5;
    }
    dVar2 = 66.0;
    if (3 < uVar6) {
      uVar6 = uVar18;
      dVar2 = dVar24;
    }
    puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    dVar24 = INFINITY;
    if (dVar26 != 0.0) {
      dVar24 = dVar25 / dVar26;
    }
    dVar26 = 0.0;
    if (dVar25 != 0.0) {
      dVar26 = dVar24;
    }
    _objc_release(puVar5);
    pdVar1 = (double *)((long)puVar3 + (long)_DAT_112710e90);
    *pdVar1 = dVar2;
    pdVar1[1] = (double)(long)(dVar2 / dVar26);
    puVar7 = puVar3;
    func_0x00010be63080();
    lVar16 = (long)_DAT_112710e94;
    uVar4 = *(undefined8 *)((long)puVar3 + lVar16);
    *(undefined8 **)((long)puVar3 + lVar16) = puVar7;
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    dVar25 = 0.0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    lVar17 = *(long *)((long)puVar3 + lVar16);
    _objc_retain(lVar17);
    lVar16 = lVar17;
    func_0x00010bf52a60();
    if (lVar16 != 0) {
      lVar22 = *plStack_150;
      pcVar21 = FUN_104cf3e30;
      do {
        lVar23 = 0;
        do {
          if (*plStack_150 != lVar22) {
            _objc_enumerationMutation(lVar17);
          }
          uVar4 = *(undefined8 *)(lStack_158 + lVar23 * 8);
          func_0x000100841590(*pdVar1,pdVar1[1]);
          func_0x00010c1739e0(uVar4);
          puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x00010bf41680(0x3feccccccccccccd,0x3ff0000000000000,
                              PTR__OBJC_CLASS___UIColor_1126aea70);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16e440(uVar4);
          _objc_release(puVar8);
          dVar25 = 4.0;
          func_0x00010c1f5ec0(0x4010000000000000,uVar4);
          func_0x00010c17d4c0(uVar4);
          func_0x00010befbb60(puVar3);
          puVar8 = PTR__OBJC_CLASS___UIImageView_1126aec28;
          _objc_alloc();
          func_0x00010c01bf60();
          func_0x00010c182220();
          func_0x00010befbb60(uVar4);
          puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_180 = 0xc2000000;
          pcStack_178 = FUN_104cf3e30;
          puStack_170 = &UNK_1108471b0;
          uStack_168 = uVar4;
          func_0x00010c0bbfc0(puVar8);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(puVar8);
          lVar23 = lVar23 + 1;
        } while (lVar16 != lVar23);
        lVar16 = lVar17;
        func_0x00010bf52a60();
      } while (lVar16 != 0);
    }
    _objc_release(lVar17);
    if (uVar6 != 0) {
      uVar18 = 0;
      pcVar21 = (code *)&puStack_1c8;
      do {
        puVar8 = puVar5;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)((long)puVar3 + lVar15);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = *(ulong *)((long)puVar3 + lVar19);
        uVar4 = uVar9;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        if ((uVar20 & 1) == 0) {
          _objc_release(uVar4);
          dVar26 = dVar25;
LAB_104cf3bd8:
          puVar10 = PTR_PTR_1126af4b8;
          _objc_alloc();
          uVar4 = uVar9;
          func_0x00010c241220(uVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          dVar25 = *pdVar1;
          func_0x00010b690ad8(dVar25,pdVar1[1],dVar26);
          func_0x00010c047e40();
          _objc_release(puVar11);
          _objc_release(uVar4);
          uVar4 = param_7;
          func_0x00010c269d40(param_7);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar4;
          func_0x00010c119a80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          puVar7 = &uStack_190;
          _objc_initWeak(puVar7,puVar3);
          func_0x000100078e94();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar12;
          func_0x00010c0e0ea0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1c0 = 0xc2000000;
          pcStack_1b8 = FUN_104cf3e98;
          puStack_1b0 = &UNK_110849840;
          puVar14 = &uStack_190;
          _objc_copyWeak(auStack_198);
          _objc_retain(uVar9);
          uStack_1a8 = uVar9;
          _objc_retain(puVar8);
          uVar13 = uVar4;
          puStack_1a0 = puVar8;
          func_0x00010c25ff60(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1a3e0();
          _objc_release(uVar13);
          _objc_release(uVar4);
          _objc_release(puVar7);
          _objc_release(puStack_1a0);
          _objc_release(uStack_1a8);
          _objc_destroyWeak(auStack_198);
          _objc_destroyWeak(&uStack_190);
          _objc_release(uVar12);
        }
        else {
          lVar16 = param_6;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar17 = lVar16;
          func_0x00010c0bc420();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar16);
          _objc_release(uVar4);
          dVar26 = dVar25;
          if (lVar17 != 0) goto LAB_104cf3bd8;
          puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
          func_0x00010bfe8220();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a9f00(puVar8);
        }
        _objc_release(puVar10);
        _objc_release(uVar9);
        _objc_release(puVar8);
        uVar18 = uVar18 + 1;
      } while (uVar6 != uVar18);
    }
    _objc_release(puVar5);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_destroyWeak((undefined **)((long)pcVar21 + 0x30));
    _objc_destroyWeak(&uStack_190);
    __Unwind_Resume();
    func_0x00010bf8c100();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar14;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)puVar3[2])();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar14);
    return puVar14;
  }
  return puVar3;
}



/* Entry: 104cf3e30; end: 104cf3e97;  */

void FUN_104cf3e30(undefined8 param_1,long param_2)

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



/* Entry: 104cf3e98; end: 104cf3faf;  */

void FUN_104cf3e98(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _objc_retain(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104cf3fb0; end: 104cf4053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cf3fb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710e8c);
  _objc_retain(param_2);
  func_0x00010c241220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar1);
  uVar1 = param_2;
  if (iVar2 != 0) {
    func_0x00010bf1e840(0x4024000000000000,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cf4054; end: 104cf4057;  */

void FUN_104cf4054(void)

{
  return;
}



/* Entry: 104cf4058; end: 104cf406b; -[SCGalleryLogoutAlertThumbnailsView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cf4058(void)

{
  return;
}



/* Entry: 104cf406c; end: 104cf420f; -[SCGalleryLogoutAlertThumbnailsView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_104cf406c(undefined8 param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
             undefined1 *param_6)

{
  double *pdVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  undefined *puStack_f0;
  long lStack_68;
  
  puVar5 = &uStack_140;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = PTR_PTR_1126e3cb8;
  lStack_f8 = param_4;
  _objc_msgSendSuper2(&lStack_f8,PTR_s_layoutSubviews_112600e60);
  lVar7 = (long)_DAT_112710e94;
  lVar2 = *(long *)(param_4 + lVar7);
  func_0x00010bf529e0();
  puVar6 = (undefined *)0x0;
  if (lVar2 != 0) {
    func_0x00010bf20c00(param_4);
    uVar3 = *(ulong *)(param_4 + lVar7);
    func_0x00010bf529e0();
    pdVar1 = (double *)(param_4 + _DAT_112710e90);
    dVar11 = *pdVar1;
    lVar2 = *(long *)(param_4 + lVar7);
    func_0x00010bf529e0();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    puVar6 = *(undefined **)(param_4 + lVar7);
    _objc_retain(puVar6);
    puVar4 = puVar6;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      dVar11 = (param_3 - ((double)(lVar2 - 1) * 4.0 + dVar11 * (double)uVar3)) * 0.5;
      lVar2 = *plStack_130;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_130 != lVar2) {
            _objc_enumerationMutation(puVar6);
          }
          func_0x00010c19f0e0(dVar11,0,*pdVar1,pdVar1[1],
                              *(undefined8 *)(lStack_138 + (long)puVar8 * 8));
          dVar11 = dVar11 + *pdVar1 + 4.0;
          puVar8 = puVar8 + 1;
        } while (puVar4 != puVar8);
        puVar4 = puVar6;
        puVar5 = &uStack_140;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar6);
    param_6 = (undefined1 *)puVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar6;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (param_6 != (undefined1 *)0x0) {
    uVar9 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    do {
      puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
      func_0x00010c013de0(uVar9,uVar10,uVar12,uVar13);
      func_0x00010befa120(puVar6);
      _objc_release(puVar4);
      param_6 = param_6 + -1;
    } while (param_6 != (undefined1 *)0x0);
  }
  puVar4 = puVar6;
  func_0x00010bf51e00(puVar6);
  _objc_release(puVar6);
  return puVar4;
}



/* Entry: 104cf4210; end: 104cf42c7; -[SCGalleryLogoutAlertThumbnailsView _newImageViewContainersWithCount:] */

undefined * FUN_104cf4210(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    do {
      puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
      func_0x00010c013de0(uVar3,uVar4,uVar5,uVar6);
      func_0x00010befa120(puVar1,param_2,puVar2);
      _objc_release(puVar2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 104cf42c8; end: 104cf4367; -[SCGalleryLogoutAlertThumbnailsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cf42c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710e84,0);
  _objc_storeStrong(param_1 + _DAT_112710e80,0);
  _objc_storeStrong(param_1 + _DAT_112710e7c,0);
  _objc_storeStrong(param_1 + _DAT_112710e78,0);
  _objc_storeStrong(param_1 + _DAT_112710e94,0);
  _objc_storeStrong(param_1 + _DAT_112710e8c,0);
  _objc_storeStrong(param_1 + _DAT_112710e98,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112710e88,0);
  return;
}



/* Entry: 104cf4368; end: 104cf49d3;  */

void FUN_104cf4368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x104cf4510;
  puStack_a8 = &UNK_110849950;
  uStack_78 = param_9;
  uStack_a0 = param_2;
  uStack_98 = param_3;
  uStack_90 = param_1;
  uStack_88 = param_5;
  uStack_80 = param_6;
  uStack_70 = param_8;
  uStack_68 = param_4;
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_1);
  _objc_retain(param_9);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_c0);
  _objc_release(uVar1);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_78);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(param_9);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104cf49d4; end: 104cf49db;  */

void FUN_104cf49d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 104cf49dc; end: 104cf5397;  */

void FUN_104cf49dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined *puVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined *puVar28;
  
  lVar25 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x68) == 0) {
    puVar7 = *(undefined **)(param_1 + 0x58);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
                    /* WARNING: Could not recover jumptable at 0x000104cf4b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar7 + 0x10))(puVar7,0);
      return;
    }
    goto LAB_104cf5394;
  }
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c440(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c14c460(0x3fe3333333333333,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af4d8;
  ppuVar4 = &PTR____CFConstantStringClassReference_110daf0b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf0b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf547e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  puVar6 = puVar5;
  func_0x00010c26c280(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126af4e0;
  func_0x00010bf4c880(0,0,0x4020000000000000,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(char *)(param_1 + 0x70) == '\x01') {
    if (*(long *)(param_1 + 0x68) == 1) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110daf0d8;
      goto LAB_104cf4b80;
    }
    ppuVar8 = &PTR____CFConstantStringClassReference_110daf0f8;
LAB_104cf4bbc:
    func_0x00010bcbeaa8(ppuVar8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
  }
  else {
    if (*(long *)(param_1 + 0x68) != 1) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110daf138;
      goto LAB_104cf4bbc;
    }
    ppuVar4 = &PTR____CFConstantStringClassReference_110daf118;
LAB_104cf4b80:
    func_0x00010bcbeaa8(ppuVar4,0);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar9 = PTR_PTR_1126af4d8;
  func_0x00010bf547c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126af4e0;
  func_0x00010bf4c880(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126af4e8;
  _objc_alloc();
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf51e00();
  func_0x00010c05f440();
  _objc_release(uVar12);
  puVar13 = PTR_PTR_1126af4e0;
  func_0x00010bf4c880(0x4020000000000000,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126af180;
  ppuVar8 = &PTR____CFConstantStringClassReference_110daf158;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf158,0);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar12);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  puVar15 = PTR_PTR_1126af180;
  ppuVar8 = &PTR____CFConstantStringClassReference_110daf178;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf178,0);
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar26);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  puVar16 = PTR_PTR_1126af180;
  ppuVar8 = &PTR____CFConstantStringClassReference_110daf198;
  if (*(char *)(param_1 + 0x70) == '\0') {
    ppuVar8 = &PTR____CFConstantStringClassReference_110daf1b8;
  }
  func_0x00010bcbeaa8(ppuVar8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar27);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  func_0x00010c160fc0(puVar16);
  puVar17 = puVar14;
  func_0x00010beef220();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126af4f0;
  _objc_opt_class(PTR_PTR_1126af4f0);
  puVar19 = puVar17;
  _objc_opt_isKindOfClass(puVar17,puVar18);
  if (((ulong)puVar19 & 1) != 0) {
    puVar18 = puVar17;
    func_0x00010bf0e6a0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    FUN_104cf53f8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b780(puVar17);
    _objc_release(puVar19);
    _objc_release(puVar18);
    puVar18 = puVar17;
    func_0x00010bf0e6a0(puVar17);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar18;
    FUN_104cf53f8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b780(puVar17);
    _objc_release(puVar19);
    _objc_release(puVar18);
    func_0x00010c1732a0(puVar17);
    func_0x00010c1732a0(puVar17);
    func_0x00010c16e480(puVar17);
    func_0x00010c16e480(puVar17);
  }
  puVar18 = puVar15;
  func_0x00010beef220();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126af4f0;
  _objc_opt_class(PTR_PTR_1126af4f0);
  puVar20 = puVar18;
  _objc_opt_isKindOfClass(puVar18,puVar19);
  if (((ulong)puVar20 & 1) != 0) {
    puVar19 = puVar18;
    func_0x00010bf0e6a0(puVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    FUN_104cf53f8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b780(puVar18);
    _objc_release(puVar20);
    _objc_release(puVar19);
    puVar19 = puVar18;
    func_0x00010bf0e6a0(puVar18);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    FUN_104cf53f8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b780(puVar18);
    _objc_release(puVar20);
    _objc_release(puVar19);
    func_0x00010c1732a0(puVar18);
    func_0x00010c1732a0(puVar18);
    func_0x00010c16e480(puVar18);
    func_0x00010c16e480(puVar18);
  }
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar20;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar19 != (undefined *)0x0) {
    puVar28 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar20);
      }
      uVar21 = *(ulong *)((long)puVar28 * 8);
      func_0x00010beef220();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = PTR_PTR_1126af4f0;
      _objc_opt_class(PTR_PTR_1126af4f0);
      uVar23 = uVar21;
      _objc_opt_isKindOfClass(uVar21,puVar22);
      if ((uVar23 & 1) != 0) {
        uVar23 = uVar21;
        func_0x00010bf0e6a0(uVar21);
        _objc_retainAutoreleasedReturnValue();
        uVar24 = uVar23;
        FUN_104cf53f8();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16b780(uVar21);
        _objc_release(uVar24);
        _objc_release(uVar23);
        uVar23 = uVar21;
        func_0x00010bf0e6a0(uVar21);
        _objc_retainAutoreleasedReturnValue();
        uVar24 = uVar23;
        FUN_104cf53f8();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16b780(uVar21);
        _objc_release(uVar24);
        _objc_release(uVar23);
      }
      _objc_release(uVar21);
      puVar28 = puVar28 + 1;
    } while (puVar19 != puVar28);
    puVar19 = puVar20;
    func_0x00010bf52a60();
  }
  _objc_release(puVar20);
  puVar19 = PTR_PTR_1126af4f8;
  _objc_alloc(PTR_PTR_1126af4f8);
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003660(puVar19);
  _objc_release(puVar28);
  _objc_release(puVar20);
  puVar20 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c236180();
  _objc_release(puVar20);
  (**(code **)(*(long *)(param_1 + 0x58) + 0x10))(*(long *)(param_1 + 0x58),1);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(uVar27);
  _objc_release(puVar15);
  _objc_release(uVar26);
  _objc_release(puVar14);
  _objc_release(uVar12);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(ppuVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar25) {
    return;
  }
LAB_104cf5394:
  ___stack_chk_fail();
  lVar25 = *(long *)(puVar7 + 0x20);
  if (lVar25 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104cf53b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar25 + 0x10))(lVar25,1,0,0);
    return;
  }
  return;
}



/* Entry: 104cf5398; end: 104cf53f7;  */

void FUN_104cf5398(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104cf53b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1,0,0);
    return;
  }
  return;
}



/* Entry: 104cf53f8; end: 104cf54c7;  */

void FUN_104cf53f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010bff4f40();
  _objc_release(param_1);
  func_0x00010bf17fe0(puVar1);
  func_0x00010c08fa60(puVar1);
  func_0x00010c12b3c0(puVar1);
  func_0x00010bef6f20(puVar1);
  _objc_release(param_2);
  func_0x00010bf947e0(puVar1);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cf54c8; end: 104cf55c7;  */

void FUN_104cf54c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104cf55c8; end: 104cf56ff; -[SCNGORegistrationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cf55c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126af500;
  _objc_alloc(PTR_PTR_1126af500);
  lVar8 = (long)_DAT_112710e9c;
  lVar2 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar2);
  lVar7 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bee8320(param_1);
  func_0x00010c057560(puVar1,param_2,lVar7,lVar3,*(undefined8 *)(param_1 + _DAT_112710ea0),
                      *(undefined8 *)(param_1 + _DAT_112710ea4));
  _objc_release(lVar7);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126aeb48;
  _objc_alloc(PTR_PTR_1126aeb48);
  func_0x00010c0404c0();
  puVar5 = PTR_PTR_1126af508;
  _objc_alloc();
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar8);
  lVar2 = lVar8;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0407e0(puVar5,param_2,puVar4,lVar2,0,0);
  lVar7 = (long)_DAT_112710ea8;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar5;
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar8);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar7));
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cf5700; end: 104cf5787; -[SCNGORegistrationEntryPoint _verificationFlowMethod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104cf5700(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112710eb0;
    _objc_loadWeakRetained(param_1);
  }
  lVar1 = param_1;
  func_0x00010c106fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c106f80();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 104cf5788; end: 104cf57fb; -[SCNGORegistrationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cf5788(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710ea4,0);
  _objc_storeStrong(param_1 + _DAT_112710ea0,0);
  _objc_destroyWeak(param_1 + _DAT_112710eb0);
  _objc_destroyWeak(param_1 + _DAT_112710eac);
  _objc_destroyWeak(param_1 + _DAT_112710e9c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112710ea8,0);
  return;
}



/* Entry: 104cf57fc; end: 104cf58d7; -[SCNGORegistrationUIRouteActions initWithUIContainer:verificationFlowMethod:birthdayScopeExposer:preRegVerificationScopeExposer:] */

undefined1 *
FUN_104cf57fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e3cc0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cf58d8; end: 104cf597b; -[SCNGORegistrationUIRouteActions showBirthdayPageWithBirthday:viewConfig:delegate:] */

void FUN_104cf58d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af510;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00b080();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cf597c; end: 104cf599b; -[SCNGORegistrationUIRouteActions endBirthday] */

void FUN_104cf597c(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104cf599c; end: 104cf5a03; -[SCNGORegistrationUIRouteActions showVerificationWithDelegate:] */

void FUN_104cf599c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af518;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c056a60();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cf5a04; end: 104cf5a23; -[SCNGORegistrationUIRouteActions endVerification] */

void FUN_104cf5a04(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104cf5a24; end: 104cf5ae7; -[SCNGORegistrationUIRouteActions .cxx_destruct] */

void FUN_104cf5a24(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cf5ae8; end: 104cf5aff;  */

void FUN_104cf5ae8(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001136b8a20;
  ppuRam00000001136b8a20 = &PTR__OBJC_CLASS___NSConstantArray_11117e268;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cf5b00; end: 104cf5bb3; -[SCNGORegistrationWorkflow initWithRouter:delegate:shouldShowBirthdayBeforeVerification:shouldShowBirthdayAfterVerification:] */

undefined1 *
FUN_104cf5b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e3cc8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
    *(undefined1 *)((long)puVar1 + 0x19) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cf5bb4; end: 104cf5c0b; -[SCNGORegistrationWorkflow beginWorkflow] */

void FUN_104cf5bb4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104cf5c0c;
  puStack_20 = &UNK_1108499a0;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 104cf5c0c; end: 104cf5c33;  */

void FUN_104cf5c0c(long param_1,undefined8 param_2)

{
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x18) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c2361f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_2,PTR_s_showBirthdayPageWithBirthday_vie_11266b2a0,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c23ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showVerificationWithDelegate__11266c528,*(long *)(param_1 + 0x20));
  return;
}



/* Entry: 104cf5c34; end: 104cf5d23; -[SCNGORegistrationWorkflow preRegistrationVerificationFinishedWithEmail:registrationPhoneNumber:] */

void FUN_104cf5c34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  if (*(char *)(param_1 + 0x19) == '\x01') {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104cf5d24;
    puStack_40 = &UNK_1108499a0;
    lStack_38 = param_1;
    func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_58);
    param_1 = param_4;
  }
  else {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0da180();
    _objc_release(param_4);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 104cf5d24; end: 104cf5d6b;  */

void FUN_104cf5d24(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010bf95ac0(param_2);
  func_0x00010c2361e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104cf5d6c; end: 104cf5d97; -[SCNGORegistrationWorkflow preRegistrationVerificationExited] */

void FUN_104cf5d6c(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0da160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf5d98; end: 104cf5ddf; -[SCNGORegistrationWorkflow preRegistrationVerificationFinishedWithBootstrapData:] */

void FUN_104cf5d98(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0da1a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf5de0; end: 104cf5e9f; -[SCNGORegistrationWorkflow birthdaySubmitted:optedIn1TL:] */

void FUN_104cf5de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  if (*(char *)(param_1 + 0x19) == '\x01') {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0da180();
    _objc_release(param_1);
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104cf5ea0;
    puStack_40 = &UNK_1108499a0;
    lStack_38 = param_1;
    func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104cf5ea0; end: 104cf5edf;  */

void FUN_104cf5ea0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010bf942a0(param_2);
  func_0x00010c23ac00(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104cf5ee0; end: 104cf5f1f; -[SCNGORegistrationWorkflow birthdayExitedWithUserUnderageError] */

void FUN_104cf5ee0(long param_1,undefined8 param_2)

{
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&PTR___NSConcreteGlobalBlock_1108499f0);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0da160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf5f20; end: 104cf5f27;  */

void FUN_104cf5f20(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf942b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_endBirthday_1125c2a50);
  return;
}



/* Entry: 104cf5f28; end: 104cf5f67; -[SCNGORegistrationWorkflow birthdayScreenExited] */

void FUN_104cf5f28(long param_1,undefined8 param_2)

{
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&PTR___NSConcreteGlobalBlock_110849a10);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0da160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf5f68; end: 104cf5f6f;  */

void FUN_104cf5f68(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf942b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_endBirthday_1125c2a50);
  return;
}



/* Entry: 104cf5f70; end: 104cf5faf; -[SCNGORegistrationWorkflow birthdayExitSignUp] */

void FUN_104cf5f70(long param_1,undefined8 param_2)

{
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&PTR___NSConcreteGlobalBlock_110849a30);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0da160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf5fb0; end: 104cf5fb7;  */

void FUN_104cf5fb0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf942b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_endBirthday_1125c2a50);
  return;
}



/* Entry: 104cf5fb8; end: 104cf6017; -[SCNGORegistrationWorkflow birthdaySelectedLink:] */

void FUN_104cf5fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  _objc_storeStrong(puVar1 + 0x30,0);
  _objc_storeStrong(puVar1 + 0x28,0);
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_destroyWeak(puVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 104cf6018; end: 104cf6067; -[SCNGORegistrationWorkflow .cxx_destruct] */

void FUN_104cf6018(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cf6068; end: 104cf60db; -[SCGrapheneOAuthFeatureMetric2 init] */

undefined1 * FUN_104cf6068(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3cd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104cf60dc; end: 104cf624f;  */

undefined8 *****
FUN_104cf60dc(long param_1,undefined8 *****param_2,undefined8 ****param_3,undefined8 ****param_4,
             undefined8 ****param_5,undefined8 ****param_6,undefined8 ****param_7,
             undefined8 ****param_8)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  char *pcVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  long *plVar15;
  undefined8 ****ppppuVar16;
  long lVar17;
  undefined8 ****ppppuVar18;
  undefined8 *puVar19;
  undefined8 ***unaff_x23;
  undefined8 *unaff_x24;
  undefined8 ****ppppuStack_2b8;
  undefined *puStack_2b0;
  undefined8 ***pppuStack_240;
  undefined8 ***pppuStack_238;
  undefined8 ***pppuStack_230;
  undefined8 ***pppuStack_228;
  undefined8 ***pppuStack_220;
  undefined8 ***pppuStack_218;
  undefined8 ***pppuStack_210;
  undefined7 uStack_208;
  char cStack_201;
  undefined8 ***apppuStack_200 [2];
  undefined8 ****ppppuStack_1f0;
  char cStack_1e9;
  undefined8 ***pppuStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 **ppuStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 ****ppppuStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 ****ppppuStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 **ppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 **ppuStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 *apuStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 *apuStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  ppppuVar16 = (undefined8 ****)&ppuStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar9 = param_2;
  ppppuVar11 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = (undefined8 ***)apuStack_60;
    func_0x00010002b838(apuStack_60,pcVar6);
    ppuStack_80 = (undefined8 ***)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&ppuStack_80,apuStack_60,&lStack_48,1);
    pppppuVar9 = (undefined8 *****)&UNK_110849a50;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_68 = (undefined1 *)&ppuStack_80;
    func_0x00010007e5dc(&puStack_68);
    ppppuVar11 = ppppuVar16;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(apuStack_60[0]);
      ppppuVar11 = ppppuVar16;
      param_4 = param_3;
    }
  }
  pppppuVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar7;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  ppppuVar18 = (undefined8 ****)&ppuStack_100;
  pcStack_88 = FUN_104cf6250;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar10 = pppppuVar9;
  ppppuVar16 = ppppuVar11;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pppppuVar9);
  if (pppppuVar7 != (undefined8 *****)0x0) {
    ppppuVar16 = pppppuVar7[1];
    _objc_retain(pppppuVar9);
    if (pppppuVar9 == (undefined8 *****)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)pppppuVar9;
      _objc_retainAutorelease(pppppuVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar9);
    unaff_x23 = (undefined8 ***)apuStack_e0;
    func_0x00010002b838(apuStack_e0,pcVar6);
    ppuStack_100 = (undefined8 ***)0x0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&ppuStack_100,apuStack_e0,&lStack_c8,1);
    pppppuVar10 = (undefined8 *****)&UNK_110849aa0;
    (*(code *)(*ppppuVar16)[3])(ppppuVar16);
    puStack_e8 = (undefined1 *)&ppuStack_100;
    func_0x00010007e5dc(&puStack_e8);
    ppppuVar16 = ppppuVar18;
    param_4 = ppppuVar11;
    if (cStack_c9 < '\0') {
      __ZdlPv(apuStack_e0[0]);
      ppppuVar16 = ppppuVar18;
      param_4 = ppppuVar11;
    }
  }
  pppppuVar7 = pppppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppppuVar7;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar9);
  _objc_release(pppppuVar9);
  __Unwind_Resume();
  pcStack_108 = FUN_104cf63c4;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar9 = pppppuVar10;
  ppppuVar11 = ppppuVar16;
  ppppuVar18 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(pppppuVar10);
  _objc_retain(ppppuVar16);
  puVar19 = (undefined8 *)0x0;
  if (pppppuVar7 != (undefined8 *****)0x0) {
    ppppuVar18 = pppppuVar7[1];
    _objc_retain(pppppuVar10);
    if (pppppuVar10 == (undefined8 *****)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)pppppuVar10;
      _objc_retainAutorelease(pppppuVar10);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar10);
    unaff_x24 = auStack_178;
    func_0x00010002b838(auStack_178,pcVar6);
    _objc_retain(ppppuVar16);
    if (ppppuVar16 == (undefined8 ****)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar16);
      pcVar6 = (char *)ppppuVar16;
      func_0x00010bdc3520(ppppuVar16);
    }
    _objc_release(ppppuVar16);
    func_0x00010002b838(auStack_160,pcVar6);
    ppuStack_198 = (undefined8 ***)0x0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010007e1e8(&ppuStack_198,auStack_178,&lStack_148,2);
    pppppuVar9 = (undefined8 *****)&UNK_110849af0;
    unaff_x23 = &ppuStack_198;
    ppppuVar11 = (undefined8 ****)&ppuStack_198;
    (*(code *)(*ppppuVar18)[3])(ppppuVar18);
    ppuStack_180 = unaff_x23;
    func_0x00010007e5dc(&ppuStack_180);
    lVar17 = 0;
    puVar19 = auStack_178;
    ppppuVar18 = param_4;
    do {
      if ((&cStack_149)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(ppppuVar16);
  pppppuVar7 = pppppuVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pppppuVar7;
  }
  ___stack_chk_fail();
  _objc_release(ppppuVar16);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(ppppuVar16);
  _objc_release(pppppuVar10);
  pppppuVar8 = pppppuVar7;
  __Unwind_Resume();
  pcStack_1a8 = FUN_104cf65f4;
  pppuStack_1e8 = *(undefined8 ****)PTR____stack_chk_guard_11034bdc0;
  ppppuVar12 = ppppuVar11;
  ppppuVar13 = ppppuVar18;
  puStack_1e0 = unaff_x24;
  ppuStack_1d8 = unaff_x23;
  puStack_1d0 = puVar19;
  ppppuStack_1c8 = pppppuVar7;
  pppuStack_1c0 = ppppuVar16;
  ppppuStack_1b8 = pppppuVar10;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(pppppuVar9);
  _objc_retain(ppppuVar11);
  if (pppppuVar8 != (undefined8 *****)0x0) {
    ppppuVar16 = pppppuVar8[1];
    _objc_retain(pppppuVar9);
    if (pppppuVar9 == (undefined8 *****)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)pppppuVar9;
      _objc_retainAutorelease(pppppuVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar9);
    func_0x00010002b838(&pppuStack_218,pcVar6);
    _objc_retain(ppppuVar11);
    if (ppppuVar11 == (undefined8 ****)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar11);
      pcVar6 = (char *)ppppuVar11;
      func_0x00010bdc3520(ppppuVar11);
    }
    _objc_release(ppppuVar11);
    func_0x00010002b838(apppuStack_200,pcVar6);
    pppuStack_238 = (undefined8 ****)0x0;
    pppuStack_230 = (undefined8 ****)0x0;
    pppuStack_228 = (undefined8 ****)0x0;
    func_0x00010007e1e8(&pppuStack_238,&pppuStack_218,&pppuStack_1e8,2);
    ppppuVar12 = &pppuStack_238;
    (*(code *)(*ppppuVar16)[3])(ppppuVar16,&UNK_110849b40);
    pppuStack_220 = &pppuStack_238;
    func_0x00010007e5dc(&pppuStack_220);
    lVar17 = 0;
    ppppuVar13 = ppppuVar18;
    do {
      if ((&cStack_1e9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)apppuStack_200 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(ppppuVar11);
  pppppuVar7 = pppppuVar9;
  _objc_release();
  if (*(undefined8 *****)PTR____stack_chk_guard_11034bdc0 == (undefined8 ****)pppuStack_1e8) {
    return pppppuVar7;
  }
  ___stack_chk_fail();
  _objc_release(ppppuVar11);
  if (cStack_201 < '\0') {
    __ZdlPv(pppuStack_218);
  }
  _objc_release(ppppuVar11);
  _objc_release(pppppuVar9);
  __Unwind_Resume();
  pppuVar5 = pppuStack_1e8;
  pppuVar4 = pppuStack_220;
  pppuVar3 = pppuStack_228;
  pppuVar2 = pppuStack_230;
  pppuVar1 = pppuStack_238;
  ppppuVar11 = (undefined8 ****)CONCAT17(cStack_201,uStack_208);
  _objc_retain(ppppuVar12);
  _objc_retain(ppppuVar13);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(pppuStack_240);
  _objc_retain(pppuVar1);
  _objc_retain(pppuVar2);
  _objc_retain(pppuVar3);
  _objc_retain(pppuVar4);
  _objc_retain(pppuStack_218);
  _objc_retain(pppuStack_210);
  _objc_retain(ppppuVar11);
  _objc_retain(apppuStack_200[0]);
  _objc_retain(apppuStack_200[1]);
  _objc_retain(ppppuStack_1f0);
  _objc_retain(pppuVar5);
  puStack_2b0 = PTR_PTR_1126e3cd8;
  pppppuVar9 = &ppppuStack_2b8;
  ppppuStack_2b8 = pppppuVar7;
  _objc_msgSendSuper2(pppppuVar9,PTR_s_init_1125d9248);
  if (pppppuVar9 != (undefined8 *****)0x0) {
    _objc_retain(ppppuVar12);
    ppppuVar16 = pppppuVar9[1];
    pppppuVar9[1] = ppppuVar12;
    _objc_release(ppppuVar16);
    _objc_retain(ppppuVar13);
    ppppuVar16 = pppppuVar9[2];
    pppppuVar9[2] = ppppuVar13;
    _objc_release(ppppuVar16);
    _objc_retain(param_5);
    ppppuVar16 = pppppuVar9[3];
    pppppuVar9[3] = param_5;
    _objc_release(ppppuVar16);
    _objc_retain(param_6);
    ppppuVar16 = pppppuVar9[4];
    pppppuVar9[4] = param_6;
    _objc_release(ppppuVar16);
    _objc_retain(param_7);
    ppppuVar16 = pppppuVar9[5];
    pppppuVar9[5] = param_7;
    _objc_release(ppppuVar16);
    _objc_retain(param_8);
    ppppuVar16 = pppppuVar9[6];
    pppppuVar9[6] = param_8;
    _objc_release(ppppuVar16);
    _objc_retain(pppuStack_240);
    ppppuVar16 = pppppuVar9[7];
    pppppuVar9[7] = (undefined8 ****)pppuStack_240;
    _objc_release(ppppuVar16);
    _objc_retain(pppuVar3);
    ppppuVar16 = pppppuVar9[0xc];
    pppppuVar9[0xc] = (undefined8 ****)pppuVar3;
    _objc_release(ppppuVar16);
    _objc_retain(pppuVar1);
    ppppuVar16 = pppppuVar9[8];
    pppppuVar9[8] = (undefined8 ****)pppuVar1;
    _objc_release(ppppuVar16);
    _objc_retain(pppuVar2);
    ppppuVar16 = pppppuVar9[9];
    pppppuVar9[9] = (undefined8 ****)pppuVar2;
    _objc_release(ppppuVar16);
    _objc_retain(pppuVar4);
    ppppuVar16 = pppppuVar9[10];
    pppppuVar9[10] = (undefined8 ****)pppuVar4;
    _objc_release(ppppuVar16);
    _objc_retain(pppuStack_218);
    ppppuVar16 = pppppuVar9[0xb];
    pppppuVar9[0xb] = (undefined8 ****)pppuStack_218;
    _objc_release(ppppuVar16);
    _objc_retain(pppuStack_210);
    ppppuVar16 = pppppuVar9[0xd];
    pppppuVar9[0xd] = (undefined8 ****)pppuStack_210;
    _objc_release(ppppuVar16);
    _objc_retain(ppppuVar11);
    ppppuVar16 = pppppuVar9[0xe];
    pppppuVar9[0xe] = ppppuVar11;
    _objc_release(ppppuVar16);
    _objc_retain(apppuStack_200[0]);
    ppppuVar16 = pppppuVar9[0xf];
    pppppuVar9[0xf] = (undefined8 ****)apppuStack_200[0];
    _objc_release(ppppuVar16);
    _objc_retain(apppuStack_200[1]);
    ppppuVar16 = pppppuVar9[0x10];
    pppppuVar9[0x10] = (undefined8 ****)apppuStack_200[1];
    _objc_release(ppppuVar16);
    _objc_retain(ppppuStack_1f0);
    ppppuVar16 = pppppuVar9[0x11];
    pppppuVar9[0x11] = ppppuStack_1f0;
    _objc_release(ppppuVar16);
    ppppuVar16 = (undefined8 ****)pppuVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar18 = ppppuVar16;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar14 = pppppuVar9[0x12];
    pppppuVar9[0x12] = ppppuVar18;
    _objc_release(ppppuVar14);
    _objc_release(ppppuVar16);
  }
  _objc_release(pppuVar5);
  _objc_release(ppppuStack_1f0);
  _objc_release(apppuStack_200[1]);
  _objc_release(apppuStack_200[0]);
  _objc_release(ppppuVar11);
  _objc_release(pppuStack_210);
  _objc_release(pppuStack_218);
  _objc_release(pppuVar4);
  _objc_release(pppuVar3);
  _objc_release(pppuVar2);
  _objc_release(pppuVar1);
  _objc_release(pppuStack_240);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppppuVar13);
  _objc_release(ppppuVar12);
  return pppppuVar9;
}



/* Entry: 104cf6250; end: 104cf63c3;  */

undefined8 *****
FUN_104cf6250(long param_1,undefined8 *****param_2,undefined8 ****param_3,undefined8 ****param_4,
             undefined8 ****param_5,undefined8 ****param_6,undefined8 ****param_7,
             undefined8 ****param_8)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  char *pcVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  long *plVar15;
  long lVar16;
  undefined8 ****ppppuVar17;
  undefined8 *puVar18;
  undefined8 ****ppppuVar19;
  undefined8 ***unaff_x23;
  undefined8 *unaff_x24;
  undefined8 ****ppppuStack_238;
  undefined *puStack_230;
  undefined8 ***pppuStack_1c0;
  undefined8 ***pppuStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined8 ***pppuStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 ***pppuStack_198;
  undefined8 ***pppuStack_190;
  undefined7 uStack_188;
  char cStack_181;
  undefined8 ***apppuStack_180 [2];
  undefined8 ****ppppuStack_170;
  char cStack_169;
  undefined8 ***pppuStack_168;
  undefined8 *puStack_160;
  undefined8 **ppuStack_158;
  undefined8 *puStack_150;
  undefined8 ****ppppuStack_148;
  undefined8 ***pppuStack_140;
  undefined8 ****ppppuStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 **ppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 **ppuStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 *apuStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  ppppuVar10 = (undefined8 ****)&ppuStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar9 = param_2;
  ppppuVar19 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = (undefined8 ***)apuStack_60;
    func_0x00010002b838(apuStack_60,pcVar6);
    ppuStack_80 = (undefined8 ***)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&ppuStack_80,apuStack_60,&lStack_48,1);
    pppppuVar9 = (undefined8 *****)&UNK_110849aa0;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_68 = (undefined1 *)&ppuStack_80;
    func_0x00010007e5dc(&puStack_68);
    ppppuVar19 = ppppuVar10;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(apuStack_60[0]);
      ppppuVar19 = ppppuVar10;
      param_4 = param_3;
    }
  }
  pppppuVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar7;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_104cf63c4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar11 = pppppuVar9;
  ppppuVar10 = ppppuVar19;
  ppppuVar17 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pppppuVar9);
  _objc_retain(ppppuVar19);
  puVar18 = (undefined8 *)0x0;
  if (pppppuVar7 != (undefined8 *****)0x0) {
    ppppuVar17 = pppppuVar7[1];
    _objc_retain(pppppuVar9);
    if (pppppuVar9 == (undefined8 *****)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)pppppuVar9;
      _objc_retainAutorelease(pppppuVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar9);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,pcVar6);
    _objc_retain(ppppuVar19);
    if (ppppuVar19 == (undefined8 ****)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar19);
      pcVar6 = (char *)ppppuVar19;
      func_0x00010bdc3520(ppppuVar19);
    }
    _objc_release(ppppuVar19);
    func_0x00010002b838(auStack_e0,pcVar6);
    ppuStack_118 = (undefined8 ***)0x0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&ppuStack_118,auStack_f8,&lStack_c8,2);
    pppppuVar11 = (undefined8 *****)&UNK_110849af0;
    unaff_x23 = &ppuStack_118;
    ppppuVar10 = (undefined8 ****)&ppuStack_118;
    (*(code *)(*ppppuVar17)[3])(ppppuVar17);
    ppuStack_100 = unaff_x23;
    func_0x00010007e5dc(&ppuStack_100);
    lVar16 = 0;
    puVar18 = auStack_f8;
    ppppuVar17 = param_4;
    do {
      if ((&cStack_c9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(ppppuVar19);
  pppppuVar7 = pppppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppppuVar7;
  }
  ___stack_chk_fail();
  _objc_release(ppppuVar19);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(ppppuVar19);
  _objc_release(pppppuVar9);
  pppppuVar8 = pppppuVar7;
  __Unwind_Resume();
  pcStack_128 = FUN_104cf65f4;
  pppuStack_168 = *(undefined8 ****)PTR____stack_chk_guard_11034bdc0;
  ppppuVar12 = ppppuVar10;
  ppppuVar13 = ppppuVar17;
  puStack_160 = unaff_x24;
  ppuStack_158 = unaff_x23;
  puStack_150 = puVar18;
  ppppuStack_148 = pppppuVar7;
  pppuStack_140 = ppppuVar19;
  ppppuStack_138 = pppppuVar9;
  ppuStack_130 = &puStack_90;
  _objc_retain(pppppuVar11);
  _objc_retain(ppppuVar10);
  if (pppppuVar8 != (undefined8 *****)0x0) {
    ppppuVar19 = pppppuVar8[1];
    _objc_retain(pppppuVar11);
    if (pppppuVar11 == (undefined8 *****)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)pppppuVar11;
      _objc_retainAutorelease(pppppuVar11);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar11);
    func_0x00010002b838(&pppuStack_198,pcVar6);
    _objc_retain(ppppuVar10);
    if (ppppuVar10 == (undefined8 ****)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar10);
      pcVar6 = (char *)ppppuVar10;
      func_0x00010bdc3520(ppppuVar10);
    }
    _objc_release(ppppuVar10);
    func_0x00010002b838(apppuStack_180,pcVar6);
    pppuStack_1b8 = (undefined8 ****)0x0;
    pppuStack_1b0 = (undefined8 ****)0x0;
    pppuStack_1a8 = (undefined8 ****)0x0;
    func_0x00010007e1e8(&pppuStack_1b8,&pppuStack_198,&pppuStack_168,2);
    ppppuVar12 = &pppuStack_1b8;
    (*(code *)(*ppppuVar19)[3])(ppppuVar19,&UNK_110849b40);
    pppuStack_1a0 = &pppuStack_1b8;
    func_0x00010007e5dc(&pppuStack_1a0);
    lVar16 = 0;
    ppppuVar13 = ppppuVar17;
    do {
      if ((&cStack_169)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)apppuStack_180 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(ppppuVar10);
  pppppuVar9 = pppppuVar11;
  _objc_release();
  if (*(undefined8 *****)PTR____stack_chk_guard_11034bdc0 == (undefined8 ****)pppuStack_168) {
    return pppppuVar9;
  }
  ___stack_chk_fail();
  _objc_release(ppppuVar10);
  if (cStack_181 < '\0') {
    __ZdlPv(pppuStack_198);
  }
  _objc_release(ppppuVar10);
  _objc_release(pppppuVar11);
  __Unwind_Resume();
  pppuVar5 = pppuStack_168;
  pppuVar4 = pppuStack_1a0;
  pppuVar3 = pppuStack_1a8;
  pppuVar2 = pppuStack_1b0;
  pppuVar1 = pppuStack_1b8;
  ppppuVar19 = (undefined8 ****)CONCAT17(cStack_181,uStack_188);
  _objc_retain(ppppuVar12);
  _objc_retain(ppppuVar13);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(pppuStack_1c0);
  _objc_retain(pppuVar1);
  _objc_retain(pppuVar2);
  _objc_retain(pppuVar3);
  _objc_retain(pppuVar4);
  _objc_retain(pppuStack_198);
  _objc_retain(pppuStack_190);
  _objc_retain(ppppuVar19);
  _objc_retain(apppuStack_180[0]);
  _objc_retain(apppuStack_180[1]);
  _objc_retain(ppppuStack_170);
  _objc_retain(pppuVar5);
  puStack_230 = PTR_PTR_1126e3cd8;
  pppppuVar7 = &ppppuStack_238;
  ppppuStack_238 = pppppuVar9;
  _objc_msgSendSuper2(pppppuVar7,PTR_s_init_1125d9248);
  if (pppppuVar7 != (undefined8 *****)0x0) {
    _objc_retain(ppppuVar12);
    ppppuVar10 = pppppuVar7[1];
    pppppuVar7[1] = ppppuVar12;
    _objc_release(ppppuVar10);
    _objc_retain(ppppuVar13);
    ppppuVar10 = pppppuVar7[2];
    pppppuVar7[2] = ppppuVar13;
    _objc_release(ppppuVar10);
    _objc_retain(param_5);
    ppppuVar10 = pppppuVar7[3];
    pppppuVar7[3] = param_5;
    _objc_release(ppppuVar10);
    _objc_retain(param_6);
    ppppuVar10 = pppppuVar7[4];
    pppppuVar7[4] = param_6;
    _objc_release(ppppuVar10);
    _objc_retain(param_7);
    ppppuVar10 = pppppuVar7[5];
    pppppuVar7[5] = param_7;
    _objc_release(ppppuVar10);
    _objc_retain(param_8);
    ppppuVar10 = pppppuVar7[6];
    pppppuVar7[6] = param_8;
    _objc_release(ppppuVar10);
    _objc_retain(pppuStack_1c0);
    ppppuVar10 = pppppuVar7[7];
    pppppuVar7[7] = (undefined8 ****)pppuStack_1c0;
    _objc_release(ppppuVar10);
    _objc_retain(pppuVar3);
    ppppuVar10 = pppppuVar7[0xc];
    pppppuVar7[0xc] = (undefined8 ****)pppuVar3;
    _objc_release(ppppuVar10);
    _objc_retain(pppuVar1);
    ppppuVar10 = pppppuVar7[8];
    pppppuVar7[8] = (undefined8 ****)pppuVar1;
    _objc_release(ppppuVar10);
    _objc_retain(pppuVar2);
    ppppuVar10 = pppppuVar7[9];
    pppppuVar7[9] = (undefined8 ****)pppuVar2;
    _objc_release(ppppuVar10);
    _objc_retain(pppuVar4);
    ppppuVar10 = pppppuVar7[10];
    pppppuVar7[10] = (undefined8 ****)pppuVar4;
    _objc_release(ppppuVar10);
    _objc_retain(pppuStack_198);
    ppppuVar10 = pppppuVar7[0xb];
    pppppuVar7[0xb] = (undefined8 ****)pppuStack_198;
    _objc_release(ppppuVar10);
    _objc_retain(pppuStack_190);
    ppppuVar10 = pppppuVar7[0xd];
    pppppuVar7[0xd] = (undefined8 ****)pppuStack_190;
    _objc_release(ppppuVar10);
    _objc_retain(ppppuVar19);
    ppppuVar10 = pppppuVar7[0xe];
    pppppuVar7[0xe] = ppppuVar19;
    _objc_release(ppppuVar10);
    _objc_retain(apppuStack_180[0]);
    ppppuVar10 = pppppuVar7[0xf];
    pppppuVar7[0xf] = (undefined8 ****)apppuStack_180[0];
    _objc_release(ppppuVar10);
    _objc_retain(apppuStack_180[1]);
    ppppuVar10 = pppppuVar7[0x10];
    pppppuVar7[0x10] = (undefined8 ****)apppuStack_180[1];
    _objc_release(ppppuVar10);
    _objc_retain(ppppuStack_170);
    ppppuVar10 = pppppuVar7[0x11];
    pppppuVar7[0x11] = ppppuStack_170;
    _objc_release(ppppuVar10);
    ppppuVar10 = (undefined8 ****)pppuVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar17 = ppppuVar10;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar14 = pppppuVar7[0x12];
    pppppuVar7[0x12] = ppppuVar17;
    _objc_release(ppppuVar14);
    _objc_release(ppppuVar10);
  }
  _objc_release(pppuVar5);
  _objc_release(ppppuStack_170);
  _objc_release(apppuStack_180[1]);
  _objc_release(apppuStack_180[0]);
  _objc_release(ppppuVar19);
  _objc_release(pppuStack_190);
  _objc_release(pppuStack_198);
  _objc_release(pppuVar4);
  _objc_release(pppuVar3);
  _objc_release(pppuVar2);
  _objc_release(pppuVar1);
  _objc_release(pppuStack_1c0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppppuVar13);
  _objc_release(ppppuVar12);
  return pppppuVar7;
}



/* Entry: 104cf63c4; end: 104cf65f3;  */

undefined8 *****
FUN_104cf63c4(long param_1,undefined8 *****param_2,undefined8 ****param_3,undefined8 ****param_4,
             undefined8 ****param_5,undefined8 ****param_6,undefined8 ****param_7,
             undefined8 ****param_8)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  char *pcVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 ****ppppuVar18;
  undefined8 ***unaff_x23;
  undefined8 *unaff_x24;
  undefined8 ****ppppuStack_1b8;
  undefined *puStack_1b0;
  undefined8 ***pppuStack_140;
  undefined8 ***pppuStack_138;
  undefined8 ***pppuStack_130;
  undefined8 ***pppuStack_128;
  undefined8 ***pppuStack_120;
  undefined8 ***pppuStack_118;
  undefined8 ***pppuStack_110;
  undefined7 uStack_108;
  char cStack_101;
  undefined8 ***apppuStack_100 [2];
  undefined8 ****ppppuStack_f0;
  char cStack_e9;
  undefined8 ***pppuStack_e8;
  undefined8 *puStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 *puStack_d0;
  undefined8 ****ppppuStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 **ppuStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar9 = param_2;
  ppppuVar12 = param_3;
  ppppuVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar17 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar6);
    _objc_retain(param_3);
    if (param_3 == (undefined8 ****)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar6 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar6);
    ppuStack_98 = (undefined8 ***)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&ppuStack_98,auStack_78,&lStack_48,2);
    pppppuVar9 = (undefined8 *****)&UNK_110849af0;
    unaff_x23 = &ppuStack_98;
    ppppuVar12 = (undefined8 ****)&ppuStack_98;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    ppuStack_80 = unaff_x23;
    func_0x00010007e5dc(&ppuStack_80);
    lVar15 = 0;
    puVar17 = auStack_78;
    ppppuVar10 = param_4;
    do {
      if ((&cStack_49)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(param_3);
  pppppuVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppppuVar7;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pppppuVar8 = pppppuVar7;
  __Unwind_Resume();
  pcStack_a8 = FUN_104cf65f4;
  pppuStack_e8 = *(undefined8 ****)PTR____stack_chk_guard_11034bdc0;
  ppppuVar13 = ppppuVar12;
  ppppuVar18 = ppppuVar10;
  puStack_e0 = unaff_x24;
  ppuStack_d8 = unaff_x23;
  puStack_d0 = puVar17;
  ppppuStack_c8 = pppppuVar7;
  pppuStack_c0 = param_3;
  ppppuStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pppppuVar9);
  _objc_retain(ppppuVar12);
  if (pppppuVar8 != (undefined8 *****)0x0) {
    ppppuVar18 = pppppuVar8[1];
    _objc_retain(pppppuVar9);
    if (pppppuVar9 == (undefined8 *****)0x0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)pppppuVar9;
      _objc_retainAutorelease(pppppuVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pppppuVar9);
    func_0x00010002b838(&pppuStack_118,pcVar6);
    _objc_retain(ppppuVar12);
    if (ppppuVar12 == (undefined8 ****)0x0) {
      pcVar6 = "";
    }
    else {
      _objc_retainAutorelease(ppppuVar12);
      pcVar6 = (char *)ppppuVar12;
      func_0x00010bdc3520(ppppuVar12);
    }
    _objc_release(ppppuVar12);
    func_0x00010002b838(apppuStack_100,pcVar6);
    pppuStack_138 = (undefined8 ****)0x0;
    pppuStack_130 = (undefined8 ****)0x0;
    pppuStack_128 = (undefined8 ****)0x0;
    func_0x00010007e1e8(&pppuStack_138,&pppuStack_118,&pppuStack_e8,2);
    ppppuVar13 = &pppuStack_138;
    (*(code *)(*ppppuVar18)[3])(ppppuVar18,&UNK_110849b40);
    pppuStack_120 = &pppuStack_138;
    func_0x00010007e5dc(&pppuStack_120);
    lVar15 = 0;
    ppppuVar18 = ppppuVar10;
    do {
      if ((&cStack_e9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)apppuStack_100 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(ppppuVar12);
  pppppuVar7 = pppppuVar9;
  _objc_release();
  if (*(undefined8 *****)PTR____stack_chk_guard_11034bdc0 == (undefined8 ****)pppuStack_e8) {
    return pppppuVar7;
  }
  ___stack_chk_fail();
  _objc_release(ppppuVar12);
  if (cStack_101 < '\0') {
    __ZdlPv(pppuStack_118);
  }
  _objc_release(ppppuVar12);
  _objc_release(pppppuVar9);
  __Unwind_Resume();
  pppuVar5 = pppuStack_e8;
  pppuVar4 = pppuStack_120;
  pppuVar3 = pppuStack_128;
  pppuVar2 = pppuStack_130;
  pppuVar1 = pppuStack_138;
  ppppuVar12 = (undefined8 ****)CONCAT17(cStack_101,uStack_108);
  _objc_retain(ppppuVar13);
  _objc_retain(ppppuVar18);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(pppuStack_140);
  _objc_retain(pppuVar1);
  _objc_retain(pppuVar2);
  _objc_retain(pppuVar3);
  _objc_retain(pppuVar4);
  _objc_retain(pppuStack_118);
  _objc_retain(pppuStack_110);
  _objc_retain(ppppuVar12);
  _objc_retain(apppuStack_100[0]);
  _objc_retain(apppuStack_100[1]);
  _objc_retain(ppppuStack_f0);
  _objc_retain(pppuVar5);
  puStack_1b0 = PTR_PTR_1126e3cd8;
  pppppuVar9 = &ppppuStack_1b8;
  ppppuStack_1b8 = pppppuVar7;
  _objc_msgSendSuper2(pppppuVar9,PTR_s_init_1125d9248);
  if (pppppuVar9 != (undefined8 *****)0x0) {
    _objc_retain(ppppuVar13);
    ppppuVar10 = pppppuVar9[1];
    pppppuVar9[1] = ppppuVar13;
    _objc_release(ppppuVar10);
    _objc_retain(ppppuVar18);
    ppppuVar10 = pppppuVar9[2];
    pppppuVar9[2] = ppppuVar18;
    _objc_release(ppppuVar10);
    _objc_retain(param_5);
    ppppuVar10 = pppppuVar9[3];
    pppppuVar9[3] = param_5;
    _objc_release(ppppuVar10);
    _objc_retain(param_6);
    ppppuVar10 = pppppuVar9[4];
    pppppuVar9[4] = param_6;
    _objc_release(ppppuVar10);
    _objc_retain(param_7);
    ppppuVar10 = pppppuVar9[5];
    pppppuVar9[5] = param_7;
    _objc_release(ppppuVar10);
    _objc_retain(param_8);
    ppppuVar10 = pppppuVar9[6];
    pppppuVar9[6] = param_8;
    _objc_release(ppppuVar10);
    _objc_retain(pppuStack_140);
    ppppuVar10 = pppppuVar9[7];
    pppppuVar9[7] = (undefined8 ****)pppuStack_140;
    _objc_release(ppppuVar10);
    _objc_retain(pppuVar3);
    ppppuVar10 = pppppuVar9[0xc];
    pppppuVar9[0xc] = (undefined8 ****)pppuVar3;
    _objc_release(ppppuVar10);
    _objc_retain(pppuVar1);
    ppppuVar10 = pppppuVar9[8];
    pppppuVar9[8] = (undefined8 ****)pppuVar1;
    _objc_release(ppppuVar10);
    _objc_retain(pppuVar2);
    ppppuVar10 = pppppuVar9[9];
    pppppuVar9[9] = (undefined8 ****)pppuVar2;
    _objc_release(ppppuVar10);
    _objc_retain(pppuVar4);
    ppppuVar10 = pppppuVar9[10];
    pppppuVar9[10] = (undefined8 ****)pppuVar4;
    _objc_release(ppppuVar10);
    _objc_retain(pppuStack_118);
    ppppuVar10 = pppppuVar9[0xb];
    pppppuVar9[0xb] = (undefined8 ****)pppuStack_118;
    _objc_release(ppppuVar10);
    _objc_retain(pppuStack_110);
    ppppuVar10 = pppppuVar9[0xd];
    pppppuVar9[0xd] = (undefined8 ****)pppuStack_110;
    _objc_release(ppppuVar10);
    _objc_retain(ppppuVar12);
    ppppuVar10 = pppppuVar9[0xe];
    pppppuVar9[0xe] = ppppuVar12;
    _objc_release(ppppuVar10);
    _objc_retain(apppuStack_100[0]);
    ppppuVar10 = pppppuVar9[0xf];
    pppppuVar9[0xf] = (undefined8 ****)apppuStack_100[0];
    _objc_release(ppppuVar10);
    _objc_retain(apppuStack_100[1]);
    ppppuVar10 = pppppuVar9[0x10];
    pppppuVar9[0x10] = (undefined8 ****)apppuStack_100[1];
    _objc_release(ppppuVar10);
    _objc_retain(ppppuStack_f0);
    ppppuVar10 = pppppuVar9[0x11];
    pppppuVar9[0x11] = ppppuStack_f0;
    _objc_release(ppppuVar10);
    ppppuVar10 = (undefined8 ****)pppuVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar11 = ppppuVar10;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar14 = pppppuVar9[0x12];
    pppppuVar9[0x12] = ppppuVar11;
    _objc_release(ppppuVar14);
    _objc_release(ppppuVar10);
  }
  _objc_release(pppuVar5);
  _objc_release(ppppuStack_f0);
  _objc_release(apppuStack_100[1]);
  _objc_release(apppuStack_100[0]);
  _objc_release(ppppuVar12);
  _objc_release(pppuStack_110);
  _objc_release(pppuStack_118);
  _objc_release(pppuVar4);
  _objc_release(pppuVar3);
  _objc_release(pppuVar2);
  _objc_release(pppuVar1);
  _objc_release(pppuStack_140);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppppuVar18);
  _objc_release(ppppuVar13);
  return pppppuVar9;
}



/* Entry: 104cf65f4; end: 104cf6823;  */

undefined8 *****
FUN_104cf65f4(long param_1,undefined8 *****param_2,undefined8 ****param_3,undefined8 ****param_4,
             undefined8 ****param_5,undefined8 ****param_6,undefined8 ****param_7,
             undefined8 ****param_8)

{
  undefined8 ****ppppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  char *pcVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  long lVar15;
  long *plVar16;
  undefined8 ****ppppuStack_118;
  undefined *puStack_110;
  undefined8 ***pppuStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  undefined7 uStack_68;
  char cStack_61;
  undefined8 ***apppuStack_60 [2];
  undefined8 ****ppppuStack_50;
  char cStack_49;
  undefined8 ***pppuStack_48;
  
  pppuStack_48 = *(undefined8 ****)PTR____stack_chk_guard_11034bdc0;
  ppppuVar12 = param_3;
  ppppuVar13 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *****)0x0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(&pppuStack_78,pcVar7);
    _objc_retain(param_3);
    if (param_3 == (undefined8 ****)0x0) {
      pcVar7 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar7 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(apppuStack_60,pcVar7);
    pppuStack_98 = (undefined8 ****)0x0;
    pppuStack_90 = (undefined8 ****)0x0;
    pppuStack_88 = (undefined8 ****)0x0;
    func_0x00010007e1e8(&pppuStack_98,&pppuStack_78,&pppuStack_48,2);
    ppppuVar12 = &pppuStack_98;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110849b40);
    pppuStack_80 = &pppuStack_98;
    func_0x00010007e5dc(&pppuStack_80);
    lVar15 = 0;
    ppppuVar13 = param_4;
    do {
      if ((&cStack_49)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)apppuStack_60 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(param_3);
  pppppuVar8 = param_2;
  _objc_release();
  if (*(undefined8 *****)PTR____stack_chk_guard_11034bdc0 == (undefined8 ****)pppuStack_48) {
    return pppppuVar8;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(pppuStack_78);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pppuVar6 = pppuStack_48;
  pppuVar5 = pppuStack_80;
  pppuVar4 = pppuStack_88;
  pppuVar3 = pppuStack_90;
  pppuVar2 = pppuStack_98;
  ppppuVar1 = (undefined8 ****)CONCAT17(cStack_61,uStack_68);
  _objc_retain(ppppuVar12);
  _objc_retain(ppppuVar13);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(pppuStack_a0);
  _objc_retain(pppuVar2);
  _objc_retain(pppuVar3);
  _objc_retain(pppuVar4);
  _objc_retain(pppuVar5);
  _objc_retain(pppuStack_78);
  _objc_retain(pppuStack_70);
  _objc_retain(ppppuVar1);
  _objc_retain(apppuStack_60[0]);
  _objc_retain(apppuStack_60[1]);
  _objc_retain(ppppuStack_50);
  _objc_retain(pppuVar6);
  puStack_110 = PTR_PTR_1126e3cd8;
  pppppuVar9 = &ppppuStack_118;
  ppppuStack_118 = pppppuVar8;
  _objc_msgSendSuper2(pppppuVar9,PTR_s_init_1125d9248);
  if (pppppuVar9 != (undefined8 *****)0x0) {
    _objc_retain(ppppuVar12);
    ppppuVar10 = pppppuVar9[1];
    pppppuVar9[1] = ppppuVar12;
    _objc_release(ppppuVar10);
    _objc_retain(ppppuVar13);
    ppppuVar10 = pppppuVar9[2];
    pppppuVar9[2] = ppppuVar13;
    _objc_release(ppppuVar10);
    _objc_retain(param_5);
    ppppuVar10 = pppppuVar9[3];
    pppppuVar9[3] = param_5;
    _objc_release(ppppuVar10);
    _objc_retain(param_6);
    ppppuVar10 = pppppuVar9[4];
    pppppuVar9[4] = param_6;
    _objc_release(ppppuVar10);
    _objc_retain(param_7);
    ppppuVar10 = pppppuVar9[5];
    pppppuVar9[5] = param_7;
    _objc_release(ppppuVar10);
    _objc_retain(param_8);
    ppppuVar10 = pppppuVar9[6];
    pppppuVar9[6] = param_8;
    _objc_release(ppppuVar10);
    _objc_retain(pppuStack_a0);
    ppppuVar10 = pppppuVar9[7];
    pppppuVar9[7] = (undefined8 ****)pppuStack_a0;
    _objc_release(ppppuVar10);
    _objc_retain(pppuVar4);
    ppppuVar10 = pppppuVar9[0xc];
    pppppuVar9[0xc] = (undefined8 ****)pppuVar4;
    _objc_release(ppppuVar10);
    _objc_retain(pppuVar2);
    ppppuVar10 = pppppuVar9[8];
    pppppuVar9[8] = (undefined8 ****)pppuVar2;
    _objc_release(ppppuVar10);
    _objc_retain(pppuVar3);
    ppppuVar10 = pppppuVar9[9];
    pppppuVar9[9] = (undefined8 ****)pppuVar3;
    _objc_release(ppppuVar10);
    _objc_retain(pppuVar5);
    ppppuVar10 = pppppuVar9[10];
    pppppuVar9[10] = (undefined8 ****)pppuVar5;
    _objc_release(ppppuVar10);
    _objc_retain(pppuStack_78);
    ppppuVar10 = pppppuVar9[0xb];
    pppppuVar9[0xb] = (undefined8 ****)pppuStack_78;
    _objc_release(ppppuVar10);
    _objc_retain(pppuStack_70);
    ppppuVar10 = pppppuVar9[0xd];
    pppppuVar9[0xd] = (undefined8 ****)pppuStack_70;
    _objc_release(ppppuVar10);
    _objc_retain(ppppuVar1);
    ppppuVar10 = pppppuVar9[0xe];
    pppppuVar9[0xe] = ppppuVar1;
    _objc_release(ppppuVar10);
    _objc_retain(apppuStack_60[0]);
    ppppuVar10 = pppppuVar9[0xf];
    pppppuVar9[0xf] = (undefined8 ****)apppuStack_60[0];
    _objc_release(ppppuVar10);
    _objc_retain(apppuStack_60[1]);
    ppppuVar10 = pppppuVar9[0x10];
    pppppuVar9[0x10] = (undefined8 ****)apppuStack_60[1];
    _objc_release(ppppuVar10);
    _objc_retain(ppppuStack_50);
    ppppuVar10 = pppppuVar9[0x11];
    pppppuVar9[0x11] = ppppuStack_50;
    _objc_release(ppppuVar10);
    ppppuVar10 = (undefined8 ****)pppuVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar11 = ppppuVar10;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar14 = pppppuVar9[0x12];
    pppppuVar9[0x12] = ppppuVar11;
    _objc_release(ppppuVar14);
    _objc_release(ppppuVar10);
  }
  _objc_release(pppuVar6);
  _objc_release(ppppuStack_50);
  _objc_release(apppuStack_60[1]);
  _objc_release(apppuStack_60[0]);
  _objc_release(ppppuVar1);
  _objc_release(pppuStack_70);
  _objc_release(pppuStack_78);
  _objc_release(pppuVar5);
  _objc_release(pppuVar4);
  _objc_release(pppuVar3);
  _objc_release(pppuVar2);
  _objc_release(pppuStack_a0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppppuVar13);
  _objc_release(ppppuVar12);
  return pppppuVar9;
}



/* Entry: 104cf6824; end: 104cf6c2b; -[SCGrpcOneTapLoginAuthenticator initWithMultiAccountRepositories:janusLoginService:deviceIdManager:deviceIdentifierProvider:fideliusClientInitInfoProvider:logInSessionService:authenticationSessionInfoProvider:preLoginAttestationProvider:networkConnectivityMonitor:circumstanceEngine:loginStateTransitionLogger:lazyOneTapLoginLogger:clientIdProvider:configVersionProvider:cloudAccountIdProvider:networkLoggingService:deviceCheckManager:performerProvider:] */

undefined8 *
FUN_104cf6824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_1126e3cd8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
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
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    uVar2 = param_20;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x12];
    puVar1[0x12] = uVar3;
    _objc_release(uVar4);
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



/* Entry: 104cf6c2c; end: 104cf6c33; -[SCGrpcOneTapLoginAuthenticator removeOneTapLoginWithUserId:] */

void FUN_104cf6c2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeOneTapLoginWithUserId__112628fd0);
  return;
}



/* Entry: 104cf6c34; end: 104cf6c3b; -[SCGrpcOneTapLoginAuthenticator removeOneTapLoginTokenWithUserId:] */

void FUN_104cf6c34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeOneTapLoginTokenWithUserId_112628fc0);
  return;
}



/* Entry: 104cf6c3c; end: 104cf6e37; -[SCGrpcOneTapLoginAuthenticator authenticateWithUserId:reactivationToken:confirmedReactivation:networkRequestId:success:failure:] */

void FUN_104cf6c3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af528;
  func_0x00010c251d80(PTR_PTR_1126af528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_70 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010be79040(param_1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104cf6e38; end: 104cf6ebb;  */

void FUN_104cf6e38(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf10b20();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf6ebc; end: 104cf74fb; -[SCGrpcOneTapLoginAuthenticator authenticateWithUserId:deviceCheckToken:cofEtag:reactivationToken:confirmedReactivation:networkRequestId:success:failure:] */

void FUN_104cf6ebc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  ppuVar2 = *(undefined ***)(param_1 + 8);
  func_0x00010c0e8800();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0e88c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c08fa60();
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar2;
  if (ppuVar4 == (undefined **)0x0) {
    func_0x00010c0e8560();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0e88c0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar4 = ppuVar2;
  func_0x00010c0e8860();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf3d120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar6;
  func_0x00010c26ada0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010bfdecc0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010540b7e8(uVar5,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar5);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010bf70640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b700(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar8);
  uVar5 = 0xc;
  if (param_7 == 0) {
    uVar5 = 10;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf71140();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010bfc3b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  func_0x00010540c48c(uVar5,ppuVar1,uVar9,param_4,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x60),uVar8,param_8,
                      *(undefined8 *)(param_1 + 0x78));
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if ((((ulong)puVar11 & 1) != 0) ||
     (puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0, func_0x00010c078c00(), (int)puVar11 != 0)) {
    func_0x00010be506c0(param_1);
  }
  uVar12 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c091f60(uVar12);
  uVar10 = param_5;
  func_0x00010540b9f4(param_5,uVar12);
  _objc_retainAutoreleasedReturnValue();
  if (param_7 == 0) {
    puVar11 = PTR_PTR_1126af538;
    func_0x00010c0cb140(PTR_PTR_1126af538);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4a20();
    func_0x00010c19b6c0(puVar11);
    func_0x00010c1c0900(puVar11);
    func_0x00010c17dfe0(puVar11);
    func_0x00010c1b0040(puVar11);
    uVar12 = uVar6;
    func_0x00010c26ada0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec6800(param_1);
    _objc_release(uVar12);
    _objc_release(puVar11);
  }
  else {
    puVar11 = PTR_PTR_1126af530;
    func_0x00010c0cb140(PTR_PTR_1126af530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0900();
    func_0x00010c1e7e20(puVar11);
    uVar12 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a90e0();
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126af528;
    func_0x00010c1368c0(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aae80(uVar12);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_initWeak(auStack_70,param_1);
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010540bd48(uVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(param_8);
    _objc_retain(param_9);
    _objc_retain(param_10);
    func_0x00010c120fc0(uVar12);
    _objc_release(uVar14);
    _objc_release(uVar12);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_release(puVar11);
  }
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104cf74fc; end: 104cf75a7;  */

void FUN_104cf74fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c26ada0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2eb40(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cf75a8; end: 104cf782b; -[SCGrpcOneTapLoginAuthenticator _submitV3Request:username:fidIdentity:networkRequestId:success:failure:] */

void FUN_104cf75a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a90e0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af528;
  func_0x00010c1368c0(PTR_PTR_1126af528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010540bd48(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c0b44a0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104cf782c; end: 104cf78ab;  */

void FUN_104cf782c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32ec0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cf78ac; end: 104cf7cbf; -[SCGrpcOneTapLoginAuthenticator _handleReactivateResponse:error:username:tempIdentity:networkRequestId:onSuccess:onFailure:] */

void FUN_104cf78ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (param_3 != 0) {
    func_0x000106b7f0c8(param_3);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c0a9100(uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126af528;
  func_0x00010bf3ec40(param_4);
  func_0x00010c13bc00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80();
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010bde43c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    (**(code **)(param_9 + 0x10))(param_9,lVar4);
    goto LAB_104cf7b50;
  }
  lVar5 = param_3;
  func_0x00010bf98a00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfe4e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = param_3;
  func_0x00010c252ee0();
  puVar8 = (undefined *)0x0;
  iVar1 = (int)lVar5;
  if (iVar1 < 0xb) {
    if (iVar1 < 1) {
      if ((iVar1 == -0x4524111) || (iVar1 == 0)) goto LAB_104cf7ae4;
    }
    else {
      if (iVar1 == 1) {
        uVar2 = *(undefined8 *)(param_1 + 0x80);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126af528;
        func_0x00010bf43e00(PTR_PTR_1126af528);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0aae80(uVar2);
        _objc_release(puVar8);
        _objc_release(uVar2);
        puVar8 = PTR_PTR_1126af360;
        _objc_alloc(PTR_PTR_1126af360);
        lVar5 = param_3;
        func_0x000106b786d0(param_3,param_5,param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c03fca0(puVar8);
        _objc_release(lVar5);
        (**(code **)(param_8 + 0x10))(param_8,puVar8);
        _objc_release(puVar8);
        _objc_release(lVar6);
        goto LAB_104cf7b50;
      }
      if (iVar1 == 2) {
        puVar8 = PTR_PTR_1126af540;
        func_0x00010c282380(PTR_PTR_1126af540);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (iVar1 == 10) goto LAB_104cf7ae4;
    }
  }
  else if (iVar1 - 0xdU < 2) {
LAB_104cf7ae4:
    puVar8 = PTR_PTR_1126af540;
    func_0x00010bfbed40(PTR_PTR_1126af540);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (iVar1 == 0xb) {
    puVar8 = PTR_PTR_1126af540;
    func_0x00010c2704c0(PTR_PTR_1126af540);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (iVar1 == 0xc) {
    puVar8 = PTR_PTR_1126af540;
    func_0x00010bf5c2e0(PTR_PTR_1126af540);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR_PTR_1126af548;
  _objc_alloc(PTR_PTR_1126af548);
  func_0x00010c0196e0();
  (**(code **)(param_9 + 0x10))(param_9,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(lVar6);
LAB_104cf7b50:
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cf7cc0; end: 104cf8187; -[SCGrpcOneTapLoginAuthenticator _handleV3LoginResponse:error:tempIdentity:username:networkRequestId:onSuccess:onFailure:] */

void FUN_104cf7cc0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (param_3 != 0) {
    func_0x000106b7eca8(param_3);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c0a9100(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126af528;
  func_0x00010bf3ec40(param_4);
  func_0x00010c13bc00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80();
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010bde43c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010be506c0(param_1);
    (**(code **)(param_9 + 0x10))(param_9,lVar3);
    goto code_r0x000104cf7f1c;
  }
  uVar4 = param_3;
  func_0x00010bf98a00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfe4e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c252ee0();
  puVar11 = PTR_PTR_1126af540;
  switch(uVar4 & 0xffffffff) {
  case 0:
  case 6:
  case 8:
  case 10:
  case 0xd:
  case 0xe:
LAB_104cf7e9c:
    func_0x00010bfbed40(PTR_PTR_1126af540);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 1:
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126af528;
    func_0x00010bf43e00(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aae80(uVar1);
    _objc_release(puVar11);
    _objc_release(uVar1);
  case 2:
  case 3:
  case 4:
  case 7:
  case 9:
    puVar11 = PTR_PTR_1126af360;
    _objc_alloc(PTR_PTR_1126af360);
    uVar4 = param_3;
    func_0x000106b786d0(param_3,param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010bf1faa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03fca0(puVar11);
    _objc_release(uVar7);
    _objc_release(uVar4);
    (**(code **)(param_8 + 0x10))(param_8,puVar11);
    _objc_release(puVar11);
    _objc_release(uVar5);
    goto code_r0x000104cf7f1c;
  case 5:
    uVar4 = param_3;
    func_0x00010beed540();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bfe4e60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010beed540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06c4e0();
    uVar9 = param_3;
    func_0x00010beed540();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf06800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed560(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar4);
    break;
  case 0xb:
    func_0x00010c2704c0(PTR_PTR_1126af540);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xc:
    func_0x00010bf5c2e0(PTR_PTR_1126af540);
    _objc_retainAutoreleasedReturnValue();
    break;
  default:
    if ((int)uVar4 == -0x4524111) goto LAB_104cf7e9c;
    puVar11 = (undefined *)0x0;
  }
  puVar6 = PTR_PTR_1126af548;
  _objc_alloc(PTR_PTR_1126af548);
  func_0x00010c0196e0();
  func_0x00010be506c0(param_1);
  (**(code **)(param_9 + 0x10))(param_9,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar11);
  _objc_release(uVar5);
code_r0x000104cf7f1c:
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cf8188; end: 104cf843f; -[SCGrpcOneTapLoginAuthenticator _logAuthenticationFailureReason:loginError:] */

void FUN_104cf8188(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0b3f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x3032000000;
    pcStack_58 = FUN_104cf8994;
    uStack_50 = 0x104cf89a4;
    uStack_48 = 0;
    func_0x00010c0bd200(lVar1);
    uVar3 = puStack_68[5];
    _objc_retain(uVar3);
    __Block_object_dispose(&uStack_70,8);
    _objc_release(uStack_48);
  }
  _objc_release(lVar1);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab6e0();
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 104cf8440; end: 104cf84a7; -[SCGrpcOneTapLoginAuthenticator _logJanusRespone:status:grpcStatus:] */

void FUN_104cf8440(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a9100();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cf84a8; end: 104cf8657; -[SCGrpcOneTapLoginAuthenticator _computeLogInErrorFromError:isEmptyResponse:protoStatusCode:] */

void FUN_104cf84a8(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06f000();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bf3ec40();
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (uVar2 == 0) goto LAB_104cf8578;
    func_0x000108b9aabc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40();
    func_0x00010c14de00(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126af540;
    func_0x00010bf48c00(PTR_PTR_1126af540,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_release(uVar1);
LAB_104cf8578:
    if (((param_4 & 1) == 0) && (uVar1 = param_3, func_0x00010bf3ec40(), uVar1 == 0)) {
      puVar5 = (undefined *)0x0;
      goto LAB_104cf862c;
    }
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000108b9aad4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40();
    func_0x00010c14de00(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126af540;
    func_0x00010bfbed40(PTR_PTR_1126af540,param_2,puVar3,0);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR_PTR_1126af548;
  _objc_alloc(PTR_PTR_1126af548);
  uVar2 = param_3;
  func_0x00010bf3ec40(param_3);
  func_0x00010c0196e0(puVar5,param_2,uVar2,param_5,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_104cf862c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104cf8658; end: 104cf865b; -[SCGrpcOneTapLoginAuthenticator _prepareRequestForEndpoint:networkRequestId:completion:] */

void FUN_104cf8658(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be79030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__prepareRequestConcurrentlytForE_11257bda8);
  return;
}



/* Entry: 104cf865c; end: 104cf8993; -[SCGrpcOneTapLoginAuthenticator _prepareRequestConcurrentlytForEndpoint:networkRequestId:completion:] */

void FUN_104cf865c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  uVar2 = param_5;
  _objc_retain();
  _dispatch_group_create();
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae2e0();
  _objc_release(uVar3);
  _dispatch_group_enter(uVar2);
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_104cf8994;
  uStack_88 = 0x104cf89a4;
  uStack_80 = 0;
  puStack_a0 = &uStack_a8;
  _objc_initWeak(auStack_b0,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_104cf89ac;
  puStack_e8 = &UNK_110849c80;
  _objc_copyWeak(auStack_c0,auStack_b0);
  lStack_e0 = param_1;
  puStack_c8 = &uStack_a8;
  uStack_b8 = param_3;
  _objc_retain(param_4);
  uStack_d8 = param_4;
  uStack_d0 = uVar2;
  func_0x00010bfa6480(uVar3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae2e0();
  _objc_release(uVar3);
  _dispatch_group_enter(uVar2);
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_104cf8994;
  uStack_110 = 0x104cf89a4;
  uStack_108 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  puStack_180 = puVar1;
  uStack_178 = 0xc2000000;
  uStack_170 = 0x104cf8a50;
  puStack_168 = &UNK_110849c80;
  puStack_128 = &uStack_130;
  _objc_copyWeak(auStack_140,auStack_b0);
  lStack_160 = param_1;
  puStack_148 = &uStack_130;
  uStack_138 = param_3;
  _objc_retain(param_4);
  uStack_158 = param_4;
  uStack_150 = uVar2;
  func_0x00010bf46540(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_1b8 = puVar1;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_104cf8af4;
  puStack_1a0 = &UNK_110849cb0;
  puStack_190 = &uStack_a8;
  puStack_188 = &uStack_130;
  uStack_198 = param_5;
  _objc_retain(param_5);
  func_0x000100bc0718(uVar2,uVar3,&puStack_1b8);
  _objc_release(uVar3);
  _objc_release(uStack_198);
  _objc_release(uStack_158);
  _objc_destroyWeak(auStack_140);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(uStack_108);
  _objc_release(uStack_d8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 104cf8994; end: 104cf89ab;  */

void FUN_104cf8994(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104cf89ac; end: 104cf8af3;  */

void FUN_104cf89ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_2;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ae2e0();
    _objc_release(uVar2);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104cf8af4; end: 104cf8b17;  */

void FUN_104cf8af4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104cf8b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  return;
}



/* Entry: 104cf8b18; end: 104cf8b63;  */

void FUN_104cf8b18(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  return;
}



/* Entry: 104cf8b64; end: 104cf8c53; -[SCGrpcOneTapLoginAuthenticator .cxx_destruct] */

void FUN_104cf8b64(long param_1)

{
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



/* Entry: 104cf8c54; end: 104cf8ddb;  */

void FUN_104cf8c54(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110daf318;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cf8ddc; end: 104cf93af; -[SCOneTapLoginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cf8ddc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
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
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104cf93b0;
  puStack_90 = &UNK_110849ce0;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + _DAT_112710f2c);
  *(undefined **)(param_1 + _DAT_112710f2c) = puVar1;
  _objc_release(uVar21);
  puVar2 = PTR_PTR_1126af000;
  _objc_alloc();
  lVar3 = param_1 + _DAT_112710f30;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c2970e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112710f34;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf9c540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffef00();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar7 = PTR_PTR_1126af550;
  _objc_alloc();
  lVar22 = (long)_DAT_112710f38;
  lVar3 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar8 = lVar3;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112710f3c;
  _objc_loadWeakRetained();
  lVar9 = lVar5;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112710f40;
  _objc_loadWeakRetained();
  lVar10 = lVar4;
  func_0x00010bf70040();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112710f58;
  _objc_loadWeakRetained();
  lVar11 = lVar6;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112710f5c;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = (long)_DAT_112710f60;
  lVar14 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c0b3f20();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112710f64;
  _objc_loadWeakRetained();
  lVar16 = lVar24;
  func_0x00010bf118c0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112710f68;
  _objc_loadWeakRetained();
  func_0x00010c056560();
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar24);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar8);
  _objc_release(lVar3);
  puVar18 = PTR_PTR_1126aeb48;
  _objc_alloc();
  func_0x00010c0404c0();
  puVar1 = PTR_PTR_1126ae720;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x104cf93f0;
  puStack_b8 = &UNK_110849d10;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126af558;
  _objc_alloc();
  lVar22 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar6 = lVar22;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112710f6c;
  _objc_loadWeakRetained();
  lVar12 = lVar3;
  func_0x00010c0b43e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112710f70;
  _objc_loadWeakRetained();
  lVar14 = lVar5;
  func_0x00010c0b4020();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + lVar23;
  _objc_loadWeakRetained();
  lVar4 = lVar23;
  func_0x00010c0b3f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040580();
  lVar24 = (long)_DAT_112710f74;
  uVar21 = *(undefined8 *)(param_1 + lVar24);
  *(undefined **)(param_1 + lVar24) = puVar20;
  _objc_release(uVar21);
  _objc_release(lVar4);
  _objc_release(lVar23);
  _objc_release(lVar14);
  _objc_release(lVar5);
  _objc_release(lVar12);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar22);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar24));
  _objc_release(puVar19);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar18);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 104cf93b0; end: 104cf946f;  */

void FUN_104cf93b0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be6cbe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104cf9470; end: 104cf98b3; -[SCOneTapLoginEntryPoint _oneTapLoginAuthenticator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cf9470(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
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
  undefined *puVar25;
  undefined *puVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  
  lVar34 = (long)_DAT_112710f5c;
  lVar1 = param_1 + lVar34;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106bfd7d0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126af560;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112710f78;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c0e86e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_112710f7c;
  _objc_loadWeakRetained();
  lVar6 = lVar2;
  func_0x00010540bb44();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126af568;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112710f80;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bfe5f40();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112710f84;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bfac320();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112710f88;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c0b42c0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112710f8c;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf10d00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112710f90;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c105dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_112710f94;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + lVar34;
  _objc_loadWeakRetained();
  lVar20 = lVar34;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112710f6c;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010c0b43e0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112710fbc;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010bf1cd40();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = (undefined *)(param_1 + _DAT_112710f98);
  _objc_loadWeakRetained();
  puVar26 = puVar25;
  if (puVar25 == (undefined *)0x0) {
    puVar26 = PTR_PTR_1126af570;
    _objc_opt_new();
  }
  lVar27 = param_1 + _DAT_112710f9c;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010c119b40();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_112710fa0;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010c0d7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + _DAT_112710f40;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010bf70040();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112710fa4;
  _objc_loadWeakRetained();
  lVar33 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c9c0();
  _objc_release(lVar33);
  _objc_release(param_1);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  if (puVar25 == (undefined *)0x0) {
    _objc_release(puVar26);
  }
  _objc_release(puVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar34);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104cf98b4; end: 104cf9987; -[SCOneTapLoginEntryPoint _oneTapLoginProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cf98b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126af578;
  _objc_alloc(PTR_PTR_1126af578);
  lVar2 = param_1 + _DAT_112710f78;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0e86e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112710fa8;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010bf4c500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02c9a0(puVar1,param_2,lVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cf9988; end: 104cf9ba7; -[SCOneTapLoginEntryPoint _oneTapLoginLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cf9988(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  long lVar14;
  
  puVar1 = PTR_PTR_1126af580;
  _objc_alloc();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112710fb8;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar10;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112710fac;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf10be0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112710fb4;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar11;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_112710f8c;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar12;
  func_0x00010bf10d00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
    lVar13 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112710f88;
    _objc_loadWeakRetained(lVar14);
    lVar13 = param_1 + _DAT_112710fc0;
    _objc_loadWeakRetained(lVar13);
  }
  param_1 = param_1 + _DAT_112710fb0;
  _objc_loadWeakRetained();
  lVar7 = param_1;
  func_0x00010bf70800();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bdc1fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c820(puVar1,param_2,lVar2,lVar4,lVar5,lVar6,lVar14,lVar13,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar13);
  _objc_release(lVar14);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cf9ba8; end: 104cf9dab; -[SCOneTapLoginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cf9ba8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710f54,0);
  _objc_storeStrong(param_1 + _DAT_112710f50,0);
  _objc_storeStrong(param_1 + _DAT_112710f4c,0);
  _objc_storeStrong(param_1 + _DAT_112710f48,0);
  _objc_storeStrong(param_1 + _DAT_112710f44,0);
  _objc_destroyWeak(param_1 + _DAT_112710f68);
  _objc_destroyWeak(param_1 + _DAT_112710f64);
  _objc_destroyWeak(param_1 + _DAT_112710f60);
  _objc_destroyWeak(param_1 + _DAT_112710f34);
  _objc_destroyWeak(param_1 + _DAT_112710f30);
  _objc_destroyWeak(param_1 + _DAT_112710fa4);
  _objc_destroyWeak(param_1 + _DAT_112710f9c);
  _objc_destroyWeak(param_1 + _DAT_112710fa0);
  _objc_destroyWeak(param_1 + _DAT_112710fc0);
  _objc_destroyWeak(param_1 + _DAT_112710fac);
  _objc_destroyWeak(param_1 + _DAT_112710fbc);
  _objc_destroyWeak(param_1 + _DAT_112710f8c);
  _objc_destroyWeak(param_1 + _DAT_112710f94);
  _objc_destroyWeak(param_1 + _DAT_112710f90);
  _objc_destroyWeak(param_1 + _DAT_112710f98);
  _objc_destroyWeak(param_1 + _DAT_112710fa8);
  _objc_destroyWeak(param_1 + _DAT_112710f78);
  _objc_destroyWeak(param_1 + _DAT_112710f5c);
  _objc_destroyWeak(param_1 + _DAT_112710f70);
  _objc_destroyWeak(param_1 + _DAT_112710f84);
  _objc_destroyWeak(param_1 + _DAT_112710fb8);
  _objc_destroyWeak(param_1 + _DAT_112710fb4);
  _objc_destroyWeak(param_1 + _DAT_112710f88);
  _objc_destroyWeak(param_1 + _DAT_112710fb0);
  _objc_destroyWeak(param_1 + _DAT_112710f40);
  _objc_destroyWeak(param_1 + _DAT_112710f6c);
  _objc_destroyWeak(param_1 + _DAT_112710f80);
  _objc_destroyWeak(param_1 + _DAT_112710f7c);
  _objc_destroyWeak(param_1 + _DAT_112710f3c);
  _objc_destroyWeak(param_1 + _DAT_112710f58);
  _objc_destroyWeak(param_1 + _DAT_112710f38);
  _objc_storeStrong(param_1 + _DAT_112710f74,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112710f2c,0);
  return;
}



/* Entry: 104cf9dac; end: 104cfa01b; -[SCOneTapLoginLoggerImpl initWithUserNotTrackedLogger:authenticationFlowLogger:grapheneRegistry:authenticationSessionInfoProvider:logInSessionServices:installServices:longClientId:] */

undefined1 *
FUN_104cf9dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
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
  puStack_68 = PTR_PTR_1126e3ce0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    func_0x00010c0b42c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfc74a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar4;
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    func_0x00010c089460();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bfd8b00();
    *(char *)((long)puVar1 + 0x48) = (char)uVar4;
    _objc_release(uVar2);
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar6);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cfa01c; end: 104cfa0d3; -[SCOneTapLoginLoggerImpl logOneTapLoginLandingPageViewWithAccountsCount:] */

void FUN_104cfa01c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104cfa0d4; end: 104cfa107;  */

void FUN_104cfa0d4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be56a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cfa108; end: 104cfa1bf; -[SCOneTapLoginLoggerImpl logOneTapLoginLandingPageAction:] */

void FUN_104cfa108(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104cfa1c0; end: 104cfa1f7;  */

void FUN_104cfa1c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be56a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cfa1f8; end: 104cfa2b3; -[SCOneTapLoginLoggerImpl logOneTapLoginLandingPageAction:position:] */

void FUN_104cfa1f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_50,auStack_38);
  uStack_48 = param_3;
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104cfa2b4; end: 104cfa2e7;  */

void FUN_104cfa2b4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be56a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cfa2e8; end: 104cfa42f; -[SCOneTapLoginLoggerImpl logOneTapLoginLoginAttemptPosition:userId:username:optInSource:networkRequestId:] */

void FUN_104cfa2e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_68 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_60 = param_6;
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104cfa430; end: 104cfa46b;  */

void FUN_104cfa430(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be56a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cfa46c; end: 104cfa5b3; -[SCOneTapLoginLoggerImpl logOneTapLoginLoginFailurePosition:userId:username:optInSource:networkRequestId:] */

void FUN_104cfa46c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_68 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_60 = param_6;
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104cfa5b4; end: 104cfa5ef;  */

void FUN_104cfa5b4(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be56a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cfa5f0; end: 104cfa703; -[SCOneTapLoginLoggerImpl logOneTapLoginFailureDialogAction:position:userId:username:] */

void FUN_104cfa5f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_3;
  uStack_50 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 104cfa704; end: 104cfa73b;  */

void FUN_104cfa704(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be569e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cfa73c; end: 104cfa81b; -[SCOneTapLoginLoggerImpl logOneTapLoginAuthenticateFailureWithReason:details:] */

void FUN_104cfa73c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 104cfa81c; end: 104cfa853;  */

void FUN_104cfa81c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be569c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cfa854; end: 104cfa897; -[SCOneTapLoginLoggerImpl logOneTapLoginAuthenticateDuplicateReq] */

void FUN_104cfa854(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af588;
  func_0x00010c0ee000(PTR_PTR_1126af588);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be541e0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cfa898; end: 104cfa9bb; -[SCOneTapLoginLoggerImpl logRemoveOneTapLoginUserDialog:position:userId:username:optInSource:] */

void FUN_104cfa898(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_78,auStack_58);
  uStack_70 = param_3;
  uStack_68 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_60 = param_7;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 104cfa9bc; end: 104cfa9f7;  */

void FUN_104cfa9bc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be57a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cfa9f8; end: 104cfaaaf; -[SCOneTapLoginLoggerImpl logJanusRequest:] */

void FUN_104cfa9f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af590;
  _objc_retain(param_3);
  func_0x00010c0853a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c085380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104cfaab0; end: 104cfac37; -[SCOneTapLoginLoggerImpl logJanusResponse:status:grpcStatus:] */

void FUN_104cfaab0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126af590;
  _objc_retain(param_3);
  func_0x00010c0853c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf4d8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daf518,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c085380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}


