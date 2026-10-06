/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107dd040c; end: 107dd055b; -[SCStoryThumbnailRingView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107dd040c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126fb248;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b52f0;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    lVar4 = (long)_DAT_11276f780;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c22a660(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f784);
    *(undefined **)((long)puVar1 + (long)_DAT_11276f784) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f788);
    *(undefined **)((long)puVar1 + (long)_DAT_11276f788) = puVar2;
    _objc_release(uVar3);
    func_0x00010beda6c0(param_1,param_2,param_3,param_4,puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107dd055c; end: 107dd0593;  */

void FUN_107dd055c(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___UIImageView_1126aec28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dd0594; end: 107dd09a3; -[SCStoryThumbnailRingView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd0594(double param_1,double param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126fb248;
  lStack_70 = param_3;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  lVar7 = (long)_DAT_11276f784;
  lVar1 = *(long *)(param_3 + lVar7);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar3 == 0) goto LAB_107dd0974;
  uVar2 = *(undefined8 *)(param_3 + lVar7);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(uVar6);
  _objc_release(uVar2);
  func_0x00010bf20c00(param_3);
  _CGRectGetHeight();
  dVar8 = (double)NEON_fminnm(param_1 * 0.3009999990463257,0x403c000000000000);
  dVar11 = 15.0;
  if (15.0 <= dVar8) {
    dVar11 = dVar8;
  }
  uVar2 = *(undefined8 *)(param_3 + lVar7);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  param_2 = (dVar11 * dVar8) / param_2;
  _objc_release(uVar6);
  _objc_release(uVar2);
  lVar1 = (long)_DAT_11276f788;
  lVar3 = *(long *)(param_3 + lVar1);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
LAB_107dd0708:
    dVar8 = 0.0;
    uVar2 = 0;
    func_0x00010b816528(0,0,param_2,dVar11);
    uVar6 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1739e0(dVar8,uVar2,param_2,dVar11);
    _objc_release(uVar6);
    func_0x00010bf20c00(param_3);
    _CGRectGetMidX();
    dVar11 = dVar8;
    func_0x00010bf20c00(param_3);
    _CGRectGetMaxY();
    uVar6 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar8,dVar11 * 0.972000002861023);
  }
  else {
    uVar4 = *(ulong *)(param_3 + lVar1);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c074c20();
    _objc_release(uVar4);
    _objc_release(lVar3);
    if ((uVar5 & 1) != 0) goto LAB_107dd0708;
    dVar9 = 0.0;
    uVar2 = 0;
    dVar8 = param_2;
    func_0x00010b816528(0,0,param_2,param_2);
    uVar6 = *(undefined8 *)(param_3 + lVar1);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1739e0(dVar9,uVar2,param_2,dVar8);
    _objc_release(uVar6);
    func_0x00010bf20c00(param_3);
    _CGRectGetMidX();
    dVar11 = dVar9;
    func_0x00010bf20c00(param_3);
    _CGRectGetMaxY();
    dVar11 = dVar11 * 0.972000002861023;
    uVar6 = *(undefined8 *)(param_3 + lVar1);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a6a0(dVar9,dVar11);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_3 + lVar1);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectInset();
    func_0x00010b816528();
    uVar2 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(dVar9,dVar11,param_2,dVar8);
    _objc_release(uVar2);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    lVar3 = (long)_DAT_11276f790;
    *(double *)(param_3 + lVar3) = param_2 * 0.5;
    _objc_release(uVar6);
    uVar10 = *(undefined8 *)(param_3 + lVar3);
    uVar2 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(uVar10);
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar6 = *(undefined8 *)(param_3 + lVar7);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar2);
  }
  _objc_release(uVar6);
LAB_107dd0974:
  func_0x00010bf20c00(param_3);
  func_0x00010beda6c0(param_3);
  return;
}



/* Entry: 107dd09a4; end: 107dd09eb; -[SCStoryThumbnailRingView traitCollectionDidChange:] */

void FUN_107dd09a4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fb248;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bea6da0(param_1);
  return;
}



/* Entry: 107dd09ec; end: 107dd0b17; -[SCStoryThumbnailRingView _setRingBorderColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd09ec(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  puVar2 = PTR_PTR_1126d7430;
  uVar8 = *(ulong *)(param_1 + _DAT_11276f794);
  _objc_retain(uVar8);
  _objc_opt_class(puVar2);
  uVar3 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar2);
  uVar1 = uVar8;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar8);
  if (uVar1 != 0) {
    uVar3 = uVar8;
    func_0x00010bf1fb20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    lVar9 = (long)_DAT_11276f780;
    uVar5 = *(ulong *)(param_1 + lVar9);
    func_0x00010c22a660();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c25dbc0();
    _objc_release(uVar5);
    _objc_release(uVar3);
    if (uVar4 != uVar6) {
      func_0x00010bf1fb20(uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      uVar7 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c22a660(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20e8e0();
      _objc_release(uVar7);
      _objc_release(uVar8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dd0b18; end: 107dd0c33; -[SCStoryThumbnailRingView _updateLayerPathWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd0b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_5 + (long)_DAT_11276f798);
  uVar2 = param_5;
  _CGRectEqualToRect();
  if ((uVar2 & 1) != 0) {
    return;
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  if (*(char *)(param_5 + (long)_DAT_11276f79c) == '\x01') {
    func_0x00010bf19a00(param_1,param_2,param_3,param_4,0x402c000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf199a0(param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar4 = *(undefined8 *)(param_5 + (long)_DAT_11276f780);
  func_0x00010c22a660(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107dd0c34; end: 107dd0c6b; -[SCStoryThumbnailRingView setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd0c34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f7a0);
  *(undefined8 *)(param_1 + _DAT_11276f7a0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dd0c6c; end: 107dd0ca3; -[SCStoryThumbnailRingView setQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd0c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f7a4);
  *(undefined8 *)(param_1 + _DAT_11276f7a4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dd0ca4; end: 107dd0cb3; -[SCStoryThumbnailRingView setIsRectangularShape:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd0ca4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276f79c) = param_3;
  return;
}



/* Entry: 107dd0cb4; end: 107dd104f; -[SCStoryThumbnailRingView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd0cb4(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126d7430;
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar7 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  lVar9 = (long)_DAT_11276f794;
  uVar7 = *(ulong *)(param_2 + lVar9);
  _objc_retain(uVar7);
  _objc_retain(uVar1);
  if (uVar7 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar7);
    goto LAB_107dd0fb4;
  }
  if (uVar1 == 0) {
    _objc_release(uVar7);
  }
  else {
    uVar3 = uVar7;
    func_0x00010c071ae0();
    _objc_release(param_4);
    _objc_release(uVar7);
    if ((uVar3 & 1) != 0) goto LAB_107dd0fb4;
  }
  func_0x00010bf2dba0(*(undefined8 *)(param_2 + _DAT_11276f7a8));
  lVar8 = (long)_DAT_11276f784;
  uVar4 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar4);
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_2 + lVar9);
  *(ulong *)(param_2 + lVar9) = uVar1;
  _objc_release(uVar4);
  func_0x00010bf1fc80(uVar1);
  uVar4 = *(undefined8 *)(param_2 + _DAT_11276f780);
  func_0x00010c22a660(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd00(param_1);
  _objc_release(uVar4);
  func_0x00010bea6da0(param_2);
  uVar7 = uVar1;
  func_0x00010bfe5680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar7 == 0) {
    uVar7 = uVar1;
    func_0x00010bfe5500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar7 == 0) {
      uVar4 = *(undefined8 *)(param_2 + lVar8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_2 + _DAT_11276f788);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      goto LAB_107dd0f08;
    }
    _objc_initWeak(auStack_68,param_2);
    uVar4 = *(undefined8 *)(param_2 + _DAT_11276f7a4);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  else {
    uVar7 = uVar1;
    func_0x00010bfe5680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5940(uVar1);
    uVar3 = uVar1;
    func_0x00010bfe5aa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    FUN_107dd1050(param_1,uVar7,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bfe5440(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c234060(uVar1);
    func_0x00010c239a80(param_2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar7);
    func_0x00010c234060(uVar1);
    uVar4 = *(undefined8 *)(param_2 + _DAT_11276f788);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
LAB_107dd0f08:
    _objc_release(uVar4);
  }
  func_0x00010c1cbe20(param_2);
LAB_107dd0fb4:
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 107dd1050; end: 107dd115b;  */

void FUN_107dd1050(double param_1,double param_2,long param_3,long param_4)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = param_1;
  _objc_retain();
  _objc_retain(param_4);
  lVar1 = param_3;
  if ((param_3 == 0) || (param_1 <= 0.0 && param_4 == 0)) {
    _objc_retain(param_3);
  }
  else {
    if (param_1 <= 0.0) {
      dVar5 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
      dVar2 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
      dVar3 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
      dVar4 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
    }
    else {
      func_0x00010c23d0a0(param_3);
      func_0x00010c23d0a0(param_3);
      if (param_2 <= dVar3) {
        param_2 = dVar3;
      }
      param_1 = param_1 * param_2;
      param_2 = param_2 + param_1 * 2.0;
      func_0x00010c23d0a0(param_3);
      param_1 = param_2 - param_1;
      dVar5 = param_1 * 0.5;
      func_0x00010c23d0a0(param_3);
      dVar2 = (param_2 - param_1) * 0.5;
      dVar3 = dVar5;
      dVar4 = dVar2;
    }
    func_0x00010bfe96c0(dVar5,dVar2,dVar3,dVar4,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107dd115c; end: 107dd11db;  */

void FUN_107dd115c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe5500(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe5440(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be05cc0(lVar1,param_2,uVar2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107dd11dc; end: 107dd1303; -[SCStoryThumbnailRingView showRingBottomIcon:iconBackgroundColor:shouldShowRingForBottomIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd11dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_5 != 0) {
    func_0x00010beb8200(param_1);
  }
  lVar3 = (long)_DAT_11276f784;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar2);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107dd1304; end: 107dd135b; +[SCStoryThumbnailRingView insetWithViewModel:] */

double FUN_107dd1304(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  _objc_retain(param_4);
  func_0x00010bf1fb80(param_4);
  dVar1 = param_1;
  func_0x00010bf1fc80(param_4);
  _objc_release(param_4);
  return param_1 + dVar1 * 0.5;
}



/* Entry: 107dd135c; end: 107dd155b; -[SCStoryThumbnailRingView _downloadAndSetUpLogo:iconBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd135c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_107dd4c00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  lVar3 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar2);
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126b85a8;
  _objc_alloc(PTR_PTR_1126b85a8);
  puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c01cf00(puVar4);
  _objc_release(puVar5);
  _objc_initWeak(auStack_58,param_1);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11276f7a0);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfa7900();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11276f7a8);
  *(undefined8 *)(param_1 + _DAT_11276f7a8) = uVar7;
  _objc_release(uVar6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107dd155c; end: 107dd1743;  */

void FUN_107dd155c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107dd1744; end: 107dd1747;  */

void FUN_107dd1744(void)

{
  return;
}



/* Entry: 107dd1748; end: 107dd18ab; -[SCStoryThumbnailRingView _showBottomLogoIconViewAndRingWithImage:logoIconModel:iconBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd1748(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126d7430;
  uVar6 = *(ulong *)(param_2 + _DAT_11276f794);
  _objc_retain(uVar6);
  _objc_opt_class(puVar2);
  uVar3 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  if ((param_5 != 0) && (uVar1 != 0)) {
    uVar3 = uVar6;
    func_0x00010bfe5500();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c071ae0();
    _objc_release(uVar3);
    if ((param_4 != 0) && ((int)uVar4 != 0)) {
      func_0x00010bfe5940(uVar6);
      func_0x00010bfe5aa0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_4;
      FUN_107dd1050(param_1,param_4,uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      func_0x00010c239a80(param_2);
      func_0x00010c1cbe20(param_2);
      _objc_release(lVar5);
    }
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107dd18ac; end: 107dd1a0f; -[SCStoryThumbnailRingView _showBottomIconRingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd18ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  
  puVar1 = PTR_PTR_1126bd8e0;
  _objc_alloc(PTR_PTR_1126bd8e0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  dVar6 = 2.0;
  func_0x00010bff9340(0x4000000000000000,0,puVar1,param_2,puVar2,0,0,1);
  _objc_release(puVar2);
  func_0x00010c067620(PTR_PTR_1126c2eb0,param_2,puVar1);
  *(double *)(param_1 + _DAT_11276f78c) = dVar6 + -0.6000000238418579;
  lVar5 = (long)_DAT_11276f788;
  uVar3 = *(ulong *)(param_1 + lVar5);
  func_0x00010c06f880();
  if ((uVar3 & 1) == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar5));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar4);
    _objc_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21300(param_1,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107dd1a10; end: 107dd1a1f; -[SCStoryThumbnailRingView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dd1a10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f794);
}



/* Entry: 107dd1a20; end: 107dd1a2f; -[SCStoryThumbnailRingView imageFetchingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dd1a20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f7a0);
}



/* Entry: 107dd1a30; end: 107dd1a3f; -[SCStoryThumbnailRingView queuePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dd1a30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f7a4);
}



/* Entry: 107dd1a40; end: 107dd1a4f; -[SCStoryThumbnailRingView isRectangularShape] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107dd1a40(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276f79c);
}



/* Entry: 107dd1a50; end: 107dd1adf; -[SCStoryThumbnailRingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd1a50(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276f7a4,0);
  _objc_storeStrong(param_1 + _DAT_11276f7a0,0);
  _objc_storeStrong(param_1 + _DAT_11276f794,0);
  _objc_storeStrong(param_1 + _DAT_11276f788,0);
  _objc_storeStrong(param_1 + _DAT_11276f784,0);
  _objc_storeStrong(param_1 + _DAT_11276f7a8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276f780,0);
  return;
}



/* Entry: 107dd1ae0; end: 107dd1b3f; -[SCStoryThumbnailBlurEffect effectSettings] */

void FUN_107dd1ae0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb250;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_effectSettings_1125392d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dd1b40; end: 107dd1b4b; +[SCStoryThumbnailView announcerIdentifier] */

undefined ** FUN_107dd1b40(void)

{
  return &PTR____CFConstantStringClassReference_110ebe298;
}



/* Entry: 107dd1b4c; end: 107dd1b5b; -[SCStoryThumbnailView addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd1b4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276f7ac),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107dd1b5c; end: 107dd1b6b; -[SCStoryThumbnailView removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd1b5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276f7ac),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107dd1b6c; end: 107dd1b7b; -[SCStoryThumbnailView didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd1b6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276f7ac),
             PTR_s_didTriggerEventWithEventName_ann_1125bd098);
  return;
}



/* Entry: 107dd1b7c; end: 107dd1e53; -[SCStoryThumbnailView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107dd1b7c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fb258;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d7e28;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f7b0);
    *(undefined **)((long)puVar1 + (long)_DAT_11276f7b0) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar4 = (long)_DAT_11276f7b4;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8160();
    _objc_release(uVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar3);
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f7b8);
    *(undefined **)((long)puVar1 + (long)_DAT_11276f7b8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f7bc);
    *(undefined **)((long)puVar1 + (long)_DAT_11276f7bc) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f7c0);
    *(undefined **)((long)puVar1 + (long)_DAT_11276f7c0) = puVar2;
    _objc_release(uVar3);
    _objc_initWeak(auStack_58,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f7c4);
    *(undefined **)((long)puVar1 + (long)_DAT_11276f7c4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f7ac);
    *(undefined **)((long)puVar1 + (long)_DAT_11276f7ac) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f7c8);
    *(undefined **)((long)puVar1 + (long)_DAT_11276f7c8) = puVar2;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return puVar1;
}



/* Entry: 107dd1e54; end: 107dd1f8b;  */

void FUN_107dd1e54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b52f0;
  _objc_opt_new(PTR_PTR_1126b52f0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = puVar1;
  func_0x00010c22a660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c22a660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0x3f333333);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dd1f8c; end: 107dd1fa7;  */

void FUN_107dd1f8c(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___UIImageView_1126aec28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dd1fa8; end: 107dd1fe7;  */

void FUN_107dd1fa8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeb680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107dd1fe8; end: 107dd21e3; -[SCStoryThumbnailView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd1fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126fb258;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  lVar5 = (long)_DAT_11276f7b4;
  func_0x00010c1739e0(*(undefined8 *)(param_5 + lVar5));
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  uVar4 = param_1;
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
  func_0x00010c17a6a0(param_1,uVar4,*(undefined8 *)(param_5 + lVar5));
  lVar5 = (long)_DAT_11276f7cc;
  func_0x00010bf20c00(param_5);
  *(undefined8 *)(param_5 + lVar5) = param_3;
  ((undefined8 *)(param_5 + lVar5))[1] = param_4;
  puVar3 = PTR_PTR_1126d7e28;
  lVar5 = param_5;
  func_0x00010bec4f80(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c141300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067620(puVar3);
  _objc_release(lVar1);
  _objc_release(lVar5);
  func_0x00010bf20c00(param_5);
  _CGRectInset();
  func_0x00010b816528();
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11276f7b0));
  func_0x00010bf20c00(param_5);
  lVar5 = (long)_DAT_11276f7bc;
  uVar2 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,uVar4,param_3,param_4);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_5);
  func_0x00010bf199a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  uVar2 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  func_0x00010bf20c00(param_5);
  func_0x00010bede7e0(param_5);
  return;
}



/* Entry: 107dd21e4; end: 107dd25fb; -[SCStoryThumbnailView _updateReplayLayoutWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd21e4(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  double *pdVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar2 = param_5;
  func_0x00010bec4f80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c233fe0();
  if ((int)uVar3 != 0) {
    pdVar1 = (double *)(param_5 + (long)_DAT_11276f7d0);
    _CGRectEqualToRect(param_1,param_2,param_3,param_4,*pdVar1,pdVar1[1],pdVar1[2],pdVar1[3]);
    if ((uVar3 & 1) == 0) {
      *pdVar1 = param_1;
      pdVar1[1] = param_2;
      pdVar1[2] = param_3;
      pdVar1[3] = param_4;
      lVar7 = (long)_DAT_11276f7b8;
      uVar4 = *(undefined8 *)(param_5 + lVar7);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
      _objc_release(uVar4);
      lVar8 = (long)_DAT_11276f7d4;
      puVar5 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      if (*(char *)(param_5 + lVar8) == '\x01') {
        func_0x00010bf19a00(param_1,param_2,param_3,param_4,0x4026000000000000);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf199a0(param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___UIBezierPath_1126aec18
                           );
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_retainAutorelease();
      func_0x00010bdc1040();
      uVar6 = *(undefined8 *)(param_5 + lVar7);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010c22a660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d9820();
      _objc_release(uVar4);
      _objc_release(uVar6);
      _objc_release(puVar5);
      lVar7 = (long)_DAT_11276f7bc;
      uVar4 = *(undefined8 *)(param_5 + lVar7);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
      _objc_release(uVar4);
      puVar5 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      if (*(char *)(param_5 + lVar8) == '\x01') {
        func_0x00010bf19a00(param_1,param_2,param_3,param_4,0x4026000000000000);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf199a0(param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___UIBezierPath_1126aec18
                           );
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_retainAutorelease();
      func_0x00010bdc1040();
      uVar6 = *(undefined8 *)(param_5 + lVar7);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010c22a660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d9820();
      _objc_release(uVar4);
      _objc_release(uVar6);
      _objc_release(puVar5);
      lVar7 = (long)_DAT_11276f7c4;
      uVar4 = *(undefined8 *)(param_5 + lVar7);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      dVar12 = param_1;
      dVar9 = param_2;
      func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
      _objc_release(uVar4);
      dVar11 = 11.0;
      if ((*(byte *)(param_5 + lVar8) & 1) == 0) {
        func_0x00010bf20c00(param_5);
        _CGRectGetWidth();
        dVar9 = 0.5;
        dVar11 = dVar12 * 0.5;
      }
      uVar6 = *(undefined8 *)(param_5 + lVar7);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(dVar11);
      _objc_release(uVar4);
      _objc_release(uVar6);
      lVar7 = (long)_DAT_11276f7c0;
      uVar6 = *(undefined8 *)(param_5 + lVar7);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      _objc_release(uVar4);
      _objc_release(uVar6);
      dVar11 = dVar11 * 0.800000011920929;
      dVar9 = dVar9 * 0.800000011920929;
      dVar12 = param_1;
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      dVar12 = (dVar12 - dVar11) * 0.5;
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
      dVar10 = (param_1 - dVar9) * 0.5;
      func_0x00010b816528(dVar12,dVar10,dVar11,dVar9);
      uVar4 = *(undefined8 *)(param_5 + lVar7);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(dVar12,dVar10,dVar11,dVar9);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_5 + lVar7);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fc0();
      _objc_release(uVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107dd25fc; end: 107dd2737; -[SCStoryThumbnailView _createBlurView] */

void FUN_107dd25fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc(PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  uVar3 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  dVar4 = 0.0;
  func_0x00010c013de0(0,0,param_1,uVar3,puVar1);
  puVar2 = PTR_PTR_1126d7e30;
  func_0x00010bf8cf60(PTR_PTR_1126d7e30,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193d20(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1,param_3,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar4 * 0.5);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dd2738; end: 107dd276f; -[SCStoryThumbnailView setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd2738(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f7d8);
  *(undefined8 *)(param_1 + _DAT_11276f7d8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dd2770; end: 107dd27a7; -[SCStoryThumbnailView setBitmojiSelfieFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd2770(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f7dc);
  *(undefined8 *)(param_1 + _DAT_11276f7dc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dd27a8; end: 107dd27df; -[SCStoryThumbnailView setStoriesConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd27a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f7e0);
  *(undefined8 *)(param_1 + _DAT_11276f7e0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dd27e0; end: 107dd2817; -[SCStoryThumbnailView setBitmojiImageFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd27e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f7e4);
  *(undefined8 *)(param_1 + _DAT_11276f7e4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107dd2818; end: 107dd2827; -[SCStoryThumbnailView storyThumbnailImageLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107dd2818(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276f7e8);
}



/* Entry: 107dd2828; end: 107dd2883; -[SCStoryThumbnailView setPreferredSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd2828(double param_1,double param_2,long param_3)

{
  double *pdVar1;
  bool bVar2;
  double dVar3;
  
  pdVar1 = (double *)(param_3 + _DAT_11276f7ec);
  bVar2 = false;
  if ((param_1 == *pdVar1) && (bVar2 = false, !NAN(param_2) && !NAN(pdVar1[1]))) {
    bVar2 = param_2 == pdVar1[1];
  }
  if (!bVar2) {
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    dVar3 = 11.0;
    if (*(char *)(param_3 + _DAT_11276f7d4) == '\0') {
      dVar3 = param_1 * 0.5;
    }
    *(double *)(param_3 + _DAT_11276f7f0) = dVar3;
                    /* WARNING: Could not recover jumptable at 0x00010c1f5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + _DAT_11276f7b4),PTR_s_setSc_cornerRadius__11265b1d8);
    return;
  }
  return;
}



/* Entry: 107dd2884; end: 107dd289f; -[SCStoryThumbnailView setIsRectangularShape:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd2884(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276f7d4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1b3cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276f7b0),PTR_s_setIsRectangularShape__11264a950);
  return;
}



/* Entry: 107dd28a0; end: 107dd28ff; -[SCStoryThumbnailView setStoriesThumbnailCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd28a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11276f7f4;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bef9980(*(undefined8 *)(param_1 + lVar2),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107dd2900; end: 107dd2c6b; -[SCStoryThumbnailView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd2900(undefined4 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c21c8;
  _objc_retain(param_4);
  _objc_opt_class(puVar2);
  uVar5 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  lVar7 = (long)_DAT_11276f7f8;
  uVar5 = *(ulong *)(param_2 + lVar7);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_4);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_107dd2c20;
    }
    lVar6 = (long)_DAT_11276f7b4;
    func_0x00010c1a9f00(*(undefined8 *)(param_2 + lVar6));
    func_0x00010bf2dba0(*(undefined8 *)(param_2 + _DAT_11276f7fc));
    *(undefined1 *)(param_2 + _DAT_11276f7e8) = 0;
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(param_2 + lVar7);
    *(ulong *)(param_2 + lVar7) = uVar1;
    _objc_release(uVar4);
    uVar5 = uVar1;
    func_0x00010c141300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar5 == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_2 + _DAT_11276f7b0));
    }
    else {
      lVar7 = (long)_DAT_11276f7b0;
      func_0x00010c1aa2c0(*(undefined8 *)(param_2 + lVar7));
      func_0x00010c1e67c0(*(undefined8 *)(param_2 + lVar7));
      uVar5 = uVar1;
      func_0x00010c141300(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2226c0(*(undefined8 *)(param_2 + lVar7));
      _objc_release(uVar5);
      func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar7));
      func_0x00010bf21300(param_2);
    }
    func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar6));
    _objc_initWeak(auStack_48,param_2);
    uVar5 = uVar1;
    func_0x00010c26e120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar5 == 0) {
      uVar5 = uVar1;
      func_0x00010c26df40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010bf26940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar5);
      if (uVar3 != 0) {
        uVar5 = uVar1;
        func_0x00010c26df40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        func_0x00010bf51e00();
        uVar4 = *(undefined8 *)(param_2 + _DAT_11276f800);
        *(ulong *)(param_2 + _DAT_11276f800) = uVar3;
        _objc_release(uVar4);
        _objc_release(uVar5);
        uVar5 = uVar1;
        func_0x00010c26df40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be15000(param_2);
        _objc_release(uVar5);
      }
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + _DAT_11276f7c8);
      param_1 = 0xc2000000;
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(uVar1);
      func_0x00010c0f7fc0(uVar4);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_50);
    }
    func_0x00010c131700(uVar1);
    *(undefined4 *)(param_2 + _DAT_11276f804) = param_1;
    func_0x00010bede800(param_2);
    func_0x00010bed7700(param_2);
    func_0x00010c1cbe20(param_2);
    _objc_destroyWeak(auStack_48);
  }
LAB_107dd2c20:
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 107dd2c6c; end: 107dd2ce7;  */

void FUN_107dd2c6c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26e120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be06280(lVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107dd2ce8; end: 107dd2ec3; -[SCStoryThumbnailView _setupThumbnailImageViewWithImage:storyId:shouldSetBlurredBackground:shouldSetSolidBackgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd2ce8(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010becbbc0(param_3);
  dVar4 = param_1;
  dVar5 = param_2;
  func_0x00010c23d0a0(param_5);
  bVar1 = false;
  if ((dVar4 == param_1) && (bVar1 = false, !NAN(dVar5) && !NAN(param_2))) {
    bVar1 = dVar5 == param_2;
  }
  uVar2 = param_5;
  if (bVar1) {
    _objc_retain(param_5);
LAB_107dd2d98:
    if (*(double *)(param_3 + _DAT_11276f7f0) <= 0.0) goto LAB_107dd2dc4;
    func_0x00010b691a48();
  }
  else {
    dVar4 = *(double *)PTR__CGSizeZero_110347620;
    dVar5 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    _objc_retain(param_5);
    bVar1 = false;
    if ((dVar4 == param_1) && (bVar1 = false, !NAN(dVar5) && !NAN(param_2))) {
      bVar1 = dVar5 == param_2;
    }
    if (bVar1) goto LAB_107dd2d98;
    func_0x00010b6918b0(param_1,param_2,*(undefined8 *)(param_3 + _DAT_11276f7f0),param_5,2,0);
  }
  _objc_release(param_5);
LAB_107dd2dc4:
  puVar3 = auStack_68;
  _objc_initWeak(puVar3,param_3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(uVar2);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(puVar3);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 107dd2ec4; end: 107dd2ef7;  */

void FUN_107dd2ec4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea8600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107dd2ef8; end: 107dd2f33; -[SCStoryThumbnailView _thumbnailImageSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107dd2ef8(long param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  dVar2 = *(double *)(param_1 + _DAT_11276f7ec);
  dVar3 = ((double *)(param_1 + _DAT_11276f7ec))[1];
  bVar1 = false;
  if ((dVar2 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar1 = false, !NAN(dVar3) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar1 = dVar3 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (bVar1) {
    dVar2 = *(double *)(param_1 + _DAT_11276f7cc);
    dVar3 = ((double *)(param_1 + _DAT_11276f7cc))[1];
  }
  auVar4._8_8_ = dVar3;
  auVar4._0_8_ = dVar2;
  return auVar4;
}



/* Entry: 107dd2f34; end: 107dd2fef; -[SCStoryThumbnailView _setThumbnailImageViewWithFinalImage:storyId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd2f34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bec4f80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c0720c0(param_4,param_2,lVar2);
  _objc_release(param_4);
  _objc_release(lVar2);
  if ((int)uVar3 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11276f7b4),param_2,param_3);
    *(undefined1 *)(param_1 + _DAT_11276f7e8) = 1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107dd2ff0; end: 107dd33b3; -[SCStoryThumbnailView _downloadThumbnailWithThumbnailDataModel:storyId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd2ff0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_130 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_107dd33b4;
  uStack_80 = 0x107dd33c4;
  uStack_78 = 0;
  puStack_138 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0x1c;
  puStack_140 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x3032000000;
  pcStack_d8 = FUN_107dd33b4;
  uStack_d0 = 0x107dd33c4;
  uStack_c8 = 0;
  puStack_128 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_107dd33b4;
  uStack_100 = 0x107dd33c4;
  uStack_f8 = 0;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_107dd33cc;
  puStack_148 = &UNK_1108d4ea8;
  puStack_118 = puStack_128;
  puStack_e8 = puStack_140;
  puStack_b8 = puStack_138;
  puStack_98 = puStack_130;
  func_0x00010c0c0cc0(param_3);
  _objc_initWeak(auStack_168,param_1);
  if (puStack_98[5] == 0) {
    if (puStack_118[5] == 0) {
      func_0x00010be061c0(param_1);
      goto LAB_107dd32bc;
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276f7e4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puStack_118[5];
    func_0x00010bf21f60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11276f7c8);
    func_0x00010c11de00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = auStack_1a0;
    _objc_copyWeak(puVar5,auStack_168);
    _objc_retain(param_4);
    func_0x00010bfa5420(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_4;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276f7dc);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276f7c8);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_198 = puVar1;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_107dd3520;
    puStack_180 = &UNK_11084d598;
    puVar5 = auStack_170;
    _objc_copyWeak(puVar5,auStack_168);
    _objc_retain(param_4);
    uStack_178 = param_4;
    func_0x00010bfaa020(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = uStack_178;
  }
  _objc_release(uVar2);
  _objc_destroyWeak(puVar5);
LAB_107dd32bc:
  _objc_destroyWeak(auStack_168);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  __Block_object_dispose(&uStack_f0,8);
  _objc_release(uStack_c8);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107dd33b4; end: 107dd33cb;  */

void FUN_107dd33b4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107dd33cc; end: 107dd351f;  */

void FUN_107dd33cc(long param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5,
                  int param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = param_4;
  _objc_release(uVar1);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_5;
  if (((param_2 == 0) || (param_3 == 0)) || (param_6 == 0)) {
    puVar2 = PTR_PTR_1126b58e0;
    _objc_opt_new();
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar1 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar2;
    _objc_release(uVar1);
    func_0x00010c2bae20(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a8ea0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126b4bc0;
    _objc_alloc();
    func_0x00010c05ace0();
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar1 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar2;
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107dd3520; end: 107dd35e7;  */

void FUN_107dd3520(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010beb0800();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107dd35e8; end: 107dd364b; -[SCStoryThumbnailView _storyThumbnailViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd35e8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_1126c21c8;
  uVar4 = *(ulong *)(param_1 + _DAT_11276f7f8);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107dd364c; end: 107dd37cb; -[SCStoryThumbnailView _updateEmptyStoryState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd364c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_1;
  func_0x00010bec4f80();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  lVar4 = lVar1;
  func_0x00010c26e120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0cc0();
  _objc_release(lVar4);
  lVar4 = (long)_DAT_11276f7bc;
  uVar2 = *(ulong *)(param_1 + lVar4);
  if (*(char *)(puStack_48 + 3) == '\x01') {
    func_0x00010c06f880();
    if ((uVar2 & 1) == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar4));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066fe0(param_1);
      _objc_release(uVar3);
    }
    uVar2 = *(ulong *)(param_1 + lVar4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(lVar1);
  return;
}



/* Entry: 107dd37cc; end: 107dd37db;  */

void FUN_107dd37cc(long param_1)

{
  undefined1 in_w5;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_w5;
  return;
}



/* Entry: 107dd37dc; end: 107dd3b73; -[SCStoryThumbnailView _updateReplayState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd37dc(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  undefined4 uVar12;
  
  lVar1 = param_1;
  func_0x00010bec4f80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11276f804;
  fVar11 = *(float *)(param_1 + lVar6);
  lVar8 = lVar1;
  func_0x00010c233fe0();
  lVar7 = (long)_DAT_11276f7b8;
  uVar2 = *(ulong *)(param_1 + lVar7);
  if ((int)lVar8 == 0) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    if (fVar11 != 1.0) goto LAB_107dd3b54;
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276f7c0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar3);
    puVar4 = *(undefined **)(param_1 + _DAT_11276f7c4);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
  }
  else {
    func_0x00010c06f880();
    if ((uVar2 & 1) == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar7));
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar8 = (long)_DAT_11276f7b0;
      lVar9 = *(long *)(param_1 + lVar8);
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      if (lVar9 == 0) {
        func_0x00010befbb60(param_1,param_2,uVar3);
      }
      else {
        func_0x00010c066fe0(param_1,param_2,uVar3,*(undefined8 *)(param_1 + lVar8));
      }
      _objc_release(uVar3);
    }
    if (fVar11 == 1.0) {
      lVar8 = (long)_DAT_11276f7c0;
      uVar2 = *(ulong *)(param_1 + lVar8);
      func_0x00010c06f880();
      if ((uVar2 & 1) == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar8));
        _objc_unsafeClaimAutoreleasedReturnValue();
        lVar6 = (long)_DAT_11276f7b0;
        lVar9 = *(long *)(param_1 + lVar6);
        uVar3 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        if (lVar9 == 0) {
          func_0x00010befbb60(param_1,param_2,uVar3);
        }
        else {
          func_0x00010c066fe0(param_1,param_2,uVar3,*(undefined8 *)(param_1 + lVar6));
        }
        _objc_release(uVar3);
      }
      lVar6 = (long)_DAT_11276f7c4;
      uVar2 = *(ulong *)(param_1 + lVar6);
      func_0x00010c06f880();
      if ((uVar2 & 1) == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar6));
        _objc_unsafeClaimAutoreleasedReturnValue();
        lVar9 = (long)_DAT_11276f7b0;
        lVar10 = *(long *)(param_1 + lVar9);
        uVar3 = *(undefined8 *)(param_1 + lVar6);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        if (lVar10 == 0) {
          func_0x00010befbb60(param_1,param_2,uVar3);
        }
        else {
          func_0x00010c066fe0(param_1,param_2,uVar3,*(undefined8 *)(param_1 + lVar9));
        }
        _objc_release(uVar3);
      }
      uVar3 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      lVar9 = lVar1;
      func_0x00010c131560(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + lVar8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00();
      _objc_release(uVar3);
      _objc_release(lVar9);
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
    }
    else {
      uVar12 = *(undefined4 *)(param_1 + lVar6);
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c22a660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d4bc0(uVar12);
      _objc_release(uVar5);
    }
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c22a660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(uVar3);
    _objc_release(uVar5);
  }
  _objc_release(puVar4);
LAB_107dd3b54:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107dd3b74; end: 107dd3c1f; -[SCStoryThumbnailView didUpdateThumbnailStateChangeRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd3b74(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 == 2) {
    lVar1 = param_3;
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11276f800;
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010bf26940(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0720c0(lVar1,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      func_0x00010be15000(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107dd3c20; end: 107dd3d33; -[SCStoryThumbnailView _fetchThumbnailWithThumbnailInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd3c20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276f7f4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276f7c8);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c11da60(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107dd3d34; end: 107dd3dd3;  */

void FUN_107dd3d34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf26940(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb0800(lVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107dd3dd4; end: 107dd3fd3; -[SCStoryThumbnailView _downloadStoryThumbnailImageWithDataModel:storyId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd3dd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_107dd4c00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  lVar3 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar2);
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126b85a8;
  _objc_alloc(PTR_PTR_1126b85a8);
  puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c01cf00(puVar4);
  _objc_release(puVar5);
  _objc_initWeak(auStack_58,param_1);
  uVar7 = *(undefined8 *)(param_1 + _DAT_11276f7d8);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfa7900();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11276f7fc);
  *(undefined8 *)(param_1 + _DAT_11276f7fc) = uVar7;
  _objc_release(uVar6);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107dd3fd4; end: 107dd40d7;  */

void FUN_107dd3fd4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_58,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 107dd40d8; end: 107dd4153;  */

void FUN_107dd40d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010beb0800(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107dd4154; end: 107dd4157;  */

void FUN_107dd4154(void)

{
  return;
}



/* Entry: 107dd4158; end: 107dd4167; -[SCStoryThumbnailView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dd4158(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f7f8);
}



/* Entry: 107dd4168; end: 107dd4177; -[SCStoryThumbnailView setStoryThumbnailImageLoaded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd4168(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11276f7e8) = param_3;
  return;
}



/* Entry: 107dd4178; end: 107dd418b; -[SCStoryThumbnailView preferredSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107dd4178(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11276f7ec);
}



/* Entry: 107dd418c; end: 107dd419b; -[SCStoryThumbnailView isRectangularShape] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107dd418c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276f7d4);
}



/* Entry: 107dd419c; end: 107dd42bb; -[SCStoryThumbnailView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dd419c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276f7f8,0);
  _objc_storeStrong(param_1 + _DAT_11276f7c8,0);
  _objc_storeStrong(param_1 + _DAT_11276f7b4,0);
  _objc_storeStrong(param_1 + _DAT_11276f800,0);
  _objc_storeStrong(param_1 + _DAT_11276f7e4,0);
  _objc_storeStrong(param_1 + _DAT_11276f7f4,0);
  _objc_storeStrong(param_1 + _DAT_11276f7dc,0);
  _objc_storeStrong(param_1 + _DAT_11276f7fc,0);
  _objc_storeStrong(param_1 + _DAT_11276f7e0,0);
  _objc_storeStrong(param_1 + _DAT_11276f7d8,0);
  _objc_storeStrong(param_1 + _DAT_11276f7c4,0);
  _objc_storeStrong(param_1 + _DAT_11276f7ac,0);
  _objc_storeStrong(param_1 + _DAT_11276f7c0,0);
  _objc_storeStrong(param_1 + _DAT_11276f7b8,0);
  _objc_storeStrong(param_1 + _DAT_11276f7bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276f7b0,0);
  return;
}



/* Entry: 107dd42bc; end: 107dd443f; -[SCStoryThumbnailViewModel initWithThumbnailModel:ringViewModel:shouldShowReplayState:replayIcon:replayStateOpacity:thumbnailInfo:cameoTile:storyId:] */

undefined1 *
FUN_107dd42bc(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126fb260;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0xc) = param_1;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107dd4440; end: 107dd4463; -[SCStoryThumbnailViewModel copyWithZone:] */

undefined8 FUN_107dd4440(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107dd4464; end: 107dd4537; -[SCStoryThumbnailViewModel hash] */

undefined8 * FUN_107dd4464(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar7 = (ulong)*(uint *)(param_1 + 0xc) * 0x200000 - 1;
  uVar7 = (uVar7 ^ uVar7 >> 0x18) * 0x109;
  uVar7 = (uVar7 ^ uVar7 >> 0xe) * 0x15;
  lStack_48 = (uVar7 ^ uVar7 >> 0x1c) * 0x80000001;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar4 = &uStack_68;
  uStack_30 = uVar3;
  func_0x000100505190(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_107dd4658:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107dd4664;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))) {
      fVar10 = ABS(*(float *)((long)puVar4 + 0xc) - *(float *)((long)param_3 + 0xc));
      fVar9 = ABS(*(float *)((long)puVar4 + 0xc) + *(float *)((long)param_3 + 0xc)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar10) && (bVar1 = false, !NAN(fVar10) && !NAN(fVar9))) {
        bVar1 = fVar10 < fVar9;
      }
      if ((((bVar1) &&
           ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
          && ((lVar6 = puVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
         && ((((lVar6 = puVar4[4], lVar6 == param_3[4] || (func_0x00010c071ae0(), (int)lVar6 != 0))
              && ((lVar6 = puVar4[5], lVar6 == param_3[5] ||
                  (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
             ((lVar6 = puVar4[6], lVar6 == param_3[6] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
            )) {
        puVar8 = (undefined8 *)puVar4[7];
        if (puVar8 != (undefined8 *)param_3[7]) {
          func_0x00010c071ae0();
          goto LAB_107dd4664;
        }
        goto LAB_107dd4658;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_107dd4664:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 107dd4538; end: 107dd467f; -[SCStoryThumbnailViewModel isEqual:] */

long FUN_107dd4538(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107dd4658:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107dd4664;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      fVar6 = ABS(*(float *)(param_1 + 0xc) - *(float *)(param_3 + 0xc));
      fVar5 = ABS(*(float *)(param_1 + 0xc) + *(float *)(param_3 + 0xc)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar6) && (bVar1 = false, !NAN(fVar6) && !NAN(fVar5))) {
        bVar1 = fVar6 < fVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
           ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))))) {
        lVar4 = *(long *)(param_1 + 0x38);
        if (lVar4 != *(long *)(param_3 + 0x38)) {
          func_0x00010c071ae0();
          goto LAB_107dd4664;
        }
        goto LAB_107dd4658;
      }
    }
    lVar4 = 0;
  }
LAB_107dd4664:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107dd4680; end: 107dd4687; -[SCStoryThumbnailViewModel thumbnailModel] */

undefined8 FUN_107dd4680(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dd4688; end: 107dd468f; -[SCStoryThumbnailViewModel ringViewModel] */

undefined8 FUN_107dd4688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dd4690; end: 107dd4697; -[SCStoryThumbnailViewModel shouldShowReplayState] */

undefined1 FUN_107dd4690(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107dd4698; end: 107dd469f; -[SCStoryThumbnailViewModel replayIcon] */

undefined8 FUN_107dd4698(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107dd46a0; end: 107dd46a7; -[SCStoryThumbnailViewModel replayStateOpacity] */

undefined4 FUN_107dd46a0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 107dd46a8; end: 107dd46af; -[SCStoryThumbnailViewModel thumbnailInfo] */

undefined8 FUN_107dd46a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107dd46b0; end: 107dd46b7; -[SCStoryThumbnailViewModel cameoTile] */

undefined8 FUN_107dd46b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107dd46b8; end: 107dd46bf; -[SCStoryThumbnailViewModel storyId] */

undefined8 FUN_107dd46b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107dd46c0; end: 107dd471f; -[SCStoryThumbnailViewModel .cxx_destruct] */

void FUN_107dd46c0(long param_1)

{
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



/* Entry: 107dd4720; end: 107dd488b; -[SCStoryThumbnailRingViewModel initWithBorderWidth:borderInnerPadding:borderColor:iconImage:iconDataModel:iconBackgroundColor:iconPaddingRatio:iconTintColor:shouldShowRingForImageIcon:] */

undefined1 *
FUN_107dd4720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_1126fb268;
  uStack_80 = param_4;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
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
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_11;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 107dd488c; end: 107dd48af; -[SCStoryThumbnailRingViewModel copyWithZone:] */

undefined8 FUN_107dd488c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107dd48b0; end: 107dd49af; -[SCStoryThumbnailRingViewModel hash] */

ulong * FUN_107dd48b0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_70 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_68 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_40 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uStack_48 = uVar4;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar3;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (ulong *)param_3) {
LAB_107dd4b24:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_107dd4b30;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) && (*(char *)((long)puVar5 + 8) == param_3[8])) {
      dVar11 = ABS(*(double *)((long)puVar5 + 0x10) - *(double *)(param_3 + 0x10));
      dVar10 = ABS(*(double *)((long)puVar5 + 0x10) + *(double *)(param_3 + 0x10)) *
               2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar2 = dVar11 < dVar10;
      }
      if (bVar2) {
        dVar11 = ABS(*(double *)((long)puVar5 + 0x18) - *(double *)(param_3 + 0x18));
        dVar10 = ABS(*(double *)((long)puVar5 + 0x18) + *(double *)(param_3 + 0x18)) *
                 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar2 = dVar11 < dVar10;
        }
        if (bVar2) {
          dVar11 = ABS(*(double *)((long)puVar5 + 0x40) - *(double *)(param_3 + 0x40));
          dVar10 = ABS(*(double *)((long)puVar5 + 0x40) + *(double *)(param_3 + 0x40)) *
                   2.220446049250313e-16;
          bVar2 = true;
          if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10)))
          {
            bVar2 = dVar11 < dVar10;
          }
          if ((((bVar2) &&
               ((lVar7 = *(long *)((long)puVar5 + 0x20), lVar7 == *(long *)(param_3 + 0x20) ||
                (func_0x00010c071c60(), (int)lVar7 != 0)))) &&
              ((lVar7 = *(long *)((long)puVar5 + 0x28), lVar7 == *(long *)(param_3 + 0x28) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
             (((lVar7 = *(long *)((long)puVar5 + 0x30), lVar7 == *(long *)(param_3 + 0x30) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
              ((lVar7 = *(long *)((long)puVar5 + 0x38), lVar7 == *(long *)(param_3 + 0x38) ||
               (func_0x00010c071c60(), (int)lVar7 != 0)))))) {
            puVar9 = *(undefined1 **)((long)puVar5 + 0x48);
            if (puVar9 != *(undefined1 **)(param_3 + 0x48)) {
              func_0x00010c071c60();
              goto LAB_107dd4b30;
            }
            goto LAB_107dd4b24;
          }
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_107dd4b30:
  _objc_release(param_3);
  return (ulong *)puVar9;
}



/* Entry: 107dd49b0; end: 107dd4b4b; -[SCStoryThumbnailRingViewModel isEqual:] */

long FUN_107dd49b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_107dd4b24:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107dd4b30;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
          dVar5 = ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if ((((bVar1) &&
               ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
                (func_0x00010c071c60(), (int)lVar4 != 0)))) &&
              ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             (((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
              ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
               (func_0x00010c071c60(), (int)lVar4 != 0)))))) {
            lVar4 = *(long *)(param_1 + 0x48);
            if (lVar4 != *(long *)(param_3 + 0x48)) {
              func_0x00010c071c60();
              goto LAB_107dd4b30;
            }
            goto LAB_107dd4b24;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_107dd4b30:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107dd4b4c; end: 107dd4b53; -[SCStoryThumbnailRingViewModel borderWidth] */

undefined8 FUN_107dd4b4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dd4b54; end: 107dd4b5b; -[SCStoryThumbnailRingViewModel borderInnerPadding] */

undefined8 FUN_107dd4b54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dd4b5c; end: 107dd4b63; -[SCStoryThumbnailRingViewModel borderColor] */

undefined8 FUN_107dd4b5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107dd4b64; end: 107dd4b6b; -[SCStoryThumbnailRingViewModel iconImage] */

undefined8 FUN_107dd4b64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107dd4b6c; end: 107dd4b73; -[SCStoryThumbnailRingViewModel iconDataModel] */

undefined8 FUN_107dd4b6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107dd4b74; end: 107dd4b7b; -[SCStoryThumbnailRingViewModel iconBackgroundColor] */

undefined8 FUN_107dd4b74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107dd4b7c; end: 107dd4b83; -[SCStoryThumbnailRingViewModel iconPaddingRatio] */

undefined8 FUN_107dd4b7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107dd4b84; end: 107dd4b8b; -[SCStoryThumbnailRingViewModel iconTintColor] */

undefined8 FUN_107dd4b84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107dd4b8c; end: 107dd4b93; -[SCStoryThumbnailRingViewModel shouldShowRingForImageIcon] */

undefined1 FUN_107dd4b8c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107dd4b94; end: 107dd4be7; -[SCStoryThumbnailRingViewModel .cxx_destruct] */

void FUN_107dd4b94(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 107dd4be8; end: 107dd4bff;  */

void FUN_107dd4be8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107dd4c00; end: 107dd4f8b;  */

void FUN_107dd4c00(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_107dd4be8;
  uStack_50 = 0x107dd4bf8;
  uStack_48 = 0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_107dd4be8;
  uStack_80 = 0x107dd4bf8;
  uStack_78 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_107dd4be8;
  uStack_b0 = 0x107dd4bf8;
  uStack_a8 = 0;
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  pcStack_e8 = FUN_107dd4be8;
  uStack_e0 = 0x107dd4bf8;
  uStack_d8 = 0;
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_107dd4be8;
  uStack_110 = 0x107dd4bf8;
  uStack_108 = 0;
  puStack_148 = &uStack_150;
  uStack_150 = 0;
  uStack_140 = 0x2020000000;
  uStack_138 = 5;
  func_0x00010c0c0cc0(param_1);
  lVar1 = puStack_98[5];
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = puStack_c8[5];
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      puVar5 = PTR_PTR_1126b08a8;
      _objc_alloc(PTR_PTR_1126b08a8);
      puVar2 = PTR_PTR_1126b08b0;
      func_0x00010bf33760(PTR_PTR_1126b08b0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c003ac0(puVar5);
      goto LAB_107dd4de0;
    }
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b08a8;
    _objc_alloc(PTR_PTR_1126b08a8);
    puVar2 = PTR_PTR_1126b08b0;
    func_0x00010bf4cd80(PTR_PTR_1126b08b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003ac0(puVar5);
LAB_107dd4de0:
    _objc_release(puVar2);
  }
  lVar1 = puStack_f8[5];
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = puStack_128[5];
    func_0x00010c08fa60();
    if (lVar1 == 0) goto LAB_107dd4e24;
  }
  func_0x00010c195d00(puVar5);
LAB_107dd4e24:
  puVar2 = PTR_PTR_1126b85a0;
  puVar3 = puVar5;
  func_0x00010bf220e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  func_0x00010bf8b920(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar5);
  __Block_object_dispose(&uStack_150,8);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(uStack_108);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(uStack_d8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107dd4f8c; end: 107dd5183;  */

void FUN_107dd4f8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_6;
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


