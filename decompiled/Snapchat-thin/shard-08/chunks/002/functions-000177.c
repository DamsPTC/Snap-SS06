/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f1cbf8; end: 105f1cc07; -[SCSimplePitchConsolidator customPitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f1cbf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273a70c);
}



/* Entry: 105f1cc08; end: 105f1cc17; -[SCSimplePitchConsolidator customZoom] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f1cc08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273a710);
}



/* Entry: 105f1cc18; end: 105f1cc27; -[SCSimplePitchConsolidator startZoom] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f1cc18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273a6fc);
}



/* Entry: 105f1cc28; end: 105f1cc37; -[SCSimplePitchConsolidator endZoom] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f1cc28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273a700);
}



/* Entry: 105f1cc38; end: 105f1cc47; -[SCSimplePitchConsolidator startPitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f1cc38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273a704);
}



/* Entry: 105f1cc48; end: 105f1cc57; -[SCSimplePitchConsolidator setStartPitch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1cc48(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11273a704) = param_1;
  return;
}



/* Entry: 105f1cc58; end: 105f1cc67; -[SCSimplePitchConsolidator endPitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f1cc58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273a708);
}



/* Entry: 105f1cc68; end: 105f1cc77; -[SCSimplePitchConsolidator setEndPitch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1cc68(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11273a708) = param_1;
  return;
}



/* Entry: 105f1cc78; end: 105f1cef3; -[SCMultiSegmentPitchConsolidator initWithPitches:atZoomLevels:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105f1cc78(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bf529e0();
  uVar2 = param_5;
  func_0x00010c0dfd40(param_5,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  lVar7 = (long)_DAT_11273a714;
  *(undefined8 *)(param_2 + lVar7) = param_1;
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c0dfd40(param_5,param_3,uVar1 - 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  *(undefined8 *)(param_2 + _DAT_11273a718) = param_1;
  _objc_release(uVar2);
  uVar6 = param_4;
  func_0x00010c0dfd40(param_4,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  lVar8 = (long)_DAT_11273a71c;
  *(undefined8 *)(param_2 + lVar8) = param_1;
  _objc_release(uVar6);
  uVar6 = param_4;
  func_0x00010c0dfd40(param_4,param_3,uVar1 - 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  *(undefined8 *)(param_2 + _DAT_11273a720) = param_1;
  _objc_release(uVar6);
  *(undefined8 *)(param_2 + _DAT_11273a724) = *(undefined8 *)(param_2 + lVar8);
  dVar9 = *(double *)(param_2 + lVar7);
  *(double *)(param_2 + _DAT_11273a728) = dVar9;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if (1 < uVar1) {
    uVar6 = 1;
    do {
      uVar4 = param_4;
      func_0x00010c0dfd40(param_4,param_3,uVar6 - 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar10 = dVar9;
      _objc_release(uVar4);
      uVar2 = param_5;
      func_0x00010c0dfd40(param_5,param_3,uVar6 - 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar11 = dVar10;
      _objc_release(uVar2);
      uVar4 = param_4;
      func_0x00010c0dfd40(param_4,param_3,uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar12 = dVar11;
      _objc_release(uVar4);
      uVar2 = param_5;
      func_0x00010c0dfd40(param_5,param_3,uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar13 = dVar12;
      _objc_release(uVar2);
      if (dVar9 < dVar11) {
        puVar5 = PTR_PTR_1126c5f48;
        _objc_alloc(PTR_PTR_1126c5f48);
        func_0x00010bff5da0(dVar10,dVar9,dVar12,dVar11);
        func_0x00010befa120(puVar3,param_3,puVar5);
        _objc_release(puVar5);
        dVar13 = dVar10;
      }
      uVar6 = uVar6 + 1;
      dVar9 = dVar13;
    } while (uVar1 != uVar6);
  }
  func_0x00010c002340(param_2,param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  return param_2;
}



/* Entry: 105f1cef4; end: 105f1cf77; -[SCMultiSegmentPitchConsolidator initWithConsolidators:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105f1cef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ee068;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initInternal_1125d9558);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273a72c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f1cf78; end: 105f1d1ff; -[SCMultiSegmentPitchConsolidator setCustomPitch:customZoom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1cf78(double param_1,double param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  
  lVar9 = (long)_DAT_11273a72c;
  lVar2 = *(long *)(param_3 + lVar9);
  dVar10 = param_1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar6 = 0;
    lVar8 = 0;
    lVar7 = 0;
    lVar2 = 0;
    do {
      _objc_release(lVar7);
      _objc_release(lVar8);
      if (uVar6 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(param_3 + lVar9);
        func_0x00010c0dfd40(lVar7,param_4,uVar6 - 1);
        _objc_retainAutoreleasedReturnValue();
      }
      lVar8 = *(long *)(param_3 + lVar9);
      func_0x00010bf529e0();
      if (uVar6 < lVar8 - 1U) {
        lVar8 = *(long *)(param_3 + lVar9);
        func_0x00010c0dfd40(lVar8,param_4,uVar6 + 1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar8 = 0;
      }
      lVar3 = *(long *)(param_3 + lVar9);
      func_0x00010c0dfd40(lVar3,param_4,uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010c251d60(lVar3);
      if ((param_2 < dVar10) || (func_0x00010bf95ce0(lVar3), dVar10 < param_2)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      func_0x00010c24fe00(lVar3);
      if ((dVar10 <= param_1) && (func_0x00010bf95060(lVar3), param_1 <= dVar10)) {
        bVar1 = true;
      }
      lVar2 = lVar3;
      if (lVar8 != 0) {
        lVar2 = lVar8;
      }
      func_0x00010bf95060(lVar2);
      if (dVar10 <= param_1) {
        bVar1 = true;
      }
      if ((lVar7 != 0) && (func_0x00010bf95ce0(lVar7), dVar10 <= param_2)) {
        bVar1 = true;
      }
      if ((lVar8 == 0) || (func_0x00010c251d60(lVar8), dVar10 < param_2)) {
        if (bVar1) goto LAB_105f1d108;
LAB_105f1d11c:
        func_0x00010c138800(lVar3);
      }
      else {
        if (lVar7 != 0) {
          func_0x00010bf95ce0(lVar7);
          if (dVar10 <= param_2) {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_105f1d11c;
        }
LAB_105f1d108:
        dVar10 = param_1;
        func_0x00010c188680(param_1,param_2,lVar3);
      }
      uVar6 = uVar6 + 1;
      uVar4 = *(ulong *)(param_3 + lVar9);
      func_0x00010bf529e0();
      lVar2 = lVar3;
    } while (uVar6 < uVar4);
    _objc_release(lVar3);
    _objc_release(lVar8);
    _objc_release(lVar7);
  }
  if (param_2 <= *(double *)(param_3 + _DAT_11273a714)) {
    uVar5 = *(undefined8 *)(param_3 + lVar9);
    func_0x00010bfb1920(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c188680(param_1,param_2);
    _objc_release(uVar5);
  }
  if (*(double *)(param_3 + _DAT_11273a718) <= param_2) {
    uVar5 = *(undefined8 *)(param_3 + lVar9);
    func_0x00010c089820(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c188680(param_1,param_2);
    _objc_release(uVar5);
  }
  *(double *)(param_3 + _DAT_11273a724) = param_1;
  *(double *)(param_3 + _DAT_11273a728) = param_2;
  return;
}



/* Entry: 105f1d200; end: 105f1d34f; -[SCMultiSegmentPitchConsolidator consolidatedPitchForZoomLevel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105f1d200(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar8 = 0.0;
  lVar6 = (long)_DAT_11273a72c;
  lVar4 = *(long *)(param_2 + lVar6);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      lVar5 = *(long *)(lVar7 * 8);
      func_0x00010bf95ce0(lVar5);
      if (param_1 <= dVar8) goto LAB_105f1d2f8;
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  lVar4 = *(long *)(param_2 + lVar6);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
LAB_105f1d2f8:
  func_0x00010bf49200(param_1,lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(lVar4 + _DAT_11273a72c);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      func_0x00010c138800(*(undefined8 *)(lVar7 * 8));
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release();
  *(undefined8 *)(lVar4 + _DAT_11273a728) = *(undefined8 *)(lVar4 + _DAT_11273a714);
  dVar8 = *(double *)(lVar4 + _DAT_11273a71c);
  *(double *)(lVar4 + _DAT_11273a724) = dVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return dVar8;
  }
  ___stack_chk_fail();
  *(double *)(lVar3 + _DAT_11273a728) = dVar8;
  dVar9 = *(double *)(lVar3 + _DAT_11273a724);
                    /* WARNING: Could not recover jumptable at 0x00010c188690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(dVar9,dVar8);
  return dVar9;
}



/* Entry: 105f1d350; end: 105f1d473; -[SCMultiSegmentPitchConsolidator resetCustomZoomAndPitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1d350(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + _DAT_11273a72c);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010c138800(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release();
  *(undefined8 *)(param_1 + _DAT_11273a728) = *(undefined8 *)(param_1 + _DAT_11273a714);
  uVar6 = *(undefined8 *)(param_1 + _DAT_11273a71c);
  *(undefined8 *)(param_1 + _DAT_11273a724) = uVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  *(undefined8 *)(lVar4 + _DAT_11273a728) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010c188690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(lVar4 + _DAT_11273a724),uVar6);
  return;
}



/* Entry: 105f1d474; end: 105f1d493; -[SCMultiSegmentPitchConsolidator setCustomZoom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1d474(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11273a728) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c188690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + _DAT_11273a724),param_1,param_2,
             PTR_s_setCustomPitch_customZoom__11263fbc0);
  return;
}



/* Entry: 105f1d494; end: 105f1d4af; -[SCMultiSegmentPitchConsolidator setCustomPitch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1d494(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11273a724) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010c188690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*(undefined8 *)(param_2 + _DAT_11273a728),param_2,
             PTR_s_setCustomPitch_customZoom__11263fbc0);
  return;
}



/* Entry: 105f1d4b0; end: 105f1d4bf; -[SCMultiSegmentPitchConsolidator customPitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f1d4b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273a724);
}



/* Entry: 105f1d4c0; end: 105f1d4cf; -[SCMultiSegmentPitchConsolidator customZoom] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f1d4c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273a728);
}



/* Entry: 105f1d4d0; end: 105f1d4df; -[SCMultiSegmentPitchConsolidator startZoom] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f1d4d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273a714);
}



/* Entry: 105f1d4e0; end: 105f1d4ef; -[SCMultiSegmentPitchConsolidator endZoom] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f1d4e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273a718);
}



/* Entry: 105f1d4f0; end: 105f1d4ff; -[SCMultiSegmentPitchConsolidator startPitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f1d4f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273a71c);
}



/* Entry: 105f1d500; end: 105f1d50f; -[SCMultiSegmentPitchConsolidator setStartPitch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1d500(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11273a71c) = param_1;
  return;
}



/* Entry: 105f1d510; end: 105f1d51f; -[SCMultiSegmentPitchConsolidator endPitch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f1d510(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273a720);
}



/* Entry: 105f1d520; end: 105f1d52f; -[SCMultiSegmentPitchConsolidator setEndPitch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1d520(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11273a720) = param_1;
  return;
}



/* Entry: 105f1d530; end: 105f1d543; -[SCMultiSegmentPitchConsolidator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1d530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273a72c,0);
  return;
}



/* Entry: 105f1d544; end: 105f1d577; -[SCMapAutomaticPitchConsolidator initInternal] */

void FUN_105f1d544(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ee070;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105f1d578; end: 105f1d5e3; +[SCMapAutomaticPitchConsolidator multiPitchConsolidatorWithPitches:atZoomLevels:] */

void FUN_105f1d578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c5f50;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0360e0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105f1d5e4; end: 105f1d633; +[SCMapAutomaticPitchConsolidator consolidatorWithAutomaticPitchStartZoom:startPitch:endZoom:endPitch:] */

void FUN_105f1d5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_alloc(PTR_PTR_1126c5f48);
  func_0x00010bff5da0(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f1d634; end: 105f1d63b; -[SCMapAutomaticPitchConsolidator consolidatedPitchForZoomLevel:] */

undefined8 FUN_105f1d634(void)

{
  return 0;
}



/* Entry: 105f1d63c; end: 105f1d66f; -[SCMapAutomaticPitchConsolidator setCustomPitch:customZoom:] */

void FUN_105f1d63c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c188660();
                    /* WARNING: Could not recover jumptable at 0x00010c188fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,param_3,PTR_s_setCustomZoom__11263fe10);
  return;
}



/* Entry: 105f1d670; end: 105f1d677; -[SCMapAutomaticPitchConsolidator setCustomZoom:] */

void FUN_105f1d670(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 105f1d678; end: 105f1d67f; -[SCMapAutomaticPitchConsolidator setCustomPitch:] */

void FUN_105f1d678(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 105f1d680; end: 105f1d683; -[SCMapAutomaticPitchConsolidator resetCustomZoomAndPitch] */

void FUN_105f1d680(void)

{
  return;
}



/* Entry: 105f1d684; end: 105f1d68b; -[SCMapAutomaticPitchConsolidator startZoom] */

undefined8 FUN_105f1d684(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105f1d68c; end: 105f1d693; -[SCMapAutomaticPitchConsolidator endZoom] */

undefined8 FUN_105f1d68c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105f1d694; end: 105f1d69b; -[SCMapAutomaticPitchConsolidator customZoom] */

undefined8 FUN_105f1d694(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105f1d69c; end: 105f1d6a3; -[SCMapAutomaticPitchConsolidator customPitch] */

undefined8 FUN_105f1d69c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105f1d6a4; end: 105f1d6ab; -[SCMapAutomaticPitchConsolidator startPitch] */

undefined8 FUN_105f1d6a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105f1d6ac; end: 105f1d6b3; -[SCMapAutomaticPitchConsolidator setStartPitch:] */

void FUN_105f1d6ac(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 105f1d6b4; end: 105f1d6bb; -[SCMapAutomaticPitchConsolidator endPitch] */

undefined8 FUN_105f1d6b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105f1d6bc; end: 105f1d6c3; -[SCMapAutomaticPitchConsolidator setEndPitch:] */

void FUN_105f1d6bc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 105f1d6c4; end: 105f1d72b; -[SCDoubleTapZoomGestureRecognizer initWithTarget:action:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1d6c4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126ee078;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithTarget_action__1125f1c48);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273a730) = 0x3ff0000000000000;
    uVar3 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    uVar2 = *(undefined8 *)PTR__CGPointZero_110347540;
    ((undefined8 *)((long)puVar1 + (long)_DAT_11273a734))[1] = uVar3;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273a734) = uVar2;
    ((undefined8 *)((long)puVar1 + (long)_DAT_11273a738))[1] = uVar3;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273a738) = uVar2;
  }
  return;
}



/* Entry: 105f1d72c; end: 105f1d787; -[SCDoubleTapZoomGestureRecognizer dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1d72c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar2 = (long)_DAT_11273a73c;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126ee078;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105f1d788; end: 105f1d7d3; -[SCDoubleTapZoomGestureRecognizer _setZoomInternal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1d788(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x00010c2a5c20(param_2,param_3,&PTR____CFConstantStringClassReference_110e31858);
  *(undefined8 *)(param_2 + _DAT_11273a730) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bf73810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_didChangeValueForKey__1125ba7a8,
             &PTR____CFConstantStringClassReference_110e31858);
  return;
}



/* Entry: 105f1d7d4; end: 105f1d8af; -[SCDoubleTapZoomGestureRecognizer setZoom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1d7d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double in_d3;
  
  func_0x00010beaa380();
  dVar3 = *(double *)(param_1 + _DAT_11273a730);
  dVar4 = -1.0;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  in_d3 = (dVar3 + -1.0) * in_d3;
  _objc_release(puVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_1,param_2,lVar2);
  *(double *)(param_1 + _DAT_11273a734 + 8) = in_d3 + dVar4;
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_1,param_2,lVar2);
  *(double *)(param_1 + _DAT_11273a738 + 8) = in_d3 + dVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105f1d8b0; end: 105f1d8ef; -[SCDoubleTapZoomGestureRecognizer _onDoubleTapFailure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1d8b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273a73c;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setState__112660218,5);
  return;
}



/* Entry: 105f1d8f0; end: 105f1d957; -[SCDoubleTapZoomGestureRecognizer supportPreInitializationTouch:] */

void FUN_105f1d8f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIEvent_1126c5f58;
  _objc_opt_new(PTR__OBJC_CLASS___UIEvent_1126c5f58);
  func_0x00010c277560(param_1,param_2,puVar1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f1d958; end: 105f1d9a3; -[SCDoubleTapZoomGestureRecognizer reset] */

void FUN_105f1d958(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ee078;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_reset_11262ba18);
  func_0x00010c227aa0(0x3ff0000000000000,param_1);
  return;
}



/* Entry: 105f1d9a4; end: 105f1dbcb; -[SCDoubleTapZoomGestureRecognizer touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1d9a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ee078;
  lStack_50 = param_3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_touchesBegan_withEvent__11267b780,param_5,param_6);
  lVar7 = param_3;
  func_0x00010c252440();
  if (lVar7 == 2) goto LAB_105f1dbac;
  uVar2 = param_5;
  func_0x00010bf529e0();
  if (2 < uVar2) {
    func_0x00010c209fc0(param_3);
    goto LAB_105f1dbac;
  }
  uVar2 = param_5;
  func_0x00010bf04a20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c268ec0();
  if (uVar3 == 1) {
    lVar5 = (long)_DAT_11273a734;
    lVar7 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(uVar2);
    *(undefined8 *)(param_3 + lVar5) = param_1;
    ((undefined8 *)(param_3 + lVar5))[1] = param_2;
    _objc_release(lVar7);
    puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c270940(0x3fd3333333333333);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_3 + _DAT_11273a73c);
    *(undefined **)(param_3 + _DAT_11273a73c) = puVar4;
    _objc_release(uVar6);
    puVar4 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc020();
LAB_105f1daf4:
    _objc_release(puVar4);
  }
  else {
    uVar3 = uVar2;
    func_0x00010c268ec0();
    if (uVar3 == 2) {
      dVar8 = *(double *)(param_3 + _DAT_11273a734);
      dVar9 = ((double *)(param_3 + _DAT_11273a734))[1];
      bVar1 = false;
      if ((dVar8 == *(double *)PTR__CGPointZero_110347540) &&
         (bVar1 = false, !NAN(dVar9) && !NAN(*(double *)(PTR__CGPointZero_110347540 + 8)))) {
        bVar1 = dVar9 == *(double *)(PTR__CGPointZero_110347540 + 8);
      }
      if (!bVar1) {
        lVar5 = (long)_DAT_11273a738;
        lVar7 = param_3;
        func_0x00010c29bf00(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ef00(uVar2);
        *(double *)(param_3 + lVar5) = dVar8;
        ((double *)(param_3 + lVar5))[1] = dVar9;
        _objc_release(lVar7);
        lVar7 = (long)_DAT_11273a73c;
        func_0x00010c069d00(*(undefined8 *)(param_3 + lVar7));
        puVar4 = *(undefined **)(param_3 + lVar7);
        *(undefined8 *)(param_3 + lVar7) = 0;
        goto LAB_105f1daf4;
      }
LAB_105f1db98:
      func_0x00010c209fc0(param_3);
    }
    else {
      uVar3 = uVar2;
      func_0x00010c268ec0();
      if (2 < uVar3) goto LAB_105f1db98;
    }
  }
  _objc_release(uVar2);
LAB_105f1dbac:
  _objc_release(param_5);
  return;
}



/* Entry: 105f1dbcc; end: 105f1dd6f; -[SCDoubleTapZoomGestureRecognizer touchesMoved:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1dbcc(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  long lStack_60;
  undefined *puStack_58;
  
  puVar3 = PTR_s_touchesMoved_withEvent__11252ca58;
  puStack_58 = PTR_PTR_1126ee078;
  lStack_60 = param_5;
  _objc_retain(param_7);
  _objc_msgSendSuper2(&lStack_60,puVar3,param_7,param_8);
  lVar1 = param_7;
  func_0x00010bf04a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(lVar1);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c268ec0();
  if (lVar2 == 2) {
    dVar4 = *(double *)(param_5 + _DAT_11273a738);
    param_2 = param_2 - ((double *)(param_5 + _DAT_11273a738))[1];
    lVar2 = param_5;
    func_0x00010c252440();
    if (lVar2 == 0) {
      if (10.0 < ABS(param_1 - dVar4)) goto LAB_105f1dd2c;
      if (ABS(param_2) <= 10.0) goto LAB_105f1dd38;
    }
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(puVar3);
    func_0x00010beaa380(1.0 - param_2 / param_4,param_5);
  }
  else {
    param_1 = param_1 - *(double *)(param_5 + _DAT_11273a734);
    param_2 = param_2 - ((double *)(param_5 + _DAT_11273a734))[1];
    if (SQRT(param_2 * param_2 + param_1 * param_1) <= 3.0) goto LAB_105f1dd38;
  }
LAB_105f1dd2c:
  func_0x00010c209fc0(param_5);
LAB_105f1dd38:
  _objc_release(lVar1);
  return;
}



/* Entry: 105f1dd70; end: 105f1de5f; -[SCDoubleTapZoomGestureRecognizer touchesEnded:withEvent:] */

void FUN_105f1dd70(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ee078;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_touchesEnded_withEvent__11267b788,param_3,param_4);
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010bf04a20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c268ec0();
    if (lVar2 == 2) {
      func_0x00010c209fc0(param_1);
    }
    _objc_release(lVar1);
  }
  else {
    lVar1 = param_1;
    func_0x00010c252440();
    if (lVar1 != 1) {
      func_0x00010c252440();
    }
    func_0x00010c209fc0(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105f1de60; end: 105f1ded3; -[SCDoubleTapZoomGestureRecognizer touchesCancelled:withEvent:] */

void FUN_105f1de60(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ee078;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_touchesCancelled_withEvent__112526c90);
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 != 1) {
    func_0x00010c252440();
  }
  func_0x00010c209fc0(param_1);
  return;
}



/* Entry: 105f1ded4; end: 105f1df3b; -[SCDoubleTapZoomGestureRecognizer setState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1ded4(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ee078;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setState__112660218);
  if ((param_3 & 0xfffffffffffffffe) == 4) {
    lVar1 = (long)_DAT_11273a734;
    uVar2 = *(undefined8 *)PTR__CGPointZero_110347540;
    ((undefined8 *)(param_1 + lVar1))[1] = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    *(undefined8 *)(param_1 + lVar1) = uVar2;
  }
  return;
}



/* Entry: 105f1df3c; end: 105f1df9b; -[SCDoubleTapZoomGestureRecognizer canPreventGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105f1df3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11273a740;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  return param_3 == param_1;
}



/* Entry: 105f1df9c; end: 105f1dffb; -[SCDoubleTapZoomGestureRecognizer shouldBeRequiredToFailByGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105f1df9c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11273a740;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
  return param_3 == param_1;
}



/* Entry: 105f1dffc; end: 105f1e00b; -[SCDoubleTapZoomGestureRecognizer zoom] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105f1dffc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273a730);
}



/* Entry: 105f1e00c; end: 105f1e02b; -[SCDoubleTapZoomGestureRecognizer conflictingGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1e00c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273a740);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f1e02c; end: 105f1e03f; -[SCDoubleTapZoomGestureRecognizer setConflictingGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1e02c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273a740,param_3);
  return;
}



/* Entry: 105f1e040; end: 105f1e07b; -[SCDoubleTapZoomGestureRecognizer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f1e040(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273a740);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273a73c,0);
  return;
}



/* Entry: 105f1e07c; end: 105f1e08b; -[SCMapGestureLogger trackTapGesture] */

void FUN_105f1e07c(long param_1)

{
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  return;
}



/* Entry: 105f1e08c; end: 105f1e0a3; -[SCMapGestureLogger trackDoubleTapGesture] */

void FUN_105f1e08c(long param_1)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  *(undefined8 *)(param_1 + 0x58) = 2;
  return;
}



/* Entry: 105f1e0a4; end: 105f1e0b3; -[SCMapGestureLogger trackLongPressGesture] */

void FUN_105f1e0a4(long param_1)

{
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  return;
}



/* Entry: 105f1e0b4; end: 105f1e0cb; -[SCMapGestureLogger trackPinchGesture] */

void FUN_105f1e0b4(long param_1)

{
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  *(undefined8 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 105f1e0cc; end: 105f1e0db; -[SCMapGestureLogger trackPanGesture] */

void FUN_105f1e0cc(long param_1)

{
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  return;
}



/* Entry: 105f1e0dc; end: 105f1e0f3; -[SCMapGestureLogger trackZoomSliderUse] */

void FUN_105f1e0dc(long param_1)

{
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  *(undefined8 *)(param_1 + 0x58) = 4;
  return;
}



/* Entry: 105f1e0f4; end: 105f1e10b; -[SCMapGestureLogger trackOneFingerZoom] */

void FUN_105f1e0f4(long param_1)

{
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  *(undefined8 *)(param_1 + 0x58) = 2;
  return;
}



/* Entry: 105f1e10c; end: 105f1e123; -[SCMapGestureLogger trackTwoFingerTap] */

void FUN_105f1e10c(long param_1)

{
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
  *(undefined8 *)(param_1 + 0x58) = 5;
  return;
}



/* Entry: 105f1e124; end: 105f1e133; -[SCMapGestureLogger trackTilt] */

void FUN_105f1e124(long param_1)

{
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
  return;
}



/* Entry: 105f1e134; end: 105f1e143; -[SCMapGestureLogger trackRotate] */

void FUN_105f1e134(long param_1)

{
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
  return;
}



/* Entry: 105f1e144; end: 105f1e14f; -[SCMapGestureLogger trackProgrammaticViewportChange] */

void FUN_105f1e144(long param_1)

{
  *(undefined8 *)(param_1 + 0x58) = 6;
  return;
}



/* Entry: 105f1e150; end: 105f1e163; -[SCMapGestureLogger resetCounts] */

void FUN_105f1e150(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 105f1e164; end: 105f1e16b; -[SCMapGestureLogger oneFingerZoomCount] */

undefined8 FUN_105f1e164(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105f1e16c; end: 105f1e173; -[SCMapGestureLogger doubleTapCount] */

undefined8 FUN_105f1e16c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105f1e174; end: 105f1e17b; -[SCMapGestureLogger longPressCount] */

undefined8 FUN_105f1e174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105f1e17c; end: 105f1e183; -[SCMapGestureLogger panCount] */

undefined8 FUN_105f1e17c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105f1e184; end: 105f1e18b; -[SCMapGestureLogger pinchCount] */

undefined8 FUN_105f1e184(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105f1e18c; end: 105f1e193; -[SCMapGestureLogger singleTapCount] */

undefined8 FUN_105f1e18c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105f1e194; end: 105f1e19b; -[SCMapGestureLogger twoFingerTapCount] */

undefined8 FUN_105f1e194(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105f1e19c; end: 105f1e1a3; -[SCMapGestureLogger zoomSliderCount] */

undefined8 FUN_105f1e19c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105f1e1a4; end: 105f1e1ab; -[SCMapGestureLogger tiltCount] */

undefined8 FUN_105f1e1a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105f1e1ac; end: 105f1e1b3; -[SCMapGestureLogger rotateCount] */

undefined8 FUN_105f1e1ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105f1e1b4; end: 105f1e1bb; -[SCMapGestureLogger lastZoomGesture] */

undefined8 FUN_105f1e1b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105f1e1bc; end: 105f1e4bf; -[SCMapGestureManager initWithMapGestures:mapViewport:mapConfiguration:gestureView:mapSdkSession:basemapPersonalization:] */

undefined8 *
FUN_105f1e1bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126ee080;
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
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c5f60;
    _objc_alloc_init();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    *(undefined1 *)(puVar1 + 0x15) = 1;
    puVar3 = PTR_PTR_1126c5f68;
    func_0x00010c0d1e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c29f500();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar4 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x16];
    puVar1[0x16] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    func_0x00010be01c20(puVar1);
    uVar2 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beaccc0(puVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105f1e4c0; end: 105f1e59b;  */

void FUN_105f1e4c0(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bec60(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105f1e59c; end: 105f1e5b7;  */

void FUN_105f1e59c(void)

{
  return;
}



/* Entry: 105f1e5b8; end: 105f1e5e3;  */

void FUN_105f1e5b8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6aee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f1e5e4; end: 105f1e757; -[SCMapGestureManager _setLongPressListenerOnSdk] */

void FUN_105f1e5e4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  float fVar9;
  double dVar10;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126c5f70;
  _objc_alloc(PTR_PTR_1126c5f70);
  fVar9 = -32.0;
  puVar7 = auStack_48;
  _objc_copyWeak(auStack_50,puVar7);
  func_0x00010c01e060(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bfc6620();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e31878;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bef9b20(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  puVar4 = auStack_48;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  __Unwind_Resume();
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar5 = puVar4 + 0x20;
  _objc_loadWeakRetained();
  puVar6 = puVar5;
  func_0x00010be62020();
  _objc_release(puVar5);
  if ((int)puVar6 != 0) {
    puVar4 = puVar4 + 0x20;
    _objc_loadWeakRetained(puVar4);
    func_0x00010c269cc0(puVar7);
    dVar10 = (double)fVar9;
    func_0x00010c269ce0(puVar7);
    func_0x00010be9f6a0(dVar10,(double)fVar9,puVar4);
    _objc_release(puVar4);
  }
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 105f1e758; end: 105f1e80b;  */

void FUN_105f1e758(float param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be62020();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    param_2 = param_2 + 0x20;
    _objc_loadWeakRetained(param_2);
    func_0x00010c269cc0(param_3);
    dVar3 = (double)param_1;
    func_0x00010c269ce0(param_3);
    func_0x00010be9f6a0(dVar3,(double)param_1,param_2);
    _objc_release(param_2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f1e80c; end: 105f1e97f; -[SCMapGestureManager _setPressDownListenerOnSdk] */

void FUN_105f1e80c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126c5f70;
  _objc_alloc(PTR_PTR_1126c5f70);
  fVar9 = -32.0;
  puVar7 = auStack_48;
  _objc_copyWeak(auStack_50);
  func_0x00010c01e060(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bfc6620();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e31878;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010befab80(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  puVar4 = auStack_48;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  __Unwind_Resume();
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar5 = puVar4 + 0x20;
  _objc_loadWeakRetained();
  puVar6 = puVar5;
  func_0x00010be62020();
  _objc_release(puVar5);
  if ((int)puVar6 != 0) {
    puVar5 = puVar7;
    func_0x00010c27dd80();
    if (puVar5 == (undefined1 *)0x1) {
      puVar5 = puVar4 + 0x20;
      _objc_loadWeakRetained();
      if (puVar5 == (undefined1 *)0x0) goto LAB_105f1eab4;
      func_0x00010c2789c0(*(undefined8 *)(puVar5 + 0x80));
      func_0x00010c08aca0(puVar7);
      dVar12 = (double)fVar9;
      func_0x00010c0b4a40(puVar7);
      dVar10 = (double)fVar9;
      _CLLocationCoordinate2DMake(dVar12,dVar10);
      puVar4 = puVar4 + 0x20;
      dVar11 = dVar12;
      _objc_loadWeakRetained(puVar4);
      fVar9 = SUB84(dVar11,0);
      func_0x00010c269cc0(puVar7);
      dVar11 = (double)fVar9;
      func_0x00010c269ce0(puVar7);
      func_0x00010bea0f00(dVar11,(double)fVar9,dVar12,dVar10,puVar4);
      _objc_release(puVar4);
    }
    else {
      if (puVar5 != (undefined1 *)0x2) goto LAB_105f1eab4;
      puVar5 = puVar4 + 0x20;
      _objc_loadWeakRetained(puVar5);
      func_0x00010c269cc0(puVar7);
      dVar11 = (double)fVar9;
      func_0x00010c269ce0(puVar7);
      func_0x00010bea0ee0(dVar11,(double)fVar9,puVar5);
    }
    _objc_release(puVar5);
  }
LAB_105f1eab4:
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 105f1e980; end: 105f1eadb;  */

void FUN_105f1e980(float param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be62020();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c27dd80();
    if (lVar1 == 1) {
      lVar1 = param_2 + 0x20;
      _objc_loadWeakRetained();
      if (lVar1 == 0) goto LAB_105f1eab4;
      func_0x00010c2789c0(*(undefined8 *)(lVar1 + 0x80));
      func_0x00010c08aca0(param_3);
      dVar6 = (double)param_1;
      func_0x00010c0b4a40(param_3);
      dVar4 = (double)param_1;
      _CLLocationCoordinate2DMake(dVar6,dVar4);
      param_2 = param_2 + 0x20;
      dVar5 = dVar6;
      _objc_loadWeakRetained(param_2);
      fVar3 = SUB84(dVar5,0);
      func_0x00010c269cc0(param_3);
      dVar5 = (double)fVar3;
      func_0x00010c269ce0(param_3);
      func_0x00010bea0f00(dVar5,(double)fVar3,dVar6,dVar4,param_2);
      _objc_release(param_2);
    }
    else {
      if (lVar1 != 2) goto LAB_105f1eab4;
      lVar1 = param_2 + 0x20;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c269cc0(param_3);
      dVar5 = (double)param_1;
      func_0x00010c269ce0(param_3);
      func_0x00010bea0ee0(dVar5,(double)param_1,lVar1);
    }
    _objc_release(lVar1);
  }
LAB_105f1eab4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f1eadc; end: 105f1eb5b; -[SCMapGestureManager _nativeTapShouldBeHandled] */

long FUN_105f1eadc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x78),param_2,PTR____kCFBooleanTrue_11034ab68);
  lVar1 = param_1 + 0xd8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = param_1 + 0xd8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfd1800();
    _objc_release(lVar1);
    param_1 = param_1 + 0xd8;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c0ba240();
    _objc_release(param_1);
  }
  return lVar1;
}



/* Entry: 105f1eb5c; end: 105f1eb83; -[SCMapGestureManager mapTouchObservable] */

void FUN_105f1eb5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f1eb84; end: 105f1ebab; -[SCMapGestureManager mapViewportItemTapObservable] */

void FUN_105f1eb84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105f1ebac; end: 105f1ec8f; -[SCMapGestureManager addTouchResponder:] */

void FUN_105f1ebac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_3);
  func_0x00010c0d3c80();
  func_0x00010befa120();
  _objc_release(param_3);
  uVar1 = uVar4;
  func_0x00010c246ca0(uVar4,param_2,&PTR___NSConcreteGlobalBlock_1108f9220);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d3c80();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105f1ec90; end: 105f1ec97; -[SCMapGestureManager removeTouchResponder:] */

void FUN_105f1ec90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_removeObject__112628ef8);
  return;
}



/* Entry: 105f1ec98; end: 105f1ec9f; -[SCMapGestureManager removeAllTouchResponders] */

void FUN_105f1ec98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 105f1eca0; end: 105f1eca7; -[SCMapGestureManager setConflictingDoubleTapZoomGesture:] */

void FUN_105f1eca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c180bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setConflictingGestureRecognizer__11263dd10);
  return;
}



/* Entry: 105f1eca8; end: 105f1ecaf; -[SCMapGestureManager leftAltitudeSliderView] */

void FUN_105f1eca8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23e950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_sliderView_11266d478)
  ;
  return;
}



/* Entry: 105f1ecb0; end: 105f1ecb7; -[SCMapGestureManager rightAltitudeSliderView] */

void FUN_105f1ecb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23e950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_sliderView_11266d478)
  ;
  return;
}



/* Entry: 105f1ecb8; end: 105f1ecdf; -[SCMapGestureManager hideSliders] */

/* WARNING: Possible PIC construction at 0x000105f1eccc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105f1ecd0) */

void FUN_105f1ecb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe2810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_hideSlider_1125d63c0)
  ;
  return;
}



/* Entry: 105f1ece0; end: 105f1eceb; -[SCMapGestureManager setLeftSliderEnabled:] */

void FUN_105f1ece0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea79f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setSlider_enabled__112587820,*(undefined8 *)(param_1 + 0x30),param_3);
  return;
}


