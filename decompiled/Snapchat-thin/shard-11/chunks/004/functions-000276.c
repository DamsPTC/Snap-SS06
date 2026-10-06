/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10854aaf8; end: 10854ad93; -[SCSpectaclesExportLabelCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10854aaf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = PTR_PTR_1126fcc48;
  puVar1 = &uStack_a8;
  uStack_a8 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar10 = (long)_DAT_112776178;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar2;
    _objc_release(uVar9);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar10));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar10));
    _objc_release(puVar2);
    func_0x000107c30a88();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar10));
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010c1677c0(0x3fd6666666666666,*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010befbb60(puVar1);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar10));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar10);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = uVar9;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar10);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf348e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_90 = uVar8;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_7 = puVar3;
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar9);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return puVar1;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_7;
  _objc_retain();
  func_0x000107c30a88();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c23d660(param_7);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined8 **)((long)puVar1 + (long)_DAT_112776178);
}



/* Entry: 10854ad94; end: 10854ae97; +[SCSpectaclesExportLabelCollectionViewCell sizeForText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10854ad94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uVar1 = param_3;
  _objc_retain();
  func_0x000107c30a88();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb3e40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = uVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&uStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c23d660(param_3,param_2,puVar3);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar3 + _DAT_112776178);
}



/* Entry: 10854ae98; end: 10854aea7; -[SCSpectaclesExportLabelCollectionViewCell exportLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10854ae98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776178);
}



/* Entry: 10854aea8; end: 10854aee7; -[SCSpectaclesExportLabelCollectionViewCell setExportLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10854aea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112776178;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10854aee8; end: 10854aefb; -[SCSpectaclesExportLabelCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10854aee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776178,0);
  return;
}



/* Entry: 10854aefc; end: 10854b01b; -[SCSpectaclesExportLivePreviewView initWithMediaViewProviderBlock:snapSize:spectaclesMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10854aefc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fcc50;
  uStack_60 = param_3;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_60,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277617c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277617c) = uVar2;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112776180) = param_1;
    ((undefined8 *)((long)puVar1 + (long)_DAT_112776180))[1] = param_2;
    lVar5 = (long)_DAT_112776184;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112776188) = 0;
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar3);
    func_0x00010beae0c0(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10854b01c; end: 10854b06b; -[SCSpectaclesExportLivePreviewView setCropMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10854b01c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + (long)_DAT_112776188) != param_3) {
    *(long *)(param_1 + (long)_DAT_112776188) = param_3;
    uVar1 = param_1;
    func_0x00010bf20c00();
    _CGRectIsEmpty();
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beda770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateLayout_112594380);
      return;
    }
  }
  return;
}



/* Entry: 10854b06c; end: 10854b0d7; -[SCSpectaclesExportLivePreviewView layoutSubviews] */

void FUN_10854b06c(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fcc50;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010beda760(param_1);
  lVar1 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010be74540(param_1);
  }
  return;
}



/* Entry: 10854b0d8; end: 10854b15b; -[SCSpectaclesExportLivePreviewView didMoveToSuperview] */

void FUN_10854b0d8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fcc50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_didMoveToSuperview_1125bb968);
  uVar1 = param_1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010bf20c00();
    _CGRectIsEmpty();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010be74540(param_1);
    }
  }
  return;
}



/* Entry: 10854b15c; end: 10854b1cf; -[SCSpectaclesExportLivePreviewView _setupMediaView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10854b15c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_11277617c);
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11277618c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(long *)(param_1 + lVar3) = lVar1;
  _objc_release(uVar2);
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
    return;
  }
  return;
}



/* Entry: 10854b1d0; end: 10854b28b; -[SCSpectaclesExportLivePreviewView _play] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10854b1d0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_112776190;
  if ((*(byte *)(param_1 + lVar2) & 1) == 0) {
    lVar3 = (long)_DAT_11277618c;
    uVar1 = *(ulong *)(param_1 + lVar3);
    if ((uVar1 == 0) || (_objc_opt_respondsToSelector(uVar1,PTR_s_play_11261d2f8), (uVar1 & 1) != 0)
       ) {
      *(undefined1 *)(param_1 + lVar2) = 1;
      func_0x00010c0fe360(*(undefined8 *)(param_1 + lVar3));
      _dispatch_time(0,300000000);
      func_0x00010058c530();
    }
  }
  return;
}



/* Entry: 10854b28c; end: 10854b2a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10854b28c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277618c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 10854b2a4; end: 10854b317; -[SCSpectaclesExportLivePreviewView _updateLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10854b2a4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112776188);
  if (lVar1 == 2) {
    func_0x00010be5ee00(param_1);
  }
  else if (lVar1 == 1) {
    func_0x00010be5edc0(param_1);
  }
  else {
    if (lVar1 != 0) {
      return;
    }
    func_0x00010be5ede0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277618c),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10854b318; end: 10854b383; -[SCSpectaclesExportLivePreviewView _prebakedPadding] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10854b318(long param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_112776184);
  func_0x0001090245f4();
  dVar2 = 0.0;
  if (iVar1 != 0) {
    func_0x00010bf20c00(0,param_1);
    _CGRectGetWidth();
    dVar2 = (double)(long)((dVar2 / 0.95) * 0.025 * 0.125) * 8.0;
  }
  return dVar2;
}



/* Entry: 10854b384; end: 10854b3bf; -[SCSpectaclesExportLivePreviewView _mediaViewFrameWithNoCrop] */

void FUN_10854b384(undefined8 param_1)

{
  func_0x00010be76ba0();
  func_0x00010bf20c00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectInset_1103475b0)();
  return;
}



/* Entry: 10854b3c0; end: 10854b46f; -[SCSpectaclesExportLivePreviewView _mediaViewFrameWithCircularCenterCrop] */

undefined1  [16]
FUN_10854b3c0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar1 = param_1;
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  _hypot(param_1,dVar1);
  dVar3 = (double)(long)param_1;
  func_0x00010be76ba0(param_5);
  uVar2 = 0x4000000000000000;
  dVar3 = dVar3 + param_1 * 2.0;
  func_0x00010bf20c00(param_5);
  dVar1 = param_1;
  _CGRectGetMidX();
  _CGRectGetMidY(param_1,uVar2,param_3,param_4);
  auVar4._0_8_ = dVar1 - dVar3 * 0.5;
  auVar4._8_8_ = param_1 - dVar3 * 0.5;
  return auVar4;
}



/* Entry: 10854b470; end: 10854b547; -[SCSpectaclesExportLivePreviewView _mediaViewFrameWithRectangularCenterCrop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10854b470(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  dVar1 = *(double *)(param_5 + _DAT_112776180);
  dVar5 = 0.0;
  if (dVar1 != 0.0) {
    dVar5 = ((double *)(param_5 + _DAT_112776180))[1];
    if (dVar5 == 0.0) {
      dVar5 = INFINITY;
    }
    else {
      dVar5 = dVar1 / dVar5;
    }
  }
  func_0x00010bf20c00(param_5);
  dVar4 = param_4;
  func_0x00010b690c04(param_3,param_4,dVar5);
  dVar1 = param_3;
  dVar3 = param_4;
  func_0x00010bf20c00(param_5);
  dVar2 = dVar1;
  _CGRectGetMidX();
  _CGRectGetMidY(dVar1,dVar3,dVar5,dVar4);
  auVar6._0_8_ = dVar2 - param_3 * 0.5;
  auVar6._8_8_ = dVar1 - param_4 * 0.5;
  return auVar6;
}



/* Entry: 10854b548; end: 10854b597; -[SCSpectaclesExportLivePreviewView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10854b548(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277618c,0);
  _objc_storeStrong(param_1 + _DAT_112776184,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277617c,0);
  return;
}



/* Entry: 10854b598; end: 10854b8d7;  */

undefined1  [16] FUN_10854b598(undefined8 param_1,undefined8 param_2,uint param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  
  if ((long)param_4 < 4) {
    if (param_4 < 3) {
      if ((int)param_3 < 7) {
        if ((int)param_3 < 5) {
          if (param_3 - 3 < 2) {
            param_2 = 0x409b000000000000;
            param_1 = param_2;
            goto LAB_10854b878;
          }
          param_2 = 0x4087800000000000;
          param_1 = param_2;
          if (param_3 == 2) goto LAB_10854b878;
        }
        else {
          if (param_3 == 5) {
LAB_10854b72c:
            param_2 = 0x4094000000000000;
            param_1 = param_2;
            goto LAB_10854b878;
          }
          if (param_3 == 6) {
            param_2 = 0x4092000000000000;
            param_1 = param_2;
            goto LAB_10854b878;
          }
        }
      }
      else if (3 < param_3 - 9) {
        if (param_3 == 7) {
          param_2 = 0x409c600000000000;
          param_1 = param_2;
          goto LAB_10854b878;
        }
        if (param_3 == 8) goto LAB_10854b72c;
      }
    }
    else if (param_4 == 3) {
      if ((int)param_3 < 7) {
        if ((int)param_3 < 4) {
          if (param_3 == 2) {
            param_2 = 0x4083000000000000;
            param_1 = 0x4075000000000000;
            goto LAB_10854b878;
          }
          if (param_3 == 3) goto LAB_10854b844;
        }
        else {
          if (param_3 == 4) {
            param_2 = 0x4096400000000000;
            param_1 = 0x4089000000000000;
            goto LAB_10854b878;
          }
          if (param_3 == 5) {
LAB_10854b7a8:
            param_2 = 0x4090800000000000;
            param_1 = 0x4082800000000000;
            goto LAB_10854b878;
          }
          if (param_3 == 6) {
            param_2 = 0x408d800000000000;
            param_1 = 0x4080800000000000;
            goto LAB_10854b878;
          }
        }
      }
      else if (3 < param_3 - 9) {
        if (param_3 == 7) {
LAB_10854b844:
          param_2 = 0x4097800000000000;
          param_1 = 0x408a000000000000;
          goto LAB_10854b878;
        }
        if (param_3 == 8) goto LAB_10854b7a8;
      }
    }
  }
  else if ((long)param_4 < 6) {
    if (param_4 == 4) {
      if ((int)param_3 < 7) {
        if ((int)param_3 < 4) {
          if (param_3 == 2) {
            param_2 = 0x4081800000000000;
            param_1 = 0x407a000000000000;
            goto LAB_10854b878;
          }
          if (param_3 == 3) goto LAB_10854b808;
        }
        else {
          if (param_3 == 4) {
            param_2 = 0x4094800000000000;
            param_1 = 0x408ec00000000000;
            goto LAB_10854b878;
          }
          if (param_3 == 5) {
LAB_10854b750:
            param_2 = 0x408e400000000000;
            param_1 = 0x4086c00000000000;
            goto LAB_10854b878;
          }
          if (param_3 == 6) {
            param_2 = 0x408b000000000000;
            param_1 = 0x4084400000000000;
            goto LAB_10854b878;
          }
        }
      }
      else if (3 < param_3 - 9) {
        if (param_3 == 7) {
LAB_10854b808:
          param_2 = 0x4095800000000000;
          param_1 = 0x4090200000000000;
          goto LAB_10854b878;
        }
        if (param_3 == 8) goto LAB_10854b750;
      }
    }
    else if ((param_4 == 5) && (param_3 - 2 < 7)) {
      FUN_10854b598(param_3,3);
      goto LAB_10854b878;
    }
  }
  else if (param_4 == 6) {
    if ((int)param_3 < 7) {
      if ((int)param_3 < 4) {
        if (param_3 == 2) {
          param_2 = 0x407f000000000000;
          param_1 = param_2;
          goto LAB_10854b878;
        }
        if (param_3 == 3) goto LAB_10854b82c;
      }
      else {
        if (param_3 == 4) {
          param_2 = 0x4092200000000000;
          param_1 = param_2;
          goto LAB_10854b878;
        }
        if (param_3 == 5) goto LAB_10854b780;
        if (param_3 == 6) {
          param_2 = 0x4088000000000000;
          param_1 = param_2;
          goto LAB_10854b878;
        }
      }
    }
    else if (3 < param_3 - 9) {
      if (param_3 == 7) {
LAB_10854b82c:
        param_2 = 0x4093000000000000;
        param_1 = param_2;
        goto LAB_10854b878;
      }
      if (param_3 == 8) {
LAB_10854b780:
        param_2 = 0x408ac00000000000;
        param_1 = param_2;
        goto LAB_10854b878;
      }
    }
  }
  else if ((((param_4 == 7) && (param_3 < 0xd)) && ((1 << (ulong)(param_3 & 0x1f) & 0x1afcU) == 0))
          && (param_3 == 8)) {
    param_2 = 0x40a3000000000000;
    param_1 = 0x4093000000000000;
    goto LAB_10854b878;
  }
  param_2 = *(undefined8 *)PTR__CGSizeZero_110347620;
  param_1 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
LAB_10854b878:
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Entry: 10854b8d8; end: 10854bac3;  */

undefined * FUN_10854b8d8(long param_1)

{
  if (param_1 - 1U < 4) {
    return (&PTR_PTR_110a549e8)[param_1 - 1U];
  }
  return (undefined *)0x0;
}



/* Entry: 10854bac4; end: 10854bc13; -[SCSpectaclesCustomExportOptionViewModel initWithThumbnailImage:cropMode:circularBorderColor:isVR180:descriptionLabelText:nameLabelText:accessibilityIdentifier:] */

undefined1 *
FUN_10854bac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126fcc58;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10854bc14; end: 10854bc37; -[SCSpectaclesCustomExportOptionViewModel copyWithZone:] */

undefined8 FUN_10854bc14(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10854bc38; end: 10854bcd7; -[SCSpectaclesCustomExportOptionViewModel hash] */

undefined8 * FUN_10854bc38(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10854bdc0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10854bdcc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(char *)((long)puVar3 + 8) == param_3[8])))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071c60(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x28);
          if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x30);
            if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
              if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                func_0x00010c071ae0();
                goto LAB_10854bdcc;
              }
              goto LAB_10854bdc0;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10854bdcc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10854bcd8; end: 10854bde7; -[SCSpectaclesCustomExportOptionViewModel isEqual:] */

long FUN_10854bcd8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10854bdc0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10854bdcc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if (lVar3 != *(long *)(param_3 + 0x38)) {
                func_0x00010c071ae0();
                goto LAB_10854bdcc;
              }
              goto LAB_10854bdc0;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10854bdcc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10854bde8; end: 10854bdef; -[SCSpectaclesCustomExportOptionViewModel thumbnailImage] */

undefined8 FUN_10854bde8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10854bdf0; end: 10854bdf7; -[SCSpectaclesCustomExportOptionViewModel cropMode] */

undefined8 FUN_10854bdf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10854bdf8; end: 10854bdff; -[SCSpectaclesCustomExportOptionViewModel circularBorderColor] */

undefined8 FUN_10854bdf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10854be00; end: 10854be07; -[SCSpectaclesCustomExportOptionViewModel isVR180] */

undefined1 FUN_10854be00(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10854be08; end: 10854be0f; -[SCSpectaclesCustomExportOptionViewModel descriptionLabelText] */

undefined8 FUN_10854be08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10854be10; end: 10854be17; -[SCSpectaclesCustomExportOptionViewModel nameLabelText] */

undefined8 FUN_10854be10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10854be18; end: 10854be1f; -[SCSpectaclesCustomExportOptionViewModel accessibilityIdentifier] */

undefined8 FUN_10854be18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10854be20; end: 10854be73; -[SCSpectaclesCustomExportOptionViewModel .cxx_destruct] */

void FUN_10854be20(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10854be74; end: 10854bf5b; -[SCSpectaclesCustomExportViewModel initWithTitle:subtitle:showShareButton:optionViewModels:] */

undefined1 *
FUN_10854be74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fcc60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10854bf5c; end: 10854bf7f; -[SCSpectaclesCustomExportViewModel copyWithZone:] */

undefined8 FUN_10854bf5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10854bf80; end: 10854c003; -[SCSpectaclesCustomExportViewModel hash] */

undefined8 * FUN_10854bf80(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10854c0ac:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10854c0b8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10854c0b8;
          }
          goto LAB_10854c0ac;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10854c0b8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10854c004; end: 10854c0d3; -[SCSpectaclesCustomExportViewModel isEqual:] */

long FUN_10854c004(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10854c0ac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10854c0b8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10854c0b8;
          }
          goto LAB_10854c0ac;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10854c0b8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10854c0d4; end: 10854c0db; -[SCSpectaclesCustomExportViewModel title] */

undefined8 FUN_10854c0d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10854c0dc; end: 10854c0e3; -[SCSpectaclesCustomExportViewModel subtitle] */

undefined8 FUN_10854c0dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10854c0e4; end: 10854c0eb; -[SCSpectaclesCustomExportViewModel showShareButton] */

undefined1 FUN_10854c0e4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10854c0ec; end: 10854c0f3; -[SCSpectaclesCustomExportViewModel optionViewModels] */

undefined8 FUN_10854c0ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10854c0f4; end: 10854c12f; -[SCSpectaclesCustomExportViewModel .cxx_destruct] */

void FUN_10854c0f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10854c130; end: 10854c3cb; -[SCSnapVideoFilterCoordinatorImpl initWithMediaOverlayCoordinator:retryLimit:persistConverter:stateValidator:lensProcessingLauncher:cache:logger:appLifeCycleManager:diskPerformer:circumstanceEngine:] */

undefined8 *
FUN_10854c130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126fcc68;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[8];
    puVar1[8] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[9];
    puVar1[9] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[10];
    puVar1[10] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = puVar1[0xc];
    puVar1[0xc] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 0xe,param_7);
    puVar1[1] = param_4;
    _objc_retain(param_8);
    uVar3 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar3);
  }
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



/* Entry: 10854c3cc; end: 10854c547; -[SCSnapVideoFilterCoordinatorImpl filterVideoAndCreateThumbnailUsingSnapVideoFilter:withMediaId:skipTranscodingIfPossible:crossPostToStoryInfo:completion:] */

void FUN_10854c3cc(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (((param_3 != 0) && (param_4 != 0)) && (param_7 != 0)) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    lVar1 = *(long *)(param_1 + 0x40);
    func_0x00010c0e00e0(lVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1 + 0x40);
      func_0x00010c0e00e0(lVar2,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar2 != param_3) {
        _objc_sync_exit(param_1);
        _objc_release(param_1);
        goto LAB_10854c500;
      }
    }
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40),param_2,param_3,param_4);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x58),param_2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cfbb0,param_4);
    func_0x00010bec3e60(param_1,param_2,param_6,param_4);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    func_0x00010c1c4880(param_3,param_2,param_4);
    func_0x00010be46980(param_1,param_2,param_3,0,param_4,param_5,param_7);
  }
LAB_10854c500:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10854c548; end: 10854c783; -[SCSnapVideoFilterCoordinatorImpl filterVideoUsingSnapVideoFilter:withMediaId:outputBitrate:videoTargetSize:skipTranscodingIfPossible:crossPostToStoryInfo:completion:] */

void FUN_10854c548(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  ,long param_10)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if (((param_5 == 0) || (param_6 == 0)) || (param_10 == 0)) goto LAB_10854c72c;
  _objc_retain(param_3);
  _objc_sync_enter(param_3);
  lVar1 = *(long *)(param_3 + 0x40);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_10854c624:
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x40));
    puVar3 = PTR_PTR_1126d9fe8;
    _objc_alloc(PTR_PTR_1126d9fe8);
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c2971c0(param_1,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    FUN_1085655a8(puVar3,puVar4,param_7);
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x48));
    _objc_release(puVar3);
    _objc_release(puVar4);
    func_0x00010bec3e60(param_3);
    _objc_sync_exit(param_3);
    _objc_release(param_3);
    func_0x00010c1c4880(param_5);
    _objc_retain(param_10);
    func_0x00010be469a0(param_1,param_2,param_3);
    param_3 = param_10;
  }
  else {
    lVar2 = *(long *)(param_3 + 0x40);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == param_5) goto LAB_10854c624;
    _objc_sync_exit(param_3);
  }
  _objc_release(param_3);
LAB_10854c72c:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10854c784; end: 10854c807;  */

void FUN_10854c784(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1358;
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_5);
  func_0x00010bf5a440(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1,param_4,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10854c808; end: 10854cacb; -[SCSnapVideoFilterCoordinatorImpl filterVideoFragmentedUsingSnapVideoFilter:withMediaId:outputBitrate:videoTargetSize:segmentOutputBlock:crossPostToStoryInfo:completion:] */

void FUN_10854c808(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9,
                  long param_10)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if ((((param_5 == 0) || (param_6 == 0)) || (param_8 == 0)) || (param_10 == 0)) goto LAB_10854ca64;
  _objc_retain(param_3);
  _objc_sync_enter(param_3);
  lVar1 = *(long *)(param_3 + 0x40);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_10854c968:
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x40));
    puVar3 = PTR_PTR_1126d9fe8;
    _objc_alloc(PTR_PTR_1126d9fe8);
    puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c2971c0(param_1,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    FUN_1085655a8(puVar3,puVar4,param_7);
    func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x48));
    _objc_release(puVar3);
    _objc_release(puVar4);
    func_0x00010bec3e60(param_3);
    _objc_sync_exit(param_3);
    _objc_release(param_3);
    _objc_retain(param_10);
    func_0x00010be46920(param_1,param_2,param_3);
    param_3 = param_10;
  }
  else {
    lVar2 = *(long *)(param_3 + 0x40);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == param_5) goto LAB_10854c968;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_10 + 0x10))(param_10,0,0,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_sync_exit(param_3);
  }
  _objc_release(param_3);
LAB_10854ca64:
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10854cacc; end: 10854cb4f;  */

void FUN_10854cacc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1358;
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_5);
  func_0x00010bf5a440(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1,param_4,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10854cb50; end: 10854cdb7; -[SCSnapVideoFilterCoordinatorImpl retryTranscodingForMediaId:completion:] */

void FUN_10854cb50(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == 0) || (param_4 == 0)) {
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,0,0,0,puVar6);
    _objc_release(puVar6);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar7);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae960;
    puVar2 = PTR_PTR_1126d9ff0;
    func_0x00010c29a100(PTR_PTR_1126d9ff0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c4d00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae970;
    func_0x00010c292920(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(uVar7);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c2a1620(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_70);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10854cdb8; end: 10854cec3;  */

void FUN_10854cdb8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010beadac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  _objc_retain(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  func_0x00010c0f7fc0(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar2);
  return;
}



/* Entry: 10854cec4; end: 10854cfa7;  */

void FUN_10854cec4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010be0f7c0(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10854cfa8; end: 10854d04b;  */

void FUN_10854cfa8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be931c0();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3,param_4,param_5);
  }
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10854d04c; end: 10854d227; -[SCSnapVideoFilterCoordinatorImpl resetTranscodingForMediaId:completion:] */

void FUN_10854d04c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar1 = param_3;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
    else {
      _objc_retain(param_1);
      _objc_sync_enter(param_1);
      lVar1 = *(long *)(param_1 + 0x40);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        _objc_sync_exit(param_1);
        _objc_release(param_1);
        _objc_initWeak(auStack_48,param_1);
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_50,auStack_48);
        _objc_retain(param_4);
        _objc_retain(param_3);
        func_0x00010c13ef20(uVar2);
        _objc_release(uVar2);
        _objc_release(param_3);
        _objc_release(param_4);
        _objc_destroyWeak(auStack_50);
        _objc_destroyWeak(auStack_48);
      }
      else {
        func_0x00010be0b600(param_1);
        _objc_sync_exit(param_1);
        _objc_release(param_1);
        func_0x00010bf2ebc0(lVar1);
        (**(code **)(param_4 + 0x10))(param_4,1);
      }
      _objc_release(lVar1);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10854d228; end: 10854d2a3;  */

void FUN_10854d228(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    pcVar4 = *(code **)(lVar3 + 0x10);
    bVar1 = false;
  }
  else {
    lVar3 = lVar2;
    func_0x00010be960c0(lVar2);
    bVar1 = lVar3 == 0;
    lVar3 = *(long *)(param_1 + 0x28);
    pcVar4 = *(code **)(lVar3 + 0x10);
  }
  (*pcVar4)(lVar3,bVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10854d2a4; end: 10854d3a3; -[SCSnapVideoFilterCoordinatorImpl _fetchAndRetryWithMediaId:completion:] */

void FUN_10854d2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be103c0(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10854d3a4; end: 10854d4a7;  */

void FUN_10854d3a4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ae7c0();
    _objc_release(uVar2);
    if (param_2 == 0) {
      func_0x00010be8d440(lVar1);
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0,0,puVar3);
      _objc_release(puVar3);
    }
    else {
      func_0x00010be97160(lVar1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10854d4a8; end: 10854d7af; -[SCSnapVideoFilterCoordinatorImpl _retryWithMediaId:videoFilter:retryDataSource:completion:] */

void FUN_10854d4a8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x58));
  _objc_release(puVar3);
  lVar4 = *(long *)(param_1 + 0x50);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  if (lVar4 == 0) {
    uVar2 = param_6;
    _objc_retainBlock(param_6);
    func_0x00010c2268e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x50));
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    _objc_initWeak(auStack_68,param_1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10854d7b0;
    puStack_90 = &UNK_110a54ac8;
    _objc_copyWeak(auStack_78,auStack_68);
    uStack_70 = param_5;
    _objc_retain(param_3);
    uStack_88 = param_3;
    _objc_retain(puVar3);
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar3;
    _objc_retainBlock(ppuVar6);
    if (lVar1 == 0) {
      func_0x00010be46980(param_1);
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 8);
      _objc_retain(uVar2);
      func_0x00010bdc10a0(uVar2);
      func_0x00010be469a0(param_1);
      _objc_release(uVar2);
    }
    _objc_release(ppuVar6);
    _objc_release(puStack_80);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_6;
    _objc_retainBlock(param_6);
    func_0x00010befa120(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_sync_exit(param_1);
    puVar3 = param_1;
  }
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10854d7b0; end: 10854d9df;  */

void FUN_10854d7b0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar7 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar7 != 0) {
    func_0x00010c08fa60(param_2);
    uVar1 = *(undefined8 *)(lVar7 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ae800();
    _objc_release(uVar1);
    _objc_retain(lVar7);
    _objc_sync_enter(lVar7);
    lVar2 = *(long *)(lVar7 + 0x50);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(param_1 + 0x28);
    _objc_release();
    if (lVar2 == lVar8) {
      func_0x00010c12d3e0(*(undefined8 *)(lVar7 + 0x50));
    }
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010bf51e00();
    _objc_sync_exit(lVar7);
    _objc_release(lVar7);
    _objc_retain(lVar3);
    lVar2 = lVar3;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar3);
        }
        (**(code **)(*(long *)(lVar9 * 8) + 0x10))
                  (*(long *)(lVar9 * 8),param_2,param_3,param_4,param_5);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    _objc_release(lVar3);
  }
  _objc_release(lVar7);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(lVar7);
  __Unwind_Resume();
  uVar4 = param_2 + 0x70;
  _objc_loadWeakRetained();
  uVar5 = uVar4;
  func_0x00010c076220();
  _objc_release(uVar4);
  if ((uVar5 & 1) == 0) {
    param_2 = param_2 + 0x70;
    _objc_loadWeakRetained(param_2);
    lVar7 = param_2;
    func_0x00010c08b9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  else {
    lVar7 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 10854d9e0; end: 10854da53; -[SCSnapVideoFilterCoordinatorImpl _setupLensProcessingIfNeeded] */

void FUN_10854d9e0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    param_1 = param_1 + 0x70;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010c08b9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    lVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10854da54; end: 10854daab; -[SCSnapVideoFilterCoordinatorImpl _resetLensProcessingWithToken:] */

void FUN_10854da54(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    _objc_retain(param_3);
    param_1 = param_1 + 0x70;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf83d00();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10854daac; end: 10854daaf;  */

void FUN_10854daac(void)

{
  return;
}



/* Entry: 10854dab0; end: 10854db47; -[SCSnapVideoFilterCoordinatorImpl transcodingRegisteredForMediaId:] */

bool FUN_10854dab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 10854db48; end: 10854dbe7; -[SCSnapVideoFilterCoordinatorImpl persistSnapVideoFilter:forMediaId:completion:] */

void FUN_10854db48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ac260();
  _objc_release(uVar1);
  func_0x00010be734e0(param_1,param_2,param_3,param_4,0,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10854dbe8; end: 10854dbeb; -[SCSnapVideoFilterCoordinatorImpl retrieveCachedSnapVideoFilterForMediaId:completion:] */

void FUN_10854dbe8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be103d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchCachedVideoFilterForMediaI_112561a90);
  return;
}



/* Entry: 10854dbec; end: 10854dbef; -[SCSnapVideoFilterCoordinatorImpl removeCachedSnapVideoFilterForMediaId:] */

void FUN_10854dbec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8d450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeSnapVideoFilterForMediaId_112580eb0);
  return;
}



/* Entry: 10854dbf0; end: 10854dd8b; -[SCSnapVideoFilterCoordinatorImpl _fetchCachedVideoFilterForMediaId:completion:] */

void FUN_10854dbf0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (lVar1 == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c13ef20(uVar2);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4,lVar1,0,0);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10854dd8c; end: 10854df87;  */

void FUN_10854dd8c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be960c0();
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ae7a0();
    _objc_release(uVar3);
    if (lVar2 == 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c29a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_retain(lVar1);
      _objc_sync_enter(lVar1);
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x40));
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c279a80(param_2);
      func_0x00010c0df840(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x58));
      _objc_release(puVar5);
      lVar2 = param_2;
      func_0x00010bf5cac0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c08fa60();
      _objc_release(lVar2);
      puVar5 = PTR_PTR_1126d9ff8;
      if (lVar6 != 0) {
        lVar2 = param_2;
        func_0x00010bf5cac0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfbab20(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x78));
        _objc_release(puVar5);
        _objc_release(lVar2);
      }
      _objc_sync_exit(lVar1);
      _objc_release(lVar1);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar3,0,1);
      _objc_release(uVar3);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,lVar2,1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10854df88; end: 10854e1e3; -[SCSnapVideoFilterCoordinatorImpl _kickOffTranscodeAndThumbnailAttemptWithSnapVideoFilter:retryCount:mediaId:skipTranscodingIfPossible:completion:] */

void FUN_10854df88(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  ppuVar4 = &puStack_c0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126b26c0;
  _objc_opt_class(PTR_PTR_1126b26c0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10854e1e4;
  puStack_a8 = &UNK_110a54b18;
  _objc_retain(uVar1);
  uStack_a0 = uVar1;
  lStack_98 = param_1;
  _objc_retain(param_5);
  uStack_90 = param_5;
  _objc_retain(uVar3);
  uStack_88 = uVar3;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uStack_80 = param_3;
  _objc_retain(param_7);
  uStack_78 = param_7;
  _objc_retainBlock();
  if (param_4 < *(ulong *)(param_1 + 8)) {
    func_0x00010be734e0(param_1);
    func_0x00010bdd06a0(param_1);
    func_0x00010bfae6e0(param_3);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)((long)ppuVar4 + 0x10))(ppuVar4,0,0,0,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(ppuVar4);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10854e1e4; end: 10854e503;  */

void FUN_10854e1e4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar6 = param_2;
  func_0x00010c08fa60();
  uVar1 = 0;
  if (param_5 == 0) {
    uVar1 = (uint)(lVar6 != 0);
  }
  uVar3 = (uint)param_4 ^ 1;
  uVar2 = 0;
  uVar4 = (uint)(lVar6 != 0);
  if (param_5 != 0) {
    uVar2 = uVar3;
    uVar4 = uVar3;
  }
  if (uVar1 == 1) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bef6760();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bfd94e0();
    if ((int)uVar7 == 0) {
LAB_10854e2dc:
      _objc_release(uVar5);
    }
    else {
      lVar6 = *(long *)(param_1 + 0x20);
      func_0x00010c0efb00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar5);
      if (lVar6 != 0) {
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0efb00(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d7520(uVar5);
        _objc_release(uVar7);
        goto LAB_10854e2dc;
      }
    }
    func_0x00010c29ade0(*(undefined8 *)(param_1 + 0x38));
    lVar6 = param_1 + 0x50;
    _objc_loadWeakRetained();
    if (lVar6 == 0) goto LAB_10854e4b8;
    lVar8 = *(long *)(param_1 + 0x20);
    func_0x00010c0efb00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 == 0) {
      lVar9 = *(long *)(param_1 + 0x20);
      func_0x00010c0ef960();
      _objc_retainAutoreleasedReturnValue();
      if (lVar9 == 0) {
        func_0x00010be17700(lVar6);
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0ef960();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        _UIImagePNGRepresentation();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be17700(lVar6);
        _objc_release(uVar7);
        _objc_release(uVar5);
      }
      _objc_release(lVar9);
    }
    else {
      func_0x00010be17700(lVar6);
    }
    _objc_release(lVar8);
  }
  else {
    if (uVar2 != 0) {
      func_0x00010c29ada0(*(undefined8 *)(param_1 + 0x38));
    }
    lVar6 = param_1 + 0x50;
    _objc_loadWeakRetained();
    if (lVar6 == 0) goto LAB_10854e4b8;
  }
  _objc_retain(lVar6);
  _objc_sync_enter(lVar6);
  lVar8 = *(long *)(lVar6 + 0x40);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(param_1 + 0x40);
  _objc_release();
  _objc_sync_exit(lVar6);
  _objc_release(lVar6);
  if ((lVar8 == lVar9) && (uVar4 != 0)) {
    lVar8 = lVar6;
    func_0x00010be3eb00();
    if ((int)lVar8 == 0) {
      func_0x00010be8d440(lVar6);
    }
    else {
      _objc_retain(lVar6);
      _objc_sync_enter(lVar6);
      func_0x00010be0b600(lVar6);
      _objc_sync_exit(lVar6);
      _objc_release(lVar6);
    }
  }
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))
            (*(long *)(param_1 + 0x48),param_2,param_3,param_4,param_5);
  _objc_release(lVar6);
LAB_10854e4b8:
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10854e504; end: 10854e77f; -[SCSnapVideoFilterCoordinatorImpl _kickOffTranscodeAttemptWithSnapVideoFilter:retryCount:mediaId:outputBitrate:videoTargetSize:skipTranscodingIfPossible:completion:] */

void FUN_10854e504(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_10);
  puVar2 = PTR_PTR_1126b26c0;
  _objc_opt_class(PTR_PTR_1126b26c0);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_3);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10854e780;
  puStack_b0 = &UNK_110a54b48;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(uVar1);
  uStack_a8 = uVar1;
  _objc_retain(param_7);
  uStack_a0 = param_7;
  _objc_retain(param_5);
  uStack_98 = param_5;
  _objc_retain(uVar3);
  uStack_90 = uVar3;
  _objc_retain(param_10);
  ppuVar4 = &puStack_c8;
  uStack_88 = param_10;
  _objc_retainBlock();
  if (*(ulong *)(param_3 + 8) < param_6) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar4[2])(ppuVar4,0,0,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010be734e0(param_3);
    func_0x00010bdd06a0(param_3);
    func_0x00010bfae7e0(param_1,param_2,param_5);
  }
  _objc_release(ppuVar4);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_5);
  return;
}



/* Entry: 10854e780; end: 10854eb1f;  */

void FUN_10854e780(long param_1,long param_2,ulong param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar3 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar3 == 0) goto LAB_10854eac4;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef6760();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bfd94e0();
  if ((int)uVar6 == 0) {
LAB_10854e850:
    _objc_release(uVar4);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010c0efb00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar4);
    if (lVar5 != 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x60);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0efb00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d7520(uVar4);
      _objc_release(uVar6);
      goto LAB_10854e850;
    }
  }
  _objc_retain(lVar3);
  _objc_sync_enter(lVar3);
  lVar5 = *(long *)(lVar3 + 0x40);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(param_1 + 0x30);
  _objc_release();
  _objc_sync_exit(lVar3);
  _objc_release(lVar3);
  puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
  if ((param_2 == 0) || (param_4 != 0)) {
    if (((param_3 & 1) == 0) &&
       ((param_4 != 0 && (func_0x00010c29ada0(*(undefined8 *)(param_1 + 0x38)), lVar5 == lVar10))))
    {
      lVar5 = lVar3;
      func_0x00010be3eb00();
      if ((int)lVar5 == 0) {
        func_0x00010be8d440(lVar3);
      }
      else {
        _objc_retain(lVar3);
        _objc_sync_enter(lVar3);
        func_0x00010be0b600(lVar3);
        _objc_sync_exit(lVar3);
        _objc_release(lVar3);
      }
    }
  }
  else {
    lVar7 = param_2;
    func_0x00010c28f340(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    puVar2 = PTR_DAT_1126a5af0;
    lVar11 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar11);
    lVar7 = lVar11;
    func_0x000107c318f8(lVar11,puVar2);
    _objc_release(lVar11);
    if (((int)lVar7 != 0) && (lVar11 != 0)) {
      func_0x00010c29ade0(*(undefined8 *)(param_1 + 0x38));
    }
    lVar7 = *(long *)(param_1 + 0x20);
    func_0x00010c0efb00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
      uStack_80 = *(long *)(param_1 + 0x20);
      func_0x00010c0ef960();
      _objc_retainAutoreleasedReturnValue();
      if (uStack_80 == 0) {
        uStack_80 = 0;
        bVar1 = false;
        lVar11 = 0;
      }
      else {
        uStack_88 = *(long *)(param_1 + 0x20);
        func_0x00010c0ef960();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = uStack_88;
        _UIImagePNGRepresentation();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
      lVar11 = lVar7;
    }
    lVar9 = param_2;
    func_0x00010c28f340(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be17700(lVar3);
    _objc_release(lVar9);
    if (bVar1) {
      _objc_release(lVar11);
      _objc_release(uStack_88);
    }
    if (lVar7 == 0) {
      _objc_release(uStack_80);
    }
    _objc_release(lVar7);
    if (lVar5 == lVar10) {
      func_0x00010be8d440(lVar3);
    }
    _objc_release(puVar8);
    param_3 = param_3 & 0xffffffff;
  }
  lVar10 = *(long *)(param_1 + 0x40);
  lVar5 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar10 + 0x10))(lVar10,0,lVar5,param_3,param_4);
  _objc_release(lVar5);
LAB_10854eac4:
  _objc_release(lVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10854eb20; end: 10854edab; -[SCSnapVideoFilterCoordinatorImpl _kickOffFragmentedTranscodeAttemptWithSnapVideoFilter:retryCount:mediaId:outputBitrate:videoTargetSize:segmentOutputBlock:completion:] */

void FUN_10854eb20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar2 = PTR_PTR_1126b26c0;
  _objc_opt_class(PTR_PTR_1126b26c0);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_3);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10854edac;
  puStack_b0 = &UNK_110a54b48;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_7);
  uStack_a8 = param_7;
  _objc_retain(param_5);
  uStack_a0 = param_5;
  _objc_retain(uVar1);
  uStack_98 = uVar1;
  _objc_retain(uVar3);
  uStack_90 = uVar3;
  _objc_retain(param_10);
  ppuVar4 = &puStack_c8;
  uStack_88 = param_10;
  _objc_retainBlock();
  if (*(ulong *)(param_3 + 8) < param_6) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar4[2])(ppuVar4,0,0,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010be734e0(param_3);
    func_0x00010bdd06a0(param_3);
    func_0x00010bfae740(param_1,param_2,param_5);
  }
  _objc_release(ppuVar4);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  return;
}



/* Entry: 10854edac; end: 10854f013;  */

void FUN_10854edac(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar2 == 0) goto LAB_10854efc8;
  _objc_retain(lVar2);
  _objc_sync_enter(lVar2);
  lVar3 = *(long *)(lVar2 + 0x40);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + 0x28);
  _objc_release();
  _objc_sync_exit(lVar2);
  _objc_release(lVar2);
  if (param_4 == 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    func_0x00010c0efb00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      uStack_78 = *(long *)(param_1 + 0x30);
      func_0x00010c0ef960();
      _objc_retainAutoreleasedReturnValue();
      if (uStack_78 == 0) {
        uStack_78 = 0;
        bVar1 = false;
        lVar7 = 0;
      }
      else {
        uStack_80 = *(long *)(param_1 + 0x30);
        func_0x00010c0ef960();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = uStack_80;
        _UIImagePNGRepresentation();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
      lVar7 = lVar4;
    }
    uVar5 = param_2;
    func_0x00010c28f340(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be17700(lVar2);
    _objc_release(uVar5);
    if (bVar1) {
      _objc_release(lVar7);
      _objc_release(uStack_80);
    }
    if (lVar4 == 0) {
      _objc_release(uStack_78);
    }
    _objc_release(lVar4);
    if (lVar3 == lVar6) {
LAB_10854ef80:
      func_0x00010be8d440(lVar2);
    }
  }
  else if (((param_3 & 1) == 0) &&
          (func_0x00010c29ada0(*(undefined8 *)(param_1 + 0x38)), lVar3 == lVar6)) {
    lVar3 = lVar2;
    func_0x00010be3eb00();
    if ((int)lVar3 == 0) goto LAB_10854ef80;
    _objc_retain(lVar2);
    _objc_sync_enter(lVar2);
    func_0x00010be0b600(lVar2);
    _objc_sync_exit(lVar2);
    _objc_release(lVar2);
  }
  lVar3 = *(long *)(param_1 + 0x40);
  uVar5 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,0,uVar5,param_3,param_4);
  _objc_release(uVar5);
LAB_10854efc8:
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10854f014; end: 10854f347; -[SCSnapVideoFilterCoordinatorImpl _persistSnapVideoFilter:forMediaId:retryCount:completion:] */

void FUN_10854f014(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar2 = *(ulong *)(param_1 + 0x78);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010c271c00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c06fc80();
  if ((uVar5 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x68);
    func_0x00010bf1f440();
    _objc_release(uVar4);
    if (iVar1 != 0) {
      lVar6 = *(long *)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c0fa0c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0af300();
      _objc_release(uVar8);
      if (lVar7 == 0) {
        if (param_6 != 0) {
          (**(code **)(param_6 + 0x10))(param_6,0);
        }
      }
      else {
        _objc_initWeak(auStack_68,param_1);
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_10854f348;
        puStack_90 = &UNK_110857fd0;
        _objc_copyWeak(auStack_70,auStack_68);
        _objc_retain(lVar7);
        lStack_88 = lVar7;
        _objc_retain(param_4);
        uStack_80 = param_4;
        _objc_retain(param_6);
        ppuVar9 = &puStack_a8;
        lStack_78 = param_6;
        _objc_retainBlock(ppuVar9);
        func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38));
        _objc_release(ppuVar9);
        _objc_release(lStack_78);
        _objc_release(uStack_80);
        _objc_release(lStack_88);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
      }
      goto LAB_10854f2d0;
    }
  }
  else {
    _objc_release(uVar4);
  }
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_10854f4ac;
  puStack_e0 = &UNK_1108b6770;
  lStack_d8 = param_1;
  _objc_retain(param_3);
  lStack_d0 = param_3;
  uStack_b0 = param_5;
  _objc_retain(uVar3);
  uStack_c8 = uVar3;
  _objc_retain(param_6);
  lStack_b8 = param_6;
  _objc_retain(param_4);
  ppuVar9 = &puStack_f8;
  uStack_c0 = param_4;
  _objc_retainBlock(ppuVar9);
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38));
  _objc_release(ppuVar9);
  _objc_release(uStack_c0);
  _objc_release(lStack_b8);
  _objc_release(uStack_c8);
  lVar7 = lStack_d0;
LAB_10854f2d0:
  _objc_release(lVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10854f348; end: 10854f437;  */

void FUN_10854f348(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    _objc_copyWeak(auStack_48,param_1 + 0x38);
    func_0x00010c0fa200(uVar2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10854f438; end: 10854f4ab;  */

void FUN_10854f438(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ac2a0();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10854f4ac; end: 10854f627;  */

void FUN_10854f4ac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0fa0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0af300();
  _objc_release(uVar3);
  if (lVar2 == 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,0);
    }
  }
  else {
    _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar3);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0fa200(uVar4);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_40);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10854f628; end: 10854f69b;  */

void FUN_10854f628(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ac2a0();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10854f69c; end: 10854f703; -[SCSnapVideoFilterCoordinatorImpl _evictInMemorySnapVideoFilterForMediaId:] */

void FUN_10854f69c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c12d3e0(uVar1,param_2,param_3);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x58),param_2,param_3);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x78),param_2,param_3);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x50),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10854f704; end: 10854f787; -[SCSnapVideoFilterCoordinatorImpl _isCancelledTranscodeError:] */

long FUN_10854f704(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf3ec40();
  if (lVar2 == -0x2709) {
    lVar1 = param_3;
    func_0x00010bf87dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0();
    _objc_release(lVar1);
  }
  else {
    lVar2 = 0;
  }
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 10854f788; end: 10854f8d7; -[SCSnapVideoFilterCoordinatorImpl _removeSnapVideoFilterForMediaId:] */

void FUN_10854f788(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0b600(param_1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c12e520(uVar2);
  _objc_release(uVar2);
  func_0x00010bf3a540(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10854f8d8; end: 10854f933;  */

void FUN_10854f8d8(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a4d60();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10854f934; end: 10854f9ab; -[SCSnapVideoFilterCoordinatorImpl setChainedTranscodeFiringBlock:] */

void FUN_10854f934(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10854f9ac; end: 10854f9b7; -[SCSnapVideoFilterCoordinatorImpl setTranscodeStatusReporter:] */

void FUN_10854f9ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 10854f9b8; end: 10854fbf3; -[SCSnapVideoFilterCoordinatorImpl _attachStatusReportingToFilter:mediaId:] */

void FUN_10854f9b8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x88;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (lVar2 = param_4, func_0x00010c08fa60(), param_3 != 0)) && (lVar2 != 0)) {
    lVar2 = param_3;
    func_0x00010c252e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,lVar1);
    _objc_initWeak(auStack_60,param_1);
    _objc_initWeak(auStack_68,param_3);
    _objc_retain(lVar2);
    _objc_copyWeak(auStack_80,auStack_60);
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_4);
    _objc_copyWeak(auStack_70,auStack_58);
    func_0x00010c20a3a0(param_3);
    puVar3 = PTR_PTR_1126da000;
    _objc_alloc(PTR_PTR_1126da000);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar4);
    func_0x00010c035860(0,puVar3);
    func_0x00010c279d00(lVar1);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_70);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_80);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10854fbf4; end: 10854fceb;  */

void FUN_10854fbf4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 != 0)) {
    _objc_retain(lVar1);
    _objc_sync_enter(lVar1);
    lVar3 = *(long *)(lVar1 + 0x40);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_sync_exit(lVar1);
    _objc_release(lVar1);
    if (lVar3 == lVar2) {
      param_1 = param_1 + 0x40;
      _objc_loadWeakRetained(param_1);
      func_0x00010c279d00();
      _objc_release(param_1);
    }
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10854fcec; end: 10854fd0f; -[SCSnapVideoFilterCoordinatorImpl fireCrossPostToStoryTranscodeWithData:overlayData:url:isImage:crossPostToStoryInfo:] */

void FUN_10854fcec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  if (param_7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be17730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__fireChainedTranscodeWithInfo_da_112563768,param_7,param_3,param_4,
               param_5,param_6);
    return;
  }
  return;
}



/* Entry: 10854fd10; end: 10854fd17; -[SCSnapVideoFilterCoordinatorImpl _storeCrossPostToStoryInfo:forMediaId:] */

void FUN_10854fd10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_setObject_forKeyedSubscript__112651bb8);
  return;
}



/* Entry: 10854fd18; end: 10854fdff; -[SCSnapVideoFilterCoordinatorImpl _fireChainedTranscodeIfNeededWithMediaId:data:overlayData:url:] */

void FUN_10854fd18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  func_0x00010be17720(param_1,param_2,uVar1,param_4,param_5,param_6,0);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10854fe00; end: 10854ff1f; -[SCSnapVideoFilterCoordinatorImpl _fireChainedTranscodeWithInfo:data:overlayData:url:isImage:] */

void FUN_10854fe00(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 != 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    lVar1 = *(long *)(param_1 + 0x80);
    _objc_retainBlock();
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    lVar2 = param_4;
    func_0x00010c08fa60();
    if ((param_6 != 0) || (lVar2 != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        func_0x00010c0a2b40();
        _objc_release(uVar3);
      }
      else {
        func_0x00010c0a2b60();
        _objc_release(uVar3);
        (**(code **)(lVar1 + 0x10))(lVar1,param_4,param_5,param_6,param_3,param_7);
      }
    }
    _objc_release(lVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10854ff20; end: 108550043; -[SCSnapVideoFilterCoordinatorImpl _retrievalErrorWithRetrievedModel:] */

undefined8 FUN_10854ff20(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar4 = 2;
  }
  else {
    uVar1 = param_3;
    func_0x00010c279a80();
    if (uVar1 < *(ulong *)(param_1 + 8)) {
      uVar1 = param_3;
      func_0x00010bfae4c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar1 == 0) {
        uVar4 = 3;
      }
      else {
        uVar2 = *(ulong *)(param_1 + 0x18);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_3;
        func_0x00010bfae4c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c066200(uVar2,param_2,uVar1);
        _objc_release(uVar1);
        _objc_release(uVar2);
        if ((uVar3 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010bfae4c0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar1 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(long *)(uVar1 + 0xd0);
          }
          _objc_retain(lVar5);
          _objc_release(lVar5);
          _objc_release(uVar1);
          uVar4 = 4;
          if (lVar5 != 0) {
            uVar4 = 5;
          }
        }
        else {
          uVar4 = 0;
        }
      }
    }
    else {
      uVar4 = 1;
    }
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 108550044; end: 108550113; -[SCSnapVideoFilterCoordinatorImpl .cxx_destruct] */

void FUN_108550044(long param_1)

{
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108550114; end: 108550187; -[SCSnapVideoFilterCoordinatorLoggerImpl initWithGrapheneRegistryLazy:] */

undefined1 * FUN_108550114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fcc70;
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



/* Entry: 108550188; end: 10855024f; -[SCSnapVideoFilterCoordinatorLoggerImpl logSerializationSuccess:] */

void FUN_108550188(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126da008;
  func_0x00010c15e800(PTR_PTR_1126da008);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bec5920(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c245fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108550250; end: 108550317; -[SCSnapVideoFilterCoordinatorLoggerImpl logPersistSuccess:] */

void FUN_108550250(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126da008;
  func_0x00010c0f9f00(PTR_PTR_1126da008);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bec5920(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c245fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108550318; end: 108550393; -[SCSnapVideoFilterCoordinatorLoggerImpl logPersistInAdvance] */

void FUN_108550318(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126da008;
  func_0x00010c0fa040(PTR_PTR_1126da008);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c245fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108550394; end: 10855045b; -[SCSnapVideoFilterCoordinatorLoggerImpl logDeleteSuccess:] */

void FUN_108550394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126da008;
  func_0x00010bf6b1c0(PTR_PTR_1126da008);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bec5920(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c245fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10855045c; end: 1085505c3; -[SCSnapVideoFilterCoordinatorLoggerImpl logRetrieveSuccess:error:dataSource:] */

void FUN_10855045c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126da008;
  func_0x00010c13e160(PTR_PTR_1126da008);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bec5940(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee23d8,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be0b100(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110ee23f8,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bec5920(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c245fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1085505c4; end: 10855073b; -[SCSnapVideoFilterCoordinatorLoggerImpl logRetrieveFromDiskError:persistModel:] */

void FUN_1085505c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126da008;
  _objc_retain(param_4);
  func_0x00010bf82e60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be0b100(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee23f8,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be5ebe0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dae8d8,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010be5e5e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee2418,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c245fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10855073c; end: 108550857; -[SCSnapVideoFilterCoordinatorLoggerImpl logRetrySuccess:dataSource:] */

void FUN_10855073c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126da008;
  func_0x00010c13f580(PTR_PTR_1126da008);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bec5940(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ee23d8,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bec5920(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dab0d8,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c245fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108550858; end: 1085508d3; -[SCSnapVideoFilterCoordinatorLoggerImpl logChainedFireBlockMissing] */

void FUN_108550858(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126da008;
  func_0x00010bf34bc0(PTR_PTR_1126da008);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c245fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


