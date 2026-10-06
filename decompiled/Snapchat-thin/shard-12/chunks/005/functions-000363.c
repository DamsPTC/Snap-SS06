/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10921cd40; end: 10921cd47; -[YYImageEncoder lossless] */

undefined1 FUN_10921cd40(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 10921cd48; end: 10921cd4f; -[YYImageEncoder setLossless:] */

void FUN_10921cd48(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10921cd50; end: 10921cd57; -[YYImageEncoder quality] */

undefined8 FUN_10921cd50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10921cd58; end: 10921cd87; -[YYImageEncoder .cxx_destruct] */

void FUN_10921cd58(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10921cd88; end: 10921ce4b;  */

void FUN_10921cd88(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_2;
  func_0x00010c2bef00();
  if ((int)lVar1 == 0) {
    lVar1 = param_2;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    if ((lVar1 != 0) && (FUN_109217894(), lVar1 != 0)) {
      lVar2 = param_2;
      _objc_opt_class();
      _objc_alloc();
      func_0x00010c14e120(param_2);
      lVar3 = param_2;
      func_0x00010bfe8380(param_2);
      func_0x00010bffa280(param_1,lVar2,param_3,lVar1,lVar3);
      _CGImageRelease(lVar1);
      if (lVar2 == 0) {
        _objc_retain(param_2);
        lVar2 = param_2;
      }
      param_2 = lVar2;
      func_0x00010c2278e0(param_2,param_3,1);
      goto LAB_10921ce34;
    }
  }
  _objc_retain(param_2);
LAB_10921ce34:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10921ce4c; end: 10921cf4f;  */

ulong FUN_10921ce4c(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010bfe9920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf529e0();
  if (uVar3 < 2) {
    puVar2 = PTR_PTR_1126ddef0;
    _objc_opt_class(PTR_PTR_1126ddef0);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    _objc_getAssociatedObject(param_1,PTR_s_yy_isDecodedForDisplay_11268d5e8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf1f3c0();
  }
  else {
    uVar3 = 1;
    param_1 = uVar1;
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 10921cf50; end: 10921cf57;  */

void FUN_10921cf50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beebed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__yy_dataRepresentationForSystem__112598958,0)
  ;
  return;
}



/* Entry: 10921cf58; end: 10921d14b;  */

void FUN_10921cf58(undefined *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar6 = PTR_PTR_1126b2720;
  _objc_opt_class(PTR_PTR_1126b2720);
  puVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar6);
  if (((ulong)puVar2 & 1) != 0) {
    _objc_retain(param_1);
    puVar6 = param_1;
    func_0x00010bf03580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((puVar6 == (undefined *)0x0) ||
       (((param_3 != 0 && (puVar6 = param_1, func_0x00010bf03640(), puVar6 != (undefined *)0x7)) &&
        (puVar6 = param_1, func_0x00010bf03640(), puVar6 != (undefined *)0x8)))) {
      _objc_release(param_1);
    }
    else {
      puVar6 = param_1;
      func_0x00010bf03580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      if (puVar6 != (undefined *)0x0) goto LAB_10921d134;
    }
  }
  puVar6 = param_1;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  if (puVar6 != (undefined *)0x0) {
    puVar2 = param_1;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    _CFRetain();
    if (puVar2 != (undefined *)0x0) {
      puVar6 = puVar2;
      _CGImageGetBitmapInfo();
      puVar3 = puVar2;
      _CGImageGetAlphaInfo();
      uVar1 = (uint)puVar3 & 0x1f;
      puVar3 = param_1;
      func_0x00010bfe8380();
      puVar5 = (undefined *)0x0;
      if (puVar3 != (undefined *)0x0) {
        puVar3 = param_1;
        func_0x00010bfe8380(param_1);
        puVar4 = puVar2;
        FUN_109217d50(puVar2,puVar3,uVar1 | (uint)puVar6);
        puVar5 = (undefined *)0x0;
        if (puVar4 != (undefined *)0x0) {
          _CFRelease(puVar2);
          puVar5 = puVar2;
          puVar2 = puVar4;
        }
      }
      _objc_autoreleasePoolPush();
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe9240();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe9240();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        if (uVar1 - 1 < 4) {
          _UIImagePNGRepresentation();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _UIImageJPEGRepresentation(0x3feccccccccccccd);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
      _objc_autoreleasePoolPop(puVar5);
      _CFRelease(puVar2);
      if (puVar6 != (undefined *)0x0) goto LAB_10921d134;
    }
  }
  _UIImagePNGRepresentation(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
LAB_10921d134:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10921d14c; end: 10921d2fb;  */

undefined8 FUN_10921d14c(long param_1,ulong param_2,undefined4 *param_3,byte *param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  bool bVar12;
  int iVar13;
  
  if ((*(int *)(param_1 + 4) != 0x52444849) ||
     (*(int *)(param_1 + (param_2 & 0xffffffff) * 0x10 + -0xc) != 0x444e4549)) {
    return 0;
  }
  lVar10 = 0;
  bVar5 = 0;
  lVar7 = 0;
  iVar8 = 0;
  bVar3 = false;
  iVar9 = 0;
  bVar2 = false;
  piVar11 = (int *)(param_1 + 0x14);
  param_2 = param_2 & 0xffffffff;
  iVar13 = 0;
  do {
    uVar6 = (undefined4)lVar7;
    iVar1 = piVar11[-4];
    if (iVar1 < 0x52444849) {
      if (iVar1 == 0x4c546361) {
        bVar12 = true;
        if (bVar3) {
          bVar3 = true;
          goto LAB_10921d2c4;
        }
        bVar3 = true;
      }
      else if (iVar1 == 0x4c546366) {
        if ((param_2 == 1) || ((iVar13 = *piVar11, iVar13 != 0x54416466 && (iVar13 != 0x54414449))))
        goto LAB_10921d2b0;
        if (iVar8 == 0) {
          bVar5 = iVar13 == 0x54414449 | bVar5;
        }
        iVar8 = iVar8 + 1;
      }
    }
    else if (iVar1 == 0x54416466) {
      if ((iVar13 != 0x54416466) && (iVar13 != 0x4c546366)) {
LAB_10921d2b0:
        bVar12 = true;
        goto LAB_10921d2c4;
      }
    }
    else if (iVar1 == 0x54414449) {
      if ((iVar13 != 0x54414449) && (lVar7 = lVar10, iVar9 != 0)) goto LAB_10921d2b0;
      iVar9 = iVar9 + 1;
    }
    else if (iVar1 == 0x52444849) {
      if (lVar10 != 0) goto LAB_10921d2b0;
      bVar12 = true;
      if (bVar2) {
        bVar2 = true;
        goto LAB_10921d2c4;
      }
      bVar2 = true;
    }
    uVar6 = (undefined4)lVar7;
    lVar10 = lVar10 + 1;
    piVar11 = piVar11 + 4;
    param_2 = param_2 - 1;
    iVar13 = iVar1;
    if (param_2 == 0) {
      bVar12 = false;
LAB_10921d2c4:
      uVar4 = 0;
      if ((((!bVar12) && (bVar2)) && (iVar9 != 0)) && ((bVar3 && (iVar8 != 0)))) {
        *param_3 = uVar6;
        *param_4 = bVar5;
        uVar4 = 1;
      }
      return uVar4;
    }
  } while( true );
}



/* Entry: 10921d2fc; end: 10921d36b;  */

void FUN_10921d2fc(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  *param_1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  param_1[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
  param_1[2] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
  param_1[3] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
  param_1[4] = uVar1 >> 0x10 | uVar1 << 0x10;
  *(ushort *)(param_1 + 5) = (ushort)param_2[5] >> 8 | (ushort)param_2[5] << 8;
  *(ushort *)((long)param_1 + 0x16) =
       *(ushort *)((long)param_2 + 0x16) >> 8 | *(ushort *)((long)param_2 + 0x16) << 8;
  *(char *)(param_1 + 6) = (char)param_2[6];
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  return;
}



/* Entry: 10921d36c; end: 10921d4e7; -[YYSpriteSheetImage initWithSpriteSheetImage:contentRects:frameDurations:loopCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10921d36c(undefined8 param_1,undefined1 *param_2,undefined8 param_3,long param_4,long param_5,
             long param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 **ppuVar4;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  if (((lVar1 != 0) && (lVar1 = param_5, func_0x00010bf529e0(), lVar1 != 0)) &&
     (lVar1 = param_6, func_0x00010bf529e0(), lVar1 != 0)) {
    lVar1 = param_5;
    func_0x00010bf529e0();
    lVar2 = param_6;
    func_0x00010bf529e0();
    if (lVar1 == lVar2) {
      lVar1 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc1020();
      func_0x00010c14e120(param_4);
      lVar2 = param_4;
      func_0x00010bfe8380(param_4);
      puStack_58 = PTR_PTR_1127010c0;
      puStack_60 = param_2;
      _objc_msgSendSuper2(param_1,&puStack_60,PTR_s_initWithCGImage_scale_orientatio_1125dc268,lVar1
                          ,lVar2);
      param_2 = (undefined1 *)ppuVar4;
      if (ppuVar4 != (undefined1 **)0x0) {
        lVar1 = param_5;
        func_0x00010bf51e00();
        uVar3 = *(undefined8 *)((long)ppuVar4 + (long)_DAT_112783c98);
        *(long *)((long)ppuVar4 + (long)_DAT_112783c98) = lVar1;
        _objc_release(uVar3);
        lVar1 = param_6;
        func_0x00010bf51e00();
        uVar3 = *(undefined8 *)((long)ppuVar4 + (long)_DAT_112783c9c);
        *(long *)((long)ppuVar4 + (long)_DAT_112783c9c) = lVar1;
        _objc_release(uVar3);
        *(undefined8 *)((long)ppuVar4 + (long)_DAT_112783ca0) = param_7;
        _objc_retain(ppuVar4);
        goto LAB_10921d4a8;
      }
    }
  }
  ppuVar4 = (undefined1 **)0x0;
LAB_10921d4a8:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return (undefined1 *)ppuVar4;
}



/* Entry: 10921d4e8; end: 10921d5f3; -[YYSpriteSheetImage contentsRectForCALayerAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10921d4e8(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                    undefined8 param_6,ulong param_7)

{
  int iVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  
  uVar2 = *(ulong *)(param_5 + (long)_DAT_112783c98);
  func_0x00010bf529e0();
  if (param_7 < uVar2) {
    func_0x00010c23d0a0(param_5);
    dVar3 = param_1;
    dVar4 = param_2;
    func_0x00010bf03560(param_5,param_6,param_7);
    if (0.01 < param_1) {
      if (param_2 <= 0.01) {
        return 0.0;
      }
      dVar3 = dVar3 / param_1;
      dVar4 = dVar4 / param_2;
      param_3 = param_3 / param_1;
      param_4 = param_4 / param_2;
      _CGRectIntersection(dVar3,dVar4,param_3,param_4,0,0,0x3ff0000000000000,0x3ff0000000000000);
      _CGRectIsNull();
      iVar1 = (int)param_5;
      if (((param_5 & 1) == 0) && (_CGRectIsEmpty(dVar3,dVar4,param_3,param_4), iVar1 == 0)) {
        return dVar3;
      }
    }
  }
  return 0.0;
}



/* Entry: 10921d5f4; end: 10921d603; -[YYSpriteSheetImage animatedImageFrameCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921d5f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112783c98),PTR_s_count_1125b2420);
  return;
}



/* Entry: 10921d604; end: 10921d613; -[YYSpriteSheetImage animatedImageLoopCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10921d604(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783ca0);
}



/* Entry: 10921d614; end: 10921d61b; -[YYSpriteSheetImage animatedImageBytesPerFrame] */

undefined8 FUN_10921d614(void)

{
  return 0;
}



/* Entry: 10921d61c; end: 10921d61f; -[YYSpriteSheetImage animatedImageFrameAtIndex:] */

void FUN_10921d61c(void)

{
  return;
}



/* Entry: 10921d620; end: 10921d69b; -[YYSpriteSheetImage animatedImageDurationAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10921d620(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112783c9c;
  uVar1 = *(ulong *)(param_2 + lVar3);
  func_0x00010bf529e0();
  if (param_4 < uVar1) {
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010c0dfd40(uVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar2);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10921d69c; end: 10921d743; -[YYSpriteSheetImage animatedImageContentsRectAtIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10921d69c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112783c98;
  uVar1 = *(ulong *)(param_2 + lVar3);
  func_0x00010bf529e0();
  if (param_4 < uVar1) {
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010c0dfd40(uVar2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    _objc_release(uVar2);
  }
  else {
    param_1 = *(undefined8 *)PTR__CGRectZero_110347608;
  }
  return param_1;
}



/* Entry: 10921d744; end: 10921d753; -[YYSpriteSheetImage contentRects] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10921d744(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783c98);
}



/* Entry: 10921d754; end: 10921d763; -[YYSpriteSheetImage frameDurations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10921d754(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783c9c);
}



/* Entry: 10921d764; end: 10921d773; -[YYSpriteSheetImage loopCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10921d764(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112783ca0);
}



/* Entry: 10921d774; end: 10921d7b3; -[YYSpriteSheetImage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921d774(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112783c9c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112783c98,0);
  return;
}



/* Entry: 10921d7b4; end: 10921d7ef; -[SCMainCameraPresentationServices .cxx_destruct] */

void FUN_10921d7b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10921d7f0; end: 10921d7f7; -[SCLensFetchTypeUpdatingServices lensFetchTypeUpdater] */

undefined8 FUN_10921d7f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10921d7f8; end: 10921d803; -[SCLensFetchTypeUpdatingServices .cxx_destruct] */

void FUN_10921d7f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10921d804; end: 10921d80b; -[SCLensCloseButtonLayoutConstants topMargin] */

undefined8 FUN_10921d804(void)

{
  return 0x4026000000000000;
}



/* Entry: 10921d80c; end: 10921d81b; -[SCLensCloseButtonLayoutConstants size] */

void FUN_10921d80c(void)

{
  return;
}



/* Entry: 10921d81c; end: 10921d827; -[SCLensCloseButtonLayoutConstants transform] */

void FUN_10921d81c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbaac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGAffineTransformMakeTranslation_110347030)(0,0);
  return;
}



/* Entry: 10921d828; end: 10921d85b; -[SCLensCloseButtonLayoutConstants image] */

void FUN_10921d828(int param_1)

{
  func_0x000107c30a74();
  if (param_1 == 0) {
    func_0x00010921d9e8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010921dae0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10921d85c; end: 10921d85f; -[SCLensCloseButtonLayoutConstants imageDirectorMode] */

void FUN_10921d85c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126ddef8;
  _objc_opt_class(PTR_PTR_1126ddef8);
  func_0x00010bf249e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar3,param_2,&PTR____CFConstantStringClassReference_110f2cff8,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10921d860; end: 10921d86b; -[SCLensHintLayoutConstants lensHintLabelHeight] */

undefined8 FUN_10921d860(void)

{
  return 0x4056800000000000;
}



/* Entry: 10921d86c; end: 10921d873; -[SCLensHintLayoutConstants lensHintLabelMargin] */

undefined8 FUN_10921d86c(void)

{
  return 0x4024000000000000;
}



/* Entry: 10921d874; end: 10921df3b;  */

void FUN_10921d874(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126ddef8;
  _objc_opt_class(PTR_PTR_1126ddef8);
  func_0x00010bf249e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar3,param_2,&PTR____CFConstantStringClassReference_110eaae98,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10921df3c; end: 10921e0b3; -[SCAlwaysOnMediaPickerToggleImageProvider initWithUIEdgeInsets:size:] */

undefined8 * FUN_10921df3c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1127010d8;
  puVar1 = &uStack_90;
  uStack_90 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar3);
  }
  return puVar1;
}



/* Entry: 10921e0b4; end: 10921e10f;  */

void FUN_10921e0b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed11b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),PTR_PTR_1126ddf00,
             PTR_s__unifiedCameraDesignMakeAlbumIco_112591e10,1);
  return;
}



/* Entry: 10921e110; end: 10921e13f; -[SCAlwaysOnMediaPickerToggleImageProvider imageForTrayOpened:] */

void FUN_10921e110(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0x18;
  if (param_3 == 0) {
    lVar1 = 8;
  }
  func_0x00010c269d40(*(undefined8 *)(param_1 + lVar1));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10921e140; end: 10921e147; -[SCAlwaysOnMediaPickerToggleImageProvider disabledImage] */

void FUN_10921e140(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 10921e148; end: 10921e227; +[SCAlwaysOnMediaPickerToggleImageProvider _circleImageWithDiameter:offset:color:] */

void FUN_10921e148(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  double dStack_60;
  double dStack_58;
  
  _objc_retain(param_5);
  dVar3 = param_1 + param_2 * 2.0;
  puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010c0469e0(dVar3,dVar3);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10921e228;
  puStack_70 = &UNK_110866440;
  uStack_68 = param_5;
  dStack_60 = param_2;
  dStack_58 = param_1;
  _objc_retain(param_5);
  puVar2 = puVar1;
  func_0x00010bfe91c0(puVar1,param_4,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10921e228; end: 10921e287;  */

void FUN_10921e228(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bdc1000(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retainAutorelease(uVar1);
  func_0x00010bdc0fe0();
  _CGContextSetFillColorWithColor(param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbacdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGContextFillEllipseInRect_110347198)(uVar2,uVar2,uVar3,uVar3,param_2);
  return;
}



/* Entry: 10921e288; end: 10921e39b; +[SCAlwaysOnMediaPickerToggleImageProvider _drawImage:onTopRightCornerOfImage:ratioOfWidth:] */

void FUN_10921e288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c23d0a0(param_6);
  func_0x00010c23d0a0(param_6);
  puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010c0469e0(uVar3,param_2);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10921e39c;
  puStack_80 = &UNK_110a0c5c0;
  uStack_78 = param_6;
  uStack_70 = param_5;
  uStack_68 = uVar3;
  uStack_60 = param_2;
  uStack_58 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = puVar1;
  func_0x00010bfe91c0(puVar1,param_4,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10921e39c; end: 10921e3ef;  */

/* WARNING: Possible PIC construction at 0x00010921e3bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010921e3c0) */

void FUN_10921e39c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 10921e3f0; end: 10921e51b; +[SCAlwaysOnMediaPickerToggleImageProvider _unifiedCameraDesignMakeSelectedIconWithSize:UIEdgeInsets:] */

void FUN_10921e3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_8,0x57);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(param_1,param_2,param_3,param_4,param_5,param_6,puVar2,param_8,0x210,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ddf00;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_8,0x69);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bddeb00(param_1,0,puVar1,param_8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ddf00;
  func_0x00010be06620(0x3ff0000000000000,PTR_PTR_1126ddf00,param_8,puVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10921e51c; end: 10921e5d3; +[SCAlwaysOnMediaPickerToggleImageProvider _unifiedCameraDesignMakeAlbumIconWithSize:UIEdgeInsets:enabled:] */

void FUN_10921e51c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  int param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b0c40;
  uVar1 = 0x55;
  if (param_9 == 0) {
    uVar1 = 0x6f;
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(param_1,param_2,param_3,param_4,param_5,param_6,puVar3,param_8,0x210,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10921e5d4; end: 10921e60f; -[SCAlwaysOnMediaPickerToggleImageProvider .cxx_destruct] */

void FUN_10921e5d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10921e610; end: 10921e6f7; -[SCAlwaysOnMediaPickerToggleManager initWithAlwaysOnMediaPickerToggleStateDelegate:enableToggleShadow:] */

undefined1 * FUN_10921e610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127010e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ddf08;
    _objc_alloc();
    func_0x00010c00a740();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ddf10;
    _objc_alloc();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x00010c29bf00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053dc0();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x18) = 0;
    func_0x00010bfe1560(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10921e6f8; end: 10921e6ff; -[SCAlwaysOnMediaPickerToggleManager containerView] */

void FUN_10921e6f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_view_1126849e8);
  return;
}



/* Entry: 10921e700; end: 10921e73b; -[SCAlwaysOnMediaPickerToggleManager hide] */

void FUN_10921e700(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bfe1300();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 10921e73c; end: 10921e767; -[SCAlwaysOnMediaPickerToggleManager trayOn] */

void FUN_10921e73c(long param_1,undefined8 param_2)

{
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 8),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c27b4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_trayOn_11267c760);
  return;
}



/* Entry: 10921e768; end: 10921e793; -[SCAlwaysOnMediaPickerToggleManager trayOff] */

void FUN_10921e768(long param_1,undefined8 param_2)

{
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 8),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c27b4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_trayOff_11267c758);
  return;
}



/* Entry: 10921e794; end: 10921e7bf; -[SCAlwaysOnMediaPickerToggleManager disable] */

void FUN_10921e794(long param_1,undefined8 param_2)

{
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 8),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bf7f9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_disable_1125bd820);
  return;
}



/* Entry: 10921e7c0; end: 10921e7ef; -[SCAlwaysOnMediaPickerToggleManager .cxx_destruct] */

void FUN_10921e7c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10921e7f0; end: 10921e8f3; -[SCAlwaysOnMediaPickerToggle initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10921e7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127010e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(0,0,0x4044000000000000,0x4044000000000000,&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112783ccc),param_3);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar4 = (long)_DAT_112783cd0;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1c8340(0,*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010bef9040(puVar1);
    func_0x00010c219b60(puVar1);
    func_0x00010c160fc0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10921e8f4; end: 10921e8fb; -[SCAlwaysOnMediaPickerToggle setImage:] */

void FUN_10921e8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setImage_forState__112648218,param_3,0);
  return;
}



/* Entry: 10921e8fc; end: 10921e913; -[SCAlwaysOnMediaPickerToggle gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10921e8fc(long param_1,undefined8 param_2,long param_3)

{
  return param_3 == *(long *)(param_1 + _DAT_112783cd0);
}



/* Entry: 10921e914; end: 10921e9bb; -[SCAlwaysOnMediaPickerToggle _handleLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921e914(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if (1 < lVar1 - 4U) {
    if (lVar1 != 3) {
      if (lVar1 == 1) {
        func_0x00010bebbe80(param_1);
      }
      goto LAB_10921e9a8;
    }
    func_0x00010c09ef00(param_3,param_2,param_1);
    lVar1 = param_1;
    func_0x00010c102b20(param_1,param_2,0);
    if ((int)lVar1 != 0) {
      lVar1 = param_1 + _DAT_112783ccc;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c272c80();
      _objc_release(lVar1);
    }
  }
  func_0x00010be954e0(param_1);
LAB_10921e9a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10921e9bc; end: 10921ea2b; -[SCAlwaysOnMediaPickerToggle _shrinkButton] */

void FUN_10921e9bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10921ea2c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bf03440(0x3fd6666666666666,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0,&puStack_38,
                      0);
  return;
}



/* Entry: 10921ea2c; end: 10921ea7f;  */

void FUN_10921ea2c(long param_1,undefined8 param_2)

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
  
  _CGAffineTransformMakeScale(&uStack_50,0x3feccccccccccccd,0x3feccccccccccccd);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 10921ea80; end: 10921eaef; -[SCAlwaysOnMediaPickerToggle _restoreButtonSize] */

void FUN_10921ea80(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10921eaf0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bf03440(0x3fd6666666666666,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0,&puStack_38,
                      0);
  return;
}



/* Entry: 10921eaf0; end: 10921eb3f;  */

void FUN_10921eaf0(long param_1,undefined8 param_2)

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
  
  _CGAffineTransformMakeScale(&uStack_50,0x3ff0000000000000,0x3ff0000000000000);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 10921eb40; end: 10921eb7b; -[SCAlwaysOnMediaPickerToggle .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921eb40(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112783cd0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112783ccc);
  return;
}



/* Entry: 10921eb7c; end: 10921ec4f; -[SCAlwaysOnMediaPickerToggleContainerVC initWithToggleView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10921eb7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127010f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(0,0,0x4044000000000000,0x4044000000000000);
    func_0x00010c222380(puVar1);
    _objc_release(puVar2);
    lVar4 = (long)_DAT_112783cd4;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112783cd8) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10921ec50; end: 10921ec8b; -[SCAlwaysOnMediaPickerToggleContainerVC hidden] */

undefined8 FUN_10921ec50(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c074c20();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10921ec8c; end: 10921ecc3; -[SCAlwaysOnMediaPickerToggleContainerVC setHidden:] */

void FUN_10921ec8c(undefined8 param_1)

{
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10921ecc4; end: 10921ed23; -[SCAlwaysOnMediaPickerToggleContainerVC viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921ecc4(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1127010f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  lVar1 = (long)_DAT_112783cd8;
  if ((*(byte *)(param_1 + lVar1) & 1) == 0) {
    func_0x00010beb0a20(param_1);
    *(undefined1 *)(param_1 + lVar1) = 1;
  }
  return;
}



/* Entry: 10921ed24; end: 10921ee33; -[SCAlwaysOnMediaPickerToggleContainerVC animateFadeUp] */

void FUN_10921ed24(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01b40();
  _objc_release(uVar1);
  if (param_1 != 0.0) {
    uVar1 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0);
    _objc_release(uVar1);
  }
  _CGAffineTransformMakeScale(&uStack_60,0x3ff0000000000000,0x3ff0000000000000);
  uVar1 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960();
  _objc_release(uVar1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10921ee34;
  puStack_a0 = &UNK_110842e18;
  uStack_98 = param_2;
  func_0x00010bf03440(0x3fd6666666666666,0,PTR__OBJC_CLASS___UIView_1126aec20,param_3,0,&puStack_b8,
                      0);
  return;
}



/* Entry: 10921ee34; end: 10921ee6b;  */

void FUN_10921ee34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10921ee6c; end: 10921f207; -[SCAlwaysOnMediaPickerToggleContainerVC _setupToggleToContainerConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921ee6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = (long)_DAT_112783cd4;
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar24),param_2,0);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf49420(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + lVar24);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar22);
  _objc_release(uVar21);
  _objc_release(lVar24);
  _objc_release(param_1);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + _DAT_112783cd4,0);
  return;
}



/* Entry: 10921f208; end: 10921f21b; -[SCAlwaysOnMediaPickerToggleContainerVC .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921f208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112783cd4,0);
  return;
}



/* Entry: 10921f21c; end: 10921f383; -[SCAlwaysOnMediaPickerToggleVC initWithDelegate:enableToggleShadow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10921f21c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1127010f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ddf00;
    _objc_alloc();
    func_0x00010c057640(0x4020000000000000,0x4020000000000000,0x4020000000000000,0x4020000000000000,
                        0x4044000000000000,0x4044000000000000);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112783cdc);
    *(undefined **)((long)puVar1 + (long)_DAT_112783cdc) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ddf18;
    _objc_alloc();
    func_0x00010c00a2c0();
    lVar5 = (long)_DAT_112783ce0;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b08d8;
    if (param_4 != 0) {
      uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b816a88(0x4010000000000000,0x3fc3333333333333,0,0x3ff0000000000000,
                          0x4020000000000000,0x4020000000000000,0x4020000000000000,
                          0x4020000000000000,puVar2,uVar4,puVar3);
      _objc_release(puVar3);
    }
    func_0x00010c222380(puVar1);
    func_0x00010c27b4c0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10921f384; end: 10921f3ef; -[SCAlwaysOnMediaPickerToggleVC trayOn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921f384(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (long)_DAT_112783ce0;
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar2),param_2,1);
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112783cdc);
  func_0x00010bfe7960(uVar1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(uVar3,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10921f3f0; end: 10921f45b; -[SCAlwaysOnMediaPickerToggleVC trayOff] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921f3f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (long)_DAT_112783ce0;
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar2),param_2,1);
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112783cdc);
  func_0x00010bfe7960(uVar1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(uVar3,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10921f45c; end: 10921f4c3; -[SCAlwaysOnMediaPickerToggleVC disable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921f45c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (long)_DAT_112783ce0;
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar2),param_2,0);
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112783cdc);
  func_0x00010bf80dc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(uVar3,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10921f4c4; end: 10921f503; -[SCAlwaysOnMediaPickerToggleVC .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10921f4c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112783ce0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112783cdc,0);
  return;
}



/* Entry: 10921f504; end: 10921f50b; -[SCLensAlwaysOnMediaPickerServices alwaysOnMediaPickerToggleContainerManager] */

undefined8 FUN_10921f504(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10921f50c; end: 10921f513; -[SCLensAlwaysOnMediaPickerServices alwaysOnMediaPickerLogger] */

undefined8 FUN_10921f50c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10921f514; end: 10921f51b; -[SCLensAlwaysOnMediaPickerServices alwaysOnMediaPickerConfiguration] */

undefined8 FUN_10921f514(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10921f51c; end: 10921f523; -[SCLensAlwaysOnMediaPickerServices supportedDeviceProviding] */

undefined8 FUN_10921f51c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10921f524; end: 10921f52b; -[SCLensAlwaysOnMediaPickerServices imagineLensService] */

undefined8 FUN_10921f524(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10921f52c; end: 10921f57f; -[SCLensAlwaysOnMediaPickerServices .cxx_destruct] */

void FUN_10921f52c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10921f580; end: 10921f5f3; -[SCLensInLensMediaPickerStateService initWithInLensPickerManager:] */

undefined1 * FUN_10921f580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701108;
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



/* Entry: 10921f5f4; end: 10921f5fb; -[SCLensInLensMediaPickerStateService inLensMediaPickerManager] */

undefined8 FUN_10921f5f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10921f5fc; end: 10921f607; -[SCLensInLensMediaPickerStateService .cxx_destruct] */

void FUN_10921f5fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10921f608; end: 10921f613; -[SCMainCameraScopedLensAlwaysOnMediaPickerServices .cxx_destruct] */

void FUN_10921f608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10921f614; end: 10921f67f; -[SCMainCameraLensCarouselStartupCompleteScope initWithDelegate:] */

undefined1 * FUN_10921f614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701118;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10921f680; end: 10921f697; -[SCMainCameraLensCarouselStartupCompleteScope delegate] */

void FUN_10921f680(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10921f698; end: 10921f69f; -[SCMainCameraLensCarouselStartupCompleteScope .cxx_destruct] */

void FUN_10921f698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10921f6a0; end: 10921f6a7; -[SCScanLensesStreamServices mainLensCarouselManagerStream] */

undefined8 FUN_10921f6a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10921f6a8; end: 10921f6d7; -[SCScanLensesStreamServices .cxx_destruct] */

void FUN_10921f6a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10921f6d8; end: 10921fa6f; -[SCLensTalkCarouselScope initWithLensesCarouselContainer:arBarContainer:lensesLabelContainer:lensesTouchView:lensTouchesDelegate:sponsoredLensCTAContainer:sponsoredLensAttachmentContainerProvider:miniCameraTrayContainerProvider:miniCameraTrayDelegate:carouselConfigurationEventObservable:carouselLifecycleEventObservable:lensSelectionEventObservable:lensOrderUpdateObservable:moreLensesRequestedObservable:presentLensExplorerObservable:workflowDelegate:talkContext:] */

undefined8 *
FUN_10921f6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_112701128;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
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
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 7,param_7);
    _objc_retain(param_8);
    uVar2 = puVar1[3];
    puVar1[3] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[4];
    puVar1[4] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 9,param_11);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 10,param_18);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10921fa70; end: 10921fa77; -[SCLensTalkCarouselScope lensesCarouselContainer] */

undefined8 FUN_10921fa70(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10921fa78; end: 10921fa7f; -[SCLensTalkCarouselScope arBarContainer] */

undefined8 FUN_10921fa78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10921fa80; end: 10921fa87; -[SCLensTalkCarouselScope sponsoredLensCTAContainer] */

undefined8 FUN_10921fa80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10921fa88; end: 10921fa8f; -[SCLensTalkCarouselScope sponsoredLensAttachmentContainerProvider] */

undefined8 FUN_10921fa88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10921fa90; end: 10921fa97; -[SCLensTalkCarouselScope lensesLabelContainer] */

undefined8 FUN_10921fa90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10921fa98; end: 10921fa9f; -[SCLensTalkCarouselScope lensesTouchView] */

undefined8 FUN_10921fa98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10921faa0; end: 10921fab7; -[SCLensTalkCarouselScope lensTouchesDelegate] */

void FUN_10921faa0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10921fab8; end: 10921fabf; -[SCLensTalkCarouselScope miniCameraTrayContainerProvider] */

undefined8 FUN_10921fab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10921fac0; end: 10921fad7; -[SCLensTalkCarouselScope miniCameraTrayDelegate] */

void FUN_10921fac0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10921fad8; end: 10921faef; -[SCLensTalkCarouselScope workflowDelegate] */

void FUN_10921fad8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10921faf0; end: 10921faf7; -[SCLensTalkCarouselScope carouselConfigurationEventObservable] */

undefined8 FUN_10921faf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}


