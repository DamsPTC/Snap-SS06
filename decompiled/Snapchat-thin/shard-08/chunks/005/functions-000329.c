/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061a88f0; end: 1061a88f3; -[SCFeatureCameraModeBase disableMode] */

void FUN_1061a88f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7f9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_disable_1125bd820);
  return;
}



/* Entry: 1061a88f4; end: 1061a88ff; -[SCFeatureCameraModeBase incompatibleModes] */

undefined * FUN_1061a88f4(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 1061a8900; end: 1061a8903; -[SCFeatureCameraModeBase modeType] */

void FUN_1061a8900(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf29fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cameraModeType_1125a8190);
  return;
}



/* Entry: 1061a8904; end: 1061a8913; -[SCFeatureCameraModeBase isHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061a8904(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11274173c);
}



/* Entry: 1061a8914; end: 1061a896b; -[SCFeatureCameraModeBase onTap:] */

void FUN_1061a8914(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0cfda0();
  if ((int)uVar1 != param_3) {
    return;
  }
  uVar1 = param_1;
  func_0x00010c06dec0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf7f9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_disable_1125bd820);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf8ef30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_enable_1125c1570);
  return;
}



/* Entry: 1061a896c; end: 1061a896f; -[SCFeatureCameraModeBase secondaryOnTap:] */

void FUN_1061a896c(void)

{
  return;
}



/* Entry: 1061a8970; end: 1061a899f; -[SCFeatureCameraModeBase state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1061a8970(long param_1)

{
  if (*(char *)(param_1 + _DAT_112741748) == '\x01') {
    func_0x00010c06dec0();
    return param_1;
  }
  return 3;
}



/* Entry: 1061a89a0; end: 1061a89a7; -[SCFeatureCameraModeBase secondaryButtonState] */

undefined8 FUN_1061a89a0(void)

{
  return 0;
}



/* Entry: 1061a89a8; end: 1061a89ab; -[SCFeatureCameraModeBase toolbarButtonPositionDidChange:] */

void FUN_1061a89a8(void)

{
  return;
}



/* Entry: 1061a89ac; end: 1061a89bb; -[SCFeatureCameraModeBase cameraModeConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a89ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127416fc),PTR_s_target_112678178);
  return;
}



/* Entry: 1061a89bc; end: 1061a8af7; -[SCFeatureCameraModeBase _setCameraModeUIEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a89bc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = param_1;
  func_0x00010c06dec0();
  if ((int)param_3 == (int)uVar1) {
    return;
  }
  *(char *)(param_1 + (long)_DAT_112741738) = (char)param_3;
  uVar1 = param_1;
  if ((int)param_3 == 0) {
    func_0x00010c273a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b4280();
  }
  else {
    func_0x00010bedc1e0();
    func_0x00010beba1a0(param_1);
    uVar2 = param_1;
    func_0x00010c0753e0();
    if ((uVar2 & 1) != 0) goto LAB_1061a8aa8;
    uVar2 = param_1;
    func_0x00010c273a00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c07d660();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) goto LAB_1061a8aa8;
    func_0x00010bf2b3c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c273a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216f40(uVar1,param_2,uVar2,1);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
LAB_1061a8aa8:
  func_0x00010c125260(param_1);
  uVar5 = *(undefined8 *)(param_1 + (long)_DAT_11274171c);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5,param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1061a8af8; end: 1061a8beb; -[SCFeatureCameraModeBase _observeScanSessionActivatedEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a8af8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c14f4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_1;
  func_0x00010c25ff60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1061a8bec; end: 1061a8c33;  */

void FUN_1061a8bec(long param_1,int param_2)

{
  func_0x00010bf1f3c0();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010c0e61a0();
  }
  else {
    func_0x00010c0e6180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a8c34; end: 1061a8ec7; -[SCFeatureCameraModeBase _observeCaptureState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a8c34(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_initWeak(auStack_78,param_1);
  lVar8 = (long)_DAT_11274175c;
  if (*(long *)(param_1 + lVar8) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar1;
    _objc_release(uVar7);
    lVar8 = (long)_DAT_112741704;
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c160440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1061a8ec8;
    puStack_88 = &UNK_110872b30;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0c42e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar6 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
  }
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 1061a8ec8; end: 1061a8f6b;  */

void FUN_1061a8ec8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e38c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061a8f6c; end: 1061a8f97;  */

void FUN_1061a8f6c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e2d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a8f98; end: 1061a9093;  */

void FUN_1061a8f98(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1061a9094;
  puStack_50 = &UNK_110872b00;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  func_0x00010c0e7bc0(param_2);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0e7be0(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 1061a9094; end: 1061a9103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a9094(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  func_0x00010bf82f40(*(undefined8 *)(param_1 + _DAT_112741760));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a9104; end: 1061a9107;  */

void FUN_1061a9104(void)

{
  return;
}



/* Entry: 1061a9108; end: 1061a918b;  */

void FUN_1061a9108(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e7980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a918c; end: 1061a918f;  */

void FUN_1061a918c(void)

{
  return;
}



/* Entry: 1061a9190; end: 1061a91e7;  */

void FUN_1061a9190(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e27a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a91e8; end: 1061a9227; -[SCFeatureCameraModeBase refreshDirectorModeUI] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a91e8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c0753e0();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112741710),PTR_s_next__112614028,param_1);
    return;
  }
  return;
}



/* Entry: 1061a9228; end: 1061a9243; -[SCFeatureCameraModeBase _saveModeIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a9228(long param_1)

{
  *(byte *)(param_1 + _DAT_112741750) = *(byte *)(param_1 + _DAT_112741754) ^ 1;
  return;
}



/* Entry: 1061a9244; end: 1061a92a3; -[SCFeatureCameraModeBase _isLensRestoreAllowed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1061a9244(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112741734;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c22da60();
  _objc_release(lVar1);
  _objc_release(param_1);
  return (uint)lVar2 ^ 1;
}



/* Entry: 1061a92a4; end: 1061a92ab; -[SCFeatureCameraModeBase newBadgeFirstShownDate] */

undefined8 FUN_1061a92a4(void)

{
  return 0;
}



/* Entry: 1061a92ac; end: 1061a92af; -[SCFeatureCameraModeBase onNewBadgeFirstShown] */

void FUN_1061a92ac(void)

{
  return;
}



/* Entry: 1061a92b0; end: 1061a932f; -[SCFeatureCameraModeBase _shouldShowNewBadge] */

bool FUN_1061a92b0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c273a00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c233d00();
  if (((int)uVar2 == 0) || (uVar2 = param_1, func_0x00010c06dec0(), (uVar2 & 1) != 0)) {
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_1;
    func_0x00010bfdba60();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010c0d8500(param_1);
      return param_1 == 0;
    }
  }
  return false;
}



/* Entry: 1061a9330; end: 1061a946b; -[SCFeatureCameraModeBase _updateNewBadgeStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a9330(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf29e80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c291ea0();
  _objc_release(lVar1);
  if (((int)lVar2 != 0) && (*(char *)(param_1 + _DAT_112741748) == '\x01')) {
    lVar1 = param_1;
    func_0x00010bf2b3c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_1;
      func_0x00010c273a00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar2 != 0) {
        lVar1 = param_1;
        func_0x00010bf2b3c0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_1;
        func_0x00010c273a00(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010bf25540(lVar1,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        _objc_release(lVar1);
        lVar1 = param_1;
        func_0x00010beb62e0();
        lVar2 = lVar3;
        func_0x00010c078920();
        if ((int)lVar1 != (int)lVar2) {
          func_0x00010c216300(lVar3,param_2,lVar1);
        }
        if (((int)lVar1 != 0) && (lVar1 = param_1, func_0x00010c0d8500(), lVar1 == 0)) {
          func_0x00010c0e54a0(param_1);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 1061a946c; end: 1061a9473; -[SCFeatureCameraModeBase onboardingDialogTitle] */

undefined8 FUN_1061a946c(void)

{
  return 0;
}



/* Entry: 1061a9474; end: 1061a947b; -[SCFeatureCameraModeBase onboardingDialogDescription] */

undefined8 FUN_1061a9474(void)

{
  return 0;
}



/* Entry: 1061a947c; end: 1061a947f; -[SCFeatureCameraModeBase onOnboardingDialogShown] */

void FUN_1061a947c(void)

{
  return;
}



/* Entry: 1061a9480; end: 1061a9487; -[SCFeatureCameraModeBase hasSeenOnboardingDialog] */

undefined8 FUN_1061a9480(void)

{
  return 0;
}



/* Entry: 1061a9488; end: 1061a948b; -[SCFeatureCameraModeBase clearNewBadgeAndOnboardingDialogStatus] */

void FUN_1061a9488(void)

{
  return;
}



/* Entry: 1061a948c; end: 1061a966b; -[SCFeatureCameraModeBase _showOnboardingDialogIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a948c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = param_1;
  func_0x00010bf29e80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar10;
  func_0x00010c291ea0();
  _objc_release(lVar10);
  if ((((int)lVar1 != 0) && (lVar10 = (long)_DAT_112741760, *(long *)(param_1 + lVar10) == 0)) &&
     ((*(byte *)(param_1 + _DAT_112741758) & 1) == 0)) {
    lVar1 = param_1;
    func_0x00010bfdba60();
    if ((int)lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bf29e80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf021c0();
      _objc_release(lVar1);
      if ((int)lVar2 == 0) {
        return;
      }
    }
    puVar3 = PTR_PTR_1126b00c8;
    _objc_alloc();
    lVar2 = param_1;
    func_0x00010c0e7ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c0e7e40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf29e80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0e7e80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bf29e80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0e7ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + _DAT_11274172c;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c031a40();
    uVar9 = *(undefined8 *)(param_1 + lVar10);
    *(undefined **)(param_1 + lVar10) = puVar3;
    _objc_release(uVar9);
    _objc_release(lVar1);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar10));
                    /* WARNING: Could not recover jumptable at 0x00010c10ae10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar10),PTR_s_present_1126205a0);
    return;
  }
  return;
}



/* Entry: 1061a966c; end: 1061a971f; -[SCFeatureCameraModeBase cameraModeOnboardingDialogPresenter:presentDialog:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a966c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010c0e55a0(param_1);
  param_1 = param_1 + _DAT_112741728;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf2b640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0cfca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c960(param_3,param_2,lVar3);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a9720; end: 1061a972f; -[SCFeatureCameraModeBase isCameraModeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061a9720(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112741738);
}



/* Entry: 1061a9730; end: 1061a9743; -[SCFeatureCameraModeBase setCameraToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a9730(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112741740,param_3);
  return;
}



/* Entry: 1061a9744; end: 1061a9753; -[SCFeatureCameraModeBase cameraModeLensObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061a9744(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741764);
}



/* Entry: 1061a9754; end: 1061a9763; -[SCFeatureCameraModeBase willActivateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061a9754(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741720);
}



/* Entry: 1061a9764; end: 1061a9773; -[SCFeatureCameraModeBase willDeactivateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061a9764(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741724);
}



/* Entry: 1061a9774; end: 1061a9783; -[SCFeatureCameraModeBase isActivatedFromLensCarousel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061a9774(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112741754);
}



/* Entry: 1061a9784; end: 1061a9793; -[SCFeatureCameraModeBase isInDirectorMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061a9784(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112741718);
}



/* Entry: 1061a9794; end: 1061a97a3; -[SCFeatureCameraModeBase isDeactivatedFromCameraModeBase] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061a9794(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127416f8);
}



/* Entry: 1061a97a4; end: 1061a97b3; -[SCFeatureCameraModeBase setIsDeactivatedFromCameraModeBase:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a97a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127416f8) = param_3;
  return;
}



/* Entry: 1061a97b4; end: 1061a98cb; -[SCFeatureCameraModeBase .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a97b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112741764,0);
  _objc_destroyWeak(param_1 + _DAT_112741740);
  _objc_destroyWeak(param_1 + _DAT_112741734);
  _objc_destroyWeak(param_1 + _DAT_112741730);
  _objc_storeStrong(param_1 + _DAT_112741760,0);
  _objc_destroyWeak(param_1 + _DAT_11274172c);
  _objc_storeStrong(param_1 + _DAT_112741724,0);
  _objc_storeStrong(param_1 + _DAT_112741720,0);
  _objc_storeStrong(param_1 + _DAT_11274171c,0);
  _objc_storeStrong(param_1 + _DAT_112741710,0);
  _objc_storeStrong(param_1 + _DAT_11274175c,0);
  _objc_storeStrong(param_1 + _DAT_112741708,0);
  _objc_storeStrong(param_1 + _DAT_11274170c,0);
  _objc_destroyWeak(param_1 + _DAT_112741728);
  _objc_destroyWeak(param_1 + _DAT_112741700);
  _objc_storeStrong(param_1 + _DAT_112741704,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127416fc,0);
  return;
}



/* Entry: 1061a98cc; end: 1061a99bf; -[SCFeatureDoubleTapToToggleCameraImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a98cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + _DAT_11274177c;
  _objc_loadWeakRetained();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112741780);
  uVar2 = uVar3;
  _objc_retain(uVar3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1061a99c0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = lVar1;
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  _objc_retain(lVar1);
  func_0x00010c0f88c0(uVar2);
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(lStack_40);
  _objc_release(uVar3);
  _objc_release(lVar1);
  puStack_68 = PTR_PTR_1126f0208;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1061a99c0; end: 1061a99cb;  */

void FUN_1061a99c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeGestureRecognizer__112628c90,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1061a99cc; end: 1061a99e3; -[SCFeatureDoubleTapToToggleCameraImpl isDoubleTapGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1061a99cc(long param_1,undefined8 param_2,long param_3)

{
  return param_3 == *(long *)(param_1 + _DAT_112741780);
}



/* Entry: 1061a99e4; end: 1061a99f3; -[SCFeatureDoubleTapToToggleCameraImpl setEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a99e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112741780),PTR_s_setEnabled__112642f38);
  return;
}



/* Entry: 1061a99f4; end: 1061a9a43; -[SCFeatureDoubleTapToToggleCameraImpl reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a99f4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112741780;
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar1),param_2,0);
  func_0x00010c195460(*(undefined8 *)(param_1 + lVar1),param_2,1);
  *(undefined8 *)(param_1 + _DAT_112741788) = 0;
  return;
}



/* Entry: 1061a9a44; end: 1061a9af7; -[SCFeatureDoubleTapToToggleCameraImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1061a9a44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110dc7858;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_11274178c));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_30,&ppuStack_38,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x8;
}



/* Entry: 1061a9af8; end: 1061a9aff; -[SCFeatureDoubleTapToToggleCameraImpl actionType] */

undefined8 FUN_1061a9af8(void)

{
  return 8;
}



/* Entry: 1061a9b00; end: 1061a9b07; -[SCFeatureDoubleTapToToggleCameraImpl cameraUIItem] */

undefined8 FUN_1061a9b00(void)

{
  return 1;
}



/* Entry: 1061a9b08; end: 1061a9da7; -[SCFeatureDoubleTapToToggleCameraImpl _doubleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a9b08(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  uVar4 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_5);
  _objc_release(uVar4);
  lVar6 = (long)_DAT_112741768;
  uVar1 = *(undefined8 *)(param_3 + lVar6);
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + lVar6);
  func_0x00010bfa1820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bfa2f60();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_3 + _DAT_112741774);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf2fa00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c077e20();
  _objc_release(uVar4);
  _objc_release(uVar2);
  if ((int)uVar3 == 0 || (int)uVar1 != 0) {
    uVar4 = *(undefined8 *)(param_3 + _DAT_112741770);
    func_0x00010bfa1820(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b7c0(param_1,param_2);
    _objc_release(uVar4);
    lVar5 = param_3 + _DAT_112741784;
    _objc_loadWeakRetained(lVar5);
    func_0x00010bfa22e0();
    _objc_release(lVar5);
    func_0x00010c0d9840(*(undefined8 *)(param_3 + _DAT_112741778));
    uVar4 = *(undefined8 *)(param_3 + _DAT_11274176c);
    func_0x00010bfa1820(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf02ba0();
    _objc_release(uVar4);
    _objc_initWeak(auStack_68,param_3);
    uVar4 = *(undefined8 *)(param_3 + lVar6);
    func_0x00010bfa1820(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c272720(uVar4);
    _objc_release(uVar4);
    *(long *)(param_3 + _DAT_11274178c) = *(long *)(param_3 + _DAT_11274178c) + 1;
    if ((int)uVar3 != 0) {
      *(long *)(param_3 + _DAT_112741788) = *(long *)(param_3 + _DAT_112741788) + 1;
    }
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 1061a9da8; end: 1061a9dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a9da8(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112741770);
    func_0x00010bfa1820(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b740();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061a9e00; end: 1061a9e1f; -[SCFeatureDoubleTapToToggleCameraImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a9e00(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112741784);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061a9e20; end: 1061a9e2f; -[SCFeatureDoubleTapToToggleCameraImpl doubleTapToToggleCameraDidTriggerObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061a9e20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741778);
}



/* Entry: 1061a9e30; end: 1061a9e3f; -[SCFeatureDoubleTapToToggleCameraImpl numberOfFlipsDuringCapture] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061a9e30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741788);
}



/* Entry: 1061a9e40; end: 1061a9ed7; -[SCFeatureDoubleTapToToggleCameraImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a9e40(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112741784);
  _objc_storeStrong(param_1 + _DAT_112741778,0);
  _objc_storeStrong(param_1 + _DAT_112741774,0);
  _objc_destroyWeak(param_1 + _DAT_11274177c);
  _objc_storeStrong(param_1 + _DAT_112741770,0);
  _objc_storeStrong(param_1 + _DAT_11274176c,0);
  _objc_storeStrong(param_1 + _DAT_112741768,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112741780,0);
  return;
}



/* Entry: 1061a9ed8; end: 1061a9ee3;  */

void FUN_1061a9ed8(void)

{
  return;
}



/* Entry: 1061a9ee4; end: 1061a9f63; -[SCFeatureToggleCameraButtonImpl view] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a9ee4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be3fa40();
  if ((int)lVar1 == 0) {
    lVar1 = param_1 + _DAT_1127417bc;
    _objc_loadWeakRetained(lVar1);
    param_1 = lVar1;
    func_0x00010c29cfe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  else {
    func_0x00010c2738c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1061a9f64; end: 1061a9f6b; -[SCFeatureToggleCameraButtonImpl triggerTap] */

void FUN_1061a9f64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be00b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didTap__11255dc70,0);
  return;
}



/* Entry: 1061a9f6c; end: 1061a9f6f; -[SCFeatureToggleCameraButtonImpl animate] */

void FUN_1061a9f6c(void)

{
  return;
}



/* Entry: 1061a9f70; end: 1061a9fbb; -[SCFeatureToggleCameraButtonImpl setHighlighted:] */

void FUN_1061a9f70(void)

{
  return;
}



/* Entry: 1061a9fbc; end: 1061a9fbf; -[SCFeatureToggleCameraButtonImpl setDisabled:] */

void FUN_1061a9fbc(void)

{
  return;
}



/* Entry: 1061a9fc0; end: 1061a9fdf; -[SCFeatureToggleCameraButtonImpl shouldBlockTouchAtPoint:] */

void FUN_1061a9fc0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)
            (0xc034000000000000,0xc034000000000000,0x4044000000000000,0x4044000000000000,param_1,
             param_2);
  return;
}



/* Entry: 1061a9fe0; end: 1061aa093; -[SCFeatureToggleCameraButtonImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061a9fe0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined **ppuStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e44438;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_1127417d0));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_1061aa094;
  puStack_60 = puVar1;
  puStack_58 = puVar2;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010c255e20();
  func_0x00010c256420(puVar3);
  puStack_68 = PTR_PTR_1126f0210;
  puStack_70 = puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1061aa094; end: 1061aa0df; -[SCFeatureToggleCameraButtonImpl dealloc] */

void FUN_1061aa094(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c255e20();
  func_0x00010c256420(param_1);
  puStack_28 = PTR_PTR_1126f0210;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1061aa0e0; end: 1061aa177; -[SCFeatureToggleCameraButtonImpl stopDeviceMotionUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061aa0e0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar2 = (long)_DAT_1127417d4;
  if (*(long *)(param_1 + lVar2) != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11274179c);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255e00();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061aa178; end: 1061aa1af; -[SCFeatureToggleCameraButtonImpl setLensCameraContexts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061aa178(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127417d8);
  *(undefined8 *)(param_1 + _DAT_1127417d8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061aa1b0; end: 1061aa307; -[SCFeatureToggleCameraButtonImpl toolbarButtonView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061aa1b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = (long)_DAT_1127417c4;
  puVar6 = *(undefined **)(param_1 + lVar8);
  if (puVar6 == (undefined *)0x0) {
    func_0x00010bdf4de0(param_1,param_2,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c87d0;
    _objc_alloc();
    lVar9 = (long)_DAT_1127417c0;
    uVar7 = *(undefined8 *)(param_1 + lVar9);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112741798);
    func_0x00010bfa1820(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(ulong *)(param_1 + lVar9);
    func_0x00010c06e880(uVar2);
    lVar10 = (long)_DAT_1127417ac;
    lVar9 = param_1 + lVar10;
    _objc_loadWeakRetained(lVar9);
    lVar3 = lVar9;
    func_0x00010bfe5a40();
    lVar10 = param_1 + lVar10;
    _objc_loadWeakRetained(lVar10);
    lVar4 = lVar10;
    func_0x00010c23b8c0();
    lVar5 = param_1 + _DAT_1127417b4;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c0540c0(puVar6,param_2,uVar7,uVar1,uVar2 & 0xffffffff,lVar3,lVar4,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(uVar1);
    _objc_retain(puVar6);
    uVar1 = *(undefined8 *)(param_1 + lVar8);
    *(undefined **)(param_1 + lVar8) = puVar6;
    _objc_release(uVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar8),param_2,1);
  }
  else {
    _objc_retain(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1061aa308; end: 1061aa333;  */

void FUN_1061aa308(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c27c300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061aa334; end: 1061aa44b; -[SCFeatureToggleCameraButtonImpl _didTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061aa334(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1 + _DAT_112741790;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c272720(lVar1);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_1127417dc;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfa2f40();
  _objc_release(lVar1);
  *(long *)(param_1 + _DAT_1127417d0) = *(long *)(param_1 + _DAT_1127417d0) + 1;
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1061aa44c; end: 1061aa4b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061aa44c(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112741798);
    func_0x00010bfa1820(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2b740();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061aa4b4; end: 1061aa4d3; -[SCFeatureToggleCameraButtonImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061aa4b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127417dc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061aa4d4; end: 1061aa5fb; -[SCFeatureToggleCameraButtonImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061aa4d4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127417dc);
  _objc_storeStrong(param_1 + _DAT_1127417a4,0);
  _objc_storeStrong(param_1 + _DAT_1127417c4,0);
  _objc_storeStrong(param_1 + _DAT_11274179c,0);
  _objc_storeStrong(param_1 + _DAT_1127417d8,0);
  _objc_storeStrong(param_1 + _DAT_1127417e0,0);
  _objc_storeStrong(param_1 + _DAT_1127417b8,0);
  _objc_storeStrong(param_1 + _DAT_1127417b0,0);
  _objc_destroyWeak(param_1 + _DAT_1127417b4);
  _objc_destroyWeak(param_1 + _DAT_1127417ac);
  _objc_destroyWeak(param_1 + _DAT_1127417a8);
  _objc_destroyWeak(param_1 + _DAT_1127417bc);
  _objc_storeStrong(param_1 + _DAT_112741794,0);
  _objc_destroyWeak(param_1 + _DAT_112741790);
  _objc_storeStrong(param_1 + _DAT_1127417d4,0);
  _objc_storeStrong(param_1 + _DAT_1127417e4,0);
  _objc_storeStrong(param_1 + _DAT_1127417c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112741798,0);
  return;
}



/* Entry: 1061aa5fc; end: 1061aa79f;  */

void FUN_1061aa5fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1061aa7a0;
  puStack_70 = &UNK_11090b530;
  _objc_copyWeak(auStack_68,param_1 + 0x20);
  func_0x00010c0e3800(param_2);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1061aa7d0;
  puStack_98 = &UNK_11090b590;
  _objc_copyWeak(auStack_90,param_1 + 0x20);
  func_0x00010c0e3ae0(param_2);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x1061aa800;
  puStack_c0 = &UNK_11090b5c0;
  _objc_copyWeak(auStack_b8,param_1 + 0x20);
  func_0x00010c0e3ac0(param_2);
  _objc_copyWeak(auStack_e0,param_1 + 0x20);
  func_0x00010c0e3840(param_2);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 1061aa7a0; end: 1061aa85f;  */

void FUN_1061aa7a0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea4e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061aa860; end: 1061aa893; -[SCFeatureToggleCameraButtonImpl stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061aa860(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127417e0;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061aa894; end: 1061aa97b; -[SCFeatureToggleCameraButtonImpl _setIsRecording:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061aa894(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = (long)_DAT_1127417c8;
  if ((uint)*(byte *)(param_1 + lVar5) == (uint)param_3) {
    return;
  }
  *(char *)(param_1 + lVar5) = (char)param_3;
  func_0x00010bed45e0();
  lVar1 = param_1;
  func_0x00010be3fa40();
  if ((int)lVar1 != 0) {
    uVar6 = 0x3fd3333333333333;
    bVar4 = *(byte *)(param_1 + lVar5) ^ 1;
    goto LAB_1061aa96c;
  }
  if (*(byte *)(param_1 + lVar5) == 0) {
LAB_1061aa95c:
    bVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127417a4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf0acc0();
    _objc_release(uVar6);
    _objc_release(uVar2);
    if ((int)uVar3 == 0) goto LAB_1061aa95c;
    bVar4 = 1;
  }
  uVar6 = 0;
  param_3 = 0;
LAB_1061aa96c:
                    /* WARNING: Could not recover jumptable at 0x00010c1a7fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar6,param_1,PTR_s_setHidden_animated_duration__112647a08,bVar4,param_3);
  return;
}



/* Entry: 1061aa97c; end: 1061aaa0f; -[SCFeatureToggleCameraButtonImpl _updateButtonTapArea:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061aa97c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1 = param_1 + _DAT_1127417bc;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf25540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if ((param_3 & 1) == 0) {
    uVar2 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    uVar3 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    uVar4 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    uVar5 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  }
  else {
    uVar2 = 0;
    uVar3 = 0xc034000000000000;
    uVar4 = 0xc034000000000000;
    uVar5 = 0;
  }
  func_0x00010c188da0(uVar2,uVar3,uVar4,uVar5,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1061aaa10; end: 1061aaeaf; -[SCFeatureToggleCameraImpl initWithCameraHardwareServicesAPI:captureDeviceManager:preferences:applicationLifecycleEvents:viewControllerLifecycleEvents:cameraHardwareResource:cameraFeaturePerformanceFeatureScopedLoggerFactory:cameraViewType:circumstanceEngine:resolutionOptimizationConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1061aaa10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
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
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_80 = PTR_PTR_1126f0218;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar7 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bf318a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar9;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf51e00();
    uVar5 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f8a0(puVar1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(uVar7);
    lVar10 = (long)_DAT_1127417e8;
    _objc_retain(param_3);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_3;
    _objc_release(uVar7);
    lVar10 = (long)_DAT_1127417ec;
    _objc_retain(param_4);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_4;
    _objc_release(uVar7);
    lVar10 = (long)_DAT_1127417f0;
    _objc_retain(param_8);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_8;
    _objc_release(uVar7);
    lVar10 = (long)_DAT_1127417f4;
    _objc_retain(param_5);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_5;
    _objc_release(uVar7);
    lVar10 = (long)_DAT_1127417f8;
    _objc_retain(param_11);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_11;
    _objc_release(uVar7);
    uVar7 = param_9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bf54f40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127417fc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127417fc) = uVar2;
    _objc_release(uVar9);
    _objc_release(uVar7);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112741800) = param_10;
    lVar10 = (long)_DAT_112741804;
    _objc_retain(param_12);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_12;
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741808);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112741808) = 0;
    _objc_release(uVar7);
    _objc_initWeak(auStack_90,puVar1);
    puVar8 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274180c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274180c) = puVar8;
    _objc_release(uVar7);
    uVar7 = param_6;
    func_0x00010bf75dc0(param_6);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1061aaeb0;
    puStack_a0 = &UNK_110846510;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar2 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar7);
    puVar8 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741810);
    *(undefined **)((long)puVar1 + (long)_DAT_112741810) = puVar8;
    _objc_release(uVar7);
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar7 = param_7;
    func_0x00010c25ff60(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1061aaeb0; end: 1061aaedb;  */

void FUN_1061aaeb0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcc9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061aaedc; end: 1061aaf9f;  */

void FUN_1061aaedc(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c15c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061aafa0; end: 1061aafaf;  */

void FUN_1061aafa0(void)

{
  return;
}



/* Entry: 1061aafb0; end: 1061aafdb;  */

void FUN_1061aafb0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee9480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061aafdc; end: 1061ab01f; -[SCFeatureToggleCameraImpl dealloc] */

void FUN_1061aafdc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  puStack_28 = PTR_PTR_1126f0218;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1061ab020; end: 1061ab3a3; -[SCFeatureToggleCameraImpl toggleCameraWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ab020(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar10 = (long)_DAT_112741814;
  lVar2 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar6 = lVar2;
  func_0x00010bfa2f60();
  _objc_release(lVar2);
  lVar2 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bfa2f80();
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127417ec);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf2fa00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010c077e20();
  _objc_release(uVar8);
  _objc_release(uVar4);
  uVar1 = (uint)lVar6;
  if (uVar1 != 0 && (int)uVar5 != 0) {
    lVar2 = param_1;
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bf0acc0();
    uVar1 = (uint)lVar6;
    _objc_release(lVar2);
  }
  if (((uVar1 | (uint)lVar3) & 1) == 0) {
    func_0x00010c1afce0(param_1);
    lVar2 = param_1 + _DAT_112741818;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c21e900();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar6 = *(long *)(param_1 + _DAT_1127417e8);
      func_0x00010c269d40(lVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar6 = param_1;
      func_0x00010c0b7e80(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    lVar3 = lVar6;
    func_0x00010bf70d80();
    _objc_release(lVar6);
    _objc_release(lVar2);
    puVar7 = PTR_PTR_1126aff08;
    func_0x00010c06cea0(PTR_PTR_1126aff08);
    lVar10 = param_1 + lVar10;
    _objc_loadWeakRetained(lVar10);
    func_0x00010bfa2f20();
    _objc_release(lVar10);
    uVar8 = *(undefined8 *)(param_1 + _DAT_1127417f4);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x000109224008((uint)puVar7 ^ 1,uVar8);
    _objc_release(uVar8);
    func_0x00010c0db140(PTR_PTR_1126afed0);
    puVar9 = *(undefined **)(param_1 + _DAT_1127417f0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar9;
    func_0x00010c154f00();
    _objc_release(puVar9);
    func_0x00010bee9f60(param_1);
    puVar9 = PTR_PTR_1126afed0;
    func_0x00010c0db140();
    if (puVar7 != puVar9) {
      func_0x0001002a566c(lVar3);
    }
    _objc_initWeak(auStack_68,param_1);
    uVar8 = *(undefined8 *)(param_1 + _DAT_1127417e8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18cd20(uVar8);
    _objc_release(puVar7);
    _objc_release(uVar8);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1061ab3a4; end: 1061ab3d7;  */

void FUN_1061ab3a4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061ab3d8; end: 1061ab437; -[SCFeatureToggleCameraImpl _viewfinderTransitionForSecondaryDevicePositions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061ab3d8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afed0;
  func_0x00010c0db140();
  if (param_3 == puVar1) {
    puVar1 = PTR_PTR_1126c7ad0;
    func_0x00010bfb2b60(PTR_PTR_1126c7ad0,param_2,*(undefined8 *)(param_1 + _DAT_1127417f8));
    uVar2 = 1;
    if ((int)puVar1 != 0) {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 1061ab438; end: 1061ab4fb; -[SCFeatureToggleCameraImpl _didSetDevicePositionAsynchronouslyWithCompletion:] */

void FUN_1061ab438(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0b7e80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70d80();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,1);
  }
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa2f00();
  _objc_release(uVar1);
  func_0x00010bdfe760(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061ab4fc; end: 1061ab5bf; -[SCFeatureToggleCameraImpl shortcutEnableIfNecessary:cameraShortcutId:scanSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061ab4fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bf70d80();
  lVar1 = param_1;
  func_0x00010c0b7e80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + _DAT_1127417e8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_1;
    func_0x00010c0b7e80();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = lVar2;
  func_0x00010bf70d80();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 1) {
    if (param_3 != 0) {
      return 1;
    }
  }
  else {
    if (lVar3 != 0) {
      return 1;
    }
    if (param_3 != 1) {
      return 1;
    }
  }
  func_0x00010c272720(param_1,param_2,0);
  return 1;
}



/* Entry: 1061ab5c0; end: 1061ab5c3; -[SCFeatureToggleCameraImpl shortcutDisable] */

void FUN_1061ab5c0(void)

{
  return;
}



/* Entry: 1061ab5c4; end: 1061ab5cb; -[SCFeatureToggleCameraImpl cameraShortcutFeatureType] */

undefined8 FUN_1061ab5c4(void)

{
  return 0;
}



/* Entry: 1061ab5cc; end: 1061ab5d3; -[SCFeatureToggleCameraImpl cameraShortcutFeatureOption] */

undefined8 FUN_1061ab5cc(void)

{
  return 0x100;
}



/* Entry: 1061ab5d4; end: 1061ab5db; -[SCFeatureToggleCameraImpl hasPendingContent] */

undefined8 FUN_1061ab5d4(void)

{
  return 0;
}



/* Entry: 1061ab5dc; end: 1061ab5e7; -[SCFeatureToggleCameraImpl cameraShortcutFeatureName] */

undefined ** FUN_1061ab5dc(void)

{
  return &PTR____CFConstantStringClassReference_110e44518;
}



/* Entry: 1061ab5e8; end: 1061ab613; -[SCFeatureToggleCameraImpl _appDidEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ab5e8(long param_1)

{
  func_0x00010be883c0();
  *(undefined1 *)(param_1 + _DAT_11274181c) = 0;
  return;
}



/* Entry: 1061ab614; end: 1061ab63f; -[SCFeatureToggleCameraImpl _viewDidDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061ab614(long param_1)

{
  func_0x00010be883c0();
  *(undefined1 *)(param_1 + _DAT_11274181c) = 0;
  return;
}


