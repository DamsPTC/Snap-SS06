/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105245ccc; end: 105245d07;  */

void FUN_105245ccc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfea560();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 105245d08; end: 105245ddb; -[SCGallerySnapsTabSpectaclesImportSectionController spectaclesImportCellDidTapCancleButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105245d08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_1127205d4;
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c249020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c249020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b8300();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfb0fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e160(uVar2,param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105245ddc; end: 105245de7; -[SCGallerySnapsTabSpectaclesImportSectionController spectaclesImportCellDidHideToolTip:] */

void FUN_105245ddc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c283670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateAnimated_completion__11267e7c0,1,0);
  return;
}



/* Entry: 105245de8; end: 105245faf; -[SCGallerySnapsTabSpectaclesImportSectionController spectaclesImportCell:willDisplayWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105245de8(long param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar4 = param_4;
  func_0x00010c282b80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  if (lVar8 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    func_0x00010c282b80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar7;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        uVar2 = *(undefined8 *)(lVar10 * 8);
        func_0x00010bf4bc60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar1);
        _objc_release(uVar2);
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = lVar7;
      func_0x00010bf52a60();
    }
    _objc_release(lVar7);
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127205d4);
    func_0x00010bf027a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c0b0280();
    param_3 = SUB81(puVar5,0);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar10 = (long)_DAT_1127205dc;
    *(undefined1 *)(param_4 + lVar10) = param_3;
    lVar4 = param_4;
    func_0x00010bf3fd40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c29fc80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar6;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        func_0x000107e8846c(*(undefined8 *)(lVar9 * 8),*(undefined1 *)(param_4 + lVar10));
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      return;
    }
    ___stack_chk_fail();
    lVar8 = (long)_DAT_1127205e4;
    lVar4 = *(long *)(lVar6 + lVar8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(lVar6 + lVar8));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    return;
  }
  return;
}



/* Entry: 105245fb0; end: 1052460db; -[SCGallerySnapsTabSpectaclesImportSectionController setSelectMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105245fb0(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = (long)_DAT_1127205dc;
  *(undefined1 *)(param_1 + lVar5) = param_3;
  lVar2 = param_1;
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c29fc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(lVar1);
      }
      func_0x000107e8846c(*(undefined8 *)(lVar6 * 8),*(undefined1 *)(param_1 + lVar5));
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = (long)_DAT_1127205e4;
  lVar2 = *(long *)(lVar1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(lVar1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1052460dc; end: 105246133; -[SCGallerySnapsTabSpectaclesImportSectionController spectaclesContentPageExited] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052460dc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127205e4;
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



/* Entry: 105246134; end: 105246143; -[SCGallerySnapsTabSpectaclesImportSectionController selectMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_105246134(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127205dc);
}



/* Entry: 105246144; end: 1052461c3; -[SCGallerySnapsTabSpectaclesImportSectionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105246144(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127205ec,0);
  _objc_storeStrong(param_1 + _DAT_1127205e4,0);
  _objc_storeStrong(param_1 + _DAT_1127205e0,0);
  _objc_storeStrong(param_1 + _DAT_1127205e8,0);
  _objc_storeStrong(param_1 + _DAT_1127205d8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127205d4,0);
  return;
}



/* Entry: 1052461c4; end: 10524780f; -[SCSpectaclesImportCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1052461c4(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_198 = PTR_PTR_1126e71f0;
  puVar21 = &uStack_1a0;
  uStack_1a0 = param_1;
  _objc_msgSendSuper2(puVar21,PTR_s_initWithFrame__1125e2948);
  puVar1 = (undefined *)0x0;
  if (puVar21 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar21);
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar31 = (long)_DAT_1127205f0;
    uVar22 = *(undefined8 *)((long)puVar21 + lVar31);
    *(undefined **)((long)puVar21 + lVar31) = puVar1;
    _objc_release(uVar22);
    func_0x00010c21e900(*(undefined8 *)((long)puVar21 + lVar31));
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c13a140(0x4022000000000000,0x4022000000000000,0x4022000000000000,0x4022000000000000)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar21 + lVar31));
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    uVar22 = *(undefined8 *)((long)puVar21 + lVar31);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(uVar22);
    _objc_release(puVar1);
    uVar22 = *(undefined8 *)((long)puVar21 + lVar31);
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(uVar22);
    _objc_release(puVar1);
    puVar4 = puVar21;
    func_0x00010bf4dce0(puVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc_init();
    lVar29 = (long)_DAT_1127205f4;
    uVar22 = *(undefined8 *)((long)puVar21 + lVar29);
    *(undefined **)((long)puVar21 + lVar29) = puVar1;
    _objc_release(uVar22);
    func_0x00010befbb60(*(undefined8 *)((long)puVar21 + lVar31));
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar23 = (long)_DAT_1127205f8;
    uVar22 = *(undefined8 *)((long)puVar21 + lVar23);
    *(undefined **)((long)puVar21 + lVar23) = puVar1;
    _objc_release(uVar22);
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar22 = *(undefined8 *)((long)puVar21 + lVar23);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(uVar22);
    _objc_release(puVar1);
    func_0x00010befbb60(*(undefined8 *)((long)puVar21 + lVar29));
    puVar1 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar24 = (long)_DAT_1127205fc;
    uVar22 = *(undefined8 *)((long)puVar21 + lVar24);
    *(undefined **)((long)puVar21 + lVar24) = puVar1;
    _objc_release(uVar22);
    func_0x00010c1a8560(*(undefined8 *)((long)puVar21 + lVar24));
    func_0x00010befbb60(*(undefined8 *)((long)puVar21 + lVar29));
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar27 = (long)_DAT_112720600;
    uVar22 = *(undefined8 *)((long)puVar21 + lVar27);
    *(undefined **)((long)puVar21 + lVar27) = puVar1;
    _objc_release(uVar22);
    func_0x00010c213040(*(undefined8 *)((long)puVar21 + lVar27));
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar21 + lVar27));
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar21 + lVar27));
    _objc_release(puVar1);
    func_0x00010befbb60(*(undefined8 *)((long)puVar21 + lVar29));
    puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc_init();
    lVar30 = (long)_DAT_112720604;
    uVar22 = *(undefined8 *)((long)puVar21 + lVar30);
    *(undefined **)((long)puVar21 + lVar30) = puVar1;
    _objc_release(uVar22);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar21 + lVar30));
    uVar22 = *(undefined8 *)((long)puVar21 + lVar30);
    func_0x00010c271420(uVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    _objc_release(uVar22);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = *(undefined8 *)((long)puVar21 + lVar30);
    func_0x00010c271420(uVar22);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar22);
    _objc_release(puVar1);
    uVar22 = *(undefined8 *)((long)puVar21 + lVar30);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar22);
    _objc_release(puVar1);
    func_0x00010befbd60(*(undefined8 *)((long)puVar21 + lVar30));
    func_0x00010befbb60(*(undefined8 *)((long)puVar21 + lVar29));
    puVar1 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar25 = (long)_DAT_112720608;
    uVar22 = *(undefined8 *)((long)puVar21 + lVar25);
    *(undefined **)((long)puVar21 + lVar25) = puVar1;
    _objc_release(uVar22);
    func_0x00010c1a8560(*(undefined8 *)((long)puVar21 + lVar25));
    func_0x00010befbb60(*(undefined8 *)((long)puVar21 + lVar29));
    puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
    _objc_alloc_init();
    func_0x00010c1f7ac0();
    puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    uVar32 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar33 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar34 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar35 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c014040(uVar32,uVar33,uVar34,uVar35);
    lVar28 = (long)_DAT_11272060c;
    uVar22 = *(undefined8 *)((long)puVar21 + lVar28);
    *(undefined **)((long)puVar21 + lVar28) = puVar2;
    _objc_release(uVar22);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar21 + lVar28));
    _objc_release(puVar2);
    func_0x00010c1f7e20(*(undefined8 *)((long)puVar21 + lVar28));
    func_0x00010c2025c0(*(undefined8 *)((long)puVar21 + lVar28));
    func_0x00010befbb60(*(undefined8 *)((long)puVar21 + lVar31));
    puVar3 = PTR_PTR_1126b6940;
    _objc_alloc();
    puVar2 = PTR_PTR_1126b6948;
    _objc_opt_new();
    func_0x00010c059900();
    lVar26 = (long)_DAT_112720610;
    uVar22 = *(undefined8 *)((long)puVar21 + lVar26);
    *(undefined **)((long)puVar21 + lVar26) = puVar3;
    _objc_release(uVar22);
    _objc_release(puVar2);
    func_0x00010c189840(*(undefined8 *)((long)puVar21 + lVar26));
    func_0x00010c17e6a0(*(undefined8 *)((long)puVar21 + lVar26));
    puVar2 = PTR_PTR_1126b6950;
    _objc_alloc();
    func_0x00010c013de0(uVar32,uVar33,uVar34,uVar35);
    lVar26 = (long)_DAT_112720614;
    uVar22 = *(undefined8 *)((long)puVar21 + lVar26);
    *(undefined **)((long)puVar21 + lVar26) = puVar2;
    _objc_release(uVar22);
    ppuVar5 = &PTR____CFConstantStringClassReference_110dcc5d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)((long)puVar21 + lVar26));
    _objc_release(ppuVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar21 + lVar26));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2133e0(*(undefined8 *)((long)puVar21 + lVar26));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar21 + lVar26));
    _objc_release(puVar2);
    func_0x00010c21a1e0(0xc034000000000000,*(undefined8 *)((long)puVar21 + lVar26));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21a180(*(undefined8 *)((long)puVar21 + lVar26));
    _objc_release(puVar2);
    func_0x000100b74f58(0,0,*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),PTR_PTR_1126b08d8,
                        *(undefined8 *)((long)puVar21 + lVar26),0);
    func_0x00010befbb60(*(undefined8 *)((long)puVar21 + lVar31));
    func_0x00010c21e900(*(undefined8 *)((long)puVar21 + lVar26));
    puVar6 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar21 + lVar26));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar21 + lVar26));
    func_0x00010c219b60(*(undefined8 *)((long)puVar21 + lVar31));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar35 = *(undefined8 *)((long)puVar21 + lVar31);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar21;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar35;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar22;
    uVar9 = *(undefined8 *)((long)puVar21 + lVar31);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar21;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar34;
    uVar11 = *(undefined8 *)((long)puVar21 + lVar31);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar21;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar11;
    func_0x00010bf493c0(0x4008000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar33;
    uVar14 = *(undefined8 *)((long)puVar21 + lVar31);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar21;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar32;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar32);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(uVar14);
    _objc_release(uVar33);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar34);
    _objc_release(puVar4);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar22);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar35);
    func_0x00010c219b60(*(undefined8 *)((long)puVar21 + lVar29));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar35 = *(undefined8 *)((long)puVar21 + lVar29);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar21 + lVar31);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar35;
    func_0x00010bf493c0(0x401c000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar22;
    uVar11 = *(undefined8 *)((long)puVar21 + lVar29);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)puVar21 + lVar31);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar11;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar34;
    uVar17 = *(undefined8 *)((long)puVar21 + lVar29);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar21 + lVar31);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar17;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar33;
    uVar19 = *(undefined8 *)((long)puVar21 + lVar29);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar19;
    func_0x00010bf49420(0x403e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b8 = uVar32;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar32);
    _objc_release(uVar19);
    _objc_release(uVar33);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar34);
    _objc_release(uVar14);
    _objc_release(uVar11);
    _objc_release(uVar22);
    _objc_release(uVar9);
    _objc_release(uVar35);
    func_0x00010c219b60(*(undefined8 *)((long)puVar21 + lVar23));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar35 = *(undefined8 *)((long)puVar21 + lVar23);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar35;
    func_0x00010bf49420(0x4026000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar34;
    uVar9 = *(undefined8 *)((long)puVar21 + lVar23);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar9;
    func_0x00010bf49420(0x4026000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar22;
    uVar11 = *(undefined8 *)((long)puVar21 + lVar23);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)puVar21 + lVar29);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar11;
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar33;
    uVar17 = *(undefined8 *)((long)puVar21 + lVar23);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar21 + lVar29);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_d8 = uVar32;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar32);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar33);
    _objc_release(uVar14);
    _objc_release(uVar11);
    _objc_release(uVar22);
    _objc_release(uVar9);
    _objc_release(uVar34);
    _objc_release(uVar35);
    func_0x00010c219b60(*(undefined8 *)((long)puVar21 + lVar24));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar35 = *(undefined8 *)((long)puVar21 + lVar24);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar21 + lVar23);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar35;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = uVar34;
    uVar11 = *(undefined8 *)((long)puVar21 + lVar24);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)puVar21 + lVar23);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = uVar22;
    uVar17 = *(undefined8 *)((long)puVar21 + lVar24);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar21 + lVar23);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uVar33;
    uVar19 = *(undefined8 *)((long)puVar21 + lVar24);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)((long)puVar21 + lVar23);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar19;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_f8 = uVar32;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar32);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar33);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar22);
    _objc_release(uVar14);
    _objc_release(uVar11);
    _objc_release(uVar34);
    _objc_release(uVar9);
    _objc_release(uVar35);
    func_0x00010c219b60(*(undefined8 *)((long)puVar21 + lVar30));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar34 = *(undefined8 *)((long)puVar21 + lVar30);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = *(undefined8 *)((long)puVar21 + lVar29);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar34;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = uVar33;
    uVar9 = *(undefined8 *)((long)puVar21 + lVar30);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar21 + lVar29);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_120 = uVar32;
    uVar14 = *(undefined8 *)((long)puVar21 + lVar30);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)((long)puVar21 + lVar29);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar14;
    func_0x00010bf493c0(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_118 = uVar22;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar22);
    _objc_release(uVar17);
    _objc_release(uVar14);
    _objc_release(uVar32);
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar33);
    _objc_release(uVar35);
    _objc_release(uVar34);
    func_0x00010c219b60(*(undefined8 *)((long)puVar21 + lVar25));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar34 = *(undefined8 *)((long)puVar21 + lVar25);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = *(undefined8 *)((long)puVar21 + lVar30);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar34;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = uVar22;
    uVar9 = *(undefined8 *)((long)puVar21 + lVar25);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar21 + lVar30);
    func_0x00010bf1ff80(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = uVar33;
    uVar14 = *(undefined8 *)((long)puVar21 + lVar25);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)((long)puVar21 + lVar30);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_130 = uVar32;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar32);
    _objc_release(uVar17);
    _objc_release(uVar14);
    _objc_release(uVar33);
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar22);
    _objc_release(uVar35);
    _objc_release(uVar34);
    func_0x00010c219b60(*(undefined8 *)((long)puVar21 + lVar27));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar34 = *(undefined8 *)((long)puVar21 + lVar27);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = *(undefined8 *)((long)puVar21 + lVar23);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar34;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_158 = uVar33;
    uVar9 = *(undefined8 *)((long)puVar21 + lVar27);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar21 + lVar29);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_150 = uVar32;
    uVar14 = *(undefined8 *)((long)puVar21 + lVar27);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)((long)puVar21 + lVar30);
    func_0x00010c08de00(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar14;
    func_0x00010bf49520(0xc018000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_148 = uVar22;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar22);
    _objc_release(uVar17);
    _objc_release(uVar14);
    _objc_release(uVar32);
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar33);
    _objc_release(uVar35);
    _objc_release(uVar34);
    func_0x00010c219b60(*(undefined8 *)((long)puVar21 + lVar28));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar35 = *(undefined8 *)((long)puVar21 + lVar28);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar21 + lVar29);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar34 = uVar35;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_178 = uVar34;
    uVar11 = *(undefined8 *)((long)puVar21 + lVar28);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)puVar21 + lVar29);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar11;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_170 = uVar33;
    uVar17 = *(undefined8 *)((long)puVar21 + lVar28);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar21 + lVar29);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar17;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_168 = uVar32;
    uVar19 = *(undefined8 *)((long)puVar21 + lVar28);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar19;
    func_0x00010bf49420(0x4041800000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_160 = uVar22;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar22);
    _objc_release(uVar19);
    _objc_release(uVar32);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar33);
    _objc_release(uVar14);
    _objc_release(uVar11);
    _objc_release(uVar34);
    _objc_release(uVar9);
    _objc_release(uVar35);
    func_0x00010c219b60(*(undefined8 *)((long)puVar21 + lVar26));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar34 = *(undefined8 *)((long)puVar21 + lVar26);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = *(undefined8 *)((long)puVar21 + lVar30);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar34;
    func_0x00010bf493c0(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_190 = uVar22;
    uVar9 = *(undefined8 *)((long)puVar21 + lVar26);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar21 + lVar29);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar33 = uVar9;
    func_0x00010bf493c0(0x4008000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_188 = uVar33;
    uVar14 = *(undefined8 *)((long)puVar21 + lVar26);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar32 = uVar14;
    func_0x00010bf49420(0x403d000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_180 = uVar32;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar3;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar32);
    _objc_release(uVar14);
    _objc_release(uVar33);
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar22);
    _objc_release(uVar35);
    _objc_release(uVar34);
    _objc_release(puVar6);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar21;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  puVar21 = *(undefined8 **)(puVar1 + _DAT_112720618);
  *(undefined **)(puVar1 + _DAT_112720618) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar21);
  return puVar21;
}



/* Entry: 105247810; end: 105247847; -[SCSpectaclesImportCell setupWithLegacySpectaclesTooltipsService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105247810(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112720618);
  *(undefined8 *)(param_1 + _DAT_112720618) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105247848; end: 1052478eb; -[SCSpectaclesImportCell _hideHdOnlyTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105247848(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11272061c;
  uVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112720618);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c190420();
    _objc_release(uVar3);
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    func_0x00010c248d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1052478ec; end: 10524792f; -[SCSpectaclesImportCell _didTapBackgroundView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052478ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112720620);
  func_0x00010beee1a0();
  if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdfedf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didPressActionButton_11255d518);
    return;
  }
  return;
}



/* Entry: 105247930; end: 105247a43; -[SCSpectaclesImportCell _didPressActionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105247930(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112720620;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010beee1a0();
  if (lVar1 == 1) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112720618);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c190420();
    _objc_release(uVar2);
    lVar1 = (long)_DAT_11272061c;
    uVar3 = param_1 + lVar1;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      param_1 = param_1 + lVar1;
      _objc_loadWeakRetained(param_1);
      func_0x00010c248d40();
LAB_105247a20:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + lVar5);
    func_0x00010beee1a0();
    if (lVar1 == 2) {
      lVar1 = (long)_DAT_11272061c;
      uVar3 = param_1 + lVar1;
      _objc_loadWeakRetained();
      uVar4 = uVar3;
      _objc_opt_respondsToSelector();
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) {
        param_1 = param_1 + lVar1;
        _objc_loadWeakRetained(param_1);
        func_0x00010c248d20();
        goto LAB_105247a20;
      }
    }
  }
  return;
}



/* Entry: 105247a44; end: 105247a87; +[SCSpectaclesImportCell heightForViewModel:width:] */

undefined8 FUN_105247a44(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010c2534e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = 0x4057000000000000;
  }
  return uVar1;
}



/* Entry: 105247a88; end: 105247ceb; -[SCSpectaclesImportCell bindViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105247a88(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar8 = (long)_DAT_112720620;
  if ((param_3 != 0) &&
     ((uVar2 = *(ulong *)(param_1 + lVar8), uVar2 == 0 ||
      (func_0x00010c071d20(uVar2,param_2,param_3), (uVar2 & 1) == 0)))) {
    lVar5 = param_1 + _DAT_11272061c;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c248ce0();
    _objc_release(lVar5);
  }
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  *(long *)(param_1 + lVar8) = param_3;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c2534e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112720600),param_2,uVar3);
  _objc_release(uVar3);
  iVar1 = (int)*(undefined8 *)(param_1 + lVar8);
  func_0x00010c238140();
  if (iVar1 == 0) {
LAB_105247b58:
    uVar2 = *(ulong *)(param_1 + lVar8);
    func_0x00010c238140();
    if ((uVar2 & 1) == 0) {
      lVar5 = (long)_DAT_1127205fc;
      iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
      func_0x00010c06c0e0();
      if (iVar1 != 0) {
        func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar5));
      }
    }
  }
  else {
    lVar5 = (long)_DAT_1127205fc;
    uVar2 = *(ulong *)(param_1 + lVar5);
    func_0x00010c06c0e0();
    if ((uVar2 & 1) != 0) goto LAB_105247b58;
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar5));
  }
  lVar5 = *(long *)(param_1 + lVar8);
  func_0x00010beee1a0();
  if (lVar5 == 3) {
    lVar5 = (long)_DAT_112720608;
    uVar2 = *(ulong *)(param_1 + lVar5);
    func_0x00010c06c0e0();
    if ((uVar2 & 1) != 0) goto LAB_105247bb0;
    func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar5));
    uVar3 = 0xcc;
  }
  else {
LAB_105247bb0:
    lVar5 = *(long *)(param_1 + lVar8);
    func_0x00010beee1a0();
    if (lVar5 == 3) goto LAB_105247c24;
    lVar5 = (long)_DAT_112720608;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
    func_0x00010c06c0e0();
    if (iVar1 == 0) goto LAB_105247c24;
    func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar5));
    uVar3 = 0xce;
  }
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_1 + _DAT_1127205f8),param_2,puVar4);
  _objc_release(puVar4);
LAB_105247c24:
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c238140(uVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_1127205f8),param_2,uVar3);
  lVar5 = *(long *)(param_1 + lVar8);
  func_0x00010beee180(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_112720604;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7),param_2,lVar5 == 0);
  _objc_release(lVar5);
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010beee180(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(uVar6,param_2,uVar3,0);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c2346a0(uVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_112720614),param_2,(uint)uVar3 ^ 1);
  func_0x00010c0f9240(*(undefined8 *)(param_1 + _DAT_112720610),param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105247cec; end: 105247cf3; -[SCSpectaclesImportCell emptyViewForListAdapter:] */

undefined8 FUN_105247cec(void)

{
  return 0;
}



/* Entry: 105247cf4; end: 105247d0f; -[SCSpectaclesImportCell listAdapter:sectionControllerForObject:] */

void FUN_105247cf4(void)

{
  _objc_opt_new(PTR_PTR_1126b6958);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105247d10; end: 105247db3; -[SCSpectaclesImportCell objectsForListAdapter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105247d10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar2 = PTR_PTR_1126b6960;
  _objc_alloc(PTR_PTR_1126b6960);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112720620);
  func_0x00010c282b80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059600(puVar2,param_2,uVar3);
  func_0x00010befa120(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105247db4; end: 105247dd3; -[SCSpectaclesImportCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105247db4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272061c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105247dd4; end: 105247de7; -[SCSpectaclesImportCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105247dd4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272061c,param_3);
  return;
}



/* Entry: 105247de8; end: 105247ed3; -[SCSpectaclesImportCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105247de8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272061c);
  _objc_storeStrong(param_1 + _DAT_112720618,0);
  _objc_storeStrong(param_1 + _DAT_112720610,0);
  _objc_storeStrong(param_1 + _DAT_112720620,0);
  _objc_storeStrong(param_1 + _DAT_112720614,0);
  _objc_storeStrong(param_1 + _DAT_11272060c,0);
  _objc_storeStrong(param_1 + _DAT_112720608,0);
  _objc_storeStrong(param_1 + _DAT_1127205fc,0);
  _objc_storeStrong(param_1 + _DAT_112720604,0);
  _objc_storeStrong(param_1 + _DAT_112720600,0);
  _objc_storeStrong(param_1 + _DAT_1127205f8,0);
  _objc_storeStrong(param_1 + _DAT_1127205f4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127205f0,0);
  return;
}



/* Entry: 105247ed4; end: 105247f57; -[SCSpectaclesImportCellController init] */

undefined1 * FUN_105247ed4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e71f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189840(puVar1);
    func_0x00010c1c82c0(0,puVar1);
    func_0x00010c1c8300(0x4020000000000000,puVar1);
    func_0x00010c1ad960(0,0x4024000000000000,0,0x4024000000000000,puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105247f58; end: 105247fc3; -[SCSpectaclesImportCellController sectionController:viewModelsForObject:] */

void FUN_105247f58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *in_x3;
  
  _objc_retain(in_x3);
  puVar1 = PTR_PTR_1126b6960;
  _objc_opt_class(PTR_PTR_1126b6960);
  puVar2 = in_x3;
  _objc_opt_isKindOfClass(in_x3,puVar1);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = in_x3;
    func_0x00010bf343c0(in_x3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105247fc4; end: 105248033; -[SCSpectaclesImportCellController sectionController:cellForViewModel:atIndex:] */

void FUN_105247fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf3fd40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6968;
  _objc_opt_class(PTR_PTR_1126b6968);
  uVar3 = uVar1;
  func_0x00010bf6e020(uVar1,param_2,puVar2,param_1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105248034; end: 105248043; -[SCSpectaclesImportCellController sectionController:sizeForViewModel:atIndex:] */

void FUN_105248034(void)

{
  return;
}



/* Entry: 105248044; end: 105248187; -[SCSpectaclesImportCellDataSource initWithUntransferredContent:] */

undefined1 * FUN_105248044(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126e7200;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bf529e0();
    if (uVar6 != 0) {
      uVar6 = 0;
      do {
        puVar3 = puVar2;
        func_0x00010bf529e0();
        if ((undefined *)0x1d < puVar3) break;
        if (uVar6 == 0x1d) {
          func_0x00010bf529e0(param_3);
        }
        puVar3 = PTR_PTR_1126b6970;
        _objc_alloc(PTR_PTR_1126b6970);
        uVar4 = param_3;
        func_0x00010c0dfd40(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0632e0(puVar3);
        _objc_release(uVar4);
        func_0x00010befa120(puVar2);
        _objc_release(puVar3);
        uVar6 = uVar6 + 1;
        uVar4 = param_3;
        func_0x00010bf529e0();
      } while (uVar6 < uVar4);
    }
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar5);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105248188; end: 10524819b; -[SCSpectaclesImportCellDataSource diffIdentifier] */

void FUN_105248188(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 10524819c; end: 1052481a3; -[SCSpectaclesImportCellDataSource isEqualToDiffableObject:] */

undefined8 FUN_10524819c(void)

{
  return 1;
}



/* Entry: 1052481a4; end: 1052481ab; -[SCSpectaclesImportCellDataSource cellViewModels] */

undefined8 FUN_1052481a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052481ac; end: 1052481b7; -[SCSpectaclesImportCellDataSource .cxx_destruct] */

void FUN_1052481ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052481b8; end: 1052482c7; -[SCSpectaclesImportCellViewModel initWithUntransferredContent:messageType:actionButtonType:shouldShowToolTip:deviceProductType:] */

undefined1 *
FUN_1052481b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126e7208;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    puVar3 = (undefined1 *)puVar1;
    _objc_opt_class();
    func_0x00010bdc42a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined1 **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    _objc_opt_class();
    func_0x00010bf529e0(param_3);
    func_0x00010bec28c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined1 **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    *(bool *)((long)puVar1 + 8) = param_4 == 2;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052482c8; end: 105248317; +[SCSpectaclesImportCellViewModel _actionButtonTitle:] */

void FUN_1052482c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 2) {
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 1) {
    func_0x00010524af74();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105248318; end: 10524849f; +[SCSpectaclesImportCellViewModel _statusTextForType:untransferredSnapsCount:deviceProductType:] */

void FUN_105248318(undefined *param_1,undefined8 param_2,long param_3,undefined *param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  if (param_3 == 3) {
    if (param_4 == (undefined *)0x1) {
      func_0x00010524af44();
      _objc_retainAutoreleasedReturnValue();
      param_4 = param_1;
      goto LAB_105248484;
    }
    _objc_alloc_init();
    puVar2 = puVar1;
    func_0x00010c1d02e0();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010524af5c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 == 2) {
      if (param_5 == 1) {
        func_0x000109025198();
        _objc_retainAutoreleasedReturnValue();
        param_4 = param_1;
      }
      else if (param_5 == 0) {
        func_0x00010524af8c();
        _objc_retainAutoreleasedReturnValue();
        param_4 = param_1;
      }
      goto LAB_105248484;
    }
    if (param_3 != 1) {
      param_4 = (undefined *)0x0;
      goto LAB_105248484;
    }
    if (param_4 == (undefined *)0x1) {
      FUN_10524af14();
      _objc_retainAutoreleasedReturnValue();
      param_4 = param_1;
      goto LAB_105248484;
    }
    _objc_alloc_init();
    puVar2 = puVar1;
    func_0x00010c1d02e0();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010524af2c();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c25d4c0(puVar1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  param_4 = puVar5;
LAB_105248484:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 1052484a0; end: 1052484b3; -[SCSpectaclesImportCellViewModel diffIdentifier] */

void FUN_1052484a0(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 1052484b4; end: 1052485a3; -[SCSpectaclesImportCellViewModel isEqualToDiffableObject:] */

bool FUN_1052484b4(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = param_3;
  func_0x00010c282b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071b60(uVar5,param_2,lVar3);
  if (((int)uVar5 == 0) ||
     (lVar6 = *(long *)(param_1 + 0x18), lVar4 = param_3, func_0x00010beee1a0(), lVar6 != lVar4)) {
    bVar2 = false;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    lVar4 = param_3;
    func_0x00010c2534e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar5,param_2,lVar4);
    if (((int)uVar5 == 0) ||
       (bVar1 = *(byte *)(param_1 + 8), lVar6 = param_3, func_0x00010c238140(),
       (uint)bVar1 != (uint)lVar6)) {
      bVar2 = false;
    }
    else {
      bVar1 = *(byte *)(param_1 + 9);
      lVar6 = param_3;
      func_0x00010c2346a0(param_3);
      bVar2 = (uint)bVar1 == (uint)lVar6;
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 1052485a4; end: 1052485ab; -[SCSpectaclesImportCellViewModel showLoadingIndicator] */

undefined1 FUN_1052485a4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1052485ac; end: 1052485b3; -[SCSpectaclesImportCellViewModel statusText] */

undefined8 FUN_1052485ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052485b4; end: 1052485bb; -[SCSpectaclesImportCellViewModel actionButtonType] */

undefined8 FUN_1052485b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1052485bc; end: 1052485c3; -[SCSpectaclesImportCellViewModel actionButtonTitle] */

undefined8 FUN_1052485bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1052485c4; end: 1052485cb; -[SCSpectaclesImportCellViewModel untransferredContent] */

undefined8 FUN_1052485c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1052485cc; end: 1052485d3; -[SCSpectaclesImportCellViewModel shouldShowToolTip] */

undefined1 FUN_1052485cc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1052485d4; end: 10524860f; -[SCSpectaclesImportCellViewModel .cxx_destruct] */

void FUN_1052485d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105248610; end: 105248c87; -[SCSpectaclesImportItemCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105248610(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long lVar11;
  long lVar12;
  undefined8 *unaff_x24;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d8 = PTR_PTR_1126e7210;
  puVar1 = &uStack_e0;
  uStack_e0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  lVar11 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    uVar13 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar13,uVar14,uVar15,uVar16);
    lVar11 = (long)_DAT_112720640;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar2;
    _objc_release(uVar10);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar11));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar11));
    puStack_120 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar11);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    lStack_f0 = uVar10;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar10;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar11);
    lStack_100 = uVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_110 = uVar4;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar11);
    uStack_128 = uVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar10;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar11);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_120);
    _objc_release(puVar2);
    _objc_release(uVar4);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(uVar10);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(uStack_128);
    _objc_release(puStack_118);
    _objc_release(puStack_108);
    _objc_release(uStack_110);
    _objc_release(lStack_100);
    _objc_release(puStack_f8);
    _objc_release(puStack_e8);
    _objc_release(lStack_f0);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar13,uVar14,uVar15,uVar16);
    lVar12 = (long)_DAT_112720644;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined **)((long)puVar1 + lVar12) = puVar2;
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar12));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar12));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar12));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar12));
    puStack_120 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar11 = *(long *)((long)puVar1 + lVar12);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    lStack_f0 = lVar11;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_d0 = lVar11;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar12);
    lStack_100 = lVar11;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_110 = uVar10;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar10;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar12);
    uStack_128 = uVar10;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = unaff_x20;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = unaff_x22;
    unaff_x23 = *(undefined8 *)((long)puVar1 + lVar12);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = unaff_x24;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = unaff_x23;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b8 = uVar10;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = puVar3;
    func_0x00010beef8c0(puStack_120);
    _objc_release(puVar3);
    _objc_release(uVar10);
    _objc_release(puVar6);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
    _objc_release(uVar4);
    _objc_release(uStack_128);
    _objc_release(puStack_118);
    _objc_release(puStack_108);
    _objc_release(uStack_110);
    _objc_release(lStack_100);
    _objc_release(puStack_f8);
    _objc_release(puStack_e8);
    lVar11 = lStack_f0;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105248c88;
  puStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  puStack_158 = unaff_x21;
  puStack_150 = unaff_x20;
  puStack_148 = puVar1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_initWeak(auStack_178,lVar11);
  puVar1 = puVar6;
  func_0x00010c070dc0();
  if ((int)puVar1 == 0) {
    func_0x00010c1a9f00(*(undefined8 *)(lVar11 + _DAT_112720640));
  }
  else {
    uVar10 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_105248e6c;
    puStack_190 = &UNK_110841fb0;
    _objc_retain(puVar6);
    puStack_188 = puVar6;
    _objc_copyWeak(auStack_180,auStack_178);
    func_0x00010007380c(uVar10,&puStack_1a8);
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_180);
    _objc_release(puStack_188);
  }
  puVar1 = param_3;
  func_0x00010c0ef3e0();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((long)puVar1 < 1) {
    func_0x00010c212f20(*(undefined8 *)(lVar11 + _DAT_112720644));
  }
  else {
    func_0x00010c0ef3e0();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(lVar11 + _DAT_112720644));
    _objc_release(puVar2);
  }
  func_0x00010c1cbe20(lVar11);
  _objc_destroyWeak(auStack_178);
  _objc_release(puVar6);
  _objc_release(param_3);
  return param_3;
}



/* Entry: 105248c88; end: 105248e6b; -[SCSpectaclesImportItemCell bindViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105248c88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  lVar1 = lVar3;
  func_0x00010c070dc0();
  if ((int)lVar1 == 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112720640));
  }
  else {
    uVar4 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105248e6c;
    puStack_60 = &UNK_110841fb0;
    _objc_retain(lVar3);
    lStack_58 = lVar3;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010007380c(uVar4,&puStack_78);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_50);
    _objc_release(lStack_58);
  }
  lVar1 = param_3;
  func_0x00010c0ef3e0();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 < 1) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112720644));
  }
  else {
    func_0x00010c0ef3e0();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112720644));
    _objc_release(puVar5);
  }
  func_0x00010c1cbe20(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 105248e6c; end: 105248f5f;  */

void FUN_105248e6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf63a60(uVar1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d040();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf5c7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105248f60;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(puVar3);
  puStack_40 = puVar3;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(puStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar3);
  return;
}



/* Entry: 105248f60; end: 105248fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105248f60(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(lVar1 + _DAT_112720640),param_2,
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105248fa4; end: 105248fe3; -[SCSpectaclesImportItemCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105248fa4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112720644,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112720640,0);
  return;
}



/* Entry: 105248fe4; end: 105249067; -[SCSpectaclesImportItemCellViewModel initWithWithContent:overflowCount:] */

undefined1 *
FUN_105248fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e7218;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105249068; end: 1052490cf; -[SCSpectaclesImportItemCellViewModel diffIdentifier] */

void FUN_105249068(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf4bc60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1052490d0; end: 10524914f; -[SCSpectaclesImportItemCellViewModel isEqualToDiffableObject:] */

bool FUN_1052490d0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 8);
  lVar2 = param_3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == lVar2) {
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = param_3;
    func_0x00010c0ef3e0(param_3);
    bVar1 = lVar3 == lVar4;
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105249150; end: 105249157; -[SCSpectaclesImportItemCellViewModel content] */

undefined8 FUN_105249150(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105249158; end: 10524915f; -[SCSpectaclesImportItemCellViewModel overflowCount] */

undefined8 FUN_105249158(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105249160; end: 10524916b; -[SCSpectaclesImportItemCellViewModel .cxx_destruct] */

void FUN_105249160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10524916c; end: 1052494ff; -[SCSpectaclesImportProgressCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10524916c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_88 = PTR_PTR_1126e7220;
  puVar16 = &uStack_90;
  uStack_90 = param_1;
  _objc_msgSendSuper2(puVar16,PTR_s_initWithFrame__1125e2948);
  puVar1 = (undefined *)0x0;
  if (puVar16 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar16);
    puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc_init();
    func_0x00010c16e060();
    func_0x00010c207380(0x4024000000000000,puVar1);
    func_0x00010c166c00(puVar1);
    puVar2 = puVar16;
    func_0x00010bf4dce0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    func_0x00010c219b60(puVar1);
    puVar15 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar16;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    puStack_80 = puVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar16;
    func_0x00010bf4dce0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    puStack_78 = puVar9;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar16;
    func_0x00010bf4dce0(puVar16);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar15 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar18 = (long)_DAT_112720650;
    uVar17 = *(undefined8 *)((long)puVar16 + lVar18);
    *(undefined **)((long)puVar16 + lVar18) = puVar15;
    _objc_release(uVar17);
    func_0x00010c1a8560(*(undefined8 *)((long)puVar16 + lVar18));
    func_0x00010bef6d60(puVar1);
    puVar15 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar18 = (long)_DAT_112720654;
    uVar17 = *(undefined8 *)((long)puVar16 + lVar18);
    *(undefined **)((long)puVar16 + lVar18) = puVar15;
    _objc_release(uVar17);
    func_0x00010c213040(*(undefined8 *)((long)puVar16 + lVar18));
    puVar15 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar16 + lVar18));
    _objc_release(puVar15);
    puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar16 + lVar18));
    _objc_release(puVar15);
    param_3 = *(undefined8 *)((long)puVar16 + lVar18);
    func_0x00010bef6d60(puVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar16;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  uVar17 = param_3;
  func_0x00010c2534e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(puVar1 + _DAT_112720654));
  _objc_release(uVar17);
  uVar17 = param_3;
  func_0x00010c233aa0();
  _objc_release(param_3);
  puVar16 = *(undefined8 **)(puVar1 + _DAT_112720650);
  if ((int)uVar17 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar16,PTR_s_startAnimating_112671118);
    return puVar16;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar16,PTR_s_stopAnimating_112673058);
  return puVar16;
}



/* Entry: 105249500; end: 105249593; -[SCSpectaclesImportProgressCell bindViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105249500(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2534e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112720654));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c233aa0();
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112720650),PTR_s_startAnimating_112671118);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112720650),PTR_s_stopAnimating_112673058);
  return;
}



/* Entry: 105249594; end: 10524959f; +[SCSpectaclesImportProgressCell height] */

undefined8 FUN_105249594(void)

{
  return 0x4044000000000000;
}



/* Entry: 1052495a0; end: 1052495df; -[SCSpectaclesImportProgressCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052495a0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112720650,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112720654,0);
  return;
}



/* Entry: 1052495e0; end: 105249667; -[SCSpectaclesImportProgressCellViewModel initWithType:] */

undefined1 * FUN_1052495e0(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined1 *puVar3;
  
  puVar2 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7228;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined1 *)puVar2;
    _objc_opt_class();
    uVar1 = SUB81(puVar3,0);
    func_0x00010beb6180();
    *(undefined1 *)((long)puVar2 + 8) = uVar1;
    puVar3 = (undefined1 *)puVar2;
    _objc_opt_class();
    func_0x00010bec28a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined1 **)((long)puVar2 + 0x10) = puVar3;
    _objc_release(uVar4);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 105249668; end: 105249673; +[SCSpectaclesImportProgressCellViewModel _shouldShowLoadingIndicatorForType:] */

bool FUN_105249668(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & 0xfffffffffffffffd) != 0;
}



/* Entry: 105249674; end: 1052496b3; +[SCSpectaclesImportProgressCellViewModel _statusTextForType:] */

void FUN_105249674(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    func_0x00010bcbeaa8((&PTR_PTR_1108715d0)[param_3 - 1U],0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052496b4; end: 1052496c7; -[SCSpectaclesImportProgressCellViewModel diffIdentifier] */

void FUN_1052496b4(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 1052496c8; end: 10524974f; -[SCSpectaclesImportProgressCellViewModel isEqualToDiffableObject:] */

undefined8 FUN_1052496c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  bVar1 = *(byte *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010c233aa0();
  if ((uint)bVar1 == (uint)uVar3) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = param_3;
    func_0x00010c2534e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar3,param_2,uVar2);
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105249750; end: 105249757; -[SCSpectaclesImportProgressCellViewModel shouldShowLoadingIndicator] */

undefined1 FUN_105249750(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105249758; end: 10524975f; -[SCSpectaclesImportProgressCellViewModel statusText] */

undefined8 FUN_105249758(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105249760; end: 10524976b; -[SCSpectaclesImportProgressCellViewModel .cxx_destruct] */

void FUN_105249760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10524976c; end: 105249a23; -[SCSpectaclesImportSectionViewModel initWithContentStatusState:device:untransferredContent:transferredContent:transferringContent:currentlyTransferringContent:legacySpectaclesTooltipsService:] */

undefined8 *
FUN_10524976c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e7230;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06e7e0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      _objc_opt_class();
      func_0x00010be37cc0();
      if (puVar5 != (undefined8 *)0x0) {
        puVar6 = PTR_PTR_1126b6928;
        _objc_alloc(PTR_PTR_1126b6928);
        _objc_opt_class(puVar1);
        func_0x00010be37cc0();
        func_0x00010c055880(puVar6);
        func_0x00010befa120(puVar4);
        _objc_release(puVar6);
      }
      lVar7 = param_5;
      func_0x00010bf529e0();
      if (lVar7 != 0) {
        _objc_opt_class();
        func_0x00010be37bc0();
        uVar8 = param_9;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c22f7c0();
        _objc_release(uVar8);
        puVar6 = PTR_PTR_1126b6918;
        _objc_alloc();
        _objc_opt_class(puVar1);
        func_0x00010be37be0();
        uVar2 = param_4;
        func_0x00010bfd38e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf70e00();
        func_0x00010c059620(puVar6);
        _objc_release(uVar2);
        func_0x00010befa120(puVar4);
        _objc_release(puVar6);
      }
      if (param_3 == 5) {
        puVar6 = PTR_PTR_1126b6978;
        _objc_alloc(PTR_PTR_1126b6978);
        func_0x00010c055340();
        func_0x00010befa120(puVar4);
        _objc_release(puVar6);
      }
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = puVar1[1];
      puVar1[1] = puVar6;
      _objc_release(uVar8);
      _objc_release(puVar4);
    }
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 105249a24; end: 105249a37; -[SCSpectaclesImportSectionViewModel diffIdentifier] */

void FUN_105249a24(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 105249a38; end: 105249a3f; -[SCSpectaclesImportSectionViewModel isEqualToDiffableObject:] */

undefined8 FUN_105249a38(void)

{
  return 1;
}



/* Entry: 105249a40; end: 105249a5f; +[SCSpectaclesImportSectionViewModel _importCellMessageTypeForContentStatusState:] */

undefined8 FUN_105249a40(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 8) {
    return *(undefined8 *)(&UNK_10dd90a38 + param_3 * 8);
  }
  return 2;
}



/* Entry: 105249a60; end: 105249a7f; +[SCSpectaclesImportSectionViewModel _importCellActionButtonTypeForContentStatusState:] */

undefined8 FUN_105249a60(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 8) {
    return *(undefined8 *)(&UNK_10dd90a78 + param_3 * 8);
  }
  return 2;
}



/* Entry: 105249a80; end: 105249aa3; +[SCSpectaclesImportSectionViewModel _importProgressCellTypeForContentStatusState:] */

undefined8 FUN_105249a80(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 7) {
    return *(undefined8 *)(&UNK_10dd90ab8 + (param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 105249aa4; end: 105249aab; -[SCSpectaclesImportSectionViewModel cellViewModels] */

undefined8 FUN_105249aa4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105249aac; end: 105249ab7; -[SCSpectaclesImportSectionViewModel .cxx_destruct] */

void FUN_105249aac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105249ab8; end: 10524a313; -[SCSpectaclesImportStatusCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105249ab8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  long lVar14;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  long lVar15;
  undefined8 *unaff_x24;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d0 = PTR_PTR_1126e7238;
  puVar1 = &uStack_d8;
  uStack_d8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar5 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar15 = (long)_DAT_112720664;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined **)((long)puVar1 + lVar15) = puVar2;
    _objc_release(uVar13);
    func_0x00010c21e900(*(undefined8 *)((long)puVar1 + lVar15));
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c13a140(0x4022000000000000,0x4022000000000000,0x4022000000000000,0x4022000000000000)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar15));
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar13 = *(undefined8 *)((long)puVar1 + lVar15);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(uVar13);
    _objc_release(puVar2);
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    lVar14 = (long)_DAT_112720668;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar2;
    _objc_release(uVar13);
    lStack_e8 = lVar14;
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar14));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3feccccccccccccd,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar14));
    _objc_release(puVar2);
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    lVar14 = (long)_DAT_11272066c;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar2;
    _objc_release(uVar13);
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar14));
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    lStack_e0 = lVar14;
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar14));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar14));
    _objc_release(puVar2);
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar15));
    puStack_128 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    lStack_f8 = uVar13;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_90 = uVar13;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar15);
    uStack_108 = uVar13;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    uStack_118 = uVar6;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_110 = puVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_88 = uVar6;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar15);
    uStack_130 = uVar6;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar7;
    func_0x00010bf493c0(0x4008000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar13;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_78 = uVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_128);
    _objc_release(puVar2);
    _objc_release(uVar6);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar13);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(uVar7);
    _objc_release(uStack_130);
    _objc_release(puStack_120);
    _objc_release(puStack_110);
    _objc_release(uStack_118);
    _objc_release(uStack_108);
    _objc_release(puStack_100);
    _objc_release(puStack_f0);
    _objc_release(lStack_f8);
    lVar14 = lStack_e8;
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lStack_e8));
    puStack_110 = (undefined8 *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = (undefined8 *)uVar13;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar13;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar14);
    lStack_f8 = uVar13;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = (undefined8 *)uVar6;
    func_0x00010bf49420(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar6;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar14);
    uStack_108 = uVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    uStack_118 = uVar7;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493c0(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar7;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar11;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar13;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_110);
    _objc_release(puVar2);
    _objc_release(uVar13);
    _objc_release(puVar10);
    _objc_release(puVar11);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(puVar5);
    _objc_release(puVar8);
    _objc_release(uStack_118);
    _objc_release(uStack_108);
    _objc_release(puStack_100);
    _objc_release(lStack_f8);
    _objc_release(puStack_f0);
    lVar15 = lStack_e0;
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lStack_e0));
    puStack_100 = (undefined8 *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar12 = *(long *)((long)puVar1 + lVar15);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)((long)puVar1 + lVar14);
    puStack_f0 = (undefined8 *)lVar12;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_e8 = uVar13;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    lStack_c8 = lVar12;
    unaff_x23 = *(undefined8 *)((long)puVar1 + lVar15);
    lStack_f8 = lVar12;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = unaff_x23;
    func_0x00010bf493c0(0x4018000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar13;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar15);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = unaff_x24;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = (undefined8 *)PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b8 = unaff_x21;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = unaff_x22;
    func_0x00010beef8c0(puStack_100);
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
    _objc_release(unaff_x24);
    _objc_release(uVar6);
    _objc_release(uVar13);
    _objc_release(puVar5);
    _objc_release(puVar8);
    _objc_release(unaff_x23);
    _objc_release(lStack_f8);
    _objc_release(lStack_e8);
    puVar5 = puStack_f0;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10524a314;
  puStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  puStack_150 = unaff_x20;
  puStack_148 = puVar1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c2534e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)((long)puVar5 + (long)_DAT_11272066c));
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010bf61080();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar1);
  _objc_initWeak(auStack_178,puVar5);
  puVar1 = puVar10;
  func_0x00010c070dc0();
  if ((int)puVar1 == 0) {
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar5 + (long)_DAT_112720668));
  }
  else {
    uVar13 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_10524a4ac;
    puStack_190 = &UNK_110841fb0;
    _objc_retain(puVar10);
    puStack_188 = puVar10;
    _objc_copyWeak(auStack_180,auStack_178);
    func_0x00010007380c(uVar13,&puStack_1a8);
    _objc_release(uVar13);
    _objc_destroyWeak(auStack_180);
    _objc_release(puStack_188);
  }
  _objc_destroyWeak(auStack_178);
  _objc_release(puVar10);
  _objc_release(param_3);
  return param_3;
}



/* Entry: 10524a314; end: 10524a4ab; -[SCSpectaclesImportStatusCell bindViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10524a314(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c2534e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11272066c));
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf61080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = uVar2;
  func_0x00010c070dc0();
  if ((int)uVar3 == 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_112720668));
  }
  else {
    uVar3 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10524a4ac;
    puStack_60 = &UNK_110841fb0;
    _objc_retain(uVar2);
    uStack_58 = uVar2;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010007380c(uVar3,&puStack_78);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_release(uStack_58);
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10524a4ac; end: 10524a59f;  */

void FUN_10524a4ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf63a60(uVar1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d040();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf5c7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10524a5a0;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(puVar3);
  puStack_40 = puVar3;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(puStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar3);
  return;
}



/* Entry: 10524a5a0; end: 10524a5e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10524a5a0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(lVar1 + _DAT_112720668),param_2,
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10524a5e4; end: 10524a5ef; +[SCSpectaclesImportStatusCell height] */

undefined8 FUN_10524a5e4(void)

{
  return 0x4046800000000000;
}



/* Entry: 10524a5f0; end: 10524a5ff; -[SCSpectaclesImportStatusCell statusText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10524a5f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112720670);
}



/* Entry: 10524a600; end: 10524a65f; -[SCSpectaclesImportStatusCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10524a600(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112720670,0);
  _objc_storeStrong(param_1 + _DAT_11272066c,0);
  _objc_storeStrong(param_1 + _DAT_112720668,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112720664,0);
  return;
}



/* Entry: 10524a660; end: 10524a743; -[SCSpectaclesImportStatusCellViewModel initWithTransferredContent:transferringContent:currentlyTransferringContent:] */

undefined1 *
FUN_10524a660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e7240;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf529e0();
    uVar3 = param_4;
    func_0x00010bf529e0(param_4);
    func_0x00010604e480(uVar2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10524a744; end: 10524a757; -[SCSpectaclesImportStatusCellViewModel diffIdentifier] */

void FUN_10524a744(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 10524a758; end: 10524a7fb; -[SCSpectaclesImportStatusCellViewModel isEqualToDiffableObject:] */

undefined8 FUN_10524a758(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010c2534e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar3,param_2,uVar1);
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = param_3;
    func_0x00010bf61080(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(uVar3,param_2,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10524a7fc; end: 10524a803; -[SCSpectaclesImportStatusCellViewModel currentlyTransferringContent] */

undefined8 FUN_10524a7fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10524a804; end: 10524a80b; -[SCSpectaclesImportStatusCellViewModel statusText] */

undefined8 FUN_10524a804(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10524a80c; end: 10524a83b; -[SCSpectaclesImportStatusCellViewModel .cxx_destruct] */

void FUN_10524a80c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10524a83c; end: 10524abb7; -[SCSpectaclesMemoriesSnapsTabSectionPlugin initWithSpectaclesServices:spectaclesAppStatusServices:contentStatusServices:legacyTooltipsServices:alertUIContainer:spectaclesContentPageScopeExposer:] */

undefined8 *
FUN_10524a83c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e7248;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf4d720();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2533a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    uVar6 = uVar5;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[4];
    puVar1[4] = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_6);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10524abb8; end: 10524abdf; -[SCSpectaclesMemoriesSnapsTabSectionPlugin viewModel] */

void FUN_10524abb8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10524abe0; end: 10524acf7; -[SCSpectaclesMemoriesSnapsTabSectionPlugin sectionControllerForViewModel:selectMode:] */

void FUN_10524abe0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_1126b6910;
  _objc_retain(param_3);
  _objc_opt_class(puVar5);
  uVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar5);
  _objc_release(param_3);
  if ((uVar1 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b6980;
    _objc_alloc(PTR_PTR_1126b6980);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c2a56a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c08f680(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c253460(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043ae0(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10524acf8; end: 10524ad57; -[SCSpectaclesMemoriesSnapsTabSectionPlugin .cxx_destruct] */

void FUN_10524acf8(long param_1)

{
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



/* Entry: 10524ad58; end: 10524aea7; -[SCSpectaclesMemoriesSnapsTabSectionPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10524ad58(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = (long)_DAT_112720694;
  lVar1 = param_1 + lVar9;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6988;
  _objc_alloc(PTR_PTR_1126b6988);
  lVar4 = param_1 + _DAT_112720698;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + _DAT_11272069c;
  _objc_loadWeakRetained(lVar5);
  lVar6 = param_1 + _DAT_1127206a0;
  _objc_loadWeakRetained(lVar6);
  lVar7 = param_1 + _DAT_1127206a4;
  _objc_loadWeakRetained(lVar7);
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar8 = lVar9;
  func_0x00010beff7a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04b0e0(puVar3,param_2,lVar4,lVar5,lVar6,lVar7,lVar8,
                      *(undefined8 *)(param_1 + _DAT_1127206a8));
  func_0x00010c125b60(lVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar8);
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10524aea8; end: 10524af13; -[SCSpectaclesMemoriesSnapsTabSectionPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10524aea8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127206a8,0);
  _objc_destroyWeak(param_1 + _DAT_112720694);
  _objc_destroyWeak(param_1 + _DAT_1127206a4);
  _objc_destroyWeak(param_1 + _DAT_1127206a0);
  _objc_destroyWeak(param_1 + _DAT_11272069c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112720698);
  return;
}



/* Entry: 10524af14; end: 10524afa3;  */

void FUN_10524af14(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcc6d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dcc6d8,
                      &PTR____CFConstantStringClassReference_110dcc6f8,0);
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



/* Entry: 10524afa4; end: 10524b2fb; -[SCSpectaclesReportIssueEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10524afa4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10524b2fc;
  puStack_88 = &UNK_110871618;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_1127206ac;
  lVar2 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126aead8;
  _objc_opt_class(PTR_PTR_1126aead8);
  lVar2 = lVar3;
  _objc_opt_isKindOfClass(lVar3,puVar4);
  _objc_release(lVar3);
  if (((uint)lVar2 & (uint)(lVar3 != 0)) == 1) {
    lVar2 = param_1 + lVar7;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c27dd80();
    _objc_release(lVar2);
    if (lVar3 == 2) {
      puVar4 = PTR_PTR_1126b6990;
      _objc_alloc(PTR_PTR_1126b6990);
      lVar2 = param_1 + lVar7;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010bf71120();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010bfa1c80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar6;
      func_0x00010bf70e40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00c3c0(puVar4);
      _objc_release(lVar5);
    }
    else {
      puVar4 = PTR_PTR_1126b6998;
      _objc_alloc(PTR_PTR_1126b6998);
      lVar2 = param_1 + lVar7;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c27dd80();
      lVar3 = param_1 + lVar7;
      _objc_loadWeakRetained(lVar3);
      lVar6 = lVar3;
      func_0x00010bf71120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00ac40(puVar4);
    }
    _objc_release(lVar6);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    _objc_initWeak(auStack_a8,param_1);
    puVar4 = PTR_PTR_1126b69a0;
    _objc_alloc(PTR_PTR_1126b69a0);
    _objc_copyWeak(auStack_b0,auStack_a8);
    func_0x00010c00acc0(puVar4);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
  }
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar7);
  lVar2 = lVar7;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_storeWeak(param_1 + _DAT_1127206b4,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 10524b2fc; end: 10524b33b;  */

void FUN_10524b2fc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10524b33c; end: 10524b3bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10524b33c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = param_1 + _DAT_1127206b4;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(puVar2,param_2,lVar1,1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10524b3c0; end: 10524b55b; -[SCSpectaclesReportIssueEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10524b3c0(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lStack_50;
  undefined *puStack_48;
  
  lVar9 = param_1 + _DAT_1127206ac;
  _objc_loadWeakRetained();
  lVar1 = lVar9;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  if (lVar1 == 0) {
    puStack_48 = PTR_PTR_1126e7250;
    plVar6 = &lStack_50;
    lStack_50 = param_1;
    _objc_msgSendSuper2(plVar6,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_10524b534;
  }
  lVar8 = (long)_DAT_1127206b4;
  lVar9 = param_1 + lVar8;
  _objc_loadWeakRetained();
  if (lVar9 == 0) {
LAB_10524b44c:
    puVar4 = PTR_PTR_1126afc98;
    func_0x00010c0da5c0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_1127206b8;
    puVar7 = *(undefined **)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar4;
  }
  else {
    uVar2 = param_1 + lVar8;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010c06d1a0();
    _objc_release(uVar2);
    _objc_release(lVar9);
    if ((uVar3 & 1) != 0) goto LAB_10524b44c;
    puVar7 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_1127206b8;
    _objc_retain();
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar7;
    _objc_release(uVar5);
    _objc_retain(puVar7);
    func_0x00010bf6f440(lVar1);
    _objc_release(puVar7);
  }
  _objc_release(puVar7);
  plVar6 = *(long **)(param_1 + lVar9);
  func_0x00010c117720(plVar6);
  _objc_retainAutoreleasedReturnValue();
LAB_10524b534:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar6);
  return;
}



/* Entry: 10524b55c; end: 10524b563;  */

void FUN_10524b55c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10524b564; end: 10524b5c3; -[SCSpectaclesReportIssueEntryPoint _createShakeToReportFeatureProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10524b564(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b69a8;
  _objc_alloc(PTR_PTR_1126b69a8);
  param_1 = param_1 + _DAT_1127206ac;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf70e00();
  func_0x00010c00c360(puVar1,param_2,lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10524b5c4; end: 10524b637; -[SCSpectaclesReportIssueEntryPoint lagunaSettingsReportIssueViewControllerWantsToDetachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10524b5c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127206ac;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2496a0(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}


