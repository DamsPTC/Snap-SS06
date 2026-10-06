/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106bb32b8; end: 106bb3357; -[SCShoppingLensLauncherEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb32b8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112759bbc);
  _objc_storeStrong(param_1 + _DAT_112759bb8,0);
  _objc_destroyWeak(param_1 + _DAT_112759ba4);
  _objc_destroyWeak(param_1 + _DAT_112759ba8);
  _objc_destroyWeak(param_1 + _DAT_112759b9c);
  _objc_storeStrong(param_1 + _DAT_112759bb0,0);
  _objc_storeStrong(param_1 + _DAT_112759bb4,0);
  _objc_storeStrong(param_1 + _DAT_112759ba0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759bac,0);
  return;
}



/* Entry: 106bb3358; end: 106bb3433; -[SCPreviewCarouselIconGenerator initWithIconCache:] */

undefined1 * FUN_106bb3358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f5748;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bb3434; end: 106bb3587; -[SCPreviewCarouselIconGenerator loadAndCropImageData:filterId:completion:] */

void FUN_106bb3434(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0);
    }
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106bb3588; end: 106bb36b3;  */

void FUN_106bb3588(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,0);
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf27140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 == 0) {
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010be63fe0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),lVar2);
      if (lVar2 != 0) {
        uVar5 = *(undefined8 *)(lVar1 + 0x10);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1753a0();
        _objc_release(uVar5);
      }
      _objc_release(lVar2);
      _objc_release(puVar4);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),lVar3);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106bb36b4; end: 106bb38d7; -[SCPreviewCarouselIconGenerator _nonTransparentPixelCroppedImageFromImage:filterId:] */

void FUN_106bb36b4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    uVar1 = param_3;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    uVar2 = uVar1;
    _CGImageGetWidth();
    uVar3 = uVar1;
    _CGImageGetHeight();
    uVar4 = uVar3;
    _CGColorSpaceCreateDeviceRGB();
    if (uVar4 != 0) {
      lVar5 = 0;
      _CGBitmapContextCreate(0,uVar2,uVar3,8,uVar2 * 4,uVar4,1);
      _CGColorSpaceRelease(uVar4);
      if (lVar5 != 0) {
        dVar16 = (double)uVar3;
        _CGContextDrawImage(0,0,(double)uVar2,dVar16,lVar5,uVar1);
        lVar6 = lVar5;
        _CGBitmapContextGetData();
        if (lVar6 != 0) {
          uVar8 = uVar2 * 4 * uVar3;
          uVar4 = uVar2;
          if (uVar8 == 0) {
            uVar7 = 0;
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            uVar7 = 0;
            iVar10 = 7;
            do {
              dVar15 = (double)NEON_ucvtf((ulong)*(byte *)(lVar6 + 3 + (long)(iVar10 + -7)));
              if (0.1 < dVar15 / 255.0) {
                uVar11 = (ulong)(iVar10 + -7 >> 2);
                uVar12 = 0;
                if (uVar2 != 0) {
                  uVar12 = uVar11 / uVar2;
                }
                uVar11 = uVar11 - uVar12 * uVar2;
                uVar12 = (ulong)(double)uVar12;
                if (uVar12 <= uVar3) {
                  uVar3 = uVar12;
                }
                if (uVar9 <= uVar12) {
                  uVar9 = uVar12;
                }
                if (uVar11 <= uVar4) {
                  uVar4 = uVar11;
                }
                if (uVar7 <= uVar11) {
                  uVar7 = uVar11;
                }
              }
              fVar14 = (float)iVar10;
              iVar10 = iVar10 + 4;
            } while (fVar14 < (float)uVar8);
          }
          if ((double)(uVar9 - uVar3) <= dVar16 * 0.6666666666666666) {
            dVar16 = (double)uVar3;
          }
          else {
            dVar16 = (double)uVar9 - dVar16 * 0.3333333333333333;
          }
          _CGImageCreateWithImageInRect((double)uVar4,dVar16,(double)(uVar7 - uVar4),uVar1);
          puVar13 = PTR__OBJC_CLASS___UIImage_1126aea68;
          func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
          _objc_retainAutoreleasedReturnValue();
          _CGImageRelease(uVar1);
          _CGContextRelease(lVar5);
          goto LAB_106bb3814;
        }
      }
    }
  }
  puVar13 = (undefined *)0x0;
LAB_106bb3814:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 106bb38d8; end: 106bb3907; -[SCPreviewCarouselIconGenerator .cxx_destruct] */

void FUN_106bb38d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bb3908; end: 106bb39c7; -[SCPreviewCarouselIconMapper iconURLFromFilterName:] */

void FUN_106bb3908(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    if (lRam00000001136c6cb0 != -1) {
      func_0x00010002a2fc(0x1136c6cb0,&PTR___NSConcreteGlobalBlock_110965230);
    }
    lVar2 = lRam00000001136c6ca8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      _objc_retain(lVar2);
      lVar3 = lVar2;
    }
    _objc_release(lVar2);
  }
  else {
    lVar3 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106bb39c8; end: 106bb39cf; -[SCPreviewCarouselIconMapper iconURLFromGroupName:] */

void FUN_106bb39c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_iconURLFromGroupName_groupRepeat_1125d70b0,param_3,0);
  return;
}



/* Entry: 106bb39d0; end: 106bb3a8b; -[SCPreviewCarouselIconMapper iconURLFromGroupName:groupRepeatCount:] */

void FUN_106bb39d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (lRam00000001136c6cc0 != -1) {
    func_0x00010002a2fc(0x1136c6cc0,&PTR___NSConcreteGlobalBlock_110965250);
  }
  lVar1 = lRam00000001136c6cb8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010bf529e0();
    lVar2 = lVar1;
    func_0x00010c0dfd40(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106bb3a8c; end: 106bb3c47;  */

undefined8 *** FUN_106bb3a8c(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 ***pppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 ***pppuVar16;
  undefined8 ***pppuVar17;
  undefined8 **ppuVar18;
  undefined ***pppuVar19;
  undefined1 auStack_7f0 [8];
  undefined *puStack_7e8;
  undefined8 uStack_7e0;
  code *pcStack_7d8;
  undefined *puStack_7d0;
  undefined8 **ppuStack_7c8;
  undefined8 **ppuStack_7c0;
  undefined *puStack_7b8;
  undefined **ppuStack_7b0;
  undefined **ppuStack_7a8;
  undefined *puStack_7a0;
  undefined *puStack_798;
  undefined *puStack_790;
  undefined *puStack_788;
  undefined1 **ppuStack_780;
  code *pcStack_778;
  undefined **ppuStack_768;
  undefined **ppuStack_760;
  undefined **ppuStack_758;
  undefined **ppuStack_750;
  undefined **ppuStack_748;
  undefined **ppuStack_740;
  undefined *puStack_738;
  undefined **ppuStack_730;
  undefined **ppuStack_728;
  undefined **ppuStack_720;
  undefined **ppuStack_718;
  undefined **ppuStack_710;
  undefined *puStack_708;
  undefined *puStack_700;
  undefined *puStack_6f8;
  undefined *puStack_6f0;
  undefined *puStack_6e8;
  undefined *puStack_6e0;
  undefined *puStack_6d8;
  undefined *puStack_6d0;
  undefined *puStack_6c8;
  undefined *puStack_6c0;
  undefined *puStack_6b8;
  undefined8 **ppuStack_6b0;
  undefined **ppuStack_6a8;
  undefined **ppuStack_6a0;
  undefined **ppuStack_698;
  undefined **ppuStack_690;
  undefined **ppuStack_688;
  undefined **ppuStack_680;
  undefined **ppuStack_678;
  undefined **ppuStack_670;
  undefined **ppuStack_668;
  undefined **ppuStack_660;
  undefined **ppuStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined **ppuStack_640;
  undefined **ppuStack_638;
  undefined **ppuStack_630;
  undefined **ppuStack_628;
  undefined **ppuStack_620;
  undefined **ppuStack_618;
  undefined **ppuStack_610;
  undefined **ppuStack_608;
  undefined **ppuStack_600;
  undefined **ppuStack_5f8;
  undefined **ppuStack_5f0;
  undefined **ppuStack_5e8;
  undefined **ppuStack_5e0;
  undefined **ppuStack_5d8;
  undefined **ppuStack_5d0;
  undefined **ppuStack_5c8;
  undefined **ppuStack_5c0;
  undefined **ppuStack_5b8;
  undefined **ppuStack_5b0;
  undefined **ppuStack_5a8;
  undefined **ppuStack_5a0;
  undefined **ppuStack_598;
  undefined **ppuStack_590;
  undefined **ppuStack_588;
  undefined **ppuStack_580;
  undefined **ppuStack_578;
  undefined **ppuStack_570;
  undefined **ppuStack_568;
  undefined **ppuStack_560;
  undefined **ppuStack_558;
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  undefined **ppuStack_538;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined **ppuStack_4d8;
  undefined **ppuStack_4d0;
  undefined **ppuStack_4c8;
  undefined **ppuStack_4c0;
  undefined **ppuStack_4b8;
  undefined **ppuStack_4b0;
  undefined **ppuStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  undefined **ppuStack_488;
  undefined **ppuStack_480;
  undefined **ppuStack_478;
  undefined **ppuStack_470;
  undefined **ppuStack_468;
  undefined **ppuStack_460;
  undefined **ppuStack_458;
  undefined **ppuStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
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
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined8 **ppuStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110f274f8;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110f27458;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e77ab8;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e77ab8;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110f27478;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e77ab8;
  pppuVar7 = (undefined8 ***)0x1;
  func_0x000108edf4d4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e77a38;
  uVar8 = 2;
  ppuStack_e0 = pppuVar7;
  func_0x000108edf4d4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e77a58;
  uVar9 = 0;
  uStack_d8 = uVar8;
  func_0x000108edf4d4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e77a98;
  uVar10 = 3;
  uStack_d0 = uVar9;
  func_0x000108edf4d4();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110f27538;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e77a78;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e77338;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e77378;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e77358;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110f27518;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f27558;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110f27618;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e77398;
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_c8 = uVar10;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c6ca8;
  puRam00000001136c6ca8 = puVar11;
  _objc_release(uVar1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(pppuVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  pcStack_108 = FUN_106bb3c48;
  lStack_170 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_2f0 = &PTR____CFConstantStringClassReference_110e76ff8;
  ppuStack_310 = &PTR____CFConstantStringClassReference_110e773d8;
  ppuStack_318 = &PTR____CFConstantStringClassReference_110e773b8;
  ppuStack_300 = &PTR____CFConstantStringClassReference_110e77418;
  ppuStack_308 = &PTR____CFConstantStringClassReference_110e773f8;
  ppuStack_2f8 = &PTR____CFConstantStringClassReference_110e77438;
  pppuVar7 = (undefined8 ***)PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_110 = &stack0xfffffffffffffff0;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2e8 = &PTR____CFConstantStringClassReference_110e77018;
  ppuStack_338 = &PTR____CFConstantStringClassReference_110e77478;
  ppuStack_340 = &PTR____CFConstantStringClassReference_110e77458;
  ppuStack_328 = &PTR____CFConstantStringClassReference_110e774b8;
  ppuStack_330 = &PTR____CFConstantStringClassReference_110e77498;
  ppuStack_320 = &PTR____CFConstantStringClassReference_110e774d8;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_6b0 = pppuVar7;
  ppuStack_230 = pppuVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2e0 = &PTR____CFConstantStringClassReference_110e77038;
  ppuStack_368 = &PTR____CFConstantStringClassReference_110e774f8;
  ppuStack_360 = &PTR____CFConstantStringClassReference_110e77518;
  ppuStack_358 = &PTR____CFConstantStringClassReference_110e77538;
  ppuStack_350 = &PTR____CFConstantStringClassReference_110e77558;
  ppuStack_348 = &PTR____CFConstantStringClassReference_110e77578;
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_6b8 = puVar11;
  puStack_228 = puVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2d8 = &PTR____CFConstantStringClassReference_110e77058;
  ppuStack_390 = &PTR____CFConstantStringClassReference_110e774f8;
  ppuStack_388 = &PTR____CFConstantStringClassReference_110e77518;
  ppuStack_380 = &PTR____CFConstantStringClassReference_110e77538;
  ppuStack_378 = &PTR____CFConstantStringClassReference_110e77558;
  ppuStack_370 = &PTR____CFConstantStringClassReference_110e77578;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_6c0 = puVar12;
  puStack_220 = puVar12;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2d0 = &PTR____CFConstantStringClassReference_110e770b8;
  ppuStack_718 = &PTR____CFConstantStringClassReference_110e77658;
  ppuStack_710 = &PTR____CFConstantStringClassReference_110e77638;
  ppuStack_3b8 = &PTR____CFConstantStringClassReference_110e77638;
  ppuStack_3b0 = &PTR____CFConstantStringClassReference_110e77658;
  ppuStack_728 = &PTR____CFConstantStringClassReference_110e77698;
  ppuStack_720 = &PTR____CFConstantStringClassReference_110e77678;
  ppuStack_3a8 = &PTR____CFConstantStringClassReference_110e77678;
  ppuStack_3a0 = &PTR____CFConstantStringClassReference_110e77698;
  ppuStack_730 = &PTR____CFConstantStringClassReference_110e776b8;
  ppuStack_398 = &PTR____CFConstantStringClassReference_110e776b8;
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_6c8 = puVar11;
  puStack_218 = puVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2c8 = &PTR____CFConstantStringClassReference_110e770d8;
  ppuStack_3d8 = &PTR____CFConstantStringClassReference_110e77798;
  ppuStack_3e0 = &PTR____CFConstantStringClassReference_110e77778;
  ppuStack_3c8 = &PTR____CFConstantStringClassReference_110e777d8;
  ppuStack_3d0 = &PTR____CFConstantStringClassReference_110e777b8;
  ppuStack_3c0 = &PTR____CFConstantStringClassReference_110e777f8;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_6d0 = puVar12;
  puStack_210 = puVar12;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e770f8;
  ppuStack_6a0 = &PTR____CFConstantStringClassReference_110e77838;
  ppuStack_698 = &PTR____CFConstantStringClassReference_110e77818;
  ppuStack_408 = &PTR____CFConstantStringClassReference_110e77818;
  ppuStack_400 = &PTR____CFConstantStringClassReference_110e77838;
  ppuStack_6a8 = &PTR____CFConstantStringClassReference_110e77858;
  ppuStack_3f8 = &PTR____CFConstantStringClassReference_110e77858;
  ppuStack_3f0 = &PTR____CFConstantStringClassReference_110e77878;
  ppuStack_3e8 = &PTR____CFConstantStringClassReference_110e77898;
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_6d8 = puVar11;
  puStack_208 = puVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2b8 = &PTR____CFConstantStringClassReference_110e77118;
  ppuStack_428 = &PTR____CFConstantStringClassReference_110e778d8;
  ppuStack_430 = &PTR____CFConstantStringClassReference_110e778b8;
  ppuStack_418 = &PTR____CFConstantStringClassReference_110e77918;
  ppuStack_420 = &PTR____CFConstantStringClassReference_110e778f8;
  ppuStack_410 = &PTR____CFConstantStringClassReference_110e77938;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_6e0 = puVar12;
  puStack_200 = puVar12;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2b0 = &PTR____CFConstantStringClassReference_110e77138;
  ppuStack_458 = &PTR____CFConstantStringClassReference_110e77958;
  ppuStack_748 = &PTR____CFConstantStringClassReference_110e77978;
  ppuStack_740 = &PTR____CFConstantStringClassReference_110e77958;
  ppuStack_450 = &PTR____CFConstantStringClassReference_110e77978;
  ppuStack_448 = &PTR____CFConstantStringClassReference_110e77998;
  ppuStack_758 = &PTR____CFConstantStringClassReference_110e779b8;
  ppuStack_750 = &PTR____CFConstantStringClassReference_110e77998;
  ppuStack_440 = &PTR____CFConstantStringClassReference_110e779b8;
  ppuStack_438 = &PTR____CFConstantStringClassReference_110e779d8;
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_6e8 = puVar11;
  puStack_1f8 = puVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2a8 = &PTR____CFConstantStringClassReference_110e77158;
  ppuStack_480 = &PTR____CFConstantStringClassReference_110e77958;
  ppuStack_478 = &PTR____CFConstantStringClassReference_110e77978;
  ppuStack_470 = &PTR____CFConstantStringClassReference_110e77998;
  ppuStack_468 = &PTR____CFConstantStringClassReference_110e779b8;
  ppuStack_460 = &PTR____CFConstantStringClassReference_110e779d8;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_6f0 = puVar12;
  puStack_1f0 = puVar12;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2a0 = &PTR____CFConstantStringClassReference_110e77178;
  ppuStack_488 = &PTR____CFConstantStringClassReference_110e77a18;
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_6f8 = puVar11;
  puStack_1e8 = puVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuStack_698;
  ppuVar3 = ppuStack_6a0;
  ppuVar2 = ppuStack_6a8;
  ppuStack_298 = &PTR____CFConstantStringClassReference_110e77198;
  ppuStack_4b0 = ppuStack_698;
  ppuStack_4a8 = ppuStack_6a0;
  ppuStack_4a0 = ppuStack_6a8;
  ppuStack_768 = &PTR____CFConstantStringClassReference_110e77898;
  ppuStack_760 = &PTR____CFConstantStringClassReference_110e77878;
  ppuStack_498 = &PTR____CFConstantStringClassReference_110e77878;
  ppuStack_490 = &PTR____CFConstantStringClassReference_110e77898;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_700 = puVar12;
  puStack_1e0 = puVar12;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_290 = &PTR____CFConstantStringClassReference_110e771b8;
  ppuStack_4d8 = ppuStack_710;
  ppuStack_4d0 = ppuStack_718;
  ppuStack_4c8 = ppuStack_720;
  ppuStack_4c0 = ppuStack_728;
  ppuStack_4b8 = ppuStack_730;
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_708 = puVar11;
  puStack_1d8 = puVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_288 = &PTR____CFConstantStringClassReference_110e771d8;
  ppuStack_500 = ppuVar4;
  ppuStack_4f8 = ppuVar3;
  ppuStack_4f0 = ppuVar2;
  ppuStack_4e8 = &PTR____CFConstantStringClassReference_110e77878;
  ppuStack_4e0 = &PTR____CFConstantStringClassReference_110e77898;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_710 = (undefined **)puVar12;
  puStack_1d0 = puVar12;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_280 = &PTR____CFConstantStringClassReference_110e771f8;
  ppuStack_528 = &PTR____CFConstantStringClassReference_110e776d8;
  ppuStack_520 = &PTR____CFConstantStringClassReference_110e776f8;
  ppuStack_518 = &PTR____CFConstantStringClassReference_110e77718;
  ppuStack_510 = &PTR____CFConstantStringClassReference_110e77738;
  ppuStack_508 = &PTR____CFConstantStringClassReference_110e77758;
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_718 = (undefined **)puVar11;
  puStack_1c8 = puVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_278 = &PTR____CFConstantStringClassReference_110e77218;
  ppuStack_550 = &PTR____CFConstantStringClassReference_110e776d8;
  ppuStack_548 = &PTR____CFConstantStringClassReference_110e776f8;
  ppuStack_540 = &PTR____CFConstantStringClassReference_110e77718;
  ppuStack_538 = &PTR____CFConstantStringClassReference_110e77738;
  ppuStack_530 = &PTR____CFConstantStringClassReference_110e77758;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_720 = (undefined **)puVar12;
  puStack_1c0 = puVar12;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuStack_740;
  ppuVar4 = ppuStack_748;
  ppuVar3 = ppuStack_750;
  ppuVar2 = ppuStack_758;
  ppuStack_270 = &PTR____CFConstantStringClassReference_110e77238;
  ppuStack_578 = ppuStack_740;
  ppuStack_570 = ppuStack_748;
  ppuStack_568 = ppuStack_750;
  ppuStack_560 = ppuStack_758;
  ppuStack_558 = &PTR____CFConstantStringClassReference_110e779d8;
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_728 = (undefined **)puVar11;
  puStack_1b8 = puVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_268 = &PTR____CFConstantStringClassReference_110e77258;
  ppuStack_5a0 = &PTR____CFConstantStringClassReference_110e776d8;
  ppuStack_598 = &PTR____CFConstantStringClassReference_110e776f8;
  ppuStack_590 = &PTR____CFConstantStringClassReference_110e77718;
  ppuStack_588 = &PTR____CFConstantStringClassReference_110e77738;
  ppuStack_580 = &PTR____CFConstantStringClassReference_110e77758;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_730 = (undefined **)puVar12;
  puStack_1b0 = puVar12;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_260 = &PTR____CFConstantStringClassReference_110e77278;
  ppuStack_5c8 = ppuVar5;
  ppuStack_5c0 = ppuVar4;
  ppuStack_5b8 = ppuVar3;
  ppuStack_5b0 = ppuVar2;
  ppuStack_5a8 = &PTR____CFConstantStringClassReference_110e779d8;
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_738 = puVar11;
  puStack_1a8 = puVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuStack_698;
  ppuVar5 = ppuStack_6a0;
  ppuVar4 = ppuStack_6a8;
  ppuVar3 = ppuStack_760;
  ppuVar2 = ppuStack_768;
  ppuStack_258 = &PTR____CFConstantStringClassReference_110e77298;
  ppuStack_5f0 = ppuStack_698;
  ppuStack_5e8 = ppuStack_6a0;
  ppuStack_5e0 = ppuStack_6a8;
  ppuStack_5d8 = ppuStack_760;
  ppuStack_5d0 = ppuStack_768;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_740 = (undefined **)puVar12;
  puStack_1a0 = puVar12;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_250 = &PTR____CFConstantStringClassReference_110e772b8;
  ppuStack_618 = ppuVar6;
  ppuStack_610 = ppuVar5;
  ppuStack_608 = ppuVar4;
  ppuStack_600 = ppuVar3;
  ppuStack_5f8 = ppuVar2;
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_748 = (undefined **)puVar11;
  puStack_198 = puVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_248 = &PTR____CFConstantStringClassReference_110e772d8;
  ppuStack_640 = ppuVar6;
  ppuStack_638 = ppuVar5;
  ppuStack_630 = ppuVar4;
  ppuStack_628 = ppuVar3;
  ppuStack_620 = ppuVar2;
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_190 = puVar13;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_240 = &PTR____CFConstantStringClassReference_110e772f8;
  ppuStack_668 = ppuVar6;
  ppuStack_660 = ppuVar5;
  ppuStack_658 = ppuVar4;
  ppuStack_650 = ppuVar3;
  ppuStack_648 = ppuVar2;
  puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_188 = puVar14;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_238 = &PTR____CFConstantStringClassReference_110e77318;
  ppuStack_690 = ppuVar6;
  ppuStack_688 = ppuVar5;
  ppuStack_680 = ppuVar4;
  ppuStack_678 = ppuVar3;
  ppuStack_670 = ppuVar2;
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_180 = puVar15;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  pppuVar7 = &ppuStack_230;
  pppuVar19 = &ppuStack_2f0;
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_178 = puVar12;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c6cb8;
  puRam00000001136c6cb8 = puVar11;
  _objc_release(uVar1);
  _objc_release(puVar12);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(ppuStack_748);
  _objc_release(ppuStack_740);
  _objc_release(puStack_738);
  _objc_release(ppuStack_730);
  _objc_release(ppuStack_728);
  _objc_release(ppuStack_720);
  _objc_release(ppuStack_718);
  _objc_release(ppuStack_710);
  _objc_release(puStack_708);
  _objc_release(puStack_700);
  _objc_release(puStack_6f8);
  _objc_release(puStack_6f0);
  _objc_release(puStack_6e8);
  _objc_release(puStack_6e0);
  _objc_release(puStack_6d8);
  _objc_release(puStack_6d0);
  _objc_release(puStack_6c8);
  _objc_release(puStack_6c0);
  _objc_release(puStack_6b8);
  pppuVar16 = (undefined8 ***)ppuStack_6b0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) {
    return pppuVar16;
  }
  ___stack_chk_fail();
  ppuStack_7b0 = ppuVar6;
  ppuStack_7a8 = ppuVar2;
  pcStack_778 = FUN_106bb43b4;
  puStack_7a0 = puVar12;
  puStack_798 = puVar15;
  puStack_790 = puVar14;
  puStack_788 = puVar13;
  ppuStack_780 = &puStack_110;
  _objc_retain(pppuVar7);
  _objc_retain(pppuVar19);
  puStack_7b8 = PTR_PTR_1126f5750;
  pppuVar17 = &ppuStack_7c0;
  ppuStack_7c0 = pppuVar16;
  _objc_msgSendSuper2(pppuVar17,PTR_s_init_1125d9248);
  if (pppuVar17 != (undefined8 ***)0x0) {
    _objc_retain(pppuVar7);
    ppuVar18 = pppuVar17[1];
    pppuVar17[1] = pppuVar7;
    _objc_release(ppuVar18);
    _objc_retain(pppuVar19);
    ppuVar18 = pppuVar17[2];
    pppuVar17[2] = pppuVar19;
    _objc_release(ppuVar18);
    puVar11 = PTR_PTR_1126ae790;
    pppuVar16 = pppuVar17;
    _objc_opt_class(pppuVar17);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puStack_7e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_7e0 = 0xc2000000;
    pcStack_7d8 = FUN_106bb4574;
    puStack_7d0 = &UNK_11087bb00;
    _objc_retain(pppuVar17);
    ppuStack_7c8 = pppuVar17;
    func_0x00010c0f7fc0(puVar11);
    _objc_release(puVar11);
    _objc_release(pppuVar16);
    _objc_initWeak(auStack_7f0,pppuVar17);
    ppuVar18 = pppuVar17[3];
    pppuVar17[3] = (undefined8 **)0x0;
    _objc_release(ppuVar18);
    _objc_destroyWeak(auStack_7f0);
    _objc_release(ppuStack_7c8);
  }
  _objc_release(pppuVar19);
  _objc_release(pppuVar7);
  return pppuVar17;
}



/* Entry: 106bb3c48; end: 106bb43b3;  */

undefined8 *** FUN_106bb3c48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 ***pppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 ***pppuVar13;
  undefined8 ***pppuVar14;
  undefined8 **ppuVar15;
  undefined ***pppuVar16;
  undefined1 auStack_6f0 [8];
  undefined *puStack_6e8;
  undefined8 uStack_6e0;
  code *pcStack_6d8;
  undefined *puStack_6d0;
  undefined8 **ppuStack_6c8;
  undefined8 **ppuStack_6c0;
  undefined *puStack_6b8;
  undefined **ppuStack_6b0;
  undefined **ppuStack_6a8;
  undefined *puStack_6a0;
  undefined *puStack_698;
  undefined *puStack_690;
  undefined *puStack_688;
  undefined1 *puStack_680;
  code *pcStack_678;
  undefined **ppuStack_668;
  undefined **ppuStack_660;
  undefined **ppuStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined **ppuStack_640;
  undefined *puStack_638;
  undefined **ppuStack_630;
  undefined **ppuStack_628;
  undefined **ppuStack_620;
  undefined **ppuStack_618;
  undefined **ppuStack_610;
  undefined *puStack_608;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined *puStack_5f0;
  undefined *puStack_5e8;
  undefined *puStack_5e0;
  undefined *puStack_5d8;
  undefined *puStack_5d0;
  undefined *puStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined8 **ppuStack_5b0;
  undefined **ppuStack_5a8;
  undefined **ppuStack_5a0;
  undefined **ppuStack_598;
  undefined **ppuStack_590;
  undefined **ppuStack_588;
  undefined **ppuStack_580;
  undefined **ppuStack_578;
  undefined **ppuStack_570;
  undefined **ppuStack_568;
  undefined **ppuStack_560;
  undefined **ppuStack_558;
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  undefined **ppuStack_538;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined **ppuStack_4d8;
  undefined **ppuStack_4d0;
  undefined **ppuStack_4c8;
  undefined **ppuStack_4c0;
  undefined **ppuStack_4b8;
  undefined **ppuStack_4b0;
  undefined **ppuStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  undefined **ppuStack_488;
  undefined **ppuStack_480;
  undefined **ppuStack_478;
  undefined **ppuStack_470;
  undefined **ppuStack_468;
  undefined **ppuStack_460;
  undefined **ppuStack_458;
  undefined **ppuStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
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
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1f0 = &PTR____CFConstantStringClassReference_110e76ff8;
  ppuStack_210 = &PTR____CFConstantStringClassReference_110e773d8;
  ppuStack_218 = &PTR____CFConstantStringClassReference_110e773b8;
  ppuStack_200 = &PTR____CFConstantStringClassReference_110e77418;
  ppuStack_208 = &PTR____CFConstantStringClassReference_110e773f8;
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_110e77438;
  pppuVar7 = (undefined8 ***)PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_218,5);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1e8 = &PTR____CFConstantStringClassReference_110e77018;
  ppuStack_238 = &PTR____CFConstantStringClassReference_110e77478;
  ppuStack_240 = &PTR____CFConstantStringClassReference_110e77458;
  ppuStack_228 = &PTR____CFConstantStringClassReference_110e774b8;
  ppuStack_230 = &PTR____CFConstantStringClassReference_110e77498;
  ppuStack_220 = &PTR____CFConstantStringClassReference_110e774d8;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_5b0 = pppuVar7;
  ppuStack_130 = pppuVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1e0 = &PTR____CFConstantStringClassReference_110e77038;
  ppuStack_268 = &PTR____CFConstantStringClassReference_110e774f8;
  ppuStack_260 = &PTR____CFConstantStringClassReference_110e77518;
  ppuStack_258 = &PTR____CFConstantStringClassReference_110e77538;
  ppuStack_250 = &PTR____CFConstantStringClassReference_110e77558;
  ppuStack_248 = &PTR____CFConstantStringClassReference_110e77578;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_5b8 = puVar8;
  puStack_128 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1d8 = &PTR____CFConstantStringClassReference_110e77058;
  ppuStack_290 = &PTR____CFConstantStringClassReference_110e774f8;
  ppuStack_288 = &PTR____CFConstantStringClassReference_110e77518;
  ppuStack_280 = &PTR____CFConstantStringClassReference_110e77538;
  ppuStack_278 = &PTR____CFConstantStringClassReference_110e77558;
  ppuStack_270 = &PTR____CFConstantStringClassReference_110e77578;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_5c0 = puVar9;
  puStack_120 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110e770b8;
  ppuStack_618 = &PTR____CFConstantStringClassReference_110e77658;
  ppuStack_610 = &PTR____CFConstantStringClassReference_110e77638;
  ppuStack_2b8 = &PTR____CFConstantStringClassReference_110e77638;
  ppuStack_2b0 = &PTR____CFConstantStringClassReference_110e77658;
  ppuStack_628 = &PTR____CFConstantStringClassReference_110e77698;
  ppuStack_620 = &PTR____CFConstantStringClassReference_110e77678;
  ppuStack_2a8 = &PTR____CFConstantStringClassReference_110e77678;
  ppuStack_2a0 = &PTR____CFConstantStringClassReference_110e77698;
  ppuStack_630 = &PTR____CFConstantStringClassReference_110e776b8;
  ppuStack_298 = &PTR____CFConstantStringClassReference_110e776b8;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_5c8 = puVar8;
  puStack_118 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110e770d8;
  ppuStack_2d8 = &PTR____CFConstantStringClassReference_110e77798;
  ppuStack_2e0 = &PTR____CFConstantStringClassReference_110e77778;
  ppuStack_2c8 = &PTR____CFConstantStringClassReference_110e777d8;
  ppuStack_2d0 = &PTR____CFConstantStringClassReference_110e777b8;
  ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e777f8;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_5d0 = puVar9;
  puStack_110 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110e770f8;
  ppuStack_5a0 = &PTR____CFConstantStringClassReference_110e77838;
  ppuStack_598 = &PTR____CFConstantStringClassReference_110e77818;
  ppuStack_308 = &PTR____CFConstantStringClassReference_110e77818;
  ppuStack_300 = &PTR____CFConstantStringClassReference_110e77838;
  ppuStack_5a8 = &PTR____CFConstantStringClassReference_110e77858;
  ppuStack_2f8 = &PTR____CFConstantStringClassReference_110e77858;
  ppuStack_2f0 = &PTR____CFConstantStringClassReference_110e77878;
  ppuStack_2e8 = &PTR____CFConstantStringClassReference_110e77898;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_5d8 = puVar8;
  puStack_108 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110e77118;
  ppuStack_328 = &PTR____CFConstantStringClassReference_110e778d8;
  ppuStack_330 = &PTR____CFConstantStringClassReference_110e778b8;
  ppuStack_318 = &PTR____CFConstantStringClassReference_110e77918;
  ppuStack_320 = &PTR____CFConstantStringClassReference_110e778f8;
  ppuStack_310 = &PTR____CFConstantStringClassReference_110e77938;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_5e0 = puVar9;
  puStack_100 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110e77138;
  ppuStack_358 = &PTR____CFConstantStringClassReference_110e77958;
  ppuStack_648 = &PTR____CFConstantStringClassReference_110e77978;
  ppuStack_640 = &PTR____CFConstantStringClassReference_110e77958;
  ppuStack_350 = &PTR____CFConstantStringClassReference_110e77978;
  ppuStack_348 = &PTR____CFConstantStringClassReference_110e77998;
  ppuStack_658 = &PTR____CFConstantStringClassReference_110e779b8;
  ppuStack_650 = &PTR____CFConstantStringClassReference_110e77998;
  ppuStack_340 = &PTR____CFConstantStringClassReference_110e779b8;
  ppuStack_338 = &PTR____CFConstantStringClassReference_110e779d8;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_5e8 = puVar8;
  puStack_f8 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110e77158;
  ppuStack_380 = &PTR____CFConstantStringClassReference_110e77958;
  ppuStack_378 = &PTR____CFConstantStringClassReference_110e77978;
  ppuStack_370 = &PTR____CFConstantStringClassReference_110e77998;
  ppuStack_368 = &PTR____CFConstantStringClassReference_110e779b8;
  ppuStack_360 = &PTR____CFConstantStringClassReference_110e779d8;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_5f0 = puVar9;
  puStack_f0 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110e77178;
  ppuStack_388 = &PTR____CFConstantStringClassReference_110e77a18;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_5f8 = puVar8;
  puStack_e8 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuStack_598;
  ppuVar3 = ppuStack_5a0;
  ppuVar2 = ppuStack_5a8;
  ppuStack_198 = &PTR____CFConstantStringClassReference_110e77198;
  ppuStack_3b0 = ppuStack_598;
  ppuStack_3a8 = ppuStack_5a0;
  ppuStack_3a0 = ppuStack_5a8;
  ppuStack_668 = &PTR____CFConstantStringClassReference_110e77898;
  ppuStack_660 = &PTR____CFConstantStringClassReference_110e77878;
  ppuStack_398 = &PTR____CFConstantStringClassReference_110e77878;
  ppuStack_390 = &PTR____CFConstantStringClassReference_110e77898;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_600 = puVar9;
  puStack_e0 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_190 = &PTR____CFConstantStringClassReference_110e771b8;
  ppuStack_3d8 = ppuStack_610;
  ppuStack_3d0 = ppuStack_618;
  ppuStack_3c8 = ppuStack_620;
  ppuStack_3c0 = ppuStack_628;
  ppuStack_3b8 = ppuStack_630;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_608 = puVar8;
  puStack_d8 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_188 = &PTR____CFConstantStringClassReference_110e771d8;
  ppuStack_400 = ppuVar4;
  ppuStack_3f8 = ppuVar3;
  ppuStack_3f0 = ppuVar2;
  ppuStack_3e8 = &PTR____CFConstantStringClassReference_110e77878;
  ppuStack_3e0 = &PTR____CFConstantStringClassReference_110e77898;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_610 = (undefined **)puVar9;
  puStack_d0 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_180 = &PTR____CFConstantStringClassReference_110e771f8;
  ppuStack_428 = &PTR____CFConstantStringClassReference_110e776d8;
  ppuStack_420 = &PTR____CFConstantStringClassReference_110e776f8;
  ppuStack_418 = &PTR____CFConstantStringClassReference_110e77718;
  ppuStack_410 = &PTR____CFConstantStringClassReference_110e77738;
  ppuStack_408 = &PTR____CFConstantStringClassReference_110e77758;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_618 = (undefined **)puVar8;
  puStack_c8 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_178 = &PTR____CFConstantStringClassReference_110e77218;
  ppuStack_450 = &PTR____CFConstantStringClassReference_110e776d8;
  ppuStack_448 = &PTR____CFConstantStringClassReference_110e776f8;
  ppuStack_440 = &PTR____CFConstantStringClassReference_110e77718;
  ppuStack_438 = &PTR____CFConstantStringClassReference_110e77738;
  ppuStack_430 = &PTR____CFConstantStringClassReference_110e77758;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_620 = (undefined **)puVar9;
  puStack_c0 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuStack_640;
  ppuVar4 = ppuStack_648;
  ppuVar3 = ppuStack_650;
  ppuVar2 = ppuStack_658;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110e77238;
  ppuStack_478 = ppuStack_640;
  ppuStack_470 = ppuStack_648;
  ppuStack_468 = ppuStack_650;
  ppuStack_460 = ppuStack_658;
  ppuStack_458 = &PTR____CFConstantStringClassReference_110e779d8;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_628 = (undefined **)puVar8;
  puStack_b8 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_168 = &PTR____CFConstantStringClassReference_110e77258;
  ppuStack_4a0 = &PTR____CFConstantStringClassReference_110e776d8;
  ppuStack_498 = &PTR____CFConstantStringClassReference_110e776f8;
  ppuStack_490 = &PTR____CFConstantStringClassReference_110e77718;
  ppuStack_488 = &PTR____CFConstantStringClassReference_110e77738;
  ppuStack_480 = &PTR____CFConstantStringClassReference_110e77758;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_630 = (undefined **)puVar9;
  puStack_b0 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_160 = &PTR____CFConstantStringClassReference_110e77278;
  ppuStack_4c8 = ppuVar5;
  ppuStack_4c0 = ppuVar4;
  ppuStack_4b8 = ppuVar3;
  ppuStack_4b0 = ppuVar2;
  ppuStack_4a8 = &PTR____CFConstantStringClassReference_110e779d8;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_638 = puVar8;
  puStack_a8 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuStack_598;
  ppuVar5 = ppuStack_5a0;
  ppuVar4 = ppuStack_5a8;
  ppuVar3 = ppuStack_660;
  ppuVar2 = ppuStack_668;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110e77298;
  ppuStack_4f0 = ppuStack_598;
  ppuStack_4e8 = ppuStack_5a0;
  ppuStack_4e0 = ppuStack_5a8;
  ppuStack_4d8 = ppuStack_660;
  ppuStack_4d0 = ppuStack_668;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_640 = (undefined **)puVar9;
  puStack_a0 = puVar9;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_150 = &PTR____CFConstantStringClassReference_110e772b8;
  ppuStack_518 = ppuVar6;
  ppuStack_510 = ppuVar5;
  ppuStack_508 = ppuVar4;
  ppuStack_500 = ppuVar3;
  ppuStack_4f8 = ppuVar2;
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_648 = (undefined **)puVar8;
  puStack_98 = puVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_148 = &PTR____CFConstantStringClassReference_110e772d8;
  ppuStack_540 = ppuVar6;
  ppuStack_538 = ppuVar5;
  ppuStack_530 = ppuVar4;
  ppuStack_528 = ppuVar3;
  ppuStack_520 = ppuVar2;
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_90 = puVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_140 = &PTR____CFConstantStringClassReference_110e772f8;
  ppuStack_568 = ppuVar6;
  ppuStack_560 = ppuVar5;
  ppuStack_558 = ppuVar4;
  ppuStack_550 = ppuVar3;
  ppuStack_548 = ppuVar2;
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar11;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_138 = &PTR____CFConstantStringClassReference_110e77318;
  ppuStack_590 = ppuVar6;
  ppuStack_588 = ppuVar5;
  ppuStack_580 = ppuVar4;
  ppuStack_578 = ppuVar3;
  ppuStack_570 = ppuVar2;
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar12;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  pppuVar7 = &ppuStack_130;
  pppuVar16 = &ppuStack_1f0;
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar9;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c6cb8;
  puRam00000001136c6cb8 = puVar8;
  _objc_release(uVar1);
  _objc_release(puVar9);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(ppuStack_648);
  _objc_release(ppuStack_640);
  _objc_release(puStack_638);
  _objc_release(ppuStack_630);
  _objc_release(ppuStack_628);
  _objc_release(ppuStack_620);
  _objc_release(ppuStack_618);
  _objc_release(ppuStack_610);
  _objc_release(puStack_608);
  _objc_release(puStack_600);
  _objc_release(puStack_5f8);
  _objc_release(puStack_5f0);
  _objc_release(puStack_5e8);
  _objc_release(puStack_5e0);
  _objc_release(puStack_5d8);
  _objc_release(puStack_5d0);
  _objc_release(puStack_5c8);
  _objc_release(puStack_5c0);
  _objc_release(puStack_5b8);
  pppuVar13 = (undefined8 ***)ppuStack_5b0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppuVar13;
  }
  ___stack_chk_fail();
  ppuStack_6b0 = ppuVar6;
  ppuStack_6a8 = ppuVar2;
  pcStack_678 = FUN_106bb43b4;
  puStack_6a0 = puVar9;
  puStack_698 = puVar12;
  puStack_690 = puVar11;
  puStack_688 = puVar10;
  puStack_680 = &stack0xfffffffffffffff0;
  _objc_retain(pppuVar7);
  _objc_retain(pppuVar16);
  puStack_6b8 = PTR_PTR_1126f5750;
  pppuVar14 = &ppuStack_6c0;
  ppuStack_6c0 = pppuVar13;
  _objc_msgSendSuper2(pppuVar14,PTR_s_init_1125d9248);
  if (pppuVar14 != (undefined8 ***)0x0) {
    _objc_retain(pppuVar7);
    ppuVar15 = pppuVar14[1];
    pppuVar14[1] = pppuVar7;
    _objc_release(ppuVar15);
    _objc_retain(pppuVar16);
    ppuVar15 = pppuVar14[2];
    pppuVar14[2] = pppuVar16;
    _objc_release(ppuVar15);
    puVar8 = PTR_PTR_1126ae790;
    pppuVar13 = pppuVar14;
    _objc_opt_class(pppuVar14);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puStack_6e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_6e0 = 0xc2000000;
    pcStack_6d8 = FUN_106bb4574;
    puStack_6d0 = &UNK_11087bb00;
    _objc_retain(pppuVar14);
    ppuStack_6c8 = pppuVar14;
    func_0x00010c0f7fc0(puVar8);
    _objc_release(puVar8);
    _objc_release(pppuVar13);
    _objc_initWeak(auStack_6f0,pppuVar14);
    ppuVar15 = pppuVar14[3];
    pppuVar14[3] = (undefined8 **)0x0;
    _objc_release(ppuVar15);
    _objc_destroyWeak(auStack_6f0);
    _objc_release(ppuStack_6c8);
  }
  _objc_release(pppuVar16);
  _objc_release(pppuVar7);
  return pppuVar14;
}



/* Entry: 106bb43b4; end: 106bb4573; -[SCPreviewCarouselIconDocObjectCache initWithDocObjectContext:circumstanceEngine:] */

undefined8 *
FUN_106bb43b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f5750;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
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
    puVar4 = PTR_PTR_1126ae790;
    puVar3 = puVar1;
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcd0e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106bb4574;
    puStack_60 = &UNK_11087bb00;
    _objc_retain(puVar1);
    puStack_58 = puVar1;
    func_0x00010c0f7fc0(puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_initWeak(auStack_80,puVar1);
    uVar2 = puVar1[3];
    puVar1[3] = 0;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_release(puStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106bb4574; end: 106bb457b;  */

void FUN_106bb4574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be83bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__pruneCache_11257e888);
  return;
}



/* Entry: 106bb457c; end: 106bb4a5f; -[SCPreviewCarouselIconDocObjectCache cachedIconForKey:] */

void FUN_106bb457c(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  double dVar9;
  undefined4 uStack_30c;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d0ef8);
    if (lVar2 == 0) {
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_b0,lVar2);
    }
    puVar3 = &uStack_191;
    FUN_106bb5708();
    uStack_200 = 0xf;
    uStack_1f0 = 0x100;
    _objc_retain(param_3);
    ppuStack_208 = &PTR_DAT_110862760;
    dVar9 = 0.0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    puStack_1c0 = (undefined *)0x0;
    plStack_1a8 = (long *)0x0;
    uStack_1b0 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_176 = *(undefined2 *)(puVar3 + 0x1a);
    uStack_188 = 10;
    uStack_178 = 0x100;
    ppuStack_190 = &PTR_SUB_110862700;
    uStack_140 = 0;
    puStack_148 = (undefined *)0x0;
    plStack_130 = (long *)0x0;
    uStack_138 = 0;
    plStack_128 = (long *)0x0;
    puVar4 = &uStack_279;
    lStack_1d8 = param_3;
    puStack_158 = puVar3;
    pppuStack_150 = &ppuStack_208;
    FUN_106bb5880();
    FUN_106bb4a60(*(undefined8 *)(param_1 + 0x10));
    lStack_2c0 = (long)dVar9;
    uStack_2e8 = 0xf;
    uStack_2d8 = 0x100;
    ppuStack_2f0 = &PTR_DAT_110864b98;
    uStack_2b0 = 0;
    uStack_2b8 = 0;
    lStack_2a0 = 0;
    lStack_2a8 = 0;
    plStack_290 = (long *)0x0;
    uStack_298 = 0;
    plStack_288 = (long *)0x0;
    bStack_25e = puVar4[0x1a];
    bStack_25d = puVar4[0x1b];
    uStack_270 = 8;
    uStack_260 = 0x100;
    ppuStack_278 = &PTR_DAT_110864b38;
    lStack_228 = 0;
    lStack_230 = 0;
    plStack_218 = (long *)0x0;
    uStack_220 = 0;
    plStack_210 = (long *)0x0;
    bStack_106 = (byte)uStack_176 | bStack_25e;
    bStack_105 = uStack_176._1_1_ & bStack_25d;
    uStack_118 = 4;
    uStack_108 = 0x100;
    pppuStack_e8 = &ppuStack_190;
    ppuStack_120 = &PTR_DAT_1108629c8;
    pppuStack_e0 = &ppuStack_278;
    plStack_b8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    lStack_d8 = 0;
    lStack_308 = 0;
    lStack_300 = 0;
    uStack_2f8 = 0;
    uStack_30c = 0;
    puVar5 = &uStack_b0;
    puStack_240 = puVar4;
    pppuStack_238 = &ppuStack_2f0;
    func_0x0001000e77a0(puVar5,&ppuStack_120,&lStack_308,&uStack_30c);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_308 != 0) {
      lStack_300 = lStack_308;
      __ZdlPv();
    }
    plVar1 = plStack_b8;
    ppuStack_120 = &PTR_DAT_1108629c8;
    plStack_b8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_c0;
    plStack_c0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_d8 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_210;
    ppuStack_278 = &PTR_DAT_110864b38;
    plStack_210 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_218;
    plStack_218 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_230 != 0) {
      lStack_228 = lStack_230;
      __ZdlPv();
    }
    plVar1 = plStack_288;
    ppuStack_2f0 = &PTR_DAT_110864b98;
    plStack_288 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_290;
    plStack_290 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_2a8 != 0) {
      lStack_2a0 = lStack_2a8;
      __ZdlPv();
    }
    plVar1 = plStack_128;
    ppuStack_190 = &PTR_SUB_110862700;
    plStack_128 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_130;
    plStack_130 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_278 = &puStack_148;
    func_0x000100105004(&ppuStack_278);
    plVar1 = plStack_1a0;
    ppuStack_208 = &PTR_DAT_110862760;
    plStack_1a0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_1a8;
    plStack_1a8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_278 = &puStack_1c0;
    func_0x000100105004(&ppuStack_278);
    _objc_release(lStack_1d8);
    func_0x0001000e76e0(&uStack_88);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(lVar2);
    puVar6 = puVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (puVar6 == (undefined8 *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar7 = puVar6;
      func_0x00010bfe7300(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14d040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      if (puVar8 != (undefined *)0x0) {
        _objc_retain(puVar8);
      }
      _objc_release(puVar8);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106bb4a60; end: 106bb4b0b;  */

double FUN_106bb4a60(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c0b5020(param_2,param_3,&PTR____CFConstantStringClassReference_110e76fd8,0x93a80,0);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  _objc_release(param_2);
  return param_1 - (double)lVar1;
}



/* Entry: 106bb4b0c; end: 106bb4cc7; -[SCPreviewCarouselIconDocObjectCache setCachedIconForKey:icon:] */

void FUN_106bb4b0c(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((param_5 != 0) && (lVar1 != 0)) {
    puVar2 = PTR_PTR_1126d0ef8;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    lVar1 = param_5;
    _UIImagePNGRepresentation(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0130a0(puVar2,param_3,param_4,(long)param_1,lVar1);
    _objc_release(lVar1);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106bb4cc8;
    puStack_60 = &UNK_11084f688;
    _objc_retain(puVar2);
    puStack_58 = puVar2;
    func_0x00010c0f8500(uVar4,param_3,&puStack_78,0,0);
    _objc_release(uVar4);
    _objc_release(puStack_58);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106bb4cc8; end: 106bb4d53;  */

void FUN_106bb4cc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_106bb6020(uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bb4d54; end: 106bb4e2f; -[SCPreviewCarouselIconDocObjectCache _pruneCache] */

void FUN_106bb4d54(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106bb4e30; end: 106bb519f;  */

void FUN_106bb4e30(double param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x21;
  undefined8 *puVar7;
  undefined4 uStack_224;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    _objc_opt_class(PTR_PTR_1126d0ef8);
    if (param_3 == 0) {
      uStack_f0 = 0;
      param_1 = 0.0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_120,param_3);
    }
    puVar2 = &uStack_191;
    FUN_106bb5880();
    FUN_106bb4a60(*(undefined8 *)(param_2 + 0x10));
    lStack_1d8 = (long)param_1;
    uStack_200 = 0xf;
    uStack_1f0 = 0x100;
    ppuStack_208 = &PTR_DAT_110864b98;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    lStack_1b8 = 0;
    lStack_1c0 = 0;
    plStack_1a8 = (long *)0x0;
    uStack_1b0 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_176 = *(undefined2 *)(puVar2 + 0x1a);
    uStack_188 = 6;
    uStack_178 = 0x100;
    ppuStack_190 = &PTR_DAT_110864b38;
    pppuStack_150 = &ppuStack_208;
    lStack_140 = 0;
    lStack_148 = 0;
    plStack_130 = (long *)0x0;
    uStack_138 = 0;
    plStack_128 = (long *)0x0;
    lStack_220 = 0;
    lStack_218 = 0;
    uStack_210 = 0;
    uStack_224 = 0;
    unaff_x21 = &uStack_120;
    puStack_158 = puVar2;
    func_0x0001000e77a0(unaff_x21,&ppuStack_190,&lStack_220,&uStack_224);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_220 != 0) {
      lStack_218 = lStack_220;
      __ZdlPv();
    }
    plVar1 = plStack_128;
    ppuStack_190 = &PTR_DAT_110864b38;
    plStack_128 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_130;
    plStack_130 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_148 != 0) {
      lStack_140 = lStack_148;
      __ZdlPv();
    }
    plVar1 = plStack_1a0;
    ppuStack_208 = &PTR_DAT_110864b98;
    plStack_1a0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_1a8;
    plStack_1a8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_1c0 != 0) {
      lStack_1b8 = lStack_1c0;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_f8);
    _objc_release(uStack_108);
    _objc_release(uStack_110);
    _objc_retain(unaff_x21);
    puVar3 = unaff_x21;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (puVar3 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(unaff_x21);
        }
        puVar4 = PTR_PTR_1126d0f00;
        FUN_106bb5fac(PTR_PTR_1126d0f00,*(undefined8 *)((long)puVar7 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar7 = (undefined8 *)((long)puVar7 + 1);
      } while (puVar3 != puVar7);
      puVar3 = unaff_x21;
      func_0x00010bf52a60();
    }
    _objc_release(unaff_x21);
    _objc_release(unaff_x21);
  }
  _objc_release(param_2);
  lVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x21);
  _objc_release(unaff_x21);
  _objc_release(param_2);
  _objc_release(param_3);
  __Unwind_Resume();
  uVar6 = *(undefined8 *)(lVar5 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 106bb51a0; end: 106bb51f7; -[SCPreviewCarouselIconDocObjectCache _clearCache] */

void FUN_106bb51a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bb51f8; end: 106bb540f;  */

void FUN_106bb51f8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 uStack_12c;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d0ef8);
  if (param_2 == 0) {
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_110,param_2);
  }
  lStack_128 = 0;
  lStack_120 = 0;
  uStack_118 = 0;
  uStack_12c = 0;
  puVar1 = &uStack_110;
  func_0x00010054c81c(puVar1,&lStack_128,&uStack_12c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_128 != 0) {
    lStack_120 = lStack_128;
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_e8);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_retain(puVar1);
  puVar2 = puVar1;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (puVar2 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(puVar1);
      }
      puVar3 = PTR_PTR_1126d0f00;
      FUN_106bb5fac(PTR_PTR_1126d0f00,*(undefined8 *)((long)puVar5 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar5 = (undefined8 *)((long)puVar5 + 1);
    } while (puVar2 != puVar5);
    puVar2 = puVar1;
    func_0x00010bf52a60();
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  lVar4 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_2);
  __Unwind_Resume(lVar4);
  _objc_storeStrong(lVar4 + 0x18,0);
  _objc_storeStrong(lVar4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar4 + 8,0);
  return;
}



/* Entry: 106bb5410; end: 106bb544b; -[SCPreviewCarouselIconDocObjectCache .cxx_destruct] */

void FUN_106bb5410(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bb544c; end: 106bb551b; -[SCPreviewCarouselIconCacheItem initWithFilterId:creationTimestamp:imageData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106bb544c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f5758;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112759bd4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112759bd4) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112759bd8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112759bdc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112759bdc) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bb551c; end: 106bb553f; -[SCPreviewCarouselIconCacheItem copyWithZone:] */

undefined8 FUN_106bb551c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106bb5540; end: 106bb55c7; -[SCPreviewCarouselIconCacheItem hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106bb5540(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112759bd4);
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + _DAT_112759bd8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112759bdc);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106bb5670:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106bb567c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (*(long *)((long)puVar3 + (long)_DAT_112759bd8) == *(long *)(param_3 + _DAT_112759bd8))) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112759bd4);
      if ((lVar5 == *(long *)(param_3 + _DAT_112759bd4)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
         ) {
        puVar6 = *(undefined1 **)((long)puVar3 + (long)_DAT_112759bdc);
        if (puVar6 != *(undefined1 **)(param_3 + _DAT_112759bdc)) {
          func_0x00010c071ae0();
          goto LAB_106bb567c;
        }
        goto LAB_106bb5670;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106bb567c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106bb55c8; end: 106bb5697; -[SCPreviewCarouselIconCacheItem isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106bb55c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106bb5670:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106bb567c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (*(long *)(param_1 + (long)_DAT_112759bd8) == *(long *)(param_3 + (long)_DAT_112759bd8))) {
      lVar3 = *(long *)(param_1 + (long)_DAT_112759bd4);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112759bd4)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_112759bdc);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_112759bdc)) {
          func_0x00010c071ae0();
          goto LAB_106bb567c;
        }
        goto LAB_106bb5670;
      }
    }
    lVar3 = 0;
  }
LAB_106bb567c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106bb5698; end: 106bb56a7; -[SCPreviewCarouselIconCacheItem filterId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106bb5698(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759bd4);
}



/* Entry: 106bb56a8; end: 106bb56b7; -[SCPreviewCarouselIconCacheItem creationTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106bb56a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759bd8);
}



/* Entry: 106bb56b8; end: 106bb56c7; -[SCPreviewCarouselIconCacheItem imageData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106bb56b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112759bdc);
}



/* Entry: 106bb56c8; end: 106bb5707; -[SCPreviewCarouselIconCacheItem .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb56c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112759bdc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112759bd4,0);
  return;
}



/* Entry: 106bb5708; end: 106bb576b;  */

undefined ** FUN_106bb5708(void)

{
  int iVar1;
  
  if ((bRam000000011381e598 & 1) == 0) {
    iVar1 = 0x1381e598;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113175f08,0x100000000);
      ___cxa_guard_release(0x11381e598);
    }
  }
  return &PTR_PTR_113175f08;
}



/* Entry: 106bb576c; end: 106bb57f3;  */

void FUN_106bb576c(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bb57f4; end: 106bb587f;  */

void FUN_106bb57f4(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bfadea0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bb5880; end: 106bb593b;  */

undefined8 FUN_106bb5880(void)

{
  int iVar1;
  
  if ((bRam000000011381e610 & 1) == 0) {
    iVar1 = 0x1381e610;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381e5a8 = 0xe;
      puRam000000011381e5b0 = &UNK_10f3bcf48;
      uRam000000011381e5b8 = 0x1010000;
      pcRam000000011381e5c0 = FUN_106bb593c;
      pcRam000000011381e5c8 = FUN_106bb5974;
      ppuRam000000011381e5a0 = &PTR_DAT_110864b98;
      uRam000000011381e5e0 = 0;
      uRam000000011381e5d8 = 0;
      uRam000000011381e5f0 = 0;
      uRam000000011381e5e8 = 0;
      uRam000000011381e600 = 0;
      uRam000000011381e5f8 = 0;
      uRam000000011381e608 = 0;
      ___cxa_atexit(&DAT_105077cd4,0x11381e5a0,0x100000000);
      ___cxa_guard_release(0x11381e610);
    }
  }
  return 0x11381e5a0;
}



/* Entry: 106bb593c; end: 106bb5973;  */

undefined8 FUN_106bb593c(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 106bb5974; end: 106bb59c7;  */

undefined8 FUN_106bb5974(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010bf5ab40(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106bb59c8; end: 106bb59d3; +[SCPreviewCarouselIconCacheItem table] */

undefined * FUN_106bb59c8(void)

{
  return &UNK_10f3bcf5a;
}



/* Entry: 106bb59d4; end: 106bb5b33; +[SCPreviewCarouselIconCacheItem immutableObjectParse:bufferSize:] */

void FUN_106bb59d4(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126d0ef8;
  _objc_alloc(PTR_PTR_1126d0ef8);
  lVar5 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar3 < 5) {
    puVar7 = (undefined *)0x0;
LAB_106bb5a84:
    uVar8 = 0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar1 - lVar5))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar5);
    }
    if (uVar3 < 7) goto LAB_106bb5a84;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar5));
    if (uVar6 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)((long)piVar1 + uVar6);
    }
    if ((8 < uVar3) && (*(short *)((long)piVar1 + (8 - lVar5)) != 0)) {
      puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      goto LAB_106bb5a8c;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_106bb5a8c:
  func_0x00010c0130a0(puVar4,param_2,puVar7,uVar8,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106bb5b34; end: 106bb5b57; +[SCPreviewCarouselIconCacheItem objectClassFunctionPointer] */

undefined1  [16] FUN_106bb5b34(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x106bb5b50;
  auVar1._0_8_ = 0x106bb5b48;
  return auVar1;
}



/* Entry: 106bb5b58; end: 106bb5c33;  */

undefined1 *
FUN_106bb5b58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126f5760;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 106bb5c34; end: 106bb5fab;  */

void FUN_106bb5c34(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010bfadea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar6,&UNK_10f3bcf79);
        if (puVar6 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010bfadea0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar6,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar6;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar6;
            _sqlite3_column_int64(puVar6,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d0ef8);
            _sqlite3_column_blob(puVar6,1);
            _sqlite3_column_bytes(puVar6,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar6);
            if (puVar3 == (undefined *)0x0) goto LAB_106bb5efc;
            puVar6 = PTR_PTR_1126d0f00;
            _objc_alloc(PTR_PTR_1126d0f00);
            puVar2 = puVar3;
            func_0x00010bfadea0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf5ab40(puVar3);
            puVar5 = puVar3;
            func_0x00010bfe7300(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_106bb5b58(puVar6,puVar1,puVar2,puVar4,puVar5);
            param_1 = puVar3;
            goto LAB_106bb5d2c;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar6 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126d0ef8);
      puVar3 = puVar6;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar6);
      if (puVar3 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126d0f00;
        _objc_alloc(PTR_PTR_1126d0f00);
        puVar2 = puVar3;
        func_0x00010bfadea0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf5ab40(puVar3);
        puVar5 = puVar3;
        func_0x00010bfe7300(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_106bb5b58(puVar6,puVar1,puVar2,puVar4,puVar5);
        param_1 = puVar3;
LAB_106bb5d2c:
        _objc_release(puVar5);
        _objc_release(puVar2);
        goto LAB_106bb5f04;
      }
LAB_106bb5efc:
      param_1 = (undefined *)0x0;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_106bb5f04:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106bb5fac; end: 106bb601f;  */

void FUN_106bb5fac(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_106bb5c34();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bb6020; end: 106bb624f;  */

void FUN_106bb6020(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d0f00;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_106bb5c34();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar5 = PTR_PTR_1126d0f00;
    _objc_retain(param_1);
    _objc_opt_self(puVar5);
    puVar5 = PTR_PTR_1126d0f00;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010bfadea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bf5ab40(param_1);
      puVar4 = param_1;
      func_0x00010bfe7300(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_106bb5b58(puVar5,0xffffffffffffffff,puVar2,puVar3,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar5 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar5 = param_1;
    func_0x00010bfadea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar5);
    puVar5 = param_1;
    func_0x00010bf5ab40();
    *(undefined **)(puVar1 + 0x20) = puVar5;
    puVar5 = param_1;
    func_0x00010bfe7300(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar5);
    _objc_retain(puVar1);
    puVar5 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106bb6250; end: 106bb62b3;  */

void FUN_106bb6250(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126d0ef8;
    _objc_alloc(PTR_PTR_1126d0ef8);
    func_0x00010c0130a0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bb62b4; end: 106bb62e3; -[SCPreviewCarouselIconCacheItemChangeRequest .cxx_destruct] */

void FUN_106bb62b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106bb62e4; end: 106bb62ef; -[SCPreviewCarouselIconCacheItemChangeRequest table] */

undefined * FUN_106bb62e4(void)

{
  return &UNK_10f3bcf5a;
}



/* Entry: 106bb62f0; end: 106bb6337; -[SCPreviewCarouselIconCacheItemChangeRequest createTableWithSQLite:] */

void FUN_106bb62f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dde78c0,0x90,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 106bb6338; end: 106bb66bf; -[SCPreviewCarouselIconCacheItemChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_106bb6338(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_106bb6250(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_106bb66c0(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f3bd001);
    if (lVar6 == 0) goto LAB_106bb665c;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_106bb665c;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d0ef8);
    func_0x00010c21c9a0(puVar7);
LAB_106bb6644:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f3bcfc7);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126d0ef8);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_106bb6668;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_106bb6668;
    }
    FUN_106bb6250(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_106bb66c0(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f3bd04a);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d0ef8);
        func_0x00010c21c9a0(puVar7);
        goto LAB_106bb6644;
      }
    }
LAB_106bb665c:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_106bb6668:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106bb66c0; end: 106bb6933;  */

ulong FUN_106bb66c0(ulong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_2);
  pcVar4 = param_2;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_106bb67c4;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_1;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x0001001cde08(param_1,pcVar5,pcVar6);
    goto LAB_106bb67c4;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_106bb6784;
    uVar9 = 0;
  }
  else {
LAB_106bb6784:
    pcVar7 = pcVar5;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar8 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    pcVar6 = "";
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    func_0x0001001cde08(param_1,pcVar6,pcVar8);
  }
  _objc_release(pcVar5);
LAB_106bb67c4:
  _objc_release(pcVar4);
  pcVar5 = param_2;
  func_0x00010bf5ab40(param_2);
  pcVar6 = param_2;
  func_0x00010bfe7300();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar6 == (char *)0x0) {
    uVar10 = 0;
  }
  else {
    pcVar7 = pcVar6;
    _objc_retainAutorelease(pcVar6);
    func_0x00010bf25f00();
    pcVar8 = pcVar6;
    func_0x00010c08fa60(pcVar6);
    uVar10 = param_1;
    func_0x0001001d1030(param_1,pcVar7,pcVar8);
  }
  _objc_release(pcVar6);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce170(param_1,6,pcVar5,0);
  func_0x0001001ce220(param_1,8,uVar10 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar9 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar6);
  _objc_release(pcVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106bb6934; end: 106bb69a7; -[SCPreviewFeatureCarouselServices initWithCarousel:] */

undefined1 * FUN_106bb6934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5768;
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



/* Entry: 106bb69a8; end: 106bb69af; -[SCPreviewFeatureCarouselServices carousel] */

undefined8 FUN_106bb69a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106bb69b0; end: 106bb69bb; -[SCPreviewFeatureCarouselServices .cxx_destruct] */

void FUN_106bb69b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bb69bc; end: 106bb6a2f; -[SCSnapEditorCarouselServices initWithCarousel:] */

undefined1 * FUN_106bb69bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5770;
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



/* Entry: 106bb6a30; end: 106bb6a37; -[SCSnapEditorCarouselServices carousel] */

undefined8 FUN_106bb6a30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106bb6a38; end: 106bb6a43; -[SCSnapEditorCarouselServices .cxx_destruct] */

void FUN_106bb6a38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bb6a44; end: 106bb6af7; -[SCPreviewCarouselItem initWithFilterId:filterType:displayName:] */

undefined1 *
FUN_106bb6a44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f5778;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bb6af8; end: 106bb6b1b; -[SCPreviewCarouselItem copyWithZone:] */

undefined8 FUN_106bb6af8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106bb6b1c; end: 106bb6b93; -[SCPreviewCarouselItem hash] */

undefined8 * FUN_106bb6b1c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106bb6c24:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106bb6c30;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106bb6c30;
        }
        goto LAB_106bb6c24;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106bb6c30:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106bb6b94; end: 106bb6c4b; -[SCPreviewCarouselItem isEqual:] */

long FUN_106bb6b94(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106bb6c24:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106bb6c30;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106bb6c30;
        }
        goto LAB_106bb6c24;
      }
    }
    lVar3 = 0;
  }
LAB_106bb6c30:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106bb6c4c; end: 106bb6c53; -[SCPreviewCarouselItem filterId] */

undefined8 FUN_106bb6c4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106bb6c54; end: 106bb6c5b; -[SCPreviewCarouselItem filterType] */

undefined8 FUN_106bb6c54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106bb6c5c; end: 106bb6c63; -[SCPreviewCarouselItem displayName] */

undefined8 FUN_106bb6c5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106bb6c64; end: 106bb6c93; -[SCPreviewCarouselItem .cxx_destruct] */

void FUN_106bb6c64(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bb6c94; end: 106bb6d5f; -[SCAdReportLegacyUnlockableEventTracker initWithTracker:userTrackedLogger:unlockableId:] */

undefined1 *
FUN_106bb6c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f5780;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bb6d60; end: 106bb6d63; -[SCAdReportLegacyUnlockableEventTracker trackDidShowReportAd] */

void FUN_106bb6d60(void)

{
  return;
}



/* Entry: 106bb6d64; end: 106bb6dd3; -[SCAdReportLegacyUnlockableEventTracker trackDidSubmitReportWithReasonId:flagNote:] */

void FUN_106bb6d64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c277de0(uVar1,param_2,uVar2,param_3,param_4);
  func_0x00010be4ff60(param_1,param_2,1,param_3,*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bb6dd4; end: 106bb6e13; -[SCAdReportLegacyUnlockableEventTracker trackDidCancelReport] */

void FUN_106bb6dd4(long param_1,undefined8 param_2)

{
  func_0x00010c277de0(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x18),0,0);
                    /* WARNING: Could not recover jumptable at 0x00010be4ff70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logAdUnlockableReportWithDidSub_112571978,0,0,
             *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 106bb6e14; end: 106bb6edf; -[SCAdReportLegacyUnlockableEventTracker _logAdUnlockableReportWithDidSubmit:reasonId:unlockableId:] */

void FUN_106bb6e14(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c9fd0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126c9f38;
  func_0x00010bf1d040(PTR_PTR_1126c9f38,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c163640(puVar1,param_2,puVar2);
  func_0x00010c198620(puVar1,param_2,param_3);
  func_0x00010c21bbe0(puVar1,param_2,param_5);
  _objc_release(param_5);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bb6ee0; end: 106bb6f1b; -[SCAdReportLegacyUnlockableEventTracker .cxx_destruct] */

void FUN_106bb6ee0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bb6f1c; end: 106bb6f33; -[SCUnlockableTrackerConfigImpl isUnlockableViewSpectrumMigrationEnabled] */

void FUN_106bb6f1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e77ad8,0,0);
  return;
}



/* Entry: 106bb6f34; end: 106bb6f4b; -[SCUnlockableTrackerConfigImpl shouldRemoveAdTrackerViewTrack] */

void FUN_106bb6f34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e77af8,0,0);
  return;
}



/* Entry: 106bb6f4c; end: 106bb6f63; -[SCUnlockableTrackerConfigImpl isAdTrackSpectrumMigrationEnabled] */

void FUN_106bb6f4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e77b18,0,0);
  return;
}



/* Entry: 106bb6f64; end: 106bb6f7b; -[SCUnlockableTrackerConfigImpl isAdTrackSpectrumShadowMigrationEnabled] */

void FUN_106bb6f64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e77b38,0,0);
  return;
}



/* Entry: 106bb6f7c; end: 106bb6f93; -[SCUnlockableTrackerConfigImpl isAdTrackerPrimaryTrackRequestDisabled] */

void FUN_106bb6f7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e77b58,0,0);
  return;
}



/* Entry: 106bb6f94; end: 106bb6ff7; -[SCUnlockableTrackerConfigImpl adTrackSpectrumMigrationInventoryAllowlist] */

void FUN_106bb6f94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c25d780(uVar1,param_2,&PTR____CFConstantStringClassReference_110e77b78,
                      &PTR____CFConstantStringClassReference_110daafd8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106bb6ff8; end: 106bb700f; -[SCUnlockableTrackerConfigImpl enableImmediateAdFlagReport] */

void FUN_106bb6ff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e77b98,0,0);
  return;
}



/* Entry: 106bb7010; end: 106bb701b; -[SCUnlockableTrackerConfigImpl .cxx_destruct] */

void FUN_106bb7010(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bb701c; end: 106bb709f; -[SCUnlockableLensImpressionTrackInfo initWithInteraction:loggingState:] */

undefined1 *
FUN_106bb701c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f5790;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bb70a0; end: 106bb70a7; -[SCUnlockableLensImpressionTrackInfo interaction] */

undefined8 FUN_106bb70a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106bb70a8; end: 106bb70af; -[SCUnlockableLensImpressionTrackInfo lensImpressionLoggingState] */

undefined4 FUN_106bb70a8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 106bb70b0; end: 106bb70bb; -[SCUnlockableLensImpressionTrackInfo .cxx_destruct] */

void FUN_106bb70b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bb70bc; end: 106bb70cf; -[SCUnlockableLensTracker setLensProductDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb70bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112759c44,param_3);
  return;
}



/* Entry: 106bb70d0; end: 106bb70ff; -[SCUnlockableLensTracker startWithSessionId:lensSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb70d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c1fda20();
  *(undefined8 *)(param_1 + _DAT_112759c20) = param_4;
  return;
}



/* Entry: 106bb7100; end: 106bb710f; -[SCUnlockableLensTracker setCarouselExitEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb7100(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112759c28) = param_3;
  return;
}



/* Entry: 106bb7110; end: 106bb715f; -[SCUnlockableLensTracker _resetLensImpressionState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb7110(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112759c48);
  *(undefined8 *)(param_1 + _DAT_112759c48) = 0;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126d0f08;
  _objc_opt_new();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112759c30);
  *(undefined **)(param_1 + _DAT_112759c30) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bb7160; end: 106bb72bf; -[SCUnlockableLensTracker addPostCaptureInteraction:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb7160(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  puVar4 = PTR_s_addPostCaptureInteraction_forKey_11259c458;
  puStack_58 = PTR_PTR_1126f5798;
  lStack_60 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_60,puVar4,param_3,param_4);
  func_0x00010c2967e0(param_1);
  lVar7 = (long)_DAT_112759c48;
  uVar1 = *(ulong *)(param_1 + lVar7);
  func_0x00010c068380();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2810a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    puVar4 = PTR_PTR_1126c8c40;
    _objc_opt_new(PTR_PTR_1126c8c40);
    func_0x00010c21bbe0();
    puVar5 = PTR_PTR_1126d0f10;
    _objc_alloc();
    func_0x00010c01e620();
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar5;
    _objc_release(uVar6);
    _objc_release(puVar4);
  }
  puVar4 = PTR_PTR_1126d0f18;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c068380(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103cc0(puVar4);
  _objc_release(param_3);
  _objc_release(uVar6);
  _objc_release(param_4);
  return;
}



/* Entry: 106bb72c0; end: 106bb746f; -[SCUnlockableLensTracker endSessionWithCommonLoggingParameters:appliedUnlockableIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb72c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112759c44;
  _objc_retain(param_4);
  lVar3 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c0977a0();
  _objc_release(lVar3);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106bb7470;
  puStack_60 = &UNK_110965578;
  uVar1 = param_4;
  lStack_58 = param_1;
  func_0x00010c0b8620(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar2;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x106bb750c;
  puStack_88 = &UNK_1109655e8;
  lStack_80 = param_1;
  func_0x00010bf97e80();
  _objc_release(uVar1);
  puStack_a8 = PTR_PTR_1126f5798;
  lStack_b0 = param_1;
  _objc_msgSendSuper2(&lStack_b0,PTR_s_endSessionWithCommonLoggingParam_1125c2ec8,param_3,param_4);
  func_0x00010c2967e0(param_1);
  lVar3 = param_1;
  func_0x00010beb3cc0();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126d0f28;
  if ((int)lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112759c48);
    func_0x00010c068380(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1047a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010be17920(param_1);
    _objc_release(puVar2);
  }
  func_0x00010be93180(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 106bb7470; end: 106bb761b;  */

void FUN_106bb7470(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c068a40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126c8c40;
  _objc_opt_class(PTR_PTR_1126c8c40);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106bb761c; end: 106bb7a8f; -[SCUnlockableLensTracker didExitLensWithInteractionInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106bb761c(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar14 = param_3;
  func_0x00010c2810a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar14;
  func_0x00010c08fa60();
  _objc_release(uVar14);
  if (uVar3 != 0) {
    uVar14 = param_3;
    func_0x00010c2810a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c276de0(param_3);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar14);
    uVar14 = param_3;
    func_0x00010c2810a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar14;
    func_0x00010c0720c0();
    _objc_release(uVar14);
    if ((uVar3 & 1) == 0) {
      uVar3 = param_3;
      func_0x00010bf51e00();
      puVar4 = PTR_PTR_1126c8c40;
      _objc_opt_class(PTR_PTR_1126c8c40);
      uVar6 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      uVar14 = uVar3;
      if ((uVar6 & 1) == 0) {
        uVar14 = 0;
      }
      _objc_retain(uVar14);
      _objc_release(uVar3);
      if (uVar14 != 0) {
        uVar6 = uVar3;
        func_0x00010c2810a0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2967e0(param_1);
        _objc_release(uVar6);
        lVar16 = param_1;
        func_0x00010be343a0();
        if ((int)lVar16 == 0) {
          bVar1 = false;
        }
        else {
          lVar16 = (long)_DAT_112759c48;
          uVar7 = *(undefined8 *)(param_1 + lVar16);
          func_0x00010c068380();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c2810a0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_3;
          func_0x00010c2810a0(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar8;
          func_0x00010c0720c0();
          _objc_release(uVar6);
          _objc_release(uVar8);
          _objc_release(uVar7);
          if ((int)uVar13 == 0) {
            bVar1 = false;
          }
          else {
            uVar8 = *(undefined8 *)(param_1 + lVar16);
            func_0x00010c068380(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bed9c60(param_1);
            _objc_release(uVar8);
            iVar2 = (int)*(undefined8 *)(param_1 + lVar16);
            func_0x00010c094720();
            bVar1 = iVar2 == 1;
          }
        }
        puVar4 = PTR_PTR_1126d0f10;
        _objc_alloc();
        func_0x00010c01e620();
        uVar8 = *(undefined8 *)(param_1 + _DAT_112759c48);
        *(undefined **)(param_1 + _DAT_112759c48) = puVar4;
        _objc_release(uVar8);
        lVar16 = param_1 + _DAT_112759c44;
        _objc_loadWeakRetained(lVar16);
        func_0x00010c0977a0();
        _objc_release(lVar16);
        func_0x00010be179c0(param_1);
        if (bVar1) {
          uVar6 = uVar3;
          func_0x00010bf0cf40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar3;
          func_0x00010c2810a0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb0080(param_1);
          _objc_release(uVar9);
          _objc_release(uVar6);
        }
        puVar4 = PTR_PTR_1126b8d98;
        func_0x00010c097e80(PTR_PTR_1126b8d98);
        _objc_retainAutoreleasedReturnValue();
        lVar16 = param_1;
        func_0x00010bfcdec0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar4;
        func_0x00010c2ac460(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(lVar16);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c07c360(uVar3);
        func_0x00010c0df6e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar4;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar10;
        func_0x00010c2ac460(puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(puVar11);
        _objc_release(puVar4);
        uVar13 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c269d40(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar13;
        func_0x00010bef2aa0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec2a0();
        _objc_release(uVar8);
        _objc_release(uVar13);
        _objc_release(puVar12);
      }
      _objc_release(uVar14);
    }
    _objc_release(puVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    lVar15 = *(long *)(param_3 + (long)_DAT_112759c48);
    uVar14 = 0;
    if (lVar15 != 0) {
      func_0x00010c094720();
      uVar14 = (ulong)((int)lVar15 != 2);
    }
    return uVar14;
  }
  return param_3;
}



/* Entry: 106bb7a90; end: 106bb7abb; -[SCUnlockableLensTracker _hasPendingLensInteraction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106bb7a90(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112759c48);
  bVar1 = false;
  if (lVar2 != 0) {
    func_0x00010c094720();
    bVar1 = (int)lVar2 != 2;
  }
  return bVar1;
}



/* Entry: 106bb7abc; end: 106bb7b9f; -[SCUnlockableLensTracker _fireMostRecentLensImpression] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb7abc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126d0f28;
  lVar6 = (long)_DAT_112759c48;
  lVar1 = *(long *)(param_1 + lVar6);
  if (lVar1 != 0) {
    func_0x00010c068380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0929c0(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010be17920(param_1,param_2,puVar2);
    puVar3 = PTR_PTR_1126d0f10;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c068380(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01e620(puVar3,param_2,uVar4,2);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106bb7ba0; end: 106bb7c5f; -[SCUnlockableLensTracker _fireLensExitImpression:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb7ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112759c30);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2810a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15e6a0(uVar3,param_2,uVar1,1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c2813a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef4d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be178a0(param_1,param_2,param_3,uVar2,uVar3);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bb7c60; end: 106bb7cd3; -[SCUnlockableLensTracker grapheneLensTypeStringFromInteraction:] */

undefined ** FUN_106bb7c60(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be43f80(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010be42440(param_1,param_2,param_3);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e77c18;
    if ((int)param_1 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e77c38;
    }
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e77bf8;
  }
  _objc_release(param_3);
  return ppuVar2;
}



/* Entry: 106bb7cd4; end: 106bb7de7; -[SCUnlockableLensTracker addInteraction:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb7cd4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bed4ac0(param_1);
  func_0x00010bf76020(param_1);
  lVar5 = (long)_DAT_112759c24;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = param_4;
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c8c40;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar4 = uVar1;
  func_0x00010c2a8920();
  if (((int)uVar4 != 0) && (uVar4 = uVar1, func_0x00010c07de20(), (int)uVar4 != 0)) {
    func_0x00010c225ca0(uVar1);
  }
  puStack_38 = PTR_PTR_1126f5798;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_addInteraction_forKey__11259bec0,param_3,param_4);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106bb7de8; end: 106bb7ef7; -[SCUnlockableLensTracker flipCameraForLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb7de8(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = param_1;
    func_0x00010c068a40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126c8c40;
    _objc_opt_class(PTR_PTR_1126c8c40);
    puVar3 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar1);
    puVar1 = puVar2;
    if (((ulong)puVar3 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar2);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR_PTR_1126c8c40;
      _objc_opt_new(PTR_PTR_1126c8c40);
      func_0x00010c21bbe0();
      puVar1 = param_1;
      func_0x00010c068a40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(puVar1);
    }
    func_0x00010c1afc60(puVar2);
    lVar5 = (long)_DAT_112759c24;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(long *)(param_1 + lVar5) = param_3;
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bb7ef8; end: 106bb7f9b; -[SCUnlockableLensTracker validateAndFirePendingInteractionIfNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb7ef8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_1;
  func_0x00010be343a0();
  if ((int)lVar4 != 0) {
    lVar4 = (long)_DAT_112759c48;
    uVar1 = *(ulong *)(param_1 + lVar4);
    func_0x00010c068380();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2810a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      func_0x00010c094720(*(undefined8 *)(param_1 + lVar4));
      func_0x00010be179c0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bb7f9c; end: 106bb8227; -[SCUnlockableLensTracker trackProductImpressions:forLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb7f9c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c068a40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c8c40;
  _objc_opt_class(PTR_PTR_1126c8c40);
  puVar3 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar1);
  puVar1 = puVar2;
  if (((ulong)puVar3 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126c8c40;
    _objc_opt_new();
    func_0x00010c21bbe0();
    puVar1 = param_1;
    func_0x00010c068a40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar1);
  }
  puVar1 = puVar2;
  func_0x00010c2810a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2967e0(param_1);
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010be343a0();
  if ((int)puVar1 != 0) {
    uVar4 = *(ulong *)(param_1 + _DAT_112759c48);
    func_0x00010c068380();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c2810a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0720c0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((uVar6 & 1) != 0) goto LAB_106bb8140;
  }
  puVar1 = PTR_PTR_1126c8c40;
  _objc_opt_new(PTR_PTR_1126c8c40);
  func_0x00010c21bbe0();
  puVar3 = PTR_PTR_1126d0f10;
  _objc_alloc();
  func_0x00010c01e620();
  uVar7 = *(undefined8 *)(param_1 + _DAT_112759c48);
  *(undefined **)(param_1 + _DAT_112759c48) = puVar3;
  _objc_release(uVar7);
  _objc_release(puVar1);
LAB_106bb8140:
  uVar7 = *(undefined8 *)(param_1 + _DAT_112759c24);
  *(undefined8 *)(param_1 + _DAT_112759c24) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar7);
  puVar1 = puVar2;
  func_0x00010c115fa0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be63380(param_1);
  func_0x00010c1e3c60(puVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_retain(puVar2);
  func_0x00010bf97e80(param_3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106bb8228; end: 106bb8287;  */

void FUN_106bb8228(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d0f20;
  func_0x00010c281120(PTR_PTR_1126d0f20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bcac0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bb8288; end: 106bb831f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bb8288(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  func_0x00010bf087a0(*(undefined8 *)(param_1 + 0x20));
  lVar3 = (long)_DAT_112759c48;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010c068380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + lVar3);
    func_0x00010c068380(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf087a0(lVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bb8320; end: 106bb8473; -[SCUnlockableLensTracker applyProductInteraction:toLensInteraction:] */

void FUN_106bb8320(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c115fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c115e60(param_3);
  func_0x00010c0df7c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    lVar4 = param_1;
    func_0x00010bdf1f40(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be63340(param_1,param_2,lVar4,param_3);
  lVar1 = param_4;
  func_0x00010c115fa0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c115e60(param_3);
  func_0x00010c0df7c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(lVar1,param_2,param_1,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


