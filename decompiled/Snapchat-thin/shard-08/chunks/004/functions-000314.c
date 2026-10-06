/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106170d3c; end: 106170e13; -[SCFeatureHandsFreeViewImpl _cancelTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106170d3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112740c08;
  if (*(long *)(param_1 + lVar3) != 0) {
    puVar1 = PTR_PTR_1126c8610;
    _objc_alloc_init(PTR_PTR_1126c8610);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112740be4);
    func_0x00010bf311e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112740bd0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
    func_0x00010c209fc0(param_1,param_2,0);
    (**(code **)(*(long *)(param_1 + lVar3) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106170e14; end: 106170ffb; -[SCFeatureHandsFreeViewImpl _layoutCameraLockIcon] */

/* WARNING: Possible PIC construction at 0x000106170ecc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106170ed0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106170e14(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                  )

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  func_0x00010bfc1920();
  uVar1 = param_5;
  func_0x00010be42c20();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_5;
    func_0x00010c09fbe0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf345e0();
    dVar2 = param_1;
    func_0x00010c09fbc0(param_5);
    _objc_release(uVar1);
    if (param_1 != dVar2) {
      func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
    }
    return;
  }
  if (*(char *)(param_5 + (long)_DAT_112740c04) == '\x01') {
    uVar1 = param_5;
    func_0x00010c09fbe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf345e0();
    dVar2 = param_1;
    dVar3 = param_2;
    func_0x00010c09fbc0(param_5);
    dVar5 = dVar2;
    dVar4 = dVar3;
    _objc_release(uVar1);
    if ((param_1 == dVar2) && (param_2 == dVar3)) {
      return;
    }
    func_0x00010c09fbc0(param_5);
    func_0x00010c09fbe0(param_5);
    _objc_retainAutoreleasedReturnValue();
    param_1 = dVar4;
  }
  else {
    func_0x00010bf2b2c0(param_5);
    dVar2 = param_1;
    _CGRectGetMinX();
    dVar5 = dVar2 + -20.0;
    func_0x00010c247fa0(param_5);
    dVar5 = dVar5 - dVar2;
    _CGRectGetMidY(param_1,param_2,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(dVar5,param_1);
  return;
}



/* Entry: 106170ffc; end: 106171053;  */

void FUN_106170ffc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010c09fbc0(*(undefined8 *)(param_3 + 0x20));
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c09fbe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106171054; end: 106171113; -[SCFeatureHandsFreeViewImpl _isLockIconVisible] */

bool FUN_106171054(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  
  uVar1 = param_2;
  func_0x00010c09fbe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    bVar5 = false;
  }
  else {
    uVar3 = param_2;
    func_0x00010c09fbe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c074c20();
    if ((uVar4 & 1) == 0) {
      func_0x00010c09fbe0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf01b40();
      bVar5 = 0.0 < param_1;
      _objc_release(param_2);
    }
    else {
      bVar5 = false;
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return bVar5;
}



/* Entry: 106171114; end: 10617117b; -[SCFeatureHandsFreeViewImpl _handsFreeStopButtonColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106171114(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112740bb0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfd35a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10617117c; end: 1061711e3; -[SCFeatureHandsFreeViewImpl _ghostAllowedForCurrentState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10617117c(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 1) {
LAB_1061711c0:
    bVar2 = *(byte *)(param_1 + _DAT_112740c04);
  }
  else {
    if (lVar1 != 2) {
      if (lVar1 != 3) {
        bVar2 = 0;
        goto LAB_1061711d4;
      }
      if ((*(byte *)(param_1 + _DAT_112740bf8) & 1) == 0) goto LAB_1061711c0;
    }
    bVar2 = 1;
  }
LAB_1061711d4:
  return bVar2 & 1;
}



/* Entry: 1061711e4; end: 1061712f7; -[SCFeatureHandsFreeViewImpl _ensureHoverTransferCircle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061711e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = param_1;
  func_0x00010be23fa0();
  if (((int)lVar5 == 0) || (lVar5 = param_1, func_0x00010be41a00(), (int)lVar5 == 0)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar5 = (long)_DAT_112740c0c;
    puVar4 = *(undefined **)(param_1 + lVar5);
    if (puVar4 == (undefined *)0x0) {
      lVar1 = param_1;
      func_0x00010be33a00(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      func_0x00010c16e440();
      func_0x00010c1677c0(0,puVar4);
      lVar2 = param_1;
      func_0x00010c09fbe0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fe0(param_1,param_2,puVar4,lVar2);
      _objc_release(lVar2);
      if (*(long *)(param_1 + _DAT_112740c10) != 0) {
        func_0x00010c16e440(*(long *)(param_1 + _DAT_112740c10),param_2,lVar1);
      }
      _objc_retain(puVar4);
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar4;
      _objc_release(uVar3);
      _objc_release(lVar1);
    }
    else {
      _objc_retain(puVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1061712f8; end: 10617136f; -[SCFeatureHandsFreeViewImpl _removeHoverTransferCircle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061712f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740c14;
  if (*(long *)(param_1 + lVar2) != 0) {
    func_0x00010c2559c0(*(long *)(param_1 + lVar2),param_2,1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    _objc_release(uVar1);
  }
  lVar2 = (long)_DAT_112740c0c;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_112740c18) = 0;
  *(undefined1 *)(param_1 + _DAT_112740bf8) = 0;
  return;
}



/* Entry: 106171370; end: 10617192f; -[SCFeatureHandsFreeViewImpl _animateGhostToLock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106171370(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,int param_7)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  undefined1 auStack_140 [8];
  long lStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  long lStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  double dStack_b8;
  undefined1 auStack_b0 [16];
  
  uVar3 = param_5;
  func_0x00010be41a00();
  if (((int)uVar3 == 0) || (uVar3 = param_5, func_0x00010be23fa0(), (uVar3 & 1) == 0)) {
    func_0x00010be8c440(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010be35950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s__hideLockHoverCircleAnimated__11256aff0,1);
    return;
  }
  uVar3 = param_5;
  func_0x00010c09fba0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103b20();
  _objc_release(uVar3);
  uVar3 = param_5;
  func_0x00010c09fb00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103b20();
  _objc_release(uVar3);
  uVar3 = param_5;
  func_0x00010be0a4e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) goto LAB_1061718c8;
  lVar1 = 1;
  if (param_7 != 0) {
    lVar1 = 2;
  }
  lVar13 = (long)_DAT_112740c18;
  if (*(long *)(param_5 + lVar13) == lVar1) goto LAB_1061718c8;
  lVar14 = (long)_DAT_112740c14;
  if (*(long *)(param_5 + lVar14) != 0) {
    lVar12 = (long)_DAT_112740c0c;
    lVar4 = *(long *)(param_5 + lVar12);
    if (lVar4 != 0) {
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c10f4e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if (lVar5 != 0) {
        func_0x00010c104260(lVar5);
        func_0x00010c17a6a0(*(undefined8 *)(param_5 + lVar12));
        func_0x00010bf20c00(lVar5);
        func_0x00010c1739e0(*(undefined8 *)(param_5 + lVar12));
        func_0x00010bf525a0(lVar5);
        uVar6 = *(undefined8 *)(param_5 + lVar12);
        func_0x00010c08c0e0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1842e0();
        _objc_release(uVar6);
      }
      func_0x00010c2559c0(*(undefined8 *)(param_5 + lVar14));
      func_0x00010bfaf6c0(*(undefined8 *)(param_5 + lVar14));
      uVar6 = *(undefined8 *)(param_5 + lVar14);
      *(undefined8 *)(param_5 + lVar14) = 0;
      _objc_release(uVar6);
      _objc_release(lVar5);
    }
  }
  lVar4 = *(long *)(param_5 + (long)_DAT_112740c1c) + 1;
  *(long *)(param_5 + (long)_DAT_112740c1c) = lVar4;
  lVar12 = param_5 + (long)_DAT_112740bb0;
  _objc_loadWeakRetained(lVar12);
  lVar5 = lVar12;
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1fb40();
  dVar15 = param_1;
  _objc_release(lVar5);
  _objc_release(lVar12);
  func_0x00010bf2b2c0(param_5);
  _CGRectGetMidX();
  dVar16 = dVar15;
  func_0x00010bf2b2c0(param_5);
  _CGRectGetMidY();
  uVar7 = param_5;
  dVar17 = dVar16;
  func_0x00010c09fbe0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidX();
  uVar8 = param_5;
  dVar18 = dVar17;
  func_0x00010c09fbe0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetMidY();
  uVar9 = param_5;
  func_0x00010c09fbe0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51200(param_5);
  dVar20 = dVar17;
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  func_0x00010bf01b40(uVar3);
  if (dVar20 == 0.0) {
LAB_106171620:
    lVar12 = (long)_DAT_112740bf8;
    if ((*(char *)(param_5 + lVar12) == '\0') ||
       (((*(byte *)(param_5 + (long)_DAT_112740c04) & 1) == 0 && (*(long *)(param_5 + lVar13) != 2))
       )) {
      uVar6 = *(undefined8 *)PTR__CGPointZero_110347540;
      uVar21 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
      dVar20 = param_1;
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      dVar19 = param_1;
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
      func_0x00010c1739e0(uVar6,uVar21,dVar20,dVar19,uVar3);
      dVar20 = param_1;
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      dVar20 = dVar20 * 0.5;
      dVar19 = dVar15;
      dVar22 = dVar16;
    }
    else {
      func_0x00010c1739e0(*(undefined8 *)PTR__CGPointZero_110347540,
                          *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0x4049000000000000,
                          0x4049000000000000,uVar3);
      dVar20 = 25.0;
      dVar19 = dVar17;
      dVar22 = dVar18;
    }
    uVar7 = uVar3;
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(dVar20);
    _objc_release(uVar7);
    func_0x00010c17a6a0(dVar19,dVar22,uVar3);
    func_0x00010c1677c0(0x3ff0000000000000,uVar3);
    *(undefined1 *)(param_5 + lVar12) = 1;
  }
  else {
    uVar7 = uVar3;
    func_0x00010bf20c00();
    iVar2 = (int)uVar7;
    _CGRectIsEmpty();
    if (iVar2 != 0) goto LAB_106171620;
  }
  puVar10 = PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230;
  _objc_alloc(PTR__OBJC_CLASS___UISpringTimingParameters_1126b6230);
  func_0x00010c008200(0x3feb333333333333,0,0);
  puVar11 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
  _objc_alloc();
  func_0x00010c00eb20(0x3fd0000000000000);
  _objc_initWeak(auStack_b0,param_5);
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_106171930;
  puStack_110 = &UNK_1109117c0;
  _objc_copyWeak(auStack_108,auStack_b0);
  uStack_e8 = 0x3ff4000000000000;
  lStack_100 = lVar1;
  dStack_f8 = dVar17;
  dStack_f0 = dVar18;
  dStack_e0 = param_1;
  uStack_d8 = param_2;
  uStack_d0 = param_3;
  uStack_c8 = param_4;
  dStack_c0 = dVar15;
  dStack_b8 = dVar16;
  func_0x00010bef6cc0(puVar11);
  _objc_copyWeak(auStack_140,auStack_b0);
  lStack_138 = lVar4;
  lStack_130 = lVar1;
  func_0x00010bef78c0(puVar11);
  *(long *)(param_5 + lVar13) = lVar1;
  _objc_retain(puVar11);
  uVar6 = *(undefined8 *)(param_5 + lVar14);
  *(undefined **)(param_5 + lVar14) = puVar11;
  _objc_release(uVar6);
  func_0x00010c24dc40(puVar11);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_108);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar11);
  _objc_release(puVar10);
LAB_1061718c8:
  _objc_release(uVar3);
  return;
}



/* Entry: 106171930; end: 106171b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106171930(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar10 = *(undefined8 *)PTR__CGPointZero_110347540;
    uVar9 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    lVar2 = lVar1;
    if (*(long *)(param_1 + 0x28) == 2) {
      lVar3 = (long)_DAT_112740c0c;
      func_0x00010c1739e0(uVar10,uVar9,0x4049000000000000,0x4049000000000000,
                          *(undefined8 *)(lVar1 + lVar3));
      uVar9 = *(undefined8 *)(lVar1 + lVar3);
      func_0x00010c08c0e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4039000000000000);
      _objc_release(uVar9);
      func_0x00010c17a6a0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                          *(undefined8 *)(lVar1 + lVar3));
      _CGAffineTransformMakeScale
                (&uStack_90,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x40));
      lVar3 = lVar1;
      func_0x00010c09fba0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uStack_b8 = uStack_88;
      uStack_c0 = uStack_90;
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      func_0x00010c219960();
      _objc_release(lVar3);
      _CGAffineTransformMakeScale(&uStack_f0,0x3ff8000000000000,0x3ff8000000000000);
      func_0x00010c09fb00(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uStack_b8 = uStack_e8;
      uStack_c0 = uStack_f0;
      uStack_a8 = uStack_d8;
      uStack_b0 = uStack_e0;
      uVar9 = uStack_d0;
      uVar10 = uStack_c8;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      _CGRectGetWidth(uVar4,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60));
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      _CGRectGetHeight(uVar5,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                       *(undefined8 *)(param_1 + 0x60));
      lVar3 = (long)_DAT_112740c0c;
      func_0x00010c1739e0(uVar10,uVar9,uVar4,uVar5,*(undefined8 *)(lVar1 + lVar3));
      dVar6 = *(double *)(param_1 + 0x48);
      _CGRectGetWidth(dVar6,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60));
      uVar9 = *(undefined8 *)(lVar1 + lVar3);
      func_0x00010c08c0e0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(dVar6 * 0.5);
      _objc_release(uVar9);
      func_0x00010c17a6a0(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                          *(undefined8 *)(lVar1 + lVar3));
      lVar3 = lVar1;
      func_0x00010c09fba0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uVar4 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uVar10 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      uStack_c0 = uVar4;
      uStack_b8 = uVar5;
      uStack_b0 = uVar7;
      uStack_a8 = uVar8;
      uStack_a0 = uVar9;
      uStack_98 = uVar10;
      func_0x00010c219960();
      _objc_release(lVar3);
      func_0x00010c09fb00(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uStack_c0 = uVar4;
      uStack_b8 = uVar5;
      uStack_b0 = uVar7;
      uStack_a8 = uVar8;
    }
    uStack_a0 = uVar9;
    uStack_98 = uVar10;
    func_0x00010c219960();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c09fba0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a8860();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106171b94; end: 106171c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106171b94(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x28) == *(long *)(lVar1 + _DAT_112740c1c))) {
    if ((param_2 == 0) && (*(long *)(param_1 + 0x30) == 2)) {
      func_0x00010beb9b20(lVar1);
      func_0x00010bf03400(0x3fbeb851eb851eb8,PTR__OBJC_CLASS___UIView_1126aec20);
    }
    else if ((param_2 == 0) && (*(long *)(param_1 + 0x30) == 1)) {
      func_0x00010be35940(lVar1);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106171c74; end: 106171c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106171c74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112740c0c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106171c8c; end: 106171d8f; -[SCFeatureHandsFreeViewImpl _syncHoverGhostForCurrentState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106171c8c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + (long)_DAT_112740c20) = 0;
  uVar1 = param_1;
  func_0x00010be23fa0();
  if ((((uVar1 & 1) == 0) || (uVar1 = param_1, func_0x00010be41a00(), (int)uVar1 == 0)) ||
     (uVar1 = param_1, func_0x00010be23fa0(), (uVar1 & 1) == 0)) {
    func_0x00010be35940(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be8c450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeHoverTransferCircle_112580ab0);
    return;
  }
  if (((*(byte *)(param_1 + (long)_DAT_112740c04) & 1) == 0) &&
     (uVar1 = param_1, func_0x00010c252440(), uVar1 != 2)) {
    func_0x00010be35940(param_1);
    if ((*(long *)(param_1 + (long)_DAT_112740c18) == 1) &&
       (*(long *)(param_1 + (long)_DAT_112740c0c) != 0)) {
      return;
    }
    uVar2 = 0;
  }
  else {
    func_0x00010beb9b20(param_1);
    if ((*(long *)(param_1 + (long)_DAT_112740c18) == 2) &&
       (*(long *)(param_1 + (long)_DAT_112740c0c) != 0)) {
      return;
    }
    uVar2 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdcac70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__animateGhostToLock__1125504b8,uVar2);
  return;
}



/* Entry: 106171d90; end: 106171e67; -[SCFeatureHandsFreeViewImpl _scheduleSyncHoverGhost] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106171d90(long param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if ((*(byte *)(param_1 + _DAT_112740c20) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112740c20) = 1;
    puVar1 = auStack_28;
    _objc_initWeak(puVar1,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c0f7fc0(puVar1);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 106171e68; end: 106171e93;  */

void FUN_106171e68(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec9a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106171e94; end: 106171f53; -[SCFeatureHandsFreeViewImpl _finishGhostForHandsFreeBegan] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106171e94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  if (*(long *)(param_1 + _DAT_112740c0c) != 0) {
    lVar2 = (long)_DAT_112740c14;
    if (*(long *)(param_1 + lVar2) != 0) {
      func_0x00010c2559c0(*(long *)(param_1 + lVar2),param_2,1);
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
      _objc_release(uVar1);
    }
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106171f54;
    puStack_30 = &UNK_110842e18;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x106171f6c;
    puStack_58 = &UNK_110841f20;
    lStack_50 = param_1;
    lStack_28 = param_1;
    func_0x00010bf03420(0x3fbeb851eb851eb8,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48,
                        &puStack_70);
  }
  return;
}



/* Entry: 106171f54; end: 106171f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106171f54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112740c0c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106171f74; end: 106172123; -[SCFeatureHandsFreeViewImpl _ensureLockHoverCircle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106171f74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = (long)_DAT_112740c10;
  puVar5 = *(undefined **)(param_1 + lVar6);
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x00010c1739e0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0x4049000000000000,
                        0x4049000000000000);
    puVar1 = puVar5;
    func_0x00010c08c0e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4039000000000000);
    _objc_release(puVar1);
    lVar2 = param_1;
    func_0x00010be33a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar5,param_2,lVar2);
    _objc_release(lVar2);
    uVar7 = 0;
    func_0x00010c1677c0(0,puVar5);
    func_0x00010c1a7f60(puVar5,param_2,1);
    lVar2 = param_1;
    func_0x00010c09fbe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c09fb00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066f80(lVar2,param_2,puVar5,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c09fbe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMidX();
    lVar3 = param_1;
    uVar4 = uVar7;
    func_0x00010c09fbe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMidY();
    func_0x00010c17a6a0(uVar7,uVar4,puVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_retain(puVar5);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar5;
    _objc_release(uVar4);
  }
  else {
    _objc_retain(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106172124; end: 1061721df; -[SCFeatureHandsFreeViewImpl _showLockHoverCircleAnimated:] */

void FUN_106172124(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010be0a560();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c1a7f60(param_1,param_2,0);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    if (param_3 == 0) {
      func_0x00010c1677c0(0x3ff0000000000000,param_1);
    }
    else {
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_40 = 0xc2000000;
      pcStack_38 = FUN_1061721e0;
      puStack_30 = &UNK_110842e18;
      _objc_retain(param_1);
      lStack_28 = param_1;
      func_0x00010bf03400(0x3fbeb851eb851eb8,puVar1,param_2,&puStack_48);
      _objc_release(lStack_28);
    }
  }
  _objc_release(param_1);
  return;
}



/* Entry: 1061721e0; end: 1061721eb;  */

void FUN_1061721e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1061721ec; end: 1061722ab; -[SCFeatureHandsFreeViewImpl _hideLockHoverCircleAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061721ec(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar1 = (long)_DAT_112740c10;
  if (*(long *)(param_1 + lVar1) != 0) {
    if (param_3 == 0) {
      func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + lVar1),PTR_s_setHidden__1126479f8,1);
      return;
    }
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_1061722ac;
    puStack_30 = &UNK_110842e18;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x1061722c4;
    puStack_58 = &UNK_110841f20;
    lStack_50 = param_1;
    lStack_28 = param_1;
    func_0x00010bf03420(0x3fbeb851eb851eb8,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_48,
                        &puStack_70);
  }
  return;
}



/* Entry: 1061722ac; end: 1061722db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061722ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112740c10),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1061722dc; end: 106172303; -[SCFeatureHandsFreeViewImpl shouldDisplayHandsFreeTooltip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1061722dc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112740be4);
  func_0x00010bf31440(lVar1);
  return lVar1 != 2;
}



/* Entry: 106172304; end: 106172307; -[SCFeatureHandsFreeViewImpl isHandsFreeEnabled] */

void FUN_106172304(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd3530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_handsFreeEnabled_1125d26f0);
  return;
}



/* Entry: 106172308; end: 106172383; -[SCFeatureHandsFreeViewImpl cameraTimerFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106172308(undefined8 param_1,long param_2,undefined8 param_3)

{
  param_2 = param_2 + _DAT_112740bb0;
  _objc_loadWeakRetained(param_2);
  _objc_retain();
  func_0x00010bf2b2e0(param_2,param_3,param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106172384; end: 106172387; -[SCFeatureHandsFreeViewImpl handsFreeTooltipHostBounds] */

void FUN_106172384(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf20c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_bounds_1125a5ca8);
  return;
}



/* Entry: 106172388; end: 1061723cb; -[SCFeatureHandsFreeViewImpl tooltipTextForTriggeringHandsFree] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106172388(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112740be4);
  func_0x00010bf31440();
  if (lVar1 == 1) {
    func_0x00010b0aec3c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010b0aec24();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061723cc; end: 1061724c7; -[SCFeatureHandsFreeViewImpl accessibilityElements] */

undefined * FUN_1061723cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bf2dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_1;
  func_0x00010bfe3ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = lVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lStack_48 = lVar2;
    func_0x00010bf2dfc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_40 = param_1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_48,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 1061724c8; end: 1061724cf; -[SCFeatureHandsFreeViewImpl isAccessibilityElement] */

undefined8 FUN_1061724c8(void)

{
  return 1;
}



/* Entry: 1061724d0; end: 1061724df; -[SCFeatureHandsFreeViewImpl cancelBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061724d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740c08);
}



/* Entry: 1061724e0; end: 1061724eb; -[SCFeatureHandsFreeViewImpl setCancelBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061724e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1061724ec; end: 10617250b; -[SCFeatureHandsFreeViewImpl handsFreeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061724ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112740bac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10617250c; end: 10617251b; -[SCFeatureHandsFreeViewImpl state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10617250c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740be0);
}



/* Entry: 10617251c; end: 10617252b; -[SCFeatureHandsFreeViewImpl handsFreeEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10617251c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112740ba8);
}



/* Entry: 10617252c; end: 10617253b; -[SCFeatureHandsFreeViewImpl setHandsFreeEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617252c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112740ba8) = param_3;
  return;
}



/* Entry: 10617253c; end: 10617254b; -[SCFeatureHandsFreeViewImpl videoCaptureConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10617253c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740be4);
}



/* Entry: 10617254c; end: 10617255f; -[SCFeatureHandsFreeViewImpl gestureStartPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10617254c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112740c00);
}



/* Entry: 106172560; end: 106172573; -[SCFeatureHandsFreeViewImpl setGestureStartPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106172560(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112740c00;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 106172574; end: 106172587; -[SCFeatureHandsFreeViewImpl gestureCurrentPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_106172574(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112740bfc);
}



/* Entry: 106172588; end: 1061725c7; -[SCFeatureHandsFreeViewImpl setHitboxView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106172588(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740bdc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061725c8; end: 106172607; -[SCFeatureHandsFreeViewImpl setLockIconView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061725c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740be8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106172608; end: 106172647; -[SCFeatureHandsFreeViewImpl setLockIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106172608(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740bf0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106172648; end: 106172687; -[SCFeatureHandsFreeViewImpl setLockBackdropGradient:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106172648(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740bec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106172688; end: 1061726c7; -[SCFeatureHandsFreeViewImpl setCancelButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106172688(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740bf4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061726c8; end: 106172817; -[SCFeatureHandsFreeViewImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061726c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740bf4,0);
  _objc_storeStrong(param_1 + _DAT_112740bec,0);
  _objc_storeStrong(param_1 + _DAT_112740bf0,0);
  _objc_storeStrong(param_1 + _DAT_112740be8,0);
  _objc_storeStrong(param_1 + _DAT_112740bdc,0);
  _objc_storeStrong(param_1 + _DAT_112740be4,0);
  _objc_destroyWeak(param_1 + _DAT_112740bac);
  _objc_storeStrong(param_1 + _DAT_112740c08,0);
  _objc_destroyWeak(param_1 + _DAT_112740bb4);
  _objc_storeStrong(param_1 + _DAT_112740c10,0);
  _objc_storeStrong(param_1 + _DAT_112740c14,0);
  _objc_storeStrong(param_1 + _DAT_112740c0c,0);
  _objc_storeStrong(param_1 + _DAT_112740bc8,0);
  _objc_destroyWeak(param_1 + _DAT_112740bc4);
  _objc_storeStrong(param_1 + _DAT_112740bc0,0);
  _objc_storeStrong(param_1 + _DAT_112740bd0,0);
  _objc_storeStrong(param_1 + _DAT_112740bbc,0);
  _objc_storeStrong(param_1 + _DAT_112740bcc,0);
  _objc_storeStrong(param_1 + _DAT_112740bb8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112740bb0);
  return;
}



/* Entry: 106172818; end: 106172953; -[SCHandsFreeDestinationActivatedCoordinator initWithQuickReplyBridge:] */

undefined8 * FUN_106172818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126efec0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    uVar4 = puVar1[1];
    _objc_retain(uVar4);
    uVar3 = puVar1[2];
    puVar1[2] = uVar4;
    _objc_release(uVar3);
    uVar3 = puVar1[3];
    puVar1[3] = 0;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = puVar1[5];
    puVar1[5] = param_3;
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,puVar1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c18c300(puVar1[5]);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106172954; end: 1061729db;  */

void FUN_106172954(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdce740(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061729dc; end: 106172a27; -[SCHandsFreeDestinationActivatedCoordinator dealloc] */

void FUN_1061729dc(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c18c300(*(undefined8 *)(param_1 + 0x28),param_2,0);
  puStack_28 = PTR_PTR_1126efec0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106172a28; end: 106172a97; -[SCHandsFreeDestinationActivatedCoordinator announceDestinationActivated:] */

void FUN_106172a28(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
  }
  else {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = param_3;
    _objc_release(uVar1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106172a98; end: 106172abf; -[SCHandsFreeDestinationActivatedCoordinator destinationActivatedObservable] */

void FUN_106172a98(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106172ac0; end: 106172ae7; -[SCHandsFreeDestinationActivatedCoordinator destinationActivatedReplyConfig] */

void FUN_106172ac0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106172ae8; end: 106172b23; -[SCHandsFreeDestinationActivatedCoordinator _baseReplyParameters] */

void FUN_106172ae8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1010;
  _objc_alloc(PTR_PTR_1126b1010);
  func_0x00010c02ec80();
  func_0x00010c1d86a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106172b24; end: 106172bab; -[SCHandsFreeDestinationActivatedCoordinator _applySpotlightToReplyParameters:] */

void FUN_106172b24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c1eb2c0(param_3,param_2,0);
  func_0x00010c1afa00(param_3,param_2,1);
  func_0x00010c165660(param_3,param_2,1);
  func_0x00010c1eb300(param_3,param_2,&PTR____CFConstantStringClassReference_110e43078);
  func_0x00010c1eb2e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e43078);
  func_0x00010c1eb080(param_3,param_2,&PTR____CFConstantStringClassReference_110e43018);
  func_0x00010c1eb220(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106172bac; end: 106172bfb; -[SCHandsFreeDestinationActivatedCoordinator _applyMyStoryToReplyParameters:] */

void FUN_106172bac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c165620(param_3,param_2,1);
  func_0x00010c1eb220(param_3,param_2,2);
  func_0x00010c1eb080(param_3,param_2,&PTR____CFConstantStringClassReference_110e43038);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106172bfc; end: 106172c5f; -[SCHandsFreeDestinationActivatedCoordinator _applyPublicStoryToReplyParameters:] */

void FUN_106172bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c165640(param_3,param_2,1);
  func_0x00010c1eb2e0(param_3,param_2,&PTR____CFConstantStringClassReference_110e43098);
  func_0x00010c1eb300(param_3,param_2,&PTR____CFConstantStringClassReference_110e43098);
  func_0x00010c1eb080(param_3,param_2,&PTR____CFConstantStringClassReference_110e43058);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106172c60; end: 106172cdf; -[SCHandsFreeDestinationActivatedCoordinator _createReplyConfigurationForDestinationKind:withRecipient:] */

void FUN_106172c60(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bdd2b60();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 5) {
    func_0x00010bdce720(param_1,param_2,uVar1);
  }
  else if (param_3 == 3) {
    func_0x00010bdce540(param_1,param_2,uVar1);
  }
  else if (param_3 == 2) {
    func_0x00010bdceba0(param_1,param_2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106172ce0; end: 106172dcb; -[SCHandsFreeDestinationActivatedCoordinator _createReplyConfigurationForRecipient:] */

void FUN_106172ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_106172dcc;
  uStack_30 = 0x106172ddc;
  uStack_28 = 0;
  func_0x00010c0c0060(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106172dcc; end: 106172de3;  */

void FUN_106172dcc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106172de4; end: 106172f37;  */

void FUN_106172de4(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b1010;
  _objc_alloc();
  func_0x00010c02ec80();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar3);
  func_0x00010c1d86a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  lVar4 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb300(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb2e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  if (lVar4 == 0) {
    lVar2 = param_2;
    func_0x00010c294420(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1eb080(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  if (lVar4 == 0) {
    _objc_release(lVar2);
  }
  _objc_release(lVar4);
  func_0x00010c1eb220(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  func_0x00010c1eb2c0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106172f38; end: 106172f3f;  */

void FUN_106172f38(void)

{
  return;
}



/* Entry: 106172f40; end: 106172f5b; -[SCHandsFreeDestinationActivatedCoordinator nilOutDestionationActivated] */

void FUN_106172f40(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106172f5c; end: 106172ffb; -[SCHandsFreeDestinationActivatedCoordinator _mapBridgeKindToDestinationKind:] */

undefined8 FUN_106172f5c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ddea98);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e42ff8);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad4b8);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e15e38);
        uVar2 = 6;
        if ((int)uVar1 == 0) {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 5;
    }
  }
  else {
    uVar2 = 2;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106172ffc; end: 1061730f3; -[SCHandsFreeDestinationActivatedCoordinator _applyQuickReplyDestinationKind:index:recipient:] */

void FUN_106172ffc(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 != 0) && (uVar1 = param_1, func_0x00010be5c9c0(param_1,param_2,param_3), 1 < uVar1))
  {
    uVar3 = param_1;
    if (uVar1 != 6) {
      func_0x00010bdf25e0(param_1,param_2,uVar1,0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106173098;
    }
    if (param_5 != 0) {
      func_0x00010bdf2600(param_1,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106173098;
    }
  }
  uVar3 = 0;
LAB_106173098:
  *(undefined1 *)(param_1 + 0x20) = 1;
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(ulong *)(param_1 + 0x18) = uVar3;
  _objc_release(uVar2);
  if (uVar3 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,uVar3);
  }
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061730f4; end: 10617313b; -[SCHandsFreeDestinationActivatedCoordinator .cxx_destruct] */

void FUN_1061730f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10617313c; end: 10617318f; -[SCFeatureHighDefinitionModeImpl dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617313c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112740c80));
  puStack_28 = PTR_PTR_1126efec8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106173190; end: 106173197;  */

void FUN_106173190(void)

{
  return;
}



/* Entry: 106173198; end: 106173213; -[SCFeatureHighDefinitionModeImpl updateCaptureConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106173198(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b9e08;
  func_0x00010bfe6fa0(PTR_PTR_1126b9e08);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + _DAT_112740c54) == '\x01') {
    func_0x00010c2b8780(puVar1,param_2,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106173214; end: 106173417; -[SCFeatureHighDefinitionModeImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106173214(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  lVar6 = (long)_DAT_112740c84;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c160440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106173418;
    puStack_88 = &UNK_110872b30;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_106173520;
    puStack_b8 = &UNK_110841fb0;
    _objc_copyWeak(auStack_a8,auStack_78);
    _objc_retain(param_4);
    uStack_b0 = param_4;
    func_0x000100162d98("APPSTORE",&puStack_d0);
    _objc_release(uStack_b0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
  }
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106173418; end: 1061734bb;  */

void FUN_106173418(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e38c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1061734bc; end: 10617351f;  */

void FUN_1061734bc(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf70d80();
  if (lVar1 != param_3) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdfc800();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106173520; end: 106173553;  */

void FUN_106173520(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106173554; end: 106173593; -[SCFeatureHighDefinitionModeImpl stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106173554(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740c84;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bea4ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setIsTogglingHDMode__112586d58,0);
  return;
}



/* Entry: 106173594; end: 10617377b; -[SCFeatureHighDefinitionModeImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106173594(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar11 = (long)_DAT_112740c3c;
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf318a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f8a0(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bec7980(param_1);
  func_0x00010bee2580(param_1);
  puVar7 = PTR_PTR_1126b9ca8;
  lVar11 = param_1 + _DAT_112740c60;
  _objc_loadWeakRetained(lVar11);
  func_0x00010bfdeec0();
  _objc_release(lVar11);
  if ((int)puVar7 != 0) {
    lVar11 = (long)_DAT_112740c74;
    uVar8 = *(ulong *)(param_1 + lVar11);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfd79c0();
    if ((uVar9 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar8);
      return;
    }
    uVar10 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar10;
    func_0x00010bfdeee0();
    _objc_release(uVar10);
    _objc_release(uVar8);
    if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc4cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__activateHighDefinitionMode__11254ecd0,1)
      ;
      return;
    }
  }
  return;
}



/* Entry: 10617377c; end: 10617384f; -[SCFeatureHighDefinitionModeImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617377c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c84f8;
  func_0x00010bf25960();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_48 = puVar1;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_112740c90));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&puStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(puVar1 + _DAT_112740c90) = 0;
  return;
}



/* Entry: 106173850; end: 10617385f; -[SCFeatureHighDefinitionModeImpl resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106173850(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_112740c90) = 0;
  return;
}



/* Entry: 106173860; end: 10617386f; -[SCFeatureHighDefinitionModeImpl isCameraModeActivated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106173860(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112740c54);
}



/* Entry: 106173870; end: 106173877; -[SCFeatureHighDefinitionModeImpl cameraModeType] */

undefined8 FUN_106173870(void)

{
  return 0x18;
}



/* Entry: 106173878; end: 1061738b7; -[SCFeatureHighDefinitionModeImpl didRegisterProviderToken:noFormatFoundError:] */

void FUN_106173878(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x00010bea4ec0(param_1,param_2,0);
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc4cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__activateHighDefinitionMode__11254ecd0,0);
    return;
  }
  return;
}



/* Entry: 1061738b8; end: 106173933; -[SCFeatureHighDefinitionModeImpl didUnregisterProviderToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061738b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010bea4ec0(param_1);
  lVar2 = (long)_DAT_112740c94;
  lVar1 = *(long *)(param_1 + lVar2);
  _objc_release(param_3);
  if (lVar1 != param_3) {
    return;
  }
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc4cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__activateHighDefinitionMode__11254ecd0,0);
  return;
}



/* Entry: 106173934; end: 10617393f; -[SCFeatureHighDefinitionModeImpl featureNameForToken:] */

undefined ** FUN_106173934(void)

{
  return &PTR____CFConstantStringClassReference_110e430b8;
}



/* Entry: 106173940; end: 10617399f; -[SCFeatureHighDefinitionModeImpl _setIsTogglingHDMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106173940(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (*(byte *)(param_1 + _DAT_112740c98) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112740c98) = (char)param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740c78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b19c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061739a0; end: 106173ac7; -[SCFeatureHighDefinitionModeImpl _subscribeToHandsFreeModeState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061739a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + _DAT_112740c78);
  if (lVar1 != 0) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_48,param_1);
      lVar2 = lVar1;
      func_0x00010bfd34a0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      lVar3 = lVar2;
      func_0x00010c25ff60(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 106173ac8; end: 106173c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106173ac8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    func_0x00010c0be6c0(param_2);
    lVar1 = *(long *)(param_1 + _DAT_112740c78);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf4fda0();
    _objc_release(lVar1);
    if (*(byte *)(puStack_48 + 3) == 1 && lVar2 == 2) {
      if ((*(byte *)(param_1 + _DAT_112740c54) & 1) == 0) {
        func_0x00010bdc4cc0(param_1);
        *(undefined1 *)(param_1 + _DAT_112740c7c) = 1;
      }
    }
    else if (((*(byte *)(puStack_48 + 3) & 1) == 0) &&
            (lVar2 = (long)_DAT_112740c7c, *(char *)(param_1 + lVar2) == '\x01')) {
      func_0x00010bdc4cc0(param_1);
      *(undefined1 *)(param_1 + lVar2) = 0;
    }
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 106173c48; end: 106173c63;  */

void FUN_106173c48(void)

{
  return;
}



/* Entry: 106173c64; end: 106173fd3; -[SCFeatureHighDefinitionModeImpl _activateHighDefinitionMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106173c64(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  
  if (*(byte *)(param_1 + _DAT_112740c54) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112740c54) = (char)param_3;
  func_0x00010c1b4280(*(undefined8 *)(param_1 + _DAT_112740c9c));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740c5c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b19a0();
  _objc_release(uVar1);
  lVar14 = param_1 + _DAT_112740c70;
  _objc_loadWeakRetained(lVar14);
  lVar2 = lVar14;
  func_0x00010c12f720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c236340();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar14);
  puVar4 = PTR_PTR_1126b9ca8;
  lVar14 = param_1 + _DAT_112740c60;
  _objc_loadWeakRetained(lVar14);
  func_0x00010bfdeec0(puVar4,param_2,lVar14);
  _objc_release(lVar14);
  if ((int)puVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112740c74);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4ec0();
    _objc_release(uVar1);
  }
  lVar14 = (long)_DAT_112740c94;
  if (param_3 == 0) {
    if (*(long *)(param_1 + lVar14) == 0) {
      return;
    }
    func_0x00010bea4ec0(param_1,param_2,1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_112740c38);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c281f80();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar14);
    *(undefined8 *)(param_1 + lVar14) = 0;
    _objc_release(uVar1);
    puVar10 = (undefined *)(param_1 + _DAT_112740c50);
    _objc_loadWeakRetained(puVar10);
    puVar4 = puVar10;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar4;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c1109c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa1a0(0);
  }
  else {
    if (*(long *)(param_1 + lVar14) != 0) {
      return;
    }
    func_0x00010bea4ec0(param_1,param_2,1);
    puVar10 = PTR_PTR_1126b00d0;
    func_0x00010c289ce0(PTR_PTR_1126b00d0,param_2,1,0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + _DAT_112740c40);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f160();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112740c38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112740c44);
    func_0x00010bf70f80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010bfe2f40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010c1276a0(uVar5,param_2,uVar7,param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + lVar14);
    *(undefined8 *)(param_1 + lVar14) = uVar8;
    _objc_release(uVar13);
    _objc_release(uVar7);
    _objc_release(uVar1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar4 = (undefined *)(param_1 + _DAT_112740c50);
    _objc_loadWeakRetained(puVar4);
    puVar11 = puVar4;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c1119c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar12;
    func_0x00010c1109c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa1a0(0);
    _objc_release(puVar9);
  }
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 106173fd4; end: 10617406b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106173fd4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(char *)(param_1 + _DAT_112740c98) == '\x01')) {
    func_0x00010c200140(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10617406c; end: 1061740b3; -[SCFeatureHighDefinitionModeImpl _didTapToolbarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10617406c(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112740c98) & 1) != 0) {
    return;
  }
  *(long *)(param_1 + _DAT_112740c90) = *(long *)(param_1 + _DAT_112740c90) + 1;
  *(undefined1 *)(param_1 + _DAT_112740c7c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc4cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__activateHighDefinitionMode__11254ecd0,
             (*(byte *)(param_1 + _DAT_112740c54) ^ 0xff) & 1);
  return;
}



/* Entry: 1061740b4; end: 1061740bb; -[SCFeatureHighDefinitionModeImpl _didChangeCaptureDevicePosition:] */

void FUN_1061740b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee2590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateToolbarItemAppearanceWith_112596308,1)
  ;
  return;
}



/* Entry: 1061740bc; end: 10617420b; -[SCFeatureHighDefinitionModeImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061740bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112740c80,0);
  _objc_storeStrong(param_1 + _DAT_112740c78,0);
  _objc_storeStrong(param_1 + _DAT_112740c74,0);
  _objc_destroyWeak(param_1 + _DAT_112740c70);
  _objc_destroyWeak(param_1 + _DAT_112740c50);
  _objc_storeStrong(param_1 + _DAT_112740c6c,0);
  _objc_destroyWeak(param_1 + _DAT_112740c60);
  _objc_storeStrong(param_1 + _DAT_112740c5c,0);
  _objc_storeStrong(param_1 + _DAT_112740c68,0);
  _objc_storeStrong(param_1 + _DAT_112740c58,0);
  _objc_destroyWeak(param_1 + _DAT_112740c8c);
  _objc_storeStrong(param_1 + _DAT_112740c9c,0);
  _objc_storeStrong(param_1 + _DAT_112740c84,0);
  _objc_storeStrong(param_1 + _DAT_112740c88,0);
  _objc_storeStrong(param_1 + _DAT_112740c4c,0);
  _objc_storeStrong(param_1 + _DAT_112740c94,0);
  _objc_storeStrong(param_1 + _DAT_112740c44,0);
  _objc_storeStrong(param_1 + _DAT_112740c40,0);
  _objc_storeStrong(param_1 + _DAT_112740c3c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740c38,0);
  return;
}



/* Entry: 10617420c; end: 106174217; -[SCFeatureSettingsService hasHDModeStateEnabled] */

void FUN_10617420c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e43118);
  return;
}



/* Entry: 106174218; end: 106174223; -[SCFeatureSettingsService hdModeStateEnabledServerParam] */

undefined ** FUN_106174218(void)

{
  return &PTR____CFConstantStringClassReference_110e43118;
}



/* Entry: 106174224; end: 106174233; -[SCFeatureSettingsService setHDModeStateEnabled:] */

void FUN_106174224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e43118,param_3);
  return;
}



/* Entry: 106174234; end: 10617423b; -[SCFeatureSettingsService HD_MODE_STATE_ENABLED_client_value:] */

undefined * FUN_106174234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 10617423c; end: 106174243; -[SCFeatureSettingsService HD_MODE_STATE_ENABLED_server_value:] */

void FUN_10617423c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106174244; end: 106174253; -[SCFeatureSettingsService hdModeStateEnabled] */

void FUN_106174244(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e43118,0);
  return;
}



/* Entry: 106174254; end: 106174373; -[SCFeatureImageSuperResolutionImpl initWithCameraHardwareResource:cameraType:cameraMLRequestHandler:systemConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106174254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126efed0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112740ca0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740ca4) = param_4;
    lVar5 = (long)_DAT_112740ca8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf29d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740cac);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740cac) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106174374; end: 1061743db; -[SCFeatureImageSuperResolutionImpl activate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106174374(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740ca0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec0a60(param_1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061743dc; end: 10617457b; -[SCFeatureImageSuperResolutionImpl beginObservingVideoCaptureEvents:imageCaptureEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061743dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = (long)_DAT_112740cb0;
  if (*(long *)(param_1 + lVar3) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar1;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,param_1);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10617457c;
    puStack_78 = &UNK_11090d050;
    _objc_copyWeak(auStack_70,auStack_68);
    uVar2 = param_4;
    func_0x00010c25ff60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_copyWeak(auStack_98,auStack_68);
    uVar2 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10617457c; end: 1061746af;  */

void FUN_10617457c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1061746b0;
  puStack_60 = &UNK_11084ebd0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1061746f8;
  puStack_88 = &UNK_11090d020;
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  _objc_copyWeak(auStack_a8,param_1 + 0x20);
  func_0x00010c0c17a0(param_2);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 1061746b0; end: 10617474f;  */

void FUN_1061746b0(long param_1,ulong param_2)

{
  func_0x00010c22df60();
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed1460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


