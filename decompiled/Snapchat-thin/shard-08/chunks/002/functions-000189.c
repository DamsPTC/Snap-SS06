/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f559e4; end: 105f55b5f; -[SCMapSnapshot _retrieveFriendmojiWithSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f559e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        uVar2 = uVar5;
        FUN_105f5e760();
        if ((int)uVar2 != 0) {
          uVar3 = *(undefined8 *)(param_1 + _DAT_11273b01c);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf33560(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar3;
          func_0x00010bf8e420();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)(param_1 + _DAT_11273b04c);
          *(undefined8 *)(param_1 + _DAT_11273b04c) = uVar2;
          _objc_release(uVar4);
          _objc_release(uVar5);
          _objc_release(uVar3);
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_105f55b60;
  puStack_158 = PTR_PTR_1126ee2c0;
  lStack_160 = lVar1;
  lStack_150 = param_3;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_160,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(lVar1);
  func_0x00010c19f0e0(*(undefined8 *)(lVar1 + _DAT_11273b050));
  func_0x00010bf20c00(lVar1);
  func_0x00010c19f0e0(*(undefined8 *)(lVar1 + _DAT_11273b034));
  return;
}



/* Entry: 105f55b60; end: 105f55bcf; -[SCMapSnapshot layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f55b60(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ee2c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11273b050));
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_11273b034));
  return;
}



/* Entry: 105f55bd0; end: 105f55c67; -[SCMapSnapshot traitCollectionDidChange:] */

void FUN_105f55bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_traitCollectionDidChange__11267bf88;
  puStack_38 = PTR_PTR_1126ee2c0;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  uVar2 = param_1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd64c0();
  _objc_release(param_3);
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    func_0x00010beac500(param_1);
  }
  return;
}



/* Entry: 105f55c68; end: 105f55d2f; -[SCMapSnapshot setMapViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f55c68(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11273b054;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_105f55d18;
    }
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = uVar3;
    _objc_release(uVar2);
    func_0x00010beac500(param_1);
  }
LAB_105f55d18:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f55d30; end: 105f55d87; -[SCMapSnapshot _setupEmbeddedMapView] */

void FUN_105f55d30(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105f55d88;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105f55d88; end: 105f56193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f55d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = (long)_DAT_11273b054;
  lVar1 = *(long *)(*(long *)(param_5 + 0x20) + lVar10);
  if (lVar1 == 0) {
    return;
  }
  func_0x00010c117220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e44a0(*(undefined8 *)(*(long *)(param_5 + 0x20) + (long)_DAT_11273b028));
  _objc_release(lVar1);
  lVar1 = *(long *)(param_5 + 0x20);
  lVar8 = (long)_DAT_11273b058;
  if ((*(byte *)(lVar1 + lVar8) & 1) == 0) {
    uVar2 = *(ulong *)(lVar1 + _DAT_11273b000);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar10);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar1 = *(long *)(param_5 + 0x20);
    if ((uVar7 & 1) == 0) {
      *(undefined1 *)(lVar1 + lVar8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be966d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(param_5 + 0x20),PTR_s__retrieveFriendmojiAndSetupWithV_112583350,
                 *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar10));
      return;
    }
  }
  lVar9 = (long)_DAT_11273b00c;
  lVar8 = *(long *)(lVar1 + lVar9);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar10);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010c0fa5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar8);
  uVar4 = *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar9);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar10);
  func_0x00010c2923e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c0fa580(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar7 = *(ulong *)(param_5 + 0x20);
  uVar4 = *(undefined8 *)(uVar7 + lVar10);
  func_0x00010c2923e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb6200();
  _objc_release(uVar4);
  lVar8 = *(long *)(param_5 + 0x20);
  if ((uVar7 & 1) == 0) {
    lVar9 = (long)_DAT_11273b050;
    if (*(long *)(lVar8 + lVar9) != 0) {
      func_0x00010c12c960();
      uVar4 = *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar9);
      *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar9) = 0;
      _objc_release(uVar4);
      lVar8 = *(long *)(param_5 + 0x20);
    }
    lVar9 = (long)_DAT_11273b05c;
    lVar8 = *(long *)(lVar8 + lVar9);
    if (lVar8 == 0) {
      puVar6 = PTR_PTR_1126aeff0;
      _objc_alloc();
      func_0x00010bfffb60();
      uVar4 = *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar9);
      *(undefined **)(*(long *)(param_5 + 0x20) + lVar9) = puVar6;
      _objc_release(uVar4);
      func_0x00010c1a8560(*(undefined8 *)(*(long *)(param_5 + 0x20) + lVar9));
      func_0x00010befbb60();
      func_0x00010c14c920(*(undefined8 *)(*(long *)(param_5 + 0x20) + lVar9));
      lVar8 = *(long *)(*(long *)(param_5 + 0x20) + lVar9);
    }
    func_0x00010c24dbc0(lVar8);
    if (lVar1 != 0) {
      lVar8 = *(long *)(param_5 + 0x20);
      uVar4 = *(undefined8 *)(lVar8 + _DAT_11273b000);
      func_0x00010c2923e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar10);
      func_0x00010c2923e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0(uVar4);
      func_0x00010be4e840(lVar8);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
  }
  else {
    lVar9 = (long)_DAT_11273b034;
    if (*(long *)(lVar8 + lVar9) != 0) {
      func_0x00010c12c960();
      uVar4 = *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar9);
      *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar9) = 0;
      _objc_release(uVar4);
      lVar8 = *(long *)(param_5 + 0x20);
    }
    lVar9 = (long)_DAT_11273b050;
    if (*(long *)(lVar8 + lVar9) == 0) {
      puVar6 = PTR_PTR_1126c6558;
      _objc_alloc();
      func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x20));
      func_0x00010bfe1e40(*(undefined8 *)(*(long *)(param_5 + 0x20) + lVar10));
      func_0x00010c014600(param_1,param_2,param_3,param_4);
      uVar4 = *(undefined8 *)(*(long *)(param_5 + 0x20) + lVar9);
      *(undefined **)(*(long *)(param_5 + 0x20) + lVar9) = puVar6;
      _objc_release(uVar4);
      func_0x00010befbb60();
      func_0x00010c14c940(*(undefined8 *)(*(long *)(param_5 + 0x20) + lVar9));
      func_0x00010c08cdc0(*(undefined8 *)(param_5 + 0x20));
    }
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f56194; end: 105f5623f; -[SCMapSnapshot _shouldShowMapErrorView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105f56194(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_11273b000);
  _objc_retain(param_3);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(uVar5);
  if ((int)uVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_11273b014);
    func_0x00010c269d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf10fa0();
    _objc_release(lVar3);
    bVar1 = lVar4 != 1;
  }
  return bVar1;
}



/* Entry: 105f56240; end: 105f564df; -[SCMapSnapshot _onStaticMapDownloadedWithScreenshot:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f56240(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,int param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  func_0x00010c2558c0(*(undefined8 *)(param_3 + _DAT_11273b05c));
  lVar14 = (long)_DAT_11273b034;
  if (*(long *)(param_3 + lVar14) != 0) {
    func_0x00010c12c960();
  }
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_3 + lVar14);
  *(long *)(param_3 + lVar14) = param_5;
  _objc_release(uVar1);
  func_0x00010c0b3120(*(undefined8 *)(param_3 + _DAT_11273b028));
  lVar2 = *(long *)(param_3 + _DAT_11273b054);
  func_0x00010bfb7e80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126c6560;
    _objc_alloc();
    uVar1 = *(undefined8 *)(param_3 + _DAT_11273b020);
    func_0x00010bfb7de0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    param_2 = *(double *)(PTR__CGRectZero_110347608 + 8);
    func_0x00010c014320(*(undefined8 *)PTR__CGRectZero_110347608,param_2,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    _objc_release(uVar1);
    func_0x00010befbb60(*(undefined8 *)(param_3 + lVar14));
    func_0x00010c2226c0(puVar3);
    func_0x00010c219b60(puVar3);
    puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_3 + lVar14);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf493c0(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_3 + lVar14);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    param_1 = -10.0;
    puVar8 = puVar6;
    func_0x00010bf493c0();
    _objc_retainAutoreleasedReturnValue();
    param_6 = 2;
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  uVar1 = *(undefined8 *)(param_3 + lVar14);
  func_0x00010befbb60(param_3);
  func_0x00010c08cdc0(param_3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    _objc_retain(uVar1);
    _objc_retain(param_6);
    _objc_retain(param_8);
    lVar12 = (long)_DAT_11273b054;
    func_0x00010c0b9d60(*(undefined8 *)(param_5 + lVar12));
    if ((0.0 < param_1) && (func_0x00010c0b9d60(*(undefined8 *)(param_5 + lVar12)), 0.0 < param_2))
    {
      func_0x00010c0b9d60(*(undefined8 *)(param_5 + lVar12));
      dVar15 = param_1;
      func_0x00010c0b9d60(*(undefined8 *)(param_5 + lVar12));
      if (param_7 != 0) {
        uVar10 = *(undefined8 *)(param_5 + _DAT_11273b010);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar10;
        func_0x00010c1067a0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar7;
        func_0x00010bfcc660();
        *(char *)(param_5 + _DAT_11273b060) = (char)uVar13;
        _objc_release(uVar7);
        _objc_release(uVar10);
      }
      puVar11 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
      func_0x00010bf60720();
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_118,param_5);
      lVar14 = *(long *)(param_5 + lVar12);
      func_0x00010c2bf260();
      _objc_retainAutoreleasedReturnValue();
      if (lVar14 == 0) {
        dVar16 = 12.0;
      }
      else {
        uVar7 = *(undefined8 *)(param_5 + lVar12);
        func_0x00010c2bf260(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(uVar7);
        dVar16 = 20.0;
        if (dVar15 <= 20.0) {
          dVar16 = dVar15;
        }
      }
      _objc_release(lVar14);
      uVar13 = *(undefined8 *)(param_5 + _DAT_11273b024);
      uVar7 = *(undefined8 *)(param_5 + _DAT_11273b000);
      func_0x00010c2923e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237fe0(*(undefined8 *)(param_5 + lVar12));
      func_0x00010bfe1b40(*(undefined8 *)(param_5 + lVar12));
      func_0x00010c237e00();
      _objc_copyWeak(auStack_120,auStack_118);
      func_0x00010c252c00(0,0,param_1,param_2,dVar16,uVar13);
      _objc_release(uVar7);
      _objc_destroyWeak(auStack_120);
      _objc_destroyWeak(auStack_118);
      _objc_release(puVar11);
    }
    _objc_release(param_8);
    _objc_release(param_6);
    _objc_release(uVar1);
    return;
  }
  return;
}



/* Entry: 105f564e0; end: 105f567b7; -[SCMapSnapshot _loadStaticMapWithPersonLocation:cluster:isCurrentUser:loggingSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f564e0(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,int param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  lVar6 = (long)_DAT_11273b054;
  func_0x00010c0b9d60(*(undefined8 *)(param_3 + lVar6));
  if ((0.0 < param_1) && (func_0x00010c0b9d60(*(undefined8 *)(param_3 + lVar6)), 0.0 < param_2)) {
    func_0x00010c0b9d60(*(undefined8 *)(param_3 + lVar6));
    dVar7 = param_1;
    func_0x00010c0b9d60(*(undefined8 *)(param_3 + lVar6));
    if (param_7 != 0) {
      uVar1 = *(undefined8 *)(param_3 + _DAT_11273b010);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c1067a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfcc660();
      *(char *)(param_3 + _DAT_11273b060) = (char)uVar5;
      _objc_release(uVar4);
      _objc_release(uVar1);
    }
    puVar2 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
    func_0x00010bf60720();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_88,param_3);
    lVar3 = *(long *)(param_3 + lVar6);
    func_0x00010c2bf260();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      dVar8 = 12.0;
    }
    else {
      uVar4 = *(undefined8 *)(param_3 + lVar6);
      func_0x00010c2bf260(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar4);
      dVar8 = 20.0;
      if (dVar7 <= 20.0) {
        dVar8 = dVar7;
      }
    }
    _objc_release(lVar3);
    uVar5 = *(undefined8 *)(param_3 + _DAT_11273b024);
    uVar4 = *(undefined8 *)(param_3 + _DAT_11273b000);
    func_0x00010c2923e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237fe0(*(undefined8 *)(param_3 + lVar6));
    func_0x00010bfe1b40(*(undefined8 *)(param_3 + lVar6));
    func_0x00010c237e00();
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010c252c00(0,0,param_1,param_2,dVar8,uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_release(puVar2);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105f567b8; end: 105f567ff;  */

void FUN_105f567b8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b9e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f56800; end: 105f568f7; -[SCMapSnapshot _maybeSetupModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f56800(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273b008);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfd88e0();
  if ((int)uVar3 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_11273b00c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11273b000);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0fa5c0(lVar2,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
    if (lVar4 == 0) {
      return;
    }
    func_0x00010beac500(param_1);
    lVar4 = (long)_DAT_11273b048;
    func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar4));
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f568f8; end: 105f5697f; -[SCMapSnapshot _locationSharingPreferencesUpdated:] */

void FUN_105f568f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_40 = FUN_105f56980;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 105f56980; end: 105f56a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f56980(long param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273b054);
  if (lVar3 != 0) {
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273b000);
    func_0x00010c2923e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    _objc_release(lVar3);
    if (((int)lVar5 != 0) && (*(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273b034) != 0)) {
      bVar1 = *(byte *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273b060);
      uVar2 = (uint)*(undefined8 *)(param_1 + 0x28);
      func_0x00010bfcc660();
      if (bVar1 != uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010beac510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s__setupEmbeddedMapView_112588ae8);
        return;
      }
    }
  }
  return;
}



/* Entry: 105f56a50; end: 105f56b13; -[SCMapSnapshot onLocationPermissionStatusChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f56a50(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + _DAT_11273b054) != 0) {
    func_0x00010beac500(param_1);
  }
  if (param_3 == 1) {
    lVar1 = *(long *)(param_1 + _DAT_11273b00c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11273b000);
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0fa5c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be4c690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__listenForPersonLocationUpdatesF_112570b40);
      return;
    }
  }
  return;
}



/* Entry: 105f56b14; end: 105f56b6b; -[SCMapSnapshot _networkConnectivityStatusDidChange:] */

void FUN_105f56b14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105f56b6c;
  puStack_28 = &UNK_110848c48;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_40);
  return;
}



/* Entry: 105f56b6c; end: 105f56bd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f56b6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ba4e8;
  func_0x00010c06f020(PTR_PTR_1126ba4e8,param_2,*(undefined8 *)(param_1 + 0x28));
  lVar3 = (long)_DAT_11273b038;
  puVar2 = PTR_PTR_1126ba4e8;
  func_0x00010c06f020(PTR_PTR_1126ba4e8,param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  if (((int)puVar1 != 0) && (((ulong)puVar2 & 1) == 0)) {
    func_0x00010beac500(*(undefined8 *)(param_1 + 0x20));
  }
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3) = *(undefined8 *)(param_1 + 0x28);
  return;
}



/* Entry: 105f56bd4; end: 105f56d53; -[SCMapSnapshot .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f56bd4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273b04c,0);
  _objc_storeStrong(param_1 + _DAT_11273b028,0);
  _objc_storeStrong(param_1 + _DAT_11273b044,0);
  _objc_storeStrong(param_1 + _DAT_11273b054,0);
  _objc_storeStrong(param_1 + _DAT_11273b020,0);
  _objc_storeStrong(param_1 + _DAT_11273b01c,0);
  _objc_storeStrong(param_1 + _DAT_11273b018,0);
  _objc_storeStrong(param_1 + _DAT_11273b014,0);
  _objc_storeStrong(param_1 + _DAT_11273b010,0);
  _objc_storeStrong(param_1 + _DAT_11273b00c,0);
  _objc_storeStrong(param_1 + _DAT_11273b008,0);
  _objc_storeStrong(param_1 + _DAT_11273b004,0);
  _objc_storeStrong(param_1 + _DAT_11273b030,0);
  _objc_storeStrong(param_1 + _DAT_11273b02c,0);
  _objc_storeStrong(param_1 + _DAT_11273b040,0);
  _objc_storeStrong(param_1 + _DAT_11273b048,0);
  _objc_storeStrong(param_1 + _DAT_11273b03c,0);
  _objc_storeStrong(param_1 + _DAT_11273b024,0);
  _objc_storeStrong(param_1 + _DAT_11273b05c,0);
  _objc_storeStrong(param_1 + _DAT_11273b050,0);
  _objc_storeStrong(param_1 + _DAT_11273b034,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273b000,0);
  return;
}



/* Entry: 105f56d54; end: 105f57093; -[SCMapSnapshotViewEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f56d54(long param_1,undefined8 param_2)

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
  long lVar25;
  long lVar26;
  long lVar27;
  
  puVar1 = PTR_PTR_1126c6568;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11273b064;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_11273b068;
  lVar4 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11273b06c;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010bf8dca0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11273b070;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010c0b9ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11273b074;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c0b97a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11273b078;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c1068a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11273b07c;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_11273b080;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar19 = lVar27;
  func_0x00010c292d20();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11273b084;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_11273b088;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010bfb9940();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_11273b08c;
  _objc_loadWeakRetained();
  param_1 = param_1 + _DAT_11273b090;
  _objc_loadWeakRetained();
  lVar25 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar25;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015120(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,param_2,lVar3,lVar5,
                      lVar8,lVar10,lVar12,lVar14,lVar16,lVar18,lVar19,lVar21,lVar23,lVar24,lVar26);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(param_1);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar27);
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
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bf0ca00(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f57094; end: 105f5714f; -[SCMapSnapshotViewEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f57094(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273b094);
  _objc_destroyWeak(param_1 + _DAT_11273b090);
  _objc_destroyWeak(param_1 + _DAT_11273b088);
  _objc_destroyWeak(param_1 + _DAT_11273b084);
  _objc_destroyWeak(param_1 + _DAT_11273b068);
  _objc_destroyWeak(param_1 + _DAT_11273b080);
  _objc_destroyWeak(param_1 + _DAT_11273b07c);
  _objc_destroyWeak(param_1 + _DAT_11273b070);
  _objc_destroyWeak(param_1 + _DAT_11273b06c);
  _objc_destroyWeak(param_1 + _DAT_11273b078);
  _objc_destroyWeak(param_1 + _DAT_11273b074);
  _objc_destroyWeak(param_1 + _DAT_11273b064);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273b08c);
  return;
}



/* Entry: 105f57150; end: 105f57153; -[MGLMapView setCustomStyleLayersNeedDisplay:] */

void FUN_105f57150(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsRerender_1126509c8);
  return;
}



/* Entry: 105f57154; end: 105f571eb; -[MGLMapView forceDisplayCustomStyleLayers:] */

void FUN_105f57154(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
    uVar3 = param_1;
    func_0x00010c074c20();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsRerender_1126509c8);
      return;
    }
  }
  return;
}



/* Entry: 105f571ec; end: 105f5725f; -[SCMGLBlockBasedExternalLayerHost initWithSCMapCustomGLLayer:] */

undefined1 * FUN_105f571ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee2c8;
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



/* Entry: 105f57260; end: 105f57267; -[SCMGLBlockBasedExternalLayerHost initialize] */

void FUN_105f57260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c108f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_prepare_11261fdf0);
  return;
}



/* Entry: 105f57268; end: 105f57397; -[SCMGLBlockBasedExternalLayerHost render:] */

undefined8 FUN_105f57268(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_4);
  func_0x00010c2a5040(param_4);
  uVar3 = param_1;
  func_0x00010bfe0640(param_4);
  uVar4 = uVar3;
  func_0x00010c08b3c0(param_4);
  uVar5 = uVar4;
  func_0x00010c0b55a0(param_4);
  _CLLocationCoordinate2DMake(uVar4,uVar5);
  puVar1 = PTR_PTR_1126c6570;
  uVar6 = uVar4;
  _objc_alloc(PTR_PTR_1126c6570);
  func_0x00010c2bf0c0(param_4);
  uVar7 = uVar6;
  func_0x00010bf17900(param_4);
  uVar8 = uVar7;
  func_0x00010c0fc7c0(param_4);
  uVar9 = uVar8;
  func_0x00010bfac7a0(param_4);
  uVar2 = param_4;
  func_0x00010c12f820(param_4);
  _objc_release(param_4);
  func_0x00010c046a20(param_1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,puVar1,param_3,uVar2);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010bf89780(uVar2,param_3,puVar1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 105f57398; end: 105f5739b; -[SCMGLBlockBasedExternalLayerHost contextLost] */

void FUN_105f57398(void)

{
  return;
}



/* Entry: 105f5739c; end: 105f573a3; -[SCMGLBlockBasedExternalLayerHost deinitialize] */

void FUN_105f5739c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 105f573a4; end: 105f573ab; -[SCMGLBlockBasedExternalLayerHost getGfxApi] */

void FUN_105f573a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc60d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_getGfxApi_1125cf1d8);
  return;
}



/* Entry: 105f573ac; end: 105f573b3; -[SCMGLBlockBasedExternalLayerHost requiresUpload] */

undefined8 FUN_105f573ac(void)

{
  return 0;
}



/* Entry: 105f573b4; end: 105f573bb; -[SCMGLBlockBasedExternalLayerHost requiresRender] */

void FUN_105f573b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_requiresRender_11262b8d0);
  return;
}



/* Entry: 105f573bc; end: 105f573c7; -[SCMGLBlockBasedExternalLayerHost .cxx_destruct] */

void FUN_105f573bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f573c8; end: 105f5744f; -[SCMapboxConfigurationController initWithMapboxView:] */

undefined1 * FUN_105f573c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee2d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f57450; end: 105f57477; -[SCMapboxConfigurationController configurationChangeObservable] */

void FUN_105f57450(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f57478; end: 105f574b7; -[SCMapboxConfigurationController minimumZoomLevel] */

undefined8 FUN_105f57478(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  func_0x00010c0ce780();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105f574b8; end: 105f57503; -[SCMapboxConfigurationController setMinimumZoomLevel:] */

void FUN_105f574b8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1c8460(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x10),PTR_s_next__112614028,param_2);
  return;
}



/* Entry: 105f57504; end: 105f57543; -[SCMapboxConfigurationController maximumZoomLevel] */

undefined8 FUN_105f57504(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  func_0x00010c0c3720();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105f57544; end: 105f5758f; -[SCMapboxConfigurationController setMaximumZoomLevel:] */

void FUN_105f57544(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1c3d40(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + 0x10),PTR_s_next__112614028,param_2);
  return;
}



/* Entry: 105f57590; end: 105f575c7; -[SCMapboxConfigurationController zoomEnabled] */

long FUN_105f57590(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c083e40();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105f575c8; end: 105f57613; -[SCMapboxConfigurationController setZoomEnabled:] */

void FUN_105f575c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c227ac0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_next__112614028,param_1);
  return;
}



/* Entry: 105f57614; end: 105f5764b; -[SCMapboxConfigurationController scrollEnabled] */

long FUN_105f57614(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c07d3e0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105f5764c; end: 105f57697; -[SCMapboxConfigurationController setScrollEnabled:] */

void FUN_105f5764c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1f7b20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_next__112614028,param_1);
  return;
}



/* Entry: 105f57698; end: 105f576cf; -[SCMapboxConfigurationController rotateEnabled] */

long FUN_105f57698(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c07cc00();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105f576d0; end: 105f5771b; -[SCMapboxConfigurationController setRotateEnabled:] */

void FUN_105f576d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1ee740();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_next__112614028,param_1);
  return;
}



/* Entry: 105f5771c; end: 105f57753; -[SCMapboxConfigurationController pitchEnabled] */

long FUN_105f5771c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c07a140();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105f57754; end: 105f5779f; -[SCMapboxConfigurationController setPitchEnabled:] */

void FUN_105f57754(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1dbe80();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_next__112614028,param_1);
  return;
}



/* Entry: 105f577a0; end: 105f577cb; -[SCMapboxConfigurationController .cxx_destruct] */

void FUN_105f577a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105f577cc; end: 105f57837; -[SCMapboxCustomGLRenderController initWithMapboxView:] */

undefined1 * FUN_105f577cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ee2d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f57838; end: 105f578fb; -[SCMapboxCustomGLRenderController addCustomLayer:withIdentifier:belowLayerId:] */

void FUN_105f57838(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c6578;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c040ea0();
  _objc_release(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0b9c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef81e0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f578fc; end: 105f57963; -[SCMapboxCustomGLRenderController removeCustomLayerWithIdentifier:] */

void FUN_105f578fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0b9c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c380();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f57964; end: 105f57997; -[SCMapboxCustomGLRenderController setNeedsDisplay:] */

void FUN_105f57964(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c188c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f57998; end: 105f579cb; -[SCMapboxCustomGLRenderController forceDisplay:] */

void FUN_105f57998(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb4a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f579cc; end: 105f579d3; -[SCMapboxCustomGLRenderController .cxx_destruct] */

void FUN_105f579cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105f579d4; end: 105f57b6f; -[SCMapboxGesturesController initWithMapboxView:] */

undefined8 * FUN_105f579d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_60 = PTR_PTR_1126ee2e0;
  puVar4 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar4 + 1,param_3);
    lVar1 = param_3;
    func_0x00010c0f36c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar4[3];
    puVar4[3] = lVar1;
    _objc_release(uVar3);
    lVar1 = param_3;
    func_0x00010c0fc240();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar4[4];
    puVar4[4] = lVar1;
    _objc_release(uVar3);
    lVar1 = param_3;
    func_0x00010c141c00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar4[5];
    puVar4[5] = lVar1;
    _objc_release(uVar3);
    lVar1 = param_3;
    func_0x00010bf884c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar4[6];
    puVar4[6] = lVar1;
    _objc_release(uVar3);
    lVar1 = param_3;
    func_0x00010c27dcc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar4[7];
    puVar4[7] = lVar1;
    _objc_release(uVar3);
    lVar1 = param_3;
    func_0x00010c27dd00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar4[8];
    puVar4[8] = lVar1;
    _objc_release(uVar3);
    uStack_50 = puVar4[4];
    uStack_58 = puVar4[3];
    uStack_40 = puVar4[6];
    uStack_48 = puVar4[5];
    uStack_38 = puVar4[7];
    uStack_30 = puVar4[8];
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar4[2];
    puVar4[2] = puVar2;
    _objc_release(uVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = *(undefined8 **)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 0x10) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return puVar4;
}



/* Entry: 105f57b70; end: 105f57ba7; -[SCMapboxGesturesController addAdditionalRecognizableGestures:] */

void FUN_105f57b70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105f57ba8; end: 105f57bef; -[SCMapboxGesturesController addAutomaticTiltWithZoomCalculationBlock:] */

void FUN_105f57ba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c214ba0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f57bf0; end: 105f57d37; -[SCMapboxGesturesController currentlyRecognizingGestures] */

void FUN_105f57bf0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar4 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        lVar5 = *(long *)(lStack_118 + lVar7 * 8);
        lVar3 = lVar5;
        func_0x00010c252440();
        if (((lVar3 == 1) || (lVar3 = lVar5, func_0x00010c252440(), lVar3 == 3)) ||
           (lVar3 = lVar5, func_0x00010c252440(), lVar3 == 3)) {
          func_0x00010befa120(puVar1,param_2,lVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  lVar4 = lVar4 + 8;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c0dd1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105f57d38; end: 105f57d63; -[SCMapboxGesturesController notifyGestureDidBegin] */

void FUN_105f57d38(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0dd1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f57d64; end: 105f57d8f; -[SCMapboxGesturesController notifyGestureIsChanging] */

void FUN_105f57d64(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf29a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f57d90; end: 105f57dbf; -[SCMapboxGesturesController notifyGestureDidEnd] */

void FUN_105f57d90(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0dd1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f57dc0; end: 105f57dc7; -[SCMapboxGesturesController panGestureRecognizer] */

undefined8 FUN_105f57dc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105f57dc8; end: 105f57df7; -[SCMapboxGesturesController setPanGestureRecognizer:] */

void FUN_105f57dc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f57df8; end: 105f57dff; -[SCMapboxGesturesController pinchGestureRecognizer] */

undefined8 FUN_105f57df8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105f57e00; end: 105f57e2f; -[SCMapboxGesturesController setPinchGestureRecognizer:] */

void FUN_105f57e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f57e30; end: 105f57e37; -[SCMapboxGesturesController rotationGestureRecognizer] */

undefined8 FUN_105f57e30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105f57e38; end: 105f57e67; -[SCMapboxGesturesController setRotationGestureRecognizer:] */

void FUN_105f57e38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f57e68; end: 105f57e6f; -[SCMapboxGesturesController doubleTapGestureRecognizer] */

undefined8 FUN_105f57e68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105f57e70; end: 105f57e9f; -[SCMapboxGesturesController setDoubleTapGestureRecognizer:] */

void FUN_105f57e70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f57ea0; end: 105f57ea7; -[SCMapboxGesturesController tiltGestureRecognizer] */

undefined8 FUN_105f57ea0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105f57ea8; end: 105f57ed7; -[SCMapboxGesturesController setTiltGestureRecognizer:] */

void FUN_105f57ea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f57ed8; end: 105f57edf; -[SCMapboxGesturesController twoFingerTapGestureRecognizer] */

undefined8 FUN_105f57ed8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105f57ee0; end: 105f57f0f; -[SCMapboxGesturesController setTwoFingerTapGestureRecognizer:] */

void FUN_105f57ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f57f10; end: 105f57f83; -[SCMapboxGesturesController .cxx_destruct] */

void FUN_105f57f10(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105f57f84; end: 105f5807f; -[SCMapboxLoadingStateController initWithMapboxView:mapboxListenerAnnouncer:] */

undefined1 *
FUN_105f57f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ee2e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x00010bef9980(param_4);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f58080; end: 105f580a7; -[SCMapboxLoadingStateController loadingStateObservable] */

void FUN_105f58080(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f580a8; end: 105f580cf; -[SCMapboxLoadingStateController mapReadyObservable] */

void FUN_105f580a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f580d0; end: 105f580f7; -[SCMapboxLoadingStateController mapFriendLoadObservable] */

void FUN_105f580d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f580f8; end: 105f5811f; -[SCMapboxLoadingStateController styleLoadingObservable] */

void FUN_105f580f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f58120; end: 105f58123; -[SCMapboxLoadingStateController _appendPerformanceTestAccessibilityToken:] */

void FUN_105f58120(void)

{
  return;
}



/* Entry: 105f58124; end: 105f58167; -[SCMapboxLoadingStateController mapViewWillStartLoadingMap:] */

void FUN_105f58124(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126c6580;
  func_0x00010c0b8ee0(PTR_PTR_1126c6580);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f58168; end: 105f581c7; -[SCMapboxLoadingStateController mapViewDidFinishLoadingMap:] */

void FUN_105f58168(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126c6580;
  func_0x00010c0b8e80(PTR_PTR_1126c6580);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdcd3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__appendPerformanceTestAccessibil_112550e88,
             &PTR____CFConstantStringClassReference_110e33578);
  return;
}



/* Entry: 105f581c8; end: 105f5820f; -[SCMapboxLoadingStateController mapViewDidFailLoadingMap:withError:] */

void FUN_105f581c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126c6580;
  func_0x00010c0b8e60(PTR_PTR_1126c6580,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f58210; end: 105f58213; -[SCMapboxLoadingStateController mapViewDidFinishRenderingFrame:fullyRendered:] */

void FUN_105f58210(void)

{
  return;
}



/* Entry: 105f58214; end: 105f582e3; -[SCMapboxLoadingStateController mapView:didFinishLoadingStyleWithName:] */

void FUN_105f58214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105f582e4;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f582e4; end: 105f5841f;  */

void FUN_105f582e4(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    ppuVar1 = (undefined **)(param_1 + 8);
    _objc_loadWeakRetained();
    ppuVar2 = ppuVar1;
    func_0x00010c0b9c00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bfcae40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    ppuVar2 = ppuVar3;
    func_0x00010c140540();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x00010bfccc60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar1 = ppuVar4;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar1;
    func_0x00010c08fa60();
    ppuVar4 = ppuVar1;
    if ((undefined **)0x6 < ppuVar2) {
      func_0x00010c260c20(ppuVar1,param_2,6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
    }
    puVar5 = PTR_PTR_1126c6588;
    _objc_alloc(PTR_PTR_1126c6588);
    func_0x00010c04ede0();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f58420; end: 105f5844f; -[SCMapboxLoadingStateController mapViewDidReportMapReady:] */

void FUN_105f58420(long param_1)

{
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdcd3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__appendPerformanceTestAccessibil_112550e88,
             &PTR____CFConstantStringClassReference_110e33598);
  return;
}



/* Entry: 105f58450; end: 105f584b3; -[SCMapboxLoadingStateController mapView:didReportMapFriendLoadWithVisibleFriends:] */

void FUN_105f58450(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdcd3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__appendPerformanceTestAccessibil_112550e88,
             &PTR____CFConstantStringClassReference_110e335b8);
  return;
}



/* Entry: 105f584b4; end: 105f58503; -[SCMapboxLoadingStateController .cxx_destruct] */

void FUN_105f584b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105f58504; end: 105f58657; -[SCMapboxViewportController initWithMapboxView:mapboxListenerAnnouncer:gestureController:configProvider:viewportMetadataProvider:] */

undefined1 *
FUN_105f58504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ee2f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    uVar5 = param_3;
    func_0x00010c0b9c00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bfc3540();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar5);
    func_0x00010bef9980(param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_5);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c6590;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x188);
    *(undefined **)((long)puVar1 + 0x188) = puVar3;
    _objc_release(uVar5);
    _objc_retain(param_7);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar5);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f58658; end: 105f5865f; -[SCMapboxViewportController viewportMetadataObservable] */

void FUN_105f58658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29f610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_viewportMetadataObservable_1126857a8);
  return;
}



/* Entry: 105f58660; end: 105f586ef; -[SCMapboxViewportController upperHalfEdgeInsets] */

undefined8 FUN_105f58660(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c148fc0();
  _objc_release(lVar1);
  lVar1 = param_2 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf20c00();
  _objc_release(lVar1);
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  func_0x00010c148fc0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105f586f0; end: 105f5874f; -[SCMapboxViewportController contentInset] */

undefined8 FUN_105f586f0(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  func_0x00010bf4c7c0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105f58750; end: 105f587ab; -[SCMapboxViewportController setContentInset:] */

void FUN_105f58750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  param_5 = param_5 + 8;
  _objc_loadWeakRetained(param_5);
  func_0x00010c181f80(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105f587ac; end: 105f587d3; -[SCMapboxViewportController viewportChangeObservable] */

void FUN_105f587ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f587d4; end: 105f5881b; -[SCMapboxViewportController centerCoordinate] */

undefined1  [16] FUN_105f587d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  param_3 = param_3 + 8;
  _objc_loadWeakRetained(param_3);
  func_0x00010bf34640();
  _objc_release(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 105f5881c; end: 105f58823; -[SCMapboxViewportController setCenterCoordinate:] */

void FUN_105f5881c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17a6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCenterCoordinate_animated__11263c3d8,0);
  return;
}



/* Entry: 105f58824; end: 105f58877; -[SCMapboxViewportController setCenterCoordinate:animated:] */

void FUN_105f58824(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bde10e0();
  param_3 = param_3 + 8;
  _objc_loadWeakRetained(param_3);
  func_0x00010c17a6e0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f58878; end: 105f58907; -[SCMapboxViewportController setCenterCoordinate:zoomLevel:animated:completionHandler:] */

void FUN_105f58878(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  _objc_retain(param_7);
  lVar1 = param_4 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf7f0e0(param_4);
  func_0x00010c17a780(param_1,param_2,param_3,uVar2,lVar1,param_5,param_6,param_7);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f58908; end: 105f5896f; -[SCMapboxViewportController getTileCover:] */

void FUN_105f58908(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0b9c00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfcb320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105f58970; end: 105f589af; -[SCMapboxViewportController zoomLevel] */

undefined8 FUN_105f58970(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  func_0x00010c2bf200();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105f589b0; end: 105f589b7; -[SCMapboxViewportController setZoomLevel:] */

void FUN_105f589b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c227c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setZoomLevel_animated__112667928,0);
  return;
}



/* Entry: 105f589b8; end: 105f58a03; -[SCMapboxViewportController setZoomLevel:animated:] */

void FUN_105f589b8(undefined8 param_1,long param_2)

{
  func_0x00010bde10e0();
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  func_0x00010c227c00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


