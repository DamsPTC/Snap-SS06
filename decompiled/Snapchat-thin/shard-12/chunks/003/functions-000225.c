/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108fe06a0; end: 108fe06b3; -[SCScrollableSectionDecorationViewLayoutAttributes .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe06a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f3ec,0);
  return;
}



/* Entry: 108fe06b4; end: 108fe0a1f; -[SCScrollableSectionInfo prepareLayout] */

void FUN_108fe06b4(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dStack_90;
  double dStack_88;
  
  puVar4 = PTR__CGRectZero_110347608;
  func_0x00010c067640();
  dVar11 = param_2;
  func_0x00010bfdfec0(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  dVar8 = dVar11;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar5 = param_5;
  func_0x00010bfec9e0();
  if (uVar5 == 0) {
    param_1 = 0.0;
  }
  else {
    func_0x00010c068320(param_5);
  }
  dStack_90 = *(double *)puVar4;
  dVar13 = *(double *)(puVar4 + 8);
  uVar5 = param_5;
  dVar6 = param_1;
  func_0x00010c0deea0();
  dStack_88 = dVar13;
  if (uVar5 != 0) {
    uVar5 = 0;
    dVar10 = dStack_90;
    dVar16 = *(double *)(puVar4 + 0x10);
    dVar17 = *(double *)(puVar4 + 0x18);
    do {
      dVar12 = dVar8;
      dVar7 = dVar6;
      uVar2 = param_5;
      func_0x00010c084ae0(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc10a0();
      _objc_release(uVar3);
      _objc_release(uVar2);
      dVar8 = dVar10;
      dVar15 = dVar13;
      dVar6 = dVar17;
      _CGRectGetMaxX(dVar10,dVar13,dVar16);
      if (uVar5 == 0) {
        dVar14 = 0.0;
        dVar9 = dVar8;
      }
      else {
        dVar14 = dVar8;
        func_0x00010c0682e0(param_5);
        dVar9 = dVar14;
      }
      uVar2 = param_5;
      func_0x00010c2352e0();
      if ((int)uVar2 == 0) {
LAB_108fe0834:
        if (uVar5 == 0) {
          func_0x00010c067640(param_5);
          dVar8 = dVar15;
          func_0x00010c067640(param_5);
          func_0x00010bfdfec0(param_5);
          dVar13 = param_1 + dVar9 + dVar8;
        }
        else {
          _CGRectGetMaxX(dVar10,dVar13,dVar16,dVar17);
          dVar15 = dVar10;
          func_0x00010c0682e0(param_5);
          dVar15 = dVar10 + dVar15;
        }
      }
      else {
        dVar8 = dVar8 + dVar14;
        dVar14 = dVar7 + dVar8;
        func_0x00010bf40a80(param_5);
        func_0x00010c067640(param_5);
        dVar9 = dVar8 - dVar6;
        if (dVar14 <= dVar9) goto LAB_108fe0834;
        func_0x00010c067640(param_5);
        dVar13 = dStack_90;
        _CGRectGetMaxY(dStack_90,dStack_88,param_2,dVar11);
        if (uVar5 == 0) {
          dVar8 = 0.0;
        }
        else {
          dVar8 = dVar13;
          func_0x00010c0682e0(param_5);
        }
        dVar13 = dVar13 + dVar8;
      }
      _CGRectUnion();
      puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      dVar6 = dVar15;
      dVar8 = dVar13;
      param_3 = dVar7;
      param_4 = dVar12;
      func_0x00010c2971a0(dVar15,dVar13,dVar7,dVar12,PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_6,puVar4);
      _objc_release(puVar4);
      uVar5 = uVar5 + 1;
      uVar2 = param_5;
      func_0x00010c0deea0();
      dVar10 = dVar15;
      dVar16 = dVar7;
      dVar17 = dVar12;
    } while (uVar5 < uVar2);
  }
  func_0x00010c067640(param_5);
  func_0x00010bfb44c0(param_5);
  func_0x00010c067640(param_5);
  func_0x00010c1739e0(dStack_90,dStack_88,param_2 + param_4,dVar11 + dVar8 + param_3,param_5);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c1b5ea0(param_5,param_6,puVar4);
  _objc_release(puVar4);
  func_0x00010c1cbe40(param_5,param_6,0);
  uVar5 = param_5;
  func_0x00010bf0be00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4cdc0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  func_0x00010bf0be00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c289760(dStack_90,dStack_88);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108fe0a20; end: 108fe0a93; -[SCScrollableSectionInfo frame] */

void FUN_108fe0a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf20c00();
  uVar1 = param_1;
  uVar2 = param_2;
  func_0x00010c0e1c40(param_5);
  func_0x00010c0e1c40(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectOffset_1103475f0)(param_1,param_2,param_3,param_4,uVar1,uVar2);
  return;
}



/* Entry: 108fe0a94; end: 108fe0b23; -[SCScrollableSectionInfo itemFrame] */

double FUN_108fe0a94(double param_1,undefined8 param_2)

{
  func_0x00010bfb68e0();
  func_0x00010bfdfec0(param_2);
  func_0x00010c067640(param_2);
  func_0x00010bfb44c0(param_2);
  func_0x00010c067640(param_2);
  return param_1 + 0.0;
}



/* Entry: 108fe0b24; end: 108fe0c43; -[SCScrollableSectionInfo layoutAttributesForItemAtIndex:] */

void FUN_108fe0b24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar1 = *(ulong *)(param_5 + 0x50);
  func_0x00010bf529e0();
  puVar5 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
  if (param_7 < uVar1) {
    uVar2 = *(undefined8 *)(param_5 + 0x50);
    func_0x00010c0dfd40(uVar2,param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c8e0(puVar5,param_6,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar3 = param_5;
    func_0x00010c084400(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    uVar2 = param_1;
    uVar6 = param_2;
    func_0x00010c0e1c40(param_5);
    func_0x00010c0e1c40(param_5);
    _CGRectOffset(param_1,param_2,param_3,param_4,uVar2,uVar6);
    func_0x00010c19f0e0(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108fe0c44; end: 108fe0d33; -[SCScrollableSectionInfo headerViewAttributes] */

void FUN_108fe0c44(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  
  func_0x00010bfdfec0();
  puVar4 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  bVar1 = false;
  if ((param_1 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar1 = false, !NAN(param_2) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar1 = param_2 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (bVar1) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar5 = *(undefined8 *)PTR__UICollectionElementKindSectionHeader_110345b00;
    uVar2 = param_3;
    func_0x00010bfec9e0(param_3);
    func_0x00010bfed020(puVar3,param_4,0,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08ca00(puVar4,param_4,uVar5,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c0e1c40(param_3);
    dVar6 = param_2;
    func_0x00010bf40a80(param_3);
    func_0x00010bfdfec0(param_3);
    func_0x00010c19f0e0(0,param_2,param_1,dVar6,puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108fe0d34; end: 108fe0e33; -[SCScrollableSectionInfo footerViewAttributes] */

void FUN_108fe0d34(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  
  func_0x00010bfb44c0();
  puVar4 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
  puVar3 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  bVar1 = false;
  if ((param_1 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar1 = false, !NAN(param_2) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar1 = param_2 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (bVar1) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar5 = *(undefined8 *)PTR__UICollectionElementKindSectionFooter_110345af8;
    uVar2 = param_3;
    func_0x00010bfec9e0(param_3);
    func_0x00010bfed020(puVar3,param_4,0,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08ca00(puVar4,param_4,uVar5,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010bfb68e0(param_3);
    _CGRectGetMaxY();
    dVar6 = param_1;
    func_0x00010bfb44c0(param_3);
    param_1 = param_1 - param_2;
    func_0x00010bf40a80(param_3);
    func_0x00010bfb44c0(param_3);
    func_0x00010c19f0e0(0,param_1,dVar6,param_2,puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108fe0e34; end: 108fe0ef7; -[SCScrollableSectionInfo backgroundViewAttributes] */

void FUN_108fe0e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  uVar1 = param_5;
  func_0x00010bfec9e0();
  func_0x00010bfed020(puVar2,param_6,0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08ca00(puVar3,param_6,&PTR____CFConstantStringClassReference_110f16578,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfb68e0(param_5);
  func_0x00010bf40a80(param_5);
  func_0x00010c19f0e0(0,param_2,param_1,param_4,puVar3);
  func_0x00010c227920(puVar3,param_6,0xffffffffffffff9d);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108fe0ef8; end: 108fe0fc3; -[SCScrollableSectionInfo decorationViewAttributes] */

void FUN_108fe0ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126dcdc8;
  uVar1 = param_5;
  func_0x00010bfec9e0();
  puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_6,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c920(puVar3,param_6,&PTR____CFConstantStringClassReference_110f16558,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c0843e0(param_5);
  func_0x00010c1f9160(puVar3,param_6,param_5);
  func_0x00010bf40a80(param_5);
  func_0x00010c19f0e0(0,param_2,param_1,param_4,puVar3);
  func_0x00010c227920(puVar3,param_6,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108fe0fc4; end: 108fe1267; -[SCScrollableSectionInfo layoutAttributesIntersectingRect:] */

void FUN_108fe0fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  int iVar1;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar2;
  
  uVar2 = param_5;
  func_0x00010bfb68e0();
  iVar1 = (int)uVar2;
  _CGRectIntersectsRect();
  if (iVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uVar2 = param_5;
    func_0x00010bfe0200();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x00010bfb68e0();
      iVar1 = (int)uVar3;
      _CGRectIntersectsRect();
      if (iVar1 != 0) {
        func_0x00010befa120(puVar8,param_6,uVar2);
      }
    }
    uVar3 = param_5;
    func_0x00010bfb4540();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x00010bfb68e0();
      iVar1 = (int)uVar4;
      _CGRectIntersectsRect();
      if (iVar1 != 0) {
        func_0x00010befa120(puVar8,param_6,uVar3);
      }
    }
    uVar4 = param_5;
    func_0x00010bf67660();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bfb68e0();
    iVar1 = (int)uVar9;
    _CGRectIntersectsRect();
    if (iVar1 != 0) {
      func_0x00010befa120(puVar8,param_6,uVar4);
      uVar9 = param_5;
      func_0x00010c0deea0();
      if (uVar9 != 0) {
        uVar9 = 0;
        uVar7 = 0;
        do {
          uVar5 = param_5;
          func_0x00010c084400();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc1080();
          uVar10 = param_1;
          uVar11 = param_2;
          func_0x00010c0e1c40(param_5);
          func_0x00010c0e1c40(param_5);
          _CGRectOffset(param_1,param_2,param_3,param_4,uVar10,uVar11);
          _objc_release(uVar6);
          _objc_release();
          _CGRectIntersectsRect();
          if ((int)uVar5 == 0) {
            if ((uVar7 & 1) != 0) break;
          }
          else {
            uVar7 = param_5;
            func_0x00010c08c960(param_5,param_6,uVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar8,param_6,uVar7);
            _objc_release(uVar7);
          }
          uVar9 = uVar9 + 1;
          uVar6 = param_5;
          func_0x00010c0deea0();
          uVar7 = uVar5;
        } while (uVar9 < uVar6);
      }
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108fe1268; end: 108fe127f; -[SCScrollableSectionInfo associatedDecorationView] */

void FUN_108fe1268(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fe1280; end: 108fe128b; -[SCScrollableSectionInfo setAssociatedDecorationView:] */

void FUN_108fe1280(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 108fe128c; end: 108fe12a3; -[SCScrollableSectionInfo layout] */

void FUN_108fe128c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fe12a4; end: 108fe12af; -[SCScrollableSectionInfo setLayout:] */

void FUN_108fe12a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 108fe12b0; end: 108fe12b7; -[SCScrollableSectionInfo offset] */

undefined1  [16] FUN_108fe12b0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x60);
}



/* Entry: 108fe12b8; end: 108fe12bf; -[SCScrollableSectionInfo setOffset:] */

void FUN_108fe12b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x60) = param_1;
  *(undefined8 *)(param_3 + 0x68) = param_2;
  return;
}



/* Entry: 108fe12c0; end: 108fe12c7; -[SCScrollableSectionInfo interItemSpacing] */

undefined8 FUN_108fe12c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108fe12c8; end: 108fe12cf; -[SCScrollableSectionInfo setInterItemSpacing:] */

void FUN_108fe12c8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 108fe12d0; end: 108fe12d7; -[SCScrollableSectionInfo interSectionSpacing] */

undefined8 FUN_108fe12d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108fe12d8; end: 108fe12df; -[SCScrollableSectionInfo setInterSectionSpacing:] */

void FUN_108fe12d8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 108fe12e0; end: 108fe12eb; -[SCScrollableSectionInfo insets] */

undefined8 FUN_108fe12e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 108fe12ec; end: 108fe12f7; -[SCScrollableSectionInfo setInsets:] */

void FUN_108fe12ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x90) = param_1;
  *(undefined8 *)(param_5 + 0x98) = param_2;
  *(undefined8 *)(param_5 + 0xa0) = param_3;
  *(undefined8 *)(param_5 + 0xa8) = param_4;
  return;
}



/* Entry: 108fe12f8; end: 108fe12ff; -[SCScrollableSectionInfo index] */

undefined8 FUN_108fe12f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108fe1300; end: 108fe1307; -[SCScrollableSectionInfo setIndex:] */

void FUN_108fe1300(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 108fe1308; end: 108fe130f; -[SCScrollableSectionInfo collectionViewWidth] */

undefined8 FUN_108fe1308(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108fe1310; end: 108fe1317; -[SCScrollableSectionInfo setCollectionViewWidth:] */

void FUN_108fe1310(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 108fe1318; end: 108fe131f; -[SCScrollableSectionInfo itemSizes] */

undefined8 FUN_108fe1318(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108fe1320; end: 108fe134f; -[SCScrollableSectionInfo setItemSizes:] */

void FUN_108fe1320(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108fe1350; end: 108fe1357; -[SCScrollableSectionInfo numberOfItems] */

undefined8 FUN_108fe1350(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108fe1358; end: 108fe135f; -[SCScrollableSectionInfo setNumberOfItems:] */

void FUN_108fe1358(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 108fe1360; end: 108fe1367; -[SCScrollableSectionInfo originalIndexPaths] */

undefined8 FUN_108fe1360(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108fe1368; end: 108fe1397; -[SCScrollableSectionInfo setOriginalIndexPaths:] */

void FUN_108fe1368(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe1398; end: 108fe139f; -[SCScrollableSectionInfo headerSize] */

undefined1  [16] FUN_108fe1398(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x70);
}



/* Entry: 108fe13a0; end: 108fe13a7; -[SCScrollableSectionInfo setHeaderSize:] */

void FUN_108fe13a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x70) = param_1;
  *(undefined8 *)(param_3 + 0x78) = param_2;
  return;
}



/* Entry: 108fe13a8; end: 108fe13af; -[SCScrollableSectionInfo footerSize] */

undefined1  [16] FUN_108fe13a8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x80);
}



/* Entry: 108fe13b0; end: 108fe13b7; -[SCScrollableSectionInfo setFooterSize:] */

void FUN_108fe13b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x80) = param_1;
  *(undefined8 *)(param_3 + 0x88) = param_2;
  return;
}



/* Entry: 108fe13b8; end: 108fe13bf; -[SCScrollableSectionInfo needsLayout] */

undefined1 FUN_108fe13b8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108fe13c0; end: 108fe13c7; -[SCScrollableSectionInfo setNeedsLayout:] */

void FUN_108fe13c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108fe13c8; end: 108fe13cf; -[SCScrollableSectionInfo shouldUseFlowLayout] */

undefined1 FUN_108fe13c8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108fe13d0; end: 108fe13d7; -[SCScrollableSectionInfo setShouldUseFlowLayout:] */

void FUN_108fe13d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 108fe13d8; end: 108fe13df; -[SCScrollableSectionInfo ignoreScrollEvents] */

undefined1 FUN_108fe13d8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108fe13e0; end: 108fe13e7; -[SCScrollableSectionInfo setIgnoreScrollEvents:] */

void FUN_108fe13e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 108fe13e8; end: 108fe13f3; -[SCScrollableSectionInfo bounds] */

undefined8 FUN_108fe13e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 108fe13f4; end: 108fe13ff; -[SCScrollableSectionInfo setBounds:] */

void FUN_108fe13f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0xb0) = param_1;
  *(undefined8 *)(param_5 + 0xb8) = param_2;
  *(undefined8 *)(param_5 + 0xc0) = param_3;
  *(undefined8 *)(param_5 + 200) = param_4;
  return;
}



/* Entry: 108fe1400; end: 108fe1407; -[SCScrollableSectionInfo itemFrames] */

undefined8 FUN_108fe1400(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108fe1408; end: 108fe1437; -[SCScrollableSectionInfo setItemFrames:] */

void FUN_108fe1408(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe1438; end: 108fe1483; -[SCScrollableSectionInfo .cxx_destruct] */

void FUN_108fe1438(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 108fe1484; end: 108fe1497; +[SCDecorationScrollViewConfiguration defaultConfiguration] */

void FUN_108fe1484(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108fe1498; end: 108fe1553; -[SCDecorationScrollViewConfiguration init] */

undefined1 * FUN_108fe1498(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ffbc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1738c0(puVar1);
    func_0x00010c167a00(puVar1);
    func_0x00010c2025c0(puVar1);
    func_0x00010c1f7ba0(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar1);
    func_0x00010c1ac160(puVar1);
    func_0x00010c18a140(*(undefined8 *)PTR__UIScrollViewDecelerationRateNormal_110345db0,puVar1);
    func_0x00010c1d8be0(puVar1);
    func_0x00010c1f7b20(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108fe1554; end: 108fe155b; -[SCDecorationScrollViewConfiguration bounces] */

undefined1 FUN_108fe1554(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108fe155c; end: 108fe1563; -[SCDecorationScrollViewConfiguration setBounces:] */

void FUN_108fe155c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108fe1564; end: 108fe156b; -[SCDecorationScrollViewConfiguration alwaysBounceHorizontal] */

undefined1 FUN_108fe1564(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108fe156c; end: 108fe1573; -[SCDecorationScrollViewConfiguration setAlwaysBounceHorizontal:] */

void FUN_108fe156c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 108fe1574; end: 108fe157b; -[SCDecorationScrollViewConfiguration showsHorizontalScrollIndicator] */

undefined1 FUN_108fe1574(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108fe157c; end: 108fe1583; -[SCDecorationScrollViewConfiguration setShowsHorizontalScrollIndicator:] */

void FUN_108fe157c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 108fe1584; end: 108fe158f; -[SCDecorationScrollViewConfiguration scrollIndicatorInsets] */

undefined8 FUN_108fe1584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108fe1590; end: 108fe159b; -[SCDecorationScrollViewConfiguration setScrollIndicatorInsets:] */

void FUN_108fe1590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x20) = param_1;
  *(undefined8 *)(param_5 + 0x28) = param_2;
  *(undefined8 *)(param_5 + 0x30) = param_3;
  *(undefined8 *)(param_5 + 0x38) = param_4;
  return;
}



/* Entry: 108fe159c; end: 108fe15a3; -[SCDecorationScrollViewConfiguration indicatorStyle] */

undefined8 FUN_108fe159c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fe15a4; end: 108fe15ab; -[SCDecorationScrollViewConfiguration setIndicatorStyle:] */

void FUN_108fe15a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 108fe15ac; end: 108fe15b3; -[SCDecorationScrollViewConfiguration decelerationRate] */

undefined8 FUN_108fe15ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108fe15b4; end: 108fe15bb; -[SCDecorationScrollViewConfiguration setDecelerationRate:] */

void FUN_108fe15b4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 108fe15bc; end: 108fe15c3; -[SCDecorationScrollViewConfiguration isPagingEnabled] */

undefined1 FUN_108fe15bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108fe15c4; end: 108fe15cb; -[SCDecorationScrollViewConfiguration setPagingEnabled:] */

void FUN_108fe15c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 108fe15cc; end: 108fe15d3; -[SCDecorationScrollViewConfiguration isScrollEnabled] */

undefined1 FUN_108fe15cc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 108fe15d4; end: 108fe15db; -[SCDecorationScrollViewConfiguration setScrollEnabled:] */

void FUN_108fe15d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 108fe15dc; end: 108fe15eb; -[SCScrollableSectionLayoutInvalidationContext invalidatedSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108fe15dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f458);
}



/* Entry: 108fe15ec; end: 108fe162b; -[SCScrollableSectionLayoutInvalidationContext setInvalidatedSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe15ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f458;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108fe162c; end: 108fe163b; -[SCScrollableSectionLayoutInvalidationContext invalidateCollectionViewWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108fe162c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277f45c);
}



/* Entry: 108fe163c; end: 108fe164b; -[SCScrollableSectionLayoutInvalidationContext setInvalidateCollectionViewWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe163c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277f45c) = param_3;
  return;
}



/* Entry: 108fe164c; end: 108fe165f; -[SCScrollableSectionLayoutInvalidationContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108fe164c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f458,0);
  return;
}



/* Entry: 108fe1660; end: 108fe1793; -[SCCollectionViewListSectionConfiguration initWithSectionHeaderModel:expansionModel:minimumInteritemSpacing:sectionInsets:automaticallyManageRoundedCorners:automaticallyManageCellSeparators:contentDataModel:] */

undefined1 *
FUN_108fe1660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ffbc8;
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108fe1794; end: 108fe17b7; -[SCCollectionViewListSectionConfiguration copyWithZone:] */

undefined8 FUN_108fe1794(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fe17b8; end: 108fe1873; -[SCCollectionViewListSectionConfiguration hash] */

undefined8 * FUN_108fe17b8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_108fe1978:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108fe1984;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(char *)((long)puVar4 + 8) == param_3[8] && (*(char *)((long)puVar4 + 9) == param_3[9]))))
    {
      dVar10 = ABS(*(double *)((long)puVar4 + 0x20) - *(double *)(param_3 + 0x20));
      dVar9 = ABS(*(double *)((long)puVar4 + 0x20) + *(double *)(param_3 + 0x20)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((((bVar1) &&
           ((lVar6 = *(long *)((long)puVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
          ((lVar6 = *(long *)((long)puVar4 + 0x18), lVar6 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
         ((lVar6 = *(long *)((long)puVar4 + 0x28), lVar6 == *(long *)(param_3 + 0x28) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x30);
        if (puVar8 != *(undefined1 **)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_108fe1984;
        }
        goto LAB_108fe1978;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_108fe1984:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 108fe1874; end: 108fe199f; -[SCCollectionViewListSectionConfiguration isEqual:] */

long FUN_108fe1874(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108fe1978:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108fe1984;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((bVar1) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x30);
        if (lVar4 != *(long *)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_108fe1984;
        }
        goto LAB_108fe1978;
      }
    }
    lVar4 = 0;
  }
LAB_108fe1984:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108fe19a0; end: 108fe19a7; -[SCCollectionViewListSectionConfiguration sectionHeaderModel] */

undefined8 FUN_108fe19a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fe19a8; end: 108fe19af; -[SCCollectionViewListSectionConfiguration expansionModel] */

undefined8 FUN_108fe19a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108fe19b0; end: 108fe19b7; -[SCCollectionViewListSectionConfiguration minimumInteritemSpacing] */

undefined8 FUN_108fe19b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108fe19b8; end: 108fe19bf; -[SCCollectionViewListSectionConfiguration sectionInsets] */

undefined8 FUN_108fe19b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108fe19c0; end: 108fe19c7; -[SCCollectionViewListSectionConfiguration automaticallyManageRoundedCorners] */

undefined1 FUN_108fe19c0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108fe19c8; end: 108fe19cf; -[SCCollectionViewListSectionConfiguration automaticallyManageCellSeparators] */

undefined1 FUN_108fe19c8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108fe19d0; end: 108fe19d7; -[SCCollectionViewListSectionConfiguration contentDataModel] */

undefined8 FUN_108fe19d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108fe19d8; end: 108fe1a1f; -[SCCollectionViewListSectionConfiguration .cxx_destruct] */

void FUN_108fe19d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108fe1a20; end: 108fe1a83; -[SCCollectionViewListSectionExpansionModel initWithMaximumThreshold:minimumThreshold:incrementThreshold:shouldHideShowLess:] */

void FUN_108fe1a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ffbd0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  return;
}



/* Entry: 108fe1a84; end: 108fe1aa7; -[SCCollectionViewListSectionExpansionModel copyWithZone:] */

undefined8 FUN_108fe1a84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fe1aa8; end: 108fe1b0b; -[SCCollectionViewListSectionExpansionModel hash] */

undefined8 * FUN_108fe1aa8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  func_0x000107c3191c(&uStack_40,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         (((*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10) ||
           (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))) ||
          (*(long *)((long)puVar1 + 0x20) != *(long *)(param_3 + 0x20))))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(char *)((long)puVar1 + 8) == param_3[8]);
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 108fe1b0c; end: 108fe1bc3; -[SCCollectionViewListSectionExpansionModel isEqual:] */

bool FUN_108fe1b0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
           (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
          (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 8) == *(char *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108fe1bc4; end: 108fe1bcb; -[SCCollectionViewListSectionExpansionModel maximumThreshold] */

undefined8 FUN_108fe1bc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fe1bcc; end: 108fe1bd3; -[SCCollectionViewListSectionExpansionModel minimumThreshold] */

undefined8 FUN_108fe1bcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108fe1bd4; end: 108fe1bdb; -[SCCollectionViewListSectionExpansionModel incrementThreshold] */

undefined8 FUN_108fe1bd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108fe1bdc; end: 108fe1be3; -[SCCollectionViewListSectionExpansionModel shouldHideShowLess] */

undefined1 FUN_108fe1bdc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108fe1be4; end: 108fe1c6b; -[SCGradientStop initWithColor:location:] */

undefined1 *
FUN_108fe1be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ffbd8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108fe1c6c; end: 108fe1c8f; -[SCGradientStop copyWithZone:] */

undefined8 FUN_108fe1c6c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fe1c90; end: 108fe1d1b; -[SCGradientStop hash] */

undefined8 * FUN_108fe1c90(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_38;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108fe1db8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108fe1dc4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (undefined8 *)puVar3[1];
        if (puVar6 != (undefined8 *)param_3[1]) {
          func_0x00010c071c60();
          goto LAB_108fe1dc4;
        }
        goto LAB_108fe1db8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108fe1dc4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108fe1d1c; end: 108fe1ddf; -[SCGradientStop isEqual:] */

long FUN_108fe1d1c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108fe1db8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108fe1dc4;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071c60();
          goto LAB_108fe1dc4;
        }
        goto LAB_108fe1db8;
      }
    }
    lVar4 = 0;
  }
LAB_108fe1dc4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108fe1de0; end: 108fe1de7; -[SCGradientStop color] */

undefined8 FUN_108fe1de0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108fe1de8; end: 108fe1def; -[SCGradientStop location] */

undefined8 FUN_108fe1de8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108fe1df0; end: 108fe1dfb; -[SCGradientStop .cxx_destruct] */

void FUN_108fe1df0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108fe1dfc; end: 108fe1f33; -[SCCollectionViewCarouselSectionConfiguration initWithSectionReuseIdentifier:sectionHeaderModel:minimumIntersectionSpacing:minimumInteritemSpacing:sectionInsets:automaticallyManageRoundedCorners:contentDataModel:manageContentOffsetManually:] */

undefined1 *
FUN_108fe1dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ffbe0;
  uStack_70 = param_3;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_10;
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 108fe1f34; end: 108fe1f57; -[SCCollectionViewCarouselSectionConfiguration copyWithZone:] */

undefined8 FUN_108fe1f34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108fe1f58; end: 108fe202f; -[SCCollectionViewCarouselSectionConfiguration hash] */

undefined8 * FUN_108fe1f58(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar4 = &uStack_68;
  uStack_38 = uVar3;
  func_0x000107c3191c(puVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_108fe2168:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108fe2174;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((*(char *)(puVar4 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))))) {
      dVar10 = ABS((double)puVar4[4] - (double)param_3[4]);
      dVar9 = ABS((double)puVar4[4] + (double)param_3[4]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (bVar1) {
        dVar10 = ABS((double)puVar4[5] - (double)param_3[5]);
        dVar9 = ABS((double)puVar4[5] + (double)param_3[5]) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
          bVar1 = dVar10 < dVar9;
        }
        if ((((bVar1) &&
             ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
            && ((lVar6 = puVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0))
               )) && ((lVar6 = puVar4[6], lVar6 == param_3[6] ||
                      (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
          puVar8 = (undefined8 *)puVar4[7];
          if (puVar8 != (undefined8 *)param_3[7]) {
            func_0x00010c071ae0();
            goto LAB_108fe2174;
          }
          goto LAB_108fe2168;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_108fe2174:
  _objc_release(param_3);
  return puVar8;
}


