/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104fb8488; end: 104fb84a7; -[GHRenderableObject setTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb8488(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112718b0c);
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar3 = param_3[5];
  uVar2 = param_3[4];
  uVar6 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  return;
}



/* Entry: 104fb84a8; end: 104fb84b7; -[GHRenderableObject fillColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fb84a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718b10);
}



/* Entry: 104fb84b8; end: 104fb84f7; -[GHRenderableObject setFillColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb84b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112718b10;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fb84f8; end: 104fb850b; -[GHRenderableObject .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb84f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718b10,0);
  return;
}



/* Entry: 104fb850c; end: 104fb8683; -[SVGDocumentImage rendererForSVGContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb850c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar8 = (long)_DAT_112718b20;
  puVar7 = *(undefined **)(param_1 + lVar8);
  _objc_retain(puVar7);
  if (puVar7 == (undefined *)0x0) {
    if ((*(byte *)(param_1 + _DAT_112718b24) & 1) == 0) {
      *(undefined1 *)(param_1 + _DAT_112718b24) = 1;
      lVar1 = param_1;
      func_0x00010bf0e700(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bf0e700();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar3;
      func_0x00010c08fa60();
      lVar4 = lVar2;
      if (lVar1 != 0) {
        lVar4 = lVar3;
        func_0x00010c25ce00(lVar3,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
      }
      uVar5 = param_3;
      func_0x00010c1282e0(param_3,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126b3278;
      _objc_alloc();
      func_0x00010c0040a0();
      uVar6 = *(undefined8 *)(param_1 + lVar8);
      *(undefined **)(param_1 + lVar8) = puVar7;
      _objc_release(uVar6);
      _objc_retain(puVar7);
      _objc_release(uVar5);
      _objc_release(lVar3);
      _objc_release(lVar4);
    }
    else {
      puVar7 = (undefined *)0x0;
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104fb8684; end: 104fb86e7; -[SVGDocumentImage renderIntoContext:withSVGContext:] */

void FUN_104fb8684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c130660(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12fd20();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fb86e8; end: 104fb876f; -[SVGDocumentImage findRenderableObject:withSVGContext:] */

void FUN_104fb86e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  func_0x00010c130660(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfaf4c0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fb8770; end: 104fb8803; -[SVGDocumentImage addToClipForContext:withSVGContext:objectBoundingBox:] */

void FUN_104fb8770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_8);
  func_0x00010c130660(param_5,param_6,param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc0c0(param_1,param_2,param_3,param_4);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104fb8804; end: 104fb8897; -[SVGDocumentImage addToClipPathForContext:withSVGContext:objectBoundingBox:] */

void FUN_104fb8804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_8);
  func_0x00010c130660(param_5,param_6,param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc0c0(param_1,param_2,param_3,param_4);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104fb8898; end: 104fb88ff; -[SVGDocumentImage getClippingTypeWithSVGContext:] */

undefined8 FUN_104fb8898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c130660(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfc3ba0();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104fb8900; end: 104fb8987; -[SVGDocumentImage getBoundingBoxWithSVGContext:] */

undefined8
FUN_104fb8900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c130660(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc31c0();
  _objc_release(param_4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 104fb8988; end: 104fb899b; -[SVGDocumentImage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb8988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718b20,0);
  return;
}



/* Entry: 104fb899c; end: 104fb8a57; +[GHImage newImageWithDictionary:] */

undefined * FUN_104fb899c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110dbf178);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfdcf80();
  ppuVar1 = &PTR_PTR_1126b32e8;
  if ((int)uVar4 == 0) {
    ppuVar1 = &PTR_PTR_1126b32f0;
  }
  puVar5 = *ppuVar1;
  _objc_alloc(puVar5);
  func_0x00010c00c560();
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return puVar5;
}



/* Entry: 104fb8a58; end: 104fb8ba7; -[GHImage boundsBox] */

double FUN_104fb8a58(float param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf0e700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf0e700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf0e700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (double)param_1;
}



/* Entry: 104fb8ba8; end: 104fb8bab; -[GHImage getBoundingBoxWithSVGContext:] */

void FUN_104fb8ba8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf20c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_boundsBox_1125a5cb0);
  return;
}



/* Entry: 104fb8bac; end: 104fb8c3f; -[GHImage hitTest:] */

void FUN_104fb8bac(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_a0 [48];
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  dVar1 = param_1;
  dVar2 = param_2;
  func_0x00010bf20c20();
  func_0x00010c27a460(auStack_a0,param_5);
  _CGAffineTransformInvert(&dStack_70,auStack_a0);
  _CGRectContainsPoint
            (dVar1,dVar2,param_3,param_4,dStack_50 + dStack_60 * param_2 + dStack_70 * param_1,
             dStack_48 + dStack_58 * param_2 + dStack_68 * param_1);
  return;
}



/* Entry: 104fb8c40; end: 104fb8c47; -[GHImage getClippingTypeWithSVGContext:] */

undefined8 FUN_104fb8c40(void)

{
  return 4;
}



/* Entry: 104fb8c48; end: 104fb8c4f; -[GHShape newQuartzPath] */

undefined8 FUN_104fb8c48(void)

{
  return 0;
}



/* Entry: 104fb8c50; end: 104fb8cd7; -[GHShape setupContext:withAttributes:withSVGContext:] */

void FUN_104fb8c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e56e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setupContext_withAttributes_with_112667c18,param_3,uVar1,
                      param_5);
  _objc_release(param_5);
  _objc_release(uVar1);
  return;
}



/* Entry: 104fb8cd8; end: 104fb8cff; -[GHShape addPathToQuartzContext:] */

void FUN_104fb8cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c11cfe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbac04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGContextAddPath_110347108)(param_3,param_1);
  return;
}



/* Entry: 104fb8d00; end: 104fb8d37; -[GHShape quartzPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb8d00(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112718b14;
  if (*(long *)(param_1 + lVar2) == 0) {
    lVar1 = param_1;
    func_0x00010c0d8e40();
    *(long *)(param_1 + lVar2) = lVar1;
  }
  return;
}



/* Entry: 104fb8d38; end: 104fb8d43; -[GHShape strokeColor] */

void FUN_104fb8d38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_valueForStyleAttribute__112683610,
             &PTR____CFConstantStringClassReference_110dbf358);
  return;
}



/* Entry: 104fb8d44; end: 104fb8d4b; -[GHShape isClosed] */

undefined8 FUN_104fb8d44(void)

{
  return 0;
}



/* Entry: 104fb8d4c; end: 104fb8dc3; -[GHShape hitTest:] */

void FUN_104fb8d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  
  uVar1 = param_3;
  func_0x00010c06ea60();
  if ((int)uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010c11cfe0(param_3);
    func_0x00010c27a460(auStack_90,param_3);
    _CGAffineTransformInvert(auStack_60,auStack_90);
    _CGPathContainsPoint(param_1,param_2,uVar1,auStack_60,0);
  }
  return;
}



/* Entry: 104fb8dc4; end: 104fb8e93; -[GHShape getBoundingBoxWithSVGContext:] */

undefined8 FUN_104fb8dc4(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_70 [48];
  
  iVar1 = (int)auStack_70;
  lVar2 = param_2;
  func_0x00010c11cfe0();
  if (lVar2 == 0) {
    param_1 = *(undefined8 *)PTR__CGRectZero_110347608;
  }
  else {
    func_0x00010c27a460(auStack_70,param_2);
    _CGAffineTransformIsIdentity();
    if (iVar1 == 0) {
      func_0x00010c27a460(auStack_70,param_2);
      _CGPathCreateCopyByTransformingPath(lVar2,auStack_70);
      _CGPathGetPathBoundingBox();
      _CGPathRelease(lVar2);
    }
    else {
      _CGPathGetPathBoundingBox(lVar2);
    }
  }
  return param_1;
}



/* Entry: 104fb8e94; end: 104fb95d7; -[GHShape renderIntoContext:withSVGContext:] */

/* WARNING: Removing unreachable block (ram,0x000104fb9238) */

void FUN_104fb8e94(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  int iStack_ec;
  undefined1 auStack_c8 [56];
  
  _objc_retain(param_8);
  _CGContextSaveGState(param_7);
  func_0x00010c27a460(auStack_c8,param_5);
  _CGContextConcatCTM(param_7,auStack_c8);
  uVar4 = param_5;
  func_0x00010bf0e700(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2287c0(param_5);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010c25dbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar4;
  func_0x000104fc141c();
  if ((int)uVar14 == 0) {
    uVar16 = 0;
    uVar14 = 0;
  }
  else {
    uVar5 = param_8;
    func_0x00010c0dfd80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b32b0;
    _objc_opt_class(PTR_PTR_1126b32b0);
    uVar14 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar6);
    if ((uVar14 & 1) == 0) {
      puVar6 = PTR_PTR_1126b32a8;
      _objc_opt_class(PTR_PTR_1126b32a8);
      uVar14 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar6);
      if ((uVar14 & 1) == 0) {
        uVar16 = 0;
        uVar14 = 0;
      }
      else {
        _objc_retain(uVar5);
        uVar14 = 0;
        uVar16 = uVar5;
      }
    }
    else {
      uVar14 = uVar5;
      func_0x00010bf0a5a0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = 0;
    }
    _objc_release(uVar5);
  }
  uVar5 = param_5;
  func_0x00010c296fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_5;
  func_0x00010c296fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0720c0();
  if ((uVar8 & 1) == 0) {
    uVar8 = param_5;
    func_0x00010c296fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar7 = uVar8;
    func_0x00010c0720c0();
    iStack_ec = (int)uVar7;
  }
  else {
    iStack_ec = 1;
    uVar8 = uVar7;
  }
  uVar7 = param_5;
  func_0x00010c296fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c08fa60();
  dVar20 = 1.0;
  dVar19 = 1.0;
  if (uVar9 != 0) {
    func_0x00010bfb2c80(uVar7);
    fVar2 = 0.0;
    if (0.0 < SUB84(param_1,0)) {
      fVar2 = SUB84(param_1,0);
    }
    param_1 = (double)(ulong)(uint)fVar2;
    param_2 = 0x3f800000;
    if (fVar2 <= 1.0) {
      dVar19 = (double)fVar2;
    }
  }
  uVar9 = param_5;
  func_0x00010c296fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar9;
  func_0x00010c08fa60();
  if (uVar15 != 0) {
    func_0x00010bfb2c80(uVar9);
    fVar2 = 0.0;
    if (0.0 < SUB84(param_1,0)) {
      fVar2 = SUB84(param_1,0);
    }
    param_1 = (double)(ulong)(uint)fVar2;
    param_2 = 0x3f800000;
    if (fVar2 <= 1.0) {
      dVar20 = (double)fVar2;
    }
  }
  if ((dVar19 <= 0.0) || (uVar15 = uVar5, func_0x00010c0720c0(), (uVar15 & 1) != 0)) {
    bVar3 = false;
  }
  else {
    uVar15 = param_5;
    func_0x00010c06ea60();
    if ((uVar15 & 1) == 0) {
      uVar15 = uVar5;
      func_0x00010c08fa60();
      bVar3 = uVar15 != 0;
    }
    else {
      bVar3 = true;
    }
  }
  uVar18 = 0;
  if ((uVar4 != 0) && (0.0 < dVar20)) {
    uVar15 = uVar4;
    func_0x00010c0720c0();
    uVar18 = (uint)uVar15 ^ 1;
  }
  if (bVar3) {
    uVar17 = param_5;
    func_0x00010bfad500();
    _objc_retainAutoreleasedReturnValue();
    if (uVar17 == 0) {
      uVar10 = param_5;
      func_0x00010bf69640();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar5;
      func_0x000104fc141c();
      if ((int)uVar15 == 0) {
        uVar17 = 0;
        uVar15 = 0;
LAB_104fb9284:
        if (uVar10 != 0) {
          uVar17 = param_8;
          func_0x00010bf40f40();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        uVar11 = param_8;
        func_0x00010c0dfd80();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126b32b0;
        _objc_opt_class(PTR_PTR_1126b32b0);
        uVar15 = uVar11;
        _objc_opt_isKindOfClass(uVar11,puVar6);
        if ((uVar15 & 1) == 0) {
          puVar6 = PTR_PTR_1126b32a8;
          _objc_opt_class(PTR_PTR_1126b32a8);
          uVar15 = uVar11;
          _objc_opt_isKindOfClass(uVar11,puVar6);
          if ((uVar15 & 1) == 0) {
            uVar17 = 0;
            goto LAB_104fb9270;
          }
          _objc_retain(uVar11);
          uVar17 = 0;
          uVar15 = uVar11;
        }
        else {
          uVar17 = uVar11;
          func_0x00010bf0a5a0();
          _objc_retainAutoreleasedReturnValue();
LAB_104fb9270:
          uVar15 = 0;
        }
        _objc_release(uVar11);
        if (uVar17 == 0) goto LAB_104fb9284;
      }
      func_0x00010c19bc00(param_5);
      _objc_release(uVar10);
    }
    else {
      uVar15 = 0;
    }
    param_1 = 1.0;
    uVar10 = uVar17;
    if (dVar19 != 1.0) {
      param_1 = dVar19;
      func_0x00010bf414e0(dVar19);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar17);
    }
    if (uVar10 != 0) {
      uVar17 = uVar10;
      _objc_retainAutorelease(uVar10);
      func_0x00010bdc0fe0();
      _CGContextSetFillColorWithColor(param_7,uVar17);
    }
    iVar12 = 4;
    if (uVar18 == 0) {
      iVar12 = 1;
    }
    iVar13 = 3;
    if (uVar18 == 0) {
      iVar13 = 0;
    }
    if (iStack_ec == 0) {
      iVar12 = iVar13;
    }
    _objc_release(uVar10);
  }
  else {
    uVar15 = 0;
    iVar12 = 2;
  }
  if (uVar18 != 0) {
    uVar17 = uVar14;
    if (uVar14 == 0) {
      uVar17 = param_5;
      func_0x00010c25dbc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar14 = 0;
      if (uVar17 != 0) {
        uVar17 = param_5;
        func_0x00010c25dbc0(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = param_8;
        func_0x00010bf40f40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar17);
        uVar17 = uVar14;
        if (uVar14 != 0) goto LAB_104fb9334;
      }
    }
    else {
LAB_104fb9334:
      uVar14 = uVar17;
      param_1 = 1.0;
      if (dVar20 < 1.0) {
        func_0x00010bf414e0(dVar20,uVar17);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar17);
        param_1 = dVar20;
      }
      uVar17 = uVar14;
      _objc_retainAutorelease(uVar14);
      func_0x00010bdc0fe0();
      _CGContextSetStrokeColorWithColor(param_7,uVar17);
    }
  }
  iVar13 = iVar12;
  if (uVar15 != 0) {
    _CGContextSaveGState(param_7);
    func_0x00010befa6a0(param_5);
    _CGContextRestoreGState(param_7);
    func_0x00010c11cfe0(param_5);
    _CGPathGetPathBoundingBox();
    if (1.0 <= dVar19) {
      func_0x00010bfad5a0(param_1,param_2,param_3,param_4,uVar15);
    }
    else {
      _CGContextSaveGState(param_7);
      _CGContextSetAlpha(dVar19,param_7);
      func_0x00010bfad5a0(param_1,param_2,param_3,param_4,uVar15);
      _CGContextRestoreGState(param_7);
    }
    bVar3 = false;
    iVar13 = 2;
    if (uVar18 == 0) {
      iVar13 = iVar12;
    }
  }
  if (uVar16 == 0) {
LAB_104fb94d8:
    iVar12 = iVar13;
    if (!bVar3 && (uVar18 & 1) == 0) goto LAB_104fb94f8;
  }
  else {
    func_0x00010befa6a0(param_5);
    _CGContextReplacePathWithStrokedPath(param_7);
    func_0x00010c11cfe0(param_5);
    _CGPathGetPathBoundingBox();
    func_0x00010c27a460(auStack_c8,param_5);
    _CGRectApplyAffineTransform(param_1,param_2,param_3,param_4,auStack_c8);
    func_0x00010bfad5a0(uVar16);
    if (!bVar3) {
      uVar18 = 0;
      goto LAB_104fb94d8;
    }
    func_0x00010befa6a0(param_5);
    iVar1 = iVar13;
    if (iVar13 == 3) {
      iVar1 = 0;
    }
    iVar12 = 1;
    if (iVar13 != 4) {
      iVar12 = iVar1;
    }
  }
  func_0x00010befa6a0(param_5);
  _CGContextDrawPath(param_7,iVar12);
LAB_104fb94f8:
  _CGContextRestoreGState(param_7);
  _objc_release(uVar15);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar16);
  _objc_release(uVar4);
  _objc_release(uVar14);
  _objc_release(param_8);
  return;
}



/* Entry: 104fb95d8; end: 104fb967b; -[GHShape addToClipForContext:withSVGContext:objectBoundingBox:] */

void FUN_104fb95d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [48];
  
  _CGContextSaveGState(param_3);
  func_0x00010c27a460(auStack_50,param_1);
  _CGContextConcatCTM(param_3,auStack_50);
  func_0x00010befa6a0(param_1);
  _CGContextRestoreGState(param_3);
  func_0x00010c296fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    _CGContextClip(param_3);
  }
  else {
    _CGContextEOClip(param_3);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 104fb967c; end: 104fb96f3; -[GHShape addToClipPathForContext:withSVGContext:objectBoundingBox:] */

void FUN_104fb967c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_60 [48];
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e56e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_addToClipPathForContext_withSVGC_11259c9e0);
  _CGContextSaveGState(param_3);
  func_0x00010c27a460(auStack_60,param_1);
  _CGContextConcatCTM(param_3,auStack_60);
  func_0x00010befa6a0(param_1);
  _CGContextRestoreGState(param_3);
  return;
}



/* Entry: 104fb96f4; end: 104fb9747; -[GHShape getClippingTypeWithSVGContext:] */

undefined4 FUN_104fb96f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  func_0x00010c296fa0(param_1,param_2,&PTR____CFConstantStringClassReference_110dbf7b8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0720c0();
  uVar2 = 1;
  if ((int)uVar1 != 0) {
    uVar2 = 2;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 104fb9748; end: 104fb9797; -[GHShape dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb9748(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _CGPathRelease(*(undefined8 *)(param_1 + _DAT_112718b14));
  puStack_28 = PTR_PTR_1126e56e8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104fb9798; end: 104fb97ab; -[GHShape .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fb9798(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718b18,0);
  return;
}



/* Entry: 104fb97ac; end: 104fb98e7; -[GHCircle newQuartzPath] */

undefined8 FUN_104fb97ac(float param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar1 = param_2;
  _CGPathCreateMutable();
  uVar2 = param_2;
  func_0x00010bf0e700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar4 = (double)param_1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf0e700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar5 = (double)param_1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bf0e700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar6 = (double)param_1;
  _objc_release(uVar2);
  _objc_release(param_2);
  _CGPathAddEllipseInRect(dVar4 - dVar6,dVar5 - dVar6,dVar6 + dVar6,dVar6 + dVar6,uVar1,0);
  uVar2 = uVar1;
  _CGPathCreateCopy(uVar1);
  _CGPathRelease(uVar1);
  return uVar2;
}



/* Entry: 104fb98e8; end: 104fb98ef; -[GHLine isClosed] */

undefined8 FUN_104fb98e8(void)

{
  return 0;
}



/* Entry: 104fb98f0; end: 104fb9a7b; -[GHLine newQuartzPath] */

undefined8 FUN_104fb98f0(float param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar1 = param_2;
  _CGPathCreateMutable();
  uVar2 = param_2;
  func_0x00010bf0e700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar4 = (double)param_1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf0e700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar5 = (double)param_1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf0e700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar6 = (double)param_1;
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bf0e700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar2);
  _objc_release(param_2);
  _CGPathMoveToPoint(dVar4,dVar5,uVar1,0);
  _CGPathAddLineToPoint(dVar6,(double)param_1,uVar1,0);
  uVar2 = uVar1;
  _CGPathCreateCopy(uVar1);
  _CGPathRelease(uVar1);
  return uVar2;
}



/* Entry: 104fb9a7c; end: 104fb9a83; -[GHPolyline isClosed] */

undefined8 FUN_104fb9a7c(void)

{
  return 0;
}



/* Entry: 104fb9a84; end: 104fb9baf; -[GHPolyline renderingPath] */

void FUN_104fb9a84(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                      &PTR____CFConstantStringClassReference_110dbf078);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf44700(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = uVar3;
  func_0x00010c0d3c80();
  func_0x00010c12d360();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  uVar6 = uVar3;
  func_0x00010bf529e0();
  uVar7 = uVar1;
  if (uVar5 != uVar6) {
    _objc_retain(uVar4);
    _objc_release(uVar3);
    uVar7 = uVar4;
    func_0x00010bf446e0(uVar4,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar3 = uVar4;
  }
  uVar1 = uVar3;
  func_0x00010bf529e0();
  if ((uVar1 & 1) != 0) {
    _objc_release(uVar7);
    uVar7 = 0;
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 104fb9bb0; end: 104fb9bb7; -[GHPolygon isClosed] */

undefined8 FUN_104fb9bb0(void)

{
  return 1;
}



/* Entry: 104fb9bb8; end: 104fb9d07; -[GHPolygon renderingPath] */

void FUN_104fb9bb8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                      &PTR____CFConstantStringClassReference_110dbf078);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf44700(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = uVar3;
  func_0x00010c0d3c80();
  func_0x00010c12d360();
  uVar5 = uVar4;
  func_0x00010bf529e0();
  uVar6 = uVar3;
  func_0x00010bf529e0();
  uVar7 = uVar1;
  if (uVar5 != uVar6) {
    _objc_retain(uVar4);
    _objc_release(uVar3);
    uVar7 = uVar4;
    func_0x00010bf446e0(uVar4,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar3 = uVar4;
  }
  uVar1 = uVar3;
  func_0x00010bf529e0();
  if ((uVar1 & 1) != 0) {
    _objc_release(uVar7);
    uVar7 = 0;
  }
  uVar1 = uVar7;
  func_0x00010c25ce40(uVar7,param_2,&PTR____CFConstantStringClassReference_110dbf918);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fb9d08; end: 104fb9d0f; -[GHEllipse isClosed] */

undefined8 FUN_104fb9d08(void)

{
  return 1;
}



/* Entry: 104fb9d10; end: 104fb9eb7; -[GHEllipse newQuartzPath] */

ulong FUN_104fb9d10(float param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar2 = param_2;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar3 = (double)param_1;
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf0e700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar4 = (double)param_1;
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bf0e700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar5 = (double)param_1;
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  dVar6 = (double)param_1;
  _objc_release(uVar2);
  _objc_release();
  _CGRectIsEmpty(dVar3 - dVar5,dVar4 - dVar6,dVar5 + dVar5,dVar6 + dVar6);
  if ((param_2 & 1) == 0) {
    _CGPathCreateMutable();
    _CGPathAddEllipseInRect(dVar3 - dVar5,dVar4 - dVar6,dVar5 + dVar5,dVar6 + dVar6);
    uVar2 = param_2;
    _CGPathCreateCopy(param_2);
    _CGPathRelease(param_2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 104fb9eb8; end: 104fba007; -[GHRectangle asCGRect] */

double FUN_104fb9eb8(float param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf0e700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf0e700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf0e700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (double)param_1;
}



/* Entry: 104fba008; end: 104fba057; -[GHRectangle hitTest:] */

undefined1 * FUN_104fba008(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e56f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_hitTest__1125d6840);
  func_0x00010bf0a580(param_1);
  return (undefined1 *)puVar1;
}



/* Entry: 104fba058; end: 104fba05f; -[GHRectangle isClosed] */

undefined8 FUN_104fba058(void)

{
  return 1;
}



/* Entry: 104fba060; end: 104fba323; -[GHRectangle newQuartzPath] */

ulong FUN_104fba060(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  uVar1 = param_5;
  func_0x00010bf0a580();
  dVar6 = param_1;
  _CGRectIsEmpty();
  if ((uVar1 & 1) == 0) {
    _CGPathCreateMutable();
    uVar2 = param_5;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    if (uVar3 == 0) {
      _objc_retain(uVar4);
      uVar3 = uVar4;
    }
    if (uVar4 == 0) {
      _objc_retain(uVar3);
      uVar4 = uVar3;
    }
    func_0x00010bf885a0(uVar3);
    if ((dVar6 <= 0.0) || (func_0x00010bf885a0(uVar4), dVar6 <= 0.0)) {
      _CGPathAddRect(param_1,param_2,param_3,param_4,uVar1,0);
    }
    else {
      func_0x00010bfb2c80(uVar3);
      fVar5 = SUB84(dVar6,0);
      dVar8 = (double)fVar5;
      func_0x00010bfb2c80(uVar4);
      dVar6 = param_3 * 0.5;
      if (dVar8 <= param_3 * 0.5) {
        dVar6 = dVar8;
      }
      dVar8 = param_4 * 0.5;
      if ((double)fVar5 <= param_4 * 0.5) {
        dVar8 = (double)fVar5;
      }
      dVar7 = param_1 + dVar6;
      _CGPathMoveToPoint(dVar7,param_2,uVar1,0);
      param_3 = param_1 + param_3;
      _CGPathAddLineToPoint(param_3 - dVar6,param_2,uVar1,0);
      FUN_104fc3728(dVar6,dVar8,0x3ff921fb54442d18,param_3,uVar1,0,1);
      param_4 = param_2 + param_4;
      _CGPathAddLineToPoint(param_3,param_4 - dVar8,uVar1,0);
      FUN_104fc3728(dVar6,dVar8,0x3ff921fb54442d18,param_3 - dVar6,param_4,uVar1,0,1);
      _CGPathAddLineToPoint(dVar7,param_4,uVar1,0);
      FUN_104fc3728(dVar6,dVar8,0x3ff921fb54442d18,param_1,param_4 - dVar8,uVar1,0,1);
      _CGPathAddLineToPoint(param_1,param_2 + dVar8,uVar1,0);
      FUN_104fc3728(dVar6,dVar8,0x3ff921fb54442d18,dVar7,param_2,uVar1,0,1);
      _CGPathCloseSubpath(uVar1);
    }
    uVar2 = uVar1;
    _CGPathCreateCopy(uVar1);
    _CGPathRelease(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 104fba324; end: 104fba36f; -[GHPath renderingPath] */

void FUN_104fba324(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fba370; end: 104fba3fb; -[GHPath isClosed] */

undefined8 FUN_104fba370(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c1308a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c25d0a0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdcf80();
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 104fba3fc; end: 104fba533; -[GHPath newQuartzPath] */

undefined * FUN_104fba3fc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  float fVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  lVar1 = param_1;
  uStack_50 = uVar6;
  func_0x00010bf0e700();
  fVar5 = (float)uVar6;
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0 || lVar3 != 0) {
    func_0x00010bfb2c80(lVar2);
    dVar7 = (double)fVar5;
    func_0x00010bfb2c80(lVar3);
    _CGAffineTransformMakeTranslation(&uStack_70,dVar7,(double)fVar5);
  }
  puVar4 = PTR_PTR_1126b32f8;
  func_0x00010c1308a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  func_0x00010c0d85e0(puVar4,param_2,param_1,&uStack_a0);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return puVar4;
}



/* Entry: 104fba534; end: 104fba737; -[GHSwitchGroup children] */

void FUN_104fba534(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = PTR_PTR_1126e56f8;
  puVar1 = &uStack_f8;
  uStack_f8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_children_1125abd70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010bf529e0(puVar1);
  func_0x00010bffc4a0(puVar2);
  puVar3 = puVar1;
  func_0x00010bf529e0();
  if (puVar3 != (undefined8 *)0x0) {
    _CFLocaleCopyPreferredLanguages();
    _CFArrayGetValueAtIndex();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da60(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c260c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _CFRelease(puVar3);
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(puVar1);
    puVar3 = puVar1;
    func_0x00010bf52a60();
    if (puVar3 != (undefined8 *)0x0) {
      lVar8 = *plStack_130;
      do {
        puVar4 = PTR_s_environmentOKWithISOCode__1125c3a30;
        puVar9 = (undefined8 *)0x0;
        do {
          if (*plStack_130 != lVar8) {
            _objc_enumerationMutation(puVar1);
          }
          uVar7 = *(ulong *)(lStack_138 + (long)puVar9 * 8);
          uVar6 = uVar7;
          _objc_opt_respondsToSelector(uVar7,puVar4);
          if (((uVar6 & 1) != 0) && (func_0x00010bf98220(), (int)uVar7 != 0)) {
            func_0x00010befa120(puVar2);
            goto LAB_104fba6cc;
          }
          puVar9 = (undefined8 *)((long)puVar9 + 1);
        } while (puVar3 != puVar9);
        puVar3 = puVar1;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined8 *)0x0);
    }
LAB_104fba6cc:
    _objc_release(puVar1);
    _objc_release(puVar5);
  }
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_148 = FUN_104fba738;
    puStack_158 = PTR_PTR_1126e5700;
    puStack_160 = puVar1;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&puStack_160,PTR_s_hidden_1125d5e80);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104fba738; end: 104fba76b; -[GHShapeGroup hidden] */

void FUN_104fba738(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5700;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_hidden_1125d5e80);
  return;
}



/* Entry: 104fba76c; end: 104fba90b; -[GHShapeGroup calculateTransform] */

void FUN_104fba76c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  uVar6 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  param_1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  *param_1 = uVar6;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  uVar6 = *(undefined8 *)(puVar1 + 0x20);
  param_1[5] = *(undefined8 *)(puVar1 + 0x28);
  param_1[4] = uVar6;
  lVar2 = param_2;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    FUN_104fc1ca8(param_1,lVar3);
  }
  lVar2 = param_2;
  func_0x00010bf0e700(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010bfb2c80(lVar4);
  fVar5 = (float)uVar6;
  if ((fVar5 != 0.0) && (!NAN(fVar5))) {
    uStack_98 = param_1[1];
    uStack_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    _CGAffineTransformTranslate(&uStack_70,(double)fVar5,0,&uStack_a0);
    param_1[1] = uStack_68;
    *param_1 = uStack_70;
    param_1[3] = uStack_58;
    param_1[2] = uStack_60;
    param_1[5] = uStack_48;
    param_1[4] = uStack_50;
    uVar6 = uStack_50;
  }
  fVar5 = (float)uVar6;
  func_0x00010bf0e700(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bfb2c80(lVar2);
  if ((fVar5 != 0.0) && (!NAN(fVar5))) {
    uStack_98 = param_1[1];
    uStack_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    _CGAffineTransformTranslate(&uStack_70,0,(double)fVar5,&uStack_a0);
    param_1[1] = uStack_68;
    *param_1 = uStack_70;
    param_1[3] = uStack_58;
    param_1[2] = uStack_60;
    param_1[5] = uStack_48;
    param_1[4] = uStack_50;
  }
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  return;
}



/* Entry: 104fba90c; end: 104fba9bf; -[GHShapeGroup cloneWithOverridingDictionary:] */

void FUN_104fba90c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5700;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_cloneWithOverridingDictionary__1125ad018);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf38da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17c360(puVar1);
  _objc_release(param_1);
  if (puVar1 == (undefined8 *)0x0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x00010bf27a00(&uStack_60,puVar1);
  }
  func_0x00010c17d4e0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fba9c0; end: 104fba9df; -[GHShapeGroup setCloneTransform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fba9c0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112718b28);
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar3 = param_3[5];
  uVar2 = param_3[4];
  uVar6 = *param_3;
  puVar1[1] = param_3[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  return;
}



/* Entry: 104fba9e0; end: 104fbb593; -[GHShapeGroup children] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 **** FUN_104fba9e0(undefined **param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 ****ppppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 ****ppppuVar13;
  undefined **ppuVar14;
  undefined8 ****unaff_x22;
  long lVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 ***pppuStack_390;
  undefined *puStack_388;
  undefined8 ***pppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined8 ***pppuStack_368;
  undefined1 *puStack_360;
  code *pcStack_358;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 ***pppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined *puStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  ulong *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar14 = (undefined **)(long)_DAT_112718b2c;
  ppppuVar13 = *(undefined8 *****)((long)param_1 + (long)ppuVar14);
  ppppuVar1 = ppppuVar13;
  _objc_retain();
  if (ppppuVar13 == (undefined8 ****)0x0) {
    unaff_x22 = (undefined8 ****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuStack_308 = ppuVar14;
    _objc_alloc();
    ppuVar14 = param_1;
    func_0x00010bf38da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010bffc4a0();
    _objc_release(ppuVar14);
    puVar2 = PTR_PTR_1126b3288;
    ppuVar14 = param_1;
    func_0x00010bf0e700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb3b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = param_1;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar14;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    ppuVar14 = ppuVar4;
    func_0x00010c08fa60();
    if (ppuVar14 != (undefined **)0x0) {
      func_0x00010c1d0560(puVar3);
    }
    ppuVar14 = param_1;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar14;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    ppuVar14 = ppuVar5;
    func_0x00010c08fa60();
    if (ppuVar14 != (undefined **)0x0) {
      func_0x00010c1d0560(puVar3);
    }
    ppuVar14 = param_1;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar14;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    ppuVar14 = ppuVar16;
    func_0x00010c08fa60();
    if ((ppuVar14 != (undefined **)0x0) &&
       (ppuVar14 = ppuVar16, func_0x00010c0720c0(), ((ulong)ppuVar14 & 1) == 0)) {
      func_0x00010c1d0560(puVar3);
    }
    ppuVar14 = param_1;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar14;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    ppuVar14 = ppuVar6;
    func_0x00010c08fa60();
    if ((ppuVar14 != (undefined **)0x0) &&
       (ppuVar14 = ppuVar6, func_0x00010c0720c0(), ((ulong)ppuVar14 & 1) == 0)) {
      func_0x00010c1d0560(puVar3);
    }
    ppuVar14 = param_1;
    ppuStack_328 = ppuVar6;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar14;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    ppuVar14 = ppuVar6;
    func_0x00010c08fa60();
    if ((ppuVar14 != (undefined **)0x0) &&
       (ppuVar14 = ppuVar6, func_0x00010c0720c0(), ((ulong)ppuVar14 & 1) == 0)) {
      func_0x00010c1d0560(puVar3);
    }
    ppuVar14 = param_1;
    ppuStack_330 = ppuVar6;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar14;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    ppuVar14 = ppuVar6;
    func_0x00010c08fa60();
    if ((ppuVar14 != (undefined **)0x0) &&
       (ppuVar14 = ppuVar6, func_0x00010c0720c0(), ((ulong)ppuVar14 & 1) == 0)) {
      func_0x00010c1d0560(puVar3);
    }
    ppuVar14 = param_1;
    ppuStack_338 = ppuVar6;
    ppuStack_320 = ppuVar16;
    ppuStack_318 = ppuVar5;
    ppuStack_310 = ppuVar4;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar14;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
    ppuVar14 = ppuVar4;
    func_0x00010c08fa60();
    if ((ppuVar14 != (undefined **)0x0) &&
       (ppuVar14 = ppuVar4, func_0x00010c0720c0(), ((ulong)ppuVar14 & 1) == 0)) {
      func_0x00010c1d0560(puVar3);
    }
    ppuVar5 = param_1;
    ppuStack_340 = ppuVar4;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar5;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    ppuVar4 = ppuVar14;
    func_0x00010c08fa60();
    if ((ppuVar4 != (undefined **)0x0) &&
       (ppuVar4 = ppuVar14, func_0x00010c0720c0(), ((ulong)ppuVar4 & 1) == 0)) {
      func_0x00010c1d0560(puVar3);
    }
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    puStack_220 = (ulong *)0x0;
    ppuVar4 = param_1;
    ppuStack_348 = ppuVar14;
    ppuStack_300 = param_1;
    func_0x00010bf38da0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &uStack_230;
    ppuVar5 = ppuVar4;
    func_0x00010bf52a60();
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar14 = (undefined **)*puStack_220;
      ppuStack_2b8 = &PTR____CFConstantStringClassReference_110dbf178;
      ppuStack_2d8 = &PTR____CFConstantStringClassReference_110dbf1b8;
      ppuStack_2f8 = ppuVar4;
      puStack_2f0 = puVar3;
      puStack_2e8 = puVar2;
      pppuStack_2e0 = unaff_x22;
      ppuStack_2d0 = ppuVar14;
      do {
        ppuVar16 = (undefined **)0x0;
        ppuStack_2c8 = ppuVar5;
        do {
          if ((undefined **)*puStack_220 != ppuVar14) {
            _objc_enumerationMutation(ppuVar4);
          }
          puVar17 = *(undefined **)(lStack_228 + (long)ppuVar16 * 8);
          puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          puVar7 = puVar17;
          _objc_opt_isKindOfClass(puVar17,puVar10);
          if (((ulong)puVar7 & 1) != 0) {
            _objc_retain(puVar17);
            puVar10 = puVar17;
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar10;
            func_0x00010bf529e0();
            if ((puVar7 == (undefined *)0x0) ||
               (puVar7 = puVar3, func_0x00010bf529e0(), puVar7 == (undefined *)0x0)) {
              puVar7 = puVar3;
              func_0x00010bf529e0();
              if (puVar7 != (undefined *)0x0) {
                _objc_retain(puVar3);
                puVar7 = puVar3;
                goto LAB_104fbb0e4;
              }
            }
            else {
              puStack_2c0 = puVar17;
              func_0x00010c0d3c80();
              puVar2 = puVar10;
              func_0x00010bf002e0();
              _objc_retainAutoreleasedReturnValue();
              uStack_268 = 0;
              uStack_270 = 0;
              uStack_258 = 0;
              plStack_260 = (long *)0x0;
              uStack_248 = 0;
              uStack_250 = 0;
              uStack_238 = 0;
              uStack_240 = 0;
              puVar7 = puVar2;
              func_0x00010bf52a60();
              if (puVar7 != (undefined *)0x0) {
                lVar15 = *plStack_260;
                do {
                  puVar17 = (undefined *)0x0;
                  do {
                    if (*plStack_260 != lVar15) {
                      _objc_enumerationMutation(puVar2);
                    }
                    puVar8 = puVar10;
                    func_0x00010c0dff20();
                    _objc_retainAutoreleasedReturnValue();
                    puVar9 = puVar8;
                    func_0x00010c0720c0();
                    if (((ulong)puVar9 & 1) == 0) {
                      func_0x00010c1d0560(puVar3);
                    }
                    _objc_release(puVar8);
                    puVar17 = puVar17 + 1;
                  } while (puVar7 != puVar17);
                  puVar7 = puVar2;
                  func_0x00010bf52a60();
                } while (puVar7 != (undefined *)0x0);
              }
              puVar7 = puVar3;
              func_0x00010bf002e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar2);
              uStack_288 = 0;
              uStack_290 = 0;
              uStack_278 = 0;
              uStack_280 = 0;
              uStack_2a8 = 0;
              uStack_2b0 = 0;
              uStack_298 = 0;
              plStack_2a0 = (long *)0x0;
              _objc_retain(puVar7);
              puVar2 = puVar7;
              func_0x00010bf52a60();
              if (puVar2 != (undefined *)0x0) {
                lVar15 = *plStack_2a0;
                do {
                  puVar17 = (undefined *)0x0;
                  do {
                    if (*plStack_2a0 != lVar15) {
                      _objc_enumerationMutation(puVar7);
                    }
                    puVar8 = puVar3;
                    func_0x00010c0dff20();
                    _objc_retainAutoreleasedReturnValue();
                    puVar9 = puVar8;
                    func_0x00010c0720c0();
                    if ((int)puVar9 != 0) {
                      func_0x00010c12d3e0(puVar3);
                    }
                    _objc_release(puVar8);
                    puVar17 = puVar17 + 1;
                  } while (puVar2 != puVar17);
                  puVar2 = puVar7;
                  func_0x00010bf52a60();
                } while (puVar2 != (undefined *)0x0);
              }
              _objc_release(puVar7);
              _objc_release(puVar10);
              puVar10 = puVar7;
              puVar17 = puStack_2c0;
              unaff_x22 = (undefined8 ****)pppuStack_2e0;
              puVar2 = puStack_2e8;
              puVar7 = puStack_2f0;
              ppuVar4 = ppuStack_2f8;
LAB_104fbb0e4:
              _objc_release(puVar10);
              puVar10 = puVar3;
              puVar3 = puVar7;
            }
            puVar7 = puVar17;
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010c0720c0();
            puVar9 = puVar10;
            if ((((((ulong)puVar8 & 1) != 0) ||
                 (puVar8 = puVar7, func_0x00010c0720c0(), ((ulong)puVar8 & 1) != 0)) ||
                (puVar8 = puVar7, func_0x00010c0720c0(), (int)puVar8 != 0)) &&
               (puVar8 = puVar2, func_0x00010bf529e0(), puVar8 != (undefined *)0x0)) {
              puVar8 = puVar10;
              func_0x00010bf529e0();
              puVar9 = puVar2;
              if (puVar8 == (undefined *)0x0) {
                _objc_retain(puVar2);
              }
              else {
                func_0x00010c0d3c80();
                func_0x00010bef7f60();
              }
              _objc_release(puVar10);
            }
            puVar10 = puVar17;
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            if (puVar9 == puVar10) {
LAB_104fbb210:
              _objc_release(puVar10);
            }
            else {
              puVar8 = puVar9;
              puStack_2c0 = puVar7;
              func_0x00010bf529e0();
              _objc_release(puVar10);
              puVar7 = puStack_2c0;
              if (puVar8 != (undefined *)0x0) {
                puVar10 = puVar17;
                func_0x00010c0d3c80(puVar17);
                func_0x00010c1d0560();
                puVar7 = puVar10;
                func_0x00010bf51e00(puVar10);
                _objc_release(puVar17);
                puVar17 = puVar7;
                puVar7 = puStack_2c0;
                goto LAB_104fbb210;
              }
            }
            puVar10 = puVar7;
            func_0x00010c0720c0();
            ppuVar14 = &PTR_PTR_1126b3300;
            if (((ulong)puVar10 & 1) == 0) {
              puVar10 = puVar7;
              func_0x00010c0720c0();
              ppuVar14 = &PTR_PTR_1126b3308;
              if (((ulong)puVar10 & 1) != 0) goto LAB_104fbb380;
              puVar10 = puVar7;
              func_0x00010c0720c0();
              ppuVar14 = &PTR_PTR_1126b3310;
              if (((ulong)puVar10 & 1) != 0) goto LAB_104fbb380;
              puVar10 = puVar7;
              func_0x00010c0720c0();
              ppuVar14 = &PTR_PTR_1126b3318;
              if (((ulong)puVar10 & 1) != 0) goto LAB_104fbb380;
              puVar10 = puVar7;
              func_0x00010c0720c0();
              ppuVar14 = &PTR_PTR_1126b3320;
              if (((ulong)puVar10 & 1) != 0) goto LAB_104fbb380;
              puVar10 = puVar7;
              func_0x00010c0720c0();
              ppuVar14 = &PTR_PTR_1126b32b8;
              if (((ulong)puVar10 & 1) != 0) goto LAB_104fbb380;
              puVar10 = puVar7;
              func_0x00010c0720c0();
              ppuVar14 = &PTR_PTR_1126b3328;
              if (((ulong)puVar10 & 1) != 0) goto LAB_104fbb380;
              puVar10 = puVar7;
              func_0x00010c0720c0();
              ppuVar14 = &PTR_PTR_1126b3330;
              if (((ulong)puVar10 & 1) != 0) goto LAB_104fbb380;
              puVar10 = puVar7;
              func_0x00010c0720c0();
              ppuVar14 = &PTR_PTR_1126b3338;
              if (((ulong)puVar10 & 1) != 0) goto LAB_104fbb380;
              puVar10 = puVar7;
              func_0x00010c0720c0();
              ppuVar14 = &PTR_PTR_1126b3340;
              if (((ulong)puVar10 & 1) != 0) goto LAB_104fbb380;
              puVar10 = puVar7;
              func_0x00010c0720c0();
              ppuVar14 = &PTR_PTR_1126b3348;
              if (((ulong)puVar10 & 1) != 0) goto LAB_104fbb380;
              puVar10 = puVar7;
              func_0x00010c0720c0();
              ppuVar14 = &PTR_PTR_1126b3350;
              if (((ulong)puVar10 & 1) != 0) goto LAB_104fbb380;
              puVar10 = puVar7;
              func_0x00010c0720c0();
              if ((int)puVar10 != 0) {
                puVar10 = PTR_PTR_1126b32f0;
                func_0x00010c0d8ac0();
                if (puVar10 != (undefined *)0x0) goto LAB_104fbb394;
                goto LAB_104fbb3a0;
              }
              puVar10 = puVar7;
              func_0x00010c0720c0();
              ppuVar14 = &PTR_PTR_1126b3358;
              if (((ulong)puVar10 & 1) != 0) goto LAB_104fbb380;
              puVar10 = puVar7;
              func_0x00010c0720c0();
              ppuVar14 = &PTR_PTR_1126b32e0;
              if (((ulong)puVar10 & 1) != 0) goto LAB_104fbb380;
              puVar10 = puVar7;
              func_0x00010c0720c0();
              ppuVar14 = &PTR_PTR_1126b3360;
              if (((ulong)puVar10 & 1) != 0) goto LAB_104fbb380;
              puVar10 = puVar7;
              func_0x00010c0720c0();
              ppuVar14 = &PTR_PTR_1126b32b0;
              if (((ulong)puVar10 & 1) != 0) goto LAB_104fbb380;
              puVar10 = puVar7;
              func_0x00010c0720c0();
              ppuVar14 = &PTR_PTR_1126b3368;
              if (((ulong)puVar10 & 1) != 0) goto LAB_104fbb380;
              puVar10 = puVar7;
              func_0x00010c0720c0();
              ppuVar14 = &PTR_PTR_1126b3370;
              if ((int)puVar10 != 0) goto LAB_104fbb380;
            }
            else {
LAB_104fbb380:
              puVar10 = *ppuVar14;
              _objc_alloc(puVar10);
              func_0x00010c00c560();
LAB_104fbb394:
              func_0x00010befa120(unaff_x22);
LAB_104fbb3a0:
              _objc_release(puVar10);
            }
            _objc_release(puVar7);
            _objc_release(puVar9);
            _objc_release(puVar17);
            ppuVar5 = ppuStack_2c8;
            ppuVar14 = ppuStack_2d0;
          }
          param_1 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
          ppuVar16 = (undefined **)((long)ppuVar16 + 1);
        } while (ppuVar16 != ppuVar5);
        param_3 = &uStack_230;
        ppuVar5 = ppuVar4;
        func_0x00010bf52a60();
      } while (ppuVar5 != (undefined **)0x0);
    }
    _objc_release(ppuVar4);
    ppppuVar13 = unaff_x22;
    func_0x00010bf51e00();
    uVar11 = *(undefined8 *)((long)ppuStack_300 + (long)ppuStack_308);
    *(undefined8 *****)((long)ppuStack_300 + (long)ppuStack_308) = ppppuVar13;
    _objc_release(uVar11);
    _objc_retain(ppppuVar13);
    _objc_release(ppuStack_348);
    _objc_release(ppuStack_340);
    _objc_release(ppuStack_338);
    _objc_release(ppuStack_330);
    _objc_release(ppuStack_328);
    _objc_release(ppuStack_320);
    _objc_release(ppuStack_318);
    _objc_release(ppuStack_310);
    _objc_release(puVar3);
    _objc_release(puVar2);
    ppppuVar1 = unaff_x22;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_358 = FUN_104fbb594;
    pppuStack_380 = unaff_x22;
    ppuStack_378 = param_1;
    ppuStack_370 = ppuVar14;
    pppuStack_368 = ppppuVar13;
    puStack_360 = &stack0xfffffffffffffff0;
    _objc_retain(param_3);
    puStack_388 = PTR_PTR_1126e5700;
    ppppuVar13 = &pppuStack_390;
    pppuStack_390 = ppppuVar1;
    _objc_msgSendSuper2(ppppuVar13,PTR_s_initWithDictionary__1125e0b28,param_3);
    if (ppppuVar13 != (undefined8 ****)0x0) {
      puVar12 = (undefined8 *)((long)ppppuVar13 + (long)_DAT_112718b28);
      func_0x00010bf27a00(&uStack_3c0,ppppuVar13);
      puVar12[3] = uStack_3a8;
      puVar12[2] = uStack_3b0;
      puVar12[5] = uStack_398;
      puVar12[4] = uStack_3a0;
      puVar12[1] = uStack_3b8;
      *puVar12 = uStack_3c0;
      puVar12 = param_3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)((long)ppppuVar13 + (long)_DAT_112718b30);
      *(undefined8 **)((long)ppppuVar13 + (long)_DAT_112718b30) = puVar12;
      _objc_release(uVar11);
    }
    _objc_release(param_3);
    return ppppuVar13;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppuVar13);
  return ppppuVar13;
}



/* Entry: 104fbb594; end: 104fbb65b; -[GHShapeGroup initWithDictionary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_104fbb594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e5700;
  puVar2 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithDictionary__1125e0b28,param_3);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_112718b28);
    func_0x00010bf27a00(&uStack_70,puVar2);
    puVar1[3] = uStack_58;
    puVar1[2] = uStack_60;
    puVar1[5] = uStack_48;
    puVar1[4] = uStack_50;
    puVar1[1] = uStack_68;
    *puVar1 = uStack_70;
    uVar3 = param_3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_112718b30);
    *(undefined8 *)((long)puVar2 + (long)_DAT_112718b30) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 104fbb65c; end: 104fbb6b3; -[GHShapeGroup calculatedHash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104fbb65c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  plVar1 = &lStack_30;
  puStack_28 = PTR_PTR_1126e5700;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_calculatedHash_1125a7858);
  lVar2 = *(long *)(param_1 + _DAT_112718b30);
  func_0x00010bfde980(lVar2);
  return (undefined1 *)((long)plVar1 + lVar2);
}



/* Entry: 104fbb6b4; end: 104fbb78b; -[GHShapeGroup isEqual:] */

long FUN_104fbb6b4(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  iVar1 = (int)&lStack_40;
  _objc_retain(param_3);
  if (param_3 == param_1) {
    lVar3 = 1;
  }
  else {
    puStack_38 = PTR_PTR_1126e5700;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_isEqual__1125fa0c8,param_3);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      _objc_retain(param_3);
      func_0x00010bf38f20(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010bf38f20(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      lVar3 = param_1;
      func_0x00010c071ae0(param_1);
      _objc_release(lVar2);
      _objc_release(param_1);
    }
  }
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104fbb78c; end: 104fbb853; -[GHShapeGroup usesParentsCoordinates] */

ulong FUN_104fbb78c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010bf0e700(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 104fbb854; end: 104fbba5f; -[GHShapeGroup getBoundingBoxWithSVGContext:] */

undefined1 *
FUN_104fbb854(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,long param_5,
             undefined8 param_6,undefined1 *param_7)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double dVar22;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  double dStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  double dStack_268;
  undefined8 uStack_260;
  long lStack_1d8;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [128];
  long lStack_98;
  ulong uVar11;
  
  puVar7 = &uStack_160;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  uVar19 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar20 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  dVar22 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010bf38f20();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  puVar6 = auStack_118;
  lVar1 = param_5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar12 = *plStack_150;
    do {
      lVar13 = 0;
      do {
        uVar14 = uVar16;
        uVar15 = param_2;
        uVar17 = param_3;
        dVar18 = param_4;
        if (*plStack_150 != lVar12) {
          _objc_enumerationMutation(param_5);
          uVar14 = uVar16;
          uVar15 = param_2;
          uVar17 = param_3;
          dVar18 = param_4;
        }
        uVar11 = *(ulong *)(lStack_158 + lVar13 * 8);
        iVar10 = (int)uVar11;
        func_0x00010bf98240();
        uVar16 = uVar14;
        param_2 = uVar15;
        param_3 = uVar17;
        param_4 = dVar18;
        if (iVar10 != 0) {
          func_0x00010bfc31c0();
          _CGRectIsNull(uVar19,uVar20,uVar21,dVar22);
          if (((uVar11 & 1) == 0) && (_CGRectIsNull(uVar14,uVar15,uVar17,dVar18), (uVar11 & 1) == 0)
             ) {
            _CGRectUnion();
            uVar16 = uVar19;
            param_2 = uVar20;
            param_3 = uVar21;
            param_4 = dVar22;
          }
          else {
            uVar16 = uVar14;
            param_2 = uVar15;
            param_3 = uVar17;
            param_4 = dVar18;
            _CGRectIsNull();
            if ((uVar11 & 1) == 0) {
              uVar19 = uVar14;
              uVar20 = uVar15;
              uVar21 = uVar17;
              dVar22 = dVar18;
            }
          }
        }
        lVar13 = lVar13 + 1;
      } while (lVar1 != lVar13);
      puVar6 = auStack_118;
      lVar1 = param_5;
      puVar7 = &uStack_160;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return param_7;
  }
  ___stack_chk_fail();
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  _CGContextSaveGState(puVar7);
  func_0x00010c27a460(&uStack_288,param_7);
  uStack_2b8 = uStack_280;
  uStack_2c0 = uStack_288;
  uStack_2a8 = uStack_270;
  uStack_2b0 = uStack_278;
  uStack_298 = uStack_260;
  dStack_2a0 = dStack_268;
  _CGContextConcatCTM(puVar7,&uStack_2c0);
  puVar9 = PTR_PTR_1126b32d8;
  puVar2 = param_7;
  func_0x00010bf0e700(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2287c0(puVar9);
  _objc_release(puVar2);
  puVar9 = PTR_PTR_1126b32e0;
  puVar2 = param_7;
  func_0x00010bf0e700(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3d800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar16 = uStack_278;
  dVar22 = dStack_268;
  if (puVar9 != (undefined *)0x0) {
    uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    dVar22 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
    param_4 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010befc0c0(*(undefined8 *)PTR__CGRectZero_110347608,uVar16,dVar22,param_4,puVar9);
  }
  puVar2 = puVar6;
  func_0x00010bf5e400();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_7;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010c0720c0();
  if ((((ulong)puVar3 & 1) == 0) &&
     (puVar3 = puVar4, func_0x00010c08fa60(), puVar3 != (undefined1 *)0x0)) {
    puVar3 = puVar4;
    func_0x00010c08fa60();
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      puVar3 = puVar6;
      func_0x00010bf40f40(puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  func_0x00010bf38f20();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = 0;
  puVar5 = param_7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined1 *)0x0) {
    puVar8 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_7);
      }
      uVar21 = *(undefined8 *)((long)puVar8 * 8);
      uVar20 = uVar21;
      func_0x00010bf98240();
      if ((int)uVar20 != 0) {
        func_0x00010c1870c0(puVar6);
        func_0x00010c12fd20(uVar21);
      }
      puVar8 = puVar8 + 1;
    } while (puVar5 != puVar8);
    puVar5 = param_7;
    func_0x00010bf52a60();
  }
  puVar5 = puVar2;
  func_0x00010c1870c0(puVar6);
  _CGContextRestoreGState(puVar7);
  _objc_release(param_7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puVar2 = puVar6;
  func_0x00010bfc31c0();
  _CGRectIsNull();
  if (((ulong)puVar2 & 1) == 0) {
    lVar12 = (long)dVar22;
    func_0x000104fc1bfc(lVar12,(long)param_4);
    _CGContextTranslateCTM(uVar19,uVar16);
    func_0x00010c12f800(puVar6);
    lVar1 = lVar12;
    _CGBitmapContextCreateImage();
    if (lVar1 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      _CGImageRelease(lVar1);
    }
    _CFRelease(lVar12);
  }
  else {
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar5);
  return puVar9;
}



/* Entry: 104fbba60; end: 104fbbd53; -[GHShapeGroup renderChildrenIntoContext:withSVGContext:] */

undefined * FUN_104fbba60(ulong param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double in_d3;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  double dStack_140;
  undefined8 uStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  double dStack_108;
  undefined8 uStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _CGContextSaveGState(param_3);
  func_0x00010c27a460(&uStack_128,param_1);
  uStack_158 = uStack_120;
  uStack_160 = uStack_128;
  uStack_148 = uStack_110;
  uStack_150 = uStack_118;
  uStack_138 = uStack_100;
  dStack_140 = dStack_108;
  _CGContextConcatCTM(param_3,&uStack_160);
  puVar10 = PTR_PTR_1126b32d8;
  uVar1 = param_1;
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2287c0(puVar10);
  _objc_release(uVar1);
  puVar10 = PTR_PTR_1126b32e0;
  uVar1 = param_1;
  func_0x00010bf0e700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3d800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar13 = uStack_118;
  dVar14 = dStack_108;
  if (puVar10 != (undefined *)0x0) {
    uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    dVar14 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
    in_d3 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010befc0c0(*(undefined8 *)PTR__CGRectZero_110347608,uVar13,dVar14,in_d3,puVar10);
  }
  puVar2 = param_4;
  func_0x00010bf5e400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c0720c0();
  if (((uVar1 & 1) == 0) && (uVar1 = uVar3, func_0x00010c08fa60(), uVar1 != 0)) {
    uVar1 = uVar3;
    func_0x00010c08fa60();
    if (uVar1 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = param_4;
      func_0x00010bf40f40(param_4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_retain(puVar2);
    puVar4 = puVar2;
  }
  func_0x00010bf38f20();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0;
  uVar1 = param_1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (uVar1 != 0) {
    uVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_1);
      }
      uVar11 = *(undefined8 *)(uVar9 * 8);
      uVar5 = uVar11;
      func_0x00010bf98240();
      if ((int)uVar5 != 0) {
        func_0x00010c1870c0(param_4);
        func_0x00010c12fd20(uVar11);
      }
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar9);
    uVar1 = param_1;
    func_0x00010bf52a60();
  }
  puVar8 = puVar2;
  func_0x00010c1870c0(param_4);
  _CGContextRestoreGState(param_3);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_4;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar10 = param_4;
  func_0x00010bfc31c0();
  _CGRectIsNull();
  if (((ulong)puVar10 & 1) == 0) {
    lVar6 = (long)dVar14;
    func_0x000104fc1bfc(lVar6,(long)in_d3);
    _CGContextTranslateCTM(uVar12,uVar13);
    func_0x00010c12f800(param_4);
    lVar7 = lVar6;
    _CGBitmapContextCreateImage();
    if (lVar7 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      _CGImageRelease(lVar7);
    }
    _CFRelease(lVar6);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
  _objc_release(puVar8);
  return puVar10;
}



/* Entry: 104fbbd54; end: 104fbbe43; -[GHShapeGroup newClipMaskWithSVGContext:andObjectBox:] */

undefined *
FUN_104fbbd54(undefined8 param_1,undefined8 param_2,double param_3,double param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_7);
  uVar1 = param_5;
  func_0x00010bfc31c0();
  _CGRectIsNull();
  if ((uVar1 & 1) == 0) {
    lVar2 = (long)param_3;
    func_0x000104fc1bfc(lVar2,(long)param_4);
    _CGContextTranslateCTM(param_1,param_2);
    func_0x00010c12f800(param_5);
    lVar3 = lVar2;
    _CGBitmapContextCreateImage();
    if (lVar3 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      _CGImageRelease(lVar3);
    }
    _CFRelease(lVar2);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  _objc_release(param_7);
  return puVar4;
}



/* Entry: 104fbbe44; end: 104fbc367; -[GHShapeGroup addToClipForContext:withSVGContext:objectBoundingBox:] */

undefined **
FUN_104fbbe44(double param_1,double param_2,double param_3,double param_4,undefined **param_5,
             undefined8 param_6,ulong param_7,undefined **param_8)

{
  int iVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  uint uVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  undefined **unaff_x25;
  undefined **ppuVar17;
  undefined **unaff_x26;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined *puStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  ulong uStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1c8;
  int iStack_1bc;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  uint uStack_19c;
  undefined **ppuStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [48];
  undefined *apuStack_120 [16];
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar24 = param_1;
  dVar19 = param_2;
  dVar20 = param_3;
  dVar21 = param_4;
  _objc_retain(param_8);
  func_0x00010c27a460(auStack_150,param_5);
  _CGContextConcatCTM(param_7,auStack_150);
  ppuVar5 = (undefined **)PTR_PTR_1126b32d8;
  ppuVar11 = &PTR_PTR_1126b3000;
  ppuVar17 = param_5;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar17;
  func_0x00010c2287c0(ppuVar5);
  _objc_release(ppuVar17);
  ppuVar3 = param_5;
  func_0x00010bfc3ba0();
  puVar4 = PTR_PTR_1126b32a0;
  iVar1 = (int)ppuVar3;
  dVar22 = param_4;
  dVar23 = param_3;
  if ((iVar1 == 5) || (iVar1 == 3)) {
    ppuVar3 = param_5;
    dVar24 = param_1;
    dVar19 = param_2;
    dVar20 = param_3;
    dVar21 = param_4;
    func_0x00010c0d8700(param_1,param_2,param_3,param_4);
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar12 = param_8;
      func_0x00010bf20b00(PTR_PTR_1126b32d8);
      ppuVar5 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc1020();
      dVar24 = param_1;
      dVar19 = param_2;
      dVar20 = param_3;
      dVar21 = param_4;
      _CGContextClipToMask(param_1,param_2,param_3,param_4,param_7,ppuVar5);
      ppuVar5 = ppuVar3;
      dVar22 = param_1;
      dVar23 = param_2;
      param_2 = param_3;
      param_1 = param_4;
    }
  }
  else {
    ppuVar12 = param_5;
    iStack_1bc = iVar1;
    func_0x00010bf0e700(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar12);
    puStack_1c8 = puVar4;
    func_0x00010c08fa60();
    if (puVar4 != (undefined *)0x0) {
      ppuVar12 = param_8;
      func_0x00010c0dfd80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar12;
      _objc_opt_respondsToSelector();
      if (((ulong)ppuVar5 & 1) != 0) {
        dVar24 = param_1;
        dVar19 = param_2;
        dVar20 = param_3;
        dVar21 = param_4;
        func_0x00010befc0c0(param_1,param_2,param_3,param_4,ppuVar12);
      }
      _objc_release(ppuVar12);
    }
    ppuVar17 = (undefined **)0x1;
    ppuStack_1b8 = param_5;
    do {
      fVar18 = SUB84(dVar24,0);
      uVar15 = (uint)ppuVar17;
      _CGContextSaveGState(param_7);
      ppuVar12 = param_5;
      func_0x00010bf0e700();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar12;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar12);
      ppuVar12 = param_5;
      func_0x00010bf0e700();
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = ppuVar12;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar12);
      dVar24 = 1.0;
      dVar25 = 1.0;
      if (ppuVar5 != (undefined **)0x0) {
        func_0x00010bfb2c80(ppuVar5);
        dVar25 = (double)fVar18;
      }
      if (unaff_x25 != (undefined **)0x0) {
        func_0x00010bfb2c80(unaff_x25);
        dVar24 = (double)fVar18;
      }
      ppuVar12 = param_5;
      func_0x00010c294b40();
      if ((((int)ppuVar12 != 0) && (0.0 < dVar25)) && (0.0 < dVar24)) {
        _CGContextTranslateCTM(param_1,param_2,param_7);
        dVar19 = param_4 * dVar24;
        _CGContextScaleCTM(param_3 * dVar25,dVar19,param_7);
      }
      ppuStack_1b0 = unaff_x25;
      ppuStack_1a8 = ppuVar5;
      func_0x00010bf38f20();
      _objc_retainAutoreleasedReturnValue();
      dVar24 = 0.0;
      lStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      plStack_180 = (long *)0x0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      ppuVar12 = apuStack_120;
      ppuVar5 = param_5;
      func_0x00010bf52a60();
      if (ppuVar5 == (undefined **)0x0) {
        uStack_19c = 0;
        unaff_x26 = param_5;
      }
      else {
        uStack_19c = 0;
        lVar16 = *plStack_180;
        ppuStack_198 = param_5;
        do {
          puVar4 = PTR_s_attributes_1125a1368;
          ppuVar12 = (undefined **)0x0;
          do {
            if (*plStack_180 != lVar16) {
              _objc_enumerationMutation(param_5);
            }
            unaff_x25 = *(undefined ***)(lStack_188 + (long)ppuVar12 * 8);
            ppuVar11 = unaff_x25;
            func_0x00010bf98240();
            if ((int)ppuVar11 != 0) {
              if ((uVar15 == 0) ||
                 (ppuVar11 = unaff_x25, _objc_opt_respondsToSelector(unaff_x25,puVar4),
                 puVar6 = PTR_PTR_1126b32e0, ((ulong)ppuVar11 & 1) == 0)) {
                dVar24 = param_1;
                dVar19 = param_2;
                dVar20 = param_3;
                dVar21 = param_4;
                func_0x00010befc0e0(param_1,param_2,param_3,param_4,unaff_x25);
              }
              else {
                ppuVar11 = unaff_x25;
                func_0x00010bf0e700(unaff_x25);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf3d800();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppuVar11);
                if (puVar6 == (undefined *)0x0) {
                  dVar24 = param_1;
                  dVar19 = param_2;
                  dVar20 = param_3;
                  dVar21 = param_4;
                  func_0x00010befc0e0(param_1,param_2,param_3,param_4,unaff_x25);
                }
                else {
                  func_0x00010bfc31c0();
                  func_0x00010befc0e0(puVar6);
                  uStack_19c = 1;
                }
                _objc_release(puVar6);
                param_5 = ppuStack_198;
              }
            }
            ppuVar12 = (undefined **)((long)ppuVar12 + 1);
          } while (ppuVar5 != ppuVar12);
          ppuVar12 = apuStack_120;
          ppuVar5 = param_5;
          func_0x00010bf52a60();
          unaff_x26 = param_5;
        } while (ppuVar5 != (undefined **)0x0);
      }
      _CGContextRestoreGState(param_7);
      uVar7 = param_7;
      _CGContextIsPathEmpty();
      ppuVar11 = ppuStack_1a8;
      ppuVar5 = ppuStack_1b0;
      param_5 = ppuStack_1b8;
      if ((uVar7 & 1) == 0) {
        if (iStack_1bc == 2) {
          _CGContextEOClip();
        }
        else {
          _CGContextClip(param_7);
        }
      }
      _objc_release(unaff_x26);
      _objc_release(ppuVar5);
      _objc_release(ppuVar11);
      ppuVar17 = (undefined **)0x0;
    } while ((uVar15 & uStack_19c) != 0);
  }
  _objc_release();
  ppuVar3 = param_8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_310;
  pcStack_1d8 = FUN_104fbc368;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_240 = param_1;
  dStack_238 = param_2;
  dStack_230 = dVar23;
  dStack_228 = dVar22;
  ppuStack_220 = unaff_x26;
  ppuStack_218 = unaff_x25;
  ppuStack_210 = param_5;
  ppuStack_208 = ppuVar17;
  ppuStack_200 = ppuVar5;
  uStack_1f8 = param_7;
  ppuStack_1f0 = ppuVar11;
  ppuStack_1e8 = param_8;
  puStack_1e0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar12);
  func_0x00010bf38f20();
  _objc_retainAutoreleasedReturnValue();
  lStack_308 = 0;
  puStack_310 = (undefined *)0x0;
  uStack_2f8 = 0;
  plStack_300 = (long *)0x0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  ppuVar5 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar5 != (undefined **)0x0) {
    lVar16 = *plStack_300;
    do {
      ppuVar11 = (undefined **)0x0;
      do {
        if (*plStack_300 != lVar16) {
          _objc_enumerationMutation(ppuVar3);
        }
        uVar14 = *(undefined8 *)(lStack_308 + (long)ppuVar11 * 8);
        uVar8 = uVar14;
        func_0x00010bf98240();
        if ((int)uVar8 != 0) {
          func_0x00010befc0e0(dVar24,dVar19,dVar20,dVar21,uVar14);
        }
        ppuVar11 = (undefined **)((long)ppuVar11 + 1);
      } while (ppuVar5 != ppuVar11);
      ppuVar5 = ppuVar3;
      ppuVar9 = &puStack_310;
      func_0x00010bf52a60();
    } while (ppuVar5 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return ppuVar12;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar9);
  func_0x00010bf38f20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar12;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar11 = (undefined **)0x0;
  }
  else {
    ppuVar11 = (undefined **)0x0;
    do {
      ppuVar17 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar16) {
          _objc_enumerationMutation(ppuVar12);
        }
        uVar2 = (uint)*(undefined8 *)((long)ppuVar17 * 8);
        func_0x00010bfc3ba0();
        uVar13 = (uint)ppuVar11;
        uVar15 = uVar13;
        if (uVar13 != uVar2) {
          uVar15 = 5;
        }
        if (uVar13 != 0) {
          uVar2 = uVar15;
        }
        ppuVar11 = (undefined **)(ulong)uVar2;
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar5 != ppuVar17);
      ppuVar5 = ppuVar12;
      func_0x00010bf52a60();
    } while (ppuVar5 != (undefined **)0x0);
  }
  _objc_release(ppuVar12);
  _objc_release(ppuVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return ppuVar11;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12f810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return ppuVar9;
}



/* Entry: 104fbc368; end: 104fbc4cb; -[GHShapeGroup addToClipPathForContext:withSVGContext:objectBoundingBox:] */

undefined1 *
FUN_104fbc368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined1 *param_8)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  puVar5 = &uStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  func_0x00010bf38f20();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar2 = param_5;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_130;
    do {
      lVar11 = 0;
      do {
        if (*plStack_130 != lVar10) {
          _objc_enumerationMutation(param_5);
        }
        uVar8 = *(undefined8 *)(lStack_138 + lVar11 * 8);
        uVar3 = uVar8;
        func_0x00010bf98240();
        if ((int)uVar3 != 0) {
          func_0x00010befc0e0(param_1,param_2,param_3,param_4,uVar8);
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = param_5;
      puVar5 = &uStack_140;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar5);
    func_0x00010bf38f20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_8;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (puVar4 == (undefined1 *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      puVar7 = (undefined1 *)0x0;
      do {
        puVar12 = (undefined1 *)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(param_8);
          }
          uVar1 = (uint)*(undefined8 *)((long)puVar12 * 8);
          func_0x00010bfc3ba0();
          uVar6 = (uint)puVar7;
          uVar9 = uVar6;
          if (uVar6 != uVar1) {
            uVar9 = 5;
          }
          if (uVar6 != 0) {
            uVar1 = uVar9;
          }
          puVar7 = (undefined1 *)(ulong)uVar1;
          puVar12 = puVar12 + 1;
        } while (puVar4 != puVar12);
        puVar4 = param_8;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined1 *)0x0);
    }
    _objc_release(param_8);
    _objc_release(puVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12f810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return (undefined1 *)puVar5;
    }
    return puVar7;
  }
  return param_8;
}



/* Entry: 104fbc4cc; end: 104fbc607; -[GHShapeGroup getClippingTypeWithSVGContext:] */

ulong FUN_104fbc4cc(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf38f20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = (uint)*(undefined8 *)(lVar8 * 8);
        func_0x00010bfc3ba0();
        uVar5 = (uint)uVar6;
        uVar7 = uVar5;
        if (uVar5 != uVar2) {
          uVar7 = 5;
        }
        if (uVar5 != 0) {
          uVar2 = uVar7;
        }
        uVar6 = (ulong)uVar2;
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = param_1;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12f810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return param_3;
  }
  return uVar6;
}



/* Entry: 104fbc608; end: 104fbc60b; -[GHShapeGroup renderIntoContext:withSVGContext:] */

void FUN_104fbc608(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12f810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_renderChildrenIntoContext_withSV_112629820);
  return;
}



/* Entry: 104fbc60c; end: 104fbc7df; -[GHShapeGroup findRenderableObject:withSVGContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fbc60c(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *extraout_x8;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_178 [48];
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  long lStack_98;
  
  puVar6 = &uStack_1c0;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  func_0x00010c27a460(auStack_178,param_3);
  _CGAffineTransformInvert(&dStack_148,auStack_178);
  func_0x00010bf38f20();
  _objc_retainAutoreleasedReturnValue();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lVar7 = param_3;
  func_0x00010bf52a60();
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    lVar10 = *plStack_1b0;
    do {
      lVar12 = 0;
      do {
        if (*plStack_1b0 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        lVar9 = *(long *)(lStack_1b8 + lVar12 * 8);
        lVar1 = lVar9;
        func_0x00010bf98240();
        if ((int)lVar1 != 0) {
          func_0x00010bfaf4c0(dStack_128 + param_2 * dStack_138 + param_1 * dStack_148,
                              dStack_120 + param_2 * dStack_130 + param_1 * dStack_140);
          _objc_retainAutoreleasedReturnValue();
          if (lVar9 != 0) {
            _objc_retain(lVar9);
            _objc_release(lVar8);
            lVar8 = lVar9;
          }
          _objc_release(lVar9);
        }
        lVar12 = lVar12 + 1;
      } while (lVar7 != lVar12);
      lVar7 = param_3;
      puVar6 = &uStack_1c0;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  uVar2 = param_5;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = uVar13;
  _objc_opt_isKindOfClass(uVar13,puVar3);
  if (((uVar2 & 1) == 0) || (uVar2 = uVar13, func_0x00010c08fa60(), uVar2 == 0)) {
    uVar2 = param_5;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar2 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar3);
    if (((uVar2 & 1) == 0) || (uVar2 = uVar4, func_0x00010c08fa60(), uVar13 = uVar4, uVar2 == 0))
    goto LAB_104fbc8f4;
  }
  func_0x00010c220220(puVar6);
  uVar4 = uVar13;
LAB_104fbc8f4:
  func_0x00010bf38f20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  puVar3 = PTR_s_addNamedObjects__11259c178;
  while (PTR_s_addNamedObjects__11259c178 = puVar3, uVar2 != 0) {
    uVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        _objc_enumerationMutation(param_5);
      }
      uVar11 = *(ulong *)(uVar13 * 8);
      uVar5 = uVar11;
      _objc_opt_respondsToSelector(uVar11,puVar3);
      if ((uVar5 & 1) != 0) {
        func_0x00010bef9f40(uVar11);
      }
      uVar13 = uVar13 + 1;
    } while (uVar2 != uVar13);
    uVar2 = param_5;
    func_0x00010bf52a60();
    puVar3 = PTR_s_addNamedObjects__11259c178;
  }
  _objc_release(param_5);
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = (undefined8 *)((long)puVar6 + (long)_DAT_112718b28);
  uVar14 = *puVar6;
  uVar16 = puVar6[3];
  uVar15 = puVar6[2];
  extraout_x8[1] = puVar6[1];
  *extraout_x8 = uVar14;
  extraout_x8[3] = uVar16;
  extraout_x8[2] = uVar15;
  uVar14 = puVar6[4];
  extraout_x8[5] = puVar6[5];
  extraout_x8[4] = uVar14;
  return;
}



/* Entry: 104fbc7e0; end: 104fbc9f7; -[GHShapeGroup addNamedObjects:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fbc7e0(ulong param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *extraout_x8;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar3 = param_1;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar4);
  if (((uVar3 & 1) == 0) || (uVar3 = uVar9, func_0x00010c08fa60(), uVar3 == 0)) {
    uVar3 = param_1;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar3 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar4);
    if (((uVar3 & 1) == 0) || (uVar3 = uVar5, func_0x00010c08fa60(), uVar9 = uVar5, uVar3 == 0))
    goto LAB_104fbc8f4;
  }
  func_0x00010c220220(param_3);
  uVar5 = uVar9;
LAB_104fbc8f4:
  func_0x00010bf38f20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  puVar4 = PTR_s_addNamedObjects__11259c178;
  while (PTR_s_addNamedObjects__11259c178 = puVar4, uVar3 != 0) {
    uVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar8 = *(ulong *)(uVar9 * 8);
      uVar6 = uVar8;
      _objc_opt_respondsToSelector(uVar8,puVar4);
      if ((uVar6 & 1) != 0) {
        func_0x00010bef9f40(uVar8);
      }
      uVar9 = uVar9 + 1;
    } while (uVar3 != uVar9);
    uVar3 = param_1;
    func_0x00010bf52a60();
    puVar4 = PTR_s_addNamedObjects__11259c178;
  }
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)(param_3 + _DAT_112718b28);
  uVar10 = *puVar1;
  uVar12 = puVar1[3];
  uVar11 = puVar1[2];
  extraout_x8[1] = puVar1[1];
  *extraout_x8 = uVar10;
  extraout_x8[3] = uVar12;
  extraout_x8[2] = uVar11;
  uVar10 = puVar1[4];
  extraout_x8[5] = puVar1[5];
  extraout_x8[4] = uVar10;
  return;
}



/* Entry: 104fbc9f8; end: 104fbca17; -[GHShapeGroup transform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fbc9f8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112718b28);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  return;
}



/* Entry: 104fbca18; end: 104fbca27; -[GHShapeGroup childDefinitions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fbca18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112718b30);
}



/* Entry: 104fbca28; end: 104fbca67; -[GHShapeGroup setChildDefinitions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fbca28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112718b30;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fbca68; end: 104fbcaa7; -[GHShapeGroup .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fbca68(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112718b30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112718b2c,0);
  return;
}



/* Entry: 104fbcaa8; end: 104fbcaaf; -[GHDefinitionGroup findRenderableObject:withSVGContext:] */

undefined8 FUN_104fbcaa8(void)

{
  return 0;
}



/* Entry: 104fbcab0; end: 104fbcab3; -[GHDefinitionGroup renderIntoContext:withSVGContext:] */

void FUN_104fbcab0(void)

{
  return;
}



/* Entry: 104fbcab4; end: 104fbcbef; +[GHClipGroup clipObjectForAttributes:withSVGContext:] */

void FUN_104fbcab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b32a0;
  func_0x00010c296fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 != (undefined *)0x0) {
    uVar6 = param_4;
    func_0x00010c0dfd80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    _objc_opt_respondsToSelector();
    if ((uVar3 & 1) == 0) {
      _objc_release(uVar6);
    }
    else if (uVar6 != 0) goto LAB_104fbcbbc;
  }
  uVar4 = param_3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000104fc141c();
  if ((int)uVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = param_4;
    func_0x00010c0dfd80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    _objc_opt_respondsToSelector();
    if ((uVar6 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      _objc_retain(uVar3);
      uVar6 = uVar3;
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar4);
LAB_104fbcbbc:
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 104fbcbf0; end: 104fbcbf7; -[GHClipGroup findRenderableObject:withSVGContext:] */

undefined8 FUN_104fbcbf0(void)

{
  return 0;
}



/* Entry: 104fbcbf8; end: 104fbcbfb; -[GHClipGroup renderIntoContext:withSVGContext:] */

void FUN_104fbcbf8(void)

{
  return;
}



/* Entry: 104fbcbfc; end: 104fbccd3; -[GHClipGroup addToClipForContext:withSVGContext:objectBoundingBox:] */

void FUN_104fbcbfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_70;
  _objc_retain(param_8);
  uVar1 = param_5;
  func_0x00010c294b40();
  if ((int)uVar1 == 0) {
    param_1 = *(undefined8 *)PTR__CGRectZero_110347608;
    param_2 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    param_3 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    param_4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    puStack_68 = PTR_PTR_1126e5708;
    uStack_70 = param_5;
  }
  else {
    puStack_58 = PTR_PTR_1126e5708;
    puVar2 = &uStack_60;
    uStack_60 = param_5;
  }
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar2,
                      PTR_s_addToClipForContext_withSVGConte_11259c9d8,param_7,param_8);
  _objc_release(param_8);
  return;
}



/* Entry: 104fbccd4; end: 104fbccdb; -[GHMask getClippingTypeWithSVGContext:] */

undefined8 FUN_104fbccd4(void)

{
  return 5;
}



/* Entry: 104fbccdc; end: 104fbd117; -[GHMask newClipMaskWithSVGContext:andObjectBox:] */

undefined *
FUN_104fbccdc(undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined *param_5
             ,undefined8 param_6,undefined8 param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  _objc_retain(param_7);
  puVar13 = PTR_PTR_1126b32d8;
  func_0x00010bf20b00(param_1,param_2,param_3,param_4);
  uVar14 = param_1;
  uVar15 = param_2;
  dVar16 = param_3;
  dVar17 = param_4;
  _CGRectIsNull();
  if ((int)puVar13 != 0) {
    puVar13 = param_5;
    func_0x00010bfc31c0();
    param_3 = dVar16;
    param_4 = dVar17;
    param_1 = uVar14;
    param_2 = uVar15;
  }
  _CGRectIsNull(param_1,param_2,param_3,param_4);
  if (((ulong)puVar13 & 1) == 0) {
    pbVar2 = (byte *)(long)param_3;
    func_0x000104fc1bfc(pbVar2,(long)param_4);
    puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    _CGContextSetFillColorWithColor(pbVar2,puVar3);
    _objc_release(puVar13);
    fVar19 = 0.0;
    _CGContextFillRect(0,0,param_3,param_4,pbVar2);
    puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    _CGContextSetFillColorWithColor(pbVar2,puVar3);
    _objc_release(puVar13);
    puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    _CGContextSetStrokeColorWithColor(pbVar2,puVar3);
    _objc_release(puVar13);
    puVar13 = param_5;
    func_0x00010bf0e700(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    fVar18 = fVar19;
    _objc_release(puVar3);
    _objc_release(puVar13);
    puVar13 = param_5;
    func_0x00010bf0e700(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(puVar3);
    _objc_release(puVar13);
    puVar13 = param_5;
    func_0x00010c294b40();
    if ((((int)puVar13 != 0) && (0.0 < fVar19)) && (0.0 < fVar18)) {
      _CGContextScaleCTM(param_3 * (double)fVar19,param_4 * (double)fVar18,pbVar2);
    }
    func_0x00010c12f800(param_5);
    _CGContextFlush(pbVar2);
    pbVar4 = pbVar2;
    _CGBitmapContextCreateImage();
    if (pbVar4 == (byte *)0x0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      pbVar5 = pbVar4;
      _CGImageGetBytesPerRow();
      pbVar6 = pbVar4;
      _CGImageGetWidth();
      pbVar7 = pbVar4;
      _CGImageGetHeight();
      pbVar8 = pbVar4;
      _CGImageGetDataProvider();
      _CGDataProviderCopyData();
      _CGImageRelease(pbVar4);
      puVar9 = (undefined1 *)0x0;
      _CFDataCreateMutable(0,(long)pbVar7 * (long)pbVar6);
      _CFDataSetLength();
      puVar10 = puVar9;
      _CFDataGetMutableBytePtr();
      pbVar4 = pbVar8;
      _CFDataGetBytePtr();
      if (pbVar7 != (byte *)0x0) {
        pbVar12 = (byte *)0x0;
        pbVar1 = pbVar6;
        pbVar11 = pbVar4;
        do {
          for (; pbVar1 != (byte *)0x0; pbVar1 = pbVar1 + -1) {
            fVar18 = (float)NEON_ucvtf((uint)*pbVar4);
            fVar19 = (float)NEON_ucvtf((uint)pbVar4[1]);
            fVar20 = (float)NEON_ucvtf((uint)pbVar4[2]);
            fVar21 = (float)NEON_ucvtf((uint)pbVar4[3]);
            *puVar10 = (char)(int)((1.0 - ((fVar19 / 255.0) * 0.7154 + (fVar18 / 255.0) * 0.2125 +
                                          (fVar20 / 255.0) * 0.0721) * (fVar21 / 255.0)) * 255.0);
            pbVar4 = pbVar4 + 4;
            puVar10 = puVar10 + 1;
          }
          pbVar4 = pbVar11 + (long)pbVar5;
          pbVar12 = pbVar12 + 1;
          pbVar1 = pbVar6;
          pbVar11 = pbVar4;
        } while (pbVar12 != pbVar7);
      }
      puVar10 = puVar9;
      _CGDataProviderCreateWithCFData(puVar9);
      _CGImageMaskCreate(pbVar6,pbVar7,8,8,pbVar6,puVar10,0,0);
      _CGDataProviderRelease(puVar10);
      _CFRelease(puVar9);
      if (pbVar6 == (byte *)0x0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
        _objc_retainAutoreleasedReturnValue();
        _CGImageRelease(pbVar6);
      }
      _CFRelease(pbVar8);
    }
    _CFRelease(pbVar2);
  }
  else {
    puVar13 = (undefined *)0x0;
  }
  _objc_release(param_7);
  return puVar13;
}



/* Entry: 104fbd118; end: 104fbd2f3; -[GHMask getBoundingBoxWithSVGContext:] */

double FUN_104fbd118(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  double dVar4;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126e5710;
  uStack_80 = param_4;
  _objc_msgSendSuper2(&uStack_80,PTR_s_getBoundingBoxWithSVGContext__1125ce618);
  uVar1 = param_4;
  dVar4 = param_1;
  func_0x00010c294b40();
  fVar3 = SUB84(dVar4,0);
  if ((int)uVar1 != 0) {
    uVar1 = param_4;
    func_0x00010bf0e700(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010bf0e700(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010bf0e700(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010bf0e700(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_4;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(uVar1);
    _objc_release(param_4);
    param_1 = param_1 + param_3 * (double)fVar3;
  }
  return param_1;
}



/* Entry: 104fbd2f4; end: 104fbd39b; -[GHRenderableObjectPlaceholder prototypesName] */

void FUN_104fbd2f4(undefined **param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  ppuVar3 = ppuVar1;
  _objc_opt_isKindOfClass(ppuVar1,puVar2);
  if ((((ulong)ppuVar3 & 1) == 0) || (ppuVar3 = ppuVar1, func_0x00010bfda7c0(), (int)ppuVar3 == 0))
  {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar3 = ppuVar1;
    func_0x00010c260c00(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104fbd39c; end: 104fbd51b; -[GHRenderableObjectPlaceholder concreteObjectForSVGContext:excludingPrevious:] */

void FUN_104fbd39c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_4;
  func_0x00010bf4b900();
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c119780(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0e01c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    _objc_opt_respondsToSelector();
    if ((uVar6 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      func_0x00010bf0e700(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010bf3d9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
    }
    puVar1 = PTR_PTR_1126b3358;
    _objc_opt_class(PTR_PTR_1126b3358);
    uVar4 = uVar6;
    _objc_opt_isKindOfClass(uVar6,puVar1);
    uVar5 = uVar6;
    if ((uVar4 & 1) != 0) {
      _objc_retain(uVar6);
      if (param_4 == (undefined *)0x0) {
        param_4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        _objc_alloc(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
        func_0x00010bffc4a0();
      }
      else {
        func_0x00010befa120(param_4);
      }
      func_0x00010bf45b80(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar6);
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104fbd51c; end: 104fbd59b; -[GHRenderableObjectPlaceholder getClippingTypeWithSVGContext:] */

long FUN_104fbd51c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf45b80(param_1,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == param_1) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bfc3ba0(lVar1,param_2,param_3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 104fbd59c; end: 104fbd61b; -[GHRenderableObjectPlaceholder renderIntoContext:withSVGContext:] */

void FUN_104fbd59c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf45b80(param_1,param_2,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  if ((uVar1 != param_1) && (uVar2 = uVar1, func_0x00010bfe1300(), (uVar2 & 1) == 0)) {
    func_0x00010c12fd20(uVar1,param_2,param_3,param_4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104fbd61c; end: 104fbd6cf; -[GHRenderableObjectPlaceholder getBoundingBoxWithSVGContext:] */

undefined8 FUN_104fbd61c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_2;
  func_0x00010bf45b80(param_2,param_3,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == param_2) {
    param_1 = *(undefined8 *)PTR__CGRectZero_110347608;
  }
  else {
    func_0x00010bfc31c0(lVar1,param_3,param_4);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 104fbd6d0; end: 104fbd75b; -[GHRenderableObjectPlaceholder findRenderableObject:withSVGContext:] */

void FUN_104fbd6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  func_0x00010bf45b80(param_3,param_4,param_5,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfaf4c0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104fbd75c; end: 104fbd7f3; -[GHRenderableObjectPlaceholder addToClipForContext:withSVGContext:objectBoundingBox:] */

void FUN_104fbd75c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_8);
  func_0x00010bf45b80(param_5,param_6,param_8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc0c0(param_1,param_2,param_3,param_4);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104fbd7f4; end: 104fbd88b; -[GHRenderableObjectPlaceholder addToClipPathForContext:withSVGContext:objectBoundingBox:] */

void FUN_104fbd7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_8);
  func_0x00010bf45b80(param_5,param_6,param_8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc0e0(param_1,param_2,param_3,param_4);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104fbd88c; end: 104fbde3b; -[SVGAttributedObject environmentOKWithISOCode:] */

undefined8 FUN_104fbd88c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(lVar4);
        }
        uVar9 = *(ulong *)(lVar11 * 8);
        puVar5 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
        func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d0a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        uVar13 = uVar9;
        func_0x00010bfda7c0();
        _objc_release(uVar9);
        if ((uVar13 & 1) != 0) {
          _objc_release(lVar4);
          goto LAB_104fbda18;
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    }
    uVar8 = 0;
    lVar2 = lVar4;
    goto LAB_104fbdde4;
  }
LAB_104fbda18:
  lVar3 = param_1;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar11;
  func_0x00010bf44700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_retain(lVar2);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(lVar2);
      }
      lVar6 = *(long *)(lVar10 * 8);
      func_0x00010c08fa60();
      if (lVar6 != 0) goto LAB_104fbddd8;
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  lVar3 = param_1;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar11;
  func_0x00010bf44700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_retain(lVar2);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(lVar2);
      }
      uVar13 = *(ulong *)(lVar10 * 8);
      iVar12 = (int)uVar13;
      iVar1 = iVar12;
      func_0x00010bfda7c0();
      if ((iVar1 == 0) ||
         ((((uVar9 = uVar13, func_0x00010c0720c0(), (uVar9 & 1) == 0 &&
            (uVar9 = uVar13, func_0x00010c0720c0(), (uVar9 & 1) == 0)) &&
           (func_0x00010c0720c0(), (uVar13 & 1) == 0)) && (func_0x00010c0720c0(), iVar12 == 0))))
      goto LAB_104fbddd8;
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf44700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_retain(lVar2);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(lVar2);
      }
      if (lRam00000001136b91b8 != -1) {
        func_0x00010002a2fc(0x1136b91b8,&PTR___NSConcreteGlobalBlock_110860560);
      }
      uVar8 = puRam00000001136b91b0;
      func_0x00010bf4b900();
      if ((int)uVar8 == 0) goto LAB_104fbddd8;
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  uVar8 = 1;
  goto LAB_104fbdddc;
LAB_104fbddd8:
  uVar8 = 0;
LAB_104fbdddc:
  _objc_release(lVar2);
LAB_104fbdde4:
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return uVar8;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = puRam00000001136b91b0;
  puRam00000001136b91b0 = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return uVar8;
}



/* Entry: 104fbde3c; end: 104fbdefb;  */

void FUN_104fbde3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR____CFConstantStringClassReference_110dbfd38);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136b91b0;
  puRam00000001136b91b0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fbdefc; end: 104fbdf8f; -[SVGAttributedObject environmentOKWithSVGContext:] */

uint FUN_104fbdefc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010c083f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf98220(param_1,param_2,param_3);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b32a0;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010bf0e700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0de40(puVar3,param_2,param_1);
    _objc_release(param_1);
    uVar1 = (uint)puVar3 ^ 1;
  }
  return uVar1;
}



/* Entry: 104fbdf90; end: 104fbdfdb; -[SVGAttributedObject hidden] */

undefined * FUN_104fbdf90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b32a0;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0de40(puVar1,param_2,param_1);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 104fbdfdc; end: 104fbdfdf; -[GHFill renderIntoContext:withSVGContext:] */

void FUN_104fbdfdc(void)

{
  return;
}



/* Entry: 104fbdfe0; end: 104fbe0f7; -[GHFill addNamedObjects:] */

void FUN_104fbdfe0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar1 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  if (((uVar1 & 1) == 0) || (uVar1 = uVar2, func_0x00010c08fa60(), uVar1 == 0)) {
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(param_1);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar2 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar3);
    if (((uVar2 & 1) == 0) || (uVar4 = uVar1, func_0x00010c08fa60(), uVar2 = uVar1, uVar4 == 0))
    goto LAB_104fbe0d8;
  }
  func_0x00010c220220(param_3);
  uVar1 = uVar2;
LAB_104fbe0d8:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fbe0f8; end: 104fbe19b; -[GHSolidColor asColorWithSVGContext:] */

void FUN_104fbe0f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_3;
    func_0x00010bf40f40(param_3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104fbe19c; end: 104fbe1f7; +[SVGGradientUtilities colorSpace] */

undefined8 FUN_104fbe19c(void)

{
  if (lRam00000001136b91c8 != -1) {
    func_0x00010002a2fc(0x1136b91c8,&PTR___NSConcreteGlobalBlock_110860580);
  }
  return uRam00000001136b91c0;
}



/* Entry: 104fbe1f8; end: 104fbe2af; +[SVGGradientUtilities extractFractionFromCoordinateString:givenDefault:] */

double FUN_104fbe1f8(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  fVar3 = SUB84(dVar4,0);
  uVar1 = param_4;
  func_0x00010bfdcf80(param_4,param_3,&PTR____CFConstantStringClassReference_110dbfef8);
  if (((uVar1 & 1) == 0) && (uVar1 = param_4, func_0x00010c08fa60(), uVar1 != 0)) {
    func_0x00010bfb2c80(param_4);
    param_1 = (double)fVar3;
  }
  else {
    uVar1 = param_4;
    func_0x00010c08fa60();
    if (1 < uVar1) {
      uVar1 = param_4;
      func_0x00010c08fa60(param_4);
      uVar2 = param_4;
      func_0x00010c260c20(param_4,param_3,uVar1 - 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      param_1 = (double)(fVar3 / 100.0);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 104fbe2b0; end: 104fbe30b; -[SVGParser parser:foundCDATA:] */

void FUN_104fbe2b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c089820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fbe30c; end: 104fbe4ab; -[SVGParser parser:foundCharacters:] */

void FUN_104fbe30c(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  puVar1 = *(undefined **)(param_1 + 0x10);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    _objc_retain(param_4);
    puVar3 = param_4;
  }
  else {
    puVar3 = puVar2;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  func_0x00010c1d0560(puVar1);
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010c0309a0();
    func_0x00010c1d0560(puVar1);
  }
  else {
    puVar4 = puVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar6 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar5);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x00010befa120(puVar2);
    }
    else {
      puVar5 = puVar4;
      func_0x00010c25ce40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cd60(puVar2);
      func_0x00010befa120(puVar2);
      _objc_release(puVar5);
    }
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104fbe4ac; end: 104fbe70b; -[SVGParser parser:didStartElement:namespaceURI:qualifiedName:attributes:] */

void FUN_104fbe4ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  uVar5 = param_4;
  func_0x00010c0720c0(param_4,param_2,&PTR____CFConstantStringClassReference_110dbff18);
  if (((int)uVar5 == 0) || (*(long *)(param_1 + 8) != 0)) {
    if (*(char *)(param_1 + 0x18) == '\x01') {
      puVar1 = *(undefined **)(param_1 + 0x10);
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010c08fa60();
      if (puVar6 == (undefined *)0x0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_alloc();
        puVar2 = puVar3;
        func_0x00010c08fa60(puVar3);
        func_0x00010c059500(puVar6,param_2,puVar2);
      }
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf720a0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c0dff20(puVar1,param_2,&PTR____CFConstantStringClassReference_110dbf198);
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        func_0x00010c0309a0();
        func_0x00010c1d0560(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110dbf198);
      }
      else {
        func_0x00010befa120();
      }
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(puVar1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 1;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010c0309a0();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar3;
    _objc_release(uVar5);
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 8),param_2,param_7,
                        &PTR____CFConstantStringClassReference_110dbf178);
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 8),param_2,param_4,
                        &PTR____CFConstantStringClassReference_110dbf1b8);
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104fbe70c; end: 104fbe723; -[SVGParser parser:didEndElement:namespaceURI:qualifiedName:] */

void FUN_104fbe70c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c12cd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_removeLastObject_112628d78);
    return;
  }
  return;
}


