/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ecc624; end: 108ecc62f; -[SCSnapKitRequestParser .cxx_destruct] */

void FUN_108ecc624(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ecc630; end: 108ecc79b; +[SCSnapKitStickerHelpers snapKitStickerStyleFromAppName:attachmentUrl:type:appId:] */

void FUN_108ecc630(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = param_3;
    func_0x00010c08fa60();
    if (puVar6 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar6;
      func_0x00010bfe4420();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfda7c0();
      _objc_release(puVar2);
      puVar2 = puVar6;
      func_0x00010bfe4420(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_3;
      if ((int)puVar3 != 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110e36198;
        func_0x00010c08fa60(&PTR____CFConstantStringClassReference_110e36198);
        puVar3 = puVar2;
        func_0x00010c260c00(puVar2,param_2,ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
        puVar5 = puVar2;
        puVar2 = puVar3;
      }
      param_3 = puVar2;
      _objc_release(puVar5);
      _objc_release(puVar6);
    }
    puVar6 = PTR_PTR_1126b5858;
    _objc_alloc(PTR_PTR_1126b5858);
    func_0x00010bff3500();
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108ecc79c; end: 108ecc88b; +[SCSnapKitStickerHelpers isStickerAnimated:] */

undefined * FUN_108ecc79c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfe7300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
LAB_108ecc834:
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bfe7300();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c105b00();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126c4978;
    lVar1 = param_3;
    if (lVar2 == 8) {
      func_0x00010bfe7300(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be40c80(puVar3,param_2,lVar1);
    }
    else {
      if (lVar2 != 3) goto LAB_108ecc834;
      func_0x00010bfe7300(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be45960(puVar3,param_2,lVar1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 108ecc88c; end: 108ecc8b3; +[SCSnapKitStickerHelpers SCACreativeKitStickertype:] */

undefined8 FUN_108ecc88c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c4978;
  func_0x00010c07f980();
  uVar1 = 2;
  if ((int)puVar2 != 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 108ecc8b4; end: 108ecc96f; +[SCSnapKitStickerHelpers _isGifAnimated:] */

bool FUN_108ecc8b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  lVar2 = lVar1;
  _malloc();
  lVar3 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bf25f00();
  _memcpy(lVar2,lVar3,lVar1);
  lVar1 = lVar1 + -2;
  if (lVar1 == 0) {
    bVar6 = false;
  }
  else {
    iVar4 = 0;
    pcVar5 = (char *)(lVar2 + 2);
    do {
      if (((pcVar5[-2] == '\0') && (pcVar5[-1] == '!')) && (*pcVar5 == -7)) {
        iVar4 = iVar4 + 1;
      }
      pcVar5 = pcVar5 + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    bVar6 = 1 < iVar4;
  }
  _free(lVar2);
  _objc_release(param_3);
  return bVar6;
}



/* Entry: 108ecc970; end: 108ecc9f7; +[SCSnapKitStickerHelpers _isWebPAnimated:] */

byte FUN_108ecc970(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c08fa60();
  if (uVar1 < 0x16) {
    bVar4 = 0;
  }
  else {
    uVar2 = uVar1;
    _malloc();
    uVar3 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x00010bf25f00();
    _memcpy(uVar2,uVar3,uVar1);
    bVar4 = *(byte *)(uVar2 + 0x14) >> 1 & 1;
    _free(uVar2);
  }
  _objc_release(param_3);
  return bVar4;
}



/* Entry: 108ecc9f8; end: 108eccb87; +[SCSnapKitStickerHelpers stickerRelativeSize:] */

undefined1  [16] FUN_108ecc9f8(float param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  _objc_retain(param_4);
  dVar7 = *(double *)PTR__CGSizeZero_110347620;
  dVar6 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  lVar1 = param_4;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar3 = param_4;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      lVar1 = param_4;
      func_0x00010c0cc0c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      fVar5 = param_1;
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_4;
      func_0x00010c0cc0c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if ((0.0 < param_1) && (0.0 < fVar5)) {
        dVar6 = (double)fVar5;
        dVar7 = (double)param_1;
      }
    }
  }
  _objc_release(param_4);
  auVar8._8_8_ = dVar6;
  auVar8._0_8_ = dVar7;
  return auVar8;
}



/* Entry: 108eccb88; end: 108eccc3b; +[SCSnapKitStickerHelpers stickerImage:] */

void FUN_108eccb88(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bfe7300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = (undefined *)0x0;
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126c4978;
    func_0x00010c07f980(PTR_PTR_1126c4978,param_2,param_3);
    ppuVar1 = &PTR_PTR_1126b2720;
    if ((int)puVar3 == 0) {
      ppuVar1 = &PTR__OBJC_CLASS___UIImage_1126aea68;
    }
    puVar3 = *ppuVar1;
    lVar2 = param_3;
    func_0x00010bfe7300(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d040(puVar3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108eccc3c; end: 108eccf0f; +[SCSnapKitStickerHelpers stickerCenter:] */

undefined1  [16] FUN_108eccc3c(float param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    dVar8 = 0.5;
LAB_108eccda0:
    _objc_release(lVar1);
  }
  else {
    lVar3 = param_4;
    fVar7 = param_1;
    func_0x00010c0cc0c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    if (fVar7 < 0.0) {
      param_1 = fVar7;
      _objc_release(lVar4);
      _objc_release(lVar3);
      dVar8 = 0.5;
LAB_108eccd98:
      _objc_release(lVar2);
      goto LAB_108eccda0;
    }
    lVar5 = param_4;
    func_0x00010c0cc0c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    dVar8 = 0.5;
    param_1 = 1.0;
    if (fVar7 <= 1.0) {
      lVar1 = param_4;
      param_1 = 1.0;
      func_0x00010c0cc0c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar8 = (double)param_1;
      goto LAB_108eccd98;
    }
  }
  lVar1 = param_4;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    dVar9 = 0.5;
  }
  else {
    lVar3 = param_4;
    func_0x00010c0cc0c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    if (0.0 <= param_1) {
      lVar5 = param_4;
      func_0x00010c0cc0c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      dVar9 = 0.5;
      fVar7 = 1.0;
      if (1.0 < param_1) goto LAB_108eccedc;
      lVar1 = param_4;
      func_0x00010c0cc0c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar9 = (double)fVar7;
    }
    else {
      _objc_release(lVar4);
      _objc_release(lVar3);
      dVar9 = 0.5;
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
LAB_108eccedc:
  _objc_release(param_4);
  auVar10._8_8_ = dVar9;
  auVar10._0_8_ = dVar8;
  return auVar10;
}



/* Entry: 108eccf10; end: 108eccfdb; +[SCSnapKitStickerHelpers stickerRotation:] */

double FUN_108eccf10(float param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    dVar3 = 0.0;
  }
  else {
    lVar1 = param_4;
    func_0x00010c0cc0c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar3 = (double)param_1;
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  return dVar3;
}



/* Entry: 108eccfdc; end: 108ecd067; +[SCSnapKitStickerHelpers stickerImageDataWithTrimmedWhitespace:] */

void FUN_108eccfdc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar1;
    func_0x00010bfe6ee0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar2;
      _UIImagePNGRepresentation(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ecd068; end: 108ecd13f; +[SCSnapKitStickerHelpers stickerScale:] */

double FUN_108ecd068(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  double dVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0cc0c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  fVar3 = param_1;
  _objc_release(uVar2);
  _objc_release(uVar1);
  dVar4 = 1.0;
  if (0.0 < param_1) {
    uVar1 = param_4;
    func_0x00010c0cc0c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar4 = (double)fVar3;
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  return dVar4;
}



/* Entry: 108ecd140; end: 108ecd163;  */

undefined ** FUN_108ecd140(ulong param_1)

{
  if (param_1 < 0x10) {
    return (undefined **)(&PTR_PTR_110ac9e70)[param_1];
  }
  return &PTR____CFConstantStringClassReference_110daf6b8;
}



/* Entry: 108ecd164; end: 108ecd1eb; -[SCCreativeKitPreviewContent initWithPreviewContentURL:mediaType:] */

undefined1 *
FUN_108ecd164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ff0f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ecd1ec; end: 108ecd1f3; -[SCCreativeKitPreviewContent previewContentURL] */

undefined8 FUN_108ecd1ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ecd1f4; end: 108ecd1fb; -[SCCreativeKitPreviewContent mediaType] */

undefined8 FUN_108ecd1f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ecd1fc; end: 108ecd207; -[SCCreativeKitPreviewContent .cxx_destruct] */

void FUN_108ecd1fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ecd208; end: 108ecd3ef; +[SCSnapConnectVersion isSnapchatAtLeastTargetVersion:] */

bool FUN_108ecd208(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  _objc_opt_class();
  func_0x00010bdd7020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110dceb18);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf529e0();
  uVar9 = uVar4;
  func_0x00010bf529e0();
  if (uVar9 <= uVar5) {
    uVar5 = uVar9;
  }
  if (uVar5 != 0) {
    uVar9 = 0;
    do {
      uVar6 = uVar2;
      func_0x00010c0dfd40(uVar2,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c067fc0();
      _objc_release(uVar6);
      uVar6 = uVar4;
      func_0x00010c0dfd40(uVar4,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010c067fc0();
      _objc_release(uVar6);
      if (uVar8 != uVar7) {
        bVar1 = (long)uVar7 < (long)uVar8;
        goto LAB_108ecd3a8;
      }
      uVar9 = uVar9 + 1;
    } while (uVar5 != uVar9);
  }
  uVar9 = uVar2;
  func_0x00010bf529e0();
  uVar6 = uVar4;
  func_0x00010bf529e0();
  if ((uVar6 < uVar9) && (uVar9 = uVar2, func_0x00010bf529e0(), uVar5 < uVar9)) {
    do {
      uVar9 = uVar2;
      func_0x00010c0dfd40(uVar2,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar9;
      func_0x00010c067fc0();
      _objc_release(uVar9);
      bVar1 = uVar6 == 0;
      if (uVar6 != 0) break;
      uVar5 = uVar5 + 1;
      uVar9 = uVar2;
      func_0x00010bf529e0();
    } while (uVar5 < uVar9);
  }
  else {
    bVar1 = true;
  }
LAB_108ecd3a8:
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108ecd3f0; end: 108ecd5ef; +[SCSnapConnectVersion isSupportedTargetVersion:minSupportedVersionName:] */

bool FUN_108ecd3f0(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_opt_class();
  func_0x00010bdd7020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf44740(param_3,param_2,&PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf44740(uVar2,param_2,&PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf529e0();
  uVar9 = uVar4;
  func_0x00010bf529e0();
  if (uVar9 <= uVar5) {
    uVar5 = uVar9;
  }
  if (uVar5 != 0) {
    uVar9 = 0;
    do {
      uVar6 = uVar3;
      func_0x00010c0dfd40(uVar3,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c067fc0();
      _objc_release(uVar6);
      uVar6 = uVar4;
      func_0x00010c0dfd40(uVar4,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010c067fc0();
      _objc_release(uVar6);
      if (uVar8 != uVar7) {
        bVar1 = (long)uVar8 <= (long)uVar7;
        goto LAB_108ecd59c;
      }
      uVar9 = uVar9 + 1;
    } while (uVar5 != uVar9);
  }
  uVar9 = uVar4;
  func_0x00010bf529e0();
  uVar6 = uVar3;
  func_0x00010bf529e0();
  if ((uVar6 < uVar9) && (uVar9 = uVar4, func_0x00010bf529e0(), uVar5 < uVar9)) {
    do {
      uVar9 = uVar4;
      func_0x00010c0dfd40(uVar4,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar9;
      func_0x00010c067fc0();
      _objc_release(uVar9);
      bVar1 = uVar6 == 0;
      if (uVar6 != 0) break;
      uVar5 = uVar5 + 1;
      uVar9 = uVar4;
      func_0x00010bf529e0();
    } while (uVar5 < uVar9);
  }
  else {
    bVar1 = true;
  }
LAB_108ecd59c:
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108ecd5f0; end: 108ecd697; +[SCSnapConnectVersion _bundleInfo] */

void FUN_108ecd5f0(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372eb80 != -1) {
    func_0x000107c27d9c(0x11372eb80,&PTR___NSConcreteGlobalBlock_110ac9ef0);
  }
  uVar1 = uRam000000011372eb78;
  _objc_retain(uRam000000011372eb78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ecd698; end: 108ecd7ef;  */

undefined8 FUN_108ecd698(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110dd8fd8);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar6 = 0x11329b698;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                        &PTR____CFConstantStringClassReference_110effe58);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c06a520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar3 = param_1;
    func_0x00010c11f340(param_1,param_2,puVar2);
    if (uVar3 == 0x7fffffffffffffff) {
      uVar3 = param_1;
      func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110dad1f8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf529e0();
      if (uVar4 < 2) {
        uVar6 = 0x11329b698;
      }
      else {
        uVar4 = uVar3;
        func_0x00010c0dfd40(uVar3,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c067fc0();
        uVar6 = 0x11372eb68;
        uRam000000011372eb68 = uVar5;
        _objc_release(uVar4);
        uVar4 = uVar3;
        func_0x00010c0dfd40(uVar3,param_2,1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c067fc0();
        uRam000000011372eb70 = uVar5;
        _objc_release(uVar4);
      }
      _objc_release(uVar3);
    }
    else {
      uVar6 = 0x11329b698;
    }
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  return uVar6;
}



/* Entry: 108ecd7f0; end: 108ecd877;  */

undefined8 FUN_108ecd7f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c11db20(param_1,param_2,&PTR____CFConstantStringClassReference_110effe78);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108ecd878; end: 108ecd9d7; -[SCSnapKitLogger initWithClientID:kitType:kitVersion:kitAppID:kitSessionId:kitAuthFlowSource:kitPluginType:kitIsFromReactNative:kitIsForFirebaseAuthentication:blizzardLogger:] */

undefined8 *
FUN_108ecd878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126ff100;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    puVar1[3] = param_4;
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[1];
    puVar1[1] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    puVar1[7] = param_8;
    puVar1[8] = param_9;
    *(undefined1 *)(puVar1 + 6) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 0x31) = param_10._1_1_;
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108ecd9d8; end: 108ecda13; -[SCSnapKitLogger initWithClientID:kitType:kitVersion:kitAppID:kitSessionId:kitIsFromReactNative:kitIsForFirebaseAuthentication:blizzardLogger:] */

void FUN_108ecd9d8(void)

{
  func_0x00010bffef40();
  return;
}



/* Entry: 108ecda14; end: 108ecdb73; -[SCSnapKitLogger initWithClientID:kitAppID:contextSessionID:snapKitAttachmentURL:blizzardLogger:] */

undefined1 *
FUN_108ecda14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ff100;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_alloc_init();
    puVar4 = puVar3;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ecdb74; end: 108ecdcb7; -[SCSnapKitLogger initWithSnapMetadata:blizzardLogger:] */

undefined1 *
FUN_108ecdb74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff100;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bf07940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010c0dfa00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = 3;
    uVar2 = param_3;
    func_0x00010c087180();
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    uVar2 = param_3;
    func_0x00010bf5ada0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010c241bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010c073d20();
    *(char *)((long)puVar1 + 0x30) = (char)uVar2;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ecdcb8; end: 108ecdd43; -[SCSnapKitLogger _addBaseInfoToEvent:] */

void FUN_108ecdcb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c1b70a0(param_3,param_2,uVar1);
  func_0x00010c1d03e0(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010c1b7100(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
  func_0x00010c1b7120(param_3,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1b70e0(param_3,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1b70c0(param_3,param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010c1b1500(param_3,param_2,*(undefined1 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ecdd44; end: 108ecdf07; -[SCSnapKitLogger _addCreativeKitBaseInfoToEvent:] */

void FUN_108ecdd44(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010bdc6040(param_1,param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c241940(uVar2);
  func_0x00010c1858a0(param_3,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf5ad20(uVar2);
  func_0x00010c1858c0(param_3,param_2,uVar2);
  lVar3 = *(long *)(param_1 + 0x70);
  func_0x00010bf5ad80();
  if (lVar3 == 1) {
    bVar1 = false;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x70);
    func_0x00010bf5ad80(lVar3);
    bVar1 = lVar3 != -1;
  }
  func_0x00010c1a6f00(param_3,param_2,bVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bfd84e0(uVar2);
  func_0x00010c1a6240(param_3,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bfd85e0(uVar2);
  func_0x00010c1a6260(param_3,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bfd5180(uVar2);
  func_0x00010c1a5b40(param_3,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bfd4400(uVar2);
  func_0x00010c1a58c0(param_3,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c07f460(uVar2);
  func_0x00010c1b49e0(param_3,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c0829c0(uVar2);
  func_0x00010c1b58c0(param_3,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf68340(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18aaa0(param_3,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf67fa0(uVar2);
  func_0x00010c18a8a0(param_3,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bfe5f00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9a00(param_3,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c06afe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aeee0(param_3,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c23f300(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2038e0(param_3,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ecdf08; end: 108ecdf7b; -[SCSnapKitLogger _addIdentityWebViewBaseInfoToEvent:] */

void FUN_108ecdf08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c1d03e0(param_3,param_2,uVar1);
  func_0x00010c1b70a0(param_3,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010c1833c0(param_3,param_2,*(undefined8 *)(param_1 + 0x48));
  func_0x00010c2049a0(param_3,param_2,*(undefined8 *)(param_1 + 0x50));
  func_0x00010c204be0(param_3,param_2,*(undefined8 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ecdf7c; end: 108ece07f; -[SCSnapKitLogger logLoginClientValidateError:featuresRequested:featuresAuthorized:is1PA:httpErrorCode:] */

void FUN_108ecdf7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc648;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010bdc6040(param_1,param_2,puVar1);
  func_0x00010c1b4d40(puVar1,param_2,0);
  func_0x00010c206c40(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c194a60(puVar1,param_2,0);
  func_0x00010c19aee0(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c19af00(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1a9520(puVar1,param_2,param_7);
  func_0x00010c1c0840(puVar1,param_2,param_3);
  func_0x00010c1b11c0(puVar1,param_2,*(undefined1 *)(param_1 + 0x31));
  func_0x00010c1aef60(puVar1,param_2,param_6);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ece080; end: 108ece16b; -[SCSnapKitLogger logUserConnectedSuccesfully:isBitmojiAccessEnabled:is1PA:featuresRequested:featuresAuthorized:] */

void FUN_108ece080(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc648;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_opt_new(puVar1);
  func_0x00010bdc6040(param_1,param_2,puVar1);
  func_0x00010c1b4d40(puVar1,param_2,param_3);
  func_0x00010c206c40(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c194a60(puVar1,param_2,param_4);
  func_0x00010c1aef60(puVar1,param_2,param_5);
  func_0x00010c19aee0(puVar1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010c19af00(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c1b11c0(puVar1,param_2,*(undefined1 *)(param_1 + 0x31));
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ece16c; end: 108ece257; -[SCSnapKitLogger logUserAuthorizedSuccesfully:isBitmojiAccessEnabled:is1PA:featuresRequested:featuresAuthorized:] */

void FUN_108ece16c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc650;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_opt_new(puVar1);
  func_0x00010bdc6040(param_1,param_2,puVar1);
  func_0x00010c1af480(puVar1,param_2,param_3);
  func_0x00010c194a60(puVar1,param_2,param_4);
  func_0x00010c206c40(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c1aef60(puVar1,param_2,param_5);
  func_0x00010c19aee0(puVar1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010c19af00(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c1b11c0(puVar1,param_2,*(undefined1 *)(param_1 + 0x31));
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ece258; end: 108ece343; -[SCSnapKitLogger logUserReauthorizedSuccesfully:isBitmojiAccessEnabled:is1PA:featuresRequested:featuresAuthorized:] */

void FUN_108ece258(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc658;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_opt_new(puVar1);
  func_0x00010bdc6040(param_1,param_2,puVar1);
  func_0x00010c1af480(puVar1,param_2,param_3);
  func_0x00010c194a60(puVar1,param_2,param_4);
  func_0x00010c206c40(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c1aef60(puVar1,param_2,param_5);
  func_0x00010c19aee0(puVar1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010c19af00(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c1b11c0(puVar1,param_2,*(undefined1 *)(param_1 + 0x31));
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ece344; end: 108ece38b; -[SCSnapKitLogger logUserRemoveAppSuccessfully:] */

void FUN_108ece344(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5ae8;
  _objc_opt_new(PTR_PTR_1126b5ae8);
  func_0x00010bdc6040(param_1,param_2,puVar1);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ece38c; end: 108ece427; -[SCSnapKitLogger logDeeplinkError:errorStatusCode:profileLink:] */

void FUN_108ece38c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc660;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1971a0();
  _objc_release(param_3);
  func_0x00010c1972c0(puVar1,param_2,param_4);
  func_0x00010c1e42e0(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ece428; end: 108ece487; -[SCSnapKitLogger logIdentityWebViewAttempt:] */

void FUN_108ece428(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc668;
  _objc_opt_new(PTR_PTR_1126dc668);
  func_0x00010bdc70e0(param_1,param_2,puVar1);
  func_0x00010c18ddc0(puVar1,param_2,param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ece488; end: 108ece4e7; -[SCSnapKitLogger logIdentityWebViewOpen:] */

void FUN_108ece488(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc670;
  _objc_opt_new(PTR_PTR_1126dc670);
  func_0x00010bdc70e0(param_1,param_2,puVar1);
  func_0x00010c18dd40(puVar1,param_2,param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ece4e8; end: 108ece547; -[SCSnapKitLogger logIdentityWebViewComplete:] */

void FUN_108ece4e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc678;
  _objc_opt_new(PTR_PTR_1126dc678);
  func_0x00010bdc70e0(param_1,param_2,puVar1);
  func_0x00010c1ae220(puVar1,param_2,param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ece548; end: 108ece58f; -[SCSnapKitLogger logIdentityWebViewModalAccept] */

void FUN_108ece548(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc680;
  _objc_opt_new(PTR_PTR_1126dc680);
  func_0x00010bdc70e0(param_1,param_2,puVar1);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ece590; end: 108ece5ef; -[SCSnapKitLogger logIdentityWebViewModalDismiss:] */

void FUN_108ece590(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc688;
  _objc_opt_new(PTR_PTR_1126dc688);
  func_0x00010bdc70e0(param_1,param_2,puVar1);
  func_0x00010c18f3a0(puVar1,param_2,param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ece5f0; end: 108ece643; -[SCSnapKitLogger logCreateBitmojiCTAPageView] */

void FUN_108ece5f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc690;
  _objc_opt_new(PTR_PTR_1126dc690);
  func_0x00010bdc6040(param_1,param_2,puVar1);
  func_0x00010c21acc0(puVar1,param_2,0);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ece644; end: 108ece697; -[SCSnapKitLogger logCreateBitmojiCTASkipButtonTap] */

void FUN_108ece644(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc690;
  _objc_opt_new(PTR_PTR_1126dc690);
  func_0x00010bdc6040(param_1,param_2,puVar1);
  func_0x00010c21acc0(puVar1,param_2,1);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ece698; end: 108ece6eb; -[SCSnapKitLogger logCreateBitmojiCTACreateWithCamera] */

void FUN_108ece698(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc690;
  _objc_opt_new(PTR_PTR_1126dc690);
  func_0x00010bdc6040(param_1,param_2,puVar1);
  func_0x00010c21acc0(puVar1,param_2,2);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ece6ec; end: 108ece75f; -[SCSnapKitLogger log1PAUserAcceptTerms:] */

void FUN_108ece6ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc698;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010bdc6040(param_1,param_2,puVar1);
  func_0x00010c212e80(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ece760; end: 108ece7a3; -[SCSnapKitLogger _logCreativeKitEvent:] */

void FUN_108ece760(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bdc66e0(param_1,param_2,param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x68),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ece7a4; end: 108ecea47; -[SCSnapKitLogger logCreativeKitCameraViewStickerInteraction:finalMetadata:originalMetadata:didUserAdjustSticker:] */

void FUN_108ece7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dc6a0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1cf8c0();
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110db1258);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b4fe0();
  func_0x00010c19c9c0(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e41a78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c19ca40(puVar1);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110e41a98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c19ca60(puVar1);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110de1f58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c19caa0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110db1238);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010c0b4fe0(uVar2);
  func_0x00010c19cb80(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110db1258);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b4fe0();
  func_0x00010c1d65c0(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110e41a78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1d66c0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110e41a98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1d66e0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110de1f58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1d67c0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110db1238);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = uVar2;
  func_0x00010c0b4fe0(uVar2);
  func_0x00010c1d68e0(puVar1,param_2,uVar3);
  _objc_release(uVar2);
  func_0x00010c18dfa0(puVar1,param_2,param_6);
  func_0x00010be520a0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ecea48; end: 108ecea83; -[SCSnapKitLogger logCreativeKitDeepLinkProcessingStart] */

void FUN_108ecea48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc6a8;
  _objc_opt_new(PTR_PTR_1126dc6a8);
  func_0x00010be520a0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ecea84; end: 108eceabf; -[SCSnapKitLogger logCreativeKitDeepLinkStart] */

void FUN_108ecea84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc6b0;
  _objc_opt_new(PTR_PTR_1126dc6b0);
  func_0x00010be520a0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108eceac0; end: 108eceb5b; -[SCSnapKitLogger logCreativeKitDeepLinkClientError:additionalInfo:] */

void FUN_108eceac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc6b8;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1b0000();
  FUN_108ecd140(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c197380(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1659c0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010be520a0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108eceb5c; end: 108ecebe3; -[SCSnapKitLogger logCreativeKitDeepLinkServerError:withHttpStatusCode:] */

void FUN_108eceb5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc6b8;
  _objc_opt_new(PTR_PTR_1126dc6b8);
  func_0x00010c1b0000();
  FUN_108ecd140(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c197380(puVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c1a9580(puVar1,param_2,param_4);
  func_0x00010be520a0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ecebe4; end: 108ecec33; -[SCSnapKitLogger logCreativeKitCameraLoad:] */

void FUN_108ecebe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc6c0;
  _objc_opt_new(PTR_PTR_1126dc6c0);
  func_0x00010c1ec5e0();
  func_0x00010be520a0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ecec34; end: 108eced27; -[SCSnapKitLogger logCreativeKitPasteboardAccessEvent:presentCount:kitSessionId:deeplinkUrl:creativeKitProductType:creativeKitShareType:] */

void FUN_108ecec34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dc6c8;
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  func_0x00010c1e1120();
  func_0x00010c185880(puVar1,param_2,param_3);
  func_0x00010c1b70e0(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c18aaa0(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c1858a0(puVar1,param_2,param_7);
  lVar2 = param_1;
  func_0x00010bddec40(param_1,param_2,param_8);
  _objc_release(param_8);
  func_0x00010c1858c0(puVar1,param_2,lVar2);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108eced28; end: 108ecee0b; -[SCSnapKitLogger logCreativeKitUiPasteControlEvent:kitSessionId:deeplinkUrl:creativeKitProductType:creativeKitShareType:] */

void FUN_108eced28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dc6d0;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c185880();
  func_0x00010c1b70e0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c18aaa0(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1858a0(puVar1,param_2,param_6);
  lVar2 = param_1;
  func_0x00010bddec40(param_1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010c1858c0(puVar1,param_2,lVar2);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x68),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ecee0c; end: 108ecee7b; -[SCSnapKitLogger _ckShareType:] */

undefined8 FUN_108ecee0c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad4b8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110de3df8);
    uVar2 = 2;
    if ((int)uVar1 == 0) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 108ecee7c; end: 108ecef0b; -[SCSnapKitLogger .cxx_destruct] */

void FUN_108ecee7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ecef0c; end: 108ecf253;  */

void FUN_108ecef0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x000108ed0890();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110f00498;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f00498,param_2,
                      &PTR____CFConstantStringClassReference_110f003f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc34c0(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,ppuVar2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108ecf254; end: 108ecf2cf;  */

undefined * FUN_108ecf254(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372eb88 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f004b8,
                        &UNK_10dfa405c,&UNK_10dfa4084,5,FUN_108ecf2d0,0);
    do {
      if (puRam000000011372eb88 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372eb88;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372eb88,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372eb88 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372eb88;
}



/* Entry: 108ecf2d0; end: 108ecf2e7;  */

uint FUN_108ecf2d0(uint param_1)

{
  return (uint)(param_1 < 6) & 0x2fU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 108ecf2e8; end: 108ecf34f; +[SCSnapKitProtoKitType descriptor] */

void FUN_108ecf2e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eb90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9430,
                        &PTR____CFConstantStringClassReference_110f004d8,&PTR_DAT_11329b708,0,0,4,
                        0x1c);
    puRam000000011372eb90 = puVar1;
  }
  return;
}



/* Entry: 108ecf350; end: 108ecf3b7; +[SCSnapKitProtoOsType descriptor] */

void FUN_108ecf350(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eb98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9480,
                        &PTR____CFConstantStringClassReference_110f004f8,&PTR_DAT_11329b708,0,0,4,
                        0x1c);
    puRam000000011372eb98 = puVar1;
  }
  return;
}



/* Entry: 108ecf3b8; end: 108ecf41f; +[SCSnapKitProtoStage descriptor] */

void FUN_108ecf3b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eba0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc94d0,
                        &PTR____CFConstantStringClassReference_110f00518,&PTR_DAT_11329b708,0,0,4,
                        0x1c);
    puRam000000011372eba0 = puVar1;
  }
  return;
}



/* Entry: 108ecf420; end: 108ecf487; +[SCSnapKitProtoAppContext descriptor] */

void FUN_108ecf420(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eba8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9520,
                        &PTR____CFConstantStringClassReference_110f00538,&PTR_DAT_11329b708,0,0,4,
                        0x1c);
    puRam000000011372eba8 = puVar1;
  }
  return;
}



/* Entry: 108ecf488; end: 108ecf4ef; +[SCSnapKitProtoClientSideExperiment descriptor] */

void FUN_108ecf488(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ebb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc95c0,
                        &PTR____CFConstantStringClassReference_110f00558,&PTR_DAT_11329b720,
                        &PTR_DAT_11329b758,3,0x18,0x1c);
    puRam000000011372ebb0 = puVar1;
  }
  return;
}



/* Entry: 108ecf4f0; end: 108ecf5d3; +[SCSnapKitProtoExperiments descriptor] */

void FUN_108ecf4f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ebb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9610,
                        &PTR____CFConstantStringClassReference_110eb3dd8,&PTR_DAT_11329b720,
                        &PTR_DAT_11329b738,1,0x10,0x1c);
    puRam000000011372ebb8 = puVar1;
  }
  return;
}



/* Entry: 108ecf5d4; end: 108ecf5df;  */

bool FUN_108ecf5d4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108ecf5e0; end: 108ecf647; +[SCSnapKitProtoTypes descriptor] */

void FUN_108ecf5e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ebc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc96b0,
                        &PTR____CFConstantStringClassReference_110f00598,&PTR_DAT_11329b7b8,0,0,4,
                        0x1c);
    puRam000000011372ebc8 = puVar1;
  }
  return;
}



/* Entry: 108ecf648; end: 108ecf72b; +[SCSnapKitProtoUUID descriptor] */

void FUN_108ecf648(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ebd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9750,
                        &PTR____CFConstantStringClassReference_110e7e6d8,&PTR_DAT_11329b7d0,
                        &PTR_DAT_11329b7e8,2,0x18,0x1c);
    puRam000000011372ebd0 = puVar1;
  }
  return;
}



/* Entry: 108ecf72c; end: 108ecf737;  */

bool FUN_108ecf72c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108ecf738; end: 108ecf79f; +[SCSnapKitProtoErrorType descriptor] */

void FUN_108ecf738(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ebe0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc97f0,
                        &PTR____CFConstantStringClassReference_110df7318,&PTR_DAT_11329b828,0,0,4,
                        0x1c);
    puRam000000011372ebe0 = puVar1;
  }
  return;
}



/* Entry: 108ecf7a0; end: 108ecf897; +[SCSnapKitProtoErrorResponse descriptor] */

undefined * FUN_108ecf7a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ebe8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9840,
                        &PTR____CFConstantStringClassReference_110df75b8,&PTR_DAT_11329b828,
                        &PTR_DAT_11329b840,1,8,0x1c);
    func_0x00010c2289e0();
    puRam000000011372ebe8 = puVar1;
  }
  return puRam000000011372ebe8;
}



/* Entry: 108ecf898; end: 108ecf8a3;  */

bool FUN_108ecf898(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108ecf8a4; end: 108ecf90b; +[SCSnapKitProtoOAuthClient descriptor] */

void FUN_108ecf8a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ebf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc98e0,
                        &PTR____CFConstantStringClassReference_110f005f8,&PTR_DAT_11329b860,
                        &PTR_s_id_p_11329b8f8,3,0x18,0x1c);
    puRam000000011372ebf8 = puVar1;
  }
  return;
}



/* Entry: 108ecf90c; end: 108ecf973; +[SCSnapKitProtoConnectClientDetailsRequest descriptor] */

void FUN_108ecf90c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ec00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9930,
                        &PTR____CFConstantStringClassReference_110f00618,&PTR_DAT_11329b860,
                        &PTR_s_appId_11329b8b8,2,0x10,0x1c);
    puRam000000011372ec00 = puVar1;
  }
  return;
}



/* Entry: 108ecf974; end: 108ecf9ef; +[SCSnapKitProtoConnectClientDetailsResponse descriptor] */

undefined * FUN_108ecf974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ec08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9980,
                        &PTR____CFConstantStringClassReference_110f00638,&PTR_DAT_11329b860,
                        &PTR_s_appId_11329b9b8,9,0x48,0x1c);
    func_0x00010c2289e0();
    puRam000000011372ec08 = puVar1;
  }
  return puRam000000011372ec08;
}



/* Entry: 108ecf9f0; end: 108ecfa57; +[SCSnapKitProtoBatchConnectClientDetailsRequest descriptor] */

void FUN_108ecf9f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ec10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc99d0,
                        &PTR____CFConstantStringClassReference_110f00658,&PTR_DAT_11329b860,
                        &PTR_DAT_11329b878,1,0x10,0x1c);
    puRam000000011372ec10 = puVar1;
  }
  return;
}



/* Entry: 108ecfa58; end: 108ecfabf; +[SCSnapKitProtoBatchConnectClientDetailsResponse descriptor] */

void FUN_108ecfa58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ec18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9a20,
                        &PTR____CFConstantStringClassReference_110f00678,&PTR_DAT_11329b860,
                        &PTR_DAT_11329b898,1,0x10,0x1c);
    puRam000000011372ec18 = puVar1;
  }
  return;
}



/* Entry: 108ecfac0; end: 108ecfba3; +[SCSnapKitProtoOAuthRequestParams descriptor] */

void FUN_108ecfac0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ec20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9a70,
                        &PTR____CFConstantStringClassReference_110f00698,&PTR_DAT_11329b860,
                        &PTR_DAT_11329b958,3,0x20,0x1c);
    puRam000000011372ec20 = puVar1;
  }
  return;
}



/* Entry: 108ecfba4; end: 108ecfbaf;  */

bool FUN_108ecfba4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108ecfbb0; end: 108ecfc17; +[SCSnapKitProtoConnectRequest descriptor] */

void FUN_108ecfbb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ec30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9b10,
                        &PTR____CFConstantStringClassReference_110f006d8,&PTR_DAT_11329bad8,
                        &PTR_DAT_11329bd10,4,0x28,0x1c);
    puRam000000011372ec30 = puVar1;
  }
  return;
}



/* Entry: 108ecfc18; end: 108ecfc7f; +[SCSnapKitProtoDisconnectRequest descriptor] */

void FUN_108ecfc18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ec38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9b60,
                        &PTR____CFConstantStringClassReference_110f006f8,&PTR_DAT_11329bad8,
                        &PTR_s_applicationId_11329bb30,2,0x10,0x1c);
    puRam000000011372ec38 = puVar1;
  }
  return;
}



/* Entry: 108ecfc80; end: 108ecfce7; +[SCSnapKitProtoUpdateRequest descriptor] */

void FUN_108ecfc80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ec40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9bb0,
                        &PTR____CFConstantStringClassReference_110f00718,&PTR_DAT_11329bad8,
                        &PTR_s_applicationId_11329bbf0,3,0x20,0x1c);
    puRam000000011372ec40 = puVar1;
  }
  return;
}



/* Entry: 108ecfce8; end: 108ecfd63; +[SCSnapKitProtoAppStoryMetadata descriptor] */

undefined * FUN_108ecfce8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ec48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9c00,
                        &PTR____CFConstantStringClassReference_110f00738,&PTR_DAT_11329bad8,
                        &PTR_DAT_11329bd90,4,0x18,0x1c);
    func_0x00010c2289e0();
    puRam000000011372ec48 = puVar1;
  }
  return puRam000000011372ec48;
}



/* Entry: 108ecfd64; end: 108ecfddf; +[SCSnapKitProtoScope descriptor] */

undefined * FUN_108ecfd64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ec50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9c50,
                        &PTR____CFConstantStringClassReference_110dcde78,&PTR_DAT_11329bad8,
                        &PTR_DAT_11329be10,4,0x20,0x1c);
    func_0x00010c2289e0();
    puRam000000011372ec50 = puVar1;
  }
  return puRam000000011372ec50;
}



/* Entry: 108ecfde0; end: 108ecfe5b; +[SCSnapKitProtoKitFeatureItem descriptor] */

undefined * FUN_108ecfde0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ec58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9ca0,
                        &PTR____CFConstantStringClassReference_110f00758,&PTR_DAT_11329bad8,
                        &PTR_DAT_11329bc50,3,0x18,0x1c);
    func_0x00010c2289e0();
    puRam000000011372ec58 = puVar1;
  }
  return puRam000000011372ec58;
}



/* Entry: 108ecfe5c; end: 108ecfed7; +[SCSnapKitProtoConnection descriptor] */

undefined * FUN_108ecfe5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ec60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9cf0,
                        &PTR____CFConstantStringClassReference_110ebf418,&PTR_DAT_11329bad8,
                        &PTR_s_applicationId_11329be90,0xc,0x48,0x1c);
    func_0x00010c2289e0();
    puRam000000011372ec60 = puVar1;
  }
  return puRam000000011372ec60;
}



/* Entry: 108ecfed8; end: 108ecff3f; +[SCSnapKitProtoConnectResponse descriptor] */

void FUN_108ecfed8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ec68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9d40,
                        &PTR____CFConstantStringClassReference_110f00778,&PTR_DAT_11329bad8,
                        &PTR_DAT_11329bb70,2,0x18,0x1c);
    puRam000000011372ec68 = puVar1;
  }
  return;
}



/* Entry: 108ecff40; end: 108ecffa7; +[SCSnapKitProtoUpdateResponse descriptor] */

void FUN_108ecff40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ec70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9d90,
                        &PTR____CFConstantStringClassReference_110f00798,&PTR_DAT_11329bad8,
                        &PTR_DAT_11329baf0,1,0x10,0x1c);
    puRam000000011372ec70 = puVar1;
  }
  return;
}



/* Entry: 108ecffa8; end: 108ed000f; +[SCSnapKitProtoConnectionStatesResponse descriptor] */

void FUN_108ecffa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ec78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9de0,
                        &PTR____CFConstantStringClassReference_110f007b8,&PTR_DAT_11329bad8,
                        &PTR_DAT_11329bbb0,2,0x18,0x1c);
    puRam000000011372ec78 = puVar1;
  }
  return;
}



/* Entry: 108ed0010; end: 108ed0077; +[SCSnapKitProtoConnectedAppFeatureToggleRequest descriptor] */

void FUN_108ed0010(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ec80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9e30,
                        &PTR____CFConstantStringClassReference_110f007d8,&PTR_DAT_11329bad8,
                        &PTR_s_applicationId_11329bcb0,3,0x18,0x1c);
    puRam000000011372ec80 = puVar1;
  }
  return;
}



/* Entry: 108ed0078; end: 108ed00df; +[SCSnapKitProtoRotationRequest descriptor] */

void FUN_108ed0078(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ec88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9e80,
                        &PTR____CFConstantStringClassReference_110f007f8,&PTR_DAT_11329bad8,
                        &PTR_s_applicationId_11329bb10,1,0x10,0x1c);
    puRam000000011372ec88 = puVar1;
  }
  return;
}



/* Entry: 108ed00e0; end: 108ed0147; +[SCSnapKitProtoCreativeKitAttachmentViewRequest descriptor] */

void FUN_108ed00e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ec90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9f20,
                        &PTR____CFConstantStringClassReference_110f00818,&PTR_DAT_11329c010,
                        &PTR_s_snapKitApplicationId_11329c028,2,0x10,0x1c);
    puRam000000011372ec90 = puVar1;
  }
  return;
}



/* Entry: 108ed0148; end: 108ed01c3; +[SCSnapKitProtoCreativeKitAttachmentViewResponse descriptor] */

undefined * FUN_108ed0148(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ec98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9f70,
                        &PTR____CFConstantStringClassReference_110f00838,&PTR_DAT_11329c010,
                        &PTR_s_referenceId_11329c0a8,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam000000011372ec98 = puVar1;
  }
  return puRam000000011372ec98;
}



/* Entry: 108ed01c4; end: 108ed022b; +[SCSnapKitProtoCheckUserConsentResponse descriptor] */

void FUN_108ed01c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eca0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bc9fc0,
                        &PTR____CFConstantStringClassReference_110f00858,&PTR_DAT_11329c010,
                        &PTR_DAT_11329c068,2,0x10,0x1c);
    puRam000000011372eca0 = puVar1;
  }
  return;
}



/* Entry: 108ed022c; end: 108ed0293; +[SCSnapKitProtoCreativeKitValidateRequest descriptor] */

void FUN_108ed022c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eca8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca060,
                        &PTR____CFConstantStringClassReference_110f00878,&PTR_DAT_11329c108,
                        &PTR_DAT_11329c1c0,4,0x28,0x1c);
    puRam000000011372eca8 = puVar1;
  }
  return;
}



/* Entry: 108ed0294; end: 108ed02fb; +[SCSnapKitProtoEncryptionMetadata descriptor] */

void FUN_108ed0294(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ecb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca0b0,
                        &PTR____CFConstantStringClassReference_110f00898,&PTR_DAT_11329c108,
                        &PTR_s_id_p_11329c160,3,0x20,0x1c);
    puRam000000011372ecb0 = puVar1;
  }
  return;
}



/* Entry: 108ed02fc; end: 108ed0363; +[SCSnapKitProtoCreativeKitValidateResponse descriptor] */

void FUN_108ed02fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ecb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca100,
                        &PTR____CFConstantStringClassReference_110f008b8,&PTR_DAT_11329c108,
                        &PTR_DAT_11329c120,2,0x18,0x1c);
    puRam000000011372ecb8 = puVar1;
  }
  return;
}



/* Entry: 108ed0364; end: 108ed03df; +[SCSnapKitProtoCreativeKitWebShareMetadata descriptor] */

undefined * FUN_108ed0364(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ecc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca1a0,
                        &PTR____CFConstantStringClassReference_110f008d8,&PTR_DAT_11329c240,
                        &PTR_DAT_11329c258,9,0x48,0x1c);
    func_0x00010c2289e0();
    puRam000000011372ecc0 = puVar1;
  }
  return puRam000000011372ecc0;
}



/* Entry: 108ed03e0; end: 108ed0447; +[SCSnapKitProtoLoginValidateRequest descriptor] */

void FUN_108ed03e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ecc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca240,
                        &PTR____CFConstantStringClassReference_110f008f8,&PTR_DAT_11329c378,
                        &PTR_DAT_11329c3f0,4,0x20,0x1c);
    puRam000000011372ecc8 = puVar1;
  }
  return;
}



/* Entry: 108ed0448; end: 108ed04af; +[SCSnapKitProtoLoginValidateResponse descriptor] */

void FUN_108ed0448(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ecd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca290,
                        &PTR____CFConstantStringClassReference_110f00918,&PTR_DAT_11329c378,
                        &PTR_DAT_11329c390,3,0x10,0x1c);
    puRam000000011372ecd0 = puVar1;
  }
  return;
}



/* Entry: 108ed04b0; end: 108ed0517; +[SCSnapKitProtoCreativeToolsRestrictions descriptor] */

void FUN_108ed04b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ecd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bca330,
                        &PTR____CFConstantStringClassReference_110f00938,&PTR_DAT_11329c470,
                        &PTR_DAT_11329c488,6,4,0x1c);
    puRam000000011372ecd8 = puVar1;
  }
  return;
}


