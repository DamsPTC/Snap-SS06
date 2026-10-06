/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106d00f20; end: 106d01153; -[SCMemoriesCameraRollViewAlbumsButton _setupView] */

/* WARNING: Possible PIC construction at 0x000106d01128: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106d0112c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d00f20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  func_0x00010c21e900(param_1,param_2,1);
  uVar5 = 0x4032000000000000;
  if (*(long *)(param_1 + _DAT_11275c9dc) != 0) {
    uVar5 = 0x402e000000000000;
  }
  lVar3 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(uVar5);
  _objc_release(lVar3);
  func_0x00010bed39e0(param_1);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
  lVar3 = (long)_DAT_11275c9e0;
  uVar5 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
  lVar4 = (long)_DAT_11275c9e4;
  uVar7 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar7);
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010bf833a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4));
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar7);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 106d01154; end: 106d0150b; -[SCMemoriesCameraRollViewAlbumsButton _setupViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d01154(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_11275c9e0;
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14),param_2,0);
  puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar1 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf493c0(0x4030000000000000,uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  uStack_88 = uVar3;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493a0(uVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar14);
  uStack_80 = uVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar14);
  uStack_78 = uVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493c0(0xc042000000000000,uVar9,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar13,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar12);
  _objc_release(lVar14);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  lVar15 = (long)_DAT_11275c9e4;
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15),param_2,0);
  puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar11 = *(long *)(param_1 + lVar15);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar11;
  func_0x00010bf493c0(0xc030000000000000,lVar11,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar15);
  lStack_a8 = lVar5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010bf493a0(uVar12,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar15);
  uStack_a0 = uVar3;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar15);
  uStack_98 = uVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_a8,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar13,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(lVar14);
  _objc_release(uVar12);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(lVar11,param_2,puVar13);
  _objc_release(puVar13);
  lVar2 = lVar11;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c292b20();
  _objc_release(lVar2);
  if (lVar5 == 2) {
    puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x1e);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(lVar11,param_2,puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar13);
    return;
  }
  return;
}



/* Entry: 106d0150c; end: 106d015c3; -[SCMemoriesCameraRollViewAlbumsButton _updateBackground] */

void FUN_106d0150c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c292b20();
  _objc_release(lVar2);
  if (lVar3 == 2) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x1e);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106d015c4; end: 106d0160b; -[SCMemoriesCameraRollViewAlbumsButton traitCollectionDidChange:] */

void FUN_106d015c4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6828;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bed39e0(param_1);
  return;
}



/* Entry: 106d0160c; end: 106d0164b; -[SCMemoriesCameraRollViewAlbumsButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d0160c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275c9e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275c9e0,0);
  return;
}



/* Entry: 106d0164c; end: 106d016b7; -[SCMemoriesCameraRollAlbumPickerActionHandler initWithDataProvider:] */

undefined1 * FUN_106d0164c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6830;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d016b8; end: 106d017ff; -[SCMemoriesCameraRollAlbumPickerActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_106d016b8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  uVar5 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c0720c0();
  _objc_release(uVar5);
  if ((int)uVar1 == 0) {
    uVar5 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c0720c0();
    _objc_release(uVar5);
    if ((int)uVar1 == 0) {
      uVar4 = 0;
      goto LAB_106d017d4;
    }
    uVar5 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar1 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    if (uVar1 != 0) {
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      func_0x00010c2827c0(uVar5);
      func_0x00010c158680(param_1);
      _objc_release(param_1);
      goto LAB_106d017c0;
    }
    uVar5 = 0;
    uVar4 = 0;
  }
  else {
    uVar5 = param_1 + 8;
    _objc_loadWeakRetained(uVar5);
    func_0x00010bfa4b20();
LAB_106d017c0:
    uVar4 = 1;
  }
  _objc_release(uVar5);
LAB_106d017d4:
  _objc_release(param_4);
  return uVar4;
}



/* Entry: 106d01800; end: 106d01807; -[SCMemoriesCameraRollAlbumPickerActionHandler .cxx_destruct] */

void FUN_106d01800(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106d01808; end: 106d018e3; -[SCMemoriesCameraRollAlbumPickerCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106d01808(double param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f6838;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb1160(puVar1);
    func_0x00010beb11a0(puVar1);
    puVar2 = PTR__OBJC_CLASS___PHCachingImageManager_1126c3270;
    _objc_opt_new();
    lVar4 = (long)_DAT_11275c9ec;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1674c0(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar2);
    *(double *)((long)puVar1 + (long)_DAT_11275c9f0) = param_1 * 88.0;
    ((double *)((long)puVar1 + (long)_DAT_11275c9f0))[1] = param_1 * 88.0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d018e4; end: 106d0195b; -[SCMemoriesCameraRollAlbumPickerCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d018e4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6838;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275c9f4));
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275c9f8));
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11275c9fc));
  return;
}



/* Entry: 106d0195c; end: 106d01a8f; -[SCMemoriesCameraRollAlbumPickerCell renderCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d0195c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11275c9f4;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,uVar1);
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010c07d660();
  uVar1 = 0xc1;
  if ((int)uVar2 == 0) {
    uVar1 = 0xc6;
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar3);
  _objc_release(puVar3);
  uVar1 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275c9f8),param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed3f40(param_1,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf53860(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be10a80(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d01a90; end: 106d01cd3; -[SCMemoriesCameraRollAlbumPickerCell _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d01a90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  uVar4 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar4,uVar5,uVar6,uVar7);
  lVar3 = (long)_DAT_11275c9fc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4028000000000000);
  _objc_release(uVar2);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar3),param_2,2);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar3),param_2,1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar4,uVar5,uVar6,uVar7);
  lVar3 = (long)_DAT_11275c9f4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3),param_2,0x16);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(uVar4,uVar5,uVar6,uVar7);
  lVar3 = (long)_DAT_11275c9f8;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3),param_2,6);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c161260(param_1,param_2,1);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d01cd4; end: 106d022f7; -[SCMemoriesCameraRollAlbumPickerCell _setupViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d01cd4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_11275c9fc;
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14),param_2,0);
  puStack_110 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar1 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  lStack_f8 = uVar1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lStack_f0 = lVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = (undefined *)lVar7;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar14);
  puStack_108 = (undefined *)uVar1;
  uStack_a0 = uVar1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar14);
  lStack_e8 = lVar14;
  uStack_98 = uVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf49420(0x4056000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar14);
  uStack_90 = uVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010bf49420(0x4056000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_110);
  _objc_release(puVar5);
  _objc_release(uVar13);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(lVar15);
  _objc_release(lVar7);
  _objc_release(uVar2);
  _objc_release(puStack_108);
  _objc_release(puStack_100);
  _objc_release(lStack_f0);
  _objc_release(lStack_f8);
  lVar16 = (long)_DAT_11275c9f4;
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16));
  uVar6 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf493c0(0x4040800000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_11275ca00;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined8 *)(param_1 + lVar14) = uVar1;
  _objc_release(uVar13);
  _objc_release(lVar15);
  _objc_release(lVar7);
  _objc_release(uVar6);
  puStack_100 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar16);
  lStack_f8 = lVar16;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lStack_e8);
  lStack_f0 = uVar2;
  func_0x00010c2793a0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_b8 = *(undefined8 *)(param_1 + lVar14);
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  uStack_c0 = uVar2;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf49420(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  uStack_b0 = uVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf493c0(0xc04c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_100);
  _objc_release(puVar5);
  _objc_release(uVar6);
  _objc_release(lVar15);
  _objc_release(lVar7);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar13);
  _objc_release(lStack_f0);
  lVar15 = (long)_DAT_11275c9f8;
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar15));
  puStack_108 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar7 = *(long *)(param_1 + lVar15);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lStack_e8);
  lStack_f0 = lVar7;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_e8 = uVar1;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = *(long *)(param_1 + lVar15);
  puStack_100 = (undefined *)lVar7;
  lStack_e0 = lVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = *(undefined **)(param_1 + lStack_f8);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar16;
  func_0x00010bf493c0(0x4000000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  lStack_d8 = lVar14;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = *(undefined **)(param_1 + lVar15);
  uStack_d0 = uVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar9;
  func_0x00010bf493c0(0xc04c000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c8 = puVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010beef8c0(puStack_108);
  _objc_release(puVar10);
  _objc_release(puVar5);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(puVar9);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(lVar14);
  _objc_release(puVar8);
  _objc_release(lVar16);
  _objc_release(puStack_100);
  _objc_release(lStack_e8);
  lVar15 = lStack_f0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_106d022f8;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar11;
  lStack_160 = lVar14;
  puStack_158 = puVar9;
  puStack_150 = puVar8;
  lStack_148 = lVar16;
  puStack_140 = puVar10;
  puStack_138 = puVar5;
  lStack_130 = lVar7;
  lStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar11);
  if ((puVar11 == (undefined *)0x0) ||
     (puVar9 = puVar11, func_0x00010c08fa60(), puVar9 == (undefined *)0x0)) {
    func_0x00010c1a7f60(*(undefined8 *)(lVar15 + _DAT_11275c9f8));
    func_0x00010c162480(*(undefined8 *)(lVar15 + _DAT_11275ca00));
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar10 = *(undefined **)(lVar15 + _DAT_11275c9f4);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar10;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_170 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar9;
    func_0x00010beef8c0(puVar5);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(puVar10);
  }
  puVar9 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_106d02460;
  puStack_1b0 = puVar8;
  lStack_1a8 = lVar16;
  puStack_1a0 = puVar10;
  puStack_198 = puVar5;
  lStack_190 = lVar15;
  puStack_188 = puVar11;
  ppuStack_180 = &puStack_120;
  _objc_retain(puVar12);
  puVar5 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
  _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
  func_0x00010c1ec960();
  func_0x00010c18ba80(puVar5);
  func_0x00010c1cc000(puVar5);
  _objc_initWeak(auStack_1b8,puVar9);
  lVar7 = (long)_DAT_11275c9f0;
  uVar1 = *(undefined8 *)(puVar9 + _DAT_11275c9ec);
  _objc_copyWeak(auStack_1c0,auStack_1b8);
  func_0x00010c1357a0(*(undefined8 *)(puVar9 + lVar7),*(undefined8 *)((long)(puVar9 + lVar7) + 8),
                      uVar1);
  _objc_destroyWeak(auStack_1c0);
  _objc_destroyWeak(auStack_1b8);
  _objc_release(puVar5);
  _objc_release(puVar12);
  return;
}



/* Entry: 106d022f8; end: 106d0245f; -[SCMemoriesCameraRollAlbumPickerCell _updateBasedOnSubtitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d022f8(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar5;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  if ((param_3 == (undefined *)0x0) ||
     (puVar2 = param_3, func_0x00010c08fa60(), puVar2 == (undefined *)0x0)) {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275c9f8));
    func_0x00010c162480(*(undefined8 *)(param_1 + _DAT_11275ca00));
    unaff_x21 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    unaff_x22 = *(undefined8 *)(param_1 + _DAT_11275c9f4);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = param_1;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = unaff_x22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_60 = unaff_x24;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010beef8c0(unaff_x21);
    _objc_release(puVar2);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(param_1);
    _objc_release(unaff_x22);
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_106d02460;
  uStack_a0 = unaff_x24;
  lStack_98 = unaff_x23;
  uStack_90 = unaff_x22;
  puStack_88 = unaff_x21;
  lStack_80 = param_1;
  puStack_78 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  puVar3 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
  _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
  func_0x00010c1ec960();
  func_0x00010c18ba80(puVar3);
  func_0x00010c1cc000(puVar3);
  _objc_initWeak(auStack_a8,puVar2);
  lVar1 = (long)_DAT_11275c9f0;
  uVar5 = *(undefined8 *)(puVar2 + _DAT_11275c9ec);
  _objc_copyWeak(auStack_b0,auStack_a8);
  func_0x00010c1357a0(*(undefined8 *)(puVar2 + lVar1),*(undefined8 *)((long)(puVar2 + lVar1) + 8),
                      uVar5);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar3);
  _objc_release(puVar4);
  return;
}



/* Entry: 106d02460; end: 106d02583; -[SCMemoriesCameraRollAlbumPickerCell _fetchCoverImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d02460(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
  _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
  func_0x00010c1ec960();
  func_0x00010c18ba80(puVar2);
  func_0x00010c1cc000(puVar2);
  _objc_initWeak(auStack_48,param_1);
  lVar1 = (long)_DAT_11275c9f0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275c9ec);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c1357a0(*(undefined8 *)(param_1 + lVar1),((undefined8 *)(param_1 + lVar1))[1],uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106d02584; end: 106d02653;  */

void FUN_106d02584(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106d02654;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106d02654; end: 106d02697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d02654(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(lVar1 + _DAT_11275c9fc),param_2,
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106d02698; end: 106d02707; -[SCMemoriesCameraRollAlbumPickerCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d02698(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275ca00,0);
  _objc_storeStrong(param_1 + _DAT_11275c9ec,0);
  _objc_storeStrong(param_1 + _DAT_11275c9fc,0);
  _objc_storeStrong(param_1 + _DAT_11275c9f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275c9f4,0);
  return;
}



/* Entry: 106d02708; end: 106d027eb;  */

void FUN_106d02708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(param_2);
  func_0x00010c0f9680(puVar1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106d027ec; end: 106d02acf;  */

undefined8 ***
FUN_106d027ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 ***param_6,undefined8 param_7,undefined8 param_8,
             undefined8 **param_9,undefined8 **param_10,undefined8 **param_11,undefined8 **param_12)

{
  long lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 ***pppuVar14;
  undefined8 ***pppuVar15;
  undefined8 ***pppuVar16;
  undefined8 ***pppuVar17;
  undefined8 ***pppuVar18;
  undefined8 ***pppuVar19;
  undefined8 ***pppuVar20;
  undefined8 ***pppuVar21;
  undefined8 ***pppuVar22;
  undefined8 ***pppuVar23;
  undefined8 **ppuVar24;
  undefined8 **ppuVar25;
  undefined8 **ppuVar26;
  undefined8 **ppuVar27;
  undefined8 **ppuStack_210;
  undefined *puStack_208;
  undefined8 **ppuStack_200;
  undefined8 **ppuStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 **ppuStack_1e8;
  undefined8 **ppuStack_1e0;
  undefined8 **ppuStack_1d8;
  undefined8 **ppuStack_1d0;
  undefined8 **ppuStack_1c8;
  undefined8 **ppuStack_1c0;
  undefined8 **ppuStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined1 uStack_1a0;
  undefined1 uStack_19f;
  undefined1 uStack_19e;
  undefined8 *puStack_198;
  undefined8 **ppuStack_190;
  undefined8 **ppuStack_188;
  undefined8 **ppuStack_180;
  undefined8 **ppuStack_178;
  undefined8 **ppuStack_170;
  undefined8 **ppuStack_168;
  undefined8 **ppuStack_160;
  undefined8 **ppuStack_158;
  undefined8 **ppuStack_150;
  undefined8 **ppuStack_148;
  undefined8 **ppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x28));
  uVar5 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(uVar5);
  func_0x00010bf17b00(*(undefined8 *)(param_5 + 0x20));
  uVar5 = *(undefined8 *)(param_5 + 0x20);
  uVar6 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar6);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c29bf00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar5);
  puStack_d0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uStack_a8 = *(undefined8 *)(param_5 + 0x30);
  uVar6 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_5 + 0x28);
  uStack_b8 = uVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_5 + 0x20);
  uStack_c8 = uVar6;
  uStack_a0 = uVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf493c0(-*(double *)(param_5 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_5 + 0x20);
  uStack_98 = uVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_90 = uVar12;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_d0);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uStack_c8);
  _objc_release(uStack_c0);
  _objc_release(uStack_b8);
  _objc_release(uStack_b0);
  func_0x00010c08cdc0(*(undefined8 *)(param_5 + 0x28));
  pppuVar14 = *(undefined8 ****)(param_5 + 0x20);
  func_0x00010bf941a0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return pppuVar14;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_106d02ad0;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_130 = uVar6;
  uStack_128 = uVar8;
  uStack_120 = uVar5;
  uStack_118 = uVar9;
  uStack_110 = uVar7;
  puStack_108 = puVar13;
  uStack_100 = uVar12;
  uStack_f8 = uVar11;
  uStack_f0 = uVar10;
  lStack_e8 = param_5;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain(param_6);
  _objc_retain(pppuVar14);
  pppuVar15 = param_6;
  func_0x00010c29bf00(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(pppuVar14);
  _objc_release(pppuVar15);
  pppuVar15 = param_6;
  func_0x00010c29bf00(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(pppuVar15);
  puStack_198 = (undefined8 *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  pppuVar15 = param_6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_160 = pppuVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  pppuVar16 = pppuVar14;
  ppuStack_168 = pppuVar15;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_170 = pppuVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar16 = param_6;
  ppuStack_178 = pppuVar15;
  ppuStack_158 = pppuVar15;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_180 = pppuVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar15 = pppuVar14;
  ppuStack_188 = pppuVar16;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_190 = pppuVar15;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar15 = param_6;
  ppuStack_150 = pppuVar16;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  pppuVar17 = pppuVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  pppuVar18 = pppuVar14;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  pppuVar19 = pppuVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar20 = param_6;
  ppuStack_148 = pppuVar19;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  pppuVar21 = pppuVar20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  pppuVar22 = pppuVar14;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar14);
  pppuVar14 = pppuVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar26 = (undefined8 **)0x4;
  ppuVar24 = (undefined8 **)PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_140 = pppuVar14;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar25 = ppuVar24;
  func_0x00010beef8c0(puStack_198);
  _objc_release(ppuVar24);
  _objc_release(pppuVar14);
  _objc_release(pppuVar22);
  _objc_release(pppuVar21);
  _objc_release(pppuVar20);
  _objc_release(pppuVar19);
  _objc_release(pppuVar18);
  _objc_release(pppuVar17);
  _objc_release(pppuVar15);
  _objc_release(pppuVar16);
  _objc_release(ppuStack_190);
  _objc_release(ppuStack_188);
  _objc_release(ppuStack_180);
  _objc_release(ppuStack_178);
  _objc_release(ppuStack_170);
  _objc_release(ppuStack_168);
  pppuVar23 = (undefined8 ***)ppuStack_160;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return pppuVar23;
  }
  ___stack_chk_fail();
  ppuVar4 = ppuStack_190;
  puVar3 = puStack_198;
  pcStack_1a8 = FUN_106d02dcc;
  ppuStack_200 = pppuVar16;
  ppuStack_1f8 = pppuVar21;
  puStack_1f0 = ppuVar24;
  ppuStack_1e8 = pppuVar22;
  ppuStack_1e0 = pppuVar14;
  ppuStack_1d8 = pppuVar20;
  ppuStack_1d0 = pppuVar19;
  ppuStack_1c8 = pppuVar18;
  ppuStack_1c0 = pppuVar17;
  ppuStack_1b8 = pppuVar15;
  ppuStack_1b0 = &puStack_e0;
  _objc_retain(ppuVar25);
  _objc_retain(ppuVar26);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(puVar3);
  _objc_retain(ppuVar4);
  puStack_208 = PTR_PTR_1126f6840;
  pppuVar14 = &ppuStack_210;
  ppuStack_210 = pppuVar23;
  _objc_msgSendSuper2(pppuVar14,PTR_s_init_1125d9248);
  if (pppuVar14 != (undefined8 ***)0x0) {
    _objc_retain(ppuVar25);
    ppuVar24 = pppuVar14[1];
    pppuVar14[1] = ppuVar25;
    _objc_release(ppuVar24);
    _objc_retain(ppuVar4);
    ppuVar24 = pppuVar14[2];
    pppuVar14[2] = ppuVar4;
    _objc_release(ppuVar24);
    _objc_retain(param_12);
    ppuVar24 = pppuVar14[0x18];
    pppuVar14[0x18] = param_12;
    _objc_release(ppuVar24);
    _objc_retain(param_10);
    ppuVar24 = pppuVar14[6];
    pppuVar14[6] = param_10;
    _objc_release(ppuVar24);
    _objc_retain(param_9);
    ppuVar24 = pppuVar14[4];
    pppuVar14[4] = param_9;
    _objc_release(ppuVar24);
    pppuVar14[5] = param_11;
    *(undefined1 *)(pppuVar14 + 8) = uStack_1a0;
    _objc_retain(ppuVar26);
    ppuVar24 = pppuVar14[3];
    pppuVar14[3] = ppuVar26;
    _objc_release(ppuVar24);
    *(undefined1 *)((long)pppuVar14 + 0x42) = uStack_19f;
    *(undefined1 *)((long)pppuVar14 + 0x43) = uStack_19e;
    _objc_retain(puVar3);
    ppuVar24 = pppuVar14[7];
    pppuVar14[7] = (undefined8 **)puVar3;
    _objc_release(ppuVar24);
    cVar2 = *(char *)(pppuVar14 + 8);
    puVar13 = PTR_PTR_1126ae568;
    _objc_opt_new();
    lVar1 = 0xb0;
    if (cVar2 == '\0') {
      lVar1 = 0xa8;
    }
    uVar5 = *(undefined8 *)((long)pppuVar14 + lVar1);
    *(undefined **)((long)pppuVar14 + lVar1) = puVar13;
    _objc_release(uVar5);
    ppuVar24 = (undefined8 **)PTR_PTR_1126ae568;
    _objc_opt_new();
    ppuVar27 = pppuVar14[0x17];
    pppuVar14[0x17] = ppuVar24;
    _objc_release(ppuVar27);
    puVar13 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf3e0(pppuVar14[3]);
    _objc_release(puVar13);
    func_0x00010c1d02e0(pppuVar14[3]);
    func_0x00010c21fa60(pppuVar14[3]);
    *(bool *)((long)pppuVar14 + 0x41) = pppuVar14[5] == (undefined8 **)0x0;
    ppuVar24 = pppuVar14[2];
    _objc_retain(param_12);
    _objc_retain(pppuVar14);
    func_0x00010c0f7fc0(ppuVar24);
    _objc_release(pppuVar14);
    _objc_release(param_12);
  }
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(ppuVar26);
  _objc_release(ppuVar25);
  return pppuVar14;
}



/* Entry: 106d02ad0; end: 106d02dcb;  */

undefined8 ***
FUN_106d02ad0(undefined8 **param_1,undefined8 ***param_2,undefined8 param_3,undefined8 param_4,
             undefined8 **param_5,undefined8 **param_6,undefined8 **param_7,undefined8 **param_8)

{
  long lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  undefined8 **ppuVar12;
  undefined8 ***pppuVar13;
  undefined8 **ppuVar14;
  undefined *puVar15;
  undefined8 **ppuVar16;
  undefined8 **ppuVar17;
  undefined8 uVar18;
  undefined8 **ppuVar19;
  undefined8 **ppuStack_140;
  undefined *puStack_138;
  undefined8 **ppuStack_130;
  undefined8 **ppuStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined8 **ppuStack_100;
  undefined8 *puStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 **ppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 *puStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  pppuVar5 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(param_1);
  _objc_release(pppuVar5);
  pppuVar5 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(pppuVar5);
  puStack_c8 = (undefined8 *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  pppuVar5 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = pppuVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = param_1;
  ppuStack_98 = pppuVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = ppuVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar6 = param_2;
  ppuStack_a8 = pppuVar5;
  ppuStack_88 = pppuVar5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b0 = pppuVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = param_1;
  ppuStack_b8 = pppuVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = ppuVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar5 = param_2;
  ppuStack_80 = pppuVar6;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  pppuVar7 = pppuVar5;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  pppuVar8 = pppuVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  pppuVar9 = param_2;
  ppuStack_78 = pppuVar8;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  pppuVar10 = pppuVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  pppuVar11 = pppuVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = (undefined8 **)0x4;
  ppuVar12 = (undefined8 **)PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_70 = pppuVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar12;
  func_0x00010beef8c0(puStack_c8);
  _objc_release(ppuVar12);
  _objc_release(pppuVar11);
  _objc_release(ppuVar19);
  _objc_release(pppuVar10);
  _objc_release(pppuVar9);
  _objc_release(pppuVar8);
  _objc_release(ppuVar14);
  _objc_release(pppuVar7);
  _objc_release(pppuVar5);
  _objc_release(pppuVar6);
  _objc_release(puStack_c0);
  _objc_release(ppuStack_b8);
  _objc_release(ppuStack_b0);
  _objc_release(ppuStack_a8);
  _objc_release(puStack_a0);
  _objc_release(ppuStack_98);
  pppuVar13 = (undefined8 ***)ppuStack_90;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar13;
  }
  ___stack_chk_fail();
  puVar4 = puStack_c0;
  puVar3 = puStack_c8;
  pcStack_d8 = FUN_106d02dcc;
  ppuStack_130 = pppuVar6;
  ppuStack_128 = pppuVar10;
  puStack_120 = ppuVar12;
  puStack_118 = ppuVar19;
  ppuStack_110 = pppuVar11;
  ppuStack_108 = pppuVar9;
  ppuStack_100 = pppuVar8;
  puStack_f8 = ppuVar14;
  ppuStack_f0 = pppuVar7;
  ppuStack_e8 = pppuVar5;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar16);
  _objc_retain(ppuVar17);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  puStack_138 = PTR_PTR_1126f6840;
  pppuVar5 = &ppuStack_140;
  ppuStack_140 = pppuVar13;
  _objc_msgSendSuper2(pppuVar5,PTR_s_init_1125d9248);
  if (pppuVar5 != (undefined8 ***)0x0) {
    _objc_retain(ppuVar16);
    ppuVar14 = pppuVar5[1];
    pppuVar5[1] = ppuVar16;
    _objc_release(ppuVar14);
    _objc_retain(puVar4);
    ppuVar14 = pppuVar5[2];
    pppuVar5[2] = (undefined8 **)puVar4;
    _objc_release(ppuVar14);
    _objc_retain(param_8);
    ppuVar14 = pppuVar5[0x18];
    pppuVar5[0x18] = param_8;
    _objc_release(ppuVar14);
    _objc_retain(param_6);
    ppuVar14 = pppuVar5[6];
    pppuVar5[6] = param_6;
    _objc_release(ppuVar14);
    _objc_retain(param_5);
    ppuVar14 = pppuVar5[4];
    pppuVar5[4] = param_5;
    _objc_release(ppuVar14);
    pppuVar5[5] = param_7;
    *(undefined1 *)(pppuVar5 + 8) = uStack_d0;
    _objc_retain(ppuVar17);
    ppuVar14 = pppuVar5[3];
    pppuVar5[3] = ppuVar17;
    _objc_release(ppuVar14);
    *(undefined1 *)((long)pppuVar5 + 0x42) = uStack_cf;
    *(undefined1 *)((long)pppuVar5 + 0x43) = uStack_ce;
    _objc_retain(puVar3);
    ppuVar14 = pppuVar5[7];
    pppuVar5[7] = (undefined8 **)puVar3;
    _objc_release(ppuVar14);
    cVar2 = *(char *)(pppuVar5 + 8);
    puVar15 = PTR_PTR_1126ae568;
    _objc_opt_new();
    lVar1 = 0xb0;
    if (cVar2 == '\0') {
      lVar1 = 0xa8;
    }
    uVar18 = *(undefined8 *)((long)pppuVar5 + lVar1);
    *(undefined **)((long)pppuVar5 + lVar1) = puVar15;
    _objc_release(uVar18);
    ppuVar14 = (undefined8 **)PTR_PTR_1126ae568;
    _objc_opt_new();
    ppuVar19 = pppuVar5[0x17];
    pppuVar5[0x17] = ppuVar14;
    _objc_release(ppuVar19);
    puVar15 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf3e0(pppuVar5[3]);
    _objc_release(puVar15);
    func_0x00010c1d02e0(pppuVar5[3]);
    func_0x00010c21fa60(pppuVar5[3]);
    *(bool *)((long)pppuVar5 + 0x41) = pppuVar5[5] == (undefined8 **)0x0;
    ppuVar14 = pppuVar5[2];
    _objc_retain(param_8);
    _objc_retain(pppuVar5);
    func_0x00010c0f7fc0(ppuVar14);
    _objc_release(pppuVar5);
    _objc_release(param_8);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppuVar17);
  _objc_release(ppuVar16);
  return pppuVar5;
}



/* Entry: 106d02dcc; end: 106d03077; -[SCMemoriesCameraRollAlbumPickerDataProvider initWithSelectedAlbumId:numberFormatter:userTrackedLogger:memoriesExperimentService:origin:assetFetcher:shouldEmitPillViewModel:allowVideoEntries:allowPhotoEntries:memoriesAlbumFetchCacheManager:performer:] */

undefined8 *
FUN_106d02dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f6840;
  puVar3 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar4 = puVar3[1];
    puVar3[1] = param_3;
    _objc_release(uVar4);
    _objc_retain(param_12);
    uVar4 = puVar3[2];
    puVar3[2] = param_12;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar4 = puVar3[0x18];
    puVar3[0x18] = param_8;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = puVar3[6];
    puVar3[6] = param_6;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = puVar3[4];
    puVar3[4] = param_5;
    _objc_release(uVar4);
    puVar3[5] = param_7;
    *(undefined1 *)(puVar3 + 8) = (undefined1)param_9;
    _objc_retain(param_4);
    uVar4 = puVar3[3];
    puVar3[3] = param_4;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar3 + 0x42) = param_9._1_1_;
    *(undefined1 *)((long)puVar3 + 0x43) = param_9._2_1_;
    _objc_retain(param_11);
    uVar4 = puVar3[7];
    puVar3[7] = param_11;
    _objc_release(uVar4);
    cVar2 = *(char *)(puVar3 + 8);
    puVar5 = PTR_PTR_1126ae568;
    _objc_opt_new();
    lVar1 = 0xb0;
    if (cVar2 == '\0') {
      lVar1 = 0xa8;
    }
    uVar4 = *(undefined8 *)((long)puVar3 + lVar1);
    *(undefined **)((long)puVar3 + lVar1) = puVar5;
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar3[0x17];
    puVar3[0x17] = puVar5;
    _objc_release(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf3e0(puVar3[3]);
    _objc_release(puVar5);
    func_0x00010c1d02e0(puVar3[3]);
    func_0x00010c21fa60(puVar3[3]);
    *(bool *)((long)puVar3 + 0x41) = puVar3[5] == 0;
    uVar4 = puVar3[2];
    _objc_retain(param_8);
    _objc_retain(puVar3);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(puVar3);
    _objc_release(param_8);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 106d03078; end: 106d03083;  */

void FUN_106d03078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c125f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_registerChangeObserver__1126271f8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106d03084; end: 106d031e7; -[SCMemoriesCameraRollAlbumPickerDataProvider initWithSelectedAlbumId:numberFormatter:userTrackedLogger:memoriesExperimentService:origin:assetFetcher:shouldEmitPillViewModel:allowVideoEntries:allowPhotoEntries:memoriesAlbumFetchCacheManager:] */

undefined8
FUN_106d03084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3d3de5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x19,0,0xc);
  _objc_release(puVar2);
  func_0x00010c043b40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106d031e8; end: 106d03233; -[SCMemoriesCameraRollAlbumPickerDataProvider dealloc] */

void FUN_106d031e8(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281fa0(*(undefined8 *)(param_1 + 0xc0),param_2,param_1);
  puStack_28 = PTR_PTR_1126f6840;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106d03234; end: 106d0328b; -[SCMemoriesCameraRollAlbumPickerDataProvider fetchAlbumList] */

void FUN_106d03234(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106d0328c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 106d0328c; end: 106d03397;  */

void FUN_106d0328c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be0f320(*(undefined8 *)(param_1 + 0x20));
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar3 + 0x40) == '\x01') {
    if (*(char *)(lVar3 + 0x41) == '\x01') {
      func_0x00010be07780(lVar3);
    }
    else {
      uStack_40 = *(undefined8 *)(lVar3 + 0x50);
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be077a0(lVar3,param_2,puVar1);
      _objc_release(puVar1);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = uVar4;
      func_0x00010bdc9e00();
      _objc_retainAutoreleasedReturnValue();
      param_3 = uVar2;
      func_0x00010be077a0(uVar4);
      _objc_release(uVar2);
    }
  }
  else {
    func_0x00010be07780(lVar3);
    func_0x00010bde2700(*(undefined8 *)(param_1 + 0x20));
  }
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010be57080();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_106d03398;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106d033f0;
  puStack_68 = &UNK_110848c48;
  lStack_60 = lVar3;
  uStack_58 = param_3;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010c0f7fc0(*(undefined8 *)(lVar3 + 0x10),param_2,&puStack_80);
  return;
}



/* Entry: 106d03398; end: 106d033ef; -[SCMemoriesCameraRollAlbumPickerDataProvider selectAlbum:] */

void FUN_106d03398(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106d033f0;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_40);
  return;
}



/* Entry: 106d033f0; end: 106d034a7;  */

void FUN_106d033f0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0xa0);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa0);
    func_0x00010c0dfd40(uVar3,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = uVar4;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
    uVar4 = uVar3;
    func_0x00010bf51e00(uVar3);
    func_0x00010c0d9840(uVar5,param_2,uVar4);
    _objc_release(uVar4);
    func_0x00010be58500(*(undefined8 *)(param_1 + 0x20),param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 106d034a8; end: 106d034cf; -[SCMemoriesCameraRollAlbumPickerDataProvider albumListObservable] */

void FUN_106d034a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d034d0; end: 106d034f7; -[SCMemoriesCameraRollAlbumPickerDataProvider albumPillsObservable] */

void FUN_106d034d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d034f8; end: 106d0351f; -[SCMemoriesCameraRollAlbumPickerDataProvider selectedAlbumObservable] */

void FUN_106d034f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106d03520; end: 106d035af; -[SCMemoriesCameraRollAlbumPickerDataProvider photoLibraryDidChange:] */

void FUN_106d03520(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106d035b0;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 106d035b0; end: 106d03e47;  */

void FUN_106d035b0(long param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
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
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x20);
  func_0x00010bf34e60(lVar6,param_2,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x80));
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
LAB_106d03640:
    bVar5 = 0;
  }
  else {
    lVar7 = lVar6;
    func_0x00010bfa9d60();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf529e0();
    lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x80);
    func_0x00010bf529e0();
    _objc_release(lVar7);
    if (lVar8 == lVar9) goto LAB_106d03640;
    lVar7 = lVar6;
    func_0x00010bfa9d60();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x90);
    *(long *)(*(long *)(param_1 + 0x28) + 0x90) = lVar7;
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x50);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar9;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar14);
    lVar8 = lVar7;
    func_0x00010c08fa60();
    if (lVar8 != 0) {
      func_0x00010bf6be00(uVar14);
    }
    _objc_release(uVar14);
    _objc_release(lVar7);
    _objc_release(lVar9);
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6be00();
    _objc_release(uVar14);
    func_0x00010be13780(*(undefined8 *)(param_1 + 0x28));
    bVar5 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  func_0x00010bf34e60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
LAB_106d03780:
    bVar4 = 0;
  }
  else {
    lVar8 = lVar7;
    func_0x00010bfa9d60();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf529e0();
    lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 0x88);
    func_0x00010bf529e0();
    _objc_release(lVar8);
    if (lVar9 == lVar10) goto LAB_106d03780;
    lVar8 = lVar7;
    func_0x00010bfa9d60();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x90);
    *(long *)(*(long *)(param_1 + 0x28) + 0x90) = lVar8;
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 0x58);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar10;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar14);
    lVar9 = lVar8;
    func_0x00010c08fa60();
    if (lVar9 != 0) {
      func_0x00010bf6be00(uVar14);
    }
    _objc_release(uVar14);
    _objc_release(lVar8);
    _objc_release(lVar10);
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6be00();
    _objc_release(uVar14);
    func_0x00010be11160(*(undefined8 *)(param_1 + 0x28));
    bVar4 = 1;
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 0x48);
  _objc_retain(lVar10);
  lVar8 = lVar10;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar8 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar10);
      }
      lVar11 = *(long *)(param_1 + 0x20);
      lVar12 = *(long *)(param_1 + 0x28);
      uVar14 = *(undefined8 *)(lVar12 + 0xc0);
      func_0x00010be12ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa50c0(uVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf34e60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
      _objc_release(lVar12);
      _objc_release(lVar11);
      if (lVar11 != 0) {
        _objc_release(lVar10);
        func_0x00010bddee00(*(undefined8 *)(param_1 + 0x28));
        func_0x00010be15420(*(undefined8 *)(param_1 + 0x28));
        bVar3 = 1;
        goto LAB_106d03988;
      }
      lVar15 = lVar15 + 1;
    } while (lVar8 != lVar15);
    lVar8 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  bVar3 = 0;
LAB_106d03988:
  lVar8 = *(long *)(param_1 + 0x20);
  func_0x00010bf34e60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
LAB_106d039e0:
    bVar2 = 0;
  }
  else {
    lVar9 = lVar8;
    func_0x00010bfa9d60();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf529e0();
    lVar15 = *(long *)(*(long *)(param_1 + 0x28) + 0x90);
    func_0x00010bf529e0();
    _objc_release(lVar9);
    if (lVar10 == lVar15) goto LAB_106d039e0;
    lVar9 = lVar8;
    func_0x00010bfa9d60();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x90);
    *(long *)(*(long *)(param_1 + 0x28) + 0x90) = lVar9;
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = *(long *)(*(long *)(param_1 + 0x28) + 0x68);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar15;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar14);
    lVar10 = lVar9;
    func_0x00010c08fa60();
    if (lVar10 != 0) {
      func_0x00010bf6be00(uVar14);
    }
    _objc_release(uVar14);
    _objc_release(lVar9);
    _objc_release(lVar15);
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6be00();
    _objc_release(uVar14);
    func_0x00010be154c0(*(undefined8 *)(param_1 + 0x28));
    bVar2 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x20);
  func_0x00010bf34e60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 == 0) {
LAB_106d03b1c:
    bVar1 = 0;
  }
  else {
    lVar10 = lVar9;
    func_0x00010bfa9d60();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar10;
    func_0x00010bf529e0();
    lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 0x98);
    func_0x00010bf529e0();
    _objc_release(lVar10);
    if (lVar15 == lVar11) goto LAB_106d03b1c;
    lVar10 = lVar9;
    func_0x00010bfa9d60();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x98);
    *(long *)(*(long *)(param_1 + 0x28) + 0x98) = lVar10;
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 0x70);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar11;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar14);
    lVar15 = lVar10;
    func_0x00010c08fa60();
    if (lVar15 != 0) {
      func_0x00010bf6be00(uVar14);
    }
    _objc_release(uVar14);
    _objc_release(lVar10);
    _objc_release(lVar11);
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6be00();
    _objc_release(uVar14);
    func_0x00010be13da0(*(undefined8 *)(param_1 + 0x28));
    bVar1 = 1;
  }
  lVar10 = *(long *)(param_1 + 0x20);
  func_0x00010bf34e60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar10 == 0) {
LAB_106d03c88:
    if (!(bool)(bVar5 | bVar4 | bVar3 | bVar2 | bVar1)) goto LAB_106d03de4;
  }
  else {
    lVar15 = lVar10;
    func_0x00010bfa9d60();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar15;
    func_0x00010bf529e0();
    lVar12 = *(long *)(*(long *)(param_1 + 0x28) + 0x78);
    func_0x00010bf529e0();
    _objc_release(lVar15);
    if (lVar11 == lVar12) goto LAB_106d03c88;
    lVar15 = lVar10;
    func_0x00010bfa9d60();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x78);
    *(long *)(*(long *)(param_1 + 0x28) + 0x78) = lVar15;
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = *(long *)(*(long *)(param_1 + 0x28) + 0x60);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar12;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar14);
    lVar11 = lVar15;
    func_0x00010c08fa60();
    if (lVar11 != 0) {
      func_0x00010bf6be00(uVar14);
    }
    _objc_release(uVar14);
    _objc_release(lVar15);
    _objc_release(lVar12);
    _objc_release(uVar14);
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6be00();
    _objc_release(uVar14);
    func_0x00010be13c00(*(undefined8 *)(param_1 + 0x28));
  }
  lVar15 = *(long *)(param_1 + 0x28);
  if (*(char *)(lVar15 + 0x40) == '\x01') {
    if (*(char *)(lVar15 + 0x41) == '\x01') {
      func_0x00010be07780(lVar15);
      func_0x00010bde2700(*(undefined8 *)(param_1 + 0x28));
    }
    else {
      lVar11 = lVar15;
      func_0x00010bdc9e00(lVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be077a0(lVar15);
      _objc_release(lVar11);
    }
  }
  else {
    func_0x00010be07780(lVar15);
  }
LAB_106d03de4:
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be0f350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106d03e48; end: 106d03e4b; -[SCMemoriesCameraRollAlbumPickerDataProvider _fetchAlbums] */

void FUN_106d03e48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0f350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchAlbumsWithCache_112561670);
  return;
}



/* Entry: 106d03e4c; end: 106d0423f; -[SCMemoriesCameraRollAlbumPickerDataProvider _refreshCachedSmartAlbumIfStale:albumSubtype:] */

undefined8 FUN_106d03e4c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
  ulong uVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfa9d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = *(long *)(param_1 + 0xc0);
  func_0x00010bfa4f60(lVar3,param_2,2,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = *(long *)(param_1 + 0xc0);
    lVar13 = param_1;
    func_0x00010be12ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa50c0(lVar1,param_2,lVar4,lVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
  }
  if (lVar5 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)(param_1 + 0xc0);
    lVar15 = param_1;
    func_0x00010be12ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa50c0(lVar13,param_2,lVar5,lVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar15);
  }
  lVar15 = lVar13;
  func_0x00010bf529e0();
  lVar16 = lVar1;
  func_0x00010bf529e0();
  lVar6 = lVar13;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c09da80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010c09da80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010c08fa60();
  if ((lVar10 == 0) && (lVar10 = lVar9, func_0x00010c08fa60(), lVar10 == 0)) {
    uVar12 = 0;
LAB_106d0403c:
    if ((lVar15 == lVar16) && (uVar12 == 0)) {
      uVar14 = 0;
      goto LAB_106d041c4;
    }
  }
  else {
    lVar10 = lVar8;
    func_0x00010c08fa60();
    if ((lVar10 != 0) && (lVar10 = lVar9, func_0x00010c08fa60(), lVar10 != 0)) {
      lVar10 = lVar8;
      func_0x00010c0720c0(lVar8,param_2,lVar9);
      uVar12 = (uint)lVar10 ^ 1;
      goto LAB_106d0403c;
    }
  }
  uVar11 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e840b8);
  if ((uVar11 & 1) == 0) {
    uVar11 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e840d8);
    if ((uVar11 & 1) != 0) {
      lVar15 = 0x88;
      lVar16 = 0x58;
      goto LAB_106d040ec;
    }
    uVar11 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e840f8);
    if ((uVar11 & 1) != 0) {
      lVar15 = 0x90;
      lVar16 = 0x68;
      goto LAB_106d040ec;
    }
    uVar11 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e84118);
    if ((uVar11 & 1) != 0) {
      lVar15 = 0x98;
      lVar16 = 0x70;
      goto LAB_106d040ec;
    }
    uVar11 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e84138);
    if ((int)uVar11 != 0) {
      lVar15 = 0x78;
      lVar16 = 0x60;
      goto LAB_106d040ec;
    }
  }
  else {
    lVar15 = 0x80;
    lVar16 = 0x50;
LAB_106d040ec:
    _objc_retain(lVar3);
    uVar14 = *(undefined8 *)(param_1 + lVar16);
    *(long *)(param_1 + lVar16) = lVar3;
    _objc_release(uVar14);
    _objc_retain(lVar1);
    uVar14 = *(undefined8 *)(param_1 + lVar15);
    *(long *)(param_1 + lVar15) = lVar1;
    _objc_release(uVar14);
  }
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6be00();
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar5;
  func_0x00010c09da80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar14);
  lVar16 = lVar15;
  func_0x00010c08fa60();
  if (lVar16 != 0) {
    func_0x00010bf6be00(uVar14,param_2,lVar15);
  }
  _objc_release(uVar14);
  _objc_release(lVar15);
  _objc_release(uVar14);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226280();
  _objc_release(uVar14);
  uVar14 = 1;
LAB_106d041c4:
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar13);
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  return uVar14;
}



/* Entry: 106d04240; end: 106d047eb; -[SCMemoriesCameraRollAlbumPickerDataProvider _compareCachedResults] */

/* WARNING: Possible PIC construction at 0x000106d0478c: Changing call to branch */

void FUN_106d04240(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  uint uStack_22c;
  long lStack_228;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010be88400(param_1,param_2,&PTR____CFConstantStringClassReference_110e840b8,0xd1);
  lVar3 = param_1;
  func_0x00010be88400();
  lVar4 = param_1;
  func_0x00010be88400();
  lVar5 = param_1;
  func_0x00010be88400();
  lVar6 = param_1;
  func_0x00010be88400();
  lVar7 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfa9d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  puVar9 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  _objc_opt_new();
  puVar10 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar9);
  _objc_release(puVar11);
  _objc_release(puVar10);
  func_0x00010be12280(param_1);
  func_0x00010c19b420(puVar9);
  lVar12 = *(long *)(param_1 + 0xc0);
  func_0x00010bfa4f60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar8;
  func_0x00010bf529e0();
  lVar13 = lVar12;
  func_0x00010bf529e0();
  if (lVar7 == lVar13) {
    lVar13 = param_1;
    func_0x00010be12ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar12);
    lStack_228 = lVar12;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    if (lStack_228 == 0) {
      _objc_release(lVar12);
      _objc_release(lVar13);
LAB_106d04744:
      if ((((uint)lVar2 | (uint)lVar3 | (uint)lVar4 | (uint)lVar5 | (uint)lVar6) & 1) != 0) {
        func_0x00010be07780(param_1);
      }
      _objc_release(lVar12);
      _objc_release(puVar9);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010be13780();
      func_0x00010be11160(lVar8);
      func_0x00010be154c0(lVar8);
      if ((*(char *)(lVar8 + 0x41) == '\x01') && ((*(byte *)(lVar8 + 0x40) & 1) != 0)) {
        return;
      }
      func_0x00010be13da0(lVar8);
      func_0x00010be13c00(lVar8);
      goto code_r0x00010be15420;
    }
    uStack_22c = 0;
LAB_106d0444c:
    lVar29 = 0;
LAB_106d04450:
    if (lRam0000000000000000 != lVar7) {
      _objc_enumerationMutation(lVar12);
    }
    uVar27 = *(undefined8 *)(lVar29 * 8);
    _objc_retain(lVar8);
    lVar14 = lVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar14 != 0) {
      lVar28 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar8);
        }
        uVar26 = *(ulong *)(lVar28 * 8);
        uVar25 = uVar26;
        func_0x00010c09da80();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar27;
        func_0x00010c09da80(uVar27);
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar25;
        func_0x00010c0720c0();
        _objc_release(uVar15);
        _objc_release(uVar25);
        if ((uVar16 & 1) != 0) {
          _objc_retain(uVar26);
          _objc_release(lVar8);
          if (uVar26 == 0) goto LAB_106d04764;
          uVar17 = *(ulong *)(param_1 + 0xc0);
          func_0x00010bfa50c0();
          _objc_retainAutoreleasedReturnValue();
          uVar18 = *(ulong *)(param_1 + 0xc0);
          func_0x00010bfa50c0();
          _objc_retainAutoreleasedReturnValue();
          uVar25 = uVar17;
          func_0x00010bf529e0();
          uVar16 = uVar18;
          func_0x00010bf529e0();
          uVar19 = uVar17;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          uVar20 = uVar18;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          if (uVar25 == uVar16) {
            uVar16 = uVar19;
            func_0x00010c09da80();
            _objc_retainAutoreleasedReturnValue();
            if (uVar16 != 0) {
              uVar21 = uVar20;
              func_0x00010c09da80();
              _objc_retainAutoreleasedReturnValue();
              if (uVar21 != 0) {
                uVar22 = uVar19;
                func_0x00010c09da80();
                _objc_retainAutoreleasedReturnValue();
                uVar23 = uVar20;
                func_0x00010c09da80(uVar20);
                _objc_retainAutoreleasedReturnValue();
                uVar25 = uVar22;
                func_0x00010c0720c0();
                _objc_release(uVar23);
                _objc_release(uVar22);
                _objc_release(uVar21);
                _objc_release(uVar16);
                uStack_22c = (uint)uVar25 ^ 1 | uStack_22c;
                goto LAB_106d046a8;
              }
              _objc_release(uVar16);
            }
            uVar25 = 1;
          }
          else {
            uVar25 = 0;
            uStack_22c = 1;
          }
LAB_106d046a8:
          _objc_release(uVar20);
          _objc_release(uVar19);
          _objc_release(uVar18);
          _objc_release(uVar17);
          _objc_release(uVar26);
          if ((uVar25 & 1) != 0) {
            lVar29 = lVar29 + 1;
            if (lVar29 != lStack_228) goto LAB_106d04450;
            lStack_228 = lVar12;
            func_0x00010bf52a60();
            if (lStack_228 != 0) goto LAB_106d0444c;
          }
          _objc_release(lVar12);
          _objc_release(lVar13);
          if ((uStack_22c & 1) == 0) goto LAB_106d04744;
          goto LAB_106d04780;
        }
        lVar28 = lVar28 + 1;
      } while (lVar14 != lVar28);
      lVar14 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
LAB_106d04764:
    _objc_release(lVar12);
    _objc_release(lVar13);
  }
LAB_106d04780:
  func_0x00010bddee00(param_1);
  lVar8 = param_1;
code_r0x00010be15420:
                    /* WARNING: Could not recover jumptable at 0x00010be15430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar8,PTR_s__fetchUsersAlbums_112562ea8);
  return;
}



/* Entry: 106d047ec; end: 106d0484f; -[SCMemoriesCameraRollAlbumPickerDataProvider _fetchAlbumsWithCache] */

void FUN_106d047ec(long param_1)

{
  func_0x00010be13780();
  func_0x00010be11160(param_1);
  func_0x00010be154c0(param_1);
  if ((*(char *)(param_1 + 0x41) == '\x01') && ((*(byte *)(param_1 + 0x40) & 1) != 0)) {
    return;
  }
  func_0x00010be13da0(param_1);
  func_0x00010be13c00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be15430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchUsersAlbums_112562ea8);
  return;
}



/* Entry: 106d04850; end: 106d04993; -[SCMemoriesCameraRollAlbumPickerDataProvider _fetchRecents] */

void FUN_106d04850(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfa9d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_retain(lVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = lVar3;
  _objc_release(uVar2);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0xc0);
    func_0x00010bfa4f60(lVar3,param_2,2,0xd1,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c226280();
    _objc_release(uVar2);
    _objc_retain(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(long *)(param_1 + 0x50) = lVar3;
    _objc_release(uVar2);
    lVar1 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0xc0);
      lVar4 = param_1;
      func_0x00010be12ec0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa50c0(uVar2,param_2,lVar1,lVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x80) = uVar2;
      _objc_release(uVar5);
      _objc_release(lVar4);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106d04994; end: 106d04ad7; -[SCMemoriesCameraRollAlbumPickerDataProvider _fetchFavorites] */

void FUN_106d04994(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfa9d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_retain(lVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar3;
  _objc_release(uVar2);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0xc0);
    func_0x00010bfa4f60(lVar3,param_2,2,0xcb,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c226280();
    _objc_release(uVar2);
  }
  _objc_retain(lVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar3;
  _objc_release(uVar2);
  lVar1 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    lVar4 = param_1;
    func_0x00010be12ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa50c0(uVar2,param_2,lVar1,lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106d04ad8; end: 106d04c1b; -[SCMemoriesCameraRollAlbumPickerDataProvider _fetchVideos] */

void FUN_106d04ad8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfa9d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_retain(lVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = lVar3;
  _objc_release(uVar2);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0xc0);
    func_0x00010bfa4f60(lVar3,param_2,2,0xca,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c226280();
    _objc_release(uVar2);
  }
  _objc_retain(lVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = lVar3;
  _objc_release(uVar2);
  lVar1 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    lVar4 = param_1;
    func_0x00010be12ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa50c0(uVar2,param_2,lVar1,lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = uVar2;
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106d04c1c; end: 106d04d5f; -[SCMemoriesCameraRollAlbumPickerDataProvider _fetchSelfies] */

void FUN_106d04c1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfa9d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_retain(lVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar3;
  _objc_release(uVar2);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0xc0);
    func_0x00010bfa4f60(lVar3,param_2,2,0xd2,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c226280();
    _objc_release(uVar2);
  }
  _objc_retain(lVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar3;
  _objc_release(uVar2);
  lVar1 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    lVar4 = param_1;
    func_0x00010be12ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa50c0(uVar2,param_2,lVar1,lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = uVar2;
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106d04d60; end: 106d04ea3; -[SCMemoriesCameraRollAlbumPickerDataProvider _fetchScreenshots] */

void FUN_106d04d60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfa9d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_retain(lVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(long *)(param_1 + 0x60) = lVar3;
  _objc_release(uVar2);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0xc0);
    func_0x00010bfa4f60(lVar3,param_2,2,0xd3,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c226280();
    _objc_release(uVar2);
  }
  _objc_retain(lVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(long *)(param_1 + 0x60) = lVar3;
  _objc_release(uVar2);
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    lVar4 = param_1;
    func_0x00010be12ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa50c0(uVar2,param_2,lVar1,lVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = uVar2;
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106d04ea4; end: 106d0501b; -[SCMemoriesCameraRollAlbumPickerDataProvider _fetchUsersAlbums] */

void FUN_106d04ea4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *in_x5;
  undefined *puVar9;
  long lVar10;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *puStack_670;
  long lStack_668;
  undefined *puStack_660;
  undefined *puStack_658;
  undefined *puStack_650;
  undefined *puStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined *puStack_630;
  undefined8 uStack_628;
  undefined8 ***pppuStack_620;
  code *pcStack_618;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  long lStack_5d8;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  undefined *puStack_5c0;
  long lStack_5b8;
  undefined *puStack_5b0;
  undefined *puStack_5a8;
  undefined *puStack_5a0;
  undefined *puStack_598;
  undefined8 uStack_590;
  long lStack_588;
  long *plStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 auStack_510 [128];
  undefined1 auStack_490 [128];
  long lStack_410;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined1 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_3a0;
  long lStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2e8 [128];
  undefined1 auStack_268 [128];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [128];
  long lStack_98;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                      &PTR____CFConstantStringClassReference_110e84098,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206840(puVar9,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  lVar10 = param_1;
  func_0x00010be12280(param_1);
  func_0x00010c19b420(puVar9,param_2,lVar10);
  puVar1 = *(undefined **)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfa9d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = *(undefined **)(param_1 + 0xc0);
    func_0x00010bfa4f60(puVar2,param_2,1,2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = *(undefined **)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c226280();
    _objc_release(puVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar2;
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_106d0501c;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(puVar9 + 0x38);
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6be00();
  _objc_release(uVar3);
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  puStack_150 = (undefined8 *)0x0;
  puVar2 = *(undefined **)(puVar9 + 0x48);
  _objc_retain(puVar2);
  puVar4 = puVar2;
  func_0x00010bf52a60(puVar2,param_2,&uStack_160,auStack_118,0x10);
  if (puVar4 != (undefined *)0x0) {
    unaff_x24 = (undefined *)*puStack_150;
    do {
      unaff_x25 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_150 != unaff_x24) {
          _objc_enumerationMutation(puVar2);
        }
        unaff_x23 = *(undefined **)(lStack_158 + (long)unaff_x25 * 8);
        puVar1 = *(undefined **)(puVar9 + 0x38);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09da80();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar1);
        puVar5 = unaff_x23;
        func_0x00010c08fa60();
        if (puVar5 != (undefined *)0x0) {
          func_0x00010bf6be00(puVar1,param_2,unaff_x23);
        }
        _objc_release(puVar1);
        _objc_release(unaff_x23);
        _objc_release(puVar1);
        unaff_x25 = unaff_x25 + 1;
      } while (puVar4 != unaff_x25);
      puVar4 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_160,auStack_118,0x10);
    } while (puVar4 != (undefined *)0x0);
  }
  puVar9 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_106d0519c;
  lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_170 = &puStack_50;
  if ((puVar9[0x41] == '\x01') && (puVar9[0x40] == '\x01')) {
    uStack_1e0 = *(undefined8 *)(puVar9 + 0x58);
    uStack_1e8 = *(undefined8 *)(puVar9 + 0x50);
    uStack_1d8 = *(undefined8 *)(puVar9 + 0x68);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_1e8,3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010be077a0(puVar9);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar1 = puVar9;
    puStack_378 = puVar2;
    func_0x00010bdc9e00();
    _objc_retainAutoreleasedReturnValue();
    lStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    plStack_320 = (long *)0x0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    puStack_3a0 = puVar1;
    func_0x00010bf52a60();
    puStack_390 = puVar1;
    if (puVar1 != (undefined *)0x0) {
      lStack_398 = *plStack_320;
      do {
        puVar2 = (undefined *)0x0;
        do {
          if (*plStack_320 != lStack_398) {
            _objc_enumerationMutation(puStack_3a0);
          }
          puVar1 = *(undefined **)(lStack_328 + (long)puVar2 * 8);
          lStack_368 = 0;
          uStack_370 = 0;
          uStack_358 = 0;
          plStack_360 = (long *)0x0;
          uStack_348 = 0;
          uStack_350 = 0;
          uStack_338 = 0;
          uStack_340 = 0;
          puStack_388 = puVar2;
          _objc_retain(puVar1);
          puStack_380 = puVar1;
          func_0x00010bf52a60(puVar1,param_2,&uStack_370,auStack_2e8,0x10);
          if (puVar1 != (undefined *)0x0) {
            lVar10 = *plStack_360;
            unaff_x25 = puVar1;
            do {
              unaff_x24 = (undefined *)0x0;
              do {
                if (*plStack_360 != lVar10) {
                  _objc_enumerationMutation(puStack_380);
                }
                unaff_x26 = *(undefined **)(lStack_368 + (long)unaff_x24 * 8);
                puVar1 = *(undefined **)(puVar9 + 0x38);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                puVar2 = unaff_x26;
                func_0x00010c09da80(unaff_x26);
                _objc_retainAutoreleasedReturnValue();
                unaff_x28 = puVar1;
                func_0x00010bf3fde0(puVar1,param_2,puVar2);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar2);
                _objc_release(puVar1);
                unaff_x27 = *(undefined **)(puVar9 + 0xc0);
                unaff_x23 = puVar9;
                func_0x00010be12ec0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfa50c0(unaff_x27,param_2,unaff_x26,unaff_x23);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x23);
                if (unaff_x28 == (undefined *)0x0) {
                  puVar2 = unaff_x27;
                  func_0x00010bfb1920();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (puVar2 != (undefined *)0x0) {
                    puVar2 = unaff_x26;
                    func_0x00010bf996a0(unaff_x26);
                    unaff_x23 = unaff_x27;
                    func_0x00010bfb1920();
                    _objc_retainAutoreleasedReturnValue();
                    in_x5 = unaff_x26;
                    func_0x00010bf0b020(unaff_x26);
                    unaff_x28 = puVar9;
                    func_0x00010bde6880(puVar9,param_2,unaff_x26,puVar2,unaff_x23,in_x5);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(unaff_x23);
                    if (unaff_x28 != (undefined *)0x0) goto LAB_106d053a4;
                  }
                }
                else {
LAB_106d053a4:
                  uVar3 = *(undefined8 *)(puVar9 + 8);
                  puVar2 = unaff_x26;
                  func_0x00010c09da80(unaff_x26);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0720c0(uVar3,param_2,puVar2);
                  func_0x00010c1b4280(unaff_x28,param_2,uVar3);
                  _objc_release(puVar2);
                  uVar3 = *(undefined8 *)(puVar9 + 0x38);
                  func_0x00010c269d40(uVar3);
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x23 = unaff_x26;
                  func_0x00010c09da80();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c225fc0(uVar3,param_2,unaff_x28,unaff_x23);
                  _objc_release(unaff_x23);
                  _objc_release(uVar3);
                  puVar2 = unaff_x26;
                  func_0x00010bf51e00(unaff_x26);
                  func_0x00010befa120(puVar4,param_2,puVar2);
                  _objc_release(puVar2);
                  func_0x00010befa120(puStack_378,param_2,unaff_x28);
                  _objc_release(unaff_x28);
                }
                _objc_release(unaff_x27);
                unaff_x24 = unaff_x24 + 1;
              } while (unaff_x25 != unaff_x24);
              unaff_x25 = puStack_380;
              func_0x00010bf52a60(puStack_380,param_2,&uStack_370,auStack_2e8,0x10);
            } while (unaff_x25 != (undefined *)0x0);
          }
          _objc_release(puStack_380);
          puVar2 = puStack_388 + 1;
        } while (puVar2 != puStack_390);
        puVar2 = puStack_3a0;
        func_0x00010bf52a60(puStack_3a0,param_2,&uStack_330,auStack_268,0x10);
        puStack_390 = puVar2;
      } while (puVar2 != (undefined *)0x0);
    }
    puVar2 = puVar4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(puVar9 + 0xa0);
    *(undefined **)(puVar9 + 0xa0) = puVar2;
    _objc_release(uVar3);
    puVar2 = puStack_378;
    puVar1 = puStack_378;
    func_0x00010bf51e00();
    puVar5 = puVar1;
    func_0x00010c0d9840(*(undefined8 *)(puVar9 + 0xa8));
    _objc_release(puVar1);
    _objc_release(puStack_3a0);
    _objc_release(puVar2);
  }
  puVar6 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_3a8 = FUN_106d055c8;
  lStack_410 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_400 = unaff_x28;
  puStack_3f8 = unaff_x27;
  puStack_3f0 = unaff_x26;
  puStack_3e8 = unaff_x25;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  puStack_3d0 = puVar1;
  puStack_3c8 = puVar4;
  puStack_3c0 = puVar2;
  puStack_3b8 = puVar9;
  pppuStack_3b0 = &ppuStack_170;
  _objc_retain(puVar5);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_598 = puVar9;
  _objc_opt_new();
  lStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  plStack_540 = (long *)0x0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  puStack_5a0 = puVar2;
  _objc_retain(puVar5);
  uVar8 = 0x10;
  puVar9 = puVar5;
  func_0x00010bf52a60(puVar5,param_2,&uStack_550,auStack_490,0x10);
  puStack_5c0 = puVar5;
  puStack_5b0 = puVar9;
  if (puVar9 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  else {
    unaff_x23 = (undefined *)0x0;
    lStack_5b8 = *plStack_540;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_540 != lStack_5b8) {
          _objc_enumerationMutation(puStack_5c0);
        }
        unaff_x25 = *(undefined **)(lStack_548 + (long)puVar9 * 8);
        lStack_588 = 0;
        uStack_590 = 0;
        uStack_578 = 0;
        plStack_580 = (long *)0x0;
        uStack_568 = 0;
        uStack_570 = 0;
        uStack_558 = 0;
        uStack_560 = 0;
        puStack_5a8 = puVar9;
        _objc_retain(unaff_x25);
        puVar9 = unaff_x25;
        func_0x00010bf52a60(unaff_x25,param_2,&uStack_590,auStack_510,0x10);
        if (puVar9 != (undefined *)0x0) {
          lVar10 = *plStack_580;
          unaff_x26 = puVar9;
          do {
            puVar9 = (undefined *)0x0;
            do {
              if (*plStack_580 != lVar10) {
                _objc_enumerationMutation(unaff_x25);
              }
              puVar1 = *(undefined **)(lStack_588 + (long)puVar9 * 8);
              puVar2 = puVar1;
              func_0x00010bf996a0(puVar1);
              if ((puVar6[0x41] & 1) == 0) {
                unaff_x24 = *(undefined **)(puVar6 + 0xc0);
                puVar2 = puVar6;
                func_0x00010be12ec0(puVar6);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfa50c0(unaff_x24,param_2,puVar1,puVar2);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar2);
                puVar2 = unaff_x24;
                func_0x00010bf529e0(unaff_x24);
                _objc_release(unaff_x24);
              }
              puVar4 = puVar6;
              func_0x00010bde6da0(puVar6,param_2,puVar1,puVar2);
              _objc_retainAutoreleasedReturnValue();
              if (puVar4 != (undefined *)0x0) {
                if (((ulong)unaff_x23 & 1) == 0) {
                  unaff_x23 = puVar4;
                  func_0x00010c07d660();
                }
                else {
                  unaff_x23 = (undefined *)0x1;
                }
                func_0x00010bf51e00(puVar1);
                func_0x00010befa120(puStack_598,param_2,puVar1);
                _objc_release(puVar1);
                func_0x00010befa120(puStack_5a0,param_2,puVar4);
              }
              _objc_release(puVar4);
              puVar9 = puVar9 + 1;
            } while (unaff_x26 != puVar9);
            unaff_x26 = unaff_x25;
            func_0x00010bf52a60(unaff_x25,param_2,&uStack_590,auStack_510,0x10);
          } while (unaff_x26 != (undefined *)0x0);
        }
        _objc_release(unaff_x25);
        puVar9 = puStack_5a8 + 1;
      } while (puVar9 != puStack_5b0);
      uVar8 = 0x10;
      puVar9 = puStack_5c0;
      func_0x00010bf52a60(puStack_5c0,param_2,&uStack_550,auStack_490,0x10);
      puStack_5b0 = puVar9;
    } while (puVar9 != (undefined *)0x0);
    _objc_release(puStack_5c0);
    if (((ulong)unaff_x23 & 1) != 0) goto LAB_106d05984;
  }
  puVar9 = puStack_598;
  func_0x00010bf529e0();
  if (((puVar9 != (undefined *)0x0) &&
      (puVar9 = puStack_5a0, func_0x00010bf529e0(), puVar9 != (undefined *)0x0)) &&
     ((puVar6[0x41] & 1) == 0)) {
    unaff_x23 = *(undefined **)(puVar6 + 8);
    _objc_retain(unaff_x23);
    puVar9 = puStack_598;
    func_0x00010c0dfd40(puStack_598,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(puVar6 + 8);
    *(undefined **)(puVar6 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_release(puVar9);
    unaff_x24 = PTR_PTR_1126d22d0;
    _objc_alloc();
    puVar9 = puStack_5a0;
    unaff_x25 = puStack_5a0;
    func_0x00010c0dfd40(puStack_5a0,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = unaff_x25;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = (ulong)(byte)puVar6[0x41];
    func_0x00010c053180(unaff_x24,param_2,unaff_x26,1,uVar8);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    func_0x00010c12d3c0(puVar9,param_2,0);
    func_0x00010c066b00(puVar9,param_2,unaff_x24,0);
    if ((unaff_x23 != (undefined *)0x0) &&
       (puVar9 = unaff_x23, func_0x00010c0720c0(unaff_x23,param_2,*(undefined8 *)(puVar6 + 8)),
       ((ulong)puVar9 & 1) == 0)) {
      uVar3 = *(undefined8 *)(puVar6 + 0xb8);
      unaff_x25 = puStack_598;
      func_0x00010c0dfd40(puStack_598,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = unaff_x25;
      func_0x00010bf51e00();
      func_0x00010c0d9840(uVar3,param_2,unaff_x26);
      _objc_release(unaff_x26);
      _objc_release(unaff_x25);
    }
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
  }
LAB_106d05984:
  puVar2 = puStack_598;
  puVar9 = puStack_598;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(puVar6 + 0xa0);
  *(undefined **)(puVar6 + 0xa0) = puVar9;
  _objc_release(uVar3);
  puVar9 = puStack_5a0;
  uVar3 = *(undefined8 *)(puVar6 + 0xb0);
  puVar1 = puStack_5a0;
  func_0x00010bf51e00();
  func_0x00010c0d9840(uVar3,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar9);
  _objc_release(puVar2);
  puVar4 = puStack_5c0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_410) {
    ___stack_chk_fail();
    pcStack_5c8 = FUN_106d05a1c;
    lStack_5d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_600 = *(undefined8 *)(puVar4 + 0x58);
    uStack_608 = *(undefined8 *)(puVar4 + 0x50);
    uStack_5f0 = *(undefined8 *)(puVar4 + 0x70);
    uStack_5f8 = *(undefined8 *)(puVar4 + 0x68);
    uStack_5e8 = *(undefined8 *)(puVar4 + 0x60);
    uStack_5e0 = *(undefined8 *)(puVar4 + 0x48);
    lVar10 = 6;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    pppuStack_5d0 = &pppuStack_3b0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_608);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5d8) {
      ___stack_chk_fail();
      puStack_640 = puVar9;
      puStack_630 = puVar2;
      pcStack_618 = FUN_106d05a98;
      lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puStack_660 = unaff_x26;
      puStack_658 = unaff_x25;
      puStack_650 = unaff_x24;
      puStack_648 = unaff_x23;
      puStack_638 = puVar1;
      uStack_628 = uVar3;
      pppuStack_620 = &pppuStack_5d0;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                          &PTR____CFConstantStringClassReference_110e84178);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar9,param_2,puVar2);
      puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                          &PTR____CFConstantStringClassReference_110e84198);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar9,param_2,puVar1);
      if ((puVar4[0x43] & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                            &PTR____CFConstantStringClassReference_110e841b8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar9,param_2,puVar5);
        _objc_release(puVar5);
      }
      if ((puVar4[0x42] & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                            &PTR____CFConstantStringClassReference_110e841b8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar9,param_2,puVar5);
        _objc_release(puVar5);
      }
      puVar5 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
      _objc_opt_new();
      if (puVar4[0x41] == '\x01') {
        func_0x00010c19b420(puVar5,param_2,1);
        puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
        func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                            &PTR____CFConstantStringClassReference_110e61838,0);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = 1;
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_670 = puVar4;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c206840(puVar5,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(puVar4);
      }
      else {
        func_0x00010be12280(puVar4);
        func_0x00010c19b420(puVar5,param_2,puVar4);
      }
      puVar4 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
      func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0,param_2,puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c1dfc80(puVar5,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar1);
      _objc_release(puVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_668) {
        ___stack_chk_fail();
        _objc_retain(puVar6);
        _objc_retain(uVar8);
        if (lVar10 != 0) {
          if ((puVar9[0x41] & 1) == 0) {
            uVar3 = *(undefined8 *)(puVar9 + 0x18);
            puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25d4c0(uVar3,param_2,puVar2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar2);
            ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            if (lVar10 == 1) {
              func_0x000106d09a88();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x000106d09a70();
              _objc_retainAutoreleasedReturnValue();
            }
            func_0x00010c14de00(ppuVar7,param_2,puVar2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar2);
            _objc_release(uVar3);
          }
          else {
            ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
          }
          uVar3 = *(undefined8 *)(puVar9 + 8);
          puVar9 = puVar6;
          func_0x00010c09da80(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0(uVar3,param_2,puVar9);
          _objc_release(puVar9);
          puVar9 = PTR_PTR_1126d22d8;
          _objc_alloc(PTR_PTR_1126d22d8);
          puVar2 = puVar6;
          func_0x00010c09e900(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0535e0(puVar9,param_2,puVar2,ppuVar7,uVar8,uVar3,in_x5);
          _objc_release(puVar2);
          _objc_release(ppuVar7);
        }
        _objc_release(uVar8);
        _objc_release(puVar6);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 106d0501c; end: 106d0519b; -[SCMemoriesCameraRollAlbumPickerDataProvider _cleachUsersAlbumsCache] */

void FUN_106d0501c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined *in_x5;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *puVar10;
  undefined *unaff_x28;
  undefined *puStack_630;
  long lStack_628;
  undefined *puStack_620;
  undefined *puStack_618;
  undefined *puStack_610;
  undefined *puStack_608;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined *puStack_5f0;
  undefined8 uStack_5e8;
  undefined8 ***pppuStack_5e0;
  code *pcStack_5d8;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  long lStack_598;
  undefined1 ***pppuStack_590;
  code *pcStack_588;
  undefined *puStack_580;
  long lStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  long lStack_508;
  long *plStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined1 auStack_4d0 [128];
  undefined1 auStack_450 [128];
  long lStack_3d0;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined1 **ppuStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  long lStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2a8 [128];
  undefined1 auStack_228 [128];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6be00();
  _objc_release(uVar1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (undefined8 *)0x0;
  puVar7 = *(undefined **)(param_1 + 0x48);
  _objc_retain(puVar7);
  puVar2 = puVar7;
  func_0x00010bf52a60(puVar7,param_2,&uStack_120,auStack_d8,0x10);
  if (puVar2 != (undefined *)0x0) {
    unaff_x24 = (undefined *)*puStack_110;
    do {
      unaff_x25 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_110 != unaff_x24) {
          _objc_enumerationMutation(puVar7);
        }
        unaff_x23 = *(undefined **)(lStack_118 + (long)unaff_x25 * 8);
        unaff_x22 = *(undefined **)(param_1 + 0x38);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09da80();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(unaff_x22);
        puVar10 = unaff_x23;
        func_0x00010c08fa60();
        if (puVar10 != (undefined *)0x0) {
          func_0x00010bf6be00(unaff_x22,param_2,unaff_x23);
        }
        _objc_release(unaff_x22);
        _objc_release(unaff_x23);
        _objc_release(unaff_x22);
        unaff_x25 = unaff_x25 + 1;
      } while (puVar2 != unaff_x25);
      puVar2 = puVar7;
      func_0x00010bf52a60(puVar7,param_2,&uStack_120,auStack_d8,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_106d0519c;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = &stack0xfffffffffffffff0;
  if ((puVar2[0x41] == '\x01') && (puVar2[0x40] == '\x01')) {
    uStack_1a0 = *(undefined8 *)(puVar2 + 0x58);
    uStack_1a8 = *(undefined8 *)(puVar2 + 0x50);
    uStack_198 = *(undefined8 *)(puVar2 + 0x68);
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_1a8,3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar10;
    func_0x00010be077a0(puVar2);
  }
  else {
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar8 = puVar2;
    puStack_338 = puVar7;
    func_0x00010bdc9e00();
    _objc_retainAutoreleasedReturnValue();
    lStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    plStack_2e0 = (long *)0x0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    puStack_360 = puVar8;
    func_0x00010bf52a60();
    puStack_350 = puVar8;
    if (puVar8 != (undefined *)0x0) {
      lStack_358 = *plStack_2e0;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_2e0 != lStack_358) {
            _objc_enumerationMutation(puStack_360);
          }
          puVar8 = *(undefined **)(lStack_2e8 + (long)puVar7 * 8);
          lStack_328 = 0;
          uStack_330 = 0;
          uStack_318 = 0;
          plStack_320 = (long *)0x0;
          uStack_308 = 0;
          uStack_310 = 0;
          uStack_2f8 = 0;
          uStack_300 = 0;
          puStack_348 = puVar7;
          _objc_retain(puVar8);
          puStack_340 = puVar8;
          func_0x00010bf52a60(puVar8,param_2,&uStack_330,auStack_2a8,0x10);
          if (puVar8 != (undefined *)0x0) {
            lVar9 = *plStack_320;
            unaff_x25 = puVar8;
            do {
              unaff_x24 = (undefined *)0x0;
              do {
                if (*plStack_320 != lVar9) {
                  _objc_enumerationMutation(puStack_340);
                }
                unaff_x26 = *(undefined **)(lStack_328 + (long)unaff_x24 * 8);
                puVar8 = *(undefined **)(puVar2 + 0x38);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = unaff_x26;
                func_0x00010c09da80(unaff_x26);
                _objc_retainAutoreleasedReturnValue();
                unaff_x28 = puVar8;
                func_0x00010bf3fde0(puVar8,param_2,puVar7);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar7);
                _objc_release(puVar8);
                unaff_x27 = *(undefined **)(puVar2 + 0xc0);
                unaff_x23 = puVar2;
                func_0x00010be12ec0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfa50c0(unaff_x27,param_2,unaff_x26,unaff_x23);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x23);
                if (unaff_x28 == (undefined *)0x0) {
                  puVar7 = unaff_x27;
                  func_0x00010bfb1920();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (puVar7 != (undefined *)0x0) {
                    puVar7 = unaff_x26;
                    func_0x00010bf996a0(unaff_x26);
                    unaff_x23 = unaff_x27;
                    func_0x00010bfb1920();
                    _objc_retainAutoreleasedReturnValue();
                    in_x5 = unaff_x26;
                    func_0x00010bf0b020(unaff_x26);
                    unaff_x28 = puVar2;
                    func_0x00010bde6880(puVar2,param_2,unaff_x26,puVar7,unaff_x23,in_x5);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(unaff_x23);
                    if (unaff_x28 != (undefined *)0x0) goto LAB_106d053a4;
                  }
                }
                else {
LAB_106d053a4:
                  uVar1 = *(undefined8 *)(puVar2 + 8);
                  puVar7 = unaff_x26;
                  func_0x00010c09da80(unaff_x26);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0720c0(uVar1,param_2,puVar7);
                  func_0x00010c1b4280(unaff_x28,param_2,uVar1);
                  _objc_release(puVar7);
                  uVar1 = *(undefined8 *)(puVar2 + 0x38);
                  func_0x00010c269d40(uVar1);
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x23 = unaff_x26;
                  func_0x00010c09da80();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c225fc0(uVar1,param_2,unaff_x28,unaff_x23);
                  _objc_release(unaff_x23);
                  _objc_release(uVar1);
                  puVar7 = unaff_x26;
                  func_0x00010bf51e00(unaff_x26);
                  func_0x00010befa120(puVar10,param_2,puVar7);
                  _objc_release(puVar7);
                  func_0x00010befa120(puStack_338,param_2,unaff_x28);
                  _objc_release(unaff_x28);
                }
                _objc_release(unaff_x27);
                unaff_x24 = unaff_x24 + 1;
              } while (unaff_x25 != unaff_x24);
              unaff_x25 = puStack_340;
              func_0x00010bf52a60(puStack_340,param_2,&uStack_330,auStack_2a8,0x10);
            } while (unaff_x25 != (undefined *)0x0);
          }
          _objc_release(puStack_340);
          puVar7 = puStack_348 + 1;
        } while (puVar7 != puStack_350);
        puVar7 = puStack_360;
        func_0x00010bf52a60(puStack_360,param_2,&uStack_2f0,auStack_228,0x10);
        puStack_350 = puVar7;
      } while (puVar7 != (undefined *)0x0);
    }
    puVar7 = puVar10;
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(puVar2 + 0xa0);
    *(undefined **)(puVar2 + 0xa0) = puVar7;
    _objc_release(uVar1);
    puVar7 = puStack_338;
    unaff_x22 = puStack_338;
    func_0x00010bf51e00();
    puVar8 = unaff_x22;
    func_0x00010c0d9840(*(undefined8 *)(puVar2 + 0xa8));
    _objc_release(unaff_x22);
    _objc_release(puStack_360);
    _objc_release(puVar7);
  }
  puVar3 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return;
  }
  ___stack_chk_fail();
  pcStack_368 = FUN_106d055c8;
  lStack_3d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_3c0 = unaff_x28;
  puStack_3b8 = unaff_x27;
  puStack_3b0 = unaff_x26;
  puStack_3a8 = unaff_x25;
  puStack_3a0 = unaff_x24;
  puStack_398 = unaff_x23;
  puStack_390 = unaff_x22;
  puStack_388 = puVar10;
  puStack_380 = puVar7;
  puStack_378 = puVar2;
  ppuStack_370 = &puStack_130;
  _objc_retain(puVar8);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_558 = puVar7;
  _objc_opt_new();
  lStack_508 = 0;
  uStack_510 = 0;
  uStack_4f8 = 0;
  plStack_500 = (long *)0x0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  puStack_560 = puVar2;
  _objc_retain(puVar8);
  uVar6 = 0x10;
  puVar7 = puVar8;
  func_0x00010bf52a60(puVar8,param_2,&uStack_510,auStack_450,0x10);
  puStack_580 = puVar8;
  puStack_570 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar8);
  }
  else {
    unaff_x23 = (undefined *)0x0;
    lStack_578 = *plStack_500;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_500 != lStack_578) {
          _objc_enumerationMutation(puStack_580);
        }
        unaff_x25 = *(undefined **)(lStack_508 + (long)puVar7 * 8);
        lStack_548 = 0;
        uStack_550 = 0;
        uStack_538 = 0;
        plStack_540 = (long *)0x0;
        uStack_528 = 0;
        uStack_530 = 0;
        uStack_518 = 0;
        uStack_520 = 0;
        puStack_568 = puVar7;
        _objc_retain(unaff_x25);
        puVar7 = unaff_x25;
        func_0x00010bf52a60(unaff_x25,param_2,&uStack_550,auStack_4d0,0x10);
        if (puVar7 != (undefined *)0x0) {
          lVar9 = *plStack_540;
          unaff_x26 = puVar7;
          do {
            puVar7 = (undefined *)0x0;
            do {
              if (*plStack_540 != lVar9) {
                _objc_enumerationMutation(unaff_x25);
              }
              puVar10 = *(undefined **)(lStack_548 + (long)puVar7 * 8);
              puVar2 = puVar10;
              func_0x00010bf996a0(puVar10);
              if ((puVar3[0x41] & 1) == 0) {
                unaff_x24 = *(undefined **)(puVar3 + 0xc0);
                puVar2 = puVar3;
                func_0x00010be12ec0(puVar3);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfa50c0(unaff_x24,param_2,puVar10,puVar2);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar2);
                puVar2 = unaff_x24;
                func_0x00010bf529e0(unaff_x24);
                _objc_release(unaff_x24);
              }
              puVar8 = puVar3;
              func_0x00010bde6da0(puVar3,param_2,puVar10,puVar2);
              _objc_retainAutoreleasedReturnValue();
              if (puVar8 != (undefined *)0x0) {
                if (((ulong)unaff_x23 & 1) == 0) {
                  unaff_x23 = puVar8;
                  func_0x00010c07d660();
                }
                else {
                  unaff_x23 = (undefined *)0x1;
                }
                func_0x00010bf51e00(puVar10);
                func_0x00010befa120(puStack_558,param_2,puVar10);
                _objc_release(puVar10);
                func_0x00010befa120(puStack_560,param_2,puVar8);
              }
              _objc_release(puVar8);
              puVar7 = puVar7 + 1;
            } while (unaff_x26 != puVar7);
            unaff_x26 = unaff_x25;
            func_0x00010bf52a60(unaff_x25,param_2,&uStack_550,auStack_4d0,0x10);
          } while (unaff_x26 != (undefined *)0x0);
        }
        _objc_release(unaff_x25);
        puVar7 = puStack_568 + 1;
      } while (puVar7 != puStack_570);
      uVar6 = 0x10;
      puVar7 = puStack_580;
      func_0x00010bf52a60(puStack_580,param_2,&uStack_510,auStack_450,0x10);
      puStack_570 = puVar7;
    } while (puVar7 != (undefined *)0x0);
    _objc_release(puStack_580);
    if (((ulong)unaff_x23 & 1) != 0) goto LAB_106d05984;
  }
  puVar7 = puStack_558;
  func_0x00010bf529e0();
  if (((puVar7 != (undefined *)0x0) &&
      (puVar7 = puStack_560, func_0x00010bf529e0(), puVar7 != (undefined *)0x0)) &&
     ((puVar3[0x41] & 1) == 0)) {
    unaff_x23 = *(undefined **)(puVar3 + 8);
    _objc_retain(unaff_x23);
    puVar7 = puStack_558;
    func_0x00010c0dfd40(puStack_558,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(puVar3 + 8);
    *(undefined **)(puVar3 + 8) = puVar2;
    _objc_release(uVar1);
    _objc_release(puVar7);
    unaff_x24 = PTR_PTR_1126d22d0;
    _objc_alloc();
    puVar7 = puStack_560;
    unaff_x25 = puStack_560;
    func_0x00010c0dfd40(puStack_560,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = unaff_x25;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = (ulong)(byte)puVar3[0x41];
    func_0x00010c053180(unaff_x24,param_2,unaff_x26,1,uVar6);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    func_0x00010c12d3c0(puVar7,param_2,0);
    func_0x00010c066b00(puVar7,param_2,unaff_x24,0);
    if ((unaff_x23 != (undefined *)0x0) &&
       (puVar7 = unaff_x23, func_0x00010c0720c0(unaff_x23,param_2,*(undefined8 *)(puVar3 + 8)),
       ((ulong)puVar7 & 1) == 0)) {
      uVar1 = *(undefined8 *)(puVar3 + 0xb8);
      unaff_x25 = puStack_558;
      func_0x00010c0dfd40(puStack_558,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = unaff_x25;
      func_0x00010bf51e00();
      func_0x00010c0d9840(uVar1,param_2,unaff_x26);
      _objc_release(unaff_x26);
      _objc_release(unaff_x25);
    }
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
  }
LAB_106d05984:
  puVar2 = puStack_558;
  puVar7 = puStack_558;
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(puVar3 + 0xa0);
  *(undefined **)(puVar3 + 0xa0) = puVar7;
  _objc_release(uVar1);
  puVar7 = puStack_560;
  uVar1 = *(undefined8 *)(puVar3 + 0xb0);
  puVar10 = puStack_560;
  func_0x00010bf51e00();
  func_0x00010c0d9840(uVar1,param_2,puVar10);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar8 = puStack_580;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d0) {
    ___stack_chk_fail();
    pcStack_588 = FUN_106d05a1c;
    lStack_598 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_5c0 = *(undefined8 *)(puVar8 + 0x58);
    uStack_5c8 = *(undefined8 *)(puVar8 + 0x50);
    uStack_5b0 = *(undefined8 *)(puVar8 + 0x70);
    uStack_5b8 = *(undefined8 *)(puVar8 + 0x68);
    uStack_5a8 = *(undefined8 *)(puVar8 + 0x60);
    uStack_5a0 = *(undefined8 *)(puVar8 + 0x48);
    lVar9 = 6;
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    pppuStack_590 = &ppuStack_370;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_5c8);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_598) {
      ___stack_chk_fail();
      puStack_600 = puVar7;
      puStack_5f0 = puVar2;
      pcStack_5d8 = FUN_106d05a98;
      lStack_628 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puStack_620 = unaff_x26;
      puStack_618 = unaff_x25;
      puStack_610 = unaff_x24;
      puStack_608 = unaff_x23;
      puStack_5f8 = puVar10;
      uStack_5e8 = uVar1;
      pppuStack_5e0 = &pppuStack_590;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                          &PTR____CFConstantStringClassReference_110e84178);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar7,param_2,puVar2);
      puVar10 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                          &PTR____CFConstantStringClassReference_110e84198);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar7,param_2,puVar10);
      if ((puVar8[0x43] & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                            &PTR____CFConstantStringClassReference_110e841b8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7,param_2,puVar3);
        _objc_release(puVar3);
      }
      if ((puVar8[0x42] & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                            &PTR____CFConstantStringClassReference_110e841b8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7,param_2,puVar3);
        _objc_release(puVar3);
      }
      puVar3 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
      _objc_opt_new();
      if (puVar8[0x41] == '\x01') {
        func_0x00010c19b420(puVar3,param_2,1);
        puVar8 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
        func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                            &PTR____CFConstantStringClassReference_110e61838,0);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = 1;
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_630 = puVar8;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_630);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c206840(puVar3,param_2,puVar4);
        _objc_release(puVar4);
        _objc_release(puVar8);
      }
      else {
        func_0x00010be12280(puVar8);
        func_0x00010c19b420(puVar3,param_2,puVar8);
      }
      puVar8 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
      func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar8;
      func_0x00010c1dfc80(puVar3,param_2,puVar8);
      _objc_release(puVar8);
      _objc_release(puVar10);
      _objc_release(puVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_628) {
        ___stack_chk_fail();
        _objc_retain(puVar4);
        _objc_retain(uVar6);
        if (lVar9 != 0) {
          if ((puVar7[0x41] & 1) == 0) {
            uVar1 = *(undefined8 *)(puVar7 + 0x18);
            puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25d4c0(uVar1,param_2,puVar2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar2);
            ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            if (lVar9 == 1) {
              func_0x000106d09a88();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x000106d09a70();
              _objc_retainAutoreleasedReturnValue();
            }
            func_0x00010c14de00(ppuVar5,param_2,puVar2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar2);
            _objc_release(uVar1);
          }
          else {
            ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
          }
          uVar1 = *(undefined8 *)(puVar7 + 8);
          puVar7 = puVar4;
          func_0x00010c09da80(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0(uVar1,param_2,puVar7);
          _objc_release(puVar7);
          puVar7 = PTR_PTR_1126d22d8;
          _objc_alloc(PTR_PTR_1126d22d8);
          puVar2 = puVar4;
          func_0x00010c09e900(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0535e0(puVar7,param_2,puVar2,ppuVar5,uVar6,uVar1,in_x5);
          _objc_release(puVar2);
          _objc_release(ppuVar5);
        }
        _objc_release(uVar6);
        _objc_release(puVar4);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 106d0519c; end: 106d055c7; -[SCMemoriesCameraRollAlbumPickerDataProvider _emitAlbumPickerViewModelWithCache] */

void FUN_106d0519c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined *in_x5;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *unaff_x20;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *puVar10;
  undefined *unaff_x28;
  undefined *puStack_510;
  long lStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  undefined *puStack_4d8;
  undefined *puStack_4d0;
  undefined8 uStack_4c8;
  undefined1 ***pppuStack_4c0;
  code *pcStack_4b8;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long lStack_478;
  undefined1 **ppuStack_470;
  code *pcStack_468;
  undefined *puStack_460;
  long lStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 auStack_3b0 [128];
  undefined1 auStack_330 [128];
  long lStack_2b0;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_188 [128];
  undefined1 auStack_108 [128];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1[0x41] == '\x01') && (param_1[0x40] == '\x01')) {
    uStack_80 = *(undefined8 *)(param_1 + 0x58);
    uStack_88 = *(undefined8 *)(param_1 + 0x50);
    uStack_78 = *(undefined8 *)(param_1 + 0x68);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010be077a0(param_1);
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar8 = param_1;
    puStack_218 = puVar7;
    func_0x00010bdc9e00();
    _objc_retainAutoreleasedReturnValue();
    lStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    plStack_1c0 = (long *)0x0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    puStack_240 = puVar8;
    func_0x00010bf52a60();
    puStack_230 = puVar8;
    if (puVar8 != (undefined *)0x0) {
      lStack_238 = *plStack_1c0;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_1c0 != lStack_238) {
            _objc_enumerationMutation(puStack_240);
          }
          puVar8 = *(undefined **)(lStack_1c8 + (long)puVar7 * 8);
          lStack_208 = 0;
          uStack_210 = 0;
          uStack_1f8 = 0;
          plStack_200 = (long *)0x0;
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          puStack_228 = puVar7;
          _objc_retain(puVar8);
          puStack_220 = puVar8;
          func_0x00010bf52a60(puVar8,param_2,&uStack_210,auStack_188,0x10);
          if (puVar8 != (undefined *)0x0) {
            lVar9 = *plStack_200;
            unaff_x25 = puVar8;
            do {
              unaff_x24 = (undefined *)0x0;
              do {
                if (*plStack_200 != lVar9) {
                  _objc_enumerationMutation(puStack_220);
                }
                unaff_x26 = *(undefined **)(lStack_208 + (long)unaff_x24 * 8);
                puVar8 = *(undefined **)(param_1 + 0x38);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = unaff_x26;
                func_0x00010c09da80(unaff_x26);
                _objc_retainAutoreleasedReturnValue();
                unaff_x28 = puVar8;
                func_0x00010bf3fde0(puVar8,param_2,puVar7);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar7);
                _objc_release(puVar8);
                unaff_x27 = *(undefined **)(param_1 + 0xc0);
                unaff_x23 = param_1;
                func_0x00010be12ec0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfa50c0(unaff_x27,param_2,unaff_x26,unaff_x23);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x23);
                if (unaff_x28 == (undefined *)0x0) {
                  puVar7 = unaff_x27;
                  func_0x00010bfb1920();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  if (puVar7 != (undefined *)0x0) {
                    puVar7 = unaff_x26;
                    func_0x00010bf996a0(unaff_x26);
                    unaff_x23 = unaff_x27;
                    func_0x00010bfb1920();
                    _objc_retainAutoreleasedReturnValue();
                    in_x5 = unaff_x26;
                    func_0x00010bf0b020(unaff_x26);
                    unaff_x28 = param_1;
                    func_0x00010bde6880(param_1,param_2,unaff_x26,puVar7,unaff_x23,in_x5);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(unaff_x23);
                    if (unaff_x28 != (undefined *)0x0) goto LAB_106d053a4;
                  }
                }
                else {
LAB_106d053a4:
                  uVar5 = *(undefined8 *)(param_1 + 8);
                  puVar7 = unaff_x26;
                  func_0x00010c09da80(unaff_x26);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0720c0(uVar5,param_2,puVar7);
                  func_0x00010c1b4280(unaff_x28,param_2,uVar5);
                  _objc_release(puVar7);
                  uVar5 = *(undefined8 *)(param_1 + 0x38);
                  func_0x00010c269d40(uVar5);
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x23 = unaff_x26;
                  func_0x00010c09da80();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c225fc0(uVar5,param_2,unaff_x28,unaff_x23);
                  _objc_release(unaff_x23);
                  _objc_release(uVar5);
                  puVar7 = unaff_x26;
                  func_0x00010bf51e00(unaff_x26);
                  func_0x00010befa120(puVar6,param_2,puVar7);
                  _objc_release(puVar7);
                  func_0x00010befa120(puStack_218,param_2,unaff_x28);
                  _objc_release(unaff_x28);
                }
                _objc_release(unaff_x27);
                unaff_x24 = unaff_x24 + 1;
              } while (unaff_x25 != unaff_x24);
              unaff_x25 = puStack_220;
              func_0x00010bf52a60(puStack_220,param_2,&uStack_210,auStack_188,0x10);
            } while (unaff_x25 != (undefined *)0x0);
          }
          _objc_release(puStack_220);
          puVar7 = puStack_228 + 1;
        } while (puVar7 != puStack_230);
        puVar7 = puStack_240;
        func_0x00010bf52a60(puStack_240,param_2,&uStack_1d0,auStack_108,0x10);
        puStack_230 = puVar7;
      } while (puVar7 != (undefined *)0x0);
    }
    puVar7 = puVar6;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined **)(param_1 + 0xa0) = puVar7;
    _objc_release(uVar5);
    unaff_x20 = puStack_218;
    unaff_x22 = puStack_218;
    func_0x00010bf51e00();
    puVar7 = unaff_x22;
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xa8));
    _objc_release(unaff_x22);
    _objc_release(puStack_240);
    _objc_release(unaff_x20);
  }
  puVar8 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_248 = FUN_106d055c8;
  lStack_2b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2a0 = unaff_x28;
  puStack_298 = unaff_x27;
  puStack_290 = unaff_x26;
  puStack_288 = unaff_x25;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = unaff_x22;
  puStack_268 = puVar6;
  puStack_260 = unaff_x20;
  puStack_258 = param_1;
  puStack_250 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_438 = puVar6;
  _objc_opt_new();
  lStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3d8 = 0;
  plStack_3e0 = (long *)0x0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  puStack_440 = puVar10;
  _objc_retain(puVar7);
  uVar4 = 0x10;
  puVar6 = puVar7;
  func_0x00010bf52a60(puVar7,param_2,&uStack_3f0,auStack_330,0x10);
  puStack_460 = puVar7;
  puStack_450 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  else {
    unaff_x23 = (undefined *)0x0;
    lStack_458 = *plStack_3e0;
    do {
      puVar6 = (undefined *)0x0;
      do {
        if (*plStack_3e0 != lStack_458) {
          _objc_enumerationMutation(puStack_460);
        }
        unaff_x25 = *(undefined **)(lStack_3e8 + (long)puVar6 * 8);
        lStack_428 = 0;
        uStack_430 = 0;
        uStack_418 = 0;
        plStack_420 = (long *)0x0;
        uStack_408 = 0;
        uStack_410 = 0;
        uStack_3f8 = 0;
        uStack_400 = 0;
        puStack_448 = puVar6;
        _objc_retain(unaff_x25);
        puVar6 = unaff_x25;
        func_0x00010bf52a60(unaff_x25,param_2,&uStack_430,auStack_3b0,0x10);
        if (puVar6 != (undefined *)0x0) {
          lVar9 = *plStack_420;
          unaff_x26 = puVar6;
          do {
            puVar6 = (undefined *)0x0;
            do {
              if (*plStack_420 != lVar9) {
                _objc_enumerationMutation(unaff_x25);
              }
              puVar10 = *(undefined **)(lStack_428 + (long)puVar6 * 8);
              puVar7 = puVar10;
              func_0x00010bf996a0(puVar10);
              if ((puVar8[0x41] & 1) == 0) {
                unaff_x24 = *(undefined **)(puVar8 + 0xc0);
                puVar7 = puVar8;
                func_0x00010be12ec0(puVar8);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfa50c0(unaff_x24,param_2,puVar10,puVar7);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar7);
                puVar7 = unaff_x24;
                func_0x00010bf529e0(unaff_x24);
                _objc_release(unaff_x24);
              }
              puVar1 = puVar8;
              func_0x00010bde6da0(puVar8,param_2,puVar10,puVar7);
              _objc_retainAutoreleasedReturnValue();
              if (puVar1 != (undefined *)0x0) {
                if (((ulong)unaff_x23 & 1) == 0) {
                  unaff_x23 = puVar1;
                  func_0x00010c07d660();
                }
                else {
                  unaff_x23 = (undefined *)0x1;
                }
                func_0x00010bf51e00(puVar10);
                func_0x00010befa120(puStack_438,param_2,puVar10);
                _objc_release(puVar10);
                func_0x00010befa120(puStack_440,param_2,puVar1);
              }
              _objc_release(puVar1);
              puVar6 = puVar6 + 1;
            } while (unaff_x26 != puVar6);
            unaff_x26 = unaff_x25;
            func_0x00010bf52a60(unaff_x25,param_2,&uStack_430,auStack_3b0,0x10);
          } while (unaff_x26 != (undefined *)0x0);
        }
        _objc_release(unaff_x25);
        puVar6 = puStack_448 + 1;
      } while (puVar6 != puStack_450);
      uVar4 = 0x10;
      puVar6 = puStack_460;
      func_0x00010bf52a60(puStack_460,param_2,&uStack_3f0,auStack_330,0x10);
      puStack_450 = puVar6;
    } while (puVar6 != (undefined *)0x0);
    _objc_release(puStack_460);
    if (((ulong)unaff_x23 & 1) != 0) goto LAB_106d05984;
  }
  puVar6 = puStack_438;
  func_0x00010bf529e0();
  if (((puVar6 != (undefined *)0x0) &&
      (puVar6 = puStack_440, func_0x00010bf529e0(), puVar6 != (undefined *)0x0)) &&
     ((puVar8[0x41] & 1) == 0)) {
    unaff_x23 = *(undefined **)(puVar8 + 8);
    _objc_retain(unaff_x23);
    puVar6 = puStack_438;
    func_0x00010c0dfd40(puStack_438,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar8 + 8);
    *(undefined **)(puVar8 + 8) = puVar7;
    _objc_release(uVar5);
    _objc_release(puVar6);
    unaff_x24 = PTR_PTR_1126d22d0;
    _objc_alloc();
    puVar6 = puStack_440;
    unaff_x25 = puStack_440;
    func_0x00010c0dfd40(puStack_440,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = unaff_x25;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = (ulong)(byte)puVar8[0x41];
    func_0x00010c053180(unaff_x24,param_2,unaff_x26,1,uVar4);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    func_0x00010c12d3c0(puVar6,param_2,0);
    func_0x00010c066b00(puVar6,param_2,unaff_x24,0);
    if ((unaff_x23 != (undefined *)0x0) &&
       (puVar6 = unaff_x23, func_0x00010c0720c0(unaff_x23,param_2,*(undefined8 *)(puVar8 + 8)),
       ((ulong)puVar6 & 1) == 0)) {
      uVar5 = *(undefined8 *)(puVar8 + 0xb8);
      unaff_x25 = puStack_438;
      func_0x00010c0dfd40(puStack_438,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = unaff_x25;
      func_0x00010bf51e00();
      func_0x00010c0d9840(uVar5,param_2,unaff_x26);
      _objc_release(unaff_x26);
      _objc_release(unaff_x25);
    }
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
  }
LAB_106d05984:
  puVar7 = puStack_438;
  puVar6 = puStack_438;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(puVar8 + 0xa0);
  *(undefined **)(puVar8 + 0xa0) = puVar6;
  _objc_release(uVar5);
  puVar6 = puStack_440;
  uVar5 = *(undefined8 *)(puVar8 + 0xb0);
  puVar8 = puStack_440;
  func_0x00010bf51e00();
  func_0x00010c0d9840(uVar5,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar7);
  puVar10 = puStack_460;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b0) {
    ___stack_chk_fail();
    pcStack_468 = FUN_106d05a1c;
    lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_4a0 = *(undefined8 *)(puVar10 + 0x58);
    uStack_4a8 = *(undefined8 *)(puVar10 + 0x50);
    uStack_490 = *(undefined8 *)(puVar10 + 0x70);
    uStack_498 = *(undefined8 *)(puVar10 + 0x68);
    uStack_488 = *(undefined8 *)(puVar10 + 0x60);
    uStack_480 = *(undefined8 *)(puVar10 + 0x48);
    lVar9 = 6;
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_470 = &puStack_250;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_4a8);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_478) {
      ___stack_chk_fail();
      puStack_4e0 = puVar6;
      puStack_4d0 = puVar7;
      pcStack_4b8 = FUN_106d05a98;
      lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puStack_500 = unaff_x26;
      puStack_4f8 = unaff_x25;
      puStack_4f0 = unaff_x24;
      puStack_4e8 = unaff_x23;
      puStack_4d8 = puVar8;
      uStack_4c8 = uVar5;
      pppuStack_4c0 = &ppuStack_470;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                          &PTR____CFConstantStringClassReference_110e84178);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_2,puVar7);
      puVar8 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                          &PTR____CFConstantStringClassReference_110e84198);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6,param_2,puVar8);
      if ((puVar10[0x43] & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                            &PTR____CFConstantStringClassReference_110e841b8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6,param_2,puVar1);
        _objc_release(puVar1);
      }
      if ((puVar10[0x42] & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                            &PTR____CFConstantStringClassReference_110e841b8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6,param_2,puVar1);
        _objc_release(puVar1);
      }
      puVar1 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
      _objc_opt_new();
      if (puVar10[0x41] == '\x01') {
        func_0x00010c19b420(puVar1,param_2,1);
        puVar10 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
        func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                            &PTR____CFConstantStringClassReference_110e61838,0);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = 1;
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_510 = puVar10;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_510);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c206840(puVar1,param_2,puVar2);
        _objc_release(puVar2);
        _objc_release(puVar10);
      }
      else {
        func_0x00010be12280(puVar10);
        func_0x00010c19b420(puVar1,param_2,puVar10);
      }
      puVar10 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
      func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar10;
      func_0x00010c1dfc80(puVar1,param_2,puVar10);
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_508) {
        ___stack_chk_fail();
        _objc_retain(puVar2);
        _objc_retain(uVar4);
        if (lVar9 != 0) {
          if ((puVar6[0x41] & 1) == 0) {
            uVar5 = *(undefined8 *)(puVar6 + 0x18);
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25d4c0(uVar5,param_2,puVar7);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            if (lVar9 == 1) {
              func_0x000106d09a88();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x000106d09a70();
              _objc_retainAutoreleasedReturnValue();
            }
            func_0x00010c14de00(ppuVar3,param_2,puVar7);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar7);
            _objc_release(uVar5);
          }
          else {
            ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
          }
          uVar5 = *(undefined8 *)(puVar6 + 8);
          puVar6 = puVar2;
          func_0x00010c09da80(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0(uVar5,param_2,puVar6);
          _objc_release(puVar6);
          puVar6 = PTR_PTR_1126d22d8;
          _objc_alloc(PTR_PTR_1126d22d8);
          puVar7 = puVar2;
          func_0x00010c09e900(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0535e0(puVar6,param_2,puVar7,ppuVar3,uVar4,uVar5,in_x5);
          _objc_release(puVar7);
          _objc_release(ppuVar3);
        }
        _objc_release(uVar4);
        _objc_release(puVar2);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 106d055c8; end: 106d05a1b; -[SCMemoriesCameraRollAlbumPickerDataProvider _emitAlbumPillsViewModel:] */

void FUN_106d055c8(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  ulong unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *puVar11;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  ulong uStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_1f8 = puVar10;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puStack_200 = puVar1;
  _objc_retain(param_3);
  uVar7 = 0x10;
  lVar9 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
  lStack_220 = param_3;
  lStack_210 = lVar9;
  if (lVar9 == 0) {
    _objc_release(param_3);
  }
  else {
    unaff_x23 = 0;
    lStack_218 = *plStack_1a0;
    do {
      lVar9 = 0;
      do {
        if (*plStack_1a0 != lStack_218) {
          _objc_enumerationMutation(lStack_220);
        }
        unaff_x25 = *(undefined **)(lStack_1a8 + lVar9 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lStack_208 = lVar9;
        _objc_retain(unaff_x25);
        puVar10 = unaff_x25;
        func_0x00010bf52a60(unaff_x25,param_2,&uStack_1f0,auStack_170,0x10);
        if (puVar10 != (undefined *)0x0) {
          lVar9 = *plStack_1e0;
          unaff_x26 = puVar10;
          do {
            puVar10 = (undefined *)0x0;
            do {
              if (*plStack_1e0 != lVar9) {
                _objc_enumerationMutation(unaff_x25);
              }
              puVar11 = *(undefined **)(lStack_1e8 + (long)puVar10 * 8);
              puVar1 = puVar11;
              func_0x00010bf996a0(puVar11);
              if ((*(byte *)(param_1 + 0x41) & 1) == 0) {
                unaff_x24 = *(undefined **)(param_1 + 0xc0);
                uVar7 = param_1;
                func_0x00010be12ec0(param_1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfa50c0(unaff_x24,param_2,puVar11,uVar7);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar7);
                puVar1 = unaff_x24;
                func_0x00010bf529e0(unaff_x24);
                _objc_release(unaff_x24);
              }
              uVar7 = param_1;
              func_0x00010bde6da0(param_1,param_2,puVar11,puVar1);
              _objc_retainAutoreleasedReturnValue();
              if (uVar7 != 0) {
                if ((unaff_x23 & 1) == 0) {
                  unaff_x23 = uVar7;
                  func_0x00010c07d660();
                }
                else {
                  unaff_x23 = 1;
                }
                func_0x00010bf51e00(puVar11);
                func_0x00010befa120(puStack_1f8,param_2,puVar11);
                _objc_release(puVar11);
                func_0x00010befa120(puStack_200,param_2,uVar7);
              }
              _objc_release(uVar7);
              puVar10 = puVar10 + 1;
            } while (unaff_x26 != puVar10);
            unaff_x26 = unaff_x25;
            func_0x00010bf52a60(unaff_x25,param_2,&uStack_1f0,auStack_170,0x10);
          } while (unaff_x26 != (undefined *)0x0);
        }
        _objc_release(unaff_x25);
        lVar9 = lStack_208 + 1;
      } while (lVar9 != lStack_210);
      uVar7 = 0x10;
      lVar9 = lStack_220;
      func_0x00010bf52a60(lStack_220,param_2,&uStack_1b0,auStack_f0,0x10);
      lStack_210 = lVar9;
    } while (lVar9 != 0);
    _objc_release(lStack_220);
    if ((unaff_x23 & 1) != 0) goto LAB_106d05984;
  }
  puVar10 = puStack_1f8;
  func_0x00010bf529e0();
  if (((puVar10 != (undefined *)0x0) &&
      (puVar10 = puStack_200, func_0x00010bf529e0(), puVar10 != (undefined *)0x0)) &&
     ((*(byte *)(param_1 + 0x41) & 1) == 0)) {
    unaff_x23 = *(ulong *)(param_1 + 8);
    _objc_retain(unaff_x23);
    puVar10 = puStack_1f8;
    func_0x00010c0dfd40(puStack_1f8,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar10;
    func_0x00010c09da80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar8);
    _objc_release(puVar10);
    unaff_x24 = PTR_PTR_1126d22d0;
    _objc_alloc();
    puVar10 = puStack_200;
    unaff_x25 = puStack_200;
    func_0x00010c0dfd40(puStack_200,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = unaff_x25;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = (ulong)*(byte *)(param_1 + 0x41);
    func_0x00010c053180(unaff_x24,param_2,unaff_x26,1,uVar7);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    func_0x00010c12d3c0(puVar10,param_2,0);
    func_0x00010c066b00(puVar10,param_2,unaff_x24,0);
    if ((unaff_x23 != 0) &&
       (uVar2 = unaff_x23, func_0x00010c0720c0(unaff_x23,param_2,*(undefined8 *)(param_1 + 8)),
       (uVar2 & 1) == 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0xb8);
      unaff_x25 = puStack_1f8;
      func_0x00010c0dfd40(puStack_1f8,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = unaff_x25;
      func_0x00010bf51e00();
      func_0x00010c0d9840(uVar8,param_2,unaff_x26);
      _objc_release(unaff_x26);
      _objc_release(unaff_x25);
    }
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
  }
LAB_106d05984:
  puVar1 = puStack_1f8;
  puVar10 = puStack_1f8;
  func_0x00010bf51e00();
  uVar8 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = puVar10;
  _objc_release(uVar8);
  puVar10 = puStack_200;
  uVar8 = *(undefined8 *)(param_1 + 0xb0);
  puVar11 = puStack_200;
  func_0x00010bf51e00();
  func_0x00010c0d9840(uVar8,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar1);
  lVar9 = lStack_220;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_228 = FUN_106d05a1c;
    lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_260 = *(undefined8 *)(lVar9 + 0x58);
    uStack_268 = *(undefined8 *)(lVar9 + 0x50);
    uStack_250 = *(undefined8 *)(lVar9 + 0x70);
    uStack_258 = *(undefined8 *)(lVar9 + 0x68);
    uStack_248 = *(undefined8 *)(lVar9 + 0x60);
    uStack_240 = *(undefined8 *)(lVar9 + 0x48);
    lVar9 = 6;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_230 = &stack0xfffffffffffffff0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_268);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
      ___stack_chk_fail();
      puStack_2a0 = puVar10;
      puStack_290 = puVar1;
      pcStack_278 = FUN_106d05a98;
      lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puStack_2c0 = unaff_x26;
      puStack_2b8 = unaff_x25;
      puStack_2b0 = unaff_x24;
      uStack_2a8 = unaff_x23;
      puStack_298 = puVar11;
      uStack_288 = uVar8;
      ppuStack_280 = &puStack_230;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                          &PTR____CFConstantStringClassReference_110e84178);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar10,param_2,puVar1);
      puVar11 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                          &PTR____CFConstantStringClassReference_110e84198);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar10,param_2,puVar11);
      if ((puVar3[0x43] & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                            &PTR____CFConstantStringClassReference_110e841b8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar10,param_2,puVar4);
        _objc_release(puVar4);
      }
      if ((puVar3[0x42] & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
        func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                            &PTR____CFConstantStringClassReference_110e841b8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar10,param_2,puVar4);
        _objc_release(puVar4);
      }
      puVar4 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
      _objc_opt_new();
      if (puVar3[0x41] == '\x01') {
        func_0x00010c19b420(puVar4,param_2,1);
        puVar3 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
        func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                            &PTR____CFConstantStringClassReference_110e61838,0);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = 1;
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_2d0 = puVar3;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_2d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c206840(puVar4,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(puVar3);
      }
      else {
        func_0x00010be12280(puVar3);
        func_0x00010c19b420(puVar4,param_2,puVar3);
      }
      puVar3 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
      func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0,param_2,puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c1dfc80(puVar4,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar11);
      _objc_release(puVar1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
        ___stack_chk_fail();
        _objc_retain(puVar5);
        _objc_retain(uVar7);
        if (lVar9 != 0) {
          if ((puVar10[0x41] & 1) == 0) {
            uVar8 = *(undefined8 *)(puVar10 + 0x18);
            puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25d4c0(uVar8,param_2,puVar1);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar1);
            ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            if (lVar9 == 1) {
              func_0x000106d09a88();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x000106d09a70();
              _objc_retainAutoreleasedReturnValue();
            }
            func_0x00010c14de00(ppuVar6,param_2,puVar1);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar1);
            _objc_release(uVar8);
          }
          else {
            ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
          }
          uVar8 = *(undefined8 *)(puVar10 + 8);
          puVar10 = puVar5;
          func_0x00010c09da80(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0(uVar8,param_2,puVar10);
          _objc_release(puVar10);
          puVar10 = PTR_PTR_1126d22d8;
          _objc_alloc(PTR_PTR_1126d22d8);
          puVar1 = puVar5;
          func_0x00010c09e900(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0535e0(puVar10,param_2,puVar1,ppuVar6,uVar7,uVar8,param_6);
          _objc_release(puVar1);
          _objc_release(ppuVar6);
        }
        _objc_release(uVar7);
        _objc_release(puVar5);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 106d05a1c; end: 106d05a97; -[SCMemoriesCameraRollAlbumPickerDataProvider _allFetchResults] */

void FUN_106d05a1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 0x58);
  uStack_48 = *(undefined8 *)(param_1 + 0x50);
  uStack_30 = *(undefined8 *)(param_1 + 0x70);
  uStack_38 = *(undefined8 *)(param_1 + 0x68);
  uStack_28 = *(undefined8 *)(param_1 + 0x60);
  uStack_20 = *(undefined8 *)(param_1 + 0x48);
  lVar8 = 6;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_48);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110e84178);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,puVar3);
    puVar4 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110e84198);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,puVar4);
    if ((puVar1[0x43] & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                          &PTR____CFConstantStringClassReference_110e841b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar5);
      _objc_release(puVar5);
    }
    if ((puVar1[0x42] & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
      func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                          &PTR____CFConstantStringClassReference_110e841b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar5);
      _objc_release(puVar5);
    }
    puVar5 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
    _objc_opt_new();
    if (puVar1[0x41] == '\x01') {
      func_0x00010c19b420(puVar5,param_2,1);
      puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                          &PTR____CFConstantStringClassReference_110e61838,0);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = 1;
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_b0 = puVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_b0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206840(puVar5,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar1);
    }
    else {
      func_0x00010be12280(puVar1);
      func_0x00010c19b420(puVar5,param_2,puVar1);
    }
    puVar1 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
    func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c1dfc80(puVar5,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      _objc_retain(puVar6);
      _objc_retain(param_5);
      if (lVar8 != 0) {
        if ((puVar2[0x41] & 1) == 0) {
          uVar9 = *(undefined8 *)(puVar2 + 0x18);
          puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25d4c0(uVar9,param_2,puVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (lVar8 == 1) {
            func_0x000106d09a88();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x000106d09a70();
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010c14de00(ppuVar7,param_2,puVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          _objc_release(uVar9);
        }
        else {
          ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
        }
        uVar9 = *(undefined8 *)(puVar2 + 8);
        puVar1 = puVar6;
        func_0x00010c09da80(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0(uVar9,param_2,puVar1);
        _objc_release(puVar1);
        puVar1 = PTR_PTR_1126d22d8;
        _objc_alloc(PTR_PTR_1126d22d8);
        puVar2 = puVar6;
        func_0x00010c09e900(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0535e0(puVar1,param_2,puVar2,ppuVar7,param_5,uVar9,param_6);
        _objc_release(puVar2);
        _objc_release(ppuVar7);
      }
      _objc_release(param_5);
      _objc_release(puVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d05a98; end: 106d05cf3; -[SCMemoriesCameraRollAlbumPickerDataProvider _fetchOptionsForAssets] */

void FUN_106d05a98(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110e84178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,puVar2);
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                      &PTR____CFConstantStringClassReference_110e84198);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,puVar3);
  if ((*(byte *)(param_1 + 0x43) & 1) == 0) {
    puVar7 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110e841b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar7);
    _objc_release(puVar7);
  }
  if ((*(byte *)(param_1 + 0x42) & 1) == 0) {
    puVar7 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                        &PTR____CFConstantStringClassReference_110e841b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar7);
    _objc_release(puVar7);
  }
  puVar7 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  _objc_opt_new();
  if (*(char *)(param_1 + 0x41) == '\x01') {
    func_0x00010c19b420(puVar7,param_2,1);
    puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                        &PTR____CFConstantStringClassReference_110e61838,0);
    _objc_retainAutoreleasedReturnValue();
    param_4 = 1;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206840(puVar7,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    func_0x00010be12280(param_1);
    func_0x00010c19b420(puVar7,param_2,param_1);
  }
  puVar4 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c1dfc80(puVar7,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    _objc_retain(param_5);
    if (param_4 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      if ((puVar1[0x41] & 1) == 0) {
        uVar8 = *(undefined8 *)(puVar1 + 0x18);
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d4c0(uVar8,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (param_4 == 1) {
          func_0x000106d09a88();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x000106d09a70();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c14de00(ppuVar6,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(uVar8);
      }
      else {
        ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
      }
      uVar8 = *(undefined8 *)(puVar1 + 8);
      puVar1 = puVar5;
      func_0x00010c09da80(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(uVar8,param_2,puVar1);
      _objc_release(puVar1);
      puVar7 = PTR_PTR_1126d22d8;
      _objc_alloc(PTR_PTR_1126d22d8);
      puVar1 = puVar5;
      func_0x00010c09e900(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0535e0(puVar7,param_2,puVar1,ppuVar6,param_5,uVar8,param_6);
      _objc_release(puVar1);
      _objc_release(ppuVar6);
    }
    _objc_release(param_5);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106d05cf4; end: 106d05ea3; -[SCMemoriesCameraRollAlbumPickerDataProvider _constructAlbumPickerCellViewModel:assetsCount:coverAsset:subtype:] */

void FUN_106d05cf4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    if ((*(byte *)(param_1 + 0x41) & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d4c0(uVar4,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (param_4 == 1) {
        func_0x000106d09a88();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000106d09a70();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c14de00(ppuVar1,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(uVar4);
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar4 = param_3;
    func_0x00010c09da80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar3,param_2,uVar4);
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126d22d8;
    _objc_alloc(PTR_PTR_1126d22d8);
    uVar4 = param_3;
    func_0x00010c09e900(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0535e0(puVar2,param_2,uVar4,ppuVar1,param_5,uVar3,param_6);
    _objc_release(uVar4);
    _objc_release(ppuVar1);
  }
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d05ea4; end: 106d06003; -[SCMemoriesCameraRollAlbumPickerDataProvider _constructPillCellViewModel:assetsCount:] */

void FUN_106d05ea4(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_4 == 0) {
    puVar4 = (undefined *)0x0;
    goto LAB_106d05fe8;
  }
  _objc_retain(param_3);
  puVar4 = param_3;
  func_0x00010bf0b020();
  if ((puVar4 == (undefined *)0x2) && ((*(byte *)(param_1 + 0x41) & 1) == 0)) {
    lVar1 = param_1;
    func_0x00010be18a80(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar1 == 0) goto LAB_106d05f6c;
    lVar2 = lVar1;
    func_0x000106d09aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010c09e900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
LAB_106d05f6c:
    puVar3 = param_3;
    func_0x00010c09e900(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  puVar4 = param_3;
  func_0x00010c09da80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0720c0(uVar5,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126d22d0;
  _objc_alloc(PTR_PTR_1126d22d0);
  func_0x00010c053180();
  _objc_release(puVar3);
LAB_106d05fe8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106d06004; end: 106d060d3; -[SCMemoriesCameraRollAlbumPickerDataProvider _formatNumber:] */

void FUN_106d06004(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  if (param_3 < 1000) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daea58;
  }
  else {
    if (param_3 >> 4 < 0x271) {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110e841d8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c25cfc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      goto LAB_106d060c0;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110e841f8;
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
LAB_106d060c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106d060d4; end: 106d0613b; -[SCMemoriesCameraRollAlbumPickerDataProvider _logPickerViewShown] */

void FUN_106d060d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d22e0;
  _objc_opt_new(PTR_PTR_1126d22e0);
  lVar2 = param_1;
  func_0x00010be1d4a0(param_1);
  func_0x00010c1d64a0(puVar1,param_2,lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d0613c; end: 106d06203; -[SCMemoriesCameraRollAlbumPickerDataProvider _logSelectAlbum:] */

void FUN_106d0613c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d22e8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  lVar2 = param_1;
  func_0x00010be1d4a0(param_1);
  func_0x00010c1d64a0(puVar1,param_2,lVar2);
  lVar2 = param_1;
  func_0x00010be1d480(param_1,param_2,param_3);
  func_0x00010c1669e0(puVar1,param_2,lVar2);
  uVar3 = param_3;
  func_0x00010c09da80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1669c0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d06204; end: 106d0621b; -[SCMemoriesCameraRollAlbumPickerDataProvider _getBlizzardEventOrigin] */

undefined8 FUN_106d06204(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if (*(long *)(param_1 + 0x28) != 1) {
    uVar2 = 0xffffffffffffffff;
  }
  uVar1 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 106d0621c; end: 106d06277; -[SCMemoriesCameraRollAlbumPickerDataProvider _getBlizzardEventAlbumType:] */

undefined8 FUN_106d0621c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf0b020();
  if (lVar1 == 0xd1) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf0b020();
    uVar2 = 1;
    if (lVar1 != 0xcb) {
      uVar2 = 2;
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106d06278; end: 106d063eb; -[SCMemoriesCameraRollAlbumPickerDataProvider _cleanCacheForCollection:] */

void FUN_106d06278(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (lVar1 = param_3, func_0x00010bfd7ea0(), (int)lVar1 != 0)) {
    lVar1 = param_3;
    func_0x00010bf35420(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x106d0632c;
    puStack_48 = &UNK_110975a38;
    _objc_retain(param_3);
    lStack_40 = param_3;
    uStack_38 = param_1;
    func_0x00010bf97bc0(lVar1,param_2,&puStack_60);
    _objc_release(lVar1);
    _objc_release(lStack_40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d063ec; end: 106d0642b; -[SCMemoriesCameraRollAlbumPickerDataProvider _fetchLimit] */

undefined8 FUN_106d063ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fb7e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106d0642c; end: 106d0654b; -[SCMemoriesCameraRollAlbumPickerDataProvider .cxx_destruct] */

void FUN_106d0642c(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
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
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106d0654c; end: 106d0687f; -[SCMemoriesCameraRollAlbumPickerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d0654c(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  
  lVar20 = (long)_DAT_11275ca70;
  lVar2 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0fbee0();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126d22f0;
  _objc_alloc();
  lVar2 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c159280();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  _objc_opt_new();
  lVar6 = param_1 + _DAT_11275ca74;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11275ca78;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0ed1a0();
  puVar12 = PTR_PTR_1126d22f8;
  _objc_alloc_init();
  lVar13 = param_1 + lVar20;
  _objc_loadWeakRetained();
  func_0x00010bf01660();
  lVar14 = param_1 + lVar20;
  _objc_loadWeakRetained();
  func_0x00010bf01380();
  lVar15 = param_1 + _DAT_11275ca7c;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c0c7d60();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c0c7d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043b20(puVar4,param_2,lVar5,puVar19,lVar7,lVar9,lVar11,puVar12,(char)lVar3);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(puVar12);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(puVar19);
  _objc_release(lVar5);
  _objc_release(lVar2);
  ppuVar1 = &PTR_PTR_1126d2300;
  if ((int)lVar3 == 0) {
    ppuVar1 = &PTR_PTR_1126d2308;
  }
  puVar19 = *ppuVar1;
  _objc_alloc(puVar19);
  lVar2 = param_1 + lVar20;
  _objc_loadWeakRetained(lVar2);
  lVar10 = lVar2;
  func_0x00010c150700();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar20;
  _objc_loadWeakRetained(lVar6);
  lVar13 = lVar6;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar20;
  _objc_loadWeakRetained(lVar8);
  lVar14 = lVar8;
  func_0x00010c0ed1a0();
  func_0x00010c041ec0(puVar19,param_2,lVar10,lVar13,puVar4,lVar14);
  _objc_release(lVar8);
  _objc_release(lVar13);
  _objc_release(lVar6);
  _objc_release(lVar10);
  _objc_release(lVar2);
  param_1 = param_1 + lVar20;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106d06880; end: 106d0690b; -[SCMemoriesCameraRollAlbumPickerEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d06880(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_11275ca70;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126f6848;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106d0690c; end: 106d0695b; -[SCMemoriesCameraRollAlbumPickerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d0690c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275ca70);
  _objc_destroyWeak(param_1 + _DAT_11275ca7c);
  _objc_destroyWeak(param_1 + _DAT_11275ca78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275ca74);
  return;
}



/* Entry: 106d0695c; end: 106d069bf; -[SCMemoriesCameraRollAlbumPickerHeaderView initWithFrame:origin:] */

undefined1 * FUN_106d0695c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6850;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if ((param_3 != 1) && (puVar1 != (undefined8 *)0x0)) {
    func_0x00010beb1160(puVar1);
    func_0x00010beb11a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d069c0; end: 106d06ac7; -[SCMemoriesCameraRollAlbumPickerHeaderView _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d069c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11275ca80;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c213040(uVar2);
  func_0x000106d09ab8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3));
  _objc_release(uVar2);
  func_0x00010befbb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c21e910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setUserInteractionEnabled__112665468,0);
  return;
}



/* Entry: 106d06ac8; end: 106d06ce7; -[SCMemoriesCameraRollAlbumPickerHeaderView _setupViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d06ac8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_11275ca80;
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar14),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar14);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf49420(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar14);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(param_1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + _DAT_11275ca80,0);
  return;
}



/* Entry: 106d06ce8; end: 106d06cfb; -[SCMemoriesCameraRollAlbumPickerHeaderView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d06ce8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275ca80,0);
  return;
}



/* Entry: 106d06cfc; end: 106d06e53; -[SCMemoriesCameraRollAlbumPickerViewController initWithScopeDelegate:backgroundColor:dataProvider:origin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106d06cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f6858;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11275ca84),param_3);
    lVar4 = (long)_DAT_11275ca88;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275ca8c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275ca90) = param_6;
    puVar3 = PTR_PTR_1126d2310;
    _objc_alloc();
    func_0x00010c008ac0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275ca94);
    *(undefined **)((long)puVar1 + (long)_DAT_11275ca94) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275ca98);
    *(undefined **)((long)puVar1 + (long)_DAT_11275ca98) = puVar3;
    _objc_release(uVar2);
    func_0x00010beae7c0(puVar1);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d06e54; end: 106d06e9b; -[SCMemoriesCameraRollAlbumPickerViewController loadView] */

void FUN_106d06e54(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6858;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadView_112604be0);
  func_0x00010be3a780(param_1);
  return;
}



/* Entry: 106d06e9c; end: 106d06f23; -[SCMemoriesCameraRollAlbumPickerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d06e9c(long param_1)

{
  undefined *puVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6858;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11275ca94));
  _objc_release(puVar1);
  return;
}



/* Entry: 106d06f24; end: 106d07147; -[SCMemoriesCameraRollAlbumPickerViewController _setupObservers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d06f24(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  lVar5 = (long)_DAT_11275ca8c;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010beff320(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0e60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106d07148;
  puStack_88 = &UNK_110842c58;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c1592a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0e60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 106d07148; end: 106d071d7;  */

void FUN_106d07148(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee37e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d071d8; end: 106d072ef; -[SCMemoriesCameraRollAlbumPickerViewController _updateViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d071d8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11275ca9c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(ulong *)(param_1 + lVar4) = param_3;
  _objc_release(uVar1);
  if (*(long *)(param_1 + _DAT_11275ca90) == 0) {
    lVar4 = (long)_DAT_11275caa0;
    *(undefined8 *)(param_1 + lVar4) = 0;
    uVar2 = param_3;
    func_0x00010bf529e0();
    if (uVar2 != 0) {
      uVar2 = param_3;
      func_0x00010c0dfd40(param_3,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c261400();
      _objc_release(uVar2);
      if (uVar3 == 0xd1) {
        *(long *)(param_1 + lVar4) = *(long *)(param_1 + lVar4) + 1;
      }
    }
    uVar2 = param_3;
    func_0x00010bf529e0();
    if (1 < uVar2) {
      uVar2 = param_3;
      func_0x00010c0dfd40(param_3,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c261400();
      _objc_release(uVar2);
      if (uVar3 == 0xcb) {
        *(long *)(param_1 + lVar4) = *(long *)(param_1 + lVar4) + 1;
      }
    }
  }
  func_0x00010c128b60(*(undefined8 *)(param_1 + _DAT_11275caa4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106d072f0; end: 106d07347; -[SCMemoriesCameraRollAlbumPickerViewController _updateSelectedAssetCollection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d072f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11275ca84;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf2a6e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d07348; end: 106d0779f; -[SCMemoriesCameraRollAlbumPickerViewController _initTableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106d07348(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar17 = (long)_DAT_11275caa4;
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar16);
  func_0x00010c1fce40(*(undefined8 *)(param_1 + lVar17),param_2,0);
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar17),param_2,
                      *(undefined8 *)(param_1 + _DAT_11275ca88));
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar17),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar17),param_2,param_1);
  func_0x00010c1eeb20(0x405a000000000000,*(undefined8 *)(param_1 + lVar17));
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  puVar1 = PTR_PTR_1126d2318;
  _objc_opt_class(PTR_PTR_1126d2318);
  puVar2 = PTR_PTR_1126d2318;
  _objc_opt_class(PTR_PTR_1126d2318);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125fe0(uVar16,param_2,puVar1,puVar2);
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126d2320;
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c014ac0(0);
  uVar16 = *(undefined8 *)(param_1 + _DAT_11275caa8);
  *(undefined **)(param_1 + _DAT_11275caa8) = puVar1;
  _objc_release(uVar16);
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010bf20c00(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c013de0(0,0,puVar1);
  func_0x00010c211680(*(undefined8 *)(param_1 + lVar17),param_2,puVar1);
  _objc_release(puVar1);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar4 = *(long *)(param_1 + lVar17);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf493a0(lVar4,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar17);
  lStack_88 = lVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bfe01e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar7;
  func_0x00010bf493a0(uVar7,param_2,lVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar17);
  uStack_80 = uVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bf493a0(uVar10,param_2,lVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar17);
  uStack_78 = uVar13;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf493a0(uVar14,param_2,lVar17);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar15);
  _objc_release(lVar17);
  _objc_release(param_1);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar16);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar4;
  }
  ___stack_chk_fail();
  lVar3 = 1;
  if (*(long *)(lVar4 + _DAT_11275ca90) != 1) {
    lVar3 = 2;
  }
  return lVar3;
}



/* Entry: 106d077a0; end: 106d077bb; -[SCMemoriesCameraRollAlbumPickerViewController numberOfSectionsInTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d077a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (*(long *)(param_1 + _DAT_11275ca90) != 1) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 106d077bc; end: 106d0786b; -[SCMemoriesCameraRollAlbumPickerViewController tableView:numberOfRowsInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106d077bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_11275ca90) == 1) {
    lVar1 = *(long *)(param_1 + _DAT_11275ca9c);
    func_0x00010bf529e0(lVar1);
  }
  else if (param_4 == 1) {
    lVar1 = *(long *)(param_1 + _DAT_11275ca9c);
    func_0x00010bf529e0(lVar1);
    lVar1 = lVar1 - *(long *)(param_1 + _DAT_11275caa0);
  }
  else if (param_4 == 0) {
    lVar1 = *(long *)(param_1 + _DAT_11275caa0);
  }
  else {
    lVar1 = 0;
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 106d0786c; end: 106d079ab; -[SCMemoriesCameraRollAlbumPickerViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d0786c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d2318;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e080(param_3,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  lVar6 = (long)_DAT_11275ca9c;
  if (*(long *)(param_1 + lVar6) != 0) {
    uVar3 = param_4;
    func_0x00010c142240();
    uVar4 = *(ulong *)(param_1 + lVar6);
    func_0x00010bf529e0();
    if (uVar3 < uVar4) {
      uVar3 = param_4;
      func_0x00010c1554e0();
      if (uVar3 == 0) {
        uVar5 = *(undefined8 *)(param_1 + lVar6);
        uVar3 = param_4;
        func_0x00010c142240(param_4);
      }
      else {
        uVar3 = param_4;
        func_0x00010c1554e0();
        if (uVar3 != 1) goto LAB_106d0798c;
        uVar5 = *(undefined8 *)(param_1 + lVar6);
        uVar3 = param_4;
        func_0x00010c142240(param_4);
        uVar3 = *(long *)(param_1 + _DAT_11275caa0) + uVar3;
      }
      func_0x00010c0dfd40(uVar5,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12f7c0(uVar2,param_2,uVar5);
      _objc_release(uVar5);
    }
  }
LAB_106d0798c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106d079ac; end: 106d07c0f; -[SCMemoriesCameraRollAlbumPickerViewController tableView:viewForHeaderInSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d079ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  lVar13 = param_4;
  _objc_alloc_init();
  puVar2 = puVar1;
  if (param_4 == 1) {
    puVar2 = *(undefined **)(param_1 + _DAT_11275ca9c);
    func_0x00010bf529e0();
    if (*(undefined **)(param_1 + _DAT_11275caa0) < puVar2) {
      puVar2 = PTR_PTR_1126aea58;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      func_0x00010c219b60();
      func_0x00010c21ad00(puVar2,param_2,0x16);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      puVar3 = puVar2;
      func_0x00010c213040(puVar2,param_2,4);
      func_0x000106d09ad0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      func_0x00010befbb60(puVar1,param_2,puVar2);
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar4 = puVar2;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010bf493c0(0x4030000000000000,puVar4,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      puStack_78 = puVar6;
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar1;
      func_0x00010bf348e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010bf493a0(puVar7,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = 2;
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar9;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3,param_2,puVar10);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c21e900(puVar1,param_2,0);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar13);
  lVar11 = lVar13;
  func_0x00010c142240(lVar13);
  lVar12 = lVar13;
  func_0x00010c1554e0();
  _objc_release(lVar13);
  if (lVar12 == 1) {
    lVar11 = *(long *)(puVar2 + _DAT_11275caa0) + lVar11;
  }
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e84318,puVar3);
  _objc_release(puVar3);
  func_0x00010bfd0140(*(undefined8 *)(puVar2 + _DAT_11275ca94),param_2,puVar2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106d07c10; end: 106d07ceb; -[SCMemoriesCameraRollAlbumPickerViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d07c10(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c142240(param_4);
  lVar2 = param_4;
  func_0x00010c1554e0();
  _objc_release(param_4);
  if (lVar2 == 1) {
    lVar1 = *(long *)(param_1 + _DAT_11275caa0) + lVar1;
  }
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460(puVar3,param_2,&PTR____CFConstantStringClassReference_110e84318,puVar4);
  _objc_release(puVar4);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11275ca94),param_2,param_1,puVar3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106d07cec; end: 106d07cff; -[SCMemoriesCameraRollAlbumPickerViewController tableView:heightForHeaderInSection:] */

undefined8 FUN_106d07cec(void)

{
  long in_x3;
  undefined8 uVar1;
  
  uVar1 = 0x4032000000000000;
  if (in_x3 != 1) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 106d07d00; end: 106d07d07; -[SCMemoriesCameraRollAlbumPickerViewController tableView:heightForFooterInSection:] */

undefined8 FUN_106d07d00(void)

{
  return 0;
}



/* Entry: 106d07d08; end: 106d07d17; -[SCMemoriesCameraRollAlbumPickerViewController tableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d07d08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275caa4);
}



/* Entry: 106d07d18; end: 106d07d57; -[SCMemoriesCameraRollAlbumPickerViewController setTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d07d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275caa4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d07d58; end: 106d07d67; -[SCMemoriesCameraRollAlbumPickerViewController headerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106d07d58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275caa8);
}



/* Entry: 106d07d68; end: 106d07da7; -[SCMemoriesCameraRollAlbumPickerViewController setHeaderView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d07d68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275caa8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106d07da8; end: 106d07e43; -[SCMemoriesCameraRollAlbumPickerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d07da8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275caa8,0);
  _objc_storeStrong(param_1 + _DAT_11275caa4,0);
  _objc_storeStrong(param_1 + _DAT_11275ca98,0);
  _objc_storeStrong(param_1 + _DAT_11275ca9c,0);
  _objc_storeStrong(param_1 + _DAT_11275ca88,0);
  _objc_destroyWeak(param_1 + _DAT_11275ca84);
  _objc_storeStrong(param_1 + _DAT_11275ca8c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275ca94,0);
  return;
}



/* Entry: 106d07e44; end: 106d07e93; -[SCMemoriesCameraRollAlbumPillCell initWithFrame:] */

undefined1 * FUN_106d07e44(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6860;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb1160(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106d07e94; end: 106d07ee7; -[SCMemoriesCameraRollAlbumPillCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d07e94(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6860;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275caac));
  return;
}



/* Entry: 106d07ee8; end: 106d07f73; -[SCMemoriesCameraRollAlbumPillCell renderCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d07ee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275caac));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c07d660(param_3);
  uVar2 = param_3;
  func_0x00010c07dea0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bed5810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateColorWithSelected_isShort_112592fa8,uVar1,uVar2);
  return;
}



/* Entry: 106d07f74; end: 106d08307; -[SCMemoriesCameraRollAlbumPillCell _setupView] */

/* WARNING: Possible PIC construction at 0x000106d0802c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106d08030) */
/* WARNING: Removing unreachable block (ram,0x000106d08304) */
/* WARNING: Removing unreachable block (ram,0x000106d083d4) */
/* WARNING: Removing unreachable block (ram,0x000106d08414) */
/* WARNING: Removing unreachable block (ram,0x000106d083d8) */
/* WARNING: Removing unreachable block (ram,0x000106d0844c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Removing unreachable block (ram,0x000106d0832c) */
/* WARNING: Removing unreachable block (ram,0x000106d08338) */
/* WARNING: Removing unreachable block (ram,0x000106d08344) */
/* WARNING: Removing unreachable block (ram,0x000106d082e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d07f74(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4030000000000000);
  _objc_release(lVar1);
  _objc_release(lVar4);
  puVar2 = PTR_PTR_1126aea58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_11275caac;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar3);
  func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c21ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_setTypeStyle__112664568,0x18);
  return;
}



/* Entry: 106d08308; end: 106d08497; -[SCMemoriesCameraRollAlbumPillCell _updateColorWithSelected:isShortcutDesign:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d08308(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  if (param_4 == 0) {
    if (param_3 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11275caac));
      _objc_release(puVar3);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11275caac));
      _objc_release(puVar3);
    }
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  uVar1 = 0xc6;
  if (param_3 == 0) {
    uVar1 = 0xbf;
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11275caac;
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c21ad10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_setTypeStyle__112664568,7);
  return;
}



/* Entry: 106d08498; end: 106d084ab; -[SCMemoriesCameraRollAlbumPillCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d08498(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275caac,0);
  return;
}



/* Entry: 106d084ac; end: 106d08613; -[SCMemoriesCameraRollAlbumPillViewController initWithScopeDelegate:backgroundColor:dataProvider:origin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106d084ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f6868;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11275cab0),param_3);
    lVar4 = (long)_DAT_11275cab4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275cab8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    *(long *)((long)puVar1 + (long)_DAT_11275cabc) = param_6;
    puVar3 = PTR_PTR_1126d2310;
    _objc_alloc();
    func_0x00010c008ac0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275cac0);
    *(undefined **)((long)puVar1 + (long)_DAT_11275cac0) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275cac4);
    *(undefined **)((long)puVar1 + (long)_DAT_11275cac4) = puVar3;
    _objc_release(uVar2);
    *(bool *)((long)puVar1 + (long)_DAT_11275cac8) = param_6 == 0;
    func_0x00010beae7c0(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106d08614; end: 106d0865b; -[SCMemoriesCameraRollAlbumPillViewController loadView] */

void FUN_106d08614(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6868;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_loadView_112604be0);
  func_0x00010beab960(param_1);
  return;
}



/* Entry: 106d0865c; end: 106d086e3; -[SCMemoriesCameraRollAlbumPillViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d0865c(long param_1)

{
  undefined *puVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f6868;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + _DAT_11275cac0));
  _objc_release(puVar1);
  return;
}



/* Entry: 106d086e4; end: 106d08af7; -[SCMemoriesCameraRollAlbumPillViewController _setupCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d086e4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_1126afd18;
  _objc_alloc_init();
  func_0x00010c1f7ac0();
  func_0x00010c1c82c0(0x4010000000000000,puVar1);
  func_0x00010c1c8300(0x4010000000000000,puVar1);
  func_0x00010c197460(*(undefined8 *)PTR__UICollectionViewFlowLayoutAutomaticSize_110345b08,
                      *(undefined8 *)(PTR__UICollectionViewFlowLayoutAutomaticSize_110345b08 + 8),
                      puVar1);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_alloc();
  func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar19 = (long)_DAT_11275cacc;
  uVar18 = *(undefined8 *)(param_1 + lVar19);
  *(undefined **)(param_1 + lVar19) = puVar2;
  _objc_release(uVar18);
  func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar19));
  func_0x00010c181f80(0,0x4020000000000000,0,0x4020000000000000,*(undefined8 *)(param_1 + lVar19));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar19));
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar19));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar19));
  _objc_release(puVar2);
  uVar18 = *(undefined8 *)(param_1 + lVar19);
  _objc_opt_class(PTR_PTR_1126d2328);
  puVar2 = PTR_PTR_1126d2328;
  _objc_opt_class(PTR_PTR_1126d2328);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126000(uVar18);
  _objc_release(puVar2);
  if (*(char *)(param_1 + _DAT_11275cac8) == '\x01') {
    func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar19));
  }
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar19));
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar4 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(lVar19);
  _objc_release(param_1);
  _objc_release(uVar13);
  _objc_release(uVar16);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar18);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  _objc_initWeak(auStack_148,puVar1);
  lVar17 = (long)_DAT_11275cab8;
  uVar16 = *(undefined8 *)(puVar1 + lVar17);
  func_0x00010beff340(uVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar16;
  func_0x00010c0e0e60(uVar16);
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_106d08d1c;
  puStack_158 = &UNK_110842c58;
  _objc_copyWeak(auStack_150,auStack_148);
  uVar9 = uVar18;
  func_0x00010c25ff60(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar9);
  _objc_release(uVar18);
  _objc_release(puVar2);
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(puVar1 + lVar17);
  func_0x00010c1592a0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar16;
  func_0x00010c0e0e60(uVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_178,auStack_148);
  uVar9 = uVar18;
  func_0x00010c25ff60(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar9);
  _objc_release(uVar18);
  _objc_release(puVar1);
  _objc_release(uVar16);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_148);
  return;
}



/* Entry: 106d08af8; end: 106d08d1b; -[SCMemoriesCameraRollAlbumPillViewController _setupObservers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d08af8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  lVar5 = (long)_DAT_11275cab8;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010beff340(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0e60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106d08d1c;
  puStack_88 = &UNK_110842c58;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c1592a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0e60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 106d08d1c; end: 106d08dab;  */

void FUN_106d08d1c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be88520();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106d08dac; end: 106d09233; -[SCMemoriesCameraRollAlbumPillViewController _refreshDataWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d08dac(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_6;
  _objc_retain(param_6);
  puVar13 = param_6;
  func_0x00010bf529e0();
  if (puVar13 != (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
    do {
      puVar1 = param_6;
      puVar3 = puVar13;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c07d660();
      _objc_release(puVar1);
      if (((ulong)puVar2 & 1) != 0) {
        *(undefined8 **)(param_4 + _DAT_11275cad0) = puVar13;
        if (*(char *)(param_4 + _DAT_11275cac8) == '\x01') goto LAB_106d08e8c;
        goto LAB_106d090dc;
      }
      puVar13 = (undefined8 *)((long)puVar13 + 1);
      puVar1 = param_6;
      func_0x00010bf529e0();
    } while (puVar13 < puVar1);
  }
  if (*(char *)(param_4 + _DAT_11275cac8) == '\x01') {
    *(undefined8 *)(param_4 + _DAT_11275cad0) = 3;
LAB_106d08e8c:
    puVar13 = param_6;
    func_0x00010c0d3c80();
    puVar3 = param_6;
    func_0x00010bf529e0();
    if ((undefined8 *)0x2 < puVar3) {
      puVar4 = PTR_PTR_1126d22d0;
      _objc_alloc(PTR_PTR_1126d22d0);
      ppuVar5 = &PTR____CFConstantStringClassReference_110e84218;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e84218,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c053180(puVar4);
      _objc_release(ppuVar5);
      func_0x00010c066b00(puVar13);
      _objc_release(puVar4);
    }
    func_0x00010bf529e0();
    puVar3 = puVar13;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_11275cad4;
    uVar9 = *(undefined8 *)(param_4 + lVar10);
    *(undefined8 **)(param_4 + lVar10) = puVar3;
    _objc_release(uVar9);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar6 = puVar4;
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    dVar16 = 0.0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    lVar11 = *(long *)(param_4 + lVar10);
    _objc_retain(lVar11);
    puVar3 = &uStack_160;
    lVar12 = lVar11;
    func_0x00010bf52a60();
    if (lVar12 == 0) {
      dVar18 = 0.0;
    }
    else {
      lVar14 = *plStack_150;
      uVar9 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
      dVar18 = 0.0;
      do {
        lVar15 = 0;
        do {
          if (*plStack_150 != lVar14) {
            _objc_enumerationMutation(lVar11);
          }
          uVar8 = *(undefined8 *)(lStack_158 + lVar15 * 8);
          func_0x00010c2711a0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          uStack_120 = uVar9;
          puStack_118 = puVar7;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23d660(uVar8);
          _objc_release(puVar6);
          _objc_release(uVar8);
          dVar17 = dVar16 + 24.0;
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          dVar16 = dVar17;
          func_0x00010c0df720(dVar17,PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(puVar6);
          dVar18 = dVar18 + dVar17;
          lVar15 = lVar15 + 1;
        } while (lVar12 != lVar15);
        puVar3 = &uStack_160;
        lVar12 = lVar11;
        func_0x00010bf52a60();
      } while (lVar12 != 0);
    }
    _objc_release(lVar11);
    puVar6 = puVar4;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)(param_4 + _DAT_11275cad8);
    *(undefined **)(param_4 + _DAT_11275cad8) = puVar6;
    _objc_release(uVar9);
    puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar6);
    lVar10 = *(long *)(param_4 + lVar10);
    func_0x00010bf529e0(lVar10);
    lVar12 = (long)_DAT_11275cacc;
    uVar9 = *(undefined8 *)(param_4 + lVar12);
    func_0x00010bf408e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8300(((param_3 - dVar18) + -16.0) / (double)(lVar10 - 1));
    func_0x00010c1f93e0(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),uVar9);
    _objc_release(uVar9);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar13);
  }
  else {
LAB_106d090dc:
    lVar12 = (long)_DAT_11275cad4;
    _objc_retain(param_6);
    uVar9 = *(undefined8 *)(param_4 + lVar12);
    *(undefined8 **)(param_4 + lVar12) = param_6;
    _objc_release(uVar9);
    lVar12 = (long)_DAT_11275cacc;
  }
  func_0x00010c128b60(*(undefined8 *)(param_4 + lVar12));
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = (long)_DAT_11275cab0;
  _objc_retain(puVar3);
  lVar12 = (long)param_6 + lVar12;
  _objc_loadWeakRetained(lVar12);
  func_0x00010bf7a760();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar12);
  return;
}



/* Entry: 106d09234; end: 106d0928b; -[SCMemoriesCameraRollAlbumPillViewController _updateSelectedAssetCollection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106d09234(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11275cab0;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7a760();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


