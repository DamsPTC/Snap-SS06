/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108cd29f8; end: 108cd2a37; -[SCPreviewToolImageTimePickerButton setSubImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd29f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a880;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd2a38; end: 108cd2a77; -[SCPreviewToolImageTimePickerButton setSubTitleView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd2a38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a888;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd2a78; end: 108cd2ab7; -[SCPreviewToolImageTimePickerButton setLightningImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd2a78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a884;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd2ab8; end: 108cd2b47; -[SCPreviewToolImageTimePickerButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd2ab8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277a884,0);
  _objc_storeStrong(param_1 + _DAT_11277a888,0);
  _objc_storeStrong(param_1 + _DAT_11277a880,0);
  _objc_storeStrong(param_1 + _DAT_11277a88c,0);
  _objc_storeStrong(param_1 + _DAT_11277a87c,0);
  _objc_storeStrong(param_1 + _DAT_11277a878,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277a874,0);
  return;
}



/* Entry: 108cd2b48; end: 108cd2be3; -[SCPreviewToolVideoTimePickerButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108cd2b48(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe378;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277a898);
    *(undefined ***)((long)puVar1 + (long)_DAT_11277a898) =
         &PTR__OBJC_CLASS___NSConstantFloatNumber_111186500;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277a89c);
    *(undefined **)((long)puVar1 + (long)_DAT_11277a89c) = puVar3;
    _objc_release(uVar2);
    func_0x00010befbb60(puVar1);
    func_0x00010bed45c0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108cd2be4; end: 108cd2c93; -[SCPreviewToolVideoTimePickerButton initWithIconStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108cd2be4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  if (param_1 != 0) {
    *(long *)(param_1 + _DAT_11277a890) = param_3;
    func_0x00010bed45c0(param_1);
    puVar1 = PTR_PTR_1126b08d8;
    if (param_3 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c30a24(0x402e000000000000,0x3fc3333333333333,
                          *(undefined8 *)PTR__CGSizeZero_110347620,
                          *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar1,param_1,puVar2);
      _objc_release(puVar2);
    }
  }
  return param_1;
}



/* Entry: 108cd2c94; end: 108cd2d0f; -[SCPreviewToolVideoTimePickerButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd2c94(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fe378;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  uVar1 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidY();
  func_0x00010c17a6a0(param_1,uVar1,*(undefined8 *)(param_2 + _DAT_11277a89c));
  return;
}



/* Entry: 108cd2d10; end: 108cd2db7; -[SCPreviewToolVideoTimePickerButton setShowingHighlighted:] */

void FUN_108cd2d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c074da0();
  if ((int)uVar2 == 0) {
    uVar3 = 0x3fd3333333333333;
    uVar1 = 0x3ff0000000000000;
    uVar2 = 0;
  }
  else {
    uVar3 = 0x3fc3333333333333;
    func_0x00010bdcb3a0(0x3ff570a3d70a3d71,0x3fc3333333333333,0,param_1,param_2,param_1,param_3,0);
    uVar1 = 0x3ff3333333333333;
    uVar2 = uVar3;
  }
  func_0x00010bdcb3a0(uVar1,uVar3,uVar2,param_1,param_2,param_1,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cd2db8; end: 108cd2e33; -[SCPreviewToolVideoTimePickerButton setHighlighted:] */

void FUN_108cd2db8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c074da0();
  if ((int)param_3 != (int)uVar1) {
    puStack_28 = PTR_PTR_1126fe378;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_setHighlighted__112647c38,param_3);
    uVar1 = param_1;
    func_0x00010c074da0();
    if ((uVar1 & 1) == 0) {
      func_0x00010c07d660(param_1);
    }
    func_0x00010c202400(param_1);
  }
  return;
}



/* Entry: 108cd2e34; end: 108cd2eaf; -[SCPreviewToolVideoTimePickerButton setSelected:] */

void FUN_108cd2e34(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c07d660();
  if ((int)param_3 != (int)uVar1) {
    puStack_28 = PTR_PTR_1126fe378;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_setSelected__11265c598,param_3);
    uVar1 = param_1;
    func_0x00010c074da0();
    if ((uVar1 & 1) == 0) {
      func_0x00010c07d660(param_1);
      func_0x00010c202400(param_1);
    }
    func_0x00010bed45c0(param_1);
  }
  return;
}



/* Entry: 108cd2eb0; end: 108cd2f17; -[SCPreviewToolVideoTimePickerButton setTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd2eb0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277a898;
  uVar1 = param_3;
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + lVar3));
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(ulong *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010bed45c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cd2f18; end: 108cd2f5f; -[SCPreviewToolVideoTimePickerButton setMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd2f18(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0cfd40();
  if (param_3 == lVar1) {
    return;
  }
  *(long *)(param_1 + _DAT_11277a894) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed45d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateButtonState_112592b18);
  return;
}



/* Entry: 108cd2f60; end: 108cd332b; -[SCPreviewToolVideoTimePickerButton _updateButtonState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd2f60(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = param_1;
  func_0x00010c0cfd40();
  puVar3 = PTR_PTR_1126b0c40;
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (puVar1 == (undefined *)0x2) {
    lVar4 = *(long *)(param_1 + _DAT_11277a890);
    if (lVar4 == 2) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar4 != 1) {
        if (lVar4 != 0) goto LAB_108cd32d4;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = param_1;
        func_0x00010bfe90c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a9f00();
        goto LAB_108cd32c4;
      }
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010bfe90c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(puVar1);
LAB_108cd32c4:
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    if (puVar1 != (undefined *)0x1) {
      if (puVar1 != (undefined *)0x0) goto LAB_108cd32e0;
      lVar4 = *(long *)(param_1 + _DAT_11277a890);
      if (lVar4 == 2) {
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (lVar4 != 1) {
          if (lVar4 == 0) {
            func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = param_1;
            func_0x00010bfe90c0(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a9f00();
            goto LAB_108cd32c4;
          }
          goto LAB_108cd32d4;
        }
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_1;
      func_0x00010bfe90c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00();
      _objc_release(puVar1);
      goto LAB_108cd32c4;
    }
    lVar4 = *(long *)(param_1 + _DAT_11277a890);
    if (lVar4 == 2) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
LAB_108cd3118:
      func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_1;
      func_0x00010bfe90c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00();
      _objc_release(puVar1);
      goto LAB_108cd32c4;
    }
    if (lVar4 == 1) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108cd3118;
    }
    if (lVar4 == 0) {
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bfe90c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00();
      goto LAB_108cd32c4;
    }
  }
LAB_108cd32d4:
  func_0x00010c161020(param_1);
LAB_108cd32e0:
  puVar3 = param_1;
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d620();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 108cd332c; end: 108cd33fb; -[SCPreviewToolVideoTimePickerButton _animateView:toScale:withDuration:delay:highlighted:completion:] */

void FUN_108cd332c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108cd33fc;
  puStack_68 = &UNK_110848c48;
  uStack_60 = param_6;
  uStack_58 = param_1;
  _objc_retain(param_6);
  func_0x00010bf03460(param_2,param_3,0x3ff0000000000000,0x3fb999999999999a,puVar1,param_5,2,
                      &puStack_80,param_8);
  _objc_release(uStack_60);
  _objc_release(param_6);
  return;
}



/* Entry: 108cd33fc; end: 108cd344b;  */

void FUN_108cd33fc(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _CGAffineTransformMakeScale
            (&uStack_50,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 108cd344c; end: 108cd345b; -[SCPreviewToolVideoTimePickerButton mode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd344c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a894);
}



/* Entry: 108cd345c; end: 108cd346b; -[SCPreviewToolVideoTimePickerButton time] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd345c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a898);
}



/* Entry: 108cd346c; end: 108cd347b; -[SCPreviewToolVideoTimePickerButton iconStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd346c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a890);
}



/* Entry: 108cd347c; end: 108cd348b; -[SCPreviewToolVideoTimePickerButton setIconStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd347c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277a890) = param_3;
  return;
}



/* Entry: 108cd348c; end: 108cd349b; -[SCPreviewToolVideoTimePickerButton imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd348c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a89c);
}



/* Entry: 108cd349c; end: 108cd34db; -[SCPreviewToolVideoTimePickerButton setImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd349c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a89c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd34dc; end: 108cd351b; -[SCPreviewToolVideoTimePickerButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd34dc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277a89c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277a898,0);
  return;
}



/* Entry: 108cd351c; end: 108cd35ff; -[SCPreviewToolbarCreationServiceProvider provide] */

void FUN_108cd351c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dbaa0;
  _objc_alloc(PTR_PTR_1126dbaa0);
  func_0x00010c039ca0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cd3600; end: 108cd3697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd3600(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126dba98;
    _objc_alloc(PTR_PTR_1126dba98);
    lVar1 = param_1 + _DAT_11277a8a4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05fd00(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108cd3698; end: 108cd36cf; -[SCPreviewToolbarCreationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd3698(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277a8a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277a8a0);
  return;
}



/* Entry: 108cd36d0; end: 108cd3743; -[SCPreviewToolbarCreator initWithValdiRuntimeProvider:] */

undefined1 * FUN_108cd36d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe380;
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



/* Entry: 108cd3744; end: 108cd386f; -[SCPreviewToolbarCreator createPreviewToolbarWithItems:toolbarItemsWithTooltip:highlightedItems:showLabels:labelTimeout:topMargin:actionHandling:] */

void FUN_108cd3744(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_3 + 8);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010bde4080(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126dbaa8;
  _objc_alloc(PTR_PTR_1126dbaa8);
  func_0x00010c061d40();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cd3870; end: 108cd3b27; -[SCPreviewToolbarCreator _composerViewModelWithItems:itemsWithTooltip:highlightedItems:showLabels:labelTimeout:topMargin:actionHandler:] */

void FUN_108cd3870(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  uVar1 = param_3;
  func_0x00010bdd5ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_88,param_9);
  _objc_initWeak(auStack_90,param_3);
  puVar2 = PTR_PTR_1126dbab0;
  _objc_alloc(PTR_PTR_1126dbab0);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_108cd3b28;
  puStack_a8 = &UNK_110868518;
  _objc_copyWeak(auStack_a0,auStack_90);
  _objc_copyWeak(auStack_98,auStack_88);
  _objc_copyWeak(auStack_d0,auStack_90);
  _objc_copyWeak(auStack_c8,auStack_88);
  func_0x00010c020500(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1952e0(puVar2);
  _objc_release(puVar3);
  if ((param_8 != 0) && (0.0 < param_1)) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b72c0(puVar2);
    _objc_release(puVar3);
  }
  if (0.0 < param_2) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2b20(puVar2);
    _objc_release(puVar3);
  }
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cd3b28; end: 108cd3bf7;  */

void FUN_108cd3b28(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf515a0(lVar1);
    func_0x00010bf7cf40(param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108cd3bf8; end: 108cd3cb7; -[SCPreviewToolbarCreator _buildComposerItemsArrayFromToolbarItems:itemsWithTooltip:highlightedItems:] */

void FUN_108cd3bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108cd3cb8;
  puStack_50 = &UNK_110ac1b50;
  uStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x000107c31908(param_3,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108cd3cb8; end: 108cd3daf;  */

void FUN_108cd3cb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  _objc_retain(param_2);
  iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c067fc0(param_2);
  func_0x00010bf51500();
  if (iVar3 == -1) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf4b900(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bf4b900();
    puVar2 = PTR_PTR_1126dbab8;
    _objc_alloc(PTR_PTR_1126dbab8);
    func_0x00010c055880();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c202180(puVar2);
    _objc_release(puVar1);
    func_0x00010c1b1b20(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cd3db0; end: 108cd3dcf; -[SCPreviewToolbarCreator convertToNativeItemTypeFromComposerItem:] */

undefined8 FUN_108cd3db0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (param_3 < 0x16) {
    return *(undefined8 *)(&UNK_10df9f850 + (ulong)param_3 * 8);
  }
  return 0;
}



/* Entry: 108cd3dd0; end: 108cd3def; -[SCPreviewToolbarCreator convertToComposerItemFromNativeItemType:] */

undefined4 FUN_108cd3dd0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x19) {
    return *(undefined4 *)(&UNK_10df9f900 + param_3 * 4);
  }
  return 0;
}



/* Entry: 108cd3df0; end: 108cd3dfb; -[SCPreviewToolbarCreator .cxx_destruct] */

void FUN_108cd3df0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cd3dfc; end: 108cd3ea3; -[SCPreviewToolbarTimerButtonItem initWithTimerType:iconStyle:target:selector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108cd3dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fe388;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithBarButtonItemType_iconSt_1125db448,6);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c215da0(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277a8ac) = param_4;
    puVar2 = PTR_PTR_1126c42c0;
    func_0x00010c084f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277a8b0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277a8b0) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108cd3ea4; end: 108cd3ea7; -[SCPreviewToolbarTimerButtonItem viewForLayoutConstraint] */

void FUN_108cd3ea4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c273610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_toolButton_11267a7a8);
  return;
}



/* Entry: 108cd3ea8; end: 108cd4027; -[SCPreviewToolbarTimerButtonItem toolButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd3ea8(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = (long)_DAT_11277a8b4;
  lVar5 = *(long *)(param_1 + lVar7);
  if (lVar5 == 0) {
    lVar5 = param_1;
    func_0x00010c2708a0();
    ppuVar1 = &PTR_PTR_1126dbac0;
    if (lVar5 != 0) {
      ppuVar1 = &PTR_PTR_1126dbac8;
    }
    puVar2 = *ppuVar1;
    _objc_alloc();
    func_0x00010c01af80();
    lVar8 = (long)_DAT_11277a8b8;
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar2;
    _objc_release(uVar4);
    lVar5 = param_1;
    func_0x00010c26f400(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c26f000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214bc0(*(undefined8 *)(param_1 + lVar8),param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar5);
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    _objc_retain(uVar6);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = uVar6;
    _objc_release(uVar4);
    lVar5 = param_1;
    func_0x00010c0841c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010beecec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar7),param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar5);
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar7),param_2,param_1,
                        PTR_s_toolButtonTapped__11253cd98,0x40);
    func_0x00010c23d620(*(undefined8 *)(param_1 + lVar7));
    func_0x00010bf01b40(param_1);
    func_0x00010c1677c0(*(undefined8 *)(param_1 + lVar7));
    lVar5 = param_1;
    func_0x00010c07d660(param_1);
    func_0x00010c1fadc0(*(undefined8 *)(param_1 + lVar7),param_2,lVar5);
    *(undefined1 *)(param_1 + _DAT_11277a8bc) = 1;
    lVar5 = *(long *)(param_1 + lVar7);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 108cd4028; end: 108cd402b; -[SCPreviewToolbarTimerButtonItem timerButton] */

void FUN_108cd4028(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c273610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_toolButton_11267a7a8);
  return;
}



/* Entry: 108cd402c; end: 108cd40bf; -[SCPreviewToolbarTimerButtonItem setTimeItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd402c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a8b0);
  *(undefined8 *)(param_1 + _DAT_11277a8b0) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c26f000(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c270620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c214bc0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd40c0; end: 108cd413b; -[SCPreviewToolbarTimerButtonItem setTimerType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd40c0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_11277a8c0;
  if (*(long *)(param_1 + lVar2) != param_3) {
    lVar3 = (long)_DAT_11277a8b4;
    func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + _DAT_11277a8bc) = 0;
  }
  *(long *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c167650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAllowsLongPress__1126377b0,param_3 == 0);
  return;
}



/* Entry: 108cd413c; end: 108cd4173; -[SCPreviewToolbarTimerButtonItem setMode:] */

void FUN_108cd413c(undefined8 param_1)

{
  func_0x00010c270620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cd4174; end: 108cd41af; -[SCPreviewToolbarTimerButtonItem mode] */

undefined8 FUN_108cd4174(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c270620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0cfd40();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108cd41b0; end: 108cd4207; -[SCPreviewToolbarTimerButtonItem setDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd41b0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe388;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setDisabled__112641538);
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_11277a8b4));
  return;
}



/* Entry: 108cd4208; end: 108cd4247; -[SCPreviewToolbarTimerButtonItem supportsBounceMode] */

bool FUN_108cd4208(long param_1)

{
  long lVar1;
  
  func_0x00010c270620();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0cfd40();
  _objc_release(param_1);
  return lVar1 == 2;
}



/* Entry: 108cd4248; end: 108cd4257; -[SCPreviewToolbarTimerButtonItem isToolButtonLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108cd4248(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277a8bc);
}



/* Entry: 108cd4258; end: 108cd4267; -[SCPreviewToolbarTimerButtonItem setToolButtonLoaded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd4258(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277a8bc) = param_3;
  return;
}



/* Entry: 108cd4268; end: 108cd4277; -[SCPreviewToolbarTimerButtonItem iconStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd4268(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a8ac);
}



/* Entry: 108cd4278; end: 108cd4287; -[SCPreviewToolbarTimerButtonItem timeItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd4278(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a8b0);
}



/* Entry: 108cd4288; end: 108cd4297; -[SCPreviewToolbarTimerButtonItem timerType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd4288(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a8c0);
}



/* Entry: 108cd4298; end: 108cd42d7; -[SCPreviewToolbarTimerButtonItem setToolButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd4298(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a8b4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd42d8; end: 108cd4317; -[SCPreviewToolbarTimerButtonItem setTimerButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd42d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277a8b8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108cd4318; end: 108cd4367; -[SCPreviewToolbarTimerButtonItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd4318(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277a8b8,0);
  _objc_storeStrong(param_1 + _DAT_11277a8b4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277a8b0,0);
  return;
}



/* Entry: 108cd4368; end: 108cd43af; +[SCTimePickerItem itemWithTime:] */

void FUN_108cd4368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c052260();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108cd43b0; end: 108cd4423; -[SCTimePickerItem initWithTime:] */

undefined1 * FUN_108cd43b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe390;
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



/* Entry: 108cd4424; end: 108cd442f; -[SCTimePickerItem timeStringWithDecimals:] */

void FUN_108cd4424(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  _objc_opt_new(PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70);
  if (0 < param_3) {
    func_0x00010c1c3b60(puVar3);
    func_0x00010c1c8260(puVar3);
  }
  if (lRam000000011372edf0 != -1) {
    func_0x000107c27d9c(0x11372edf0,&PTR___NSConcreteGlobalBlock_110aca1b8);
  }
  uVar1 = uRam000000011372ede8;
  puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
  _objc_retain(uRam000000011372ede8);
  func_0x00010bf5f320(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c087ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if ((int)uVar7 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf3e0(puVar3);
    _objc_release(puVar4);
  }
  puVar4 = puVar3;
  func_0x00010c25d4c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108cd4430; end: 108cd44af; -[SCTimePickerItem secondsString] */

void FUN_108cd4430(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c075760();
  if ((int)uVar1 == 0) {
    func_0x00010c26f000();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c071ae0();
    _objc_release(param_1);
    if ((int)uVar1 == 0) {
      func_0x000108edee70();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108edee58();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x000108edeae0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cd44b0; end: 108cd44ef; -[SCTimePickerItem timeForAPI] */

void FUN_108cd44b0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c075760();
  if ((uVar1 & 1) == 0) {
    func_0x00010c26f000(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cd44f0; end: 108cd4533; -[SCTimePickerItem isInfinite] */

undefined8 FUN_108cd44f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c26f000();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c071ae0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108cd4534; end: 108cd4577; -[SCTimePickerItem isLightning] */

bool FUN_108cd4534(double param_1,undefined8 param_2)

{
  func_0x00010c26f000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(param_2);
  return param_1 < 1.0;
}



/* Entry: 108cd4578; end: 108cd462b; -[SCTimePickerItem isEqual:] */

ulong FUN_108cd4578(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    uVar2 = 1;
  }
  else {
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar1 = param_3;
      func_0x00010c26f000(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f000(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c071ae0(uVar1);
      _objc_release(param_1);
      _objc_release(uVar1);
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 108cd462c; end: 108cd4633; +[SCTimePickerItem supportsSecureCoding] */

undefined8 FUN_108cd462c(void)

{
  return 1;
}



/* Entry: 108cd4634; end: 108cd46bb; -[SCTimePickerItem initWithCoder:] */

undefined1 * FUN_108cd4634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe390;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cd46bc; end: 108cd4717; -[SCTimePickerItem encodeWithCoder:] */

void FUN_108cd46bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c26f000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110ea2878);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cd4718; end: 108cd471f; -[SCTimePickerItem time] */

undefined8 FUN_108cd4718(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cd4720; end: 108cd4833; -[SCTimePickerItem .cxx_destruct] */

void FUN_108cd4720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cd4834; end: 108cd492b;  */

void FUN_108cd4834(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126dbad0;
  _objc_opt_class(PTR_PTR_1126dbad0);
  func_0x00010bf249e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar3,param_2,&PTR____CFConstantStringClassReference_110ef1fd8,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108cd492c; end: 108cd4bbf; -[SCLeftSwipeableTransitionAnimator animateTransition:] */

void FUN_108cd492c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_6);
  uVar3 = param_6;
  func_0x00010c29c220(param_6,param_5,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_6;
  func_0x00010c29c220(param_6,param_5,
                      *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  func_0x00010bf4b2a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar5,param_5,uVar6);
  _objc_release(uVar6);
  uVar6 = uVar3;
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15cda0(uVar5,param_5,uVar6);
  _objc_release(uVar6);
  func_0x00010bf20c00(uVar5);
  _CGAffineTransformMakeTranslation(&uStack_90,param_3,0);
  uVar6 = uVar4;
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar7 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar12 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar11 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar10 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_c0 = uVar7;
  uStack_b8 = uVar9;
  uStack_b0 = uVar11;
  uStack_a8 = uVar12;
  uStack_a0 = uVar8;
  uStack_98 = uVar10;
  func_0x00010c219960();
  _objc_release(uVar6);
  uVar6 = uVar3;
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = uVar7;
  uStack_b8 = uVar9;
  uStack_b0 = uVar11;
  uStack_a8 = uVar12;
  uStack_a0 = uVar8;
  uStack_98 = uVar10;
  func_0x00010c219960();
  _objc_release(uVar6);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c27a940(param_4,param_5,param_6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_108cd4bc0;
  puStack_108 = &UNK_1108e7be0;
  _objc_retain(uVar4);
  uStack_e8 = uStack_88;
  uStack_f0 = uStack_90;
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  uStack_100 = uVar4;
  _objc_retain(uVar3);
  puStack_158 = puVar1;
  uStack_150 = 0xc2000000;
  uStack_148 = 0x108cd4c54;
  puStack_140 = &UNK_1108500c8;
  uStack_138 = uVar4;
  uStack_130 = uVar3;
  uStack_128 = param_6;
  uStack_f8 = uVar3;
  _objc_retain(param_6);
  _objc_retain(uVar3);
  _objc_retain(uVar4);
  func_0x00010bf03440(uVar8,0,puVar2,param_5,0x30000,&puStack_120,&puStack_158);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  _objc_release(uStack_138);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(param_6);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  return;
}



/* Entry: 108cd4bc0; end: 108cd4d07;  */

void FUN_108cd4bc0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  return;
}



/* Entry: 108cd4d08; end: 108cd4d13; -[SCLeftSwipeableTransitionAnimator transitionDuration:] */

undefined8 FUN_108cd4d08(void)

{
  return 0x3fc999999999999a;
}



/* Entry: 108cd4d14; end: 108cd4daf; -[SCLeftSwipeableSubscreenViewController initWithNibName:bundle:] */

undefined1 * FUN_108cd4d14(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe398;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithNibName_bundle__1125e9850);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c21e060(puVar1);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18f820();
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108cd4db0; end: 108cd4e13; -[SCLeftSwipeableSubscreenViewController viewWillAppear:] */

void FUN_108cd4db0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe398;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(param_1);
  return;
}



/* Entry: 108cd4e14; end: 108cd4e77; -[SCLeftSwipeableSubscreenViewController viewDidAppear:] */

void FUN_108cd4e14(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe398;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(param_1);
  return;
}



/* Entry: 108cd4e78; end: 108cd4f1f; -[SCLeftSwipeableSubscreenViewController viewWillDisappear:] */

void FUN_108cd4e78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == param_1) {
    lVar1 = param_1;
    func_0x00010c0d66a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(lVar1);
  }
  puStack_38 = PTR_PTR_1126fe398;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillDisappear__112685438,param_3);
  return;
}



/* Entry: 108cd4f20; end: 108cd511b; -[SCLeftSwipeableSubscreenViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd4f20(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fe398;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc();
  func_0x00010c050900();
  lVar4 = (long)_DAT_11277a8cc;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0xbff0000000000000,0);
  _objc_release(lVar2);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x4014000000000000);
  _objc_release(lVar2);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3e19999a);
  _objc_release(lVar2);
  _objc_release(lVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(puVar1);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(param_1);
  return;
}



/* Entry: 108cd511c; end: 108cd51f7; -[SCLeftSwipeableSubscreenViewController viewDidLayoutSubviews] */

void FUN_108cd511c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fe398;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_viewDidLayoutSubviews_112684cc8);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  uVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010bf199c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 108cd51f8; end: 108cd5233; -[SCLeftSwipeableSubscreenViewController didSelectDismissalActionWithHeaderItem:] */

void FUN_108cd51f8(undefined8 param_1)

{
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108cd5234; end: 108cd53ef; -[SCLeftSwipeableSubscreenViewController _handlePanGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd5234(double param_1,undefined8 param_2,double param_3,ulong param_4,undefined8 param_5
                  ,long param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_6);
  uVar3 = param_4;
  func_0x00010c076340();
  if ((uVar3 & 1) != 0) goto LAB_108cd53d8;
  uVar3 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(param_6,param_5,uVar3);
  uVar1 = param_4;
  func_0x00010c29bf00(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  param_1 = param_1 / param_3;
  _objc_release(uVar1);
  _objc_release(uVar3);
  dVar6 = 1.0;
  dVar7 = 1.0;
  if (param_1 <= 1.0) {
    dVar7 = param_1;
  }
  lVar5 = param_6;
  func_0x00010c252440();
  if (lVar5 == 1) {
    puVar2 = PTR__OBJC_CLASS___UIPercentDrivenInteractiveTransition_1126c2cb8;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)(param_4 + (long)_DAT_11277a8d0);
    *(undefined **)(param_4 + (long)_DAT_11277a8d0) = puVar2;
    _objc_release(uVar4);
    func_0x00010c0d66a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c103a00();
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar3 = param_4;
  }
  else {
    lVar5 = param_6;
    func_0x00010c252440();
    if (lVar5 == 2) {
      func_0x00010c286a00(dVar7,*(undefined8 *)(param_4 + (long)_DAT_11277a8d0));
      goto LAB_108cd53d8;
    }
    lVar5 = param_6;
    func_0x00010c252440();
    if ((lVar5 != 3) && (lVar5 = param_6, func_0x00010c252440(), lVar5 != 4)) goto LAB_108cd53d8;
    uVar3 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297a00(param_6,param_5,uVar3);
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11277a8d0;
    if ((param_1 <= 0.0) || (param_1 <= ABS(dVar6))) {
      func_0x00010bf2e5a0(*(undefined8 *)(param_4 + lVar5));
    }
    else {
      func_0x00010bfaf8e0();
    }
    uVar3 = *(ulong *)(param_4 + lVar5);
    *(undefined8 *)(param_4 + lVar5) = 0;
  }
  _objc_release(uVar3);
LAB_108cd53d8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 108cd53f0; end: 108cd5423; -[SCLeftSwipeableSubscreenViewController gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_108cd53f0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + _DAT_11277a8cc)) {
    return 1;
  }
  func_0x00010c076340();
  return (uint)param_1 ^ 1;
}



/* Entry: 108cd5424; end: 108cd54bf; -[SCLeftSwipeableSubscreenViewController gestureRecognizerShouldBegin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108cd5424(double param_1,double param_2,ulong param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11277a8cc;
  if (param_5 == *(long *)(param_3 + lVar5)) {
    uVar2 = param_3;
    func_0x00010c076340();
    if ((uVar2 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_3 + lVar5);
      uVar3 = uVar4;
      func_0x00010c29bf00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297a00(uVar4,param_4,uVar3);
      _objc_release(uVar3);
      bVar1 = false;
      if (0.0 < param_1) {
        bVar1 = ABS(param_2) < ABS(param_1);
      }
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 108cd54c0; end: 108cd5527; -[SCLeftSwipeableSubscreenViewController navigationController:animationControllerForOperation:fromViewController:toViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd54c0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  if (param_4 == 2) {
    lVar2 = (long)_DAT_11277a8cc;
    lVar1 = *(long *)(param_1 + lVar2);
    func_0x00010c252440();
    if (lVar1 != 1) {
      lVar1 = *(long *)(param_1 + lVar2);
      func_0x00010c252440();
      if (lVar1 != 2) goto _objc_autoreleaseReturnValue;
    }
    _objc_opt_new(PTR_PTR_1126dbad8);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cd5528; end: 108cd5557; -[SCLeftSwipeableSubscreenViewController navigationController:interactionControllerForAnimationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd5528(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277a8d0);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108cd5558; end: 108cd555b; -[SCLeftSwipeableSubscreenViewController navigationControllerSupportedInterfaceOrientations:] */

void FUN_108cd5558(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2631d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_supportedInterfaceOrientations_112676698);
  return;
}



/* Entry: 108cd555c; end: 108cd555f; -[SCLeftSwipeableSubscreenViewController navigationControllerPreferredInterfaceOrientationForPresentation:] */

void FUN_108cd555c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c106c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_preferredInterfaceOrientationFor_11261f540);
  return;
}



/* Entry: 108cd5560; end: 108cd556f; -[SCLeftSwipeableSubscreenViewController isLeftSwipeDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108cd5560(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277a8c8);
}



/* Entry: 108cd5570; end: 108cd557f; -[SCLeftSwipeableSubscreenViewController setLeftSwipeDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd5570(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277a8c8) = param_3;
  return;
}



/* Entry: 108cd5580; end: 108cd55bf; -[SCLeftSwipeableSubscreenViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd5580(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277a8d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277a8cc,0);
  return;
}



/* Entry: 108cd55c0; end: 108cd5627; -[SCBlurEffect initWithStyle:blurRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd55c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fe3a0;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277a8d4) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277a8d8) = param_4;
  }
  return;
}



/* Entry: 108cd5628; end: 108cd575b; -[SCBlurEffect effectSettings] */

void FUN_108cd5628(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fe3a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_effectSettings_1125392d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf1e7c0(param_1);
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c25dfa0(param_1);
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(puVar1);
  _objc_release(puVar2);
  func_0x00010c220220(puVar1);
  func_0x00010c220220(puVar1);
  func_0x00010c220220(puVar1);
  func_0x00010c220220(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108cd575c; end: 108cd576b; -[SCBlurEffect blurRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd575c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a8d4);
}



/* Entry: 108cd576c; end: 108cd577b; -[SCBlurEffect setBlurRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd576c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277a8d4) = param_1;
  return;
}



/* Entry: 108cd577c; end: 108cd578b; -[SCBlurEffect style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108cd577c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277a8d8);
}



/* Entry: 108cd578c; end: 108cd579b; -[SCBlurEffect setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd578c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277a8d8) = param_3;
  return;
}



/* Entry: 108cd579c; end: 108cd5887; -[SCCameraVisualEffectReplicatorContainerView initWithFrame:effect:effectFrame:replicatorLayer:] */

undefined1 *
FUN_108cd579c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_1126fe3a8;
  uStack_80 = param_9;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_80,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beac420(param_5,param_6,param_7,param_8,puVar1);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  return (undefined1 *)puVar1;
}



/* Entry: 108cd5888; end: 108cd58fb; -[SCCameraVisualEffectReplicatorContainerView hitTest:withEvent:] */

void FUN_108cd5888(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_1126fe3a8;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined1 **)param_1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cd58fc; end: 108cd5a4b; -[SCCameraVisualEffectReplicatorContainerView _setupEffectViewWithEffect:effectFrame:replicatorLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd58fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_retain(param_7);
  _objc_alloc();
  func_0x00010c00ee20();
  _objc_release(param_7);
  lVar5 = (long)_DAT_11277a8dc;
  uVar2 = *(undefined8 *)(param_5 + lVar5);
  *(undefined **)(param_5 + lVar5) = puVar1;
  _objc_release(uVar2);
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar5));
  lVar4 = (long)_DAT_11277a8e0;
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  *(undefined8 *)(param_5 + lVar4) = param_8;
  _objc_retain(param_8);
  _objc_release(uVar2);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
  uVar3 = *(undefined8 *)(param_5 + lVar4);
  uVar2 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20(uVar3,param_6,uVar2);
  _objc_release(uVar2);
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20();
  _objc_release(param_8);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108cd5a4c; end: 108cd5a4f; -[SCCameraVisualEffectReplicatorContainerView view] */

void FUN_108cd5a4c(void)

{
  return;
}



/* Entry: 108cd5a50; end: 108cd5a8f; -[SCCameraVisualEffectReplicatorContainerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108cd5a50(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277a8e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277a8dc,0);
  return;
}



/* Entry: 108cd5a90; end: 108cd5adf; -[SCLongPressLoadingArcConfiguration initWithOutter] */

undefined1 * FUN_108cd5a90(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe3b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf47280(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108cd5ae0; end: 108cd5b2f; -[SCLongPressLoadingArcConfiguration initWithInner] */

undefined1 * FUN_108cd5ae0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe3b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf47120(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108cd5b30; end: 108cd5bbb; -[SCLongPressLoadingArcConfiguration configureOutterArc] */

void FUN_108cd5b30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 8) = 1;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)PTR__UIOffsetZero_110345d40;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(PTR__UIOffsetZero_110345d40 + 8);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = 0x4008000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x4006666666666666;
  *(undefined8 *)(param_1 + 0x40) = 0x3ff999999999999a;
  *(undefined8 *)(param_1 + 0x38) = 0x3fe3333333333333;
  *(undefined8 *)(param_1 + 0x50) = 0x3ff921fb54442d18;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}


